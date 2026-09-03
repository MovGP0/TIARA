//! Iced progress window for local AI work.

use iced::Element;
use iced::widget::{button, column, text};

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    Cancel,
    Created,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Window {
    status: String,
    cancel_requested: bool,
    help_context: u32,
}

impl Default for Window {
    fn default() -> Self {
        let mut window = Self {
            status: String::new(),
            cancel_requested: false,
            help_context: 0,
        };
        window.on_create();
        window
    }
}

impl Window {
    pub fn update(&mut self, message: Message) {
        match message {
            Message::Cancel => self.request_cancel(),
            Message::Created => self.on_create(),
        }
    }

    /// Resets the progress window and applies its help context.
    ///
    /// Implements Ghidra function `FUN_01a2db50` at `0x01A2DB50`
    /// (`TMessageWindowAI.FormCreate`). Creation clears the cancel request and
    /// visible status, then assigns help context `0x4B4`.
    pub fn on_create(&mut self) {
        self.cancel_requested = false;
        self.status = String::new();
        self.help_context = 0x4B4;
    }

    /// Requests cancellation of the active local-AI operation.
    ///
    /// Implements Ghidra function `FUN_01a2db40` at `0x01A2DB40`
    /// (`TMessageWindowAI.bCancelClick`). The click sets the request flag only.
    /// A separate timer and worker coordinator consume it and perform stop and
    /// cleanup work.
    pub const fn request_cancel(&mut self) {
        self.cancel_requested = true;
    }

    #[must_use]
    pub const fn cancel_requested(&self) -> bool {
        self.cancel_requested
    }

    #[must_use]
    pub const fn help_context(&self) -> u32 {
        self.help_context
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        column![
            text(&self.status),
            button("Cancel").on_press(Message::Cancel)
        ]
        .spacing(8)
        .into()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn cancel_click_sets_request_flag_only_and_is_idempotent() {
        let mut window = Window {
            status: "Working".to_owned(),
            cancel_requested: false,
            help_context: 0x4B4,
        };

        window.update(Message::Cancel);
        window.update(Message::Cancel);

        assert!(window.cancel_requested());
        assert_eq!(window.status, "Working");
    }

    #[test]
    fn form_create_clears_status_and_cancel_request_and_sets_help_context() {
        let mut window = Window {
            status: "Working".to_owned(),
            cancel_requested: true,
            help_context: 0,
        };

        window.update(Message::Created);

        assert_eq!(window.status, "");
        assert!(!window.cancel_requested());
        assert_eq!(window.help_context(), 0x4B4);
    }
}
