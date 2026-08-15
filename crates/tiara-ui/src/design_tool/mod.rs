use iced::widget::{button, column, row, text, text_input};
use iced::{Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "Design Tool";
pub const SCREENSHOT: &str = "screenshots/Design_Tool_Window.png";
pub const FORM_RESOURCE: &str = "frmDesignTool";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01494080");
const STATUS: &str = "Successfully compiled";
const MENUS: &[(&str, &[&str])] = &[
    ("File", &["New", "Open...", "Save", "Save As...", "Close"]),
    ("Edit", &["Undo", "Cut", "Copy", "Paste", "Select All"]),
    ("Settings", &["Options...", "Font..."]),
    ("Run", &["Compile", "Run"]),
];

#[derive(Debug)]
pub struct Window {
    title: String,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            title: "Noname".to_owned(),
        }
    }
}

#[derive(Debug, Clone)]
pub enum Message {
    TitleChanged(String),
    CommandSelected,
}

impl Window {
    pub fn update(&mut self, message: Message) {
        if let Message::TitleChanged(title) = message {
            self.title = title;
        }
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection when available.
    pub fn view(&self) -> Element<'_, Message> {
        let body = column![
            text("Title").size(16),
            text_input("", &self.title).on_input(Message::TitleChanged),
            text("Input Parameters:").size(16),
            row![
                text("Parameter").width(Length::FillPortion(1)),
                text("Value").width(Length::FillPortion(1)),
                text("Min").width(Length::FillPortion(1)),
                text("Max").width(Length::FillPortion(1)),
                text("Comment").width(Length::FillPortion(1)),
            ]
            .spacing(6),
            window_shell::surface("Parameter table"),
            row![
                button("Add Row").on_press(Message::CommandSelected),
                button("Delete Row").on_press(Message::CommandSelected),
                button("Restore").on_press(Message::CommandSelected),
                button("Run").on_press(Message::CommandSelected),
                button("More...").on_press(Message::CommandSelected),
            ]
            .spacing(8),
            row![
                button("Save & Close").on_press(Message::CommandSelected),
                button("Add to schematic").on_press(Message::CommandSelected),
                button("Cancel").on_press(Message::CommandSelected),
                button("Help").on_press(Message::CommandSelected),
            ]
            .spacing(8),
        ]
        .spacing(7)
        .padding(12)
        .height(Length::Fill);

        window_shell::frame(
            TITLE,
            window_shell::menu_bar(MENUS, Message::CommandSelected),
            window_shell::empty_menu(),
            body.into(),
            STATUS,
        )
    }
}
