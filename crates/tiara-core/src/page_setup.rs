//! What a printed sheet is laid out on.
//!
//! `File > Page Setup...` chooses the paper, the way round it is, and how
//! much of it is left blank at the edges. The original hands that to
//! Windows' own page dialog; the port keeps it itself, because it has to
//! draw the page as well as print it and the two have to agree.
//!
//! Everything is in millimetres, which is what paper is measured in
//! everywhere the sizes below come from, and turned into the units a drawing
//! needs only when something is drawn.

use serde::{Deserialize, Serialize};

/// How many of a drawing's units make one millimetre.
///
/// A drawing is written in points, as every printable document is: seventy
/// two to the inch, and twenty five point four millimetres to the inch.
pub const UNITS_PER_MM: f32 = 72.0 / 25.4;

/// A size of paper, by the name people ask for it by.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default, Serialize, Deserialize)]
pub enum Paper {
    /// 210 by 297 millimetres, which is what most of the world prints on.
    #[default]
    A4,
    /// 297 by 420.
    A3,
    /// 148 by 210.
    A5,
    /// 216 by 279, which is what North America prints on.
    Letter,
    /// 216 by 356.
    Legal,
    /// 279 by 432.
    Tabloid,
}

impl Paper {
    /// Every size, in the order a list should offer them.
    pub const ALL: [Self; 6] = [
        Self::A4,
        Self::A3,
        Self::A5,
        Self::Letter,
        Self::Legal,
        Self::Tabloid,
    ];

    /// What it is called.
    #[must_use]
    pub const fn name(self) -> &'static str {
        match self {
            Self::A4 => "A4",
            Self::A3 => "A3",
            Self::A5 => "A5",
            Self::Letter => "Letter",
            Self::Legal => "Legal",
            Self::Tabloid => "Tabloid",
        }
    }

    /// How wide and tall it is in millimetres, the short way up.
    #[must_use]
    pub const fn size(self) -> (f32, f32) {
        match self {
            Self::A4 => (210.0, 297.0),
            Self::A3 => (297.0, 420.0),
            Self::A5 => (148.0, 210.0),
            Self::Letter => (215.9, 279.4),
            Self::Legal => (215.9, 355.6),
            Self::Tabloid => (279.4, 431.8),
        }
    }

    /// The size by its name, where the name is one of these.
    #[must_use]
    pub fn named(name: &str) -> Option<Self> {
        Self::ALL
            .into_iter()
            .find(|paper| paper.name().eq_ignore_ascii_case(name))
    }
}

/// Which way round the paper goes.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default, Serialize, Deserialize)]
pub enum Orientation {
    /// Taller than it is wide.
    #[default]
    Portrait,
    /// Wider than it is tall, which is how most circuits go on.
    Landscape,
}

impl Orientation {
    /// Both, in the order a pair of buttons should offer them.
    pub const ALL: [Self; 2] = [Self::Portrait, Self::Landscape];

    /// What it is called.
    #[must_use]
    pub const fn name(self) -> &'static str {
        match self {
            Self::Portrait => "Portrait",
            Self::Landscape => "Landscape",
        }
    }
}

/// How much of each edge is left blank, in millimetres.
#[derive(Debug, Clone, Copy, PartialEq, Serialize, Deserialize)]
pub struct Margins {
    pub left: f32,
    pub top: f32,
    pub right: f32,
    pub bottom: f32,
}

impl Default for Margins {
    fn default() -> Self {
        // Ten millimetres all round, which every printer can manage and
        // which is what a schematic wants: enough to hold, not so much that
        // the circuit shrinks.
        Self {
            left: 10.0,
            top: 10.0,
            right: 10.0,
            bottom: 10.0,
        }
    }
}

/// The page a circuit is printed on.
#[derive(Debug, Clone, Copy, PartialEq, Default, Serialize, Deserialize)]
#[serde(default)]
pub struct PageSetup {
    pub paper: Paper,
    pub orientation: Orientation,
    pub margins: Margins,
}

impl PageSetup {
    /// How wide and tall the page is in millimetres, the way round it is
    /// set.
    #[must_use]
    pub const fn size(&self) -> (f32, f32) {
        let (across, down) = self.paper.size();
        match self.orientation {
            Orientation::Portrait => (across, down),
            Orientation::Landscape => (down, across),
        }
    }

    /// The part of the page that may be drawn on, in millimetres: where it
    /// starts and how big it is.
    ///
    /// Margins wider than the paper would leave nothing, so what is left is
    /// never less than nothing.
    #[must_use]
    pub fn printable(&self) -> (f32, f32, f32, f32) {
        let (across, down) = self.size();
        let width = (across - self.margins.left - self.margins.right).max(0.0);
        let height = (down - self.margins.top - self.margins.bottom).max(0.0);
        (self.margins.left, self.margins.top, width, height)
    }

    /// How wide and tall the page is in drawing units.
    #[must_use]
    pub fn size_in_units(&self) -> (f32, f32) {
        let (across, down) = self.size();
        (across * UNITS_PER_MM, down * UNITS_PER_MM)
    }
}

#[cfg(test)]
mod tests {
    use super::{Margins, Orientation, PageSetup, Paper};

    fn near(left: f32, right: f32) -> bool {
        (left - right).abs() < 0.01
    }

    #[test]
    fn the_paper_sizes_are_the_ones_paper_comes_in() {
        assert_eq!(Paper::A4.size(), (210.0, 297.0));
        assert_eq!(Paper::A3.size(), (297.0, 420.0));
        // A3 is two A4s, which is the whole idea of the series.
        assert!(near(Paper::A3.size().1, Paper::A4.size().0 * 2.0));
        assert_eq!(Paper::ALL.len(), 6);
    }

    #[test]
    fn a_size_can_be_asked_for_by_name() {
        assert_eq!(Paper::named("A4"), Some(Paper::A4));
        assert_eq!(Paper::named("letter"), Some(Paper::Letter));
        assert_eq!(Paper::named("foolscap"), None);
    }

    #[test]
    fn turning_the_paper_round_swaps_its_sides() {
        let portrait = PageSetup::default();
        assert_eq!(portrait.size(), (210.0, 297.0));

        let landscape = PageSetup {
            orientation: Orientation::Landscape,
            ..portrait
        };
        assert_eq!(landscape.size(), (297.0, 210.0));
    }

    #[test]
    fn the_margins_come_off_what_may_be_drawn_on() {
        let page = PageSetup::default();
        let (left, top, width, height) = page.printable();

        assert!(near(left, 10.0));
        assert!(near(top, 10.0));
        assert!(near(width, 190.0));
        assert!(near(height, 277.0));
    }

    #[test]
    fn margins_wider_than_the_paper_leave_nothing_rather_than_less() {
        let page = PageSetup {
            margins: Margins {
                left: 500.0,
                top: 500.0,
                right: 500.0,
                bottom: 500.0,
            },
            ..PageSetup::default()
        };
        let (_, _, width, height) = page.printable();

        assert!(near(width, 0.0));
        assert!(near(height, 0.0));
    }

    #[test]
    fn a_page_in_drawing_units_is_the_same_page() {
        let page = PageSetup::default();
        let (across, down) = page.size_in_units();

        // A4 is 595 by 842 points, which is what every PDF of one says.
        assert!((across - 595.0).abs() < 1.0);
        assert!((down - 842.0).abs() < 1.0);
    }

    #[test]
    fn what_was_set_survives_being_written_and_read() {
        let page = PageSetup {
            paper: Paper::Legal,
            orientation: Orientation::Landscape,
            margins: Margins {
                left: 5.0,
                top: 6.0,
                right: 7.0,
                bottom: 8.0,
            },
        };

        let text = serde_json::to_string(&page).unwrap();
        let read_back: PageSetup = serde_json::from_str(&text).unwrap();
        assert_eq!(read_back, page);

        // And a page written before a field existed still reads.
        let older: PageSetup = serde_json::from_str("{}").unwrap();
        assert_eq!(older, PageSetup::default());
    }
}
