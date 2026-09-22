//! Writing a circuit out as a SPICE netlist.
//!
//! This is what every simulator is fed, whichever one is chosen, and it is
//! what `File > Export` and the netlist editor show. A sheet is a drawing
//! until this turns it into a list of parts and the nodes they join.
//!
//! The shape is the one every SPICE has read since Berkeley:
//!
//! ```text
//! Divider                 the title, which is the circuit's name
//! R1 1 2 1k               a part, its nodes, and what it is worth
//! R2 2 0 1k
//! V1 1 0 10
//! .END
//! ```
//!
//! **Node 0 is ground**, and that is the one node SPICE names for itself.
//! Every other node here is numbered from one in the order the nets were
//! found, which follows the order the wires were drawn, so the same sheet
//! always writes the same netlist.
//!
//! **The first letter of a part's label chooses the element**, which is how
//! SPICE has always worked - `R1` is a resistor because it begins with `R`.
//! The port does not second-guess it: a part labelled `R1` is written as
//! `R1`, so whatever the original called a part is what the simulator sees.
//!
//! What this cannot do yet is write a part the sheet cannot describe. A
//! part carries a kind, a label, its pins and a value; it does not carry a
//! model card or a subcircuit definition, so a transistor is written with
//! its nodes and its value and nothing more. Those are named in
//! [`Netlist::wanting`] rather than left out silently.

use std::collections::BTreeMap;

use crate::netlist::{self, Net};
use crate::schematic_document::Document;

/// What SPICE calls ground.
pub const GROUND: &str = "0";

/// The part the sheet uses for ground, as [`crate::ltspice_schematic`] does.
pub const GROUND_PART: &str = "GND";

/// The line that ends a netlist.
pub const END: &str = ".END";

/// How a frequency sweep is spaced.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum Sweep {
    /// So many points per decade, which is what a Bode plot wants.
    #[default]
    Decade,
    /// So many per octave.
    Octave,
    /// So many in all, evenly spaced.
    Linear,
}

impl Sweep {
    /// The word SPICE writes for it.
    #[must_use]
    pub const fn word(self) -> &'static str {
        match self {
            Self::Decade => "DEC",
            Self::Octave => "OCT",
            Self::Linear => "LIN",
        }
    }
}

/// What a simulator is being asked to work out.
///
/// One directive line each, in the form every SPICE has read since
/// Berkeley. The numbers are written as they are given - a value such as
/// `1meg` or `10u` is what the user typed, and SPICE reads the suffixes
/// itself, so nothing is converted on the way through and nothing is lost
/// to rounding.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Analysis {
    /// Where the circuit settles with nothing changing. `.OP`
    OperatingPoint,
    /// How it behaves over time. `.TRAN <step> <stop> <start>`
    Transient {
        step: String,
        stop: String,
        start: String,
    },
    /// How it behaves with frequency. `.AC <sweep> <points> <from> <to>`
    Ac {
        sweep: Sweep,
        points: u32,
        from: String,
        to: String,
    },
    /// What happens as a source is swept. `.DC <source> <from> <to> <step>`
    DcSweep {
        source: String,
        from: String,
        to: String,
        step: String,
    },
}

impl Analysis {
    /// The directive line, as a simulator reads it.
    #[must_use]
    pub fn directive(&self) -> String {
        match self {
            Self::OperatingPoint => ".OP".to_owned(),
            Self::Transient { step, stop, start } => {
                // The start time is left off when it is zero, which is what
                // every netlist written by hand does.
                if is_zero(start) {
                    format!(".TRAN {step} {stop}")
                } else {
                    format!(".TRAN {step} {stop} {start}")
                }
            }
            Self::Ac {
                sweep,
                points,
                from,
                to,
            } => format!(".AC {} {points} {from} {to}", sweep.word()),
            Self::DcSweep {
                source,
                from,
                to,
                step,
            } => format!(".DC {source} {from} {to} {step}"),
        }
    }
}

/// Whether a written value is zero, however it was written.
fn is_zero(value: &str) -> bool {
    value.trim().parse::<f64>().is_ok_and(|it| it == 0.0)
}

/// A circuit as a simulator is given it.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct Netlist {
    /// The title line, which is what the circuit is called.
    pub title: String,
    /// One line per part.
    pub lines: Vec<String>,
    /// The parts that were written without something they need.
    ///
    /// A netlist that is missing a value is still a netlist, and saying so
    /// is better than either inventing a value or refusing to write.
    pub wanting: Vec<String>,
    /// What the simulator is being asked for, where anything is.
    ///
    /// A netlist with none is a description of a circuit and not a request
    /// to work anything out, which is what `File > Export` wants and what
    /// a syntax check reads.
    pub asking: Option<Analysis>,
}

impl Netlist {
    /// The whole netlist as text, ready to be written or handed on.
    #[must_use]
    pub fn to_text(&self) -> String {
        let mut text = String::new();
        text.push_str(&self.title);
        text.push('\n');
        for line in &self.lines {
            text.push_str(line);
            text.push('\n');
        }
        if let Some(asking) = &self.asking {
            text.push_str(&asking.directive());
            text.push('\n');
        }
        text.push_str(END);
        text.push('\n');
        text
    }

    /// Whether anything was written at all.
    #[must_use]
    pub fn is_empty(&self) -> bool {
        self.lines.is_empty()
    }
}

/// Writes a document out as a netlist.
#[must_use]
pub fn of(document: &Document, title: &str) -> Netlist {
    let nets = netlist::nets(document);
    let numbers = number_the_nodes(document, &nets);

    let mut lines = Vec::new();
    let mut wanting = Vec::new();

    for part in document.parts() {
        if part.hidden || is_ground(&part.kind) {
            continue;
        }
        let name = if part.label.is_empty() {
            continue;
        } else {
            part.label.clone()
        };

        let (nodes, loose) = nodes_of(part, &nets, &numbers);
        if nodes.is_empty() {
            wanting.push(format!("{name} joins nothing"));
            continue;
        }
        for pin in loose {
            wanting.push(format!("{name} pin {pin} joins nothing"));
        }

        let mut line = name.clone();
        for node in &nodes {
            line.push(' ');
            line.push_str(node);
        }
        if part.value.is_empty() {
            wanting.push(format!("{name} has no value"));
        } else {
            line.push(' ');
            line.push_str(&part.value);
        }
        lines.push(line);
    }

    Netlist {
        title: title.to_owned(),
        lines,
        wanting,
        asking: None,
    }
}

impl Netlist {
    /// The same netlist, asking for an analysis.
    #[must_use]
    pub fn asking_for(mut self, analysis: Analysis) -> Self {
        self.asking = Some(analysis);
        self
    }
}

/// Whether a part is the ground symbol.
#[must_use]
pub fn is_ground(kind: &str) -> bool {
    kind.eq_ignore_ascii_case(GROUND_PART)
}

/// What each net is called: `0` for ground and a number for the rest.
///
/// A net is ground when a ground part sits on it. Where a sheet has none,
/// nothing is node 0 - which is a circuit SPICE will refuse, and rightly:
/// it is the mistake, not the netlist's reading of it.
fn number_the_nodes(document: &Document, nets: &[Net]) -> BTreeMap<u32, String> {
    let grounded: Vec<u32> = document
        .parts()
        .iter()
        .filter(|part| !part.hidden && is_ground(&part.kind))
        .flat_map(|part| {
            nets.iter()
                .filter(|net| part.joins().iter().any(|at| net.holds(*at)))
                .map(|net| net.number)
        })
        .collect();

    let mut numbers = BTreeMap::new();
    let mut next = 1;
    for net in nets {
        if grounded.contains(&net.number) {
            numbers.insert(net.number, GROUND.to_owned());
        } else {
            numbers.insert(net.number, next.to_string());
            next += 1;
        }
    }
    numbers
}

/// The nodes one part joins, in the order its own pins are drawn.
///
/// The order matters and is the part's, not the nets': SPICE reads a
/// resistor's two nodes in the order the part lists its terminals, so they
/// are taken from [`crate::schematic_document::Part::pin_places`] rather
/// than from whichever net happened to be found first.
///
/// A pin on no net gives nothing, so a chip with a loose pin is written
/// short rather than wrong, and [`Netlist::wanting`] says which. A part
/// with no pins at all joins at its own place and gives the one node
/// there.
fn nodes_of(
    part: &crate::schematic_document::Part,
    nets: &[Net],
    numbers: &BTreeMap<u32, String>,
) -> (Vec<String>, Vec<String>) {
    let node_at = |at: crate::schematic_document::Point| -> Option<String> {
        nets.iter()
            .find(|net| net.holds(at))
            .and_then(|net| numbers.get(&net.number).cloned())
    };

    if part.pins.is_empty() {
        return (node_at(part.at).into_iter().collect(), Vec::new());
    }

    let mut nodes = Vec::new();
    let mut loose = Vec::new();
    for (name, at) in part.pin_places() {
        match node_at(at) {
            Some(node) => nodes.push(node),
            None => loose.push(name.to_owned()),
        }
    }
    (nodes, loose)
}

#[cfg(test)]
mod tests {
    use super::{Analysis, END, GROUND, Sweep, is_ground, of};
    use crate::schematic_document::{Pin, Point, Sheet, WireKind};

    /// A divider: two resistors in series from a source to ground.
    fn a_divider() -> Sheet {
        let mut sheet = Sheet::default();
        // The three nets, drawn top to bottom.
        sheet.draw_wire(Point::new(0, 0), Point::new(4, 0), WireKind::Wire);
        sheet.draw_wire(Point::new(0, 8), Point::new(4, 8), WireKind::Wire);
        sheet.draw_wire(Point::new(0, 16), Point::new(4, 16), WireKind::Wire);

        let across = vec![
            Pin::new("1", Point::new(0, 0)),
            Pin::new("2", Point::new(0, 8)),
        ];
        let top = sheet.place_pinned("R", Point::new(0, 0), across.clone());
        sheet.set_value(top, "1k");
        let bottom = sheet.place_pinned("R", Point::new(0, 8), across);
        sheet.set_value(bottom, "2k");
        sheet.place_pinned(
            "GND",
            Point::new(0, 16),
            vec![Pin::new("1", Point::new(0, 0))],
        );
        sheet
    }

    #[test]
    fn a_divider_is_written_as_spice_reads_it() {
        let written = of(a_divider().document(), "Divider");
        assert_eq!(written.title, "Divider");
        assert_eq!(written.lines, ["R1 1 2 1k", "R2 2 0 2k"]);
        assert!(written.wanting.is_empty());
    }

    #[test]
    fn the_net_a_ground_part_sits_on_is_node_zero() {
        let written = of(a_divider().document(), "Divider");
        // The third net carries the ground part, so it is 0 and the other
        // two are numbered 1 and 2 around it.
        assert!(written.lines[1].ends_with(&format!(" {GROUND} 2k")));
    }

    #[test]
    fn the_whole_text_is_a_title_the_parts_and_an_end() {
        let text = of(a_divider().document(), "Divider").to_text();
        assert_eq!(text, format!("Divider\nR1 1 2 1k\nR2 2 0 2k\n{END}\n"));
    }

    #[test]
    fn a_part_without_a_value_is_written_and_said_to_be_wanting_one() {
        let mut sheet = Sheet::default();
        sheet.draw_wire(Point::new(0, 0), Point::new(4, 0), WireKind::Wire);
        sheet.draw_wire(Point::new(0, 8), Point::new(4, 8), WireKind::Wire);
        sheet.place_pinned(
            "R",
            Point::new(0, 0),
            vec![
                Pin::new("1", Point::new(0, 0)),
                Pin::new("2", Point::new(0, 8)),
            ],
        );

        let written = of(sheet.document(), "Unfinished");
        // The connections are right, and what is missing is named rather
        // than made up.
        assert_eq!(written.lines, ["R1 1 2"]);
        assert_eq!(written.wanting, ["R1 has no value"]);
    }

    #[test]
    fn the_ground_symbol_is_not_written_as_a_part() {
        let written = of(a_divider().document(), "Divider");
        assert!(
            !written.lines.iter().any(|line| line.starts_with("GND")),
            "{:?}",
            written.lines
        );
    }

    #[test]
    fn a_part_taken_out_of_the_circuit_is_left_out() {
        let mut sheet = a_divider();
        let parts: Vec<_> = sheet.document().parts().iter().map(|it| it.id).collect();
        sheet.select(parts[0], false);
        sheet.hide_or_reconnect_selection();

        let written = of(sheet.document(), "Divider");
        assert!(!written.lines.iter().any(|line| line.starts_with("R1 ")));
    }

    #[test]
    fn a_part_that_joins_nothing_is_named_rather_than_written_wrong() {
        let mut sheet = Sheet::default();
        let alone = sheet.place_pinned(
            "R",
            Point::new(20, 20),
            vec![Pin::new("1", Point::new(0, 0))],
        );
        sheet.set_value(alone, "1k");

        let written = of(sheet.document(), "Nothing");
        assert!(written.is_empty());
        assert_eq!(written.wanting, ["R1 joins nothing"]);
    }

    #[test]
    fn a_chip_with_a_loose_pin_is_written_short_and_the_pin_is_named() {
        let mut sheet = Sheet::default();
        sheet.draw_wire(Point::new(0, 0), Point::new(4, 0), WireKind::Wire);
        let chip = sheet.place_pinned(
            "U",
            Point::new(0, 0),
            vec![
                Pin::new("IN", Point::new(0, 0)),
                Pin::new("RESET", Point::new(0, 9)),
            ],
        );
        sheet.set_value(chip, "7400");

        let written = of(sheet.document(), "Loose");
        // One node, because only one pin is on a net - and it says so
        // rather than writing a node that is not there.
        assert_eq!(written.lines, ["U1 1 7400"]);
        assert_eq!(written.wanting, ["U1 pin RESET joins nothing"]);
    }

    #[test]
    fn the_nodes_come_in_the_order_the_part_lists_its_pins() {
        // The same two nets, and a part whose pins name them the other way
        // round: the netlist follows the part, not the nets.
        let mut sheet = Sheet::default();
        sheet.draw_wire(Point::new(0, 0), Point::new(4, 0), WireKind::Wire);
        sheet.draw_wire(Point::new(0, 8), Point::new(4, 8), WireKind::Wire);

        let forwards = sheet.place_pinned(
            "R",
            Point::new(0, 0),
            vec![
                Pin::new("1", Point::new(0, 0)),
                Pin::new("2", Point::new(0, 8)),
            ],
        );
        sheet.set_value(forwards, "1k");
        let backwards = sheet.place_pinned(
            "R",
            Point::new(0, 0),
            vec![
                Pin::new("1", Point::new(0, 8)),
                Pin::new("2", Point::new(0, 0)),
            ],
        );
        sheet.set_value(backwards, "2k");

        let written = of(sheet.document(), "Order");
        assert_eq!(written.lines, ["R1 1 2 1k", "R2 2 1 2k"]);
    }

    #[test]
    fn a_sheet_with_nothing_on_it_writes_a_title_and_an_end() {
        let written = of(Sheet::default().document(), "Empty");
        assert!(written.is_empty());
        assert_eq!(written.to_text(), format!("Empty\n{END}\n"));
    }

    #[test]
    fn an_operating_point_is_asked_for_with_one_word() {
        assert_eq!(Analysis::OperatingPoint.directive(), ".OP");
    }

    #[test]
    fn a_transient_names_its_step_and_its_stop() {
        let over_time = Analysis::Transient {
            step: "1u".to_owned(),
            stop: "1m".to_owned(),
            start: "0".to_owned(),
        };
        // A start of zero is left off, as a netlist written by hand does.
        assert_eq!(over_time.directive(), ".TRAN 1u 1m");

        let later = Analysis::Transient {
            step: "1u".to_owned(),
            stop: "1m".to_owned(),
            start: "100u".to_owned(),
        };
        assert_eq!(later.directive(), ".TRAN 1u 1m 100u");
    }

    #[test]
    fn a_frequency_sweep_says_how_it_is_spaced() {
        assert_eq!(
            Analysis::Ac {
                sweep: Sweep::Decade,
                points: 10,
                from: "1".to_owned(),
                to: "1meg".to_owned(),
            }
            .directive(),
            ".AC DEC 10 1 1meg"
        );
        assert_eq!(Sweep::Decade.word(), "DEC");
        assert_eq!(Sweep::Octave.word(), "OCT");
        assert_eq!(Sweep::Linear.word(), "LIN");
    }

    #[test]
    fn a_dc_sweep_names_the_source_it_sweeps() {
        assert_eq!(
            Analysis::DcSweep {
                source: "V1".to_owned(),
                from: "0".to_owned(),
                to: "5".to_owned(),
                step: "0.1".to_owned(),
            }
            .directive(),
            ".DC V1 0 5 0.1"
        );
    }

    #[test]
    fn what_is_asked_for_is_written_before_the_end() {
        let text = of(a_divider().document(), "Divider")
            .asking_for(Analysis::OperatingPoint)
            .to_text();
        assert_eq!(text, format!("Divider\nR1 1 2 1k\nR2 2 0 2k\n.OP\n{END}\n"));
    }

    #[test]
    fn a_netlist_that_asks_for_nothing_describes_the_circuit_and_stops() {
        let written = of(a_divider().document(), "Divider");
        assert_eq!(written.asking, None);
        assert!(!written.to_text().contains(".OP"));
    }

    #[test]
    fn a_value_written_with_a_suffix_is_passed_through_untouched() {
        // SPICE reads the suffixes itself, so nothing is converted on the
        // way and nothing is lost to rounding.
        let over_time = Analysis::Transient {
            step: "10n".to_owned(),
            stop: "2.5m".to_owned(),
            start: "0".to_owned(),
        };
        assert!(over_time.directive().contains("10n"));
        assert!(over_time.directive().contains("2.5m"));
    }

    #[test]
    fn ground_is_recognised_however_it_is_written() {
        assert!(is_ground("GND"));
        assert!(is_ground("gnd"));
        assert!(!is_ground("R"));
    }

    #[test]
    fn the_same_sheet_always_writes_the_same_netlist() {
        let once = of(a_divider().document(), "Divider").to_text();
        let twice = of(a_divider().document(), "Divider").to_text();
        assert_eq!(once, twice);
    }
}
