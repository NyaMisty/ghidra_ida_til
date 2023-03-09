set -x

export INPUTHDR=$(realpath "$1")
export OUTPUTGDT=$(realpath "$2")
t='import sys,os; deps=[c.strip() for c in sys.argv[1].split(":") if c.strip()]; print(":".join(os.path.realpath(c) for c in deps))'
export DEPENDGDTS=$(python3 -c "$t" "$3")

MYTMPDIR="$(realpath "$2")_tmpprj"
mkdir "$MYTMPDIR"
trap 'rm -rf -- "$MYTMPDIR"' EXIT

#export PROJECT_DIR=$(realpath $(dirname "$0"))
export PROJECT_DIR=$MYTMPDIR
export PROJECT_NAME=ghidra_helper
export SCRIPT_PATH=$(realpath $(dirname "$0"))/headlessParseC.py

echo $INPUTHDR
echo $OUTPUTGDT
echo $DEPENDGDTS

export WSLENV=$WSLENV:PROJECT_DIR/p:PROJECT_NAME:SCRIPT_PATH/p:INPUTHDR/p:OUTPUTGDT/p:DEPENDGDTS/l
#cmd.exe /c 'E:\ScoopSpace\apps\ghidramod\10.3-20230303-1b209c717\support\analyzeHeadless.bat %PROJECT_DIR% %PROJECT_NAME% -preScript %SCRIPT_PATH% %INPUTHDR% %OUTPUTGDT% E:\ScoopSpace\apps\ghidramod\10.3-20230303-1b209c717\Ghidra\Features\Base\data\typeinfo\generic\generic_clib_64.gdt'

cd $(dirname $OUTPUTGDT) # CParserOut will gen at cur dir
yes | cmd.exe /c 'E:\ScoopSpace\apps\ghidramod\current\support\analyzeHeadless.bat %PROJECT_DIR% %PROJECT_NAME% -preScript %SCRIPT_PATH% %INPUTHDR% %OUTPUTGDT% %DEPENDGDTS%'
