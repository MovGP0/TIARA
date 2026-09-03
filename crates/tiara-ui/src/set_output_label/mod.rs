//! Iced state for the recovered Set Label dialog.

use iced::widget::{button, column, container, row, text, text_input};
use iced::{Element, Length, Task};

pub const TITLE: &str = "Set Label";
pub const FORM_RESOURCE: &str = "dlgSetOutputLabel";
pub const HELP_CONTEXT: u32 = 1000;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ModalResult {
    Accept,
    Cancel,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    Created,
    LabelChanged(String),
    Accept,
    Cancel,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct Window {
    label: String,
    help_context: u32,
    modal_result: Option<ModalResult>,
}

impl Window {
    #[must_use]
    pub fn new(label: impl Into<String>) -> Self {
        let mut window = Self {
            label: label.into(),
            ..Self::default()
        };
        window.on_create();
        window
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::Created => self.on_create(),
            Message::LabelChanged(value) => self.label = value,
            Message::Accept => self.modal_result = Some(ModalResult::Accept),
            Message::Cancel => self.modal_result = Some(ModalResult::Cancel),
        }
        Task::none()
    }

    /// Applies the recovered form creation state.
    ///
    /// Ports Ghidra function `0x017BC9C0`, symbol `FUN_017bc9c0`. The VCL
    /// handler assigns `HelpContext` 1000 to the Set Label form. Iced keeps that
    /// context as typed window state for the host help adapter.
    pub const fn on_create(&mut self) {
        self.help_context = HELP_CONTEXT;
    }

    #[must_use]
    pub const fn help_context(&self) -> u32 {
        self.help_context
    }

    #[must_use]
    pub fn label(&self) -> &str {
        &self.label
    }

    #[must_use]
    pub const fn modal_result(&self) -> Option<ModalResult> {
        self.modal_result
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        container(column![
            row![
                text("Label:"),
                text_input("", &self.label).on_input(Message::LabelChanged)
            ]
            .spacing(8),
            row![
                button("OK").on_press(Message::Accept),
                button("Cancel").on_press(Message::Cancel)
            ]
            .spacing(8)
        ])
        .padding(12)
        .width(Length::Fill)
        .into()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn fun_017bc9c0_sets_help_context_on_create() {
        let mut window = Window::default();
        assert_eq!(window.help_context(), 0);

        drop(window.update(Message::Created));

        assert_eq!(window.help_context(), HELP_CONTEXT);
        assert_eq!(Window::new("Output").help_context(), HELP_CONTEXT);
    }
}
