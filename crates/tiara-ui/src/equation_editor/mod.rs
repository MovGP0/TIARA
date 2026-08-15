use iced::widget::text_editor;
use iced::{Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "Equation Editor";
pub const SCREENSHOT: &str = "screenshots/Equation_Editor_Window.png";
pub const FORM_RESOURCE: &str = "EquEditor";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01463690");
const STATUS: &str = "Ready";
const MENUS: &[(&str, &[&str])] = &[
    ("File", &["New", "Open...", "Save", "Save As...", "Close"]),
    ("Edit", &["Undo", "Cut", "Copy", "Paste", "Select All"]),
    ("Settings", &["Preferences...", "Font...", "Options..."]),
    ("Help", &["Contents", "About"]),
];
const TOOLBAR: &[&str] = &["New", "Edit", "Copy", "Calculator"];

#[derive(Debug, Default)]
pub struct Window {
    document: text_editor::Content,
}

#[derive(Debug, Clone)]
pub enum Message {
    Edit(text_editor::Action),
    CommandSelected,
}

impl Window {
    pub fn update(&mut self, message: Message) {
        if let Message::Edit(action) = message {
            self.document.perform(action);
        }
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection when available.
    pub fn view(&self) -> Element<'_, Message> {
        let editor = text_editor(&self.document)
            .on_action(Message::Edit)
            .height(Length::Fill);

        window_shell::frame(
            TITLE,
            window_shell::menu_bar(MENUS, Message::CommandSelected),
            window_shell::toolbar(TOOLBAR, Message::CommandSelected),
            editor.into(),
            STATUS,
        )
    }
}
