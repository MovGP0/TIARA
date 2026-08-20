use std::fmt;

const SPEED_OF_LIGHT_METERS_PER_SECOND: f64 = 300_000_000.0;

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct RfEditRequest {
    pub editor_index: usize,
    pub frequency_hz: f64,
    pub electrical_length_degrees: f64,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct RfCommit {
    pub parameter_position: usize,
    pub value: f64,
    pub reference_frequency_hz: f64,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum RfCalculationError {
    ElectricalLengthOutOfRange,
    FrequencyMustBePositive,
    EffectivePermittivityMustBePositive,
    ParameterPositionOutOfRange,
    ResultNotFinite,
    FirstParameterSolver(String),
}

impl fmt::Display for RfCalculationError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::ElectricalLengthOutOfRange => {
                "Electrical length must be greater than 0 and at most 360 degrees."
            }
            Self::FrequencyMustBePositive => "Frequency must be a positive finite value.",
            Self::EffectivePermittivityMustBePositive => {
                "Effective relative permittivity must be a positive finite value."
            }
            Self::ParameterPositionOutOfRange => "The selected RF parameter does not exist.",
            Self::ResultNotFinite => "The calculated RF parameter is not finite.",
            Self::FirstParameterSolver(message) => message,
        })
    }
}

pub trait FirstParameterSolver {
    /// Solves the first indexed RF parameter from the cached parameter set and
    /// requested electrical length.
    ///
    /// # Errors
    ///
    /// Returns a text error when the numerical solve does not converge.
    fn solve_first_parameter(
        &mut self,
        cached_parameters: [f64; 4],
        electrical_length_degrees: f64,
    ) -> Result<f64, String>;
}

#[derive(Debug, Clone, PartialEq)]
pub struct RfEditorState {
    pub cached_parameters: [f64; 4],
    pub parameter_values: Vec<f64>,
    pub effective_relative_permittivity: f64,
    pub reference_frequency_hz: f64,
}

impl Default for RfEditorState {
    fn default() -> Self {
        Self {
            cached_parameters: [0.0; 4],
            parameter_values: vec![0.0; 4],
            effective_relative_permittivity: 1.0,
            reference_frequency_hz: 0.0,
        }
    }
}

impl RfEditorState {
    /// Ports Ghidra function `FUN_01429360` at `0x01429360`.
    ///
    /// # Errors
    ///
    /// Returns a validation, calculation, solver, or parameter-position error.
    /// The method does not change the parameter state when an error occurs.
    pub fn validate_and_commit<S: FirstParameterSolver>(
        &mut self,
        request: RfEditRequest,
        solver: &mut S,
    ) -> Result<RfCommit, RfCalculationError> {
        validate_electrical_length(request.electrical_length_degrees)?;
        if request.editor_index >= self.parameter_values.len() {
            return Err(RfCalculationError::ParameterPositionOutOfRange);
        }

        let value = if request.editor_index == 0 {
            solver
                .solve_first_parameter(self.cached_parameters, request.electrical_length_degrees)
                .map_err(RfCalculationError::FirstParameterSolver)?
        } else {
            derive_length_like_parameter(
                request.frequency_hz,
                request.electrical_length_degrees,
                self.effective_relative_permittivity,
            )?
        };
        if !value.is_finite() {
            return Err(RfCalculationError::ResultNotFinite);
        }

        self.parameter_values[request.editor_index] = value;
        self.reference_frequency_hz = request.frequency_hz;
        Ok(RfCommit {
            parameter_position: request.editor_index + 1,
            value,
            reference_frequency_hz: request.frequency_hz,
        })
    }
}

fn validate_electrical_length(degrees: f64) -> Result<(), RfCalculationError> {
    if degrees.is_finite() && degrees > 0.0 && degrees <= 360.0 {
        Ok(())
    } else {
        Err(RfCalculationError::ElectricalLengthOutOfRange)
    }
}

/// Calculates the nonzero-index RF parameter from frequency, electrical
/// length, and effective relative permittivity.
///
/// # Errors
///
/// Returns an error for nonpositive or nonfinite frequency or permittivity.
pub fn derive_length_like_parameter(
    frequency_hz: f64,
    electrical_length_degrees: f64,
    effective_relative_permittivity: f64,
) -> Result<f64, RfCalculationError> {
    validate_electrical_length(electrical_length_degrees)?;
    if !frequency_hz.is_finite() || frequency_hz <= 0.0 {
        return Err(RfCalculationError::FrequencyMustBePositive);
    }
    if !effective_relative_permittivity.is_finite() || effective_relative_permittivity <= 0.0 {
        return Err(RfCalculationError::EffectivePermittivityMustBePositive);
    }

    Ok(
        ((electrical_length_degrees / 360.0) * SPEED_OF_LIGHT_METERS_PER_SECOND)
            / (frequency_hz * effective_relative_permittivity.sqrt()),
    )
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug)]
    struct Solver {
        result: Result<f64, String>,
        calls: Vec<([f64; 4], f64)>,
    }

    impl Default for Solver {
        fn default() -> Self {
            Self {
                result: Ok(0.0),
                calls: Vec::new(),
            }
        }
    }

    impl FirstParameterSolver for Solver {
        fn solve_first_parameter(
            &mut self,
            cached_parameters: [f64; 4],
            electrical_length_degrees: f64,
        ) -> Result<f64, String> {
            self.calls
                .push((cached_parameters, electrical_length_degrees));
            self.result.clone()
        }
    }

    #[test]
    fn invalid_electrical_length_does_not_change_parameter_or_frequency() {
        let mut state = RfEditorState {
            parameter_values: vec![10.0, 20.0],
            reference_frequency_hz: 5.0,
            ..RfEditorState::default()
        };
        let original = state.clone();
        let mut solver = Solver::default();

        for degrees in [-1.0, 0.0, 360.1, f64::NAN] {
            assert_eq!(
                state.validate_and_commit(
                    RfEditRequest {
                        editor_index: 1,
                        frequency_hz: 1_000.0,
                        electrical_length_degrees: degrees,
                    },
                    &mut solver,
                ),
                Err(RfCalculationError::ElectricalLengthOutOfRange)
            );
            assert_eq!(state, original);
        }
    }

    #[test]
    fn index_zero_uses_injected_solver_without_frequency_input() {
        let mut state = RfEditorState {
            cached_parameters: [1.0, 2.0, 3.0, 4.0],
            parameter_values: vec![0.0, 0.0],
            ..RfEditorState::default()
        };
        let mut solver = Solver {
            result: Ok(12.5),
            ..Solver::default()
        };

        let commit = state
            .validate_and_commit(
                RfEditRequest {
                    editor_index: 0,
                    frequency_hz: 2_000.0,
                    electrical_length_degrees: 90.0,
                },
                &mut solver,
            )
            .unwrap_or_else(|error| panic!("unexpected calculation error: {error}"));

        assert_eq!(solver.calls, vec![([1.0, 2.0, 3.0, 4.0], 90.0)]);
        assert!((commit.value - 12.5).abs() < f64::EPSILON);
        assert!((state.parameter_values[0] - 12.5).abs() < f64::EPSILON);
        assert!((state.reference_frequency_hz - 2_000.0).abs() < f64::EPSILON);
    }

    #[test]
    fn nonzero_index_uses_recovered_frequency_degree_relation() {
        let mut state = RfEditorState {
            parameter_values: vec![0.0, 0.0],
            effective_relative_permittivity: 4.0,
            ..RfEditorState::default()
        };
        let mut solver = Solver::default();

        let commit = state
            .validate_and_commit(
                RfEditRequest {
                    editor_index: 1,
                    frequency_hz: 1_000_000.0,
                    electrical_length_degrees: 180.0,
                },
                &mut solver,
            )
            .unwrap_or_else(|error| panic!("unexpected calculation error: {error}"));

        assert!((commit.value - 75.0).abs() < f64::EPSILON);
        assert!(solver.calls.is_empty());
        assert_eq!(commit.parameter_position, 2);
    }

    #[test]
    fn solver_error_preserves_all_state() {
        let mut state = RfEditorState::default();
        let original = state.clone();
        let mut solver = Solver {
            result: Err("did not converge".to_owned()),
            ..Solver::default()
        };

        assert_eq!(
            state.validate_and_commit(
                RfEditRequest {
                    editor_index: 0,
                    frequency_hz: 1_000.0,
                    electrical_length_degrees: 45.0,
                },
                &mut solver,
            ),
            Err(RfCalculationError::FirstParameterSolver(
                "did not converge".to_owned()
            ))
        );
        assert_eq!(state, original);
    }
}
