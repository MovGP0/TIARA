//! Iced state for the recovered AC Time Function settings dialog.
//!
//! `iced` supplies the state/update/view boundary. The shared
//! `tiara_core::numeric_format` parser supplies engineering-number input, and
//! the standard library supplies finite and integer-range checks. The point
//! editor's runtime limits are injected because the recovered form resource
//! does not contain them. No new crate is needed.

use std::fmt;
use std::ops::RangeInclusive;

use iced::widget::{button, checkbox, column, container, row, text, text_input};
use iced::{Element, Length, Task};
use tiara_core::numeric_format::{format_display_value, parse_engineering_number};

pub const TITLE: &str = "Time Function";
pub const FORM_RESOURCE: &str = "ACTimeFunctionDlg";
pub const HELP_CONTEXT: u32 = 0x44e;
pub const TIME_RANGE_ERROR_RESOURCE_ID: u32 = 0x134;

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct TimeFunctionSettings {
    pub start_time_seconds: f64,
    pub end_time_seconds: f64,
    pub point_count: u16,
    pub draw_excitation: bool,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PointBounds(RangeInclusive<u16>);

impl PointBounds {
    /// Creates the runtime limits supplied by the integer-editor host.
    ///
    /// # Errors
    ///
    /// Returns [`PointBoundsError`] when `minimum` is greater than `maximum`.
    pub const fn new(minimum: u16, maximum: u16) -> Result<Self, PointBoundsError> {
        if minimum > maximum {
            return Err(PointBoundsError { minimum, maximum });
        }
        Ok(Self(minimum..=maximum))
    }

    const fn contains(&self, value: u16) -> bool {
        value >= *self.0.start() && value <= *self.0.end()
    }

    #[must_use]
    pub const fn minimum(&self) -> u16 {
        *self.0.start()
    }

    #[must_use]
    pub const fn maximum(&self) -> u16 {
        *self.0.end()
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PointBoundsError {
    pub minimum: u16,
    pub maximum: u16,
}

impl fmt::Display for PointBoundsError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(
            formatter,
            "point minimum {} exceeds maximum {}",
            self.minimum, self.maximum
        )
    }
}

impl std::error::Error for PointBoundsError {}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum NumericField {
    StartTime,
    EndTime,
    PointCount,
}

impl fmt::Display for NumericField {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::StartTime => "Start time",
            Self::EndTime => "End time",
            Self::PointCount => "Number of points",
        })
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ValidationError {
    InvalidNumber(NumericField),
    PointCountOutsideBounds {
        minimum: u16,
        maximum: u16,
    },
    TimeRange {
        resource_id: u32,
    },
    Editor {
        field: NumericField,
        message: String,
    },
}

impl fmt::Display for ValidationError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::InvalidNumber(field) => write!(formatter, "Enter a valid {field} value."),
            Self::PointCountOutsideBounds { minimum, maximum } => write!(
                formatter,
                "Number of points must be from {minimum} through {maximum}."
            ),
            Self::TimeRange { .. } => formatter.write_str(
                "Start time must not be negative, and end time must be later than start time.",
            ),
            Self::Editor { message, .. } => formatter.write_str(message),
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
    StartTimeChanged(String),
    EndTimeChanged(String),
    PointCountChanged(String),
    DrawExcitationToggled(bool),
    FloatEditorError {
        field: NumericField,
        message: String,
    },
    PointEditorError(String),
    Accept,
    Cancel,
}

#[derive(Debug, Clone, PartialEq, Eq)]
struct Edits {
    start_time: String,
    end_time: String,
    point_count: String,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
struct CloseGuard {
    validation_error: bool,
}

#[derive(Debug, Clone, PartialEq)]
pub struct Window {
    committed: TimeFunctionSettings,
    edits: Edits,
    draw_excitation: bool,
    point_bounds: PointBounds,
    close_guard: CloseGuard,
    first_error: Option<ValidationError>,
    modal_result: Option<ModalResult>,
    help_context: u32,
}

impl Window {
    #[must_use]
    pub fn new(settings: TimeFunctionSettings, point_bounds: PointBounds) -> Self {
        let mut window = Self {
            committed: settings,
            edits: Edits {
                start_time: String::new(),
                end_time: String::new(),
                point_count: String::new(),
            },
            draw_excitation: false,
            point_bounds,
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
            Message::StartTimeChanged(value) => self.edits.start_time = value,
            Message::EndTimeChanged(value) => self.edits.end_time = value,
            Message::PointCountChanged(value) => self.edits.point_count = value,
            Message::DrawExcitationToggled(value) => self.draw_excitation = value,
            Message::FloatEditorError { field, message } => {
                self.report_float_editor_error(field, message);
            }
            Message::PointEditorError(message) => self.report_point_editor_error(message),
            Message::Accept => {
                self.modal_result = Some(ModalResult::Accept);
                self.validate_and_commit();
            }
            Message::Cancel => self.modal_result = Some(ModalResult::Cancel),
        }
        Task::none()
    }

    /// Validates and conditionally commits the complete Time Function record.
    ///
    /// Reimplements Ghidra function `FUN_01528290` at `0x01528290`. Values
    /// are collected into a local Rust copy. The copy replaces the committed
    /// settings only when all editors parse, the point count is within the
    /// injected runtime bounds, start time is nonnegative, end time is later
    /// than start time, and no earlier editor error is awaiting close-query
    /// handling.
    pub fn validate_and_commit(&mut self) -> CommitOutcome {
        let Some(start_time_seconds) = parse_time(&self.edits.start_time) else {
            self.report_validation_error(ValidationError::InvalidNumber(NumericField::StartTime));
            return CommitOutcome::Rejected;
        };
        let Some(end_time_seconds) = parse_time(&self.edits.end_time) else {
            self.report_validation_error(ValidationError::InvalidNumber(NumericField::EndTime));
            return CommitOutcome::Rejected;
        };
        let Ok(point_count) = self.edits.point_count.parse::<u16>() else {
            self.report_validation_error(ValidationError::InvalidNumber(NumericField::PointCount));
            return CommitOutcome::Rejected;
        };
        if !self.point_bounds.contains(point_count) {
            self.report_validation_error(ValidationError::PointCountOutsideBounds {
                minimum: self.point_bounds.minimum(),
                maximum: self.point_bounds.maximum(),
            });
            return CommitOutcome::Rejected;
        }

        let candidate = TimeFunctionSettings {
            start_time_seconds,
            end_time_seconds,
            point_count,
            draw_excitation: self.draw_excitation,
        };
        if end_time_seconds <= start_time_seconds || start_time_seconds < 0.0 {
            self.report_validation_error(ValidationError::TimeRange {
                resource_id: TIME_RANGE_ERROR_RESOURCE_ID,
            });
        }
        if self.close_guard.validation_error {
            return CommitOutcome::Rejected;
        }

        self.committed = candidate;
        self.first_error = None;
        CommitOutcome::Committed
    }

    /// Initializes all four controls from the owner settings.
    ///
    /// Reimplements Ghidra function `FUN_01528410` at `0x01528410`. Float
    /// formatting uses the shared six-digit engineering formatter, integer
    /// formatting uses `u16::to_string`, and iced owns checkbox state. The form
    /// receives recovered help context `0x44e`.
    pub fn initialize_form(&mut self) {
        self.edits.start_time = format_display_value(self.committed.start_time_seconds, 6);
        self.edits.end_time = format_display_value(self.committed.end_time_seconds, 6);
        self.edits.point_count = self.committed.point_count.to_string();
        self.draw_excitation = self.committed.draw_excitation;
        self.help_context = HELP_CONTEXT;
    }

    /// Applies and clears the one-attempt close guard.
    ///
    /// Reimplements Ghidra function `FUN_015284A0` at `0x015284A0`. A pending
    /// error rejects this close request and is then cleared. A later Cancel or
    /// valid OK request can close when no new error is reported.
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

    /// Reports a float editor's supplied validation message once.
    ///
    /// Reimplements Ghidra function `FUN_015284C0` at `0x015284C0`. Both the
    /// start and end float editors share this route. A second error before the
    /// close query does not replace the first message.
    pub fn report_float_editor_error(&mut self, field: NumericField, message: String) {
        self.report_validation_error(ValidationError::Editor { field, message });
    }

    /// Reports the integer point editor's supplied validation message once.
    ///
    /// Reimplements Ghidra function `FUN_015284E0` at `0x015284E0`.
    pub fn report_point_editor_error(&mut self, message: String) {
        self.report_validation_error(ValidationError::Editor {
            field: NumericField::PointCount,
            message,
        });
    }

    fn report_validation_error(&mut self, error: ValidationError) {
        if !self.close_guard.validation_error {
            self.first_error = Some(error);
        }
        self.close_guard.validation_error = true;
    }

    #[must_use]
    pub const fn committed(&self) -> TimeFunctionSettings {
        self.committed
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
    pub const fn help_context(&self) -> u32 {
        self.help_context
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let content = column![
            text(TITLE).size(18),
            row![
                text("Start time"),
                text_input("", &self.edits.start_time).on_input(Message::StartTimeChanged),
                text("[s]")
            ]
            .spacing(8),
            row![
                text("End time"),
                text_input("", &self.edits.end_time).on_input(Message::EndTimeChanged),
                text("[s]")
            ]
            .spacing(8),
            row![
                text("Number of points"),
                text_input("", &self.edits.point_count).on_input(Message::PointCountChanged),
            ]
            .spacing(8),
            checkbox("Draw excitation", self.draw_excitation)
                .on_toggle(Message::DrawExcitationToggled),
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

fn parse_time(source: &str) -> Option<f64> {
    parse_engineering_number(source)
        .ok()
        .filter(|value| value.is_finite())
}

#[cfg(test)]
mod tests {
    use super::*;

    fn settings() -> TimeFunctionSettings {
        TimeFunctionSettings {
            start_time_seconds: 0.001,
            end_time_seconds: 0.01,
            point_count: 100,
            draw_excitation: true,
        }
    }

    fn window() -> Window {
        let Ok(bounds) = PointBounds::new(2, 10_000) else {
            panic!("test bounds must be ordered");
        };
        Window::new(settings(), bounds)
    }

    #[test]
    fn create_loads_all_owner_fields_and_help_context() {
        let window = window();

        assert_eq!(window.edits.start_time, "1m");
        assert_eq!(window.edits.end_time, "10m");
        assert_eq!(window.edits.point_count, "100");
        assert!(window.draw_excitation);
        assert_eq!(window.help_context(), HELP_CONTEXT);
    }

    #[test]
    fn valid_engineering_values_commit_complete_snapshot() {
        let mut window = window();
        let _ = window.update(Message::StartTimeChanged("2m".to_owned()));
        let _ = window.update(Message::EndTimeChanged("25m".to_owned()));
        let _ = window.update(Message::PointCountChanged("250".to_owned()));
        let _ = window.update(Message::DrawExcitationToggled(false));

        assert_eq!(window.validate_and_commit(), CommitOutcome::Committed);
        assert_eq!(
            window.committed(),
            TimeFunctionSettings {
                start_time_seconds: 0.002,
                end_time_seconds: 0.025,
                point_count: 250,
                draw_excitation: false,
            }
        );
    }

    #[test]
    fn invalid_time_range_preserves_record_and_vetoes_once() {
        let original = settings();
        let mut window = window();
        let _ = window.update(Message::StartTimeChanged("5m".to_owned()));
        let _ = window.update(Message::EndTimeChanged("5m".to_owned()));

        assert_eq!(window.validate_and_commit(), CommitOutcome::Rejected);
        assert_eq!(window.committed(), original);
        assert_eq!(
            window.first_error(),
            Some(&ValidationError::TimeRange {
                resource_id: TIME_RANGE_ERROR_RESOURCE_ID,
            })
        );
        assert!(!window.query_close());
        assert!(window.query_close());
    }

    #[test]
    fn point_bounds_are_injected_and_reject_without_partial_commit() {
        let original = settings();
        let mut window = window();
        let _ = window.update(Message::PointCountChanged("1".to_owned()));
        let _ = window.update(Message::DrawExcitationToggled(false));

        assert_eq!(window.validate_and_commit(), CommitOutcome::Rejected);
        assert_eq!(window.committed(), original);
        assert_eq!(
            window.first_error(),
            Some(&ValidationError::PointCountOutsideBounds {
                minimum: 2,
                maximum: 10_000,
            })
        );
    }

    #[test]
    fn float_and_integer_editor_errors_share_first_error_guard() {
        let original = settings();
        let mut window = window();
        window.report_float_editor_error(NumericField::StartTime, "first".to_owned());
        window.report_point_editor_error("second".to_owned());

        assert_eq!(
            window.first_error(),
            Some(&ValidationError::Editor {
                field: NumericField::StartTime,
                message: "first".to_owned(),
            })
        );
        assert_eq!(window.validate_and_commit(), CommitOutcome::Rejected);
        assert_eq!(window.committed(), original);
        assert!(!window.query_close());
        assert_eq!(window.validate_and_commit(), CommitOutcome::Committed);
    }

    #[test]
    fn parser_errors_and_cancel_keep_committed_state() {
        let original = settings();
        let mut window = window();
        let _ = window.update(Message::EndTimeChanged("invalid".to_owned()));

        assert_eq!(window.validate_and_commit(), CommitOutcome::Rejected);
        assert_eq!(window.committed(), original);
        assert_eq!(
            window.first_error(),
            Some(&ValidationError::InvalidNumber(NumericField::EndTime))
        );
        assert!(!window.query_close());
        let _ = window.update(Message::Cancel);
        assert_eq!(window.modal_result(), Some(ModalResult::Cancel));
        assert_eq!(window.committed(), original);
    }
}
