mod chrome;
mod inventory;
mod menu;

use std::fmt;

use iced::widget::{button, column, container, horizontal_space, pick_list, row, text};
use iced::{Alignment, Element, Length};

use crate::shared::theme::{CustomThemeFile, ThemeTokens};
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
    pub(crate) fn view(&self, theme: &CustomThemeFile) -> Element<'_, Message> {
        let tokens = theme.tokens;
        let canvas = theme.canvas;
        let content = column![
            container(menu::view(tokens))
                .width(Length::Fill)
                .height(Length::Fixed(chrome::MENU_BAR_HEIGHT))
                .style(move |iced_theme| chrome::toolbar_style(tokens, iced_theme)),
            container(horizontal_space())
                .width(Length::Fill)
                .height(Length::Fixed(1.0))
                .style(move |iced_theme| chrome::separator_style(tokens, iced_theme)),
            self.general_toolbar(tokens),
            Self::editor_toolbar(tokens),
            Self::component_palette(tokens),
            self.category_tabs(tokens),
            Self::schematic_canvas(tokens, canvas),
            Self::document_tabs(tokens),
            Self::status_bar(tokens),
        ]
        .width(Length::Fill)
        .height(Length::Fill);

        container(content)
            .width(Length::Fill)
            .height(Length::Fill)
            .style(move |iced_theme| chrome::application_style(tokens, iced_theme))
            .into()
    }

    fn general_toolbar(&self, tokens: ThemeTokens) -> Element<'_, Message> {
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
            .map(move |(name, symbol)| toolbar_button(symbol, name, tokens));

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
        .style(move |iced_theme| chrome::toolbar_style(tokens, iced_theme))
        .into()
    }

    fn editor_toolbar(tokens: ThemeTokens) -> Element<'static, Message> {
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
                .map(move |(name, symbol)| toolbar_button(symbol, name, tokens)))
            .spacing(3)
            .align_y(Alignment::Center),
        )
        .padding([3, 6])
        .width(Length::Fill)
        .style(move |iced_theme| chrome::toolbar_style(tokens, iced_theme))
        .into()
    }

    fn component_palette(tokens: ThemeTokens) -> Element<'static, Message> {
        let symbols = COMPONENT_SYMBOLS.iter().map(move |symbol| {
            Element::from(
                button(text(*symbol).size(14))
                    .padding([8, 10])
                    .on_press(Message::NoOp)
                    .style(move |theme, status| {
                        chrome::toolbar_button_style(tokens, theme, status)
                    }),
            )
        });

        container(row(symbols).spacing(3).align_y(Alignment::Center))
            .padding([4, 6])
            .width(Length::Fill)
            .style(move |iced_theme| chrome::palette_style(tokens, iced_theme))
            .into()
    }

    fn category_tabs(&self, tokens: ThemeTokens) -> Element<'_, Message> {
        let tabs = COMPONENT_CATEGORIES
            .iter()
            .enumerate()
            .map(|(index, category)| {
                let is_selected = index == self.selected_category;

                Element::from(
                    button(text(*category).size(12))
                        .padding([4, 7])
                        .on_press(Message::SelectComponentCategory(index))
                        .style(move |theme, status| {
                            chrome::category_button_style(tokens, is_selected, theme, status)
                        }),
                )
            });

        container(row(tabs).spacing(1).align_y(Alignment::Center))
            .padding([2, 4])
            .width(Length::Fill)
            .style(move |iced_theme| chrome::toolbar_style(tokens, iced_theme))
            .into()
    }

    fn schematic_canvas(
        tokens: ThemeTokens,
        canvas: crate::shared::theme::CanvasColors,
    ) -> Element<'static, Message> {
        let dots =
            (0..24).map(move |_| Element::from(text(DOT_ROW).size(12).color(canvas.grid.iced())));

        container(column(dots).spacing(8))
            .padding(12)
            .width(Length::Fill)
            .height(Length::Fill)
            .style(move |iced_theme| chrome::canvas_style(tokens, canvas, iced_theme))
            .into()
    }

    fn document_tabs(tokens: ThemeTokens) -> Element<'static, Message> {
        container(
            row![
                button(text("Noname"))
                    .padding([4, 18])
                    .on_press(Message::NoOp)
                    .style(move |theme, status| {
                        chrome::category_button_style(tokens, true, theme, status)
                    }),
                horizontal_space(),
            ]
            .align_y(Alignment::Center),
        )
        .padding([2, 5])
        .width(Length::Fill)
        .style(move |iced_theme| chrome::toolbar_style(tokens, iced_theme))
        .into()
    }

    fn status_bar(tokens: ThemeTokens) -> Element<'static, Message> {
        container(
            row![
                button(text("Exit"))
                    .padding([3, 12])
                    .on_press(Message::NoOp)
                    .style(move |theme, status| {
                        chrome::toolbar_button_style(tokens, theme, status)
                    }),
                horizontal_space(),
                text("X: 0.0000"),
                text("Y: 0.0000"),
            ]
            .spacing(18)
            .align_y(Alignment::Center),
        )
        .padding([3, 6])
        .width(Length::Fill)
        .style(move |iced_theme| chrome::status_style(tokens, iced_theme))
        .into()
    }
}

fn toolbar_button<'a>(
    label: &'a str,
    _tooltip: &'a str,
    tokens: ThemeTokens,
) -> Element<'a, Message> {
    button(text(label).size(12))
        .padding([6, 8])
        .on_press(Message::NoOp)
        .style(move |theme, status| chrome::toolbar_button_style(tokens, theme, status))
        .into()
}
