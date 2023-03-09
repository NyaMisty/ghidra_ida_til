# Ghidra IDATIL GDT

GDT (Ghidra Data Type) generated from IDA tils

## How To Use

The final GDTs are in folder `release`, while other folders are building intermediates for debugging and reference.

- Method1: Copy/Link `release` folder into Ghidra's Standard GDT Path: `Ghidra\Features\Base\data\typeinfo`, and Loading with `Standard Archive` menu
- Method2: Manually Loading the GDT with `Open File Archive...`


## How This Work?

- Scarping IDA's TIL
    - From IDA's installation dir
    - Using IDAClang
    - Extract from .idb file
- Dump the TIL: `tilib -#- A.til; tilib -lc A.til > A.til.h` 
- Rewrite Header: Using idatil2c (https://github.com/NyaMisty/idatil2c)
- Compile GDT: Using headlessParseC.py as Ghidra headless analysis script

## How to build

1. Setup various path & env:
    - Install Node & PyPy (for idatil2c)
    - export TILIB=/path/to/tilib64
    - Modify the Ghidra launch command in `scripts/ghidra_build_gdt.sh`
2. Put your tils into `1_til_original`
3. Process til and dump the header: Run in repo's root directory: `bash ./scripts/process_til.sh`
    - will remove ordinal types in XXX.til using `tilib -#- XXX.til`, then storing to `2_til_processed/XXX.til`
    - will dump the C header from til using `tilib -lc XXX.til`, storing to `3_til_raw_headers/XXX.til.h`
4. Process the header and convert to gdt: Run in repo's root directory: `python3 scripts/launcher.py`
    - will rewrite the C header in to a compilable one, storing to `4_til_til2c_headers/XXX.til.h`
    - will compile the C header to GDT, storing to `5_gengdt`
5. Make the release with `bash ./scripts/do_release.sh`

## Debug

- Process Til: `process_til.h` are using `tilib`, which is very stable and is unlikely to have error
- Rewrite Header: When generating `4_til_til2c_headers/XXX.til.h`, there are chances to fail.
    - Internally it uses idatil2c to rewrite the header, which resolve dependency and adding missing forward declaration
    - Fails when regex failed to correctly matching IDA tilib outputs
    - Uses `4_til_til2c_headers/XXX.til.log` to debug what happened
- Compile GDT: This is where MOST ERROR comes. 
    - This step uses Ghidra to compile the above header, so usually it will complain header compile problems
    - Use `5_gengdt/XXX.gdt.log` to see the error, and `5_gengdt/XXX_tmp_CParser.out` to see what's causing the problem
        - I've met these errors:
            - Missing/Incomplete definition: Ghidra will say `Possibly Undefined: XXX`
            - Syntax error: Ghidra will say like `Expecting "["`
        - Sometimes the error would be confusing, but the line number&column number that pointing to CParser.out will be ALWAYS correct
