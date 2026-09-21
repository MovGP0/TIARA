//! How the Component Explorer reaches the sheet.
//!
//! The explorer shows the circuit as a tree, and clicking a row is meant to
//! find that thing on the sheet: open the page it is on, pick it out, and
//! scroll to it if it is off the edge. That is all one recovered routine -
//! `FUN_013ab400` - and what it needs from the editor is written as a trait
//! it can be given. Until now only a test fake implemented it.
//!
//! This is the editor's own answer to that trait. A page is one of the open
//! circuits, an object is a part on one of them, and the visible rectangle is
//! the window the editor draws over the sheet.
//!
//! Units. The trait speaks in `iced::Rectangle`, which is floating point, and
//! the sheet counts in whole grid squares. Squares are used throughout, so a
//! part one square wide is one unit wide here - the explorer only ever
//! compares a rectangle with a rectangle, so the unit only has to be the same
//! on both sides.

use iced::{Point as Place, Rectangle};
use tiara_core::schematic_document::{Id, Point};

use crate::component_explorer::{CircuitObject, CircuitObjectId, PageId, SchematicNavigation};

use super::SchematicEditor;

/// How wide and tall a part is taken to be when one is revealed.
///
/// The sheet does not keep a size for a part - it keeps where it sits - so
/// one square is what a part covers as far as this is concerned.
pub const PART_SIZE: f32 = 1.0;

/// The page a circuit is, by where it sits in the workspace.
#[must_use]
pub const fn page_of(index: usize) -> PageId {
    PageId(index as u64)
}

/// Which circuit a page is.
#[must_use]
pub fn circuit_of(page: PageId) -> usize {
    usize::try_from(page.0).unwrap_or(usize::MAX)
}

/// The object a part on a page is.
#[must_use]
pub fn object_of(page: usize, part: Id, at: Point) -> CircuitObject {
    CircuitObject {
        id: CircuitObjectId(u64::from(part.number())),
        // The original selects everything that shares an identity with what
        // was clicked. A part is only ever itself here, so its identity is
        // its own number.
        selection_identity: u64::from(part.number()),
        owning_page: page_of(page),
        bounds: Rectangle::new(
            Place::new(whole(at.x), whole(at.y)),
            iced::Size::new(PART_SIZE, PART_SIZE),
        ),
    }
}

/// A whole number of grid squares as the trait's own type wants it.
const fn whole(units: i32) -> f32 {
    // A sheet is nowhere near large enough for this to lose anything.
    #[allow(
        clippy::cast_precision_loss,
        reason = "a sheet is thousands of squares across at most"
    )]
    let places = units as f32;
    places
}

impl SchematicNavigation for SchematicEditor {
    fn clear_active_selection(&mut self) {
        self.sheet_mut().clear_selection();
    }

    fn open_page_index(&self, page: PageId) -> Option<usize> {
        let index = circuit_of(page);
        (index < self.workspace.count()).then_some(index)
    }

    fn active_page_index(&self) -> Option<usize> {
        Some(self.workspace.active_index())
    }

    fn activate_page(&mut self, page: PageId) {
        self.workspace.activate(circuit_of(page));
    }

    fn has_active_selection_collection(&self) -> bool {
        // There is always a sheet to pick something out on.
        true
    }

    fn select_target_and_identity_matches(&mut self, target: CircuitObject) {
        let wanted = target.selection_identity;
        let matching: Vec<Id> = self
            .sheet()
            .document()
            .parts()
            .iter()
            .filter(|part| u64::from(part.id.number()) == wanted)
            .map(|part| part.id)
            .collect();
        for id in matching {
            self.sheet_mut().select(id, true);
        }
    }

    fn visible_rectangle(&self) -> Rectangle {
        let (from, to) = self.window_on_the_sheet();
        Rectangle::new(
            Place::new(whole(from.x), whole(from.y)),
            iced::Size::new(whole(to.x - from.x), whole(to.y - from.y)),
        )
    }

    fn pan_to_reveal(&mut self, target: CircuitObject, margin: f32) {
        // The margin comes in as a number of the same units the bounds are
        // in, which here are grid squares.
        #[allow(
            clippy::cast_possible_truncation,
            reason = "the recovered margin is 50, and anything sane is small"
        )]
        let margin = margin as i32;
        #[allow(
            clippy::cast_possible_truncation,
            reason = "a place on the sheet is a whole number of squares"
        )]
        let at = Point::new(target.bounds.x as i32, target.bounds.y as i32);
        self.bring_into_view(at, margin);
    }
}

#[cfg(test)]
mod tests {
    use super::{object_of, page_of};
    use crate::component_explorer::{PageId, SchematicNavigation};
    use crate::schematic_editor::{Message, SchematicEditor};
    use tiara_core::schematic_document::Point;

    /// An editor with one part on each of two circuits.
    fn two_circuits() -> SchematicEditor {
        let mut editor = SchematicEditor::default();
        editor.sheet_mut().place("R", Point::new(2, 2));
        editor.update(Message::MenuCommand("mnNew"));
        editor.sheet_mut().place("C", Point::new(60, 40));
        editor
    }

    #[test]
    fn a_page_is_one_of_the_open_circuits() {
        let editor = two_circuits();

        assert_eq!(editor.active_page_index(), Some(1));
        assert_eq!(editor.open_page_index(page_of(0)), Some(0));
        assert_eq!(editor.open_page_index(page_of(1)), Some(1));
        // A page that is not open is not there.
        assert_eq!(editor.open_page_index(PageId(9)), None);
    }

    #[test]
    fn revealing_a_part_opens_its_circuit_and_picks_it_out() {
        let mut editor = two_circuits();
        let first = editor.workspace.all()[0].sheet().document().parts()[0].id;
        let target = object_of(0, first, Point::new(2, 2));

        editor.activate_page(target.owning_page);
        assert_eq!(editor.workspace.active_index(), 0);

        editor.clear_active_selection();
        editor.select_target_and_identity_matches(target);
        assert!(editor.sheet().document().is_selected(first));
    }

    #[test]
    fn the_visible_rectangle_is_the_window_the_editor_draws() {
        let editor = SchematicEditor::default();
        let window = editor.visible_rectangle();

        assert!((window.x - 0.0).abs() < f32::EPSILON);
        assert!((window.y - 0.0).abs() < f32::EPSILON);
        assert!(window.width > 0.0);
        assert!(window.height > 0.0);
    }

    #[test]
    fn something_already_in_view_moves_the_window_nowhere() {
        let mut editor = SchematicEditor::default();
        let before = editor.visible_rectangle();

        let id = editor.sheet_mut().place("R", Point::new(3, 3));
        editor.pan_to_reveal(object_of(0, id, Point::new(3, 3)), 1.0);

        let after = editor.visible_rectangle();
        assert!((before.x - after.x).abs() < f32::EPSILON);
        assert!((before.y - after.y).abs() < f32::EPSILON);
    }

    #[test]
    fn something_off_the_edge_brings_the_window_to_it() {
        let mut editor = SchematicEditor::default();
        let far = Point::new(200, 120);
        let id = editor.sheet_mut().place("R", far);

        editor.pan_to_reveal(object_of(0, id, far), 2.0);

        let window = editor.visible_rectangle();
        assert!(window.x > 0.0, "the window should have moved across");
        assert!(window.y > 0.0, "the window should have moved down");
        assert!(window.contains(iced::Point::new(200.0, 120.0)));
    }

    #[test]
    fn the_window_never_goes_past_the_top_left_of_the_sheet() {
        let mut editor = SchematicEditor::default();
        let far = Point::new(200, 120);
        let id = editor.sheet_mut().place("R", far);
        editor.pan_to_reveal(object_of(0, id, far), 2.0);

        // Coming back to something at the corner puts the window back at it
        // and no further.
        let near = Point::new(0, 0);
        let close = editor.sheet_mut().place("C", near);
        editor.pan_to_reveal(object_of(0, close, near), 2.0);

        let window = editor.visible_rectangle();
        assert!((window.x - 0.0).abs() < f32::EPSILON);
        assert!((window.y - 0.0).abs() < f32::EPSILON);
    }

    #[test]
    fn a_part_is_drawn_where_the_window_puts_it() {
        let mut editor = SchematicEditor::default();
        editor.sheet_mut().place("R", Point::new(5, 5));

        // With the window at the corner, the part is five squares in.
        assert_eq!(editor.shown_at(Point::new(5, 5)), Some(Point::new(5, 5)));

        editor.bring_into_view(Point::new(60, 40), 0);
        let moved = editor.shown_at(Point::new(60, 40));
        assert!(moved.is_some_and(|at| at.x >= 0 && at.y >= 0));
        // And what is now behind the window is not drawn at all.
        assert_eq!(editor.shown_at(Point::new(0, 0)), None);
    }
}
