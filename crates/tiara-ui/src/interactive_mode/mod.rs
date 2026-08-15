use iced::widget::{checkbox, column, container, row, scrollable, text, text_input};
use iced::{Alignment, Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "Interactive Mode - Options";
pub const SCREENSHOT: &str = "screenshots/Interactive_Mode_Window.png";
pub const FORM_RESOURCE: &str = "InteractiveModeOptionDlg";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01b7ce00");
const STATUS: &str = "Transient initial values";
const TOOLBAR: &[&str] = &["OK", "Cancel", "Help"];

#[derive(Debug)]
pub struct Window {
    values: Vec<String>,
    checks: Vec<bool>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            values: vec![String::new(); 3],
            checks: vec![false; 4],
        }
    }
}

#[derive(Debug, Clone)]
pub enum Message {
    TextChanged(usize, String),
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
                    text("Simulation time unit").width(Length::FillPortion(2)),
                    text_input("", &self.values[0])
                        .on_input(move |value| Message::TextChanged(0, value))
                        .width(Length::FillPortion(3)),
                ]
                .spacing(8)
                .align_y(Alignment::Center),
                row![
                    text("Animation time unit").width(Length::FillPortion(2)),
                    text_input("", &self.values[1])
                        .on_input(move |value| Message::TextChanged(1, value))
                        .width(Length::FillPortion(3)),
                ]
                .spacing(8)
                .align_y(Alignment::Center),
                row![
                    text("End time").width(Length::FillPortion(2)),
                    text_input("", &self.values[2])
                        .on_input(move |value| Message::TextChanged(2, value))
                        .width(Length::FillPortion(3)),
                ]
                .spacing(8)
                .align_y(Alignment::Center),
                checkbox("Sound effects enabled", self.checks[0])
                    .on_toggle(move |value| Message::Toggle(0, value)),
                checkbox("Calculate operating point", self.checks[1])
                    .on_toggle(move |value| Message::Toggle(1, value)),
                checkbox("Use initial conditions", self.checks[2])
                    .on_toggle(move |value| Message::Toggle(2, value)),
                checkbox("Zero initial values", self.checks[3])
                    .on_toggle(move |value| Message::Toggle(3, value)),
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
