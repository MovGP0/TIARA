//! The recovered tab strip: the pages behind it and what happens when one
//! goes.
//!
//! A tab strip keeps two things in step — the items it holds and the tabs the
//! user sees — and the operations here are the ones that have to touch both.
//! Everything works by index, because that is the only thing the two sides
//! share.

/// What removing a page left selected.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SelectionAfterRemoval {
    /// Nothing is left to select.
    Nothing,
    /// The page now at this index.
    Page(usize),
}

/// Which index is selected once a page is removed.
///
/// Part of Ghidra function `FUN_01cec240` at `0x01CEC240`.
///
/// The page that slides into the removed one's place is selected, or the last
/// page when the removed one was at the end — so the selection stays where
/// the user was looking rather than jumping to the front. An empty strip
/// selects nothing at all.
///
/// `remaining` is the count *after* the removal.
#[must_use]
pub const fn selection_after_removal(removed: usize, remaining: usize) -> SelectionAfterRemoval {
    if remaining == 0 {
        return SelectionAfterRemoval::Nothing;
    }
    let last = remaining - 1;
    SelectionAfterRemoval::Page(if removed < last { removed } else { last })
}

/// What removing one page needs from the strip.
pub trait TabStripHost {
    /// Whether the page at one index is of the second kind.
    ///
    /// The two kinds are reported back through different channels, which is
    /// the only thing the distinction is used for.
    fn is_second_kind(&mut self, index: usize) -> bool;

    /// Frees the page's own object.
    fn free_page(&mut self, index: usize);

    /// Removes it from the collection.
    fn remove_from_collection(&mut self, index: usize);

    /// Removes its tab.
    fn remove_tab(&mut self, index: usize);

    /// How many pages are left.
    fn remaining(&mut self) -> usize;

    /// Selects one tab, or none.
    fn select(&mut self, selection: SelectionAfterRemoval);

    /// Which tab ended up selected.
    fn selected_index(&mut self) -> usize;
}

/// What a removal left behind.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub struct RemovalResult {
    /// The newly selected page, when it is of the first kind.
    pub first_kind: Option<usize>,
    /// The newly selected page, when it is of the second.
    pub second_kind: Option<usize>,
}

/// Implements Ghidra function `FUN_01cec240` at `0x01CEC240`.
///
/// Removes one page and reports whatever ended up selected in its place.
///
/// The caller is handed the new selection through one of two out-parameters
/// chosen by what kind of page it is, and *both* are cleared first — so a
/// removal that leaves nothing selected clears whatever the caller was
/// holding rather than leaving it pointing at a freed page.
///
/// The recovered handler tests the removed page's kind before freeing it and
/// then frees it identically either way, so that test has no effect; the kind
/// that matters is the *new* selection's. This port keeps the freeing
/// unconditional and asks about the kind only where it is used.
pub fn remove_page(host: &mut impl TabStripHost, index: usize) -> RemovalResult {
    host.free_page(index);
    host.remove_from_collection(index);
    host.remove_tab(index);

    let remaining = host.remaining();
    let selection = selection_after_removal(index, remaining);
    host.select(selection);

    if selection == SelectionAfterRemoval::Nothing {
        return RemovalResult::default();
    }

    let selected = host.selected_index();
    if host.is_second_kind(selected) {
        RemovalResult {
            first_kind: None,
            second_kind: Some(selected),
        }
    } else {
        RemovalResult {
            first_kind: Some(selected),
            second_kind: None,
        }
    }
}

/// What renaming one page needs from the strip.
pub trait TabRenameHost {
    /// Writes the name onto the page's own object.
    fn set_page_name(&mut self, index: usize, name: &str);

    /// Writes it into the collection's entry.
    fn set_collection_name(&mut self, index: usize, name: &str);

    /// Writes it onto the visible tab.
    fn set_tab_caption(&mut self, index: usize, name: &str);
}

/// Implements Ghidra function `FUN_01cec3f0` at `0x01CEC3F0`.
///
/// Renames one page.
///
/// The name is written in three places because the strip keeps three: the
/// page's own object, the collection's entry for it, and the tab the user
/// reads. None of them derives from the others, which is why a rename that
/// touched only one would leave the strip disagreeing with itself.
pub fn rename_page(host: &mut impl TabRenameHost, index: usize, name: &str) {
    host.set_page_name(index, name);
    host.set_collection_name(index, name);
    host.set_tab_caption(index, name);
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn removing_a_page_selects_whatever_slid_into_its_place() {
        assert_eq!(
            selection_after_removal(1, 4),
            SelectionAfterRemoval::Page(1)
        );
    }

    #[test]
    fn removing_the_last_page_selects_the_new_last_one() {
        assert_eq!(
            selection_after_removal(4, 4),
            SelectionAfterRemoval::Page(3)
        );
        assert_eq!(
            selection_after_removal(3, 3),
            SelectionAfterRemoval::Page(2)
        );
    }

    #[test]
    fn removing_the_only_page_leaves_nothing_selected() {
        assert_eq!(
            selection_after_removal(0, 0),
            SelectionAfterRemoval::Nothing
        );
    }

    #[test]
    fn removing_the_first_of_many_keeps_the_selection_at_the_front() {
        assert_eq!(
            selection_after_removal(0, 3),
            SelectionAfterRemoval::Page(0)
        );
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum Step {
        Free(usize),
        RemoveFromCollection(usize),
        RemoveTab(usize),
        Select(SelectionAfterRemoval),
    }

    #[derive(Debug, Default)]
    struct Strip {
        remaining: usize,
        selected: usize,
        second_kind: Vec<usize>,
        steps: Vec<Step>,
    }

    impl TabStripHost for Strip {
        fn is_second_kind(&mut self, index: usize) -> bool {
            self.second_kind.contains(&index)
        }

        fn free_page(&mut self, index: usize) {
            self.steps.push(Step::Free(index));
        }

        fn remove_from_collection(&mut self, index: usize) {
            self.steps.push(Step::RemoveFromCollection(index));
        }

        fn remove_tab(&mut self, index: usize) {
            self.steps.push(Step::RemoveTab(index));
        }

        fn remaining(&mut self) -> usize {
            self.remaining
        }

        fn select(&mut self, selection: SelectionAfterRemoval) {
            self.steps.push(Step::Select(selection));
        }

        fn selected_index(&mut self) -> usize {
            self.selected
        }
    }

    #[test]
    fn a_removal_frees_then_unlinks_then_untabs_then_selects() {
        let mut host = Strip {
            remaining: 2,
            selected: 1,
            ..Strip::default()
        };

        remove_page(&mut host, 1);

        assert_eq!(
            host.steps,
            [
                Step::Free(1),
                Step::RemoveFromCollection(1),
                Step::RemoveTab(1),
                Step::Select(SelectionAfterRemoval::Page(1)),
            ]
        );
    }

    #[test]
    fn the_new_selection_is_reported_through_the_channel_its_kind_names() {
        let mut first = Strip {
            remaining: 3,
            selected: 2,
            ..Strip::default()
        };
        assert_eq!(
            remove_page(&mut first, 0),
            RemovalResult {
                first_kind: Some(2),
                second_kind: None,
            }
        );

        let mut second = Strip {
            remaining: 3,
            selected: 2,
            second_kind: vec![2],
            ..Strip::default()
        };
        assert_eq!(
            remove_page(&mut second, 0),
            RemovalResult {
                first_kind: None,
                second_kind: Some(2),
            }
        );
    }

    #[test]
    fn an_emptied_strip_reports_nothing_through_either_channel() {
        let mut host = Strip {
            remaining: 0,
            selected: 0,
            second_kind: vec![0],
            ..Strip::default()
        };

        assert_eq!(remove_page(&mut host, 0), RemovalResult::default());
        assert!(
            host.steps
                .contains(&Step::Select(SelectionAfterRemoval::Nothing))
        );
    }

    #[derive(Debug, Default)]
    struct Names {
        page: Option<(usize, String)>,
        collection: Option<(usize, String)>,
        tab: Option<(usize, String)>,
    }

    impl TabRenameHost for Names {
        fn set_page_name(&mut self, index: usize, name: &str) {
            self.page = Some((index, name.to_owned()));
        }

        fn set_collection_name(&mut self, index: usize, name: &str) {
            self.collection = Some((index, name.to_owned()));
        }

        fn set_tab_caption(&mut self, index: usize, name: &str) {
            self.tab = Some((index, name.to_owned()));
        }
    }

    #[test]
    fn a_rename_reaches_all_three_places_the_strip_keeps_a_name() {
        let mut host = Names::default();
        rename_page(&mut host, 2, "Results");

        let expected = Some((2, "Results".to_owned()));
        assert_eq!(host.page, expected);
        assert_eq!(host.collection, expected);
        assert_eq!(host.tab, expected);
    }
}

/// The name a strip's document takes when it is emptied.
pub const DEFAULT_DOCUMENT_NAME: &str = "Noname";

/// The index meaning nothing is selected.
pub const NO_SELECTION: i32 = -1;

/// What emptying a strip needs from it.
pub trait TabClearHost {
    /// How many pages there are.
    fn count(&mut self) -> usize;

    /// Frees one page's own object.
    fn free_page(&mut self, index: usize);

    /// Names the now-empty document.
    fn set_document_name(&mut self, name: &str);

    /// Shows the caption built from that name.
    fn set_caption(&mut self, caption: &str);

    /// Empties the collection.
    fn clear_collection(&mut self);

    /// Forgets which page was current.
    fn clear_current(&mut self, index: i32);

    /// Empties the tab control and its selection, if there is one.
    fn clear_tabs(&mut self, index: i32);
}

/// Implements Ghidra function `FUN_01cec530` at `0x01CEC530`.
///
/// Empties the strip and gives the document its default name back.
///
/// Every page is freed *before* the collection is emptied, because emptying
/// it first would lose the only handles to them — the collection owns
/// nothing, it only lists.
///
/// The document is renamed rather than left blank, so an emptied strip looks
/// like a fresh one instead of a broken one; the caption is then built from
/// that name plus a fixed suffix, which is why renaming and re-captioning
/// cannot be separated.
///
/// The tab control is optional: a strip can exist without one, and the
/// recovered handler checks before touching it rather than assuming.
///
/// `caption_suffix` is a data reference in the recovered code rather than a
/// literal, so the caller supplies it.
pub fn clear_strip(host: &mut impl TabClearHost, caption_suffix: &str, has_tabs: bool) {
    let count = host.count();
    for index in 0..count {
        host.free_page(index);
    }

    host.set_document_name(DEFAULT_DOCUMENT_NAME);
    host.set_caption(&format!("{DEFAULT_DOCUMENT_NAME}{caption_suffix}"));

    host.clear_collection();
    host.clear_current(NO_SELECTION);

    if has_tabs {
        host.clear_tabs(NO_SELECTION);
    }
}

#[cfg(test)]
mod tab_clear_tests {
    use super::*;

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum Step {
        Free(usize),
        DocumentName(String),
        Caption(String),
        ClearCollection,
        ClearCurrent(i32),
        ClearTabs(i32),
    }

    #[derive(Debug, Default)]
    struct Strip {
        count: usize,
        steps: Vec<Step>,
    }

    impl TabClearHost for Strip {
        fn count(&mut self) -> usize {
            self.count
        }

        fn free_page(&mut self, index: usize) {
            self.steps.push(Step::Free(index));
        }

        fn set_document_name(&mut self, name: &str) {
            self.steps.push(Step::DocumentName(name.to_owned()));
        }

        fn set_caption(&mut self, caption: &str) {
            self.steps.push(Step::Caption(caption.to_owned()));
        }

        fn clear_collection(&mut self) {
            self.steps.push(Step::ClearCollection);
        }

        fn clear_current(&mut self, index: i32) {
            self.steps.push(Step::ClearCurrent(index));
        }

        fn clear_tabs(&mut self, index: i32) {
            self.steps.push(Step::ClearTabs(index));
        }
    }

    #[test]
    fn every_page_is_freed_before_the_collection_is_emptied() {
        let mut host = Strip {
            count: 3,
            ..Strip::default()
        };

        clear_strip(&mut host, " - Tina", true);

        let last_free = host
            .steps
            .iter()
            .rposition(|step| matches!(step, Step::Free(_)))
            .expect("pages are freed");
        let cleared = host
            .steps
            .iter()
            .position(|step| *step == Step::ClearCollection)
            .expect("the collection is emptied");
        assert!(last_free < cleared);
        assert_eq!(
            host.steps
                .iter()
                .filter(|s| matches!(s, Step::Free(_)))
                .count(),
            3
        );
    }

    #[test]
    fn the_document_takes_its_default_name_and_the_caption_follows_it() {
        let mut host = Strip::default();
        clear_strip(&mut host, " - Tina", false);

        assert!(
            host.steps
                .contains(&Step::DocumentName("Noname".to_owned()))
        );
        assert!(
            host.steps
                .contains(&Step::Caption("Noname - Tina".to_owned()))
        );
    }

    #[test]
    fn both_the_current_page_and_the_tab_selection_are_cleared() {
        let mut host = Strip::default();
        clear_strip(&mut host, "", true);

        assert!(host.steps.contains(&Step::ClearCurrent(NO_SELECTION)));
        assert!(host.steps.contains(&Step::ClearTabs(NO_SELECTION)));
    }

    #[test]
    fn a_strip_with_no_tab_control_is_still_emptied() {
        let mut host = Strip {
            count: 1,
            ..Strip::default()
        };

        clear_strip(&mut host, "", false);

        assert!(host.steps.contains(&Step::ClearCollection));
        assert!(
            !host
                .steps
                .iter()
                .any(|step| matches!(step, Step::ClearTabs(_)))
        );
    }

    #[test]
    fn an_already_empty_strip_is_still_renamed() {
        let mut host = Strip::default();
        clear_strip(&mut host, "", true);

        assert!(!host.steps.iter().any(|s| matches!(s, Step::Free(_))));
        assert!(
            host.steps
                .contains(&Step::DocumentName("Noname".to_owned()))
        );
    }
}
