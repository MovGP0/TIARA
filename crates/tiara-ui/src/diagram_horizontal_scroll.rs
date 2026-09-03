//! Horizontal diagram-axis scroll coordination.

use std::time::Duration;

const AXIS_SELECTION: u8 = 1;
const CURVE_SELECTION: u8 = 2;
const DEFERRED_REFRESH_DELAY: Duration = Duration::from_millis(500);

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct ScrollMemberHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct ScrollCoordinateSystemHandle(pub u64);

pub trait DiagramHorizontalScrollHost {
    fn axis_orientation(&mut self, axis: ScrollMemberHandle) -> Option<u8>;
    fn sole_x_axis(&mut self) -> Option<(ScrollCoordinateSystemHandle, ScrollMemberHandle)>;
    fn curve_x_axis(
        &mut self,
        curve: ScrollMemberHandle,
    ) -> Option<(ScrollCoordinateSystemHandle, ScrollMemberHandle)>;
    fn coordinate_system_for_member(
        &mut self,
        member: ScrollMemberHandle,
    ) -> Option<ScrollCoordinateSystemHandle>;
    fn cursor_members(&mut self) -> [Option<ScrollMemberHandle>; 2];
    fn scroll_axis_left(&mut self, axis: ScrollMemberHandle);
    fn scroll_axis_right(&mut self, axis: ScrollMemberHandle);
    fn queue_refresh(&mut self, member: ScrollMemberHandle);
    fn redraw_first_grid(&mut self, coordinate_system: ScrollCoordinateSystemHandle);
    fn restart_deferred_refresh(&mut self, delay: Duration);
}

/// Implements Ghidra function `FUN_01ae2ab0` at `0x01AE2AB0`.
///
/// Selects one applicable X axis from an axis, curve, or empty selection and
/// applies one left-scroll operation. It queues the affected members, redraws
/// the first grid when an owning coordinate system is available, and restarts
/// the Iced-facing deferred refresh for 500 ms after every request. Mixed or
/// unsupported selections do not move an axis but still restart the timer.
pub fn scroll_diagram_left(
    selection_category: u8,
    selected: &[ScrollMemberHandle],
    host: &mut impl DiagramHorizontalScrollHost,
) -> Option<ScrollMemberHandle> {
    scroll_diagram(
        selection_category,
        selected,
        HorizontalScrollDirection::Left,
        host,
    )
}

/// Implements Ghidra function `FUN_01ae2e30` at `0x01AE2E30`.
///
/// Selects one applicable X axis from an axis, curve, or empty selection and
/// applies one right-scroll operation. Queueing, grid redraw, unsupported
/// selection behavior, and the 500 ms Iced-facing deferred refresh are shared
/// with [`scroll_diagram_left`].
pub fn scroll_diagram_right(
    selection_category: u8,
    selected: &[ScrollMemberHandle],
    host: &mut impl DiagramHorizontalScrollHost,
) -> Option<ScrollMemberHandle> {
    scroll_diagram(
        selection_category,
        selected,
        HorizontalScrollDirection::Right,
        host,
    )
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum HorizontalScrollDirection {
    Left,
    Right,
}

fn scroll_diagram(
    selection_category: u8,
    selected: &[ScrollMemberHandle],
    direction: HorizontalScrollDirection,
    host: &mut impl DiagramHorizontalScrollHost,
) -> Option<ScrollMemberHandle> {
    let first = selected.first().copied();
    let mut coordinate_system = None;
    let target_axis = match selection_category {
        AXIS_SELECTION => first.filter(|axis| {
            host.axis_orientation(*axis)
                .is_some_and(is_horizontal_orientation)
        }),
        CURVE_SELECTION => first.and_then(|curve| {
            let (owner, axis) = host.curve_x_axis(curve)?;
            coordinate_system = Some(owner);
            Some(axis)
        }),
        0 => host.sole_x_axis().map(|(owner, axis)| {
            coordinate_system = Some(owner);
            for cursor in host.cursor_members().into_iter().flatten() {
                host.queue_refresh(cursor);
            }
            axis
        }),
        _ => None,
    };

    if let Some(axis) = target_axis {
        match direction {
            HorizontalScrollDirection::Left => host.scroll_axis_left(axis),
            HorizontalScrollDirection::Right => host.scroll_axis_right(axis),
        }
        host.queue_refresh(axis);
    } else if selection_category == AXIS_SELECTION
        && let Some(axis) = first
    {
        host.queue_refresh(axis);
    }

    if coordinate_system.is_none()
        && let Some(member) = first
    {
        coordinate_system = host.coordinate_system_for_member(member);
    }
    if let Some(owner) = coordinate_system {
        host.redraw_first_grid(owner);
    }

    host.restart_deferred_refresh(DEFERRED_REFRESH_DELAY);
    target_axis
}

const fn is_horizontal_orientation(orientation: u8) -> bool {
    matches!(orientation, 0 | 4 | 6)
}

#[cfg(test)]
mod tests {
    use super::{
        DiagramHorizontalScrollHost, ScrollCoordinateSystemHandle, ScrollMemberHandle,
        scroll_diagram_left, scroll_diagram_right,
    };
    use std::time::Duration;

    struct Host {
        orientation: Option<u8>,
        sole: Option<(ScrollCoordinateSystemHandle, ScrollMemberHandle)>,
        curve: Option<(ScrollCoordinateSystemHandle, ScrollMemberHandle)>,
        resolved_owner: Option<ScrollCoordinateSystemHandle>,
        cursors: [Option<ScrollMemberHandle>; 2],
        events: Vec<String>,
    }

    impl DiagramHorizontalScrollHost for Host {
        fn axis_orientation(&mut self, axis: ScrollMemberHandle) -> Option<u8> {
            self.events.push(format!("orientation:{}", axis.0));
            self.orientation
        }

        fn sole_x_axis(&mut self) -> Option<(ScrollCoordinateSystemHandle, ScrollMemberHandle)> {
            self.events.push("sole".to_owned());
            self.sole
        }

        fn curve_x_axis(
            &mut self,
            curve: ScrollMemberHandle,
        ) -> Option<(ScrollCoordinateSystemHandle, ScrollMemberHandle)> {
            self.events.push(format!("curve:{}", curve.0));
            self.curve
        }

        fn coordinate_system_for_member(
            &mut self,
            member: ScrollMemberHandle,
        ) -> Option<ScrollCoordinateSystemHandle> {
            self.events.push(format!("owner:{}", member.0));
            self.resolved_owner
        }

        fn cursor_members(&mut self) -> [Option<ScrollMemberHandle>; 2] {
            self.events.push("cursors".to_owned());
            self.cursors
        }

        fn scroll_axis_left(&mut self, axis: ScrollMemberHandle) {
            self.events.push(format!("scroll:{}", axis.0));
        }

        fn scroll_axis_right(&mut self, axis: ScrollMemberHandle) {
            self.events.push(format!("right:{}", axis.0));
        }

        fn queue_refresh(&mut self, member: ScrollMemberHandle) {
            self.events.push(format!("queue:{}", member.0));
        }

        fn redraw_first_grid(&mut self, coordinate_system: ScrollCoordinateSystemHandle) {
            self.events.push(format!("grid:{}", coordinate_system.0));
        }

        fn restart_deferred_refresh(&mut self, delay: Duration) {
            self.events.push(format!("timer:{}", delay.as_millis()));
        }
    }

    fn host() -> Host {
        Host {
            orientation: Some(0),
            sole: None,
            curve: None,
            resolved_owner: Some(ScrollCoordinateSystemHandle(9)),
            cursors: [None, None],
            events: Vec::new(),
        }
    }

    #[test]
    fn selected_horizontal_axis_scrolls_queues_redraws_and_restarts_timer() {
        let mut host = host();

        assert_eq!(
            scroll_diagram_left(1, &[ScrollMemberHandle(3)], &mut host),
            Some(ScrollMemberHandle(3))
        );
        assert_eq!(
            host.events,
            [
                "orientation:3",
                "scroll:3",
                "queue:3",
                "owner:3",
                "grid:9",
                "timer:500",
            ]
        );
    }

    #[test]
    fn sole_axis_path_queues_existing_cursors_and_axis() {
        let mut host = host();
        host.sole = Some((ScrollCoordinateSystemHandle(5), ScrollMemberHandle(6)));
        host.cursors = [Some(ScrollMemberHandle(7)), None];

        assert_eq!(
            scroll_diagram_left(0, &[], &mut host),
            Some(ScrollMemberHandle(6))
        );
        assert_eq!(
            host.events,
            [
                "sole",
                "cursors",
                "queue:7",
                "scroll:6",
                "queue:6",
                "grid:5",
                "timer:500",
            ]
        );
    }

    #[test]
    fn curve_path_uses_resolved_x_axis_and_owner() {
        let mut host = host();
        host.curve = Some((ScrollCoordinateSystemHandle(4), ScrollMemberHandle(8)));

        assert_eq!(
            scroll_diagram_left(2, &[ScrollMemberHandle(2)], &mut host),
            Some(ScrollMemberHandle(8))
        );
        assert_eq!(
            host.events,
            ["curve:2", "scroll:8", "queue:8", "grid:4", "timer:500"]
        );
    }

    #[test]
    fn unsupported_or_vertical_selection_only_resolves_owner_and_restarts_timer() {
        let mut vertical = host();
        vertical.orientation = Some(1);
        let mut mixed = host();

        assert_eq!(
            scroll_diagram_left(1, &[ScrollMemberHandle(3)], &mut vertical),
            None
        );
        assert_eq!(
            vertical.events,
            ["orientation:3", "queue:3", "owner:3", "grid:9", "timer:500",]
        );

        assert_eq!(
            scroll_diagram_left(7, &[ScrollMemberHandle(2)], &mut mixed),
            None
        );
        assert_eq!(mixed.events.last().map(String::as_str), Some("timer:500"));
        assert!(
            !mixed
                .events
                .iter()
                .any(|event| event.starts_with("scroll:"))
        );
    }

    #[test]
    fn right_scroll_reuses_target_queue_grid_and_timer_coordination() {
        let mut host = host();

        assert_eq!(
            scroll_diagram_right(1, &[ScrollMemberHandle(3)], &mut host),
            Some(ScrollMemberHandle(3))
        );
        assert_eq!(
            host.events,
            [
                "orientation:3",
                "right:3",
                "queue:3",
                "owner:3",
                "grid:9",
                "timer:500",
            ]
        );
    }
}
