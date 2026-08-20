//! Runtime-row selection state for import dialogs.
//!
//! Library evaluation: the standard `Vec<bool>` keeps one flag for each
//! runtime list row. Standard mutable iteration applies each bulk operation in
//! row order, so no bit-set or selection-model crate is required.

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SelectionOutcome {
    Changed,
    Unchanged,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct RuntimeSelection {
    selected: Vec<bool>,
}

impl RuntimeSelection {
    #[must_use]
    pub fn new(row_count: usize) -> Self {
        Self {
            selected: vec![false; row_count],
        }
    }

    #[must_use]
    pub const fn from_flags(selected: Vec<bool>) -> Self {
        Self { selected }
    }

    pub fn set(&mut self, index: usize, selected: bool) -> SelectionOutcome {
        let Some(target) = self.selected.get_mut(index) else {
            return SelectionOutcome::Unchanged;
        };
        if *target == selected {
            return SelectionOutcome::Unchanged;
        }
        *target = selected;
        SelectionOutcome::Changed
    }

    /// Ports Ghidra function `FUN_01782df0` at `0x01782DF0`.
    ///
    /// Selects every row in the current runtime item list. An empty list and a
    /// list that is already fully selected have no observable state change.
    pub fn select_all(&mut self) -> SelectionOutcome {
        self.set_all(true)
    }

    /// Ports Ghidra function `FUN_01782e70` at `0x01782E70`.
    ///
    /// Clears every row in the current runtime item list. The import dialog
    /// also uses this operation to establish its initial empty selection.
    pub fn clear_all(&mut self) -> SelectionOutcome {
        self.set_all(false)
    }

    /// Ports Ghidra function `FUN_01782ef0` at `0x01782EF0`.
    ///
    /// Inverts every row in the current runtime item list. An empty list has no
    /// observable state change, and two calls restore the original flags.
    pub fn invert_all(&mut self) -> SelectionOutcome {
        let mut outcome = SelectionOutcome::Unchanged;
        for selected in &mut self.selected {
            *selected = !*selected;
            outcome = SelectionOutcome::Changed;
        }
        outcome
    }

    #[must_use]
    pub fn flags(&self) -> &[bool] {
        &self.selected
    }

    #[must_use]
    pub fn selected_indices(&self) -> Vec<usize> {
        self.selected
            .iter()
            .enumerate()
            .filter_map(|(index, selected)| selected.then_some(index))
            .collect()
    }

    #[must_use]
    pub fn len(&self) -> usize {
        self.selected.len()
    }

    #[must_use]
    pub fn is_empty(&self) -> bool {
        self.selected.is_empty()
    }

    fn set_all(&mut self, value: bool) -> SelectionOutcome {
        let mut outcome = SelectionOutcome::Unchanged;
        for selected in &mut self.selected {
            if *selected != value {
                outcome = SelectionOutcome::Changed;
            }
            *selected = value;
        }
        outcome
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn new_selection_starts_clear_for_every_runtime_row() {
        let selection = RuntimeSelection::new(4);

        assert_eq!(selection.flags(), [false, false, false, false]);
        assert!(selection.selected_indices().is_empty());
    }

    #[test]
    fn select_all_sets_every_runtime_row_and_is_idempotent() {
        let mut selection = RuntimeSelection::from_flags(vec![false, true, false]);

        assert_eq!(selection.select_all(), SelectionOutcome::Changed);
        assert_eq!(selection.flags(), [true, true, true]);
        assert_eq!(selection.select_all(), SelectionOutcome::Unchanged);
    }

    #[test]
    fn clear_all_clears_every_runtime_row_and_is_idempotent() {
        let mut selection = RuntimeSelection::from_flags(vec![true, false, true]);

        assert_eq!(selection.clear_all(), SelectionOutcome::Changed);
        assert_eq!(selection.flags(), [false, false, false]);
        assert_eq!(selection.clear_all(), SelectionOutcome::Unchanged);
    }

    #[test]
    fn invert_all_twice_restores_the_mixed_selection() {
        let initial = vec![true, false, false, true];
        let mut selection = RuntimeSelection::from_flags(initial.clone());

        assert_eq!(selection.invert_all(), SelectionOutcome::Changed);
        assert_eq!(selection.flags(), [false, true, true, false]);
        assert_eq!(selection.invert_all(), SelectionOutcome::Changed);
        assert_eq!(selection.flags(), initial);
    }

    #[test]
    fn bulk_operations_are_noops_for_an_empty_runtime_list() {
        let mut selection = RuntimeSelection::new(0);

        assert_eq!(selection.select_all(), SelectionOutcome::Unchanged);
        assert_eq!(selection.clear_all(), SelectionOutcome::Unchanged);
        assert_eq!(selection.invert_all(), SelectionOutcome::Unchanged);
        assert!(selection.is_empty());
    }

    #[test]
    fn invalid_manual_row_index_is_a_noop() {
        let mut selection = RuntimeSelection::new(2);

        assert_eq!(selection.set(5, true), SelectionOutcome::Unchanged);
        assert_eq!(selection.len(), 2);
        assert_eq!(selection.flags(), [false, false]);
    }
}
