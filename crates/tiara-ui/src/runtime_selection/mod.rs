//! Iced adapter for import-dialog runtime-row selection.
//!
//! Library evaluation: Iced 0.13.1 maps each check box and bulk button to one
//! typed message. One `update` call changes all row flags before the next view,
//! which gives the recovered batched-update behavior without another UI crate.

use std::fmt::Display;

use iced::widget::{button, checkbox, column, row, scrollable};
use iced::{Element, Length};
use tiara_core::runtime_selection::{RuntimeSelection, SelectionOutcome};

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    SetRow { index: usize, selected: bool },
    SelectAll,
    SelectNone,
    Invert,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Window<T> {
    rows: Vec<T>,
    selection: RuntimeSelection,
}

impl<T> Window<T> {
    #[must_use]
    pub fn new(rows: Vec<T>) -> Self {
        let selection = RuntimeSelection::new(rows.len());
        Self { rows, selection }
    }

    #[must_use]
    pub fn with_selection(rows: Vec<T>, flags: Vec<bool>) -> Option<Self> {
        (rows.len() == flags.len()).then(|| Self {
            rows,
            selection: RuntimeSelection::from_flags(flags),
        })
    }

    pub fn update(&mut self, message: Message) -> SelectionOutcome {
        match message {
            Message::SetRow { index, selected } => self.selection.set(index, selected),
            Message::SelectAll => self.selection.select_all(),
            Message::SelectNone => self.selection.clear_all(),
            Message::Invert => self.selection.invert_all(),
        }
    }

    #[must_use]
    pub fn rows(&self) -> &[T] {
        &self.rows
    }

    #[must_use]
    pub fn selection_flags(&self) -> &[bool] {
        self.selection.flags()
    }

    #[must_use]
    pub fn selected_indices(&self) -> Vec<usize> {
        self.selection.selected_indices()
    }

    #[must_use]
    pub fn into_rows(self) -> Vec<T> {
        self.rows
    }
}

impl<T: Display> Window<T> {
    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let rows = self.rows.iter().enumerate().map(|(index, value)| {
            checkbox(value.to_string(), self.selection.flags()[index])
                .on_toggle(move |selected| Message::SetRow { index, selected })
                .into()
        });

        column![
            scrollable(column(rows).spacing(4)).height(Length::Fill),
            row![
                button("All").on_press(Message::SelectAll),
                button("None").on_press(Message::SelectNone),
                button("Invert").on_press(Message::Invert),
            ]
            .spacing(8),
        ]
        .padding(8)
        .spacing(8)
        .into()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn window() -> Window<String> {
        Window::with_selection(
            vec![
                "Runtime A".to_owned(),
                "Runtime B".to_owned(),
                "Runtime C".to_owned(),
            ],
            vec![false, true, false],
        )
        .expect("row and selection counts must match")
    }

    #[test]
    fn select_all_changes_only_flags_for_all_runtime_rows() {
        let mut window = window();
        let rows = window.rows().to_vec();

        assert_eq!(window.update(Message::SelectAll), SelectionOutcome::Changed);
        assert_eq!(window.selection_flags(), [true, true, true]);
        assert_eq!(window.rows(), rows);
    }

    #[test]
    fn select_none_clears_all_runtime_rows() {
        let mut window = window();

        assert_eq!(
            window.update(Message::SelectNone),
            SelectionOutcome::Changed
        );
        assert_eq!(window.selection_flags(), [false, false, false]);
        assert!(window.selected_indices().is_empty());
    }

    #[test]
    fn invert_twice_restores_original_runtime_row_flags() {
        let mut window = window();
        let original = window.selection_flags().to_vec();

        assert_eq!(window.update(Message::Invert), SelectionOutcome::Changed);
        assert_eq!(window.selection_flags(), [true, false, true]);
        assert_eq!(window.update(Message::Invert), SelectionOutcome::Changed);
        assert_eq!(window.selection_flags(), original);
    }

    #[test]
    fn empty_runtime_list_bulk_messages_are_noops() {
        let mut window = Window::<String>::new(Vec::new());

        assert_eq!(
            window.update(Message::SelectAll),
            SelectionOutcome::Unchanged
        );
        assert_eq!(
            window.update(Message::SelectNone),
            SelectionOutcome::Unchanged
        );
        assert_eq!(window.update(Message::Invert), SelectionOutcome::Unchanged);
        assert!(window.rows().is_empty());
        assert!(window.selection_flags().is_empty());
    }

    #[test]
    fn invalid_row_message_is_a_noop() {
        let mut window = window();

        assert_eq!(
            window.update(Message::SetRow {
                index: 9,
                selected: true,
            }),
            SelectionOutcome::Unchanged
        );
        assert_eq!(window.selection_flags(), [false, true, false]);
    }

    #[test]
    fn mismatched_runtime_rows_and_flags_are_rejected() {
        assert!(Window::with_selection(vec!["A", "B"], vec![true]).is_none());
    }
}
