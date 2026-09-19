//! Writing a board netlist for another program to read.
//!
//! The file is in the interchange format of a board-layout package of the late
//! nineteen-eighties, and this writes its header: what the file claims to be,
//! the units it is measured in, and — the part worth having — the table that
//! says which drawing layer every kind of thing goes on.
//!
//! The header does not say TINA anywhere. The file announces itself as the work
//! of a different program at a version below one, which is what a format written
//! to be read by somebody else looks like: the name in the file is the name the
//! reader expects, not the name of whatever wrote it.

/// What the file says the format version is.
///
/// Part of Ghidra function `FUN_01b36eb0` at `0x01B36EB0`.
pub const FORMAT_REVISION: &str = "1.30";

/// What the file says wrote it.
///
/// Part of Ghidra function `FUN_01b36eb0` at `0x01B36EB0`.
///
/// Not this program, and a version number below one. Anything reading these
/// files and trusting this field is told something that has not been true for a
/// very long time.
pub const CLAIMED_PROGRAM: &str = "PC-CARDS Version 0.02";

/// What the file says it holds.
///
/// Part of Ghidra function `FUN_01b36eb0` at `0x01B36EB0`.
pub const DATABASE_TYPE: &str = "PC-Board";

/// What the file says its own revision is.
///
/// Part of Ghidra function `FUN_01b36eb0` at `0x01B36EB0`.
pub const DATABASE_REVISION: &str = "1.0";

/// What everything in the file is measured in.
///
/// Part of Ghidra function `FUN_01b36eb0` at `0x01B36EB0`.
///
/// Thousandths of an inch, written outright — so the file carries no way to say
/// anything else, and a board designed in millimetres has to be converted
/// before it can be written at all.
pub const UNIT: &str = "MIL";

/// The grid the file is written on.
///
/// Part of Ghidra function `FUN_01b36eb0` at `0x01B36EB0`.
pub const GRID: i32 = 1;

/// The line the message window shows while this is running.
///
/// Part of Ghidra function `FUN_01b36eb0` at `0x01B36EB0`.
pub const PROGRESS_LINE: &str = "Creating Netlist...";

/// Every layer name the file declares, and the number it is drawn on.
///
/// Implements Ghidra function `FUN_01b36eb0` at `0x01B36EB0`.
///
/// Twenty-six names over fourteen numbers, so most numbers carry more than one
/// name. Eight of them carry exactly two: an outline and its flooded twin, whose
/// name is the same idea with `FL` in front. A layer and the copper poured onto
/// it are therefore one layer, told apart only by which name was used to write
/// to it — which means a reader cannot tell a drawn outline from a pour by the
/// layer alone.
pub const LAYERS: [(&str, i32); 26] = [
    ("PADCOM", 7),
    ("FLCOMP", 7),
    ("PADSLD", 8),
    ("FLSOLD", 8),
    ("PADINT", 9),
    ("FLINT", 9),
    ("GNDCOM", 10),
    ("FLGCON", 10),
    ("GNDCLR", 12),
    ("FLGCLR", 12),
    ("PWRCLR", 13),
    ("FLPCLR", 13),
    ("SLDMSK", 14),
    ("FLSMSK", 14),
    ("DRILL", 15),
    ("FLDRLL", 15),
    ("PIN", 4),
    ("BRDOUT", 4),
    ("FLTARG", 4),
    ("SLKSCR", 6),
    ("ATTR", 6),
    ("REFDES", 6),
    ("DEVICE", 5),
    ("COMP", 1),
    ("SOLDER", 2),
    ("INT1", 3),
];

/// Implements part of Ghidra function `FUN_01b36eb0` at `0x01B36EB0`.
///
/// Which number one layer name is drawn on.
#[must_use]
pub fn layer_number(name: &str) -> Option<i32> {
    LAYERS
        .iter()
        .find(|(held, _)| *held == name)
        .map(|(_, number)| *number)
}

/// Implements part of Ghidra function `FUN_01b36eb0` at `0x01B36EB0`.
///
/// Every name drawn on one number.
#[must_use]
pub fn names_on(number: i32) -> Vec<&'static str> {
    LAYERS
        .iter()
        .filter(|(_, held)| *held == number)
        .map(|(name, _)| *name)
        .collect()
}

/// Implements part of Ghidra function `FUN_01b36eb0` at `0x01B36EB0`.
///
/// Every number the table uses, in order.
#[must_use]
pub fn numbers_in_use() -> Vec<i32> {
    let mut found: Vec<i32> = LAYERS.iter().map(|(_, number)| *number).collect();
    found.sort_unstable();
    found.dedup();
    found
}

/// Implements part of Ghidra function `FUN_01b36eb0` at `0x01B36EB0`.
///
/// The numbers between the lowest and the highest that nothing is drawn on.
///
/// One. A gap in a table like this is a layer that was taken out and not
/// renumbered, which is the same shape of evidence as a gap in a table of error
/// codes.
#[must_use]
pub fn unused_numbers() -> Vec<i32> {
    let used = numbers_in_use();
    let lowest = used.first().copied().unwrap_or(0);
    let highest = used.last().copied().unwrap_or(0);
    (lowest..=highest)
        .filter(|number| !used.contains(number))
        .collect()
}

/// What marks a name as the flooded twin of another.
///
/// Part of Ghidra function `FUN_01b36eb0` at `0x01B36EB0`.
pub const FLOOD_PREFIX: &str = "FL";

/// Implements part of Ghidra function `FUN_01b36eb0` at `0x01B36EB0`.
///
/// The numbers carrying exactly one outline and one flooded twin.
#[must_use]
pub fn paired_numbers() -> Vec<i32> {
    numbers_in_use()
        .into_iter()
        .filter(|number| {
            let names = names_on(*number);
            names.len() == 2
                && names
                    .iter()
                    .filter(|name| name.starts_with(FLOOD_PREFIX))
                    .count()
                    == 1
        })
        .collect()
}

/// Implements part of Ghidra function `FUN_01b36eb0` at `0x01B36EB0`.
///
/// The numbers carrying more than two names.
///
/// Two of them, and they are the interesting ones. On one, the pins, the board
/// outline and the targets are all drawn together. On the other, the silkscreen
/// carries the attributes and the reference designators — so anything written to
/// describe a part ends up in the same ink as the part's own outline.
#[must_use]
pub fn crowded_numbers() -> Vec<i32> {
    numbers_in_use()
        .into_iter()
        .filter(|number| names_on(*number).len() > 2)
        .collect()
}

/// The view the file records.
///
/// Part of Ghidra function `FUN_01b36eb0` at `0x01B36EB0`.
///
/// Where the reader should be looking when it opens the file, written outright
/// rather than worked out from the board — so every file this writes opens at
/// the same place whatever is on it.
pub const VIEW: (i32, i32, i32) = (750, 350, 8);

/// The spacing of the grid the reader should show.
///
/// Part of Ghidra function `FUN_01b36eb0` at `0x01B36EB0`.
pub const GRID_SPACING: (i32, i32) = (50, 50);

/// The visibility of each layer, as the file records it.
///
/// Part of Ghidra function `FUN_01b36eb0` at `0x01B36EB0`.
///
/// Twenty-seven numbers where there are fourteen layers, so this is not one
/// entry per layer and cannot be read as one.
pub const LAYER_VISIBILITY: [i32; 27] = [
    24, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0, 2, 2, 0,
];

/// The sections the file is built out of, in order.
///
/// Part of Ghidra function `FUN_01b36eb0` at `0x01B36EB0`.
pub const SECTIONS: [&str; 9] = [
    "COMPONENT",
    "ENVIRONMENT",
    "USER",
    "DISPLAY",
    "SYMBOL",
    "PIN_DEF",
    "PIC",
    "ATR",
    "DETAIL",
];

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn no_layer_name_is_listed_twice() {
        let mut names: Vec<&str> = LAYERS.iter().map(|(name, _)| *name).collect();
        let before = names.len();
        names.sort_unstable();
        names.dedup();

        assert_eq!(names.len(), before);
    }

    #[test]
    fn there_are_more_names_than_numbers() {
        assert!(LAYERS.len() > numbers_in_use().len());
        assert_eq!(LAYERS.len(), 26);
        assert_eq!(numbers_in_use().len(), 14);
    }

    #[test]
    fn a_name_the_table_does_not_hold_is_drawn_nowhere() {
        assert_eq!(layer_number("NOSUCH"), None);
        assert_eq!(layer_number(""), None);
        assert_eq!(layer_number("DRILL"), Some(15));
    }

    #[test]
    fn eight_numbers_carry_an_outline_and_its_flooded_twin() {
        // So a layer and the copper poured onto it are one layer, told apart
        // only by the name used to write to it.
        assert_eq!(paired_numbers(), [7, 8, 9, 10, 12, 13, 14, 15]);
    }

    #[test]
    fn each_of_those_pairs_is_one_plain_name_and_one_beginning_with_the_prefix() {
        for number in paired_numbers() {
            let names = names_on(number);

            assert_eq!(names.len(), 2);
            assert_eq!(
                names
                    .iter()
                    .filter(|name| name.starts_with(FLOOD_PREFIX))
                    .count(),
                1,
                "{number}"
            );
        }
    }

    #[test]
    fn two_numbers_carry_three_names_each() {
        assert_eq!(crowded_numbers(), [4, 6]);
    }

    #[test]
    fn the_pins_the_board_outline_and_the_targets_are_one_layer() {
        let mut names = names_on(4);
        names.sort_unstable();

        assert_eq!(names, ["BRDOUT", "FLTARG", "PIN"]);
    }

    #[test]
    fn and_the_silkscreen_carries_the_attributes_and_the_reference_designators() {
        // So anything written to describe a part ends up in the same ink as the
        // part's own outline.
        let mut names = names_on(6);
        names.sort_unstable();

        assert_eq!(names, ["ATTR", "REFDES", "SLKSCR"]);
    }

    #[test]
    fn four_numbers_carry_one_name_each() {
        let alone: Vec<i32> = numbers_in_use()
            .into_iter()
            .filter(|number| names_on(*number).len() == 1)
            .collect();

        assert_eq!(alone, [1, 2, 3, 5]);
    }

    #[test]
    fn exactly_one_number_in_the_range_is_drawn_on_by_nothing() {
        // A gap, which is a layer taken out and not renumbered.
        assert_eq!(unused_numbers(), [11]);
    }

    #[test]
    fn and_the_numbers_start_at_one_rather_than_nought() {
        assert_eq!(numbers_in_use().first(), Some(&1));
        assert_eq!(numbers_in_use().last(), Some(&15));
    }

    #[test]
    fn every_number_fits_in_four_bits() {
        // Which is what a layer number in a format of this age is.
        for number in numbers_in_use() {
            assert!((0..16).contains(&number), "{number}");
        }
    }

    #[test]
    fn the_file_does_not_say_which_program_really_wrote_it() {
        assert_eq!(CLAIMED_PROGRAM, "PC-CARDS Version 0.02");
        assert!(!CLAIMED_PROGRAM.to_lowercase().contains("tina"));
    }

    #[test]
    fn and_claims_a_version_below_one() {
        let version = CLAIMED_PROGRAM
            .rsplit(' ')
            .next()
            .expect("a version at the end");

        assert!(version.starts_with("0."));
    }

    #[test]
    fn everything_is_measured_in_thousandths_of_an_inch_and_nothing_else() {
        // So a board designed in millimetres has to be converted before it can
        // be written at all.
        assert_eq!(UNIT, "MIL");
    }

    #[test]
    fn the_view_is_written_outright_rather_than_worked_out_from_the_board() {
        // So every file opens at the same place whatever is on it.
        assert_eq!(VIEW, (750, 350, 8));
        assert_eq!(GRID_SPACING, (50, 50));
    }

    #[test]
    fn the_visibility_line_is_not_one_entry_per_layer() {
        assert_ne!(LAYER_VISIBILITY.len(), numbers_in_use().len());
        assert_ne!(LAYER_VISIBILITY.len(), LAYERS.len());
        assert_eq!(LAYER_VISIBILITY.len(), 27);
    }

    #[test]
    fn the_sections_are_named_once_each() {
        let mut named = SECTIONS.to_vec();
        let before = named.len();
        named.sort_unstable();
        named.dedup();

        assert_eq!(named.len(), before);
    }

    #[test]
    fn the_file_opens_with_the_component_section() {
        assert_eq!(SECTIONS[0], "COMPONENT");
        assert_eq!(SECTIONS[1], "ENVIRONMENT");
    }

    #[test]
    fn the_progress_line_names_what_it_is_making() {
        assert!(PROGRESS_LINE.contains("Netlist"));
    }

    #[test]
    fn the_format_and_the_database_carry_their_own_revisions() {
        assert_eq!(FORMAT_REVISION, "1.30");
        assert_eq!(DATABASE_REVISION, "1.0");
        assert_ne!(FORMAT_REVISION, DATABASE_REVISION);
        assert_eq!(DATABASE_TYPE, "PC-Board");
        assert_eq!(GRID, 1);
    }
}
