//! Reading the `action` elements of a document into three flags.
//!
//! The document is asked for every element called `action` and each one is
//! looked at for a `mode`. Three particular modes each raise a flag, and the
//! flags are the whole of what comes back — so what is learned is that some
//! action has a mode, never which action had it.

/// How many flags one document is read into.
///
/// Part of Ghidra function `FUN_012f2450` at `0x012F2450`.
pub const MODE_FLAG_COUNT: usize = 3;

/// How large the record holding them is.
///
/// Part of Ghidra function `FUN_012f2450` at `0x012F2450`.
///
/// Thirty-two bytes for three flags. The other twenty-nine are never written
/// here, so whatever a caller reads from them is whatever the allocation left
/// there.
pub const MODE_RECORD_SIZE: usize = 0x20;

/// The three mode names, in the order they are tested.
///
/// Part of Ghidra function `FUN_012f2450` at `0x012F2450`.
///
/// The names themselves are constants Ghidra did not type and did not survive,
/// so they come from the caller. What is recovered is that there are exactly
/// three, that each raises its own flag, and that they are compared without
/// regard to case.
#[derive(Debug, Clone, Copy)]
pub struct ModeNames<'a>(pub [&'a str; MODE_FLAG_COUNT]);

/// One `action` element as the reader sees it.
///
/// Part of Ghidra function `FUN_012f2450` at `0x012F2450`.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ActionElement {
    /// The element's `mode` attribute.
    pub mode: String,
    /// The element's `action` attribute.
    ///
    /// Read out of the document on every turn of the loop and then never
    /// looked at. It is carried here rather than dropped because reading it is
    /// something the original does, and a reader that stopped doing so would
    /// behave differently against a document where fetching an attribute is
    /// not free.
    pub action: String,
}

/// A document that can be asked for its `action` elements.
///
/// Part of Ghidra function `FUN_012f2450` at `0x012F2450`.
pub trait ActionDocument {
    /// Every element called `action`, in document order.
    fn action_elements(&self) -> Vec<ActionElement>;
}

/// Implements part of Ghidra function `FUN_012f2450` at `0x012F2450`.
///
/// Whether two mode names are the same.
///
/// The comparison ignores case, so a document written with `Read` and one
/// written with `read` are read alike. The recovered code reaches this through
/// two shortcuts first — the same string twice is equal without looking, and a
/// missing one is unequal to anything, including another missing one.
#[must_use]
pub fn mode_matches(mode: &str, name: &str) -> bool {
    mode.eq_ignore_ascii_case(name)
}

/// Implements Ghidra function `FUN_012f2450` at `0x012F2450`.
///
/// Reads a document's `action` elements into three flags.
///
/// Every element is looked at and every flag it matches is raised; nothing
/// ever lowers one. So the answer says whether the document contains an action
/// of each mode anywhere at all, and one element can raise more than one flag
/// if the caller has given two of the names the same spelling.
///
/// The `action` attribute is fetched for every element and then never used,
/// which is why the flags cannot say which action was found — only that one
/// was.
#[must_use]
pub fn read_action_modes<Document: ActionDocument>(
    document: &Document,
    names: &ModeNames<'_>,
) -> [bool; MODE_FLAG_COUNT] {
    let mut flags = [false; MODE_FLAG_COUNT];
    for element in document.action_elements() {
        for (flag, name) in flags.iter_mut().zip(names.0) {
            if mode_matches(&element.mode, name) {
                *flag = true;
            }
        }
    }
    flags
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Default)]
    struct Document(Vec<ActionElement>);

    impl Document {
        fn with(elements: &[(&str, &str)]) -> Self {
            Self(
                elements
                    .iter()
                    .map(|(mode, action)| ActionElement {
                        mode: (*mode).to_owned(),
                        action: (*action).to_owned(),
                    })
                    .collect(),
            )
        }
    }

    impl ActionDocument for Document {
        fn action_elements(&self) -> Vec<ActionElement> {
            self.0.clone()
        }
    }

    fn names() -> ModeNames<'static> {
        ModeNames(["read", "write", "run"])
    }

    #[test]
    fn a_document_with_nothing_in_it_raises_no_flag() {
        assert_eq!(
            read_action_modes(&Document::default(), &names()),
            [false; MODE_FLAG_COUNT]
        );
    }

    #[test]
    fn each_mode_raises_its_own_flag() {
        for (index, name) in names().0.into_iter().enumerate() {
            let document = Document::with(&[(name, "anything")]);
            let mut expected = [false; MODE_FLAG_COUNT];
            expected[index] = true;

            assert_eq!(read_action_modes(&document, &names()), expected, "{name}");
        }
    }

    #[test]
    fn a_mode_none_of_the_three_names_raises_nothing() {
        let document = Document::with(&[("delete", "anything")]);

        assert_eq!(
            read_action_modes(&document, &names()),
            [false; MODE_FLAG_COUNT]
        );
    }

    #[test]
    fn modes_are_matched_without_regard_to_case() {
        let document = Document::with(&[("READ", "a"), ("Write", "b")]);

        assert_eq!(read_action_modes(&document, &names()), [true, true, false]);
    }

    #[test]
    fn flags_gather_across_the_whole_document() {
        let document = Document::with(&[("read", "a"), ("run", "b"), ("read", "c")]);

        assert_eq!(read_action_modes(&document, &names()), [true, false, true]);
    }

    #[test]
    fn nothing_ever_lowers_a_flag_once_it_is_raised() {
        let document = Document::with(&[("read", "a"), ("delete", "b")]);

        assert_eq!(read_action_modes(&document, &names()), [true, false, false]);
    }

    #[test]
    fn the_answer_cannot_say_which_action_had_the_mode() {
        // The two documents differ only in the attribute the reader discards.
        let first = Document::with(&[("read", "open")]);
        let second = Document::with(&[("read", "close")]);

        assert_eq!(
            read_action_modes(&first, &names()),
            read_action_modes(&second, &names())
        );
    }

    #[test]
    fn one_element_raises_two_flags_when_two_names_are_spelled_alike() {
        let document = Document::with(&[("read", "a")]);
        let doubled = ModeNames(["read", "read", "run"]);

        assert_eq!(read_action_modes(&document, &doubled), [true, true, false]);
    }

    #[test]
    fn an_empty_mode_matches_only_an_empty_name() {
        assert!(mode_matches("", ""));
        assert!(!mode_matches("", "read"));
        assert!(!mode_matches("read", ""));
    }

    #[test]
    fn most_of_the_record_holding_the_flags_is_never_written() {
        let untouched = MODE_RECORD_SIZE - MODE_FLAG_COUNT;

        assert_eq!(untouched, 29);
    }
}
