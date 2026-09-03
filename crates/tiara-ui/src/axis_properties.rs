//! Typed staging and commit flow for diagram axis properties.

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AxisDialogKind {
    Standard,
    Secondary,
    Signal,
    Phase,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AutomaticAxisGroup {
    X,
    Y,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct SelectedAxisHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct AxisOwnerHandle(pub u64);

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct DiagramAxisEntry {
    pub handle: SelectedAxisHandle,
    pub caption: String,
    pub linked_secondary: Option<SelectedAxisHandle>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CoordinateSystemAxes {
    pub owner: AxisOwnerHandle,
    pub x_axes: Vec<DiagramAxisEntry>,
    pub y_axes: Vec<DiagramAxisEntry>,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct AxisRange {
    pub lower: f64,
    pub upper: f64,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AutoRangeOrientation {
    X,
    Y,
}

#[derive(Debug, Clone, PartialEq)]
pub struct AutomaticRangeInput {
    pub owner_type: Option<u8>,
    pub orientation: AutoRangeOrientation,
    pub attached_ranges: Vec<AxisRange>,
    pub figure_ranges: Vec<AxisRange>,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct AutomaticAxisRange {
    pub current: AxisRange,
    pub allowed: AxisRange,
}

#[derive(Debug, Clone, PartialEq)]
pub struct AxisProperties {
    pub axis_type: u8,
    pub range: Option<AxisRange>,
    pub scale_mode: u8,
    pub division_count: u32,
    pub precision: u8,
    pub title: String,
    pub axis_font: String,
    pub number_font: String,
    pub manual_scale: bool,
    pub automatic_adjustment: Option<bool>,
}

#[derive(Debug, Clone, PartialEq)]
pub enum AxisDialogResult {
    Cancelled,
    Accepted(AxisProperties),
}

pub trait AxisPropertiesDialogHost {
    fn show_axis_properties(
        &mut self,
        dialog: AxisDialogKind,
        staged: AxisProperties,
    ) -> AxisDialogResult;
    fn store_automatic_axis_adjustment(&mut self, group: AutomaticAxisGroup, enabled: bool);
    fn recalculate_diagram_layout(&mut self);
    fn render_diagram(&mut self);
    fn refresh_axis(&mut self);
}

pub trait SelectedAxisAutoRangeHost {
    fn apply_automatic_range(&mut self, axis: SelectedAxisHandle, reset_stored_options: bool);
    fn resolve_axis_owner(&mut self, axis: SelectedAxisHandle) -> Option<AxisOwnerHandle>;
    fn recalculate_axis_owner(&mut self, owner: AxisOwnerHandle);
    fn queue_axis_owner_refresh(&mut self, owner: AxisOwnerHandle);
    fn process_refresh_queue(&mut self);
}

pub trait AutomaticRangeHost {
    fn remove_stored_division_options(&mut self);
    fn normalize_range(&mut self, orientation: AutoRangeOrientation, range: AxisRange)
    -> AxisRange;
}

pub trait DiagramRangeResetHost {
    fn reset_axis_range(&mut self, axis: SelectedAxisHandle, reset_stored_options: bool);
    fn correct_proportional_spans(&mut self, owner: AxisOwnerHandle);
    fn recalculate_diagram_layout(&mut self);
    fn repaint_diagram(&mut self);
}

/// Implements Ghidra function `FUN_01ad4310` at `0x01AD4310`.
///
/// Stages a snapshot of the selected axis in the dialog for its recovered type.
/// Cancellation leaves the live axis and diagram unchanged. Acceptance commits
/// the staged fields, separates equal range endpoints, stores an applicable
/// automatic-axis option, and then refreshes the diagram and selected axis.
pub fn edit_selected_axis_properties(
    axis: &mut AxisProperties,
    host: &mut impl AxisPropertiesDialogHost,
) -> bool {
    let dialog = dialog_kind(axis.axis_type);
    let AxisDialogResult::Accepted(mut staged) = host.show_axis_properties(dialog, axis.clone())
    else {
        return false;
    };

    if let Some(range) = &mut staged.range
        && matches!(
            range.lower.partial_cmp(&range.upper),
            Some(std::cmp::Ordering::Equal)
        )
    {
        range.upper = range.lower + 1e-9;
    }

    if let (Some(group), Some(enabled)) = (
        automatic_axis_group(staged.axis_type),
        staged.automatic_adjustment,
    ) {
        host.store_automatic_axis_adjustment(group, enabled);
    }

    *axis = staged;
    host.recalculate_diagram_layout();
    host.render_diagram();
    host.refresh_axis();
    true
}

/// Implements Ghidra function `FUN_01ad8540` at `0x01AD8540`.
///
/// Applies automatic-range calculation without resetting stored options to
/// selection item zero. It then resolves that axis's coordinate system,
/// recalculates it, queues it once, and processes the targeted refresh. A
/// category mismatch or empty selection is a silent no-op. Failed owner lookup
/// keeps the range calculation but skips all refresh work.
pub fn restore_first_selected_axis_automatic_range(
    selection_category: u8,
    selected: &[SelectedAxisHandle],
    host: &mut impl SelectedAxisAutoRangeHost,
) -> bool {
    if selection_category != 1 {
        return false;
    }
    let Some(axis) = selected.first().copied() else {
        return false;
    };

    host.apply_automatic_range(axis, false);
    let Some(owner) = host.resolve_axis_owner(axis) else {
        return false;
    };
    host.recalculate_axis_owner(owner);
    host.queue_axis_owner_refresh(owner);
    host.process_refresh_queue();
    true
}

/// Implements Ghidra function `FUN_01ad85f0` at `0x01AD85F0`.
///
/// Resolves the supplied owner input, optionally removes stored division
/// options, and derives the axis range from compatible curve or figure bounds.
/// Owner type five uses fixed `-1..1`, type six uses a range symmetric around
/// zero, and type seven adds ten percent padding to the figure extent. Other
/// supported types aggregate attached ranges. Eligible numeric ranges pass
/// through the host normalizer. The result is copied to current and allowed
/// endpoints. An unresolved or unsupported owner leaves the axis unchanged.
pub fn derive_automatic_axis_range(
    axis: &mut AutomaticAxisRange,
    input: &AutomaticRangeInput,
    reset_stored_options: bool,
    host: &mut impl AutomaticRangeHost,
) -> bool {
    let Some(owner_type) = input.owner_type else {
        return false;
    };
    if reset_stored_options {
        host.remove_stored_division_options();
    }

    let (range, normalize) = match owner_type {
        0..=4 => {
            let Some(range) = aggregate_ranges(&input.attached_ranges) else {
                return false;
            };
            (range, true)
        }
        5 => (
            AxisRange {
                lower: -1.0,
                upper: 1.0,
            },
            false,
        ),
        6 => {
            let Some(range) = aggregate_ranges(&input.attached_ranges) else {
                return false;
            };
            let magnitude = range.lower.abs().max(range.upper.abs());
            (
                AxisRange {
                    lower: -magnitude,
                    upper: magnitude,
                },
                false,
            )
        }
        7 => {
            let Some(mut range) = aggregate_ranges(&input.figure_ranges) else {
                return false;
            };
            let padding = (range.upper - range.lower) * 0.1;
            range.lower -= padding;
            range.upper += padding;
            (range, true)
        }
        _ => return false,
    };
    let range = if normalize {
        host.normalize_range(input.orientation, range)
    } else {
        range
    };
    axis.current = range;
    axis.allowed = range;
    true
}

fn aggregate_ranges(ranges: &[AxisRange]) -> Option<AxisRange> {
    let first = *ranges.first()?;
    Some(
        ranges
            .iter()
            .skip(1)
            .fold(first, |range, candidate| AxisRange {
                lower: range.lower.min(candidate.lower),
                upper: range.upper.max(candidate.upper),
            }),
    )
}

/// Implements Ghidra function `FUN_01ad9580` at `0x01AD9580`.
///
/// Walks every coordinate system, its X axes, its Y axes, and each linked
/// secondary Y axis. A missing caption filter accepts every axis. A supplied
/// filter accepts captions that contain it as a complete space-delimited term;
/// a matched primary Y axis also includes its linked secondary axis. Each
/// coordinate system receives proportional-span correction after its walk.
/// Optional flags control stored-option reset and final diagram repaint.
pub fn reset_diagram_axis_ranges(
    coordinate_systems: &[CoordinateSystemAxes],
    reset_stored_options: bool,
    redraw: bool,
    caption_filter: Option<&str>,
    host: &mut impl DiagramRangeResetHost,
) {
    for coordinate_system in coordinate_systems {
        for axis in &coordinate_system.x_axes {
            if caption_matches_filter(&axis.caption, caption_filter) {
                host.reset_axis_range(axis.handle, reset_stored_options);
            }
        }
        for axis in &coordinate_system.y_axes {
            if caption_matches_filter(&axis.caption, caption_filter) {
                host.reset_axis_range(axis.handle, reset_stored_options);
                if let Some(linked) = axis.linked_secondary {
                    host.reset_axis_range(linked, reset_stored_options);
                }
            }
        }
        host.correct_proportional_spans(coordinate_system.owner);
    }

    if redraw {
        host.recalculate_diagram_layout();
        host.repaint_diagram();
    }
}

fn caption_matches_filter(caption: &str, filter: Option<&str>) -> bool {
    let Some(filter) = filter else {
        return true;
    };
    format!(" {caption} ").contains(&format!(" {filter} "))
}

#[must_use]
pub const fn dialog_kind(axis_type: u8) -> AxisDialogKind {
    match axis_type {
        3 => AxisDialogKind::Secondary,
        4 | 5 => AxisDialogKind::Signal,
        6 | 7 => AxisDialogKind::Phase,
        _ => AxisDialogKind::Standard,
    }
}

#[must_use]
pub const fn automatic_axis_group(axis_type: u8) -> Option<AutomaticAxisGroup> {
    match axis_type {
        0 | 5 => Some(AutomaticAxisGroup::X),
        1 | 2 | 4 => Some(AutomaticAxisGroup::Y),
        _ => None,
    }
}

#[cfg(test)]
mod tests {
    use super::{
        AutoRangeOrientation, AutomaticAxisGroup, AutomaticAxisRange, AutomaticRangeHost,
        AutomaticRangeInput, AxisDialogKind, AxisDialogResult, AxisOwnerHandle, AxisProperties,
        AxisPropertiesDialogHost, AxisRange, CoordinateSystemAxes, DiagramAxisEntry,
        DiagramRangeResetHost, SelectedAxisAutoRangeHost, SelectedAxisHandle,
        derive_automatic_axis_range, dialog_kind, edit_selected_axis_properties,
        reset_diagram_axis_ranges, restore_first_selected_axis_automatic_range,
    };

    struct Host {
        result: AxisDialogResult,
        events: Vec<String>,
        shown: Option<(AxisDialogKind, AxisProperties)>,
    }

    #[derive(Default)]
    struct AutoRangeHost(Vec<String>);

    #[derive(Default)]
    struct RangeHost(Vec<String>);

    #[derive(Default)]
    struct RangeResetHost(Vec<String>);

    impl AxisPropertiesDialogHost for Host {
        fn show_axis_properties(
            &mut self,
            dialog: AxisDialogKind,
            staged: AxisProperties,
        ) -> AxisDialogResult {
            self.shown = Some((dialog, staged));
            self.result.clone()
        }

        fn store_automatic_axis_adjustment(&mut self, group: AutomaticAxisGroup, enabled: bool) {
            self.events.push(format!("automatic:{group:?}:{enabled}"));
        }

        fn recalculate_diagram_layout(&mut self) {
            self.events.push("layout".to_owned());
        }

        fn render_diagram(&mut self) {
            self.events.push("render".to_owned());
        }

        fn refresh_axis(&mut self) {
            self.events.push("axis-refresh".to_owned());
        }
    }

    impl SelectedAxisAutoRangeHost for AutoRangeHost {
        fn apply_automatic_range(&mut self, axis: SelectedAxisHandle, reset_stored_options: bool) {
            self.0
                .push(format!("range:{}:{reset_stored_options}", axis.0));
        }

        fn resolve_axis_owner(&mut self, axis: SelectedAxisHandle) -> Option<AxisOwnerHandle> {
            self.0.push(format!("resolve:{}", axis.0));
            (axis.0 != 99).then_some(AxisOwnerHandle(axis.0 + 100))
        }

        fn recalculate_axis_owner(&mut self, owner: AxisOwnerHandle) {
            self.0.push(format!("layout:{}", owner.0));
        }

        fn queue_axis_owner_refresh(&mut self, owner: AxisOwnerHandle) {
            self.0.push(format!("queue:{}", owner.0));
        }

        fn process_refresh_queue(&mut self) {
            self.0.push("process".to_owned());
        }
    }

    impl AutomaticRangeHost for RangeHost {
        fn remove_stored_division_options(&mut self) {
            self.0.push("reset".to_owned());
        }

        fn normalize_range(
            &mut self,
            orientation: AutoRangeOrientation,
            range: AxisRange,
        ) -> AxisRange {
            self.0.push(format!(
                "normalize:{orientation:?}:{}:{}",
                range.lower, range.upper
            ));
            range
        }
    }

    impl DiagramRangeResetHost for RangeResetHost {
        fn reset_axis_range(&mut self, axis: SelectedAxisHandle, reset_stored_options: bool) {
            self.0
                .push(format!("axis:{}:{reset_stored_options}", axis.0));
        }

        fn correct_proportional_spans(&mut self, owner: AxisOwnerHandle) {
            self.0.push(format!("proportions:{}", owner.0));
        }

        fn recalculate_diagram_layout(&mut self) {
            self.0.push("layout".to_owned());
        }

        fn repaint_diagram(&mut self) {
            self.0.push("repaint".to_owned());
        }
    }

    fn axis(axis_type: u8) -> AxisProperties {
        AxisProperties {
            axis_type,
            range: Some(AxisRange {
                lower: -1.0,
                upper: 1.0,
            }),
            scale_mode: 0,
            division_count: 4,
            precision: 3,
            title: "Input".to_owned(),
            axis_font: "Axis".to_owned(),
            number_font: "Number".to_owned(),
            manual_scale: false,
            automatic_adjustment: None,
        }
    }

    #[test]
    fn recovered_axis_types_select_their_specific_dialogs() {
        assert_eq!(dialog_kind(3), AxisDialogKind::Secondary);
        assert_eq!(dialog_kind(4), AxisDialogKind::Signal);
        assert_eq!(dialog_kind(5), AxisDialogKind::Signal);
        assert_eq!(dialog_kind(6), AxisDialogKind::Phase);
        assert_eq!(dialog_kind(7), AxisDialogKind::Phase);
        assert_eq!(dialog_kind(0), AxisDialogKind::Standard);
        assert_eq!(dialog_kind(8), AxisDialogKind::Standard);
    }

    #[test]
    fn cancellation_keeps_the_live_axis_and_skips_refresh() {
        let mut live_axis = axis(4);
        let original = live_axis.clone();
        let mut host = Host {
            result: AxisDialogResult::Cancelled,
            events: Vec::new(),
            shown: None,
        };

        let accepted = edit_selected_axis_properties(&mut live_axis, &mut host);

        assert!(!accepted);
        assert_eq!(live_axis, original);
        assert_eq!(host.shown, Some((AxisDialogKind::Signal, original)));
        assert!(host.events.is_empty());
    }

    #[test]
    fn acceptance_commits_fields_corrects_equal_range_and_refreshes_in_order() {
        let mut live_axis = axis(5);
        let mut edited = axis(5);
        edited.range = Some(AxisRange {
            lower: 2.5,
            upper: 2.5,
        });
        edited.title = "Output".to_owned();
        edited.precision = 6;
        edited.automatic_adjustment = Some(true);
        let mut host = Host {
            result: AxisDialogResult::Accepted(edited),
            events: Vec::new(),
            shown: None,
        };

        let accepted = edit_selected_axis_properties(&mut live_axis, &mut host);

        assert!(accepted);
        assert_eq!(live_axis.title, "Output");
        assert_eq!(live_axis.precision, 6);
        assert_eq!(
            live_axis.range,
            Some(AxisRange {
                lower: 2.5,
                upper: 2.5 + 1e-9,
            })
        );
        assert_eq!(
            host.events,
            ["automatic:X:true", "layout", "render", "axis-refresh"]
        );
    }

    #[test]
    fn non_adjustable_axis_skips_option_storage() {
        let mut live_axis = axis(6);
        let mut edited = live_axis.clone();
        edited.automatic_adjustment = Some(true);
        let mut host = Host {
            result: AxisDialogResult::Accepted(edited),
            events: Vec::new(),
            shown: None,
        };

        edit_selected_axis_properties(&mut live_axis, &mut host);

        assert_eq!(host.events, ["layout", "render", "axis-refresh"]);
    }

    #[test]
    fn selected_axis_auto_range_uses_item_zero_without_reset_and_refreshes_owner() {
        let mut host = AutoRangeHost::default();

        let refreshed = restore_first_selected_axis_automatic_range(
            1,
            &[SelectedAxisHandle(7), SelectedAxisHandle(8)],
            &mut host,
        );

        assert!(refreshed);
        assert_eq!(
            host.0,
            [
                "range:7:false",
                "resolve:7",
                "layout:107",
                "queue:107",
                "process"
            ]
        );
    }

    #[test]
    fn unresolved_axis_keeps_range_change_but_skips_refresh() {
        let mut host = AutoRangeHost::default();

        let refreshed =
            restore_first_selected_axis_automatic_range(1, &[SelectedAxisHandle(99)], &mut host);

        assert!(!refreshed);
        assert_eq!(host.0, ["range:99:false", "resolve:99"]);
    }

    #[test]
    fn non_axis_or_empty_selection_does_not_apply_automatic_range() {
        let mut host = AutoRangeHost::default();

        assert!(!restore_first_selected_axis_automatic_range(
            2,
            &[SelectedAxisHandle(1)],
            &mut host,
        ));
        assert!(!restore_first_selected_axis_automatic_range(
            1,
            &[],
            &mut host,
        ));

        assert!(host.0.is_empty());
    }

    fn automatic_axis() -> AutomaticAxisRange {
        AutomaticAxisRange {
            current: AxisRange {
                lower: 10.0,
                upper: 20.0,
            },
            allowed: AxisRange {
                lower: 0.0,
                upper: 30.0,
            },
        }
    }

    #[test]
    fn unresolved_owner_preserves_ranges_and_stored_options() {
        let mut axis = automatic_axis();
        let original = axis;
        let input = AutomaticRangeInput {
            owner_type: None,
            orientation: AutoRangeOrientation::X,
            attached_ranges: Vec::new(),
            figure_ranges: Vec::new(),
        };
        let mut host = RangeHost::default();

        assert!(!derive_automatic_axis_range(
            &mut axis, &input, true, &mut host
        ));
        assert_eq!(axis, original);
        assert!(host.0.is_empty());
    }

    #[test]
    fn curve_ranges_are_aggregated_normalized_and_copied_to_both_pairs() {
        let mut axis = automatic_axis();
        let input = AutomaticRangeInput {
            owner_type: Some(0),
            orientation: AutoRangeOrientation::Y,
            attached_ranges: vec![
                AxisRange {
                    lower: -2.0,
                    upper: 3.0,
                },
                AxisRange {
                    lower: -5.0,
                    upper: 4.0,
                },
            ],
            figure_ranges: Vec::new(),
        };
        let mut host = RangeHost::default();

        assert!(derive_automatic_axis_range(
            &mut axis, &input, true, &mut host
        ));
        let expected = AxisRange {
            lower: -5.0,
            upper: 4.0,
        };
        assert_eq!(axis.current, expected);
        assert_eq!(axis.allowed, expected);
        assert_eq!(host.0, ["reset", "normalize:Y:-5:4"]);
    }

    #[test]
    fn fixed_and_symmetric_types_skip_numeric_normalization() {
        let mut fixed = automatic_axis();
        let mut symmetric = automatic_axis();
        let mut host = RangeHost::default();
        let fixed_input = AutomaticRangeInput {
            owner_type: Some(5),
            orientation: AutoRangeOrientation::X,
            attached_ranges: Vec::new(),
            figure_ranges: Vec::new(),
        };
        let symmetric_input = AutomaticRangeInput {
            owner_type: Some(6),
            orientation: AutoRangeOrientation::Y,
            attached_ranges: vec![AxisRange {
                lower: -3.0,
                upper: 7.0,
            }],
            figure_ranges: Vec::new(),
        };

        assert!(derive_automatic_axis_range(
            &mut fixed,
            &fixed_input,
            false,
            &mut host
        ));
        assert!(derive_automatic_axis_range(
            &mut symmetric,
            &symmetric_input,
            false,
            &mut host,
        ));

        assert_eq!(
            fixed.current,
            AxisRange {
                lower: -1.0,
                upper: 1.0
            }
        );
        assert_eq!(
            symmetric.current,
            AxisRange {
                lower: -7.0,
                upper: 7.0
            }
        );
        assert!(host.0.is_empty());
    }

    #[test]
    fn figure_range_adds_ten_percent_padding_before_normalization() {
        let mut axis = automatic_axis();
        let input = AutomaticRangeInput {
            owner_type: Some(7),
            orientation: AutoRangeOrientation::X,
            attached_ranges: Vec::new(),
            figure_ranges: vec![AxisRange {
                lower: 10.0,
                upper: 20.0,
            }],
        };
        let mut host = RangeHost::default();

        assert!(derive_automatic_axis_range(
            &mut axis, &input, false, &mut host
        ));

        assert_eq!(
            axis.current,
            AxisRange {
                lower: 9.0,
                upper: 21.0
            }
        );
        assert_eq!(axis.allowed, axis.current);
        assert_eq!(host.0, ["normalize:X:9:21"]);
    }

    fn axis_entry(handle: u64, caption: &str, linked_secondary: Option<u64>) -> DiagramAxisEntry {
        DiagramAxisEntry {
            handle: SelectedAxisHandle(handle),
            caption: caption.to_owned(),
            linked_secondary: linked_secondary.map(SelectedAxisHandle),
        }
    }

    #[test]
    fn diagram_range_reset_visits_all_axes_and_linked_y_axes_in_order() {
        let systems = [CoordinateSystemAxes {
            owner: AxisOwnerHandle(1),
            x_axes: vec![axis_entry(10, "Time", None)],
            y_axes: vec![axis_entry(20, "Voltage", Some(21))],
        }];
        let mut host = RangeResetHost::default();

        reset_diagram_axis_ranges(&systems, true, true, None, &mut host);

        assert_eq!(
            host.0,
            [
                "axis:10:true",
                "axis:20:true",
                "axis:21:true",
                "proportions:1",
                "layout",
                "repaint",
            ]
        );
    }

    #[test]
    fn caption_filter_includes_linked_axis_only_when_primary_matches() {
        let systems = [CoordinateSystemAxes {
            owner: AxisOwnerHandle(2),
            x_axes: vec![axis_entry(30, "Input Voltage", None)],
            y_axes: vec![
                axis_entry(40, "Output Voltage", Some(41)),
                axis_entry(50, "Current", Some(51)),
            ],
        }];
        let mut host = RangeResetHost::default();

        reset_diagram_axis_ranges(&systems, false, false, Some("Voltage"), &mut host);

        assert_eq!(
            host.0,
            [
                "axis:30:false",
                "axis:40:false",
                "axis:41:false",
                "proportions:2",
            ]
        );
    }

    #[test]
    fn empty_diagram_can_still_run_requested_final_redraw() {
        let mut host = RangeResetHost::default();

        reset_diagram_axis_ranges(&[], false, true, None, &mut host);

        assert_eq!(host.0, ["layout", "repaint"]);
    }
}
