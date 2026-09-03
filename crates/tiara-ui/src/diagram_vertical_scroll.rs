//! Vertical diagram-axis scroll coordination.

use std::time::Duration;

const AXIS_SELECTION: u8 = 1;
const CURVE_SELECTION: u8 = 2;
const DEFERRED_REFRESH_DELAY: Duration = Duration::from_millis(500);

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct VerticalScrollMemberHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct VerticalScrollCoordinateSystemHandle(pub u64);

pub trait DiagramVerticalScrollHost {
    fn axis_orientation(&mut self, axis: VerticalScrollMemberHandle) -> Option<u8>;
    fn sole_y_axis(
        &mut self,
    ) -> Option<(
        VerticalScrollCoordinateSystemHandle,
        VerticalScrollMemberHandle,
        Option<VerticalScrollMemberHandle>,
    )>;
    fn curve_y_axis(
        &mut self,
        curve: VerticalScrollMemberHandle,
    ) -> Option<(
        VerticalScrollCoordinateSystemHandle,
        VerticalScrollMemberHandle,
    )>;
    fn coordinate_system_for_member(
        &mut self,
        member: VerticalScrollMemberHandle,
    ) -> Option<VerticalScrollCoordinateSystemHandle>;
    fn cursor_members(&mut self) -> [Option<VerticalScrollMemberHandle>; 2];
    fn scroll_axis_up(&mut self, axis: VerticalScrollMemberHandle);
    fn scroll_axis_down(&mut self, axis: VerticalScrollMemberHandle);
    fn queue_refresh(&mut self, member: VerticalScrollMemberHandle);
    fn redraw_first_grid(&mut self, coordinate_system: VerticalScrollCoordinateSystemHandle);
    fn restart_deferred_refresh(&mut self, delay: Duration);
}

/// Implements Ghidra function `FUN_01ae31b0` at `0x01AE31B0`.
///
/// Selects one applicable Y axis from an axis, curve, or empty selection and
/// applies one upward range scroll. The sole-axis path also scrolls a linked
/// secondary Y axis when present. It queues affected axes and cursors, redraws
/// the first owner grid, and restarts the Iced-facing 500 ms deferred refresh
/// after every request, including requests that do not move a range.
pub fn scroll_diagram_up(
    selection_category: u8,
    selected: &[VerticalScrollMemberHandle],
    host: &mut impl DiagramVerticalScrollHost,
) -> Option<VerticalScrollMemberHandle> {
    scroll_diagram(
        selection_category,
        selected,
        VerticalScrollDirection::Up,
        host,
    )
}

/// Implements Ghidra function `FUN_01ae35c0` at `0x01AE35C0`.
///
/// Selects one applicable Y axis and applies one downward range scroll. It
/// shares the axis, curve, sole-axis, linked-axis, queue, grid, and 500 ms
/// Iced-facing timer coordination with [`scroll_diagram_up`].
pub fn scroll_diagram_down(
    selection_category: u8,
    selected: &[VerticalScrollMemberHandle],
    host: &mut impl DiagramVerticalScrollHost,
) -> Option<VerticalScrollMemberHandle> {
    scroll_diagram(
        selection_category,
        selected,
        VerticalScrollDirection::Down,
        host,
    )
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum VerticalScrollDirection {
    Up,
    Down,
}

fn scroll_diagram(
    selection_category: u8,
    selected: &[VerticalScrollMemberHandle],
    direction: VerticalScrollDirection,
    host: &mut impl DiagramVerticalScrollHost,
) -> Option<VerticalScrollMemberHandle> {
    let first = selected.first().copied();
    let mut coordinate_system = None;
    let mut linked_axis = None;
    let target_axis = match selection_category {
        AXIS_SELECTION => first.filter(|axis| {
            host.axis_orientation(*axis)
                .is_some_and(is_vertical_orientation)
        }),
        CURVE_SELECTION => first.and_then(|curve| {
            let (owner, axis) = host.curve_y_axis(curve)?;
            coordinate_system = Some(owner);
            Some(axis)
        }),
        0 => host.sole_y_axis().map(|(owner, axis, linked)| {
            coordinate_system = Some(owner);
            linked_axis = linked;
            for cursor in host.cursor_members().into_iter().flatten() {
                host.queue_refresh(cursor);
            }
            axis
        }),
        _ => None,
    };

    if let Some(axis) = target_axis {
        scroll_axis(direction, axis, host);
        host.queue_refresh(axis);
    } else if selection_category == AXIS_SELECTION
        && let Some(axis) = first
    {
        host.queue_refresh(axis);
    }
    if let Some(axis) = linked_axis {
        scroll_axis(direction, axis, host);
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

fn scroll_axis(
    direction: VerticalScrollDirection,
    axis: VerticalScrollMemberHandle,
    host: &mut impl DiagramVerticalScrollHost,
) {
    match direction {
        VerticalScrollDirection::Up => host.scroll_axis_up(axis),
        VerticalScrollDirection::Down => host.scroll_axis_down(axis),
    }
}

const fn is_vertical_orientation(orientation: u8) -> bool {
    matches!(orientation, 1 | 2 | 5 | 7)
}

#[cfg(test)]
mod tests {
    use super::{
        DiagramVerticalScrollHost, VerticalScrollCoordinateSystemHandle,
        VerticalScrollMemberHandle, scroll_diagram_down, scroll_diagram_up,
    };
    use std::time::Duration;

    type SoleAxis = (
        VerticalScrollCoordinateSystemHandle,
        VerticalScrollMemberHandle,
        Option<VerticalScrollMemberHandle>,
    );

    struct Host {
        orientation: Option<u8>,
        sole: Option<SoleAxis>,
        curve: Option<(
            VerticalScrollCoordinateSystemHandle,
            VerticalScrollMemberHandle,
        )>,
        owner: Option<VerticalScrollCoordinateSystemHandle>,
        cursors: [Option<VerticalScrollMemberHandle>; 2],
        events: Vec<String>,
    }

    impl DiagramVerticalScrollHost for Host {
        fn axis_orientation(&mut self, axis: VerticalScrollMemberHandle) -> Option<u8> {
            self.events.push(format!("orientation:{}", axis.0));
            self.orientation
        }

        fn sole_y_axis(&mut self) -> Option<SoleAxis> {
            self.events.push("sole".to_owned());
            self.sole
        }

        fn curve_y_axis(
            &mut self,
            curve: VerticalScrollMemberHandle,
        ) -> Option<(
            VerticalScrollCoordinateSystemHandle,
            VerticalScrollMemberHandle,
        )> {
            self.events.push(format!("curve:{}", curve.0));
            self.curve
        }

        fn coordinate_system_for_member(
            &mut self,
            member: VerticalScrollMemberHandle,
        ) -> Option<VerticalScrollCoordinateSystemHandle> {
            self.events.push(format!("owner:{}", member.0));
            self.owner
        }

        fn cursor_members(&mut self) -> [Option<VerticalScrollMemberHandle>; 2] {
            self.events.push("cursors".to_owned());
            self.cursors
        }

        fn scroll_axis_up(&mut self, axis: VerticalScrollMemberHandle) {
            self.events.push(format!("up:{}", axis.0));
        }

        fn scroll_axis_down(&mut self, axis: VerticalScrollMemberHandle) {
            self.events.push(format!("down:{}", axis.0));
        }

        fn queue_refresh(&mut self, member: VerticalScrollMemberHandle) {
            self.events.push(format!("queue:{}", member.0));
        }

        fn redraw_first_grid(&mut self, coordinate_system: VerticalScrollCoordinateSystemHandle) {
            self.events.push(format!("grid:{}", coordinate_system.0));
        }

        fn restart_deferred_refresh(&mut self, delay: Duration) {
            self.events.push(format!("timer:{}", delay.as_millis()));
        }
    }

    fn host() -> Host {
        Host {
            orientation: Some(1),
            sole: None,
            curve: None,
            owner: Some(VerticalScrollCoordinateSystemHandle(9)),
            cursors: [None, None],
            events: Vec::new(),
        }
    }

    #[test]
    fn selected_vertical_axis_scrolls_and_refreshes_owner() {
        let mut host = host();

        assert_eq!(
            scroll_diagram_up(1, &[VerticalScrollMemberHandle(3)], &mut host),
            Some(VerticalScrollMemberHandle(3))
        );
        assert_eq!(
            host.events,
            [
                "orientation:3",
                "up:3",
                "queue:3",
                "owner:3",
                "grid:9",
                "timer:500",
            ]
        );
    }

    #[test]
    fn sole_axis_path_scrolls_primary_and_linked_axes() {
        let mut host = host();
        host.sole = Some((
            VerticalScrollCoordinateSystemHandle(5),
            VerticalScrollMemberHandle(6),
            Some(VerticalScrollMemberHandle(8)),
        ));
        host.cursors = [Some(VerticalScrollMemberHandle(7)), None];

        assert_eq!(
            scroll_diagram_up(0, &[], &mut host),
            Some(VerticalScrollMemberHandle(6))
        );
        assert_eq!(
            host.events,
            [
                "sole",
                "cursors",
                "queue:7",
                "up:6",
                "queue:6",
                "up:8",
                "queue:8",
                "grid:5",
                "timer:500",
            ]
        );
    }

    #[test]
    fn curve_path_uses_resolved_y_axis() {
        let mut host = host();
        host.curve = Some((
            VerticalScrollCoordinateSystemHandle(4),
            VerticalScrollMemberHandle(8),
        ));

        assert_eq!(
            scroll_diagram_up(2, &[VerticalScrollMemberHandle(2)], &mut host),
            Some(VerticalScrollMemberHandle(8))
        );
        assert_eq!(
            host.events,
            ["curve:2", "up:8", "queue:8", "grid:4", "timer:500"]
        );
    }

    #[test]
    fn horizontal_axis_is_only_queued_before_common_refresh() {
        let mut host = host();
        host.orientation = Some(0);

        assert_eq!(
            scroll_diagram_up(1, &[VerticalScrollMemberHandle(3)], &mut host),
            None
        );
        assert_eq!(
            host.events,
            ["orientation:3", "queue:3", "owner:3", "grid:9", "timer:500",]
        );
    }

    #[test]
    fn down_scroll_reuses_primary_linked_and_common_refresh_coordination() {
        let mut host = host();
        host.sole = Some((
            VerticalScrollCoordinateSystemHandle(5),
            VerticalScrollMemberHandle(6),
            Some(VerticalScrollMemberHandle(8)),
        ));

        assert_eq!(
            scroll_diagram_down(0, &[], &mut host),
            Some(VerticalScrollMemberHandle(6))
        );
        assert!(host.events.iter().any(|event| event == "down:6"));
        assert!(host.events.iter().any(|event| event == "down:8"));
        assert!(!host.events.iter().any(|event| event.starts_with("up:")));
        assert_eq!(host.events.last().map(String::as_str), Some("timer:500"));
    }
}
