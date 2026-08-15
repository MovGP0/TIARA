use iced::widget::{
    button, checkbox, column, container, horizontal_space, row, scrollable, text, text_input,
};
use iced::{Alignment, Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "Block Wizard";
pub const SCREENSHOT: &str = "screenshots/Block_Wizard_WIndow.png";
pub const FORM_RESOURCE: &str = "frmBlockWizard";
pub const ORIGINAL_FUNCTION: Option<&str> = None;
const STATUS: &str = "Define a rectangular block symbol";
const TOOLBAR: &[&str] = &[];

#[derive(Debug)]
pub struct Window {
    values: Vec<String>,
    checks: Vec<bool>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            values: vec![String::new(); 5],
            checks: vec![false; 1],
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
        let body: Element<'_, Message> = container(
            column![
                scrollable(
                    column![
                        row![
                            text("Block name").width(Length::FillPortion(2)),
                            text_input("", &self.values[0])
                                .on_input(move |value| Message::TextChanged(0, value))
                                .width(Length::FillPortion(3)),
                        ]
                        .spacing(8)
                        .align_y(Alignment::Center),
                        row![
                            text("Top pins").width(Length::FillPortion(2)),
                            text_input("", &self.values[1])
                                .on_input(move |value| Message::TextChanged(1, value))
                                .width(Length::FillPortion(3)),
                        ]
                        .spacing(8)
                        .align_y(Alignment::Center),
                        row![
                            text("Right pins").width(Length::FillPortion(2)),
                            text_input("", &self.values[2])
                                .on_input(move |value| Message::TextChanged(2, value))
                                .width(Length::FillPortion(3)),
                        ]
                        .spacing(8)
                        .align_y(Alignment::Center),
                        row![
                            text("Bottom pins").width(Length::FillPortion(2)),
                            text_input("", &self.values[3])
                                .on_input(move |value| Message::TextChanged(3, value))
                                .width(Length::FillPortion(3)),
                        ]
                        .spacing(8)
                        .align_y(Alignment::Center),
                        row![
                            text("Left pins").width(Length::FillPortion(2)),
                            text_input("", &self.values[4])
                                .on_input(move |value| Message::TextChanged(4, value))
                                .width(Length::FillPortion(3)),
                        ]
                        .spacing(8)
                        .align_y(Alignment::Center),
                        checkbox("Skip Wizard", self.checks[0])
                            .on_toggle(move |value| Message::Toggle(0, value)),
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
