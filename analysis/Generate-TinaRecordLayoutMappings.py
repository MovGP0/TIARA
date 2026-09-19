import json, os, sys, collections

sp = sys.argv[1]
out_path = sys.argv[2]
d = json.load(open(os.path.join(sp, 'fin_fields.json')))

HELPER_NOTE = (
    "A compiler-written record clean-up routine, recognised by a straight-line run of "
    "0x00414480 (clear one string), 0x00414560 (clear a run of strings), 0x004144D0 and "
    "0x00414590 (the same pair for the other string kind), 0x0041B800 (release an interface), "
    "0x00417740 (clear a dynamic array), 0x00417840 (finalise a run of elements) and "
    "0x00419430 (release a field through its type descriptor), and nothing else. It is not "
    "application code and has no Rust counterpart: dropping a value releases what it owns. "
    "What is worth keeping is the managed layout it discloses, which nothing else in the "
    "decompilation describes. Two limits: an element type's width is not recoverable from a "
    "clean-up routine, so where a run of elements ends is unknown; and unmanaged fields - "
    "numbers, plain pointers - never appear at all, so a gap in the offsets is fields, not "
    "padding."
)

records = []
for a in sorted(d):
    fields = d[a]
    counts = collections.Counter(f[1] for f in fields)
    texts = sum(f[2] for f in fields if f[1] == 'Texts')
    others = sum(f[2] for f in fields if f[1] == 'OtherStrings')
    parts = []
    if texts:
        parts.append("{} string{}".format(texts, '' if texts == 1 else 's'))
    if others:
        parts.append("{} string{} of the other kind".format(others, '' if others == 1 else 's'))
    if counts['Interface']:
        parts.append("{} interface references".format(counts['Interface']))
    if counts['Elements']:
        parts.append("{} runs of elements".format(counts['Elements']))
    if counts['DynamicArray']:
        parts.append("{} dynamic arrays".format(counts['DynamicArray']))
    if counts['TypedValue']:
        parts.append("{} fields released through a type descriptor".format(counts['TypedValue']))
    lo = min(f[0] for f in fields)
    hi = max(f[0] for f in fields)
    summary = "This record has {} managed fields between 0x{:X} and 0x{:X}: {}.".format(
        len(fields), lo, hi, ", ".join(parts))
    offsets = [f[0] for f in fields]
    extra = ""
    if offsets != sorted(offsets):
        extra = (" NOTE: this routine releases one field out of turn, so the recorded order is "
                 "the release order and not the offset order - kept rather than tidied, because "
                 "a clean-up routine otherwise follows the order the fields were declared in.")
    records.append({
        "beadId": "TIARA-f" + a,
        "functionAddress": "0x" + a.upper(),
        "ghidraSourcePath": "DecompiledSources/Tina16/functions/{}__FUN_{}.c".format(a.upper().zfill(16), a),
        "rustSourcePath": "crates/tiara-core/src/record_layouts.rs",
        "rustSymbol": "RECORD_AT_" + a.upper(),
        "mappingKind": "implementation",
        "notes": HELPER_NOTE + " " + summary + extra,
    })

json.dump({"records": records}, open(out_path, 'w', encoding='utf-8'), indent=1)
print("wrote", len(records), "mapping records to", out_path)
print(" ".join(r["beadId"] for r in records))
