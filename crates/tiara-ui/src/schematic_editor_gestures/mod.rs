//! Iced state for the recovered Schematic Editor touch gestures.
//!
//! The canvas handles two gestures: a pinch that zooms, and a one-finger drag
//! that either pans the sheet or is handed straight to the ordinary mouse
//! handlers. Which of the two a drag becomes is decided once, when the finger
//! goes down, from whatever is under it.

/// The form the recovered handlers belong to.
pub const FORM_RESOURCE: &str = "SchematicEditor";

/// The recovered gesture message for a pinch.
pub const ZOOM_GESTURE: u16 = 0x0103;

/// The recovered gesture message for a one-finger drag.
pub const PAN_GESTURE: u16 = 0x0104;

/// The gesture flag that marks the first event of a gesture.
pub const GESTURE_BEGIN: u8 = 0x01;

/// The gesture flag that marks the last event of a gesture.
pub const GESTURE_END: u8 = 0x04;

/// The largest zoom a pinch may reach.
pub const MAXIMUM_PINCH_ZOOM: f64 = 10.0;

/// The smallest zoom a pinch may reach.
pub const MINIMUM_PINCH_ZOOM: f64 = 0.1;

/// A point in the canvas's own coordinates.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct Point {
    pub x: i32,
    pub y: i32,
}

/// Decides what a pinch's new preview scale should be.
///
/// Part of Ghidra function `FUN_01c6e1e0` at `0x01C6E1E0`.
///
/// The ratio is taken against the distance the pinch *started* at rather than
/// the previous event, so the preview follows the fingers absolutely and a
/// pinch that returns to where it began returns to the original scale.
///
/// The limits are checked against the scale the pinch would leave the canvas
/// at, not against the ratio, which is why a canvas already near a limit
/// accepts only a small further pinch.
///
/// Returns `None` when the new scale would pass a limit, in which case the
/// preview keeps the scale it had.
#[must_use]
pub fn pinch_scale(start_distance: i32, current_distance: i32, canvas_zoom: f64) -> Option<f64> {
    if start_distance == 0 {
        return None;
    }

    let ratio = f64::from(current_distance) / f64::from(start_distance);
    let projected = canvas_zoom * ratio;

    let widening = current_distance > start_distance;
    if widening && projected < MAXIMUM_PINCH_ZOOM {
        return Some(ratio);
    }
    if !widening && projected > MINIMUM_PINCH_ZOOM {
        return Some(ratio);
    }
    None
}

/// Clamps a pinch's final zoom the way the recovered handler does.
///
/// Part of Ghidra function `FUN_01c6e1e0` at `0x01C6E1E0`.
///
/// Widening clamps against the maximum and narrowing against the minimum, so a
/// pinch can always be undone by pinching back even from a clamped scale.
#[must_use]
pub fn settled_pinch_zoom(canvas_zoom: f64, ratio: f64, widening: bool) -> f64 {
    let projected = canvas_zoom * ratio;
    if widening {
        projected.min(MAXIMUM_PINCH_ZOOM)
    } else {
        projected.max(MINIMUM_PINCH_ZOOM)
    }
}

/// The midpoint a pinch settles on.
///
/// Part of Ghidra function `FUN_01c6e1e0` at `0x01C6E1E0`.
///
/// It is the midpoint of where the pinch *started* and where it ended, not the
/// current finger position, so a pinch that drifts across the sheet zooms about
/// the middle of its own travel.
#[must_use]
pub const fn pinch_centre(start: Point, end: Point) -> Point {
    Point {
        x: (start.x + end.x) / 2,
        y: (start.y + end.y) / 2,
    }
}

pub trait ZoomGestureHost {
    /// Records where the pinch started and how far apart the fingers were.
    fn begin_pinch(&mut self, at: Point, distance: i32);

    /// Captures the canvas into the preview bitmap and shows the overlay over
    /// it.
    fn show_preview(&mut self);

    /// The canvas's current zoom.
    fn canvas_zoom(&mut self) -> f64;

    /// The distance the pinch started at.
    fn start_distance(&mut self) -> i32;

    /// Records the preview's current scale.
    fn set_preview_scale(&mut self, scale: f64);

    /// The preview's current scale.
    fn preview_scale(&mut self) -> f64;

    /// Redraws the preview bitmap at one scale, centred in the overlay.
    fn redraw_preview(&mut self, scale: f64);

    /// Where the pinch started.
    fn start_point(&mut self) -> Point;

    /// Reports whether a point lies inside the canvas.
    fn inside_canvas(&mut self, at: Point) -> bool;

    /// Applies one zoom and re-centres the view on one point.
    fn apply_zoom(&mut self, zoom: f64, centre: Point);

    /// Repaints the schematic canvas.
    fn repaint_canvas(&mut self);

    /// Hides the overlay and frees the preview bitmap.
    fn end_preview(&mut self);
}

/// Implements part of Ghidra function `FUN_01c6e1e0` at `0x01C6E1E0`.
///
/// Handles the pinch half of `EditorPanel.SchEditBox.OnGesture`.
///
/// Zooms the canvas with a two-finger pinch.
///
/// Nothing is actually zoomed while the fingers are moving: the canvas is
/// captured into a bitmap at the start and that *picture* is scaled under them,
/// so a pinch across a dense schematic stays smooth. The real zoom happens once
/// at the end.
///
/// A pinch that ends outside the canvas is abandoned — the preview is dropped
/// and the canvas keeps the zoom it had.
///
/// Returns whether the zoom was applied.
pub fn pinch(flags: u8, at: Point, distance: i32, host: &mut impl ZoomGestureHost) -> bool {
    if flags & GESTURE_BEGIN != 0 {
        host.begin_pinch(at, distance);
        host.set_preview_scale(1.0);
        host.show_preview();
    }

    let start_distance = host.start_distance();
    let canvas_zoom = host.canvas_zoom();

    if let Some(ratio) = pinch_scale(start_distance, distance, canvas_zoom) {
        host.set_preview_scale(ratio);
    }
    let ratio = host.preview_scale();
    host.redraw_preview(ratio);

    if flags & GESTURE_END == 0 {
        return false;
    }

    let centre = pinch_centre(host.start_point(), at);
    let applied = if host.inside_canvas(centre) {
        let widening = distance > start_distance;
        host.apply_zoom(settled_pinch_zoom(canvas_zoom, ratio, widening), centre);
        host.repaint_canvas();
        true
    } else {
        false
    };

    host.end_preview();
    applied
}

pub trait PanGestureHost {
    /// The modifier and button flags currently held.
    fn current_buttons(&mut self) -> u16;

    /// Saves the view's own scroll flag so it can be put back.
    fn save_view_flag(&mut self) -> bool;

    /// Reports whether anything is under the point the gesture started on.
    ///
    /// The recovered test is a selection, an object, or a pin index other than
    /// `-1` — any of the three means the drag belongs to the mouse handlers.
    fn something_under(&mut self, at: Point) -> bool;

    /// Records that this gesture is a drag rather than a pan.
    fn set_dragging(&mut self, dragging: bool);

    /// Reports whether this gesture is a drag.
    fn dragging(&mut self) -> bool;

    /// Records where a pan started and the scroll positions it started from.
    fn begin_pan(&mut self, at: Point);

    /// Suppresses the view's scroll bookkeeping while the pan runs.
    fn set_view_flag(&mut self, value: bool);

    /// Scrolls the canvas to follow the finger.
    fn pan_to(&mut self, at: Point);

    /// Hands the event to the ordinary pointer-down handler.
    fn forward_down(&mut self, buttons: u16, at: Point);

    /// Hands the event to the ordinary pointer-move handler.
    fn forward_move(&mut self, buttons: u16, at: Point);

    /// Latches the click on a wire command that armed itself.
    fn latch_wire_command(&mut self);

    /// Hands the event to the ordinary pointer-up handler.
    fn forward_up(&mut self, buttons: u16, at: Point);
}

/// Implements part of Ghidra function `FUN_01c6e1e0` at `0x01C6E1E0`.
///
/// Handles the one-finger half of `EditorPanel.SchEditBox.OnGesture`.
///
/// Either pans the sheet or hands the drag to the ordinary mouse handlers.
///
/// Which it becomes is decided once, when the finger goes down, from whatever
/// is under it: empty canvas pans, anything else is a drag. That decision is
/// then held for the whole gesture rather than re-tested, so a pan that crosses
/// a component keeps panning.
///
/// A pan suppresses the view's own scroll bookkeeping while it runs and puts it
/// back at the end, which is what stops every intermediate scroll position
/// being recorded.
///
/// Returns whether the gesture panned rather than dragged.
pub fn pan(flags: u8, at: Point, host: &mut impl PanGestureHost) -> bool {
    let buttons = host.current_buttons();
    let saved = host.save_view_flag();

    if flags & GESTURE_BEGIN != 0 {
        let dragging = host.something_under(at);
        host.set_dragging(dragging);

        if dragging {
            host.forward_down(buttons, at);
        } else {
            host.begin_pan(at);
            host.set_view_flag(false);
        }
    }

    let dragging = host.dragging();

    if dragging {
        host.forward_move(buttons, at);
    } else {
        host.pan_to(at);
    }

    if flags & GESTURE_END != 0 {
        if dragging {
            host.latch_wire_command();
            host.forward_up(buttons, at);
        } else {
            host.set_view_flag(saved);
        }
    }

    !dragging
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn a_pinch_that_returns_to_its_start_returns_to_unit_scale() {
        assert_eq!(pinch_scale(100, 100, 1.0), Some(1.0));
        assert_eq!(pinch_scale(100, 200, 1.0), Some(2.0));
        assert_eq!(pinch_scale(100, 50, 1.0), Some(0.5));
    }

    #[test]
    fn the_limits_are_checked_against_the_scale_not_the_ratio() {
        // Doubling from 6x would pass the maximum, so the preview holds.
        assert_eq!(pinch_scale(100, 200, 6.0), None);
        // Doubling from 2x is still inside it.
        assert!(pinch_scale(100, 200, 2.0).is_some());
        // Halving from 0.15x would pass the minimum.
        assert_eq!(pinch_scale(100, 50, 0.15), None);
    }

    #[test]
    fn a_pinch_with_no_starting_distance_never_scales() {
        assert_eq!(pinch_scale(0, 100, 1.0), None);
    }

    #[test]
    fn widening_clamps_up_and_narrowing_clamps_down() {
        assert!((settled_pinch_zoom(6.0, 2.0, true) - MAXIMUM_PINCH_ZOOM).abs() < f64::EPSILON);
        assert!((settled_pinch_zoom(0.15, 0.5, false) - MINIMUM_PINCH_ZOOM).abs() < f64::EPSILON);
        assert!((settled_pinch_zoom(2.0, 2.0, true) - 4.0).abs() < f64::EPSILON);
    }

    #[test]
    fn the_pinch_centre_is_the_middle_of_its_own_travel() {
        assert_eq!(
            pinch_centre(Point { x: 10, y: 20 }, Point { x: 30, y: 60 }),
            Point { x: 20, y: 40 }
        );
    }

    #[derive(Debug, Clone, Copy, PartialEq)]
    enum ZoomStep {
        Begin,
        Preview,
        Redraw(f64),
        Apply(f64),
        Repaint,
        End,
    }

    #[derive(Debug)]
    #[allow(clippy::struct_field_names)]
    struct Zoom {
        start_distance: i32,
        zoom: f64,
        scale: f64,
        inside: bool,
        steps: Vec<ZoomStep>,
    }

    impl Default for Zoom {
        fn default() -> Self {
            Self {
                start_distance: 100,
                zoom: 1.0,
                scale: 1.0,
                inside: true,
                steps: Vec::new(),
            }
        }
    }

    impl ZoomGestureHost for Zoom {
        fn begin_pinch(&mut self, _at: Point, distance: i32) {
            self.start_distance = distance;
            self.steps.push(ZoomStep::Begin);
        }

        fn show_preview(&mut self) {
            self.steps.push(ZoomStep::Preview);
        }

        fn canvas_zoom(&mut self) -> f64 {
            self.zoom
        }

        fn start_distance(&mut self) -> i32 {
            self.start_distance
        }

        fn set_preview_scale(&mut self, scale: f64) {
            self.scale = scale;
        }

        fn preview_scale(&mut self) -> f64 {
            self.scale
        }

        fn redraw_preview(&mut self, scale: f64) {
            self.steps.push(ZoomStep::Redraw(scale));
        }

        fn start_point(&mut self) -> Point {
            Point { x: 0, y: 0 }
        }

        fn inside_canvas(&mut self, _at: Point) -> bool {
            self.inside
        }

        fn apply_zoom(&mut self, zoom: f64, _centre: Point) {
            self.steps.push(ZoomStep::Apply(zoom));
        }

        fn repaint_canvas(&mut self) {
            self.steps.push(ZoomStep::Repaint);
        }

        fn end_preview(&mut self) {
            self.steps.push(ZoomStep::End);
        }
    }

    const ORIGIN: Point = Point { x: 0, y: 0 };

    #[test]
    fn a_pinch_only_previews_until_it_ends() {
        let mut host = Zoom::default();

        assert!(!pinch(GESTURE_BEGIN, ORIGIN, 100, &mut host));
        assert!(!pinch(0, ORIGIN, 150, &mut host));

        assert!(
            !host
                .steps
                .iter()
                .any(|step| matches!(step, ZoomStep::Apply(_)))
        );
        assert!(host.steps.contains(&ZoomStep::Redraw(1.5)));
    }

    #[test]
    fn the_real_zoom_happens_once_at_the_end() {
        let mut host = Zoom::default();

        pinch(GESTURE_BEGIN, ORIGIN, 100, &mut host);
        assert!(pinch(GESTURE_END, Point { x: 40, y: 40 }, 200, &mut host));

        assert!(host.steps.contains(&ZoomStep::Apply(2.0)));
        assert!(host.steps.contains(&ZoomStep::Repaint));
        assert_eq!(host.steps.last(), Some(&ZoomStep::End));
    }

    #[test]
    fn a_pinch_ending_off_the_canvas_is_abandoned() {
        let mut host = Zoom {
            inside: false,
            ..Zoom::default()
        };

        pinch(GESTURE_BEGIN, ORIGIN, 100, &mut host);
        assert!(!pinch(GESTURE_END, Point { x: 40, y: 40 }, 200, &mut host));

        assert!(
            !host
                .steps
                .iter()
                .any(|step| matches!(step, ZoomStep::Apply(_)))
        );
        assert_eq!(host.steps.last(), Some(&ZoomStep::End));
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum PanStep {
        BeginPan,
        ViewFlag(bool),
        PanTo,
        Down,
        Move,
        Latch,
        Up,
    }

    #[derive(Debug, Default)]
    struct Pan {
        occupied: bool,
        dragging: bool,
        saved_flag: bool,
        steps: Vec<PanStep>,
    }

    impl PanGestureHost for Pan {
        fn current_buttons(&mut self) -> u16 {
            1
        }

        fn save_view_flag(&mut self) -> bool {
            self.saved_flag
        }

        fn something_under(&mut self, _at: Point) -> bool {
            self.occupied
        }

        fn set_dragging(&mut self, dragging: bool) {
            self.dragging = dragging;
        }

        fn dragging(&mut self) -> bool {
            self.dragging
        }

        fn begin_pan(&mut self, _at: Point) {
            self.steps.push(PanStep::BeginPan);
        }

        fn set_view_flag(&mut self, value: bool) {
            self.steps.push(PanStep::ViewFlag(value));
        }

        fn pan_to(&mut self, _at: Point) {
            self.steps.push(PanStep::PanTo);
        }

        fn forward_down(&mut self, _buttons: u16, _at: Point) {
            self.steps.push(PanStep::Down);
        }

        fn forward_move(&mut self, _buttons: u16, _at: Point) {
            self.steps.push(PanStep::Move);
        }

        fn latch_wire_command(&mut self) {
            self.steps.push(PanStep::Latch);
        }

        fn forward_up(&mut self, _buttons: u16, _at: Point) {
            self.steps.push(PanStep::Up);
        }
    }

    #[test]
    fn an_empty_canvas_pans_and_restores_the_view_flag() {
        let mut host = Pan {
            saved_flag: true,
            ..Pan::default()
        };

        assert!(pan(GESTURE_BEGIN, ORIGIN, &mut host));
        assert!(pan(GESTURE_END, Point { x: 10, y: 10 }, &mut host));

        assert_eq!(
            host.steps,
            [
                PanStep::BeginPan,
                PanStep::ViewFlag(false),
                PanStep::PanTo,
                PanStep::PanTo,
                PanStep::ViewFlag(true),
            ]
        );
    }

    #[test]
    fn something_under_the_finger_makes_it_a_drag() {
        let mut host = Pan {
            occupied: true,
            ..Pan::default()
        };

        assert!(!pan(GESTURE_BEGIN, ORIGIN, &mut host));
        assert!(!pan(GESTURE_END, Point { x: 10, y: 10 }, &mut host));

        assert_eq!(
            host.steps,
            [
                PanStep::Down,
                PanStep::Move,
                PanStep::Move,
                PanStep::Latch,
                PanStep::Up,
            ]
        );
    }

    #[test]
    fn the_decision_is_held_for_the_whole_gesture() {
        let mut host = Pan::default();

        assert!(pan(GESTURE_BEGIN, ORIGIN, &mut host));
        host.occupied = true;
        assert!(pan(0, Point { x: 10, y: 10 }, &mut host));

        assert!(!host.steps.contains(&PanStep::Move));
    }
}
