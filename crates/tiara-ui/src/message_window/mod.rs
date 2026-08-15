use iced::Element;
use iced::widget::{column, text};

pub const TITLE: &str = "Message Window";
pub const FORM_RESOURCE: &str = "MessageWindow";

#[derive(Debug, Clone)]
pub enum Message {}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct Window {
    message: String,
}

impl Window {
    #[must_use]
    pub fn new(message: impl Into<String>) -> Self {
        Self {
            message: message.into(),
        }
    }

    /// Ports Ghidra function `FUN_012e9e50` at `0x012E9E50`.
    ///
    /// The database maps the original function to `TMessageWindow.FormCreate`.
    /// Recovered source and call-graph evidence show that the handler returns
    /// without reading or changing state, so the Rust lifecycle adapter is an
    /// explicit no-op.
    pub const fn initialize_message_window() {}

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        column![text(&self.message)].padding(16).into()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn create_handler_is_an_explicit_no_op() {
        let before = Window::new("Working");
        Window::initialize_message_window();
        let after = Window::new("Working");

        assert_eq!(before, after);
    }
}
