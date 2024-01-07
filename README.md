# Zenimal Group ENGS 90

This repository contains starter code for the Arduino prototype of the Zenimal group meditation device.

# Hardware
- MKR Zero Board
- USBC cable that can carry data
- microSD card

# Arduino Setup
1. Install Arduino SDK (IDE, terminal, and reference documentation)
	1. On Linux: use `yay` to install packages `1-3` from the `aur`
    2. On Mac/Windows: install manually
2. Install SD and AudioZero libraries (Tools -> Library Managers -> search)
3. Install Arduino SAMD Boards (32-bits ARM Cortex M0+) (Tools -> Boards -> Board Manager -> Search)
4. Run starter code through SDK

## Linux Resources:
- Basic tutorial [here](https://wiki-content.arduino.cc/en/Guide/ArduinoMKRZero)
- Linux port fix [here](https://support.arduino.cc/hc/en-us/articles/360016495679-Fix-port-access-on-Linux)
- Longer Linux permissions troubleshooting [here](https://majenko.co.uk/blog/diagnosing-arduino-problems-linux)

# Full Clean:
- make sure you've saved code changes
- if necessary uninstall libraries and the SAMD Board software through the Arduino SDK
- On Linux: use `yay -R` to remove Arduino
    - make sure to clear Arduino folder from Home