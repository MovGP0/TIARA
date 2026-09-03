use iced::widget::{container, scrollable, text};
use iced::{Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "Symbol table";
pub const SCREENSHOT: &str = "screenshots/Symbol_Table_Window.png";
pub const FORM_RESOURCE: &str = "I_SymDlg";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("011158f0");
const STATUS: &str = "Available symbols";
const TOOLBAR: &[&str] = &[];

#[derive(Debug, Default)]
pub struct Window {
    lines: String,
}

#[derive(Debug, Clone)]
pub enum Message {
    AssignLines(String),
    NoOp,
}

impl Window {
    pub fn update(&mut self, message: Message) {
        match message {
            Message::AssignLines(lines) => self.lines = lines,
            Message::NoOp => {}
        }
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection when available.
    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let menu = window_shell::empty_menu();
        let toolbar = window_shell::toolbar(TOOLBAR, Message::NoOp);
        let body: Element<'_, Message> = container(scrollable(text(&self.lines)))
            .padding(18)
            .width(Length::Fill)
            .height(Length::Fill)
            .into();

        window_shell::frame(TITLE, menu, toolbar, body, STATUS)
    }
}

#[cfg(test)]
mod tests {
    use super::{Message, Window};

    #[test]
    fn assigning_lines_replaces_the_read_only_view_text() {
        let mut window = Window::default();

        window.update(Message::AssignLines("pi\nj\nanswer".to_owned()));

        assert_eq!(window.lines, "pi\nj\nanswer");
    }
}
