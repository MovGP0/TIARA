//! Landing pads that let go of more than one thing.
//!
//! The companion to [`crate::frame_pads`], which holds the ones that let go of
//! exactly one. These 1788 release between two and six things, in order, and
//! then return — nothing else.
//!
//! The order is worth keeping. Almost all of them release in rising order of
//! where things sit in the frame — so the release order follows the layout
//! order rather than reversing it, which is not what a language with scoped
//! destruction would do and says these are emitted from a list of the frame's
//! contents rather than from the order the contents were acquired. A small
//! number release in falling order, and nine do neither; those nine are the
//! frames where something really was acquired out of step with the layout.

// The addresses are written without separators so the port-mapping importer can
// match them against the recovered functions.
#![allow(clippy::unreadable_literal)]

pub use crate::frame_pads::Releases;

/// One thing a pad lets go of.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct Let {
    /// What it is.
    pub releases: Releases,
    /// Where in the frame it sits.
    pub offset: u32,
    /// How many, where several go at once.
    pub several: u8,
}

/// A pad that lets go of several things.
#[derive(Debug, Clone, Copy)]
pub struct MultiPad {
    /// Where the pad sits.
    pub routine: u32,
    /// What it lets go of, in the order it does.
    pub lets: &'static [Let],
}

/// Every landing pad that releases more than one thing.
pub static MULTI_PADS: [MultiPad; 1788] = [
    MultiPad {
        routine: 0x0040DAC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x060,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0040E1D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0040E340,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00413A10,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00413B60,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0041B3E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00440D50,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00441FC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 9,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00444470,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x148,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x004457C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 4,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x098,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 6,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x148,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x004482A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x004483A0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00449390,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x268,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0044AF20,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x0044CE60,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0044E470,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x004513F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x004527B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00457470,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x004607B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 9,
            },
        ],
    },
    MultiPad {
        routine: 0x00462500,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x004633A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00463DC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x004645A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00464FC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x050,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00465760,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x030,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00468FD0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0046B7C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0046E470,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0046F5F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 9,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x004B3C50,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x004C3310,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x004C6760,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x004C7610,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x004C7730,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x004C7FC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 2,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x060,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x004CB1A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 9,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x108,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x128,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x004DA7F0,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x004DADC0,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x004DAF20,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x004DBAA0,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00538EC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 7,
            },
        ],
    },
    MultiPad {
        routine: 0x0053AA40,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x150,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x158,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x005423F0,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x050,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00588960,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x00589230,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00589EC0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0058C8B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0058CF90,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0058D460,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x005C1C70,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x005D0900,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x060,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x005D2360,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x005DB4E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x005DD1B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x005DDD80,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x005DDDC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x005EAFC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x005ECC10,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x005ED6A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x005EEB60,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x005FCBF0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x006032E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0060DF90,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0060E230,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0061D630,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x068,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00621ED0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00622010,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00622AA0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 10,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x00623600,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 3,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x080,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x090,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00623A30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 2,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00624190,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x070,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00625260,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 4,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x080,
                several: 3,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x006364B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x006483D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00662520,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0067EA00,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 6,
            },
        ],
    },
    MultiPad {
        routine: 0x006868A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x130,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00686C60,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00698250,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x128,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x006AB100,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x006F58E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1d8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x006FC010,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x2048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x006FC3E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x2048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00706F60,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00715770,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00715850,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00715D30,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0a8,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0b0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00715F20,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x040,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00716350,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00728A80,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0072C7B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0f0,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x100,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x108,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x0072F4A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 3,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x118,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00787450,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x008320F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00832130,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00832950,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 6,
            },
        ],
    },
    MultiPad {
        routine: 0x00832EF0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00837CE0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0084F650,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0085E180,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x038,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x008631B0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x008635E0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x068,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0086BC00,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0086CF60,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00875870,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x008794D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0b0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0088E3D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0088FE60,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x078,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00892090,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x008955C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0089F4C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x008A1DF0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x008A2AA0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x008A5820,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x008AEFA0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x120,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x128,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x118,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x008AF040,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x100,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x108,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0f8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0f0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x008AF0D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x008AF8E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 10,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x008B0020,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x008E7B20,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x060,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x008E80F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x008F8570,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x008F9DB0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x008FA7A0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x030,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x080,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x008FA930,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x030,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x080,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x008FAB10,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x028,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x080,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x008FACC0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x030,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x080,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x008FAED0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x028,
                several: 3,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x060,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x008FAFB0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x008FB0C0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x060,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x008FB650,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x060,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x008FB8E0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x060,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x008FBAD0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x060,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x008FCAA0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x008FE620,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x030,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x058,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x080,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x008FEF80,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 5,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00900950,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x009472A0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x009481B0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 4,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x009486F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x060,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0094D200,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x098,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0094DCD0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x028,
                several: 4,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x050,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0094F7E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00952A70,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x068,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x009560C0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 10,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00957CC0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00958140,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x058,
                several: 7,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x098,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00958490,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00958C30,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x030,
                several: 7,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x088,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00958D50,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0095A280,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x030,
                several: 7,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x088,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x0095A9F0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0095C3D0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x009617F0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x028,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x050,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x070,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00966930,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x068,
                several: 6,
            },
        ],
    },
    MultiPad {
        routine: 0x0096C290,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0096C880,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x058,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x0096CD70,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x068,
                several: 5,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x098,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0096D950,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00970500,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x070,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00971A90,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 5,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x090,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00974260,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x060,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00976D20,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x058,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00977500,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x058,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00977EC0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x060,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0097B210,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 4,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x088,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0097BBC0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x080,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x0c0,
                several: 5,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x108,
                several: 6,
            },
        ],
    },
    MultiPad {
        routine: 0x0097C230,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x078,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x0b8,
                several: 5,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x100,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0097CA70,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x070,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x0b0,
                several: 5,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x0f8,
                several: 6,
            },
        ],
    },
    MultiPad {
        routine: 0x0097D770,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0097E810,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x0b0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0097EF30,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x058,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x070,
                several: 3,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0097F1F0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0097F3A0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x009803C0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x009837E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x080,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00983B40,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x080,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x0c0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00984C90,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x078,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x098,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x009874E0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x070,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00998C90,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x020,
                several: 5,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00999460,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x020,
                several: 5,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00999B80,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x020,
                several: 5,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x060,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0099A2A0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x020,
                several: 5,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x060,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0099A9C0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x020,
                several: 5,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x060,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0099B0E0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x020,
                several: 5,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x060,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0099C7B0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x058,
                several: 3,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x009D37A0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x009D4850,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x070,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x009D49C0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x009D52E0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 10,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x090,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x009DC400,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x270,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x009E0FD0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x130,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x780,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x7a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x009E1E10,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0xa78,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0xaa0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x009E7190,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x009E7690,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x009E7AC0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x030,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x009E7F40,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x009E8520,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x009E8900,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x009E8FA0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x020,
                several: 3,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x060,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x009E9140,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x009E9220,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x009E9920,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 3,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00A27B80,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00A2C410,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00A341D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x060,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00A4E1F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00A61230,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00A61FD0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00A63980,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00A64070,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00A644B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00A686D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 9,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00A739D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00A7CB70,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x00A7CF90,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00A951C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00A951F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00A99080,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00AA7EE0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00AA8160,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00AA88B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00ABBDD0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00ABDA10,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00AC2600,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00ACDF50,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00AD1130,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00AD3FD0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00ADA040,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00ADAD20,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d0,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e8,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x108,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00AE3F90,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00AF09A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00AF2CE0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00AF3D90,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00AF8180,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x100,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x0f8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00AFBB90,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x1e8,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x1f0,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x1e0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00AFCEC0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00AFD560,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x090,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x0a0,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00AFDA10,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00AFDEB0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00AFE930,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B02810,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B0A120,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B0C520,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B0C6C0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B0C7C0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B0C970,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B0CB10,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B0CC10,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B155A0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x068,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00B15A10,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B17860,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B17DF0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B1CA30,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B1CD70,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00B1F120,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x060,
                several: 6,
            },
        ],
    },
    MultiPad {
        routine: 0x00B1F350,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B1F5F0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00B21100,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B21800,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x060,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x078,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00B235E0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B278E0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x050,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x0b8,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x0c0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B27C90,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x080,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B28610,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x068,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00B29190,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x060,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00B29340,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x040,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B299A0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x058,
                several: 3,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x070,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00B2A420,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x068,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x00B2B3C0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x028,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B2B7A0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x028,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x070,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B2BE30,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x080,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x00B2C560,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x030,
                several: 5,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x078,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00B2DBA0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x030,
                several: 4,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x070,
                several: 5,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B2EF40,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x070,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B31A00,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00B31F10,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x080,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x098,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x0a8,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x00B33920,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00B35390,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B356B0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B35C70,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x040,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B364C0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x028,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B37870,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x068,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 6,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x0d8,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x0f8,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00B37EB0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x088,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 6,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x0d8,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x0e8,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x108,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00B384B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 6,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x090,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x098,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00B39800,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B39BF0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00B3A450,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B3AC80,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 8,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B3B440,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B3C570,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B3C8C0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x070,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B3DC90,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B42970,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x050,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B42B70,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x050,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B44590,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B4DDE0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B4FC40,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B53780,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B59D90,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B5A000,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00B5CA60,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x040,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B5CE90,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00B5D0B0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x040,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B5FBE0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x028,
                several: 5,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x050,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B60010,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x028,
                several: 5,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x050,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B60B00,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B60E20,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x060,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B62630,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B62860,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B63680,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 7,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x0a8,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x0c0,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x0d0,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x0d8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B63FF0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x098,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x0a8,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x0b8,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x0d0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00B64600,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B65BF0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B665E0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B8A320,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x00B8A6D0,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x0a8,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x0a0,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B8A720,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00B8FC80,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x00B91030,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1a0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00B914B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x148,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00B916C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x138,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x160,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B92790,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 10,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B92C40,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 9,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00B93B00,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00B93D90,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x148,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B96DB0,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0c0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B97520,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B9DBB0,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00B9E5B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 3,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0a8,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00BAE110,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00BAFA50,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00BAFB90,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00BB0880,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00BB0CD0,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00BB13F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00BB3B30,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00BC02A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00BC0900,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00BCAA20,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00BCBA50,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0f8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00BE0700,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x040,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00BE7B80,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00BF3650,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00BFC1B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 9,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d8,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00BFEDD0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00C01EA0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00C09A20,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00C0B150,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00C0C050,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00C0CD50,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00C0D440,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00C10DC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 9,
            },
        ],
    },
    MultiPad {
        routine: 0x00C1A690,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00C26F20,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00C3D220,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00C415B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x00C48160,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x110,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00C49040,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 10,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d8,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00C56450,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 3,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x178,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00C61FA0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x2b0,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x2b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00C62320,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00C64870,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00C67FF0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00C6BB80,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e0,
                several: 6,
            },
        ],
    },
    MultiPad {
        routine: 0x00C6ED10,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00C6F340,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00C6F860,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x2c8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x300,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00C6FC10,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0a0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00C705B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00C79750,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00C7BC30,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x050,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00C7C3C0,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00C7C660,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00C7C720,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00C7C7E0,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00C7C920,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00C818A0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00C82290,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x060,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00C82B90,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 4,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0a0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00C82F70,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 7,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00C84140,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00C84990,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00C84CA0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00C99720,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0f0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x108,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00CA5300,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 8,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x090,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00CA5580,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00CACEF0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00CAD2B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00CADB10,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00CAE1A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0a0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00CAE330,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 3,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00CAF8A0,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x060,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00CAFD30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 3,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00CB00A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0c0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00CB04E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0a0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00CB08F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00CB5590,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00CBD330,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x080,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00CBD8C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00CBDB20,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00CC5DC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 3,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00CC6150,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00CCB9D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00CCF700,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00CD0410,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x00CD3040,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00CD6460,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00CD9000,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00CD9150,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00CDDE00,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x00CE4390,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00CE7D00,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e0,
                several: 8,
            },
        ],
    },
    MultiPad {
        routine: 0x00CE83C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00CE8A60,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00CEEE80,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00CF12E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00CF19D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00D017A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0d8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00D01B10,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x080,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00D046B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 9,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00D052E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00D05A10,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00D08170,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00D21290,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00D23170,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00D23530,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00D30200,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00D305C0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00D30B40,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x080,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00D30C50,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00D30CC0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x040,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00D30E20,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00D392E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1c0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00D424A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00D4CA50,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00D57660,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00D7DDE0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00DA9350,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x488,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x490,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x4c0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00DD7230,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00DD9140,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x050,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00DD9420,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00DD95F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x050,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00DDD770,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x040,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00DDE0B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00DDED80,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00DDEFC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00DE6490,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x118,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x130,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00DE71E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00DE7A60,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e8,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00DE8070,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0f8,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00DE8950,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00DE8B10,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x00DE8D50,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 4,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x00DE9200,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x058,
                several: 3,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x00DFCF80,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00E0B010,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00E10240,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x068,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00E10840,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00E16590,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00EA2EE0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00EA2F10,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00EAA290,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00EAA460,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00EAAAF0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x100,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0f8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00EAAF40,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00EADE70,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00EAE420,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00EAE5C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00EAE710,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00EB8FE0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00EBA120,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00EC0A40,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 9,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00EC17E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x00EC3450,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00EC4360,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00EC47E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00EC49A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00EC62A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00EC74F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00ECC450,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 9,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00ECEC40,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00ED0120,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00ED0390,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00ED0A70,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00ED46F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00ED4D90,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 10,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x3f8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00EDC6D0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x040,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x270,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00EE2B90,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x160,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x168,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x178,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x180,
                several: 3,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x198,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x1a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00EE3810,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x150,
                several: 9,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x198,
                several: 3,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x1b0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1b8,
                several: 8,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x218,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x00EE42E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 3,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x068,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00EE4560,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00EE4EB0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x160,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x170,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x178,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00EE5230,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x060,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00EE5CE0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x080,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x0c0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00EE6050,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x170,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x2e8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00EEC090,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 6,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x080,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00EEC250,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00EEE090,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00F018A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00F04F50,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00F163D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 9,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00F19B80,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 10,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x120,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x140,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00F1B820,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x148,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00F1DEF0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0f0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00F20220,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00F433C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x170,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x00F52280,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x128,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00F52820,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x128,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00F52E00,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x130,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00F533E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x070,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0f8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00F538C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x070,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00F53D60,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x070,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0f0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00F60940,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00F609F0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00F70F20,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00F77B70,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00F7D890,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00F7DDB0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00F7F8B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00F84F10,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00F875C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00F8ADE0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x00F8B260,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x00F8BB50,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00F8C520,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x050,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x480,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00F8EBF0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00F8F220,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x00F96160,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x00F97140,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00F97EA0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00F9E290,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00F9F380,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00FA4840,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00FA4CF0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00FADD30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00FAEA60,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00FB1380,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00FB2450,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00FB6180,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00FBC8F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00FBE2F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00FBF240,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00FC0CF0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00FC29D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00FC5110,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d0,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x00FC77F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00FD0660,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x350,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x00FD5A60,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00FD74D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00FD9960,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00FDA0C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 10,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00FDA680,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00FDB650,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00FDB9C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00FF8EF0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x00FF9970,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x00FFAD20,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0104FA50,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x010520C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x010553F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x2d8,
                several: 3,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x2f0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x193f8,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x19418,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x010560E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01056D40,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x2d8,
                several: 3,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x2f0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x193f8,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x19420,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01057160,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x110,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0105D240,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 7,
            },
        ],
    },
    MultiPad {
        routine: 0x0105E860,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0105EC70,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0105F1D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x0105FBF0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 9,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x108,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x010611B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x128,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x010615E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x01063760,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01063ED0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01064570,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x0106D810,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x01071680,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01072B20,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01072C40,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01079730,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01079C30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0107A010,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0107AD50,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x0107B0A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x468,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0107BEC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x0107C5B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0107CA30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x100,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x110,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0107CEC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0f0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0107D210,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01082800,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 3,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x118,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01084210,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01084CA0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x010856A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01085880,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01086900,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x01089BB0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x0108A540,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 4,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0108AF40,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0108B290,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x0108B420,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 6,
            },
        ],
    },
    MultiPad {
        routine: 0x0108D530,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x0108D880,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0108DD10,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0108E330,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0108EFB0,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x188,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x180,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x178,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01099B20,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0109CE10,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0109D170,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0109DCC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 4,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x080,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x010A8300,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x010AE780,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x010B00B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x010B02F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x010B06D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x010B0940,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x010B1540,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x010B16D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x010B1C30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x010B2390,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x010B2610,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x010B2B90,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x010B2CC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x010B4650,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x010B71F0,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x040,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x010B7C40,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x010B7E60,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x010C11B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x138,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x150,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x010C1780,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x150,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x010C7240,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x170,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x010CB6D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x010CC070,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x010CC440,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x148,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x010CE630,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x010D0640,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x090,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x010D3210,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x350,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x010D66B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x010D7200,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x010DD2B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x010EAC80,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x120,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x010F2B10,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x010FAED0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x0110D1A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0110D6A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0110E080,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x168,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01114BE0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01116750,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x170,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x198,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x0111C560,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 3,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x01122FF0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01124230,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 3,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x068,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x011253C0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01125C80,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01125FE0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01127310,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01127D10,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01127F60,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01129EC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0112AEF0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01130610,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01139F80,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0113B090,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0f0,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x208,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0113C090,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x090,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0113C480,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x090,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x011417D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 10,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01142340,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01142990,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x01161440,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01165B20,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x150,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x168,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1b0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01167520,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x138,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x168,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01167830,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x138,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x01167A50,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x140,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0116A1B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0116C490,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x150,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01176F70,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x148,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01180E70,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x140,
                several: 10,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1c8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01182350,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x148,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x218,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01185C00,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x6b8,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x6e8,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x758,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01198060,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0119FCA0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x138,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x150,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x170,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x188,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x5d0,
                several: 10,
            },
        ],
    },
    MultiPad {
        routine: 0x011A3250,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x120,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x128,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x130,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x138,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x150,
                several: 6,
            },
        ],
    },
    MultiPad {
        routine: 0x011A93C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 10,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x3f8,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x011AC6F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01228F20,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01229E60,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x0122D1A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 10,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x180,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0122F9D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01232DF0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01236790,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x150,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0123AF90,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 2,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0123B590,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x0123ECE0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x150,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01242530,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x012426B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x012429C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01243180,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x100,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x128,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x012435C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x100,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x128,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x012437C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 3,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01243D50,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x012440D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01244800,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 9,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x098,
                several: 2,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0a8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e8,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x012451E0,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01245860,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01247320,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x228,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x220,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x218,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x210,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01247370,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x208,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x200,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1f8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1f0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x012473C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1e8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1e0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1d8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1d0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01247410,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1c8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1c0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1b8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1b0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x012479E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 3,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0124AB10,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x598,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x590,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0124AB40,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x588,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x580,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0124F670,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x588,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x580,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x578,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01250590,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x080,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x012506D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01250920,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01250A30,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01250CB0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01250E70,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x080,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d0,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01251040,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x080,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01251160,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01251310,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x080,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x01252F30,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0125DF50,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0125E160,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x080,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01260D50,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x060,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x0a0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01260EB0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01260FE0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 2,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01261190,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01265260,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x6d8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x6d0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x012663A0,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01268570,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01272BA0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0xff0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0xfe8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01275F80,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x130,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x138,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x140,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x170,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x178,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x012761C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x080,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x012768B0,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0a0,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0f0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01276B60,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 3,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0127D4A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 2,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0c0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x012842E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01284540,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01284C60,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 9,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 2,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0e8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0128BE80,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x4208,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x4200,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0128E8A0,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x408,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x400,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0128F000,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x090,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x098,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x110,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0128F3F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 2,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 3,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0c0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x012905F0,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x4228,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x4220,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01290B80,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x080,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01291BE0,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x238,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x230,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x228,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01291C40,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x218,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x230,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x210,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x238,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01292650,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 7,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 4,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0c0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x012938C0,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x012945E0,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 6,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x080,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01299CC0,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0a8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0129F640,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x090,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x012B5F90,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x130,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x4c8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x012B90B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x108,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x012B95E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x178,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x188,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x012BB0C0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x090,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x012BCD90,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x128,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x012BF9B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x2d8,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x012CCBE0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x012D0640,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x012DCA90,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x012E0D60,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x012E18C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x012E2010,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x012E21F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x012E23A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x012EDCE0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x012F4730,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x012F5200,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x012F6200,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x012F8DB0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01303980,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01305F90,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0130ABB0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0130DE20,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01313C10,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 7,
            },
        ],
    },
    MultiPad {
        routine: 0x01314D90,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x1a8,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x1a0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01315820,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d0,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x108,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x140,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x0131E080,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01324920,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0132BD70,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013357F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x01335B50,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 9,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013368C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0f0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x013370A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0133AD20,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 10,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01342360,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01348D90,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x6c0,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x6b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01348DC0,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x6b0,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x6a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013528A0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x0f0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01359700,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x068,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0135AA70,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0135B100,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x078,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x0135B250,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0135BCA0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0135BEA0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x0135DE30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0135EA10,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 9,
            },
        ],
    },
    MultiPad {
        routine: 0x0136B3D0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x180,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x013709D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 10,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01370F10,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x01371FC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x140,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01373060,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x3a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01373790,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x2d0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01373F30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01374C90,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0137A0F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x160,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0138E630,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0138FA60,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e0,
                several: 6,
            },
        ],
    },
    MultiPad {
        routine: 0x013907E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013A2A20,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1d0,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x2f8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013A3CB0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x013A5110,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013A5420,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x128,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013A6590,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x130,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013A6AB0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013A7000,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x013A7230,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013A7910,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x013A7CB0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013A8410,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x118,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013A9210,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x1c8,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x1c0,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x1b8,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x1b0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013A9260,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0f8,
                several: 10,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x170,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1f0,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x013A9AA0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013AC7D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013ACDF0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013AD250,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013AD870,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x013AE160,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x013AE570,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x013B4820,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013B4970,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013B6100,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013B7830,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e8,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x013B99F0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x080,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013BA5A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x448,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x013BABA0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x130,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x3f0,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x013BAF50,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x878,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013BB250,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x160,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x198,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013BB8A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 4,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0xb40,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013BBE30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x013BC5C0,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x0b0,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013BC5F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0f0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x100,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013BD0D0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x030,
                several: 5,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x158,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x160,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x168,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x013C09F0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x558,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013C0EF0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x013C10A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x013C27F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e8,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x013C36E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013C4AA0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x013C5210,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x013C6430,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x0e8,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x0e0,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x0d8,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x0d0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013C6480,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 6,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x0b8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x128,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013C69F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x100,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x013C74F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013CB2C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 9,
            },
        ],
    },
    MultiPad {
        routine: 0x013CC4D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013CCC30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013CD2D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013CE370,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x013CEF70,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d0,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x013D3630,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d8,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x013D98A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e0,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x100,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013DFAA0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1b8,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1d8,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x013E0470,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x110,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x180,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x2a8,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x2c8,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x013E1EF0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x108,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x128,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x160,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013E5960,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x013E6230,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x013E78F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x013F08B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x148,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x013F3AB0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 4,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x068,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x013F4760,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 4,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x068,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 7,
            },
        ],
    },
    MultiPad {
        routine: 0x013F5170,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x158,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x013F8800,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x3a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013FCF30,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013FD750,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x218,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x210,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013FEA60,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x0e8,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x0e0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x013FEA90,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x110,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01405DC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01407FE0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x140,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x148,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01409F70,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0140C0A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x0140EB40,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x014133C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x014136E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01415BB0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01416180,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x0f8,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x0f0,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x0d8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x014161C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 9,
            },
        ],
    },
    MultiPad {
        routine: 0x014165D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x014186D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 5,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0141AA50,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0141CA40,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 10,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0142A5D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x014310E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01431BE0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01433250,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01437A70,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0143C9D0,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x1f0,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x1e8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0143D310,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 10,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 10,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0143DA30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01440FA0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1b0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0144B600,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0f8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x014630A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01463580,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01469DD0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0146F450,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x014702A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x014707C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x014739F0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x014779C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01478350,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x014785F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x170,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x01478F70,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x2f8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x398,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01479870,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01479D50,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0147BC80,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0147D5B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0147F4F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x100,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0147FD10,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01480C40,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x080,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x070,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01480C80,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01481290,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01482FD0,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x170,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x168,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x160,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x158,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x150,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01483020,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0f0,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x110,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x130,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01483970,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x100,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01495950,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01495C60,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01496380,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x168,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x178,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x014968B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x118,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01498720,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01499340,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01499F30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 6,
            },
        ],
    },
    MultiPad {
        routine: 0x0149A450,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x110,
                several: 6,
            },
        ],
    },
    MultiPad {
        routine: 0x0149DC70,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x014A0E20,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x014A14C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x014A18F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x4b8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x4d8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x014A7A10,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x100,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x014AC4A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x014B4880,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x014B4DF0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x014B55D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x014BA360,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x014BBF50,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x014BE180,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x014BE740,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x014BEF00,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 9,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x0b8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x014C0970,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x014C0E90,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x014C2350,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x014C2760,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x014C3980,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x014C3E50,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0f8,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x014C45C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 7,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x014C4960,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x014C4BE0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x014C5080,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x0a0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x014C52F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 5,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x0d8,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x014C8D20,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x460,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x014C9EA0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x014CD6C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x014CDFE0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0f8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x014CE230,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x014CE620,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x014CF6C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x014CFA60,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x014DBED0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x138,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x148,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x014E31F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1b0,
                several: 10,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x208,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x014E3A20,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x188,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x198,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x014E88C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x014E8B70,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x014E91D0,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x0b8,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x0b0,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x014EA270,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 9,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x014EC750,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 6,
            },
        ],
    },
    MultiPad {
        routine: 0x014EC960,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 3,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x014ECB80,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 5,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x014ED450,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x0b0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0f8,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x014EF600,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x014FE790,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01504A30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01507BC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x150,
                several: 6,
            },
        ],
    },
    MultiPad {
        routine: 0x01508200,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01508820,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x050,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x080,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x01509B30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x150,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x158,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x178,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0150A440,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x130,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x138,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x148,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x015110C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 6,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0151EAF0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01521030,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x148,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01521240,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x138,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x0152A4E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0152BD30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x015301A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x015303B0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01530A90,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x015315B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 6,
            },
        ],
    },
    MultiPad {
        routine: 0x015322A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0153CF30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0153D780,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0154CBC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0154E5F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d0,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x108,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x178,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0154EE00,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x120,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0154F460,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x0154FB70,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e8,
                several: 6,
            },
        ],
    },
    MultiPad {
        routine: 0x01550750,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x01551BD0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x015524D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x128,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x188,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01553DA0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x168,
                several: 8,
            },
        ],
    },
    MultiPad {
        routine: 0x01557E60,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01558140,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0155B160,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x150,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0155E6F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0155EA90,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0155FA80,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x015602C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x050,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x015605C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01561830,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x150,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x158,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01561860,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d8,
                several: 8,
            },
        ],
    },
    MultiPad {
        routine: 0x01561A90,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01562E70,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 4,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x0e0,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x108,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x178,
                several: 7,
            },
        ],
    },
    MultiPad {
        routine: 0x01563BF0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01564D60,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0f0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x108,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x150,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01567750,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 8,
            },
        ],
    },
    MultiPad {
        routine: 0x01567C60,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01568FF0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x0156AC60,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0156B600,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x0156B830,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 8,
            },
        ],
    },
    MultiPad {
        routine: 0x0156BBC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0156BFF0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0156C2B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x660,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x668,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0156CAD0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 5,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x1068,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x0156CC60,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x088,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0156D050,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 3,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x260,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x2a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01570C50,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x168,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x2c0,
                several: 9,
            },
        ],
    },
    MultiPad {
        routine: 0x01571B10,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x015750D0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x030,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01594680,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x028,
                several: 3,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x140,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x015AADB0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x015ADCD0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x015B5C40,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x015B6010,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x015BFA10,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x120,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x128,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x150,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x015C1420,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x015C1A90,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x015D4E10,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x015D7B50,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x015D9670,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x015DA420,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x015DB220,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x015DB990,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x015EA7E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x160,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x015EAAC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x015EECC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x4d0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x015EF340,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x015F0D00,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x448,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x488,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x015F10D0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 6,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x088,
                several: 3,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x4a8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x4e8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x015F1550,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 8,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 6,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x0b0,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x0e8,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x015F1AD0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 5,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x015F1C10,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x015F2070,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x015F2A30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1068,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x10b0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x10e0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x015F3170,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x110,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x015F3630,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x015F3D10,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x108,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x015F42E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x108,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x015F45E0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x015F4770,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x015F49F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x015F6F30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x280,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x015F8A70,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x110,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x015F90C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 3,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x015F9370,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x015F9B80,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 3,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 4,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x0a0,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x015F9E60,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x490,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x015FACD0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x050,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x490,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x498,
                several: 6,
            },
        ],
    },
    MultiPad {
        routine: 0x015FB930,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x015FBB70,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x015FCD30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x488,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x015FEB90,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x015FFB60,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x015FFD80,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x016010F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 6,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x0a8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0xcd8,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01601710,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x080,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01601AA0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 5,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x178,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1a8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1d8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01601D90,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x398,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01602D60,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x8e0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x8f0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01603270,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1b0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01604850,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 10,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x108,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x348,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01604E00,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01605170,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01605630,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x016057C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01606820,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 10,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x108,
                several: 6,
            },
        ],
    },
    MultiPad {
        routine: 0x01608410,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 8,
            },
        ],
    },
    MultiPad {
        routine: 0x0160A950,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x050,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0160AFC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0160B460,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 9,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0160BC50,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0160BF80,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x858,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1078,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x0160E750,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x0160ED20,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0160F5D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x0160FF80,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x128,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x120,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x118,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0160FFC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x110,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x168,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01610A60,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x180,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x188,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1e0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x2b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01613030,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01615EE0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01616470,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016165E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0161E480,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x158,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x180,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x2f0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0161E910,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x148,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x180,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x2f0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0161EA20,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x170,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0161EAB0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x160,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0161EDD0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0161F200,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x110,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01626950,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x168,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x016270B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01627830,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 8,
            },
        ],
    },
    MultiPad {
        routine: 0x016289A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x138,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0162CEB0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x188,
                several: 9,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1d8,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01630490,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0xc90,
                several: 6,
            },
        ],
    },
    MultiPad {
        routine: 0x016358E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016364C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01636790,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01639360,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0163C7D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x0163D550,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x0163D900,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x100,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0163DB70,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0163DFA0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0163EA50,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x0163EC90,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0163F3F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0163FC60,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01641920,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01641D80,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01642070,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01643EE0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016446B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01645E30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01648470,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01648A10,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01655360,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01691560,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01693340,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01696750,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x128,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x138,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01696CC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x128,
                several: 9,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x180,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x016A3B60,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 5,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x088,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016A4500,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x040,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016A8170,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016B1090,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 3,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016B12D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x068,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x016B1550,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x078,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x016B1A40,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 9,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x016B8FF0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016B91B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016B9700,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x130,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x148,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016BA4E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016BA6F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x180,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016BB1D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016BB6A0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016BBAE0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016BD6D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x158,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x188,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016BF020,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x030,
                several: 4,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x098,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x016C0DC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x158,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016C22C0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x148,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x160,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x016C2F40,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x198,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x2a0,
                several: 10,
            },
        ],
    },
    MultiPad {
        routine: 0x016C4810,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x148,
                several: 7,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x188,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x1c8,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x016C6470,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x040,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x168,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x016C7320,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x060,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x080,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 4,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x1a8,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x016C7740,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x050,
                several: 3,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x168,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x016C8680,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 4,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x158,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x4d8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016CA210,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x158,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016CB770,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x080,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016CB980,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x168,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016CC560,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x150,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x160,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x178,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x2b0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016CC870,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1b0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016CCBD0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 4,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x080,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x016CD200,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x016D6A90,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x318,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016D78F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x016D8D70,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x1f8,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x1f0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016D8DB0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x198,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1b0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016DA740,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x160,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x016F8430,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016F8D60,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0c0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016FA2E0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016FAA70,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 8,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016FABB0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 4,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x060,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x016FB400,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x080,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016FB4E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016FC550,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x016FCAD0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x148,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x188,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x016FCE40,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016FD650,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x016FE0F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 10,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x100,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x138,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016FE8D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 10,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x110,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x138,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x160,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016FED90,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x198,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1a8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1d8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016FEF30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x198,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1e8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016FF100,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x198,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1a8,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x208,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016FF2D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x198,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1b0,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x208,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x016FF9C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x140,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x016FFC40,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01700250,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01703200,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x0170A2F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0170AF50,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01711280,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01712220,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x090,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 7,
            },
        ],
    },
    MultiPad {
        routine: 0x01712560,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x017127E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01713640,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 10,
            },
        ],
    },
    MultiPad {
        routine: 0x01717C60,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d0,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x017181B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 9,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x110,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x017190C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0171A850,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 10,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0f0,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x138,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0171B6B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 5,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01729F10,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0172A200,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 2,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0172AA20,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0172BAD0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0172C8D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0172E670,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 9,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x100,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0172EC10,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x188,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x0172F290,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 10,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x218,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x3a0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0172FAF0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x01730040,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0173BD60,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x0f0,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0f8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x120,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x148,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0173D1B0,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x070,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01743940,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x080,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e0,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x140,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x148,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01746250,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x0a8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x130,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x138,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01748C20,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e8,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x110,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x118,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01749C30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0b0,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0174B280,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x080,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0b8,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0c0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0174B580,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x150,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x158,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0174B860,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x098,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0a0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0174BAE0,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x0a0,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0174C0E0,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x110,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x118,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0174C560,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0d0,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0d8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0174CED0,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0b8,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0c0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0174D130,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x0b0,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01750060,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x130,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x138,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0175A740,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x368,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0175F5A0,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0175F740,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 3,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x017686A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x017696A0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01769B20,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0176BAF0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0176C8F0,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x2060,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x2058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0176D2F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x150,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x198,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0176D490,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0176FC80,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x208,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x200,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x1f8,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x1f0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01770D30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01771830,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x017741B0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01774570,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01774820,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01774BF0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x050,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x017755C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01776450,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x01776AC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x01778E60,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0177F7D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01780610,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01785770,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x388,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x017992C0,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x0a8,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x0a0,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01799650,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0179EDD0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x017A03F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x017A4B40,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x017A4F00,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x017A5310,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x017AF930,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x3c8,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x017B1340,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x017B3A50,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x017BE530,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x017C08D0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x017C97A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x017CD7B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x017CE0B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 10,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x108,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x120,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x017CF250,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0f0,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x168,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x017D2640,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x060,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x017E2270,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x128,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x017E4070,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x140,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x4b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x017E7DF0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1a0,
                several: 10,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x210,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x248,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x790,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x017E8600,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x017E9D30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x470,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x017EB9F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x148,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x017EF480,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x017EF880,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x017F0340,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x017F06D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x178,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x017FD000,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 4,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x017FD5E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 5,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x070,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x017FDE90,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 5,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x017FE0D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x017FE350,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x017FE560,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x017FE8C0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x017FFD20,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x130,
                several: 9,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1b0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01804650,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01805170,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01805990,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 4,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01806CF0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01806E80,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x030,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01807420,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01807630,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01807710,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01807800,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01807B40,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x018089E0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x060,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x018099F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x0180AD30,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x0180D3E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x018137D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x060,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01814440,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x018146C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0181F4A0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0181FAC0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01835290,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01836DA0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0183A1C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0183B600,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0183D020,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01852FB0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 9,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x108,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0186CDD0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0186CF60,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0186D5D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x070,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0186DEF0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x018711E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01871280,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01872090,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x018722A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0187A340,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x0187A4A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0187A5E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0187ADF0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0187B900,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 3,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x058,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x070,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x0187BCB0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01881750,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01884390,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x050,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01887CC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 3,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0189CF40,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x0189E590,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 10,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x018A4DA0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 9,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0f0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x018AF990,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x018B3460,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x018B9360,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 4,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x018B9BC0,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x0b8,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x0b0,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x0a8,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x0a0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x018BC730,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 3,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x018C1FB0,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x018C78D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x018D3B50,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 9,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0f0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x018D48F0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x018D78E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 4,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x060,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x080,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x018D8BA0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x0e8,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x0f0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x018DB4A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x068,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x018DC140,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 3,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x018FADD0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01952070,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01953760,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0195C600,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0195ED70,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0195EF80,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0195F0A0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01960490,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01962370,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01964480,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01964C90,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 9,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x080,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 3,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x0a0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x019687C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0196CE60,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0196D150,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0196FD30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01972470,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 8,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01972B20,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01976880,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01976E20,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01977AF0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0197A9A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0197F960,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0197FEC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01980920,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01982A20,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x0198AB50,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0198C1A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 6,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01990FE0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0a0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x2c0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01992840,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x0199EF40,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x019A40B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019A6110,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 7,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0e0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e8,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x019A8770,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x080,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x019A8A30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x019A91E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019A94B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x019A9C20,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0f0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019ACB00,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019AFCB0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x019B5970,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019B6860,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019B6AA0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x019B6E10,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x019B78E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019B8E90,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 9,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1a0,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019C2A90,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019C2D30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019C3750,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x158,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x168,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019C4BC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e8,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x168,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x019C5970,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019C7380,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0f8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019CDAA0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019D1E90,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x130,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019D4A70,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x118,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x148,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019D9C30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019D9FE0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019DAB00,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 9,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x108,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x138,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019DC0B0,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x1e8,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x1e0,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x1d8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019DCCD0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019DE160,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019E46E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0xae0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0xad8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0xad0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019E4740,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0xac0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0xab8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0xab0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0xaa8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0xaa0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019E4790,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0xa98,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0xa90,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0xa88,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0xa80,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0xa78,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019E47E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0xa70,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0xa68,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0xa60,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0xa58,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019E48A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0xa18,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0xa10,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0xa08,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019E4940,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x9f0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x9e8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x9e0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x9d8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x9d0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x9c8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019E4A00,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x9b8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x9b0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x9a8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x9a0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x998,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x990,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019E4AC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x980,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x978,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x970,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x968,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x960,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x958,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019E4B20,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x950,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x948,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x940,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x938,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019E4BE0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x928,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x920,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x918,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x910,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x908,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019E4C30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x900,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x8f8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x8f0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x8e8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019E4C80,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x8e0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x8d8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x8d0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019E4CC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x8c8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x8c0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x8b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019E4D00,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x8b0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x8a8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x8a0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019E4D40,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x898,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x890,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x888,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019E4EC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x7f8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x7f0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x7e8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019EADF0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019EBC60,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1c8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1c0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019ED5B0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x030,
                several: 3,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x148,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x170,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x178,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x180,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019ED9D0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x150,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x160,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x168,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x170,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019EDD20,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x138,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x148,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x150,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019EDF90,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x140,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x150,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019EE390,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x148,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x180,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019EE7C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x019EEFA0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019EF120,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019EFC30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x019F13D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x310,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019F2D80,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x160,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x450,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019F30B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x150,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019FB740,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x540,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x538,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019FB790,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x528,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x520,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x518,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019FED10,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x019FFE40,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1c8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1c0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A007C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 3,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x080,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 6,
            },
        ],
    },
    MultiPad {
        routine: 0x01A01400,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x01A02420,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A04430,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x090,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A04D30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 9,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e8,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01A07B90,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01A09610,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x338,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x330,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A09690,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x310,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x308,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x300,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A096D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x2f8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x2f0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x2e8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A0AC00,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x298,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x290,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A0AC30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x288,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x280,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A0C620,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x01A0CE00,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x138,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x148,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A0EDA0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x198,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1f8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A0F0A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A1D8E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1608,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1600,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A1F120,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A25940,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x0f8,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x0f0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A26530,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x128,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x120,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A26560,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0f0,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x158,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A27100,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A27620,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01A27D80,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 10,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x118,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01A2A150,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A2A560,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01A2AB60,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A2B410,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A2CFF0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A2FFB0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A32050,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x070,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01A322E0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01A324A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x060,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01A34790,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A349E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A34ED0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01A35920,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x1378,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x1370,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A36780,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x01A36DD0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A376B0,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x090,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A39610,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x108,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A3DCD0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A3DF40,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x298,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01A3E740,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 7,
            },
        ],
    },
    MultiPad {
        routine: 0x01A3EA40,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 9,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A3F370,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x108,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x100,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A3FCD0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e8,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x138,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A402F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A415D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0f0,
                several: 8,
            },
        ],
    },
    MultiPad {
        routine: 0x01A42B90,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 7,
            },
        ],
    },
    MultiPad {
        routine: 0x01A458D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A48BD0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 9,
            },
        ],
    },
    MultiPad {
        routine: 0x01A49540,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01A49900,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x098,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d0,
                several: 8,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x138,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x178,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A49E60,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01A4B100,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x288,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x280,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x278,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x270,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A4BDF0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01A4C4E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A4C8C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x01A4CB40,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01A4CCC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01A4D410,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01A507F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A51130,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A514C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01A52470,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x100,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x128,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A52D80,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x138,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A536C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x118,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A53AB0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 6,
            },
        ],
    },
    MultiPad {
        routine: 0x01A54300,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A55330,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0f0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A55DB0,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x098,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x080,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A55DF0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01A560F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A56A90,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x128,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01A57900,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 9,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x108,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x140,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A57F60,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d0,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x118,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A59A00,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d8,
                several: 9,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x128,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A5A8B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 7,
            },
        ],
    },
    MultiPad {
        routine: 0x01A5AD50,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A61B70,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A67EB0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A69BD0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x170,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A77160,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x3d8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x3d0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A833A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x5f0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x5e8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A83530,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x588,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x580,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x578,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A83570,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x570,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x568,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x560,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A83CC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x418,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x410,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A83CF0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x410,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x448,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A87790,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 10,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A89230,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01A89A00,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01A8AFB0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x01A997D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 3,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x098,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1d8,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01A9CB60,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01AA0660,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 8,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01AA1C40,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01AAD510,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01ABD8D0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01AD0FE0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01AD53D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01AD6C40,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01AD9980,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 9,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01ADB490,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x168,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x160,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01ADEC60,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01AE7080,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01AE76B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01AE7A00,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01AE80E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01AE8B30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0f0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01AEE810,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x150,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x188,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01AF1720,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B04FB0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01B06D30,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x178,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1d0,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1f0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B08200,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B08460,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B08DD0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x250,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x268,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B096E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x130,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x128,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B09710,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x128,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x170,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B0C720,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 99,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x378,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x370,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x380,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01B0DB70,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B0EF10,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 10,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01B0F480,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x158,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B1D630,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x180,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01B1DD00,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0xad0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B1EA80,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x030,
                several: 6,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B1FEC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B21E80,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B22D50,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x250,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B23310,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B23400,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B23D40,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x1d8,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x1d0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B23D70,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B24020,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B246D0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01B24E00,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B24FC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B25860,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01B25A00,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01B2C5C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B2CBF0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B2D0E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 10,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B35B00,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01B45AF0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x058,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B46130,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B462C0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B47800,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B47BB0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B49000,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x058,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B49CA0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B4C360,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01B4CDA0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B4DA80,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x568,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x560,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x558,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x550,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B4E540,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x148,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x140,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x138,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x130,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B519F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B51D10,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B54610,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x01B65330,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x150,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01B67360,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x100,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01B6D5F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x188,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x490,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01B704D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01B72830,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B771D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B79030,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0f0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B79720,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B7C0E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B815F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B81DB0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B821B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01B83B00,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x110,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B83F70,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01B84390,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B86F30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B87900,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01B87C00,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01B88220,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B88A80,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 9,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B8AA20,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x1c8,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x228,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x1c0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B8B060,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B8B920,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01B8C1C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x108,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B8CAE0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B8FF80,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x450,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01B92B30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01B95D20,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 6,
            },
        ],
    },
    MultiPad {
        routine: 0x01B98F90,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01B992C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B99760,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B9A8B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01B9BC00,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B9CFE0,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x150,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x160,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B9D0F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B9DC80,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x150,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1b0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01B9DFF0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x128,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x138,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x140,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x160,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01BA12E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01BA1460,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01BA2060,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x0a0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01BA3130,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x050,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01BA4420,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01BA48B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 3,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01BA4C60,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x068,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01BA9510,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01BAA290,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01BAB460,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01BAB760,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x150,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x168,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01BAE4C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01BB24E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01BB3500,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01BB3530,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 3,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01BB4BE0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01BB4FE0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01BB7480,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01BBAB80,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01BBD770,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x248,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x240,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x238,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01BBEAD0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01BBFBA0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0f8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x108,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01BC1150,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x01BC13A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x01BC2B80,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x01BCCBF0,
        lets: &[
            Let {
                releases: Releases::Interface,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01C1E730,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 4,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x278,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x2b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01C1ED50,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0e0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01C1F4A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01C20A30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x038,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01C20D40,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01C29AD0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01C2CA90,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x180,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1b8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1f8,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01C2D700,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x148,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x178,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1b8,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01C2EC00,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x138,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01C32690,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01C33990,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01C33E30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01C344E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01C37A20,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x01C3CA80,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x01C3D150,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01C3DB30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01C3ECF0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x108,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01C3FEF0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01C44A30,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 7,
            },
        ],
    },
    MultiPad {
        routine: 0x01C47320,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 9,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x01C4A690,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01C4AD40,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 6,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01C4B210,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 8,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x2a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01C677B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01C67AB0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x150,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x01C67D10,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01C690E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x118,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x130,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01C6E180,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x130,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x168,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01C6FEA0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 8,
            },
        ],
    },
    MultiPad {
        routine: 0x01C70350,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x138,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x158,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x160,
                several: 6,
            },
        ],
    },
    MultiPad {
        routine: 0x01C71DC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 9,
            },
        ],
    },
    MultiPad {
        routine: 0x01C73800,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x158,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x178,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x180,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1b8,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01C76570,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x2c8,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x2c0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01C76860,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x2d0,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x2c8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01C788E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x178,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1b0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01C79300,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x138,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x158,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01C79670,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x218,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01C81180,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x4c0,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01C81BA0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01C83520,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x438,
                several: 2,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x448,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01C83A00,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 10,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x100,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01C84880,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01C85800,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 4,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01C90BE0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01C912C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01C92090,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01C938A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x450,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01C97FC0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01C983A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01C99630,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01C99B20,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01C9A920,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01C9B400,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01C9BCE0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x118,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x130,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01C9C6A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 7,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01C9D050,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x858,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01CA08E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01CA2810,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 10,
            },
        ],
    },
    MultiPad {
        routine: 0x01CA2D20,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01CA45E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01CA4A00,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x108,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01CA4D70,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x288,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x2a0,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01CBF9A0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01CBFED0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01CC0700,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01CC1F20,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01CC26C0,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01CC2A70,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01CC3090,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 10,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x100,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x120,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01CC3300,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01CC3730,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01CC4520,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01CD0610,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01CD20F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01CD28D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01CD7220,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01CE7470,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01CEA2C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x220,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x218,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01CF24C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 5,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x01CF4940,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 10,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x1e8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x210,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x01CF5980,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x01CF74A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x1a8,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01CFA3D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x01D020E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01D02730,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x068,
                several: 9,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01D02FA0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x100,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01D03D80,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 2,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x088,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d8,
                several: 5,
            },
        ],
    },
    MultiPad {
        routine: 0x01D04200,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x068,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 4,
            },
        ],
    },
    MultiPad {
        routine: 0x01D05910,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01D075D0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x020,
                several: 3,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x050,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01D09500,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01D09F70,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x058,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x070,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x078,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01D0A290,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x060,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x080,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01D165E0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 5,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x068,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01D187B0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01D1A9F0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 2,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0c0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01D1B530,
        lets: &[
            Let {
                releases: Releases::Object,
                offset: 0x0d8,
                several: 1,
            },
            Let {
                releases: Releases::Object,
                offset: 0x0d0,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01D1B560,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0b0,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01D1D5A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 7,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x0f8,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x100,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x108,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x170,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x180,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01D1E0C0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x100,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x160,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x170,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01D1ED70,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 5,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0f8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x150,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x160,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01D24440,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x050,
                several: 8,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x090,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x110,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01D314A0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x028,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x148,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01D32350,
        lets: &[
            Let {
                releases: Releases::PlatformString,
                offset: 0x030,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01D38210,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x168,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x480,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01D3A200,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 3,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01D3A330,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x068,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01D3EDE0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x060,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x178,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01D43C50,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x088,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x098,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01D44AC0,
        lets: &[
            Let {
                releases: Releases::NarrowString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::NarrowString,
                offset: 0x078,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01D78AD0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a0,
                several: 6,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d8,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x280,
                several: 3,
            },
        ],
    },
    MultiPad {
        routine: 0x01D78E50,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0a8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01D79280,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x028,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x078,
                several: 2,
            },
        ],
    },
    MultiPad {
        routine: 0x01D7BD90,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x048,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x198,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01D7C1A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x040,
                several: 1,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x058,
                several: 1,
            },
            Let {
                releases: Releases::Interface,
                offset: 0x478,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01D7D180,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x030,
                several: 10,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0d8,
                several: 4,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x0f8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01D849A0,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 3,
            },
            Let {
                releases: Releases::OwnWideString,
                offset: 0x2c8,
                several: 1,
            },
        ],
    },
    MultiPad {
        routine: 0x01D84C90,
        lets: &[
            Let {
                releases: Releases::OwnWideString,
                offset: 0x038,
                several: 1,
            },
            Let {
                releases: Releases::PlatformString,
                offset: 0x040,
                several: 2,
            },
        ],
    },
];

/// How many such pads there are.
pub const MULTI_PAD_COUNT: usize = 1788;

/// Implements part of the landing-pad family.
///
/// What one pad lets go of, if this address is one.
#[must_use]
pub fn pad_at(routine: u32) -> Option<&'static MultiPad> {
    MULTI_PADS
        .binary_search_by_key(&routine, |pad| pad.routine)
        .ok()
        .map(|at| &MULTI_PADS[at])
}

/// Implements part of the landing-pad family.
///
/// How many things the widest pad lets go of.
#[must_use]
pub fn widest() -> usize {
    MULTI_PADS
        .iter()
        .map(|pad| pad.lets.len())
        .max()
        .unwrap_or(0)
}

/// Implements part of the landing-pad family.
///
/// Every pad that lets go of one kind of thing at some point.
#[must_use]
pub fn pads_touching(releases: Releases) -> Vec<&'static MultiPad> {
    MULTI_PADS
        .iter()
        .filter(|pad| pad.lets.iter().any(|held| held.releases == releases))
        .collect()
}

/// Implements part of the landing-pad family.
///
/// Which way one pad walks the frame.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Walks {
    /// Upward through the frame, which is what nearly all of them do.
    Rising,
    /// Downward.
    Falling,
    /// Neither — the offsets go up and down.
    Neither,
}

/// Implements part of the landing-pad family.
///
/// Which way one pad walks the frame.
#[must_use]
pub fn walks(pad: &MultiPad) -> Walks {
    if pad
        .lets
        .windows(2)
        .all(|pair| pair[0].offset < pair[1].offset)
    {
        Walks::Rising
    } else if pad
        .lets
        .windows(2)
        .all(|pair| pair[0].offset > pair[1].offset)
    {
        Walks::Falling
    } else {
        Walks::Neither
    }
}

/// Implements part of the landing-pad family.
///
/// How many pads walk the frame each way.
#[must_use]
pub fn counted_walking(which: Walks) -> usize {
    MULTI_PADS.iter().filter(|pad| walks(pad) == which).count()
}

/// Implements part of the landing-pad family.
///
/// The kinds of thing that ever appear together in one frame.
#[must_use]
pub fn kinds_seen_together() -> Vec<(Releases, Releases)> {
    let mut found: Vec<(Releases, Releases)> = Vec::new();
    for pad in &MULTI_PADS {
        for (at, first) in pad.lets.iter().enumerate() {
            for second in &pad.lets[at + 1..] {
                let pair = if first.releases <= second.releases {
                    (first.releases, second.releases)
                } else {
                    (second.releases, first.releases)
                };
                if pair.0 != pair.1 && !found.contains(&pair) {
                    found.push(pair);
                }
            }
        }
    }
    found.sort_unstable();
    found
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn the_count_is_what_the_table_holds() {
        assert_eq!(MULTI_PADS.len(), MULTI_PAD_COUNT);
    }

    #[test]
    fn every_pad_lets_go_of_at_least_two_things() {
        for pad in &MULTI_PADS {
            assert!(pad.lets.len() >= 2, "{:#010X}", pad.routine);
        }
    }

    #[test]
    fn and_none_lets_go_of_more_than_six() {
        assert!(widest() <= 6);
        assert!(widest() >= 2);
    }

    #[test]
    fn the_table_is_sorted_so_it_can_be_searched() {
        assert!(
            MULTI_PADS
                .windows(2)
                .all(|pair| pair[0].routine < pair[1].routine)
        );
    }

    #[test]
    fn a_pad_can_be_found_by_its_address() {
        let known = MULTI_PADS[0].routine;

        assert!(pad_at(known).is_some());
        assert!(pad_at(0).is_none());
        assert!(pad_at(0xFFFF_FFFF).is_none());
    }

    #[test]
    fn none_of_these_is_also_a_single_release_pad() {
        // The two tables are of one population and must not overlap.
        for pad in MULTI_PADS.iter().take(300) {
            assert!(
                crate::frame_pads::pad_at(pad.routine).is_none(),
                "{:#010X}",
                pad.routine
            );
        }
    }

    #[test]
    fn every_offset_is_a_whole_number_of_words_into_the_frame() {
        for pad in &MULTI_PADS {
            for held in pad.lets {
                assert_eq!(held.offset % 8, 0, "{:#010X}", pad.routine);
            }
        }
    }

    #[test]
    fn no_pad_lets_go_of_one_place_twice() {
        for pad in &MULTI_PADS {
            let mut offsets: Vec<u32> = pad.lets.iter().map(|held| held.offset).collect();
            let before = offsets.len();
            offsets.sort_unstable();
            offsets.dedup();

            assert_eq!(offsets.len(), before, "{:#010X}", pad.routine);
        }
    }

    #[test]
    fn nearly_every_pad_walks_up_through_the_frame() {
        // The release order follows the layout order rather than reversing it,
        // which is not what scoped destruction would give: these are emitted
        // from a list of the frame's contents, not from the order they were
        // acquired in.
        let rising = counted_walking(Walks::Rising);

        assert!(
            rising * 10 > MULTI_PADS.len() * 9,
            "{rising} of {}",
            MULTI_PADS.len()
        );
    }

    #[test]
    fn a_few_walk_down_instead() {
        assert!(counted_walking(Walks::Falling) > 0);
        assert!(counted_walking(Walks::Falling) < counted_walking(Walks::Rising));
    }

    #[test]
    fn and_a_handful_do_neither() {
        // Those are the frames where something really was acquired out of step
        // with the layout.
        let neither = counted_walking(Walks::Neither);

        assert!(neither > 0);
        assert!(neither < 20, "{neither}");
    }

    #[test]
    fn every_pad_walks_one_of_the_three_ways() {
        let counted = counted_walking(Walks::Rising)
            + counted_walking(Walks::Falling)
            + counted_walking(Walks::Neither);

        assert_eq!(counted, MULTI_PADS.len());
    }

    #[test]
    fn several_kinds_of_thing_share_a_frame() {
        let together = kinds_seen_together();

        assert!(together.len() > 3, "{together:?}");
    }

    #[test]
    fn a_frame_holding_several_strings_of_one_kind_uses_the_release_for_several() {
        let many = MULTI_PADS
            .iter()
            .flat_map(|pad| pad.lets.iter())
            .filter(|held| held.several > 1)
            .count();

        assert!(many > 0);
    }

    #[test]
    fn every_kind_that_appears_appears_in_the_single_release_table_too() {
        // The two sweeps found the same kinds, which is what says the
        // classification is of the population and not of the sweep.
        for pad in MULTI_PADS.iter().take(500) {
            for held in pad.lets {
                assert!(
                    !crate::frame_pads::groups_releasing(held.releases).is_empty(),
                    "{:?}",
                    held.releases
                );
            }
        }
    }
}
