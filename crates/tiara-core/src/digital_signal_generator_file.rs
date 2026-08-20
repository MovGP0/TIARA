//! Digital Signal Generator definition and sample-data text codecs.
//!
//! The recovered `.dsg` and `.dgb` files are line-oriented text. The standard
//! library's buffered I/O and the existing [`crate::pulse_generator`] level
//! types provide the complete maintained implementation. No binary codec or
//! serialization dependency is needed.

use std::fmt;
use std::io::{self, BufRead, Write};

use crate::pulse_generator::{PulseLevel, PulsePoint};

const FILE_HEADER: &str = "@ Digital Signal Generator file";
const PERIOD_MARKER: &str = ".# Period";
const LENGTH_MARKER: &str = ".# Length";
const DATA_MARKER: &str = ".# Data";
const DEFAULT_MARKER: &str = "Default";
const CHANNEL_END_MARKER: &str = ".# end of psg";
const FILE_END_MARKER: &str = ".@ end of file";
const SAMPLE_EXPORT_LENGTH: u32 = 0x200;

#[derive(Debug, Clone, PartialEq)]
pub struct DsgChannelDefinition {
    pub name: String,
    pub points: Vec<PulsePoint>,
}

impl DsgChannelDefinition {
    #[must_use]
    pub fn new(name: impl Into<String>, points: Vec<PulsePoint>) -> Self {
        Self {
            name: name.into(),
            points,
        }
    }
}

#[derive(Debug, Clone, PartialEq)]
pub struct DsgDefinition {
    pub period: f64,
    pub length: u32,
    pub channels: Vec<DsgChannelDefinition>,
}

#[derive(Debug)]
pub enum DsgReadError {
    Io(io::Error),
    InvalidHeader(String),
    UnexpectedEnd(&'static str),
    MissingDefault(String),
    InvalidPeriod(String),
    InvalidLength(String),
    InvalidMoment(String),
    InvalidLevel(String),
}

impl fmt::Display for DsgReadError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::Io(error) => write!(formatter, "cannot read the DSG file: {error}"),
            Self::InvalidHeader(header) => write!(formatter, "invalid DSG header: {header}"),
            Self::UnexpectedEnd(expected) => {
                write!(formatter, "the DSG file ended before {expected}")
            }
            Self::MissingDefault(channel) => {
                write!(formatter, "channel {channel} has no Default marker")
            }
            Self::InvalidPeriod(value) => write!(formatter, "invalid DSG period: {value}"),
            Self::InvalidLength(value) => write!(formatter, "invalid DSG length: {value}"),
            Self::InvalidMoment(value) => write!(formatter, "invalid DSG moment: {value}"),
            Self::InvalidLevel(value) => write!(formatter, "invalid DSG level: {value}"),
        }
    }
}

impl std::error::Error for DsgReadError {
    fn source(&self) -> Option<&(dyn std::error::Error + 'static)> {
        match self {
            Self::Io(error) => Some(error),
            Self::InvalidHeader(_)
            | Self::UnexpectedEnd(_)
            | Self::MissingDefault(_)
            | Self::InvalidPeriod(_)
            | Self::InvalidLength(_)
            | Self::InvalidMoment(_)
            | Self::InvalidLevel(_) => None,
        }
    }
}

impl From<io::Error> for DsgReadError {
    fn from(error: io::Error) -> Self {
        Self::Io(error)
    }
}

/// Reimplements Ghidra function `FUN_01510cb0` at `0x01510CB0`.
///
/// The writer rewrites one structured text document with period and length
/// metadata, every named channel's default and timed values, a marker after
/// each channel, and the final file marker. It does not emit sampled data.
///
/// # Errors
///
/// Returns the first output error. The destination can contain a valid prefix
/// because the recovered rewrite path has no transaction or rollback.
pub fn write_definition(mut writer: impl Write, definition: &DsgDefinition) -> io::Result<()> {
    writeln!(writer, "{FILE_HEADER}")?;
    writeln!(writer)?;
    writeln!(writer, "{PERIOD_MARKER}")?;
    writeln!(writer, "{}", definition.period)?;
    writeln!(writer, "{LENGTH_MARKER}")?;
    writeln!(writer, "{}", definition.length)?;
    writeln!(writer)?;

    for channel in &definition.channels {
        writeln!(writer, "{}", channel.name)?;
        writeln!(writer, "{DEFAULT_MARKER}")?;
        let first = channel.points.first().copied().unwrap_or_default();
        writeln!(writer, "{}", first.level)?;
        writeln!(writer)?;
        for point in channel.points.iter().skip(1) {
            writeln!(writer, "{}", point.moment)?;
            writeln!(writer, "{}", point.level)?;
            writeln!(writer)?;
        }
        writeln!(writer, "{CHANNEL_END_MARKER}")?;
    }
    writeln!(writer, "{FILE_END_MARKER}")
}

/// Reimplements Ghidra function `FUN_01511720` at `0x01511720`.
///
/// The parser updates recognized existing channels in place. Unknown channel
/// records are skipped through their channel-end marker. Period, length, and
/// valid channel prefixes remain changed after a later marker or numeric
/// error, matching the recovered no-rollback behavior.
///
/// # Errors
///
/// Returns [`DsgReadError`] for an I/O failure, invalid header, missing marker,
/// invalid number, or invalid logic level.
pub fn read_definition_into(
    reader: impl BufRead,
    definition: &mut DsgDefinition,
) -> Result<(), DsgReadError> {
    let mut lines = reader.lines();
    let header = next_non_empty(&mut lines)?.ok_or(DsgReadError::UnexpectedEnd("the header"))?;
    if header != FILE_HEADER {
        return Err(DsgReadError::InvalidHeader(header));
    }

    while let Some(line) = next_non_empty(&mut lines)? {
        match line.as_str() {
            FILE_END_MARKER => return Ok(()),
            PERIOD_MARKER => {
                let value = required_line(&mut lines, "the period value")?;
                definition.period = value
                    .parse()
                    .map_err(|_| DsgReadError::InvalidPeriod(value))?;
            }
            LENGTH_MARKER => {
                let value = required_line(&mut lines, "the length value")?;
                definition.length = value
                    .parse()
                    .map_err(|_| DsgReadError::InvalidLength(value))?;
            }
            channel_name => read_channel(&mut lines, definition, channel_name)?,
        }
    }

    Err(DsgReadError::UnexpectedEnd("the final marker"))
}

fn read_channel(
    lines: &mut impl Iterator<Item = io::Result<String>>,
    definition: &mut DsgDefinition,
    channel_name: &str,
) -> Result<(), DsgReadError> {
    let channel_index = definition
        .channels
        .iter()
        .position(|channel| channel.name == channel_name);
    if channel_index.is_none() {
        return skip_unknown_channel(lines);
    }

    let marker = required_line(lines, "a channel Default marker")?;
    if marker != DEFAULT_MARKER {
        return Err(DsgReadError::MissingDefault(channel_name.to_owned()));
    }
    let level_text = required_line(lines, "the default channel level")?;
    let level = parse_level(&level_text)?;
    let channel = &mut definition.channels[channel_index.unwrap_or_default()];
    channel.points.clear();
    channel.points.push(PulsePoint { moment: 0.0, level });

    loop {
        let line = required_line(lines, "a channel end marker")?;
        if line == CHANNEL_END_MARKER {
            return Ok(());
        }
        if line == FILE_END_MARKER {
            return Err(DsgReadError::UnexpectedEnd("a channel end marker"));
        }
        let moment = line
            .parse()
            .map_err(|_| DsgReadError::InvalidMoment(line))?;
        let level_text = required_line(lines, "a channel level")?;
        let level = parse_level(&level_text)?;
        channel.points.push(PulsePoint { moment, level });
    }
}

fn skip_unknown_channel(
    lines: &mut impl Iterator<Item = io::Result<String>>,
) -> Result<(), DsgReadError> {
    loop {
        let line = required_line(lines, "an unknown channel end marker")?;
        if line == CHANNEL_END_MARKER {
            return Ok(());
        }
        if line == FILE_END_MARKER {
            return Err(DsgReadError::UnexpectedEnd("an unknown channel end marker"));
        }
    }
}

fn parse_level(value: &str) -> Result<PulseLevel, DsgReadError> {
    value
        .parse()
        .map_err(|_| DsgReadError::InvalidLevel(value.to_owned()))
}

fn required_line(
    lines: &mut impl Iterator<Item = io::Result<String>>,
    expected: &'static str,
) -> Result<String, DsgReadError> {
    next_non_empty(lines)?.ok_or(DsgReadError::UnexpectedEnd(expected))
}

fn next_non_empty(
    lines: &mut impl Iterator<Item = io::Result<String>>,
) -> Result<Option<String>, io::Error> {
    for line in lines {
        let line = line?;
        let trimmed = line.trim();
        if !trimmed.is_empty() {
            return Ok(Some(trimmed.to_owned()));
        }
    }
    Ok(None)
}

pub trait SampleExportModel {
    fn length(&self) -> u32;
    fn set_length(&mut self, length: u32);
    fn period(&self) -> f64;
    fn set_period(&mut self, period: f64);
    fn packed_words(&self) -> Vec<u32>;
}

/// Reimplements Ghidra function `FUN_01511240` at `0x01511240`.
///
/// The model is temporarily requested at 512 samples and its period is scaled
/// by old length divided by the resulting length. The text Data section stores
/// one 16-bit binary word per sample, where every nonzero two-bit channel value
/// becomes one. Period and length are restored only after a fully successful
/// write; an earlier failure keeps the temporary model state.
///
/// # Errors
///
/// Returns the first output error and does not roll back model or file state.
pub fn write_sample_data(
    mut writer: impl Write,
    model: &mut dyn SampleExportModel,
) -> io::Result<()> {
    let old_length = model.length();
    let old_period = model.period();
    model.set_length(SAMPLE_EXPORT_LENGTH);
    let sample_length = model.length();
    let sample_period = old_period * f64::from(old_length) / f64::from(sample_length);
    model.set_period(sample_period);
    let written_period = model.period();
    let words = model.packed_words();

    writeln!(writer, "{FILE_HEADER}")?;
    writeln!(writer)?;
    writeln!(writer, "{PERIOD_MARKER}")?;
    writeln!(writer, "{written_period}")?;
    writeln!(writer, "{LENGTH_MARKER}")?;
    writeln!(writer, "{sample_length}")?;
    writeln!(writer)?;
    writeln!(writer, "{DATA_MARKER}")?;
    let sample_count = usize::try_from(sample_length).unwrap_or(usize::MAX);
    for word in words.into_iter().take(sample_count) {
        writeln!(writer, "{:016b}", collapse_sample_word(word))?;
    }
    writeln!(writer)?;
    writeln!(writer, "{FILE_END_MARKER}")?;

    model.set_period(old_period);
    model.set_length(old_length);
    Ok(())
}

const fn collapse_sample_word(mut word: u32) -> u16 {
    let mut output = 0_u16;
    let mut channel = 0;
    while channel < 16 {
        if word & 3 != 0 {
            output |= 1 << channel;
        }
        word >>= 2;
        channel += 1;
    }
    output
}

#[cfg(test)]
mod tests {
    use super::*;

    fn definition() -> DsgDefinition {
        DsgDefinition {
            period: 0.5,
            length: 4,
            channels: vec![DsgChannelDefinition::new(
                "D0",
                vec![
                    PulsePoint::default(),
                    PulsePoint {
                        moment: 1.5,
                        level: PulseLevel::High,
                    },
                ],
            )],
        }
    }

    #[test]
    fn definition_writer_emits_typed_channel_records() {
        let mut output = Vec::new();

        write_definition(&mut output, &definition()).expect("write DSG definition");

        let text = String::from_utf8(output).expect("UTF-8 DSG text");
        assert!(text.starts_with("@ Digital Signal Generator file\n\n.# Period\n0.5"));
        assert!(text.contains("D0\nDefault\nLow\n\n1.5\nHigh"));
        assert!(text.ends_with(".# end of psg\n.@ end of file\n"));
        assert!(!text.contains(DATA_MARKER));
    }

    #[test]
    fn definition_reader_updates_recognized_channels_and_skips_unknown_ones() {
        let input = b"@ Digital Signal Generator file\n.# Period\n2\n.# Length\n8\nUnknown\nDefault\nHigh\n.# end of psg\nD0\nDefault\nHighZ\n3\nDontcare\n.# end of psg\n.@ end of file\n";
        let mut actual = definition();

        read_definition_into(input.as_slice(), &mut actual).expect("read DSG definition");

        assert!((actual.period - 2.0).abs() < f64::EPSILON);
        assert_eq!(actual.length, 8);
        assert_eq!(actual.channels[0].points.len(), 2);
        assert_eq!(
            actual.channels[0].points[0].level,
            PulseLevel::HighImpedance
        );
        assert_eq!(actual.channels[0].points[1].level, PulseLevel::DontCare);
    }

    #[test]
    fn definition_reader_keeps_a_valid_prefix_after_a_later_error() {
        let input =
            b"@ Digital Signal Generator file\n.# Period\n3\nD0\nDefault\nHigh\n1\ninvalid\n";
        let mut actual = definition();

        let error =
            read_definition_into(input.as_slice(), &mut actual).expect_err("invalid channel level");

        assert!(matches!(error, DsgReadError::InvalidLevel(_)));
        assert!((actual.period - 3.0).abs() < f64::EPSILON);
        assert_eq!(
            actual.channels[0].points,
            [PulsePoint {
                moment: 0.0,
                level: PulseLevel::High
            }]
        );
    }

    struct SampleModel {
        length: u32,
        period: f64,
        words: Vec<u32>,
    }

    impl SampleExportModel for SampleModel {
        fn length(&self) -> u32 {
            self.length
        }

        fn set_length(&mut self, length: u32) {
            self.length = length.min(2);
        }

        fn period(&self) -> f64 {
            self.period
        }

        fn set_period(&mut self, period: f64) {
            self.period = period;
        }

        fn packed_words(&self) -> Vec<u32> {
            self.words.clone()
        }
    }

    #[test]
    fn sample_writer_uses_temporary_length_and_restores_on_success() {
        let mut model = SampleModel {
            length: 4,
            period: 0.5,
            words: vec![0b00_01, 0b11_10],
        };
        let mut output = Vec::new();

        write_sample_data(&mut output, &mut model).expect("write DSG samples");

        let text = String::from_utf8(output).expect("UTF-8 DGB text");
        assert!(text.contains(".# Period\n1\n.# Length\n2"));
        assert!(text.contains(".# Data\n0000000000000001\n0000000000000011"));
        assert_eq!(model.length, 2);
        assert!((model.period - 0.5).abs() < f64::EPSILON);
    }
}
