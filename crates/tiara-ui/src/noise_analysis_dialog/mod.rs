//! Iced adapter for the recovered Noise Analysis settings dialog.
//!
//! The implementation uses `iced` for widgets and update messages and uses
//! `tiara_core::numeric_format` for engineering-number input. No new crate is
//! needed: standard integer parsing supplies the bounded point editor.

use std::fmt;
use std::ops::RangeInclusive;

use iced::widget::{button, checkbox, column, container, row, text, text_input};
use iced::{Element, Length, Task};
use tiara_core::numeric_format::{format_display_value, parse_engineering_number};

pub const TITLE: &str = "Noise Analysis";
pub const FORM_RESOURCE: &str = "NoiseAnalDlg";

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum NoiseDiagram {
    OutputNoise,
    InputNoise,
    TotalNoise,
    SignalToNoise,
}

impl NoiseDiagram {
    pub const ALL: [Self; 4] = [
        Self::OutputNoise,
        Self::InputNoise,
        Self::TotalNoise,
        Self::SignalToNoise,
    ];

    const fn index(self) -> usize {
        match self {
            Self::OutputNoise => 0,
            Self::InputNoise => 1,
            Self::TotalNoise => 2,
            Self::SignalToNoise => 3,
        }
    }

    const fn label(self) -> &'static str {
        match self {
            Self::OutputNoise => "Output Noise",
            Self::InputNoise => "Input Noise",
            Self::TotalNoise => "Total Noise",
            Self::SignalToNoise => "Signal to Noise",
        }
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct NoiseDiagrams {
    selected: [bool; 4],
}

impl NoiseDiagrams {
    #[must_use]
    pub const fn new(selected: [bool; 4]) -> Self {
        Self { selected }
    }

    #[must_use]
    pub const fn is_selected(self, diagram: NoiseDiagram) -> bool {
        self.selected[diagram.index()]
    }

    pub const fn set_selected(&mut self, diagram: NoiseDiagram, selected: bool) {
        self.selected[diagram.index()] = selected;
    }
}

#[derive(Debug, Clone, PartialEq)]
pub struct NoiseSettings {
    pub start_frequency_hz: f64,
    pub end_frequency_hz: f64,
    pub point_count: u32,
    pub signal_amplitude: f64,
    pub diagrams: NoiseDiagrams,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PointBounds(RangeInclusive<u32>);

impl PointBounds {
    /// Creates the bounds stored by the original integer editor.
    ///
    /// # Errors
    ///
    /// Returns [`PointBoundsError`] when `minimum` is greater than `maximum`.
    pub const fn new(minimum: u32, maximum: u32) -> Result<Self, PointBoundsError> {
        if minimum > maximum {
            return Err(PointBoundsError { minimum, maximum });
        }
        Ok(Self(minimum..=maximum))
    }

    const fn contains(&self, value: u32) -> bool {
        value >= *self.0.start() && value <= *self.0.end()
    }

    #[must_use]
    pub const fn minimum(&self) -> u32 {
        *self.0.start()
    }

    #[must_use]
    pub const fn maximum(&self) -> u32 {
        *self.0.end()
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PointBoundsError {
    pub minimum: u32,
    pub maximum: u32,
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
    StartFrequency,
    EndFrequency,
    PointCount,
    SignalAmplitude,
}

impl fmt::Display for NumericField {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::StartFrequency => "Start frequency",
            Self::EndFrequency => "End frequency",
            Self::PointCount => "Number of points",
            Self::SignalAmplitude => "S/N Signal Amplitude",
        })
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ValidationError {
    InvalidNumber(NumericField),
    PointCountOutsideBounds { minimum: u32, maximum: u32 },
    FrequencyRange,
    Editor(String),
}

impl fmt::Display for ValidationError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::InvalidNumber(field) => write!(formatter, "Enter a valid {field} value."),
            Self::PointCountOutsideBounds { minimum, maximum } => write!(
                formatter,
                "Number of points must be from {minimum} through {maximum}."
            ),
            Self::FrequencyRange => formatter.write_str(
                "Start frequency must be greater than zero, and end frequency must be greater than start frequency and no greater than 1e50.",
            ),
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
    StartFrequencyChanged(String),
    EndFrequencyChanged(String),
    PointCountChanged(String),
    SignalAmplitudeChanged(String),
    DiagramToggled(NoiseDiagram, bool),
    Accept,
    Cancel,
}

#[derive(Debug, Clone, PartialEq, Eq)]
struct NoiseEdits {
    start_frequency: String,
    end_frequency: String,
    point_count: String,
    signal_amplitude: String,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
struct CloseGuard {
    validation_error: bool,
}

#[derive(Debug, Clone, PartialEq)]
pub struct Window {
    committed: NoiseSettings,
    edits: NoiseEdits,
    diagrams: NoiseDiagrams,
    point_bounds: PointBounds,
    close_guard: CloseGuard,
    first_error: Option<ValidationError>,
    modal_result: Option<ModalResult>,
}

impl Window {
    #[must_use]
    pub fn new(settings: NoiseSettings, point_bounds: PointBounds) -> Self {
        Self {
            edits: NoiseEdits {
                start_frequency: format_display_value(settings.start_frequency_hz, 6),
                end_frequency: format_display_value(settings.end_frequency_hz, 6),
                point_count: settings.point_count.to_string(),
                signal_amplitude: format_display_value(settings.signal_amplitude, 6),
            },
            diagrams: settings.diagrams,
            committed: settings,
            point_bounds,
            close_guard: CloseGuard::default(),
            first_error: None,
            modal_result: None,
        }
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::StartFrequencyChanged(value) => self.edits.start_frequency = value,
            Message::EndFrequencyChanged(value) => self.edits.end_frequency = value,
            Message::PointCountChanged(value) => self.edits.point_count = value,
            Message::SignalAmplitudeChanged(value) => self.edits.signal_amplitude = value,
            Message::DiagramToggled(diagram, selected) => {
                self.diagrams.set_selected(diagram, selected);
            }
            Message::Accept => {
                self.modal_result = Some(ModalResult::Accept);
                self.collect_and_validate();
            }
            Message::Cancel => self.modal_result = Some(ModalResult::Cancel),
        }
        Task::none()
    }

    /// Collects, validates, and conditionally commits the Noise frame.
    ///
    /// Reimplements Ghidra function `FUN_014f4e80` at `0x014F4E80`. The dialog
    /// handler delegates the embedded Noise frame to the shared collector.
    pub fn collect_and_validate(&mut self) -> CommitOutcome {
        self.collect_noise_settings()
    }

    /// Collects and validates Noise settings for a direct or batch caller.
    ///
    /// Reimplements Ghidra function `FUN_0149cb90` at `0x0149CB90`. It starts
    /// from the committed record, reads all four numeric editors and all four
    /// diagram flags, and enforces `0 < start < end <= 1e50`. Numeric editor
    /// failures stop collection. A cross-field error sets the frame guard but
    /// leaves the committed record unchanged. Point count and signal amplitude
    /// have no additional cross-field rule after their editor validation.
    pub fn collect_noise_settings(&mut self) -> CommitOutcome {
        let Some(start_frequency_hz) = parse_float_editor(&self.edits.start_frequency) else {
            self.report_first_error(ValidationError::InvalidNumber(NumericField::StartFrequency));
            return CommitOutcome::Rejected;
        };
        let Some(end_frequency_hz) = parse_float_editor(&self.edits.end_frequency) else {
            self.report_first_error(ValidationError::InvalidNumber(NumericField::EndFrequency));
            return CommitOutcome::Rejected;
        };
        let Some(point_count) = self.parse_point_count() else {
            return CommitOutcome::Rejected;
        };
        let Some(signal_amplitude) = parse_float_editor(&self.edits.signal_amplitude) else {
            self.report_first_error(ValidationError::InvalidNumber(
                NumericField::SignalAmplitude,
            ));
            return CommitOutcome::Rejected;
        };

        if !(start_frequency_hz > 0.0
            && end_frequency_hz > start_frequency_hz
            && end_frequency_hz <= 1.0e50)
        {
            self.report_first_error(ValidationError::FrequencyRange);
        }

        if self.close_guard.validation_error {
            return CommitOutcome::Rejected;
        }

        self.committed = NoiseSettings {
            start_frequency_hz,
            end_frequency_hz,
            point_count,
            signal_amplitude,
            diagrams: self.diagrams,
        };
        self.first_error = None;
        CommitOutcome::Committed
    }

    /// Allows a close only when the frame has no validation error.
    ///
    /// Reimplements Ghidra function `FUN_014f4e30` at `0x014F4E30`. The
    /// one-shot error flag is cleared after every query, including a veto, so
    /// the next close attempt starts with a clear frame flag.
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

    pub fn report_editor_error(&mut self, message: String) {
        self.report_first_error(ValidationError::Editor(message));
    }

    fn report_first_error(&mut self, error: ValidationError) {
        if !self.close_guard.validation_error {
            self.first_error = Some(error);
        }
        self.close_guard.validation_error = true;
    }

    fn parse_point_count(&mut self) -> Option<u32> {
        let value = self.edits.point_count.trim().parse::<u32>().ok();
        let Some(value) = value else {
            self.report_first_error(ValidationError::InvalidNumber(NumericField::PointCount));
            return None;
        };
        if !self.point_bounds.contains(value) {
            self.report_first_error(ValidationError::PointCountOutsideBounds {
                minimum: self.point_bounds.minimum(),
                maximum: self.point_bounds.maximum(),
            });
            return None;
        }
        Some(value)
    }

    #[must_use]
    pub const fn committed(&self) -> &NoiseSettings {
        &self.committed
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
        let mut diagram_controls = column![text("Diagrams")].spacing(4);
        for diagram in NoiseDiagram::ALL {
            diagram_controls = diagram_controls.push(
                checkbox(diagram.label(), self.diagrams.is_selected(diagram))
                    .on_toggle(move |selected| Message::DiagramToggled(diagram, selected)),
            );
        }

        let content = column![
            text(TITLE).size(18),
            row![
                text("Start frequency"),
                text_input("", &self.edits.start_frequency)
                    .on_input(Message::StartFrequencyChanged)
            ]
            .spacing(8),
            row![
                text("End frequency"),
                text_input("", &self.edits.end_frequency).on_input(Message::EndFrequencyChanged)
            ]
            .spacing(8),
            row![
                text("Number of points"),
                text_input("", &self.edits.point_count).on_input(Message::PointCountChanged)
            ]
            .spacing(8),
            row![
                text("S/N Signal Amplitude"),
                text_input("", &self.edits.signal_amplitude)
                    .on_input(Message::SignalAmplitudeChanged)
            ]
            .spacing(8),
            diagram_controls,
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

fn parse_float_editor(source: &str) -> Option<f64> {
    parse_engineering_number(source)
        .ok()
        .filter(|value| value.is_finite() && value.abs() <= 1.0e50)
}

#[cfg(test)]
mod tests {
    use super::*;

    fn settings() -> NoiseSettings {
        NoiseSettings {
            start_frequency_hz: 10.0,
            end_frequency_hz: 1_000.0,
            point_count: 100,
            signal_amplitude: 1.0,
            diagrams: NoiseDiagrams::new([true, false, true, false]),
        }
    }

    fn window() -> Window {
        let Ok(bounds) = PointBounds::new(2, 10_000) else {
            panic!("test bounds must be ordered");
        };
        Window::new(settings(), bounds)
    }

    #[test]
    fn valid_engineering_values_and_clear_diagrams_commit() {
        let mut window = window();
        let _ = window.update(Message::StartFrequencyChanged("1k".to_owned()));
        let _ = window.update(Message::EndFrequencyChanged("2MEG".to_owned()));
        let _ = window.update(Message::PointCountChanged("250".to_owned()));
        let _ = window.update(Message::SignalAmplitudeChanged("3m".to_owned()));
        for diagram in NoiseDiagram::ALL {
            let _ = window.update(Message::DiagramToggled(diagram, false));
        }

        assert_eq!(window.collect_and_validate(), CommitOutcome::Committed);
        assert!((window.committed().start_frequency_hz - 1_000.0).abs() <= f64::EPSILON);
        assert!((window.committed().end_frequency_hz - 2_000_000.0).abs() <= f64::EPSILON);
        assert_eq!(window.committed().point_count, 250);
        assert!(
            NoiseDiagram::ALL
                .into_iter()
                .all(|diagram| !window.committed().diagrams.is_selected(diagram))
        );
    }

    #[test]
    fn invalid_frequency_range_preserves_active_settings_and_vetoes_once() {
        let original = settings();
        let mut window = window();
        let _ = window.update(Message::StartFrequencyChanged("10".to_owned()));
        let _ = window.update(Message::EndFrequencyChanged("10".to_owned()));
        let _ = window.update(Message::DiagramToggled(NoiseDiagram::InputNoise, true));

        assert_eq!(window.collect_and_validate(), CommitOutcome::Rejected);
        assert_eq!(window.committed(), &original);
        assert_eq!(window.first_error(), Some(&ValidationError::FrequencyRange));
        assert!(!window.query_close());
        assert!(window.query_close());
    }

    #[test]
    fn parser_and_point_bound_errors_stop_before_commit() {
        let original = settings();
        let mut window = window();
        let _ = window.update(Message::StartFrequencyChanged("bad".to_owned()));
        assert_eq!(window.collect_and_validate(), CommitOutcome::Rejected);
        assert_eq!(window.committed(), &original);
        assert_eq!(
            window.first_error(),
            Some(&ValidationError::InvalidNumber(
                NumericField::StartFrequency
            ))
        );

        assert!(!window.query_close());
        let _ = window.update(Message::StartFrequencyChanged("10".to_owned()));
        let _ = window.update(Message::PointCountChanged("1".to_owned()));
        assert_eq!(window.collect_and_validate(), CommitOutcome::Rejected);
        assert_eq!(
            window.first_error(),
            Some(&ValidationError::PointCountOutsideBounds {
                minimum: 2,
                maximum: 10_000
            })
        );
    }

    #[test]
    fn prior_editor_error_blocks_valid_collection_until_close_query_clears_it() {
        let original = settings();
        let mut window = window();
        window.report_editor_error("editor error".to_owned());
        assert_eq!(window.collect_and_validate(), CommitOutcome::Rejected);
        assert_eq!(window.committed(), &original);
        assert!(!window.query_close());
        assert_eq!(window.collect_and_validate(), CommitOutcome::Committed);
    }

    #[test]
    fn batch_collector_accepts_recovered_limits_without_extra_diagram_or_amplitude_rule() {
        let mut window = window();
        let _ = window.update(Message::StartFrequencyChanged("1".to_owned()));
        let _ = window.update(Message::EndFrequencyChanged("1e50".to_owned()));
        let _ = window.update(Message::SignalAmplitudeChanged("-1e50".to_owned()));
        for diagram in NoiseDiagram::ALL {
            let _ = window.update(Message::DiagramToggled(diagram, false));
        }

        assert_eq!(window.collect_noise_settings(), CommitOutcome::Committed);
        assert!((window.committed().end_frequency_hz - 1.0e50).abs() <= f64::EPSILON);
        assert!((window.committed().signal_amplitude + 1.0e50).abs() <= f64::EPSILON);
        assert!(
            NoiseDiagram::ALL
                .into_iter()
                .all(|diagram| !window.committed().diagrams.is_selected(diagram))
        );
    }
}
