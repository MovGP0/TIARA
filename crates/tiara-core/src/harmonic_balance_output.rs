//! Harmonic Balance result parsing.

use std::fmt;

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct ComplexValue {
    pub first: f64,
    pub second: f64,
}

impl ComplexValue {
    #[must_use]
    pub const fn new(first: f64, second: f64) -> Self {
        Self { first, second }
    }
}

#[derive(Debug, Clone, PartialEq)]
pub struct FrequencyRecord {
    pub frequency: f64,
    pub values: Vec<ComplexValue>,
}

#[derive(Debug, Clone, PartialEq, Default)]
pub struct HarmonicBalanceOutput {
    pub records: Vec<FrequencyRecord>,
    pub complex_value_count: usize,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum HarmonicBalanceOutputError {
    ResultNotFound,
    NetlistError { diagnostic: String },
    InvalidHeader,
    InvalidNumber { line: usize, value: String },
    InvalidValueCount { line: usize },
}

impl fmt::Display for HarmonicBalanceOutputError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::ResultNotFound => formatter.write_str("HB result not found"),
            Self::NetlistError { .. } => formatter.write_str("Netlist error"),
            Self::InvalidHeader => formatter.write_str("Invalid HB result header"),
            Self::InvalidNumber { line, value } => {
                write!(formatter, "Invalid HB number '{value}' on line {line}")
            }
            Self::InvalidValueCount { line } => {
                write!(formatter, "Invalid HB value count on line {line}")
            }
        }
    }
}

impl std::error::Error for HarmonicBalanceOutputError {}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct HarmonicBalanceMeter {
    pub name: String,
    pub positive_node: String,
    pub negative_node: Option<String>,
}

#[derive(Debug, Clone, PartialEq)]
pub struct HarmonicBalanceRunRequest {
    pub harmonic_counts: Vec<i32>,
    pub base_frequencies: Vec<f64>,
    pub output_name: String,
    pub format_index: i32,
    pub initialization_option: Option<String>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct HarmonicBalanceRunPlan {
    pub options_directive: String,
    pub frequency_directive: String,
    pub print_directive: String,
    pub working_file_name: String,
    pub simulator_name: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct HarmonicBalanceRunArtifacts {
    pub cancelled: bool,
    pub result: Option<String>,
    pub simulator_log: Option<String>,
}

pub trait HarmonicBalanceRuntime {
    fn derive_initialization_mode(&mut self) -> i32;

    /// Updates the working netlist and runs its selected simulator.
    ///
    /// # Errors
    ///
    /// Returns a message when netlist preparation or simulator execution fails.
    fn run(&mut self, plan: &HarmonicBalanceRunPlan)
    -> Result<HarmonicBalanceRunArtifacts, String>;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum HarmonicBalanceRunOutcome {
    Completed,
    Cancelled,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum HarmonicBalanceRunError {
    EmptyMeter,
    MeterNotFound(String),
    InvalidInitializationMode(i32),
    Runtime(String),
    Output(HarmonicBalanceOutputError),
}

impl fmt::Display for HarmonicBalanceRunError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::EmptyMeter => formatter.write_str("Meter string is empty"),
            Self::MeterNotFound(name) => write!(formatter, "Meter not found: {name}"),
            Self::InvalidInitializationMode(_) => {
                formatter.write_str("HB init mode invalid parameter value (valid range: 1..3)")
            }
            Self::Runtime(message) => formatter.write_str(message),
            Self::Output(error) => error.fmt(formatter),
        }
    }
}

impl std::error::Error for HarmonicBalanceRunError {}

#[derive(Debug, Clone, PartialEq, Default)]
pub struct HarmonicBalanceAnalysis {
    pub harmonic_counts: Vec<i32>,
    pub base_frequencies: Vec<f64>,
    pub output_name: String,
    pub format_index: i32,
    pub voltage_expression: String,
    pub output: HarmonicBalanceOutput,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct HarmonicBalancePlotValue {
    pub magnitude: f64,
    pub phase_radians: f64,
}

#[derive(Debug, Clone, PartialEq)]
pub struct HarmonicBalancePlotRecord {
    pub normalized_frequency: f64,
    pub values: Vec<HarmonicBalancePlotValue>,
}

#[derive(Debug, Clone, PartialEq)]
pub struct HarmonicBalancePlotData {
    pub maximum_base_frequency: f64,
    pub records: Vec<HarmonicBalancePlotRecord>,
    pub display_mode: i32,
}

pub trait HarmonicBalanceDiagramHost {
    fn replace_current_and_show(&mut self, data: HarmonicBalancePlotData);
}

impl HarmonicBalanceAnalysis {
    /// Implements Ghidra function `FUN_01b4f420` at `0x01B4F420`.
    ///
    /// Clears prior results, copies the requested settings, resolves the meter
    /// to a one-node or differential voltage expression, builds the Harmonic
    /// Balance directives, and asks the runtime to update the working netlist
    /// and run the selected simulator. A cancelled run leaves results empty.
    /// Other completed runs are parsed into owned frequency records.
    ///
    /// # Errors
    ///
    /// Returns a typed error for empty or unknown meters, invalid derived
    /// initialization modes, runtime failures, or invalid simulator output.
    pub fn configure_and_run(
        &mut self,
        request: HarmonicBalanceRunRequest,
        meters: &[HarmonicBalanceMeter],
        runtime: &mut impl HarmonicBalanceRuntime,
    ) -> Result<HarmonicBalanceRunOutcome, HarmonicBalanceRunError> {
        self.output = HarmonicBalanceOutput::default();
        self.voltage_expression.clear();
        self.harmonic_counts.clone_from(&request.harmonic_counts);
        self.base_frequencies.clone_from(&request.base_frequencies);
        request.output_name.clone_into(&mut self.output_name);
        self.format_index = request.format_index;

        if self.output_name.is_empty() {
            return Err(HarmonicBalanceRunError::EmptyMeter);
        }
        let meter = meters
            .iter()
            .find(|meter| meter.name == self.output_name)
            .ok_or_else(|| HarmonicBalanceRunError::MeterNotFound(self.output_name.clone()))?;
        self.voltage_expression = match meter.negative_node.as_deref() {
            Some(negative) if !negative.is_empty() => {
                format!("V({},{negative})", meter.positive_node)
            }
            _ => format!("V({})", meter.positive_node),
        };

        let initialization_option = if let Some(option) = request.initialization_option {
            option
        } else {
            let mode = runtime.derive_initialization_mode();
            if !(1..=3).contains(&mode) {
                return Err(HarmonicBalanceRunError::InvalidInitializationMode(mode));
            }
            format!("TAHB={}", mode - 1)
        };
        let counts = join_display_values(&self.harmonic_counts);
        let frequencies = join_display_values(&self.base_frequencies);
        let plan = HarmonicBalanceRunPlan {
            options_directive: format!(".OPTIONS HBINT numfreq={counts} {initialization_option}"),
            frequency_directive: format!(".HB {frequencies}"),
            print_directive: format!(".PRINT HB {}", self.voltage_expression),
            working_file_name: "circuit.cir".to_owned(),
            simulator_name: "xyce".to_owned(),
        };
        let artifacts = runtime
            .run(&plan)
            .map_err(HarmonicBalanceRunError::Runtime)?;
        if artifacts.cancelled {
            return Ok(HarmonicBalanceRunOutcome::Cancelled);
        }
        self.output = parse_harmonic_balance_output(
            artifacts.result.as_deref(),
            artifacts.simulator_log.as_deref(),
        )
        .map_err(HarmonicBalanceRunError::Output)?;
        Ok(HarmonicBalanceRunOutcome::Completed)
    }

    /// Implements Ghidra function `FUN_01b50510` at `0x01B50510`.
    ///
    /// Replaces the shared diagram data with normalized Harmonic Balance rows.
    /// Each complex pair becomes magnitude and phase in radians. Saved format
    /// 1 maps to diagram mode 2; other format values pass through unchanged.
    /// The recovered path does not guard a zero normalization frequency.
    pub fn build_and_display_diagram(&self, host: &mut impl HarmonicBalanceDiagramHost) {
        let maximum_base_frequency = largest_base_frequency(&self.base_frequencies);
        let records = self
            .output
            .records
            .iter()
            .map(|record| HarmonicBalancePlotRecord {
                normalized_frequency: record.frequency / maximum_base_frequency,
                values: record
                    .values
                    .iter()
                    .map(|value| HarmonicBalancePlotValue {
                        magnitude: value.first.hypot(value.second),
                        phase_radians: recovered_complex_phase(*value),
                    })
                    .collect(),
            })
            .collect();
        host.replace_current_and_show(HarmonicBalancePlotData {
            maximum_base_frequency,
            records,
            display_mode: if self.format_index == 1 {
                2
            } else {
                self.format_index
            },
        });
    }
}

fn join_display_values<T: fmt::Display>(values: &[T]) -> String {
    values
        .iter()
        .map(ToString::to_string)
        .collect::<Vec<_>>()
        .join(",")
}

/// Implements Ghidra function `FUN_01b50450` at `0x01B50450`.
///
/// Returns the largest positive Harmonic Balance base frequency. The scan
/// starts at zero and uses a strict greater-than comparison. Empty arrays,
/// negative-only arrays, and NaN elements therefore do not reduce the result.
#[must_use]
pub fn largest_base_frequency(frequencies: &[f64]) -> f64 {
    frequencies.iter().fold(0.0, |largest, frequency| {
        if largest < *frequency {
            *frequency
        } else {
            largest
        }
    })
}

fn recovered_complex_phase(value: ComplexValue) -> f64 {
    let mut phase = if value.first == 0.0 {
        if value.second > 0.0 {
            std::f64::consts::FRAC_PI_2
        } else if value.second == 0.0 {
            0.0
        } else {
            -std::f64::consts::FRAC_PI_2
        }
    } else {
        (value.second / value.first).atan()
    };
    if value.first < 0.0 {
        phase = if value.second == 0.0 {
            std::f64::consts::PI
        } else if value.second <= 0.0 {
            phase - std::f64::consts::PI
        } else {
            phase + std::f64::consts::PI
        };
    }
    phase
}

/// Implements Ghidra function `FUN_01b4d0a0` at `0x01B4D0A0`.
///
/// Parses a normalized Harmonic Balance table into frequency records and
/// complex-value arrays. The first header field names the frequency. Every
/// remaining pair of header fields defines one complex value. Data rows use a
/// frequency followed by the corresponding value pairs. Rows that contain
/// `End of` are ignored, and negative frequencies are not stored.
///
/// When result text is absent, the function examines the optional simulator
/// log. A case-insensitive `netlist error` match returns the log tail from the
/// matching line and removes the simulator name `Xyce`. Other missing-result
/// paths return `ResultNotFound`.
///
/// # Errors
///
/// Returns a typed error for missing output, simulator netlist errors, invalid
/// headers, invalid numbers, or rows whose value count does not match the
/// header.
pub fn parse_harmonic_balance_output(
    result: Option<&str>,
    simulator_log: Option<&str>,
) -> Result<HarmonicBalanceOutput, HarmonicBalanceOutputError> {
    let Some(result) = result else {
        return Err(missing_result_error(simulator_log));
    };

    let mut lines = result.lines().enumerate();
    let Some((_, header)) = lines.find(|(_, line)| !line.trim().is_empty()) else {
        return Err(HarmonicBalanceOutputError::InvalidHeader);
    };
    let header_value_fields = header.split_whitespace().count().saturating_sub(1);
    if header_value_fields == 0 || header_value_fields % 2 != 0 {
        return Err(HarmonicBalanceOutputError::InvalidHeader);
    }
    let complex_value_count = header_value_fields / 2;
    let expected_number_count = 1 + complex_value_count * 2;
    let mut records = Vec::new();

    for (line_index, line) in lines {
        let line_number = line_index + 1;
        let line = line.trim();
        if line.is_empty() || line.contains("End of") {
            continue;
        }
        let fields: Vec<_> = line.split_whitespace().collect();
        if fields.len() != expected_number_count {
            return Err(HarmonicBalanceOutputError::InvalidValueCount { line: line_number });
        }
        let numbers = fields
            .iter()
            .map(|value| {
                value
                    .parse::<f64>()
                    .map_err(|_| HarmonicBalanceOutputError::InvalidNumber {
                        line: line_number,
                        value: (*value).to_owned(),
                    })
            })
            .collect::<Result<Vec<_>, _>>()?;
        if numbers[0] < 0.0 {
            continue;
        }
        let values = numbers[1..]
            .chunks_exact(2)
            .map(|pair| ComplexValue::new(pair[0], pair[1]))
            .collect();
        records.push(FrequencyRecord {
            frequency: numbers[0],
            values,
        });
    }

    Ok(HarmonicBalanceOutput {
        records,
        complex_value_count,
    })
}

fn missing_result_error(simulator_log: Option<&str>) -> HarmonicBalanceOutputError {
    let Some(log) = simulator_log else {
        return HarmonicBalanceOutputError::ResultNotFound;
    };
    let lines: Vec<_> = log.lines().collect();
    let Some(first_error) = lines
        .iter()
        .position(|line| line.to_lowercase().contains("netlist error"))
    else {
        return HarmonicBalanceOutputError::ResultNotFound;
    };
    let diagnostic = lines[first_error..]
        .iter()
        .map(|line| line.replace("Xyce", ""))
        .collect::<Vec<_>>()
        .join("\n");
    HarmonicBalanceOutputError::NetlistError { diagnostic }
}

#[cfg(test)]
mod tests {
    use super::{
        ComplexValue, FrequencyRecord, HarmonicBalanceAnalysis, HarmonicBalanceDiagramHost,
        HarmonicBalanceMeter, HarmonicBalanceOutput, HarmonicBalanceOutputError,
        HarmonicBalancePlotData, HarmonicBalanceRunArtifacts, HarmonicBalanceRunError,
        HarmonicBalanceRunOutcome, HarmonicBalanceRunPlan, HarmonicBalanceRunRequest,
        HarmonicBalanceRuntime, largest_base_frequency, parse_harmonic_balance_output,
    };

    #[derive(Default)]
    struct Runtime {
        initialization_mode: i32,
        artifacts: Option<HarmonicBalanceRunArtifacts>,
        plan: Option<HarmonicBalanceRunPlan>,
    }

    #[derive(Default)]
    struct DiagramHost(Option<HarmonicBalancePlotData>);

    impl HarmonicBalanceDiagramHost for DiagramHost {
        fn replace_current_and_show(&mut self, data: HarmonicBalancePlotData) {
            self.0 = Some(data);
        }
    }

    impl HarmonicBalanceRuntime for Runtime {
        fn derive_initialization_mode(&mut self) -> i32 {
            self.initialization_mode
        }

        fn run(
            &mut self,
            plan: &HarmonicBalanceRunPlan,
        ) -> Result<HarmonicBalanceRunArtifacts, String> {
            self.plan = Some(plan.clone());
            Ok(self.artifacts.take().expect("test artifacts"))
        }
    }

    fn request(output_name: &str) -> HarmonicBalanceRunRequest {
        HarmonicBalanceRunRequest {
            harmonic_counts: vec![3, 1],
            base_frequencies: vec![1_000.0, 2_000.0],
            output_name: output_name.to_owned(),
            format_index: 1,
            initialization_option: None,
        }
    }

    fn meter() -> HarmonicBalanceMeter {
        HarmonicBalanceMeter {
            name: "OUT".to_owned(),
            positive_node: "n1".to_owned(),
            negative_node: Some("n2".to_owned()),
        }
    }

    #[test]
    fn parses_complex_rows_and_skips_negative_frequencies_and_end_markers() {
        let source = "frequency a.real a.imag b.real b.imag\n\
                      -1 9 8 7 6\n\
                      1000 1 2 3 4\n\
                      End of sweep\n\
                      2000 5 6 7 8\n";

        let output = parse_harmonic_balance_output(Some(source), None).expect("valid output");

        assert_eq!(
            output,
            HarmonicBalanceOutput {
                records: vec![
                    FrequencyRecord {
                        frequency: 1_000.0,
                        values: vec![ComplexValue::new(1.0, 2.0), ComplexValue::new(3.0, 4.0)],
                    },
                    FrequencyRecord {
                        frequency: 2_000.0,
                        values: vec![ComplexValue::new(5.0, 6.0), ComplexValue::new(7.0, 8.0)],
                    },
                ],
                complex_value_count: 2,
            }
        );
    }

    #[test]
    fn missing_result_extracts_netlist_error_tail_without_simulator_name() {
        let log = "startup\nXyce netlist error at R1\nXyce stopped";

        let error = parse_harmonic_balance_output(None, Some(log)).expect_err("netlist error");

        assert_eq!(
            error,
            HarmonicBalanceOutputError::NetlistError {
                diagnostic: " netlist error at R1\n stopped".to_owned(),
            }
        );
    }

    #[test]
    fn missing_result_without_netlist_marker_reports_not_found() {
        assert_eq!(
            parse_harmonic_balance_output(None, Some("run stopped")).expect_err("missing"),
            HarmonicBalanceOutputError::ResultNotFound
        );
    }

    #[test]
    fn row_must_match_complex_value_count_from_header() {
        let error = parse_harmonic_balance_output(Some("frequency a.real a.imag\n1000 1"), None)
            .expect_err("short row");

        assert_eq!(
            error,
            HarmonicBalanceOutputError::InvalidValueCount { line: 2 }
        );
    }

    #[test]
    fn coordinator_builds_directives_runs_and_stores_parsed_output() {
        let mut analysis = HarmonicBalanceAnalysis::default();
        let mut runtime = Runtime {
            initialization_mode: 2,
            artifacts: Some(HarmonicBalanceRunArtifacts {
                cancelled: false,
                result: Some("frequency out.real out.imag\n1000 4 5".to_owned()),
                simulator_log: None,
            }),
            plan: None,
        };

        let outcome = analysis
            .configure_and_run(request("OUT"), &[meter()], &mut runtime)
            .expect("completed run");

        assert_eq!(outcome, HarmonicBalanceRunOutcome::Completed);
        assert_eq!(analysis.harmonic_counts, [3, 1]);
        assert_eq!(analysis.base_frequencies, [1_000.0, 2_000.0]);
        assert_eq!(analysis.voltage_expression, "V(n1,n2)");
        assert_eq!(analysis.output.records.len(), 1);
        assert_eq!(
            runtime.plan,
            Some(HarmonicBalanceRunPlan {
                options_directive: ".OPTIONS HBINT numfreq=3,1 TAHB=1".to_owned(),
                frequency_directive: ".HB 1000,2000".to_owned(),
                print_directive: ".PRINT HB V(n1,n2)".to_owned(),
                working_file_name: "circuit.cir".to_owned(),
                simulator_name: "xyce".to_owned(),
            })
        );
    }

    #[test]
    fn unknown_meter_keeps_copied_request_and_cleared_results() {
        let mut analysis = HarmonicBalanceAnalysis {
            output: HarmonicBalanceOutput {
                records: vec![FrequencyRecord {
                    frequency: 1.0,
                    values: Vec::new(),
                }],
                complex_value_count: 0,
            },
            ..HarmonicBalanceAnalysis::default()
        };
        let mut runtime = Runtime::default();

        let error = analysis
            .configure_and_run(request("UNKNOWN"), &[meter()], &mut runtime)
            .expect_err("unknown meter");

        assert_eq!(
            error,
            HarmonicBalanceRunError::MeterNotFound("UNKNOWN".to_owned())
        );
        assert_eq!(analysis.output, HarmonicBalanceOutput::default());
        assert_eq!(analysis.harmonic_counts, [3, 1]);
        assert_eq!(analysis.output_name, "UNKNOWN");
        assert!(runtime.plan.is_none());
    }

    #[test]
    fn cancelled_run_leaves_prior_results_cleared() {
        let mut analysis = HarmonicBalanceAnalysis::default();
        let mut runtime = Runtime {
            initialization_mode: 1,
            artifacts: Some(HarmonicBalanceRunArtifacts {
                cancelled: true,
                result: None,
                simulator_log: None,
            }),
            plan: None,
        };

        let outcome = analysis
            .configure_and_run(request("OUT"), &[meter()], &mut runtime)
            .expect("cancelled run");

        assert_eq!(outcome, HarmonicBalanceRunOutcome::Cancelled);
        assert_eq!(analysis.output, HarmonicBalanceOutput::default());
    }

    #[test]
    fn largest_frequency_starts_at_zero_and_ignores_nan_and_negative_values() {
        assert!(largest_base_frequency(&[]).abs() < f64::EPSILON);
        assert!(largest_base_frequency(&[-5.0, -1.0]).abs() < f64::EPSILON);
        assert!((largest_base_frequency(&[f64::NAN, 3.0, 2.0]) - 3.0).abs() < f64::EPSILON);
    }

    #[test]
    fn diagram_normalizes_frequency_converts_complex_values_and_maps_format() {
        let analysis = HarmonicBalanceAnalysis {
            base_frequencies: vec![1_000.0, 2_000.0],
            format_index: 1,
            output: HarmonicBalanceOutput {
                records: vec![FrequencyRecord {
                    frequency: 1_000.0,
                    values: vec![ComplexValue::new(3.0, 4.0), ComplexValue::new(0.0, -2.0)],
                }],
                complex_value_count: 2,
            },
            ..HarmonicBalanceAnalysis::default()
        };
        let mut host = DiagramHost::default();

        analysis.build_and_display_diagram(&mut host);

        let data = host.0.expect("diagram data");
        assert!((data.maximum_base_frequency - 2_000.0).abs() < f64::EPSILON);
        assert_eq!(data.display_mode, 2);
        assert!((data.records[0].normalized_frequency - 0.5).abs() < f64::EPSILON);
        assert!((data.records[0].values[0].magnitude - 5.0).abs() < f64::EPSILON);
        assert!(
            (data.records[0].values[0].phase_radians - 4.0_f64.atan2(3.0)).abs() < f64::EPSILON
        );
        assert!(
            (data.records[0].values[1].phase_radians + std::f64::consts::FRAC_PI_2).abs()
                < f64::EPSILON
        );
    }
}
