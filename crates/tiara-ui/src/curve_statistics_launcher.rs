//! Curve-only selection gate for the tolerance statistics dialog.

use crate::analysis_results::{
    AnalysisCurveRippleHost, AnalysisCurveStatisticsHost, AnalysisObjectHandle, CurveRenderSample,
    CurveStatistics, PhaseCrossingMagnitude, PhaseMarginResult,
    calculate_curve_ripple_in_current_range, calculate_curve_statistics_in_current_range,
    find_zero_crossing, magnitude_at_phase_crossing, phase_margin_at_zero_db_crossing,
};
use tiara_core::complex_parameter::ComplexPoint;

pub const NO_SELECTED_CURVE_MESSAGE: &str = "There is no selected curve";
const CURVE_SELECTION: u8 = 2;

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct StatisticsCurveHandle(pub u64);

pub trait CurveStatisticsLauncherHost {
    fn show_statistics_dialog(&mut self, curves: &[StatisticsCurveHandle]);
    fn show_selection_error(&mut self, message: &'static str);
}

pub trait SelectedCurveStatisticsHost: AnalysisCurveStatisticsHost {
    fn is_curve(&mut self, object: AnalysisObjectHandle) -> bool;
    fn show_selection_error(&mut self, message: &'static str);
}

pub trait SelectedCurveCrossingHost {
    fn is_curve(&mut self, object: AnalysisObjectHandle) -> bool;
    fn curve_samples(&mut self, curve: AnalysisObjectHandle) -> Vec<CurveRenderSample>;
    fn provider_bounds(&mut self, curve: AnalysisObjectHandle) -> (f64, f64);
    fn show_selection_error(&mut self, message: &'static str);
}

pub trait SelectedCurveGainMarginHost {
    fn is_curve(&mut self, object: AnalysisObjectHandle) -> bool;
    fn complex_samples(&mut self, curve: AnalysisObjectHandle) -> Vec<ComplexPoint>;
    fn provider_bounds(&mut self, curve: AnalysisObjectHandle) -> (f64, f64);
    fn evaluate_response(&mut self, curve: AnalysisObjectHandle, coordinate: f64) -> (f64, f64);
    fn show_selection_error(&mut self, message: &'static str);
}

pub trait SelectedCurvePhaseMarginHost {
    fn is_curve(&mut self, object: AnalysisObjectHandle) -> bool;
    fn complex_samples(&mut self, curve: AnalysisObjectHandle) -> Vec<ComplexPoint>;
    fn provider_bounds(&mut self, curve: AnalysisObjectHandle) -> (f64, f64);
    fn evaluate_response(&mut self, curve: AnalysisObjectHandle, coordinate: f64) -> (f64, f64);
    fn show_selection_error(&mut self, message: &'static str);
}

pub trait SelectedCurveRippleReportHost: AnalysisCurveRippleHost {
    fn is_curve(&mut self, object: AnalysisObjectHandle) -> bool;
    fn curve_name(&mut self, curve: AnalysisObjectHandle) -> String;
    fn format_scalar(&mut self, value: f64) -> String;
    fn show_selection_error(&mut self, message: &'static str);
}

/// Implements Ghidra function `FUN_01ae67f0` at `0x01AE67F0`.
///
/// Opens the existing Iced statistics dialog only when the complete diagram
/// selection category is exactly curve-only. The full selected-curve snapshot
/// is passed to the dialog. Every other category, including empty and mixed
/// selections, displays the common no-selected-curve message.
pub fn open_curve_statistics_for_selection(
    selection_category: u8,
    selected: &[StatisticsCurveHandle],
    host: &mut impl CurveStatisticsLauncherHost,
) -> bool {
    if selection_category == CURVE_SELECTION {
        host.show_statistics_dialog(selected);
        true
    } else {
        host.show_selection_error(NO_SELECTED_CURVE_MESSAGE);
        false
    }
}

/// Implements Ghidra function `FUN_01ae68a0` at `0x01AE68A0`.
///
/// Requires the complete selection category to be exactly curve-only, then
/// verifies and calculates statistics for item zero through the existing
/// current-range statistics implementation. The result contains signed and
/// absolute averages, RMS, and covered X limits. A non-curve category shows
/// the common Iced-facing selection error. A failed item-zero type check
/// returns no statistics without that message.
pub fn calculate_first_selected_curve_statistics(
    selection_category: u8,
    selected: &[AnalysisObjectHandle],
    host: &mut impl SelectedCurveStatisticsHost,
) -> Option<CurveStatistics> {
    if selection_category != CURVE_SELECTION {
        host.show_selection_error(NO_SELECTED_CURVE_MESSAGE);
        return None;
    }

    let curve = selected.first().copied()?;
    if !host.is_curve(curve) {
        return None;
    }
    Some(calculate_curve_statistics_in_current_range(curve, host))
}

/// Implements Ghidra function `FUN_01ae69f0` at `0x01AE69F0`.
///
/// Requires the complete selection category to be curve-only, verifies item
/// zero, and returns its first bounded 0 dB crossing through the existing Rust
/// crossing finder. A category mismatch shows the common Iced-facing
/// selection error. An absent item, failed curve-type check, or missing
/// crossing returns `None` without that message.
pub fn find_first_selected_curve_zero_db_crossing(
    selection_category: u8,
    selected: &[AnalysisObjectHandle],
    host: &mut impl SelectedCurveCrossingHost,
) -> Option<f64> {
    if selection_category != CURVE_SELECTION {
        host.show_selection_error(NO_SELECTED_CURVE_MESSAGE);
        return None;
    }

    let curve = selected.first().copied()?;
    if !host.is_curve(curve) {
        return None;
    }
    let samples = host.curve_samples(curve);
    let (lower, upper) = host.provider_bounds(curve);
    find_zero_crossing(&samples, lower, upper)
}

/// Implements Ghidra function `FUN_01ae6af0` at `0x01AE6AF0`.
///
/// Requires the complete selection category to be curve-only, verifies item
/// zero, and calculates its gain-margin magnitude at the requested phase by
/// using the existing bounded phase-crossing implementation. A category
/// mismatch shows the common Iced-facing selection error. An absent item,
/// failed curve-type check, or missing crossing returns `None` without that
/// message.
pub fn calculate_first_selected_curve_gain_margin(
    selection_category: u8,
    selected: &[AnalysisObjectHandle],
    requested_phase: f64,
    host: &mut impl SelectedCurveGainMarginHost,
) -> Option<PhaseCrossingMagnitude> {
    if selection_category != CURVE_SELECTION {
        host.show_selection_error(NO_SELECTED_CURVE_MESSAGE);
        return None;
    }

    let curve = selected.first().copied()?;
    if !host.is_curve(curve) {
        return None;
    }
    let samples = host.complex_samples(curve);
    let (lower, upper) = host.provider_bounds(curve);
    magnitude_at_phase_crossing(&samples, requested_phase, lower, upper, |coordinate| {
        host.evaluate_response(curve, coordinate)
    })
}

/// Implements Ghidra function `FUN_01ae6c10` at `0x01AE6C10`.
///
/// Requires the complete selection category to be curve-only, verifies item
/// zero, and calculates its phase margin at the first bounded 0 dB crossing by
/// using the existing Rust implementation. A category mismatch shows the
/// common Iced-facing selection error. An absent item, failed curve-type check,
/// or missing crossing returns `None` without that message.
pub fn calculate_first_selected_curve_phase_margin(
    selection_category: u8,
    selected: &[AnalysisObjectHandle],
    reference_phase: f64,
    host: &mut impl SelectedCurvePhaseMarginHost,
) -> Option<PhaseMarginResult> {
    if selection_category != CURVE_SELECTION {
        host.show_selection_error(NO_SELECTED_CURVE_MESSAGE);
        return None;
    }

    let curve = selected.first().copied()?;
    if !host.is_curve(curve) {
        return None;
    }
    let samples = host.complex_samples(curve);
    let (lower, upper) = host.provider_bounds(curve);
    phase_margin_at_zero_db_crossing(&samples, reference_phase, lower, upper, |coordinate| {
        host.evaluate_response(curve, coordinate)
    })
}

/// Implements Ghidra function `FUN_01ae6d30` at `0x01AE6D30`.
///
/// Requires an exact curve-only selection and builds a fixed-width report for
/// every compatible selected curve. Each row contains the curve name plus its
/// absolute and relative ripple over the current X range. A category mismatch
/// shows the common Iced-facing selection error. A curve-only category with no
/// compatible rows returns `None` without that message.
pub fn build_selected_curve_ripple_report(
    selection_category: u8,
    selected: &[AnalysisObjectHandle],
    headers: [&str; 3],
    host: &mut impl SelectedCurveRippleReportHost,
) -> Option<Vec<String>> {
    if selection_category != CURVE_SELECTION {
        host.show_selection_error(NO_SELECTED_CURVE_MESSAGE);
        return None;
    }

    let mut rows = Vec::new();
    for curve in selected.iter().copied() {
        if !host.is_curve(curve) {
            continue;
        }
        let name = host.curve_name(curve);
        let ripple = calculate_curve_ripple_in_current_range(curve, host);
        let absolute = host.format_scalar(ripple.absolute);
        let relative = host.format_scalar(ripple.relative);
        rows.push(format!("{name:<16} {absolute:<18} {relative:<18}"));
    }

    if rows.is_empty() {
        return None;
    }
    rows.insert(
        0,
        format!("{:<16} {:<18} {:<18}", headers[0], headers[1], headers[2]),
    );
    Some(rows)
}

#[cfg(test)]
mod tests {
    use super::{
        CurveStatisticsLauncherHost, NO_SELECTED_CURVE_MESSAGE, SelectedCurveCrossingHost,
        SelectedCurveGainMarginHost, SelectedCurvePhaseMarginHost, SelectedCurveRippleReportHost,
        SelectedCurveStatisticsHost, StatisticsCurveHandle, build_selected_curve_ripple_report,
        calculate_first_selected_curve_gain_margin, calculate_first_selected_curve_phase_margin,
        calculate_first_selected_curve_statistics, find_first_selected_curve_zero_db_crossing,
        open_curve_statistics_for_selection,
    };
    use crate::analysis_results::{
        AnalysisCurveRippleHost, AnalysisCurveStatisticsHost, AnalysisObjectHandle,
        CurveRenderSample, CurveRipple, CurveStatistics, PhaseCrossingMagnitude, PhaseMarginResult,
    };
    use tiara_core::complex_parameter::ComplexPoint;

    #[derive(Default)]
    struct Host {
        events: Vec<String>,
    }

    impl CurveStatisticsLauncherHost for Host {
        fn show_statistics_dialog(&mut self, curves: &[StatisticsCurveHandle]) {
            self.events.push(format!(
                "dialog:{}",
                curves
                    .iter()
                    .map(|curve| curve.0.to_string())
                    .collect::<Vec<_>>()
                    .join(",")
            ));
        }

        fn show_selection_error(&mut self, message: &'static str) {
            self.events.push(format!("error:{message}"));
        }
    }

    #[test]
    fn curve_only_selection_opens_dialog_with_complete_snapshot() {
        let mut host = Host::default();

        assert!(open_curve_statistics_for_selection(
            2,
            &[StatisticsCurveHandle(3), StatisticsCurveHandle(5)],
            &mut host,
        ));
        assert_eq!(host.events, ["dialog:3,5"]);
    }

    #[test]
    fn non_curve_categories_show_common_selection_error() {
        for category in [0, 1, 3, 10] {
            let mut host = Host::default();

            assert!(!open_curve_statistics_for_selection(
                category,
                &[StatisticsCurveHandle(3)],
                &mut host,
            ));
            assert_eq!(host.events, [format!("error:{NO_SELECTED_CURVE_MESSAGE}")]);
        }
    }

    struct CalculationHost {
        is_curve: bool,
        events: Vec<String>,
    }

    impl AnalysisCurveStatisticsHost for CalculationHost {
        fn curve_x_axis_range(&mut self, curve: AnalysisObjectHandle) -> (f64, f64) {
            self.events.push(format!("range:{}", curve.0));
            (2.0, 8.0)
        }

        fn calculate_curve_statistics(
            &mut self,
            curve: AnalysisObjectHandle,
            lower: f64,
            upper: f64,
        ) -> CurveStatistics {
            self.events
                .push(format!("calculate:{}:{lower}:{upper}", curve.0));
            CurveStatistics {
                average: 1.0,
                absolute_average: 2.0,
                rms: 3.0,
                covered_start: lower,
                covered_end: upper,
            }
        }
    }

    impl SelectedCurveStatisticsHost for CalculationHost {
        fn is_curve(&mut self, object: AnalysisObjectHandle) -> bool {
            self.events.push(format!("is-curve:{}", object.0));
            self.is_curve
        }

        fn show_selection_error(&mut self, message: &'static str) {
            self.events.push(format!("error:{message}"));
        }
    }

    #[test]
    fn validator_calculates_existing_current_range_statistics_for_item_zero() {
        let mut host = CalculationHost {
            is_curve: true,
            events: Vec::new(),
        };

        let result = calculate_first_selected_curve_statistics(
            2,
            &[AnalysisObjectHandle(7), AnalysisObjectHandle(9)],
            &mut host,
        );

        assert_eq!(
            result,
            Some(CurveStatistics {
                average: 1.0,
                absolute_average: 2.0,
                rms: 3.0,
                covered_start: 2.0,
                covered_end: 8.0,
            })
        );
        assert_eq!(host.events, ["is-curve:7", "range:7", "calculate:7:2:8"]);
    }

    #[test]
    fn validator_distinguishes_category_error_from_failed_type_check() {
        let mut wrong_category = CalculationHost {
            is_curve: true,
            events: Vec::new(),
        };
        let mut wrong_type = CalculationHost {
            is_curve: false,
            events: Vec::new(),
        };

        assert_eq!(
            calculate_first_selected_curve_statistics(
                1,
                &[AnalysisObjectHandle(7)],
                &mut wrong_category,
            ),
            None
        );
        assert_eq!(
            wrong_category.events,
            [format!("error:{NO_SELECTED_CURVE_MESSAGE}")]
        );

        assert_eq!(
            calculate_first_selected_curve_statistics(
                2,
                &[AnalysisObjectHandle(7)],
                &mut wrong_type,
            ),
            None
        );
        assert_eq!(wrong_type.events, ["is-curve:7"]);
    }

    struct CrossingHost {
        is_curve: bool,
        events: Vec<String>,
    }

    impl SelectedCurveCrossingHost for CrossingHost {
        fn is_curve(&mut self, object: AnalysisObjectHandle) -> bool {
            self.events.push(format!("is-curve:{}", object.0));
            self.is_curve
        }

        fn curve_samples(&mut self, curve: AnalysisObjectHandle) -> Vec<CurveRenderSample> {
            self.events.push(format!("samples:{}", curve.0));
            vec![
                CurveRenderSample { x: 1.0, y: -2.0 },
                CurveRenderSample { x: 2.0, y: 2.0 },
                CurveRenderSample { x: 3.0, y: 4.0 },
            ]
        }

        fn provider_bounds(&mut self, curve: AnalysisObjectHandle) -> (f64, f64) {
            self.events.push(format!("bounds:{}", curve.0));
            (1.0, 3.0)
        }

        fn show_selection_error(&mut self, message: &'static str) {
            self.events.push(format!("error:{message}"));
        }
    }

    #[test]
    fn crossing_validator_uses_item_zero_and_existing_bounded_finder() {
        let mut host = CrossingHost {
            is_curve: true,
            events: Vec::new(),
        };

        assert_eq!(
            find_first_selected_curve_zero_db_crossing(
                2,
                &[AnalysisObjectHandle(7), AnalysisObjectHandle(9)],
                &mut host,
            ),
            Some(1.5)
        );
        assert_eq!(host.events, ["is-curve:7", "samples:7", "bounds:7"]);
    }

    #[test]
    fn crossing_validator_reports_only_category_mismatch() {
        let mut wrong_category = CrossingHost {
            is_curve: true,
            events: Vec::new(),
        };
        let mut wrong_type = CrossingHost {
            is_curve: false,
            events: Vec::new(),
        };

        assert_eq!(
            find_first_selected_curve_zero_db_crossing(
                1,
                &[AnalysisObjectHandle(7)],
                &mut wrong_category,
            ),
            None
        );
        assert_eq!(
            wrong_category.events,
            [format!("error:{NO_SELECTED_CURVE_MESSAGE}")]
        );
        assert_eq!(
            find_first_selected_curve_zero_db_crossing(
                2,
                &[AnalysisObjectHandle(7)],
                &mut wrong_type,
            ),
            None
        );
        assert_eq!(wrong_type.events, ["is-curve:7"]);
    }

    struct GainMarginHost {
        is_curve: bool,
        has_crossing: bool,
        events: Vec<String>,
    }

    impl SelectedCurveGainMarginHost for GainMarginHost {
        fn is_curve(&mut self, object: AnalysisObjectHandle) -> bool {
            self.events.push(format!("is-curve:{}", object.0));
            self.is_curve
        }

        fn complex_samples(&mut self, curve: AnalysisObjectHandle) -> Vec<ComplexPoint> {
            self.events.push(format!("samples:{}", curve.0));
            if self.has_crossing {
                vec![
                    ComplexPoint::new(1.0, 0.0, 1.0),
                    ComplexPoint::new(2.0, 0.0, -1.0),
                ]
            } else {
                vec![
                    ComplexPoint::new(1.0, 1.0, 0.0),
                    ComplexPoint::new(2.0, 2.0, 0.0),
                ]
            }
        }

        fn provider_bounds(&mut self, curve: AnalysisObjectHandle) -> (f64, f64) {
            self.events.push(format!("bounds:{}", curve.0));
            (1.0, 2.0)
        }

        fn evaluate_response(
            &mut self,
            curve: AnalysisObjectHandle,
            coordinate: f64,
        ) -> (f64, f64) {
            self.events
                .push(format!("evaluate:{}:{coordinate}", curve.0));
            (0.5, 0.0)
        }

        fn show_selection_error(&mut self, message: &'static str) {
            self.events.push(format!("error:{message}"));
        }
    }

    impl SelectedCurvePhaseMarginHost for GainMarginHost {
        fn is_curve(&mut self, object: AnalysisObjectHandle) -> bool {
            self.events.push(format!("is-curve:{}", object.0));
            self.is_curve
        }

        fn complex_samples(&mut self, curve: AnalysisObjectHandle) -> Vec<ComplexPoint> {
            self.events.push(format!("samples:{}", curve.0));
            if self.has_crossing {
                vec![
                    ComplexPoint::new(1.0, 0.5, 0.0),
                    ComplexPoint::new(2.0, 2.0, 0.0),
                ]
            } else {
                vec![
                    ComplexPoint::new(1.0, 2.0, 0.0),
                    ComplexPoint::new(2.0, 3.0, 0.0),
                ]
            }
        }

        fn provider_bounds(&mut self, curve: AnalysisObjectHandle) -> (f64, f64) {
            self.events.push(format!("bounds:{}", curve.0));
            (1.0, 2.0)
        }

        fn evaluate_response(
            &mut self,
            curve: AnalysisObjectHandle,
            coordinate: f64,
        ) -> (f64, f64) {
            self.events
                .push(format!("evaluate:{}:{coordinate}", curve.0));
            (0.0, -1.0)
        }

        fn show_selection_error(&mut self, message: &'static str) {
            self.events.push(format!("error:{message}"));
        }
    }

    #[test]
    fn gain_margin_validator_uses_item_zero_and_existing_phase_crossing_calculation() {
        let mut host = GainMarginHost {
            is_curve: true,
            has_crossing: true,
            events: Vec::new(),
        };

        let result = calculate_first_selected_curve_gain_margin(
            2,
            &[AnalysisObjectHandle(7), AnalysisObjectHandle(9)],
            0.0,
            &mut host,
        );

        assert_eq!(
            result,
            Some(PhaseCrossingMagnitude {
                coordinate: 1.5,
                magnitude_decibels: -6.020_599_913_279_624,
            })
        );
        assert_eq!(
            host.events,
            ["is-curve:7", "samples:7", "bounds:7", "evaluate:7:1.5"]
        );
    }

    #[test]
    fn gain_margin_validator_preserves_silent_failure_paths() {
        let mut wrong_category = GainMarginHost {
            is_curve: true,
            has_crossing: true,
            events: Vec::new(),
        };
        let mut wrong_type = GainMarginHost {
            is_curve: false,
            has_crossing: true,
            events: Vec::new(),
        };
        let mut missing_crossing = GainMarginHost {
            is_curve: true,
            has_crossing: false,
            events: Vec::new(),
        };

        assert_eq!(
            calculate_first_selected_curve_gain_margin(
                1,
                &[AnalysisObjectHandle(7)],
                0.0,
                &mut wrong_category,
            ),
            None
        );
        assert_eq!(
            wrong_category.events,
            [format!("error:{NO_SELECTED_CURVE_MESSAGE}")]
        );
        assert_eq!(
            calculate_first_selected_curve_gain_margin(
                2,
                &[AnalysisObjectHandle(7)],
                0.0,
                &mut wrong_type,
            ),
            None
        );
        assert_eq!(wrong_type.events, ["is-curve:7"]);
        assert_eq!(
            calculate_first_selected_curve_gain_margin(
                2,
                &[AnalysisObjectHandle(7)],
                90.0,
                &mut missing_crossing,
            ),
            None
        );
        assert_eq!(
            missing_crossing.events,
            ["is-curve:7", "samples:7", "bounds:7"]
        );
    }

    #[test]
    fn phase_margin_validator_uses_item_zero_and_existing_zero_db_calculation() {
        let mut host = GainMarginHost {
            is_curve: true,
            has_crossing: true,
            events: Vec::new(),
        };

        let result = calculate_first_selected_curve_phase_margin(
            2,
            &[AnalysisObjectHandle(7), AnalysisObjectHandle(9)],
            -180.0,
            &mut host,
        );

        assert_eq!(
            result,
            Some(PhaseMarginResult {
                coordinate: 1.5,
                margin_degrees: 90.0,
            })
        );
        assert_eq!(
            host.events,
            ["is-curve:7", "samples:7", "bounds:7", "evaluate:7:1.5"]
        );
    }

    #[test]
    fn phase_margin_validator_reports_only_category_mismatch() {
        let mut wrong_category = GainMarginHost {
            is_curve: true,
            has_crossing: true,
            events: Vec::new(),
        };
        let mut wrong_type = GainMarginHost {
            is_curve: false,
            has_crossing: true,
            events: Vec::new(),
        };
        let mut missing_crossing = GainMarginHost {
            is_curve: true,
            has_crossing: false,
            events: Vec::new(),
        };

        assert_eq!(
            calculate_first_selected_curve_phase_margin(
                1,
                &[AnalysisObjectHandle(7)],
                0.0,
                &mut wrong_category,
            ),
            None
        );
        assert_eq!(
            wrong_category.events,
            [format!("error:{NO_SELECTED_CURVE_MESSAGE}")]
        );
        assert_eq!(
            calculate_first_selected_curve_phase_margin(
                2,
                &[AnalysisObjectHandle(7)],
                0.0,
                &mut wrong_type,
            ),
            None
        );
        assert_eq!(wrong_type.events, ["is-curve:7"]);
        assert_eq!(
            calculate_first_selected_curve_phase_margin(
                2,
                &[AnalysisObjectHandle(7)],
                0.0,
                &mut missing_crossing,
            ),
            None
        );
        assert_eq!(
            missing_crossing.events,
            ["is-curve:7", "samples:7", "bounds:7"]
        );
    }

    struct RippleReportBuilderHost {
        events: Vec<String>,
    }

    impl AnalysisCurveRippleHost for RippleReportBuilderHost {
        fn curve_x_axis_range(&mut self, curve: AnalysisObjectHandle) -> (f64, f64) {
            self.events.push(format!("range:{}", curve.0));
            (2.0, 8.0)
        }

        fn calculate_curve_ripple(
            &mut self,
            curve: AnalysisObjectHandle,
            lower: f64,
            upper: f64,
        ) -> CurveRipple {
            self.events
                .push(format!("ripple:{}:{lower}:{upper}", curve.0));
            match curve.0 {
                7 => CurveRipple {
                    absolute: 0.7,
                    relative: 7.0,
                },
                9 => CurveRipple {
                    absolute: 0.9,
                    relative: 9.0,
                },
                _ => unreachable!("the test provides only known curve handles"),
            }
        }
    }

    impl SelectedCurveRippleReportHost for RippleReportBuilderHost {
        fn is_curve(&mut self, object: AnalysisObjectHandle) -> bool {
            self.events.push(format!("is-curve:{}", object.0));
            object.0 != 8
        }

        fn curve_name(&mut self, curve: AnalysisObjectHandle) -> String {
            self.events.push(format!("name:{}", curve.0));
            format!("Curve {}", curve.0)
        }

        fn format_scalar(&mut self, value: f64) -> String {
            self.events.push(format!("format:{value}"));
            format!("{value:.1}")
        }

        fn show_selection_error(&mut self, message: &'static str) {
            self.events.push(format!("error:{message}"));
        }
    }

    #[test]
    fn ripple_report_includes_header_and_each_compatible_curve() {
        let mut host = RippleReportBuilderHost { events: Vec::new() };

        let report = build_selected_curve_ripple_report(
            2,
            &[
                AnalysisObjectHandle(7),
                AnalysisObjectHandle(8),
                AnalysisObjectHandle(9),
            ],
            ["Curve", "Absolute", "Relative"],
            &mut host,
        );

        assert_eq!(
            report,
            Some(vec![
                format!("{:<16} {:<18} {:<18}", "Curve", "Absolute", "Relative"),
                format!("{:<16} {:<18} {:<18}", "Curve 7", "0.7", "7.0"),
                format!("{:<16} {:<18} {:<18}", "Curve 9", "0.9", "9.0"),
            ])
        );
        assert_eq!(
            host.events,
            [
                "is-curve:7",
                "name:7",
                "range:7",
                "ripple:7:2:8",
                "format:0.7",
                "format:7",
                "is-curve:8",
                "is-curve:9",
                "name:9",
                "range:9",
                "ripple:9:2:8",
                "format:0.9",
                "format:9",
            ]
        );
    }

    #[test]
    fn ripple_report_distinguishes_selection_error_from_no_compatible_rows() {
        let mut wrong_category = RippleReportBuilderHost { events: Vec::new() };
        let mut no_curves = RippleReportBuilderHost { events: Vec::new() };

        assert_eq!(
            build_selected_curve_ripple_report(
                1,
                &[AnalysisObjectHandle(7)],
                ["Curve", "Absolute", "Relative"],
                &mut wrong_category,
            ),
            None
        );
        assert_eq!(
            wrong_category.events,
            [format!("error:{NO_SELECTED_CURVE_MESSAGE}")]
        );
        assert_eq!(
            build_selected_curve_ripple_report(
                2,
                &[AnalysisObjectHandle(8)],
                ["Curve", "Absolute", "Relative"],
                &mut no_curves,
            ),
            None
        );
        assert_eq!(no_curves.events, ["is-curve:8"]);
    }
}
