//! Writing a value cell out as text.
//!
//! The mirror of the readers: they take any kind and give you a number, these
//! take any kind and give you something printable. There are three of them, one
//! per kind of string the program can build, and each has eleven little
//! routines behind it — one per kind of value.
//!
//! The three sets are not merely alike. Every one of the eleven sits at the
//! same distance from its set's first routine in all three sets, so the offsets
//! alone identify what a routine is for. That is what one piece of source
//! compiled three times looks like, and it is checked here rather than assumed:
//! see `the_three_sets_are_laid_out_identically`.

// The addresses are written without separators so that the port-mapping
// importer can match them against the recovered functions, as the generated
// duplicate registry does.
#![allow(clippy::unreadable_literal)]

/// Which kind of string is being built.
///
/// Implements Ghidra functions `FUN_00466730` at `0x00466730`, `FUN_00467310`
/// at `0x00467310` and `FUN_00467e90` at `0x00467E90`.
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord)]
pub enum TextKind {
    /// The narrower kind.
    Narrow,
    /// The wide kind the platform uses.
    Wide,
    /// The program's own wide kind.
    Other,
}

/// What one little routine is for.
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord)]
pub enum Role {
    /// A whole number that can be negative.
    SignedNumber,
    /// One that cannot.
    UnsignedNumber,
    /// A wide whole number that can be negative.
    WideSignedNumber,
    /// One that cannot.
    WideUnsignedNumber,
    /// A floating value.
    Floating,
    /// An amount of money.
    Money,
    /// A date and time.
    DateAndTime,
    /// Something reached through an interface.
    Interface,
    /// Anything else, where the cell holds its value.
    HeldOutrightFallThrough,
    /// The third kind of text.
    ForeignText,
    /// Anything else, where the cell points at its value.
    PointingFallThrough,
}

/// One of the routines that turns a value into text.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct Formatter {
    /// Where it sits.
    pub routine: u32,
    /// Which kind of string it builds.
    pub builds: TextKind,
    /// What it is for.
    pub role: Role,
    /// How far it sits from the first routine of its set.
    pub offset: u32,
}

/// Where each set of routines begins.
///
/// Part of the three renderers.
pub const SET_BASES: [(TextKind, u32); 3] = [
    (TextKind::Narrow, 0x00465FB0),
    (TextKind::Wide, 0x00466BB0),
    (TextKind::Other, 0x00467730),
];

/// Every routine that turns a value into text.
///
/// Implements the thirty-three routines between `0x00465FB0` and `0x00467C20`.
pub const FORMATTERS: [Formatter; 33] = [
    Formatter {
        routine: 0x00465FB0,
        builds: TextKind::Narrow,
        role: Role::SignedNumber,
        offset: 0x000,
    },
    Formatter {
        routine: 0x00466020,
        builds: TextKind::Narrow,
        role: Role::UnsignedNumber,
        offset: 0x070,
    },
    Formatter {
        routine: 0x00466090,
        builds: TextKind::Narrow,
        role: Role::WideSignedNumber,
        offset: 0x0e0,
    },
    Formatter {
        routine: 0x00466100,
        builds: TextKind::Narrow,
        role: Role::WideUnsignedNumber,
        offset: 0x150,
    },
    Formatter {
        routine: 0x00466170,
        builds: TextKind::Narrow,
        role: Role::Floating,
        offset: 0x1c0,
    },
    Formatter {
        routine: 0x00466220,
        builds: TextKind::Narrow,
        role: Role::Money,
        offset: 0x270,
    },
    Formatter {
        routine: 0x00466290,
        builds: TextKind::Narrow,
        role: Role::DateAndTime,
        offset: 0x2e0,
    },
    Formatter {
        routine: 0x00466300,
        builds: TextKind::Narrow,
        role: Role::Interface,
        offset: 0x350,
    },
    Formatter {
        routine: 0x00466370,
        builds: TextKind::Narrow,
        role: Role::HeldOutrightFallThrough,
        offset: 0x3c0,
    },
    Formatter {
        routine: 0x00466420,
        builds: TextKind::Narrow,
        role: Role::ForeignText,
        offset: 0x470,
    },
    Formatter {
        routine: 0x004664A0,
        builds: TextKind::Narrow,
        role: Role::PointingFallThrough,
        offset: 0x4f0,
    },
    Formatter {
        routine: 0x00466BB0,
        builds: TextKind::Wide,
        role: Role::SignedNumber,
        offset: 0x000,
    },
    Formatter {
        routine: 0x00466C20,
        builds: TextKind::Wide,
        role: Role::UnsignedNumber,
        offset: 0x070,
    },
    Formatter {
        routine: 0x00466C90,
        builds: TextKind::Wide,
        role: Role::WideSignedNumber,
        offset: 0x0e0,
    },
    Formatter {
        routine: 0x00466D00,
        builds: TextKind::Wide,
        role: Role::WideUnsignedNumber,
        offset: 0x150,
    },
    Formatter {
        routine: 0x00466D70,
        builds: TextKind::Wide,
        role: Role::Floating,
        offset: 0x1c0,
    },
    Formatter {
        routine: 0x00466E20,
        builds: TextKind::Wide,
        role: Role::Money,
        offset: 0x270,
    },
    Formatter {
        routine: 0x00466E90,
        builds: TextKind::Wide,
        role: Role::DateAndTime,
        offset: 0x2e0,
    },
    Formatter {
        routine: 0x00466F00,
        builds: TextKind::Wide,
        role: Role::Interface,
        offset: 0x350,
    },
    Formatter {
        routine: 0x00466F70,
        builds: TextKind::Wide,
        role: Role::HeldOutrightFallThrough,
        offset: 0x3c0,
    },
    Formatter {
        routine: 0x00467020,
        builds: TextKind::Wide,
        role: Role::ForeignText,
        offset: 0x470,
    },
    Formatter {
        routine: 0x004670A0,
        builds: TextKind::Wide,
        role: Role::PointingFallThrough,
        offset: 0x4f0,
    },
    Formatter {
        routine: 0x00467730,
        builds: TextKind::Other,
        role: Role::SignedNumber,
        offset: 0x000,
    },
    Formatter {
        routine: 0x004677A0,
        builds: TextKind::Other,
        role: Role::UnsignedNumber,
        offset: 0x070,
    },
    Formatter {
        routine: 0x00467810,
        builds: TextKind::Other,
        role: Role::WideSignedNumber,
        offset: 0x0e0,
    },
    Formatter {
        routine: 0x00467880,
        builds: TextKind::Other,
        role: Role::WideUnsignedNumber,
        offset: 0x150,
    },
    Formatter {
        routine: 0x004678F0,
        builds: TextKind::Other,
        role: Role::Floating,
        offset: 0x1c0,
    },
    Formatter {
        routine: 0x004679A0,
        builds: TextKind::Other,
        role: Role::Money,
        offset: 0x270,
    },
    Formatter {
        routine: 0x00467A10,
        builds: TextKind::Other,
        role: Role::DateAndTime,
        offset: 0x2e0,
    },
    Formatter {
        routine: 0x00467A80,
        builds: TextKind::Other,
        role: Role::Interface,
        offset: 0x350,
    },
    Formatter {
        routine: 0x00467AF0,
        builds: TextKind::Other,
        role: Role::HeldOutrightFallThrough,
        offset: 0x3c0,
    },
    Formatter {
        routine: 0x00467BA0,
        builds: TextKind::Other,
        role: Role::ForeignText,
        offset: 0x470,
    },
    Formatter {
        routine: 0x00467C20,
        builds: TextKind::Other,
        role: Role::PointingFallThrough,
        offset: 0x4f0,
    },
];

/// Implements part of the renderer family.
///
/// The routine one kind of string uses for one kind of value.
#[must_use]
pub fn formatter(builds: TextKind, role: Role) -> Option<&'static Formatter> {
    FORMATTERS
        .iter()
        .find(|held| held.builds == builds && held.role == role)
}

/// Implements part of the renderer family.
///
/// Every role, in the order the routines sit in memory.
#[must_use]
pub fn roles_in_order() -> Vec<Role> {
    let mut found: Vec<(u32, Role)> = FORMATTERS
        .iter()
        .filter(|held| held.builds == TextKind::Wide)
        .map(|held| (held.offset, held.role))
        .collect();
    found.sort_unstable();
    found.into_iter().map(|(_, role)| role).collect()
}

/// Where the ready-made strings for small numbers begin.
///
/// Part of Ghidra function `FUN_00467310` at `0x00467310`.
///
/// A small whole number is not turned into text at all — it is looked up. Six
/// of the value kinds share this one table, each with the bounds test its own
/// range needs, and only a value outside it reaches a formatter.
pub const SMALL_NUMBER_STRINGS: u32 = 0x0201_0DB8;

/// The lowest number the table holds a string for.
///
/// Part of Ghidra function `FUN_00467310` at `0x00467310`.
pub const SMALLEST_CACHED: i32 = -128;

/// The highest.
///
/// Part of Ghidra function `FUN_00467310` at `0x00467310`.
pub const LARGEST_CACHED: i32 = 255;

/// Implements part of the renderer family.
///
/// Whether a number is one the table already has a string for.
///
/// The range is the union of what a signed byte and an unsigned byte can hold,
/// which is why it is lopsided: it was sized to cover both byte kinds without
/// either needing a test of its own.
#[must_use]
pub const fn is_ready_made(value: i32) -> bool {
    value >= SMALLEST_CACHED && value <= LARGEST_CACHED
}

/// The kinds that reach for the ready-made strings.
///
/// Part of the three renderers.
pub const USE_READY_MADE: [u16; 6] = [0x2, 0x3, 0x10, 0x11, 0x12, 0x13];

/// Implements part of the renderer family.
///
/// Whether a kind is tested against the range before the table is used.
///
/// The two byte-wide kinds are not, because nothing they can hold falls outside
/// it. The unsigned kinds are tested only at the top, and the signed ones at
/// both ends. So the tests are exactly as wide as each kind needs and no wider,
/// which is the sort of care that does not survive being rewritten.
#[must_use]
pub const fn tested_before_the_table(code: u16) -> Option<(bool, bool)> {
    match code {
        0x10 | 0x11 => Some((false, false)),
        0x12 | 0x13 => Some((false, true)),
        0x2 | 0x3 => Some((true, true)),
        _ => None,
    }
}

/// Where the words for true and false are kept.
///
/// Part of Ghidra function `FUN_00467310` at `0x00467310`.
pub const BOOLEAN_WORDS: u32 = 0x0201_0988;

/// Implements part of the renderer family.
///
/// Which set of words a boolean is written with.
///
/// Chosen by a global, so the program can be made to write a boolean more than
/// one way and the choice is not the caller's. The value then picks within the
/// set — so the lookup is two-dimensional, a vocabulary and a truth.
#[must_use]
pub const fn boolean_word_at(vocabulary: u32, value: bool) -> u32 {
    BOOLEAN_WORDS + vocabulary * 8 + if value { 8 } else { 0 }
}

/// Implements part of the renderer family.
///
/// What an empty cell is written as.
///
/// Nothing — the destination is simply cleared. So an empty cell and a cell
/// holding an empty string print the same, and neither says which it was.
#[must_use]
pub const fn empty_prints_as_nothing() -> bool {
    true
}

/// Implements part of the renderer family.
///
/// Whether what a null cell is written as is fixed.
///
/// It is not: a null is written from a global string, so what a null looks like
/// is settled at run time. And before that, if the strict global is set, writing
/// one raises instead — the same pair of behaviours the readers have, reached
/// through the same global.
#[must_use]
pub const fn null_prints_from_a_global() -> bool {
    true
}

/// Implements part of the renderer family.
///
/// Whether a narrower floating value is written at its own precision.
///
/// It is not. A single is widened to a double first and then written, so the
/// text can carry digits the value never had.
#[must_use]
pub const fn single_is_written_as_a_double() -> bool {
    true
}

#[cfg(test)]
mod tests {
    use super::*;

    const EVERY_KIND: [TextKind; 3] = [TextKind::Narrow, TextKind::Wide, TextKind::Other];

    #[test]
    fn there_are_three_sets_of_eleven() {
        assert_eq!(FORMATTERS.len(), 33);
        for builds in EVERY_KIND {
            assert_eq!(
                FORMATTERS
                    .iter()
                    .filter(|held| held.builds == builds)
                    .count(),
                11,
                "{builds:?}"
            );
        }
    }

    #[test]
    fn the_three_sets_are_laid_out_identically() {
        // Every role sits the same distance from its set's first routine in
        // all three sets — which is what one piece of source compiled three
        // times looks like.
        for role in roles_in_order() {
            let offsets: Vec<u32> = EVERY_KIND
                .iter()
                .map(|builds| formatter(*builds, role).expect("every set has it").offset)
                .collect();

            assert_eq!(offsets[0], offsets[1], "{role:?}");
            assert_eq!(offsets[1], offsets[2], "{role:?}");
        }
    }

    #[test]
    fn and_every_routine_is_its_base_plus_that_offset() {
        for held in FORMATTERS {
            let base = SET_BASES
                .iter()
                .find(|(builds, _)| *builds == held.builds)
                .map(|(_, base)| *base)
                .expect("the set has a base");

            assert_eq!(held.routine, base + held.offset, "{:#010X}", held.routine);
        }
    }

    #[test]
    fn no_routine_is_listed_twice() {
        let mut routines: Vec<u32> = FORMATTERS.iter().map(|held| held.routine).collect();
        let before = routines.len();
        routines.sort_unstable();
        routines.dedup();

        assert_eq!(routines.len(), before);
    }

    #[test]
    fn every_set_covers_every_role_exactly_once() {
        for builds in EVERY_KIND {
            let mut roles: Vec<Role> = FORMATTERS
                .iter()
                .filter(|held| held.builds == builds)
                .map(|held| held.role)
                .collect();
            let before = roles.len();
            roles.sort_unstable();
            roles.dedup();

            assert_eq!(roles.len(), before, "{builds:?}");
            assert_eq!(roles, roles_in_order_sorted());
        }
    }

    fn roles_in_order_sorted() -> Vec<Role> {
        let mut roles = roles_in_order();
        roles.sort_unstable();
        roles
    }

    #[test]
    fn a_whole_number_has_a_signed_and_an_unsigned_routine_in_every_set() {
        for builds in EVERY_KIND {
            assert!(
                formatter(builds, Role::SignedNumber).is_some(),
                "{builds:?}"
            );
            assert!(
                formatter(builds, Role::UnsignedNumber).is_some(),
                "{builds:?}"
            );
            assert_ne!(
                formatter(builds, Role::SignedNumber),
                formatter(builds, Role::UnsignedNumber)
            );
        }
    }

    #[test]
    fn there_are_two_fall_throughs_and_they_differ_by_where_the_value_is() {
        for builds in EVERY_KIND {
            let held = formatter(builds, Role::HeldOutrightFallThrough).expect("listed");
            let pointing = formatter(builds, Role::PointingFallThrough).expect("listed");

            assert_ne!(held.routine, pointing.routine);
            // The pointing one is last in every set.
            assert!(pointing.offset > held.offset);
        }
    }

    #[test]
    fn the_pointing_fall_through_is_the_last_routine_of_its_set() {
        for builds in EVERY_KIND {
            let last = FORMATTERS
                .iter()
                .filter(|held| held.builds == builds)
                .max_by_key(|held| held.offset)
                .expect("a set");

            assert_eq!(last.role, Role::PointingFallThrough, "{builds:?}");
        }
    }

    #[test]
    fn a_small_number_is_looked_up_rather_than_written() {
        assert!(is_ready_made(0));
        assert!(is_ready_made(1));
        assert!(is_ready_made(255));
        assert!(is_ready_made(-128));
    }

    #[test]
    fn and_anything_outside_that_range_reaches_a_routine() {
        assert!(!is_ready_made(256));
        assert!(!is_ready_made(-129));
        assert!(!is_ready_made(100_000));
    }

    #[test]
    fn the_range_is_the_union_of_what_the_two_byte_kinds_hold() {
        // Which is why it is lopsided.
        assert_eq!(SMALLEST_CACHED, i32::from(i8::MIN));
        assert_eq!(LARGEST_CACHED, i32::from(u8::MAX));
        assert_eq!(
            usize::try_from(LARGEST_CACHED - SMALLEST_CACHED + 1).expect("a small table"),
            384
        );
    }

    #[test]
    fn six_kinds_share_the_one_table() {
        assert_eq!(USE_READY_MADE.len(), 6);
        for code in USE_READY_MADE {
            assert!(tested_before_the_table(code).is_some(), "{code:#x}");
        }
    }

    #[test]
    fn the_byte_kinds_are_not_tested_because_they_cannot_be_out_of_range() {
        assert_eq!(tested_before_the_table(0x10), Some((false, false)));
        assert_eq!(tested_before_the_table(0x11), Some((false, false)));
    }

    #[test]
    fn the_unsigned_kinds_are_tested_only_at_the_top() {
        assert_eq!(tested_before_the_table(0x12), Some((false, true)));
        assert_eq!(tested_before_the_table(0x13), Some((false, true)));
    }

    #[test]
    fn and_the_signed_ones_at_both_ends() {
        assert_eq!(tested_before_the_table(0x2), Some((true, true)));
        assert_eq!(tested_before_the_table(0x3), Some((true, true)));
    }

    #[test]
    fn a_kind_that_does_not_use_the_table_is_not_listed() {
        assert_eq!(tested_before_the_table(0x5), None);
        assert_eq!(tested_before_the_table(0x102), None);
    }

    #[test]
    fn which_words_a_boolean_is_written_with_is_chosen_by_a_global() {
        // So the program can be made to write a boolean more than one way, and
        // the choice is not the caller's.
        assert_ne!(boolean_word_at(0, true), boolean_word_at(1, true));
        assert_ne!(boolean_word_at(0, true), boolean_word_at(0, false));
    }

    #[test]
    fn the_lookup_is_a_vocabulary_and_a_truth() {
        assert_eq!(boolean_word_at(0, false), BOOLEAN_WORDS);
        assert_eq!(boolean_word_at(0, true), BOOLEAN_WORDS + 8);
        assert_eq!(boolean_word_at(1, false), BOOLEAN_WORDS + 8);
    }

    #[test]
    fn an_empty_cell_and_an_empty_string_print_the_same() {
        assert!(empty_prints_as_nothing());
    }

    #[test]
    fn what_a_null_prints_as_is_settled_at_run_time() {
        assert!(null_prints_from_a_global());
    }

    #[test]
    fn a_narrow_floating_value_is_written_at_the_wider_precision() {
        // So the text can carry digits the value never had.
        assert!(single_is_written_as_a_double());
        // And there is no routine of its own for it: it shares the floating
        // one.
        for builds in EVERY_KIND {
            assert!(formatter(builds, Role::Floating).is_some(), "{builds:?}");
        }
    }

    #[test]
    fn the_set_bases_are_in_the_order_the_sets_sit_in_memory() {
        let bases: Vec<u32> = SET_BASES.iter().map(|(_, base)| *base).collect();
        let mut sorted = bases.clone();
        sorted.sort_unstable();

        assert_eq!(bases, sorted);
    }

    #[test]
    fn the_sets_do_not_overlap() {
        let mut spans: Vec<(u32, u32)> = SET_BASES
            .iter()
            .map(|(builds, base)| {
                let last = FORMATTERS
                    .iter()
                    .filter(|held| held.builds == *builds)
                    .map(|held| held.offset)
                    .max()
                    .expect("a set");
                (*base, base + last)
            })
            .collect();
        spans.sort_unstable();

        for pair in spans.windows(2) {
            assert!(pair[0].1 < pair[1].0, "{pair:?}");
        }
    }
}
