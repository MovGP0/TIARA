use iced::widget::{checkbox, column, container, pick_list, row, scrollable, text, text_input};
use iced::{Alignment, Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "Converters";
pub const SCREENSHOT: &str = "screenshots/Converters_Window.png";
pub const FORM_RESOURCE: &str = "ConvertersDlg";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01c4a6d0");
const STATUS: &str = "Converter selection";
const TOOLBAR: &[&str] = &["Search", "Open"];

#[derive(Debug)]
pub struct Window {
    values: Vec<String>,
    selections: Vec<Option<&'static str>>,
    checks: Vec<bool>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            values: vec![String::new(); 4],
            selections: vec![None; 2],
            checks: vec![false; 2],
        }
    }
}

#[derive(Debug, Clone)]
pub enum Message {
    TextChanged(usize, String),
    OptionSelected(usize, &'static str),
    Toggle(usize, bool),
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
            Message::Toggle(index, value) => {
                if let Some(check) = self.checks.get_mut(index) {
                    *check = value;
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
                    text("Manufacturer").width(Length::FillPortion(2)),
                    pick_list(
                        ["All", "Texas Instruments", "Infineon"],
                        self.selections[0],
                        move |value| { Message::OptionSelected(0, value) }
                    )
                    .width(Length::FillPortion(3)),
                ]
                .spacing(8)
                .align_y(Alignment::Center),
                row![
                    text("Topology").width(Length::FillPortion(2)),
                    pick_list(["All", "Buck", "Boost"], self.selections[1], move |value| {
                        Message::OptionSelected(1, value)
                    })
                    .width(Length::FillPortion(3)),
                ]
                .spacing(8)
                .align_y(Alignment::Center),
                row![
                    text("Frequency").width(Length::FillPortion(2)),
                    text_input("", &self.values[0])
                        .on_input(move |value| Message::TextChanged(0, value))
                        .width(Length::FillPortion(3)),
                ]
                .spacing(8)
                .align_y(Alignment::Center),
                row![
                    text("Input voltage").width(Length::FillPortion(2)),
                    text_input("", &self.values[1])
                        .on_input(move |value| Message::TextChanged(1, value))
                        .width(Length::FillPortion(3)),
                ]
                .spacing(8)
                .align_y(Alignment::Center),
                row![
                    text("Output voltage").width(Length::FillPortion(2)),
                    text_input("", &self.values[2])
                        .on_input(move |value| Message::TextChanged(2, value))
                        .width(Length::FillPortion(3)),
                ]
                .spacing(8)
                .align_y(Alignment::Center),
                row![
                    text("Output current").width(Length::FillPortion(2)),
                    text_input("", &self.values[3])
                        .on_input(move |value| Message::TextChanged(3, value))
                        .width(Length::FillPortion(3)),
                ]
                .spacing(8)
                .align_y(Alignment::Center),
                checkbox("Automotive", self.checks[0])
                    .on_toggle(move |value| Message::Toggle(0, value)),
                checkbox("PMBus", self.checks[1]).on_toggle(move |value| Message::Toggle(1, value)),
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
