//! Pulse-generator sequence data and the PSG text format.
//!
//! This module uses `std::io` for buffered text input and output. A separate
//! parser crate would add a dependency without improving this line-based
//! format.

use std::fmt;
use std::fs::File;
use std::io::{self, BufRead, BufReader, BufWriter, Write};
use std::path::Path;
use std::str::FromStr;

const FILE_HEADER: &str = "@ Pulse generator file";
const DEFAULT_MARKER: &str = "Default";
const END_MARKER: &str = ".@ end of file";

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum PulseLevel {
    #[default]
    Low,
    High,
    DontCare,
    HighImpedance,
}

impl PulseLevel {
    pub const ALL: [Self; 4] = [Self::Low, Self::High, Self::DontCare, Self::HighImpedance];
}

impl fmt::Display for PulseLevel {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::Low => "Low",
            Self::High => "High",
            Self::DontCare => "Dontcare",
            Self::HighImpedance => "HighZ",
        })
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ParsePulseLevelError;

impl fmt::Display for ParsePulseLevelError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str("the pulse level is not Low, High, Dontcare, or HighZ")
    }
}

impl std::error::Error for ParsePulseLevelError {}

impl FromStr for PulseLevel {
    type Err = ParsePulseLevelError;

    fn from_str(value: &str) -> Result<Self, Self::Err> {
        match value {
            "Low" => Ok(Self::Low),
            "High" => Ok(Self::High),
            "Dontcare" => Ok(Self::DontCare),
            "HighZ" => Ok(Self::HighImpedance),
            _ => Err(ParsePulseLevelError),
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct PulsePoint {
    pub moment: f64,
    pub level: PulseLevel,
}

impl Default for PulsePoint {
    fn default() -> Self {
        Self {
            moment: 0.0,
            level: PulseLevel::Low,
        }
    }
}

#[derive(Debug, Clone, PartialEq)]
pub struct PulseSequence {
    points: Vec<PulsePoint>,
    repeat_from: usize,
}

impl Default for PulseSequence {
    fn default() -> Self {
        Self {
            points: vec![PulsePoint::default()],
            repeat_from: 0,
        }
    }
}

impl PulseSequence {
    #[must_use]
    pub const fn empty() -> Self {
        Self {
            points: Vec::new(),
            repeat_from: 0,
        }
    }

    #[must_use]
    pub fn points(&self) -> &[PulsePoint] {
        &self.points
    }

    pub fn points_mut(&mut self) -> &mut [PulsePoint] {
        &mut self.points
    }

    #[must_use]
    pub const fn repeat_from(&self) -> usize {
        self.repeat_from
    }

    pub const fn set_repeat_from(&mut self, repeat_from: usize) {
        self.repeat_from = repeat_from;
    }

    pub fn push(&mut self, point: PulsePoint) {
        self.points.push(point);
    }

    pub fn append_default(&mut self) {
        self.points.push(PulsePoint::default());
    }

    pub fn remove_last(&mut self) -> bool {
        if self.points.len() <= 1 {
            return false;
        }

        self.points.pop();
        true
    }

    pub fn reset_points(&mut self) {
        self.points.clear();
        self.points.push(PulsePoint::default());
    }
}

#[derive(Debug)]
pub enum PsgReadError {
    Io(io::Error),
    UnexpectedEnd(&'static str),
    MissingDefault,
    InvalidMoment(String),
    InvalidLevel(String),
}

impl fmt::Display for PsgReadError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::Io(error) => write!(formatter, "cannot read the PSG file: {error}"),
            Self::UnexpectedEnd(expected) => {
                write!(formatter, "the PSG file ended before {expected}")
            }
            Self::MissingDefault => formatter.write_str("the PSG file has no Default section"),
            Self::InvalidMoment(value) => write!(formatter, "invalid pulse moment: {value}"),
            Self::InvalidLevel(value) => write!(formatter, "invalid pulse level: {value}"),
        }
    }
}

impl std::error::Error for PsgReadError {
    fn source(&self) -> Option<&(dyn std::error::Error + 'static)> {
        match self {
            Self::Io(error) => Some(error),
            Self::UnexpectedEnd(_)
            | Self::MissingDefault
            | Self::InvalidMoment(_)
            | Self::InvalidLevel(_) => None,
        }
    }
}

impl From<io::Error> for PsgReadError {
    fn from(error: io::Error) -> Self {
        Self::Io(error)
    }
}

/// Ports Ghidra function `FUN_013f8580` at `0x013F8580`.
///
/// The parser ignores the first non-empty header line, requires a `Default`
/// section, reads its level, and then reads moment and level pairs until the
/// end marker. It adds records directly to `target`. An error therefore keeps
/// the valid prefix, as the recovered load path does.
///
/// # Errors
///
/// Returns [`PsgReadError`] for an I/O error, a missing marker, an incomplete
/// pair, an invalid moment, or an invalid level.
pub fn read_psg(reader: impl BufRead, target: &mut PulseSequence) -> Result<(), PsgReadError> {
    let mut lines = reader.lines();
    let _header = next_non_empty(&mut lines)?.ok_or(PsgReadError::UnexpectedEnd("the header"))?;
    let default =
        next_non_empty(&mut lines)?.ok_or(PsgReadError::UnexpectedEnd("the Default section"))?;
    if default != DEFAULT_MARKER {
        return Err(PsgReadError::MissingDefault);
    }

    let first_level =
        next_non_empty(&mut lines)?.ok_or(PsgReadError::UnexpectedEnd("the default level"))?;
    target.push(PulsePoint {
        moment: 0.0,
        level: parse_level(&first_level)?,
    });

    loop {
        let Some(moment_text) = next_non_empty(&mut lines)? else {
            return Err(PsgReadError::UnexpectedEnd("the end marker"));
        };
        if moment_text.starts_with(".@") {
            return Ok(());
        }

        let moment = moment_text
            .parse::<f64>()
            .map_err(|_| PsgReadError::InvalidMoment(moment_text))?;
        let level_text =
            next_non_empty(&mut lines)?.ok_or(PsgReadError::UnexpectedEnd("a pulse level"))?;
        let level = parse_level(&level_text)?;
        target.push(PulsePoint { moment, level });
    }
}

fn parse_level(value: &str) -> Result<PulseLevel, PsgReadError> {
    value
        .parse()
        .map_err(|_| PsgReadError::InvalidLevel(value.to_owned()))
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

/// Ports Ghidra function `FUN_013f7f40` at `0x013F7F40`.
///
/// The writer emits the recovered PSG header, the first point as the default
/// level, each later moment and level pair, and the final marker. Repeat data
/// is not part of this file format. `std::io::Write` supplies the maintained
/// output boundary, so no extra serialization library is required.
///
/// # Errors
///
/// Returns the first output error. The destination can contain partial text
/// after an error because the recovered writer has no rollback.
pub fn write_psg(mut writer: impl Write, sequence: &PulseSequence) -> io::Result<()> {
    writeln!(writer, "{FILE_HEADER}")?;
    writeln!(writer)?;
    writeln!(writer, "{DEFAULT_MARKER}")?;

    let first = sequence.points.first().copied().unwrap_or_default();
    writeln!(writer, "{}", first.level)?;
    writeln!(writer)?;

    for point in sequence.points.iter().skip(1) {
        writeln!(writer, "{}", point.moment)?;
        writeln!(writer, "{}", point.level)?;
        writeln!(writer)?;
    }

    writeln!(writer, "{END_MARKER}")
}

/// Reads a PSG file into `target` without rollback after a format error.
///
/// # Errors
///
/// Returns the first file-open, read, or format error.
pub fn read_psg_file(
    path: impl AsRef<Path>,
    target: &mut PulseSequence,
) -> Result<(), PsgReadError> {
    let file = File::open(path).map_err(PsgReadError::Io)?;
    read_psg(BufReader::new(file), target)
}

/// Creates or truncates a PSG file and writes `sequence`.
///
/// # Errors
///
/// Returns the first file-create, write, or flush error.
pub fn write_psg_file(path: impl AsRef<Path>, sequence: &PulseSequence) -> io::Result<()> {
    let file = File::create(path)?;
    let mut writer = BufWriter::new(file);
    write_psg(&mut writer, sequence)?;
    writer.flush()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn writer_emits_the_recovered_structure_without_repeat_data() {
        let mut sequence = PulseSequence::default();
        sequence.points_mut()[0].level = PulseLevel::High;
        sequence.push(PulsePoint {
            moment: 1.5,
            level: PulseLevel::HighImpedance,
        });
        sequence.set_repeat_from(1);
        let mut output = Vec::new();

        write_psg(&mut output, &sequence).expect("write PSG text");

        assert_eq!(
            String::from_utf8(output).expect("UTF-8 PSG text"),
            "@ Pulse generator file\n\nDefault\nHigh\n\n1.5\nHighZ\n\n.@ end of file\n"
        );
    }

    #[test]
    fn parser_reads_blank_separated_points_and_all_levels() {
        let input =
            b"ignored header\n\nDefault\nLow\n1\nHigh\n2\nDontcare\n3\nHighZ\n.@ end of file\n";
        let mut sequence = PulseSequence::empty();

        read_psg(input.as_slice(), &mut sequence).expect("valid PSG text");

        assert_eq!(
            sequence.points(),
            &[
                PulsePoint::default(),
                PulsePoint {
                    moment: 1.0,
                    level: PulseLevel::High,
                },
                PulsePoint {
                    moment: 2.0,
                    level: PulseLevel::DontCare,
                },
                PulsePoint {
                    moment: 3.0,
                    level: PulseLevel::HighImpedance,
                },
            ]
        );
    }

    #[test]
    fn parser_requires_the_default_marker() {
        let mut sequence = PulseSequence::empty();

        let error = read_psg(b"header\nNot default\n".as_slice(), &mut sequence)
            .expect_err("missing Default marker");

        assert!(matches!(error, PsgReadError::MissingDefault));
        assert!(sequence.points().is_empty());
    }

    #[test]
    fn parser_keeps_the_valid_prefix_after_a_later_level_error() {
        let mut sequence = PulseSequence::empty();

        let error = read_psg(
            b"header\nDefault\nHigh\n1.25\ninvalid\n".as_slice(),
            &mut sequence,
        )
        .expect_err("invalid second level");

        assert!(matches!(error, PsgReadError::InvalidLevel(_)));
        assert_eq!(
            sequence.points(),
            &[PulsePoint {
                moment: 0.0,
                level: PulseLevel::High,
            }]
        );
    }

    #[test]
    fn parser_and_writer_round_trip_the_sequence() {
        let mut expected = PulseSequence::default();
        expected.push(PulsePoint {
            moment: 2.75,
            level: PulseLevel::DontCare,
        });
        let mut text = Vec::new();
        write_psg(&mut text, &expected).expect("write PSG text");
        let mut actual = PulseSequence::empty();

        read_psg(text.as_slice(), &mut actual).expect("read PSG text");

        assert_eq!(actual, expected);
    }
}
