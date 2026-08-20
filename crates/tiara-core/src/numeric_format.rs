use std::fmt;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum EngineeringScale {
    Automatic,
    Unscaled,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PrefixStyle {
    Spice,
    Si,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DecimalStepDirection {
    Decrease,
    Increase,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct EngineeringNumber {
    pub mantissa: String,
    pub thousand_exponent: i8,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ParseEngineeringNumberError {
    source: String,
}

impl fmt::Display for ParseEngineeringNumberError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(formatter, "{0:?} is not an engineering number", self.source)
    }
}

impl std::error::Error for ParseEngineeringNumberError {}

/// Parses a decimal or scientific number with an optional SI/SPICE prefix.
///
/// This is the standard-library adapter for TIARA numeric editors. It accepts
/// the same `f`, `p`, `n`, `u`, `µ`, `m`, `k`, `meg`, `g`, and `t` suffixes
/// that the formatter emits. Callers apply their own field-specific bounds.
///
/// # Errors
///
/// Returns [`ParseEngineeringNumberError`] when the text or suffix is invalid.
pub fn parse_engineering_number(source: &str) -> Result<f64, ParseEngineeringNumberError> {
    let source = source.trim();
    if let Ok(value) = source.parse::<f64>() {
        return Ok(value);
    }

    let split = source
        .char_indices()
        .find_map(|(index, character)| character.is_alphabetic().then_some(index))
        .ok_or_else(|| ParseEngineeringNumberError {
            source: source.to_owned(),
        })?;
    let (number, suffix) = source.split_at(split);
    let number = number
        .parse::<f64>()
        .map_err(|_| ParseEngineeringNumberError {
            source: source.to_owned(),
        })?;
    let multiplier = if suffix == "M" {
        1e6
    } else {
        match suffix.to_ascii_lowercase().as_str() {
            "f" => 1e-15,
            "p" => 1e-12,
            "n" => 1e-9,
            "u" | "µ" => 1e-6,
            "m" => 1e-3,
            "k" => 1e3,
            "meg" => 1e6,
            "g" => 1e9,
            "t" => 1e12,
            _ => {
                return Err(ParseEngineeringNumberError {
                    source: source.to_owned(),
                });
            }
        }
    };
    Ok(number * multiplier)
}

/// Ports Ghidra function `FUN_00b8f7f0` at `0x00B8F7F0`.
///
/// The recovered helper formats a floating-point number with optional decimal
/// precision. Automatic mode scales values in steps of 1,000 while their
/// absolute value is in the supported `1e-15..1e15` range. Values outside that
/// range use scientific notation and do not receive an engineering prefix.
#[must_use]
pub fn format_engineering_number(
    value: f64,
    precision: Option<u8>,
    scale: EngineeringScale,
) -> EngineeringNumber {
    let absolute = value.abs();
    if !value.is_finite() || (absolute != 0.0 && !(1e-15..1e15).contains(&absolute)) {
        return EngineeringNumber {
            mantissa: format_scientific(value, precision),
            thousand_exponent: 0,
        };
    }

    let mut scaled = value;
    let mut thousand_exponent = 0_i8;
    if scale == EngineeringScale::Automatic && absolute != 0.0 {
        while scaled.abs() < 1.0 && thousand_exponent > -5 {
            scaled *= 1_000.0;
            thousand_exponent -= 1;
        }
        while scaled.abs() >= 1_000.0 && thousand_exponent < 4 {
            scaled /= 1_000.0;
            thousand_exponent += 1;
        }
    }

    EngineeringNumber {
        mantissa: format_decimal(scaled, precision),
        thousand_exponent,
    }
}

/// Ports Ghidra function `FUN_00b8fcd0` at `0x00B8FCD0`.
///
/// The recovered function combines the formatted mantissa with one of two
/// prefix tables. TIARA exposes the distinction as ASCII SPICE notation or
/// the SI micro sign. An unscaled value and a scientific value have no prefix.
#[must_use]
pub fn format_engineering_with_prefix(
    value: f64,
    precision: Option<u8>,
    scale: EngineeringScale,
    prefix_style: PrefixStyle,
) -> String {
    let number = format_engineering_number(value, precision, scale);
    let prefix = prefix(number.thousand_exponent, prefix_style);
    format!("{}{prefix}", number.mantissa)
}

/// Ports Ghidra function `FUN_00b8fd60` at `0x00B8FD60`.
///
/// This high-use wrapper delegates to the engineering formatter and returns
/// the resulting application display string. It is in `tiara-core` because
/// the recovered call graph contains 193 direct callers in different UI and
/// calculation components.
#[must_use]
pub fn format_display_value(value: f64, precision: u8) -> String {
    format_engineering_with_prefix(
        value,
        Some(precision),
        EngineeringScale::Automatic,
        PrefixStyle::Spice,
    )
}

/// Moves a value to the adjacent decimal grid point.
///
/// This is the shared clean-room adapter for controls that use decade-aware
/// arrow buttons. It uses only standard floating-point operations. A zero
/// value moves by `zero_step`; finite nonzero values move by one unit at their
/// current decimal decade.
#[must_use]
pub fn step_decimal_value(value: f64, direction: DecimalStepDirection, zero_step: f64) -> f64 {
    if !value.is_finite() || !zero_step.is_finite() || zero_step <= 0.0 {
        return value;
    }
    if value == 0.0 {
        return match direction {
            DecimalStepDirection::Decrease => -zero_step,
            DecimalStepDirection::Increase => zero_step,
        };
    }

    let increasing_magnitude = matches!(
        (value.is_sign_positive(), direction),
        (true, DecimalStepDirection::Increase) | (false, DecimalStepDirection::Decrease)
    );
    let magnitude = value.abs();
    let exponent = magnitude.log10().floor();
    let unit = 10.0_f64.powf(exponent);
    let scaled = magnitude / unit;
    let rounded = scaled.round();
    let is_grid_point = (scaled - rounded).abs() <= 1e-9;
    let next_magnitude = if increasing_magnitude {
        (scaled.floor() + 1.0) * unit
    } else if is_grid_point {
        if rounded <= 1.0 {
            9.0 * unit / 10.0
        } else {
            (rounded - 1.0) * unit
        }
    } else {
        scaled.floor() * unit
    };

    next_magnitude.copysign(value)
}

fn format_decimal(value: f64, precision: Option<u8>) -> String {
    let Some(precision) = precision else {
        return value.to_string();
    };
    let precision = usize::from(precision);
    let mut text = format!("{value:.precision$}");
    if text.contains('.') {
        while text.ends_with('0') {
            text.pop();
        }
        if text.ends_with('.') {
            text.pop();
        }
    }
    text
}

fn format_scientific(value: f64, precision: Option<u8>) -> String {
    let precision = usize::from(precision.unwrap_or(2));
    let raw = format!("{value:.precision$e}");
    let Some((mantissa, exponent)) = raw.split_once('e') else {
        return raw;
    };
    let exponent = exponent.parse::<i32>().unwrap_or_default();
    format!("{}E{exponent:+03}", trim_fraction(mantissa))
}

fn trim_fraction(value: &str) -> &str {
    value
        .trim_end_matches('0')
        .trim_end_matches('.')
        .trim_end_matches("-0")
}

const fn prefix(exponent: i8, style: PrefixStyle) -> &'static str {
    match exponent {
        -5 => "f",
        -4 => "p",
        -3 => "n",
        -2 if matches!(style, PrefixStyle::Si) => "µ",
        -2 => "u",
        -1 => "m",
        1 => "k",
        2 => "M",
        3 => "G",
        4 => "T",
        _ => "",
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn assert_close(actual: f64, expected: f64) {
        let tolerance = f64::EPSILON.max(expected.abs() * f64::EPSILON);
        assert!((actual - expected).abs() <= tolerance);
    }

    #[test]
    fn automatic_scale_uses_thousand_steps_and_optional_digits() {
        assert_eq!(format_display_value(0.001_25, 3), "1.25m");
        assert_eq!(format_display_value(1_500.0, 3), "1.5k");
        assert_eq!(format_display_value(0.0, 3), "0");
    }

    #[test]
    fn parser_accepts_decimal_scientific_and_engineering_values() {
        for (source, expected) in [
            ("1.25", 1.25),
            ("2e3", 2_000.0),
            ("3.3k", 3_300.0),
            ("4MEG", 4_000_000.0),
            ("6M", 6_000_000.0),
            ("6m", 0.006),
            ("5µ", 0.000_005),
        ] {
            let Ok(actual) = parse_engineering_number(source) else {
                panic!("{source} must be a valid engineering number");
            };
            assert_close(actual, expected);
        }
        assert!(parse_engineering_number("4watts").is_err());
    }

    #[test]
    fn prefix_style_selects_the_micro_character() {
        assert_eq!(
            format_engineering_with_prefix(
                0.000_001,
                Some(2),
                EngineeringScale::Automatic,
                PrefixStyle::Spice,
            ),
            "1u"
        );
        assert_eq!(
            format_engineering_with_prefix(
                0.000_001,
                Some(2),
                EngineeringScale::Automatic,
                PrefixStyle::Si,
            ),
            "1µ"
        );
    }

    #[test]
    fn unscaled_mode_does_not_attach_a_prefix() {
        assert_eq!(
            format_engineering_with_prefix(
                1_500.0,
                Some(2),
                EngineeringScale::Unscaled,
                PrefixStyle::Spice,
            ),
            "1500"
        );
    }

    #[test]
    fn values_outside_the_engineering_range_use_scientific_notation() {
        assert_eq!(format_display_value(1e15, 2), "1E+15");
        assert_eq!(format_display_value(1e-16, 2), "1E-16");
    }

    #[test]
    fn decimal_step_moves_between_adjacent_decade_grid_points() {
        assert_close(
            step_decimal_value(9.0, DecimalStepDirection::Increase, 1e-6),
            10.0,
        );
        assert_close(
            step_decimal_value(10.0, DecimalStepDirection::Decrease, 1e-6),
            9.0,
        );
        assert_close(
            step_decimal_value(12.5, DecimalStepDirection::Decrease, 1e-6),
            10.0,
        );
        assert_close(
            step_decimal_value(-10.0, DecimalStepDirection::Increase, 1e-6),
            -9.0,
        );
    }

    #[test]
    fn decimal_step_uses_the_supplied_zero_step() {
        assert_close(
            step_decimal_value(0.0, DecimalStepDirection::Increase, 1e-6),
            1e-6,
        );
        assert_close(
            step_decimal_value(0.0, DecimalStepDirection::Decrease, 1e-12),
            -1e-12,
        );
        assert!(step_decimal_value(f64::NAN, DecimalStepDirection::Increase, 1.0).is_nan());
    }
}
