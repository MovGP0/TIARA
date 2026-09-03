//! Interpreter Options dialog state.

use iced::Element;
use iced::widget::{button, checkbox, column};

pub const TITLE: &str = "Options";
pub const FORM_RESOURCE: &str = "InterpreterOptions";

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    KeepCursorChanged(bool),
    Accept,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct OptionsDialog {
    staged_keep_cursor_position: bool,
    keep_cursor_position_checked: bool,
}

impl OptionsDialog {
    /// Preserves the recovered no-op form-create event.
    ///
    /// Ports Ghidra function `0x017EC280`, symbol `FUN_017ec280`. The recovered
    /// handler returns without reading or changing dialog state.
    pub const fn on_create(&mut self) {}

    /// Initializes the dialog-local keep-cursor value and checkbox.
    ///
    /// Ports Ghidra function `0x017EC230`, symbol `FUN_017ec230`. The copied
    /// Boolean remains local to this dialog until another recovered handler
    /// reads the control state.
    pub const fn initialize_keep_cursor_position(&mut self, value: bool) {
        self.staged_keep_cursor_position = value;
        self.keep_cursor_position_checked = value;
    }

    pub const fn update(&mut self, message: Message) {
        match message {
            Message::KeepCursorChanged(value) => self.keep_cursor_position_checked = value,
            Message::Accept => self.accept_controls(),
        }
    }

    /// Copies the checkbox value into dialog-local staging before modal OK.
    ///
    /// Ports Ghidra function `0x017EC290`, symbol `FUN_017ec290`, recovered as
    /// `TInterpreterOptions.bOKClick`. This method does not update application
    /// settings; the reviewed launcher discards this staged value.
    pub const fn accept_controls(&mut self) {
        self.staged_keep_cursor_position = self.keep_cursor_position_checked;
    }

    #[must_use]
    pub const fn staged_keep_cursor_position(&self) -> bool {
        self.staged_keep_cursor_position
    }

    #[must_use]
    pub const fn keep_cursor_position_checked(&self) -> bool {
        self.keep_cursor_position_checked
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        column![
            checkbox(
                "Keep cursor position after run",
                self.keep_cursor_position_checked
            )
            .on_toggle(Message::KeepCursorChanged),
            button("OK").on_press(Message::Accept)
        ]
        .padding(12)
        .into()
    }
}

#[cfg(test)]
mod tests {
    use super::OptionsDialog;

    #[test]
    fn fun_017ec230_copies_the_input_to_staging_and_checkbox() {
        let mut dialog = OptionsDialog::default();

        dialog.initialize_keep_cursor_position(true);

        assert!(dialog.staged_keep_cursor_position());
        assert!(dialog.keep_cursor_position_checked());

        dialog.initialize_keep_cursor_position(false);

        assert!(!dialog.staged_keep_cursor_position());
        assert!(!dialog.keep_cursor_position_checked());
    }

    #[test]
    fn fun_017ec280_is_a_noop_for_existing_dialog_state() {
        let mut dialog = OptionsDialog::default();
        dialog.initialize_keep_cursor_position(true);

        dialog.on_create();

        assert!(dialog.staged_keep_cursor_position());
        assert!(dialog.keep_cursor_position_checked());
    }

    #[test]
    fn fun_017ec290_stages_the_current_checkbox_value_only_on_accept() {
        let mut dialog = OptionsDialog::default();
        dialog.initialize_keep_cursor_position(false);

        dialog.update(super::Message::KeepCursorChanged(true));

        assert!(!dialog.staged_keep_cursor_position());
        assert!(dialog.keep_cursor_position_checked());

        dialog.update(super::Message::Accept);

        assert!(dialog.staged_keep_cursor_position());
        assert!(dialog.keep_cursor_position_checked());
    }
}
