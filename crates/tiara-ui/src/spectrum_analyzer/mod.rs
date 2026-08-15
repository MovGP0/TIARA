use iced::widget::{checkbox, column, container, pick_list, row, scrollable, text, text_input};
use iced::{Alignment, Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "Spectrum Analyzer - Virtual";
pub const SCREENSHOT: &str = "screenshots/Spectrum_Analyzer_Window.png";
pub const FORM_RESOURCE: &str = "SignalAnalyzerWin";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("0138a340");
const STATUS: &str = "Frequency spectrum";
const TOOLBAR: &[&str] = &[
    "Source...",
    "Display...",
    "Trigger...",
    "Ref.-Window",
    "Start",
    "Stop",
];

#[derive(Debug)]
pub struct Window {
    values: Vec<String>,
    selections: Vec<Option<&'static str>>,
    checks: Vec<bool>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            values: vec![String::new(); 5],
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
                        text("dB Magnitude").width(Length::FillPortion(2)),
                        text_input("", &self.values[0])
                            .on_input(move |value| Message::TextChanged(0, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("High").width(Length::FillPortion(2)),
                        text_input("", &self.values[1])
                            .on_input(move |value| Message::TextChanged(1, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Low").width(Length::FillPortion(2)),
                        text_input("", &self.values[2])
                            .on_input(move |value| Message::TextChanged(2, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Amplitude range").width(Length::FillPortion(2)),
                        pick_list(["Auto", "Low", "High"], self.selections[0], move |value| {
                            Message::OptionSelected(0, value)
                        })
                        .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Frequency start").width(Length::FillPortion(2)),
                        text_input("", &self.values[3])
                            .on_input(move |value| Message::TextChanged(3, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Frequency stop").width(Length::FillPortion(2)),
                        text_input("", &self.values[4])
                            .on_input(move |value| Message::TextChanged(4, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Resolution").width(Length::FillPortion(2)),
                        pick_list(
                            ["Default", "Option 1", "Option 2"],
                            self.selections[1],
                            move |value| { Message::OptionSelected(1, value) }
                        )
                        .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    checkbox("Swept-sine", self.checks[0])
                        .on_toggle(move |value| Message::Toggle(0, value)),
                    row![
                        text("Channel").width(Length::FillPortion(2)),
                        pick_list(
                            ["Channel 1", "Channel 2", "Channel 3", "Channel 4"],
                            self.selections[2],
                            move |value| { Message::OptionSelected(2, value) }
                        )
                        .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Coupling").width(Length::FillPortion(2)),
                        pick_list(["AC", "DC"], self.selections[3], move |value| {
                            Message::OptionSelected(3, value)
                        })
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
            window_shell::surface("Spectrum Analyzer - Virtual display surface"),
        ]
        .spacing(6)
        .padding(6)
        .width(Length::Fill)
        .height(Length::Fill)
        .into();

        window_shell::frame(TITLE, menu, toolbar, body, STATUS)
    }
}
