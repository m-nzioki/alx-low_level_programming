#!/bin/bash
wget -P /tmp https://github.com/m-nzioki/alx-low_level_programming/raw/master/0x18-dynamic_libraries/spoof.so
export LD_PRELOAD=/tmp/spoof.so ./gm 9 8 10 24 75 9
