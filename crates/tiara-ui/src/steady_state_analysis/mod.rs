use std::fmt;
use std::num::{ParseFloatError, ParseIntError};

use iced::widget::{button, checkbox, column, pick_list, radio, row, text, text_input};
use iced::{Alignment, Element, Length, Task};

pub const TITLE: &str = "Steady State Analysis";
pub const FORM_RESOURCE: &str = "SteadyStateAnalDlg";
pub const SOLVER_OPTIONS_TITLE: &str = "Steady State Solver Options";
pub const SOLVER_OPTIONS_FORM_RESOURCE: &str = "SteadyStateOptionslDlg";
pub const HELP_CONTEXT: u32 = 0x498;

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum ToggleState {
    Enabled,
    #[default]
    Disabled,
}

impl ToggleState {
    const fn is_enabled(self) -> bool {
        matches!(self, Self::Enabled)
    }
}

impl From<bool> for ToggleState {
    fn from(value: bool) -> Self {
        if value { Self::Enabled } else { Self::Disabled }
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum TransientControl {
    #[default]
    CalculateOperatingPoint,
    UseInitialConditions,
    ZeroInitialValues,
}

impl TransientControl {
    const fn stored_value(self) -> u8 {
        match self {
            Self::CalculateOperatingPoint => 1,
            Self::UseInitialConditions => 2,
            Self::ZeroInitialValues => 0,
        }
    }
}

impl fmt::Display for TransientControl {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        let text = match self {
            Self::CalculateOperatingPoint => "Calculate operating point",
            Self::UseInitialConditions => "Use initial conditions",
            Self::ZeroInitialValues => "Zero initial values",
        };
        formatter.write_str(text)
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum IntegrationMethod {
    #[default]
    Trapezoidal,
    Gear,
    Other(u8),
}

impl IntegrationMethod {
    const fn stored_value(self) -> u8 {
        match self {
            Self::Trapezoidal => 1,
            Self::Gear => 2,
            Self::Other(value) => value,
        }
    }

    const fn from_stored(value: u8) -> Self {
        match value {
            1 => Self::Trapezoidal,
            2 => Self::Gear,
            value => Self::Other(value),
        }
    }
}

impl fmt::Display for IntegrationMethod {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::Trapezoidal => formatter.write_str("Trapezoidal"),
            Self::Gear => formatter.write_str("Gear"),
            Self::Other(value) => write!(formatter, "Method {value}"),
        }
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum SteadyStateMethod {
    #[default]
    Transient,
    FiniteDifferenceJacobian,
    BroydenUpdateJacobian,
    Other(u8),
}

impl SteadyStateMethod {
    const fn index(self) -> u8 {
        match self {
            Self::Transient => 0,
            Self::FiniteDifferenceJacobian => 1,
            Self::BroydenUpdateJacobian => 2,
            Self::Other(value) => value,
        }
    }

    const fn from_index(value: u8) -> Self {
        match value {
            0 => Self::Transient,
            1 => Self::FiniteDifferenceJacobian,
            2 => Self::BroydenUpdateJacobian,
            value => Self::Other(value),
        }
    }
}

impl fmt::Display for SteadyStateMethod {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        let text = match self {
            Self::Transient => "Transient",
            Self::FiniteDifferenceJacobian => "Finite-difference Jacobian",
            Self::BroydenUpdateJacobian => "Broyden update Jacobian",
            Self::Other(_) => return write!(formatter, "Method {}", self.index()),
        };
        formatter.write_str(text)
    }
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct AnalysisRecord {
    pub start_display: f64,
    pub transient_control: u8,
    pub draw_excitation: ToggleState,
    pub integration_method: u8,
}

impl Default for AnalysisRecord {
    fn default() -> Self {
        Self {
            start_display: 0.0,
            transient_control: 1,
            draw_excitation: ToggleState::Disabled,
            integration_method: 1,
        }
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq)]
pub struct SolverOptions {
    pub accuracy_fraction: f64,
    pub max_relative_increment_fraction: f64,
    pub max_absolute_voltage_increment: f64,
    pub max_absolute_current_increment: f64,
    pub capacitor_state_threshold: f64,
    pub inductor_state_threshold: f64,
    pub iteration_limit: i32,
}

#[derive(Debug, Clone, Copy, Default, PartialEq)]
pub struct SharedSettings {
    pub max_search_time: f64,
    pub final_check_time: f64,
    pub method_index: u8,
    pub final_accuracy_fraction: f64,
    pub solver_options: SolverOptions,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ValidationError {
    InvalidNumber(&'static str),
    InvalidInteger(&'static str),
    InvalidTimeRange,
}

impl fmt::Display for ValidationError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::InvalidNumber(field) => write!(formatter, "{field} must be a number."),
            Self::InvalidInteger(field) => write!(formatter, "{field} must be an integer."),
            Self::InvalidTimeRange => formatter.write_str(
                "Final checking time must be greater than max searching time, and max searching time must not be negative.",
            ),
        }
    }
}

impl std::error::Error for ValidationError {}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ApplyOutcome {
    Accepted,
    Rejected,
}

#[derive(Debug, Clone)]
pub enum Message {
    StartDisplayChanged(String),
    MaxSearchTimeChanged(String),
    FinalCheckTimeChanged(String),
    FinalAccuracyChanged(String),
    TransientControlChanged(TransientControl),
    DrawExcitationChanged(bool),
    IntegrationMethodChanged(IntegrationMethod),
    IntegrationOrderChanged(u8),
    SteadyStateMethodChanged(SteadyStateMethod),
    OpenSolverOptions,
    SolverOptions(SolverOptionsMessage),
    Accept,
    Cancel,
    Help,
}

#[derive(Debug, Clone)]
pub enum SolverOptionsMessage {
    AccuracyChanged(String),
    MaxRelativeIncrementChanged(String),
    MaxAbsoluteVoltageIncrementChanged(String),
    MaxAbsoluteCurrentIncrementChanged(String),
    CapacitorStateThresholdChanged(String),
    InductorStateThresholdChanged(String),
    IterationLimitChanged(String),
    Accept,
    Cancel,
    Help,
}

#[derive(Debug, Clone, PartialEq)]
struct AnalysisEdits {
    start_display: String,
    max_search_time: String,
    final_check_time: String,
    final_accuracy: String,
}

impl Default for AnalysisEdits {
    fn default() -> Self {
        Self {
            start_display: "0".to_owned(),
            max_search_time: "0".to_owned(),
            final_check_time: "1".to_owned(),
            final_accuracy: "1".to_owned(),
        }
    }
}

#[derive(Debug, Clone, PartialEq)]
struct SolverOptionEdits {
    accuracy: String,
    max_relative_increment: String,
    max_absolute_voltage_increment: String,
    max_absolute_current_increment: String,
    capacitor_state_threshold: String,
    inductor_state_threshold: String,
    iteration_limit: String,
}

impl From<SolverOptions> for SolverOptionEdits {
    fn from(options: SolverOptions) -> Self {
        Self {
            accuracy: (options.accuracy_fraction * 100.0).to_string(),
            max_relative_increment: (options.max_relative_increment_fraction * 100.0).to_string(),
            max_absolute_voltage_increment: options.max_absolute_voltage_increment.to_string(),
            max_absolute_current_increment: options.max_absolute_current_increment.to_string(),
            capacitor_state_threshold: options.capacitor_state_threshold.to_string(),
            inductor_state_threshold: options.inductor_state_threshold.to_string(),
            iteration_limit: options.iteration_limit.to_string(),
        }
    }
}

#[derive(Debug)]
pub struct SteadyStateAnalysisWindow {
    committed_record: AnalysisRecord,
    shared_settings: SharedSettings,
    edits: AnalysisEdits,
    transient_control: TransientControl,
    draw_excitation: ToggleState,
    integration_method: IntegrationMethod,
    steady_state_method: SteadyStateMethod,
    integration_orders: Vec<u8>,
    selected_order: Option<u8>,
    first_error: Option<ValidationError>,
    last_reported_error: Option<ValidationError>,
    solver_options_window: Option<SolverOptionsWindow>,
    help_context: u32,
    accepted: bool,
    cancelled: bool,
}

impl Default for SteadyStateAnalysisWindow {
    fn default() -> Self {
        let mut window = Self {
            committed_record: AnalysisRecord::default(),
            shared_settings: SharedSettings::default(),
            edits: AnalysisEdits::default(),
            transient_control: TransientControl::default(),
            draw_excitation: ToggleState::default(),
            integration_method: IntegrationMethod::default(),
            steady_state_method: SteadyStateMethod::default(),
            integration_orders: Vec::new(),
            selected_order: None,
            first_error: None,
            last_reported_error: None,
            solver_options_window: None,
            help_context: 0,
            accepted: false,
            cancelled: false,
        };
        window.initialize_from_backing();
        window
    }
}

impl SteadyStateAnalysisWindow {
    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::StartDisplayChanged(value) => self.edits.start_display = value,
            Message::MaxSearchTimeChanged(value) => self.edits.max_search_time = value,
            Message::FinalCheckTimeChanged(value) => self.edits.final_check_time = value,
            Message::FinalAccuracyChanged(value) => self.edits.final_accuracy = value,
            Message::TransientControlChanged(value) => self.transient_control = value,
            Message::DrawExcitationChanged(value) => self.draw_excitation = value.into(),
            Message::IntegrationMethodChanged(value) => {
                self.integration_method = value;
                self.rebuild_integration_orders();
            }
            Message::IntegrationOrderChanged(value) => self.selected_order = Some(value),
            Message::SteadyStateMethodChanged(value) => self.steady_state_method = value,
            Message::OpenSolverOptions => self.open_solver_options(),
            Message::SolverOptions(message) => self.update_solver_options(message),
            Message::Accept => {
                let outcome = self.apply_settings();
                self.accepted = outcome == ApplyOutcome::Accepted;
                if outcome == ApplyOutcome::Rejected {
                    let _ = self.request_close();
                }
            }
            Message::Cancel => self.cancelled = true,
            Message::Help => {}
        }

        Task::none()
    }

    /// Ports Ghidra function `FUN_013396e0` at `0x013396E0`.
    ///
    /// The database maps the original function to the main dialog's first-error
    /// reporter. It preserves the first error and sets the one-close-attempt
    /// guard. A later error does not replace the visible first error.
    pub fn report_first_error(&mut self, error: ValidationError) {
        if self.first_error.is_none() {
            self.last_reported_error = Some(error.clone());
            self.first_error = Some(error);
        }
    }

    /// Ports Ghidra function `FUN_01339af0` at `0x01339AF0`.
    ///
    /// The database maps the original function to the four numeric-edit error
    /// events on `TSteadyStateAnalDlg`. It extracts the edit's message and
    /// delegates to the main first-error reporter.
    pub fn report_edit_error(&mut self, error: ValidationError) {
        self.report_first_error(error);
    }

    /// Ports Ghidra function `FUN_01339740` at `0x01339740`.
    ///
    /// The database maps the original function to
    /// `TSteadyStateAnalDlg.OKBtnClick`. Shared time values are written before
    /// range validation, and the method and fractional accuracy are written
    /// after it. A failed range check keeps these shared writes but prevents
    /// the cloned analysis record from replacing the committed record. The
    /// displayed integration order is intentionally not read.
    pub fn apply_settings(&mut self) -> ApplyOutcome {
        let mut working_record = self.committed_record;

        let Ok(start_display) = parse_float(&self.edits.start_display) else {
            self.report_edit_error(ValidationError::InvalidNumber("Start display"));
            return ApplyOutcome::Rejected;
        };
        working_record.start_display = start_display;

        let Ok(max_search_time) = parse_float(&self.edits.max_search_time) else {
            self.report_edit_error(ValidationError::InvalidNumber("Max searching time"));
            return ApplyOutcome::Rejected;
        };
        self.shared_settings.max_search_time = max_search_time;

        let Ok(final_check_time) = parse_float(&self.edits.final_check_time) else {
            self.report_edit_error(ValidationError::InvalidNumber("Final checking time"));
            return ApplyOutcome::Rejected;
        };
        self.shared_settings.final_check_time = final_check_time;

        working_record.transient_control = self.transient_control.stored_value();
        working_record.draw_excitation = self.draw_excitation;
        working_record.integration_method = self.integration_method.stored_value();

        if final_check_time <= max_search_time || max_search_time < 0.0 {
            self.report_first_error(ValidationError::InvalidTimeRange);
        }

        self.shared_settings.method_index = self.steady_state_method.index();

        let Ok(final_accuracy) = parse_float(&self.edits.final_accuracy) else {
            self.report_edit_error(ValidationError::InvalidNumber("Final accuracy"));
            return ApplyOutcome::Rejected;
        };
        self.shared_settings.final_accuracy_fraction = final_accuracy / 100.0;

        if self.first_error.is_some() {
            return ApplyOutcome::Rejected;
        }

        self.committed_record = working_record;
        self.last_reported_error = None;
        ApplyOutcome::Accepted
    }

    /// Ports Ghidra function `FUN_01339b10` at `0x01339B10`.
    ///
    /// The database maps the original function to
    /// `TSteadyStateAnalDlg.OptionsBitBtnClick`. The Rust adapter creates a
    /// separate solver-options window state from the same settings object.
    /// Closing the child does not inspect or store a modal result in the
    /// parent.
    pub fn open_solver_options(&mut self) {
        self.solver_options_window = Some(SolverOptionsWindow::construct(
            self.shared_settings.solver_options,
        ));
    }

    /// Ports Ghidra function `FUN_01339b60` at `0x01339B60`.
    ///
    /// The database maps the original function to
    /// `TSteadyStateAnalDlg.IntegMethodRGClick`. Trapezoidal offers orders 1
    /// and 2. Gear offers orders 1 through 6. Both branches reset the visible
    /// selection to order 2 without persisting it.
    pub fn rebuild_integration_orders(&mut self) {
        let maximum = match self.integration_method {
            IntegrationMethod::Trapezoidal => 2,
            IntegrationMethod::Gear | IntegrationMethod::Other(_) => 6,
        };
        self.integration_orders = (1..=maximum).collect();
        self.selected_order = Some(2);
    }

    /// Ports Ghidra function `FUN_01339990` at `0x01339990`.
    ///
    /// The database maps the original function to
    /// `TSteadyStateAnalDlg.FormCloseQuery`. It rejects one close request while
    /// the error guard is set, then clears the guard. A later request is
    /// allowed when no new error occurred.
    #[must_use]
    pub const fn request_close(&mut self) -> bool {
        if self.first_error.take().is_some() {
            return false;
        }
        true
    }

    /// Ports Ghidra function `FUN_013399b0` at `0x013399B0`.
    ///
    /// The database maps the original function to
    /// `TSteadyStateAnalDlg.FormCreate`. It normalizes a start-display value
    /// above `1e30`, loads the record and shared settings into the controls,
    /// rebuilds the integration-order list, and sets help context `0x498`.
    pub fn initialize_from_backing(&mut self) {
        if self.committed_record.start_display > 1e30 {
            self.committed_record.start_display = 0.0;
        }

        self.edits.start_display = self.committed_record.start_display.to_string();
        self.edits.max_search_time = self.shared_settings.max_search_time.to_string();
        self.edits.final_check_time = self.shared_settings.final_check_time.to_string();
        self.transient_control =
            transient_control_from_stored(self.committed_record.transient_control);
        self.draw_excitation = self.committed_record.draw_excitation;
        self.integration_method =
            IntegrationMethod::from_stored(self.committed_record.integration_method);
        self.rebuild_integration_orders();
        self.steady_state_method = SteadyStateMethod::from_index(self.shared_settings.method_index);
        self.edits.final_accuracy =
            (self.shared_settings.final_accuracy_fraction * 100.0).to_string();
        self.help_context = HELP_CONTEXT;
    }

    #[must_use]
    pub fn from_state(record: AnalysisRecord, shared_settings: SharedSettings) -> Self {
        let mut window = Self {
            committed_record: record,
            shared_settings,
            ..Self::default()
        };
        window.initialize_from_backing();
        window
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        if let Some(options_window) = &self.solver_options_window {
            return options_window.view().map(Message::SolverOptions);
        }

        let mut content = column![
            text(TITLE).size(24),
            self.time_controls(),
            self.transient_controls(),
            self.integration_controls(),
            self.method_controls(),
            Self::action_controls(),
        ]
        .padding(16)
        .spacing(10);

        if let Some(error) = &self.last_reported_error {
            content = content.push(text(error.to_string()));
        }

        content.into()
    }

    fn time_controls(&self) -> iced::widget::Column<'_, Message> {
        column![
            numeric_row(
                "Start display",
                &self.edits.start_display,
                "s",
                Message::StartDisplayChanged,
            ),
            numeric_row(
                "Max searching time",
                &self.edits.max_search_time,
                "s",
                Message::MaxSearchTimeChanged,
            ),
            numeric_row(
                "Final checking time",
                &self.edits.final_check_time,
                "s",
                Message::FinalCheckTimeChanged,
            ),
            numeric_row(
                "Final accuracy",
                &self.edits.final_accuracy,
                "%",
                Message::FinalAccuracyChanged,
            ),
        ]
        .spacing(8)
    }

    fn transient_controls(&self) -> iced::widget::Column<'_, Message> {
        column![
            text("Transient control"),
            radio(
                TransientControl::CalculateOperatingPoint.to_string(),
                TransientControl::CalculateOperatingPoint,
                Some(self.transient_control),
                Message::TransientControlChanged,
            ),
            radio(
                TransientControl::UseInitialConditions.to_string(),
                TransientControl::UseInitialConditions,
                Some(self.transient_control),
                Message::TransientControlChanged,
            ),
            radio(
                TransientControl::ZeroInitialValues.to_string(),
                TransientControl::ZeroInitialValues,
                Some(self.transient_control),
                Message::TransientControlChanged,
            ),
            checkbox("Draw excitation", self.draw_excitation.is_enabled())
                .on_toggle(Message::DrawExcitationChanged),
        ]
        .spacing(6)
    }

    fn integration_controls(&self) -> iced::widget::Column<'_, Message> {
        column![
            text("Integration method"),
            row![
                radio(
                    "Trapezoidal",
                    IntegrationMethod::Trapezoidal,
                    Some(self.integration_method),
                    Message::IntegrationMethodChanged,
                ),
                radio(
                    "Gear",
                    IntegrationMethod::Gear,
                    Some(self.integration_method),
                    Message::IntegrationMethodChanged,
                ),
                text("Integration order"),
                pick_list(
                    &self.integration_orders[..],
                    self.selected_order,
                    Message::IntegrationOrderChanged,
                ),
            ]
            .spacing(12)
            .align_y(Alignment::Center),
        ]
        .spacing(6)
    }

    fn method_controls(&self) -> iced::widget::Column<'_, Message> {
        column![
            text("Method"),
            radio(
                SteadyStateMethod::Transient.to_string(),
                SteadyStateMethod::Transient,
                Some(self.steady_state_method),
                Message::SteadyStateMethodChanged,
            ),
            radio(
                SteadyStateMethod::FiniteDifferenceJacobian.to_string(),
                SteadyStateMethod::FiniteDifferenceJacobian,
                Some(self.steady_state_method),
                Message::SteadyStateMethodChanged,
            ),
            radio(
                SteadyStateMethod::BroydenUpdateJacobian.to_string(),
                SteadyStateMethod::BroydenUpdateJacobian,
                Some(self.steady_state_method),
                Message::SteadyStateMethodChanged,
            ),
        ]
        .spacing(6)
    }

    fn action_controls() -> iced::widget::Row<'static, Message> {
        row![
            button("OK").on_press(Message::Accept),
            button("Cancel").on_press(Message::Cancel),
            button("Help").on_press(Message::Help),
            button("Options...").on_press(Message::OpenSolverOptions),
        ]
        .spacing(12)
    }

    #[must_use]
    pub const fn committed_record(&self) -> AnalysisRecord {
        self.committed_record
    }

    #[must_use]
    pub const fn shared_settings(&self) -> SharedSettings {
        self.shared_settings
    }

    #[must_use]
    pub fn integration_orders(&self) -> &[u8] {
        &self.integration_orders
    }

    #[must_use]
    pub const fn selected_order(&self) -> Option<u8> {
        self.selected_order
    }

    fn update_solver_options(&mut self, message: SolverOptionsMessage) {
        let Some(options_window) = &mut self.solver_options_window else {
            return;
        };

        let event = options_window.update(message);
        self.shared_settings.solver_options = options_window.options();
        if matches!(
            event,
            SolverOptionsEvent::Accepted | SolverOptionsEvent::Cancelled
        ) {
            self.solver_options_window = None;
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum SolverOptionsEvent {
    None,
    Accepted,
    Rejected,
    Cancelled,
}

#[derive(Debug)]
pub struct SolverOptionsWindow {
    options: SolverOptions,
    edits: SolverOptionEdits,
    first_error: Option<ValidationError>,
    last_reported_error: Option<ValidationError>,
    help_context: u32,
}

impl SolverOptionsWindow {
    /// Ports Ghidra function `FUN_01338660` at `0x01338660`.
    ///
    /// The database identifies this function as the
    /// `TSteadyStateOptionslDlg` constructor path. The Rust state receives the
    /// shared solver-options value and initializes each visible edit from it.
    #[must_use]
    pub fn construct(options: SolverOptions) -> Self {
        let mut window = Self {
            edits: SolverOptions::default().into(),
            options,
            first_error: None,
            last_reported_error: None,
            help_context: 0,
        };
        window.initialize_from_shared();
        window
    }

    /// Ports Ghidra function `FUN_01338950` at `0x01338950`.
    ///
    /// The database maps the original function to
    /// `TSteadyStateOptionslDlg.FormCreate`. It loads all seven controls from
    /// the shared solver settings, converts two fractions to percentages, and
    /// sets help context `0x498`.
    pub fn initialize_from_shared(&mut self) {
        self.edits = self.options.into();
        self.help_context = HELP_CONTEXT;
    }

    fn update(&mut self, message: SolverOptionsMessage) -> SolverOptionsEvent {
        match message {
            SolverOptionsMessage::AccuracyChanged(value) => self.edits.accuracy = value,
            SolverOptionsMessage::MaxRelativeIncrementChanged(value) => {
                self.edits.max_relative_increment = value;
            }
            SolverOptionsMessage::MaxAbsoluteVoltageIncrementChanged(value) => {
                self.edits.max_absolute_voltage_increment = value;
            }
            SolverOptionsMessage::MaxAbsoluteCurrentIncrementChanged(value) => {
                self.edits.max_absolute_current_increment = value;
            }
            SolverOptionsMessage::CapacitorStateThresholdChanged(value) => {
                self.edits.capacitor_state_threshold = value;
            }
            SolverOptionsMessage::InductorStateThresholdChanged(value) => {
                self.edits.inductor_state_threshold = value;
            }
            SolverOptionsMessage::IterationLimitChanged(value) => {
                self.edits.iteration_limit = value;
            }
            SolverOptionsMessage::Accept => {
                if self.apply_options().is_ok() {
                    return SolverOptionsEvent::Accepted;
                }
                let _ = self.request_close();
                return SolverOptionsEvent::Rejected;
            }
            SolverOptionsMessage::Cancel => return SolverOptionsEvent::Cancelled,
            SolverOptionsMessage::Help => {}
        }
        SolverOptionsEvent::None
    }

    /// Ports Ghidra function `FUN_01338780` at `0x01338780`.
    ///
    /// The database maps the original function to
    /// `TSteadyStateOptionslDlg.OKBtnClick`. It parses and stores each field in
    /// control order. The two percentage edits become fractions. If a later
    /// value is invalid, earlier writes remain in the shared option value.
    ///
    /// # Errors
    ///
    /// Returns the first invalid field. Earlier valid field writes are not
    /// rolled back.
    pub fn apply_options(&mut self) -> Result<(), ValidationError> {
        let edits = self.edits.clone();
        let accuracy = self.parse_option_float(&edits.accuracy, "Accuracy")?;
        self.options.accuracy_fraction = accuracy / 100.0;

        let max_relative_increment =
            self.parse_option_float(&edits.max_relative_increment, "Max. rel. increment")?;
        self.options.max_relative_increment_fraction = max_relative_increment / 100.0;

        let max_absolute_voltage_increment = self.parse_option_float(
            &edits.max_absolute_voltage_increment,
            "Max. abs. voltage increment",
        )?;
        self.options.max_absolute_voltage_increment = max_absolute_voltage_increment;

        let max_absolute_current_increment = self.parse_option_float(
            &edits.max_absolute_current_increment,
            "Max. abs. current increment",
        )?;
        self.options.max_absolute_current_increment = max_absolute_current_increment;

        let capacitor_state_threshold = self.parse_option_float(
            &edits.capacitor_state_threshold,
            "State capacitor threshold",
        )?;
        self.options.capacitor_state_threshold = capacitor_state_threshold;

        let inductor_state_threshold =
            self.parse_option_float(&edits.inductor_state_threshold, "State inductor threshold")?;
        self.options.inductor_state_threshold = inductor_state_threshold;

        let iteration_limit =
            self.parse_option_integer(&edits.iteration_limit, "Iteration limit")?;
        self.options.iteration_limit = iteration_limit;
        self.last_reported_error = None;
        Ok(())
    }

    #[must_use]
    pub const fn options(&self) -> SolverOptions {
        self.options
    }

    /// Ports Ghidra function `FUN_01338930` at `0x01338930`.
    ///
    /// The database maps the original function to
    /// `TSteadyStateOptionslDlg.FormCloseQuery`. It rejects one close request
    /// while the edit-error guard is set and clears the guard immediately.
    #[must_use]
    pub const fn request_close(&mut self) -> bool {
        if self.first_error.take().is_some() {
            return false;
        }
        true
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, SolverOptionsMessage> {
        let mut content = column![
            text(SOLVER_OPTIONS_TITLE).size(24),
            solver_option_row(
                "Accuracy",
                &self.edits.accuracy,
                "%",
                SolverOptionsMessage::AccuracyChanged,
            ),
            solver_option_row(
                "Max. rel. increment",
                &self.edits.max_relative_increment,
                "%",
                SolverOptionsMessage::MaxRelativeIncrementChanged,
            ),
            solver_option_row(
                "Max. abs. voltage incr.",
                &self.edits.max_absolute_voltage_increment,
                "V",
                SolverOptionsMessage::MaxAbsoluteVoltageIncrementChanged,
            ),
            solver_option_row(
                "Max. abs. current incr.",
                &self.edits.max_absolute_current_increment,
                "A",
                SolverOptionsMessage::MaxAbsoluteCurrentIncrementChanged,
            ),
            solver_option_row(
                "State capacitor threshold",
                &self.edits.capacitor_state_threshold,
                "F",
                SolverOptionsMessage::CapacitorStateThresholdChanged,
            ),
            solver_option_row(
                "State inductor threshold",
                &self.edits.inductor_state_threshold,
                "H",
                SolverOptionsMessage::InductorStateThresholdChanged,
            ),
            solver_option_row(
                "Iteration limit",
                &self.edits.iteration_limit,
                "",
                SolverOptionsMessage::IterationLimitChanged,
            ),
            row![
                button("OK").on_press(SolverOptionsMessage::Accept),
                button("Cancel").on_press(SolverOptionsMessage::Cancel),
                button("Help").on_press(SolverOptionsMessage::Help),
            ]
            .spacing(12),
        ]
        .padding(16)
        .spacing(10);

        if let Some(error) = &self.last_reported_error {
            content = content.push(text(error.to_string()));
        }

        content.into()
    }

    fn parse_option_float(
        &mut self,
        value: &str,
        field: &'static str,
    ) -> Result<f64, ValidationError> {
        parse_float(value).map_err(|_| {
            let error = ValidationError::InvalidNumber(field);
            self.report_edit_error(error.clone());
            error
        })
    }

    fn parse_option_integer(
        &mut self,
        value: &str,
        field: &'static str,
    ) -> Result<i32, ValidationError> {
        parse_integer(value).map_err(|_| {
            let error = ValidationError::InvalidInteger(field);
            self.report_edit_error(error.clone());
            error
        })
    }

    /// Ports Ghidra function `FUN_01338a50` at `0x01338A50`.
    ///
    /// The database maps the original function to all six solver floating-edit
    /// error events. It forwards the edit-provided message to the child
    /// dialog's first-error guard.
    pub fn report_edit_error(&mut self, error: ValidationError) {
        self.record_first_error(error);
    }

    fn record_first_error(&mut self, error: ValidationError) {
        if self.first_error.is_none() {
            self.last_reported_error = Some(error.clone());
            self.first_error = Some(error);
        }
    }
}

fn parse_float(value: &str) -> Result<f64, ParseFloatError> {
    value.trim().parse()
}

fn parse_integer(value: &str) -> Result<i32, ParseIntError> {
    value.trim().parse()
}

const fn transient_control_from_stored(value: u8) -> TransientControl {
    match (value % 3 + 2) % 3 {
        0 => TransientControl::CalculateOperatingPoint,
        1 => TransientControl::UseInitialConditions,
        _ => TransientControl::ZeroInitialValues,
    }
}

fn numeric_row<'a>(
    label: &'a str,
    value: &'a str,
    unit: &'a str,
    on_input: fn(String) -> Message,
) -> iced::widget::Row<'a, Message> {
    row![
        text(label).width(Length::Fixed(180.0)),
        text_input("", value)
            .on_input(on_input)
            .width(Length::Fixed(140.0)),
        text(unit),
    ]
    .spacing(8)
    .align_y(Alignment::Center)
}

fn solver_option_row<'a>(
    label: &'a str,
    value: &'a str,
    unit: &'a str,
    on_input: fn(String) -> SolverOptionsMessage,
) -> iced::widget::Row<'a, SolverOptionsMessage> {
    row![
        text(label).width(Length::Fixed(220.0)),
        text_input("", value)
            .on_input(on_input)
            .width(Length::Fixed(140.0)),
        text(unit),
    ]
    .spacing(8)
    .align_y(Alignment::Center)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn integration_method_rebuilds_orders_and_resets_selection() {
        let mut window = SteadyStateAnalysisWindow::default();

        assert_eq!(window.integration_orders(), &[1, 2]);
        assert_eq!(window.selected_order(), Some(2));

        window.integration_method = IntegrationMethod::Gear;
        window.selected_order = Some(6);
        window.rebuild_integration_orders();

        assert_eq!(window.integration_orders(), &[1, 2, 3, 4, 5, 6]);
        assert_eq!(window.selected_order(), Some(2));
    }

    #[test]
    fn main_create_normalizes_and_loads_backing_state() {
        let record = AnalysisRecord {
            start_display: 1.1e30,
            transient_control: 2,
            draw_excitation: ToggleState::Enabled,
            integration_method: 2,
        };
        let shared_settings = SharedSettings {
            max_search_time: 3.0,
            final_check_time: 5.0,
            method_index: 1,
            final_accuracy_fraction: 0.025,
            solver_options: SolverOptions::default(),
        };

        let window = SteadyStateAnalysisWindow::from_state(record, shared_settings);

        assert_close(window.committed_record.start_display, 0.0);
        assert_eq!(window.edits.start_display, "0");
        assert_eq!(window.edits.max_search_time, "3");
        assert_eq!(window.edits.final_check_time, "5");
        assert_eq!(window.edits.final_accuracy, "2.5");
        assert_eq!(
            window.transient_control,
            TransientControl::UseInitialConditions
        );
        assert_eq!(window.draw_excitation, ToggleState::Enabled);
        assert_eq!(window.integration_method, IntegrationMethod::Gear);
        assert_eq!(
            window.steady_state_method,
            SteadyStateMethod::FiniteDifferenceJacobian
        );
        assert_eq!(window.integration_orders, vec![1, 2, 3, 4, 5, 6]);
        assert_eq!(window.selected_order, Some(2));
        assert_eq!(window.help_context, HELP_CONTEXT);
    }

    #[test]
    fn unexpected_integration_method_uses_the_nonzero_order_branch() {
        let window = SteadyStateAnalysisWindow::from_state(
            AnalysisRecord {
                integration_method: 0,
                ..AnalysisRecord::default()
            },
            SharedSettings::default(),
        );

        assert_eq!(window.integration_method, IntegrationMethod::Other(0));
        assert_eq!(window.integration_orders, vec![1, 2, 3, 4, 5, 6]);
        assert_eq!(window.selected_order, Some(2));
    }

    #[test]
    fn valid_main_settings_commit_record_and_convert_accuracy() {
        let mut window = SteadyStateAnalysisWindow {
            edits: AnalysisEdits {
                start_display: "0.25".to_owned(),
                max_search_time: "2".to_owned(),
                final_check_time: "4".to_owned(),
                final_accuracy: "0.5".to_owned(),
            },
            transient_control: TransientControl::ZeroInitialValues,
            draw_excitation: ToggleState::Enabled,
            integration_method: IntegrationMethod::Gear,
            steady_state_method: SteadyStateMethod::BroydenUpdateJacobian,
            integration_orders: (1..=6).collect(),
            selected_order: Some(6),
            ..SteadyStateAnalysisWindow::default()
        };

        let outcome = window.apply_settings();

        assert_eq!(outcome, ApplyOutcome::Accepted);
        assert_eq!(
            window.committed_record(),
            AnalysisRecord {
                start_display: 0.25,
                transient_control: 0,
                draw_excitation: ToggleState::Enabled,
                integration_method: 2,
            }
        );
        assert_close(window.shared_settings.max_search_time, 2.0);
        assert_close(window.shared_settings.final_check_time, 4.0);
        assert_eq!(window.shared_settings.method_index, 2);
        assert_close(window.shared_settings.final_accuracy_fraction, 0.005);
        assert_eq!(window.selected_order(), Some(6));
    }

    #[test]
    fn invalid_time_range_keeps_shared_writes_but_not_record_changes() {
        let original_record = AnalysisRecord {
            start_display: 9.0,
            transient_control: 2,
            draw_excitation: ToggleState::Disabled,
            integration_method: 1,
        };
        let mut window = SteadyStateAnalysisWindow {
            committed_record: original_record,
            edits: AnalysisEdits {
                start_display: "1".to_owned(),
                max_search_time: "5".to_owned(),
                final_check_time: "5".to_owned(),
                final_accuracy: "2".to_owned(),
            },
            steady_state_method: SteadyStateMethod::FiniteDifferenceJacobian,
            ..SteadyStateAnalysisWindow::default()
        };

        let outcome = window.apply_settings();

        assert_eq!(outcome, ApplyOutcome::Rejected);
        assert_eq!(window.committed_record(), original_record);
        assert_close(window.shared_settings.max_search_time, 5.0);
        assert_close(window.shared_settings.final_check_time, 5.0);
        assert_eq!(window.shared_settings.method_index, 1);
        assert_close(window.shared_settings.final_accuracy_fraction, 0.02);
        assert_eq!(window.first_error, Some(ValidationError::InvalidTimeRange));
    }

    #[test]
    fn first_error_is_preserved_and_close_query_rejects_once() {
        let mut window = SteadyStateAnalysisWindow::default();
        window.report_first_error(ValidationError::InvalidTimeRange);
        window.report_first_error(ValidationError::InvalidNumber("Final accuracy"));

        assert_eq!(window.first_error, Some(ValidationError::InvalidTimeRange));
        assert!(!window.request_close());
        assert!(window.first_error.is_none());
        assert!(window.request_close());
    }

    #[test]
    fn valid_solver_options_convert_percentages_and_store_every_value() {
        let mut window = SolverOptionsWindow::construct(SolverOptions::default());
        window.edits = SolverOptionEdits {
            accuracy: "2".to_owned(),
            max_relative_increment: "3".to_owned(),
            max_absolute_voltage_increment: "4".to_owned(),
            max_absolute_current_increment: "5".to_owned(),
            capacitor_state_threshold: "6".to_owned(),
            inductor_state_threshold: "7".to_owned(),
            iteration_limit: "8".to_owned(),
        };

        let result = window.apply_options();

        assert!(result.is_ok());
        assert_eq!(
            window.options(),
            SolverOptions {
                accuracy_fraction: 0.02,
                max_relative_increment_fraction: 0.03,
                max_absolute_voltage_increment: 4.0,
                max_absolute_current_increment: 5.0,
                capacitor_state_threshold: 6.0,
                inductor_state_threshold: 7.0,
                iteration_limit: 8,
            }
        );
    }

    #[test]
    fn solver_options_create_loads_percentages_and_help_context() {
        let options = SolverOptions {
            accuracy_fraction: 0.125,
            max_relative_increment_fraction: 0.25,
            max_absolute_voltage_increment: 3.0,
            max_absolute_current_increment: 4.0,
            capacitor_state_threshold: 5.0,
            inductor_state_threshold: 6.0,
            iteration_limit: 7,
        };

        let window = SolverOptionsWindow::construct(options);

        assert_eq!(window.edits.accuracy, "12.5");
        assert_eq!(window.edits.max_relative_increment, "25");
        assert_eq!(window.edits.max_absolute_voltage_increment, "3");
        assert_eq!(window.edits.max_absolute_current_increment, "4");
        assert_eq!(window.edits.capacitor_state_threshold, "5");
        assert_eq!(window.edits.inductor_state_threshold, "6");
        assert_eq!(window.edits.iteration_limit, "7");
        assert_eq!(window.help_context, HELP_CONTEXT);
    }

    #[test]
    fn solver_edit_error_keeps_first_message_and_rejects_one_close() {
        let mut window = SolverOptionsWindow::construct(SolverOptions::default());
        window.report_edit_error(ValidationError::InvalidNumber("Accuracy"));
        window.report_edit_error(ValidationError::InvalidNumber("Threshold"));

        assert_eq!(
            window.first_error,
            Some(ValidationError::InvalidNumber("Accuracy"))
        );
        assert!(!window.request_close());
        assert!(window.first_error.is_none());
        assert!(window.request_close());
    }

    #[test]
    fn invalid_later_solver_edit_preserves_earlier_writes() {
        let original = SolverOptions {
            accuracy_fraction: 0.1,
            max_relative_increment_fraction: 0.2,
            max_absolute_voltage_increment: 3.0,
            max_absolute_current_increment: 4.0,
            capacitor_state_threshold: 5.0,
            inductor_state_threshold: 6.0,
            iteration_limit: 7,
        };
        let mut window = SolverOptionsWindow::construct(original);
        window.edits.accuracy = "50".to_owned();
        window.edits.max_relative_increment = "invalid".to_owned();

        let result = window.apply_options();

        assert_eq!(
            result,
            Err(ValidationError::InvalidNumber("Max. rel. increment"))
        );
        assert_close(window.options.accuracy_fraction, 0.5);
        assert_close(window.options.max_relative_increment_fraction, 0.2);
        assert_close(window.options.max_absolute_voltage_increment, 3.0);
    }

    #[test]
    fn options_dialog_uses_shared_state_and_parent_ignores_cancel_result() {
        let initial_options = SolverOptions {
            accuracy_fraction: 0.25,
            ..SolverOptions::default()
        };
        let mut window = SteadyStateAnalysisWindow {
            shared_settings: SharedSettings {
                solver_options: initial_options,
                ..SharedSettings::default()
            },
            ..SteadyStateAnalysisWindow::default()
        };

        window.open_solver_options();
        assert_eq!(
            window
                .solver_options_window
                .as_ref()
                .map(SolverOptionsWindow::options),
            Some(initial_options)
        );

        window.update_solver_options(SolverOptionsMessage::Cancel);

        assert!(window.solver_options_window.is_none());
        assert_eq!(window.shared_settings.solver_options, initial_options);
    }

    fn assert_close(actual: f64, expected: f64) {
        assert!((actual - expected).abs() <= f64::EPSILON);
    }
}
