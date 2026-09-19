"""Group decompiled functions by normalised body, to find exact duplicates.

Two copies of the same routine differ only in the addresses baked into their
names and in the local-variable numbering Ghidra invents. Normalising both away
leaves a body that is identical when the code is.
"""
import hashlib
import json
import os
import re
import sys

base = sys.argv[1]
out_path = sys.argv[2]

addr = re.compile(r'\b(?:FUN|LAB|DAT|PTR_DAT|PTR_FUN|thunk_FUN|UNK|SUB)_[0-9a-fA-F]{6,16}\b')
local = re.compile(r'\b(?:local|uVar|iVar|lVar|pVar|cVar|bVar|dVar|fVar|psVar|puVar|plVar|auStack|acStack|abStack|aiStack|uStack|iStack|lStack|pcVar|pfVar|pdVar|piVar|pbVar|ppuVar|pplVar)_?[0-9a-zA-Z]*\b')
ws = re.compile(r'\s+')

groups = {}
count = 0
for name in os.listdir(base):
    if not name.endswith('.c'):
        continue
    path = os.path.join(base, name)
    try:
        src = open(path, encoding='utf-8', errors='ignore').read()
    except OSError:
        continue
    count += 1
    body = src.split('{', 1)[-1]
    if len(body) < 60:
        continue
    norm = ws.sub(' ', local.sub('V', body)).strip()
    key = hashlib.sha1(norm.encode('utf-8')).hexdigest()
    m = re.search(r'__FUN_([0-9a-f]+)\.c$', name)
    if not m:
        continue
    groups.setdefault(key, []).append(m.group(1))

dupes = {k: sorted(v) for k, v in groups.items() if len(v) > 1}
json.dump(dupes, open(out_path, 'w'))
total_in_groups = sum(len(v) for v in dupes.values())
print("scanned", count, "functions")
print("duplicate groups:", len(dupes))
print("functions in a duplicate group:", total_in_groups)
print("beads closable by porting one per group:", total_in_groups - len(dupes))
sizes = sorted((len(v) for v in dupes.values()), reverse=True)[:10]
print("largest groups:", sizes)
