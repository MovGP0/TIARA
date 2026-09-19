//! Taking apart the command written against a test case.
//!
//! A case's entry in the old settings file is one line of text saying what to
//! do with the circuit, and the document wants that as attributes. Everything
//! here is that one translation — read a keyword, decide between saving and
//! comparing, and for a comparison pull out the three things it needs.
//!
//! Almost every mark the text is cut on is a constant Ghidra did not type and
//! that did not survive, so the marks come from the caller. What is recovered
//! is the shape: which mark separates what from what, and in which order.

/// What a case is done with when the command says to keep it.
///
/// Part of Ghidra function `FUN_012f2780` at `0x012F2780`.
pub const SAVE_ACTION: &str = "Save";

/// And when it says to check it against something kept earlier.
///
/// Part of Ghidra function `FUN_012f2780` at `0x012F2780`.
pub const COMPARE_ACTION: &str = "Compare";

/// The marks a command is read with.
///
/// Part of Ghidra function `FUN_012f2780` at `0x012F2780`.
#[derive(Debug, Clone, Copy)]
pub struct CommandSyntax<'a> {
    /// The word whose presence starts an action — and which becomes the
    /// action's mode.
    ///
    /// The same constant is both searched for and written out, so this writer
    /// only ever produces one mode. The reader at `0x012F2450` knows three, so
    /// the other two must come from elsewhere.
    pub mode_keyword: &'a str,
    /// What ends the part of the command the action is read from.
    pub segment_end: &'a str,
    /// What opens the bracket a comparison's arguments sit in.
    pub argument_open: &'a str,
    /// What stands between those arguments.
    pub argument_separator: &'a str,
    /// What the action is called when it is neither saving nor comparing.
    pub other_action: &'a str,
}

/// What one command becomes.
///
/// Part of Ghidra function `FUN_012f2780` at `0x012F2780`.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ActionAttributes {
    /// Always the keyword that started it.
    pub mode: String,
    /// Saving, comparing, or whatever the third thing is called.
    pub action: String,
    /// Which curve a comparison is against.
    pub ref_curve: String,
    /// How far off it may be.
    pub tolerance: String,
    /// How many points it is checked at.
    pub points: String,
}

/// One-based position of one text in another, searching from one place.
///
/// Zero where it is not there, which is what the recovered code tests
/// against.
fn position(haystack: &str, needle: &str, from: usize) -> usize {
    if needle.is_empty() {
        return 0;
    }
    let characters: Vec<char> = haystack.chars().collect();
    let wanted: Vec<char> = needle.chars().collect();
    let start = from.max(1) - 1;
    if start + wanted.len() > characters.len() {
        return 0;
    }
    (start..=characters.len() - wanted.len())
        .find(|at| characters[*at..*at + wanted.len()] == wanted[..])
        .map_or(0, |at| at + 1)
}

/// The recovered `Copy`: one-based start, a count that may come out negative.
fn copy(text: &str, start: usize, count: isize) -> String {
    if count <= 0 || start == 0 {
        return String::new();
    }
    text.chars()
        .skip(start - 1)
        .take(usize::try_from(count).unwrap_or(0))
        .collect()
}

/// The recovered `Delete` of a run from the front.
fn delete_front(text: &str, count: usize) -> String {
    text.chars().skip(count).collect()
}

/// Implements Ghidra function `FUN_012f2780` at `0x012F2780`.
///
/// Reads one command into the attributes of an action.
///
/// Nothing at all happens unless the command carries the mode keyword: no
/// element is made, so a case whose command means nothing gets no action
/// rather than an empty one.
///
/// What is read is the stretch from the keyword up to the terminator. When
/// there is no terminator that stretch comes out empty — the recovered length
/// goes negative and the copy yields nothing — so the action falls through to
/// the third name, the one for commands that are neither of the two known.
///
/// Saving is tested for before comparing, so a command carrying both words is
/// a save.
///
/// What is taken as a comparison's arguments is everything after the opening
/// bracket except the **last two characters** of the stretch. So whatever
/// closes the bracket is two characters long — and if it is only one, the
/// last character of the arguments goes with it. The recovered arithmetic is
/// kept as it is rather than corrected, because which of those two is the
/// case depends on a mark that did not survive.
///
/// Those arguments are then cut on the separator, in order: the curve, the
/// tolerance, and everything still left as the points. A comparison with no
/// separator at all therefore puts the whole of its arguments in the points
/// and leaves the first two empty, rather than failing.
#[must_use]
pub fn parse_command(command: &str, syntax: &CommandSyntax<'_>) -> Option<ActionAttributes> {
    let keyword_at = position(command, syntax.mode_keyword, 1);
    if keyword_at == 0 {
        return None;
    }

    let end_at = position(command, syntax.segment_end, keyword_at);
    let segment = copy(
        command,
        keyword_at,
        isize::try_from(end_at).unwrap_or(0) - isize::try_from(keyword_at).unwrap_or(0),
    );

    let mut attributes = ActionAttributes {
        mode: syntax.mode_keyword.to_owned(),
        action: syntax.other_action.to_owned(),
        ref_curve: String::new(),
        tolerance: String::new(),
        points: String::new(),
    };

    if position(&segment, SAVE_ACTION, 1) >= 1 {
        SAVE_ACTION.clone_into(&mut attributes.action);
        return Some(attributes);
    }

    let compare_at = position(&segment, COMPARE_ACTION, 1);
    if compare_at < 1 {
        return Some(attributes);
    }
    COMPARE_ACTION.clone_into(&mut attributes.action);

    let open_at = position(&segment, syntax.argument_open, compare_at);
    let length = isize::try_from(segment.chars().count()).unwrap_or(0);
    let open = isize::try_from(open_at).unwrap_or(0);
    let mut arguments = copy(&segment, open_at + 1, length - open - 2);

    let first = position(&arguments, syntax.argument_separator, 1);
    attributes.ref_curve = copy(&arguments, 1, isize::try_from(first).unwrap_or(0) - 1);

    arguments = delete_front(
        &arguments,
        position(&arguments, syntax.argument_separator, 1),
    );
    let second = position(&arguments, syntax.argument_separator, 1);
    attributes.tolerance = copy(&arguments, 1, isize::try_from(second).unwrap_or(0) - 1);

    let third = position(&arguments, syntax.argument_separator, 1);
    attributes.points = copy(
        &arguments,
        third + 1,
        isize::try_from(arguments.chars().count()).unwrap_or(0),
    );

    Some(attributes)
}

#[cfg(test)]
mod tests {
    use super::*;

    fn syntax() -> CommandSyntax<'static> {
        CommandSyntax {
            mode_keyword: "Run",
            segment_end: ";",
            argument_open: "(",
            argument_separator: ",",
            other_action: "None",
        }
    }

    #[test]
    fn a_command_without_the_keyword_makes_no_action_at_all() {
        assert_eq!(parse_command("nothing here;", &syntax()), None);
        assert_eq!(parse_command("", &syntax()), None);
    }

    #[test]
    fn the_keyword_is_what_the_mode_is_set_to() {
        let action = parse_command("Run Save;", &syntax()).expect("an action");

        assert_eq!(action.mode, "Run");
    }

    #[test]
    fn a_command_that_says_to_save_is_a_save() {
        let action = parse_command("Run Save;", &syntax()).expect("an action");

        assert_eq!(action.action, SAVE_ACTION);
        assert_eq!(action.ref_curve, "");
    }

    #[test]
    fn saving_is_tested_for_before_comparing() {
        let action = parse_command("Run Save Compare(a,1,2) ;", &syntax()).expect("an action");

        assert_eq!(action.action, SAVE_ACTION);
    }

    #[test]
    fn a_command_that_is_neither_takes_the_third_name() {
        let action = parse_command("Run something;", &syntax()).expect("an action");

        assert_eq!(action.action, "None");
    }

    #[test]
    fn a_command_with_no_terminator_reads_as_neither() {
        // The stretch between the keyword and a terminator that is not there
        // comes out empty.
        let action = parse_command("Run Save", &syntax()).expect("an action");

        assert_eq!(action.action, "None");
    }

    #[test]
    fn the_arguments_stop_two_characters_before_the_end_of_the_stretch() {
        // A command whose bracket is closed by a single character loses the
        // last character of its arguments with it.
        let action = parse_command("Run Compare(out,5%,100);", &syntax()).expect("an action");

        assert_eq!(action.points, "10");
    }

    #[test]
    fn a_comparison_gives_up_its_three_arguments_in_order() {
        let action = parse_command("Run Compare(out,5%,100) ;", &syntax()).expect("an action");

        assert_eq!(action.action, COMPARE_ACTION);
        assert_eq!(action.ref_curve, "out");
        assert_eq!(action.tolerance, "5%");
        assert_eq!(action.points, "100");
    }

    #[test]
    fn the_points_take_everything_still_left() {
        let action = parse_command("Run Compare(out,5%,100,200) ;", &syntax()).expect("an action");

        assert_eq!(action.points, "100,200");
    }

    #[test]
    fn a_comparison_with_no_separator_puts_it_all_in_the_points() {
        let action = parse_command("Run Compare(out) ;", &syntax()).expect("an action");

        assert_eq!(action.ref_curve, "");
        assert_eq!(action.tolerance, "");
        assert_eq!(action.points, "out");
    }

    #[test]
    fn a_comparison_with_one_separator_leaves_the_tolerance_empty() {
        let action = parse_command("Run Compare(out,100) ;", &syntax()).expect("an action");

        assert_eq!(action.ref_curve, "out");
        assert_eq!(action.tolerance, "");
        assert_eq!(action.points, "100");
    }

    #[test]
    fn the_marks_are_the_callers_to_choose() {
        let other = CommandSyntax {
            mode_keyword: "Do",
            segment_end: "|",
            argument_open: "[",
            argument_separator: ";",
            other_action: "?",
        };
        let action = parse_command("Do Compare[out;5%;100] |", &other).expect("an action");

        assert_eq!(action.mode, "Do");
        assert_eq!(action.ref_curve, "out");
        assert_eq!(action.tolerance, "5%");
        assert_eq!(action.points, "100");
    }

    #[test]
    fn this_writer_only_ever_produces_one_mode() {
        // The reader at 0x012F2450 knows three; the other two come from
        // somewhere else.
        let first = parse_command("Run Save;", &syntax()).expect("an action");
        let second = parse_command("Run Compare(a,b,c) ;", &syntax()).expect("an action");

        assert_eq!(first.mode, second.mode);
    }

    #[test]
    fn the_keyword_may_sit_anywhere_in_the_command() {
        let action = parse_command("please Run Save;", &syntax()).expect("an action");

        assert_eq!(action.action, SAVE_ACTION);
    }

    #[test]
    fn only_what_lies_before_the_terminator_is_read() {
        let action = parse_command("Run;Save", &syntax()).expect("an action");

        assert_eq!(action.action, "None");
    }
}
