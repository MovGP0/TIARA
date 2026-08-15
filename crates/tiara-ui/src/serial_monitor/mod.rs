use iced::widget::{button, checkbox, column, row, text, text_input};
use iced::{Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "Serial monitor";
pub const SCREENSHOT: &str = "screenshots/Serial_Monitor_Window.png";
pub const FORM_RESOURCE: &str = "HTerm";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("014ba210");
const STATUS: &str = "Serial data";

#[derive(Debug, Default)]
pub struct Window {
    send_text: String,
    add_carriage_return: bool,
    add_line_feed: bool,
}

#[derive(Debug, Clone)]
pub enum Message {
    SendTextChanged(String),
    AddCarriageReturnChanged(bool),
    AddLineFeedChanged(bool),
    CommandSelected,
}

impl Window {
    pub fn update(&mut self, message: Message) {
        match message {
            Message::SendTextChanged(value) => self.send_text = value,
            Message::AddCarriageReturnChanged(value) => self.add_carriage_return = value,
            Message::AddLineFeedChanged(value) => self.add_line_feed = value,
            Message::CommandSelected => {}
        }
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection when available.
    pub fn view(&self) -> Element<'_, Message> {
        let received = column![
            row![
                button("Clear received").on_press(Message::CommandSelected),
                text("Received data"),
            ]
            .spacing(20),
            window_shell::surface("Received data"),
        ]
        .height(Length::FillPortion(3));
        let transmitted = column![
            text("Transmitted data"),
            row![
                text("Send now:"),
                text_input("", &self.send_text).on_input(Message::SendTextChanged),
                button("Send").on_press(Message::CommandSelected),
                checkbox("Add \\r", self.add_carriage_return)
                    .on_toggle(Message::AddCarriageReturnChanged),
                checkbox("Add \\n", self.add_line_feed).on_toggle(Message::AddLineFeedChanged),
            ]
            .spacing(8),
            row![
                text("Timed sequence:"),
                button("Set...").on_press(Message::CommandSelected),
            ]
            .spacing(8),
        ]
        .spacing(8)
        .height(Length::FillPortion(1));
        let body = column![received, transmitted]
            .spacing(8)
            .padding(8)
            .height(Length::Fill);

        window_shell::frame(
            TITLE,
            window_shell::empty_menu(),
            window_shell::empty_menu(),
            body.into(),
            STATUS,
        )
    }
}
