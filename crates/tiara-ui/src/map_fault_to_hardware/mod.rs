use iced::widget::{column, container, pick_list, row, scrollable, text};
use iced::{Alignment, Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "Map Fault to Hardware";
pub const SCREENSHOT: &str = "screenshots/Map_Fault_to_Hardware_Window.png";
pub const FORM_RESOURCE: &str = "MapFaultDlg";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01b71870");
const STATUS: &str = "Fault mapping";
const TOOLBAR: &[&str] = &["OK", "Cancel", "Help"];
pub const SWITCH_COUNT: u8 = 8;
pub const SWITCH_ON_TEXT_RESOURCE: u16 = 0x05a6;
pub const SWITCH_OFF_TEXT_RESOURCE: u16 = 0x05a7;
pub const SWITCH_LABEL_TEXT_RESOURCE: u16 = 0x05aa;

pub trait MapFaultTextProvider {
    fn load_text(&mut self, resource: u16) -> String;
    fn format_switch_label(&mut self, resource: u16, switch_number: u8) -> String;
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct MapFaultChoiceLabels {
    pub on: String,
    pub off: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct MapFaultRow {
    pub switch_number: u8,
    pub label: String,
    pub mapped_to_hardware: bool,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct MapFaultGrid {
    pub choice_labels: MapFaultChoiceLabels,
    pub rows: Vec<MapFaultRow>,
}

/// Implements Ghidra function `FUN_01b71870` at `0x01B71870`.
///
/// Creates the localized eight-row switch grid for the Map Fault dialog. Each
/// row starts in the recovered `On` state and remains bound to its own mapping
/// value for later mask loading and collection.
pub fn create_fault_mapping_grid(text: &mut impl MapFaultTextProvider) -> MapFaultGrid {
    let choice_labels = MapFaultChoiceLabels {
        on: text.load_text(SWITCH_ON_TEXT_RESOURCE),
        off: text.load_text(SWITCH_OFF_TEXT_RESOURCE),
    };
    let rows = (1..=SWITCH_COUNT)
        .map(|switch_number| MapFaultRow {
            switch_number,
            label: text.format_switch_label(SWITCH_LABEL_TEXT_RESOURCE, switch_number),
            mapped_to_hardware: true,
        })
        .collect();

    MapFaultGrid {
        choice_labels,
        rows,
    }
}

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
    #[must_use]
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

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Default)]
    struct TextProvider {
        requests: Vec<(u16, Option<u8>)>,
    }

    impl MapFaultTextProvider for TextProvider {
        fn load_text(&mut self, resource: u16) -> String {
            self.requests.push((resource, None));
            match resource {
                SWITCH_ON_TEXT_RESOURCE => "On".to_owned(),
                SWITCH_OFF_TEXT_RESOURCE => "Off".to_owned(),
                _ => String::new(),
            }
        }

        fn format_switch_label(&mut self, resource: u16, switch_number: u8) -> String {
            self.requests.push((resource, Some(switch_number)));
            format!("{switch_number}. switch")
        }
    }

    #[test]
    fn form_create_builds_eight_localized_on_rows() {
        let mut text = TextProvider::default();

        let grid = create_fault_mapping_grid(&mut text);

        assert_eq!(
            grid.choice_labels,
            MapFaultChoiceLabels {
                on: "On".to_owned(),
                off: "Off".to_owned(),
            }
        );
        assert_eq!(grid.rows.len(), usize::from(SWITCH_COUNT));
        for (switch_number, row) in (1..=SWITCH_COUNT).zip(&grid.rows) {
            assert_eq!(row.switch_number, switch_number);
            assert_eq!(row.label, format!("{switch_number}. switch"));
            assert!(row.mapped_to_hardware);
        }
        assert_eq!(text.requests[0], (SWITCH_ON_TEXT_RESOURCE, None));
        assert_eq!(text.requests[1], (SWITCH_OFF_TEXT_RESOURCE, None));
        assert_eq!(text.requests.len(), usize::from(SWITCH_COUNT) + 2);
    }
}
