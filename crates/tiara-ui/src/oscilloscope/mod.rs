use iced::widget::{
    button, checkbox, column, container, pick_list, radio, row, scrollable, text, text_input,
};
use iced::{Alignment, Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "Oscilloscope";
pub const SCREENSHOT: &str = "screenshots/Oscilloscope_Window.png";
pub const FORM_RESOURCE: &str = "ScopeWin";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("012b0870");
const STATUS: &str = "Time-domain display";
const TOOLBAR: &[&str] = &["Auto", "Start", "Stop", "Trigger..."];

#[derive(Debug)]
pub struct Window {
    values: Vec<String>,
    selections: Vec<Option<&'static str>>,
    checks: Vec<bool>,
    radio_selection: Option<&'static str>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            values: vec![String::new(); 4],
            selections: vec![None; 1],
            checks: vec![false; 1],
            radio_selection: None,
        }
    }
}

#[derive(Debug, Clone)]
pub enum Message {
    TextChanged(usize, String),
    OptionSelected(usize, &'static str),
    Toggle(usize, bool),
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
            Message::Toggle(index, value) => {
                if let Some(check) = self.checks.get_mut(index) {
                    *check = value;
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
                    checkbox("On", self.checks[0])
                        .on_toggle(move |value| Message::Toggle(0, value)),
                    row![
                        text("Position").width(Length::FillPortion(2)),
                        text_input("", &self.values[0])
                            .on_input(move |value| Message::TextChanged(0, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Volts/Div").width(Length::FillPortion(2)),
                        text_input("", &self.values[1])
                            .on_input(move |value| Message::TextChanged(1, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Cursor A").width(Length::FillPortion(2)),
                        text_input("", &self.values[2])
                            .on_input(move |value| Message::TextChanged(2, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Cursor B").width(Length::FillPortion(2)),
                        text_input("", &self.values[3])
                            .on_input(move |value| Message::TextChanged(3, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    button(text("Data"))
                        .width(Length::Fill)
                        .on_press(Message::NoOp),
                ]
                .spacing(8)
            ))
            .padding(8)
            .width(Length::Fixed(300.0))
            .height(Length::Fill),
            window_shell::surface("Oscilloscope display surface"),
        ]
        .spacing(6)
        .padding(6)
        .width(Length::Fill)
        .height(Length::Fill)
        .into();

        window_shell::frame(TITLE, menu, toolbar, body, STATUS)
    }
}
