use std::fmt;

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ParseIntegerError {
    value: String,
}

impl ParseIntegerError {
    fn new(value: &str) -> Self {
        Self {
            value: value.to_owned(),
        }
    }
}

impl fmt::Display for ParseIntegerError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(
            formatter,
            "'{value}' is not a signed 32-bit integer",
            value = self.value
        )
    }
}

impl std::error::Error for ParseIntegerError {}

/// Parses the signed decimal and hexadecimal forms used by recovered TIARA
/// integer edits.
///
/// Leading ASCII spaces and an optional sign are accepted. Hexadecimal input
/// can start with `0x`, `x`, or `$`. Trailing characters and values outside
/// the signed 32-bit range are rejected.
///
/// # Errors
///
/// Returns [`ParseIntegerError`] when digits are missing, a character is not
/// valid for the selected radix, or the value is outside the `i32` range.
pub fn parse_i32(value: &str) -> Result<i32, ParseIntegerError> {
    let original = value;
    let value = value.trim_start_matches(' ');
    let (negative, unsigned) = match value.as_bytes().first() {
        Some(b'-') => (true, &value[1..]),
        Some(b'+') => (false, &value[1..]),
        _ => (false, value),
    };
    let hexadecimal_digits = unsigned
        .strip_prefix("0x")
        .or_else(|| unsigned.strip_prefix("0X"))
        .or_else(|| unsigned.strip_prefix('$'))
        .or_else(|| unsigned.strip_prefix('x'))
        .or_else(|| unsigned.strip_prefix('X'));
    let (radix, digits) = hexadecimal_digits.map_or((10, unsigned), |digits| (16, digits));

    if digits.is_empty() {
        return Err(ParseIntegerError::new(original));
    }

    let magnitude =
        u32::from_str_radix(digits, radix).map_err(|_| ParseIntegerError::new(original))?;
    if negative {
        if magnitude == i32::MIN.unsigned_abs() {
            Ok(i32::MIN)
        } else {
            i32::try_from(magnitude)
                .map(|number| -number)
                .map_err(|_| ParseIntegerError::new(original))
        }
    } else {
        i32::try_from(magnitude).map_err(|_| ParseIntegerError::new(original))
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn parses_supported_signed_decimal_and_hexadecimal_forms() {
        assert_eq!(parse_i32("  +42"), Ok(42));
        assert_eq!(parse_i32("-2147483648"), Ok(i32::MIN));
        assert_eq!(parse_i32("0x7fffffff"), Ok(i32::MAX));
        assert_eq!(parse_i32("-$80000000"), Ok(i32::MIN));
        assert_eq!(parse_i32("x2a"), Ok(42));
    }

    #[test]
    fn rejects_missing_digits_trailing_text_and_overflow() {
        for value in ["", "  ", "+", "0x", "42 ", "12ms", "2147483648"] {
            assert!(parse_i32(value).is_err(), "accepted {value:?}");
        }
    }
}
