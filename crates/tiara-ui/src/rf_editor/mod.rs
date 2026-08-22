//! Iced adapter for RF electrical-length parameter editing.
//!
//! Library evaluation: Iced 0.13.1 supplies the edit controls and typed
//! messages. `tiara-core` owns validation, the recovered analytic conversion,
//! and atomic parameter commits. No general math crate was selected because
//! Rust `f64` supplies the required square root; the recovered index-zero
//! numerical solver remains an injected application strategy.

use iced::widget::{button, column, container, row, text, text_input};
use iced::{Element, Length};
use tiara_core::rf_editor::{
    FirstParameterSolver, RfCalculationError, RfCommit, RfEditRequest, RfEditorState,
};

pub const TITLE: &str = "Parameter Editor";
pub const FORM_RESOURCE: &str = "RfrEditorDlg";

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum RfEditorError {
    InvalidFrequencyText,
    InvalidElectricalLengthText,
    Initialization(String),
    Edit(String),
    Calculation(RfCalculationError),
}

pub trait RfDialogInitializer {
    /// Calculates the initial electrical length for RF parameter index zero.
    ///
    /// # Errors
    ///
    /// Returns an application calculation error. The recovered form has no
    /// local recovery for an exception from this calculation.
    fn first_parameter_electrical_length(
        &mut self,
        cached_parameters: [f64; 4],
    ) -> Result<f64, String>;

    /// Calculates the initial electrical length for another RF parameter.
    ///
    /// # Errors
    ///
    /// Returns an application calculation error. The recovered form has no
    /// local recovery for an exception from this calculation.
    fn other_parameter_electrical_length(
        &mut self,
        cached_parameters: [f64; 4],
        reference_frequency_hz: f64,
    ) -> Result<f64, String>;
}

#[derive(Debug, Clone, PartialEq)]
pub enum AcceptOutcome {
    Saved(RfCommit),
    Blocked(RfEditorError),
}

#[derive(Debug, Clone)]
pub enum Message {
    FrequencyChanged(String),
    ElectricalLengthChanged(String),
    AcceptRequested,
}

#[derive(Debug, Clone)]
pub struct Window {
    state: RfEditorState,
    editor_index: usize,
    frequency_text: String,
    electrical_length_text: String,
    frequency_edit_enabled: bool,
    error: Option<RfEditorError>,
    close_blocked_once: bool,
    accept_requested: bool,
}

impl Window {
    #[must_use]
    pub fn new(
        state: RfEditorState,
        editor_index: usize,
        frequency_hz: f64,
        electrical_length_degrees: f64,
    ) -> Self {
        Self {
            state,
            editor_index,
            frequency_text: frequency_hz.to_string(),
            electrical_length_text: electrical_length_degrees.to_string(),
            frequency_edit_enabled: editor_index != 0,
            error: None,
            close_blocked_once: false,
            accept_requested: false,
        }
    }

    /// Initializes the controls from four recovered RF parameters.
    ///
    /// Ports Ghidra function `FUN_01429170` at `0x01429170`, recovered as
    /// `TRfrEditorDlg.FormCreate`. It caches parameter positions one through
    /// four, loads the shared reference frequency, disables frequency editing
    /// for index zero, selects the index-specific initial calculation, and
    /// starts a new validation cycle.
    ///
    /// # Errors
    ///
    /// Returns an initialization calculation error. As in the recovered
    /// handler, cached parameters, frequency text, and frequency availability
    /// are already updated when that later calculation fails.
    pub fn form_create(
        &mut self,
        cached_parameters: [f64; 4],
        reference_frequency_hz: f64,
        initializer: &mut impl RfDialogInitializer,
    ) -> Result<(), RfEditorError> {
        self.state.cached_parameters = cached_parameters;
        self.state.reference_frequency_hz = reference_frequency_hz;
        self.frequency_text = reference_frequency_hz.to_string();
        self.frequency_edit_enabled = self.editor_index != 0;
        let electrical_length_degrees = if self.editor_index == 0 {
            initializer.first_parameter_electrical_length(cached_parameters)
        } else {
            initializer.other_parameter_electrical_length(cached_parameters, reference_frequency_hz)
        }
        .map_err(RfEditorError::Initialization)?;

        self.electrical_length_text = electrical_length_degrees.to_string();
        self.error = None;
        self.close_blocked_once = false;
        self.accept_requested = false;
        Ok(())
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::FrequencyChanged(value) => self.frequency_text = value,
            Message::ElectricalLengthChanged(value) => self.electrical_length_text = value,
            Message::AcceptRequested => self.accept_requested = true,
        }
    }

    /// Ports Ghidra function `FUN_01429360` at `0x01429360`.
    #[must_use]
    pub fn accept_with<S: FirstParameterSolver>(&mut self, solver: &mut S) -> AcceptOutcome {
        self.accept_requested = false;
        let Ok(frequency_hz) = self.frequency_text.trim().parse::<f64>() else {
            return self.block(RfEditorError::InvalidFrequencyText);
        };
        let Ok(electrical_length_degrees) = self.electrical_length_text.trim().parse::<f64>()
        else {
            return self.block(RfEditorError::InvalidElectricalLengthText);
        };

        match self.state.validate_and_commit(
            RfEditRequest {
                editor_index: self.editor_index,
                frequency_hz,
                electrical_length_degrees,
            },
            solver,
        ) {
            Ok(commit) => {
                self.error = None;
                self.close_blocked_once = false;
                AcceptOutcome::Saved(commit)
            }
            Err(error) => self.block(RfEditorError::Calculation(error)),
        }
    }

    fn block(&mut self, error: RfEditorError) -> AcceptOutcome {
        if !self.close_blocked_once {
            self.error = Some(error.clone());
        }
        self.close_blocked_once = true;
        AcceptOutcome::Blocked(error)
    }

    /// Retains and displays only the first float-edit error in a cycle.
    ///
    /// Ports Ghidra function `FUN_01429550` at `0x01429550`, recovered as the
    /// shared `FloatEdit1.OnError` and `FloatEdit2.OnError` handler. The sender
    /// supplies its error text. Later errors only keep the close-veto latch set.
    pub fn report_float_edit_error(&mut self, message: impl Into<String>) {
        let _ = self.block(RfEditorError::Edit(message.into()));
    }

    /// Applies and clears the one-use RF edit-error close veto.
    ///
    /// Ports Ghidra function `FUN_01429530` at `0x01429530`, recovered as
    /// `TRfrEditorDlg.FormCloseQuery`.
    #[must_use]
    pub const fn close_query(&mut self) -> bool {
        let can_close = !self.close_blocked_once;
        self.close_blocked_once = false;
        can_close
    }

    #[must_use]
    pub const fn state(&self) -> &RfEditorState {
        &self.state
    }

    #[must_use]
    pub const fn error(&self) -> Option<&RfEditorError> {
        self.error.as_ref()
    }

    #[must_use]
    pub const fn accept_requested(&self) -> bool {
        self.accept_requested
    }

    #[must_use]
    pub const fn frequency_edit_enabled(&self) -> bool {
        self.frequency_edit_enabled
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let frequency_edit = if self.frequency_edit_enabled {
            text_input("", &self.frequency_text).on_input(Message::FrequencyChanged)
        } else {
            text_input("", &self.frequency_text)
        };
        let error = self.error.as_ref().map_or_else(
            || text(""),
            |error| {
                text(match error {
                    RfEditorError::InvalidFrequencyText => "Enter a valid frequency.",
                    RfEditorError::InvalidElectricalLengthText => {
                        "Enter a valid electrical length."
                    }
                    RfEditorError::Initialization(message) | RfEditorError::Edit(message) => {
                        return text(message);
                    }
                    RfEditorError::Calculation(error) => return text(error.to_string()),
                })
            },
        );
        let body = column![
            row![
                text("Frequency [Hz]").width(Length::Fixed(190.0)),
                frequency_edit,
            ]
            .spacing(8),
            row![
                text("Electrical length [deg]").width(Length::Fixed(190.0)),
                text_input("", &self.electrical_length_text)
                    .on_input(Message::ElectricalLengthChanged),
            ]
            .spacing(8),
            error,
            button("OK").on_press(Message::AcceptRequested),
        ]
        .spacing(10);

        container(body)
            .padding(16)
            .width(Length::Fill)
            .height(Length::Fill)
            .into()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Default)]
    struct Solver {
        value: f64,
        calls: usize,
    }

    impl FirstParameterSolver for Solver {
        fn solve_first_parameter(
            &mut self,
            _cached_parameters: [f64; 4],
            _electrical_length_degrees: f64,
        ) -> Result<f64, String> {
            self.calls += 1;
            Ok(self.value)
        }
    }

    #[derive(Default)]
    struct Initializer {
        first_result: f64,
        other_result: f64,
        fail: bool,
        calls: Vec<(&'static str, [f64; 4], f64)>,
    }

    impl RfDialogInitializer for Initializer {
        fn first_parameter_electrical_length(
            &mut self,
            cached_parameters: [f64; 4],
        ) -> Result<f64, String> {
            self.calls.push(("first", cached_parameters, 0.0));
            if self.fail {
                Err("initial calculation failed".to_owned())
            } else {
                Ok(self.first_result)
            }
        }

        fn other_parameter_electrical_length(
            &mut self,
            cached_parameters: [f64; 4],
            reference_frequency_hz: f64,
        ) -> Result<f64, String> {
            self.calls
                .push(("other", cached_parameters, reference_frequency_hz));
            if self.fail {
                Err("initial calculation failed".to_owned())
            } else {
                Ok(self.other_result)
            }
        }
    }

    fn window(editor_index: usize) -> Window {
        Window::new(
            RfEditorState {
                parameter_values: vec![10.0, 20.0],
                effective_relative_permittivity: 4.0,
                reference_frequency_hz: 5.0,
                ..RfEditorState::default()
            },
            editor_index,
            1_000_000.0,
            180.0,
        )
    }

    #[test]
    fn invalid_degree_range_blocks_close_and_preserves_all_writes() {
        let mut window = window(1);
        let original = window.state.clone();
        window.electrical_length_text = "361".to_owned();
        let mut solver = Solver::default();

        assert_eq!(
            window.accept_with(&mut solver),
            AcceptOutcome::Blocked(RfEditorError::Calculation(
                RfCalculationError::ElectricalLengthOutOfRange
            ))
        );
        assert_eq!(window.state, original);
        assert!(!window.close_query());
        assert!(window.close_query());
    }

    #[test]
    fn index_zero_commits_solver_result_and_shared_frequency() {
        let mut window = window(0);
        let mut solver = Solver {
            value: 42.0,
            calls: 0,
        };

        let AcceptOutcome::Saved(commit) = window.accept_with(&mut solver) else {
            panic!("successful commit expected");
        };

        assert_eq!(solver.calls, 1);
        assert!((commit.value - 42.0).abs() < f64::EPSILON);
        assert!((window.state.parameter_values[0] - 42.0).abs() < f64::EPSILON);
        assert!((window.state.reference_frequency_hz - 1_000_000.0).abs() < f64::EPSILON);
        assert!(window.close_query());
    }

    #[test]
    fn nonzero_index_commits_analytic_derived_value_without_solver() {
        let mut window = window(1);
        let mut solver = Solver::default();

        let AcceptOutcome::Saved(commit) = window.accept_with(&mut solver) else {
            panic!("successful commit expected");
        };

        assert_eq!(solver.calls, 0);
        assert!((commit.value - 75.0).abs() < f64::EPSILON);
        assert!((window.state.parameter_values[1] - 75.0).abs() < f64::EPSILON);
    }

    #[test]
    fn invalid_edit_text_blocks_without_reaching_calculator() {
        let mut window = window(1);
        window.frequency_text = "not a number".to_owned();
        let original = window.state.clone();
        let mut solver = Solver::default();

        assert_eq!(
            window.accept_with(&mut solver),
            AcceptOutcome::Blocked(RfEditorError::InvalidFrequencyText)
        );
        assert_eq!(window.state, original);
        assert_eq!(solver.calls, 0);
    }

    #[test]
    fn iced_message_stages_acceptance_for_external_solver_adapter() {
        let mut window = window(1);

        window.update(Message::AcceptRequested);

        assert!(window.accept_requested());
    }

    #[test]
    fn form_create_caches_parameters_and_uses_the_index_zero_calculation() {
        let mut window = window(0);
        let mut initializer = Initializer {
            first_result: 45.0,
            ..Initializer::default()
        };

        window
            .form_create([1.0, 2.0, 3.0, 4.0], 10_000.0, &mut initializer)
            .expect("initial calculation should succeed");

        assert!(
            window
                .state
                .cached_parameters
                .iter()
                .zip([1.0, 2.0, 3.0, 4.0])
                .all(|(actual, expected)| (*actual - expected).abs() < f64::EPSILON)
        );
        assert!(!window.frequency_edit_enabled());
        assert_eq!(window.frequency_text, "10000");
        assert_eq!(window.electrical_length_text, "45");
        assert_eq!(initializer.calls, [("first", [1.0, 2.0, 3.0, 4.0], 0.0)]);
    }

    #[test]
    fn form_create_uses_frequency_for_other_parameter_indices() {
        let mut window = window(2);
        let mut initializer = Initializer {
            other_result: 90.0,
            ..Initializer::default()
        };

        window
            .form_create([4.0, 3.0, 2.0, 1.0], 20_000.0, &mut initializer)
            .expect("initial calculation should succeed");

        assert!(window.frequency_edit_enabled());
        assert_eq!(window.electrical_length_text, "90");
        assert_eq!(
            initializer.calls,
            [("other", [4.0, 3.0, 2.0, 1.0], 20_000.0)]
        );
    }

    #[test]
    fn float_edit_errors_keep_only_the_first_message_and_veto_once() {
        let mut window = window(1);

        window.report_float_edit_error("frequency error");
        window.report_float_edit_error("length error");

        assert_eq!(
            window.error(),
            Some(&RfEditorError::Edit("frequency error".to_owned()))
        );
        assert!(!window.close_query());
        assert!(window.close_query());
    }

    #[test]
    fn failed_initial_calculation_keeps_the_earlier_form_assignments() {
        let mut window = window(0);
        let old_electrical_length = window.electrical_length_text.clone();
        let mut initializer = Initializer {
            fail: true,
            ..Initializer::default()
        };

        let result = window.form_create([9.0, 8.0, 7.0, 6.0], 30_000.0, &mut initializer);

        assert_eq!(
            result,
            Err(RfEditorError::Initialization(
                "initial calculation failed".to_owned()
            ))
        );
        assert_eq!(window.frequency_text, "30000");
        assert!(!window.frequency_edit_enabled());
        assert_eq!(window.electrical_length_text, old_electrical_length);
    }
}
