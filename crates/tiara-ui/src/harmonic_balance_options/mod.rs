//! Raw Harmonic Balance options editor.

use iced::widget::{button, column, container, row, text, text_editor};
use iced::{Element, Length};

pub const TITLE: &str = "Harmonic Balance Options";

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum ModalResult {
    #[default]
    None,
    Ok,
    Cancel,
}

#[derive(Debug, Clone)]
pub enum Message {
    Edited(text_editor::Action),
    Accept,
    Cancel,
}

#[derive(Debug)]
pub struct Window {
    memo: text_editor::Content,
    modal_result: ModalResult,
    explicit_trailing_newline: bool,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            memo: text_editor::Content::new(),
            modal_result: ModalResult::None,
            explicit_trailing_newline: false,
        }
    }
}

impl Window {
    pub fn update(&mut self, message: Message) {
        match message {
            Message::Edited(action) => {
                self.memo.perform(action);
                self.explicit_trailing_newline = self.memo.text().ends_with("\n\n");
            }
            Message::Accept => self.modal_result = ModalResult::Ok,
            Message::Cancel => self.modal_result = ModalResult::Cancel,
        }
    }

    /// Implements Ghidra function `FUN_01b522d0` at `0x01B522D0`.
    ///
    /// Copies the supplied raw options text into the editable memo. It does not
    /// parse, validate, replace, or persist any part of the text.
    pub fn load_text(&mut self, value: &str) {
        self.memo = text_editor::Content::with_text(value);
        self.explicit_trailing_newline = value.ends_with('\n');
    }

    #[must_use]
    pub fn text(&self) -> String {
        let mut text = self.memo.text();
        if !self.explicit_trailing_newline {
            text.pop();
        }
        text
    }

    /// Implements Ghidra function `FUN_01b52330` at `0x01B52330`.
    ///
    /// Returns an owned copy of the complete memo text. It does not parse,
    /// validate, explicitly normalize, or persist the value.
    #[must_use]
    pub fn export_text(&self) -> String {
        self.text()
    }

    #[must_use]
    pub const fn modal_result(&self) -> ModalResult {
        self.modal_result
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        container(
            column![
                text(TITLE).size(24),
                text_editor(&self.memo)
                    .on_action(Message::Edited)
                    .height(Length::Fill),
                row![
                    button("OK").on_press(Message::Accept),
                    button("Cancel").on_press(Message::Cancel),
                    button("Help"),
                ]
                .spacing(8),
            ]
            .spacing(10),
        )
        .padding(16)
        .width(Length::Fill)
        .height(Length::Fill)
        .into()
    }
}

#[cfg(test)]
mod tests {
    use super::Window;

    #[test]
    fn load_text_copies_raw_multiline_options_without_validation() {
        let mut window = Window::default();

        window.load_text("TAHB=2\nunknown option\n");

        assert_eq!(window.text(), "TAHB=2\nunknown option\n");
    }

    #[test]
    fn load_text_accepts_empty_text() {
        let mut window = Window::default();
        window.load_text("previous");

        window.load_text("");

        assert_eq!(window.text(), "");
    }

    #[test]
    fn export_text_returns_complete_owned_memo_value() {
        let mut window = Window::default();
        window.load_text("first=1\nsecond=raw value");

        let exported = window.export_text();
        window.load_text("changed");

        assert_eq!(exported, "first=1\nsecond=raw value");
        assert_eq!(window.export_text(), "changed");
    }
}
