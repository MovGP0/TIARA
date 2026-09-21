//! Putting a circuit on a page.
//!
//! `File > Print Preview` and `File > Print` both need the circuit drawn on
//! a sheet of paper rather than on the screen, and both need the same
//! drawing - a preview that does not match what comes out of the printer is
//! worse than none.
//!
//! So there is one drawing, written as SVG. It is what the preview shows and
//! what the printer is given, which is the only way the two can agree.
//!
//! What is drawn is what the sheet holds: the wires as lines, the shapes as
//! the boxes they occupy, the writing as writing, and each part as a box
//! with its name and its label in it. That is the same as what the editor
//! draws on screen - a part is its name there too - and it will get better
//! when the editor learns to draw a part's real symbol.

use std::fmt::Write as _;

use crate::page_setup::{PageSetup, UNITS_PER_MM};
use crate::schematic_document::{Document, Point};

/// How many drawing units one grid square is.
///
/// A square of twelve points is about four millimetres, which puts a
/// resistor at about the size one is drawn at on paper.
pub const UNITS_PER_SQUARE: f32 = 12.0;

/// How big the writing is.
const TEXT_SIZE: f32 = 7.0;

/// How big a part's own label is.
const LABEL_SIZE: f32 = 6.0;

/// How wide a line is drawn.
const LINE_WIDTH: f32 = 0.8;

/// Where the circuit sits on the page, and how big it is drawn.
#[derive(Debug, Clone, Copy, PartialEq)]
pub struct Placement {
    /// Where the circuit's own origin lands on the page, in drawing units.
    pub left: f32,
    pub top: f32,
    /// How much bigger or smaller than its own units it is drawn.
    pub scale: f32,
}

/// Where a circuit goes on a page.
///
/// The circuit is brought down to fit between the margins where it is too
/// big, and never blown up to fill them where it is small - a two-part
/// circuit printed a foot high is not what anyone asked for. Whatever size
/// it ends up, it is put in the middle of what may be drawn on.
#[must_use]
pub fn place(document: &Document, page: &PageSetup) -> Placement {
    let (left, top, width, height) = page.printable();
    let left = left * UNITS_PER_MM;
    let top = top * UNITS_PER_MM;
    let width = width * UNITS_PER_MM;
    let height = height * UNITS_PER_MM;

    let Some((from, to)) = extent(document) else {
        return Placement {
            left,
            top,
            scale: 1.0,
        };
    };

    // The circuit's own size, in drawing units at full size, with one
    // square's worth of air round it.
    let across = (whole(to.x - from.x) + 2.0) * UNITS_PER_SQUARE;
    let down = (whole(to.y - from.y) + 2.0) * UNITS_PER_SQUARE;

    let scale = if across <= 0.0 || down <= 0.0 {
        1.0
    } else {
        (width / across).min(height / down).clamp(0.01, 1.0)
    };

    // Put in the middle of what may be drawn on, and shifted so the
    // circuit's own top left corner lands where it should.
    let spare_across = (width - across * scale) / 2.0;
    let spare_down = (height - down * scale) / 2.0;
    Placement {
        left: (whole(from.x - 1) * UNITS_PER_SQUARE).mul_add(-scale, left + spare_across),
        top: (whole(from.y - 1) * UNITS_PER_SQUARE).mul_add(-scale, top + spare_down),
        scale,
    }
}

/// The corners of everything on the sheet, where there is anything.
#[must_use]
pub fn extent(document: &Document) -> Option<(Point, Point)> {
    let mut places = Vec::new();
    for part in document.parts() {
        places.push(part.at);
    }
    for wire in document.wires() {
        places.push(wire.from);
        places.push(wire.to);
    }
    for shape in document.shapes() {
        places.push(shape.from);
        places.push(shape.to);
    }
    for note in document.notes() {
        places.push(note.at);
    }

    let first = *places.first()?;
    let mut from = first;
    let mut to = first;
    for place in places {
        from = Point::new(from.x.min(place.x), from.y.min(place.y));
        to = Point::new(to.x.max(place.x), to.y.max(place.y));
    }
    Some((from, to))
}

/// The circuit on a page, as SVG.
///
/// The same drawing the preview shows and the printer is given.
#[must_use]
pub fn to_svg(document: &Document, page: &PageSetup) -> String {
    let (across, down) = page.size_in_units();
    let placed = place(document, page);
    let at = |place: Point| -> (f32, f32) {
        (
            (whole(place.x) * UNITS_PER_SQUARE).mul_add(placed.scale, placed.left),
            (whole(place.y) * UNITS_PER_SQUARE).mul_add(placed.scale, placed.top),
        )
    };
    let square = UNITS_PER_SQUARE * placed.scale;

    let mut out = String::with_capacity(1024);
    let _ = write!(
        out,
        "<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"{across:.1}pt\" \
         height=\"{down:.1}pt\" viewBox=\"0 0 {across:.1} {down:.1}\">\n\
         <rect width=\"100%\" height=\"100%\" fill=\"white\"/>\n"
    );

    for wire in document.wires() {
        let (x1, y1) = at(wire.from);
        let (x2, y2) = at(wire.to);
        let _ = writeln!(
            out,
            "<line x1=\"{x1:.1}\" y1=\"{y1:.1}\" x2=\"{x2:.1}\" y2=\"{y2:.1}\" \
             stroke=\"black\" stroke-width=\"{LINE_WIDTH}\"/>\n"
        );
    }

    for shape in document.shapes() {
        let (x1, y1) = at(shape.from);
        let (x2, y2) = at(shape.to);
        let _ = writeln!(
            out,
            "<rect x=\"{:.1}\" y=\"{:.1}\" width=\"{:.1}\" height=\"{:.1}\" \
             fill=\"none\" stroke=\"black\" stroke-width=\"{LINE_WIDTH}\"/>\n",
            x1.min(x2),
            y1.min(y2),
            (x2 - x1).abs(),
            (y2 - y1).abs()
        );
    }

    for part in document.parts() {
        let (x, y) = at(part.at);
        let _ = writeln!(
            out,
            "<rect x=\"{:.1}\" y=\"{:.1}\" width=\"{:.1}\" height=\"{:.1}\" \
             fill=\"none\" stroke=\"black\" stroke-width=\"{LINE_WIDTH}\"/>\n\
             <text x=\"{:.1}\" y=\"{:.1}\" font-family=\"sans-serif\" \
             font-size=\"{:.1}\" text-anchor=\"middle\">{}</text>\n\
             <text x=\"{:.1}\" y=\"{:.1}\" font-family=\"sans-serif\" \
             font-size=\"{:.1}\" text-anchor=\"middle\">{}</text>\n",
            x,
            y,
            square * 2.0,
            square,
            x + square,
            square.mul_add(0.7, y),
            TEXT_SIZE * placed.scale.max(0.4),
            escaped(&part.kind),
            x + square,
            square.mul_add(1.8, y),
            LABEL_SIZE * placed.scale.max(0.4),
            escaped(&part.label),
        );
    }

    for note in document.notes() {
        let (x, y) = at(note.at);
        let _ = writeln!(
            out,
            "<text x=\"{x:.1}\" y=\"{y:.1}\" font-family=\"sans-serif\" \
             font-size=\"{:.1}\">{}</text>\n",
            TEXT_SIZE * placed.scale.max(0.4),
            escaped(&note.text),
        );
    }

    out.push_str("</svg>\n");
    out
}

/// A whole number of squares as a drawing wants it.
const fn whole(squares: i32) -> f32 {
    #[allow(
        clippy::cast_precision_loss,
        reason = "a sheet is thousands of squares across at most"
    )]
    let places = squares as f32;
    places
}

/// Text with the three characters that mean something to XML written out.
fn escaped(text: &str) -> String {
    text.replace('&', "&amp;")
        .replace('<', "&lt;")
        .replace('>', "&gt;")
}

#[cfg(test)]
mod tests {
    use super::{escaped, extent, place, to_svg};
    use crate::page_setup::{Orientation, PageSetup, Paper};
    use crate::schematic_document::{Point, Sheet, WireKind};

    fn a_circuit() -> Sheet {
        let mut sheet = Sheet::default();
        sheet.place("R", Point::new(4, 4));
        sheet.place("C", Point::new(12, 4));
        sheet.draw_wire(Point::new(4, 4), Point::new(12, 4), WireKind::Wire);
        sheet.write(crate::schematic_document::NoteKind::Text, Point::new(4, 10));
        sheet
    }

    #[test]
    fn an_empty_sheet_has_no_extent_and_is_drawn_at_its_own_size() {
        let sheet = Sheet::default();
        assert_eq!(extent(sheet.document()), None);

        let placed = place(sheet.document(), &PageSetup::default());
        assert!((placed.scale - 1.0).abs() < f32::EPSILON);
    }

    #[test]
    fn the_extent_is_the_corners_of_everything_on_the_sheet() {
        let sheet = a_circuit();
        let (from, to) = extent(sheet.document()).unwrap();

        assert_eq!((from.x, from.y), (4, 4));
        assert_eq!((to.x, to.y), (12, 10));
    }

    #[test]
    fn a_small_circuit_is_not_blown_up_to_fill_the_page() {
        let sheet = a_circuit();
        let placed = place(sheet.document(), &PageSetup::default());

        assert!(
            (placed.scale - 1.0).abs() < f32::EPSILON,
            "a small circuit should be drawn at its own size"
        );
    }

    #[test]
    fn a_circuit_too_big_for_the_page_is_brought_down_to_fit() {
        let mut sheet = Sheet::default();
        sheet.place("R", Point::new(0, 0));
        sheet.place("C", Point::new(400, 300));

        let placed = place(sheet.document(), &PageSetup::default());
        assert!(placed.scale < 1.0, "it should have been brought down");
        assert!(placed.scale > 0.0);

        // And what it covers now fits between the margins.
        let page = PageSetup::default();
        let (_, _, width, height) = page.printable();
        let across = (400.0 + 2.0) * super::UNITS_PER_SQUARE * placed.scale;
        let down = (300.0 + 2.0) * super::UNITS_PER_SQUARE * placed.scale;
        assert!(across <= width.mul_add(super::UNITS_PER_MM, 1.0));
        assert!(down <= height.mul_add(super::UNITS_PER_MM, 1.0));
    }

    #[test]
    fn the_drawing_is_a_page_of_the_size_that_was_chosen() {
        let sheet = a_circuit();
        let page = PageSetup {
            paper: Paper::A4,
            orientation: Orientation::Landscape,
            ..PageSetup::default()
        };
        let svg = to_svg(sheet.document(), &page);

        assert!(svg.starts_with("<svg xmlns=\"http://www.w3.org/2000/svg\""));
        assert!(svg.ends_with("</svg>\n"));
        // A4 the other way round is 842 by 595 points.
        assert!(svg.contains("width=\"841.9pt\""), "{}", &svg[..120]);
        assert!(svg.contains("height=\"595.3pt\""));
    }

    #[test]
    fn everything_on_the_sheet_reaches_the_drawing() {
        let sheet = a_circuit();
        let svg = to_svg(sheet.document(), &PageSetup::default());

        // One wire, and a box and two labels for each of the two parts.
        assert_eq!(svg.matches("<line").count(), 1);
        assert!(svg.contains(">R<"));
        assert!(svg.contains(">R1<"));
        assert!(svg.contains(">C<"));
        assert!(svg.contains(">C1<"));
        // Three rectangles: the page, and one for each part.
        assert_eq!(svg.matches("<rect").count(), 3);
    }

    #[test]
    fn an_empty_sheet_still_draws_a_page() {
        let svg = to_svg(Sheet::default().document(), &PageSetup::default());
        assert!(svg.contains("<svg"));
        assert!(svg.contains("</svg>"));
        assert_eq!(svg.matches("<line").count(), 0);
    }

    #[test]
    fn a_name_with_a_bracket_in_it_does_not_break_the_drawing() {
        let mut sheet = Sheet::default();
        sheet.place("<a & b>", Point::new(2, 2));

        let svg = to_svg(sheet.document(), &PageSetup::default());
        assert!(svg.contains("&lt;a &amp; b&gt;"));
        assert!(!svg.contains("<a &"));
    }

    #[test]
    fn escaping_leaves_ordinary_text_alone() {
        assert_eq!(escaped("R1"), "R1");
        assert_eq!(escaped("a<b&c>d"), "a&lt;b&amp;c&gt;d");
    }
}
