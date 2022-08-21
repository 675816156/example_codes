#!/bin/bash
set -e

ROOT_DIR=$(pwd)

rm -rf $(pwd)/out
mkdir -p $(pwd)/out
pushd $(pwd)/out
if [[ $1 = "cross" ]]; then
	cmake .. -DCMAKE_TOOLCHAIN_FILE=${ROOT_DIR}/toolschain/aarch64.cmake
else
	cmake ..
fi
make -j
popd
