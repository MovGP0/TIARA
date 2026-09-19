//! Routines that do nothing but reach one field.
//!
//! A getter, a setter, a read through something held, and a call passed
//! straight on: four shapes that say nothing about what the program does and
//! everything about the class they belong to. None has a counterpart in Rust —
//! a field is a field, and a method that only forwards is a method nobody
//! writes — so what is kept is the one thing each discloses, which is where
//! something sits.
//!
//! These were read off their routines rather than written out by hand, so each
//! is named after the routine. Two classes can keep something at the same
//! offset and they are still two classes.

// The addresses are written the way the original names the routine, without the
// grouping that would otherwise be idiomatic.
#![allow(clippy::unreadable_literal)]

/// What one routine does with the field it reaches.
///
/// Part of the routines listed in [`SWEPT_ACCESSORS`].
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Reach {
    /// Answers the field at an offset of the object itself.
    Reads,
    /// Puts its argument there.
    Writes,
    /// Answers a field of whatever the object holds at another offset.
    ReadsThrough,
    /// Calls one method of whatever the object holds at another offset.
    Forwards,
    /// Calls one of the object's own methods and nothing else.
    ForwardsOwn,
}

/// One routine, and what it discloses about its class.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct FieldReach {
    /// Where the routine lives.
    pub routine: u32,
    /// What it does.
    pub reach: Reach,
    /// The offset it reaches, or the slot it calls.
    pub offset: usize,
    /// Where the thing it reaches through is held, when it reaches through
    /// anything.
    pub holder: Option<usize>,
    /// How many copies of the routine the binary carries.
    pub copies: usize,
}

/// Every one-field routine swept out of its shape.
pub const SWEPT_ACCESSORS: [FieldReach; 67] = [
    FieldReach {
        routine: 0x012D23D0,
        reach: Reach::Reads,
        offset: 0x18,
        holder: None,
        copies: 3,
    },
    FieldReach {
        routine: 0x006805D0,
        reach: Reach::Writes,
        offset: 0x4A0,
        holder: None,
        copies: 6,
    },
    FieldReach {
        routine: 0x00680480,
        reach: Reach::Writes,
        offset: 0x490,
        holder: None,
        copies: 6,
    },
    FieldReach {
        routine: 0x01094D80,
        reach: Reach::Writes,
        offset: 0x160,
        holder: None,
        copies: 5,
    },
    FieldReach {
        routine: 0x00689D60,
        reach: Reach::Writes,
        offset: 0x498,
        holder: None,
        copies: 4,
    },
    FieldReach {
        routine: 0x00687AC0,
        reach: Reach::Writes,
        offset: 0x491,
        holder: None,
        copies: 4,
    },
    FieldReach {
        routine: 0x01C028A0,
        reach: Reach::Writes,
        offset: 0x50C,
        holder: None,
        copies: 3,
    },
    FieldReach {
        routine: 0x01804CC0,
        reach: Reach::Writes,
        offset: 0x18,
        holder: None,
        copies: 3,
    },
    FieldReach {
        routine: 0x0142AAD0,
        reach: Reach::Writes,
        offset: 0x710,
        holder: None,
        copies: 3,
    },
    FieldReach {
        routine: 0x0142A110,
        reach: Reach::Writes,
        offset: 0x720,
        holder: None,
        copies: 3,
    },
    FieldReach {
        routine: 0x0111F370,
        reach: Reach::Writes,
        offset: 0x162,
        holder: None,
        copies: 3,
    },
    FieldReach {
        routine: 0x00F86770,
        reach: Reach::Writes,
        offset: 0x6D8,
        holder: None,
        copies: 3,
    },
    FieldReach {
        routine: 0x00F30B70,
        reach: Reach::Writes,
        offset: 0x10,
        holder: None,
        copies: 3,
    },
    FieldReach {
        routine: 0x00C7A680,
        reach: Reach::Writes,
        offset: 0x220,
        holder: None,
        copies: 3,
    },
    FieldReach {
        routine: 0x00995260,
        reach: Reach::Writes,
        offset: 0x20,
        holder: None,
        copies: 3,
    },
    FieldReach {
        routine: 0x00982F30,
        reach: Reach::Writes,
        offset: 0x88,
        holder: None,
        copies: 3,
    },
    FieldReach {
        routine: 0x0097D330,
        reach: Reach::Writes,
        offset: 0x78,
        holder: None,
        copies: 3,
    },
    FieldReach {
        routine: 0x0083DCE0,
        reach: Reach::Writes,
        offset: 0x508,
        holder: None,
        copies: 3,
    },
    FieldReach {
        routine: 0x006E6A50,
        reach: Reach::Writes,
        offset: 0x4A8,
        holder: None,
        copies: 3,
    },
    FieldReach {
        routine: 0x006DB020,
        reach: Reach::Writes,
        offset: 0x4BA,
        holder: None,
        copies: 3,
    },
    FieldReach {
        routine: 0x0068F460,
        reach: Reach::Writes,
        offset: 0x492,
        holder: None,
        copies: 3,
    },
    FieldReach {
        routine: 0x004D4F50,
        reach: Reach::Writes,
        offset: 0x80,
        holder: None,
        copies: 3,
    },
    FieldReach {
        routine: 0x004B2060,
        reach: Reach::ReadsThrough,
        offset: 0x10,
        holder: Some(0x10),
        copies: 15,
    },
    FieldReach {
        routine: 0x008B8A40,
        reach: Reach::ReadsThrough,
        offset: 0x10,
        holder: Some(0x18),
        copies: 8,
    },
    FieldReach {
        routine: 0x00749C90,
        reach: Reach::ReadsThrough,
        offset: 0x10,
        holder: Some(0x38),
        copies: 8,
    },
    FieldReach {
        routine: 0x00A061B0,
        reach: Reach::ReadsThrough,
        offset: 0x10,
        holder: Some(0x30),
        copies: 5,
    },
    FieldReach {
        routine: 0x005FCC70,
        reach: Reach::ReadsThrough,
        offset: 0x28,
        holder: Some(0x18),
        copies: 4,
    },
    FieldReach {
        routine: 0x018CF800,
        reach: Reach::ReadsThrough,
        offset: 0x10,
        holder: Some(0x20),
        copies: 3,
    },
    FieldReach {
        routine: 0x0098D700,
        reach: Reach::ReadsThrough,
        offset: 0x10,
        holder: Some(0x48),
        copies: 3,
    },
    FieldReach {
        routine: 0x00808870,
        reach: Reach::ReadsThrough,
        offset: 0x10,
        holder: Some(0xB8),
        copies: 3,
    },
    FieldReach {
        routine: 0x008080C0,
        reach: Reach::ReadsThrough,
        offset: 0x10,
        holder: Some(0xB0),
        copies: 3,
    },
    FieldReach {
        routine: 0x005FCFF0,
        reach: Reach::ReadsThrough,
        offset: 0x2C,
        holder: Some(0x18),
        copies: 3,
    },
    FieldReach {
        routine: 0x005FCED0,
        reach: Reach::ReadsThrough,
        offset: 0x30,
        holder: Some(0x18),
        copies: 3,
    },
    FieldReach {
        routine: 0x005B4B00,
        reach: Reach::ForwardsOwn,
        offset: 0x40,
        holder: None,
        copies: 12,
    },
    FieldReach {
        routine: 0x00950730,
        reach: Reach::ForwardsOwn,
        offset: 0xE8,
        holder: None,
        copies: 6,
    },
    FieldReach {
        routine: 0x012B0110,
        reach: Reach::ForwardsOwn,
        offset: 0x3D8,
        holder: None,
        copies: 5,
    },
    FieldReach {
        routine: 0x009E31E0,
        reach: Reach::ForwardsOwn,
        offset: 0x38,
        holder: None,
        copies: 5,
    },
    FieldReach {
        routine: 0x004B8060,
        reach: Reach::ForwardsOwn,
        offset: 0x20,
        holder: None,
        copies: 5,
    },
    FieldReach {
        routine: 0x004B7AC0,
        reach: Reach::ForwardsOwn,
        offset: 0x20,
        holder: None,
        copies: 5,
    },
    FieldReach {
        routine: 0x004B77E0,
        reach: Reach::ForwardsOwn,
        offset: 0x18,
        holder: None,
        copies: 5,
    },
    FieldReach {
        routine: 0x004B7380,
        reach: Reach::ForwardsOwn,
        offset: 0x18,
        holder: None,
        copies: 5,
    },
    FieldReach {
        routine: 0x010B8340,
        reach: Reach::ForwardsOwn,
        offset: 0x120,
        holder: None,
        copies: 4,
    },
    FieldReach {
        routine: 0x00B25810,
        reach: Reach::ForwardsOwn,
        offset: 0x20,
        holder: None,
        copies: 4,
    },
    FieldReach {
        routine: 0x004B7F20,
        reach: Reach::ForwardsOwn,
        offset: 0x20,
        holder: None,
        copies: 4,
    },
    FieldReach {
        routine: 0x004B7C00,
        reach: Reach::ForwardsOwn,
        offset: 0x20,
        holder: None,
        copies: 4,
    },
    FieldReach {
        routine: 0x004B76E0,
        reach: Reach::ForwardsOwn,
        offset: 0x18,
        holder: None,
        copies: 4,
    },
    FieldReach {
        routine: 0x004B7480,
        reach: Reach::ForwardsOwn,
        offset: 0x18,
        holder: None,
        copies: 4,
    },
    FieldReach {
        routine: 0x004B63C0,
        reach: Reach::ForwardsOwn,
        offset: 0xD0,
        holder: None,
        copies: 4,
    },
    FieldReach {
        routine: 0x01BD6570,
        reach: Reach::ForwardsOwn,
        offset: 0x360,
        holder: None,
        copies: 3,
    },
    FieldReach {
        routine: 0x01510A70,
        reach: Reach::ForwardsOwn,
        offset: 0x5D8,
        holder: None,
        copies: 3,
    },
    FieldReach {
        routine: 0x010BB800,
        reach: Reach::ForwardsOwn,
        offset: 0x50,
        holder: None,
        copies: 3,
    },
    FieldReach {
        routine: 0x010BB7D0,
        reach: Reach::ForwardsOwn,
        offset: 0x50,
        holder: None,
        copies: 3,
    },
    FieldReach {
        routine: 0x00D439C0,
        reach: Reach::ForwardsOwn,
        offset: 0x60,
        holder: None,
        copies: 3,
    },
    FieldReach {
        routine: 0x00B97C60,
        reach: Reach::ForwardsOwn,
        offset: 0x50,
        holder: None,
        copies: 3,
    },
    FieldReach {
        routine: 0x00B88120,
        reach: Reach::ForwardsOwn,
        offset: 0xB8,
        holder: None,
        copies: 3,
    },
    FieldReach {
        routine: 0x00B6BC70,
        reach: Reach::ForwardsOwn,
        offset: 0x90,
        holder: None,
        copies: 3,
    },
    FieldReach {
        routine: 0x00B25710,
        reach: Reach::ForwardsOwn,
        offset: 0x18,
        holder: None,
        copies: 3,
    },
    FieldReach {
        routine: 0x008F8E00,
        reach: Reach::ForwardsOwn,
        offset: 0x58,
        holder: None,
        copies: 3,
    },
    FieldReach {
        routine: 0x007DD140,
        reach: Reach::ForwardsOwn,
        offset: 0x68,
        holder: None,
        copies: 3,
    },
    FieldReach {
        routine: 0x00649110,
        reach: Reach::ForwardsOwn,
        offset: 0x18,
        holder: None,
        copies: 3,
    },
    FieldReach {
        routine: 0x005FD640,
        reach: Reach::ForwardsOwn,
        offset: 0x18,
        holder: None,
        copies: 3,
    },
    FieldReach {
        routine: 0x005471E0,
        reach: Reach::ForwardsOwn,
        offset: 0x10,
        holder: None,
        copies: 3,
    },
    FieldReach {
        routine: 0x004B9810,
        reach: Reach::ForwardsOwn,
        offset: 0x10,
        holder: None,
        copies: 3,
    },
    FieldReach {
        routine: 0x004B7120,
        reach: Reach::ForwardsOwn,
        offset: 0x20,
        holder: None,
        copies: 3,
    },
    FieldReach {
        routine: 0x004B44E0,
        reach: Reach::ForwardsOwn,
        offset: 0xF0,
        holder: None,
        copies: 3,
    },
    FieldReach {
        routine: 0x004B43A0,
        reach: Reach::ForwardsOwn,
        offset: 0x48,
        holder: None,
        copies: 3,
    },
    FieldReach {
        routine: 0x004B2BF0,
        reach: Reach::ForwardsOwn,
        offset: 0x28,
        holder: None,
        copies: 3,
    },
];

/// Every routine that reaches one particular way.
#[must_use]
pub fn reaching(reach: Reach) -> Vec<&'static FieldReach> {
    SWEPT_ACCESSORS
        .iter()
        .filter(|held| held.reach == reach)
        .collect()
}

/// What one routine discloses, if anything is recorded for it.
#[must_use]
pub fn reach_of(routine: u32) -> Option<&'static FieldReach> {
    SWEPT_ACCESSORS.iter().find(|held| held.routine == routine)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn every_routine_is_listed_once() {
        let mut routines: Vec<u32> = SWEPT_ACCESSORS.iter().map(|held| held.routine).collect();
        let before = routines.len();
        routines.sort_unstable();
        routines.dedup();

        assert_eq!(routines.len(), before);
    }

    #[test]
    fn every_routine_has_more_than_one_copy() {
        // They are here because they repeat; one of a kind would have been
        // read rather than swept.
        for held in SWEPT_ACCESSORS {
            assert!(held.copies > 1, "{:#X}", held.routine);
        }
    }

    #[test]
    fn only_the_reaching_shapes_hold_anything_to_reach_through() {
        for held in SWEPT_ACCESSORS {
            let indirect = matches!(held.reach, Reach::ReadsThrough | Reach::Forwards);
            assert_eq!(held.holder.is_some(), indirect, "{:#X}", held.routine);
        }
    }

    #[test]
    fn a_routine_can_be_looked_up_by_where_it_lives() {
        let first = SWEPT_ACCESSORS[0];

        assert_eq!(reach_of(first.routine), Some(&first));
        assert!(reach_of(0).is_none());
    }

    #[test]
    fn the_shapes_can_be_asked_for_separately_and_together_are_all_of_them() {
        let counted: usize = [
            Reach::Reads,
            Reach::Writes,
            Reach::ReadsThrough,
            Reach::Forwards,
            Reach::ForwardsOwn,
        ]
        .into_iter()
        .map(|reach| reaching(reach).len())
        .sum();

        assert_eq!(counted, SWEPT_ACCESSORS.len());
    }

    #[test]
    fn every_offset_is_word_aligned_or_a_byte_within_a_word() {
        // Nothing here should be reaching somewhere impossible.
        for held in SWEPT_ACCESSORS {
            assert!(held.offset < 0x1_0000, "{:#X}", held.routine);
        }
    }
}
