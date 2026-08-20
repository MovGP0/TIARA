//! Domain state and policy for electrical-rules checks.

use crate::analysis_options::ErcOptions;

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
}
