use iced::widget::{column, container, pick_list, radio, row, scrollable, text, text_input};
use iced::{Alignment, Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "Signal Analyzer";
pub const SCREENSHOT: &str = "screenshots/Signal_Analyzer_Window.png";
pub const FORM_RESOURCE: &str = "SignalAnalyzerWin";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("0138a340");
const STATUS: &str = "Signal measurement";
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
    radio_selection: Option<&'static str>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            values: vec![String::new(); 4],
            selections: vec![None; 4],
            radio_selection: None,
        }
    }
}

#[derive(Debug, Clone)]
pub enum Message {
    TextChanged(usize, String),
    OptionSelected(usize, &'static str),
    RadioSelected(&'static str),
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
            Message::RadioSelected(value) => {
                self.radio_selection = Some(value);
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
                    radio(
                        "Coupling AC",
                        "Coupling AC",
                        self.radio_selection,
                        Message::RadioSelected,
                    ),
                    radio(
                        "Coupling DC",
                        "Coupling DC",
                        self.radio_selection,
                        Message::RadioSelected,
                    ),
                    row![
                        text("Port1").width(Length::FillPortion(2)),
                        pick_list(["Port 1", "Port 2"], self.selections[1], move |value| {
                            Message::OptionSelected(1, value)
                        })
                        .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Port2").width(Length::FillPortion(2)),
                        pick_list(["Port 1", "Port 2"], self.selections[2], move |value| {
                            Message::OptionSelected(2, value)
                        })
                        .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Cursor A").width(Length::FillPortion(2)),
                        text_input("", &self.values[0])
                            .on_input(move |value| Message::TextChanged(0, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Cursor B").width(Length::FillPortion(2)),
                        text_input("", &self.values[1])
                            .on_input(move |value| Message::TextChanged(1, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Display").width(Length::FillPortion(2)),
                        text_input("", &self.values[2])
                            .on_input(move |value| Message::TextChanged(2, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Measurement").width(Length::FillPortion(2)),
                        text_input("", &self.values[3])
                            .on_input(move |value| Message::TextChanged(3, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Mode").width(Length::FillPortion(2)),
                        pick_list(
                            ["Normal", "Automatic", "Single"],
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
            window_shell::surface("Signal Analyzer display surface"),
        ]
        .spacing(6)
        .padding(6)
        .width(Length::Fill)
        .height(Length::Fill)
        .into();

        window_shell::frame(TITLE, menu, toolbar, body, STATUS)
    }
}
