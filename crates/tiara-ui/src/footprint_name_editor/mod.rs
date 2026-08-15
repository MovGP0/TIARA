use iced::widget::{column, container, row, scrollable, text, text_input};
use iced::{Alignment, Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "Footprint Name Editor";
pub const SCREENSHOT: &str = "screenshots/Footprint_Name_Editor.png";
pub const FORM_RESOURCE: &str = "frmComponentReport";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01bb5ca0");
const STATUS: &str = "Footprint assignments";
const TOOLBAR: &[&str] = &["Locate", "Renumber", "OK", "Cancel"];

#[derive(Debug)]
pub struct Window {
    values: Vec<String>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            values: vec![String::new(); 4],
        }
    }
}

#[derive(Debug, Clone)]
pub enum Message {
    TextChanged(usize, String),
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
                    text("Component").width(Length::FillPortion(2)),
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
                row![
                    text("Footprint").width(Length::FillPortion(2)),
                    text_input("", &self.values[2])
                        .on_input(move |value| Message::TextChanged(2, value))
                        .width(Length::FillPortion(3)),
                ]
                .spacing(8)
                .align_y(Alignment::Center),
                row![
                    text("Package").width(Length::FillPortion(2)),
                    text_input("", &self.values[3])
                        .on_input(move |value| Message::TextChanged(3, value))
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
