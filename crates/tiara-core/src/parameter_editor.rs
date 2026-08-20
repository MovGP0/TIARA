use std::collections::HashSet;
use std::fmt;

const SCHEMATIC_RESERVED_NAMES: [&str; 5] = ["TEMP", "TIME", "GMIN", "RNDR", "RNDC"];
const EXTRA_ATTRIBUTE_SLOT_COUNT: usize = 5;

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct ParameterRow {
    pub name: String,
    pub value: String,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum MacroValueRule {
    EngineeringNumber,
    NonNegativeNumber,
    HexToken,
    NonNegativeInteger,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum SpiceValueValidation {
    None,
    StandardNumber,
    Typed(Vec<MacroValueRule>),
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SpiceSerializationConfig {
    pub pair_separator: char,
    pub validation: SpiceValueValidation,
    pub quoted_value_prefixes: Vec<String>,
}

impl Default for SpiceSerializationConfig {
    fn default() -> Self {
        Self {
            pair_separator: ',',
            validation: SpiceValueValidation::StandardNumber,
            quoted_value_prefixes: Vec::new(),
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ParameterEditorError {
    InvalidNumber(String),
    NegativeNumber(String),
    InvalidInteger(String),
    NegativeInteger(String),
    InvalidHexToken(String),
    MissingValueRule { row: usize },
    ReservedName(String),
    DuplicateName(String),
    InvalidNameStart(String),
    InvalidNameCharacter(String),
    NegativeExtraAttributeSlot(i32),
}

impl fmt::Display for ParameterEditorError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::InvalidNumber(value) => write!(formatter, "{value} is not a valid number."),
            Self::NegativeNumber(value) | Self::NegativeInteger(value) => {
                write!(formatter, "{value} must not be negative.")
            }
            Self::InvalidInteger(value) => write!(formatter, "{value} is not a valid integer."),
            Self::InvalidHexToken(value) => {
                write!(formatter, "{value} is not a valid hexadecimal token.")
            }
            Self::MissingValueRule { row } => {
                write!(formatter, "Parameter row {row} has no value rule.")
            }
            Self::ReservedName(name) => write!(formatter, "{name} is a reserved name."),
            Self::DuplicateName(name) => write!(formatter, "{name} is used more than once."),
            Self::InvalidNameStart(name) => {
                write!(formatter, "{name} must start with an ASCII letter.")
            }
            Self::InvalidNameCharacter(name) => write!(
                formatter,
                "{name} can contain only ASCII letters, digits, and underscores."
            ),
            Self::NegativeExtraAttributeSlot(slot) => {
                write!(formatter, "Extra-attribute slot {slot} is negative.")
            }
        }
    }
}

impl std::error::Error for ParameterEditorError {}

/// Validates one SPICE macro parameter value.
///
/// Reimplements Ghidra function `FUN_0141a770` at `0x0141A770`. The caller
/// selects the recovered engineering-number, nonnegative-number,
/// hexadecimal-token, or nonnegative-integer rule. Invalid input returns an
/// error and has no fallback value.
///
/// # Errors
///
/// Returns a rule-specific [`ParameterEditorError`] when the value is invalid.
pub fn validate_macro_value(value: &str, rule: MacroValueRule) -> Result<(), ParameterEditorError> {
    let value = trim_parameter_text(value);
    match rule {
        MacroValueRule::EngineeringNumber => {
            parse_engineering_number(value)?;
        }
        MacroValueRule::NonNegativeNumber => {
            let number = parse_engineering_number(value)?;
            if number < 0.0 {
                return Err(ParameterEditorError::NegativeNumber(value.to_owned()));
            }
        }
        MacroValueRule::HexToken => {
            if value.is_empty() || !value.chars().all(|character| character.is_ascii_hexdigit()) {
                return Err(ParameterEditorError::InvalidHexToken(value.to_owned()));
            }
        }
        MacroValueRule::NonNegativeInteger => {
            let number = value
                .parse::<i32>()
                .map_err(|_| ParameterEditorError::InvalidInteger(value.to_owned()))?;
            if number < 0 {
                return Err(ParameterEditorError::NegativeInteger(value.to_owned()));
            }
        }
    }

    Ok(())
}

/// Validates and serializes schematic macro rows as comma-separated entries.
///
/// Empty names are ignored by validation. Serialization includes only complete
/// name/value pairs and quotes an entry when its value contains a comma or a
/// quotation mark.
///
/// # Errors
///
/// Returns the first reserved, duplicate, or malformed nonempty name.
pub fn serialize_schematic_rows(rows: &[ParameterRow]) -> Result<String, ParameterEditorError> {
    validate_schematic_names(rows)?;

    Ok(rows
        .iter()
        .filter_map(|row| {
            let name = trim_parameter_text(&row.name);
            let value = trim_parameter_text(&row.value);
            if name.is_empty() || value.is_empty() {
                return None;
            }

            let entry = format!("{name}={value}");
            Some(if value.contains([',', '"']) {
                quote_field(&entry)
            } else {
                entry
            })
        })
        .collect::<Vec<_>>()
        .join(","))
}

/// Validates and serializes SPICE macro rows with caller-selected rules.
///
/// Every nonempty value is validated before an incomplete row is omitted. The
/// configured pair separator is added only between retained rows, so the result
/// has no trailing delimiter.
///
/// # Errors
///
/// Returns the first value-validation error or a missing typed-row rule.
pub fn serialize_spice_rows(
    rows: &[ParameterRow],
    config: &SpiceSerializationConfig,
) -> Result<String, ParameterEditorError> {
    let mut entries = Vec::new();
    for (row_index, row) in rows.iter().enumerate() {
        let name = trim_parameter_text(&row.name);
        let value = trim_parameter_text(&row.value);
        if value.is_empty() {
            continue;
        }

        match &config.validation {
            SpiceValueValidation::None => {}
            SpiceValueValidation::StandardNumber => {
                validate_macro_value(value, MacroValueRule::EngineeringNumber)?;
            }
            SpiceValueValidation::Typed(rules) => {
                let Some(rule) = rules.get(row_index) else {
                    return Err(ParameterEditorError::MissingValueRule { row: row_index });
                };
                validate_macro_value(value, *rule)?;
            }
        }

        if name.is_empty() {
            continue;
        }

        let entry = format!("{name}={value}");
        let quote_entry = config
            .quoted_value_prefixes
            .iter()
            .any(|prefix| value.starts_with(prefix));
        entries.push(if quote_entry {
            quote_field(&entry)
        } else {
            entry
        });
    }

    Ok(entries.join(&config.pair_separator.to_string()))
}

#[must_use]
pub fn serialize_spice_memo(lines: &[String], pair_separator: char) -> String {
    let joined = lines
        .iter()
        .filter(|line| !line.is_empty())
        .map(String::as_str)
        .collect::<Vec<_>>()
        .join(&pair_separator.to_string());
    trim_parameter_text(&joined).to_owned()
}

/// Initializes indexed extra-attribute values.
///
/// Reimplements the list-loading responsibility of Ghidra function
/// `FUN_0141d3b0` at `0x0141D3B0`. Invalid decimal keys select slot zero,
/// duplicate keys use the later value, and slot four is retained. Positive
/// higher slots extend the grid even though the acceptance path reads only the
/// first five slots.
///
/// # Errors
///
/// Returns [`ParameterEditorError::NegativeExtraAttributeSlot`] for a parsed
/// negative slot because it cannot address a Rust grid row.
pub fn initialize_extra_attribute_values(
    entries: &[String],
) -> Result<Vec<String>, ParameterEditorError> {
    let mut values = vec![String::new(); EXTRA_ATTRIBUTE_SLOT_COUNT];
    for entry in entries {
        let (slot_text, value) = entry.split_once('|').unwrap_or((entry, ""));
        let slot = slot_text.parse::<i32>().unwrap_or_default();
        let slot = usize::try_from(slot)
            .map_err(|_| ParameterEditorError::NegativeExtraAttributeSlot(slot))?;
        if values.len() <= slot {
            values.resize(slot.saturating_add(1), String::new());
        }
        value.clone_into(&mut values[slot]);
    }
    Ok(values)
}

/// Replaces a caller-owned indexed extra-attribute list.
///
/// Reimplements Ghidra function `FUN_0141d620` at `0x0141D620`. The target is
/// cleared first. Only nonempty trimmed values from slots zero through four are
/// appended, in slot order, as `slot|value` entries. There is no snapshot or
/// rollback copy.
pub fn replace_extra_attribute_values(target: &mut Vec<String>, values: &[String]) {
    target.clear();
    for (slot, value) in values.iter().take(EXTRA_ATTRIBUTE_SLOT_COUNT).enumerate() {
        let value = trim_parameter_text(value);
        if !value.is_empty() {
            target.push(format!("{slot}|{value}"));
        }
    }
}

fn validate_schematic_names(rows: &[ParameterRow]) -> Result<(), ParameterEditorError> {
    let mut names = HashSet::new();
    for row in rows {
        let name = trim_parameter_text(&row.name);
        if name.is_empty() {
            continue;
        }
        if SCHEMATIC_RESERVED_NAMES.contains(&name) {
            return Err(ParameterEditorError::ReservedName(name.to_owned()));
        }
        if !names.insert(name) {
            return Err(ParameterEditorError::DuplicateName(name.to_owned()));
        }

        let Some(first) = name.chars().next() else {
            continue;
        };
        if !first.is_ascii_alphabetic() {
            return Err(ParameterEditorError::InvalidNameStart(name.to_owned()));
        }
        if !name
            .chars()
            .all(|character| character.is_ascii_alphanumeric() || character == '_')
        {
            return Err(ParameterEditorError::InvalidNameCharacter(name.to_owned()));
        }
    }
    Ok(())
}

fn parse_engineering_number(value: &str) -> Result<f64, ParameterEditorError> {
    if let Ok(number) = value.parse::<f64>() {
        return Ok(number);
    }

    let split = value
        .char_indices()
        .find_map(|(index, character)| character.is_alphabetic().then_some(index))
        .ok_or_else(|| ParameterEditorError::InvalidNumber(value.to_owned()))?;
    let (number, suffix) = value.split_at(split);
    let number = number
        .parse::<f64>()
        .map_err(|_| ParameterEditorError::InvalidNumber(value.to_owned()))?;
    let multiplier = match suffix.to_ascii_lowercase().as_str() {
        "f" => 1e-15,
        "p" => 1e-12,
        "n" => 1e-9,
        "u" | "µ" => 1e-6,
        "m" => 1e-3,
        "k" => 1e3,
        "meg" => 1e6,
        "g" => 1e9,
        "t" => 1e12,
        _ => return Err(ParameterEditorError::InvalidNumber(value.to_owned())),
    };
    Ok(number * multiplier)
}

fn quote_field(value: &str) -> String {
    format!("\"{}\"", value.replace('"', "\"\""))
}

fn trim_parameter_text(value: &str) -> &str {
    value.trim_matches(|character| character < '!')
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn macro_value_rules_cover_engineering_nonnegative_integer_and_token_values() {
        assert!(validate_macro_value("1.5MEG", MacroValueRule::EngineeringNumber).is_ok());
        assert_eq!(
            validate_macro_value("-1m", MacroValueRule::NonNegativeNumber),
            Err(ParameterEditorError::NegativeNumber("-1m".to_owned()))
        );
        assert_eq!(
            validate_macro_value("2.5", MacroValueRule::NonNegativeInteger),
            Err(ParameterEditorError::InvalidInteger("2.5".to_owned()))
        );
        assert!(validate_macro_value("01aF", MacroValueRule::HexToken).is_ok());
        assert_eq!(
            validate_macro_value("0x10", MacroValueRule::HexToken),
            Err(ParameterEditorError::InvalidHexToken("0x10".to_owned()))
        );
    }

    #[test]
    fn schematic_names_reject_known_reserved_duplicates_and_bad_characters() {
        let reserved = vec![ParameterRow {
            name: "TEMP".to_owned(),
            value: "1".to_owned(),
        }];
        assert_eq!(
            serialize_schematic_rows(&reserved),
            Err(ParameterEditorError::ReservedName("TEMP".to_owned()))
        );

        let duplicate = vec![
            ParameterRow {
                name: "gain".to_owned(),
                value: "1".to_owned(),
            },
            ParameterRow {
                name: "gain".to_owned(),
                value: "2".to_owned(),
            },
        ];
        assert_eq!(
            serialize_schematic_rows(&duplicate),
            Err(ParameterEditorError::DuplicateName("gain".to_owned()))
        );

        let malformed = vec![ParameterRow {
            name: "1bad".to_owned(),
            value: "1".to_owned(),
        }];
        assert!(matches!(
            serialize_schematic_rows(&malformed),
            Err(ParameterEditorError::InvalidNameStart(_))
        ));
    }

    #[test]
    fn schematic_serialization_omits_incomplete_rows_and_quotes_composite_values() {
        let rows = vec![
            ParameterRow {
                name: "gain".to_owned(),
                value: " 2 ".to_owned(),
            },
            ParameterRow {
                name: "model".to_owned(),
                value: "a,\"b\"".to_owned(),
            },
            ParameterRow {
                name: String::new(),
                value: "3".to_owned(),
            },
        ];

        assert_eq!(
            serialize_schematic_rows(&rows),
            Ok("gain=2,\"model=a,\"\"b\"\"\"".to_owned())
        );
    }

    #[test]
    fn spice_serialization_applies_each_typed_rule_before_omitting_empty_names() {
        let rows = vec![
            ParameterRow {
                name: "gain".to_owned(),
                value: "1k".to_owned(),
            },
            ParameterRow {
                name: String::new(),
                value: "-1".to_owned(),
            },
        ];
        let config = SpiceSerializationConfig {
            pair_separator: ';',
            validation: SpiceValueValidation::Typed(vec![
                MacroValueRule::EngineeringNumber,
                MacroValueRule::NonNegativeInteger,
            ]),
            quoted_value_prefixes: Vec::new(),
        };

        assert_eq!(
            serialize_spice_rows(&rows, &config),
            Err(ParameterEditorError::NegativeInteger("-1".to_owned()))
        );
    }

    #[test]
    fn custom_spice_serialization_can_quote_caller_identified_composite_values() {
        let rows = vec![ParameterRow {
            name: "table".to_owned(),
            value: "PWL(0,1)\"x".to_owned(),
        }];
        let config = SpiceSerializationConfig {
            pair_separator: ';',
            validation: SpiceValueValidation::None,
            quoted_value_prefixes: vec!["PWL(".to_owned()],
        };

        assert_eq!(
            serialize_spice_rows(&rows, &config),
            Ok("\"table=PWL(0,1)\"\"x\"".to_owned())
        );
        assert_eq!(
            serialize_spice_memo(&[String::new(), "a=1".to_owned(), "b=2".to_owned()], ';'),
            "a=1;b=2"
        );
    }

    #[test]
    fn extra_attribute_initialization_defaults_bad_slots_and_uses_later_duplicates()
    -> Result<(), ParameterEditorError> {
        let values = initialize_extra_attribute_values(&[
            "bad|first".to_owned(),
            "0|second".to_owned(),
            "4|fifth".to_owned(),
            "6|higher".to_owned(),
        ])?;

        assert_eq!(values[0], "second");
        assert_eq!(values[4], "fifth");
        assert_eq!(values[6], "higher");
        Ok(())
    }

    #[test]
    fn extra_attribute_commit_replaces_only_supported_nonempty_slots() {
        let mut target = vec!["9|old".to_owned()];
        replace_extra_attribute_values(
            &mut target,
            &[
                " first ".to_owned(),
                String::new(),
                "internal\tvalue".to_owned(),
                "\n fourth \r".to_owned(),
                "fifth".to_owned(),
                "unsupported".to_owned(),
            ],
        );

        assert_eq!(
            target,
            ["0|first", "2|internal\tvalue", "3|fourth", "4|fifth"]
        );
    }
}
