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
    use super::{ParameterStepRecord, StepValidationError, SweepMode};

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
