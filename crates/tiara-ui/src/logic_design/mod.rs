use iced::widget::{button, column, container, row, text, text_input};
use iced::{Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "Logic Design";
pub const SCREENSHOT: &str = "screenshots/Logic_design_Window.png";
pub const FORM_RESOURCE: &str = "introduction_form";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01b2c1d0");
const STATUS: &str = "F(A,B,C)";

#[derive(Debug)]
pub struct Window {
    variable_count: String,
    function: String,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            variable_count: "0".to_owned(),
            function: String::new(),
        }
    }
}

#[derive(Debug, Clone)]
pub enum Message {
    VariableCountChanged(String),
    FunctionChanged(String),
    CommandSelected,
}

impl Window {
    pub fn update(&mut self, message: Message) {
        match message {
            Message::VariableCountChanged(value) => self.variable_count = value,
            Message::FunctionChanged(value) => self.function = value,
            Message::CommandSelected => {}
        }
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection when available.
    pub fn view(&self) -> Element<'_, Message> {
        let input = container(
            column![
                text("Input").size(16),
                row![
                    text("Number of variables"),
                    text_input("", &self.variable_count)
                        .on_input(Message::VariableCountChanged)
                        .width(Length::Fixed(55.0)),
                    text("F( )").size(18),
                ]
                .spacing(8),
                row![
                    text("Fout ="),
                    text_input("", &self.function).on_input(Message::FunctionChanged),
                ]
                .spacing(8),
            ]
            .spacing(7),
        )
        .padding(10);
        let operations = column![
            text("Operation").size(16),
            button("Minterm/Maxterm").on_press(Message::CommandSelected),
            button("Truth table").on_press(Message::CommandSelected),
            button("Veitch-Karnaugh table").on_press(Message::CommandSelected),
            button("Quine-McCluskey method").on_press(Message::CommandSelected),
            button("Schematic diagram").on_press(Message::CommandSelected),
        ]
        .spacing(6);
        let actions = column![
            button("Close").on_press(Message::CommandSelected),
            button("Help").on_press(Message::CommandSelected),
        ]
        .spacing(8);
        let body = column![input, row![operations, actions].spacing(50)]
            .spacing(10)
            .padding(10);

        window_shell::frame(
            TITLE,
            window_shell::empty_menu(),
            window_shell::empty_menu(),
            body.into(),
            STATUS,
        )
    }
}
