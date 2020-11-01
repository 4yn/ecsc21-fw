#!/bin/bash
export PATH="$PATH:$(pwd)/xtensa-esp32-elf/bin"
python3 esp-idf/components/esptool_py/esptool/esptool.py --port $(bash -c 'ls /dev/tty{USB*,.wchusbserial*,.usbserial-*,.usbmodem*,.SLAB_USBtoUART,ACM*} 2>/dev/null') erase_flash
