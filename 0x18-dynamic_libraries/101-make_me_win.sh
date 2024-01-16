#!/bin/bash
wget -P .. https://raw.githubusercontent.com/glovic/alx-low_level_programming/master/0x18-dynamic_libraries/libhacknumber.so
export LD_PRELOAD="$PWD/../libhacknumber.so"
