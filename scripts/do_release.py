import subprocess
from pathlib import Path
import shutil

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