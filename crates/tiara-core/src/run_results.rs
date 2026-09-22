//! Turning what a simulator wrote into what the result windows draw.
//!
//! [`crate::simulator`] brings a run back as a [`Table`]: a column per
//! thing measured and a row per point. [`crate::analysis_result_publishing`]
//! is the original's own result manager, recovered whole, and it draws
//! [`AnalysisSeries`] - one curve, its two axis labels, and its points.
//!
//! This is the join between them, and it is the last piece of the road from
//! a drawn sheet to a curve on screen: draw, pins, nets, netlist, run,
//! table, series.
//!
//! **The first column is what everything else is measured against.** Every
//! table a SPICE-like engine writes puts the sweep first - `time` for a
//! transient, `frequency` for an AC sweep, the swept source for a DC one -
//! and every other column is a curve over it. That is the whole of the
//! convention this relies on, and a table whose first column is named
//! something unexpected still works: it is simply used as the horizontal
//! axis, which is what it is.

use crate::analysis_result_publishing::{AnalysisPoint, AnalysisSeries, AxisLabels};
use crate::simulator::Table;

/// Every curve in a table, one per column after the first.
///
/// Empty where the table has fewer than two columns, since a single column
/// is a sweep with nothing measured over it.
#[must_use]
pub fn series_of(table: &Table) -> Vec<AnalysisSeries> {
    let Some(horizontal) = table.columns.first() else {
        return Vec::new();
    };

    table
        .columns
        .iter()
        .enumerate()
        .skip(1)
        .map(|(at, name)| {
            let points: Vec<AnalysisPoint> = table
                .rows
                .iter()
                .filter_map(|row| {
                    let across = row.first().copied()?;
                    let up = row.get(at).copied()?;
                    Some(AnalysisPoint::new(across, up))
                })
                // A row the engine could not write leaves a gap rather than
                // a point at nowhere.
                .filter(|point| point.independent.is_finite() && point.dependent.is_finite())
                .collect();

            AnalysisSeries::new(
                name.clone(),
                AxisLabels::new(horizontal.clone(), name.clone()),
                points,
            )
        })
        .collect()
}

/// One named curve out of a table, where it has one.
#[must_use]
pub fn series_called(table: &Table, name: &str) -> Option<AnalysisSeries> {
    series_of(table).into_iter().find(|it| it.name == name)
}

/// What a run measured, in a line fit for the status bar.
#[must_use]
pub fn described(table: &Table) -> String {
    let curves = table.columns.len().saturating_sub(1);
    let points = table.rows.len();
    match (curves, points) {
        (0, _) => "nothing was measured".to_owned(),
        (1, 1) => "1 curve at 1 point".to_owned(),
        (1, many) => format!("1 curve over {many} points"),
        (several, 1) => format!("{several} curves at 1 point"),
        (several, many) => format!("{several} curves over {many} points"),
    }
}

#[cfg(test)]
mod tests {
    use super::{described, series_called, series_of};
    use crate::simulator::{Table, table_of};

    fn a_run() -> Table {
        table_of("time,V(1),V(2)\n0,10,5\n1e-3,9,4\n2e-3,8,3\n").unwrap()
    }

    #[test]
    fn every_column_after_the_first_is_a_curve_over_it() {
        let found = series_of(&a_run());
        assert_eq!(found.len(), 2);
        assert_eq!(found[0].name, "V(1)");
        assert_eq!(found[1].name, "V(2)");
    }

    #[test]
    fn the_first_column_is_what_the_others_are_measured_against() {
        let found = series_of(&a_run());
        assert_eq!(found[0].axes.horizontal, "time");
        assert_eq!(found[0].axes.vertical, "V(1)");

        let points = &found[0].points;
        assert_eq!(points.len(), 3);
        assert!((points[0].independent - 0.0).abs() < f64::EPSILON);
        assert!((points[0].dependent - 10.0).abs() < f64::EPSILON);
        assert!((points[2].dependent - 8.0).abs() < f64::EPSILON);
    }

    #[test]
    fn a_curve_can_be_had_by_name() {
        let table = a_run();
        assert_eq!(series_called(&table, "V(2)").unwrap().points.len(), 3);
        assert_eq!(series_called(&table, "V(9)"), None);
    }

    #[test]
    fn a_table_of_one_column_has_nothing_measured_over_it() {
        let table = table_of("time\n0\n1\n").unwrap();
        assert!(series_of(&table).is_empty());
        assert_eq!(described(&table), "nothing was measured");
    }

    #[test]
    fn a_table_of_nothing_at_all_gives_no_curves() {
        assert!(series_of(&Table::default()).is_empty());
    }

    #[test]
    fn a_point_the_engine_could_not_write_leaves_a_gap() {
        // A cell that is not a number reads as NaN, and a curve does not
        // carry a point at nowhere.
        let table = table_of("time,V(1)\n0,10\n1,nonsense\n2,8\n").unwrap();
        let found = series_of(&table);
        assert_eq!(found[0].points.len(), 2);
    }

    #[test]
    fn a_run_describes_itself_in_a_line() {
        assert_eq!(described(&a_run()), "2 curves over 3 points");
        assert_eq!(
            described(&table_of("time,V(1)\n0,1\n").unwrap()),
            "1 curve at 1 point"
        );
        assert_eq!(
            described(&table_of("time,V(1)\n0,1\n1,2\n").unwrap()),
            "1 curve over 2 points"
        );
        assert_eq!(
            described(&table_of("f,a,b\n0,1,2\n").unwrap()),
            "2 curves at 1 point"
        );
    }

    #[test]
    fn a_frequency_sweep_reads_the_same_way_as_a_transient() {
        // Nothing here knows or cares which analysis it was: the first
        // column is the sweep, whatever it is called.
        let table = table_of("frequency,V(out)\n1,0.5\n10,0.4\n").unwrap();
        let found = series_of(&table);
        assert_eq!(found[0].axes.horizontal, "frequency");
        assert_eq!(found[0].points.len(), 2);
    }
}
