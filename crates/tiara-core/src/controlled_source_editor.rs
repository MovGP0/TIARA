//! Controlled-source definition, expression, polynomial, table, and symbol rules.
//!
//! The standard library supplies owned staging buffers, symbol sets, numeric
//! parsing, and line-oriented CSV-compatible text. A third-party expression
//! evaluator was rejected because TIARA must resolve application and circuit
//! symbols through its own compiler. [`ExpressionCompiler`] is the adapter
//! boundary for that compiler.

use std::collections::BTreeSet;
use std::error::Error;
use std::fmt::{self, Write as _};

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum SourceMode {
    #[default]
    Linear,
    Polynomial,
    Value,
    Table,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum OutputKind {
    #[default]
    Voltage,
    Current,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct IoTopology {
    pub voltage_count: usize,
    pub current_count: usize,
    pub output_kind: OutputKind,
    pub differential_output: bool,
    pub differential_voltage_input: bool,
}

impl Default for IoTopology {
    fn default() -> Self {
        Self {
            voltage_count: 1,
            current_count: 0,
            output_kind: OutputKind::Voltage,
            differential_output: false,
            differential_voltage_input: false,
        }
    }
}

#[derive(Debug, Clone, Default, PartialEq)]
pub struct LinearDefinition {
    pub gain: f64,
    pub controlling_name: String,
}

#[derive(Debug, Clone, Default, PartialEq)]
pub struct PolynomialDefinition {
    pub dimension: usize,
    pub coefficients: Vec<f64>,
    pub controlling_names: Vec<String>,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct CompiledExpression {
    pub normalized_text: String,
    pub references: Vec<String>,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct ExpressionDefinition {
    pub text: String,
    pub compiled: Option<CompiledExpression>,
    pub derived_inputs: Vec<String>,
}

#[derive(Debug, Clone, Default, PartialEq)]
pub struct TableDefinition {
    pub values: Vec<f64>,
}

#[derive(Debug, Clone, Default, PartialEq)]
/// Rust-owned strings and vectors replace the recovered Delphi cleanup helpers
/// `FUN_01400430` at `0x01400430` and `FUN_01400e60` at `0x01400E60`.
pub struct ControlledSourceDefinition {
    pub mode: SourceMode,
    pub linear: LinearDefinition,
    pub polynomial: PolynomialDefinition,
    pub expression: ExpressionDefinition,
    pub table: TableDefinition,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct SourceSymbol {
    pub shape_name: String,
    pub library: String,
    pub pins: Vec<String>,
    pub terminal_count: usize,
}

#[derive(Debug, Clone, Default, PartialEq)]
pub struct SourceComponent {
    pub type_code: u16,
    pub definition: ControlledSourceDefinition,
    pub symbol: SourceSymbol,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct MacroShape {
    pub display_name: String,
    pub library: String,
    pub pins: Vec<String>,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
/// Rust collection ownership replaces the recovered cleanup helper
/// `FUN_01400a20` at `0x01400A20`.
pub struct ExpressionContext {
    pub symbols: BTreeSet<String>,
    pub functions: BTreeSet<String>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ExpressionError {
    pub position: usize,
    pub message: String,
}

impl fmt::Display for ExpressionError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(formatter, "{} at position {}", self.message, self.position)
    }
}

impl Error for ExpressionError {}

pub trait ExpressionCompiler {
    /// Compiles an expression in the supplied application and circuit context.
    ///
    /// # Errors
    ///
    /// Returns a diagnostic with a source position for invalid syntax or an
    /// unresolved identifier.
    fn compile(
        &self,
        expression: &str,
        context: &ExpressionContext,
    ) -> Result<Option<CompiledExpression>, ExpressionError>;
}

#[derive(Debug, Clone, Copy, Default)]
pub struct SymbolExpressionCompiler;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ControllerFamily {
    Primary,
    Secondary,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ControllerCandidate {
    pub expression_name: String,
    pub controller_name: String,
    pub type_code: u16,
}

/// Ports Ghidra function `FUN_01400ae0` at `0x01400AE0`.
#[must_use]
pub const fn is_primary_controller_type(type_code: u16) -> bool {
    matches!(type_code, 0x05 | 0x21 | 0x77 | 0x04)
}

/// Ports Ghidra function `FUN_01400b40` at `0x01400B40`.
#[must_use]
pub const fn is_secondary_controller_type(type_code: u16) -> bool {
    matches!(type_code, 0x0E | 0x10 | 0x06 | 0x22)
}

/// Ports Ghidra function `FUN_01400ba0` at `0x01400BA0`.
#[must_use]
pub const fn is_controller_type(type_code: u16) -> bool {
    is_primary_controller_type(type_code) || is_secondary_controller_type(type_code)
}

/// Ports Ghidra function `FUN_01400be0` at `0x01400BE0`.
#[must_use]
pub const fn controller_matches_family(type_code: u16, family: ControllerFamily) -> bool {
    match family {
        ControllerFamily::Primary => is_primary_controller_type(type_code),
        ControllerFamily::Secondary => is_secondary_controller_type(type_code),
    }
}

/// Ports Ghidra function `FUN_01400c40` at `0x01400C40`.
///
/// Typed Rust input replaces the recovered nil and runtime-class checks. Every
/// supported controller is available to expressions. Only a controller in the
/// active family is available to the LINEAR and POLY modes.
pub fn append_controller_candidate(
    expression_variables: &mut Vec<String>,
    controller_choices: &mut Vec<String>,
    candidate: &ControllerCandidate,
    family: ControllerFamily,
) {
    if !is_controller_type(candidate.type_code) {
        return;
    }

    expression_variables.push(candidate.expression_name.clone());
    if controller_matches_family(candidate.type_code, family) {
        controller_choices.push(candidate.controller_name.clone());
    }
}

impl ExpressionCompiler for SymbolExpressionCompiler {
    fn compile(
        &self,
        expression: &str,
        context: &ExpressionContext,
    ) -> Result<Option<CompiledExpression>, ExpressionError> {
        compile_controlled_source_expression(expression, context)
    }
}

/// Ports Ghidra function `FUN_013fd8c0` at `0x013FD8C0`.
///
/// Empty text returns no tree. Nonempty text removes literal spaces, checks
/// delimiter balance, and resolves identifier tokens against the supplied
/// application and circuit symbols, functions, and recovered built-ins.
///
/// # Errors
///
/// Returns a position-aware syntax or unresolved-name diagnostic.
pub fn compile_controlled_source_expression(
    expression: &str,
    context: &ExpressionContext,
) -> Result<Option<CompiledExpression>, ExpressionError> {
    if expression.is_empty() {
        return Ok(None);
    }

    let normalized_text = expression.replace(' ', "");
    let mut depth = 0_usize;
    for (position, character) in normalized_text.char_indices() {
        match character {
            '(' => depth += 1,
            ')' if depth == 0 => {
                return Err(expression_error(position, "unexpected closing parenthesis"));
            }
            ')' => depth -= 1,
            _ => {}
        }
    }
    if depth != 0 {
        return Err(expression_error(
            normalized_text.len(),
            "unclosed parenthesis",
        ));
    }

    let mut references = Vec::new();
    let characters = normalized_text.char_indices().collect::<Vec<_>>();
    let mut cursor = 0;
    while cursor < characters.len() {
        let (position, character) = characters[cursor];
        if !(character.is_ascii_alphabetic() || character == '_') {
            cursor += 1;
            continue;
        }
        let start = cursor;
        cursor += 1;
        while cursor < characters.len()
            && (characters[cursor].1.is_ascii_alphanumeric() || characters[cursor].1 == '_')
        {
            cursor += 1;
        }
        let end = characters
            .get(cursor)
            .map_or(normalized_text.len(), |(offset, _)| *offset);
        let token = &normalized_text[characters[start].0..end];
        let uppercase = token.to_ascii_uppercase();
        let is_call = characters.get(cursor).is_some_and(|(_, next)| *next == '(');
        let resolved = recovered_builtin(&uppercase)
            || context.symbols.contains(token)
            || context.symbols.contains(&uppercase)
            || (is_call
                && (context.functions.contains(token) || context.functions.contains(&uppercase)));
        if !resolved {
            return Err(expression_error(
                position,
                format!("undefined identifier: {token}"),
            ));
        }
        if !recovered_builtin(&uppercase) && !references.iter().any(|value| value == token) {
            references.push(token.to_owned());
        }
    }

    Ok(Some(CompiledExpression {
        normalized_text,
        references,
    }))
}

/// Ports Ghidra function `FUN_01400210` at `0x01400210`.
///
/// Returns the variable at the requested zero-based ordinal among selected
/// controlling components in visible order.
#[must_use]
pub fn selected_polynomial_variable<'a>(
    visible_names: &'a [String],
    selected_indices: &BTreeSet<usize>,
    selected_ordinal: usize,
) -> Option<&'a str> {
    visible_names
        .iter()
        .enumerate()
        .filter(|(index, _)| selected_indices.contains(index))
        .nth(selected_ordinal)
        .map(|(_, name)| name.as_str())
}

/// Ports Ghidra function `FUN_014002c0` at `0x014002C0`.
///
/// Term one is the constant. Later terms enumerate monomials by increasing
/// total degree, moving exponent weight from earlier variables to later ones.
#[must_use]
pub fn polynomial_term_label(term_number: usize, variables: &[String]) -> String {
    if term_number <= 1 {
        return "Constant".to_owned();
    }
    let exponents = monomial_exponents(term_number - 2, variables.len());
    variables
        .iter()
        .zip(exponents)
        .filter_map(|(name, exponent)| match exponent {
            0 => None,
            1 => Some(name.clone()),
            _ => Some(format!("{name}^{exponent}")),
        })
        .collect::<Vec<_>>()
        .join("*")
}

/// Ports Ghidra function `FUN_01402e80` at `0x01402E80`.
pub fn append_required_pin(descriptors: &mut Vec<String>, descriptor: impl Into<String>) {
    descriptors.push(descriptor.into());
}

#[must_use]
pub fn required_pin_descriptors(topology: IoTopology) -> Vec<String> {
    let mut pins = Vec::new();
    for index in 1..=topology.voltage_count {
        append_required_pin(&mut pins, format!("N{index}"));
    }
    for index in 1..=topology.current_count {
        append_required_pin(&mut pins, format!("V{index}"));
        append_required_pin(&mut pins, format!("V{index}-"));
    }
    let output = match topology.output_kind {
        OutputKind::Voltage => "V",
        OutputKind::Current => "I",
    };
    append_required_pin(&mut pins, format!("O({output})"));
    if topology.differential_output {
        append_required_pin(&mut pins, format!("O-({output})"));
    }
    pins
}

#[must_use]
pub fn shape_is_compatible(shape: &MacroShape, topology: IoTopology) -> bool {
    required_pin_descriptors(topology)
        .iter()
        .all(|required| shape.pins.contains(required))
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum SymbolError {
    MissingSelectedShape,
}

impl fmt::Display for SymbolError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str("the selected macro shape is unavailable")
    }
}

impl Error for SymbolError {}

/// Ports Ghidra function `FUN_013ff530` at `0x013FF530`.
///
/// Empty shape text generates the source pins. Named shape text copies the
/// selected compatible macro shape. Both paths apply the recovered terminal-
/// count formula.
///
/// # Errors
///
/// Returns [`SymbolError::MissingSelectedShape`] when named shape text has no
/// matching selected object.
pub fn rebuild_special_component_symbol(
    component: &mut SourceComponent,
    topology: IoTopology,
    shape_name: &str,
    selected_shape: Option<&MacroShape>,
) -> Result<(), SymbolError> {
    let terminal_count = topology.voltage_count
        + topology.current_count.saturating_mul(2)
        + usize::from(topology.differential_output)
        + 1;
    component.symbol = if shape_name.is_empty() {
        SourceSymbol {
            shape_name: String::new(),
            library: String::new(),
            pins: required_pin_descriptors(topology),
            terminal_count,
        }
    } else {
        let shape = selected_shape.ok_or(SymbolError::MissingSelectedShape)?;
        SourceSymbol {
            shape_name: shape.display_name.clone(),
            library: shape.library.clone(),
            pins: shape.pins.clone(),
            terminal_count,
        }
    };
    Ok(())
}

/// Rust's [`Vec`] ownership replaces the recovered cleanup helpers
/// `FUN_01401c60` at `0x01401C60`, `FUN_01401db0` at `0x01401DB0`, and
/// `FUN_01401f40` at `0x01401F40`.
#[derive(Debug, Clone, PartialEq)]
pub struct PolynomialStage {
    coefficient_buffer: Vec<f64>,
    active_count: usize,
    variables: Vec<String>,
}

impl PolynomialStage {
    #[must_use]
    pub fn new(coefficients: Vec<f64>, variables: Vec<String>) -> Self {
        let active_count = coefficients.len();
        Self {
            coefficient_buffer: coefficients,
            active_count,
            variables,
        }
    }

    /// Ports Ghidra function `FUN_01401b00` at `0x01401B00`.
    pub fn set_variables(&mut self, variables: Vec<String>) {
        self.variables = variables;
        if self.variables.is_empty() {
            self.clear();
        }
    }

    /// Ports Ghidra function `FUN_01401c80` at `0x01401C80`.
    pub fn add_coefficient(&mut self) {
        if self.active_count == self.coefficient_buffer.len() {
            self.coefficient_buffer.push(0.0);
        }
        self.active_count += 1;
    }

    /// Ports Ghidra function `FUN_01401de0` at `0x01401DE0`.
    pub const fn remove_last_coefficient(&mut self) {
        self.active_count = self.active_count.saturating_sub(1);
    }

    /// Ports Ghidra function `FUN_01401f60` at `0x01401F60`.
    pub const fn clear(&mut self) {
        self.active_count = 0;
    }

    #[must_use]
    pub fn coefficients(&self) -> &[f64] {
        &self.coefficient_buffer[..self.active_count]
    }

    #[must_use]
    pub fn variables(&self) -> &[String] {
        &self.variables
    }

    #[must_use]
    pub fn labels(&self) -> Vec<String> {
        (1..=self.active_count)
            .map(|term| polynomial_term_label(term, &self.variables))
            .collect()
    }

    pub fn set_coefficient(&mut self, index: usize, value: f64) {
        self.coefficient_buffer[index] = value;
    }
}

/// Rust's [`Vec`] ownership replaces the recovered cleanup helpers
/// for table staging and file-dialog temporary values.
///
/// `FUN_014022b0` at `0x014022B0`, `FUN_01402390` at `0x01402390`,
/// `FUN_014025e0` at `0x014025E0`, and `FUN_01402b40` at `0x01402B40`.
#[derive(Debug, Clone, PartialEq)]
pub struct TableStage {
    value_buffer: Vec<f64>,
    active_count: usize,
}

impl TableStage {
    #[must_use]
    pub fn new(values: Vec<f64>) -> Self {
        let active_count = values.len();
        Self {
            value_buffer: values,
            active_count,
        }
    }

    /// Ports Ghidra function `FUN_014023b0` at `0x014023B0`.
    pub fn add_pair(&mut self) {
        let input = if self.active_count < 2 {
            1.0
        } else {
            self.value_buffer[self.active_count - 2] + 1.0
        };
        self.write_next(input);
        self.write_next(1.0);
    }

    /// Ports Ghidra function `FUN_01402640` at `0x01402640`.
    pub const fn remove_last_pair(&mut self) {
        if self.active_count > 1 {
            self.active_count -= 2;
        }
    }

    /// Ports Ghidra function `FUN_01402700` at `0x01402700`.
    pub const fn clear(&mut self) {
        self.active_count = 0;
    }

    #[must_use]
    pub fn values(&self) -> &[f64] {
        &self.value_buffer[..self.active_count]
    }

    pub fn set_value(&mut self, index: usize, value: f64) {
        self.value_buffer[index] = value;
    }

    fn write_next(&mut self, value: f64) {
        if self.active_count == self.value_buffer.len() {
            self.value_buffer.push(value);
        } else {
            self.value_buffer[self.active_count] = value;
        }
        self.active_count += 1;
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TableLoadError {
    pub line: usize,
    pub field: usize,
    pub value: String,
}

impl fmt::Display for TableLoadError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(
            formatter,
            "line {} field {} is not an engineering number: {}",
            self.line, self.field, self.value
        )
    }
}

impl Error for TableLoadError {}

/// Ports Ghidra function `FUN_01402730` at `0x01402730`.
///
/// Clears staged values, then parses one Input and one Output from each comma-
/// or space-separated physical line. A failed Output leaves its parsed Input
/// active, matching the recovered non-transactional load.
///
/// # Errors
///
/// Returns the first numeric conversion error and preserves the loaded prefix.
pub fn load_table_text(stage: &mut TableStage, source: &str) -> Result<(), TableLoadError> {
    stage.clear();
    for (line_index, line) in source.lines().enumerate() {
        let fields = line
            .replace(',', " ")
            .split_whitespace()
            .map(str::to_owned)
            .collect::<Vec<_>>();
        for field in 0..2 {
            let value = fields.get(field).cloned().unwrap_or_default();
            let parsed = parse_engineering_number(&value).map_err(|()| TableLoadError {
                line: line_index + 1,
                field: field + 1,
                value,
            })?;
            stage.write_next(parsed);
        }
    }
    Ok(())
}

/// Ports Ghidra function `FUN_01402be0` at `0x01402BE0`.
///
/// Serializes complete staged pairs as two engineering-formatted values with
/// one comma and one physical line per pair. A trailing unpaired value is not
/// written because the recovered loop uses integer pair count.
#[must_use]
pub fn save_table_text(stage: &TableStage) -> String {
    stage
        .values()
        .chunks_exact(2)
        .fold(String::new(), |mut output, pair| {
            let _write_result = writeln!(output, "{:.6e},{:.6e}", pair[0], pair[1]);
            output
        })
}

fn monomial_exponents(mut ordinal: usize, dimension: usize) -> Vec<usize> {
    if dimension == 0 {
        return Vec::new();
    }
    let mut degree = 1;
    loop {
        let mut compositions = Vec::new();
        collect_compositions(degree, dimension, &mut Vec::new(), &mut compositions);
        if ordinal < compositions.len() {
            return compositions.swap_remove(ordinal);
        }
        ordinal -= compositions.len();
        degree += 1;
    }
}

fn collect_compositions(
    remaining: usize,
    slots: usize,
    prefix: &mut Vec<usize>,
    output: &mut Vec<Vec<usize>>,
) {
    if slots == 1 {
        let mut value = prefix.clone();
        value.push(remaining);
        output.push(value);
        return;
    }
    for exponent in (0..=remaining).rev() {
        prefix.push(exponent);
        collect_compositions(remaining - exponent, slots - 1, prefix, output);
        prefix.pop();
    }
}

fn recovered_builtin(value: &str) -> bool {
    matches!(value, "GMIN" | "TEMP" | "TIME" | "RNDR" | "RNDC")
}

fn expression_error(position: usize, message: impl Into<String>) -> ExpressionError {
    ExpressionError {
        position,
        message: message.into(),
    }
}

fn parse_engineering_number(source: &str) -> Result<f64, ()> {
    if let Ok(value) = source.parse() {
        return Ok(value);
    }
    let (number, multiplier) = source
        .char_indices()
        .last()
        .and_then(|(index, suffix)| {
            let multiplier = match suffix {
                'p' | 'P' => 1e-12,
                'n' | 'N' => 1e-9,
                'u' | 'U' => 1e-6,
                'm' => 1e-3,
                'k' | 'K' => 1e3,
                'M' => 1e6,
                'g' | 'G' => 1e9,
                _ => return None,
            };
            Some((&source[..index], multiplier))
        })
        .ok_or(())?;
    number
        .parse::<f64>()
        .map(|value| value * multiplier)
        .map_err(|_| ())
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn expression_compiler_handles_empty_symbols_builtins_and_positions() {
        let context = ExpressionContext {
            symbols: BTreeSet::from(["V1".to_owned()]),
            functions: BTreeSet::from(["SIN".to_owned()]),
        };
        assert_eq!(compile_controlled_source_expression("", &context), Ok(None));
        let compiled = compile_controlled_source_expression("SIN(V1) + TIME", &context)
            .expect("valid expression")
            .expect("nonempty expression");
        assert_eq!(compiled.normalized_text, "SIN(V1)+TIME");
        assert_eq!(compiled.references, ["SIN", "V1"]);
        assert_eq!(
            compile_controlled_source_expression("V2", &context)
                .expect_err("unknown name")
                .position,
            0
        );
    }

    #[test]
    fn polynomial_labels_follow_total_degree_order() {
        let variables = vec!["A".to_owned(), "B".to_owned()];
        let labels = (1..=6)
            .map(|term| polynomial_term_label(term, &variables))
            .collect::<Vec<_>>();
        assert_eq!(labels, ["Constant", "A", "B", "A^2", "A*B", "B^2"]);
    }

    #[test]
    fn polynomial_and_table_stages_keep_reusable_trailing_values() {
        let mut polynomial = PolynomialStage::new(vec![2.0], vec!["A".to_owned()]);
        polynomial.remove_last_coefficient();
        polynomial.add_coefficient();
        assert_eq!(polynomial.coefficients(), [2.0]);

        let mut table = TableStage::new(vec![1.0, 4.0]);
        table.remove_last_pair();
        table.add_pair();
        assert_eq!(table.values(), [1.0, 1.0]);
        table.clear();
        assert!(table.values().is_empty());
    }

    #[test]
    fn table_load_keeps_input_when_output_conversion_fails() {
        let mut table = TableStage::new(vec![9.0, 9.0]);
        let error =
            load_table_text(&mut table, "1k,2m\n3,bad").expect_err("second output must fail");
        assert_eq!(error.line, 2);
        assert_eq!(error.field, 2);
        assert_eq!(table.values(), [1000.0, 0.002, 3.0]);
        assert_eq!(save_table_text(&table), "1.000000e3,2.000000e-3\n");
    }

    #[test]
    fn shape_filter_and_rebuild_use_topology_pin_contract() {
        let topology = IoTopology {
            voltage_count: 1,
            current_count: 1,
            output_kind: OutputKind::Current,
            differential_output: true,
            differential_voltage_input: false,
        };
        let shape = MacroShape {
            display_name: "Source".to_owned(),
            library: "BuiltIn".to_owned(),
            pins: vec![
                "N1".to_owned(),
                "V1".to_owned(),
                "V1-".to_owned(),
                "O(I)".to_owned(),
                "O-(I)".to_owned(),
            ],
        };
        assert!(shape_is_compatible(&shape, topology));
        let mut component = SourceComponent::default();
        rebuild_special_component_symbol(&mut component, topology, "Source", Some(&shape))
            .expect("selected shape");
        assert_eq!(component.symbol.terminal_count, 5);
        assert_eq!(component.symbol.library, "BuiltIn");
    }

    #[test]
    fn controller_candidates_follow_recovered_type_families() {
        let primary = ControllerCandidate {
            expression_name: "V(P)".to_owned(),
            controller_name: "P".to_owned(),
            type_code: 0x05,
        };
        let secondary = ControllerCandidate {
            expression_name: "I(S)".to_owned(),
            controller_name: "S".to_owned(),
            type_code: 0x0E,
        };
        let unsupported = ControllerCandidate {
            expression_name: "X".to_owned(),
            controller_name: "X".to_owned(),
            type_code: 0xFF,
        };
        let mut expressions = Vec::new();
        let mut controllers = Vec::new();

        for candidate in [&primary, &secondary, &unsupported] {
            append_controller_candidate(
                &mut expressions,
                &mut controllers,
                candidate,
                ControllerFamily::Primary,
            );
        }

        assert_eq!(expressions, ["V(P)", "I(S)"]);
        assert_eq!(controllers, ["P"]);
        assert!(is_controller_type(0x22));
        assert!(!is_controller_type(0xFF));
    }
}
