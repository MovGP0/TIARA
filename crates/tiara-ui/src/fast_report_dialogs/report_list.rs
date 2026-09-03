/// Reports whether the list-report dataset reached its exact end position.
///
/// Reimplements Ghidra function `FUN_01982330` at `0x01982330`.
/// The recovered callback compares the current row index with the source item
/// count for equality. It does not treat an index beyond the count as EOF.
#[must_use]
pub const fn report_data_eof(current_row: i32, item_count: i32) -> bool {
    current_row == item_count
}

/// Moves the list-report dataset to its recovered first row.
///
/// Reimplements Ghidra function `FUN_01982350` at `0x01982350`.
/// The callback always assigns row index one. It does not inspect the source
/// item count or preserve the previous index.
pub const fn report_data_first(current_row: &mut i32) {
    *current_row = 1;
}

/// A value supplied to the list report for its current dataset row.
#[derive(Clone, Copy, Debug, Eq, PartialEq)]
pub enum ReportDataValue<'a> {
    Index(i32),
    Text(&'a str),
}

/// Returns a named value for the current list-report dataset row.
///
/// Reimplements Ghidra function `FUN_01982360` at `0x01982360`.
/// Data rows use the recovered one-based report index. The eight Rust array
/// entries correspond to quantity, label, value, footprint, and parameters
/// one through four. A known text field has an empty value when the row is not
/// present. An unknown or differently cased field produces no assignment.
#[must_use]
pub fn report_data_value<'a>(
    rows: &'a [[String; 8]],
    current_row: i32,
    field: &str,
) -> Option<ReportDataValue<'a>> {
    if field == "index" {
        return Some(ReportDataValue::Index(current_row));
    }

    let column = match field {
        "quantity" => 0,
        "label" => 1,
        "value" => 2,
        "footprint" => 3,
        "parameter1" => 4,
        "parameter2" => 5,
        "parameter3" => 6,
        "parameter4" => 7,
        _ => return None,
    };
    let value = usize::try_from(current_row)
        .ok()
        .and_then(|row| row.checked_sub(1))
        .and_then(|row| rows.get(row))
        .map_or("", |row| row[column].as_str());

    Some(ReportDataValue::Text(value))
}

/// Advances the list-report dataset by one row.
///
/// Reimplements Ghidra function `FUN_01982950` at `0x01982950`.
/// The recovered callback changes only the signed 32-bit row index. It does
/// not inspect the source item count or clamp at the last row.
pub const fn report_data_next(current_row: &mut i32) {
    *current_row = current_row.wrapping_add(1);
}

/// Moves the list-report dataset back by one row.
///
/// Reimplements Ghidra function `FUN_01982960` at `0x01982960`.
/// The recovered callback changes only the signed 32-bit row index. It does
/// not inspect the source item count or clamp at the first row.
pub const fn report_data_prior(current_row: &mut i32) {
    *current_row = current_row.wrapping_sub(1);
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn eof_is_true_only_at_exact_item_count() {
        assert!(!report_data_eof(3, 4));
        assert!(report_data_eof(4, 4));
        assert!(!report_data_eof(5, 4));
    }

    #[test]
    fn first_always_selects_row_one() {
        let mut current_row = -3;

        report_data_first(&mut current_row);
        assert_eq!(current_row, 1);

        current_row = 9;
        report_data_first(&mut current_row);
        assert_eq!(current_row, 1);

        report_data_first(&mut current_row);
        assert_eq!(current_row, 1);
    }

    #[test]
    fn value_provider_maps_every_recovered_field() {
        let rows = [[
            "2".to_owned(),
            "R1".to_owned(),
            "10 kOhm".to_owned(),
            "0603".to_owned(),
            "P1".to_owned(),
            "P2".to_owned(),
            "P3".to_owned(),
            "P4".to_owned(),
        ]];

        assert_eq!(
            report_data_value(&rows, 1, "index"),
            Some(ReportDataValue::Index(1))
        );
        for (field, value) in [
            ("quantity", "2"),
            ("label", "R1"),
            ("value", "10 kOhm"),
            ("footprint", "0603"),
            ("parameter1", "P1"),
            ("parameter2", "P2"),
            ("parameter3", "P3"),
            ("parameter4", "P4"),
        ] {
            assert_eq!(
                report_data_value(&rows, 1, field),
                Some(ReportDataValue::Text(value))
            );
        }
    }

    #[test]
    fn value_provider_preserves_missing_and_unknown_behavior() {
        let rows: [[String; 8]; 0] = [];

        assert_eq!(
            report_data_value(&rows, 1, "quantity"),
            Some(ReportDataValue::Text(""))
        );
        assert_eq!(
            report_data_value(&rows, 0, "parameter4"),
            Some(ReportDataValue::Text(""))
        );
        assert_eq!(report_data_value(&rows, 1, "Quantity"), None);
        assert_eq!(report_data_value(&rows, 1, "unknown"), None);
    }

    #[test]
    fn next_advances_without_clamping_and_preserves_integer_wraparound() {
        let mut current_row = 1;

        report_data_next(&mut current_row);
        assert_eq!(current_row, 2);

        current_row = i32::MAX;
        report_data_next(&mut current_row);
        assert_eq!(current_row, i32::MIN);
    }

    #[test]
    fn prior_decrements_without_clamping_and_preserves_integer_wraparound() {
        let mut current_row = 2;

        report_data_prior(&mut current_row);
        assert_eq!(current_row, 1);

        current_row = i32::MIN;
        report_data_prior(&mut current_row);
        assert_eq!(current_row, i32::MAX);
    }
}
