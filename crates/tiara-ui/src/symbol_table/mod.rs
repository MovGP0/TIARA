use iced::widget::{column, container, pick_list, row, scrollable, text, text_input};
use iced::{Alignment, Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "Symbol table";
pub const SCREENSHOT: &str = "screenshots/Symbol_Table_Window.png";
pub const FORM_RESOURCE: &str = "I_SymDlg";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("011158f0");
const STATUS: &str = "Available symbols";
const TOOLBAR: &[&str] = &["Insert", "Close"];

#[derive(Debug)]
pub struct Window {
    values: Vec<String>,
    selections: Vec<Option<&'static str>>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            values: vec![String::new(); 2],
            selections: vec![None; 1],
        }
    }
}

#[derive(Debug, Clone)]
pub enum Message {
    TextChanged(usize, String),
    OptionSelected(usize, &'static str),
    NoOp,
}

impl Window {
    pub fn update(&mut self, message: Message) {
        match message {
            Message::TextChanged(index, value) => {
                if let Some(field) = self.values.get_mut(index) {
                    *field = value;
                }
            }
            Message::OptionSelected(index, value) => {
                if let Some(selection) = self.selections.get_mut(index) {
                    *selection = Some(value);
                }
            }
            Message::NoOp => {}
        }
    }
    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection when available.
    pub fn view(&self) -> Element<'_, Message> {
        let menu = window_shell::empty_menu();
        let toolbar = window_shell::toolbar(TOOLBAR, Message::NoOp);
        let body: Element<'_, Message> = container(scrollable(
            column![
                row![
                    text("Symbol").width(Length::FillPortion(2)),
                    pick_list(
                        ["Default", "Option 1", "Option 2"],
                        self.selections[0],
                        move |value| { Message::OptionSelected(0, value) }
                    )
                    .width(Length::FillPortion(3)),
                ]
                .spacing(8)
                .align_y(Alignment::Center),
                row![
                    text("Name").width(Length::FillPortion(2)),
                    text_input("", &self.values[0])
                        .on_input(move |value| Message::TextChanged(0, value))
                        .width(Length::FillPortion(3)),
                ]
                .spacing(8)
                .align_y(Alignment::Center),
                row![
                    text("Value").width(Length::FillPortion(2)),
                    text_input("", &self.values[1])
                        .on_input(move |value| Message::TextChanged(1, value))
                        .width(Length::FillPortion(3)),
                ]
                .spacing(8)
                .align_y(Alignment::Center),
            ]
            .spacing(8),
        ))
        .padding(18)
        .width(Length::Fill)
        .height(Length::Fill)
        .into();

        window_shell::frame(TITLE, menu, toolbar, body, STATUS)
    }
}
