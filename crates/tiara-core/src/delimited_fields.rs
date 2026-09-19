//! Reaching one field of a delimited line by counting separators.
//!
//! Neither of these splits a line. Both walk it separator by separator until
//! they have counted far enough, and then work with what is left — which means
//! the position of a field is always recomputed from the start, and a caller
//! wanting several fields pays for each one separately.

/// Implements Ghidra function `FUN_012ed9f0` at `0x012ED9F0`.
///
/// Everything from one field to the end of the line.
///
/// Fields are numbered from one, and the first is the whole line. Each step
/// finds the next separator and throws away everything up to and including it,
/// so what comes back still carries every separator after the field asked for.
///
/// Asking past the end costs nothing and changes nothing: a step that finds no
/// separator deletes nothing and the next step finds no separator either, so
/// the answer settles on the last field however far past the end the number
/// goes.
#[must_use]
pub fn from_field(line: &str, separator: char, field: i32) -> String {
    let mut rest = line;
    for _ in 1..field {
        if let Some(position) = rest.find(separator) {
            rest = &rest[position + separator.len_utf8()..];
        }
    }
    rest.to_owned()
}

/// Implements Ghidra function `FUN_012edab0` at `0x012EDAB0`.
///
/// Puts something else in the place of one field.
///
/// The field is found by counting separators from the start, and what is put
/// back is everything before it, then the replacement, then everything from
/// the field's **second** character onward. So exactly one character of the
/// original is covered over, whatever the replacement's own length: this only
/// reads as a field replacement when the fields are one character each, which
/// is what the lines it is used on look like.
///
/// A field number of one names the first field, and past the end the counting
/// stops making progress and the replacement lands at the last separator.
#[must_use]
pub fn replace_single_character_field(
    line: &str,
    separator: char,
    field: i32,
    replacement: &str,
) -> String {
    let mut consumed = 0;
    let mut rest = line;
    for _ in 1..field {
        let Some(position) = rest.find(separator) else {
            break;
        };
        let step = position + separator.len_utf8();
        consumed += step;
        rest = &rest[step..];
    }

    let head = &line[..consumed];
    let tail_from = (consumed + 1).min(line.len());
    let tail = &line[next_boundary(line, tail_from)..];
    format!("{head}{replacement}{tail}")
}

/// The next place a string may be cut, at or after one byte.
///
/// Part of Ghidra function `FUN_012edab0` at `0x012EDAB0`.
///
/// The recovered code counts in characters that are all one unit wide, and
/// steps over exactly one of them. Stepping over one byte is the same thing
/// for everything it is used on, and for anything else this moves on to where
/// a cut is possible rather than refusing.
fn next_boundary(text: &str, from: usize) -> usize {
    let mut at = from.min(text.len());
    while at < text.len() && !text.is_char_boundary(at) {
        at += 1;
    }
    at
}

/// Implements Ghidra function `FUN_012f49c0` at `0x012F49C0`.
///
/// Takes one character off each end of a string, where it is there to take.
///
/// The two ends are not treated alike. The opening one is removed whenever the
/// string begins with the character. The closing one is removed only when the
/// character's **first** occurrence is the last character of what is left — so
/// a string carrying the character anywhere in the middle keeps its closing
/// one, and only a string with nothing else like it inside comes apart at both
/// ends.
///
/// A string left empty by the opening strip satisfies the closing test too in
/// the recovered code, because a character that is nowhere is at position zero
/// and the length is zero as well. Nothing comes of it either way: there is
/// nothing left to take.
///
/// The character itself is an untyped constant that did not survive, so the
/// caller says which it is.
#[must_use]
pub fn strip_surrounding(text: &str, character: char) -> String {
    let mut stripped = text;
    if stripped.starts_with(character) {
        stripped = &stripped[character.len_utf8()..];
    }

    let closing = stripped.len().saturating_sub(character.len_utf8());
    if stripped.find(character) == Some(closing) {
        stripped = &stripped[..closing];
    }
    stripped.to_owned()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn the_first_field_is_the_whole_line() {
        assert_eq!(from_field("a,b,c", ',', 1), "a,b,c");
    }

    #[test]
    fn a_later_field_carries_everything_after_it() {
        assert_eq!(from_field("a,b,c", ',', 2), "b,c");
        assert_eq!(from_field("a,b,c", ',', 3), "c");
    }

    #[test]
    fn asking_past_the_end_settles_on_the_last_field() {
        assert_eq!(from_field("a,b,c", ',', 4), "c");
        assert_eq!(from_field("a,b,c", ',', 99), "c");
    }

    #[test]
    fn a_line_with_no_separator_is_its_own_first_field() {
        assert_eq!(from_field("only", ',', 1), "only");
        assert_eq!(from_field("only", ',', 5), "only");
    }

    #[test]
    fn a_field_number_below_one_asks_for_nothing_and_gets_the_line() {
        assert_eq!(from_field("a,b,c", ',', 0), "a,b,c");
        assert_eq!(from_field("a,b,c", ',', -3), "a,b,c");
    }

    #[test]
    fn empty_fields_are_counted_like_any_other() {
        assert_eq!(from_field("a,,c", ',', 2), ",c");
        assert_eq!(from_field("a,,c", ',', 3), "c");
    }

    #[test]
    fn replacing_the_first_field_covers_its_one_character() {
        assert_eq!(
            replace_single_character_field("a,b,c", ',', 1, "X"),
            "X,b,c"
        );
    }

    #[test]
    fn replacing_a_later_field_keeps_both_sides_of_it() {
        assert_eq!(
            replace_single_character_field("a,b,c", ',', 2, "X"),
            "a,X,c"
        );
        assert_eq!(
            replace_single_character_field("a,b,c", ',', 3, "X"),
            "a,b,X"
        );
    }

    #[test]
    fn the_replacement_may_be_longer_than_what_it_replaces() {
        assert_eq!(
            replace_single_character_field("a,b,c", ',', 2, "long"),
            "a,long,c"
        );
    }

    #[test]
    fn the_replacement_may_be_nothing_at_all() {
        assert_eq!(replace_single_character_field("a,b,c", ',', 2, ""), "a,,c");
    }

    #[test]
    fn exactly_one_character_of_a_longer_field_is_covered() {
        // Which is the whole of why this only works on single-character
        // fields.
        assert_eq!(
            replace_single_character_field("ab,cd", ',', 1, "X"),
            "Xb,cd"
        );
    }

    #[test]
    fn replacing_past_the_end_lands_after_the_last_separator() {
        assert_eq!(
            replace_single_character_field("a,b,c", ',', 9, "X"),
            "a,b,X"
        );
    }

    #[test]
    fn a_semicolon_separated_line_works_the_same_way() {
        assert_eq!(
            replace_single_character_field("a;b;c", ';', 2, "X"),
            "a;X;c"
        );
        assert_eq!(from_field("a;b;c", ';', 2), "b;c");
    }

    #[test]
    fn replacing_in_a_line_with_no_separator_covers_its_first_character() {
        assert_eq!(replace_single_character_field("abc", ',', 1, "X"), "Xbc");
    }

    #[test]
    fn an_empty_line_is_replaced_by_the_replacement_alone() {
        assert_eq!(replace_single_character_field("", ',', 1, "X"), "X");
    }
}

#[cfg(test)]
mod surrounding_tests {
    use super::*;

    #[test]
    fn a_quoted_string_comes_apart_at_both_ends() {
        assert_eq!(strip_surrounding("\"name\"", '"'), "name");
    }

    #[test]
    fn a_string_quoted_at_one_end_only_loses_that_end() {
        assert_eq!(strip_surrounding("\"name", '"'), "name");
        assert_eq!(strip_surrounding("name\"", '"'), "name");
    }

    #[test]
    fn a_string_with_no_quotes_is_left_alone() {
        assert_eq!(strip_surrounding("name", '"'), "name");
    }

    #[test]
    fn a_quote_in_the_middle_keeps_the_closing_one() {
        // The closing test looks at the FIRST occurrence, which is not the
        // last character here.
        assert_eq!(strip_surrounding("\"a\"b\"", '"'), "a\"b\"");
    }

    #[test]
    fn a_quote_in_the_middle_of_an_unquoted_string_changes_nothing() {
        assert_eq!(strip_surrounding("a\"b", '"'), "a\"b");
    }

    #[test]
    fn an_empty_string_comes_back_empty() {
        assert_eq!(strip_surrounding("", '"'), "");
    }

    #[test]
    fn a_string_of_one_quote_comes_back_empty() {
        assert_eq!(strip_surrounding("\"", '"'), "");
    }

    #[test]
    fn a_string_of_two_quotes_comes_back_empty() {
        assert_eq!(strip_surrounding("\"\"", '"'), "");
    }

    #[test]
    fn the_character_is_the_callers_to_choose() {
        assert_eq!(strip_surrounding("'name'", '\''), "name");
        assert_eq!(strip_surrounding("|name|", '|'), "name");
        assert_eq!(strip_surrounding("'name'", '"'), "'name'");
    }

    #[test]
    fn a_doubly_quoted_string_loses_only_its_opening_quote() {
        // The opening one comes off because the string begins with it. The
        // closing one stays, because by then the first occurrence is the one
        // still at the front rather than the one at the end.
        assert_eq!(strip_surrounding("\"\"name\"\"", '"'), "\"name\"\"");
    }
}
