use iced::widget::{checkbox, column, container, pick_list, row, scrollable, text, text_input};
use iced::{Alignment, Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "Digital Signal Generator";
pub const SCREENSHOT: &str = "screenshots/Digital_Signal_Generator_Window.png";
pub const FORM_RESOURCE: &str = "DigitalSignalGeneratorWin";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("0150f690");
const STATUS: &str = "Digital output";
const TOOLBAR: &[&str] = &["Start", "Stop", "Settings"];

#[derive(Debug)]
pub struct Window {
    values: Vec<String>,
    selections: Vec<Option<&'static str>>,
    checks: Vec<bool>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            values: vec![String::new(); 6],
            selections: vec![None; 4],
            checks: vec![false; 1],
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
    #[allow(clippy::too_many_lines)]
    pub fn view(&self) -> Element<'_, Message> {
        let menu = window_shell::empty_menu();
        let toolbar = window_shell::toolbar(TOOLBAR, Message::NoOp);
        let body: Element<'_, Message> = row![
            container(scrollable(
                column![
                    row![
                        text("Channel").width(Length::FillPortion(2)),
                        pick_list(
                            ["Channel 1", "Channel 2", "Channel 3", "Channel 4"],
                            self.selections[0],
                            move |value| { Message::OptionSelected(0, value) }
                        )
                        .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Group Label").width(Length::FillPortion(2)),
                        text_input("", &self.values[0])
                            .on_input(move |value| Message::TextChanged(0, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    checkbox("On", self.checks[0])
                        .on_toggle(move |value| Message::Toggle(0, value)),
                    row![
                        text("From").width(Length::FillPortion(2)),
                        text_input("", &self.values[1])
                            .on_input(move |value| Message::TextChanged(1, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("To").width(Length::FillPortion(2)),
                        text_input("", &self.values[2])
                            .on_input(move |value| Message::TextChanged(2, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Period").width(Length::FillPortion(2)),
                        text_input("", &self.values[3])
                            .on_input(move |value| Message::TextChanged(3, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Clock").width(Length::FillPortion(2)),
                        text_input("", &self.values[4])
                            .on_input(move |value| Message::TextChanged(4, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Length").width(Length::FillPortion(2)),
                        text_input("", &self.values[5])
                            .on_input(move |value| Message::TextChanged(5, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Mode").width(Length::FillPortion(2)),
                        pick_list(
                            ["Normal", "Automatic", "Single"],
                            self.selections[1],
                            move |value| { Message::OptionSelected(1, value) }
                        )
                        .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Level").width(Length::FillPortion(2)),
                        pick_list(
                            ["Default", "Option 1", "Option 2"],
                            self.selections[2],
                            move |value| { Message::OptionSelected(2, value) }
                        )
                        .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Trigger").width(Length::FillPortion(2)),
                        pick_list(
                            ["Default", "Option 1", "Option 2"],
                            self.selections[3],
                            move |value| { Message::OptionSelected(3, value) }
                        )
                        .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                ]
                .spacing(8)
            ))
            .padding(8)
            .width(Length::Fixed(300.0))
            .height(Length::Fill),
            window_shell::surface("Digital Signal Generator display surface"),
        ]
        .spacing(6)
        .padding(6)
        .width(Length::Fill)
        .height(Length::Fill)
        .into();

        window_shell::frame(TITLE, menu, toolbar, body, STATUS)
    }
}
