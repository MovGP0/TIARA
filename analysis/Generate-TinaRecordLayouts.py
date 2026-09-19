import json, os, sys, collections

sp = sys.argv[1]
d = json.load(open(os.path.join(sp, 'fin_fields.json')))


def hexlit(v):
    return "0x{:X}".format(v)


def addrlit(v):
    text = "{:08X}".format(v)
    return "0x" + text[:4] + "_" + text[4:]


def expr(f):
    off, kind, count, ty = f
    if kind == 'Texts':
        return "ManagedField::Texts({})".format(count)
    if kind == 'OtherStrings':
        return "ManagedField::OtherStrings({})".format(count)
    if kind == 'Interface':
        return "ManagedField::Interface"
    if kind == 'DynamicArray':
        return "ManagedField::array({})".format(addrlit(int(ty, 16)))
    if kind == 'TypedValue':
        return "ManagedField::typed({})".format(addrlit(int(ty, 16)))
    if kind == 'Elements':
        return "ManagedField::elements({}, {})".format(addrlit(int(ty, 16)), count)
    raise ValueError(kind)


lines = []
names = []
for a in sorted(d):
    fields = d[a]
    counts = collections.Counter(f[1] for f in fields)
    texts = sum(f[2] for f in fields if f[1] == 'Texts')
    others = sum(f[2] for f in fields if f[1] == 'OtherStrings')
    parts = []
    if texts:
        parts.append("{} string{}".format(texts, '' if texts == 1 else 's'))
    if others:
        parts.append("{} of the other string kind".format(others))
    if counts['Interface']:
        n = counts['Interface']
        parts.append("{} interface reference{}".format(n, '' if n == 1 else 's'))
    if counts['Elements']:
        n = counts['Elements']
        parts.append("{} run{} of elements".format(n, '' if n == 1 else 's'))
    if counts['DynamicArray']:
        n = counts['DynamicArray']
        parts.append("{} dynamic array{}".format(n, '' if n == 1 else 's'))
    if counts['TypedValue']:
        n = counts['TypedValue']
        parts.append("{} field{} released through a type descriptor".format(n, '' if n == 1 else 's'))
    lo = min(f[0] for f in fields)
    hi = max(f[0] for f in fields)
    name = "RECORD_AT_" + a.upper()
    names.append(name)
    tick = chr(96)
    lines.append("/// Recovered from Ghidra function {t}FUN_{a}{t} at {t}0x{A}{t}.".format(t=tick, a=a, A=a.upper()))
    lines.append("///")
    lines.append("/// {n} managed fields between {t}{lo}{t} and {t}{hi}{t}: {p}.".format(
        n=len(fields), t=tick, lo=hexlit(lo), hi=hexlit(hi), p=", ".join(parts)))
    lines.append("pub const {}: ManagedLayout = ManagedLayout {{".format(name))
    lines.append("    finaliser: {},".format(addrlit(int(a, 16))))
    lines.append("    fields: &[")
    for f in fields:
        lines.append("        ({}, {}),".format(hexlit(f[0]), expr(f)))
    lines.append("    ],")
    lines.append("};")
    lines.append("")

lines.append("/// Every layout swept mechanically out of a clean-up routine.")
lines.append("///")
lines.append("/// These were read straight off the routines rather than written out by hand,")
lines.append("/// which is why each is named after the routine and not after anything the")
lines.append("/// record does: nothing here knows what any of them is for.")
lines.append("pub const SWEPT_LAYOUTS: [&ManagedLayout; {}] = [".format(len(names)))
for n in names:
    lines.append("    &{},".format(n))
lines.append("];")

open(os.path.join(sp, 'swept.rs'), 'w', encoding='utf-8').write("\n".join(lines) + "\n")
print("generated", len(names), "records;", sum(len(v) for v in d.values()), "fields;", len(lines), "lines")
