#!/bin/bash
set -x
set -e
mkdir -p release
cp -r 4_til_til2c_headers/. release
cp -r 5_gengdt/. release
cd release
find . -name "*.out" -printf "Deleting %p\n" -delete
find . -name "*_tmp.gdt" -printf "Deleting %p\n" -delete
find . -name "*.gdt.log" -printf "Deleting %p\n" -delete
find . -name "*_tmp.json" -printf "Deleting %p\n" -delete
find . -name "*.h_fail" -printf "Deleting %p\n" -delete
find . -name "*.h.log" -printf "Deleting %p\n" -delete
