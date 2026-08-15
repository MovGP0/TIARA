use iced::widget::text_editor;
use iced::{Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "Interpreter-<noname.ipr>";
pub const SCREENSHOT: &str = "screenshots/Interpreter_Window.png";
pub const FORM_RESOURCE: &str = "I_Class";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("017efdf0");
const STATUS: &str = "Line: 1 Col: 1    Successfully compiled    Editing commands";
const MENUS: &[(&str, &[&str])] = &[
    ("File", &["New", "Open...", "Save", "Save As...", "Close"]),
    ("Edit", &["Undo", "Cut", "Copy", "Paste", "Select All"]),
    ("Run", &["Evaluate", "Run", "Stop"]),
    ("Settings", &["Preferences...", "Font...", "Options..."]),
    ("Help", &["Contents", "About"]),
];
const TOOLBAR: &[&str] = &[
    "New",
    "Open",
    "Save",
    "Find",
    "Evaluate",
    "Run",
    "Add to schematic",
];

#[derive(Debug, Default)]
pub struct Window {
    program: text_editor::Content,
}

#[derive(Debug, Clone)]
pub enum Message {
    Edit(text_editor::Action),
    CommandSelected,
}

impl Window {
    pub fn update(&mut self, message: Message) {
        if let Message::Edit(action) = message {
            self.program.perform(action);
        }
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection when available.
    pub fn view(&self) -> Element<'_, Message> {
        let editor = text_editor(&self.program)
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
