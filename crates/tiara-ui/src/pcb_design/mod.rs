use iced::widget::{
    button, checkbox, column, container, horizontal_space, radio, row, scrollable, text, text_input,
};
use iced::{Alignment, Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "PCB Design";
pub const SCREENSHOT: &str = "screenshots/PCB_Design_WIndow.png";
pub const FORM_RESOURCE: &str = "PCBWizard";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01bb2090");
const STATUS: &str = "PCB project setup";
const TOOLBAR: &[&str] = &[];

#[derive(Debug)]
pub struct Window {
    values: Vec<String>,
    checks: Vec<bool>,
    radio_selection: Option<&'static str>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            values: vec![String::new(); 2],
            checks: vec![false; 2],
            radio_selection: None,
        }
    }
}

#[derive(Debug, Clone)]
pub enum Message {
    TextChanged(usize, String),
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
        let body: Element<'_, Message> = container(
            column![
                scrollable(
                    column![
                        radio(
                            "Start new project",
                            "Start new project",
                            self.radio_selection,
                            Message::RadioSelected,
                        ),
                        radio(
                            "Modify existing project",
                            "Modify existing project",
                            self.radio_selection,
                            Message::RadioSelected,
                        ),
                        row![
                            text("Board width").width(Length::FillPortion(2)),
                            text_input("", &self.values[0])
                                .on_input(move |value| Message::TextChanged(0, value))
                                .width(Length::FillPortion(3)),
                        ]
                        .spacing(8)
                        .align_y(Alignment::Center),
                        row![
                            text("Board height").width(Length::FillPortion(2)),
                            text_input("", &self.values[1])
                                .on_input(move |value| Message::TextChanged(1, value))
                                .width(Length::FillPortion(3)),
                        ]
                        .spacing(8)
                        .align_y(Alignment::Center),
                        radio(
                            "No template",
                            "No template",
                            self.radio_selection,
                            Message::RadioSelected,
                        ),
                        radio(
                            "Use board template",
                            "Use board template",
                            self.radio_selection,
                            Message::RadioSelected,
                        ),
                        button(text("Browse..."))
                            .width(Length::Fill)
                            .on_press(Message::NoOp),
                        checkbox("Autoplacement", self.checks[0])
                            .on_toggle(move |value| Message::Toggle(0, value)),
                        checkbox("Autorouting", self.checks[1])
                            .on_toggle(move |value| Message::Toggle(1, value)),
                    ]
                    .spacing(8)
                ),
                row![
                    horizontal_space(),
                    button("Back").on_press(Message::NoOp),
                    button("Next").on_press(Message::NoOp),
                    button("Cancel").on_press(Message::NoOp),
                ]
                .spacing(6),
            ]
            .spacing(10),
        )
        .padding(18)
        .width(Length::Fill)
        .height(Length::Fill)
        .into();

        window_shell::frame(TITLE, menu, toolbar, body, STATUS)
    }
}
