//! Shared `HTerm` configuration and serial-payload behavior.
//!
//! Library evaluation: Rust standard-library collections and byte buffers are
//! sufficient for the recovered timed-sequence representation and CR/LF
//! suffix handling. No serial-port crate is used because the application must
//! adapt the existing `HTerm` backend instead of opening a device directly.

use std::fmt;
use std::path::Path;

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct TimedSequenceConfig {
    pub enabled: bool,
    pub lines: Vec<String>,
}

impl TimedSequenceConfig {
    #[must_use]
    pub fn decode(encoded: &[String]) -> Self {
        let Some((enabled, lines)) = encoded.split_first() else {
            return Self::default();
        };

        Self {
            enabled: enabled.parse::<i32>() == Ok(1),
            lines: lines.to_vec(),
        }
    }

    #[must_use]
    pub fn encode(&self) -> Vec<String> {
        let mut encoded = Vec::with_capacity(self.lines.len() + 1);
        encoded.push(if self.enabled { "1" } else { "0" }.to_owned());
        encoded.extend(self.lines.iter().cloned());
        encoded
    }
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct EncodedTimedSequence {
    items: Vec<String>,
}

impl EncodedTimedSequence {
    #[must_use]
    pub const fn new(items: Vec<String>) -> Self {
        Self { items }
    }

    #[must_use]
    pub fn from_config(config: &TimedSequenceConfig) -> Self {
        Self::new(config.encode())
    }

    /// Ports Ghidra function `FUN_01779060` at `0x01779060`.
    ///
    /// An empty collection decodes to disabled with no lines. Otherwise, only
    /// numeric item zero equal to one enables the sequence. The source remains
    /// unchanged and the returned lines exclude the flag item.
    #[must_use]
    pub fn decode(&self) -> TimedSequenceConfig {
        TimedSequenceConfig::decode(&self.items)
    }

    /// Ports Ghidra function `FUN_01778ec0` at `0x01778EC0`.
    ///
    /// Clears the encoded target, copies all supplied lines, and inserts the
    /// numeric enabled flag at item zero. No validation or rollback occurs.
    pub fn replace_from_lines(&mut self, lines: &[String], enabled: bool) {
        self.items.clear();
        self.items.extend(lines.iter().cloned());
        self.items.insert(0, numeric_flag(enabled));
    }

    /// Ports Ghidra function `FUN_01778f80` at `0x01778F80`.
    ///
    /// Clears the encoded target, assigns the supplied multiline text, and
    /// inserts the numeric enabled flag at item zero. It does not validate or
    /// retain a rollback copy.
    pub fn replace_from_text(&mut self, text: &str, enabled: bool) {
        self.items.clear();
        if !text.is_empty() {
            self.items.extend(
                text.lines()
                    .map(|line| line.trim_end_matches('\r').to_owned()),
            );
        }
        self.items.insert(0, numeric_flag(enabled));
    }

    #[must_use]
    pub fn items(&self) -> &[String] {
        &self.items
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum RuntimeError {
    File(String),
    Backend(String),
}

impl fmt::Display for RuntimeError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::File(message) | Self::Backend(message) => formatter.write_str(message),
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ParseMode {
    Runtime,
    Validation,
}

impl ParseMode {
    #[must_use]
    pub const fn backend_value(self) -> u8 {
        match self {
            Self::Runtime => 0,
            Self::Validation => 1,
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ParseErrorReason {
    InvalidLiteral,
    CommaExpected,
    TooManyData,
    InvalidList,
    OnlyEightBitValuesAccepted,
    InvalidTimeValue,
    Unknown(i32),
}

impl ParseErrorReason {
    #[must_use]
    pub const fn from_code(code: i32) -> Self {
        match code {
            1 => Self::InvalidLiteral,
            2 => Self::CommaExpected,
            3 => Self::TooManyData,
            4 => Self::InvalidList,
            5 => Self::OnlyEightBitValuesAccepted,
            6 => Self::InvalidTimeValue,
            unknown => Self::Unknown(unknown),
        }
    }
}

impl fmt::Display for ParseErrorReason {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::InvalidLiteral => formatter.write_str("invalid literal"),
            Self::CommaExpected => formatter.write_str("comma expected"),
            Self::TooManyData => formatter.write_str("too many data"),
            Self::InvalidList => formatter.write_str("invalid list"),
            Self::OnlyEightBitValuesAccepted => formatter.write_str("only 8bit values accepted"),
            Self::InvalidTimeValue => formatter.write_str("invalid time value"),
            Self::Unknown(code) => write!(formatter, "unknown parser error {code}"),
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ParseDiagnostic {
    pub code: i32,
    pub location: i32,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct TimedSequenceParseError {
    pub code: i32,
    pub location: i32,
    pub reason: ParseErrorReason,
}

impl TimedSequenceParseError {
    #[must_use]
    pub const fn from_diagnostic(diagnostic: ParseDiagnostic) -> Self {
        Self {
            code: diagnostic.code,
            location: diagnostic.location,
            reason: ParseErrorReason::from_code(diagnostic.code),
        }
    }
}

impl fmt::Display for TimedSequenceParseError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(formatter, "{} at location {}", self.reason, self.location)
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ValidationError {
    Session(String),
    Backend(String),
    Parse(TimedSequenceParseError),
}

impl fmt::Display for ValidationError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::Session(message) | Self::Backend(message) => formatter.write_str(message),
            Self::Parse(error) => error.fmt(formatter),
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ValidationOutcome {
    Accepted,
    Rejected(ParseDiagnostic),
}

pub trait ValidationBackend {
    /// Creates the temporary backend session used for file validation.
    ///
    /// # Errors
    ///
    /// Returns text from the session adapter when creation fails.
    fn create_session(&mut self, working_directory: &Path) -> Result<u64, String>;

    /// Parses the selected timed-sequence file in the supplied mode.
    ///
    /// # Errors
    ///
    /// Returns text when the backend call cannot produce a parser result.
    fn parse_file(
        &mut self,
        session: u64,
        path: &Path,
        mode: ParseMode,
    ) -> Result<ValidationOutcome, String>;

    fn release_session(&mut self, session: u64, working_directory: &Path);
}

/// Ports Ghidra function `FUN_0160d4e0` at `0x0160D4E0`.
///
/// Creates a temporary backend session, parses the file in the caller-selected
/// mode, maps rejected parser codes to their recovered reason text and exact
/// reported location, and releases the session after every returned result.
///
/// # Errors
///
/// Returns session or backend-adapter text, or a structured parser error with
/// the recovered reason and reported location.
pub fn validate_timed_sequence_file(
    path: &Path,
    working_directory: &Path,
    mode: ParseMode,
    backend: &mut impl ValidationBackend,
) -> Result<bool, ValidationError> {
    let session = backend
        .create_session(working_directory)
        .map_err(ValidationError::Session)?;
    let result = backend
        .parse_file(session, path, mode)
        .map_err(ValidationError::Backend);
    backend.release_session(session, working_directory);

    match result? {
        ValidationOutcome::Accepted => Ok(true),
        ValidationOutcome::Rejected(diagnostic) => Err(ValidationError::Parse(
            TimedSequenceParseError::from_diagnostic(diagnostic),
        )),
    }
}

pub trait RuntimeFileStore {
    /// Saves decoded lines to the parser transport file.
    ///
    /// # Errors
    ///
    /// Returns a file error when the transport file cannot be written.
    fn save_lines(&mut self, path: &Path, lines: &[String]) -> Result<(), RuntimeError>;

    fn remove_if_present(&mut self, path: &Path);
}

pub trait RuntimeBackend {
    /// Parses one timed-sequence transport file for a configured backend.
    ///
    /// # Errors
    ///
    /// Returns an adapter error when the backend call does not return normally.
    fn parse_data_file(
        &mut self,
        handle: u64,
        path: &Path,
        mode: ParseMode,
    ) -> Result<(), RuntimeError>;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum RuntimeApplyOutcome {
    Disabled,
    Applied,
}

/// Ports Ghidra function `FUN_01778ce0` at `0x01778CE0`.
///
/// Disabled configuration performs no file or backend work. Enabled data is
/// decoded to `serial.txt`, parsed with runtime mode zero, and then scheduled
/// for deletion. The deletion result is intentionally not observed.
///
/// # Errors
///
/// Returns a file or backend-adapter error. An adapter exception can leave the
/// transport file in place, which matches the recovered unwinding boundary.
pub fn apply_runtime_sequence(
    encoded: &EncodedTimedSequence,
    handle: u64,
    working_directory: &Path,
    store: &mut impl RuntimeFileStore,
    backend: &mut impl RuntimeBackend,
) -> Result<RuntimeApplyOutcome, RuntimeError> {
    let config = encoded.decode();
    if !config.enabled {
        return Ok(RuntimeApplyOutcome::Disabled);
    }

    let transport_path = working_directory.join("serial.txt");
    store.save_lines(&transport_path, &config.lines)?;
    backend.parse_data_file(handle, &transport_path, ParseMode::Runtime)?;
    store.remove_if_present(&transport_path);
    Ok(RuntimeApplyOutcome::Applied)
}

fn numeric_flag(enabled: bool) -> String {
    u8::from(enabled).to_string()
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub struct LineEndings {
    pub carriage_return: bool,
    pub line_feed: bool,
}

/// Appends the selected line endings in recovered order and terminates the
/// byte buffer for the native `HTerm` adapter.
#[must_use]
pub fn prepare_nul_terminated_payload(mut encoded: Vec<u8>, endings: LineEndings) -> Vec<u8> {
    if endings.carriage_return {
        encoded.push(b'\r');
    }
    if endings.line_feed {
        encoded.push(b'\n');
    }
    encoded.push(0);
    encoded
}

#[cfg(test)]
mod tests {
    use std::path::{Path, PathBuf};

    use super::*;

    #[derive(Debug, Default)]
    struct RuntimeStore {
        saves: Vec<(PathBuf, Vec<String>)>,
        removed: Vec<PathBuf>,
    }

    impl RuntimeFileStore for RuntimeStore {
        fn save_lines(&mut self, path: &Path, lines: &[String]) -> Result<(), RuntimeError> {
            self.saves.push((path.to_path_buf(), lines.to_vec()));
            Ok(())
        }

        fn remove_if_present(&mut self, path: &Path) {
            self.removed.push(path.to_path_buf());
        }
    }

    #[derive(Debug, Default)]
    struct RuntimeParser {
        calls: Vec<(u64, PathBuf, ParseMode)>,
    }

    impl RuntimeBackend for RuntimeParser {
        fn parse_data_file(
            &mut self,
            handle: u64,
            path: &Path,
            mode: ParseMode,
        ) -> Result<(), RuntimeError> {
            self.calls.push((handle, path.to_path_buf(), mode));
            Ok(())
        }
    }

    #[derive(Debug)]
    struct ValidationParser {
        next_session: Result<u64, String>,
        result: Result<ValidationOutcome, String>,
        create_paths: Vec<PathBuf>,
        parse_calls: Vec<(u64, PathBuf, ParseMode)>,
        releases: Vec<(u64, PathBuf)>,
    }

    impl Default for ValidationParser {
        fn default() -> Self {
            Self {
                next_session: Ok(77),
                result: Ok(ValidationOutcome::Accepted),
                create_paths: Vec::new(),
                parse_calls: Vec::new(),
                releases: Vec::new(),
            }
        }
    }

    impl ValidationBackend for ValidationParser {
        fn create_session(&mut self, working_directory: &Path) -> Result<u64, String> {
            self.create_paths.push(working_directory.to_path_buf());
            self.next_session.clone()
        }

        fn parse_file(
            &mut self,
            session: u64,
            path: &Path,
            mode: ParseMode,
        ) -> Result<ValidationOutcome, String> {
            self.parse_calls.push((session, path.to_path_buf(), mode));
            self.result.clone()
        }

        fn release_session(&mut self, session: u64, working_directory: &Path) {
            self.releases
                .push((session, working_directory.to_path_buf()));
        }
    }

    #[test]
    fn timed_sequence_decodes_flag_and_lines_and_round_trips() {
        let encoded = vec![
            String::from("1"),
            String::from("100, 0x55"),
            String::from("200, 0xaa"),
        ];

        let decoded = TimedSequenceConfig::decode(&encoded);

        assert!(decoded.enabled);
        assert_eq!(decoded.lines, &encoded[1..]);
        assert_eq!(decoded.encode(), encoded);
    }

    #[test]
    fn missing_or_non_one_flag_is_disabled() {
        assert_eq!(
            TimedSequenceConfig::decode(&[]),
            TimedSequenceConfig::default()
        );
        assert!(!TimedSequenceConfig::decode(&[String::from("0")]).enabled);
        assert!(!TimedSequenceConfig::decode(&[String::from("invalid")]).enabled);
    }

    #[test]
    fn payload_adds_carriage_return_then_line_feed_and_nul() {
        assert_eq!(
            prepare_nul_terminated_payload(
                b"AT".to_vec(),
                LineEndings {
                    carriage_return: true,
                    line_feed: true,
                },
            ),
            b"AT\r\n\0"
        );
    }

    #[test]
    fn empty_payload_is_still_nul_terminated() {
        assert_eq!(
            prepare_nul_terminated_payload(Vec::new(), LineEndings::default()),
            [0]
        );
    }

    #[test]
    fn encoded_decoder_does_not_mutate_source_and_requires_numeric_one() {
        let encoded = EncodedTimedSequence::new(vec![String::from("2"), String::from("100, 0x55")]);
        let original = encoded.clone();

        let decoded = encoded.decode();

        assert!(!decoded.enabled);
        assert_eq!(decoded.lines, [String::from("100, 0x55")]);
        assert_eq!(encoded, original);
    }

    #[test]
    fn edited_lines_replace_encoded_collection_and_insert_flag_zero() {
        let mut encoded = EncodedTimedSequence::new(vec![String::from("old")]);

        encoded.replace_from_lines(&[String::from("10, 1"), String::from("20, 2")], true);

        assert_eq!(encoded.items(), ["1", "10, 1", "20, 2"]);
    }

    #[test]
    fn serialized_text_replaces_encoded_collection_without_validation() {
        let mut encoded = EncodedTimedSequence::new(vec![String::from("old")]);

        encoded.replace_from_text("first\r\nsecond\n", false);

        assert_eq!(encoded.items(), ["0", "first", "second"]);
    }

    #[test]
    fn disabled_runtime_sequence_skips_file_and_backend() {
        let encoded =
            EncodedTimedSequence::new(vec![String::from("0"), String::from("retained data")]);
        let mut store = RuntimeStore::default();
        let mut parser = RuntimeParser::default();

        assert_eq!(
            apply_runtime_sequence(
                &encoded,
                7,
                Path::new("C:/session"),
                &mut store,
                &mut parser,
            ),
            Ok(RuntimeApplyOutcome::Disabled)
        );
        assert!(store.saves.is_empty());
        assert!(store.removed.is_empty());
        assert!(parser.calls.is_empty());
    }

    #[test]
    fn enabled_runtime_sequence_uses_mode_zero_and_removes_transport_file() {
        let encoded = EncodedTimedSequence::new(vec![String::from("1"), String::from("10, 1")]);
        let mut store = RuntimeStore::default();
        let mut parser = RuntimeParser::default();
        let working_directory = Path::new("C:/session");

        assert_eq!(
            apply_runtime_sequence(&encoded, 19, working_directory, &mut store, &mut parser,),
            Ok(RuntimeApplyOutcome::Applied)
        );

        let path = working_directory.join("serial.txt");
        assert_eq!(store.saves, [(path.clone(), vec![String::from("10, 1")])]);
        assert_eq!(parser.calls, [(19, path.clone(), ParseMode::Runtime)]);
        assert_eq!(store.removed, [path]);
    }

    #[test]
    fn validation_accepts_in_requested_mode_and_releases_session() {
        let mut backend = ValidationParser::default();
        let working_directory = Path::new("C:/session");
        let file = working_directory.join("serial.txt");

        assert_eq!(
            validate_timed_sequence_file(
                &file,
                working_directory,
                ParseMode::Validation,
                &mut backend,
            ),
            Ok(true)
        );
        assert_eq!(backend.create_paths, [working_directory]);
        assert_eq!(backend.parse_calls, [(77, file, ParseMode::Validation)]);
        assert_eq!(backend.releases, [(77, working_directory.to_path_buf())]);
    }

    #[test]
    fn validation_maps_reason_and_location_and_releases_session() {
        let mut backend = ValidationParser {
            result: Ok(ValidationOutcome::Rejected(ParseDiagnostic {
                code: 5,
                location: 23,
            })),
            ..ValidationParser::default()
        };
        let working_directory = Path::new("C:/session");

        let error = validate_timed_sequence_file(
            &working_directory.join("serial.txt"),
            working_directory,
            ParseMode::Validation,
            &mut backend,
        );

        assert_eq!(
            error,
            Err(ValidationError::Parse(TimedSequenceParseError {
                code: 5,
                location: 23,
                reason: ParseErrorReason::OnlyEightBitValuesAccepted,
            }))
        );
        assert_eq!(
            error.as_ref().err().map(ToString::to_string),
            Some(String::from("only 8bit values accepted at location 23"))
        );
        assert_eq!(backend.releases, [(77, working_directory.to_path_buf())]);
    }

    #[test]
    fn every_recovered_parser_error_code_keeps_reason_text() {
        let expected = [
            (1, "invalid literal"),
            (2, "comma expected"),
            (3, "too many data"),
            (4, "invalid list"),
            (5, "only 8bit values accepted"),
            (6, "invalid time value"),
        ];

        for (code, text) in expected {
            assert_eq!(ParseErrorReason::from_code(code).to_string(), text);
        }
    }
}
