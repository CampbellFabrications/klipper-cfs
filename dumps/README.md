# Communication Dumps for Creality File System (CFS)

This directory contains dumps of the communication between a 3D printer and the Creality File System (CFS). These dumps are useful for understanding the protocol, debugging issues, and developing new features.

## Why Dump Communication?

Analyzing the communication between the printer and CFS helps:
- Understand the protocol structure
- Identify command sequences for different operations
- Debug communication issues
- Develop and test new features without hardware

## How to Dump Communication Between the Printer and the CFS

Follow these steps to create your own communication dumps:

1. **Get root access to the printer**
   - This is required to access the serial port and modify configuration

2. **Connect via SSH**
   - Use `ssh root@<printer-ip-address>` (password depends on your printer model)

3. **Install interceptty**
   - [interceptty](https://github.com/geoffmeyers/interceptty) is a tool for intercepting and logging data transmitted via serial ports
   - For Creality K1, a compiled version can be found [here](https://github.com/ballaswag/k1-discovery/tree/main/bin)

4. **Update the printer configuration**
   - Edit the box.cfg file
   - In section `[serial_485]`, replace the path to the device with a virtual port, e.g., `/tmp/ttyV0`

5. **Start interceptty**
   - Run: `interceptty -s '230400' -o /root/serial_log.txt /dev/ttyUSB0 /tmp/ttyV0`
   - Replace `/dev/ttyUSB0` with the actual path from your config
   - This creates a virtual serial port that logs all communication to serial_log.txt

6. **Restart firmware and Klipper**
   - This ensures the printer uses the virtual port

7. **Run G-code that interacts with the CFS**
   - For example, commands to load/unload filament or check filament status

## Understanding the Dump Format

The dump file (serial_log.txt) contains binary data in a human-readable format:
- Lines starting with `<` indicate data sent from the printer to the CFS
- Lines starting with `>` indicate data sent from the CFS to the printer
- Each byte is shown in both hexadecimal and ASCII representation

Example:
```
< 0xf7 (�)  # Start of message from printer
< 0x01 (.)  # Address byte
< 0x03 (.)  # Length byte
...
> 0xf7 (�)  # Start of response from CFS
> 0x01 (.)  # Address byte
...
```

## Analyzing the Dumps

To analyze these dumps, you can:
1. Use the `DataPackage.loads()` method from the `creality_cfs` module to parse the binary data
2. Look for patterns in command/response sequences
3. Compare dumps from different operations to understand the protocol
