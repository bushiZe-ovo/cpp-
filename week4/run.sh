#!/usr/bin/env bash
set -euo pipefail

cd -- "$(dirname -- "$0")"
exercise="${1:-}"
mode="${2:-run}"
if [[ ! "$exercise" =~ ^[a-zA-Z0-9_-]+$ || ! -d "src/$exercise" ]]; then
    echo "Usage: bash run.sh <exercise-directory> [build]" >&2
    exit 1
fi

mkdir -p build
shopt -s nullglob
sources=("src/$exercise/"*.cpp)
if [[ ${#sources[@]} -eq 0 ]]; then
    echo "No C++ source files found in src/$exercise." >&2
    exit 1
fi

"${CXX:-clang++}" -std=c++17 -Wall -Wextra -Wpedantic -g \
    "${sources[@]}" -o "build/$exercise"
if [[ "$mode" == run ]]; then
    exec "./build/$exercise"
fi
