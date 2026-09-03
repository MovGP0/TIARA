use std::fmt;

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum SweepMode {
    #[default]
    Linear,
    Logarithmic,
    List,
}

impl fmt::Display for SweepMode {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::Linear => "Linear",
            Self::Logarithmic => "Logarithmic",
            Self::List => "List",
        })
    }
}

impl SweepMode {
    pub const ALL: [Self; 3] = [Self::Linear, Self::Logarithmic, Self::List];
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum LogarithmicInterpretation {
    #[default]
    EndPointRatio,
    DecadeSteps,
}

/// Calculates one value in a linear, logarithmic, or explicit-list sweep.
///
/// Ports Ghidra function `0x017C58F0`, symbol `FUN_017c58f0`. A zero interval
/// count returns `start` before any division or list access. Normal logarithmic
/// spacing interpolates the ratio from `start` through `end`. Decade spacing
/// advances by `10^(1 / interval_count)` for each index and does not use
/// `end`. List mode returns zero for a negative or out-of-range index.
#[must_use]
pub fn calculate_sweep_value(
    start: f64,
    end: f64,
    list_values: &[f64],
    interval_count: i32,
    index: i32,
    mode: SweepMode,
    logarithmic_interpretation: LogarithmicInterpretation,
) -> f64 {
    if interval_count == 0 {
        return start;
    }
    let interval_count = f64::from(interval_count);
    match mode {
        SweepMode::Linear => ((end - start) / interval_count).mul_add(f64::from(index), start),
        SweepMode::Logarithmic => match logarithmic_interpretation {
            LogarithmicInterpretation::EndPointRatio => {
                start * (end / start).powf(f64::from(index) / interval_count)
            }
            LogarithmicInterpretation::DecadeSteps => {
                start * 10.0_f64.powf(1.0 / interval_count).powi(index)
            }
        },
        SweepMode::List => usize::try_from(index)
            .ok()
            .and_then(|index| list_values.get(index))
            .copied()
            .unwrap_or(0.0),
    }
}

#[derive(Debug, Clone, PartialEq)]
pub struct ParameterStepRecord {
    pub parameter_name: String,
    pub start: f64,
    pub end: f64,
    pub cases: u32,
    pub sweep_mode: SweepMode,
    pub list_values: Vec<f64>,
}

impl ParameterStepRecord {
    #[must_use]
    pub fn defaults(parameter_name: String, current_value: f64) -> Self {
        Self {
            parameter_name,
            start: current_value * 0.8,
            end: current_value * 1.2,
            cases: 10,
            sweep_mode: SweepMode::Linear,
            list_values: Vec::new(),
        }
    }

    /// Applies the recovered sweep-mode validation rules.
    ///
    /// # Errors
    ///
    /// Returns an error for equal Linear endpoints or non-positive or equal
    /// Logarithmic endpoints. List mode does not validate its endpoints.
    pub fn validate(&self) -> Result<(), StepValidationError> {
        match self.sweep_mode {
            SweepMode::Logarithmic if self.start <= 0.0 || self.end <= 0.0 => {
                Err(StepValidationError::NonPositiveLogarithmicEndpoint)
            }
            SweepMode::Linear | SweepMode::Logarithmic if same_value(self.start, self.end) => {
                Err(StepValidationError::EqualEndpoints)
            }
            SweepMode::Linear | SweepMode::Logarithmic | SweepMode::List => Ok(()),
        }
    }

    pub fn normalize_list_ownership(&mut self) {
        if self.sweep_mode == SweepMode::List && self.list_values.is_empty() {
            self.sweep_mode = SweepMode::Linear;
        }
        if self.sweep_mode != SweepMode::List {
            self.list_values.clear();
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum StepValidationError {
    EqualEndpoints,
    NonPositiveLogarithmicEndpoint,
}

impl fmt::Display for StepValidationError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::EqualEndpoints => "The start and end values must be different.",
            Self::NonPositiveLogarithmicEndpoint => {
                "Logarithmic stepping requires positive start and end values."
            }
        })
    }
}

impl std::error::Error for StepValidationError {}

fn same_value(left: f64, right: f64) -> bool {
    left.total_cmp(&right).is_eq()
}

#[cfg(test)]
mod tests {
    use super::{
        LogarithmicInterpretation, ParameterStepRecord, StepValidationError, SweepMode,
        calculate_sweep_value,
    };

    fn assert_near(actual: f64, expected: f64) {
        assert!(
            (actual - expected).abs() < 1.0e-12,
            "{actual} != {expected}"
        );
    }

    #[test]
    fn fun_017c58f0_returns_start_when_interval_count_is_zero() {
        assert_eq!(
            calculate_sweep_value(
                4.5,
                90.0,
                &[],
                0,
                20,
                SweepMode::List,
                LogarithmicInterpretation::DecadeSteps,
            )
            .to_bits(),
            4.5_f64.to_bits()
        );
    }

    #[test]
    fn fun_017c58f0_calculates_linear_and_endpoint_logarithmic_values() {
        assert_near(
            calculate_sweep_value(
                -100.0,
                500.0,
                &[],
                4,
                2,
                SweepMode::Linear,
                LogarithmicInterpretation::EndPointRatio,
            ),
            200.0,
        );
        assert_near(
            calculate_sweep_value(
                1.0,
                100.0,
                &[],
                4,
                2,
                SweepMode::Logarithmic,
                LogarithmicInterpretation::EndPointRatio,
            ),
            10.0,
        );
    }

    #[test]
    fn fun_017c58f0_calculates_decade_steps_without_using_end() {
        assert_near(
            calculate_sweep_value(
                2.0,
                99_999.0,
                &[],
                2,
                2,
                SweepMode::Logarithmic,
                LogarithmicInterpretation::DecadeSteps,
            ),
            20.0,
        );
    }

    #[test]
    fn fun_017c58f0_reads_list_and_returns_zero_outside_it() {
        let values = [2.5, 7.5];
        assert_near(
            calculate_sweep_value(
                1.0,
                2.0,
                &values,
                1,
                1,
                SweepMode::List,
                LogarithmicInterpretation::EndPointRatio,
            ),
            7.5,
        );
        for index in [-1, 2] {
            assert_eq!(
                calculate_sweep_value(
                    1.0,
                    2.0,
                    &values,
                    1,
                    index,
                    SweepMode::List,
                    LogarithmicInterpretation::EndPointRatio,
                )
                .to_bits(),
                0.0_f64.to_bits()
            );
        }
    }

    #[test]
    fn logarithmic_sweep_requires_positive_distinct_endpoints() {
        let mut record = ParameterStepRecord::defaults("R".to_owned(), 10.0);
        record.sweep_mode = SweepMode::Logarithmic;
        record.start = 0.0;
        assert_eq!(
            record.validate(),
            Err(StepValidationError::NonPositiveLogarithmicEndpoint)
        );
        record.start = 10.0;
        record.end = 10.0;
        assert_eq!(record.validate(), Err(StepValidationError::EqualEndpoints));
    }

    #[test]
    fn empty_list_mode_is_stored_as_linear() {
        let mut record = ParameterStepRecord::defaults("R".to_owned(), 10.0);
        record.sweep_mode = SweepMode::List;

        record.normalize_list_ownership();

        assert_eq!(record.sweep_mode, SweepMode::Linear);
    }
}
