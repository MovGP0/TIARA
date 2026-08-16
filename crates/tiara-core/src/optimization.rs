use std::fmt;

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum SearchMethod {
    #[default]
    Simple,
    Pattern,
}

impl SearchMethod {
    #[must_use]
    pub const fn from_index(index: i32) -> Option<Self> {
        match index {
            0 => Some(Self::Simple),
            1 => Some(Self::Pattern),
            _ => None,
        }
    }

    #[must_use]
    pub const fn index(self) -> i32 {
        match self {
            Self::Simple => 0,
            Self::Pattern => 1,
        }
    }
}

impl fmt::Display for SearchMethod {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::Simple => "Simple Search",
            Self::Pattern => "Pattern Search",
        })
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum ParameterScale {
    #[default]
    Linear,
    Logarithmic,
}

impl fmt::Display for ParameterScale {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::Linear => "Linear",
            Self::Logarithmic => "Logarithmic",
        })
    }
}

#[derive(Debug, Clone, PartialEq)]
pub struct OptimizationParameter {
    pub name: String,
    pub lower_bound: f64,
    pub upper_bound: f64,
    pub value: f64,
}

impl OptimizationParameter {
    pub const fn clamp_to_bounds(&mut self) {
        self.value = self.value.clamp(self.lower_bound, self.upper_bound);
    }
}

#[derive(Debug, Clone, PartialEq)]
pub struct OptimizationSettings {
    pub method: SearchMethod,
    pub relative_error: f64,
    pub maximum_iterations: u16,
    pub simple_subdivisions: u16,
    pub pattern_subdivisions: u16,
    pub parameter_scale: ParameterScale,
    pub parameters: Vec<OptimizationParameter>,
}

impl Default for OptimizationSettings {
    fn default() -> Self {
        Self {
            method: SearchMethod::Simple,
            relative_error: 0.001,
            maximum_iterations: 100,
            simple_subdivisions: 10,
            pattern_subdivisions: 10,
            parameter_scale: ParameterScale::Linear,
            parameters: Vec::new(),
        }
    }
}

impl OptimizationSettings {
    pub fn clamp_pattern_parameters(&mut self) {
        if self.method != SearchMethod::Pattern {
            return;
        }

        for parameter in &mut self.parameters {
            parameter.clamp_to_bounds();
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct OrderedRange {
    pub points: u16,
    pub start: f64,
    pub end: f64,
}

impl OrderedRange {
    /// Validates the frequency range used by the recovered `TOpt_W` dialog.
    ///
    /// # Errors
    ///
    /// Returns [`RangeError::Frequency`] unless `0 < start < end <= 1e50`.
    pub fn validate_frequency(self) -> Result<Self, RangeError> {
        if self.start > 0.0 && self.end > self.start && self.end <= 1.0e50 {
            Ok(self)
        } else {
            Err(RangeError::Frequency)
        }
    }

    /// Validates the ordered part of a DC optimization range.
    ///
    /// # Errors
    ///
    /// Returns [`RangeError::Order`] when the end value is not greater than
    /// the start value.
    pub fn validate_order(self) -> Result<Self, RangeError> {
        if self.end > self.start {
            Ok(self)
        } else {
            Err(RangeError::Order)
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum RangeError {
    Frequency,
    Order,
}

impl fmt::Display for RangeError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::Frequency => "The frequency range must satisfy 0 < start < end <= 1e50.",
            Self::Order => "The end value must be greater than the start value.",
        })
    }
}

impl std::error::Error for RangeError {}

#[cfg(test)]
mod tests {
    use super::{
        OptimizationParameter, OptimizationSettings, OrderedRange, RangeError, SearchMethod,
    };

    #[test]
    fn pattern_search_clamps_each_value_to_its_own_bounds() {
        let mut settings = OptimizationSettings {
            method: SearchMethod::Pattern,
            parameters: vec![
                OptimizationParameter {
                    name: "low".to_owned(),
                    lower_bound: 1.0,
                    upper_bound: 2.0,
                    value: 0.0,
                },
                OptimizationParameter {
                    name: "high".to_owned(),
                    lower_bound: 3.0,
                    upper_bound: 4.0,
                    value: 5.0,
                },
            ],
            ..OptimizationSettings::default()
        };

        settings.clamp_pattern_parameters();

        assert!((settings.parameters[0].value - 1.0).abs() <= f64::EPSILON);
        assert!((settings.parameters[1].value - 4.0).abs() <= f64::EPSILON);
    }

    #[test]
    fn frequency_range_enforces_all_three_recovered_limits() {
        let valid = OrderedRange {
            points: 10,
            start: 1.0,
            end: 2.0,
        };
        assert_eq!(valid.validate_frequency(), Ok(valid));
        assert_eq!(
            OrderedRange {
                points: 10,
                start: 0.0,
                end: 2.0,
            }
            .validate_frequency(),
            Err(RangeError::Frequency)
        );
        assert_eq!(
            OrderedRange {
                points: 10,
                start: 2.0,
                end: 1.0,
            }
            .validate_frequency(),
            Err(RangeError::Frequency)
        );
    }
}
