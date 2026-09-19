//! Constructors and destructors that add one thing, or nothing.
//!
//! Four shapes cover nearly all of them: make one object and keep it, add
//! nothing at all to what is inherited, release one field and pass the rest
//! up, or be the end of the chain. None has a counterpart in Rust, where a
//! value is constructed where it is declared and dropped where it ends, so
//! what is kept is which of the four each routine is and the offset it
//! touches.
//!
//! A constructor that adds nothing is not pointless: it exists so that the
//! class has a constructor of its own to be found by name, which is what a
//! language with virtual construction needs. The same is true of a destructor
//! that only passes up.

// The addresses are written the way the original names the routine, without
// the grouping that would otherwise be idiomatic.
#![allow(clippy::unreadable_literal)]

/// What one lifecycle routine does.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Lifecycle {
    /// Makes one object and keeps it at an offset.
    MakesAndKeeps,
    /// Calls the inherited constructor and adds nothing.
    AddsNothing,
    /// Releases one field, then calls the inherited destructor.
    ReleasesAndPassesUp,
    /// Calls the inherited destructor and does nothing else.
    PassesUpOnly,
    /// Is the end of the chain: tears down and releases the instance.
    EndsTheChain,
}

/// One lifecycle routine, and what it discloses about its class.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ClassLifecycle {
    /// Where the routine lives.
    pub routine: u32,
    /// Which of the four shapes it is.
    pub lifecycle: Lifecycle,
    /// The field it makes or releases, where it touches one.
    pub offset: Option<usize>,
    /// The class of the object it makes, where it makes one.
    pub makes: Option<u32>,
    /// How many copies of the routine the binary carries.
    pub copies: usize,
}

/// Every lifecycle routine swept out of its shape.
pub const SWEPT_LIFECYCLE: [ClassLifecycle; 93] = [
    ClassLifecycle {
        routine: 0x00B191B0,
        lifecycle: Lifecycle::MakesAndKeeps,
        offset: Some(0x8),
        makes: Some(0x00472DD0),
        copies: 20,
    },
    ClassLifecycle {
        routine: 0x00601D70,
        lifecycle: Lifecycle::AddsNothing,
        offset: None,
        makes: None,
        copies: 18,
    },
    ClassLifecycle {
        routine: 0x004AE6A0,
        lifecycle: Lifecycle::AddsNothing,
        offset: None,
        makes: None,
        copies: 14,
    },
    ClassLifecycle {
        routine: 0x010C2660,
        lifecycle: Lifecycle::AddsNothing,
        offset: None,
        makes: None,
        copies: 9,
    },
    ClassLifecycle {
        routine: 0x00611660,
        lifecycle: Lifecycle::MakesAndKeeps,
        offset: Some(0x8),
        makes: Some(0x00472DD0),
        copies: 8,
    },
    ClassLifecycle {
        routine: 0x004DC240,
        lifecycle: Lifecycle::AddsNothing,
        offset: None,
        makes: None,
        copies: 7,
    },
    ClassLifecycle {
        routine: 0x004D4910,
        lifecycle: Lifecycle::AddsNothing,
        offset: None,
        makes: None,
        copies: 5,
    },
    ClassLifecycle {
        routine: 0x00BBF6C0,
        lifecycle: Lifecycle::MakesAndKeeps,
        offset: Some(0x18),
        makes: Some(0x00472DD0),
        copies: 4,
    },
    ClassLifecycle {
        routine: 0x008631F0,
        lifecycle: Lifecycle::AddsNothing,
        offset: None,
        makes: None,
        copies: 4,
    },
    ClassLifecycle {
        routine: 0x006E6CC0,
        lifecycle: Lifecycle::AddsNothing,
        offset: None,
        makes: None,
        copies: 4,
    },
    ClassLifecycle {
        routine: 0x004DA300,
        lifecycle: Lifecycle::AddsNothing,
        offset: None,
        makes: None,
        copies: 4,
    },
    ClassLifecycle {
        routine: 0x01BBB290,
        lifecycle: Lifecycle::MakesAndKeeps,
        offset: Some(0x10),
        makes: Some(0x00472DD0),
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x018CFBE0,
        lifecycle: Lifecycle::MakesAndKeeps,
        offset: Some(0x8),
        makes: Some(0x00472DD0),
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x0161ACC0,
        lifecycle: Lifecycle::MakesAndKeeps,
        offset: Some(0x20),
        makes: Some(0x00472DD0),
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x014F96C0,
        lifecycle: Lifecycle::AddsNothing,
        offset: None,
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x01408A70,
        lifecycle: Lifecycle::AddsNothing,
        offset: None,
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x0112A4E0,
        lifecycle: Lifecycle::AddsNothing,
        offset: None,
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x00E13CC0,
        lifecycle: Lifecycle::AddsNothing,
        offset: None,
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x00E08C00,
        lifecycle: Lifecycle::AddsNothing,
        offset: None,
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x00E08190,
        lifecycle: Lifecycle::AddsNothing,
        offset: None,
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x00DE5A90,
        lifecycle: Lifecycle::AddsNothing,
        offset: None,
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x00C6E6B0,
        lifecycle: Lifecycle::AddsNothing,
        offset: None,
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x00B59770,
        lifecycle: Lifecycle::MakesAndKeeps,
        offset: Some(0x8),
        makes: Some(0x00472DD0),
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x00B57160,
        lifecycle: Lifecycle::MakesAndKeeps,
        offset: Some(0x10),
        makes: Some(0x00472DD0),
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x00B08760,
        lifecycle: Lifecycle::AddsNothing,
        offset: None,
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x00A79620,
        lifecycle: Lifecycle::AddsNothing,
        offset: None,
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x00A79560,
        lifecycle: Lifecycle::AddsNothing,
        offset: None,
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x00A047C0,
        lifecycle: Lifecycle::MakesAndKeeps,
        offset: Some(0x30),
        makes: Some(0x00472DD0),
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x0089B770,
        lifecycle: Lifecycle::AddsNothing,
        offset: None,
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x00873F60,
        lifecycle: Lifecycle::AddsNothing,
        offset: None,
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x004AA190,
        lifecycle: Lifecycle::ReleasesAndPassesUp,
        offset: Some(0x10),
        makes: None,
        copies: 17,
    },
    ClassLifecycle {
        routine: 0x00410EF0,
        lifecycle: Lifecycle::PassesUpOnly,
        offset: None,
        makes: None,
        copies: 12,
    },
    ClassLifecycle {
        routine: 0x00C657F0,
        lifecycle: Lifecycle::EndsTheChain,
        offset: None,
        makes: None,
        copies: 8,
    },
    ClassLifecycle {
        routine: 0x00B22BD0,
        lifecycle: Lifecycle::PassesUpOnly,
        offset: None,
        makes: None,
        copies: 7,
    },
    ClassLifecycle {
        routine: 0x00AC9D30,
        lifecycle: Lifecycle::ReleasesAndPassesUp,
        offset: Some(0x18),
        makes: None,
        copies: 7,
    },
    ClassLifecycle {
        routine: 0x0184F740,
        lifecycle: Lifecycle::ReleasesAndPassesUp,
        offset: Some(0x28),
        makes: None,
        copies: 6,
    },
    ClassLifecycle {
        routine: 0x00E01D10,
        lifecycle: Lifecycle::ReleasesAndPassesUp,
        offset: Some(0x8),
        makes: None,
        copies: 6,
    },
    ClassLifecycle {
        routine: 0x00C5C4E0,
        lifecycle: Lifecycle::ReleasesAndPassesUp,
        offset: Some(0x10),
        makes: None,
        copies: 6,
    },
    ClassLifecycle {
        routine: 0x00BDA180,
        lifecycle: Lifecycle::ReleasesAndPassesUp,
        offset: Some(0x8),
        makes: None,
        copies: 6,
    },
    ClassLifecycle {
        routine: 0x00603780,
        lifecycle: Lifecycle::ReleasesAndPassesUp,
        offset: Some(0x8),
        makes: None,
        copies: 6,
    },
    ClassLifecycle {
        routine: 0x01106E10,
        lifecycle: Lifecycle::EndsTheChain,
        offset: None,
        makes: None,
        copies: 5,
    },
    ClassLifecycle {
        routine: 0x00FD9340,
        lifecycle: Lifecycle::EndsTheChain,
        offset: None,
        makes: None,
        copies: 5,
    },
    ClassLifecycle {
        routine: 0x00E0AA70,
        lifecycle: Lifecycle::ReleasesAndPassesUp,
        offset: Some(0x10),
        makes: None,
        copies: 5,
    },
    ClassLifecycle {
        routine: 0x009D6E20,
        lifecycle: Lifecycle::ReleasesAndPassesUp,
        offset: Some(0x20),
        makes: None,
        copies: 5,
    },
    ClassLifecycle {
        routine: 0x0095D6A0,
        lifecycle: Lifecycle::ReleasesAndPassesUp,
        offset: Some(0x38),
        makes: None,
        copies: 5,
    },
    ClassLifecycle {
        routine: 0x0184F270,
        lifecycle: Lifecycle::ReleasesAndPassesUp,
        offset: Some(0x28),
        makes: None,
        copies: 4,
    },
    ClassLifecycle {
        routine: 0x016D63B0,
        lifecycle: Lifecycle::ReleasesAndPassesUp,
        offset: Some(0x8),
        makes: None,
        copies: 4,
    },
    ClassLifecycle {
        routine: 0x0113E8E0,
        lifecycle: Lifecycle::ReleasesAndPassesUp,
        offset: Some(0x20),
        makes: None,
        copies: 4,
    },
    ClassLifecycle {
        routine: 0x00CC25A0,
        lifecycle: Lifecycle::EndsTheChain,
        offset: None,
        makes: None,
        copies: 4,
    },
    ClassLifecycle {
        routine: 0x00A2A140,
        lifecycle: Lifecycle::EndsTheChain,
        offset: None,
        makes: None,
        copies: 4,
    },
    ClassLifecycle {
        routine: 0x0095E610,
        lifecycle: Lifecycle::ReleasesAndPassesUp,
        offset: Some(0x30),
        makes: None,
        copies: 4,
    },
    ClassLifecycle {
        routine: 0x0095E390,
        lifecycle: Lifecycle::ReleasesAndPassesUp,
        offset: Some(0x40),
        makes: None,
        copies: 4,
    },
    ClassLifecycle {
        routine: 0x00603A00,
        lifecycle: Lifecycle::ReleasesAndPassesUp,
        offset: Some(0x18),
        makes: None,
        copies: 4,
    },
    ClassLifecycle {
        routine: 0x01BE9AD0,
        lifecycle: Lifecycle::EndsTheChain,
        offset: None,
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x01BBB340,
        lifecycle: Lifecycle::PassesUpOnly,
        offset: None,
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x01980DB0,
        lifecycle: Lifecycle::EndsTheChain,
        offset: None,
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x01876DB0,
        lifecycle: Lifecycle::PassesUpOnly,
        offset: None,
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x01866E00,
        lifecycle: Lifecycle::EndsTheChain,
        offset: None,
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x01847380,
        lifecycle: Lifecycle::PassesUpOnly,
        offset: None,
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x01831CF0,
        lifecycle: Lifecycle::ReleasesAndPassesUp,
        offset: Some(0xA0),
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x01804C40,
        lifecycle: Lifecycle::PassesUpOnly,
        offset: None,
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x017C5020,
        lifecycle: Lifecycle::PassesUpOnly,
        offset: None,
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x0147B630,
        lifecycle: Lifecycle::ReleasesAndPassesUp,
        offset: Some(0x8),
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x0147B530,
        lifecycle: Lifecycle::ReleasesAndPassesUp,
        offset: Some(0x30),
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x013B6CE0,
        lifecycle: Lifecycle::ReleasesAndPassesUp,
        offset: Some(0x40),
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x0135BAE0,
        lifecycle: Lifecycle::ReleasesAndPassesUp,
        offset: Some(0x8),
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x0131DDB0,
        lifecycle: Lifecycle::EndsTheChain,
        offset: None,
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x010F05E0,
        lifecycle: Lifecycle::ReleasesAndPassesUp,
        offset: Some(0x90),
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x00C5A5A0,
        lifecycle: Lifecycle::EndsTheChain,
        offset: None,
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x00C2E790,
        lifecycle: Lifecycle::ReleasesAndPassesUp,
        offset: Some(0x18),
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x00C2DC10,
        lifecycle: Lifecycle::EndsTheChain,
        offset: None,
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x00B576C0,
        lifecycle: Lifecycle::PassesUpOnly,
        offset: None,
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x00B4F9A0,
        lifecycle: Lifecycle::EndsTheChain,
        offset: None,
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x00B4E6C0,
        lifecycle: Lifecycle::EndsTheChain,
        offset: None,
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x00B34E20,
        lifecycle: Lifecycle::PassesUpOnly,
        offset: None,
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x00ACC750,
        lifecycle: Lifecycle::EndsTheChain,
        offset: None,
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x00ACAA80,
        lifecycle: Lifecycle::EndsTheChain,
        offset: None,
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x00ABE600,
        lifecycle: Lifecycle::ReleasesAndPassesUp,
        offset: Some(0x1A0),
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x00A9B850,
        lifecycle: Lifecycle::EndsTheChain,
        offset: None,
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x00A9B560,
        lifecycle: Lifecycle::EndsTheChain,
        offset: None,
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x00A9A400,
        lifecycle: Lifecycle::EndsTheChain,
        offset: None,
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x00A41170,
        lifecycle: Lifecycle::EndsTheChain,
        offset: None,
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x009EC960,
        lifecycle: Lifecycle::ReleasesAndPassesUp,
        offset: Some(0x70),
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x00956670,
        lifecycle: Lifecycle::ReleasesAndPassesUp,
        offset: Some(0x128),
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x008F95F0,
        lifecycle: Lifecycle::PassesUpOnly,
        offset: None,
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x008F37A0,
        lifecycle: Lifecycle::PassesUpOnly,
        offset: None,
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x0089B850,
        lifecycle: Lifecycle::PassesUpOnly,
        offset: None,
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x008273C0,
        lifecycle: Lifecycle::ReleasesAndPassesUp,
        offset: Some(0x108),
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x00649510,
        lifecycle: Lifecycle::ReleasesAndPassesUp,
        offset: Some(0x58),
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x0060C580,
        lifecycle: Lifecycle::ReleasesAndPassesUp,
        offset: Some(0x10),
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x00605D80,
        lifecycle: Lifecycle::EndsTheChain,
        offset: None,
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x0055AB90,
        lifecycle: Lifecycle::ReleasesAndPassesUp,
        offset: Some(0x28),
        makes: None,
        copies: 3,
    },
    ClassLifecycle {
        routine: 0x004BAF90,
        lifecycle: Lifecycle::EndsTheChain,
        offset: None,
        makes: None,
        copies: 3,
    },
];

/// Every routine of one shape.
#[must_use]
pub fn of_shape(lifecycle: Lifecycle) -> Vec<&'static ClassLifecycle> {
    SWEPT_LIFECYCLE
        .iter()
        .filter(|held| held.lifecycle == lifecycle)
        .collect()
}

/// What one routine is, if anything is recorded for it.
#[must_use]
pub fn lifecycle_of(routine: u32) -> Option<&'static ClassLifecycle> {
    SWEPT_LIFECYCLE.iter().find(|held| held.routine == routine)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn every_routine_is_listed_once() {
        let mut routines: Vec<u32> = SWEPT_LIFECYCLE.iter().map(|held| held.routine).collect();
        let before = routines.len();
        routines.sort_unstable();
        routines.dedup();

        assert_eq!(routines.len(), before);
    }

    #[test]
    fn only_the_shapes_that_touch_a_field_record_one() {
        for held in SWEPT_LIFECYCLE {
            let touches = matches!(
                held.lifecycle,
                Lifecycle::MakesAndKeeps | Lifecycle::ReleasesAndPassesUp
            );
            assert_eq!(held.offset.is_some(), touches, "{:#X}", held.routine);
        }
    }

    #[test]
    fn only_the_shape_that_makes_something_records_what_it_makes() {
        for held in SWEPT_LIFECYCLE {
            assert_eq!(
                held.makes.is_some(),
                held.lifecycle == Lifecycle::MakesAndKeeps,
                "{:#X}",
                held.routine
            );
        }
    }

    #[test]
    fn every_routine_has_more_than_one_copy() {
        for held in SWEPT_LIFECYCLE {
            assert!(held.copies > 1, "{:#X}", held.routine);
        }
    }

    #[test]
    fn the_shapes_together_are_all_of_them() {
        let counted: usize = [
            Lifecycle::MakesAndKeeps,
            Lifecycle::AddsNothing,
            Lifecycle::ReleasesAndPassesUp,
            Lifecycle::PassesUpOnly,
            Lifecycle::EndsTheChain,
        ]
        .into_iter()
        .map(|shape| of_shape(shape).len())
        .sum();

        assert_eq!(counted, SWEPT_LIFECYCLE.len());
    }

    #[test]
    fn a_routine_can_be_looked_up_by_where_it_lives() {
        let first = SWEPT_LIFECYCLE[0];

        assert_eq!(lifecycle_of(first.routine), Some(&first));
        assert!(lifecycle_of(0).is_none());
    }
}
