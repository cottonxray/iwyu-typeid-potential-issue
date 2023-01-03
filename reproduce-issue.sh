#!/bin/sh
rm -rf build
mkdir build
cd build
cmake ..
make -j
cd ..
iwyu_tool -p build user/user.cpp
