import os
import subprocess
from pathlib import Path
from multiprocessing.pool import ThreadPool

# (cd 3_til_raw_headers && find . -type f -print0 | xargs -0 -n1 -P8 sh -c 'cd ..; mkdir -p 4_til_til2c_headers/$(dirname $0) && if [ -f 4_til_til2c_headers/$0 ]; then echo "$0: Ignored" && exit 0; fi; GHIDRA=1 python3 /mnt/d/Workspaces/UtilWorkspace/Reverse/IDAPlugins/idatil2c/idatil2c.py 3_til_raw_headers/$0 4_til_til2c_headers/$0_tmp >4_til_til2c_headers/$0.log 2>&1 && (echo "$0: Success"; mv 4_til_til2c_headers/$0_tmp 4_til_til2c_headers/$0) || echo "$0: Fail!"')
# (cd 4_til_til2c_headers && find . -type f -name "*.h" -print0 | xargs -0 -n1 -P1 sh -c 'cd ..; F=$0; F=${F%.til.h}.gdt; mkdir -p 5_gengdt/$(dirname ${F}) && if [ -f 5_gengdt/$F ]; then echo "${F}: Ignored" && exit 0; fi; ./ghidra_helpers/ghidra_build_gdt.sh 4_til_til2c_headers/$0 5_gengdt/${F}_tmp.gdt >5_gengdt/${F}.log 2>&1 && (echo "${F}: Success"; mv 5_gengdt/${F}_tmp.gdt 5_gengdt/${F}) || (echo "${F}: Fail!" && mv 4_til_til2c_headers/$0 4_til_til2c_headers/$0_fail)')

ROOT_DIR = Path(__file__).parent.absolute()

TIL_DEP = {
    'objc.til': ['macosx.til'],
    'objc64.til': ['macosx64.til'],
    'pc/mscor.til': ['pc/wnet.til'],
}

P_ORITIL = Path('1_til_original')
P_TIL = Path('2_til_processed')
P_TILHDR = Path('3_til_raw_headers')
P_TIL2C = Path('4_til_til2c_headers')
P_GDT = Path('5_gengdt')

def docall(comm, shell=True):
    print("== Calling: %s" % comm)
    return subprocess.call(comm, shell=True)

def process_raw_header(raw_hdr, target_hdr, deps):
    os.makedirs(target_hdr.parent, exist_ok=True)
    hdrname = raw_hdr.name
    tmptarget = Path(str(target_hdr) + '_tmp')
    retcode = docall(f'GHIDRA=1 python3 {str(ROOT_DIR)}/idatil2c/idatil2c.py {raw_hdr} {tmptarget} {" ".join(str(c) for c in deps)} > {target_hdr}.log 2>&1', shell=True)
    if retcode == 0:
        tmptarget.rename(target_hdr)
    return retcode

def process_til_header(til_hdr, gdt, deps):
    os.makedirs(gdt.parent, exist_ok=True)
    tmpgdt = Path(str(gdt) + '_tmp.gdt')
    retcode = docall(f'{str(ROOT_DIR)}/ghidra_build_gdt.sh {til_hdr} {tmpgdt}  {":".join(str(c) for c in deps)} >{gdt}.log 2>&1', shell=True)
    if retcode == 0:
        tmpgdt.rename(gdt)
    else:
        failtil = Path(str(til_hdr) + '_fail')
        til_hdr.rename(failtil)
    return retcode


def handle(tilname, startstep=0, endstep=100):
    def checkstep(s):
        return startstep <= s and s < endstep
    gethdrname = lambda x: Path(str(x) + '.h')
    gethdrpath = lambda tilname: P_TILHDR / gethdrname(tilname)
    hdrpath = gethdrpath(tilname)
    gettil2cpath = lambda tilname: P_TIL2C / gethdrname(tilname)
    til2cpath = gettil2cpath(tilname)
    getgdtpath = lambda tilname: P_GDT / tilname.with_suffix('.gdt')
    gdtpath = getgdtpath(tilname)
    for i in range(0,100):
        if i == 3:
            if til2cpath.exists():
                print(f'{tilname}: skip TIL2C {til2cpath}')
                continue
            deps = []
            if str(tilname) in TIL_DEP:
                deptil = TIL_DEP[str(tilname)]
                print(f'{tilname}: DEP %s' % deptil)
                deps = [gettil2cpath(Path(c)) for c in deptil]
                for d in deps:
                    if not d.exists():
                        print(f'{tilname}: failed DEP {d} not ready')
                        return False
            ret = process_raw_header(hdrpath, til2cpath, deps)
            if ret != 0:
                print(f"{tilname}: failed TIL2C")
                return False
        if i == 4:
            if gdtpath.exists():
                print(f'{tilname}: skip GENGDT')
                continue
            deps = []
            if str(tilname) in TIL_DEP:
                deptil = TIL_DEP[str(tilname)]
                deps = [getgdtpath(Path(c)) for c in deptil]
                for d in deps:
                    if not d.exists():
                        print(f'{tilname}: failed DEP {d} not ready')
                        return False
            ret = process_til_header(til2cpath, gdtpath, deps)
            if ret != 0:
                print(f"{tilname}: failed GENGDT")
                return False

    print(f"{tilname}: succ!")
    return True

pool = ThreadPool(8)
def taskIter():
    for p in P_TIL.rglob("*"):
        if not p.is_file():
            continue
        til = p.relative_to(P_TIL)
        yield til
for ret in pool.imap_unordered(handle, taskIter()):
    pass
