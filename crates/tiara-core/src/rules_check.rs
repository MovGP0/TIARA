//! Putting a drawn sheet through the recovered electrical rules check.
//!
//! [`crate::electrical_rules`] is the original's own check, recovered
//! whole: the floating and grounded rules, the pairwise matrix, the
//! unconnected wires, the single jumpers, the duplicate names. What it
//! never had was anything to check. It takes an [`ErcSchematic`] of nodes
//! and pins, and the port had no nets to build one from.
//!
//! It has now. [`crate::netlist`] says what is joined to what and which pin
//! of which part is on each net, so this turns a [`Document`] into the
//! shape the check reads.
//!
//! `Analysis > ERC...` is the first of the forty-three analysis commands
//! that can be answered without a solver, because a rules check is about
//! how a circuit is drawn rather than about what it does.
//!
//! **What a pin is electrically is not known yet.** The device libraries
//! give a pin's name and its place; nothing recovered so far says whether
//! it is an input, an output or a power pin. Every pin is therefore
//! [`PinElectricalType::Passive`], which is the one kind the matrix never
//! complains about - so the pairwise rules pass everything until that is
//! worked out. The rules that do not need it are live: a node with one pin
//! on it, a node with nothing driving it, a wire joined to nothing, a name
//! used twice. Saying which rules are asleep is better than reporting
//! confident nonsense from a guess about pin types.

use crate::electrical_rules::{
    CheckReport, ElectricalRulesSettings, ErcComponent, ErcNode, ErcPin, ErcSchematic, ErcWire,
    ObjectId, PageId, PinElectricalType, ResultTarget, run_electrical_rules_check,
};
use crate::netlist;
use crate::schematic_document::{Document, Id};
use crate::spice_netlist::is_ground;

/// The mode the original passes for a check asked for by hand.
pub const BY_HAND: u8 = crate::electrical_rules::MANUAL_RECHECK_MODE;

/// Turns a sheet into the shape the recovered check reads.
///
/// A net becomes a node carrying one pin per part pin on it. A node is
/// grounded when a ground part sits on it, and floating when nothing but
/// one pin is there.
#[must_use]
pub fn schematic_of(document: &Document) -> ErcSchematic {
    let nets = netlist::nets(document);

    let grounded_nets: Vec<u32> = document
        .parts()
        .iter()
        .filter(|part| !part.hidden && is_ground(&part.kind))
        .flat_map(|part| {
            nets.iter()
                .filter(|net| part.joins().iter().any(|at| net.holds(*at)))
                .map(|net| net.number)
        })
        .collect();

    let nodes: Vec<ErcNode> = nets
        .iter()
        .map(|net| {
            let pins: Vec<ErcPin> = net
                .pins
                .iter()
                .map(|(part, pin)| ErcPin {
                    name: format!("{}.{pin}", called(document, *part)),
                    // Until a pin's electrical kind is recovered, every one
                    // is passive: the kind the matrix never faults.
                    electrical_type: PinElectricalType::Passive,
                    target: target_for(*part),
                })
                .collect();
            ErcNode {
                name: net.name(),
                floating: pins.len() < 2 && !grounded_nets.contains(&net.number),
                grounded: grounded_nets.contains(&net.number),
                pins,
            }
        })
        .collect();

    // A part is a component the check knows by its label, so that two
    // parts called the same thing are caught.
    let components: Vec<ErcComponent> = document
        .parts()
        .iter()
        .filter(|part| !part.hidden && !is_ground(&part.kind))
        .map(|part| ErcComponent {
            identifier: part.label.clone(),
            single_jumper: false,
            target: target_for(part.id),
        })
        .collect();

    // A wire is joined when both its ends are on a net, which after the
    // netlist has run they always are - so what this catches is a part
    // whose pins reach nothing, through the node rules above.
    let wires: Vec<ErcWire> = document
        .wires()
        .iter()
        .enumerate()
        .map(|(at, wire)| ErcWire {
            name: format!("W{}", at + 1),
            connected: nets.iter().any(|net| net.holds(wire.from))
                && nets.iter().any(|net| net.holds(wire.to)),
            target: ResultTarget {
                page: PageId(0),
                #[allow(
                    clippy::cast_possible_truncation,
                    reason = "a sheet does not hold four thousand million wires"
                )]
                object: ObjectId(at as u64),
                text_identifier: None,
            },
        })
        .collect();

    ErcSchematic {
        initialization_status: 1,
        detailed_checks_available: true,
        connectivity_source: nodes,
        connectivity_cache: Vec::new(),
        wires,
        components,
        nested_schematics: Vec::new(),
        engine_messages: Vec::new(),
    }
}

/// Runs the check over a sheet and gives what it found.
#[must_use]
pub fn check(document: &Document, settings: &ElectricalRulesSettings) -> CheckReport {
    let mut schematic = schematic_of(document);
    run_electrical_rules_check(&mut schematic, settings, BY_HAND)
}

/// The findings the port can add that the recovered check cannot see.
///
/// The original works from a netlist it already had, so a pin joined to
/// nothing never reached it. The port knows where every pin is, so it can
/// say - and this is the first thing someone drawing a circuit gets wrong.
#[must_use]
pub fn loose_pins(document: &Document) -> Vec<String> {
    netlist::loose_pins(document)
        .into_iter()
        .map(|(part, pin)| format!("{} pin {pin} is joined to nothing", called(document, part)))
        .collect()
}

/// What a part is called, falling back on its kind where it has no label.
fn called(document: &Document, id: Id) -> String {
    document
        .parts()
        .iter()
        .find(|part| part.id == id)
        .map(|part| {
            if part.label.is_empty() {
                part.kind.clone()
            } else {
                part.label.clone()
            }
        })
        .unwrap_or_default()
}

/// Where a finding points, which for the port is the part itself.
fn target_for(id: Id) -> ResultTarget {
    ResultTarget {
        page: PageId(0),
        object: ObjectId(u64::from(id.number())),
        text_identifier: None,
    }
}

#[cfg(test)]
mod tests {
    use super::{check, loose_pins, schematic_of};
    use crate::electrical_rules::{ElectricalRulesSettings, PinElectricalType};
    use crate::schematic_document::{Pin, Point, Sheet, WireKind};

    fn a_divider() -> Sheet {
        let mut sheet = Sheet::default();
        sheet.draw_wire(Point::new(0, 0), Point::new(4, 0), WireKind::Wire);
        sheet.draw_wire(Point::new(0, 8), Point::new(4, 8), WireKind::Wire);

        let across = vec![
            Pin::new("1", Point::new(0, 0)),
            Pin::new("2", Point::new(0, 8)),
        ];
        sheet.place_pinned("R", Point::new(0, 0), across.clone());
        sheet.place_pinned("R", Point::new(0, 0), across);
        sheet.place_pinned(
            "GND",
            Point::new(0, 8),
            vec![Pin::new("1", Point::new(0, 0))],
        );
        sheet
    }

    #[test]
    fn a_net_becomes_a_node_carrying_the_pins_on_it() {
        let schematic = schematic_of(a_divider().document());
        assert_eq!(schematic.connectivity_source.len(), 2);

        let first = &schematic.connectivity_source[0];
        assert_eq!(first.name, "N1");
        assert_eq!(first.pins.len(), 2);
        assert_eq!(first.pins[0].name, "R1.1");
        assert!(!first.floating);
    }

    #[test]
    fn the_net_a_ground_part_sits_on_is_marked_grounded() {
        let schematic = schematic_of(a_divider().document());
        let grounded: Vec<&str> = schematic
            .connectivity_source
            .iter()
            .filter(|node| node.grounded)
            .map(|node| node.name.as_str())
            .collect();
        assert_eq!(grounded, ["N2"]);
    }

    #[test]
    fn a_node_with_one_pin_and_no_ground_is_floating() {
        let mut sheet = Sheet::default();
        sheet.draw_wire(Point::new(0, 0), Point::new(4, 0), WireKind::Wire);
        sheet.place_pinned("R", Point::new(0, 0), vec![Pin::new("1", Point::new(0, 0))]);

        let schematic = schematic_of(sheet.document());
        assert!(schematic.connectivity_source[0].floating);
    }

    #[test]
    fn every_pin_is_passive_until_its_kind_is_recovered() {
        let schematic = schematic_of(a_divider().document());
        for node in &schematic.connectivity_source {
            for pin in &node.pins {
                assert_eq!(pin.electrical_type, PinElectricalType::Passive);
            }
        }
    }

    #[test]
    fn the_ground_symbol_is_not_a_component_to_be_checked() {
        let schematic = schematic_of(a_divider().document());
        let names: Vec<&str> = schematic
            .components
            .iter()
            .map(|it| it.identifier.as_str())
            .collect();
        assert_eq!(names, ["R1", "R2"]);
    }

    #[test]
    fn the_recovered_check_runs_over_a_drawn_sheet() {
        let report = check(a_divider().document(), &ElectricalRulesSettings::default());
        // It ran and said what it did rather than refusing for want of a
        // schematic, which is all that could happen before.
        assert!(
            report
                .rows
                .iter()
                .any(|row| row.message == "Electrical rules check")
        );
    }

    #[test]
    fn a_sheet_with_nothing_on_it_checks_and_finds_nothing() {
        let report = check(
            Sheet::default().document(),
            &ElectricalRulesSettings::default(),
        );
        // It ran; the only row is the check's own status line, because
        // there is nothing on the sheet to fault.
        assert!(
            report
                .rows
                .iter()
                .any(|row| row.message == "Electrical rules check")
        );
    }

    #[test]
    fn a_pin_joined_to_nothing_is_reported_by_name() {
        let mut sheet = Sheet::default();
        sheet.draw_wire(Point::new(0, 0), Point::new(4, 0), WireKind::Wire);
        sheet.place_pinned(
            "U",
            Point::new(0, 0),
            vec![
                Pin::new("IN", Point::new(0, 0)),
                Pin::new("RESET", Point::new(0, 9)),
            ],
        );

        assert_eq!(
            loose_pins(sheet.document()),
            ["U1 pin RESET is joined to nothing"]
        );
    }

    #[test]
    fn a_wire_is_joined_because_the_netlist_has_already_seen_both_ends() {
        let schematic = schematic_of(a_divider().document());
        assert_eq!(schematic.wires.len(), 2);
        assert!(schematic.wires.iter().all(|wire| wire.connected));
    }
}
