use std::io::{self, Write};

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

/// Maps an MCU type code to the family name used in the Flowchart title.
///
/// This is the original Rust implementation of Ghidra function
/// `0x01600370`, symbol `FUN_01600370`. Only the seven recovered single codes
/// have family names. All other values use the recovered fallback.
#[must_use]
pub const fn mcu_family_display_name(mcu_type_code: i32) -> &'static str {
    match mcu_type_code {
        1 => "PIC",
        2 => "8051",
        4 => "AVR",
        8 => "PIC18",
        0x20 => "HCS08",
        0x200 => "PIC24",
        0x400 => "PIC32",
        _ => "Undefined",
    }
}

/// Implements Ghidra function `FUN_01b20e90` at `0x01B20E90`.
///
/// Writes a little-endian four-byte UTF-16 code-unit count followed by exactly
/// two little-endian bytes per code unit. The stream contains no BOM and no
/// terminating null. A null or empty value writes a zero count and no payload.
///
/// # Errors
///
/// Returns an error when the UTF-16 length exceeds `u32` or the writer rejects
/// the count or payload bytes.
pub fn write_length_prefixed_utf16(writer: &mut impl Write, value: Option<&str>) -> io::Result<()> {
    let value = value.unwrap_or_default();
    let count = u32::try_from(value.encode_utf16().count()).map_err(|_| {
        io::Error::new(
            io::ErrorKind::InvalidInput,
            "the UTF-16 string exceeds the stream length field",
        )
    })?;
    writer.write_all(&count.to_le_bytes())?;
    for code_unit in value.encode_utf16() {
        writer.write_all(&code_unit.to_le_bytes())?;
    }
    Ok(())
}

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
    #[must_use]
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

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn mcu_family_display_name_maps_every_recovered_code() {
        assert_eq!(mcu_family_display_name(1), "PIC");
        assert_eq!(mcu_family_display_name(2), "8051");
        assert_eq!(mcu_family_display_name(4), "AVR");
        assert_eq!(mcu_family_display_name(8), "PIC18");
        assert_eq!(mcu_family_display_name(0x20), "HCS08");
        assert_eq!(mcu_family_display_name(0x200), "PIC24");
        assert_eq!(mcu_family_display_name(0x400), "PIC32");
    }

    #[test]
    fn mcu_family_display_name_uses_undefined_for_every_other_value() {
        assert_eq!(mcu_family_display_name(0), "Undefined");
        assert_eq!(mcu_family_display_name(-1), "Undefined");
        assert_eq!(mcu_family_display_name(1 | 2), "Undefined");
        assert_eq!(mcu_family_display_name(0x800), "Undefined");
    }

    #[test]
    fn utf16_writer_counts_code_units_and_uses_little_endian_payload() {
        let mut bytes = Vec::new();

        write_length_prefixed_utf16(&mut bytes, Some("A😀é")).expect("write succeeds");

        assert_eq!(
            bytes,
            [4, 0, 0, 0, 0x41, 0x00, 0x3d, 0xd8, 0x00, 0xde, 0xe9, 0x00,]
        );
    }

    #[test]
    fn null_and_empty_utf16_values_write_only_a_zero_count() {
        for value in [None, Some("")] {
            let mut bytes = Vec::new();

            write_length_prefixed_utf16(&mut bytes, value).expect("write succeeds");

            assert_eq!(bytes, [0, 0, 0, 0]);
        }
    }
}
