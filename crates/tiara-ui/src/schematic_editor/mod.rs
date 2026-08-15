mod inventory;
mod menu;

use std::fmt;

use iced::widget::{
    button, column, container, horizontal_rule, horizontal_space, pick_list, row, text,
};
use iced::{Alignment, Background, Border, Color, Element, Length, Shadow, Theme};

use inventory::{COMPONENT_CATEGORIES, COMPONENT_SYMBOLS};
const DOT_ROW: &str = "·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·";

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum NodeReference {
    #[default]
    Ground,
    AnalogGround,
    DigitalGround,
}

impl NodeReference {
    const ALL: [Self; 3] = [Self::Ground, Self::AnalogGround, Self::DigitalGround];
}

impl fmt::Display for NodeReference {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        let label = match self {
            Self::Ground => "Ground",
            Self::AnalogGround => "Analog ground",
            Self::DigitalGround => "Digital ground",
        };

        formatter.write_str(label)
    }
}

/// Presentation-only messages. None of these messages calls application code.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    SelectComponentCategory(usize),
    SelectNodeReference(NodeReference),
    NoOp,
}

/// Presentation state for the Schematic Editor window.
///
/// Trace anchors:
/// - DFM resource: `SchematicEditor` / `TSchematicEditor`
/// - Screenshot: `screenshots/MainForm.png`
/// - Original create function: Ghidra `01c69770`
/// - Original resize function: Ghidra `01c72ec0`
#[derive(Debug, Default)]
pub struct SchematicEditor {
    selected_category: usize,
    node_reference: NodeReference,
}

impl SchematicEditor {
    /// Updates local display state only.
    ///
    /// Original Delphi handlers are deliberately not translated in this UI
    /// shell. Later feature beads can connect application messages.
    pub(crate) const fn update(&mut self, message: Message) {
        match message {
            Message::SelectComponentCategory(index) => {
                self.selected_category = index;
            }
            Message::SelectNodeReference(reference) => {
                self.node_reference = reference;
            }
            Message::NoOp => {}
        }
    }

    /// Builds the window hierarchy recovered from the Schematic Editor DFM.
    ///
    /// This is the Rust presentation counterpart of the structure initialized
    /// by Ghidra function `01c69770`. It does not reproduce that function's
    /// file, configuration, timer, or callback behavior.
    pub(crate) fn view(&self) -> Element<'_, Message> {
        let content = column![
            container(menu::view()).width(Length::Fill),
            horizontal_rule(1),
            self.general_toolbar(),
            Self::editor_toolbar(),
            Self::component_palette(),
            self.category_tabs(),
            Self::schematic_canvas(),
            Self::document_tabs(),
            Self::status_bar(),
        ]
        .width(Length::Fill)
        .height(Length::Fill);

        container(content)
            .width(Length::Fill)
            .height(Length::Fill)
            .into()
    }

    fn general_toolbar(&self) -> Element<'_, Message> {
        let tools = [
            ("New", "N"),
            ("Open", "O"),
            ("Web", "W"),
            ("Save", "S"),
            ("Copy", "C"),
            ("Paste", "P"),
            ("Close", "X"),
        ];
        let buttons = tools
            .into_iter()
            .map(|(name, symbol)| toolbar_button(symbol, name));

        container(
            row(buttons)
                .push(horizontal_space())
                .push(text("Reference:"))
                .push(pick_list(
                    NodeReference::ALL,
                    Some(self.node_reference),
                    Message::SelectNodeReference,
                ))
                .spacing(5)
                .align_y(Alignment::Center),
        )
        .padding([3, 6])
        .width(Length::Fill)
        .style(toolbar_style)
        .into()
    }

    fn editor_toolbar() -> Element<'static, Message> {
        let tools = [
            ("Select", "SEL"),
            ("Edit", "ED"),
            ("Component", "CMP"),
            ("Wire", "WIRE"),
            ("Text", "TXT"),
            ("Rotate left", "RL"),
            ("Rotate right", "RR"),
            ("Mirror", "MIR"),
            ("Grid", "GRID"),
            ("Zoom", "ZOOM"),
            ("Error", "ERR"),
            ("Interactive", "RUN"),
            ("3D", "3D"),
            ("PCB", "PCB"),
            ("Probe", "PROBE"),
            ("Delete", "DEL"),
            ("Power", "PWR"),
            ("Last simulation", "LAST"),
            ("AI Assistant", "AI"),
        ];

        container(
            row(tools
                .into_iter()
                .map(|(name, symbol)| toolbar_button(symbol, name)))
            .spacing(3)
            .align_y(Alignment::Center),
        )
        .padding([3, 6])
        .width(Length::Fill)
        .style(toolbar_style)
        .into()
    }

    fn component_palette() -> Element<'static, Message> {
        let symbols = COMPONENT_SYMBOLS.iter().map(|symbol| {
            Element::from(
                button(text(*symbol).size(14))
                    .padding([8, 10])
                    .on_press(Message::NoOp),
            )
        });

        container(row(symbols).spacing(3).align_y(Alignment::Center))
            .padding([4, 6])
            .width(Length::Fill)
            .style(palette_style)
            .into()
    }

    fn category_tabs(&self) -> Element<'_, Message> {
        let tabs = COMPONENT_CATEGORIES
            .iter()
            .enumerate()
            .map(|(index, category)| {
                let label = if index == self.selected_category {
                    format!("[{category}]")
                } else {
                    (*category).to_owned()
                };

                Element::from(
                    button(text(label).size(12))
                        .padding([4, 7])
                        .on_press(Message::SelectComponentCategory(index)),
                )
            });

        container(row(tabs).spacing(1).align_y(Alignment::Center))
            .padding([2, 4])
            .width(Length::Fill)
            .style(toolbar_style)
            .into()
    }

    fn schematic_canvas() -> Element<'static, Message> {
        let dots = (0..24).map(|_| {
            Element::from(
                text(DOT_ROW)
                    .size(12)
                    .color(Color::from_rgb8(215, 215, 215)),
            )
        });

        container(column(dots).spacing(8))
            .padding(12)
            .width(Length::Fill)
            .height(Length::Fill)
            .style(canvas_style)
            .into()
    }

    fn document_tabs() -> Element<'static, Message> {
        container(
            row![
                button(text("Noname"))
                    .padding([4, 18])
                    .on_press(Message::NoOp),
                horizontal_space(),
            ]
            .align_y(Alignment::Center),
        )
        .padding([2, 5])
        .width(Length::Fill)
        .style(toolbar_style)
        .into()
    }

    fn status_bar() -> Element<'static, Message> {
        container(
            row![
                button(text("Exit"))
                    .padding([3, 12])
                    .on_press(Message::NoOp),
                horizontal_space(),
                text("X: 0.0000"),
                text("Y: 0.0000"),
            ]
            .spacing(18)
            .align_y(Alignment::Center),
        )
        .padding([3, 6])
        .width(Length::Fill)
        .style(toolbar_style)
        .into()
    }
}

fn toolbar_button<'a>(label: &'a str, _tooltip: &'a str) -> Element<'a, Message> {
    button(text(label).size(12))
        .padding([6, 8])
        .on_press(Message::NoOp)
        .into()
}

fn toolbar_style(_theme: &Theme) -> iced::widget::container::Style {
    iced::widget::container::Style {
        background: Some(Background::Color(Color::from_rgb8(238, 238, 238))),
        border: Border {
            color: Color::from_rgb8(188, 188, 188),
            width: 0.5,
            radius: 0.0.into(),
        },
        shadow: Shadow::default(),
        ..Default::default()
    }
}

fn palette_style(_theme: &Theme) -> iced::widget::container::Style {
    iced::widget::container::Style {
        background: Some(Background::Color(Color::from_rgb8(246, 246, 246))),
        border: Border {
            color: Color::from_rgb8(176, 176, 176),
            width: 0.5,
            radius: 0.0.into(),
        },
        ..Default::default()
    }
}

fn canvas_style(_theme: &Theme) -> iced::widget::container::Style {
    iced::widget::container::Style {
        background: Some(Background::Color(Color::WHITE)),
        border: Border {
            color: Color::from_rgb8(150, 150, 150),
            width: 1.0,
            radius: 0.0.into(),
        },
        ..Default::default()
    }
}
