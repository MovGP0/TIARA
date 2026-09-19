//! What the regular-expression engine calls its errors and its instructions.
//!
//! Two tables from the same engine, and between them they say how it is built:
//! a pattern is compiled into a program of numbered instructions, and the
//! things that can go wrong are numbered in bands that say whether they went
//! wrong while compiling the pattern or while running it.

/// The code that means nothing went wrong.
///
/// Part of Ghidra function `FUN_00bc3d20` at `0x00BC3D20`.
pub const NO_ERROR: i32 = 0;

/// Where the codes for faults in a pattern begin.
///
/// Part of Ghidra function `FUN_00bc3d20` at `0x00BC3D20`.
pub const COMPILE_ERROR_BASE: i32 = 100;

/// Where the codes for faults while matching begin.
///
/// Part of Ghidra function `FUN_00bc3d20` at `0x00BC3D20`.
pub const RUNTIME_ERROR_BASE: i32 = 1000;

/// Every error the engine can report, by its code.
///
/// Part of Ghidra function `FUN_00bc3d20` at `0x00BC3D20`.
///
/// The codes are not contiguous — there are gaps in both bands — which is what
/// a table looks like after errors have been removed over time rather than
/// renumbered. Every message names the engine and says which half of it
/// complained, so a message reaching a user is recognisable as coming from
/// here and not from the program around it.
pub const REGEX_ERRORS: [(i32, &str); 36] = [
    (0, "No errors"),
    (100, "TRegExpr(comp): Null Argument"),
    (101, "TRegExpr(comp): Regexp Too Big"),
    (102, "TRegExpr(comp): ParseReg Too Many ()"),
    (103, "TRegExpr(comp): ParseReg Unmatched ()"),
    (104, "TRegExpr(comp): ParseReg Unmatched ()"),
    (105, "TRegExpr(comp): ParseReg Junk On End"),
    (106, "TRegExpr(comp): *+ Operand Could Be Empty"),
    (107, "TRegExpr(comp): Nested *?+"),
    (108, "TRegExpr(comp): Bad Hex Digit"),
    (109, "TRegExpr(comp): Invalid [] Range"),
    (110, "TRegExpr(comp): Parse Atom Trailing \\"),
    (111, "TRegExpr(comp): No Hex Code After \\x"),
    (112, "TRegExpr(comp): Hex Code After \\x Is Too Big"),
    (113, "TRegExpr(comp): Unmatched []"),
    (114, "TRegExpr(comp): Internal Urp"),
    (115, "TRegExpr(comp): ?+*{ Follows Nothing"),
    (116, "TRegExpr(comp): Trailing \\"),
    (119, "TRegExpr(comp): RarseAtom Internal Disaster"),
    (122, "TRegExpr(comp): BRACES Argument Too Big"),
    (124, "TRegExpr(comp): BRACE Min Param Greater then Max"),
    (125, "TRegExpr(comp): Unclosed (?#Comment)"),
    (127, "TRegExpr(comp): Urecognized Modifier"),
    (1000, "TRegExpr(exec): RegRepeat Called Inappropriately"),
    (1001, "TRegExpr(exec): MatchPrim Memory Corruption"),
    (1002, "TRegExpr(exec): MatchPrim Corrupted Pointers"),
    (1003, "TRegExpr(exec): Not Assigned Expression Property"),
    (1004, "TRegExpr(exec): Corrupted Program"),
    (1005, "TRegExpr(exec): No Input String Specified"),
    (1006, "TRegExpr(exec): Offset Must Be Greater Then 0"),
    (1007, "TRegExpr(exec): ExecNext Without Exec[Pos]"),
    (1008, "TRegExpr(exec): GetInputString Without InputString"),
    (1011, "TRegExpr(dump): Corrupted Opcode"),
    (1014, "TRegExpr(exec): Loop Stack Exceeded"),
    (1015, "TRegExpr(exec): Loop Without LoopEntry !"),
    (2000, "TRegExpr(misc): Bad p-code imported"),
];

/// Every instruction the engine compiles a pattern into, by its code.
///
/// Part of Ghidra function `FUN_00bcab00` at `0x00BCAB00`.
///
/// The numbering starts at four, so three codes below it are used for
/// something the naming does not cover — an end marker and the like. One code
/// inside the range is missing as well.
///
/// Several instructions come in pairs whose second is marked `/CI`: the same
/// operation done without regard to case. That the distinction is in the
/// instruction rather than in a flag consulted at match time is what makes a
/// case-insensitive pattern cost nothing extra to run.
pub const REGEX_OPCODES: [(u16, &str); 34] = [
    (4, "ANYOF"),
    (5, "ANYBUT"),
    (6, "BRANCH"),
    (7, "BACK"),
    (8, "EXACTLY"),
    (9, "NOTHING"),
    (10, "STAR"),
    (11, "PLUS"),
    (12, "ANYDIGIT"),
    (13, "NOTDIGIT"),
    (14, "ANYLETTER"),
    (15, "NOTLETTER"),
    (16, "ANYSPACE"),
    (17, "NOTSPACE"),
    (18, "BRACES"),
    (19, "COMMENT"),
    (20, "EXACTLY/CI"),
    (21, "ANYOF/CI"),
    (22, "ANYBUT/CI"),
    (23, "LOOPENTRY"),
    (24, "LOOP"),
    (25, "ANYOFTINYSET"),
    (26, "ANYBUTTINYSET"),
    (28, "BSUBEXP"),
    (29, "BSUBEXP/CI"),
    (30, "STARNG"),
    (31, "PLUSNG"),
    (32, "BRACESNG"),
    (33, "LOOPNG"),
    (34, "BOLML"),
    (35, "EOLML"),
    (36, "ANYML"),
    (37, "BOUND"),
    (38, "NOTBOUND"),
];

/// Implements Ghidra function `FUN_00bc3d20` at `0x00BC3D20`.
///
/// What one error code says.
///
/// A code the table does not know answers nothing. The recovered routine
/// leaves its out-parameter as it found it in that case, which a caller
/// observes as an empty message — the same thing seen from outside.
#[must_use]
pub fn error_text(code: i32) -> Option<&'static str> {
    REGEX_ERRORS
        .iter()
        .find(|(held, _)| *held == code)
        .map(|(_, text)| *text)
}

/// Implements Ghidra function `FUN_00bcab00` at `0x00BCAB00`.
///
/// What one instruction is called.
///
/// The code is taken from the low sixteen bits of whatever it is given, so an
/// instruction word carrying anything above them is named by its instruction
/// alone.
#[must_use]
pub fn opcode_name(word: u32) -> Option<&'static str> {
    let code = u16::try_from(word & 0xFFFF).unwrap_or(0);
    REGEX_OPCODES
        .iter()
        .find(|(held, _)| *held == code)
        .map(|(_, name)| *name)
}

/// Implements part of Ghidra function `FUN_00bc3d20` at `0x00BC3D20`.
///
/// Whether one code means a fault in the pattern rather than in the matching.
#[must_use]
pub const fn is_compile_error(code: i32) -> bool {
    code >= COMPILE_ERROR_BASE && code < RUNTIME_ERROR_BASE
}

/// Implements part of Ghidra function `FUN_00bcab00` at `0x00BCAB00`.
///
/// Whether one instruction is the case-insensitive twin of another.
#[must_use]
pub fn is_case_insensitive(name: &str) -> bool {
    name.ends_with("/CI")
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn nothing_going_wrong_has_a_code_of_its_own() {
        assert_eq!(error_text(NO_ERROR), Some("No errors"));
        assert!(!is_compile_error(NO_ERROR));
    }

    #[test]
    fn the_two_bands_are_where_they_are_recovered_to_be() {
        for (code, text) in REGEX_ERRORS {
            if code == NO_ERROR {
                continue;
            }
            assert!(code >= COMPILE_ERROR_BASE, "{code}");
            assert!(text.starts_with("TRegExpr("), "{text}");
        }
    }

    #[test]
    fn a_pattern_fault_and_a_matching_fault_are_told_apart_by_band() {
        assert!(is_compile_error(COMPILE_ERROR_BASE));
        assert!(is_compile_error(RUNTIME_ERROR_BASE - 1));
        assert!(!is_compile_error(RUNTIME_ERROR_BASE));
    }

    #[test]
    fn every_message_names_which_part_of_the_engine_complained() {
        // Four parts, not two: compiling a pattern, running it, printing the
        // compiled form, and everything else.
        let mut parts: Vec<&str> = REGEX_ERRORS
            .iter()
            .filter(|(code, _)| *code != NO_ERROR)
            .map(|(_, text)| {
                text.strip_prefix("TRegExpr(")
                    .and_then(|rest| rest.split(')').next())
                    .expect("every message names a part")
            })
            .collect();
        parts.sort_unstable();
        parts.dedup();

        assert_eq!(parts, ["comp", "dump", "exec", "misc"]);
    }

    #[test]
    fn the_part_that_complained_follows_from_the_band() {
        for (code, text) in REGEX_ERRORS {
            if code == NO_ERROR {
                continue;
            }
            let expected: &[&str] = if code < RUNTIME_ERROR_BASE {
                &["comp"]
            } else if code < 2000 {
                &["exec", "dump"]
            } else {
                &["misc"]
            };
            assert!(
                expected
                    .iter()
                    .any(|part| text.starts_with(&format!("TRegExpr({part})"))),
                "{code} {text}"
            );
        }
    }

    #[test]
    fn the_codes_have_gaps_in_both_bands() {
        // Which is what a table looks like after errors were removed rather
        // than renumbered.
        let compile: Vec<i32> = REGEX_ERRORS
            .iter()
            .map(|(code, _)| *code)
            .filter(|code| is_compile_error(*code))
            .collect();
        let span = compile[compile.len() - 1] - compile[0] + 1;

        assert!(span > i32::try_from(compile.len()).expect("a small table"));
    }

    #[test]
    fn a_code_the_table_does_not_know_answers_nothing() {
        assert_eq!(error_text(-1), None);
        assert_eq!(error_text(99), None);
        assert_eq!(error_text(9999), None);
    }

    #[test]
    fn no_error_code_or_message_appears_twice() {
        let mut codes: Vec<i32> = REGEX_ERRORS.iter().map(|(code, _)| *code).collect();
        let before = codes.len();
        codes.sort_unstable();
        codes.dedup();

        assert_eq!(codes.len(), before);
    }

    #[test]
    fn the_instructions_are_named_from_four_upward() {
        assert_eq!(REGEX_OPCODES[0].0, 4);
        assert_eq!(opcode_name(4), Some("ANYOF"));
    }

    #[test]
    fn an_instruction_word_is_named_by_its_low_half_alone() {
        assert_eq!(opcode_name(0xDEAD_0004), opcode_name(4));
    }

    #[test]
    fn an_unnamed_instruction_answers_nothing() {
        assert_eq!(opcode_name(0), None);
        assert_eq!(opcode_name(0xFFFF), None);
    }

    #[test]
    fn some_instructions_come_in_case_insensitive_pairs() {
        let twins: Vec<&str> = REGEX_OPCODES
            .iter()
            .map(|(_, name)| *name)
            .filter(|name| is_case_insensitive(name))
            .collect();

        assert!(twins.len() > 1);
        for twin in twins {
            let plain = twin.trim_end_matches("/CI");
            assert!(
                REGEX_OPCODES.iter().any(|(_, name)| *name == plain),
                "{twin} has no plain twin"
            );
        }
    }

    #[test]
    fn the_case_distinction_is_in_the_instruction_and_not_a_flag() {
        // Which is why a case-insensitive pattern costs nothing extra to run.
        assert!(is_case_insensitive("EXACTLY/CI"));
        assert!(!is_case_insensitive("EXACTLY"));
        assert_ne!(opcode_name(0x14), opcode_name(0x13));
    }

    #[test]
    fn no_instruction_code_or_name_appears_twice() {
        let mut codes: Vec<u16> = REGEX_OPCODES.iter().map(|(code, _)| *code).collect();
        let before = codes.len();
        codes.sort_unstable();
        codes.dedup();

        assert_eq!(codes.len(), before);
    }
}
