//! Small Iced adapter for reusable adjacent ordered-list movement.
//!
//! Library evaluation: Iced 0.13.1 supplies typed selection and arrow-button
//! messages. `tiara-core::ordered_list` delegates exchanges to `Vec::swap`.
//! No drag-and-drop or collection crate is required for the recovered one-row
//! controls.

use std::fmt::Display;

use iced::widget::{button, column, row, scrollable, text};
use iced::{Element, Length};
use tiara_core::ordered_list::{MoveOutcome, OrderedList};

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    Select(usize),
    MoveUp,
    MoveDown,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Window<T> {
    model: OrderedList<T>,
}

impl<T> Window<T> {
    #[must_use]
    pub const fn new(values: Vec<T>) -> Self {
        Self {
            model: OrderedList::new(values),
        }
    }

    pub fn update(&mut self, message: Message) -> MoveOutcome {
        match message {
            Message::Select(index) => {
                self.model.select(Some(index));
                MoveOutcome::Unchanged
            }
            Message::MoveUp => self.model.move_selected_up(),
            Message::MoveDown => self.model.move_selected_down(),
        }
    }

    #[must_use]
    pub fn values(&self) -> &[T] {
        self.model.values()
    }

    #[must_use]
    pub const fn selected(&self) -> Option<usize> {
        self.model.selected()
    }

    #[must_use]
    pub fn into_values(self) -> Vec<T> {
        self.model.into_values()
    }
}

impl<T: Display> Window<T> {
    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let selected = self.model.selected();
        let items = self
            .model
            .values()
            .iter()
            .enumerate()
            .map(|(index, value)| {
                let marker = if selected == Some(index) { "> " } else { "" };
                button(text(format!("{marker}{value}")))
                    .on_press(Message::Select(index))
                    .width(Length::Fill)
                    .into()
            });

        column![
            scrollable(column(items).spacing(4)).height(Length::Fill),
            row![
                button("Up").on_press_maybe(self.model.can_move_up().then_some(Message::MoveUp)),
                button("Down")
                    .on_press_maybe(self.model.can_move_down().then_some(Message::MoveDown)),
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
        Window::new(vec![
            String::from("Pin A"),
            String::from("Pin B"),
            String::from("Pin C"),
        ])
    }

    #[test]
    fn iced_selection_then_up_moves_value_and_selection_together() {
        let mut window = window();
        assert_eq!(window.update(Message::Select(2)), MoveOutcome::Unchanged);

        assert_eq!(window.update(Message::MoveUp), MoveOutcome::Moved);
        assert_eq!(window.values(), ["Pin A", "Pin C", "Pin B"]);
        assert_eq!(window.selected(), Some(1));
    }

    #[test]
    fn iced_selection_then_down_moves_value_and_selection_together() {
        let mut window = window();
        let _ = window.update(Message::Select(0));

        assert_eq!(window.update(Message::MoveDown), MoveOutcome::Moved);
        assert_eq!(window.values(), ["Pin B", "Pin A", "Pin C"]);
        assert_eq!(window.selected(), Some(1));
    }

    #[test]
    fn boundary_messages_are_noops_and_keep_selection() {
        let mut window = window();
        let _ = window.update(Message::Select(0));
        assert_eq!(window.update(Message::MoveUp), MoveOutcome::Unchanged);
        assert_eq!(window.selected(), Some(0));

        let _ = window.update(Message::Select(2));
        assert_eq!(window.update(Message::MoveDown), MoveOutcome::Unchanged);
        assert_eq!(window.values(), ["Pin A", "Pin B", "Pin C"]);
        assert_eq!(window.selected(), Some(2));
    }

    #[test]
    fn narrow_value_api_returns_the_reordered_values() {
        let mut window = window();
        let _ = window.update(Message::Select(1));
        let _ = window.update(Message::MoveDown);

        assert_eq!(window.into_values(), ["Pin A", "Pin C", "Pin B"]);
    }
}
