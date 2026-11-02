#!/bin/sh
# Compile every exercise into ./build (Linux, macOS, WSL, MSYS2).
# Usage: sh scripts/build.sh            # uses $CC, defaults to cc
#        CC=clang sh scripts/build.sh
set -eu
CC=${CC:-cc}
cd "$(dirname "$0")/.."
mkdir -p build
count=0
for src in */*.c; do
    name=$(basename "$src" .c)
    "$CC" "$src" -o "build/$name" -lm
    count=$((count + 1))
done
echo "built $count programs into build/"
