use iced::widget::{column, container, pick_list, radio, row, scrollable, text, text_input};
use iced::{Alignment, Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "Filter Design";
pub const SCREENSHOT: &str = "screenshots/Filter_Design_Window.png";
pub const FORM_RESOURCE: &str = "FilterDesign";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("019d53b0");
const STATUS: &str = "Filter response preview";
const MENUS: &[(&str, &[&str])] = &[
    ("File", &["New", "Open...", "Save", "Save As...", "Close"]),
    ("Design", &["Calculate", "Place", "Load Defaults"]),
    ("View", &["Zoom In", "Zoom Out", "Redraw", "Options..."]),
    ("Help", &["Contents", "Component Help", "About"]),
];
const TOOLBAR: &[&str] = &["Load defaults", "Load...", "Save...", "Calculate", "Place"];

#[derive(Debug)]
pub struct Window {
    values: Vec<String>,
    selections: Vec<Option<&'static str>>,
    radio_selection: Option<&'static str>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            values: vec![String::new(); 1],
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
    pub fn view(&self) -> Element<'_, Message> {
        let menu = window_shell::menu_bar(MENUS, Message::NoOp);
        let toolbar = window_shell::toolbar(TOOLBAR, Message::NoOp);
        let body: Element<'_, Message> = row![
            container(scrollable(
                column![
                    radio(
                        "Active/passive filter",
                        "Active/passive filter",
                        self.radio_selection,
                        Message::RadioSelected,
                    ),
                    row![
                        text("Approximation").width(Length::FillPortion(2)),
                        pick_list(
                            ["Default", "Option 1", "Option 2"],
                            self.selections[0],
                            move |value| { Message::OptionSelected(0, value) }
                        )
                        .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Build target").width(Length::FillPortion(2)),
                        pick_list(
                            ["Default", "Option 1", "Option 2"],
                            self.selections[1],
                            move |value| { Message::OptionSelected(1, value) }
                        )
                        .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("OPAMP type").width(Length::FillPortion(2)),
                        pick_list(
                            ["Default", "Linear", "Logarithmic"],
                            self.selections[2],
                            move |value| { Message::OptionSelected(2, value) }
                        )
                        .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Roll-off rate").width(Length::FillPortion(2)),
                        text_input("", &self.values[0])
                            .on_input(move |value| Message::TextChanged(0, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Type").width(Length::FillPortion(2)),
                        pick_list(
                            ["Default", "Linear", "Logarithmic"],
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
            window_shell::surface("Filter Design editor surface"),
        ]
        .spacing(6)
        .padding(6)
        .width(Length::Fill)
        .height(Length::Fill)
        .into();

        window_shell::frame(TITLE, menu, toolbar, body, STATUS)
    }
}
