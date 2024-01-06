# Zenimal Group ENGS 90/290

This repository contains starter code for the Arduino prototype of the Zenimal group meditation device.

# Hardware
- MKR Zero Board
- USBC cable
- microSD card

# Arduino Setup
1. Install Arduino SDK (IDE, terminal, and reference documentation)
	1. On Linux: use `yay` to install packages `1-3` from the `aur`
    2. On Mac/Windows: install manually
2. Install SD and AudioZero libraries (Tools -> Library Managers -> search)
3. Install Arduino SAMD Boards (32-bits ARM Cortex M0+) (Tools -> Boards -> Board Manager -> Search)
4. Run starter code through SDK

Full Clean:
- make sure you've saved code changes
- if necessary uninstall libraries and the SAMD Board software through the Arduino SDK
- On Linux: use `yay -R` to remove Arduino