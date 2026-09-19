//! Working out what a delimited file is delimited by.
//!
//! The application accepts two separators and has to guess which a given file
//! uses. What it does when it cannot guess is the part worth keeping: there
//! are two callers, and they disagree about whether that is a problem.

/// The separator preferred when a line carries both.
pub const PREFERRED_SEPARATOR: char = ',';

/// The separator accepted when the preferred one is absent.
pub const ALTERNATIVE_SEPARATOR: char = ';';

/// What the sniffer answers when it finds neither.
///
/// Part of Ghidra function `FUN_012e1bd0` at `0x012E1BD0`.
///
/// A space, which is not a separator this application accepts — so the
/// sentinel is a real character rather than a flag, and a caller that ignores
/// the distinction splits on spaces instead of failing.
pub const NO_SEPARATOR_FOUND: char = ' ';

/// Reported when a file uses neither accepted separator.
pub const NON_STANDARD_SEPARATOR_MESSAGE: &str =
    "Separate character is not standard! Use comma or semicolon.";

/// Implements Ghidra function `FUN_012e1bd0` at `0x012E1BD0`.
///
/// Guesses what one line is delimited by.
///
/// The preferred separator is looked for first and wins outright when both
/// appear, so a line carrying a semicolon inside a comma-separated field is
/// read the way it was written rather than the other way round. Only the
/// presence of a character is tested — not how many there are — so one stray
/// comma in a semicolon-separated file is enough to mislead it, which is why
/// the stricter caller exists.
#[must_use]
pub fn sniff_separator(line: &str) -> char {
    if line.contains(PREFERRED_SEPARATOR) {
        return PREFERRED_SEPARATOR;
    }
    if line.contains(ALTERNATIVE_SEPARATOR) {
        return ALTERNATIVE_SEPARATOR;
    }
    NO_SEPARATOR_FOUND
}

/// How strictly a caller wants the guess taken.
///
/// Part of Ghidra function `FUN_012e1ca0` at `0x012E1CA0`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SeparatorStrictness {
    /// Recovered mode 0: a file using neither separator is refused.
    Required,
    /// Recovered mode 1: it is accepted, and the caller deals with whatever
    /// comes back.
    Optional,
    /// Any other mode, which does not look at the line at all.
    Skipped,
}

impl SeparatorStrictness {
    /// Recovers a strictness from its mode.
    #[must_use]
    pub const fn from_mode(mode: i32) -> Self {
        match mode {
            0 => Self::Required,
            1 => Self::Optional,
            _ => Self::Skipped,
        }
    }
}

/// Why a separator could not be settled on.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct NonStandardSeparator;

impl core::fmt::Display for NonStandardSeparator {
    fn fmt(&self, formatter: &mut core::fmt::Formatter<'_>) -> core::fmt::Result {
        formatter.write_str(NON_STANDARD_SEPARATOR_MESSAGE)
    }
}

impl std::error::Error for NonStandardSeparator {}

/// Implements Ghidra function `FUN_012e1ca0` at `0x012E1CA0`.
///
/// Settles what a line is delimited by, as strictly as the caller asked.
///
/// The same guess serves all three modes; they differ only in what they do
/// with a failure. The strict mode refuses outright, because a file it cannot
/// read is better reported than silently read wrongly. The lenient one hands
/// the sentinel back, leaving the caller to decide. The third does not look
/// at all and answers the sentinel without reading anything — so a caller
/// that already knows its separator pays nothing to ask.
///
/// # Errors
///
/// Returns [`NonStandardSeparator`] when the strict mode finds neither
/// separator.
pub fn settle_separator(
    line: &str,
    strictness: SeparatorStrictness,
) -> Result<char, NonStandardSeparator> {
    match strictness {
        SeparatorStrictness::Skipped => Ok(NO_SEPARATOR_FOUND),
        SeparatorStrictness::Optional => Ok(sniff_separator(line)),
        SeparatorStrictness::Required => {
            let found = sniff_separator(line);
            if found == NO_SEPARATOR_FOUND {
                return Err(NonStandardSeparator);
            }
            Ok(found)
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn a_comma_separated_line_is_recognised() {
        assert_eq!(sniff_separator("a,b,c"), ',');
    }

    #[test]
    fn a_semicolon_separated_one_is_too() {
        assert_eq!(sniff_separator("a;b;c"), ';');
    }

    #[test]
    fn the_comma_wins_outright_when_a_line_carries_both() {
        assert_eq!(sniff_separator("a,b;c"), ',');
        assert_eq!(sniff_separator("a;b,c"), ',');
    }

    #[test]
    fn a_line_with_neither_answers_the_sentinel() {
        assert_eq!(sniff_separator("a b c"), NO_SEPARATOR_FOUND);
        assert_eq!(sniff_separator(""), NO_SEPARATOR_FOUND);
    }

    #[test]
    fn the_sentinel_is_a_real_character_rather_than_a_flag() {
        // Which is why a caller that ignores it splits on spaces.
        assert_eq!(NO_SEPARATOR_FOUND, ' ');
        assert_ne!(NO_SEPARATOR_FOUND, PREFERRED_SEPARATOR);
        assert_ne!(NO_SEPARATOR_FOUND, ALTERNATIVE_SEPARATOR);
    }

    #[test]
    fn only_presence_is_tested_so_one_stray_comma_misleads_it() {
        // A semicolon-separated line with a comma inside one field.
        assert_eq!(sniff_separator("a;b,c;d"), ',');
    }

    #[test]
    fn the_three_modes_come_from_their_recovered_values() {
        assert_eq!(
            SeparatorStrictness::from_mode(0),
            SeparatorStrictness::Required
        );
        assert_eq!(
            SeparatorStrictness::from_mode(1),
            SeparatorStrictness::Optional
        );
        for mode in [2, -1, 99] {
            assert_eq!(
                SeparatorStrictness::from_mode(mode),
                SeparatorStrictness::Skipped
            );
        }
    }

    #[test]
    fn the_strict_mode_refuses_a_file_it_cannot_read() {
        assert_eq!(
            settle_separator("a b c", SeparatorStrictness::Required),
            Err(NonStandardSeparator)
        );
    }

    #[test]
    fn the_lenient_mode_hands_the_sentinel_back_instead() {
        assert_eq!(
            settle_separator("a b c", SeparatorStrictness::Optional),
            Ok(NO_SEPARATOR_FOUND)
        );
    }

    #[test]
    fn both_modes_agree_whenever_there_is_something_to_find() {
        for line in ["a,b", "a;b"] {
            assert_eq!(
                settle_separator(line, SeparatorStrictness::Required),
                settle_separator(line, SeparatorStrictness::Optional),
                "{line}"
            );
        }
    }

    #[test]
    fn the_third_mode_does_not_read_the_line_at_all() {
        assert_eq!(
            settle_separator("a,b,c", SeparatorStrictness::Skipped),
            Ok(NO_SEPARATOR_FOUND)
        );
    }

    #[test]
    fn the_refusal_says_which_separators_are_accepted() {
        let message = NonStandardSeparator.to_string();

        assert!(message.contains("comma"));
        assert!(message.contains("semicolon"));
    }
}
