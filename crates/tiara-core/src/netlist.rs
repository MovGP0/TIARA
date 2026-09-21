//! What is joined to what.
//!
//! A circuit is not a picture of parts and lines: it is a set of nets, each
//! one everything that is electrically the same point. Nothing electrical
//! can be said about a sheet until that is worked out - not a simulation,
//! not a rules check, not a netlist to export - so this is the first of it.
//!
//! Two wires are the same net when they touch. Touching means sharing an
//! end, or one ending where another ends: the sheet draws wires between
//! whole grid squares, so touching is two places being the same place, and
//! there is no question of nearly.
//!
//! A part joins a net at each of its pins. Where the symbol is not known
//! the part carries none, and then it joins at its own place - which is all
//! that could be said before [`crate::ddb_device`] worked out where a pin
//! sits.

use std::collections::BTreeMap;

use crate::schematic_document::{Document, Id, Point, WireKind};

/// One net: everything that is electrically the same point.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Net {
    /// What the net is called. Numbered from one, in the order the nets
    /// are found, which follows the order the wires were drawn.
    pub number: u32,
    /// Every place on the sheet that is this net.
    pub places: Vec<Point>,
    /// The parts that join it, each named once however many of its pins
    /// land on this net.
    pub parts: Vec<Id>,
    /// Which pin of which part joins it, for the parts that carry pins.
    ///
    /// This is what a netlist for a simulator is written from: a part on a
    /// net is not enough, it has to say which of its pins.
    pub pins: Vec<(Id, String)>,
    /// Whether any of the lines making it up is a bus rather than a wire.
    pub is_a_bus: bool,
}

impl Net {
    /// What the net is called on the sheet.
    #[must_use]
    pub fn name(&self) -> String {
        format!("N{}", self.number)
    }

    /// Whether a place is on this net.
    #[must_use]
    pub fn holds(&self, place: Point) -> bool {
        self.places.contains(&place)
    }
}

/// The nets of a sheet, in the order they are found.
#[must_use]
pub fn nets(document: &Document) -> Vec<Net> {
    // Every wire joins its two ends. Places are given a number and the
    // numbers are merged until nothing more merges, which is the whole of
    // working out what is joined to what.
    let mut of_place: BTreeMap<Point, usize> = BTreeMap::new();
    let mut joined: Vec<usize> = Vec::new();
    let mut buses: Vec<bool> = Vec::new();

    for wire in document.wires() {
        let from = number_of(wire.from, &mut of_place, &mut joined, &mut buses);
        let to = number_of(wire.to, &mut of_place, &mut joined, &mut buses);
        merge(&mut joined, from, to);
        if wire.kind == WireKind::Bus {
            let root = root_of(&joined, from);
            if let Some(flag) = buses.get_mut(root) {
                *flag = true;
            }
        }
    }

    // Gather the places under the number each ended up with, keeping the
    // order they were first seen so the numbering follows the drawing.
    let mut order: Vec<usize> = Vec::new();
    let mut places: BTreeMap<usize, Vec<Point>> = BTreeMap::new();
    let mut bus: BTreeMap<usize, bool> = BTreeMap::new();
    let mut seen: Vec<(Point, usize)> = of_place.into_iter().collect();
    seen.sort_by_key(|(_, number)| *number);

    for (place, number) in seen {
        let root = root_of(&joined, number);
        if !order.contains(&root) {
            order.push(root);
        }
        places.entry(root).or_default().push(place);
        let is_a_bus = buses.get(number).copied().unwrap_or_default()
            || buses.get(root).copied().unwrap_or_default();
        let flag = bus.entry(root).or_default();
        *flag = *flag || is_a_bus;
    }

    let mut found: Vec<Net> = order
        .into_iter()
        .enumerate()
        .map(|(at, root)| Net {
            #[allow(
                clippy::cast_possible_truncation,
                reason = "a sheet does not hold four thousand million nets"
            )]
            number: at as u32 + 1,
            places: places.remove(&root).unwrap_or_default(),
            parts: Vec::new(),
            pins: Vec::new(),
            is_a_bus: bus.remove(&root).unwrap_or_default(),
        })
        .collect();

    // A part joins a net at each of its pins, or at its own place where it
    // has none.
    for part in document.parts() {
        if part.hidden {
            continue;
        }
        if part.pins.is_empty() {
            if let Some(net) = found.iter_mut().find(|net| net.holds(part.at)) {
                net.parts.push(part.id);
            }
            continue;
        }
        for (name, at) in part.pin_places() {
            let Some(net) = found.iter_mut().find(|net| net.holds(at)) else {
                continue;
            };
            if !net.parts.contains(&part.id) {
                net.parts.push(part.id);
            }
            net.pins.push((part.id, name.to_owned()));
        }
    }

    found
}

/// The net at a place, if there is one.
#[must_use]
pub fn net_at(document: &Document, place: Point) -> Option<Net> {
    nets(document).into_iter().find(|net| net.holds(place))
}

/// The parts that join no net at all.
///
/// A part on its own is what a rules check complains about first, and what
/// tells a circuit that has been drawn from one that has only been laid
/// out. A part that carries pins counts as joined once any one of them is,
/// so a chip with one pin left loose is reported by [`loose_pins`] rather
/// than here.
#[must_use]
pub fn unjoined(document: &Document) -> Vec<Id> {
    let found = nets(document);
    document
        .parts()
        .iter()
        .filter(|part| !part.hidden)
        .filter(|part| !found.iter().any(|net| net.parts.contains(&part.id)))
        .map(|part| part.id)
        .collect()
}

/// The pins that are on no net, as part and pin name.
///
/// A rules check wants these: a chip whose other pins are wired but whose
/// reset is loose is a mistake that a part-level check cannot see.
#[must_use]
pub fn loose_pins(document: &Document) -> Vec<(Id, String)> {
    let found = nets(document);
    let mut loose = Vec::new();
    for part in document.parts() {
        if part.hidden {
            continue;
        }
        for (name, at) in part.pin_places() {
            if !found.iter().any(|net| net.holds(at)) {
                loose.push((part.id, name.to_owned()));
            }
        }
    }
    loose
}

/// The number a place goes by, giving it one if it has none yet.
fn number_of(
    place: Point,
    of_place: &mut BTreeMap<Point, usize>,
    joined: &mut Vec<usize>,
    buses: &mut Vec<bool>,
) -> usize {
    let next = joined.len();
    *of_place.entry(place).or_insert_with(|| {
        joined.push(next);
        buses.push(false);
        next
    })
}

/// Which net a number has ended up merged into.
fn root_of(joined: &[usize], mut number: usize) -> usize {
    while joined.get(number).copied().unwrap_or(number) != number {
        number = joined[number];
    }
    number
}

/// Puts two numbers on the same net.
fn merge(joined: &mut [usize], left: usize, right: usize) {
    let left = root_of(joined, left);
    let right = root_of(joined, right);
    if left == right {
        return;
    }
    // The earlier one wins, so the numbering follows the order things were
    // drawn rather than the order they happened to merge.
    let (keep, drop) = if left < right {
        (left, right)
    } else {
        (right, left)
    };
    if let Some(slot) = joined.get_mut(drop) {
        *slot = keep;
    }
}

#[cfg(test)]
mod tests {
    use super::{loose_pins, net_at, nets, unjoined};
    use crate::schematic_document::{Pin, Point, Rotation, Sheet, WireKind};

    #[test]
    fn a_sheet_with_nothing_on_it_has_no_nets() {
        assert!(nets(Sheet::default().document()).is_empty());
    }

    #[test]
    fn one_wire_is_one_net_of_two_places() {
        let mut sheet = Sheet::default();
        sheet.draw_wire(Point::new(0, 0), Point::new(4, 0), WireKind::Wire);

        let found = nets(sheet.document());
        assert_eq!(found.len(), 1);
        assert_eq!(found[0].name(), "N1");
        assert_eq!(found[0].places.len(), 2);
        assert!(found[0].holds(Point::new(0, 0)));
        assert!(found[0].holds(Point::new(4, 0)));
        assert!(!found[0].holds(Point::new(2, 0)));
    }

    #[test]
    fn two_wires_that_touch_are_one_net() {
        let mut sheet = Sheet::default();
        sheet.draw_wire(Point::new(0, 0), Point::new(4, 0), WireKind::Wire);
        sheet.draw_wire(Point::new(4, 0), Point::new(4, 4), WireKind::Wire);

        let found = nets(sheet.document());
        assert_eq!(found.len(), 1);
        assert_eq!(found[0].places.len(), 3);
    }

    #[test]
    fn two_wires_that_do_not_touch_are_two_nets() {
        let mut sheet = Sheet::default();
        sheet.draw_wire(Point::new(0, 0), Point::new(4, 0), WireKind::Wire);
        sheet.draw_wire(Point::new(0, 8), Point::new(4, 8), WireKind::Wire);

        let found = nets(sheet.document());
        assert_eq!(found.len(), 2);
        assert_eq!(found[0].name(), "N1");
        assert_eq!(found[1].name(), "N2");
    }

    #[test]
    fn a_chain_of_wires_is_one_net_however_it_was_drawn() {
        let mut sheet = Sheet::default();
        // Drawn out of order: the middle one joins the other two last.
        sheet.draw_wire(Point::new(0, 0), Point::new(4, 0), WireKind::Wire);
        sheet.draw_wire(Point::new(8, 0), Point::new(12, 0), WireKind::Wire);
        sheet.draw_wire(Point::new(4, 0), Point::new(8, 0), WireKind::Wire);

        let found = nets(sheet.document());
        assert_eq!(found.len(), 1);
        assert_eq!(found[0].places.len(), 4);
    }

    #[test]
    fn a_part_joins_the_net_its_place_sits_on() {
        let mut sheet = Sheet::default();
        sheet.draw_wire(Point::new(0, 0), Point::new(4, 0), WireKind::Wire);
        let resistor = sheet.place("R", Point::new(4, 0));
        let alone = sheet.place("C", Point::new(20, 20));

        let found = nets(sheet.document());
        assert_eq!(found.len(), 1);
        assert_eq!(found[0].parts, [resistor]);
        assert_eq!(unjoined(sheet.document()), [alone]);
    }

    #[test]
    fn a_part_taken_out_of_the_circuit_joins_nothing() {
        let mut sheet = Sheet::default();
        sheet.draw_wire(Point::new(0, 0), Point::new(4, 0), WireKind::Wire);
        let resistor = sheet.place("R", Point::new(4, 0));
        sheet.select(resistor, false);
        sheet.hide_or_reconnect_selection();

        let found = nets(sheet.document());
        assert!(found[0].parts.is_empty());
        // And it is not complained about either: it was taken out on
        // purpose.
        assert!(unjoined(sheet.document()).is_empty());
    }

    #[test]
    fn a_bus_says_so_and_carries_it_along_the_whole_net() {
        let mut sheet = Sheet::default();
        sheet.draw_wire(Point::new(0, 0), Point::new(4, 0), WireKind::Bus);
        sheet.draw_wire(Point::new(4, 0), Point::new(8, 0), WireKind::Wire);

        let found = nets(sheet.document());
        assert_eq!(found.len(), 1);
        assert!(found[0].is_a_bus);
    }

    #[test]
    fn the_net_at_a_place_is_the_one_holding_it() {
        let mut sheet = Sheet::default();
        sheet.draw_wire(Point::new(0, 0), Point::new(4, 0), WireKind::Wire);
        sheet.draw_wire(Point::new(0, 8), Point::new(4, 8), WireKind::Wire);

        assert_eq!(
            net_at(sheet.document(), Point::new(4, 0)).unwrap().name(),
            "N1"
        );
        assert_eq!(
            net_at(sheet.document(), Point::new(0, 8)).unwrap().name(),
            "N2"
        );
        assert_eq!(net_at(sheet.document(), Point::new(9, 9)), None);
    }

    #[test]
    fn a_part_that_carries_pins_joins_a_net_at_each_of_them() {
        let mut sheet = Sheet::default();
        // Two wires that do not touch each other, and a resistor across
        // them. Without pins this is one part on one net; with pins it is
        // what a divider actually looks like.
        sheet.draw_wire(Point::new(0, 0), Point::new(4, 0), WireKind::Wire);
        sheet.draw_wire(Point::new(9, 0), Point::new(14, 0), WireKind::Wire);
        let resistor = sheet.place_with_pins(
            "R",
            Point::new(4, 0),
            Rotation::None,
            false,
            "R1",
            vec![
                Pin::new("1", Point::new(0, 0)),
                Pin::new("2", Point::new(5, 0)),
            ],
        );

        let found = nets(sheet.document());
        assert_eq!(found.len(), 2);
        assert_eq!(found[0].parts, [resistor]);
        assert_eq!(found[1].parts, [resistor]);
        assert_eq!(found[0].pins, [(resistor, "1".to_owned())]);
        assert_eq!(found[1].pins, [(resistor, "2".to_owned())]);
        assert!(unjoined(sheet.document()).is_empty());
        assert!(loose_pins(sheet.document()).is_empty());
    }

    #[test]
    fn a_part_without_pins_still_joins_at_its_own_place() {
        // Nothing changes for a part whose symbol is not known.
        let mut sheet = Sheet::default();
        sheet.draw_wire(Point::new(0, 0), Point::new(4, 0), WireKind::Wire);
        let resistor = sheet.place("R", Point::new(4, 0));

        let found = nets(sheet.document());
        assert_eq!(found[0].parts, [resistor]);
        assert!(found[0].pins.is_empty());
    }

    #[test]
    fn a_pin_that_is_wired_to_nothing_is_reported() {
        let mut sheet = Sheet::default();
        sheet.draw_wire(Point::new(0, 0), Point::new(4, 0), WireKind::Wire);
        let chip = sheet.place_with_pins(
            "U",
            Point::new(4, 0),
            Rotation::None,
            false,
            "U1",
            vec![
                Pin::new("IN", Point::new(0, 0)),
                Pin::new("RESET", Point::new(0, 4)),
            ],
        );

        // The part is joined, so the part-level check says nothing ...
        assert!(unjoined(sheet.document()).is_empty());
        // ... but the pin-level one names the pin that is loose.
        assert_eq!(loose_pins(sheet.document()), [(chip, "RESET".to_owned())]);
    }

    #[test]
    fn turning_a_part_turns_where_its_pins_are() {
        let pin = Pin::new("1", Point::new(2, 0));
        let at = Point::new(10, 10);

        assert_eq!(pin.at(at, Rotation::None, false), Point::new(12, 10));
        assert_eq!(pin.at(at, Rotation::Quarter, false), Point::new(10, 12));
        assert_eq!(pin.at(at, Rotation::Half, false), Point::new(8, 10));
        assert_eq!(
            pin.at(at, Rotation::ThreeQuarters, false),
            Point::new(10, 8)
        );
        // Mirroring is across the upright, and it happens before the turn.
        assert_eq!(pin.at(at, Rotation::None, true), Point::new(8, 10));
        assert_eq!(pin.at(at, Rotation::Quarter, true), Point::new(10, 8));
    }

    #[test]
    fn a_turned_part_joins_the_net_its_turned_pin_lands_on() {
        let mut sheet = Sheet::default();
        sheet.draw_wire(Point::new(4, 6), Point::new(4, 10), WireKind::Wire);
        let resistor = sheet.place_with_pins(
            "R",
            Point::new(4, 4),
            Rotation::Quarter,
            false,
            "R1",
            vec![Pin::new("1", Point::new(2, 0))],
        );

        // Turned a quarter, the pin that was to the right is below.
        let found = nets(sheet.document());
        assert_eq!(found[0].pins, [(resistor, "1".to_owned())]);
    }

    #[test]
    fn a_part_counts_once_on_a_net_however_many_of_its_pins_land_there() {
        let mut sheet = Sheet::default();
        sheet.draw_wire(Point::new(0, 0), Point::new(4, 0), WireKind::Wire);
        let shorted = sheet.place_with_pins(
            "R",
            Point::new(0, 0),
            Rotation::None,
            false,
            "R1",
            vec![
                Pin::new("1", Point::new(0, 0)),
                Pin::new("2", Point::new(4, 0)),
            ],
        );

        let found = nets(sheet.document());
        assert_eq!(found.len(), 1);
        assert_eq!(found[0].parts, [shorted]);
        // Both pins are on it, and the net says so even though the part is
        // named once.
        assert_eq!(found[0].pins.len(), 2);
    }

    #[test]
    fn a_sheet_of_parts_and_no_wires_joins_nothing() {
        let mut sheet = Sheet::default();
        let first = sheet.place("R", Point::new(0, 0));
        let second = sheet.place("C", Point::new(4, 0));

        assert!(nets(sheet.document()).is_empty());
        assert_eq!(unjoined(sheet.document()), [first, second]);
    }
}
