//! Iced adapter for the recovered Network Analysis settings dialog.
//!
//! Engineering-number parsing uses `tiara_core::numeric_format`. Typed page
//! and mask helpers in `tiara_core::network_analysis` preserve inactive page
//! settings without custom serialization infrastructure.

use std::fmt;

use iced::widget::{button, checkbox, column, container, row, text, text_input};
use iced::{Element, Length, Task};
use tiara_core::network_analysis::{
    DiagramPage, NetworkAnalysisSettings, NetworkDiagramOptions, frequency_range_is_valid,
    page_for_mode,
};
use tiara_core::numeric_format::{format_display_value, parse_engineering_number};

pub const TITLE: &str = "Network Analysis";
pub const FORM_RESOURCE: &str = "NetworkAnalysisDlg";

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum NumericField {
    StartFrequency,
    EndFrequency,
    PointCount,
}

impl fmt::Display for NumericField {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::StartFrequency => "start frequency",
            Self::EndFrequency => "end frequency",
            Self::PointCount => "number of points",
        })
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ValidationError {
    InvalidNumber(NumericField),
    FrequencyRange,
    Editor(String),
}

impl fmt::Display for ValidationError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::InvalidNumber(field) => write!(formatter, "Enter a valid {field}."),
            Self::FrequencyRange => formatter.write_str(
                "Start frequency must be positive, and end frequency must be greater than start frequency and no greater than 1e50.",
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

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    StartFrequencyChanged(String),
    EndFrequencyChanged(String),
    PointCountChanged(String),
    SweepTypeChanged(u8),
    ModeChanged(u8),
    DiagramToggled(DiagramPage, usize, bool),
    Accept,
    Cancel,
}

#[derive(Debug, Clone, PartialEq, Eq)]
struct PageSelections {
    szyh: Vec<bool>,
    reflection: Vec<bool>,
    transmission: Vec<bool>,
}

impl PageSelections {
    fn new(options: &NetworkDiagramOptions) -> Self {
        Self {
            szyh: selections_for(options, DiagramPage::Szyh),
            reflection: selections_for(options, DiagramPage::Reflection),
            transmission: selections_for(options, DiagramPage::Transmission),
        }
    }

    fn page(&self, page: DiagramPage) -> &[bool] {
        match page {
            DiagramPage::Szyh => &self.szyh,
            DiagramPage::Reflection => &self.reflection,
            DiagramPage::Transmission => &self.transmission,
        }
    }

    fn page_mut(&mut self, page: DiagramPage) -> &mut [bool] {
        match page {
            DiagramPage::Szyh => &mut self.szyh,
            DiagramPage::Reflection => &mut self.reflection,
            DiagramPage::Transmission => &mut self.transmission,
        }
    }

    fn set(&mut self, page: DiagramPage, index: usize, selected: bool) {
        if let Some(value) = self.page_mut(page).get_mut(index) {
            *value = selected;
        }
    }
}

fn selections_for(options: &NetworkDiagramOptions, page: DiagramPage) -> Vec<bool> {
    let mask = options.page(page);
    page.option_bits()
        .iter()
        .map(|&bit| mask.contains(bit))
        .collect()
}

#[derive(Debug, Clone, PartialEq, Eq)]
struct Edits {
    start_frequency: String,
    end_frequency: String,
    point_count: String,
    sweep_type_index: u8,
    mode_index: u8,
    pages: PageSelections,
}

#[derive(Debug, Clone, PartialEq)]
pub struct Window {
    committed: NetworkAnalysisSettings,
    edits: Edits,
    active_page: DiagramPage,
    first_error: Option<ValidationError>,
    error_latched: bool,
}

impl Window {
    #[must_use]
    pub fn new(settings: NetworkAnalysisSettings, active_page: DiagramPage) -> Self {
        Self {
            edits: Edits {
                start_frequency: format_display_value(settings.start_frequency_hz, 6),
                end_frequency: format_display_value(settings.end_frequency_hz, 6),
                point_count: settings.point_count.to_string(),
                sweep_type_index: settings.sweep_type_index,
                mode_index: settings.mode_index,
                pages: PageSelections::new(&settings.diagrams),
            },
            committed: settings,
            active_page,
            first_error: None,
            error_latched: false,
        }
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::StartFrequencyChanged(value) => self.edits.start_frequency = value,
            Message::EndFrequencyChanged(value) => self.edits.end_frequency = value,
            Message::PointCountChanged(value) => self.edits.point_count = value,
            Message::SweepTypeChanged(index) => self.edits.sweep_type_index = index,
            Message::ModeChanged(index) => self.select_page_for_mode(index),
            Message::DiagramToggled(page, index, selected) => {
                self.edits.pages.set(page, index, selected);
            }
            Message::Accept => {
                let _ = self.collect_and_commit();
            }
            Message::Cancel => {}
        }
        Task::none()
    }

    /// Forwards a validation message to the first-error state.
    ///
    /// Reimplements Ghidra function `FUN_01535350` at `0x01535350`. Only the
    /// first message is retained, while every report sets the close veto.
    pub fn report_first_error(&mut self, error: ValidationError) {
        if !self.error_latched {
            self.first_error = Some(error);
        }
        self.error_latched = true;
    }

    /// Stages, validates, and conditionally commits Network Analysis settings.
    ///
    /// Reimplements Ghidra function `FUN_015353b0` at `0x015353B0`. It starts
    /// from the committed record, parses all editors, rewrites only the active
    /// page's recovered option bits, and commits only while the first-error
    /// state remains clear.
    #[must_use]
    pub fn collect_and_commit(&mut self) -> CommitOutcome {
        let Ok(start_frequency_hz) = parse_engineering_number(&self.edits.start_frequency) else {
            self.report_first_error(ValidationError::InvalidNumber(NumericField::StartFrequency));
            return CommitOutcome::Rejected;
        };
        let Ok(end_frequency_hz) = parse_engineering_number(&self.edits.end_frequency) else {
            self.report_first_error(ValidationError::InvalidNumber(NumericField::EndFrequency));
            return CommitOutcome::Rejected;
        };
        let Ok(point_count) = self.edits.point_count.trim().parse::<u16>() else {
            self.report_first_error(ValidationError::InvalidNumber(NumericField::PointCount));
            return CommitOutcome::Rejected;
        };

        let mut staged = self.committed.clone();
        staged.start_frequency_hz = start_frequency_hz;
        staged.end_frequency_hz = end_frequency_hz;
        staged.point_count = point_count;
        staged.sweep_type_index = self.edits.sweep_type_index;
        staged.mode_index = self.edits.mode_index;

        if !frequency_range_is_valid(start_frequency_hz, end_frequency_hz) {
            self.report_first_error(ValidationError::FrequencyRange);
        }

        let _ = staged
            .diagrams
            .apply_page_selections(self.active_page, self.edits.pages.page(self.active_page));

        if self.error_latched {
            return CommitOutcome::Rejected;
        }
        self.committed = staged;
        self.first_error = None;
        CommitOutcome::Committed
    }

    /// Rejects one close after validation and then clears the error state.
    ///
    /// Reimplements Ghidra function `FUN_01535da0` at `0x01535DA0`.
    #[must_use]
    pub fn query_close(&mut self) -> bool {
        let can_close = !self.error_latched;
        self.error_latched = false;
        if !can_close {
            self.first_error = None;
        }
        can_close
    }

    /// Selects the recovered notebook page for a network-analysis mode.
    ///
    /// Reimplements Ghidra function `FUN_01535e00` at `0x01535E00`. Invalid
    /// item indexes leave the active page unchanged.
    pub const fn select_page_for_mode(&mut self, mode_index: u8) {
        self.edits.mode_index = mode_index;
        if let Some(page) = page_for_mode(mode_index) {
            self.active_page = page;
        }
    }

    #[must_use]
    pub const fn committed(&self) -> &NetworkAnalysisSettings {
        &self.committed
    }

    #[must_use]
    pub const fn active_page(&self) -> DiagramPage {
        self.active_page
    }

    #[must_use]
    pub const fn first_error(&self) -> Option<&ValidationError> {
        self.first_error.as_ref()
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let labels: &[&str] = match self.active_page {
            DiagramPage::Szyh => &["Amplitude", "Phase", "Amplitude & Phase", "Polar", "Smith"],
            DiagramPage::Reflection => &["VSWR", "Return Loss", "Phase", "Polar", "Smith"],
            DiagramPage::Transmission => &[
                "Gain",
                "Insertion Phase",
                "Polar",
                "Smith",
                "Group Delay",
                "Insertion Loss",
            ],
        };
        let mut diagrams = column![text("Diagram")].spacing(4);
        for (index, (&selected, label)) in self
            .edits
            .pages
            .page(self.active_page)
            .iter()
            .zip(labels)
            .enumerate()
        {
            let page = self.active_page;
            diagrams = diagrams.push(
                checkbox(*label, selected)
                    .on_toggle(move |checked| Message::DiagramToggled(page, index, checked)),
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
                button("S").on_press(Message::ModeChanged(0)),
                button("Z").on_press(Message::ModeChanged(1)),
                button("Y").on_press(Message::ModeChanged(2)),
                button("H").on_press(Message::ModeChanged(3)),
                button("Transmission").on_press(Message::ModeChanged(4)),
                button("Reflection").on_press(Message::ModeChanged(5)),
                button("Impedance").on_press(Message::ModeChanged(6)),
            ]
            .spacing(4),
            diagrams,
            text(
                self.first_error
                    .as_ref()
                    .map_or_else(String::new, ToString::to_string)
            ),
            row![
                button("OK").on_press(Message::Accept),
                button("Cancel").on_press(Message::Cancel),
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
    use tiara_core::network_analysis::DiagramMask;

    fn settings() -> NetworkAnalysisSettings {
        NetworkAnalysisSettings {
            start_frequency_hz: 10.0,
            end_frequency_hz: 1_000.0,
            point_count: 100,
            sweep_type_index: 1,
            mode_index: 0,
            diagrams: NetworkDiagramOptions {
                szyh: DiagramMask::new(0x0002),
                reflection: DiagramMask::new(0x1234),
                transmission: DiagramMask::new(0x5678),
            },
        }
    }

    #[test]
    fn valid_accept_commits_values_and_only_active_page_mask() {
        let mut window = Window::new(settings(), DiagramPage::Szyh);
        window.edits.start_frequency = "1k".to_owned();
        window.edits.end_frequency = "2Meg".to_owned();
        window.edits.point_count = "250".to_owned();
        window.edits.pages.szyh = vec![true, false, true, false, true];
        assert_eq!(window.collect_and_commit(), CommitOutcome::Committed);
        assert!((window.committed().start_frequency_hz - 1_000.0).abs() <= f64::EPSILON);
        assert!((window.committed().end_frequency_hz - 2_000_000.0).abs() <= f64::EPSILON);
        assert_eq!(window.committed().point_count, 250);
        assert_eq!(window.committed().diagrams.szyh.bits(), 0x0046);
        assert_eq!(window.committed().diagrams.reflection.bits(), 0x1234);
        assert_eq!(window.committed().diagrams.transmission.bits(), 0x5678);
    }

    #[test]
    fn invalid_range_preserves_owner_and_vetoes_exactly_one_close() {
        let original = settings();
        let mut window = Window::new(original.clone(), DiagramPage::Szyh);
        window.edits.start_frequency = "100".to_owned();
        window.edits.end_frequency = "100".to_owned();
        assert_eq!(window.collect_and_commit(), CommitOutcome::Rejected);
        assert_eq!(window.committed(), &original);
        assert!(matches!(
            window.first_error(),
            Some(ValidationError::FrequencyRange)
        ));
        assert!(!window.query_close());
        assert!(window.query_close());
    }

    #[test]
    fn first_error_is_not_replaced_by_later_reports() {
        let mut window = Window::new(settings(), DiagramPage::Szyh);
        window.report_first_error(ValidationError::Editor("first".to_owned()));
        window.report_first_error(ValidationError::Editor("second".to_owned()));
        assert_eq!(
            window.first_error(),
            Some(&ValidationError::Editor("first".to_owned()))
        );
    }

    #[test]
    fn all_modes_select_the_recovered_pages_and_invalid_is_noop() {
        let mut window = Window::new(settings(), DiagramPage::Reflection);
        for mode in [0, 1, 2, 3, 6] {
            window.select_page_for_mode(mode);
            assert_eq!(window.active_page(), DiagramPage::Szyh);
        }
        window.select_page_for_mode(4);
        assert_eq!(window.active_page(), DiagramPage::Transmission);
        window.select_page_for_mode(5);
        assert_eq!(window.active_page(), DiagramPage::Reflection);
        window.select_page_for_mode(8);
        assert_eq!(window.active_page(), DiagramPage::Reflection);
    }

    #[test]
    fn invalid_numeric_editor_sets_the_shared_first_error_guard() {
        let mut window = Window::new(settings(), DiagramPage::Szyh);
        window.edits.point_count = "many".to_owned();
        assert_eq!(window.collect_and_commit(), CommitOutcome::Rejected);
        assert!(matches!(
            window.first_error(),
            Some(ValidationError::InvalidNumber(NumericField::PointCount))
        ));
    }
}
