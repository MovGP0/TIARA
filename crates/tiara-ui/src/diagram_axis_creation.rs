//! Axis creation from selected diagram curves.

use crate::diagram_selection::CURVE_CATEGORY;

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct AxisCreationCurveHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct AxisCreationPlotHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct CreatedAxisHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct CurveRange {
    pub lower: f64,
    pub upper: f64,
}

#[derive(Debug, Clone, PartialEq)]
pub struct YAxisCurveCandidate {
    pub handle: AxisCreationCurveHandle,
    pub plot: AxisCreationPlotHandle,
    pub current_y_axis: CreatedAxisHandle,
    pub current_y_axis_has_twin: bool,
    pub scale_mode: u8,
    pub range: CurveRange,
    pub color: u32,
    pub caption: String,
}

#[derive(Debug, Clone, PartialEq)]
pub struct YAxisSeed {
    pub scale_mode: u8,
    pub range: CurveRange,
    pub color: u32,
    pub caption: String,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct XAxisCurveCandidate {
    pub handle: AxisCreationCurveHandle,
    pub plot: AxisCreationPlotHandle,
    pub current_x_axis: CreatedAxisHandle,
    pub range: CurveRange,
}

pub trait DiagramYAxisCreationHost {
    fn normalize_y_axis_range(&mut self, range: CurveRange) -> CurveRange;
    fn create_y_axis(&mut self, plot: AxisCreationPlotHandle, seed: YAxisSeed)
    -> CreatedAxisHandle;
    fn plot_supports_twin_axis(&mut self, plot: AxisCreationPlotHandle) -> bool;
    fn attach_y_axis(
        &mut self,
        plot: AxisCreationPlotHandle,
        current_axis: CreatedAxisHandle,
        new_axis: CreatedAxisHandle,
        as_twin: bool,
    );
    fn transfer_curve_y_axis(
        &mut self,
        curve: AxisCreationCurveHandle,
        old_axis: CreatedAxisHandle,
        new_axis: CreatedAxisHandle,
    );
    fn recalculate_plot(&mut self, plot: AxisCreationPlotHandle);
    fn refresh_plot(&mut self, plot: AxisCreationPlotHandle);
    fn redraw_diagram(&mut self);
}

pub trait DiagramXAxisCreationHost {
    fn normalize_x_axis_range(&mut self, range: CurveRange) -> CurveRange;
    fn create_linear_x_axis(
        &mut self,
        plot: AxisCreationPlotHandle,
        range: CurveRange,
    ) -> CreatedAxisHandle;
    fn attach_x_axis(&mut self, plot: AxisCreationPlotHandle, new_axis: CreatedAxisHandle);
    fn transfer_curve_x_axis(
        &mut self,
        curve: AxisCreationCurveHandle,
        old_axis: CreatedAxisHandle,
        new_axis: CreatedAxisHandle,
    );
    fn disable_automatic_x_axis_adjustment(&mut self);
    fn recalculate_plot(&mut self, plot: AxisCreationPlotHandle);
    fn refresh_plot(&mut self, plot: AxisCreationPlotHandle);
    fn redraw_diagram(&mut self);
    fn serialize_manual_scale_if_needed(&mut self);
}

/// Implements Ghidra function `FUN_01ad72b0` at `0x01AD72B0`.
///
/// Creates a Y axis only for a curve-only selection whose members share one
/// plot. The optional Twin mode also requires the first curve's current Y axis
/// to have no Twin. The new axis inherits the first curve's scale, color, and
/// caption and spans every selected curve range. Every selected curve then
/// moves from its old Y axis to the new axis. Optional refresh runs last.
pub fn create_y_axis_from_selected_curves(
    selection_category: u8,
    selected: &[YAxisCurveCandidate],
    refresh: bool,
    prefer_twin: bool,
    host: &mut impl DiagramYAxisCreationHost,
) -> Option<CreatedAxisHandle> {
    if selection_category != CURVE_CATEGORY {
        return None;
    }
    let first = selected.first()?;
    if selected.iter().any(|curve| curve.plot != first.plot) {
        return None;
    }
    if prefer_twin && first.current_y_axis_has_twin {
        return None;
    }

    let range = selected
        .iter()
        .skip(1)
        .fold(first.range, |range, curve| CurveRange {
            lower: range.lower.min(curve.range.lower),
            upper: range.upper.max(curve.range.upper),
        });
    let seed = YAxisSeed {
        scale_mode: first.scale_mode,
        range: host.normalize_y_axis_range(range),
        color: first.color,
        caption: first.caption.clone(),
    };
    let new_axis = host.create_y_axis(first.plot, seed);
    let as_twin = prefer_twin && host.plot_supports_twin_axis(first.plot);
    host.attach_y_axis(first.plot, first.current_y_axis, new_axis, as_twin);
    for curve in selected {
        host.transfer_curve_y_axis(curve.handle, curve.current_y_axis, new_axis);
    }

    if refresh {
        host.recalculate_plot(first.plot);
        host.refresh_plot(first.plot);
        host.redraw_diagram();
    }
    Some(new_axis)
}

/// Implements Ghidra function `FUN_01ad78b0` at `0x01AD78B0`.
///
/// Creates a linear X axis only for a curve-only selection whose members share
/// one plot. The new range spans the selected curve data. The axis is added to
/// the plot before every selected curve moves from its old X axis. Creation
/// disables automatic X-axis adjustment, optionally refreshes the plot, and
/// always performs the recovered manual-scale serialization check.
pub fn create_x_axis_from_selected_curves(
    selection_category: u8,
    selected: &[XAxisCurveCandidate],
    refresh: bool,
    host: &mut impl DiagramXAxisCreationHost,
) -> Option<CreatedAxisHandle> {
    if selection_category != CURVE_CATEGORY {
        return None;
    }
    let first = selected.first()?;
    if selected.iter().any(|curve| curve.plot != first.plot) {
        return None;
    }

    let range = selected
        .iter()
        .skip(1)
        .fold(first.range, |range, curve| CurveRange {
            lower: range.lower.min(curve.range.lower),
            upper: range.upper.max(curve.range.upper),
        });
    let range = host.normalize_x_axis_range(range);
    let new_axis = host.create_linear_x_axis(first.plot, range);
    host.attach_x_axis(first.plot, new_axis);
    for curve in selected {
        host.transfer_curve_x_axis(curve.handle, curve.current_x_axis, new_axis);
    }
    host.disable_automatic_x_axis_adjustment();

    if refresh {
        host.recalculate_plot(first.plot);
        host.refresh_plot(first.plot);
        host.redraw_diagram();
    }
    host.serialize_manual_scale_if_needed();
    Some(new_axis)
}

#[cfg(test)]
mod tests {
    use super::{
        AxisCreationCurveHandle, AxisCreationPlotHandle, CreatedAxisHandle, CurveRange,
        DiagramXAxisCreationHost, DiagramYAxisCreationHost, XAxisCurveCandidate,
        YAxisCurveCandidate, YAxisSeed, create_x_axis_from_selected_curves,
        create_y_axis_from_selected_curves,
    };

    struct Host {
        supports_twin: bool,
        events: Vec<String>,
        seed: Option<YAxisSeed>,
    }

    #[derive(Default)]
    struct XHost {
        events: Vec<String>,
        range: Option<CurveRange>,
    }

    impl DiagramYAxisCreationHost for Host {
        fn normalize_y_axis_range(&mut self, range: CurveRange) -> CurveRange {
            self.events
                .push(format!("normalize:{}:{}", range.lower, range.upper));
            range
        }

        fn create_y_axis(
            &mut self,
            plot: AxisCreationPlotHandle,
            seed: YAxisSeed,
        ) -> CreatedAxisHandle {
            self.events.push(format!("create:{}", plot.0));
            self.seed = Some(seed);
            CreatedAxisHandle(99)
        }

        fn plot_supports_twin_axis(&mut self, plot: AxisCreationPlotHandle) -> bool {
            self.events.push(format!("supports-twin:{}", plot.0));
            self.supports_twin
        }

        fn attach_y_axis(
            &mut self,
            plot: AxisCreationPlotHandle,
            current_axis: CreatedAxisHandle,
            new_axis: CreatedAxisHandle,
            as_twin: bool,
        ) {
            self.events.push(format!(
                "attach:{}:{}:{}:{as_twin}",
                plot.0, current_axis.0, new_axis.0
            ));
        }

        fn transfer_curve_y_axis(
            &mut self,
            curve: AxisCreationCurveHandle,
            old_axis: CreatedAxisHandle,
            new_axis: CreatedAxisHandle,
        ) {
            self.events.push(format!(
                "transfer:{}:{}:{}",
                curve.0, old_axis.0, new_axis.0
            ));
        }

        fn recalculate_plot(&mut self, plot: AxisCreationPlotHandle) {
            self.events.push(format!("layout:{}", plot.0));
        }

        fn refresh_plot(&mut self, plot: AxisCreationPlotHandle) {
            self.events.push(format!("refresh:{}", plot.0));
        }

        fn redraw_diagram(&mut self) {
            self.events.push("redraw".to_owned());
        }
    }

    impl DiagramXAxisCreationHost for XHost {
        fn normalize_x_axis_range(&mut self, range: CurveRange) -> CurveRange {
            self.events
                .push(format!("normalize:{}:{}", range.lower, range.upper));
            range
        }

        fn create_linear_x_axis(
            &mut self,
            plot: AxisCreationPlotHandle,
            range: CurveRange,
        ) -> CreatedAxisHandle {
            self.events.push(format!("create:{}", plot.0));
            self.range = Some(range);
            CreatedAxisHandle(199)
        }

        fn attach_x_axis(&mut self, plot: AxisCreationPlotHandle, new_axis: CreatedAxisHandle) {
            self.events
                .push(format!("attach:{}:{}", plot.0, new_axis.0));
        }

        fn transfer_curve_x_axis(
            &mut self,
            curve: AxisCreationCurveHandle,
            old_axis: CreatedAxisHandle,
            new_axis: CreatedAxisHandle,
        ) {
            self.events.push(format!(
                "transfer:{}:{}:{}",
                curve.0, old_axis.0, new_axis.0
            ));
        }

        fn disable_automatic_x_axis_adjustment(&mut self) {
            self.events.push("automatic-x:false".to_owned());
        }

        fn recalculate_plot(&mut self, plot: AxisCreationPlotHandle) {
            self.events.push(format!("layout:{}", plot.0));
        }

        fn refresh_plot(&mut self, plot: AxisCreationPlotHandle) {
            self.events.push(format!("refresh:{}", plot.0));
        }

        fn redraw_diagram(&mut self) {
            self.events.push("redraw".to_owned());
        }

        fn serialize_manual_scale_if_needed(&mut self) {
            self.events.push("manual-scale".to_owned());
        }
    }

    fn candidate(handle: u64, plot: u64, axis: u64, lower: f64, upper: f64) -> YAxisCurveCandidate {
        YAxisCurveCandidate {
            handle: AxisCreationCurveHandle(handle),
            plot: AxisCreationPlotHandle(plot),
            current_y_axis: CreatedAxisHandle(axis),
            current_y_axis_has_twin: false,
            scale_mode: 2,
            range: CurveRange { lower, upper },
            color: 0x0010_2030,
            caption: "Voltage".to_owned(),
        }
    }

    fn x_candidate(
        handle: u64,
        plot: u64,
        axis: u64,
        lower: f64,
        upper: f64,
    ) -> XAxisCurveCandidate {
        XAxisCurveCandidate {
            handle: AxisCreationCurveHandle(handle),
            plot: AxisCreationPlotHandle(plot),
            current_x_axis: CreatedAxisHandle(axis),
            range: CurveRange { lower, upper },
        }
    }

    fn host() -> Host {
        Host {
            supports_twin: true,
            events: Vec::new(),
            seed: None,
        }
    }

    #[test]
    fn rejected_category_and_mixed_plots_create_no_axis() {
        let curves = [
            candidate(1, 10, 20, -1.0, 2.0),
            candidate(2, 11, 21, -2.0, 3.0),
        ];
        let mut category_host = host();
        let mut plot_host = host();

        assert_eq!(
            create_y_axis_from_selected_curves(1, &curves, true, false, &mut category_host),
            None
        );
        assert_eq!(
            create_y_axis_from_selected_curves(2, &curves, true, false, &mut plot_host),
            None
        );
        assert!(category_host.events.is_empty());
        assert!(plot_host.events.is_empty());
    }

    #[test]
    fn occupied_twin_rejects_creation_silently() {
        let mut curve = candidate(1, 10, 20, -1.0, 2.0);
        curve.current_y_axis_has_twin = true;
        let mut host = host();

        assert_eq!(
            create_y_axis_from_selected_curves(2, &[curve], true, true, &mut host),
            None
        );
        assert!(host.events.is_empty());
    }

    #[test]
    fn creation_aggregates_ranges_transfers_all_curves_and_refreshes() {
        let curves = [
            candidate(1, 10, 20, -1.0, 2.0),
            candidate(2, 10, 21, -3.0, 5.0),
        ];
        let mut host = host();

        let created = create_y_axis_from_selected_curves(2, &curves, true, true, &mut host);

        assert_eq!(created, Some(CreatedAxisHandle(99)));
        assert_eq!(
            host.seed,
            Some(YAxisSeed {
                scale_mode: 2,
                range: CurveRange {
                    lower: -3.0,
                    upper: 5.0,
                },
                color: 0x0010_2030,
                caption: "Voltage".to_owned(),
            })
        );
        assert_eq!(
            host.events,
            [
                "normalize:-3:5",
                "create:10",
                "supports-twin:10",
                "attach:10:20:99:true",
                "transfer:1:20:99",
                "transfer:2:21:99",
                "layout:10",
                "refresh:10",
                "redraw",
            ]
        );
    }

    #[test]
    fn disabled_refresh_stops_after_curve_transfer() {
        let curves = [candidate(1, 10, 20, -1.0, 2.0)];
        let mut host = host();

        create_y_axis_from_selected_curves(2, &curves, false, false, &mut host);

        assert_eq!(
            host.events.last().map(String::as_str),
            Some("transfer:1:20:99")
        );
    }

    #[test]
    fn x_axis_rejects_non_curve_and_mixed_plot_selections() {
        let curves = [
            x_candidate(1, 10, 20, -1.0, 2.0),
            x_candidate(2, 11, 21, -2.0, 3.0),
        ];
        let mut category_host = XHost::default();
        let mut plot_host = XHost::default();

        assert_eq!(
            create_x_axis_from_selected_curves(1, &curves, true, &mut category_host),
            None
        );
        assert_eq!(
            create_x_axis_from_selected_curves(2, &curves, true, &mut plot_host),
            None
        );
        assert!(category_host.events.is_empty());
        assert!(plot_host.events.is_empty());
    }

    #[test]
    fn x_axis_aggregates_range_transfers_curves_and_runs_all_final_steps() {
        let curves = [
            x_candidate(1, 10, 20, -1.0, 2.0),
            x_candidate(2, 10, 21, -3.0, 5.0),
        ];
        let mut host = XHost::default();

        let created = create_x_axis_from_selected_curves(2, &curves, true, &mut host);

        assert_eq!(created, Some(CreatedAxisHandle(199)));
        assert_eq!(
            host.range,
            Some(CurveRange {
                lower: -3.0,
                upper: 5.0,
            })
        );
        assert_eq!(
            host.events,
            [
                "normalize:-3:5",
                "create:10",
                "attach:10:199",
                "transfer:1:20:199",
                "transfer:2:21:199",
                "automatic-x:false",
                "layout:10",
                "refresh:10",
                "redraw",
                "manual-scale",
            ]
        );
    }

    #[test]
    fn x_axis_without_refresh_still_serializes_manual_scale() {
        let curves = [x_candidate(1, 10, 20, -1.0, 2.0)];
        let mut host = XHost::default();

        create_x_axis_from_selected_curves(2, &curves, false, &mut host);

        assert!(
            host.events
                .ends_with(&["automatic-x:false".to_owned(), "manual-scale".to_owned(),])
        );
        assert!(!host.events.iter().any(|event| event == "redraw"));
    }
}
