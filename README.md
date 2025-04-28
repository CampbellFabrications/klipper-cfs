# Klipper-CFS

A Python module for controlling the Creality File System (CFS) from Klipper firmware.

## Status

**⚠️ WORK IN PROGRESS ⚠️**

This project is currently in early development and is not ready for production use. Use at your own risk.

## Description

Klipper-CFS is a module that enables communication and control of the Creality File System (CFS) - a filament management system used in Creality 3D printers. It provides a Python interface to interact with the CFS hardware, allowing for filament management, sensor reading, and motor control.

## Features

- Communication with CFS via RS485 protocol
- Parsing and constructing CFS protocol messages
- Support for various CFS commands and responses

## Installation

```bash
# Installation instructions will be added when the project is ready for use
```

## Usage

```python
# Usage examples will be added when the project is ready for use
```

## Technical Notes

- CFS uses RS485 with 230400 baudrate to communicate with the printer
- Tested with Creality K1 upgrade kit and Hi schematic
- The protocol uses a custom binary format with CRC8 checksums

## Development Roadmap

- [x] Basic message parsing and construction
- [ ] Get box proper addressing and initialization
- [ ] Control gears
- [ ] Control extruder
- [ ] Get box filament sensor statuses:
  - [ ] 4x post-gear sensors
  - [ ] 1x gate sensor
- [ ] Get hub filament sensor status
- [ ] Get encoder status
- [ ] Get humidity
- [ ] Get temperature
- [ ] Get RFID data

## Contributing

Contributions are welcome! Please feel free to submit a Pull Request.

## License

This project is licensed under the GNU General Public License v3.0 - see the [LICENSE](LICENSE) file for details.
