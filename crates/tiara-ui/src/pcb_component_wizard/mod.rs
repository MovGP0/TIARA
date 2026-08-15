use iced::widget::{
    button, column, container, horizontal_space, pick_list, radio, row, scrollable, text,
    text_input,
};
use iced::{Alignment, Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "PCB Component Wizard";
pub const SCREENSHOT: &str = "screenshots/PCB_Component_Wizard.png";
pub const FORM_RESOURCE: &str = "frmPCBOnlyCompWizard";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01bc2800");
const STATUS: &str = "Create PCB-only component";
const TOOLBAR: &[&str] = &[];

#[derive(Debug)]
pub struct Window {
    values: Vec<String>,
    selections: Vec<Option<&'static str>>,
    radio_selection: Option<&'static str>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            values: vec![String::new(); 2],
            selections: vec![None; 2],
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
        let menu = window_shell::empty_menu();
        let toolbar = window_shell::toolbar(TOOLBAR, Message::NoOp);
        let body: Element<'_, Message> = container(
            column![
                scrollable(
                    column![
                        row![
                            text("Icon").width(Length::FillPortion(2)),
                            text_input("", &self.values[0])
                                .on_input(move |value| Message::TextChanged(0, value))
                                .width(Length::FillPortion(3)),
                        ]
                        .spacing(8)
                        .align_y(Alignment::Center),
                        row![
                            text("Name").width(Length::FillPortion(2)),
                            text_input("", &self.values[1])
                                .on_input(move |value| Message::TextChanged(1, value))
                                .width(Length::FillPortion(3)),
                        ]
                        .spacing(8)
                        .align_y(Alignment::Center),
                        row![
                            text("Shape").width(Length::FillPortion(2)),
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
                            text("Select component file").width(Length::FillPortion(2)),
                            pick_list(
                                ["Default", "Option 1", "Option 2"],
                                self.selections[1],
                                move |value| { Message::OptionSelected(1, value) }
                            )
                            .width(Length::FillPortion(3)),
                        ]
                        .spacing(8)
                        .align_y(Alignment::Center),
                        radio(
                            "Existing group",
                            "Existing group",
                            self.radio_selection,
                            Message::RadioSelected,
                        ),
                        radio(
                            "New group",
                            "New group",
                            self.radio_selection,
                            Message::RadioSelected,
                        ),
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
