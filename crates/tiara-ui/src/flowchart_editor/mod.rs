use iced::widget::{button, column, container, row, text};
use iced::{Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "TINA Flowchart Editor";
pub const SCREENSHOT: &str = "screenshots/Flowchart_Editor.png";
pub const FORM_RESOURCE: &str = "FlowChartMainForm";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("0104e230");
const STATUS: &str = "Line: 1    Lock Editor";
const MENUS: &[(&str, &[&str])] = &[
    ("File", &["New", "Open...", "Save", "Save As...", "Close"]),
    ("Edit", &["Undo", "Cut", "Copy", "Paste", "Select All"]),
    ("Tools", &["Check", "Options...", "Calculator"]),
    ("Help", &["Contents", "About"]),
];
const TOOLBAR: &[&str] = &["New", "Open", "Save", "Check"];
const PALETTE: &[&str] = &[
    "START",
    "STOP",
    "Test bit",
    "Decision",
    "Set variable",
    "Change variable",
    "Wait",
    "Read input",
    "Output",
    "Interrupt",
    "Code",
];

#[derive(Debug, Default)]
pub struct Window {
    code_tab: bool,
}

#[derive(Debug, Clone, Copy)]
pub enum Message {
    SelectFlowchart,
    SelectCode,
    CommandSelected,
}

impl Window {
    pub const fn update(&mut self, message: Message) {
        match message {
            Message::SelectFlowchart => self.code_tab = false,
            Message::SelectCode => self.code_tab = true,
            Message::CommandSelected => {}
        }
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection when available.
    pub fn view(&self) -> Element<'_, Message> {
        let palette = PALETTE.iter().fold(column![].spacing(7), |palette, label| {
            palette.push(
                button(text(*label))
                    .width(Length::Fill)
                    .on_press(Message::CommandSelected),
            )
        });
        let work_area = if self.code_tab {
            window_shell::surface("Code editor")
        } else {
            window_shell::surface("Flowchart grid")
        };
        let body = column![
            row![
                button("Flowchart").on_press(Message::SelectFlowchart),
                button("Code").on_press(Message::SelectCode),
            ]
            .spacing(4),
            row![
                container(palette).padding(6).width(Length::Fixed(110.0)),
                work_area,
            ]
            .spacing(4)
            .height(Length::Fill),
        ]
        .height(Length::Fill);

        window_shell::frame(
            TITLE,
            window_shell::menu_bar(MENUS, Message::CommandSelected),
            window_shell::toolbar(TOOLBAR, Message::CommandSelected),
            body.into(),
            STATUS,
        )
    }
}
