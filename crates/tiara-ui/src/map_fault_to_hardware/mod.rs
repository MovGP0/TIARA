use iced::widget::{column, container, pick_list, row, scrollable, text};
use iced::{Alignment, Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "Map Fault to Hardware";
pub const SCREENSHOT: &str = "screenshots/Map_Fault_to_Hardware_Window.png";
pub const FORM_RESOURCE: &str = "MapFaultDlg";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01b71870");
const STATUS: &str = "Fault mapping";
const TOOLBAR: &[&str] = &["OK", "Cancel", "Help"];

#[derive(Debug)]
pub struct Window {
    selections: Vec<Option<&'static str>>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            selections: vec![None; 3],
        }
    }
}

#[derive(Debug, Clone, Copy)]
pub enum Message {
    OptionSelected(usize, &'static str),
    NoOp,
}

impl Window {
    pub fn update(&mut self, message: Message) {
        match message {
            Message::OptionSelected(index, value) => {
                if let Some(selection) = self.selections.get_mut(index) {
                    *selection = Some(value);
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
                    text("Fault").width(Length::FillPortion(2)),
                    pick_list(
                        ["Original", "Fault 1", "Fault 2"],
                        self.selections[0],
                        move |value| { Message::OptionSelected(0, value) }
                    )
                    .width(Length::FillPortion(3)),
                ]
                .spacing(8)
                .align_y(Alignment::Center),
                row![
                    text("Hardware channel").width(Length::FillPortion(2)),
                    pick_list(
                        ["Channel 1", "Channel 2", "Channel 3", "Channel 4"],
                        self.selections[1],
                        move |value| { Message::OptionSelected(1, value) }
                    )
                    .width(Length::FillPortion(3)),
                ]
                .spacing(8)
                .align_y(Alignment::Center),
                row![
                    text("Mapping").width(Length::FillPortion(2)),
                    pick_list(
                        ["Default", "Option 1", "Option 2"],
                        self.selections[2],
                        move |value| { Message::OptionSelected(2, value) }
                    )
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
