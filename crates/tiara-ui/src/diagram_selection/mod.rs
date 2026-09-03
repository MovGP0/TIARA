//! Typed diagram-selection collection and category classification.

pub const AXIS_CATEGORY: u8 = 0x01;
pub const CURVE_CATEGORY: u8 = 0x02;
pub const TAIL_OBJECT_CATEGORY: u8 = 0x04;
pub const SECONDARY_COLLECTION_CATEGORY: u8 = 0x08;
pub const DIRECT_OBJECT_CATEGORY: u8 = 0x10;

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct DiagramMemberHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct GraphViewHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct DiagramLayoutHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CoordinateSystemDisplayWindow {
    pub start: i32,
    pub visible_y_axis_span: i32,
}

pub trait CoordinateSystemSelection {
    fn select_all_draw_elements(&mut self, graph_view: GraphViewHandle);
}

pub trait DiagramObjectZoomPreparation {
    fn prepare_for_rectangle_zoom(&mut self, graph_view: GraphViewHandle);
}

pub trait CoordinateSystemZoomPreparation {
    fn prepare_for_rectangle_zoom(&mut self, graph_view: GraphViewHandle);
}

pub trait CoordinateSystemVerticalShift {
    fn shift_displayed_y_axis_window_up(
        &mut self,
        graph_view: GraphViewHandle,
        layout: DiagramLayoutHandle,
    ) -> bool;

    fn shift_displayed_y_axis_window_down(
        &mut self,
        graph_view: GraphViewHandle,
        layout: DiagramLayoutHandle,
    ) -> bool;
}

pub trait DiagramCursorRedraw {
    fn redraw(&mut self, graph_view: GraphViewHandle);
}

pub trait DiagramLayoutRefresh {
    fn recalculate_layout(&mut self);
    fn repaint(&mut self);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct SelectableDiagramMember {
    pub handle: DiagramMemberHandle,
    pub selected: bool,
    pub category_mask: u8,
}

/// Implements Ghidra function `FUN_01acff30` at `0x01ACFF30`.
///
/// Clears the caller-owned result, adds every selected member in source order,
/// and returns the bitwise union of their category values. Exact mask checks can
/// therefore distinguish a pure category from a mixed selection.
pub fn collect_selected_diagram_members(
    source_members: &[SelectableDiagramMember],
    selected_members: &mut Vec<DiagramMemberHandle>,
) -> u8 {
    selected_members.clear();
    source_members
        .iter()
        .filter(|member| member.selected)
        .fold(0, |mask, member| {
            selected_members.push(member.handle);
            mask | member.category_mask
        })
}

/// Implements Ghidra function `FUN_01ad0aa0` at `0x01AD0AA0`.
///
/// Applies draw-element select-all to each coordinate system in collection
/// order. An empty collection performs no work.
pub fn select_all_coordinate_system_elements(
    coordinate_systems: &mut [impl CoordinateSystemSelection],
    graph_view: GraphViewHandle,
) {
    for coordinate_system in coordinate_systems {
        coordinate_system.select_all_draw_elements(graph_view);
    }
}

/// Implements Ghidra function `FUN_01ad0ba0` at `0x01AD0BA0`.
///
/// Dispatches pre-zoom canvas preparation to every drawing object and then to
/// every coordinate system. Empty collections perform no work.
pub fn prepare_graph_for_rectangle_zoom(
    drawing_objects: &mut [impl DiagramObjectZoomPreparation],
    coordinate_systems: &mut [impl CoordinateSystemZoomPreparation],
    graph_view: GraphViewHandle,
) {
    for drawing_object in drawing_objects {
        drawing_object.prepare_for_rectangle_zoom(graph_view);
    }
    for coordinate_system in coordinate_systems {
        coordinate_system.prepare_for_rectangle_zoom(graph_view);
    }
}

/// Implements Ghidra function `FUN_01ad1480` at `0x01AD1480`.
///
/// Attempts one upward displayed-Y-axis-window step on every coordinate system.
/// If at least one system changes, redraws each available diagram cursor in
/// slot order. An empty collection or an all-boundary result does not redraw
/// the cursors.
pub fn shift_all_coordinate_systems_up(
    coordinate_systems: &mut [impl CoordinateSystemVerticalShift],
    graph_view: GraphViewHandle,
    layout: DiagramLayoutHandle,
    cursors: &mut [Option<&mut dyn DiagramCursorRedraw>; 2],
) {
    let mut changed = false;
    for coordinate_system in coordinate_systems {
        changed |= coordinate_system.shift_displayed_y_axis_window_up(graph_view, layout);
    }

    if changed {
        for cursor in cursors.iter_mut().flatten() {
            cursor.redraw(graph_view);
        }
    }
}

/// Implements Ghidra function `FUN_01ad1550` at `0x01AD1550`.
///
/// Attempts one downward displayed-Y-axis-window step on every coordinate
/// system. If at least one system changes, redraws each available diagram
/// cursor in slot order. An empty collection or an all-boundary result does not
/// redraw the cursors.
pub fn shift_all_coordinate_systems_down(
    coordinate_systems: &mut [impl CoordinateSystemVerticalShift],
    graph_view: GraphViewHandle,
    layout: DiagramLayoutHandle,
    cursors: &mut [Option<&mut dyn DiagramCursorRedraw>; 2],
) {
    let mut changed = false;
    for coordinate_system in coordinate_systems {
        changed |= coordinate_system.shift_displayed_y_axis_window_down(graph_view, layout);
    }

    if changed {
        for cursor in cursors.iter_mut().flatten() {
            cursor.redraw(graph_view);
        }
    }
}

/// Implements Ghidra function `FUN_01ad1620` at `0x01AD1620`.
///
/// Increases the visible Y-axis span of every coordinate system by one. It
/// then recalculates and repaints the full diagram, including when the
/// collection is empty. This operation does not impose a local upper bound.
pub fn increase_all_visible_y_axis_spans(
    coordinate_systems: &mut [CoordinateSystemDisplayWindow],
    diagram: &mut impl DiagramLayoutRefresh,
) {
    for coordinate_system in coordinate_systems {
        coordinate_system.visible_y_axis_span += 1;
    }

    diagram.recalculate_layout();
    diagram.repaint();
}

/// Implements Ghidra function `FUN_01ad16a0` at `0x01AD16A0`.
///
/// Decreases every coordinate system's visible Y-axis span by one, with a
/// minimum span of two. It then recalculates and repaints the full diagram,
/// even when every span is already at the minimum or the collection is empty.
pub fn decrease_all_visible_y_axis_spans(
    coordinate_systems: &mut [CoordinateSystemDisplayWindow],
    diagram: &mut impl DiagramLayoutRefresh,
) {
    for coordinate_system in coordinate_systems {
        coordinate_system.visible_y_axis_span = (coordinate_system.visible_y_axis_span - 1).max(2);
    }

    diagram.recalculate_layout();
    diagram.repaint();
}

#[cfg(test)]
mod tests {
    use std::cell::RefCell;
    use std::rc::Rc;

    use super::{
        AXIS_CATEGORY, CURVE_CATEGORY, CoordinateSystemDisplayWindow, CoordinateSystemSelection,
        CoordinateSystemVerticalShift, CoordinateSystemZoomPreparation, DIRECT_OBJECT_CATEGORY,
        DiagramCursorRedraw, DiagramLayoutHandle, DiagramLayoutRefresh, DiagramMemberHandle,
        DiagramObjectZoomPreparation, GraphViewHandle, SelectableDiagramMember,
        collect_selected_diagram_members, decrease_all_visible_y_axis_spans,
        increase_all_visible_y_axis_spans, prepare_graph_for_rectangle_zoom,
        select_all_coordinate_system_elements, shift_all_coordinate_systems_down,
        shift_all_coordinate_systems_up,
    };

    #[derive(Default)]
    struct CoordinateSystem {
        calls: Vec<GraphViewHandle>,
    }

    impl CoordinateSystemSelection for CoordinateSystem {
        fn select_all_draw_elements(&mut self, graph_view: GraphViewHandle) {
            self.calls.push(graph_view);
        }
    }

    struct ShiftableCoordinateSystem {
        name: &'static str,
        changed: bool,
        calls: Rc<RefCell<Vec<String>>>,
    }

    impl CoordinateSystemVerticalShift for ShiftableCoordinateSystem {
        fn shift_displayed_y_axis_window_up(
            &mut self,
            graph_view: GraphViewHandle,
            layout: DiagramLayoutHandle,
        ) -> bool {
            self.calls
                .borrow_mut()
                .push(format!("shift:{}:{}:{}", self.name, graph_view.0, layout.0));
            self.changed
        }

        fn shift_displayed_y_axis_window_down(
            &mut self,
            graph_view: GraphViewHandle,
            layout: DiagramLayoutHandle,
        ) -> bool {
            self.calls.borrow_mut().push(format!(
                "shift-down:{}:{}:{}",
                self.name, graph_view.0, layout.0
            ));
            self.changed
        }
    }

    struct Cursor {
        name: &'static str,
        calls: Rc<RefCell<Vec<String>>>,
    }

    impl DiagramCursorRedraw for Cursor {
        fn redraw(&mut self, graph_view: GraphViewHandle) {
            self.calls
                .borrow_mut()
                .push(format!("redraw:{}:{}", self.name, graph_view.0));
        }
    }

    #[derive(Default)]
    struct LayoutRefresh {
        calls: Vec<&'static str>,
    }

    impl DiagramLayoutRefresh for LayoutRefresh {
        fn recalculate_layout(&mut self) {
            self.calls.push("layout");
        }

        fn repaint(&mut self) {
            self.calls.push("repaint");
        }
    }

    struct ZoomParticipant {
        name: &'static str,
        calls: Rc<RefCell<Vec<(&'static str, GraphViewHandle)>>>,
    }

    impl DiagramObjectZoomPreparation for ZoomParticipant {
        fn prepare_for_rectangle_zoom(&mut self, graph_view: GraphViewHandle) {
            self.calls.borrow_mut().push((self.name, graph_view));
        }
    }

    impl CoordinateSystemZoomPreparation for ZoomParticipant {
        fn prepare_for_rectangle_zoom(&mut self, graph_view: GraphViewHandle) {
            self.calls.borrow_mut().push((self.name, graph_view));
        }
    }

    #[test]
    fn pure_curve_selection_replaces_the_result_and_returns_exact_curve_mask() {
        let members = [
            SelectableDiagramMember {
                handle: DiagramMemberHandle(1),
                selected: true,
                category_mask: CURVE_CATEGORY,
            },
            SelectableDiagramMember {
                handle: DiagramMemberHandle(2),
                selected: false,
                category_mask: AXIS_CATEGORY,
            },
            SelectableDiagramMember {
                handle: DiagramMemberHandle(3),
                selected: true,
                category_mask: CURVE_CATEGORY,
            },
        ];
        let mut selected = vec![DiagramMemberHandle(99)];

        let mask = collect_selected_diagram_members(&members, &mut selected);

        assert_eq!(mask, CURVE_CATEGORY);
        assert_eq!(selected, [DiagramMemberHandle(1), DiagramMemberHandle(3)]);
    }

    #[test]
    fn mixed_selection_preserves_source_order_and_combines_category_bits() {
        let members = [
            SelectableDiagramMember {
                handle: DiagramMemberHandle(7),
                selected: true,
                category_mask: DIRECT_OBJECT_CATEGORY,
            },
            SelectableDiagramMember {
                handle: DiagramMemberHandle(8),
                selected: true,
                category_mask: CURVE_CATEGORY,
            },
            SelectableDiagramMember {
                handle: DiagramMemberHandle(9),
                selected: true,
                category_mask: AXIS_CATEGORY,
            },
        ];
        let mut selected = Vec::new();

        let mask = collect_selected_diagram_members(&members, &mut selected);

        assert_eq!(
            mask,
            DIRECT_OBJECT_CATEGORY | CURVE_CATEGORY | AXIS_CATEGORY
        );
        assert_eq!(
            selected,
            [
                DiagramMemberHandle(7),
                DiagramMemberHandle(8),
                DiagramMemberHandle(9),
            ]
        );
    }

    #[test]
    fn select_all_visits_every_coordinate_system_and_empty_is_a_noop() {
        let view = GraphViewHandle(41);
        let mut systems = [CoordinateSystem::default(), CoordinateSystem::default()];

        select_all_coordinate_system_elements(&mut systems, view);

        assert_eq!(systems[0].calls, [view]);
        assert_eq!(systems[1].calls, [view]);
        let empty: &mut [CoordinateSystem] = &mut [];
        select_all_coordinate_system_elements(empty, view);
    }

    #[test]
    fn rectangle_zoom_prepares_objects_before_coordinate_systems() {
        let calls = Rc::new(RefCell::new(Vec::new()));
        let participant = |name| ZoomParticipant {
            name,
            calls: Rc::clone(&calls),
        };
        let mut objects = [participant("object-1"), participant("object-2")];
        let mut systems = [participant("system-1")];
        let view = GraphViewHandle(51);

        prepare_graph_for_rectangle_zoom(&mut objects, &mut systems, view);

        assert_eq!(
            calls.borrow().as_slice(),
            [("object-1", view), ("object-2", view), ("system-1", view)]
        );
    }

    #[test]
    fn upward_shift_visits_all_systems_and_redraws_available_cursors_after_any_change() {
        let calls = Rc::new(RefCell::new(Vec::new()));
        let system = |name, changed| ShiftableCoordinateSystem {
            name,
            changed,
            calls: Rc::clone(&calls),
        };
        let mut systems = [system("first", true), system("second", false)];
        let mut first_cursor = Cursor {
            name: "first",
            calls: Rc::clone(&calls),
        };
        let mut cursors: [Option<&mut dyn DiagramCursorRedraw>; 2] =
            [Some(&mut first_cursor), None];

        shift_all_coordinate_systems_up(
            &mut systems,
            GraphViewHandle(61),
            DiagramLayoutHandle(62),
            &mut cursors,
        );

        assert_eq!(
            calls.borrow().as_slice(),
            ["shift:first:61:62", "shift:second:61:62", "redraw:first:61"]
        );
    }

    #[test]
    fn upward_shift_skips_cursor_redraw_when_no_system_changes() {
        let calls = Rc::new(RefCell::new(Vec::new()));
        let mut systems = [ShiftableCoordinateSystem {
            name: "boundary",
            changed: false,
            calls: Rc::clone(&calls),
        }];
        let mut cursor = Cursor {
            name: "first",
            calls: Rc::clone(&calls),
        };
        let mut cursors: [Option<&mut dyn DiagramCursorRedraw>; 2] = [Some(&mut cursor), None];

        shift_all_coordinate_systems_up(
            &mut systems,
            GraphViewHandle(71),
            DiagramLayoutHandle(72),
            &mut cursors,
        );

        assert_eq!(calls.borrow().as_slice(), ["shift:boundary:71:72"]);
    }

    #[test]
    fn upward_shift_with_no_coordinate_systems_is_a_noop() {
        let systems: &mut [ShiftableCoordinateSystem] = &mut [];
        let mut cursors: [Option<&mut dyn DiagramCursorRedraw>; 2] = [None, None];

        shift_all_coordinate_systems_up(
            systems,
            GraphViewHandle(81),
            DiagramLayoutHandle(82),
            &mut cursors,
        );
    }

    #[test]
    fn downward_shift_visits_all_systems_and_redraws_both_cursors_after_any_change() {
        let calls = Rc::new(RefCell::new(Vec::new()));
        let system = |name, changed| ShiftableCoordinateSystem {
            name,
            changed,
            calls: Rc::clone(&calls),
        };
        let mut systems = [system("first", false), system("second", true)];
        let mut first_cursor = Cursor {
            name: "first",
            calls: Rc::clone(&calls),
        };
        let mut second_cursor = Cursor {
            name: "second",
            calls: Rc::clone(&calls),
        };
        let mut cursors: [Option<&mut dyn DiagramCursorRedraw>; 2] =
            [Some(&mut first_cursor), Some(&mut second_cursor)];

        shift_all_coordinate_systems_down(
            &mut systems,
            GraphViewHandle(91),
            DiagramLayoutHandle(92),
            &mut cursors,
        );

        assert_eq!(
            calls.borrow().as_slice(),
            [
                "shift-down:first:91:92",
                "shift-down:second:91:92",
                "redraw:first:91",
                "redraw:second:91",
            ]
        );
    }

    #[test]
    fn downward_shift_skips_cursor_redraw_at_all_boundaries() {
        let calls = Rc::new(RefCell::new(Vec::new()));
        let mut systems = [ShiftableCoordinateSystem {
            name: "boundary",
            changed: false,
            calls: Rc::clone(&calls),
        }];
        let mut cursor = Cursor {
            name: "first",
            calls: Rc::clone(&calls),
        };
        let mut cursors: [Option<&mut dyn DiagramCursorRedraw>; 2] = [Some(&mut cursor), None];

        shift_all_coordinate_systems_down(
            &mut systems,
            GraphViewHandle(101),
            DiagramLayoutHandle(102),
            &mut cursors,
        );

        assert_eq!(calls.borrow().as_slice(), ["shift-down:boundary:101:102"]);
    }

    #[test]
    fn visible_y_axis_span_increase_updates_every_system_then_refreshes_diagram() {
        let mut systems = [
            CoordinateSystemDisplayWindow {
                start: 2,
                visible_y_axis_span: 3,
            },
            CoordinateSystemDisplayWindow {
                start: 0,
                visible_y_axis_span: 8,
            },
        ];
        let mut diagram = LayoutRefresh::default();

        increase_all_visible_y_axis_spans(&mut systems, &mut diagram);

        assert_eq!(systems[0].visible_y_axis_span, 4);
        assert_eq!(systems[1].visible_y_axis_span, 9);
        assert_eq!(systems[0].start, 2);
        assert_eq!(systems[1].start, 0);
        assert_eq!(diagram.calls, ["layout", "repaint"]);
    }

    #[test]
    fn visible_y_axis_span_increase_refreshes_an_empty_diagram() {
        let systems: &mut [CoordinateSystemDisplayWindow] = &mut [];
        let mut diagram = LayoutRefresh::default();

        increase_all_visible_y_axis_spans(systems, &mut diagram);

        assert_eq!(diagram.calls, ["layout", "repaint"]);
    }

    #[test]
    fn visible_y_axis_span_decrease_clamps_each_system_to_two_then_refreshes() {
        let mut systems = [
            CoordinateSystemDisplayWindow {
                start: 3,
                visible_y_axis_span: 5,
            },
            CoordinateSystemDisplayWindow {
                start: 1,
                visible_y_axis_span: 2,
            },
        ];
        let mut diagram = LayoutRefresh::default();

        decrease_all_visible_y_axis_spans(&mut systems, &mut diagram);

        assert_eq!(systems[0].visible_y_axis_span, 4);
        assert_eq!(systems[1].visible_y_axis_span, 2);
        assert_eq!(systems[0].start, 3);
        assert_eq!(systems[1].start, 1);
        assert_eq!(diagram.calls, ["layout", "repaint"]);
    }

    #[test]
    fn visible_y_axis_span_decrease_refreshes_an_empty_diagram() {
        let systems: &mut [CoordinateSystemDisplayWindow] = &mut [];
        let mut diagram = LayoutRefresh::default();

        decrease_all_visible_y_axis_spans(systems, &mut diagram);

        assert_eq!(diagram.calls, ["layout", "repaint"]);
    }
}
