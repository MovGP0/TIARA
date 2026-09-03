//! Diagram legend-entry iteration state.

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct LegendEntryIteratorState {
    last_key: i32,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct LegendItemDescriptor {
    pub detailed_key: i32,
    pub common_key: i32,
    pub detailed_name: String,
    pub compact_name: String,
    pub value: String,
    pub cursor_a_fragment: String,
    pub cursor_b_fragment: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct LegendEntryDescriptor {
    pub identifier: i32,
    pub name: String,
    pub value: String,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum LegendDescriptorKind {
    Detailed,
    Compact,
}

impl Default for LegendEntryIteratorState {
    fn default() -> Self {
        Self { last_key: -1 }
    }
}

impl LegendEntryIteratorState {
    #[must_use]
    pub const fn last_key(self) -> i32 {
        self.last_key
    }

    pub const fn record_key(&mut self, key: i32) {
        self.last_key = key;
    }
}

/// Implements Ghidra function `FUN_01ae85a0` at `0x01AE85A0`.
///
/// Restores the legend-entry iterator to its before-first-item state. The next
/// enumeration request can then return the first eligible entry for a curve.
pub const fn reset_legend_entry_iterator(state: &mut LegendEntryIteratorState) {
    state.last_key = -1;
}

/// Implements Ghidra function `FUN_01ae8bc0` at `0x01AE8BC0`.
///
/// Returns the next item after the saved legend key and records the returned
/// key for the next call. Recovered curve types 0, 5, and 6 use the detailed
/// identifier, name, value, and cursor fragments. Types 1, 2, 3, 4, and 7 use
/// the compact identifier and name with an empty value. Other types and an
/// exhausted scan return `None`. The caller owns the separate 20-entry display
/// limit.
pub fn next_legend_entry(
    state: &mut LegendEntryIteratorState,
    curve_type: u8,
    items: &[LegendItemDescriptor],
) -> Option<LegendEntryDescriptor> {
    let kind = descriptor_kind(curve_type)?;
    let index = if state.last_key < 0 {
        0
    } else {
        items
            .iter()
            .position(|item| item_key(item, kind) == state.last_key)?
            + 1
    };
    let item = items.get(index)?;
    let identifier = item_key(item, kind);
    let entry = match kind {
        LegendDescriptorKind::Detailed => LegendEntryDescriptor {
            identifier,
            name: item.detailed_name.clone(),
            value: format!(
                "{}{}{}",
                item.value, item.cursor_a_fragment, item.cursor_b_fragment
            ),
        },
        LegendDescriptorKind::Compact => LegendEntryDescriptor {
            identifier,
            name: item.compact_name.clone(),
            value: String::new(),
        },
    };
    state.record_key(identifier);
    Some(entry)
}

const fn descriptor_kind(curve_type: u8) -> Option<LegendDescriptorKind> {
    match curve_type {
        0 | 5 | 6 => Some(LegendDescriptorKind::Detailed),
        1 | 2 | 3 | 4 | 7 => Some(LegendDescriptorKind::Compact),
        _ => None,
    }
}

const fn item_key(item: &LegendItemDescriptor, kind: LegendDescriptorKind) -> i32 {
    match kind {
        LegendDescriptorKind::Detailed => item.detailed_key,
        LegendDescriptorKind::Compact => item.common_key,
    }
}

#[cfg(test)]
mod tests {
    use super::{
        LegendEntryDescriptor, LegendEntryIteratorState, LegendItemDescriptor, next_legend_entry,
        reset_legend_entry_iterator,
    };

    fn item(number: i32) -> LegendItemDescriptor {
        LegendItemDescriptor {
            detailed_key: number * 10,
            common_key: number * 100,
            detailed_name: format!("detailed-{number}"),
            compact_name: format!("compact-{number}"),
            value: format!("value-{number}"),
            cursor_a_fragment: format!("-a{number}"),
            cursor_b_fragment: format!("-b{number}"),
        }
    }

    #[test]
    fn reset_restores_before_first_key_after_prior_enumeration() {
        let mut state = LegendEntryIteratorState::default();
        state.record_key(42);

        reset_legend_entry_iterator(&mut state);

        assert_eq!(state.last_key(), -1);
    }

    #[test]
    fn default_state_is_ready_for_the_first_entry() {
        assert_eq!(LegendEntryIteratorState::default().last_key(), -1);
    }

    #[test]
    fn detailed_curve_types_return_successive_names_values_and_cursor_fragments() {
        for curve_type in [0, 5, 6] {
            let mut state = LegendEntryIteratorState::default();
            let items = [item(1), item(2)];

            assert_eq!(
                next_legend_entry(&mut state, curve_type, &items),
                Some(LegendEntryDescriptor {
                    identifier: 10,
                    name: "detailed-1".to_owned(),
                    value: "value-1-a1-b1".to_owned(),
                })
            );
            assert_eq!(
                next_legend_entry(&mut state, curve_type, &items),
                Some(LegendEntryDescriptor {
                    identifier: 20,
                    name: "detailed-2".to_owned(),
                    value: "value-2-a2-b2".to_owned(),
                })
            );
            assert_eq!(next_legend_entry(&mut state, curve_type, &items), None);
            assert_eq!(state.last_key(), 20);
        }
    }

    #[test]
    fn compact_curve_types_use_common_key_and_leave_value_empty() {
        for curve_type in [1, 2, 3, 4, 7] {
            let mut state = LegendEntryIteratorState::default();

            assert_eq!(
                next_legend_entry(&mut state, curve_type, &[item(3)]),
                Some(LegendEntryDescriptor {
                    identifier: 300,
                    name: "compact-3".to_owned(),
                    value: String::new(),
                })
            );
            assert_eq!(state.last_key(), 300);
        }
    }

    #[test]
    fn unsupported_type_or_missing_saved_key_returns_none_without_state_change() {
        let mut unsupported = LegendEntryIteratorState::default();
        let mut missing_key = LegendEntryIteratorState::default();
        missing_key.record_key(999);

        assert_eq!(next_legend_entry(&mut unsupported, 8, &[item(1)]), None);
        assert_eq!(unsupported.last_key(), -1);
        assert_eq!(next_legend_entry(&mut missing_key, 0, &[item(1)]), None);
        assert_eq!(missing_key.last_key(), 999);
    }
}
