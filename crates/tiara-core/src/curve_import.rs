//! Delimited curve import and format dispatch.
//!
//! The Rust standard library supplies the exact-substring splitting and
//! numeric conversion used here. The maintained `csv` crate was evaluated but
//! rejected because CSV quoting and record rules would change the recovered
//! literal-delimiter behavior.

use std::error::Error;
use std::fmt;

const DEGREES_TO_RADIANS: f64 = std::f64::consts::PI / 180.0;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CurveDomain {
    Time,
    Frequency,
}

#[derive(Debug, Clone, PartialEq)]
pub struct ScalarCurve {
    pub name: String,
    pub values: Vec<f64>,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct PolarValue {
    pub magnitude: f64,
    pub phase_radians: f64,
}

#[derive(Debug, Clone, PartialEq)]
pub struct PolarCurve {
    pub name: String,
    pub values: Vec<PolarValue>,
}

#[derive(Debug, Clone, PartialEq)]
pub enum CurveImportData {
    TimeSeries {
        independent_values: Vec<f64>,
        curves: Vec<ScalarCurve>,
    },
    FrequencyDomain {
        frequencies: Vec<f64>,
        curves: Vec<PolarCurve>,
    },
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum CurveImportDestination {
    NewDiagram(CurveDomain),
    ActiveDiagram(CurveDomain),
    FourierDiagram { display_format: u8, label: String },
}

#[derive(Debug, Clone, PartialEq)]
pub struct CurveImport {
    pub format_code: u8,
    pub data: CurveImportData,
    pub destination: CurveImportDestination,
}

#[derive(Debug, Clone, PartialEq)]
pub enum CurveImportOutcome {
    Imported(CurveImport),
    Cancelled,
    UnsupportedFormat(u8),
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum CurveImportErrorKind {
    EmptyDelimiter,
    MissingRow {
        row_index: usize,
    },
    MissingField {
        row_index: usize,
        field_index: usize,
    },
    InvalidNumber {
        row_index: usize,
        field_index: usize,
        value: String,
    },
    InvalidChannel {
        row_index: usize,
        field_index: usize,
        value: String,
    },
    WrongParser {
        format_code: u8,
    },
}

impl fmt::Display for CurveImportErrorKind {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::EmptyDelimiter => formatter.write_str("the field delimiter is empty"),
            Self::MissingRow { row_index } => {
                write!(formatter, "row {row_index} does not exist")
            }
            Self::MissingField {
                row_index,
                field_index,
            } => write!(
                formatter,
                "field {field_index} does not exist in row {row_index}"
            ),
            Self::InvalidNumber {
                row_index,
                field_index,
                value,
            } => write!(
                formatter,
                "field {field_index} in row {row_index} is not a number: {value}"
            ),
            Self::InvalidChannel {
                row_index,
                field_index,
                value,
            } => write!(
                formatter,
                "field {field_index} in row {row_index} is not a positive channel number: {value}"
            ),
            Self::WrongParser { format_code } => {
                write!(formatter, "format {format_code} does not use this parser")
            }
        }
    }
}

#[derive(Debug, Clone, PartialEq)]
pub struct CurveImportError {
    pub kind: CurveImportErrorKind,
    pub partial: Box<CurveImport>,
}

impl fmt::Display for CurveImportError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        self.kind.fmt(formatter)
    }
}

impl Error for CurveImportError {}

#[derive(Debug, Clone, Copy)]
pub struct CurveImportRequest<'a> {
    pub format_code: u8,
    pub lines: &'a [String],
    pub skip_rows: usize,
    pub delimiter: &'a str,
    pub amplitude_in_decibels: bool,
    pub display_format: u8,
    pub insert_into_active_diagram: bool,
}

pub trait CurveImportObserver {
    fn is_cancelled(&self) -> bool;
    fn report_progress(&mut self, percentage: u8);
}

#[derive(Debug, Default)]
pub struct IgnoreCurveImportProgress;

impl CurveImportObserver for IgnoreCurveImportProgress {
    fn is_cancelled(&self) -> bool {
        false
    }

    fn report_progress(&mut self, _percentage: u8) {}
}

#[must_use]
pub const fn is_supported_curve_import_format(format_code: u8) -> bool {
    matches!(format_code, 1..=9)
}

/// Ports Ghidra function `FUN_013e26f0` at `0x013E26F0`.
///
/// Routes the recovered internal format codes to their format-specific parser.
/// Unsupported codes do not call a parser and do not report progress.
///
/// # Errors
///
/// Returns a numeric, channel, delimiter, or row error from the selected
/// parser. The error contains the partially built replacement result.
pub fn dispatch_curve_import(
    request: &CurveImportRequest<'_>,
    observer: &mut impl CurveImportObserver,
) -> Result<CurveImportOutcome, CurveImportError> {
    match request.format_code {
        1 | 2 | 7 => parse_time_series_curves(request, observer),
        3..=6 | 8 => parse_frequency_domain_curves(request, observer),
        9 => parse_discrete_fourier_curves(request, observer),
        format_code => Ok(CurveImportOutcome::UnsupportedFormat(format_code)),
    }
}

/// Ports Ghidra function `FUN_013e2850` at `0x013E2850`.
///
/// Parses time/value rows and multi-channel time-series rows. Format `7` uses
/// a preceding row as channel names only when it has the same field count as
/// the first data row. Cancellation discards the new result.
///
/// # Errors
///
/// Returns a delimiter, row, or numeric conversion error with the partial new
/// result.
pub fn parse_time_series_curves(
    request: &CurveImportRequest<'_>,
    observer: &mut impl CurveImportObserver,
) -> Result<CurveImportOutcome, CurveImportError> {
    let destination = diagram_destination(CurveDomain::Time, request.insert_into_active_diagram);
    let mut result = CurveImport {
        format_code: request.format_code,
        data: CurveImportData::TimeSeries {
            independent_values: Vec::new(),
            curves: Vec::new(),
        },
        destination,
    };

    if !matches!(request.format_code, 1 | 2 | 7) {
        return Err(import_error(
            &result,
            CurveImportErrorKind::WrongParser {
                format_code: request.format_code,
            },
        ));
    }

    let first_line = request
        .lines
        .get(request.skip_rows)
        .ok_or_else(|| import_error(&result, missing_row(request.skip_rows)))?;
    let first_fields = split_fields(first_line, request.delimiter, &result)?;
    let names = if request.format_code == 7 {
        time_series_channel_names(request, first_fields.len(), &result)?
    } else {
        vec!["Imported".to_owned()]
    };
    set_scalar_curve_names(&mut result, names);

    let row_count = request.lines.len().saturating_sub(request.skip_rows);
    for (offset, line) in request.lines[request.skip_rows..].iter().enumerate() {
        if observer.is_cancelled() {
            return Ok(CurveImportOutcome::Cancelled);
        }
        observer.report_progress(progress_percentage(offset, row_count));

        let row_index = request.skip_rows + offset;
        let fields = split_fields(line, request.delimiter, &result)?;
        let values = parse_all_fields(&fields, row_index, &result)?;
        let Some((&independent, channel_values)) = values.split_first() else {
            continue;
        };
        append_scalar_row(&mut result, independent, channel_values);
    }

    observer.report_progress(100);
    Ok(CurveImportOutcome::Imported(result))
}

/// Ports Ghidra function `FUN_013e34c0` at `0x013E34C0`.
///
/// Parses the recovered AC and frequency-domain layouts. It converts fixed or
/// selected dB magnitudes with `10^(dB / 20)` and converts phase degrees to
/// radians. Layout-specific field-count mismatches are skipped where the
/// recovered parser skips them.
///
/// # Errors
///
/// Returns a delimiter, row, field, channel, or numeric conversion error with
/// the partial new result.
pub fn parse_frequency_domain_curves(
    request: &CurveImportRequest<'_>,
    observer: &mut impl CurveImportObserver,
) -> Result<CurveImportOutcome, CurveImportError> {
    let destination =
        diagram_destination(CurveDomain::Frequency, request.insert_into_active_diagram);
    let mut result = CurveImport {
        format_code: request.format_code,
        data: CurveImportData::FrequencyDomain {
            frequencies: Vec::new(),
            curves: Vec::new(),
        },
        destination,
    };

    if !matches!(request.format_code, 3..=6 | 8) {
        return Err(import_error(
            &result,
            CurveImportErrorKind::WrongParser {
                format_code: request.format_code,
            },
        ));
    }

    let import_lines = request
        .lines
        .get(request.skip_rows..)
        .ok_or_else(|| import_error(&result, missing_row(request.skip_rows)))?;
    let channel_count = frequency_channel_count(request, &result)?;
    set_polar_curve_count(&mut result, channel_count.max(1));
    let row_count = import_lines.len();

    for (offset, line) in import_lines.iter().enumerate() {
        if observer.is_cancelled() {
            return Ok(CurveImportOutcome::Cancelled);
        }
        observer.report_progress(progress_percentage(offset, row_count));

        let row_index = request.skip_rows + offset;
        let fields = split_fields(line, request.delimiter, &result)?;
        match request.format_code {
            3 => parse_indexed_frequency_row(&fields, row_index, request.skip_rows, &mut result)?,
            4 => parse_fixed_frequency_row(&fields, row_index, true, &mut result)?,
            5 => parse_analyzer_frequency_row(&fields, row_index, 1, 2, &mut result)?,
            6 => parse_analyzer_frequency_row(&fields, row_index, 2, 3, &mut result)?,
            8 => parse_paired_frequency_row(
                &fields,
                row_index,
                request.amplitude_in_decibels,
                &mut result,
            )?,
            _ => unreachable!("the parser format was validated"),
        }
    }

    observer.report_progress(100);
    Ok(CurveImportOutcome::Imported(result))
}

/// Ports Ghidra function `FUN_013e4610` at `0x013E4610`.
///
/// Parses frequency followed by magnitude/phase pairs and always selects the
/// specialized Fourier diagram route. The active-diagram option is not used.
///
/// # Errors
///
/// Returns a delimiter, row, field, or numeric conversion error with the
/// partial new result.
pub fn parse_discrete_fourier_curves(
    request: &CurveImportRequest<'_>,
    observer: &mut impl CurveImportObserver,
) -> Result<CurveImportOutcome, CurveImportError> {
    let mut result = CurveImport {
        format_code: request.format_code,
        data: CurveImportData::FrequencyDomain {
            frequencies: Vec::new(),
            curves: vec![new_polar_curve(1)],
        },
        destination: CurveImportDestination::FourierDiagram {
            display_format: request.display_format,
            label: String::new(),
        },
    };

    if request.format_code != 9 {
        return Err(import_error(
            &result,
            CurveImportErrorKind::WrongParser {
                format_code: request.format_code,
            },
        ));
    }
    if request.delimiter.is_empty() {
        return Err(import_error(&result, CurveImportErrorKind::EmptyDelimiter));
    }

    let import_lines = request
        .lines
        .get(request.skip_rows..)
        .ok_or_else(|| import_error(&result, missing_row(request.skip_rows)))?;
    let row_count = import_lines.len();
    for (offset, line) in import_lines.iter().enumerate() {
        if line.is_empty() {
            continue;
        }
        if observer.is_cancelled() {
            return Ok(CurveImportOutcome::Cancelled);
        }
        observer.report_progress(progress_percentage(offset, row_count));

        let row_index = request.skip_rows + offset;
        let fields = split_fields(line, request.delimiter, &result)?;
        parse_paired_frequency_row(
            &fields,
            row_index,
            request.amplitude_in_decibels,
            &mut result,
        )?;
    }

    let heading_index = request
        .skip_rows
        .checked_sub(1)
        .ok_or_else(|| import_error(&result, CurveImportErrorKind::MissingRow { row_index: 0 }))?;
    let heading = request
        .lines
        .get(heading_index)
        .ok_or_else(|| import_error(&result, missing_row(heading_index)))?;
    let label = split_fields(heading, request.delimiter, &result)?
        .first()
        .map_or(String::new(), |value| value.trim().to_owned());
    result.destination = CurveImportDestination::FourierDiagram {
        display_format: request.display_format,
        label,
    };

    observer.report_progress(100);
    Ok(CurveImportOutcome::Imported(result))
}

const fn diagram_destination(
    domain: CurveDomain,
    insert_into_active_diagram: bool,
) -> CurveImportDestination {
    if insert_into_active_diagram {
        CurveImportDestination::ActiveDiagram(domain)
    } else {
        CurveImportDestination::NewDiagram(domain)
    }
}

fn time_series_channel_names(
    request: &CurveImportRequest<'_>,
    field_count: usize,
    partial: &CurveImport,
) -> Result<Vec<String>, CurveImportError> {
    let header_fields = request
        .skip_rows
        .checked_sub(1)
        .and_then(|index| request.lines.get(index))
        .map(|line| split_fields(line, request.delimiter, partial))
        .transpose()?
        .unwrap_or_default();

    if header_fields.len() == field_count {
        return Ok(header_fields
            .into_iter()
            .skip(1)
            .map(str::to_owned)
            .collect());
    }

    Ok((1..field_count)
        .map(|index| format!("Channel_{index}"))
        .collect())
}

fn frequency_channel_count(
    request: &CurveImportRequest<'_>,
    partial: &CurveImport,
) -> Result<usize, CurveImportError> {
    match request.format_code {
        3 => {
            let mut maximum = 1;
            let import_lines = request
                .lines
                .get(request.skip_rows..)
                .ok_or_else(|| import_error(partial, missing_row(request.skip_rows)))?;
            for (offset, line) in import_lines.iter().take(11).enumerate() {
                let row_index = request.skip_rows + offset;
                let fields = split_fields(line, request.delimiter, partial)?;
                if fields.len() == 5 {
                    maximum = maximum.max(parse_channel(&fields, row_index, 1, partial)?);
                }
            }
            Ok(maximum)
        }
        8 => {
            let sample_index = request.skip_rows.saturating_add(1);
            let sample = request
                .lines
                .get(sample_index)
                .ok_or_else(|| import_error(partial, missing_row(sample_index)))?;
            let field_count = split_fields(sample, request.delimiter, partial)?.len();
            Ok(field_count.saturating_sub(1) / 2)
        }
        _ => Ok(1),
    }
}

fn parse_indexed_frequency_row(
    fields: &[&str],
    row_index: usize,
    first_row_index: usize,
    result: &mut CurveImport,
) -> Result<(), CurveImportError> {
    if fields.len() != 5 {
        return Ok(());
    }

    let frequency = parse_number(fields, row_index, 0, result)?;
    let channel = parse_channel(fields, row_index, 1, result)?;
    let magnitude = parse_number(fields, row_index, 2, result)?;
    let _unused_value = parse_number(fields, row_index, 3, result)?;
    let phase = parse_number(fields, row_index, 4, result)? * DEGREES_TO_RADIANS;

    if channel == 1 || row_index == first_row_index {
        frequency_data_mut(result).0.push(frequency);
    }
    ensure_polar_curve_count(result, channel);
    frequency_data_mut(result).1[channel - 1]
        .values
        .push(PolarValue {
            magnitude,
            phase_radians: phase,
        });
    Ok(())
}

fn parse_fixed_frequency_row(
    fields: &[&str],
    row_index: usize,
    amplitude_is_decibels: bool,
    result: &mut CurveImport,
) -> Result<(), CurveImportError> {
    if fields.len() != 3 {
        return Ok(());
    }
    let frequency = parse_number(fields, row_index, 0, result)?;
    let magnitude = convert_magnitude(
        parse_number(fields, row_index, 1, result)?,
        amplitude_is_decibels,
    );
    let phase = parse_number(fields, row_index, 2, result)? * DEGREES_TO_RADIANS;
    append_frequency_value(result, frequency, 0, magnitude, phase);
    Ok(())
}

fn parse_analyzer_frequency_row(
    fields: &[&str],
    row_index: usize,
    magnitude_field: usize,
    phase_field: usize,
    result: &mut CurveImport,
) -> Result<(), CurveImportError> {
    let frequency = parse_number(fields, row_index, 0, result)?;
    let magnitude = convert_magnitude(
        parse_number(fields, row_index, magnitude_field, result)?,
        true,
    );
    let phase = parse_number(fields, row_index, phase_field, result)? * DEGREES_TO_RADIANS;
    append_frequency_value(result, frequency, 0, magnitude, phase);
    Ok(())
}

fn parse_paired_frequency_row(
    fields: &[&str],
    row_index: usize,
    amplitude_is_decibels: bool,
    result: &mut CurveImport,
) -> Result<(), CurveImportError> {
    let frequency = parse_number(fields, row_index, 0, result)?;
    frequency_data_mut(result).0.push(frequency);

    for (channel_index, pair) in fields[1..].chunks_exact(2).enumerate() {
        let magnitude = convert_magnitude(
            parse_number(pair, row_index, 0, result)?,
            amplitude_is_decibels,
        );
        let phase = parse_number(pair, row_index, 1, result)? * DEGREES_TO_RADIANS;
        ensure_polar_curve_count(result, channel_index + 1);
        frequency_data_mut(result).1[channel_index]
            .values
            .push(PolarValue {
                magnitude,
                phase_radians: phase,
            });
    }
    Ok(())
}

fn parse_all_fields(
    fields: &[&str],
    row_index: usize,
    partial: &CurveImport,
) -> Result<Vec<f64>, CurveImportError> {
    fields
        .iter()
        .enumerate()
        .map(|(field_index, _)| parse_number(fields, row_index, field_index, partial))
        .collect()
}

fn parse_number(
    fields: &[&str],
    row_index: usize,
    field_index: usize,
    partial: &CurveImport,
) -> Result<f64, CurveImportError> {
    let value = fields.get(field_index).ok_or_else(|| {
        import_error(
            partial,
            CurveImportErrorKind::MissingField {
                row_index,
                field_index,
            },
        )
    })?;
    value.parse::<f64>().map_err(|_| {
        import_error(
            partial,
            CurveImportErrorKind::InvalidNumber {
                row_index,
                field_index,
                value: (*value).to_owned(),
            },
        )
    })
}

fn parse_channel(
    fields: &[&str],
    row_index: usize,
    field_index: usize,
    partial: &CurveImport,
) -> Result<usize, CurveImportError> {
    let value = fields.get(field_index).ok_or_else(|| {
        import_error(
            partial,
            CurveImportErrorKind::MissingField {
                row_index,
                field_index,
            },
        )
    })?;
    value
        .parse::<usize>()
        .ok()
        .filter(|channel| *channel > 0)
        .ok_or_else(|| {
            import_error(
                partial,
                CurveImportErrorKind::InvalidChannel {
                    row_index,
                    field_index,
                    value: (*value).to_owned(),
                },
            )
        })
}

fn split_fields<'a>(
    line: &'a str,
    delimiter: &str,
    partial: &CurveImport,
) -> Result<Vec<&'a str>, CurveImportError> {
    if delimiter.is_empty() {
        return Err(import_error(partial, CurveImportErrorKind::EmptyDelimiter));
    }
    Ok(line.split(delimiter).collect())
}

fn append_scalar_row(result: &mut CurveImport, independent: f64, values: &[f64]) {
    let CurveImportData::TimeSeries {
        independent_values,
        curves,
    } = &mut result.data
    else {
        unreachable!("time parser must own time-series data");
    };
    independent_values.push(independent);
    while curves.len() < values.len() {
        curves.push(ScalarCurve {
            name: format!("Channel_{}", curves.len() + 1),
            values: Vec::new(),
        });
    }
    for (curve, value) in curves.iter_mut().zip(values) {
        curve.values.push(*value);
    }
}

fn set_scalar_curve_names(result: &mut CurveImport, names: Vec<String>) {
    let CurveImportData::TimeSeries { curves, .. } = &mut result.data else {
        unreachable!("time parser must own time-series data");
    };
    *curves = names
        .into_iter()
        .map(|name| ScalarCurve {
            name,
            values: Vec::new(),
        })
        .collect();
}

fn set_polar_curve_count(result: &mut CurveImport, channel_count: usize) {
    let CurveImportData::FrequencyDomain { curves, .. } = &mut result.data else {
        unreachable!("frequency parser must own frequency-domain data");
    };
    *curves = (1..=channel_count).map(new_polar_curve).collect();
}

fn ensure_polar_curve_count(result: &mut CurveImport, channel_count: usize) {
    let CurveImportData::FrequencyDomain { curves, .. } = &mut result.data else {
        unreachable!("frequency parser must own frequency-domain data");
    };
    while curves.len() < channel_count {
        curves.push(new_polar_curve(curves.len() + 1));
    }
}

fn new_polar_curve(index: usize) -> PolarCurve {
    PolarCurve {
        name: format!("Channel_{index}"),
        values: Vec::new(),
    }
}

fn frequency_data_mut(result: &mut CurveImport) -> (&mut Vec<f64>, &mut Vec<PolarCurve>) {
    let CurveImportData::FrequencyDomain {
        frequencies,
        curves,
    } = &mut result.data
    else {
        unreachable!("frequency parser must own frequency-domain data");
    };
    (frequencies, curves)
}

fn append_frequency_value(
    result: &mut CurveImport,
    frequency: f64,
    channel_index: usize,
    magnitude: f64,
    phase_radians: f64,
) {
    ensure_polar_curve_count(result, channel_index + 1);
    let (frequencies, curves) = frequency_data_mut(result);
    frequencies.push(frequency);
    curves[channel_index].values.push(PolarValue {
        magnitude,
        phase_radians,
    });
}

fn convert_magnitude(value: f64, decibels: bool) -> f64 {
    if decibels {
        10.0_f64.powf(value / 20.0)
    } else {
        value
    }
}

fn progress_percentage(completed_rows: usize, total_rows: usize) -> u8 {
    if total_rows == 0 {
        return 100;
    }
    let value = completed_rows.saturating_mul(100) / total_rows;
    u8::try_from(value.min(100)).unwrap_or(100)
}

const fn missing_row(row_index: usize) -> CurveImportErrorKind {
    CurveImportErrorKind::MissingRow { row_index }
}

fn import_error(partial: &CurveImport, kind: CurveImportErrorKind) -> CurveImportError {
    CurveImportError {
        kind,
        partial: Box::new(partial.clone()),
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Default)]
    struct RecordingObserver {
        progress: Vec<u8>,
        cancel_after_reports: Option<usize>,
    }

    impl CurveImportObserver for RecordingObserver {
        fn is_cancelled(&self) -> bool {
            self.cancel_after_reports
                .is_some_and(|limit| self.progress.len() >= limit)
        }

        fn report_progress(&mut self, percentage: u8) {
            self.progress.push(percentage);
        }
    }

    #[test]
    fn dispatcher_rejects_unsupported_code_without_parser_activity() {
        let lines = lines(&["0,1"]);
        let request = request(0, &lines, 0, ",");
        let mut observer = RecordingObserver::default();

        let outcome = dispatch_curve_import(&request, &mut observer);

        assert_eq!(outcome, Ok(CurveImportOutcome::UnsupportedFormat(0)));
        assert!(observer.progress.is_empty());
    }

    #[test]
    fn dispatcher_routes_each_supported_format_code() {
        for format_code in [1, 2, 7] {
            let lines = lines(&["0,1"]);
            let request = request(format_code, &lines, 0, ",");
            assert_imported_format(request, format_code);
        }

        let cases = [
            (3, vec!["1,1,0,0,0"]),
            (4, vec!["1,0,0"]),
            (5, vec!["1,0,0"]),
            (6, vec!["1,ignored,0,0"]),
        ];
        for (format_code, values) in cases {
            let lines = lines(&values);
            let request = request(format_code, &lines, 0, ",");
            assert_imported_format(request, format_code);
        }

        let paired_lines = lines(&["1,0,0", "2,0,0"]);
        assert_imported_format(request(8, &paired_lines, 0, ","), 8);

        let fourier_lines = lines(&["Fourier", "1,0,0"]);
        assert_imported_format(request(9, &fourier_lines, 1, ","), 9);
    }

    #[test]
    fn time_series_uses_matching_header_and_routes_to_active_diagram() {
        let lines = lines(&["Time,Input,Output", "0,1,2", "1,3,4"]);
        let mut request = request(7, &lines, 1, ",");
        request.insert_into_active_diagram = true;
        let mut observer = RecordingObserver::default();

        let outcome = parse_time_series_curves(&request, &mut observer);

        let CurveImportOutcome::Imported(result) = outcome.expect("the rows must parse") else {
            panic!("the import must complete");
        };
        assert_eq!(
            result.destination,
            CurveImportDestination::ActiveDiagram(CurveDomain::Time)
        );
        let CurveImportData::TimeSeries {
            independent_values,
            curves,
        } = result.data
        else {
            panic!("the result must contain time data");
        };
        assert_eq!(independent_values, vec![0.0, 1.0]);
        assert_eq!(curves[0].name, "Input");
        assert_eq!(curves[0].values, vec![1.0, 3.0]);
        assert_eq!(curves[1].name, "Output");
        assert_eq!(curves[1].values, vec![2.0, 4.0]);
        assert_eq!(observer.progress.last(), Some(&100));
    }

    #[test]
    fn time_series_cancellation_discards_partial_result() {
        let lines = lines(&["0,1", "1,2"]);
        let request = request(1, &lines, 0, ",");
        let mut observer = RecordingObserver {
            cancel_after_reports: Some(1),
            ..RecordingObserver::default()
        };

        let outcome = parse_time_series_curves(&request, &mut observer);

        assert_eq!(outcome, Ok(CurveImportOutcome::Cancelled));
        assert_eq!(observer.progress, vec![0]);
    }

    #[test]
    fn paired_ac_rows_convert_decibels_and_degrees() {
        let lines = lines(&["header", "1,0,0,20,180", "2,6,90,40,-90"]);
        let mut request = request(8, &lines, 1, ",");
        request.amplitude_in_decibels = true;
        let mut observer = RecordingObserver::default();

        let outcome = parse_frequency_domain_curves(&request, &mut observer);

        let CurveImportOutcome::Imported(result) = outcome.expect("the rows must parse") else {
            panic!("the import must complete");
        };
        let CurveImportData::FrequencyDomain {
            frequencies,
            curves,
        } = result.data
        else {
            panic!("the result must contain frequency data");
        };
        assert_eq!(frequencies, vec![1.0, 2.0]);
        assert_close(curves[0].values[0].magnitude, 1.0);
        assert_close(
            curves[0].values[1].phase_radians,
            std::f64::consts::FRAC_PI_2,
        );
        assert_close(curves[1].values[0].magnitude, 10.0);
        assert_close(curves[1].values[1].magnitude, 100.0);
        assert_close(
            curves[1].values[1].phase_radians,
            -std::f64::consts::FRAC_PI_2,
        );
    }

    #[test]
    fn indexed_ac_rows_skip_other_field_counts_and_group_channels() {
        let lines = lines(&["10,1,2,0,90", "ignored,row", "10,2,3,0,-90", "20,1,4,0,180"]);
        let request = request(3, &lines, 0, ",");
        let mut observer = RecordingObserver::default();

        let outcome = parse_frequency_domain_curves(&request, &mut observer);

        let CurveImportOutcome::Imported(result) = outcome.expect("the rows must parse") else {
            panic!("the import must complete");
        };
        let CurveImportData::FrequencyDomain {
            frequencies,
            curves,
        } = result.data
        else {
            panic!("the result must contain frequency data");
        };
        assert_eq!(frequencies, vec![10.0, 20.0]);
        assert_eq!(curves.len(), 2);
        assert_close(
            curves[0].values[0].phase_radians,
            std::f64::consts::FRAC_PI_2,
        );
        assert_close(
            curves[1].values[0].phase_radians,
            -std::f64::consts::FRAC_PI_2,
        );
    }

    #[test]
    fn discrete_fourier_uses_specialized_target_and_ignores_insert_option() {
        let lines = lines(&["Imported Fourier,ignored", "1;0;0", "2;20;180"]);
        let mut request = request(9, &lines, 1, ";");
        request.amplitude_in_decibels = true;
        request.display_format = 4;
        request.insert_into_active_diagram = true;
        let mut observer = RecordingObserver::default();

        let outcome = parse_discrete_fourier_curves(&request, &mut observer);

        let CurveImportOutcome::Imported(result) = outcome.expect("the rows must parse") else {
            panic!("the import must complete");
        };
        assert_eq!(
            result.destination,
            CurveImportDestination::FourierDiagram {
                display_format: 4,
                label: "Imported Fourier,ignored".to_owned(),
            }
        );
        let CurveImportData::FrequencyDomain { curves, .. } = result.data else {
            panic!("the result must contain frequency data");
        };
        assert_close(curves[0].values[1].magnitude, 10.0);
        assert_close(curves[0].values[1].phase_radians, std::f64::consts::PI);
    }

    #[test]
    fn numeric_error_preserves_rows_that_completed_before_it() {
        let lines = lines(&["0,1", "1,bad"]);
        let request = request(1, &lines, 0, ",");
        let mut observer = RecordingObserver::default();

        let error = parse_time_series_curves(&request, &mut observer)
            .expect_err("the invalid number must propagate");

        assert_eq!(
            error.kind,
            CurveImportErrorKind::InvalidNumber {
                row_index: 1,
                field_index: 1,
                value: "bad".to_owned(),
            }
        );
        let CurveImportData::TimeSeries {
            independent_values,
            curves,
        } = error.partial.data
        else {
            panic!("the partial result must contain time data");
        };
        assert_eq!(independent_values, vec![0.0]);
        assert_eq!(curves[0].values, vec![1.0]);
    }

    fn lines(values: &[&str]) -> Vec<String> {
        values.iter().map(|value| (*value).to_owned()).collect()
    }

    fn request<'a>(
        format_code: u8,
        lines: &'a [String],
        skip_rows: usize,
        delimiter: &'a str,
    ) -> CurveImportRequest<'a> {
        CurveImportRequest {
            format_code,
            lines,
            skip_rows,
            delimiter,
            amplitude_in_decibels: false,
            display_format: 0,
            insert_into_active_diagram: false,
        }
    }

    fn assert_imported_format(request: CurveImportRequest<'_>, expected_format: u8) {
        let mut observer = RecordingObserver::default();
        let outcome = dispatch_curve_import(&request, &mut observer);
        assert!(matches!(
            outcome,
            Ok(CurveImportOutcome::Imported(CurveImport {
                format_code,
                ..
            })) if format_code == expected_format
        ));
    }

    fn assert_close(actual: f64, expected: f64) {
        let tolerance = f64::EPSILON.max(expected.abs() * 1e-12);
        assert!((actual - expected).abs() <= tolerance);
    }
}
