"""
Creality File System (CFS) Protocol Implementation

This module provides classes and utilities for communicating with the Creality File System (CFS),
a filament management system used in Creality 3D printers. It implements the binary protocol
used for communication over RS485.
"""

import enum
from functools import singledispatch
from dataclasses import dataclass, field, fields
from typing import TYPE_CHECKING

if TYPE_CHECKING:
    from typing import Literal, Union


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


@dataclass(order=True, frozen=True, kw_only=True, slots=True)
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


@dataclass(order=True, frozen=True, kw_only=True, slots=True)
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
