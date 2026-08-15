use iced::widget::{button, column, container, radio, row, text};
use iced::{Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "Noname.shp - Schematic Symbol Editor";
pub const SCREENSHOT: &str = "screenshots/Schematic_Symbol_Editor_WIndow.png";
pub const FORM_RESOURCE: &str = "ShapeEdit";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01792af0");
const STATUS: &str = "Standard & Dir: EU    X: 60 Y: 144";
const MENUS: &[(&str, &[&str])] = &[
    ("File", &["New", "Open...", "Save", "Save As...", "Close"]),
    ("Edit", &["Undo", "Cut", "Copy", "Paste", "Select All"]),
    ("Draw", &["Line", "Rectangle", "Ellipse", "Text", "Pin"]),
    ("View", &["Grid", "Zoom In", "Zoom Out", "Redraw"]),
    ("Help", &["Contents", "About"]),
];
const TOOLBAR: &[&str] = &[
    "Properties",
    "Save",
    "Copy",
    "Paste",
    "Select",
    "Line",
    "Rectangle",
    "Ellipse",
    "Text",
    "Color",
    "Undo",
    "Redo",
    "Grid",
    "Zoom",
];
const PIN_TOOLS: &[&str] = &["NW", "N", "NE", "W", "E", "SW", "S", "SE"];

#[derive(Debug)]
pub struct Window {
    line_width: Option<u8>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            line_width: Some(1),
        }
    }
}

#[derive(Debug, Clone, Copy)]
pub enum Message {
    LineWidthSelected(u8),
    CommandSelected,
}

impl Window {
    pub const fn update(&mut self, message: Message) {
        if let Message::LineWidthSelected(value) = message {
            self.line_width = Some(value);
        }
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection when available.
    pub fn view(&self) -> Element<'_, Message> {
        let pin_tools = PIN_TOOLS.iter().fold(column![].spacing(3), |tools, label| {
            tools.push(
                button(text(*label))
                    .width(Length::Fill)
                    .on_press(Message::CommandSelected),
            )
        });
        let line_widths = (0..=3).fold(column![text("Width")].spacing(2), |choices, width| {
            choices.push(radio(
                if width == 0 { "Hair" } else { "" },
                width,
                self.line_width,
                Message::LineWidthSelected,
            ))
        });
        let palette = column![
            pin_tools,
            line_widths,
            text("Object color"),
            button("■").on_press(Message::CommandSelected),
            text("Fill color"),
            button("□").on_press(Message::CommandSelected),
        ]
        .spacing(6);
        let body = row![
            container(palette).padding(6).width(Length::Fixed(95.0)),
            window_shell::surface("Symbol drawing grid"),
        ]
        .spacing(4)
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
