use std::collections::HashSet;
use std::fmt;

pub const CONFIGURATION_BEGIN: &str = "@ Configuration begin";
pub const CONFIGURATION_END: &str = ".@ Configuration end";

const KNOWN_RESERVED_NAMES: [&str; 5] = ["TEMP", "TIME", "GMIN", "RNDR", "RNDC"];

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct GlobalParameterRow {
    pub name: String,
    pub value: String,
    visible: bool,
}

impl GlobalParameterRow {
    #[must_use]
    pub fn new(name: impl Into<String>, value: impl Into<String>, visible: bool) -> Self {
        Self {
            name: name.into(),
            value: value.into(),
            visible,
        }
    }

    /// Reads the recovered third-column row flag.
    ///
    /// This is an original Rust implementation traced to Ghidra function
    /// `0x0143D610`, symbol `FUN_0143d610`.
    #[must_use]
    pub const fn is_visible(&self) -> bool {
        self.visible
    }

    /// Writes the recovered third-column row flag.
    ///
    /// This is an original Rust implementation traced to Ghidra function
    /// `0x0143D630`, symbol `FUN_0143d630`.
    pub const fn set_visible(&mut self, visible: bool) {
        self.visible = visible;
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum GlobalParameterValidationError {
    EmptyName { row: usize },
    EmptyValue { row: usize },
    ReservedName(String),
    DuplicateName(String),
    InvalidNameStart(String),
    InvalidNameCharacter(String),
}

impl fmt::Display for GlobalParameterValidationError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::EmptyName { row } => write!(formatter, "Parameter row {row} has no name."),
            Self::EmptyValue { row } => write!(formatter, "Parameter row {row} has no value."),
            Self::ReservedName(name) => write!(formatter, "{name} is a reserved name."),
            Self::DuplicateName(name) => write!(formatter, "{name} is used more than once."),
            Self::InvalidNameStart(name) => {
                write!(formatter, "{name} must start with an ASCII letter.")
            }
            Self::InvalidNameCharacter(name) => write!(
                formatter,
                "{name} can contain only ASCII letters, digits, and underscores."
            ),
        }
    }
}

impl std::error::Error for GlobalParameterValidationError {}

/// Validates every global-parameter name and value in row order.
///
/// This is an original Rust implementation traced to Ghidra function
/// `0x0143CA80`, symbol `FUN_0143ca80`. The caller supplies the four reserved
/// names whose original text was not recovered. The first error stops the
/// scan.
///
/// # Errors
///
/// Returns the first empty, reserved, duplicate, or malformed row error.
pub fn validate_global_parameter_rows(
    rows: &[GlobalParameterRow],
    additional_reserved_names: &[String],
) -> Result<(), GlobalParameterValidationError> {
    let mut names = HashSet::new();
    for (row_index, row) in rows.iter().enumerate() {
        let name = trim_parameter_text(&row.name);
        if name.is_empty() {
            return Err(GlobalParameterValidationError::EmptyName { row: row_index });
        }
        if trim_parameter_text(&row.value).is_empty() {
            return Err(GlobalParameterValidationError::EmptyValue { row: row_index });
        }
        let normalized_name = name.to_ascii_uppercase();
        if KNOWN_RESERVED_NAMES.contains(&normalized_name.as_str())
            || additional_reserved_names
                .iter()
                .any(|reserved| reserved.eq_ignore_ascii_case(name))
        {
            return Err(GlobalParameterValidationError::ReservedName(
                name.to_owned(),
            ));
        }
        if !names.insert(normalized_name) {
            return Err(GlobalParameterValidationError::DuplicateName(
                name.to_owned(),
            ));
        }

        let Some(first) = name.chars().next() else {
            return Err(GlobalParameterValidationError::EmptyName { row: row_index });
        };
        if !first.is_ascii_alphabetic() {
            return Err(GlobalParameterValidationError::InvalidNameStart(
                name.to_owned(),
            ));
        }
        if !name
            .chars()
            .all(|character| character.is_ascii_alphanumeric() || character == '_')
        {
            return Err(GlobalParameterValidationError::InvalidNameCharacter(
                name.to_owned(),
            ));
        }
    }

    Ok(())
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct FormattedParameterText {
    pub visible_assignments: Vec<String>,
    pub configuration_names: Vec<String>,
    all_assignments: Vec<String>,
}

impl FormattedParameterText {
    #[must_use]
    pub fn lines(&self) -> Vec<String> {
        let mut lines = self.visible_assignments.clone();
        if !self.configuration_names.is_empty() {
            lines.push(CONFIGURATION_BEGIN.to_owned());
            lines.extend(self.configuration_names.iter().cloned());
            lines.push(CONFIGURATION_END.to_owned());
        }
        lines
    }

    #[must_use]
    pub fn all_assignments(&self) -> Vec<String> {
        self.all_assignments.clone()
    }
}

#[must_use]
pub fn format_global_parameter_text(rows: &[GlobalParameterRow]) -> FormattedParameterText {
    let mut formatted = FormattedParameterText::default();
    for row in rows {
        let assignment = format!(
            "{}={}",
            trim_parameter_text(&row.name),
            trim_parameter_text(&row.value)
        );
        formatted.all_assignments.push(assignment.clone());
        if row.is_visible() {
            formatted.visible_assignments.push(assignment);
        } else {
            formatted
                .configuration_names
                .push(trim_parameter_text(&row.name).to_owned());
        }
    }
    formatted
}

#[derive(Debug, Clone, PartialEq)]
pub struct ExpressionRecord {
    pub name: String,
    pub expression: String,
    pub result: Option<f64>,
}

pub trait ExpressionEvaluator {
    /// Evaluates one expression against the complete temporary symbol context.
    ///
    /// # Errors
    ///
    /// Returns the parser or evaluator error without local recovery.
    fn evaluate(&self, expression: &str, context: &[ExpressionRecord]) -> Result<f64, String>;
}

/// Builds and evaluates a temporary parameter context without committing it.
///
/// This supplies the evaluation core used by the iced adapter for Ghidra
/// function `0x0143C210`, symbol `FUN_0143c210`.
///
/// # Errors
///
/// Returns the first expression evaluator error.
pub fn evaluate_parameter_expressions(
    rows: &[GlobalParameterRow],
    auxiliary: &[ExpressionRecord],
    schematic_symbols: &[ExpressionRecord],
    evaluator: &dyn ExpressionEvaluator,
) -> Result<Vec<ExpressionRecord>, String> {
    let mut records = rows
        .iter()
        .map(|row| ExpressionRecord {
            name: trim_parameter_text(&row.name).to_owned(),
            expression: trim_parameter_text(&row.value).to_owned(),
            result: None,
        })
        .chain(auxiliary.iter().cloned())
        .chain(schematic_symbols.iter().cloned())
        .collect::<Vec<_>>();

    for index in 0..rows.len() {
        if records[index].expression.is_empty() {
            continue;
        }
        let result = evaluator.evaluate(&records[index].expression, &records)?;
        records[index].result = Some(result);
    }

    Ok(records)
}

#[derive(Debug, Clone, Copy, Default, PartialEq)]
pub struct Bounds {
    pub x: f32,
    pub y: f32,
    pub width: f32,
    pub height: f32,
}

impl Bounds {
    #[must_use]
    pub fn union(self, other: Self) -> Self {
        let left = self.x.min(other.x);
        let top = self.y.min(other.y);
        let right = (self.x + self.width).max(other.x + other.width);
        let bottom = (self.y + self.height).max(other.y + other.height);
        Self {
            x: left,
            y: top,
            width: right - left,
            height: bottom - top,
        }
    }
}

#[derive(Debug, Clone, PartialEq)]
pub struct ParameterTextObject {
    pub id: u64,
    pub object_type: u8,
    pub state: u8,
    pub lines: Vec<String>,
    pub bounds: Bounds,
}

/// Refreshes compatible parameter text objects and returns invalidation bounds.
///
/// This is an original Rust implementation traced to Ghidra function
/// `0x0143D700`, symbol `FUN_0143d700`. It selects type 8, state 2 objects,
/// skips the supplied object, preserves each configuration block, adds global
/// assignments that are not overridden there, and invalidates the union of the
/// old and new bounds.
pub fn refresh_parameter_text_objects(
    objects: &mut [ParameterTextObject],
    skipped_object: Option<u64>,
    global_assignments: &[String],
) -> Vec<Bounds> {
    let mut invalidations = Vec::new();
    for object in objects.iter_mut().filter(|object| {
        object.object_type == 8 && object.state == 2 && Some(object.id) != skipped_object
    }) {
        let configuration = configuration_lines(&object.lines);
        let configured_names = configuration
            .iter()
            .map(|line| line.split_once('=').map_or(line.as_str(), |(name, _)| name))
            .collect::<HashSet<_>>();
        let mut lines = global_assignments
            .iter()
            .filter(|assignment| {
                assignment
                    .split_once('=')
                    .is_none_or(|(name, _)| !configured_names.contains(name))
            })
            .cloned()
            .collect::<Vec<_>>();
        if !configuration.is_empty() {
            lines.push(CONFIGURATION_BEGIN.to_owned());
            lines.extend(configuration);
            lines.push(CONFIGURATION_END.to_owned());
        }

        let old_bounds = object.bounds;
        object.lines = lines;
        let line_count = u16::try_from(object.lines.len()).unwrap_or(u16::MAX);
        object.bounds.height = f32::from(line_count);
        invalidations.push(old_bounds.union(object.bounds));
    }
    invalidations
}

fn configuration_lines(lines: &[String]) -> Vec<String> {
    let Some(begin) = lines.iter().position(|line| line == CONFIGURATION_BEGIN) else {
        return Vec::new();
    };
    let Some(relative_end) = lines[begin + 1..]
        .iter()
        .position(|line| line == CONFIGURATION_END)
    else {
        return Vec::new();
    };
    lines[begin + 1..begin + 1 + relative_end].to_vec()
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct RuntimeParameterObject {
    pub name: String,
    pub factor: i16,
}

#[derive(Debug, Clone, Default, PartialEq)]
pub struct RuntimeParameterState {
    pub objects: Vec<RuntimeParameterObject>,
    pub derived_aggregate: f64,
    pub current: Option<RuntimeParameterObject>,
}

pub fn transfer_runtime_parameter_objects(
    runtime: &mut RuntimeParameterState,
    working: &mut Vec<RuntimeParameterObject>,
    minimum_mode: bool,
) {
    runtime.objects = std::mem::take(working);
    runtime.derived_aggregate = if minimum_mode {
        runtime
            .objects
            .iter()
            .map(|object| f64::from(object.factor))
            .reduce(f64::min)
            .unwrap_or(1.0)
    } else {
        runtime
            .objects
            .iter()
            .map(|object| f64::from(object.factor))
            .product()
    };
    runtime.current = runtime.objects.first().cloned();
}

fn trim_parameter_text(value: &str) -> &str {
    value.trim_matches(|character| character < '!')
}

#[cfg(test)]
mod tests {
    use super::*;

    struct NumericEvaluator;

    impl ExpressionEvaluator for NumericEvaluator {
        fn evaluate(&self, expression: &str, _context: &[ExpressionRecord]) -> Result<f64, String> {
            expression.parse::<f64>().map_err(|error| error.to_string())
        }
    }

    #[test]
    fn validation_reports_the_first_global_row_error() {
        let rows = vec![
            GlobalParameterRow::new("Gain", "1", true),
            GlobalParameterRow::new("gain", "2", true),
        ];
        assert_eq!(
            validate_global_parameter_rows(&rows, &[]),
            Err(GlobalParameterValidationError::DuplicateName(
                "gain".to_owned()
            ))
        );
        assert_eq!(
            validate_global_parameter_rows(&[GlobalParameterRow::new("temp", "1", true)], &[]),
            Err(GlobalParameterValidationError::ReservedName(
                "temp".to_owned()
            ))
        );
        assert_eq!(
            validate_global_parameter_rows(
                &[GlobalParameterRow::new("HIDDEN", "1", true)],
                &["HIDDEN".to_owned()]
            ),
            Err(GlobalParameterValidationError::ReservedName(
                "HIDDEN".to_owned()
            ))
        );
    }

    #[test]
    fn formatting_splits_visible_and_configuration_assignments() {
        let mut hidden = GlobalParameterRow::new("internal", "2", true);
        hidden.set_visible(false);
        let formatted =
            format_global_parameter_text(&[GlobalParameterRow::new("gain", "1", true), hidden]);

        assert_eq!(formatted.visible_assignments, ["gain=1"]);
        assert_eq!(formatted.configuration_names, ["internal"]);
        assert_eq!(formatted.all_assignments(), ["gain=1", "internal=2"]);
        assert_eq!(
            formatted.lines(),
            ["gain=1", CONFIGURATION_BEGIN, "internal", CONFIGURATION_END]
        );
    }

    #[test]
    fn evaluation_is_temporary_and_includes_supplied_context() -> Result<(), String> {
        let auxiliary = vec![ExpressionRecord {
            name: "aux".to_owned(),
            expression: String::new(),
            result: Some(4.0),
        }];
        let records = evaluate_parameter_expressions(
            &[GlobalParameterRow::new("gain", "2", true)],
            &auxiliary,
            &[],
            &NumericEvaluator,
        )?;

        assert_eq!(records[0].result, Some(2.0));
        assert_eq!(records[1], auxiliary[0]);
        Ok(())
    }

    #[test]
    fn compatible_refresh_preserves_configuration_and_skips_the_attached_object() {
        let mut objects = vec![
            ParameterTextObject {
                id: 1,
                object_type: 8,
                state: 2,
                lines: vec!["old=1".to_owned()],
                bounds: Bounds {
                    width: 5.0,
                    height: 1.0,
                    ..Bounds::default()
                },
            },
            ParameterTextObject {
                id: 2,
                object_type: 8,
                state: 2,
                lines: vec![
                    CONFIGURATION_BEGIN.to_owned(),
                    "gain".to_owned(),
                    CONFIGURATION_END.to_owned(),
                ],
                bounds: Bounds {
                    width: 5.0,
                    height: 1.0,
                    ..Bounds::default()
                },
            },
        ];

        let invalidations = refresh_parameter_text_objects(
            &mut objects,
            Some(1),
            &["gain=global".to_owned(), "offset=2".to_owned()],
        );

        assert_eq!(objects[0].lines, ["old=1"]);
        assert_eq!(
            objects[1].lines,
            ["offset=2", CONFIGURATION_BEGIN, "gain", CONFIGURATION_END]
        );
        assert_eq!(invalidations.len(), 1);
    }

    #[test]
    fn runtime_transfer_uses_product_or_minimum_and_clears_working_ownership() {
        let objects = vec![
            RuntimeParameterObject {
                name: "a".to_owned(),
                factor: 3,
            },
            RuntimeParameterObject {
                name: "b".to_owned(),
                factor: 2,
            },
        ];
        let mut product_working = objects.clone();
        let mut product = RuntimeParameterState::default();
        transfer_runtime_parameter_objects(&mut product, &mut product_working, false);
        assert!((product.derived_aggregate - 6.0).abs() < f64::EPSILON);
        assert!(product_working.is_empty());
        assert_eq!(product.current, objects.first().cloned());

        let mut minimum_working = objects;
        let mut minimum = RuntimeParameterState::default();
        transfer_runtime_parameter_objects(&mut minimum, &mut minimum_working, true);
        assert!((minimum.derived_aggregate - 2.0).abs() < f64::EPSILON);
    }
}
