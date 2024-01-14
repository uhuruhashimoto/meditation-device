# Zenimal Group ENGS 90

This repository contains starter code for the Arduino prototype of the Zenimal group meditation device.

## Hardware
- MKR Zero Board
- USBC cable that can carry data
- microSD card, FAT16 or FAT32 formatted

## Arduino Setup
1. Install Arduino SDK (IDE, terminal, and reference documentation)
	1. On Linux: use `yay` to install packages `1-3` from the `aur`
    2. On Mac/Windows: install manually
2. Install SD and AudioZero libraries (Tools -> Library Managers -> search)
3. Install Arduino SAMD Boards (32-bits ARM Cortex M0+) (Tools -> Boards -> Board Manager -> Search)
4. Run starter code through SDK

### Linux Setup Resources:
- [Basic tutorial](https://wiki-content.arduino.cc/en/Guide/ArduinoMKRZero)
- [Linux port fix](https://support.arduino.cc/hc/en-us/articles/360016495679-Fix-port-access-on-Linux)
- [Longer Linux permissions troubleshooting](https://majenko.co.uk/blog/diagnosing-arduino-problems-linux)

### SD Formatting Resources
- [Adafruit tutorial for Windows/Mac](https://learn.adafruit.com/adafruit-micro-sd-breakout-board-card-tutorial/formatting-notes)
- [Linux `mkfs` tutorial](https://www.ibeessoft.com/computer-tips/convert-exfat-to-fat32.html)
    - `sudo umount /dev/sdb1`
    - `sudo mkfs.vfat /dev/sdb1`
- Note: dev path may not be `sdb`. Use this [dev path tutorial](https://unix.stackexchange.com/questions/144029/command-to-determine-ports-of-a-device-like-dev-ttyusb0)

## Full Clean:
- make sure you've saved code changes
- if necessary uninstall libraries and the SAMD Board software through the Arduino SDK
- On Linux: use `yay -R` to remove Arduino
    - make sure to clear Arduino folder from Home