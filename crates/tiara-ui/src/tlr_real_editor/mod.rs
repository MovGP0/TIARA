//! Tolerance distribution editor state and Iced controls.
//!
//! Library evaluation: Iced 0.13.1 supplies the radio controls and message
//! routing. Rust's standard `f32` parser supplies locale-neutral numeric
//! validation. No extra form or validation crate is needed for this focused
//! dialog adapter.

use iced::widget::{button, column, container, radio, row, text, text_input};
use iced::{Element, Length};
use tiara_core::tlr::{Distribution, GeneralDistributionParameters, ToleranceRecord};

const GENERAL_PANEL_HEIGHT: f32 = 176.0;

pub const TITLE: &str = "Tolerance Editor";
pub const FORM_RESOURCE: &str = "TlrRealEditorDlg";

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum DistributionLayoutChange {
    #[default]
    None,
    Expanded,
    Collapsed,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum AcceptError {
    GridCommitFailed,
    InvalidTolerance,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AcceptOutcome {
    Saved,
}

#[derive(Debug, Clone)]
pub enum Message {
    DistributionSelected(Distribution),
    ToleranceChanged(String),
    GeneralFieldChanged(usize, String),
    Accept,
}

#[derive(Debug, Clone)]
struct LayoutState {
    general_panel_enabled: bool,
    simple_distribution_editor_state: bool,
}

#[derive(Debug, Clone)]
struct ValidationState {
    grid_commit_valid: bool,
    close_blocked_once: bool,
    modal_accepted: bool,
}

impl Default for ValidationState {
    fn default() -> Self {
        Self {
            grid_commit_valid: true,
            close_blocked_once: false,
            modal_accepted: false,
        }
    }
}

#[derive(Debug, Clone)]
pub struct Window {
    distribution: Distribution,
    tolerance_input: String,
    general_fields: [String; 7],
    layout: LayoutState,
    form_height: f32,
    recenter_generation: u64,
    validation: ValidationState,
    last_error: Option<AcceptError>,
    record: ToleranceRecord,
}

impl Default for Window {
    fn default() -> Self {
        Self::new(ToleranceRecord::default())
    }
}

impl Window {
    #[must_use]
    pub fn new(record: ToleranceRecord) -> Self {
        let general_panel_enabled = record.distribution == Distribution::General;
        let general_fields = record.general_parameters.as_ref().map_or_else(
            || std::array::from_fn(|_| String::new()),
            |parameters| parameters.fields.clone(),
        );
        Self {
            distribution: record.distribution,
            tolerance_input: record.tolerance_percent.to_string(),
            general_fields,
            layout: LayoutState {
                general_panel_enabled,
                simple_distribution_editor_state: !general_panel_enabled,
            },
            form_height: if general_panel_enabled { 516.0 } else { 340.0 },
            recenter_generation: 0,
            validation: ValidationState::default(),
            last_error: None,
            record,
        }
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::DistributionSelected(distribution) => {
                let _ = self.select_distribution(distribution);
            }
            Message::ToleranceChanged(value) => self.tolerance_input = value,
            Message::GeneralFieldChanged(index, value) => {
                if let Some(field) = self.general_fields.get_mut(index) {
                    *field = value;
                }
            }
            Message::Accept => {
                let _ = self.accept(self.validation.grid_commit_valid);
            }
        }
    }

    /// Ports Ghidra function `FUN_013f6620` at `0x013F6620`.
    #[must_use]
    pub fn select_distribution(&mut self, distribution: Distribution) -> DistributionLayoutChange {
        self.distribution = distribution;
        let general = distribution == Distribution::General;
        self.layout.simple_distribution_editor_state = !general;

        if general == self.layout.general_panel_enabled {
            return DistributionLayoutChange::None;
        }
        self.layout.general_panel_enabled = general;
        self.recenter_generation = self.recenter_generation.saturating_add(1);
        if general {
            self.form_height += GENERAL_PANEL_HEIGHT;
            DistributionLayoutChange::Expanded
        } else {
            self.form_height = (self.form_height - GENERAL_PANEL_HEIGHT).max(300.0);
            DistributionLayoutChange::Collapsed
        }
    }

    /// Ports Ghidra function `FUN_013f66e0` at `0x013F66E0`.
    ///
    /// # Errors
    ///
    /// Returns `GridCommitFailed` when the active general-parameter editor is
    /// invalid. Returns `InvalidTolerance` when the tolerance text is not a
    /// finite floating-point value.
    pub fn accept(
        &mut self,
        active_grid_commit_succeeded: bool,
    ) -> Result<AcceptOutcome, AcceptError> {
        if !active_grid_commit_succeeded {
            return Err(self.block_accept(AcceptError::GridCommitFailed));
        }
        let Ok(tolerance_percent) = self.tolerance_input.trim().parse::<f32>() else {
            return Err(self.block_accept(AcceptError::InvalidTolerance));
        };
        if !tolerance_percent.is_finite() {
            return Err(self.block_accept(AcceptError::InvalidTolerance));
        }

        self.record.distribution = self.distribution;
        self.record.tolerance_percent = tolerance_percent;
        self.record.general_parameters =
            (self.distribution == Distribution::General).then(|| GeneralDistributionParameters {
                fields: self.general_fields.clone(),
            });
        self.validation.close_blocked_once = false;
        self.validation.modal_accepted = true;
        self.last_error = None;
        Ok(AcceptOutcome::Saved)
    }

    fn block_accept(&mut self, error: AcceptError) -> AcceptError {
        self.validation.close_blocked_once = true;
        self.validation.modal_accepted = false;
        self.last_error = Some(error.clone());
        error
    }

    /// Ports Ghidra function `FUN_013f67a0` at `0x013F67A0`.
    #[must_use]
    pub const fn close_query(&mut self) -> bool {
        let can_close = !self.validation.close_blocked_once;
        self.validation.close_blocked_once = false;
        can_close
    }

    pub const fn set_grid_commit_valid(&mut self, valid: bool) {
        self.validation.grid_commit_valid = valid;
    }

    #[must_use]
    pub const fn record(&self) -> &ToleranceRecord {
        &self.record
    }

    #[must_use]
    pub const fn form_height(&self) -> f32 {
        self.form_height
    }

    #[must_use]
    pub const fn general_panel_enabled(&self) -> bool {
        self.layout.general_panel_enabled
    }

    #[must_use]
    pub const fn simple_distribution_editor_state(&self) -> bool {
        self.layout.simple_distribution_editor_state
    }

    #[must_use]
    pub const fn recenter_generation(&self) -> u64 {
        self.recenter_generation
    }

    #[must_use]
    pub const fn modal_accepted(&self) -> bool {
        self.validation.modal_accepted
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let mut controls = column![
            text("Distribution"),
            radio(
                Distribution::Uniform.to_string(),
                Distribution::Uniform,
                Some(self.distribution),
                Message::DistributionSelected,
            ),
            radio(
                Distribution::Gaussian.to_string(),
                Distribution::Gaussian,
                Some(self.distribution),
                Message::DistributionSelected,
            ),
            radio(
                Distribution::General.to_string(),
                Distribution::General,
                Some(self.distribution),
                Message::DistributionSelected,
            ),
            row![
                text("Tolerance"),
                text_input("%", &self.tolerance_input).on_input(Message::ToleranceChanged),
                text("%"),
            ]
            .spacing(8),
        ]
        .spacing(8);

        if self.layout.general_panel_enabled {
            for (index, field) in self.general_fields.iter().enumerate() {
                controls = controls.push(
                    row![
                        text(format!("General parameter {}", index + 1)),
                        text_input("", field)
                            .on_input(move |value| Message::GeneralFieldChanged(index, value)),
                    ]
                    .spacing(8),
                );
            }
        }
        if let Some(error) = &self.last_error {
            controls = controls.push(text(match error {
                AcceptError::GridCommitFailed => "Correct the active parameter value.",
                AcceptError::InvalidTolerance => "Enter a finite tolerance value.",
            }));
        }
        controls = controls.push(button("OK").on_press(Message::Accept));

        container(controls)
            .padding(16)
            .width(Length::Fill)
            .height(Length::Fill)
            .into()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn distribution_switch_resizes_only_when_panel_state_changes() {
        let mut window = Window::default();
        let compact_height = window.form_height;

        assert_eq!(
            window.select_distribution(Distribution::General),
            DistributionLayoutChange::Expanded
        );
        assert!(
            (window.form_height - (compact_height + GENERAL_PANEL_HEIGHT)).abs() < f32::EPSILON
        );
        assert!(window.general_panel_enabled());
        assert!(!window.simple_distribution_editor_state());
        assert_eq!(
            window.select_distribution(Distribution::General),
            DistributionLayoutChange::None
        );
        assert!(
            (window.form_height - (compact_height + GENERAL_PANEL_HEIGHT)).abs() < f32::EPSILON
        );

        assert_eq!(
            window.select_distribution(Distribution::Gaussian),
            DistributionLayoutChange::Collapsed
        );
        assert!((window.form_height - compact_height).abs() < f32::EPSILON);
        assert!(!window.general_panel_enabled());
        assert!(window.simple_distribution_editor_state());
    }

    #[test]
    fn failed_grid_commit_does_not_change_target_and_blocks_one_close_attempt() {
        let original = ToleranceRecord {
            distribution: Distribution::Gaussian,
            tolerance_percent: 4.5,
            general_parameters: None,
        };
        let mut window = Window::new(original.clone());
        let _ = window.select_distribution(Distribution::General);
        window.tolerance_input = "12.5".to_owned();

        assert_eq!(window.accept(false), Err(AcceptError::GridCommitFailed));
        assert_eq!(window.record, original);
        assert!(!window.close_query());
        assert!(window.close_query());
    }

    #[test]
    fn general_accept_copies_staged_fields_and_tolerance() {
        let mut window = Window::default();
        let _ = window.select_distribution(Distribution::General);
        window.tolerance_input = "7.25".to_owned();
        window.general_fields[0] = "minimum".to_owned();
        window.general_fields[6] = "maximum".to_owned();

        assert_eq!(window.accept(true), Ok(AcceptOutcome::Saved));
        assert_eq!(window.record.distribution, Distribution::General);
        assert!((window.record.tolerance_percent - 7.25).abs() < f32::EPSILON);
        let parameters = window
            .record
            .general_parameters
            .as_ref()
            .expect("general parameters");
        assert_eq!(parameters.fields[0], "minimum");
        assert_eq!(parameters.fields[6], "maximum");
        assert!(window.modal_accepted());
    }

    #[test]
    fn simple_distribution_accept_releases_general_parameters() {
        let mut window = Window::new(ToleranceRecord {
            distribution: Distribution::General,
            tolerance_percent: 1.0,
            general_parameters: Some(GeneralDistributionParameters {
                fields: std::array::from_fn(|index| index.to_string()),
            }),
        });
        let _ = window.select_distribution(Distribution::Uniform);
        window.tolerance_input = "2".to_owned();

        assert_eq!(window.accept(true), Ok(AcceptOutcome::Saved));
        assert_eq!(window.record.distribution, Distribution::Uniform);
        assert!(window.record.general_parameters.is_none());
    }

    #[test]
    fn invalid_or_non_finite_tolerance_preserves_target() {
        let original = ToleranceRecord {
            distribution: Distribution::Uniform,
            tolerance_percent: 3.0,
            general_parameters: None,
        };
        let mut window = Window::new(original.clone());

        for invalid in ["invalid", "NaN", "inf"] {
            window.tolerance_input = invalid.to_owned();
            assert_eq!(window.accept(true), Err(AcceptError::InvalidTolerance));
            assert_eq!(window.record, original);
            assert!(!window.close_query());
        }
    }
}
