//! Save-changes confirmation dialog for the Design Tool.

use iced::Element;
use iced::widget::{button, checkbox, column, row, text};

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
#[repr(i32)]
pub enum CloseConfirmationResult {
    Yes = 6,
    No = 7,
    #[default]
    Cancel = 2,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CloseConfirmationMessage {
    RestoreColorsChanged(bool),
    Yes,
    No,
    Cancel,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CloseConfirmationDialog {
    restore_colors_checked: bool,
    staged_restore_colors: bool,
    result: CloseConfirmationResult,
    close_requested: bool,
}

impl Default for CloseConfirmationDialog {
    fn default() -> Self {
        let mut dialog = Self {
            restore_colors_checked: true,
            staged_restore_colors: true,
            result: CloseConfirmationResult::Cancel,
            close_requested: false,
        };
        dialog.form_create();
        dialog
    }
}

impl CloseConfirmationDialog {
    /// Ports Ghidra function `FUN_014753c0` at `0x014753C0`.
    ///
    /// A new form starts with modal result two, the recovered Cancel result.
    /// Creation does not close the form or copy the check-box value.
    pub const fn form_create(&mut self) {
        self.result = CloseConfirmationResult::Cancel;
    }

    pub const fn update(&mut self, message: CloseConfirmationMessage) {
        match message {
            CloseConfirmationMessage::RestoreColorsChanged(checked) => {
                self.restore_colors_checked = checked;
            }
            CloseConfirmationMessage::Yes => self.yes_click(),
            CloseConfirmationMessage::No => self.no_click(),
            CloseConfirmationMessage::Cancel => self.cancel_click(),
        }
    }

    /// Ports Ghidra function `FUN_01475300` at `0x01475300`.
    pub const fn yes_click(&mut self) {
        self.stage_close(CloseConfirmationResult::Yes);
    }

    /// Ports Ghidra function `FUN_01475340` at `0x01475340`.
    pub const fn no_click(&mut self) {
        self.stage_close(CloseConfirmationResult::No);
    }

    /// Ports Ghidra function `FUN_01475380` at `0x01475380`.
    pub const fn cancel_click(&mut self) {
        self.stage_close(CloseConfirmationResult::Cancel);
    }

    #[must_use]
    pub const fn result(self) -> CloseConfirmationResult {
        self.result
    }

    #[must_use]
    pub const fn staged_restore_colors(self) -> bool {
        self.staged_restore_colors
    }

    #[must_use]
    pub const fn close_requested(self) -> bool {
        self.close_requested
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, CloseConfirmationMessage> {
        column![
            text("Save changes?"),
            checkbox("Restore component colors", self.restore_colors_checked)
                .on_toggle(CloseConfirmationMessage::RestoreColorsChanged),
            row![
                button("Yes").on_press(CloseConfirmationMessage::Yes),
                button("No").on_press(CloseConfirmationMessage::No),
                button("Cancel").on_press(CloseConfirmationMessage::Cancel),
            ]
            .spacing(8),
        ]
        .padding(12)
        .spacing(8)
        .into()
    }

    const fn stage_close(&mut self, result: CloseConfirmationResult) {
        self.result = result;
        self.staged_restore_colors = self.restore_colors_checked;
        self.close_requested = true;
    }
}
