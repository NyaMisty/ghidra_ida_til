#!/bin/bash
set -x

mkdir -p 2_til_processed
cp -r 1_til_original/. 2_til_processed
# remove original type
find 2_til_processed -type f -printf 'Processing: %p\n' -exec ${TILIB} -#- {} \;
# export to c header
(cd 2_til_processed; find -type f -printf '%p\n' -exec sh -c 'mkdir -p $(dirname ../3_til_raw_headers/$0.h) && ${TILIB} -lc $0 > ../3_til_raw_headers/$0.h' {} \;)
