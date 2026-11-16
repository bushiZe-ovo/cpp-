#!/bin/bash
set -euo pipefail
cd "$(dirname "$0")"
exercise="${1:-}"
case "$exercise" in
  01_static_data|02_student|03_static_function|5-3_scope|5-7_cat|5-13_friend) ;;
  *) echo "请选择题目: 01_static_data 02_student 03_static_function 5-3_scope 5-7_cat 5-13_friend"; exit 1 ;;
esac
mkdir -p build
clang++ -std=c++17 -Wall -Wextra -pedantic -g -O0 "src/$exercise/"*.cpp -o "build/$exercise"
"build/$exercise"
