//! Domain state and policy for electrical-rules checks.

use std::collections::BTreeMap;

use crate::analysis_options::ErcOptions;
use crate::analysis_options::ErcRule;

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct PresentationOptions {
    pub automatic_enabled: bool,
    pub show_on_warnings: bool,
    pub recurse: bool,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct ElectricalRulesSettings {
    pub rules: ErcOptions,
    pub presentation: PresentationOptions,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct GraphId(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct PageId(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct ObjectId(pub u64);

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ResultTarget {
    pub page: PageId,
    pub object: ObjectId,
    pub text_identifier: Option<String>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ResultRow {
    pub message: String,
    pub metadata: Option<String>,
    pub targets: Vec<ResultTarget>,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct CheckReport {
    pub packed_result: i32,
    pub rows: Vec<ResultRow>,
}

impl CheckReport {
    #[must_use]
    pub const fn has_issue_counts(&self) -> bool {
        self.packed_result > 99
    }
}

pub const MANUAL_RECHECK_MODE: u8 = 0x0f;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PinElectricalType {
    Input,
    Output,
    Bidirectional,
    Power,
    Passive,
    ThreeState,
    OpenCollector,
    OpenEmitter,
    Unconnected,
}

impl PinElectricalType {
    const fn matrix_index(self) -> usize {
        match self {
            Self::Input => 0,
            Self::Output => 1,
            Self::Bidirectional => 2,
            Self::Power => 3,
            Self::Passive => 4,
            Self::ThreeState => 5,
            Self::OpenCollector => 6,
            Self::OpenEmitter => 7,
            Self::Unconnected => 8,
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ErcPin {
    pub name: String,
    pub electrical_type: PinElectricalType,
    pub target: ResultTarget,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct ErcNode {
    pub name: String,
    pub pins: Vec<ErcPin>,
    pub floating: bool,
    pub grounded: bool,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ErcWire {
    pub name: String,
    pub connected: bool,
    pub target: ResultTarget,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ErcComponent {
    pub identifier: String,
    pub single_jumper: bool,
    pub target: ResultTarget,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct ErcSchematic {
    pub initialization_status: i32,
    pub detailed_checks_available: bool,
    pub connectivity_source: Vec<ErcNode>,
    pub connectivity_cache: Vec<ErcNode>,
    pub wires: Vec<ErcWire>,
    pub components: Vec<ErcComponent>,
    pub nested_schematics: Vec<Self>,
    pub engine_messages: Vec<ResultRow>,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum FindingSeverity {
    Warning,
    Error,
}

#[derive(Debug, Default)]
struct FindingCounts {
    errors: i32,
    warnings: i32,
}

/// Rebuilds connectivity and executes the recovered electrical-rules checks.
///
/// Reimplements Ghidra function `FUN_019a9ed0` at `0x019A9ED0` with original
/// Rust domain types. Each run clears transient messages and replaces the
/// derived connectivity cache. It evaluates floating and grounded nodes,
/// single-pin and pairwise matrix rules, unconnected wires, single jumpers,
/// duplicate identifiers, and optional nested schematics. Result targets stay
/// attached to their finding rows. No result is persisted and no cancellation
/// transaction is created.
#[must_use]
pub fn run_electrical_rules_check(
    schematic: &mut ErcSchematic,
    settings: &ElectricalRulesSettings,
    _mode: u8,
) -> CheckReport {
    schematic.engine_messages.clear();
    schematic
        .connectivity_cache
        .clone_from(&schematic.connectivity_source);
    schematic.engine_messages.push(ResultRow {
        message: "Electrical rules check".to_owned(),
        metadata: Some("status".to_owned()),
        targets: Vec::new(),
    });

    let mut counts = FindingCounts::default();
    if schematic.detailed_checks_available {
        evaluate_schematic(schematic, settings, &mut counts);
    } else {
        schematic.engine_messages.push(ResultRow {
            message: format!(
                "Connectivity initialization status: {}",
                schematic.initialization_status
            ),
            metadata: Some("status".to_owned()),
            targets: Vec::new(),
        });
    }
    schematic.engine_messages.push(ResultRow {
        message: format!(
            "Electrical rules check complete: {} errors, {} warnings",
            counts.errors, counts.warnings
        ),
        metadata: Some("summary".to_owned()),
        targets: Vec::new(),
    });

    CheckReport {
        packed_result: schematic
            .initialization_status
            .wrapping_abs()
            .wrapping_add(counts.errors.wrapping_mul(100))
            .wrapping_add(counts.warnings.wrapping_mul(100_000)),
        rows: schematic.engine_messages.clone(),
    }
}

fn evaluate_schematic(
    schematic: &mut ErcSchematic,
    settings: &ElectricalRulesSettings,
    counts: &mut FindingCounts,
) {
    for node in &schematic.connectivity_cache {
        let targets = node
            .pins
            .iter()
            .map(|pin| pin.target.clone())
            .collect::<Vec<_>>();
        if node.floating {
            append_finding(
                &mut schematic.engine_messages,
                counts,
                FindingSeverity::Warning,
                format!("Floating node: {}", node.name),
                targets.clone(),
            );
        }
        if node.grounded {
            append_finding(
                &mut schematic.engine_messages,
                counts,
                FindingSeverity::Warning,
                format!("Grounded node: {}", node.name),
                targets,
            );
        }
        evaluate_node_rules(
            node,
            &settings.rules,
            &mut schematic.engine_messages,
            counts,
        );
    }

    if settings.rules.check_unconnected_wires {
        for wire in schematic.wires.iter().filter(|wire| !wire.connected) {
            append_finding(
                &mut schematic.engine_messages,
                counts,
                FindingSeverity::Warning,
                format!("Unconnected wire: {}", wire.name),
                vec![wire.target.clone()],
            );
        }
    }

    for component in schematic
        .components
        .iter()
        .filter(|component| component.single_jumper)
    {
        append_finding(
            &mut schematic.engine_messages,
            counts,
            FindingSeverity::Warning,
            format!("Single jumper: {}", component.identifier),
            vec![component.target.clone()],
        );
    }
    append_duplicate_identifiers(
        &schematic.components,
        &mut schematic.engine_messages,
        counts,
    );

    if settings.presentation.recurse {
        for nested in &mut schematic.nested_schematics {
            nested.engine_messages.clear();
            nested
                .connectivity_cache
                .clone_from(&nested.connectivity_source);
            evaluate_schematic(nested, settings, counts);
            schematic
                .engine_messages
                .append(&mut nested.engine_messages);
        }
    }
}

fn evaluate_node_rules(
    node: &ErcNode,
    options: &ErcOptions,
    rows: &mut Vec<ResultRow>,
    counts: &mut FindingCounts,
) {
    if let [pin] = node.pins.as_slice() {
        let rule = options
            .matrix
            .rule(
                pin.electrical_type.matrix_index(),
                PinElectricalType::Unconnected.matrix_index(),
            )
            .unwrap_or(ErcRule::Blank);
        if options.warn_unconnected_pins || rule != ErcRule::Blank {
            append_finding(
                rows,
                counts,
                severity_for_rule(rule),
                format!("Unconnected pin: {}", pin.name),
                vec![pin.target.clone()],
            );
        }
        return;
    }
    if !options.apply_rules {
        return;
    }

    for (left_index, left) in node.pins.iter().enumerate() {
        for right in &node.pins[left_index + 1..] {
            let rule = options
                .matrix
                .rule(
                    left.electrical_type.matrix_index(),
                    right.electrical_type.matrix_index(),
                )
                .unwrap_or(ErcRule::Blank);
            if rule == ErcRule::Blank {
                continue;
            }
            append_finding(
                rows,
                counts,
                severity_for_rule(rule),
                format!("Incompatible pins: {} and {}", left.name, right.name),
                vec![left.target.clone(), right.target.clone()],
            );
        }
    }
}

fn append_duplicate_identifiers(
    components: &[ErcComponent],
    rows: &mut Vec<ResultRow>,
    counts: &mut FindingCounts,
) {
    let mut identifiers = BTreeMap::<&str, Vec<ResultTarget>>::new();
    for component in components
        .iter()
        .filter(|component| !component.identifier.is_empty())
    {
        identifiers
            .entry(&component.identifier)
            .or_default()
            .push(component.target.clone());
    }
    for (identifier, targets) in identifiers
        .into_iter()
        .filter(|(_, targets)| targets.len() > 1)
    {
        append_finding(
            rows,
            counts,
            FindingSeverity::Warning,
            format!("Duplicate identifier: {identifier}"),
            targets,
        );
    }
}

const fn severity_for_rule(rule: ErcRule) -> FindingSeverity {
    match rule {
        ErcRule::Error => FindingSeverity::Error,
        ErcRule::Blank | ErcRule::Warning => FindingSeverity::Warning,
    }
}

fn append_finding(
    rows: &mut Vec<ResultRow>,
    counts: &mut FindingCounts,
    severity: FindingSeverity,
    message: String,
    targets: Vec<ResultTarget>,
) {
    let metadata = match severity {
        FindingSeverity::Warning => {
            counts.warnings = counts.warnings.wrapping_add(1);
            "warning"
        }
        FindingSeverity::Error => {
            counts.errors = counts.errors.wrapping_add(1);
            "error"
        }
    };
    rows.push(ResultRow {
        message,
        metadata: Some(metadata.to_owned()),
        targets,
    });
}

/// Tests the recovered automatic-check prerequisites.
///
/// This is the original Rust policy for Ghidra function `FUN_014b7d50` at
/// `0x014B7D50`. Only event kinds zero and one pass the recovered low-bit mask.
#[must_use]
pub const fn should_run_automatic_check(
    operation_code: u8,
    event_kind: u8,
    globally_suppressed: bool,
    automatic_enabled: bool,
    caller_suppressed: bool,
) -> bool {
    operation_code != MANUAL_RECHECK_MODE
        && event_kind < 2
        && !globally_suppressed
        && automatic_enabled
        && !caller_suppressed
}

/// Applies the recovered automatic-result presentation policy.
///
/// This is part of the original Rust adapter for `FUN_014b7d50` at
/// `0x014B7D50`. When warning display is disabled, only the packed low field
/// can show the form. A retained prior result matters only when warning display
/// is enabled.
#[must_use]
pub const fn should_present_automatic_result(
    packed_result: i32,
    previous_presented_result: i32,
    show_on_warnings: bool,
) -> bool {
    if show_on_warnings {
        packed_result != 0 || previous_presented_result != 0
    } else {
        packed_result % 100 != 0
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn target(page: u64, object: u64) -> ResultTarget {
        ResultTarget {
            page: PageId(page),
            object: ObjectId(object),
            text_identifier: None,
        }
    }

    fn pin(name: &str, electrical_type: PinElectricalType, object: u64) -> ErcPin {
        ErcPin {
            name: name.to_owned(),
            electrical_type,
            target: target(1, object),
        }
    }

    #[test]
    fn automatic_check_requires_every_gate() {
        assert!(should_run_automatic_check(1, 0, false, true, false));
        assert!(should_run_automatic_check(1, 1, false, true, false));
        assert!(!should_run_automatic_check(
            MANUAL_RECHECK_MODE,
            0,
            false,
            true,
            false
        ));
        assert!(!should_run_automatic_check(1, 2, false, true, false));
        assert!(!should_run_automatic_check(1, 0, true, true, false));
        assert!(!should_run_automatic_check(1, 0, false, false, false));
        assert!(!should_run_automatic_check(1, 0, false, true, true));
    }

    #[test]
    fn presentation_policy_preserves_broad_and_narrow_paths() {
        assert!(should_present_automatic_result(100, 0, true));
        assert!(should_present_automatic_result(0, 100, true));
        assert!(!should_present_automatic_result(100, 0, false));
        assert!(should_present_automatic_result(101, 0, false));
        assert!(!should_present_automatic_result(0, 100, false));
    }

    #[test]
    fn encoded_issue_count_uses_the_recovered_threshold() {
        assert!(
            !CheckReport {
                packed_result: 99,
                rows: Vec::new(),
            }
            .has_issue_counts()
        );
        assert!(
            CheckReport {
                packed_result: 100,
                rows: Vec::new(),
            }
            .has_issue_counts()
        );
    }

    #[test]
    fn recovered_engine_rebuilds_connectivity_and_runs_all_proven_passes() {
        let settings = ElectricalRulesSettings {
            rules: ErcOptions {
                matrix: crate::analysis_options::ErcMatrix::built_in_defaults(),
                apply_rules: true,
                warn_unconnected_pins: true,
                check_unconnected_wires: true,
            },
            presentation: PresentationOptions::default(),
        };
        let duplicate_one = ErcComponent {
            identifier: "R1".to_owned(),
            single_jumper: true,
            target: target(1, 20),
        };
        let duplicate_two = ErcComponent {
            identifier: "R1".to_owned(),
            single_jumper: false,
            target: target(1, 21),
        };
        let mut schematic = ErcSchematic {
            detailed_checks_available: true,
            connectivity_source: vec![
                ErcNode {
                    name: "N1".to_owned(),
                    pins: vec![
                        pin("U1.OUT", PinElectricalType::Output, 1),
                        pin("U2.OUT", PinElectricalType::Output, 2),
                    ],
                    ..ErcNode::default()
                },
                ErcNode {
                    name: "N2".to_owned(),
                    pins: vec![pin("U3.IN", PinElectricalType::Input, 3)],
                    ..ErcNode::default()
                },
            ],
            connectivity_cache: vec![ErcNode {
                name: "stale".to_owned(),
                ..ErcNode::default()
            }],
            wires: vec![ErcWire {
                name: "W1".to_owned(),
                connected: false,
                target: target(1, 10),
            }],
            components: vec![duplicate_one, duplicate_two],
            ..ErcSchematic::default()
        };

        let report = run_electrical_rules_check(&mut schematic, &settings, MANUAL_RECHECK_MODE);

        assert_eq!(schematic.connectivity_cache, schematic.connectivity_source);
        assert_eq!(report.packed_result, 400_100);
        assert!(
            report
                .rows
                .iter()
                .any(|row| { row.metadata.as_deref() == Some("error") && row.targets.len() == 2 })
        );
        assert!(
            report
                .rows
                .iter()
                .any(|row| { row.message == "Duplicate identifier: R1" && row.targets.len() == 2 })
        );
        assert_eq!(schematic.engine_messages, report.rows);
    }

    #[test]
    fn recovered_engine_honors_rule_wire_and_recursion_switches() {
        let settings = ElectricalRulesSettings {
            rules: ErcOptions {
                matrix: crate::analysis_options::ErcMatrix::default(),
                apply_rules: false,
                warn_unconnected_pins: false,
                check_unconnected_wires: true,
            },
            presentation: PresentationOptions::default(),
        };
        let nested = ErcSchematic {
            detailed_checks_available: true,
            wires: vec![ErcWire {
                name: "nested".to_owned(),
                connected: false,
                target: target(2, 30),
            }],
            ..ErcSchematic::default()
        };
        let mut schematic = ErcSchematic {
            detailed_checks_available: true,
            connectivity_source: vec![ErcNode {
                name: "N1".to_owned(),
                pins: vec![pin("U1.IN", PinElectricalType::Input, 1)],
                ..ErcNode::default()
            }],
            wires: vec![ErcWire {
                name: "top".to_owned(),
                connected: true,
                target: target(1, 10),
            }],
            nested_schematics: vec![nested],
            ..ErcSchematic::default()
        };

        let report = run_electrical_rules_check(&mut schematic, &settings, 1);

        assert_eq!(report.packed_result, 0);
        assert!(!report.rows.iter().any(|row| row.message.contains("nested")));

        let mut recursive_settings = settings;
        recursive_settings.presentation.recurse = true;
        let report = run_electrical_rules_check(&mut schematic, &recursive_settings, 1);
        assert_eq!(report.packed_result, 100_000);
        assert!(
            report
                .rows
                .iter()
                .any(|row| row.message == "Unconnected wire: nested")
        );
    }

    #[test]
    fn initialization_failure_skips_details_and_keeps_packed_status() {
        let mut schematic = ErcSchematic {
            initialization_status: -3,
            detailed_checks_available: false,
            connectivity_source: vec![ErcNode {
                name: "not-checked".to_owned(),
                floating: true,
                ..ErcNode::default()
            }],
            ..ErcSchematic::default()
        };

        let report = run_electrical_rules_check(
            &mut schematic,
            &ElectricalRulesSettings::default(),
            MANUAL_RECHECK_MODE,
        );

        assert_eq!(report.packed_result, 3);
        assert_eq!(schematic.connectivity_cache, schematic.connectivity_source);
        assert!(
            report
                .rows
                .iter()
                .any(|row| { row.message == "Connectivity initialization status: -3" })
        );
        assert!(
            !report
                .rows
                .iter()
                .any(|row| row.message.contains("not-checked"))
        );
    }
}

use crate::analysis_options::ErcMatrix;

/// How the built-in rule matrix is written down in the binary.
///
/// Part of Ghidra function `FUN_01d43940` at `0x01D43940`.
///
/// One string per column, each nine characters long, read as the rule between
/// that column's pin type and each of the nine row types in turn. The leading
/// dots are the entries the earlier columns already set from the other side,
/// so the strings together describe a triangle rather than a square — the
/// matrix is symmetric and only half of it is written out.
pub const BUILT_IN_MATRIX_COLUMNS: [&str; 9] = [
    "--------W",
    ".EWE-EEE-",
    "..WW-----",
    "...--EEE-",
    "....-----",
    ".....----",
    "......-W-",
    ".......W-",
    "........-",
];

/// The character meaning an entry is left to the symmetric one.
pub const MATRIX_SKIP: char = '.';

/// Reads one character of the built-in matrix.
///
/// Implements Ghidra function `FUN_01d43840` at `0x01D43840`.
///
/// The recovered decoder tests each letter in both cases against a bit mask,
/// so the table could be written in either; only two letters mean anything
/// and everything else — the dash included — is the permitted rule. That is
/// what makes a dash readable as "nothing to say" rather than as a code of
/// its own.
#[must_use]
pub const fn matrix_rule_for(character: char) -> ErcRule {
    match character {
        'W' | 'w' => ErcRule::Warning,
        'E' | 'e' => ErcRule::Error,
        _ => ErcRule::Blank,
    }
}

/// Reads one column of the built-in matrix into a matrix.
///
/// Implements Ghidra function `FUN_01d438e0` at `0x01D438E0`.
///
/// Every character but the skip marker is written, and each write sets both
/// halves of the matrix — so a column need only carry the entries no earlier
/// column has already supplied.
pub fn load_matrix_column(matrix: &mut ErcMatrix, column: usize, encoded: &str) {
    for (row, character) in encoded.chars().enumerate() {
        if character == MATRIX_SKIP {
            continue;
        }
        matrix.set_symmetric(row, column, matrix_rule_for(character));
    }
}

/// Implements Ghidra function `FUN_01d43940` at `0x01D43940`.
///
/// Builds the rule matrix the application ships with.
///
/// The matrix starts entirely permissive and every column is then read over
/// it, so a pin-type pair the table says nothing about is allowed rather than
/// unset — there is no third state for "not decided".
#[must_use]
pub fn load_built_in_matrix() -> ErcMatrix {
    let mut matrix = ErcMatrix::default();
    for (column, encoded) in BUILT_IN_MATRIX_COLUMNS.iter().enumerate() {
        load_matrix_column(&mut matrix, column, encoded);
    }
    matrix
}

#[cfg(test)]
mod built_in_matrix_tests {
    use super::*;

    #[test]
    fn only_two_letters_mean_anything_and_both_cases_are_read() {
        assert_eq!(matrix_rule_for('W'), ErcRule::Warning);
        assert_eq!(matrix_rule_for('w'), ErcRule::Warning);
        assert_eq!(matrix_rule_for('E'), ErcRule::Error);
        assert_eq!(matrix_rule_for('e'), ErcRule::Error);

        for character in ['-', 'X', '0', ' '] {
            assert_eq!(matrix_rule_for(character), ErcRule::Blank);
        }
    }

    #[test]
    fn the_table_is_a_triangle_with_one_more_skip_in_each_column() {
        for (column, encoded) in BUILT_IN_MATRIX_COLUMNS.iter().enumerate() {
            assert_eq!(encoded.chars().count(), 9, "column {column}");
            assert_eq!(
                encoded.chars().take_while(|c| *c == MATRIX_SKIP).count(),
                column,
                "column {column}"
            );
        }
    }

    #[test]
    fn the_encoded_table_reproduces_the_built_in_defaults_exactly() {
        // The defaults were recovered from the checker that reads the matrix;
        // this table is the loader that writes it. They are independent
        // recoveries of the same data and must agree.
        let loaded = load_built_in_matrix();
        let expected = ErcMatrix::built_in_defaults();

        for row in 0..9 {
            for column in 0..9 {
                assert_eq!(
                    loaded.rule(row, column),
                    expected.rule(row, column),
                    "at ({row}, {column})"
                );
            }
        }
    }

    #[test]
    fn every_entry_the_table_writes_is_set_on_both_sides() {
        let matrix = load_built_in_matrix();

        for row in 0..9 {
            for column in 0..9 {
                assert_eq!(matrix.rule(row, column), matrix.rule(column, row));
            }
        }
    }

    #[test]
    fn a_pair_the_table_says_nothing_about_is_permitted_rather_than_unset() {
        let matrix = load_built_in_matrix();

        // Passive against passive: the table leaves it blank.
        assert_eq!(
            matrix.rule(
                PinElectricalType::Passive.matrix_index(),
                PinElectricalType::Passive.matrix_index()
            ),
            Some(ErcRule::Blank)
        );
    }

    #[test]
    fn two_outputs_on_one_node_are_an_error() {
        let matrix = load_built_in_matrix();
        let output = PinElectricalType::Output.matrix_index();

        assert_eq!(matrix.rule(output, output), Some(ErcRule::Error));
    }

    #[test]
    fn an_unconnected_pin_against_an_input_is_only_a_warning() {
        let matrix = load_built_in_matrix();

        assert_eq!(
            matrix.rule(
                PinElectricalType::Unconnected.matrix_index(),
                PinElectricalType::Input.matrix_index()
            ),
            Some(ErcRule::Warning)
        );
    }

    #[test]
    fn a_column_loads_over_whatever_was_there_before() {
        let mut matrix = ErcMatrix::default();
        load_matrix_column(&mut matrix, 0, "EEEEEEEEE");
        assert_eq!(matrix.rule(0, 0), Some(ErcRule::Error));

        load_matrix_column(&mut matrix, 0, "---------");
        assert_eq!(matrix.rule(0, 0), Some(ErcRule::Blank));
    }

    #[test]
    fn the_skip_marker_leaves_an_entry_untouched() {
        let mut matrix = ErcMatrix::default();
        load_matrix_column(&mut matrix, 1, "E--------");
        assert_eq!(matrix.rule(0, 1), Some(ErcRule::Error));

        load_matrix_column(&mut matrix, 1, ".--------");
        assert_eq!(matrix.rule(0, 1), Some(ErcRule::Error));
    }
}
