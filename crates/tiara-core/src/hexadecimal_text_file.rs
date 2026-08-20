use std::fmt;
use std::fs;
use std::io;
use std::path::{Path, PathBuf};

#[derive(Debug)]
pub enum HexadecimalTextFileError {
    FileNotFound(PathBuf),
    Read(io::Error),
    HexNumberExpected { line_number: usize },
}

impl fmt::Display for HexadecimalTextFileError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::FileNotFound(path) => write!(formatter, "File not found: {}", path.display()),
            Self::Read(error) => error.fmt(formatter),
            Self::HexNumberExpected { line_number } => {
                write!(formatter, "Hex number expected, lineno: {line_number}")
            }
        }
    }
}

impl std::error::Error for HexadecimalTextFileError {
    fn source(&self) -> Option<&(dyn std::error::Error + 'static)> {
        match self {
            Self::Read(error) => Some(error),
            Self::FileNotFound(_) | Self::HexNumberExpected { .. } => None,
        }
    }
}

/// Loads the 16-bit output mode of Ghidra function `FUN_013a67f0` at
/// `0x013A67F0`.
///
/// The text file contains hexadecimal tokens. ASCII spaces, tabs, and `|`
/// characters separate tokens. Empty lines are ignored. Tokens after the
/// output is full are still validated. A short file leaves the remaining
/// output values unchanged, and each stored value keeps its low 16 bits.
///
/// # Errors
///
/// Returns [`HexadecimalTextFileError`] when the path does not exist, the file
/// cannot be read as UTF-8 text, or a nonempty line does not contain a required
/// hexadecimal token.
pub fn load_hexadecimal_u16_file(
    path: impl AsRef<Path>,
    output: &mut [u16],
) -> Result<(), HexadecimalTextFileError> {
    load_hexadecimal_file(path.as_ref(), output, low_u16)
}

/// Loads the 32-bit output mode of Ghidra function `FUN_013a67f0` at
/// `0x013A67F0`.
///
/// The text file contains hexadecimal tokens. ASCII spaces, tabs, and `|`
/// characters separate tokens. Empty lines are ignored. Tokens after the
/// output is full are still validated. A short file leaves the remaining
/// output values unchanged. Accumulation wraps at 32 bits, as in the recovered
/// loader.
///
/// # Errors
///
/// Returns [`HexadecimalTextFileError`] when the path does not exist, the file
/// cannot be read as UTF-8 text, or a nonempty line does not contain a required
/// hexadecimal token.
pub fn load_hexadecimal_u32_file(
    path: impl AsRef<Path>,
    output: &mut [u32],
) -> Result<(), HexadecimalTextFileError> {
    load_hexadecimal_file(path.as_ref(), output, |value| value)
}

fn load_hexadecimal_file<T>(
    path: &Path,
    output: &mut [T],
    convert: impl Fn(u32) -> T,
) -> Result<(), HexadecimalTextFileError> {
    if !path.exists() {
        return Err(HexadecimalTextFileError::FileNotFound(path.to_owned()));
    }

    let text = fs::read_to_string(path).map_err(HexadecimalTextFileError::Read)?;
    let mut output_index = 0;

    for (line_index, line) in text.lines().enumerate() {
        parse_line(line, line_index + 1, output, &mut output_index, &convert)?;
    }

    Ok(())
}

fn parse_line<T>(
    line: &str,
    line_number: usize,
    output: &mut [T],
    output_index: &mut usize,
    convert: &impl Fn(u32) -> T,
) -> Result<(), HexadecimalTextFileError> {
    if line.is_empty() {
        return Ok(());
    }

    let bytes = line.as_bytes();
    let mut position = 0;
    while position < bytes.len() {
        let token_start = position;
        let mut value = 0_u32;
        while let Some(digit) = bytes
            .get(position)
            .and_then(|byte| hexadecimal_digit(*byte))
        {
            value = value.wrapping_mul(16).wrapping_add(digit);
            position += 1;
        }

        if position == token_start {
            return Err(HexadecimalTextFileError::HexNumberExpected { line_number });
        }

        if let Some(destination) = output.get_mut(*output_index) {
            *destination = convert(value);
            *output_index += 1;
        }

        while bytes
            .get(position)
            .is_some_and(|byte| matches!(byte, b' ' | b'\t' | b'|'))
        {
            position += 1;
        }
    }

    Ok(())
}

fn hexadecimal_digit(byte: u8) -> Option<u32> {
    match byte {
        b'0'..=b'9' => Some(u32::from(byte - b'0')),
        b'A'..=b'F' => Some(u32::from(byte - b'A') + 10),
        b'a'..=b'f' => Some(u32::from(byte - b'a') + 10),
        _ => None,
    }
}

const fn low_u16(value: u32) -> u16 {
    let [first, second, ..] = value.to_le_bytes();
    u16::from_le_bytes([first, second])
}

#[cfg(test)]
mod tests {
    use std::sync::atomic::{AtomicU64, Ordering};

    use super::*;

    static NEXT_FILE_ID: AtomicU64 = AtomicU64::new(0);

    #[test]
    fn loads_u16_tokens_with_recovered_separators_and_truncation() -> io::Result<()> {
        let path = write_test_file("a B|c\tD\n\n10000 123456789")?;
        let mut output = [0xAAAA; 7];

        let result = load_hexadecimal_u16_file(&path, &mut output);
        fs::remove_file(path)?;

        assert!(result.is_ok());
        assert_eq!(output, [0xA, 0xB, 0xC, 0xD, 0, 0x6789, 0xAAAA]);
        Ok(())
    }

    #[test]
    fn loads_u32_tokens_with_wrapping_accumulation_and_keeps_short_tail() -> io::Result<()> {
        let path = write_test_file("FFFFFFFF 100000000")?;
        let mut output = [7, 8, 9];

        let result = load_hexadecimal_u32_file(&path, &mut output);
        fs::remove_file(path)?;

        assert!(result.is_ok());
        assert_eq!(output, [u32::MAX, 0, 9]);
        Ok(())
    }

    #[test]
    fn validates_surplus_tokens_after_output_is_full() -> io::Result<()> {
        let path = write_test_file("1 2\n3 bad-token\n")?;
        let mut output = [0_u16; 2];

        let error = load_hexadecimal_u16_file(&path, &mut output)
            .expect_err("invalid surplus text must fail");
        fs::remove_file(path)?;

        assert!(matches!(
            error,
            HexadecimalTextFileError::HexNumberExpected { line_number: 2 }
        ));
        assert_eq!(output, [1, 2]);
        Ok(())
    }

    #[test]
    fn reports_the_line_and_keeps_values_written_before_an_error() -> io::Result<()> {
        let path = write_test_file("1\n2\n 3")?;
        let mut output = [9_u32; 3];

        let error = load_hexadecimal_u32_file(&path, &mut output)
            .expect_err("a leading separator must fail");
        fs::remove_file(path)?;

        assert_eq!(error.to_string(), "Hex number expected, lineno: 3");
        assert_eq!(output, [1, 2, 9]);
        Ok(())
    }

    #[test]
    fn rejects_a_hexadecimal_prefix() -> io::Result<()> {
        let path = write_test_file("0x12")?;
        let mut output = [9_u16; 2];

        let error = load_hexadecimal_u16_file(&path, &mut output)
            .expect_err("the recovered grammar does not accept a prefix");
        fs::remove_file(path)?;

        assert!(matches!(
            error,
            HexadecimalTextFileError::HexNumberExpected { line_number: 1 }
        ));
        assert_eq!(output, [0, 9]);
        Ok(())
    }

    #[test]
    fn reports_a_missing_file_with_its_path() {
        let path = Path::new("missing-tiara-hexadecimal-file.txt");
        let mut output = [4_u16];

        let error = load_hexadecimal_u16_file(path, &mut output)
            .expect_err("the path is deliberately absent");

        assert_eq!(
            error.to_string(),
            "File not found: missing-tiara-hexadecimal-file.txt"
        );
        assert_eq!(output, [4]);
    }

    fn write_test_file(contents: &str) -> io::Result<PathBuf> {
        let id = NEXT_FILE_ID.fetch_add(1, Ordering::Relaxed);
        let folder = Path::new(".temp");
        fs::create_dir_all(folder)?;
        let path = folder.join(format!(
            "hexadecimal-text-file-{}-{id}.txt",
            std::process::id()
        ));
        fs::write(&path, contents)?;
        Ok(path)
    }
}
