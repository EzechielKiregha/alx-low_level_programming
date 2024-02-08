#!/bin/bash
wget -P .. https://raw.githubusercontent.com/EzechielKiregha/alx-low_level_programming/main/0x18-dynamic_libraries/libGigaAI.so
export LD_PRELOAD="$PWD/../libGigaAI.so"
