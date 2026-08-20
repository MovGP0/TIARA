use std::fmt;
use std::fs::File;
use std::io::{self, BufRead, BufReader, BufWriter, Write};
use std::path::Path;

pub const ANALYSIS_PARAMETER_COUNT: usize = 45;
pub const NATIVE_CONFIGURATION_SIZE: usize = 400;

const TEXT_HEADING: &str = "Parameter Value";

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AnalysisParameterFormat {
    Structured,
    Text,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum AnalysisParameterKind {
    Integer,
    Boolean,
    Choice(Vec<String>),
    FloatingPoint,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct AnalysisParameterDefinition {
    pub name: String,
    pub line_position: usize,
    pub kind: AnalysisParameterKind,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct NativeAnalysisParameterRecord {
    pub configuration: [u8; NATIVE_CONFIGURATION_SIZE],
    pub comment: String,
}

impl Default for NativeAnalysisParameterRecord {
    fn default() -> Self {
        Self {
            configuration: [0; NATIVE_CONFIGURATION_SIZE],
            comment: String::new(),
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct StructuredParameterMetadata {
    pub title: &'static str,
    pub version: &'static str,
    pub format_date: &'static str,
    pub description: &'static str,
    pub product: String,
    pub copyright: &'static str,
}

impl StructuredParameterMetadata {
    #[must_use]
    pub fn for_product_version(product_version: &str) -> Self {
        Self {
            title: "Analysis parameters",
            version: "V1.00",
            format_date: "02/02/96 17:00 CET",
            description: "Analysis parameters of a circuit.",
            product: format!("TINA {product_version}"),
            copyright: "(c) Copyright 1993,94,95,96 DesignSoft Inc.\n\rAll rights reserved.",
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum StructuredReadMode {
    TemporaryRecord,
    BoundContext,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct StructuredReadResult {
    pub record: Option<NativeAnalysisParameterRecord>,
    pub status: u32,
}

/// Adapter for the unrecovered proprietary PRM container encoding.
///
/// Implementations must apply a `BoundContext` read to their bound context.
/// A `TemporaryRecord` read must return the decoded record for the core loader
/// to copy into its output.
pub trait StructuredParameterCodec {
    /// Writes one structured PRM file and returns its final status value.
    ///
    /// # Errors
    ///
    /// Returns the first file or format error.
    fn write(
        &mut self,
        path: &Path,
        metadata: &StructuredParameterMetadata,
        record: &NativeAnalysisParameterRecord,
    ) -> io::Result<u32>;

    /// Reads one structured PRM file and returns its decoded result and status.
    ///
    /// # Errors
    ///
    /// Returns the first file or format error.
    fn read(&mut self, path: &Path, mode: StructuredReadMode) -> io::Result<StructuredReadResult>;
}

pub trait AnalysisParameterStatusRecorder {
    fn record_status(&mut self, status: u32);
}

pub trait AnalysisParameterTextCodec {
    #[must_use]
    fn format_float(&self, value: f64) -> String;

    /// Parses a localized floating-point token.
    ///
    /// # Errors
    ///
    /// Returns an error when the token is not a valid number.
    fn parse_float(&self, token: &str) -> Result<f64, AnalysisParameterFileError>;
}

#[derive(Debug, Default, Clone, Copy)]
pub struct InvariantAnalysisParameterTextCodec;

impl AnalysisParameterTextCodec for InvariantAnalysisParameterTextCodec {
    fn format_float(&self, value: f64) -> String {
        value.to_string()
    }

    fn parse_float(&self, token: &str) -> Result<f64, AnalysisParameterFileError> {
        token
            .parse()
            .map_err(|_| AnalysisParameterFileError::InvalidFloat(token.to_owned()))
    }
}

pub enum NativeAnalysisParameterTarget<'a> {
    Replace(&'a mut NativeAnalysisParameterRecord),
    BoundContext,
}

#[derive(Debug)]
pub enum AnalysisParameterFileError {
    Io(io::Error),
    DefinitionCount { actual: usize },
    InvalidLinePosition { parameter: usize, position: usize },
    MissingTemporaryRecord,
    InvalidInteger(String),
    InvalidFloat(String),
    InvalidChoiceIndex { parameter: usize, index: i64 },
    UnknownChoice { parameter: usize, value: String },
}

impl fmt::Display for AnalysisParameterFileError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::Io(error) => error.fmt(formatter),
            Self::DefinitionCount { actual } => write!(
                formatter,
                "Expected {ANALYSIS_PARAMETER_COUNT} parameter definitions, got {actual}."
            ),
            Self::InvalidLinePosition {
                parameter,
                position,
            } => write!(
                formatter,
                "Parameter {parameter} has invalid line position {position}."
            ),
            Self::MissingTemporaryRecord => {
                formatter.write_str("The structured reader did not return a temporary record.")
            }
            Self::InvalidInteger(value) => write!(formatter, "Invalid integer value: {value}"),
            Self::InvalidFloat(value) => write!(formatter, "Invalid floating-point value: {value}"),
            Self::InvalidChoiceIndex { parameter, index } => {
                write!(
                    formatter,
                    "Parameter {parameter} has invalid choice index {index}."
                )
            }
            Self::UnknownChoice { parameter, value } => {
                write!(
                    formatter,
                    "Parameter {parameter} has unknown choice: {value}"
                )
            }
        }
    }
}

impl std::error::Error for AnalysisParameterFileError {
    fn source(&self) -> Option<&(dyn std::error::Error + 'static)> {
        match self {
            Self::Io(error) => Some(error),
            Self::DefinitionCount { .. }
            | Self::InvalidLinePosition { .. }
            | Self::MissingTemporaryRecord
            | Self::InvalidInteger(_)
            | Self::InvalidFloat(_)
            | Self::InvalidChoiceIndex { .. }
            | Self::UnknownChoice { .. } => None,
        }
    }
}

impl From<io::Error> for AnalysisParameterFileError {
    fn from(value: io::Error) -> Self {
        Self::Io(value)
    }
}

/// Ports Ghidra function `FUN_014ae370` at `0x014AE370`.
///
/// Format zero maps to [`AnalysisParameterFormat::Structured`]. It supplies
/// the recovered PRM metadata to a format adapter and records a nonzero final
/// status. Other format values map to a positional text table. The standard
/// library supplies the text file and buffered I/O. A CSV crate was rejected
/// because this format uses fixed line positions and trailing typed tokens,
/// not CSV records. The proprietary structured encoding remains behind
/// [`StructuredParameterCodec`] because its wire schema was not recovered.
///
/// # Errors
///
/// Returns the first definition, value, file, or format error. A text file can
/// contain partial output after an error; no rollback is attempted.
#[allow(clippy::too_many_arguments)]
pub fn save_analysis_parameter_file(
    path: impl AsRef<Path>,
    format: AnalysisParameterFormat,
    product_version: &str,
    native_record: &NativeAnalysisParameterRecord,
    definitions: &[AnalysisParameterDefinition],
    values: &[f64],
    structured_codec: &mut dyn StructuredParameterCodec,
    text_codec: &dyn AnalysisParameterTextCodec,
    status_recorder: &mut dyn AnalysisParameterStatusRecorder,
) -> Result<(), AnalysisParameterFileError> {
    match format {
        AnalysisParameterFormat::Structured => {
            let metadata = StructuredParameterMetadata::for_product_version(product_version);
            let status = structured_codec.write(path.as_ref(), &metadata, native_record)?;
            record_nonzero_status(status, status_recorder);
            Ok(())
        }
        AnalysisParameterFormat::Text => {
            let file = File::create(path)?;
            let mut output = BufWriter::new(file);
            write_analysis_parameter_text(&mut output, definitions, values, text_codec)?;
            output.flush().map_err(Into::into)
        }
    }
}

/// Ports Ghidra function `FUN_014aeb50` at `0x014AEB50`.
///
/// A structured temporary read replaces all 400 configuration bytes and the
/// comment before a nonzero reader status is recorded. A bound-context read is
/// applied by the structured adapter and does not copy to the supplied output.
/// Text input skips its heading, maps each remaining fixed line position to
/// the last matching one of 45 definitions, and updates only recognized shared
/// values. It does not reset unspecified values or change the native comment.
/// Standard buffered I/O is sufficient. Locale-aware number presentation stays
/// behind [`AnalysisParameterTextCodec`] instead of selecting a locale crate
/// without a recovered locale policy.
///
/// # Errors
///
/// Returns the first definition, parse, file, or format error. Values applied
/// before an error remain changed, matching the recovered non-atomic loader.
#[allow(clippy::too_many_arguments)]
pub fn load_analysis_parameter_file(
    path: impl AsRef<Path>,
    format: AnalysisParameterFormat,
    target: NativeAnalysisParameterTarget<'_>,
    definitions: &[AnalysisParameterDefinition],
    shared_values: &mut [f64],
    structured_codec: &mut dyn StructuredParameterCodec,
    text_codec: &dyn AnalysisParameterTextCodec,
    status_recorder: &mut dyn AnalysisParameterStatusRecorder,
) -> Result<(), AnalysisParameterFileError> {
    match format {
        AnalysisParameterFormat::Structured => {
            let mode = match target {
                NativeAnalysisParameterTarget::Replace(_) => StructuredReadMode::TemporaryRecord,
                NativeAnalysisParameterTarget::BoundContext => StructuredReadMode::BoundContext,
            };
            let result = structured_codec.read(path.as_ref(), mode)?;

            if let NativeAnalysisParameterTarget::Replace(output) = target {
                let record = result
                    .record
                    .ok_or(AnalysisParameterFileError::MissingTemporaryRecord)?;
                *output = record;
            }
            record_nonzero_status(result.status, status_recorder);
            Ok(())
        }
        AnalysisParameterFormat::Text => {
            let file = File::open(path)?;
            let input = BufReader::new(file);
            import_analysis_parameter_text(input, definitions, shared_values, text_codec)
        }
    }
}

/// Writes the recovered positional TXT representation.
///
/// # Errors
///
/// Returns the first definition, value, or output error.
pub fn write_analysis_parameter_text(
    mut output: impl Write,
    definitions: &[AnalysisParameterDefinition],
    values: &[f64],
    codec: &dyn AnalysisParameterTextCodec,
) -> Result<(), AnalysisParameterFileError> {
    validate_inputs(definitions, values)?;
    let mut lines = vec![String::new(); ANALYSIS_PARAMETER_COUNT + 1];
    TEXT_HEADING.clone_into(&mut lines[0]);

    for (parameter, definition) in definitions.iter().enumerate() {
        let token = format_value(parameter, definition, values[parameter], codec)?;
        lines[definition.line_position] = format!("{} {token}", definition.name);
    }

    for line in lines {
        writeln!(output, "{line}")?;
    }
    Ok(())
}

/// Imports the recovered positional TXT representation into shared values.
///
/// # Errors
///
/// Returns the first definition, input, or typed-value error.
pub fn import_analysis_parameter_text(
    input: impl BufRead,
    definitions: &[AnalysisParameterDefinition],
    shared_values: &mut [f64],
    codec: &dyn AnalysisParameterTextCodec,
) -> Result<(), AnalysisParameterFileError> {
    validate_inputs(definitions, shared_values)?;

    for (line_index, line) in input.lines().enumerate() {
        let line = line?;
        if line_index == 0 {
            continue;
        }
        let line_position = line_index;
        let Some(parameter) = definitions
            .iter()
            .rposition(|definition| definition.line_position == line_position)
        else {
            continue;
        };
        let token = trailing_token(&line);
        shared_values[parameter] = parse_value(parameter, &definitions[parameter], token, codec)?;
    }
    Ok(())
}

fn validate_inputs(
    definitions: &[AnalysisParameterDefinition],
    values: &[f64],
) -> Result<(), AnalysisParameterFileError> {
    if definitions.len() != ANALYSIS_PARAMETER_COUNT {
        return Err(AnalysisParameterFileError::DefinitionCount {
            actual: definitions.len(),
        });
    }
    if values.len() != ANALYSIS_PARAMETER_COUNT {
        return Err(AnalysisParameterFileError::DefinitionCount {
            actual: values.len(),
        });
    }
    for (parameter, definition) in definitions.iter().enumerate() {
        if !(1..=ANALYSIS_PARAMETER_COUNT).contains(&definition.line_position) {
            return Err(AnalysisParameterFileError::InvalidLinePosition {
                parameter,
                position: definition.line_position,
            });
        }
    }
    Ok(())
}

fn format_value(
    parameter: usize,
    definition: &AnalysisParameterDefinition,
    value: f64,
    codec: &dyn AnalysisParameterTextCodec,
) -> Result<String, AnalysisParameterFileError> {
    match &definition.kind {
        AnalysisParameterKind::Integer | AnalysisParameterKind::Boolean => {
            Ok(rounded_integer(value)?.to_string())
        }
        AnalysisParameterKind::Choice(choices) => {
            let index = rounded_integer(value)?;
            let index = usize::try_from(index)
                .map_err(|_| AnalysisParameterFileError::InvalidChoiceIndex { parameter, index })?;
            choices.get(index).cloned().ok_or_else(|| {
                AnalysisParameterFileError::InvalidChoiceIndex {
                    parameter,
                    index: i64::try_from(index).unwrap_or(i64::MAX),
                }
            })
        }
        AnalysisParameterKind::FloatingPoint => Ok(codec.format_float(value)),
    }
}

fn parse_value(
    parameter: usize,
    definition: &AnalysisParameterDefinition,
    token: &str,
    codec: &dyn AnalysisParameterTextCodec,
) -> Result<f64, AnalysisParameterFileError> {
    match &definition.kind {
        AnalysisParameterKind::Integer | AnalysisParameterKind::Boolean => token
            .parse::<i32>()
            .map(f64::from)
            .map_err(|_| AnalysisParameterFileError::InvalidInteger(token.to_owned())),
        AnalysisParameterKind::Choice(choices) => choices
            .iter()
            .rposition(|choice| choice == token)
            .map(|index| u32::try_from(index).map(f64::from))
            .transpose()
            .map_err(|_| AnalysisParameterFileError::UnknownChoice {
                parameter,
                value: token.to_owned(),
            })?
            .ok_or_else(|| AnalysisParameterFileError::UnknownChoice {
                parameter,
                value: token.to_owned(),
            }),
        AnalysisParameterKind::FloatingPoint => codec.parse_float(token),
    }
}

fn rounded_integer(value: f64) -> Result<i64, AnalysisParameterFileError> {
    let rounded = value.round().to_string();
    rounded
        .parse()
        .map_err(|_| AnalysisParameterFileError::InvalidInteger(rounded))
}

fn trailing_token(line: &str) -> &str {
    line.rsplit_once(' ').map_or(line, |(_, token)| token)
}

fn record_nonzero_status(status: u32, status_recorder: &mut dyn AnalysisParameterStatusRecorder) {
    if status != 0 {
        status_recorder.record_status(status);
    }
}

#[cfg(test)]
mod tests {
    use std::io::Cursor;
    use std::path::PathBuf;

    use super::*;

    #[derive(Default)]
    struct TestStructuredCodec {
        write_status: u32,
        read_result: Option<StructuredReadResult>,
        metadata: Option<StructuredParameterMetadata>,
        read_mode: Option<StructuredReadMode>,
        bound_context_was_loaded: bool,
    }

    impl StructuredParameterCodec for TestStructuredCodec {
        fn write(
            &mut self,
            _path: &Path,
            metadata: &StructuredParameterMetadata,
            _record: &NativeAnalysisParameterRecord,
        ) -> io::Result<u32> {
            self.metadata = Some(metadata.clone());
            Ok(self.write_status)
        }

        fn read(
            &mut self,
            _path: &Path,
            mode: StructuredReadMode,
        ) -> io::Result<StructuredReadResult> {
            self.read_mode = Some(mode);
            self.bound_context_was_loaded = mode == StructuredReadMode::BoundContext;
            self.read_result
                .clone()
                .ok_or_else(|| io::Error::other("missing test result"))
        }
    }

    #[derive(Default)]
    struct Statuses(Vec<u32>);

    impl AnalysisParameterStatusRecorder for Statuses {
        fn record_status(&mut self, status: u32) {
            self.0.push(status);
        }
    }

    struct CommaCodec;

    impl AnalysisParameterTextCodec for CommaCodec {
        fn format_float(&self, value: f64) -> String {
            value.to_string().replace('.', ",")
        }

        fn parse_float(&self, token: &str) -> Result<f64, AnalysisParameterFileError> {
            token
                .replace(',', ".")
                .parse()
                .map_err(|_| AnalysisParameterFileError::InvalidFloat(token.to_owned()))
        }
    }

    #[test]
    fn structured_save_supplies_metadata_and_records_only_a_nonzero_status() {
        let mut codec = TestStructuredCodec {
            write_status: 17,
            ..TestStructuredCodec::default()
        };
        let mut statuses = Statuses::default();

        save_analysis_parameter_file(
            "not-opened-by-test.prm",
            AnalysisParameterFormat::Structured,
            "16.0",
            &NativeAnalysisParameterRecord::default(),
            &[],
            &[],
            &mut codec,
            &InvariantAnalysisParameterTextCodec,
            &mut statuses,
        )
        .unwrap_or_else(|error| panic!("structured adapter failed: {error}"));

        let metadata = codec
            .metadata
            .as_ref()
            .unwrap_or_else(|| panic!("metadata missing"));
        assert_eq!(metadata.title, "Analysis parameters");
        assert_eq!(metadata.version, "V1.00");
        assert_eq!(metadata.product, "TINA 16.0");
        assert_eq!(statuses.0, [17]);
    }

    #[test]
    fn text_save_uses_fixed_positions_and_typed_values() {
        let definitions = definitions();
        let mut values = vec![0.0; ANALYSIS_PARAMETER_COUNT];
        values[0] = 12.9;
        values[1] = 1.0;
        values[2] = 1.0;
        values[3] = 2.5;
        let mut output = Vec::new();

        write_analysis_parameter_text(&mut output, &definitions, &values, &CommaCodec)
            .unwrap_or_else(|error| panic!("text write failed: {error}"));
        let text = String::from_utf8(output).unwrap_or_else(|error| panic!("UTF-8: {error}"));
        let lines: Vec<_> = text.lines().collect();

        assert_eq!(lines.len(), ANALYSIS_PARAMETER_COUNT + 1);
        assert_eq!(lines[0], "Parameter Value");
        assert_eq!(lines[1], "P0 13");
        assert_eq!(lines[2], "P1 1");
        assert_eq!(lines[3], "P2 On");
        assert_eq!(lines[4], "P3 2,5");
    }

    #[test]
    fn text_save_keeps_bytes_written_before_an_output_error() {
        struct LimitedWriter {
            bytes: Vec<u8>,
            remaining: usize,
        }
        impl Write for LimitedWriter {
            fn write(&mut self, buffer: &[u8]) -> io::Result<usize> {
                if self.remaining == 0 {
                    return Err(io::Error::other("output limit reached"));
                }
                let count = self.remaining.min(buffer.len());
                self.bytes.extend_from_slice(&buffer[..count]);
                self.remaining -= count;
                Ok(count)
            }

            fn flush(&mut self) -> io::Result<()> {
                Ok(())
            }
        }
        let mut output = LimitedWriter {
            bytes: Vec::new(),
            remaining: TEXT_HEADING.len() + 1,
        };
        let values = [0.0; ANALYSIS_PARAMETER_COUNT];

        let error = write_analysis_parameter_text(
            &mut output,
            &definitions(),
            &values,
            &InvariantAnalysisParameterTextCodec,
        )
        .expect_err("the limited writer must fail after the heading");

        assert!(matches!(error, AnalysisParameterFileError::Io(_)));
        assert_eq!(output.bytes, b"Parameter Value\n");
    }

    #[test]
    fn text_load_merges_recognized_values_and_keeps_unspecified_values() {
        let definitions = definitions();
        let mut values = vec![9.0; ANALYSIS_PARAMETER_COUNT];
        let input = Cursor::new("Parameter Value\nP0 -4\nP1 0\nP2 On\nP3 3,25\n");

        import_analysis_parameter_text(input, &definitions, &mut values, &CommaCodec)
            .unwrap_or_else(|error| panic!("text import failed: {error}"));

        assert_eq!(&values[..5], &[-4.0, 0.0, 1.0, 3.25, 9.0]);
    }

    #[test]
    fn text_load_keeps_prior_updates_when_a_later_value_is_invalid() {
        let definitions = definitions();
        let mut values = vec![9.0; ANALYSIS_PARAMETER_COUNT];
        let input = Cursor::new("Parameter Value\nP0 4\nP1 invalid\n");

        let error = import_analysis_parameter_text(input, &definitions, &mut values, &CommaCodec)
            .expect_err("the second value must fail");

        assert!(matches!(
            error,
            AnalysisParameterFileError::InvalidInteger(_)
        ));
        assert_eq!(values[0].to_bits(), 4.0_f64.to_bits());
        assert_eq!(values[1].to_bits(), 9.0_f64.to_bits());
    }

    #[test]
    fn text_load_uses_the_last_definition_with_a_duplicate_position() {
        let mut definitions = definitions();
        definitions[4].line_position = 1;
        let mut values = vec![9.0; ANALYSIS_PARAMETER_COUNT];

        import_analysis_parameter_text(
            Cursor::new("Parameter Value\nignored 22.5\n"),
            &definitions,
            &mut values,
            &InvariantAnalysisParameterTextCodec,
        )
        .unwrap_or_else(|error| panic!("text import failed: {error}"));

        assert_eq!(values[0].to_bits(), 9.0_f64.to_bits());
        assert_eq!(values[4].to_bits(), 22.5_f64.to_bits());
    }

    #[test]
    fn structured_temporary_load_replaces_outputs_before_status_is_recorded() {
        let expected = NativeAnalysisParameterRecord {
            configuration: [0xA5; NATIVE_CONFIGURATION_SIZE],
            comment: "loaded".to_owned(),
        };
        let mut codec = TestStructuredCodec {
            read_result: Some(StructuredReadResult {
                record: Some(expected.clone()),
                status: 23,
            }),
            ..TestStructuredCodec::default()
        };
        let mut output = NativeAnalysisParameterRecord::default();
        let mut statuses = Statuses::default();

        load_analysis_parameter_file(
            "not-opened-by-test.prm",
            AnalysisParameterFormat::Structured,
            NativeAnalysisParameterTarget::Replace(&mut output),
            &[],
            &mut [],
            &mut codec,
            &InvariantAnalysisParameterTextCodec,
            &mut statuses,
        )
        .unwrap_or_else(|error| panic!("structured load failed: {error}"));

        assert_eq!(output, expected);
        assert_eq!(statuses.0, [23]);
    }

    #[test]
    fn structured_bound_context_does_not_require_a_temporary_record() {
        let mut codec = TestStructuredCodec {
            read_result: Some(StructuredReadResult {
                record: None,
                status: 0,
            }),
            ..TestStructuredCodec::default()
        };
        let mut statuses = Statuses::default();

        load_analysis_parameter_file(
            PathBuf::from("not-opened-by-test.prm"),
            AnalysisParameterFormat::Structured,
            NativeAnalysisParameterTarget::BoundContext,
            &[],
            &mut [],
            &mut codec,
            &InvariantAnalysisParameterTextCodec,
            &mut statuses,
        )
        .unwrap_or_else(|error| panic!("structured load failed: {error}"));

        assert!(codec.bound_context_was_loaded);
        assert_eq!(codec.read_mode, Some(StructuredReadMode::BoundContext));
        assert!(statuses.0.is_empty());
    }

    fn definitions() -> Vec<AnalysisParameterDefinition> {
        (0..ANALYSIS_PARAMETER_COUNT)
            .map(|index| AnalysisParameterDefinition {
                name: format!("P{index}"),
                line_position: index + 1,
                kind: match index {
                    0 => AnalysisParameterKind::Integer,
                    1 => AnalysisParameterKind::Boolean,
                    2 => AnalysisParameterKind::Choice(vec!["Off".to_owned(), "On".to_owned()]),
                    _ => AnalysisParameterKind::FloatingPoint,
                },
            })
            .collect()
    }
}
