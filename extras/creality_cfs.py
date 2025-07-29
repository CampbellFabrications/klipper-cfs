"""
Creality File System (CFS) Protocol Implementation

This module provides classes and utilities for communicating with the Creality File System (CFS),
a filament management system used in Creality 3D printers. It implements the binary protocol
used for communication over RS485.
"""

import enum
import serial
import serial.rs485
import logging
from functools import singledispatch
from dataclasses import dataclass, field, fields
from typing import Union, Optional, List, Literal

logger = logging.getLogger(__name__)

@singledispatch
def force_to_bytes(value):
    """
    Convert a value to bytes.

    This is a generic function that dispatches based on the type of the input value.
    If the type is not registered, it raises a ValueError.

    Args:
        value: The value to convert to bytes

    Returns:
        bytes: The value converted to bytes

    Raises:
        ValueError: If the type of value is not registered
    """
    raise ValueError(f"Unknown type: {type(value)}")


@force_to_bytes.register(list)
def _(value):
    """Convert a list to bytes by joining the bytes representation of each element."""
    return b''.join(map(force_to_bytes, value))


@force_to_bytes.register(bytes)
def _(value):
    """Return bytes unchanged."""
    return value


@force_to_bytes.register(str)
def _(value):
    """Convert a string to bytes using UTF-8 encoding."""
    return value.encode()


@force_to_bytes.register(int)
def _(value):
    """Convert an integer to a single byte in big-endian format."""
    return value.to_bytes(1, 'big')


@enum.unique
class Command(enum.IntEnum):
    """
    Command codes used in the CFS protocol.

    These values represent the function codes sent in commands to the CFS.
    """
    CREATE_CONNECT = 0x01
    GET_RFID = 0x02
    GET_REMAIN_LEN = 0x03
    SET_BOX_MODE = 0x04
    GET_BUFFER_STATE = 0x05
    CTRL_MATERIAL_MOTOR_ACTION = 0x06
    CTRL_CONNECTION_MOTOR_ACTION = 0x07
    GET_FILAMENT_SENSOR_STATE = 0x08
    SET_MOTOR_SPEED = 0x09
    GET_BOX_STATE = 0x0a
    SET_PRE_LOADING = 0x0d
    MEASURING_WHEEL = 0x0e
    TIGHTEN_UP_ENABLE = 0x0f
    EXTRUDE_PROCESS = 0x10
    RETRUDE_PROCESS = 0x11
    EXTRUDE_PROCESS_MODEL2 = 0x13
    GET_VERSION_SN = 0x14
    GET_HARDWARE_STATUS = 0x15
    COMMUNICATION_TEST = 0x55

    # Auto address acquisition related commands
    CMD_GET_SLAVE_INFO = 0xA1
    CMD_SET_SLAVE_ADDR = 0xA0
    CMD_ONLINE_CHECK = 0xA2
    CMD_GET_ADDR_TABLE = 0xA3
    CMD_LOADER_TO_APP = 0x0B


@enum.unique
class ResponseState(enum.IntEnum):
    """
    Response state codes used in the CFS protocol.

    These values represent the status codes returned in responses from the CFS.
    """
    OK = 0x00
    PARAMS_ERR = 0x01
    CRC_ERR = 0x02
    STATE_ERR = 0x03
    LENGTH_ERR = 0x04
    EXTRUDE_ERR1 = 0x05
    EXTRUDE_ERR4 = 0x08
    EXTRUDE_ERR5 = 0x09
    EXTRUDE_ERR6 = 0x0a
    EXTRUDE_ERR7 = 0x0b
    EXTRUDE_ERR8 = 0x0c
    EXTRUDE_ERR9 = 0x0e
    EXTRUDE_ERR10 = 0x0d
    RETRUDE_ERR1 = 0x12
    RETRUDE_ERR2 = 0x13
    RETRUDE_ERR3 = 0x14
    RETRUDE_ERR4 = 0x15
    RETRUDE_ERR5 = 0x16
    RETRUDE_ERR6 = 0x19
    RETRUDE_ERR7 = 0x1a
    MOTOR_LOAD_ERR = 0x22
    UPDATE_STATE = 0x30
    FILAMENT_ERR = 0x50
    SPEED_ERR = 0x51
    ENWIND_ERR = 0x52

@enum.unique
class BroadcastAddress(enum.IntEnum):
    """
    Packet Command codes used in the CFS protocol.

    These values represent the Function codes used in commands to the CFS.
    MB corresponds to Material Box
    CLM corresponds to the Closed Loop Motors
    BTM corresponds to the Belt Tensioning Motors
    """
    BROADCAST_ADDR = 0xFF
    BROADCAST_ADDR_MB = 0xFE
    BROADCAST_ADDR_CLM = 0xFD
    BROADCAST_ADDR_BTM = 0xFC

@enum.unique
class AutomaticAddress(enum.IntEnum):
    """
    Packet Command codes used in the CFS protocol.

    These values represent the Automatic Addressing Function codes used in commands to the CFS.
    """
    CMD_GET_SLAVE_INFO = 0xA1
    CMD_SET_SLAVE_ADDR = 0xA0
    CMD_ONLINE_CHECK = 0xA2
    CMD_GET_ADDR_TABLE = 0xA3
    CMD_LOADER_TO_APP = 0x0B

class CRC8Structure:
    """
    Base class for structures that use CRC8 checksums.

    Provides methods for calculating and validating CRC8 checksums.
    """

    @staticmethod
    def _calc_crc8(_data: bytes):
        """
        Calculate the CRC8 checksum for the given data.

        Args:
            _data: The data to calculate the checksum for

        Returns:
            int: The calculated CRC8 checksum
        """
        crc = 0
        for byte in _data:
            crc ^= byte
            for _ in range(8):
                crc = ((crc << 1) ^ 0x07 if crc & 0x80 else crc << 1) & 0xFF

        return crc

    @staticmethod
    def check_crc8(_data: bytes, _crc: int = 0):
        """
        Verify that the calculated CRC8 checksum matches the expected value.

        Args:
            _data: The data to calculate the checksum for
            _crc: The expected CRC8 checksum

        Raises:
            ValueError: If the calculated checksum doesn't match the expected value
        """
        crc = CRC8Structure._calc_crc8(_data)
        if crc != _crc:
            raise ValueError(f"Invalid CRC8 checksum. {crc} != {_crc}")


# removed kw_only and slots parameter as unsupported in 3.9
@dataclass(order=True, frozen=True)
class DataPackage(CRC8Structure):
    """
    Represents a data package in the CFS protocol.

    This class handles the parsing and construction of CFS protocol messages.
    """

    head: int = field(default=0xF7)
    slave_addr: Union[
        int,
        Literal[
            0x01,  # First material box address
            0x02,
            0x03,
            0x04,
            0xFE,  # Broadcast address for all boxes
            0xFF   # Broadcast address for all devices
        ],
    ] = field(default=None)
    length: int = field(default=None)
    status: int = field(default=None)
    function_code: int = field(default=None)
    # noinspection PyDataclass
    data: list[bytes] = field(default_factory=list)
    crc: int = field(default=0)

    def __post_init__(self):
        """
        Validate the CRC8 checksum after initialization.

        Raises:
            ValueError: If the CRC8 checksum is invalid
        """
        self.check_crc8(
            # crc uses only length, status, function_code and data
            self.message_block[2:-1],
            self.crc
        )

    @property
    def message_block(self):
        """
        Get the complete message as bytes.

        Returns:
            bytes: The complete message
        """
        return b''.join(
            force_to_bytes(getattr(self, f.name))
            for f in fields(self)
        )

    @classmethod
    def loads(cls, value: bytes):
        """
        Parse a bytes object into a DataPackage.

        Args:
            value: The bytes to parse

        Returns:
            DataPackage: The parsed data package
        """
        (
            head,
            slave_addr,
            length,
            status,
            function_code,
            *data,
            crc,
        ) = value

        return cls(
            head=head,
            slave_addr=slave_addr,
            length=length,
            status=status,
            function_code=function_code,
            data=data,
            crc=crc,
        )

    def __hash__(self):
        """
        Calculate a hash value for the data package.

        Returns:
            int: The hash value
        """
        return hash(self.message_block)

    def __repr__(self):
        """
        Get a string representation of the data package.

        Returns:
            str: A string representation of the data package
        """
        fn = self.function_code
        if self.function_code in list(Command):
            fn = Command(self.function_code).name

        status = self.status
        if self.status in list(ResponseState):
            status = ResponseState(self.status)

        return (
            f"<DataPackage: "
            f"slave_addr={self.slave_addr} "
            f"fn={fn} "
            f"st={status} "
            f"msg={b''.join(map(force_to_bytes, self.data)).hex()}>"
        )

# removed kw_only and slots parameter as unsupported in 3.9
@dataclass(order=True, frozen=True)
class MessageBlock(CRC8Structure):
    """
    Represents a message block in the CFS protocol.

    This class is used for simpler message structures that don't have the full
    DataPackage format.
    """

    head: int = field(default=0xF7)  # always 0xF7
    length: int = field(default=0)
    payload: list[bytes] = field(default_factory=list)
    crc: int = field(default=0)

    @classmethod
    def loads(cls, value: bytes):
        """
        Parse a bytes object into a MessageBlock.

        Args:
            value: The bytes to parse

        Returns:
            MessageBlock: The parsed message block
        """
        (
            head,
            length,
            *payload,
            crc,
        ) = value

        return cls(
            head=head,
            length=length,
            payload=payload,
            crc=crc,
        )

    @property
    def message_block(self):
        """
        Get the complete message as bytes.

        Returns:
            bytes: The complete message
        """
        return b''.join(
            force_to_bytes(getattr(self, f.name))
            for f in fields(self)
        )

    def __hash__(self):
        """
        Calculate a hash value for the message block.

        Returns:
            int: The hash value
        """
        return hash(self.message_block)

    def __post_init__(self):
        """
        Validate the CRC8 checksum after initialization.

        Raises:
            ValueError: If the CRC8 checksum is invalid
        """
        self.check_crc8(
            # crc uses only length and payload
            self.message_block[2:-1],
            self.crc
        )

    def __repr__(self):
        """
        Get a string representation of the message block.

        Returns:
            str: A string representation of the message block
        """
        return (
            f"<MSGBlock: payload={b''.join(map(force_to_bytes, self.payload)).hex()}>"
        )


# Stub BoxCfg with known expected attributes used across Klipper
class BoxCfg:
    def __init__(self, printer, config):
        
        # Default
        self.printer = printer
        self.config = config
        self.logger = logging.getLogger("extras.creality_cfs.BoxCfg")
        
        self.logger.info("BoxCfg initializing...")

        # Version Control
        self.version = config.getint("version", default=1)
        self.logger.info(f"BoxCfg using version {self.version} as per original [box]")
        level = config.get('log_level', 'error').upper()
        self.logger.setLevel(getattr(logging, level, logging.ERROR))

        # Positional settings
        self.pre_cut_pos_x = config.getfloat("pre_cut_pos_x", default=10.0)
        self.pre_cut_pos_y = config.getfloat("pre_cut_pos_y", default=200.0)
        self.cut_pos_x = config.getfloat("cut_pos_x", default=-6.5) # this one is commented in [box] for some reason
        self.cut_pos_y = config.getfloat("cut_pos_y", default=200.0)
        # self.middle_cut_pos_y = config.getfloat("middle_cut_pos_y", default=0.00) # Recreated as the commented version found within [box]
        self.clean_left_pos_x = config.getfloat("clean_left_pos_x", default=135.0)
        self.clean_left_pos_y = config.getfloat("clean_left_pos_y", default=378.0)
        self.clean_right_pos_x = config.getfloat("clean_right_pos_x", default=160.0)
        self.clean_right_pos_y = config.getfloat("clean_right_pos_y", default=378.0)
        self.clean_velocity = config.getfloat("clean_velocity", default=12000.0)
        self.box_need_clean_length = config.getfloat("box_need_clean_length", default=70.0)
        self.cut_velocity = config.getfloat("cut_velocity", default=30000.0)
        self.extrude_pos_x = config.getfloat("extrude_pos_x", default=133.0)
        self.extrude_pos_y = config.getfloat("extrude_pos_y", default=378.0)
        self.clean_pos_min_x = config.getfloat("clean_pos_min_x", default=152.0)
        self.clean_pos_min_y = config.getfloat("clean_pos_min_y", default=362.0)
        self.clean_pos_max_x = config.getfloat("clean_pos_max_x", default=156.0)
        self.clean_pos_max_y = config.getfloat("clean_pos_max_y", default=368.0)

        # Boolean / flags
        self.enable_heart_process = config.getboolean("enable_heart_process", default=True)
        self.enable_filament_sensor = config.getboolean("enable_filament_sensor", default=True)

        # Material/feed system logic
        self.tn_retrude = config.getint("Tn_retrude", default=-10) # -60 
        self.tn_retrude_velocity = config.getint("Tn_retrude_velocity", default=600) # 360
        self.tn_extrude_temp = config.getint("Tn_extrude_temp", default=220)
        self.tn_extrude = config.getint("Tn_extrude", default=140) # 120
        self.tn_extrude_velocity = config.getint("Tn_extrude_velocity", default=360)

        # these arent defined in box, they are pulled from strings
        self.flush_length = config.getint("flush_length", default=90)
        self.flush_speed = config.getint("flush_speed", default=300)
        self.flush_temperature = config.getint("flush_temperature", default=230)
        self.flush_max_temp = config.getint("flush_max_temp", default=260)
        self.flush_min_temp = config.getint("flush_min_temp", default=180)
        self.flush_type = config.getint("flush_type", default=0)
        self.filament_sensor_type = config.getint("filament_sensor_type", default=1)

        # Filament Buffer Block
        self.buffer_empty_len = config.getint("buffer_empty_len", default=30) # The buffer retraction reserved length is required, and the length reserved for the extrusion buffer is required (the length of the extruder knocking the knife to the extrusion gear)
        
        # Section for Printers with a Flush Area
        #Is there any need to spit out material? Distinguish between K1_MAX and f008 (K2)
        self.has_extrude_pos = config.getint("has_extrude_pos", default=1) # this one needs revisiting
        self.safe_pos_y = config.getfloat("safe_pos_y", default=345)
        self.safe_pos_x = config.getfloat("safe_pos_x", default=225)
        self.clean_pos_left_x = config.getfloat("clean_pos_left_x", default=160.0)
        self.clean_pos_right_x = config.getfloat("clean_pos_right_x", default=170.0)
        self.clean_pos_middle_y = config.getfloat("clean_pos_middle_y", default=374.0)
        self.check_cut_pos_x_max = config.getfloat("check_cut_pos_x_max", default=-5.0)

        
        # Handle switch_pin from [box] as a Klipper pin
        self.switch_pin_str = config.get("switch_pin", None)
        self.switch_pin = None

        # File persistence or state recovery (used in SD virtual saving)
        self.tn_save_data_path = config.get("tn_save_data_path", default="/mnt/UDISK/tn_save_data.json")
        
        printer.register_event_handler("connect", self._on_connect)

        self.logger.info("BoxCfg Registered BOX_SWITCH_READ Command.")
        self.logger.info("BoxCfg initialized with loaded config options.")

    def _on_connect(self):
        try:
            if self.switch_pin_str:
                self.switch_pin = self.printer.lookup_pin(self.switch_pin_str)
                self.switch_pin.setup_pin("digital_in")  # or out if needed
                self.logger.info(f"Resolved switch_pin: {self.switch_pin_str}")
        except Exception as e:
            self.logger.warning(f"Failed to resolve switch_pin: {e}")
    



# Core BoxAction replacement
class BoxAction:
    def __init__(self, printer, config):
        self.printer = printer
        self.config = config
        self.logger = logging.getLogger("extras.creality_cfs.BoxAction")
        self.logger.info("BoxAction initialized")
        self.boxcfg = self.printer.lookup_object("box").boxcfg  # assumes boxcfg exists

    def _handle_ready(self): pass
    def _handle_shutdown(self): pass
    def blow(self): pass
    def box_extrude_material(self): pass
    def box_extrude_material_part(self): pass
    def box_extrude_material_stage8(self): pass
    def box_retrude_material(self): pass
    def box_retrude_material_filament_err_part(self): pass
    def cal_flush_list(self): pass
    def check_and_extrude(self): pass
    def check_connect(self): pass
    def check_flush_temp_and_extrude(self): pass
    def check_material_refill(self): pass
    def check_rfid_valid(self): pass
    def check_same_box(self): pass
    def check_speed_and_extrude(self): pass
    def communication_create_connect(self): pass
    def communication_ctrl_connection_motor_action(self): pass
    def communication_extrude2_process(self): pass
    def communication_extrude_process(self): pass
    def communication_get_box_state(self): pass
    def communication_get_buffer_state(self): pass
    def communication_get_filament_sensor_state(self): pass
    def communication_get_hardware_status(self): pass
    def communication_get_remain_len(self): pass
    def communication_get_rfid(self): pass
    def communication_get_version_sn(self): pass
    def communication_measuring_wheel(self): pass
    def communication_retrude_process(self): pass
    def communication_set_box_mode(self): pass
    def communication_set_pre_loading(self): pass
    def communication_test(self): pass
    def communication_tighten_up_enable(self): pass
    def convert_scv(self): pass
    def convert_tcv(self): pass
    def cut_hall_find_test(self): pass
    def cut_hall_find_zero(self): pass
    def cut_hall_test(self): pass
    def cut_hall_zero(self): pass
    def cut_material(self): pass
    def disable_filament_sensor(self): pass
    def disable_heart_process(self): pass
    def enable_filament_sensor(self): pass
    def enable_heart_process(self): pass
    def extrude_process_auto_retry_process(self): pass
    def extrude_process_stage7(self): pass
    def extruder_extrude(self): pass
    def extrusion_all_materials(self): pass
    def filament_conflict_check(self): pass
    def filament_err_tighten_up_event(self): pass
    def find_objs(self): pass
    def generate_auto_get_rfid_func(self): pass
    def get_filament_sensor_detect(self): pass
    def get_five_way_sensor_detect(self): pass
    def get_flush_len(self): pass
    def get_flush_max_temp(self): pass
    def get_flush_temp(self): pass
    def get_flush_velocity(self): pass
    def get_material_max_extrusion_speed(self): pass
    def get_material_target_max_temp(self): pass
    def get_material_target_temp(self): pass
    def go_to_extrude_pos(self): pass
    def has_flushing_sign(self): return True
    def is_material_available(self): pass
    def is_use_ending_material_flush(self): pass
    def make_material_loose(self): pass
    def material_auto_refill(self): pass
    def material_flush(self): pass
    def material_volume_to_length(self): pass
    def motor_send_data(self): pass
    def move_to_cut(self): pass
    def move_to_safe_pos(self): pass
    def nozzle_clean(self): pass
    def power_loss_clean(self): pass
    def power_loss_restore(self): pass
    def process_msg(self): pass
    def quickly_wait_heating(self): pass
    def reset_flushing_sign(self): pass
    def ret_parse_process(self): pass
    def rfid_check(self): pass
    def send_data(self): pass
    def set_cool_temp(self): pass
    def set_flushing_sign(self): pass
    def set_temp(self): pass
    def timeout_process(self): pass
    def Tn_Extrude(self): pass
    def update_filament_pos(self): pass
    def update_same_material_list(self): pass
    def update_state_process(self): pass
    def update_tn_save_data(self): pass
    def update_Tnn_map(self): pass
    def z_down(self): pass
    def z_move(self): pass
    def z_restore(self): pass

    # Add more methods here as needed, e.g., move_to_cut(), cut_material(), etc.


# Main wrapper class that replaces MultiColorMeterialBoxWrapper
class CFSWrapper:
    def __init__(self, config):
        self.printer = config.get_printer()
        self.printer.add_object("box", self)

        self.logger = logging.getLogger("extras.creality_cfs")
        self.logger.info("creality_cfs.py Initialised")

        # Use reactor/gcode helpers
        self.gcode = self.printer.lookup_object("gcode")
        self.mutex = self.printer.get_reactor().mutex()

        # Preload expected config options so they are "consumed"
        self.bus = config.get("bus", None)
        self.filament_sensor = config.get("filament_sensor", None)

        # Serial device via printer object (you can stub this further if needed)
        if self.bus:
            try:
                self.serial_interface = self.printer.lookup_object(self.bus)
            except Exception as e:
                self.logger.warning(f"Failed to lookup bus object: {self.bus} — {e}")
        else:
            self.serial_interface = None

        # Core box action
        self.boxcfg = BoxCfg(self.printer, config)
        self.box_action = BoxAction(self.printer, config)

        # Optional test command
        self.gcode.register_command("CFS_TEST", self.cmd_CFS_TEST)
        self.gcode.register_command("BOX_SWITCH_READ", self.cmd_BOX_SWITCH_READ)

    def cmd_CFS_TEST(self, gcmd):
        gcmd.respond_info("CFS wrapper is active and responding.")

    def has_flushing_sign(self):
        return self.box_action.has_flushing_sign()
    
    def cmd_BOX_SWITCH_READ(self, gcmd):
        if self.switch_pin:
            value = self.switch_pin.query()
            gcmd.respond_info(f"Switch pin value: {int(value)}")
        else:
            gcmd.respond_info("Switch pin not initialized.")


# Used by Klipper's dynamic config loader
def load_config_prefix(config):
    config.get("bus")  # register as valid key
    config.get("filament_sensor")
    return CFSWrapper(config)
