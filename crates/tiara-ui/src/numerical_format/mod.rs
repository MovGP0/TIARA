//! Interpreter numerical-format dialog state.
//!
//! The Rust standard library supplies typed records, parsing, and the one-use
//! validation guard. The existing `iced` dependency supplies dialog messages
//! and controls. A validation crate was evaluated and rejected because the
//! recovered boundary has one application rule and deliberate partial commits
//! that a generic derive validator would hide.

use std::fmt;

use iced::widget::{
    button, checkbox, column, container, pick_list, row, scrollable, text, text_input,
};
use iced::{Alignment, Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "Numerical format & Precisions";
pub const SCREENSHOT: &str = "screenshots/Numerical_format_and_Precisions_Window.png";
pub const FORM_RESOURCE: &str = "I_NumFDlg";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01476760");
const STATUS: &str = "Numerical display settings";
const HELP_CONTEXT: u32 = 0x139e;
const MAXIMUM_DISPLAYED_PRECISION: i32 = 12;

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum NumericalNotation {
    #[default]
    Scaled,
    Fixed,
    Exponential,
}

impl NumericalNotation {
    const ALL: [Self; 3] = [Self::Scaled, Self::Fixed, Self::Exponential];
}

impl fmt::Display for NumericalNotation {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::Scaled => "SCL",
            Self::Fixed => "FIX",
            Self::Exponential => "EXP",
        })
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum AngleUnit {
    Degrees,
    #[default]
    Radians,
}

impl AngleUnit {
    const ALL: [Self; 2] = [Self::Degrees, Self::Radians];
}

impl fmt::Display for AngleUnit {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::Degrees => "DEG",
            Self::Radians => "RAD",
        })
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum ComplexNotation {
    #[default]
    Algebraic,
    Polar,
}

impl ComplexNotation {
    const ALL: [Self; 2] = [Self::Algebraic, Self::Polar];
}

impl fmt::Display for ComplexNotation {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::Algebraic => "ALGEBRIC",
            Self::Polar => "POLAR",
        })
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum ImaginarySymbol {
    I,
    #[default]
    J,
}

impl ImaginarySymbol {
    const ALL: [Self; 2] = [Self::I, Self::J];
}

impl fmt::Display for ImaginarySymbol {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::I => "i",
            Self::J => "j",
        })
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct NumericalSettings {
    pub notation: NumericalNotation,
    pub angle: AngleUnit,
    pub complex: ComplexNotation,
    pub imaginary: ImaginarySymbol,
    pub displayed_precision: i32,
}

impl Default for NumericalSettings {
    fn default() -> Self {
        Self {
            notation: NumericalNotation::Scaled,
            angle: AngleUnit::Radians,
            complex: ComplexNotation::Algebraic,
            imaginary: ImaginarySymbol::J,
            displayed_precision: 4,
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct MathSettings {
    pub differentiation_step: f64,
    pub integration_subdivisions: i32,
    pub internal_step: f64,
    pub internal_count: i32,
    pub internal_flag: u8,
}

impl Default for MathSettings {
    fn default() -> Self {
        Self {
            differentiation_step: 0.01,
            integration_subdivisions: 100,
            internal_step: 0.000_02,
            internal_count: 100,
            internal_flag: 0,
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Default)]
pub struct InterpreterNumericalSettings {
    pub numerical: NumericalSettings,
    pub math: MathSettings,
}

#[derive(Debug, Clone, PartialEq)]
struct Controls {
    numerical_notation: NumericalNotation,
    angle: AngleUnit,
    complex: ComplexNotation,
    imaginary: ImaginarySymbol,
    displayed_precision: String,
    differentiation_step: String,
    integration_subdivisions: String,
    allow_component_values: bool,
}

impl Controls {
    fn from_settings(settings: InterpreterNumericalSettings, permission: bool) -> Self {
        Self {
            numerical_notation: settings.numerical.notation,
            angle: settings.numerical.angle,
            complex: settings.numerical.complex,
            imaginary: settings.numerical.imaginary,
            displayed_precision: settings.numerical.displayed_precision.to_string(),
            differentiation_step: settings.math.differentiation_step.to_string(),
            integration_subdivisions: settings.math.integration_subdivisions.to_string(),
            allow_component_values: permission,
        }
    }
}

#[derive(Debug, Clone)]
pub enum Message {
    NumericalNotationSelected(NumericalNotation),
    AngleSelected(AngleUnit),
    ComplexSelected(ComplexNotation),
    ImaginarySelected(ImaginarySymbol),
    DisplayedPrecisionChanged(String),
    DifferentiationStepChanged(String),
    IntegrationSubdivisionsChanged(String),
    AllowComponentValuesChanged(bool),
    Accept,
    SetDefault,
    Cancel,
}

#[derive(Debug)]
pub struct Window {
    target: Option<InterpreterNumericalSettings>,
    staging: InterpreterNumericalSettings,
    controls: Controls,
    component_value_permission: bool,
    validation_error: bool,
    first_error: Option<String>,
    close_requested: bool,
    help_context: u32,
}

impl Default for Window {
    fn default() -> Self {
        let staging = InterpreterNumericalSettings::default();
        Self {
            target: None,
            staging,
            controls: Controls::from_settings(staging, false),
            component_value_permission: false,
            validation_error: false,
            first_error: None,
            close_requested: false,
            help_context: 0,
        }
    }
}

impl Window {
    pub fn update(&mut self, message: Message) {
        match message {
            Message::NumericalNotationSelected(value) => {
                self.controls.numerical_notation = value;
            }
            Message::AngleSelected(value) => self.controls.angle = value,
            Message::ComplexSelected(value) => self.controls.complex = value,
            Message::ImaginarySelected(value) => self.controls.imaginary = value,
            Message::DisplayedPrecisionChanged(value) => {
                self.controls.displayed_precision = value;
            }
            Message::DifferentiationStepChanged(value) => {
                self.controls.differentiation_step = value;
            }
            Message::IntegrationSubdivisionsChanged(value) => {
                self.controls.integration_subdivisions = value;
            }
            Message::AllowComponentValuesChanged(value) => {
                self.controls.allow_component_values = value;
            }
            Message::Accept => {
                let _ = self.ok_click();
                self.close_requested = true;
            }
            Message::SetDefault => self.set_defaults(),
            Message::Cancel => self.close_requested = true,
        }
    }

    /// Ports Ghidra function `FUN_01476690` at `0x01476690`.
    pub fn load_controls_from_staging(&mut self) {
        self.controls = Controls::from_settings(self.staging, self.component_value_permission);
        self.help_context = HELP_CONTEXT;
    }

    /// Ports Ghidra function `FUN_01476770` at `0x01476770`.
    ///
    /// This preserves the recovered partial-commit order. A parsed permission
    /// check is global before the precision limit, and the numerical record can
    /// be committed before a later math edit fails.
    pub fn ok_click(&mut self) -> bool {
        let Ok(displayed_precision) = self.controls.displayed_precision.parse::<i32>() else {
            self.report_first_error("Displayed precision is not a valid integer.");
            return false;
        };
        self.staging.numerical = NumericalSettings {
            notation: self.controls.numerical_notation,
            angle: self.controls.angle,
            complex: self.controls.complex,
            imaginary: self.controls.imaginary,
            displayed_precision,
        };
        self.component_value_permission = self.controls.allow_component_values;
        if displayed_precision > MAXIMUM_DISPLAYED_PRECISION {
            self.report_first_error("Displayed precision must not exceed 12.");
        }
        if !self.validation_error
            && let Some(target) = &mut self.target
        {
            target.numerical = self.staging.numerical;
        }

        let Ok(differentiation_step) = self.controls.differentiation_step.parse::<f64>() else {
            self.report_first_error("Differentiation step is not a valid number.");
            return false;
        };
        let Ok(integration_subdivisions) = self.controls.integration_subdivisions.parse::<i32>()
        else {
            self.report_first_error("Integration subdivision is not a valid integer.");
            return false;
        };
        self.staging.math.differentiation_step = differentiation_step;
        self.staging.math.integration_subdivisions = integration_subdivisions;
        if !self.validation_error
            && let Some(target) = &mut self.target
        {
            target.math = self.staging.math;
        }
        !self.validation_error
    }

    /// Ports Ghidra function `FUN_01476910` at `0x01476910`.
    pub fn set_defaults(&mut self) {
        self.staging = InterpreterNumericalSettings::default();
        self.load_controls_from_staging();
    }

    /// Ports Ghidra function `FUN_01476940` at `0x01476940`.
    pub const fn form_close_query(&mut self) -> bool {
        let can_close = !self.validation_error;
        self.validation_error = false;
        can_close
    }

    /// Ports Ghidra function `FUN_01476960` at `0x01476960`.
    pub fn report_first_error(&mut self, message: impl Into<String>) {
        if !self.validation_error {
            self.first_error = Some(message.into());
        }
        self.validation_error = true;
    }

    /// Ports Ghidra function `FUN_01476a00` at `0x01476A00`.
    pub fn initialize_from_interpreter(
        &mut self,
        target: InterpreterNumericalSettings,
        component_value_permission: bool,
    ) {
        self.target = Some(target);
        self.staging = target;
        self.component_value_permission = component_value_permission;
        self.close_requested = false;
        self.load_controls_from_staging();
    }

    #[must_use]
    pub const fn target(&self) -> Option<InterpreterNumericalSettings> {
        self.target
    }

    #[must_use]
    pub const fn staging(&self) -> InterpreterNumericalSettings {
        self.staging
    }

    #[must_use]
    pub const fn component_value_permission(&self) -> bool {
        self.component_value_permission
    }

    #[must_use]
    pub fn first_error(&self) -> Option<&str> {
        self.first_error.as_deref()
    }

    #[must_use]
    pub const fn validation_error(&self) -> bool {
        self.validation_error
    }

    #[must_use]
    pub const fn close_requested(&self) -> bool {
        self.close_requested
    }

    #[must_use]
    pub const fn help_context(&self) -> u32 {
        self.help_context
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection when available.
    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let body: Element<'_, Message> = container(scrollable(
            column![
                option_row(
                    "Numerical format",
                    NumericalNotation::ALL,
                    Some(self.controls.numerical_notation),
                    Message::NumericalNotationSelected,
                ),
                option_row(
                    "Angle",
                    AngleUnit::ALL,
                    Some(self.controls.angle),
                    Message::AngleSelected,
                ),
                option_row(
                    "Complex format",
                    ComplexNotation::ALL,
                    Some(self.controls.complex),
                    Message::ComplexSelected,
                ),
                option_row(
                    "Imaginary",
                    ImaginarySymbol::ALL,
                    Some(self.controls.imaginary),
                    Message::ImaginarySelected,
                ),
                checkbox(
                    "Enable modifying component values",
                    self.controls.allow_component_values,
                )
                .on_toggle(Message::AllowComponentValuesChanged),
                edit_row(
                    "Step (diff.)",
                    &self.controls.differentiation_step,
                    Message::DifferentiationStepChanged,
                ),
                edit_row(
                    "Interv. subdivision (integr.)",
                    &self.controls.integration_subdivisions,
                    Message::IntegrationSubdivisionsChanged,
                ),
                edit_row(
                    "Displayed precision",
                    &self.controls.displayed_precision,
                    Message::DisplayedPrecisionChanged,
                ),
                row![
                    button("Set Default").on_press(Message::SetDefault),
                    button("OK").on_press(Message::Accept),
                    button("Cancel").on_press(Message::Cancel),
                ]
                .spacing(8),
            ]
            .spacing(8),
        ))
        .padding(18)
        .width(Length::Fill)
        .height(Length::Fill)
        .into();

        let status = self.first_error.as_deref().unwrap_or(STATUS);
        window_shell::frame(
            TITLE,
            window_shell::empty_menu(),
            window_shell::empty_menu(),
            body,
            status,
        )
    }
}

fn option_row<'a, T>(
    label: &'a str,
    options: impl IntoIterator<Item = T>,
    selected: Option<T>,
    on_selected: impl Fn(T) -> Message + 'a,
) -> Element<'a, Message>
where
    T: ToString + PartialEq + Clone + 'a,
{
    row![
        text(label).width(Length::FillPortion(2)),
        pick_list(
            options.into_iter().collect::<Vec<_>>(),
            selected,
            on_selected,
        )
        .width(Length::FillPortion(3)),
    ]
    .spacing(8)
    .align_y(Alignment::Center)
    .into()
}

fn edit_row<'a>(
    label: &'a str,
    value: &'a str,
    on_input: impl Fn(String) -> Message + 'a,
) -> Element<'a, Message> {
    row![
        text(label).width(Length::FillPortion(2)),
        text_input("", value)
            .on_input(on_input)
            .width(Length::FillPortion(3)),
    ]
    .spacing(8)
    .align_y(Alignment::Center)
    .into()
}

#[cfg(test)]
mod tests {
    use super::{
        AngleUnit, ComplexNotation, ImaginarySymbol, InterpreterNumericalSettings, MathSettings,
        Message, NumericalNotation, NumericalSettings, Window,
    };

    fn custom_settings() -> InterpreterNumericalSettings {
        InterpreterNumericalSettings {
            numerical: NumericalSettings {
                notation: NumericalNotation::Fixed,
                angle: AngleUnit::Degrees,
                complex: ComplexNotation::Polar,
                imaginary: ImaginarySymbol::I,
                displayed_precision: 8,
            },
            math: MathSettings {
                differentiation_step: 0.5,
                integration_subdivisions: 40,
                internal_step: 0.25,
                internal_count: 20,
                internal_flag: 1,
            },
        }
    }

    #[test]
    fn initializer_copies_target_to_staging_and_controls() {
        let mut window = Window::default();
        let target = custom_settings();
        window.initialize_from_interpreter(target, true);

        assert_eq!(window.target(), Some(target));
        assert_eq!(window.staging(), target);
        assert!(window.component_value_permission());
        assert_eq!(window.help_context(), 0x139e);
    }

    #[test]
    fn defaults_replace_staging_but_not_target_or_global_permission() {
        let mut window = Window::default();
        let target = custom_settings();
        window.initialize_from_interpreter(target, true);
        window.report_first_error("existing error");
        window.update(Message::AllowComponentValuesChanged(false));

        window.set_defaults();

        assert_eq!(window.staging(), InterpreterNumericalSettings::default());
        assert_eq!(window.target(), Some(target));
        assert!(window.component_value_permission());
        assert!(window.validation_error());
    }

    #[test]
    fn valid_ok_commits_both_records_and_permission() {
        let mut window = Window::default();
        window.initialize_from_interpreter(InterpreterNumericalSettings::default(), false);
        window.update(Message::NumericalNotationSelected(
            NumericalNotation::Exponential,
        ));
        window.update(Message::DisplayedPrecisionChanged(String::from("10")));
        window.update(Message::DifferentiationStepChanged(String::from("0.125")));
        window.update(Message::IntegrationSubdivisionsChanged(String::from("64")));
        window.update(Message::AllowComponentValuesChanged(true));

        assert!(window.ok_click());

        let committed = window.target().expect("bound interpreter");
        assert_eq!(committed.numerical.notation, NumericalNotation::Exponential);
        assert_eq!(committed.numerical.displayed_precision, 10);
        assert!((committed.math.differentiation_step - 0.125).abs() <= f64::EPSILON);
        assert_eq!(committed.math.integration_subdivisions, 64);
        assert!(window.component_value_permission());
    }

    #[test]
    fn precision_limit_changes_global_permission_but_commits_no_record() {
        let initial = custom_settings();
        let mut window = Window::default();
        window.initialize_from_interpreter(initial, false);
        window.update(Message::DisplayedPrecisionChanged(String::from("13")));
        window.update(Message::AllowComponentValuesChanged(true));

        assert!(!window.ok_click());

        assert!(window.component_value_permission());
        assert_eq!(window.target(), Some(initial));
        assert_eq!(
            window.first_error(),
            Some("Displayed precision must not exceed 12.")
        );
        assert!(!window.form_close_query());
        assert!(window.form_close_query());
    }

    #[test]
    fn invalid_displayed_text_precedes_global_permission_write() {
        let mut window = Window::default();
        window.initialize_from_interpreter(custom_settings(), false);
        window.update(Message::DisplayedPrecisionChanged(String::from("bad")));
        window.update(Message::AllowComponentValuesChanged(true));

        assert!(!window.ok_click());

        assert!(!window.component_value_permission());
        assert_eq!(
            window.first_error(),
            Some("Displayed precision is not a valid integer.")
        );
    }

    #[test]
    fn late_math_error_keeps_the_early_numerical_commit() {
        let initial = custom_settings();
        let mut window = Window::default();
        window.initialize_from_interpreter(initial, false);
        window.update(Message::DisplayedPrecisionChanged(String::from("6")));
        window.update(Message::DifferentiationStepChanged(String::from("bad")));

        assert!(!window.ok_click());

        let committed = window.target().expect("bound interpreter");
        assert_eq!(committed.numerical.displayed_precision, 6);
        assert_eq!(committed.math, initial.math);
    }

    #[test]
    fn first_error_is_suppressed_until_close_query_clears_guard() {
        let mut window = Window::default();
        window.report_first_error("first");
        window.report_first_error("second");
        assert_eq!(window.first_error(), Some("first"));

        assert!(!window.form_close_query());
        window.report_first_error("third");

        assert_eq!(window.first_error(), Some("third"));
    }
}
