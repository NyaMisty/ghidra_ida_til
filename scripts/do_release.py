import subprocess
from pathlib import Path
import shutil
import re
import os

ROOT_DIR = Path(__file__).parent.absolute()
relPath = Path('release')
relPath.mkdir(exist_ok=True)

print("Copying til2c headers...")
#shutil.copytree('4_til_til2c_headers', relPath, dirs_exist_ok=True)
subprocess.call(['cp', '-r', '4_til_til2c_headers/.', str(relPath)])
print("Copying GDT...")
#shutil.copytree('5_gengdt', relPath, dirs_exist_ok=True)
subprocess.call(['cp', '-r', '5_gengdt/.', str(relPath)])


print("Removing intermediate files...")
for path in relPath.rglob('*'):
    ENDS = ['.out', '_tmp.gdt', '.gdt.log', '_tmp.json', '.h_fail', '.h.log']
    if any(path.name.endswith(c) for c in ENDS):
        print("  Removing %s" % path)
        path.unlink()

print("Fixing common.h include path")

hdrpath = ROOT_DIR/"idatil2c"/"common.h"
newhdrpath = relPath/"__idatilcommon.h"
shutil.copy(hdrpath, newhdrpath)
for path in relPath.rglob('*.til.h'):
    hdrInclPath = os.path.relpath(newhdrpath, path.parent)
    with open(path) as f:
        content = f.read()
    content, n = re.subn(r'#include "(|.*?/)common.h"', r'#include "%s"' % str(hdrInclPath), content, 1)
    assert n == 1, "common.h must be present inside generated *.til.h"
    with open(path, 'w') as f:
        f.write(content)

print("Resolving Conflicting GDT...")

names = {}
for path in relPath.rglob('*.gdt'):
    name = path.name
    if name in names:
        names[name].append(path)
    else:
        names[name] = [path]

for name, paths in names.items():
    if len(paths) <= 1:
        continue
    print("Conflicting name: %s" % paths)
    for path in paths:
        gdtname = path.stem
        newgdt = f'{gdtname}_{path.parent.name}.gdt'
        print("  Renaming from %s to %s" % (path.name, newgdt))
        path.rename(newgdt)