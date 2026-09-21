//! The Analysis Mode Selection dialog, as `Analysis > Mode...` opens it.
//!
//! The mode is chosen at the top and the page below follows it: each mode but
//! `Single` brings its own settings, and `Single` brings none. The resource
//! names four pages and shows whichever the chosen mode calls for, which is
//! what the page control does here.

use iced::widget::{button, checkbox, column, container, radio, row, text, text_input};
use iced::{Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "Analysis Mode Selection";
pub const SCREENSHOT: &str = "screenshots/Analysis_Mode_Selection.png";
pub const FORM_RESOURCE: &str = "AnalModeDlg";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01155200");
const STATUS: &str = "Analysis mode";

/// What the run will vary, which the resource calls the current mode.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum Mode {
    #[default]
    Single,
    TemperatureStepping,
    ParameterStepping,
    WorstCase,
    MonteCarlo,
}

impl Mode {
    /// The five the resource lists, in the order it lists them.
    pub const ALL: [Self; 5] = [
        Self::Single,
        Self::TemperatureStepping,
        Self::ParameterStepping,
        Self::WorstCase,
        Self::MonteCarlo,
    ];

    #[must_use]
    pub const fn caption(self) -> &'static str {
        match self {
            Self::Single => "Single",
            Self::TemperatureStepping => "Temperature stepping",
            Self::ParameterStepping => "Parameter stepping",
            Self::WorstCase => "Worst Case",
            Self::MonteCarlo => "Monte Carlo",
        }
    }
}

/// How a temperature sweep steps, which the resource calls the sweep type.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum SweepType {
    #[default]
    Linear,
    Logarithmic,
    List,
}

impl SweepType {
    pub const ALL: [Self; 3] = [Self::Linear, Self::Logarithmic, Self::List];

    #[must_use]
    pub const fn caption(self) -> &'static str {
        match self {
            Self::Linear => "Linear",
            Self::Logarithmic => "Logarithmic",
            Self::List => "List",
        }
    }
}

/// How parameter stepping combines the parameters it steps.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum Stepping {
    #[default]
    Combinational,
    Parallel,
}

/// How the worst case is looked for.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum WorstCaseMethod {
    #[default]
    Stochastic,
    Analytic,
}

impl WorstCaseMethod {
    pub const ALL: [Self; 2] = [Self::Stochastic, Self::Analytic];

    #[must_use]
    pub const fn caption(self) -> &'static str {
        match self {
            Self::Stochastic => "Stochastic",
            Self::Analytic => "Analytic",
        }
    }
}

#[allow(clippy::struct_excessive_bools)]
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Window {
    mode: Mode,
    temperature_start: String,
    temperature_end: String,
    temperature_cases: String,
    temperature_separate_views: bool,
    sweep_type: SweepType,
    stepping: Stepping,
    parameter_separate_views: bool,
    worst_case_cases: String,
    worst_case_draw_nominal: bool,
    worst_case_method: WorstCaseMethod,
    monte_carlo_population: String,
    monte_carlo_cases: String,
    monte_carlo_draw_nominal: bool,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            mode: Mode::default(),
            temperature_start: String::new(),
            temperature_end: String::new(),
            temperature_cases: String::new(),
            temperature_separate_views: false,
            sweep_type: SweepType::default(),
            // The resource starts the pair on combinational stepping.
            stepping: Stepping::Combinational,
            parameter_separate_views: false,
            worst_case_cases: String::new(),
            worst_case_draw_nominal: false,
            worst_case_method: WorstCaseMethod::default(),
            monte_carlo_population: String::new(),
            monte_carlo_cases: String::new(),
            monte_carlo_draw_nominal: false,
        }
    }
}

#[derive(Debug, Clone)]
pub enum Message {
    ModeSelected(Mode),
    TemperatureStartChanged(String),
    TemperatureEndChanged(String),
    TemperatureCasesChanged(String),
    TemperatureSeparateViewsToggled(bool),
    SweepTypeSelected(SweepType),
    SteppingSelected(Stepping),
    ParameterSeparateViewsToggled(bool),
    WorstCaseCasesChanged(String),
    WorstCaseDrawNominalToggled(bool),
    WorstCaseMethodSelected(WorstCaseMethod),
    MonteCarloPopulationChanged(String),
    MonteCarloCasesChanged(String),
    MonteCarloDrawNominalToggled(bool),
    EditListPressed,
    Accepted,
    Cancelled,
    HelpRequested,
}

impl Window {
    #[must_use]
    pub const fn mode(&self) -> Mode {
        self.mode
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::ModeSelected(mode) => self.mode = mode,
            Message::TemperatureStartChanged(value) => self.temperature_start = value,
            Message::TemperatureEndChanged(value) => self.temperature_end = value,
            Message::TemperatureCasesChanged(value) => self.temperature_cases = value,
            Message::TemperatureSeparateViewsToggled(on) => self.temperature_separate_views = on,
            Message::SweepTypeSelected(kind) => self.sweep_type = kind,
            Message::SteppingSelected(stepping) => self.stepping = stepping,
            Message::ParameterSeparateViewsToggled(on) => self.parameter_separate_views = on,
            Message::WorstCaseCasesChanged(value) => self.worst_case_cases = value,
            Message::WorstCaseDrawNominalToggled(on) => self.worst_case_draw_nominal = on,
            Message::WorstCaseMethodSelected(method) => self.worst_case_method = method,
            Message::MonteCarloPopulationChanged(value) => self.monte_carlo_population = value,
            Message::MonteCarloCasesChanged(value) => self.monte_carlo_cases = value,
            Message::MonteCarloDrawNominalToggled(on) => self.monte_carlo_draw_nominal = on,
            Message::EditListPressed
            | Message::Accepted
            | Message::Cancelled
            | Message::HelpRequested => {}
        }
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection.
    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let body = column![
            row![
                group("Current Mode", self.mode_choices()),
                column![
                    button("OK").on_press(Message::Accepted),
                    button("Cancel").on_press(Message::Cancelled),
                    button("Help").on_press(Message::HelpRequested),
                ]
                .spacing(4),
            ]
            .spacing(8),
            self.settings_page(),
        ]
        .spacing(6)
        .padding(8)
        .height(Length::Fill);

        window_shell::frame(
            TITLE,
            window_shell::empty_menu(),
            window_shell::empty_menu(),
            body.into(),
            STATUS,
        )
    }

    fn mode_choices(&self) -> Element<'_, Message> {
        let mut choices = column![].spacing(2);
        for mode in Mode::ALL {
            choices = choices.push(radio(
                mode.caption(),
                mode,
                Some(self.mode),
                Message::ModeSelected,
            ));
        }
        choices.into()
    }

    /// The page the chosen mode calls for. `Single` calls for none.
    fn settings_page(&self) -> Element<'_, Message> {
        match self.mode {
            Mode::Single => column![].height(Length::Fill).into(),
            Mode::TemperatureStepping => self.temperature_page(),
            Mode::ParameterStepping => self.parameter_page(),
            Mode::WorstCase => self.worst_case_page(),
            Mode::MonteCarlo => self.monte_carlo_page(),
        }
    }

    fn temperature_page(&self) -> Element<'_, Message> {
        let mut sweep = column![].spacing(2);
        for kind in SweepType::ALL {
            sweep = sweep.push(radio(
                kind.caption(),
                kind,
                Some(self.sweep_type),
                Message::SweepTypeSelected,
            ));
        }

        group(
            "Temperature stepping",
            row![
                column![
                    field(
                        "Start temperature",
                        &self.temperature_start,
                        Message::TemperatureStartChanged
                    ),
                    field(
                        "End temperature",
                        &self.temperature_end,
                        Message::TemperatureEndChanged
                    ),
                    field(
                        "Number of cases",
                        &self.temperature_cases,
                        Message::TemperatureCasesChanged
                    ),
                    checkbox("Separate cases in diagram", self.temperature_separate_views)
                        .on_toggle(Message::TemperatureSeparateViewsToggled),
                ]
                .spacing(4),
                column![
                    group("Sweep type", sweep.into()),
                    button("Set List...").on_press(Message::EditListPressed),
                ]
                .spacing(4),
            ]
            .spacing(12)
            .into(),
        )
    }

    fn parameter_page(&self) -> Element<'_, Message> {
        group(
            "Parameter stepping",
            row![
                column![
                    radio(
                        "Combinational stepping",
                        Stepping::Combinational,
                        Some(self.stepping),
                        Message::SteppingSelected
                    ),
                    radio(
                        "Parallel stepping",
                        Stepping::Parallel,
                        Some(self.stepping),
                        Message::SteppingSelected
                    ),
                ]
                .spacing(4),
                checkbox("Separate cases in diagram", self.parameter_separate_views)
                    .on_toggle(Message::ParameterSeparateViewsToggled),
            ]
            .spacing(12)
            .into(),
        )
    }

    fn worst_case_page(&self) -> Element<'_, Message> {
        let mut method = column![].spacing(2);
        for kind in WorstCaseMethod::ALL {
            method = method.push(radio(
                kind.caption(),
                kind,
                Some(self.worst_case_method),
                Message::WorstCaseMethodSelected,
            ));
        }

        group(
            "Worst Case",
            row![
                column![
                    field(
                        "Number of cases",
                        &self.worst_case_cases,
                        Message::WorstCaseCasesChanged
                    ),
                    checkbox("Draw nominal value", self.worst_case_draw_nominal)
                        .on_toggle(Message::WorstCaseDrawNominalToggled),
                ]
                .spacing(4),
                group("Method", method.into()),
            ]
            .spacing(12)
            .into(),
        )
    }

    fn monte_carlo_page(&self) -> Element<'_, Message> {
        group(
            "Monte Carlo",
            row![
                column![
                    field(
                        "Percent of population",
                        &self.monte_carlo_population,
                        Message::MonteCarloPopulationChanged
                    ),
                    field(
                        "Number of cases",
                        &self.monte_carlo_cases,
                        Message::MonteCarloCasesChanged
                    ),
                ]
                .spacing(4),
                checkbox("Draw nominal values", self.monte_carlo_draw_nominal)
                    .on_toggle(Message::MonteCarloDrawNominalToggled),
            ]
            .spacing(12)
            .into(),
        )
    }
}

/// A labelled box, which is what the resource draws its groups as.
fn group<'a>(caption: &'a str, inside: Element<'a, Message>) -> Element<'a, Message> {
    container(column![text(caption), inside].spacing(4))
        .padding(8)
        .into()
}

/// A label beside the value it names.
fn field<'a>(
    caption: &'a str,
    value: &'a str,
    on_input: impl Fn(String) -> Message + 'a,
) -> Element<'a, Message> {
    row![
        text(caption).width(Length::Fixed(140.0)),
        text_input("", value)
            .on_input(on_input)
            .width(Length::Fixed(90.0)),
    ]
    .spacing(8)
    .into()
}

#[cfg(test)]
mod tests {
    use super::{Message, Mode, Stepping, SweepType, Window, WorstCaseMethod};

    #[test]
    fn the_dialog_opens_on_a_single_run() {
        assert_eq!(Window::default().mode(), Mode::Single);
    }

    #[test]
    fn the_resource_lists_five_modes_in_this_order() {
        let captions: Vec<&str> = Mode::ALL.iter().map(|mode| mode.caption()).collect();
        assert_eq!(
            captions,
            [
                "Single",
                "Temperature stepping",
                "Parameter stepping",
                "Worst Case",
                "Monte Carlo",
            ]
        );
    }

    #[test]
    fn choosing_a_mode_keeps_it() {
        let mut window = Window::default();
        window.update(Message::ModeSelected(Mode::MonteCarlo));
        assert_eq!(window.mode(), Mode::MonteCarlo);
    }

    #[test]
    fn the_settings_keep_what_is_typed_into_them() {
        let mut window = Window::default();
        window.update(Message::TemperatureStartChanged("-40".to_owned()));
        window.update(Message::TemperatureEndChanged("125".to_owned()));
        window.update(Message::TemperatureCasesChanged("10".to_owned()));
        window.update(Message::SweepTypeSelected(SweepType::Logarithmic));
        window.update(Message::TemperatureSeparateViewsToggled(true));

        assert_eq!(window.temperature_start, "-40");
        assert_eq!(window.temperature_end, "125");
        assert_eq!(window.temperature_cases, "10");
        assert_eq!(window.sweep_type, SweepType::Logarithmic);
        assert!(window.temperature_separate_views);
    }

    #[test]
    fn parameter_stepping_starts_combinational_as_the_resource_marks_it() {
        let mut window = Window::default();
        assert_eq!(window.stepping, Stepping::Combinational);

        window.update(Message::SteppingSelected(Stepping::Parallel));
        assert_eq!(window.stepping, Stepping::Parallel);
    }

    #[test]
    fn the_worst_case_is_looked_for_stochastically_until_told_otherwise() {
        let mut window = Window::default();
        assert_eq!(window.worst_case_method, WorstCaseMethod::Stochastic);

        window.update(Message::WorstCaseMethodSelected(WorstCaseMethod::Analytic));
        assert_eq!(window.worst_case_method, WorstCaseMethod::Analytic);
    }

    #[test]
    fn the_commands_leave_the_settings_alone() {
        let mut window = Window::default();
        window.update(Message::MonteCarloCasesChanged("50".to_owned()));
        let before = window.clone();

        for message in [
            Message::EditListPressed,
            Message::Accepted,
            Message::Cancelled,
            Message::HelpRequested,
        ] {
            window.update(message);
        }

        assert_eq!(window, before);
    }
}
