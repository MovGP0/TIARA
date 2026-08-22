//! Iced adapter for the recovered Digital Timing Analysis dialog.
//!
//! `iced` supplies the state/update/view boundary. The shared
//! `tiara_core::numeric_format` parser supplies engineering-number input, and
//! the standard library supplies finite/range checks. No new crate is needed.
//!
//! The iced text input validates when settings are collected. A host numeric
//! editor can route its editor-specific message through
//! [`Message::EndTimeEditorError`]. The exact legacy parser-exception event
//! order is not recoverable from static evidence.

use std::fmt;

use iced::widget::{button, checkbox, column, container, row, text, text_input};
use iced::{Element, Length, Task};
use tiara_core::numeric_format::{format_display_value, parse_engineering_number};

pub const TITLE: &str = "Digital Timing Analysis";
pub const FORM_RESOURCE: &str = "DTranAnalDlg";
pub const HELP_CONTEXT: u32 = 0x454;

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct DigitalTimingSettings {
    pub end_time_seconds: f64,
    pub ideal_components: bool,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ValidationError {
    InvalidEndTime,
    NonPositiveEndTime,
    Editor(String),
}

impl fmt::Display for ValidationError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::InvalidEndTime => formatter.write_str("Enter a valid end time."),
            Self::NonPositiveEndTime => formatter.write_str("End time must be greater than zero."),
            Self::Editor(message) => formatter.write_str(message),
        }
    }
}

impl std::error::Error for ValidationError {}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CommitOutcome {
    Committed,
    Rejected,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ModalResult {
    Accept,
    Cancel,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    EndTimeChanged(String),
    IdealComponentsToggled(bool),
    EndTimeEditorError(String),
    Accept,
    Cancel,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
struct CloseGuard {
    validation_error: bool,
}

#[derive(Debug, Clone, PartialEq)]
pub struct Window {
    committed: DigitalTimingSettings,
    end_time_text: String,
    ideal_components: bool,
    close_guard: CloseGuard,
    first_error: Option<ValidationError>,
    modal_result: Option<ModalResult>,
    help_context: u32,
}

impl Window {
    #[must_use]
    pub fn new(settings: DigitalTimingSettings) -> Self {
        let mut window = Self {
            committed: settings,
            end_time_text: String::new(),
            ideal_components: false,
            close_guard: CloseGuard::default(),
            first_error: None,
            modal_result: None,
            help_context: 0,
        };
        window.initialize_form();
        window
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::EndTimeChanged(value) => self.end_time_text = value,
            Message::IdealComponentsToggled(checked) => self.ideal_components = checked,
            Message::EndTimeEditorError(message) => self.report_end_time_editor_error(message),
            Message::Accept => {
                self.modal_result = Some(ModalResult::Accept);
                self.validate_and_commit();
            }
            Message::Cancel => self.modal_result = Some(ModalResult::Cancel),
        }
        Task::none()
    }

    /// Initializes the end-time editor and help context.
    ///
    /// Reimplements Ghidra function `FUN_014f7bc0` at `0x014F7BC0`. It loads
    /// the committed end time and assigns help context `0x454`. It deliberately
    /// leaves the Ideal components checkbox at its resource default instead of
    /// copying the previously shared ideal-mode value.
    pub fn initialize_form(&mut self) {
        self.end_time_text = format_display_value(self.committed.end_time_seconds, 6);
        self.help_context = HELP_CONTEXT;
    }

    /// Reports the first validation error and marks the one-shot close veto.
    ///
    /// Reimplements Ghidra function `FUN_014f7a10` at `0x014F7A10`. A second
    /// error before the close query does not replace the first displayed error.
    pub fn report_validation_error(&mut self, error: ValidationError) {
        if !self.close_guard.validation_error {
            self.first_error = Some(error);
        }
        self.close_guard.validation_error = true;
    }

    /// Ports Ghidra function `FUN_014f7c00` at `0x014F7C00`.
    ///
    /// `EditEndVal.OnError` forwards the float editor's own text to the same
    /// first-error coordinator used by application validation. The coordinator
    /// sets the one-close veto and does not replace an earlier message.
    pub fn report_end_time_editor_error(&mut self, message: String) {
        self.report_validation_error(ValidationError::Editor(message));
    }

    /// Validates and commits Digital Timing Analysis settings.
    ///
    /// Reimplements Ghidra function `FUN_014f7a70` at `0x014F7A70`. End time
    /// must parse as an engineering number in the float editor range and be
    /// greater than zero. A clear error flag commits both end time and ideal
    /// mode. An error preserves both earlier values and does not start analysis.
    pub fn validate_and_commit(&mut self) -> CommitOutcome {
        let parsed = parse_engineering_number(&self.end_time_text).ok();
        let Some(end_time_seconds) =
            parsed.filter(|value| value.is_finite() && value.abs() <= 1.0e50)
        else {
            self.report_validation_error(ValidationError::InvalidEndTime);
            return CommitOutcome::Rejected;
        };

        if end_time_seconds <= 0.0 {
            self.report_validation_error(ValidationError::NonPositiveEndTime);
        }
        if self.close_guard.validation_error {
            return CommitOutcome::Rejected;
        }

        self.committed.end_time_seconds = end_time_seconds;
        self.committed.ideal_components = self.ideal_components;
        self.first_error = None;
        CommitOutcome::Committed
    }

    /// Applies and clears the Digital Timing dialog close guard.
    ///
    /// Reimplements Ghidra function `FUN_014f7ba0` at `0x014F7BA0`. One close
    /// request is rejected after an error. Clearing the flag lets the next
    /// close request proceed, including a later Cancel request.
    #[must_use]
    pub fn query_close(&mut self) -> bool {
        let can_close = !self.close_guard.validation_error;
        self.close_guard.validation_error = false;
        if !can_close {
            self.first_error = None;
            self.modal_result = None;
        }
        can_close
    }

    #[must_use]
    pub const fn committed(&self) -> DigitalTimingSettings {
        self.committed
    }

    #[must_use]
    pub const fn ideal_components(&self) -> bool {
        self.ideal_components
    }

    #[must_use]
    pub const fn help_context(&self) -> u32 {
        self.help_context
    }

    #[must_use]
    pub const fn first_error(&self) -> Option<&ValidationError> {
        self.first_error.as_ref()
    }

    #[must_use]
    pub const fn modal_result(&self) -> Option<ModalResult> {
        self.modal_result
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let content = column![
            text(TITLE).size(18),
            row![
                text("End time"),
                text_input("", &self.end_time_text).on_input(Message::EndTimeChanged),
                text("[s]")
            ]
            .spacing(8),
            checkbox("Ideal components", self.ideal_components)
                .on_toggle(Message::IdealComponentsToggled),
            text(
                self.first_error
                    .as_ref()
                    .map_or_else(String::new, ToString::to_string)
            ),
            row![
                button("OK").on_press(Message::Accept),
                button("Cancel").on_press(Message::Cancel)
            ]
            .spacing(8),
        ]
        .spacing(10);

        container(content)
            .padding(16)
            .width(Length::Fill)
            .height(Length::Fill)
            .into()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn settings() -> DigitalTimingSettings {
        DigitalTimingSettings {
            end_time_seconds: 0.002,
            ideal_components: true,
        }
    }

    #[test]
    fn create_loads_end_time_and_help_but_keeps_checkbox_default() {
        let window = Window::new(settings());
        assert_eq!(window.end_time_text, "2m");
        assert_eq!(window.help_context(), HELP_CONTEXT);
        assert!(!window.ideal_components());
        assert!(window.committed().ideal_components);
    }

    #[test]
    fn valid_accept_commits_end_time_and_ideal_mode() {
        let mut window = Window::new(settings());
        let _ = window.update(Message::EndTimeChanged("5m".to_owned()));
        let _ = window.update(Message::IdealComponentsToggled(true));

        assert_eq!(window.validate_and_commit(), CommitOutcome::Committed);
        assert!((window.committed().end_time_seconds - 0.005).abs() <= f64::EPSILON);
        assert!(window.committed().ideal_components);
    }

    #[test]
    fn nonpositive_end_time_preserves_both_values_and_vetoes_once() {
        let original = settings();
        let mut window = Window::new(original);
        let _ = window.update(Message::EndTimeChanged("-0".to_owned()));
        let _ = window.update(Message::IdealComponentsToggled(false));

        assert_eq!(window.validate_and_commit(), CommitOutcome::Rejected);
        assert_eq!(window.committed(), original);
        assert_eq!(
            window.first_error(),
            Some(&ValidationError::NonPositiveEndTime)
        );
        assert!(!window.query_close());
        assert!(window.query_close());
    }

    #[test]
    fn error_coordinator_keeps_first_message_and_stale_flag_blocks_valid_commit() {
        let original = settings();
        let mut window = Window::new(original);
        let _ = window.update(Message::EndTimeEditorError("first".to_owned()));
        window.report_end_time_editor_error("second".to_owned());
        let _ = window.update(Message::EndTimeChanged("10m".to_owned()));
        let _ = window.update(Message::IdealComponentsToggled(false));

        assert_eq!(
            window.first_error(),
            Some(&ValidationError::Editor("first".to_owned()))
        );
        assert_eq!(window.validate_and_commit(), CommitOutcome::Rejected);
        assert_eq!(window.committed(), original);
        assert!(!window.query_close());
        assert_eq!(window.validate_and_commit(), CommitOutcome::Committed);
    }

    #[test]
    fn parser_failure_sets_the_same_close_guard() {
        let original = settings();
        let mut window = Window::new(original);
        let _ = window.update(Message::EndTimeChanged("not a time".to_owned()));

        assert_eq!(window.validate_and_commit(), CommitOutcome::Rejected);
        assert_eq!(window.committed(), original);
        assert_eq!(window.first_error(), Some(&ValidationError::InvalidEndTime));
        assert!(!window.query_close());
    }
}
