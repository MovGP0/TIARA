import json, os, sys

sp = sys.argv[1]
rust_out = sys.argv[2]
map_out = sys.argv[3]
groups = json.load(open(os.path.join(sp, 'dupe_targets.json')))
groups.sort(key=lambda g: g['ported'])

tick = chr(96)
lines = []
lines.append("//! Routines the binary carries more than one copy of.")
lines.append("//!")
lines.append("//! The same code appears at many addresses, byte for byte and calling the")
lines.append("//! same things: a generic container instantiated for one element type after")
lines.append("//! another, or a handler written once and compiled into every form that")
lines.append("//! wanted it. Each copy is a separate recovered function, but they are one")
lines.append("//! behaviour and are ported once.")
lines.append("//!")
lines.append("//! This is the register of which copies belong to which port. It exists")
lines.append("//! because the copies are real — a reader tracing an address out of the")
lines.append("//! original needs to be able to find where it went — and because the count")
lines.append("//! itself says something: a routine with a hundred copies is a template, not")
lines.append("//! a function somebody wrote a hundred times.")
lines.append("")
lines.append("// The addresses are written the way the original names them, without the")
lines.append("// grouping that would otherwise be idiomatic: they are identifiers here, not")
lines.append("// quantities.")
lines.append("#![allow(clippy::unreadable_literal)]")
lines.append("")
lines.append("/// One routine, the copy that was read, and every other address it appears at.")
lines.append("#[derive(Debug, Clone, Copy, PartialEq, Eq)]")
lines.append("pub struct DuplicatedRoutine {")
lines.append("    /// The copy that was read and ported.")
lines.append("    pub ported: u32,")
lines.append("    /// Where the port lives.")
lines.append("    pub rust_path: &'static str,")
lines.append("    /// What it is called there, where it has a name of its own.")
lines.append("    pub rust_symbol: &'static str,")
lines.append("    /// Every other address the same code sits at.")
lines.append("    pub copies: &'static [u32],")
lines.append("}")
lines.append("")
lines.append("impl DuplicatedRoutine {")
lines.append("    /// How many copies of this routine the binary carries in all.")
lines.append("    #[must_use]")
lines.append("    pub const fn total_copies(&self) -> usize {")
lines.append("        self.copies.len() + 1")
lines.append("    }")
lines.append("")
lines.append("    /// Whether one address is one of them.")
lines.append("    #[must_use]")
lines.append("    pub fn holds(&self, address: u32) -> bool {")
lines.append("        self.ported == address || self.copies.contains(&address)")
lines.append("    }")
lines.append("}")
lines.append("")

names = []
for group in groups:
    ported = group['ported'].upper()
    name = "COPIES_OF_" + ported
    names.append(name)
    symbol = group['symbol'] or ""
    described = "{t}{s}{t}".format(t=tick, s=symbol) if symbol else "the port"
    more = "further copy" if group['count'] == 1 else "further copies"
    lines.append("/// The {} {} of {}.".format(group['count'], more, described))
    lines.append("///")
    lines.append("/// Ported from {}FUN_{}{} at {}0x{}{}.".format(tick, group['ported'], tick, tick, ported, tick))
    lines.append("pub const {}: DuplicatedRoutine = DuplicatedRoutine {{".format(name))
    lines.append("    ported: 0x{},".format(ported))
    lines.append('    rust_path: "{}",'.format(group['path']))
    lines.append('    rust_symbol: "{}",'.format(symbol))
    lines.append("    copies: &[")
    for copy in sorted(group['copies']):
        lines.append("        0x{},".format(copy.upper()))
    lines.append("    ],")
    lines.append("};")
    lines.append("")

lines.append("/// Every routine known to have more than one copy in the binary.")
lines.append("pub const DUPLICATED_ROUTINES: [&DuplicatedRoutine; {}] = [".format(len(names)))
for n in names:
    lines.append("    &{},".format(n))
lines.append("];")
lines.append("")
lines.append("#[cfg(test)]")
lines.append("mod tests {")
lines.append("    use super::*;")
lines.append("")
lines.append("    #[test]")
lines.append("    fn no_routine_lists_the_copy_that_was_ported_among_its_others() {")
lines.append("        for routine in DUPLICATED_ROUTINES {")
lines.append("            assert!(")
lines.append("                !routine.copies.contains(&routine.ported),")
lines.append("                \"{:#X}\",")
lines.append("                routine.ported")
lines.append("            );")
lines.append("        }")
lines.append("    }")
lines.append("")
lines.append("    #[test]")
lines.append("    fn no_address_appears_twice_anywhere() {")
lines.append("        let mut seen: Vec<u32> = Vec::new();")
lines.append("        for routine in DUPLICATED_ROUTINES {")
lines.append("            seen.push(routine.ported);")
lines.append("            seen.extend_from_slice(routine.copies);")
lines.append("        }")
lines.append("        let before = seen.len();")
lines.append("        seen.sort_unstable();")
lines.append("        seen.dedup();")
lines.append("")
lines.append("        assert_eq!(seen.len(), before);")
lines.append("    }")
lines.append("")
lines.append("    #[test]")
lines.append("    fn every_routine_has_at_least_two_copies_and_names_where_it_went() {")
lines.append("        for routine in DUPLICATED_ROUTINES {")
lines.append("            assert!(routine.total_copies() >= 2, \"{:#X}\", routine.ported);")
lines.append("            assert!(routine.rust_path.contains(\"/src/\"), \"{:#X}\", routine.ported);")
lines.append("        }")
lines.append("    }")
lines.append("")
lines.append("    #[test]")
lines.append("    fn a_routine_knows_which_addresses_are_its_own() {")
lines.append("        let routine = DUPLICATED_ROUTINES[0];")
lines.append("")
lines.append("        assert!(routine.holds(routine.ported));")
lines.append("        assert!(routine.holds(routine.copies[0]));")
lines.append("        assert!(!routine.holds(0));")
lines.append("    }")
lines.append("")
lines.append("    #[test]")
lines.append("    fn the_largest_groups_are_templates_rather_than_repetition() {")
lines.append("        let largest = DUPLICATED_ROUTINES")
lines.append("            .into_iter()")
lines.append("            .map(DuplicatedRoutine::total_copies)")
lines.append("            .max()")
lines.append("            .unwrap_or(0);")
lines.append("")
lines.append("        assert!(largest > 50);")
lines.append("    }")
lines.append("}")

open(rust_out, 'w', encoding='utf-8').write("\n".join(lines) + "\n")

records = []
for group in groups:
    ported = group['ported'].upper()
    symbol = group['symbol'] or "(unnamed)"
    for copy in sorted(group['copies']):
        records.append({
            "beadId": "TIARA-f" + copy,
            "functionAddress": "0x" + copy.upper(),
            "ghidraSourcePath": "DecompiledSources/Tina16/functions/{}__FUN_{}.c".format(copy.upper().zfill(16), copy),
            "rustSourcePath": "crates/tiara-core/src/duplicated_routines.rs",
            "rustSymbol": "COPIES_OF_" + ported,
            "mappingKind": "shared-implementation",
            "notes": (
                "An exact duplicate of 0x{ported}, which is already ported as {symbol} in {path}. "
                "The two bodies are identical character for character once Ghidra's invented local "
                "names are set aside, and they call the same functions at the same addresses - so "
                "this is the same code compiled a second time, not merely code that looks alike. "
                "The binary carries {total} copies of it in all, which is what a generic container "
                "instantiated per element type, or a handler compiled into every form that wanted "
                "it, looks like from the outside. Registered in duplicated_routines::COPIES_OF_{ported} "
                "rather than ported again, so an address traced out of the original can still be "
                "followed to where its behaviour went."
            ).format(ported=ported, symbol=symbol, path=group['path'], total=group['count'] + 1),
        })

json.dump({"records": records}, open(map_out, 'w', encoding='utf-8'), indent=1)
print("registry: {} groups, {} copies".format(len(names), sum(g['count'] for g in groups)))
print("mapping records:", len(records))
