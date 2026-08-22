//! Options dialog for the Design Tool.

use iced::Element;
use iced::widget::{button, checkbox, column, radio, row, text};

pub const HELP_CONTEXT: u32 = 0x4a9;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DesignToolOptionValues {
    pub ignore_min_max: bool,
    pub keep_cursor_position: bool,
    pub interface_index: i32,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum OptionsMessage {
    IgnoreMinMaxChanged(bool),
    KeepCursorChanged(bool),
    InterfaceChanged(i32),
    Accept,
    Cancel,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct OptionsDialog {
    staged: DesignToolOptionValues,
    controls: DesignToolOptionValues,
    close_requested: bool,
    help_context: u32,
}

impl Default for OptionsDialog {
    fn default() -> Self {
        let values = DesignToolOptionValues {
            ignore_min_max: false,
            keep_cursor_position: false,
            interface_index: 0,
        };
        let mut dialog = Self {
            staged: values,
            controls: values,
            close_requested: false,
            help_context: 0,
        };
        dialog.form_create();
        dialog
    }
}

impl OptionsDialog {
    /// Ports Ghidra function `FUN_01475bd0` at `0x01475BD0`.
    pub const fn form_create(&mut self) {
        self.help_context = HELP_CONTEXT;
    }

    pub const fn update(&mut self, message: OptionsMessage) {
        match message {
            OptionsMessage::IgnoreMinMaxChanged(value) => {
                self.controls.ignore_min_max = value;
            }
            OptionsMessage::KeepCursorChanged(value) => {
                self.controls.keep_cursor_position = value;
            }
            OptionsMessage::InterfaceChanged(value) => self.controls.interface_index = value,
            OptionsMessage::Accept => {
                self.accept_controls();
                self.close_requested = true;
            }
            OptionsMessage::Cancel => self.close_requested = true,
        }
    }

    /// Ports Ghidra function `FUN_01475b20` at `0x01475B20`.
    pub const fn initialize_staging(&mut self, values: DesignToolOptionValues) {
        self.staged = values;
        self.controls = values;
        self.close_requested = false;
    }

    /// Ports Ghidra function `FUN_01475ba0` at `0x01475BA0`.
    #[must_use]
    pub const fn extract_staged(&self) -> DesignToolOptionValues {
        self.staged
    }

    /// Ports Ghidra function `FUN_01475bf0` at `0x01475BF0`.
    pub const fn accept_controls(&mut self) {
        self.staged = self.controls;
    }

    #[must_use]
    pub const fn controls(&self) -> DesignToolOptionValues {
        self.controls
    }

    #[must_use]
    pub const fn close_requested(&self) -> bool {
        self.close_requested
    }

    #[must_use]
    pub const fn help_context(&self) -> u32 {
        self.help_context
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, OptionsMessage> {
        column![
            checkbox("Ignore min max values", self.controls.ignore_min_max)
                .on_toggle(OptionsMessage::IgnoreMinMaxChanged),
            checkbox(
                "Keep cursor position after run",
                self.controls.keep_cursor_position
            )
            .on_toggle(OptionsMessage::KeepCursorChanged),
            text("Interface"),
            row![
                radio(
                    "Interpreter",
                    0,
                    Some(self.controls.interface_index),
                    OptionsMessage::InterfaceChanged,
                ),
                radio(
                    "Python",
                    1,
                    Some(self.controls.interface_index),
                    OptionsMessage::InterfaceChanged,
                ),
            ]
            .spacing(8),
            row![
                button("OK").on_press(OptionsMessage::Accept),
                button("Cancel").on_press(OptionsMessage::Cancel),
            ]
            .spacing(8),
        ]
        .padding(12)
        .spacing(8)
        .into()
    }
}
