use iced::widget::{column, text};
use iced::{Element, Task};

pub const TITLE: &str = "About";
pub const FORM_RESOURCE: &str = "ShedAboutBox";
pub const COPYRIGHT_START_YEAR: u16 = 1997;
pub const LIBRARY_EVALUATION: &str = "iced supplies the About window message, state, and text widget. Rust formatting supplies the year range, and the application resource boundary supplies the copyright owner, so no date or localization crate is needed.";

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    Created { current_year: u16 },
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct State {
    copyright_owner: String,
    copyright_text: String,
}

impl State {
    #[must_use]
    pub fn new(copyright_owner: impl Into<String>) -> Self {
        Self {
            copyright_owner: copyright_owner.into(),
            copyright_text: String::new(),
        }
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::Created { current_year } => self.on_create(current_year),
        }
        Task::none()
    }

    /// Formats the Schematic Symbol Editor copyright year range.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01782200`, symbol `FUN_01782200` (`TShedAboutBox.FormCreate`). The
    /// host supplies the current calendar year and localized copyright owner.
    /// Creation writes the inclusive range that starts in 1997 to the visible
    /// copyright label.
    pub fn on_create(&mut self, current_year: u16) {
        self.copyright_text = format!(
            "Copyright {COPYRIGHT_START_YEAR}-{current_year} {}",
            self.copyright_owner
        );
    }

    #[must_use]
    pub fn copyright_text(&self) -> &str {
        &self.copyright_text
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        column![text(TITLE).size(24), text(&self.copyright_text)]
            .spacing(8)
            .into()
    }
}

#[cfg(test)]
mod tests {
    use iced::Task;

    use super::{Message, State};

    fn discard(task: Task<Message>) {
        drop(task);
    }

    #[test]
    fn create_formats_start_and_current_year_with_injected_owner() {
        let mut state = State::new("Example Labs");

        discard(state.update(Message::Created { current_year: 2026 }));

        assert_eq!(state.copyright_text(), "Copyright 1997-2026 Example Labs");
    }

    #[test]
    fn repeated_creation_replaces_the_previous_year() {
        let mut state = State::new("Example Labs");
        state.on_create(2025);

        state.on_create(2026);

        assert_eq!(state.copyright_text(), "Copyright 1997-2026 Example Labs");
    }
}
