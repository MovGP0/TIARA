//! Reusable ordered-list value model.
//!
//! Library evaluation: `Vec::swap` provides the exact adjacent exchange, and
//! `Option<usize>` represents the VCL no-selection value without a sentinel.
//! No collection crate is required.

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum MoveOutcome {
    Moved,
    Unchanged,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct OrderedList<T> {
    values: Vec<T>,
    selected: Option<usize>,
}

impl<T> OrderedList<T> {
    #[must_use]
    pub const fn new(values: Vec<T>) -> Self {
        Self {
            values,
            selected: None,
        }
    }

    pub fn select(&mut self, index: Option<usize>) {
        self.selected = index.filter(|index| *index < self.values.len());
    }

    /// Ports Ghidra function `FUN_01781830` at `0x01781830`.
    ///
    /// Exchanges the selected value with its predecessor and follows the moved
    /// value with the selection. No selection and index zero are no-ops.
    pub fn move_selected_up(&mut self) -> MoveOutcome {
        let Some(selected) = self.selected else {
            return MoveOutcome::Unchanged;
        };
        if selected == 0 || selected >= self.values.len() {
            return MoveOutcome::Unchanged;
        }

        self.values.swap(selected, selected - 1);
        self.selected = Some(selected - 1);
        MoveOutcome::Moved
    }

    /// Ports Ghidra function `FUN_01781890` at `0x01781890`.
    ///
    /// Exchanges the selected value with its successor and follows the moved
    /// value with the selection. No selection and the last index are no-ops.
    pub fn move_selected_down(&mut self) -> MoveOutcome {
        let Some(selected) = self.selected else {
            return MoveOutcome::Unchanged;
        };
        let Some(next) = selected.checked_add(1) else {
            return MoveOutcome::Unchanged;
        };
        if next >= self.values.len() {
            return MoveOutcome::Unchanged;
        }

        self.values.swap(selected, next);
        self.selected = Some(next);
        MoveOutcome::Moved
    }

    #[must_use]
    pub fn can_move_up(&self) -> bool {
        self.selected.is_some_and(|selected| selected > 0)
    }

    #[must_use]
    pub fn can_move_down(&self) -> bool {
        self.selected
            .is_some_and(|selected| selected.saturating_add(1) < self.values.len())
    }

    #[must_use]
    pub fn values(&self) -> &[T] {
        &self.values
    }

    #[must_use]
    pub const fn selected(&self) -> Option<usize> {
        self.selected
    }

    #[must_use]
    pub fn into_values(self) -> Vec<T> {
        self.values
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn list() -> OrderedList<&'static str> {
        OrderedList::new(vec!["A", "B", "C"])
    }

    #[test]
    fn move_up_exchanges_one_row_and_keeps_moved_value_selected() {
        let mut list = list();
        list.select(Some(2));

        assert_eq!(list.move_selected_up(), MoveOutcome::Moved);
        assert_eq!(list.values(), ["A", "C", "B"]);
        assert_eq!(list.selected(), Some(1));
    }

    #[test]
    fn move_down_exchanges_one_row_and_keeps_moved_value_selected() {
        let mut list = list();
        list.select(Some(0));

        assert_eq!(list.move_selected_down(), MoveOutcome::Moved);
        assert_eq!(list.values(), ["B", "A", "C"]);
        assert_eq!(list.selected(), Some(1));
    }

    #[test]
    fn no_selection_is_a_noop_in_both_directions() {
        let mut list = list();

        assert_eq!(list.move_selected_up(), MoveOutcome::Unchanged);
        assert_eq!(list.move_selected_down(), MoveOutcome::Unchanged);
        assert_eq!(list.values(), ["A", "B", "C"]);
        assert_eq!(list.selected(), None);
    }

    #[test]
    fn first_and_last_boundaries_are_noops() {
        let mut list = list();
        list.select(Some(0));
        assert_eq!(list.move_selected_up(), MoveOutcome::Unchanged);
        assert_eq!(list.selected(), Some(0));

        list.select(Some(2));
        assert_eq!(list.move_selected_down(), MoveOutcome::Unchanged);
        assert_eq!(list.values(), ["A", "B", "C"]);
        assert_eq!(list.selected(), Some(2));
    }

    #[test]
    fn invalid_selection_becomes_no_selection() {
        let mut list = list();

        list.select(Some(10));

        assert_eq!(list.selected(), None);
        assert!(!list.can_move_up());
        assert!(!list.can_move_down());
    }
}
