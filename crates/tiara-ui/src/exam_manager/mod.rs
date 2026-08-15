use iced::widget::{button, column, pick_list, row, text, text_input};
use iced::{Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "Exam Manager";
pub const SCREENSHOT: &str = "screenshots/ExammManager_Selection_Tab.png";
pub const FORM_RESOURCE: &str = "SchematicEditor.EditorPanel.ExamPanel";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01c7cef0");
const STATUS: &str = "Embedded Schematic Editor panel";
const FAULTS: [&str; 1] = ["Original"];

#[derive(Debug)]
pub struct Window {
    active_tab: usize,
    fault: Option<&'static str>,
    penalty: String,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            active_tab: 0,
            fault: Some(FAULTS[0]),
            penalty: String::new(),
        }
    }
}

#[derive(Debug, Clone)]
pub enum Message {
    TabSelected(usize),
    FaultSelected(&'static str),
    PenaltyChanged(String),
    CommandSelected,
}

impl Window {
    pub fn update(&mut self, message: Message) {
        match message {
            Message::TabSelected(index) => self.active_tab = index,
            Message::FaultSelected(fault) => self.fault = Some(fault),
            Message::PenaltyChanged(value) => self.penalty = value,
            Message::CommandSelected => {}
        }
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection when available.
    pub fn view(&self) -> Element<'_, Message> {
        let tab_content = if self.active_tab == 0 {
            Self::selection_tab()
        } else {
            self.advisor_tab()
        };
        let body = column![
            row![
                text("Fault Insertion"),
                pick_list(FAULTS, self.fault, Message::FaultSelected)
            ]
            .spacing(8),
            row![
                button("Insert").on_press(Message::CommandSelected),
                button("Revert").on_press(Message::CommandSelected),
                button("Revert all").on_press(Message::CommandSelected),
                button("Delete").on_press(Message::CommandSelected),
            ]
            .spacing(4),
            button("Map to hardware...")
                .width(Length::Fill)
                .on_press(Message::CommandSelected),
            tab_content,
            row![
                button("Selection").on_press(Message::TabSelected(0)),
                button("Advisor").on_press(Message::TabSelected(1)),
            ]
            .spacing(4),
        ]
        .spacing(6)
        .padding(8)
        .height(Length::Fill);

        window_shell::frame(
            TITLE,
            window_shell::empty_menu(),
            window_shell::empty_menu(),
            body.into(),
            STATUS,
        )
    }

    fn selection_tab() -> Element<'static, Message> {
        column![
            text("Selection"),
            window_shell::surface("Selected fault versions"),
            row![
                button("Edit...").on_press(Message::CommandSelected),
                button("Add...").on_press(Message::CommandSelected),
                button("Delete").on_press(Message::CommandSelected),
            ]
            .spacing(4),
        ]
        .spacing(4)
        .height(Length::Fill)
        .into()
    }

    fn advisor_tab(&self) -> Element<'_, Message> {
        column![
            row![
                text("Penalty [%]:"),
                text_input("", &self.penalty)
                    .on_input(Message::PenaltyChanged)
                    .width(Length::Fixed(90.0)),
                text("0/0"),
            ]
            .spacing(8),
            window_shell::surface("Advisor entries"),
            row![
                button("Previous").on_press(Message::CommandSelected),
                button("Add").on_press(Message::CommandSelected),
                button("Insert").on_press(Message::CommandSelected),
                button("Delete").on_press(Message::CommandSelected),
                button("Next").on_press(Message::CommandSelected),
            ]
            .spacing(4),
        ]
        .spacing(4)
        .height(Length::Fill)
        .into()
    }
}
