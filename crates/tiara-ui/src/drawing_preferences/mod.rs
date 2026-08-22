use std::fmt;

use iced::widget::{button, column, container, pick_list, row, scrollable, text, text_input};
use iced::{Alignment, Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "Drawing Preferences";
pub const SCREENSHOT: &str = "screenshots/Drawing_Preferences_Window.png";
pub const FORM_RESOURCE: &str = "I_Drawing";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("017eb770");
const STATUS: &str = "Drawing settings";
const MAX_FIXED_TEXT_CHARACTERS: usize = 40;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DrawingType {
    LinearLinear,
    LogarithmicLinear,
    Bode,
    AmplitudeAndPhase,
    Fourier,
}

impl DrawingType {
    const ALL: [Self; 5] = [
        Self::LinearLinear,
        Self::LogarithmicLinear,
        Self::Bode,
        Self::AmplitudeAndPhase,
        Self::Fourier,
    ];

    const fn internal_value(self) -> u8 {
        match self {
            Self::LinearLinear => 0,
            Self::LogarithmicLinear => 1,
            Self::Bode => 2,
            Self::AmplitudeAndPhase => 3,
            Self::Fourier => 5,
        }
    }

    const fn radio_index(self) -> i32 {
        match self {
            Self::LinearLinear => 0,
            Self::LogarithmicLinear => 1,
            Self::Bode => 2,
            Self::AmplitudeAndPhase => 3,
            Self::Fourier => 4,
        }
    }

    const fn from_internal_value(value: u8) -> Option<Self> {
        match value {
            0 => Some(Self::LinearLinear),
            1 => Some(Self::LogarithmicLinear),
            2 => Some(Self::Bode),
            3 => Some(Self::AmplitudeAndPhase),
            5 => Some(Self::Fourier),
            _ => None,
        }
    }
}

impl fmt::Display for DrawingType {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::LinearLinear => "Lin-Lin",
            Self::LogarithmicLinear => "Log-Lin",
            Self::Bode => "Bode",
            Self::AmplitudeAndPhase => "Amplitude & Phase",
            Self::Fourier => "Fourier",
        })
    }
}

#[derive(Debug, Clone, PartialEq)]
pub struct DrawingPreferences {
    pub drawing_type: u8,
    pub parameter_unit: String,
    pub result_unit: String,
    pub parameter_name: String,
    pub result_name: String,
    pub left_limit: f64,
    pub right_limit: f64,
    pub subdivisions: i32,
    pub retained_settings: Vec<u8>,
}

impl DrawingPreferences {
    fn fixed_defaults() -> Self {
        Self {
            drawing_type: DrawingType::LinearLinear.internal_value(),
            parameter_unit: "s".to_owned(),
            result_unit: "V".to_owned(),
            parameter_name: "t".to_owned(),
            result_name: "Out".to_owned(),
            left_limit: 0.0,
            right_limit: 0.000_02,
            subdivisions: 100,
            retained_settings: Vec::new(),
        }
    }
}

impl Default for DrawingPreferences {
    fn default() -> Self {
        Self::fixed_defaults()
    }
}

#[derive(Debug, Clone, Default, PartialEq)]
pub struct DrawingOwner {
    pub active_type: u8,
    pub preferences: DrawingPreferences,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum EditField {
    ParameterUnit,
    ResultUnit,
    ParameterName,
    ResultName,
    LeftLimit,
    RightLimit,
    Subdivisions,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    TextChanged(EditField, String),
    TypeSelected(DrawingType),
    Accept,
    Cancel,
    ResetDefaults,
    Help,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum TypeEventState {
    Suppressed,
    Enabled,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum LimitState {
    Disabled,
    Enabled,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum NumericValidationState {
    Ready,
    ErrorPending,
}

#[derive(Debug, Clone, PartialEq, Default)]
struct Controls {
    selected_type: Option<DrawingType>,
    parameter_unit: String,
    result_unit: String,
    parameter_name: String,
    result_name: String,
    left_limit: String,
    right_limit: String,
    subdivisions: String,
}

#[derive(Debug)]
pub struct Window {
    owner: DrawingOwner,
    staging: DrawingPreferences,
    controls: Controls,
    type_event_state: TypeEventState,
    limit_state: LimitState,
    numeric_validation_state: NumericValidationState,
    first_error: Option<String>,
    accepted: bool,
}

impl Default for Window {
    fn default() -> Self {
        Self::new(DrawingOwner::default())
    }
}

impl Window {
    #[must_use]
    pub fn new(owner: DrawingOwner) -> Self {
        let staging = owner.preferences.clone();
        let mut window = Self {
            owner,
            staging,
            controls: Controls::default(),
            type_event_state: TypeEventState::Suppressed,
            limit_state: LimitState::Enabled,
            numeric_validation_state: NumericValidationState::Ready,
            first_error: None,
            accepted: false,
        };
        window.suppress_type_events_during_initialization();
        window.refresh_controls_from_staging();
        window.enable_type_events_on_show();
        window
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::TextChanged(field, value) => self.set_control_text(field, value),
            Message::TypeSelected(drawing_type) => self.select_drawing_type(drawing_type),
            Message::Accept => self.validate_and_commit(),
            Message::Cancel => self.cancel(),
            Message::ResetDefaults => self.reset_to_fixed_defaults(),
            Message::Help => {}
        }
    }

    fn set_control_text(&mut self, field: EditField, value: String) {
        match field {
            EditField::ParameterUnit => self.controls.parameter_unit = value,
            EditField::ResultUnit => self.controls.result_unit = value,
            EditField::ParameterName => self.controls.parameter_name = value,
            EditField::ResultName => self.controls.result_name = value,
            EditField::LeftLimit => self.controls.left_limit = value,
            EditField::RightLimit => self.controls.right_limit = value,
            EditField::Subdivisions => self.controls.subdivisions = value,
        }
    }

    /// Applies fixed drawing defaults and immediately synchronizes the live
    /// owner type. This ports Ghidra function `FUN_017e2560` at `0x017E2560`.
    fn apply_fixed_defaults_and_synchronize_live_type(&mut self) {
        let retained_settings = std::mem::take(&mut self.staging.retained_settings);
        self.staging = DrawingPreferences::fixed_defaults();
        self.staging.retained_settings = retained_settings;
        self.owner.active_type = self.staging.drawing_type;
    }

    /// Maps a visible type index to its internal value. This ports Ghidra
    /// function `FUN_017eb400` at `0x017EB400`.
    #[must_use]
    pub const fn map_drawing_type_index(index: i32) -> i32 {
        if index > 3 { index + 1 } else { index }
    }

    /// Refreshes all identified dialog controls from staging. This ports Ghidra
    /// function `FUN_017eb410` at `0x017EB410`.
    pub fn refresh_controls_from_staging(&mut self) {
        self.controls.selected_type = DrawingType::from_internal_value(self.staging.drawing_type);
        self.controls.left_limit = self.staging.left_limit.to_string();
        self.controls.right_limit = self.staging.right_limit.to_string();
        self.controls
            .parameter_unit
            .clone_from(&self.staging.parameter_unit);
        self.controls
            .result_unit
            .clone_from(&self.staging.result_unit);
        self.controls
            .parameter_name
            .clone_from(&self.staging.parameter_name);
        self.controls
            .result_name
            .clone_from(&self.staging.result_name);
        self.controls.subdivisions = self.staging.subdivisions.to_string();
    }

    /// Loads one fixed control preset without changing staging or the owner.
    /// This ports Ghidra function `FUN_017eb590` at `0x017EB590`.
    pub fn load_type_preset(&mut self, internal_type: i32) {
        match internal_type {
            0 | 1 => {
                "0".clone_into(&mut self.controls.left_limit);
                "0.00002".clone_into(&mut self.controls.right_limit);
                "s".clone_into(&mut self.controls.parameter_unit);
                "V".clone_into(&mut self.controls.result_unit);
                "t".clone_into(&mut self.controls.parameter_name);
                "Out".clone_into(&mut self.controls.result_name);
                "100".clone_into(&mut self.controls.subdivisions);
            }
            2 | 3 | 5 => {
                "10000".clone_into(&mut self.controls.left_limit);
                "1000000".clone_into(&mut self.controls.right_limit);
                "Hz".clone_into(&mut self.controls.parameter_unit);
                "dB|deg".clone_into(&mut self.controls.result_unit);
                "s".clone_into(&mut self.controls.parameter_name);
                "Out".clone_into(&mut self.controls.result_name);
                "100".clone_into(&mut self.controls.subdivisions);
            }
            _ => {}
        }
    }

    /// Suppresses type events while controls receive stored values. This ports
    /// Ghidra function `FUN_017eb770` at `0x017EB770`.
    pub const fn suppress_type_events_during_initialization(&mut self) {
        self.type_event_state = TypeEventState::Suppressed;
    }

    /// Enables type events and initializes only limit-editor availability.
    /// This ports Ghidra function `FUN_017eb780` at `0x017EB780`.
    pub fn enable_type_events_on_show(&mut self) {
        self.type_event_state = TypeEventState::Enabled;
        self.update_limit_availability();
    }

    /// Reads and validates controls, then copies all staged Rust state to the
    /// owner only when there is no numeric error. This ports Ghidra function
    /// `FUN_017eb7f0` at `0x017EB7F0`.
    pub fn validate_and_commit(&mut self) {
        let index = self
            .controls
            .selected_type
            .map_or(-1, DrawingType::radio_index);
        self.staging.drawing_type = Self::map_drawing_type_index(index).to_le_bytes()[0];

        match self.controls.left_limit.parse::<f64>() {
            Ok(value) => self.staging.left_limit = value,
            Err(_) => self.report_numeric_error("Left limit is not a valid number."),
        }
        match self.controls.right_limit.parse::<f64>() {
            Ok(value) => self.staging.right_limit = value,
            Err(_) => self.report_numeric_error("Right limit is not a valid number."),
        }

        self.staging.parameter_unit = truncate_fixed_text(&self.controls.parameter_unit);
        self.staging.result_unit = truncate_fixed_text(&self.controls.result_unit);
        self.staging.parameter_name = truncate_fixed_text(&self.controls.parameter_name);
        self.staging.result_name = truncate_fixed_text(&self.controls.result_name);

        match self.controls.subdivisions.parse::<i32>() {
            Ok(value) => self.staging.subdivisions = value,
            Err(_) => self.report_numeric_error("Interval subdivision is not a valid integer."),
        }

        if self.numeric_validation_state == NumericValidationState::ErrorPending {
            self.accepted = false;
        } else {
            self.owner.preferences.clone_from(&self.staging);
            self.accepted = true;
        }
    }

    /// Applies a user type selection only after the initialization guard is
    /// enabled. This ports Ghidra function `FUN_017eba20` at `0x017EBA20`.
    pub fn select_drawing_type(&mut self, drawing_type: DrawingType) {
        self.controls.selected_type = Some(drawing_type);
        if self.type_event_state == TypeEventState::Suppressed {
            return;
        }
        let internal_type = Self::map_drawing_type_index(drawing_type.radio_index());
        self.load_type_preset(internal_type);
        self.update_limit_availability();
    }

    /// Resets staging, synchronizes the live owner type, and refreshes the
    /// controls. This ports Ghidra function `FUN_017eba90` at `0x017EBA90`.
    pub fn reset_to_fixed_defaults(&mut self) {
        self.apply_fixed_defaults_and_synchronize_live_type();
        self.refresh_controls_from_staging();
        self.update_limit_availability();
    }

    /// Rejects one close request after a numeric error and always clears the
    /// guard for the next request. This ports Ghidra function `FUN_017ebac0` at
    /// `0x017EBAC0`.
    #[must_use]
    pub fn query_close(&mut self) -> bool {
        let can_close = self.numeric_validation_state == NumericValidationState::Ready;
        self.numeric_validation_state = NumericValidationState::Ready;
        if !can_close {
            self.first_error = None;
        }
        can_close
    }

    /// Keeps only the first numeric-edit error until close-query processing.
    /// This ports Ghidra function `FUN_017ebae0` at `0x017EBAE0`.
    pub fn report_numeric_error(&mut self, message: impl Into<String>) {
        if self.numeric_validation_state == NumericValidationState::ErrorPending {
            return;
        }
        self.numeric_validation_state = NumericValidationState::ErrorPending;
        self.first_error = Some(message.into());
        self.accepted = false;
    }

    fn update_limit_availability(&mut self) {
        let internal_type = self.controls.selected_type.map_or(-1, |drawing_type| {
            Self::map_drawing_type_index(drawing_type.radio_index())
        });
        self.limit_state = if internal_type == i32::from(DrawingType::Fourier.internal_value()) {
            LimitState::Disabled
        } else {
            LimitState::Enabled
        };
    }

    fn cancel(&mut self) {
        self.accepted = false;
        if !self.query_close() {
            return;
        }
        self.staging.clone_from(&self.owner.preferences);
        self.refresh_controls_from_staging();
        self.update_limit_availability();
    }

    #[cfg(test)]
    #[must_use]
    pub const fn owner(&self) -> &DrawingOwner {
        &self.owner
    }

    #[cfg(test)]
    #[must_use]
    pub const fn staging(&self) -> &DrawingPreferences {
        &self.staging
    }

    #[cfg(test)]
    #[must_use]
    pub const fn accepted(&self) -> bool {
        self.accepted
    }

    #[cfg(test)]
    #[must_use]
    pub fn first_error(&self) -> Option<&str> {
        self.first_error.as_deref()
    }

    #[cfg(test)]
    #[must_use]
    pub fn limits_enabled(&self) -> bool {
        self.limit_state == LimitState::Enabled
    }

    /// Builds the `iced` adapter for recovered Drawing Preferences state.
    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let menu = window_shell::empty_menu();
        let toolbar: Element<'_, Message> = container(
            row![
                button("OK").on_press(Message::Accept),
                button("Cancel").on_press(Message::Cancel),
                button("Set Default").on_press(Message::ResetDefaults),
                button("Help").on_press(Message::Help),
            ]
            .spacing(4),
        )
        .padding([3, 6])
        .width(Length::Fill)
        .into();

        let left_limit = text_input("", &self.controls.left_limit);
        let left_limit = if self.limit_state == LimitState::Enabled {
            left_limit.on_input(|value| Message::TextChanged(EditField::LeftLimit, value))
        } else {
            left_limit
        };
        let right_limit = text_input("", &self.controls.right_limit);
        let right_limit = if self.limit_state == LimitState::Enabled {
            right_limit.on_input(|value| Message::TextChanged(EditField::RightLimit, value))
        } else {
            right_limit
        };

        let body: Element<'_, Message> = container(scrollable(
            column![
                field_row(
                    "Unit of parameter",
                    text_input("", &self.controls.parameter_unit).on_input(|value| {
                        Message::TextChanged(EditField::ParameterUnit, value)
                    })
                ),
                field_row(
                    "Unit of result",
                    text_input("", &self.controls.result_unit)
                        .on_input(|value| { Message::TextChanged(EditField::ResultUnit, value) })
                ),
                field_row(
                    "Name of parameter",
                    text_input("", &self.controls.parameter_name).on_input(|value| {
                        Message::TextChanged(EditField::ParameterName, value)
                    })
                ),
                field_row(
                    "Name of result",
                    text_input("", &self.controls.result_name)
                        .on_input(|value| { Message::TextChanged(EditField::ResultName, value) })
                ),
                field_row("Left limit", left_limit),
                field_row("Right limit", right_limit),
                field_row(
                    "Interval subdivision",
                    text_input("", &self.controls.subdivisions)
                        .on_input(|value| { Message::TextChanged(EditField::Subdivisions, value) })
                ),
                row![
                    text("Type").width(Length::FillPortion(2)),
                    pick_list(
                        DrawingType::ALL,
                        self.controls.selected_type,
                        Message::TypeSelected
                    )
                    .width(Length::FillPortion(3)),
                ]
                .spacing(8)
                .align_y(Alignment::Center),
                text(self.first_error.as_deref().unwrap_or_default()),
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

fn truncate_fixed_text(value: &str) -> String {
    value.chars().take(MAX_FIXED_TEXT_CHARACTERS).collect()
}

fn field_row<'a>(
    label: &'a str,
    input: iced::widget::TextInput<'a, Message>,
) -> Element<'a, Message> {
    row![
        text(label).width(Length::FillPortion(2)),
        input.width(Length::FillPortion(3)),
    ]
    .spacing(8)
    .align_y(Alignment::Center)
    .into()
}

#[cfg(test)]
mod tests {
    use super::*;

    fn custom_owner() -> DrawingOwner {
        DrawingOwner {
            active_type: DrawingType::Bode.internal_value(),
            preferences: DrawingPreferences {
                drawing_type: DrawingType::Bode.internal_value(),
                parameter_unit: "custom x".to_owned(),
                result_unit: "custom y".to_owned(),
                parameter_name: "input".to_owned(),
                result_name: "output".to_owned(),
                left_limit: 12.5,
                right_limit: 91.0,
                subdivisions: 77,
                retained_settings: vec![1, 2, 3],
            },
        }
    }

    fn assert_float_equal(actual: f64, expected: f64) {
        assert!((actual - expected).abs() < f64::EPSILON);
    }

    #[test]
    fn visible_type_indices_skip_internal_type_four() {
        assert_eq!(Window::map_drawing_type_index(0), 0);
        assert_eq!(Window::map_drawing_type_index(3), 3);
        assert_eq!(Window::map_drawing_type_index(4), 5);
        assert_eq!(Window::map_drawing_type_index(8), 9);
    }

    #[test]
    fn control_refresh_preserves_saved_values_during_initialization() {
        let window = Window::new(custom_owner());
        assert_eq!(window.controls.selected_type, Some(DrawingType::Bode));
        assert_eq!(window.controls.left_limit, "12.5");
        assert_eq!(window.controls.parameter_unit, "custom x");
        assert_eq!(window.controls.subdivisions, "77");
        assert!(window.limits_enabled());
    }

    #[test]
    fn guarded_type_event_is_a_noop_until_form_show() {
        let mut window = Window::new(custom_owner());
        window.suppress_type_events_during_initialization();
        window.select_drawing_type(DrawingType::Fourier);
        assert_eq!(window.controls.left_limit, "12.5");

        window.enable_type_events_on_show();
        assert!(!window.limits_enabled());
        assert_eq!(window.controls.left_limit, "12.5");
    }

    #[test]
    fn type_selection_loads_the_correct_preset_without_changing_staging() {
        let mut window = Window::new(custom_owner());
        let original_staging = window.staging().clone();
        window.select_drawing_type(DrawingType::Fourier);
        assert_eq!(window.controls.left_limit, "10000");
        assert_eq!(window.controls.right_limit, "1000000");
        assert_eq!(window.controls.result_unit, "dB|deg");
        assert!(!window.limits_enabled());
        assert_eq!(window.staging(), &original_staging);

        let controls = window.controls.clone();
        window.load_type_preset(4);
        assert_eq!(window.controls, controls);
    }

    #[test]
    fn set_default_updates_live_type_but_keeps_owner_preferences_staged() {
        let owner = custom_owner();
        let original_preferences = owner.preferences.clone();
        let mut window = Window::new(owner);
        window.reset_to_fixed_defaults();

        assert_eq!(window.owner().active_type, 0);
        assert_eq!(window.owner().preferences, original_preferences);
        assert_float_equal(window.staging().left_limit, 0.0);
        assert_float_equal(window.staging().right_limit, 0.000_02);
        assert_eq!(window.staging().retained_settings, vec![1, 2, 3]);
        assert_eq!(window.controls.parameter_name, "t");
    }

    #[test]
    fn valid_ok_commits_controls_and_truncates_fixed_text_fields() {
        let mut window = Window::new(custom_owner());
        window.select_drawing_type(DrawingType::Fourier);
        window.controls.parameter_unit = "x".repeat(45);
        window.validate_and_commit();

        assert!(window.accepted());
        assert_eq!(window.owner().preferences.drawing_type, 5);
        assert_float_equal(window.owner().preferences.left_limit, 10_000.0);
        assert_float_equal(window.owner().preferences.right_limit, 1_000_000.0);
        assert_eq!(
            window.owner().preferences.parameter_unit.chars().count(),
            40
        );
        assert_eq!(window.owner().preferences.retained_settings, vec![1, 2, 3]);
    }

    #[test]
    fn numeric_errors_keep_the_first_message_and_veto_one_close() {
        let original = custom_owner();
        let mut window = Window::new(original.clone());
        window.controls.left_limit = "not a number".to_owned();
        window.controls.right_limit = "also invalid".to_owned();
        window.controls.subdivisions = "invalid".to_owned();
        window.validate_and_commit();

        assert!(!window.accepted());
        assert_eq!(window.owner().preferences, original.preferences);
        assert_eq!(
            window.first_error(),
            Some("Left limit is not a valid number.")
        );
        assert!(!window.query_close());
        assert!(window.query_close());
    }

    #[test]
    fn cancel_after_default_does_not_rollback_the_live_type_side_effect() {
        let mut owner = custom_owner();
        owner.active_type = DrawingType::Fourier.internal_value();
        let original_preferences = owner.preferences.clone();
        let mut window = Window::new(owner);
        window.reset_to_fixed_defaults();
        window.cancel();

        assert_eq!(window.owner().active_type, 0);
        assert_eq!(window.owner().preferences, original_preferences);
        assert_eq!(window.staging(), &original_preferences);
    }
}
