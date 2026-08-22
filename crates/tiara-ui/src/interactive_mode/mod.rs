//! Iced adapter for the recovered Interactive Mode Options dialog.
//!
//! Iced owns staged control state. The shared TIARA engineering-number parser
//! supplies numeric conversion, and [`RuntimeTimingRefresher`] isolates the
//! active-engine timing update from the dialog.

use std::fmt;

use iced::widget::{button, checkbox, column, container, radio, row, scrollable, text, text_input};
use iced::{Alignment, Element, Length};
use tiara_core::numeric_format::{format_display_value, parse_engineering_number};

use crate::shared::window_shell;

pub const TITLE: &str = "Interactive Mode - Options";
pub const SCREENSHOT: &str = "screenshots/Interactive_Mode_Window.png";
pub const FORM_RESOURCE: &str = "InteractiveModeOptionDlg";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01b7ce00");
pub const HELP_CONTEXT: u32 = 0x48e;
pub const LIBRARY_EVALUATION: &str = "iced supplies staged dialog state and widgets; tiara-core numeric_format supplies engineering-number parsing and display; a RuntimeTimingRefresher adapter owns the active-engine timing effect.";

const STATUS: &str = "Transient initial values";
const MINIMUM_FLOAT_EDIT_VALUE: f64 = -1.0e50;
const MAXIMUM_FLOAT_EDIT_VALUE: f64 = 1.0e50;
const TRANSIENT_MODES: [&str; 3] = [
    "Calculate operating point",
    "Use initial conditions",
    "Zero initial values",
];

#[derive(Debug, Clone, Copy, Default, PartialEq)]
pub struct InteractiveModeSettings {
    pub simulation_time_unit: f64,
    pub animation_time_unit: f64,
    pub single_shot_end_time: f64,
    pub sound_enabled: bool,
    pub transient_initial_value_mode: u8,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TimeField {
    SimulationTimeUnit,
    AnimationTimeUnit,
    SingleShotEndTime,
}

impl fmt::Display for TimeField {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::SimulationTimeUnit => "Simulation time unit",
            Self::AnimationTimeUnit => "Animation time unit",
            Self::SingleShotEndTime => "Single-shot end time",
        })
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum CommitError {
    InvalidTime { field: TimeField, message: String },
    RuntimeRefresh(String),
}

impl fmt::Display for CommitError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::InvalidTime { field, message } => write!(formatter, "{field}: {message}"),
            Self::RuntimeRefresh(message) => formatter.write_str(message),
        }
    }
}

impl std::error::Error for CommitError {}

pub trait FloatEditorParser {
    /// # Errors
    ///
    /// Returns a field-specific conversion, range, or callback error.
    fn parse(&mut self, field: TimeField, source: &str) -> Result<f64, String>;
}

#[derive(Debug, Clone, Copy, Default)]
pub struct StandardFloatEditorParser;

impl FloatEditorParser for StandardFloatEditorParser {
    fn parse(&mut self, _field: TimeField, source: &str) -> Result<f64, String> {
        let value = parse_engineering_number(source).map_err(|error| error.to_string())?;
        if value.is_finite()
            && (MINIMUM_FLOAT_EDIT_VALUE..=MAXIMUM_FLOAT_EDIT_VALUE).contains(&value)
        {
            Ok(value)
        } else {
            Err("value is outside the FloatEdit range".to_owned())
        }
    }
}

pub trait RuntimeTimingRefresher {
    /// # Errors
    ///
    /// Returns the active runtime timing-update error after options are stored.
    fn refresh(
        &mut self,
        simulation_time_unit: f64,
        animation_time_unit: f64,
    ) -> Result<(), String>;
}

#[derive(Debug, Clone, Copy, Default)]
pub struct InactiveRuntime;

impl RuntimeTimingRefresher for InactiveRuntime {
    fn refresh(
        &mut self,
        _simulation_time_unit: f64,
        _animation_time_unit: f64,
    ) -> Result<(), String> {
        Ok(())
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum RequestedAction {
    Commit,
    Cancel,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    SimulationTimeUnitChanged(String),
    AnimationTimeUnitChanged(String),
    SingleShotEndTimeChanged(String),
    SoundEnabledChanged(bool),
    TransientModeSelected(usize),
    CommitRequested,
    CancelRequested,
    HelpRequested,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Window {
    simulation_time_unit_text: String,
    animation_time_unit_text: String,
    single_shot_end_time_text: String,
    sound_enabled: bool,
    transient_mode_index: Option<usize>,
    help_context: u32,
    requested_action: Option<RequestedAction>,
}

impl Default for Window {
    fn default() -> Self {
        Self::new(InteractiveModeSettings::default())
    }
}

impl Window {
    #[must_use]
    pub fn new(settings: InteractiveModeSettings) -> Self {
        let mut window = Self {
            simulation_time_unit_text: String::new(),
            animation_time_unit_text: String::new(),
            single_shot_end_time_text: String::new(),
            sound_enabled: false,
            transient_mode_index: None,
            help_context: 0,
            requested_action: None,
        };
        window.initialize_from(&settings);
        window
    }

    /// Ports Ghidra function `FUN_01b7ce00` at `0x01B7CE00`.
    ///
    /// This copies global values into staged controls, applies the inverse
    /// transient-mode mapping, and assigns help context `0x48E`.
    pub fn initialize_from(&mut self, settings: &InteractiveModeSettings) {
        self.simulation_time_unit_text = format_display_value(settings.simulation_time_unit, 6);
        self.animation_time_unit_text = format_display_value(settings.animation_time_unit, 6);
        self.single_shot_end_time_text = format_display_value(settings.single_shot_end_time, 6);
        self.sound_enabled = settings.sound_enabled;
        self.transient_mode_index = Some(
            (usize::from(settings.transient_initial_value_mode) + TRANSIENT_MODES.len() - 1)
                % TRANSIENT_MODES.len(),
        );
        self.help_context = HELP_CONTEXT;
    }

    /// Ports Ghidra function `FUN_01b7cec0` at `0x01B7CEC0`.
    ///
    /// Each time value is stored as soon as its parser succeeds. Later parse
    /// or runtime-refresh errors do not roll back earlier writes.
    ///
    /// # Errors
    ///
    /// Returns the first parser error or the final runtime-refresh error.
    pub fn commit(
        &self,
        settings: &mut InteractiveModeSettings,
        parser: &mut impl FloatEditorParser,
        refresher: &mut impl RuntimeTimingRefresher,
    ) -> Result<(), CommitError> {
        settings.simulation_time_unit = parse_time(
            parser,
            TimeField::SimulationTimeUnit,
            &self.simulation_time_unit_text,
        )?;
        settings.animation_time_unit = parse_time(
            parser,
            TimeField::AnimationTimeUnit,
            &self.animation_time_unit_text,
        )?;
        settings.single_shot_end_time = parse_time(
            parser,
            TimeField::SingleShotEndTime,
            &self.single_shot_end_time_text,
        )?;
        settings.sound_enabled = self.sound_enabled;
        settings.transient_initial_value_mode = self.transient_mode_index.map_or(0, |index| {
            u8::try_from((index + 1) % TRANSIENT_MODES.len()).unwrap_or_default()
        });

        refresher
            .refresh(settings.simulation_time_unit, settings.animation_time_unit)
            .map_err(CommitError::RuntimeRefresh)
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::SimulationTimeUnitChanged(value) => {
                self.simulation_time_unit_text = value;
            }
            Message::AnimationTimeUnitChanged(value) => self.animation_time_unit_text = value,
            Message::SingleShotEndTimeChanged(value) => self.single_shot_end_time_text = value,
            Message::SoundEnabledChanged(enabled) => self.sound_enabled = enabled,
            Message::TransientModeSelected(index) => self.transient_mode_index = Some(index),
            Message::CommitRequested => self.requested_action = Some(RequestedAction::Commit),
            Message::CancelRequested => self.requested_action = Some(RequestedAction::Cancel),
            Message::HelpRequested => {}
        }
    }

    pub const fn take_requested_action(&mut self) -> Option<RequestedAction> {
        self.requested_action.take()
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let menu = window_shell::empty_menu();
        let toolbar: Element<'_, Message> = container(
            row![
                button("OK").on_press(Message::CommitRequested),
                button("Cancel").on_press(Message::CancelRequested),
                button("Help").on_press(Message::HelpRequested),
            ]
            .spacing(4),
        )
        .padding([3, 6])
        .width(Length::Fill)
        .into();

        let transient_modes = TRANSIENT_MODES.iter().enumerate().fold(
            column![text("Transient initial values")].spacing(4),
            |controls, (index, label)| {
                controls.push(radio(
                    *label,
                    index,
                    self.transient_mode_index,
                    Message::TransientModeSelected,
                ))
            },
        );

        let body: Element<'_, Message> = container(scrollable(
            column![
                editor_row(
                    "Simulation time unit (s)",
                    &self.simulation_time_unit_text,
                    Message::SimulationTimeUnitChanged,
                ),
                editor_row(
                    "Animation time unit (s)",
                    &self.animation_time_unit_text,
                    Message::AnimationTimeUnitChanged,
                ),
                editor_row(
                    "End time (Single-shot) (s)",
                    &self.single_shot_end_time_text,
                    Message::SingleShotEndTimeChanged,
                ),
                checkbox("Sound effects enabled", self.sound_enabled)
                    .on_toggle(Message::SoundEnabledChanged),
                transient_modes,
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

fn parse_time(
    parser: &mut impl FloatEditorParser,
    field: TimeField,
    source: &str,
) -> Result<f64, CommitError> {
    parser
        .parse(field, source)
        .map_err(|message| CommitError::InvalidTime { field, message })
}

fn editor_row<'a>(
    label: &'a str,
    value: &'a str,
    on_input: fn(String) -> Message,
) -> iced::widget::Row<'a, Message> {
    row![
        text(label).width(Length::FillPortion(2)),
        text_input("", value)
            .on_input(on_input)
            .width(Length::FillPortion(3)),
    ]
    .spacing(8)
    .align_y(Alignment::Center)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Default)]
    struct RecordingRefresher {
        calls: Vec<(f64, f64)>,
        error: Option<String>,
    }

    impl RuntimeTimingRefresher for RecordingRefresher {
        fn refresh(
            &mut self,
            simulation_time_unit: f64,
            animation_time_unit: f64,
        ) -> Result<(), String> {
            self.calls.push((simulation_time_unit, animation_time_unit));
            self.error.clone().map_or(Ok(()), Err)
        }
    }

    fn settings() -> InteractiveModeSettings {
        InteractiveModeSettings {
            simulation_time_unit: 1.0,
            animation_time_unit: 2.0,
            single_shot_end_time: 3.0,
            sound_enabled: false,
            transient_initial_value_mode: 1,
        }
    }

    fn assert_close(actual: f64, expected: f64) {
        assert!((actual - expected).abs() <= f64::EPSILON * expected.abs().max(1.0));
    }

    #[test]
    fn form_create_loads_globals_inverse_mode_mapping_and_help_context() {
        let mut options = settings();

        for (stored, expected_index) in [(0, 2), (1, 0), (2, 1)] {
            options.transient_initial_value_mode = stored;
            let window = Window::new(options);

            assert_eq!(window.simulation_time_unit_text, "1");
            assert_eq!(window.animation_time_unit_text, "2");
            assert_eq!(window.single_shot_end_time_text, "3");
            assert!(!window.sound_enabled);
            assert_eq!(window.transient_mode_index, Some(expected_index));
            assert_eq!(window.help_context, HELP_CONTEXT);
        }
    }

    #[test]
    fn successful_ok_parses_engineering_values_maps_mode_and_refreshes() {
        let mut options = settings();
        let mut window = Window::new(options);
        window.update(Message::SimulationTimeUnitChanged("2m".into()));
        window.update(Message::AnimationTimeUnitChanged("500u".into()));
        window.update(Message::SingleShotEndTimeChanged("4k".into()));
        window.update(Message::SoundEnabledChanged(true));
        window.update(Message::TransientModeSelected(1));
        let mut parser = StandardFloatEditorParser;
        let mut refresher = RecordingRefresher::default();

        let result = window.commit(&mut options, &mut parser, &mut refresher);

        assert_eq!(result, Ok(()));
        assert_close(options.simulation_time_unit, 0.002);
        assert_close(options.animation_time_unit, 0.0005);
        assert_close(options.single_shot_end_time, 4_000.0);
        assert!(options.sound_enabled);
        assert_eq!(options.transient_initial_value_mode, 2);
        assert_eq!(refresher.calls.len(), 1);
        assert_close(refresher.calls[0].0, 0.002);
        assert_close(refresher.calls[0].1, 0.0005);
    }

    #[test]
    fn second_parser_failure_preserves_the_first_immediate_write() {
        let mut options = settings();
        let mut window = Window::new(options);
        window.update(Message::SimulationTimeUnitChanged("10".into()));
        window.update(Message::AnimationTimeUnitChanged("not-a-time".into()));
        window.update(Message::SingleShotEndTimeChanged("30".into()));
        window.update(Message::SoundEnabledChanged(true));
        let mut parser = StandardFloatEditorParser;
        let mut refresher = RecordingRefresher::default();

        let result = window.commit(&mut options, &mut parser, &mut refresher);

        assert!(matches!(
            result,
            Err(CommitError::InvalidTime {
                field: TimeField::AnimationTimeUnit,
                ..
            })
        ));
        assert_close(options.simulation_time_unit, 10.0);
        assert_close(options.animation_time_unit, 2.0);
        assert_close(options.single_shot_end_time, 3.0);
        assert!(!options.sound_enabled);
        assert!(refresher.calls.is_empty());
    }

    #[test]
    fn refresh_failure_occurs_after_all_option_writes() {
        let mut options = settings();
        let mut window = Window::new(options);
        window.update(Message::SimulationTimeUnitChanged("6".into()));
        window.update(Message::AnimationTimeUnitChanged("0".into()));
        window.update(Message::SingleShotEndTimeChanged("8".into()));
        window.update(Message::SoundEnabledChanged(true));
        window.update(Message::TransientModeSelected(2));
        let mut parser = StandardFloatEditorParser;
        let mut refresher = RecordingRefresher {
            error: Some("engine rejected ratio".into()),
            ..RecordingRefresher::default()
        };

        let result = window.commit(&mut options, &mut parser, &mut refresher);

        assert_eq!(
            result,
            Err(CommitError::RuntimeRefresh(
                "engine rejected ratio".to_owned()
            ))
        );
        assert_close(options.simulation_time_unit, 6.0);
        assert_close(options.animation_time_unit, 0.0);
        assert_close(options.single_shot_end_time, 8.0);
        assert!(options.sound_enabled);
        assert_eq!(options.transient_initial_value_mode, 0);
        assert_eq!(refresher.calls.len(), 1);
        assert_close(refresher.calls[0].0, 6.0);
        assert_close(refresher.calls[0].1, 0.0);
    }

    #[test]
    fn missing_radio_selection_maps_to_stored_zero() {
        let mut options = settings();
        let mut window = Window::new(options);
        window.transient_mode_index = None;
        let mut parser = StandardFloatEditorParser;
        let mut refresher = InactiveRuntime;

        assert_eq!(
            window.commit(&mut options, &mut parser, &mut refresher),
            Ok(())
        );
        assert_eq!(options.transient_initial_value_mode, 0);
    }

    #[test]
    fn cancel_discards_staged_edits_and_standard_parser_enforces_range() {
        let options = settings();
        let mut window = Window::new(options);
        window.update(Message::SimulationTimeUnitChanged("1e51".into()));
        window.update(Message::CancelRequested);

        assert_eq!(
            window.take_requested_action(),
            Some(RequestedAction::Cancel)
        );
        assert_eq!(options, settings());

        let mut committed = options;
        let mut parser = StandardFloatEditorParser;
        let mut refresher = InactiveRuntime;
        assert!(
            window
                .commit(&mut committed, &mut parser, &mut refresher)
                .is_err()
        );
        assert_eq!(committed, options);
    }
}
