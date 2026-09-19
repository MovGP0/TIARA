//! Straight-line routines that call nothing by name.
//!
//! 624 of them. Every step they take reaches what it calls through something —
//! the table of the object they were handed, the table of something that object
//! holds, or a table named outright — and none of them names a routine directly.
//!
//! That is the only thing they have in common, and it is worth being exact about
//! what it does and does not mean. It does **not** mean the program separates
//! routines that call by name from routines that reach: a routine may do both,
//! and many do. These are simply the ones that never call by name, which is why
//! a sweep looking for names could not see them. The earlier table in
//! [`crate::straight_line_routines`] holds the rest, including the mixed ones.
//!
//! What the steps reach through is the part worth having. Most go through the
//! table of the very object the routine was handed, which is a routine answering
//! for itself in a way its own name cannot express; the next most go through
//! something held, which is a routine answering on behalf of something else.

// The addresses are written without separators so the port-mapping importer can
// match them against the recovered functions.
#![allow(clippy::unreadable_literal)]

/// How a step reaches what it calls.
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord)]
pub enum Through {
    /// The table of something that thing holds.
    AFieldsTable,
    /// A table named outright rather than reached through anything.
    ATableNamedOutright,
    /// The table of the thing the routine was handed.
    ItsOwnTable,
}

/// One step of a routine.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct Step {
    /// How it reaches what it calls.
    pub through: Through,
    /// Which slot, or which field, as the way of reaching says.
    pub at: i32,
}

/// One routine and the steps it takes, in order.
#[derive(Debug, Clone, Copy)]
pub struct Reaching {
    /// Where it sits.
    pub routine: u32,
    /// What it does, in order.
    pub steps: &'static [Step],
}

/// Every straight-line routine that calls nothing by name.
pub static REACHING: [Reaching; 624] = [
    Reaching {
        routine: 0x00409E80,
        steps: &[Step {
            through: Through::ATableNamedOutright,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x00409EB0,
        steps: &[Step {
            through: Through::ATableNamedOutright,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x004127A0,
        steps: &[Step {
            through: Through::ATableNamedOutright,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x0046E670,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 112,
        }],
    },
    Reaching {
        routine: 0x004B1CA0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x004B2850,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 16,
        }],
    },
    Reaching {
        routine: 0x004B2880,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 16,
        }],
    },
    Reaching {
        routine: 0x004B2DA0,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 120,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 72,
            },
        ],
    },
    Reaching {
        routine: 0x004B47C0,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 48,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 152,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 208,
            },
        ],
    },
    Reaching {
        routine: 0x004B6810,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 112,
        }],
    },
    Reaching {
        routine: 0x004B6DE0,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 80,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 80,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 80,
            },
        ],
    },
    Reaching {
        routine: 0x004B7330,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x004B7350,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 40,
        }],
    },
    Reaching {
        routine: 0x004B7A00,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x004B7A70,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 48,
        }],
    },
    Reaching {
        routine: 0x004B7AA0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 32,
        }],
    },
    Reaching {
        routine: 0x004B8380,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 32,
        }],
    },
    Reaching {
        routine: 0x004B9EC0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 96,
        }],
    },
    Reaching {
        routine: 0x004D6640,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 64,
        }],
    },
    Reaching {
        routine: 0x004D7510,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x004DA3B0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x004DA860,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 16,
        }],
    },
    Reaching {
        routine: 0x004DAF60,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 32,
        }],
    },
    Reaching {
        routine: 0x004E5C20,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
        ],
    },
    Reaching {
        routine: 0x004ECE30,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
        ],
    },
    Reaching {
        routine: 0x004EEA60,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 16,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
        ],
    },
    Reaching {
        routine: 0x004EEAD0,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
        ],
    },
    Reaching {
        routine: 0x005043A0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x005043E0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x00548BE0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 56,
        }],
    },
    Reaching {
        routine: 0x00548D60,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 56,
        }],
    },
    Reaching {
        routine: 0x0054B650,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 96,
        }],
    },
    Reaching {
        routine: 0x0054B670,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 96,
        }],
    },
    Reaching {
        routine: 0x0054B6D0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 96,
        }],
    },
    Reaching {
        routine: 0x0054B720,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 96,
        }],
    },
    Reaching {
        routine: 0x0054B740,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 96,
        }],
    },
    Reaching {
        routine: 0x0055E6E0,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 16,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
        ],
    },
    Reaching {
        routine: 0x0055E750,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
        ],
    },
    Reaching {
        routine: 0x005632B0,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
        ],
    },
    Reaching {
        routine: 0x0056B570,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x0056B5B0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x00573390,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x005733D0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x005A3C20,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 16,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
        ],
    },
    Reaching {
        routine: 0x005A3C90,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
        ],
    },
    Reaching {
        routine: 0x005A8450,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x005A8490,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x005C0270,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x005C0720,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x005C07B0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x005C07F0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x005DA430,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 32,
        }],
    },
    Reaching {
        routine: 0x005DC380,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x005DC4D0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x005DC810,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x005E0870,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
        ],
    },
    Reaching {
        routine: 0x005FDF90,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 264,
        }],
    },
    Reaching {
        routine: 0x005FDFD0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 280,
        }],
    },
    Reaching {
        routine: 0x005FF920,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 200,
        }],
    },
    Reaching {
        routine: 0x005FFA40,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 80,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 88,
            },
        ],
    },
    Reaching {
        routine: 0x00602370,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 136,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 112,
            },
        ],
    },
    Reaching {
        routine: 0x006047D0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 208,
        }],
    },
    Reaching {
        routine: 0x0060C340,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 240,
        }],
    },
    Reaching {
        routine: 0x00611620,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x00623A00,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 184,
        }],
    },
    Reaching {
        routine: 0x0064D040,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 400,
        }],
    },
    Reaching {
        routine: 0x0064D0B0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 224,
        }],
    },
    Reaching {
        routine: 0x0064D120,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 224,
        }],
    },
    Reaching {
        routine: 0x0064D1F0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 216,
        }],
    },
    Reaching {
        routine: 0x0064D3A0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 216,
        }],
    },
    Reaching {
        routine: 0x0064DAA0,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 224,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 400,
            },
        ],
    },
    Reaching {
        routine: 0x00652B20,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 120,
        }],
    },
    Reaching {
        routine: 0x00653E50,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 16,
        }],
    },
    Reaching {
        routine: 0x0065B6D0,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 384,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 408,
            },
        ],
    },
    Reaching {
        routine: 0x0065FCD0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 624,
        }],
    },
    Reaching {
        routine: 0x006656D0,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 648,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 656,
            },
        ],
    },
    Reaching {
        routine: 0x006661F0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 1176,
        }],
    },
    Reaching {
        routine: 0x006A5FC0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 40,
        }],
    },
    Reaching {
        routine: 0x006DBD80,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 72,
        }],
    },
    Reaching {
        routine: 0x006EA8A0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 1272,
        }],
    },
    Reaching {
        routine: 0x006EA960,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 1272,
        }],
    },
    Reaching {
        routine: 0x006ECFE0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x006F27F0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 72,
        }],
    },
    Reaching {
        routine: 0x006F8180,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 72,
        }],
    },
    Reaching {
        routine: 0x006F8AC0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 384,
        }],
    },
    Reaching {
        routine: 0x00705500,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 72,
        }],
    },
    Reaching {
        routine: 0x00706320,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 72,
        }],
    },
    Reaching {
        routine: 0x0070ECA0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 88,
        }],
    },
    Reaching {
        routine: 0x0070EDA0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 88,
        }],
    },
    Reaching {
        routine: 0x007225D0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 136,
        }],
    },
    Reaching {
        routine: 0x00728450,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 208,
        }],
    },
    Reaching {
        routine: 0x00743830,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 384,
        }],
    },
    Reaching {
        routine: 0x00743C80,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 384,
        }],
    },
    Reaching {
        routine: 0x0074A670,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 1184,
        }],
    },
    Reaching {
        routine: 0x0074CB00,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 392,
        }],
    },
    Reaching {
        routine: 0x00778BA0,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 584,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 592,
            },
        ],
    },
    Reaching {
        routine: 0x00778D10,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x00778DC0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 16,
        }],
    },
    Reaching {
        routine: 0x00778E10,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x007790B0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 56,
        }],
    },
    Reaching {
        routine: 0x007790E0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 48,
        }],
    },
    Reaching {
        routine: 0x00779130,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 64,
        }],
    },
    Reaching {
        routine: 0x00779190,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 64,
        }],
    },
    Reaching {
        routine: 0x00779240,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 72,
        }],
    },
    Reaching {
        routine: 0x00779290,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 80,
        }],
    },
    Reaching {
        routine: 0x007792F0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 80,
        }],
    },
    Reaching {
        routine: 0x007793E0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 112,
        }],
    },
    Reaching {
        routine: 0x00779440,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 112,
        }],
    },
    Reaching {
        routine: 0x007794C0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 120,
        }],
    },
    Reaching {
        routine: 0x007794F0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 128,
        }],
    },
    Reaching {
        routine: 0x0078A930,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 16,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
        ],
    },
    Reaching {
        routine: 0x0078A9A0,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
        ],
    },
    Reaching {
        routine: 0x0078D9A0,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 16,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
        ],
    },
    Reaching {
        routine: 0x0078DA10,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
        ],
    },
    Reaching {
        routine: 0x0078F890,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
        ],
    },
    Reaching {
        routine: 0x00791A60,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 16,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
        ],
    },
    Reaching {
        routine: 0x00791AD0,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
        ],
    },
    Reaching {
        routine: 0x00796200,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
        ],
    },
    Reaching {
        routine: 0x007AC7B0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x007AC7E0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x007ACA10,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x007ACA50,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x007AD150,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x007AD190,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x007ADB90,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x007ADBD0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x007AE2A0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x007AE2E0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x007AE520,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x007AE560,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x007AEAD0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x007AEB10,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x007E7E70,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 32,
        }],
    },
    Reaching {
        routine: 0x00803830,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 704,
        }],
    },
    Reaching {
        routine: 0x00804240,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 664,
        }],
    },
    Reaching {
        routine: 0x00804270,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 672,
        }],
    },
    Reaching {
        routine: 0x0082EDB0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x0082EDE0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x0084C5D0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x0084D0B0,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 24,
            },
            Step {
                through: Through::AFieldsTable,
                at: 24,
            },
        ],
    },
    Reaching {
        routine: 0x0084DB40,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 248,
        }],
    },
    Reaching {
        routine: 0x0088EE00,
        steps: &[Step {
            through: Through::ATableNamedOutright,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x008923E0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 368,
        }],
    },
    Reaching {
        routine: 0x00894DC0,
        steps: &[Step {
            through: Through::ATableNamedOutright,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x00894FA0,
        steps: &[Step {
            through: Through::ATableNamedOutright,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x00895090,
        steps: &[Step {
            through: Through::ATableNamedOutright,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x00895430,
        steps: &[Step {
            through: Through::ATableNamedOutright,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x00895740,
        steps: &[Step {
            through: Through::ATableNamedOutright,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x00895760,
        steps: &[Step {
            through: Through::ATableNamedOutright,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x00895780,
        steps: &[Step {
            through: Through::ATableNamedOutright,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x008957A0,
        steps: &[Step {
            through: Through::ATableNamedOutright,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x008957C0,
        steps: &[
            Step {
                through: Through::ATableNamedOutright,
                at: 0,
            },
            Step {
                through: Through::ATableNamedOutright,
                at: 0,
            },
        ],
    },
    Reaching {
        routine: 0x00895800,
        steps: &[
            Step {
                through: Through::ATableNamedOutright,
                at: 0,
            },
            Step {
                through: Through::ATableNamedOutright,
                at: 0,
            },
        ],
    },
    Reaching {
        routine: 0x00895D60,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 72,
        }],
    },
    Reaching {
        routine: 0x008961B0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 72,
        }],
    },
    Reaching {
        routine: 0x008962A0,
        steps: &[Step {
            through: Through::ATableNamedOutright,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x00896E80,
        steps: &[Step {
            through: Through::ATableNamedOutright,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x008970E0,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 352,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 328,
            },
        ],
    },
    Reaching {
        routine: 0x00897290,
        steps: &[Step {
            through: Through::ATableNamedOutright,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x0089B820,
        steps: &[Step {
            through: Through::ATableNamedOutright,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x0089BFA0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 16,
        }],
    },
    Reaching {
        routine: 0x0089BFF0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 64,
        }],
    },
    Reaching {
        routine: 0x0089C040,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 72,
        }],
    },
    Reaching {
        routine: 0x0089C720,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 240,
        }],
    },
    Reaching {
        routine: 0x0089CA80,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 128,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 152,
            },
        ],
    },
    Reaching {
        routine: 0x008B1680,
        steps: &[Step {
            through: Through::ATableNamedOutright,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x008B1870,
        steps: &[Step {
            through: Through::ATableNamedOutright,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x008B1890,
        steps: &[Step {
            through: Through::ATableNamedOutright,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x008B2630,
        steps: &[Step {
            through: Through::ATableNamedOutright,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x008B26A0,
        steps: &[Step {
            through: Through::ATableNamedOutright,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x008E7180,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 136,
        }],
    },
    Reaching {
        routine: 0x008F3B90,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x008F4D50,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 72,
        }],
    },
    Reaching {
        routine: 0x008F77D0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x008F7810,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 8,
            },
            Step {
                through: Through::AFieldsTable,
                at: 16,
            },
        ],
    },
    Reaching {
        routine: 0x008F7840,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 8,
            },
            Step {
                through: Through::AFieldsTable,
                at: 16,
            },
        ],
    },
    Reaching {
        routine: 0x008F7880,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 8,
            },
            Step {
                through: Through::AFieldsTable,
                at: 16,
            },
        ],
    },
    Reaching {
        routine: 0x008F78C0,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 8,
            },
            Step {
                through: Through::AFieldsTable,
                at: 16,
            },
        ],
    },
    Reaching {
        routine: 0x008F7930,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 16,
            },
            Step {
                through: Through::AFieldsTable,
                at: 8,
            },
        ],
    },
    Reaching {
        routine: 0x008F7A80,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 16,
            },
            Step {
                through: Through::AFieldsTable,
                at: 8,
            },
        ],
    },
    Reaching {
        routine: 0x008F7B10,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 8,
            },
            Step {
                through: Through::AFieldsTable,
                at: 16,
            },
        ],
    },
    Reaching {
        routine: 0x008F7DD0,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 16,
            },
            Step {
                through: Through::AFieldsTable,
                at: 8,
            },
        ],
    },
    Reaching {
        routine: 0x0094F9D0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 352,
        }],
    },
    Reaching {
        routine: 0x009505B0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 56,
        }],
    },
    Reaching {
        routine: 0x00951920,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 256,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 56,
            },
        ],
    },
    Reaching {
        routine: 0x00951950,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 256,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 64,
            },
        ],
    },
    Reaching {
        routine: 0x00951F20,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 256,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 56,
            },
        ],
    },
    Reaching {
        routine: 0x00951F60,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 256,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 64,
            },
        ],
    },
    Reaching {
        routine: 0x00952530,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 712,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 800,
            },
        ],
    },
    Reaching {
        routine: 0x009525C0,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 720,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 800,
            },
        ],
    },
    Reaching {
        routine: 0x00957AE0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 120,
        }],
    },
    Reaching {
        routine: 0x00958180,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 8,
            },
            Step {
                through: Through::AFieldsTable,
                at: 16,
            },
            Step {
                through: Through::AFieldsTable,
                at: 24,
            },
        ],
    },
    Reaching {
        routine: 0x0095CD30,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 200,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 800,
            },
        ],
    },
    Reaching {
        routine: 0x0095CD90,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 200,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 800,
            },
        ],
    },
    Reaching {
        routine: 0x00961AD0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 152,
        }],
    },
    Reaching {
        routine: 0x009635F0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 168,
        }],
    },
    Reaching {
        routine: 0x00966120,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 56,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 40,
            },
        ],
    },
    Reaching {
        routine: 0x00967330,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 144,
        }],
    },
    Reaching {
        routine: 0x0096C450,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 144,
        }],
    },
    Reaching {
        routine: 0x0096D350,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 48,
        }],
    },
    Reaching {
        routine: 0x0096DA10,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 40,
        }],
    },
    Reaching {
        routine: 0x00974330,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 136,
            },
            Step {
                through: Through::AFieldsTable,
                at: 152,
            },
        ],
    },
    Reaching {
        routine: 0x00980660,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 144,
            },
            Step {
                through: Through::AFieldsTable,
                at: 152,
            },
        ],
    },
    Reaching {
        routine: 0x0098D2F0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 280,
        }],
    },
    Reaching {
        routine: 0x009ABEC0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x009D3BD0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x009D3C00,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x009D3C30,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x009D5EE0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x009D6050,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x009E2E20,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x009E2EA0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 48,
        }],
    },
    Reaching {
        routine: 0x009E3160,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 32,
        }],
    },
    Reaching {
        routine: 0x009E31B0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 40,
        }],
    },
    Reaching {
        routine: 0x009E3210,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 64,
        }],
    },
    Reaching {
        routine: 0x009E6F60,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 16,
        }],
    },
    Reaching {
        routine: 0x009E6F90,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 16,
        }],
    },
    Reaching {
        routine: 0x009E7050,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 112,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 72,
            },
        ],
    },
    Reaching {
        routine: 0x009E87C0,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 48,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 152,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 208,
            },
        ],
    },
    Reaching {
        routine: 0x009EA580,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 104,
        }],
    },
    Reaching {
        routine: 0x00A01B00,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 40,
        }],
    },
    Reaching {
        routine: 0x00A0DAD0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 32,
        }],
    },
    Reaching {
        routine: 0x00A11180,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 608,
        }],
    },
    Reaching {
        routine: 0x00A1FFD0,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 464,
            },
            Step {
                through: Through::AFieldsTable,
                at: 464,
            },
        ],
    },
    Reaching {
        routine: 0x00A73010,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 0,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 0,
            },
        ],
    },
    Reaching {
        routine: 0x00A73DA0,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 32,
            },
            Step {
                through: Through::AFieldsTable,
                at: 24,
            },
        ],
    },
    Reaching {
        routine: 0x00A7C8E0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x00A99800,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 1112,
        }],
    },
    Reaching {
        routine: 0x00A99E70,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 256,
        }],
    },
    Reaching {
        routine: 0x00A99E90,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 256,
        }],
    },
    Reaching {
        routine: 0x00A99EE0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 256,
        }],
    },
    Reaching {
        routine: 0x00A99F10,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 256,
        }],
    },
    Reaching {
        routine: 0x00A99F30,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 256,
        }],
    },
    Reaching {
        routine: 0x00ABDFD0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 400,
        }],
    },
    Reaching {
        routine: 0x00AC0490,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 0,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 0,
            },
        ],
    },
    Reaching {
        routine: 0x00AC4C50,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 56,
        }],
    },
    Reaching {
        routine: 0x00AC4EF0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 192,
        }],
    },
    Reaching {
        routine: 0x00AC4F20,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 200,
        }],
    },
    Reaching {
        routine: 0x00ACBEB0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 344,
        }],
    },
    Reaching {
        routine: 0x00ACCC80,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x00ACF450,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 320,
        }],
    },
    Reaching {
        routine: 0x00ACF7C0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 320,
        }],
    },
    Reaching {
        routine: 0x00AD13C0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 16,
        }],
    },
    Reaching {
        routine: 0x00AD1AF0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 16,
        }],
    },
    Reaching {
        routine: 0x00AF99B0,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 496,
            },
            Step {
                through: Through::AFieldsTable,
                at: 488,
            },
            Step {
                through: Through::AFieldsTable,
                at: 480,
            },
        ],
    },
    Reaching {
        routine: 0x00AF9A10,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 120,
            },
            Step {
                through: Through::AFieldsTable,
                at: 112,
            },
            Step {
                through: Through::AFieldsTable,
                at: 128,
            },
        ],
    },
    Reaching {
        routine: 0x00AFCD90,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 1856,
            },
            Step {
                through: Through::AFieldsTable,
                at: 1848,
            },
            Step {
                through: Through::AFieldsTable,
                at: 1880,
            },
            Step {
                through: Through::AFieldsTable,
                at: 1872,
            },
        ],
    },
    Reaching {
        routine: 0x00AFE1A0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 384,
        }],
    },
    Reaching {
        routine: 0x00AFE5F0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 2224,
        }],
    },
    Reaching {
        routine: 0x00AFFBB0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x00B10E20,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 728,
        }],
    },
    Reaching {
        routine: 0x00B171F0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 16,
        }],
    },
    Reaching {
        routine: 0x00B17220,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 16,
        }],
    },
    Reaching {
        routine: 0x00B17250,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 16,
        }],
    },
    Reaching {
        routine: 0x00B256B0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x00B256E0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x00B25770,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x00B25840,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 32,
        }],
    },
    Reaching {
        routine: 0x00B25870,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 32,
        }],
    },
    Reaching {
        routine: 0x00B39DB0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 16,
        }],
    },
    Reaching {
        routine: 0x00B3C7A0,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 32,
            },
            Step {
                through: Through::AFieldsTable,
                at: 40,
            },
        ],
    },
    Reaching {
        routine: 0x00B4E300,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x00B96D80,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 192,
        }],
    },
    Reaching {
        routine: 0x00B9C9F0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 16,
        }],
    },
    Reaching {
        routine: 0x00BB1670,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x00BB1CD0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x00BB33A0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 136,
        }],
    },
    Reaching {
        routine: 0x00BB3400,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 144,
        }],
    },
    Reaching {
        routine: 0x00BB3460,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 152,
        }],
    },
    Reaching {
        routine: 0x00BC1C10,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 120,
        }],
    },
    Reaching {
        routine: 0x00BC1F00,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 232,
        }],
    },
    Reaching {
        routine: 0x00BC1F30,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 240,
        }],
    },
    Reaching {
        routine: 0x00BC20D0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 416,
        }],
    },
    Reaching {
        routine: 0x00BD4700,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 64,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 8,
            },
        ],
    },
    Reaching {
        routine: 0x00BD7140,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
        ],
    },
    Reaching {
        routine: 0x00BD71C0,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 32,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 32,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 32,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 32,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 32,
            },
        ],
    },
    Reaching {
        routine: 0x00BE49E0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x00BE4A20,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x00BE4BE0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x00BE4C20,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x00BF36A0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 1256,
        }],
    },
    Reaching {
        routine: 0x00BF9D10,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 56,
        }],
    },
    Reaching {
        routine: 0x00BFA950,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 688,
        }],
    },
    Reaching {
        routine: 0x00BFA980,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 688,
        }],
    },
    Reaching {
        routine: 0x00BFA9B0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 680,
        }],
    },
    Reaching {
        routine: 0x00BFA9E0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 680,
        }],
    },
    Reaching {
        routine: 0x00BFABE0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 696,
        }],
    },
    Reaching {
        routine: 0x00C0DD80,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 824,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 680,
            },
        ],
    },
    Reaching {
        routine: 0x00C1A3B0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x00C1A780,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x00C23D60,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 240,
        }],
    },
    Reaching {
        routine: 0x00C24090,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 120,
        }],
    },
    Reaching {
        routine: 0x00C24A90,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 240,
        }],
    },
    Reaching {
        routine: 0x00C279B0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x00C2E030,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 56,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 32,
            },
        ],
    },
    Reaching {
        routine: 0x00C2F690,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 32,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 32,
            },
        ],
    },
    Reaching {
        routine: 0x00C318A0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 136,
        }],
    },
    Reaching {
        routine: 0x00C31BD0,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 136,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 32,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 120,
            },
        ],
    },
    Reaching {
        routine: 0x00C4D340,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 120,
        }],
    },
    Reaching {
        routine: 0x00C4D430,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 144,
        }],
    },
    Reaching {
        routine: 0x00C53240,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 32,
        }],
    },
    Reaching {
        routine: 0x00C54870,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 136,
        }],
    },
    Reaching {
        routine: 0x00C54960,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 232,
        }],
    },
    Reaching {
        routine: 0x00C59730,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 384,
        }],
    },
    Reaching {
        routine: 0x00C59770,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 384,
        }],
    },
    Reaching {
        routine: 0x00C5F880,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x00C5F8D0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x00C5FE50,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x00C5FE70,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x00C5FE90,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x00C60AE0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x00C74500,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 384,
        }],
    },
    Reaching {
        routine: 0x00C84E80,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 32,
        }],
    },
    Reaching {
        routine: 0x00C8ED90,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 56,
        }],
    },
    Reaching {
        routine: 0x00C8EE70,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 72,
        }],
    },
    Reaching {
        routine: 0x00CAC1E0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 96,
        }],
    },
    Reaching {
        routine: 0x00CAC800,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 432,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 440,
            },
        ],
    },
    Reaching {
        routine: 0x00CB3860,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 328,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 352,
            },
        ],
    },
    Reaching {
        routine: 0x00CB3890,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 328,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 336,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 352,
            },
        ],
    },
    Reaching {
        routine: 0x00CB4710,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 72,
        }],
    },
    Reaching {
        routine: 0x00CBB180,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 32,
        }],
    },
    Reaching {
        routine: 0x00CBE5F0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x00CC16E0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 64,
        }],
    },
    Reaching {
        routine: 0x00CC19E0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 56,
        }],
    },
    Reaching {
        routine: 0x00CC1AA0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 56,
        }],
    },
    Reaching {
        routine: 0x00CC1B60,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 72,
        }],
    },
    Reaching {
        routine: 0x00CC1C70,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 56,
        }],
    },
    Reaching {
        routine: 0x00CCBF90,
        steps: &[
            Step {
                through: Through::ATableNamedOutright,
                at: 0,
            },
            Step {
                through: Through::ATableNamedOutright,
                at: 0,
            },
            Step {
                through: Through::ATableNamedOutright,
                at: 0,
            },
        ],
    },
    Reaching {
        routine: 0x00CCBFE0,
        steps: &[Step {
            through: Through::ATableNamedOutright,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x00CCC000,
        steps: &[Step {
            through: Through::ATableNamedOutright,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x00CCC350,
        steps: &[
            Step {
                through: Through::ATableNamedOutright,
                at: 0,
            },
            Step {
                through: Through::ATableNamedOutright,
                at: 0,
            },
            Step {
                through: Through::ATableNamedOutright,
                at: 0,
            },
        ],
    },
    Reaching {
        routine: 0x00CCC3A0,
        steps: &[Step {
            through: Through::ATableNamedOutright,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x00CCC3C0,
        steps: &[Step {
            through: Through::ATableNamedOutright,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x00CCCB00,
        steps: &[Step {
            through: Through::ATableNamedOutright,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x00CCCB30,
        steps: &[Step {
            through: Through::ATableNamedOutright,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x00CCCED0,
        steps: &[Step {
            through: Through::ATableNamedOutright,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x00CCCF20,
        steps: &[Step {
            through: Through::ATableNamedOutright,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x00CCD120,
        steps: &[Step {
            through: Through::ATableNamedOutright,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x00CCD350,
        steps: &[Step {
            through: Through::ATableNamedOutright,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x00CCD600,
        steps: &[Step {
            through: Through::ATableNamedOutright,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x00CCD920,
        steps: &[Step {
            through: Through::ATableNamedOutright,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x00CD20D0,
        steps: &[
            Step {
                through: Through::ATableNamedOutright,
                at: 0,
            },
            Step {
                through: Through::ATableNamedOutright,
                at: 0,
            },
        ],
    },
    Reaching {
        routine: 0x00CD32E0,
        steps: &[
            Step {
                through: Through::ATableNamedOutright,
                at: 0,
            },
            Step {
                through: Through::ATableNamedOutright,
                at: 0,
            },
        ],
    },
    Reaching {
        routine: 0x00CD37D0,
        steps: &[
            Step {
                through: Through::ATableNamedOutright,
                at: 0,
            },
            Step {
                through: Through::ATableNamedOutright,
                at: 0,
            },
        ],
    },
    Reaching {
        routine: 0x00CD5DC0,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 0,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 16,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 8,
            },
        ],
    },
    Reaching {
        routine: 0x00CD5E40,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 96,
        }],
    },
    Reaching {
        routine: 0x00D033B0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 160,
        }],
    },
    Reaching {
        routine: 0x00D03770,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 160,
        }],
    },
    Reaching {
        routine: 0x00D05F60,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 16,
        }],
    },
    Reaching {
        routine: 0x00D3B160,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 152,
        }],
    },
    Reaching {
        routine: 0x00D3C3B0,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 80,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 80,
            },
        ],
    },
    Reaching {
        routine: 0x00D4BF70,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 96,
        }],
    },
    Reaching {
        routine: 0x00D7EFD0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 16,
        }],
    },
    Reaching {
        routine: 0x00D7FD50,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 32,
            },
        ],
    },
    Reaching {
        routine: 0x00DA00E0,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 16,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
        ],
    },
    Reaching {
        routine: 0x00DA0150,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
        ],
    },
    Reaching {
        routine: 0x00DA3C70,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x00DA3CB0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x00DB8440,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x00DB8480,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x00DD8DF0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x00DDCA70,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 192,
        }],
    },
    Reaching {
        routine: 0x00DDD950,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 88,
        }],
    },
    Reaching {
        routine: 0x00DDDCE0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 136,
        }],
    },
    Reaching {
        routine: 0x00DDDD10,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 136,
        }],
    },
    Reaching {
        routine: 0x00DDDD40,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 136,
        }],
    },
    Reaching {
        routine: 0x00DE17C0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 1240,
        }],
    },
    Reaching {
        routine: 0x00DE5780,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x00E0BB50,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 1784,
        }],
    },
    Reaching {
        routine: 0x00E0E8C0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 88,
        }],
    },
    Reaching {
        routine: 0x00E29170,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x00E291B0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x00EAF580,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
        ],
    },
    Reaching {
        routine: 0x00EC80C0,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 2064,
            },
            Step {
                through: Through::AFieldsTable,
                at: 2080,
            },
            Step {
                through: Through::AFieldsTable,
                at: 2080,
            },
            Step {
                through: Through::AFieldsTable,
                at: 2088,
            },
            Step {
                through: Through::AFieldsTable,
                at: 2080,
            },
            Step {
                through: Through::AFieldsTable,
                at: 2072,
            },
        ],
    },
    Reaching {
        routine: 0x00EC8160,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 2056,
            },
            Step {
                through: Through::AFieldsTable,
                at: 2072,
            },
            Step {
                through: Through::AFieldsTable,
                at: 2072,
            },
            Step {
                through: Through::AFieldsTable,
                at: 2080,
            },
            Step {
                through: Through::AFieldsTable,
                at: 2080,
            },
            Step {
                through: Through::AFieldsTable,
                at: 2088,
            },
        ],
    },
    Reaching {
        routine: 0x00ED5150,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 2120,
            },
            Step {
                through: Through::AFieldsTable,
                at: 2128,
            },
            Step {
                through: Through::AFieldsTable,
                at: 2128,
            },
            Step {
                through: Through::AFieldsTable,
                at: 2144,
            },
            Step {
                through: Through::AFieldsTable,
                at: 2128,
            },
            Step {
                through: Through::AFieldsTable,
                at: 2136,
            },
        ],
    },
    Reaching {
        routine: 0x00ED51F0,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 2112,
            },
            Step {
                through: Through::AFieldsTable,
                at: 2136,
            },
            Step {
                through: Through::AFieldsTable,
                at: 2136,
            },
            Step {
                through: Through::AFieldsTable,
                at: 2128,
            },
            Step {
                through: Through::AFieldsTable,
                at: 2128,
            },
            Step {
                through: Through::AFieldsTable,
                at: 2144,
            },
        ],
    },
    Reaching {
        routine: 0x00F09EB0,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 1784,
            },
            Step {
                through: Through::AFieldsTable,
                at: 1792,
            },
        ],
    },
    Reaching {
        routine: 0x00F0FF80,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 328,
        }],
    },
    Reaching {
        routine: 0x00F300D0,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 16,
            },
            Step {
                through: Through::AFieldsTable,
                at: 24,
            },
        ],
    },
    Reaching {
        routine: 0x00F405E0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 384,
        }],
    },
    Reaching {
        routine: 0x00F40620,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 384,
        }],
    },
    Reaching {
        routine: 0x00F5F9C0,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 1864,
            },
            Step {
                through: Through::AFieldsTable,
                at: 1864,
            },
            Step {
                through: Through::AFieldsTable,
                at: 1872,
            },
        ],
    },
    Reaching {
        routine: 0x00F62B90,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 88,
            },
            Step {
                through: Through::AFieldsTable,
                at: 80,
            },
        ],
    },
    Reaching {
        routine: 0x00F62BD0,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 128,
            },
            Step {
                through: Through::AFieldsTable,
                at: 120,
            },
        ],
    },
    Reaching {
        routine: 0x00F79390,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 40,
        }],
    },
    Reaching {
        routine: 0x00F793B0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 48,
        }],
    },
    Reaching {
        routine: 0x00F85E30,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 16,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 16,
            },
        ],
    },
    Reaching {
        routine: 0x00F86790,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 1736,
        }],
    },
    Reaching {
        routine: 0x00F867C0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 1736,
        }],
    },
    Reaching {
        routine: 0x00F8E980,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 40,
        }],
    },
    Reaching {
        routine: 0x00F91E80,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 168,
        }],
    },
    Reaching {
        routine: 0x00F98BE0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 1720,
        }],
    },
    Reaching {
        routine: 0x00F9C370,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 1712,
        }],
    },
    Reaching {
        routine: 0x00FAE420,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 1712,
        }],
    },
    Reaching {
        routine: 0x00FAE450,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 1768,
        }],
    },
    Reaching {
        routine: 0x00FAFFE0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 1712,
        }],
    },
    Reaching {
        routine: 0x00FC09E0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 1768,
        }],
    },
    Reaching {
        routine: 0x00FC1840,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 1712,
        }],
    },
    Reaching {
        routine: 0x00FC1870,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 1712,
        }],
    },
    Reaching {
        routine: 0x00FD8CF0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 16,
        }],
    },
    Reaching {
        routine: 0x00FD8D40,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 1760,
        }],
    },
    Reaching {
        routine: 0x010515D0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 1752,
        }],
    },
    Reaching {
        routine: 0x0109D6B0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 16,
        }],
    },
    Reaching {
        routine: 0x010BB690,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 48,
            },
            Step {
                through: Through::AFieldsTable,
                at: 40,
            },
        ],
    },
    Reaching {
        routine: 0x010CD240,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 384,
        }],
    },
    Reaching {
        routine: 0x010F0E10,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 288,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 232,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 296,
            },
        ],
    },
    Reaching {
        routine: 0x010F2040,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 1744,
        }],
    },
    Reaching {
        routine: 0x01114A50,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 1256,
        }],
    },
    Reaching {
        routine: 0x01125510,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 2264,
        }],
    },
    Reaching {
        routine: 0x01125540,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 2264,
        }],
    },
    Reaching {
        routine: 0x0113F830,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 88,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 96,
            },
        ],
    },
    Reaching {
        routine: 0x01146770,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x011467B0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x01155A40,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 1984,
        }],
    },
    Reaching {
        routine: 0x0115DCE0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 1712,
        }],
    },
    Reaching {
        routine: 0x0122A190,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 200,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 192,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 192,
            },
        ],
    },
    Reaching {
        routine: 0x0122A200,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 200,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 192,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 192,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 192,
            },
        ],
    },
    Reaching {
        routine: 0x012ADAC0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 40,
        }],
    },
    Reaching {
        routine: 0x012ADC40,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 3512,
            },
            Step {
                through: Through::AFieldsTable,
                at: 3512,
            },
            Step {
                through: Through::AFieldsTable,
                at: 3512,
            },
            Step {
                through: Through::AFieldsTable,
                at: 3512,
            },
        ],
    },
    Reaching {
        routine: 0x012ADCD0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 3512,
        }],
    },
    Reaching {
        routine: 0x012BE110,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 16,
        }],
    },
    Reaching {
        routine: 0x012C4A20,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 2392,
        }],
    },
    Reaching {
        routine: 0x012C5AE0,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 1912,
            },
            Step {
                through: Through::AFieldsTable,
                at: 1920,
            },
        ],
    },
    Reaching {
        routine: 0x012CCBB0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x012CCE10,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x012DA010,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x0131AE80,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x013671E0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x01367230,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x01367830,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x01367850,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x01367870,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x01367DF0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 96,
        }],
    },
    Reaching {
        routine: 0x01369430,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 16,
        }],
    },
    Reaching {
        routine: 0x01369DD0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 16,
        }],
    },
    Reaching {
        routine: 0x0136A200,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x0136A220,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x0136A4B0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x0136A7D0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x0136A980,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x0136AB80,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x0136C700,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x0136CAA0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x0136D310,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x0137C5E0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 304,
        }],
    },
    Reaching {
        routine: 0x0137C630,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 304,
        }],
    },
    Reaching {
        routine: 0x013D1D20,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 120,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 120,
            },
        ],
    },
    Reaching {
        routine: 0x013D2640,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 192,
        }],
    },
    Reaching {
        routine: 0x013F3560,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 40,
            },
            Step {
                through: Through::AFieldsTable,
                at: 1712,
            },
        ],
    },
    Reaching {
        routine: 0x0140A720,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 720,
        }],
    },
    Reaching {
        routine: 0x01412ED0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 16,
        }],
    },
    Reaching {
        routine: 0x01430270,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 64,
        }],
    },
    Reaching {
        routine: 0x0147B670,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 8,
            },
            Step {
                through: Through::AFieldsTable,
                at: 16,
            },
        ],
    },
    Reaching {
        routine: 0x01486BB0,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
        ],
    },
    Reaching {
        routine: 0x0149EC30,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 16,
        }],
    },
    Reaching {
        routine: 0x014B48C0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 2144,
        }],
    },
    Reaching {
        routine: 0x014FAD50,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 408,
        }],
    },
    Reaching {
        routine: 0x01507310,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 1456,
        }],
    },
    Reaching {
        routine: 0x0152FC40,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 2392,
        }],
    },
    Reaching {
        routine: 0x01530DE0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 7248,
        }],
    },
    Reaching {
        routine: 0x01530E20,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 7248,
        }],
    },
    Reaching {
        routine: 0x0154F560,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 2296,
            },
            Step {
                through: Through::AFieldsTable,
                at: 2296,
            },
            Step {
                through: Through::AFieldsTable,
                at: 80,
            },
        ],
    },
    Reaching {
        routine: 0x015A9A90,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 0,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 16,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 8,
            },
        ],
    },
    Reaching {
        routine: 0x015A9B00,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 96,
        }],
    },
    Reaching {
        routine: 0x015E0580,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 4240,
        }],
    },
    Reaching {
        routine: 0x01613F20,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 720,
        }],
    },
    Reaching {
        routine: 0x01626660,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 720,
        }],
    },
    Reaching {
        routine: 0x0162E7F0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 48,
        }],
    },
    Reaching {
        routine: 0x01634B90,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 1400,
        }],
    },
    Reaching {
        routine: 0x01634BB0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 1400,
        }],
    },
    Reaching {
        routine: 0x01634BD0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 1400,
        }],
    },
    Reaching {
        routine: 0x016350E0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 128,
        }],
    },
    Reaching {
        routine: 0x01635100,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 1400,
        }],
    },
    Reaching {
        routine: 0x01637070,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 1400,
        }],
    },
    Reaching {
        routine: 0x01644E10,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 48,
        }],
    },
    Reaching {
        routine: 0x01647A50,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 40,
        }],
    },
    Reaching {
        routine: 0x016961D0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x016A5E20,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 0,
            },
            Step {
                through: Through::AFieldsTable,
                at: 96,
            },
        ],
    },
    Reaching {
        routine: 0x016D4D80,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 640,
        }],
    },
    Reaching {
        routine: 0x0170B440,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 80,
            },
            Step {
                through: Through::AFieldsTable,
                at: 80,
            },
        ],
    },
    Reaching {
        routine: 0x0171C130,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 16,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
        ],
    },
    Reaching {
        routine: 0x0171C1A0,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
        ],
    },
    Reaching {
        routine: 0x01721090,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x017210D0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x0173CF40,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x0173D820,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 40,
        }],
    },
    Reaching {
        routine: 0x0173D870,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 40,
        }],
    },
    Reaching {
        routine: 0x0174C600,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 40,
        }],
    },
    Reaching {
        routine: 0x0174CC90,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 40,
        }],
    },
    Reaching {
        routine: 0x0174D1C0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 40,
        }],
    },
    Reaching {
        routine: 0x01751500,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 112,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 104,
            },
        ],
    },
    Reaching {
        routine: 0x01758A30,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 112,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 104,
            },
        ],
    },
    Reaching {
        routine: 0x01759590,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 112,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 104,
            },
        ],
    },
    Reaching {
        routine: 0x01759C20,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 112,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 104,
            },
        ],
    },
    Reaching {
        routine: 0x0175AC20,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 112,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 104,
            },
        ],
    },
    Reaching {
        routine: 0x01778800,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 208,
        }],
    },
    Reaching {
        routine: 0x01778CC0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 48,
        }],
    },
    Reaching {
        routine: 0x01779C20,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
        ],
    },
    Reaching {
        routine: 0x0179BC20,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 3336,
            },
            Step {
                through: Through::AFieldsTable,
                at: 3336,
            },
        ],
    },
    Reaching {
        routine: 0x017A5DF0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 88,
        }],
    },
    Reaching {
        routine: 0x017AFA90,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 8,
        }],
    },
    Reaching {
        routine: 0x017AFF80,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 112,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 112,
            },
        ],
    },
    Reaching {
        routine: 0x017B0040,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 112,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 0,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 112,
            },
        ],
    },
    Reaching {
        routine: 0x017B0090,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 112,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 0,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 112,
            },
        ],
    },
    Reaching {
        routine: 0x017B13D0,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 112,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 0,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 112,
            },
        ],
    },
    Reaching {
        routine: 0x017B1EB0,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 112,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 112,
            },
        ],
    },
    Reaching {
        routine: 0x017B2C20,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 112,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 112,
            },
        ],
    },
    Reaching {
        routine: 0x017B64C0,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 112,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 112,
            },
        ],
    },
    Reaching {
        routine: 0x017B7060,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 112,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 112,
            },
        ],
    },
    Reaching {
        routine: 0x017B85E0,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 112,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 0,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 112,
            },
        ],
    },
    Reaching {
        routine: 0x01804C90,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 40,
        }],
    },
    Reaching {
        routine: 0x01806B90,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 112,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 72,
            },
        ],
    },
    Reaching {
        routine: 0x01809B30,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 24,
            },
            Step {
                through: Through::AFieldsTable,
                at: 48,
            },
        ],
    },
    Reaching {
        routine: 0x0181B010,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 776,
        }],
    },
    Reaching {
        routine: 0x0181B5A0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 784,
        }],
    },
    Reaching {
        routine: 0x0181F0C0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 40,
        }],
    },
    Reaching {
        routine: 0x018301E0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 136,
        }],
    },
    Reaching {
        routine: 0x01831D40,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 168,
        }],
    },
    Reaching {
        routine: 0x01831EC0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 160,
        }],
    },
    Reaching {
        routine: 0x01832020,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 144,
        }],
    },
    Reaching {
        routine: 0x0184C170,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 48,
        }],
    },
    Reaching {
        routine: 0x0184CB10,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 192,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 152,
            },
        ],
    },
    Reaching {
        routine: 0x01850B40,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 16,
        }],
    },
    Reaching {
        routine: 0x01856A00,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 136,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 112,
            },
        ],
    },
    Reaching {
        routine: 0x01856A70,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 88,
        }],
    },
    Reaching {
        routine: 0x01857D20,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 16,
        }],
    },
    Reaching {
        routine: 0x018625D0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 16,
        }],
    },
    Reaching {
        routine: 0x01862840,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 32,
        }],
    },
    Reaching {
        routine: 0x01867EA0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 16,
        }],
    },
    Reaching {
        routine: 0x01867EE0,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 160,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 192,
            },
        ],
    },
    Reaching {
        routine: 0x01876B60,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 8,
            },
            Step {
                through: Through::AFieldsTable,
                at: 16,
            },
        ],
    },
    Reaching {
        routine: 0x01877C10,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 72,
            },
        ],
    },
    Reaching {
        routine: 0x018845F0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 240,
        }],
    },
    Reaching {
        routine: 0x0188BBB0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 80,
        }],
    },
    Reaching {
        routine: 0x01899590,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 640,
        }],
    },
    Reaching {
        routine: 0x018995B0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 640,
        }],
    },
    Reaching {
        routine: 0x0189A000,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 384,
        }],
    },
    Reaching {
        routine: 0x018AA890,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 384,
        }],
    },
    Reaching {
        routine: 0x018AB9F0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 112,
        }],
    },
    Reaching {
        routine: 0x018B0580,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 672,
        }],
    },
    Reaching {
        routine: 0x018B06D0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 672,
        }],
    },
    Reaching {
        routine: 0x018B4590,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 608,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 616,
            },
        ],
    },
    Reaching {
        routine: 0x018B7680,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 8,
            },
            Step {
                through: Through::AFieldsTable,
                at: 16,
            },
        ],
    },
    Reaching {
        routine: 0x018B76B0,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 16,
            },
            Step {
                through: Through::AFieldsTable,
                at: 8,
            },
        ],
    },
    Reaching {
        routine: 0x018C0F60,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 672,
        }],
    },
    Reaching {
        routine: 0x018C3420,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 144,
        }],
    },
    Reaching {
        routine: 0x018CC7E0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 112,
        }],
    },
    Reaching {
        routine: 0x018CCC40,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 112,
        }],
    },
    Reaching {
        routine: 0x018CCFB0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 96,
        }],
    },
    Reaching {
        routine: 0x018CEE60,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 160,
        }],
    },
    Reaching {
        routine: 0x018CF350,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 152,
        }],
    },
    Reaching {
        routine: 0x018CF610,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 64,
        }],
    },
    Reaching {
        routine: 0x018D4470,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 152,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 152,
            },
        ],
    },
    Reaching {
        routine: 0x018DC4C0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 160,
        }],
    },
    Reaching {
        routine: 0x0194F9A0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 16,
        }],
    },
    Reaching {
        routine: 0x01950580,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 200,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 208,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 216,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 224,
            },
        ],
    },
    Reaching {
        routine: 0x01951270,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 120,
        }],
    },
    Reaching {
        routine: 0x01959760,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 136,
            },
            Step {
                through: Through::AFieldsTable,
                at: 136,
            },
        ],
    },
    Reaching {
        routine: 0x0195F7F0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 776,
        }],
    },
    Reaching {
        routine: 0x019674B0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 800,
        }],
    },
    Reaching {
        routine: 0x01968A50,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 96,
        }],
    },
    Reaching {
        routine: 0x0196B290,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 200,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 208,
            },
        ],
    },
    Reaching {
        routine: 0x0196BB00,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 344,
            },
            Step {
                through: Through::AFieldsTable,
                at: 352,
            },
        ],
    },
    Reaching {
        routine: 0x0196EE60,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 488,
        }],
    },
    Reaching {
        routine: 0x019773B0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 120,
        }],
    },
    Reaching {
        routine: 0x019774A0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 472,
        }],
    },
    Reaching {
        routine: 0x019789C0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 88,
        }],
    },
    Reaching {
        routine: 0x01980E00,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x019B31B0,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 16,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
        ],
    },
    Reaching {
        routine: 0x019B3220,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
        ],
    },
    Reaching {
        routine: 0x019D05D0,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 48,
            },
            Step {
                through: Through::AFieldsTable,
                at: 48,
            },
        ],
    },
    Reaching {
        routine: 0x01A47150,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 416,
        }],
    },
    Reaching {
        routine: 0x01A569B0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 248,
        }],
    },
    Reaching {
        routine: 0x01A569F0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 240,
        }],
    },
    Reaching {
        routine: 0x01A5F350,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 208,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 216,
            },
        ],
    },
    Reaching {
        routine: 0x01A5F3A0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 112,
        }],
    },
    Reaching {
        routine: 0x01A91700,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 16,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
        ],
    },
    Reaching {
        routine: 0x01A91770,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
        ],
    },
    Reaching {
        routine: 0x01A93D70,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x01A93DA0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 24,
        }],
    },
    Reaching {
        routine: 0x01A9A440,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 208,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 184,
            },
        ],
    },
    Reaching {
        routine: 0x01A9A740,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 240,
        }],
    },
    Reaching {
        routine: 0x01A9FB00,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 184,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 192,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 200,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 224,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 232,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 240,
            },
        ],
    },
    Reaching {
        routine: 0x01AB2A30,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 200,
        }],
    },
    Reaching {
        routine: 0x01AB2A60,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 200,
        }],
    },
    Reaching {
        routine: 0x01B07500,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 4904,
        }],
    },
    Reaching {
        routine: 0x01B155C0,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 24,
            },
        ],
    },
    Reaching {
        routine: 0x01B5E280,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 144,
        }],
    },
    Reaching {
        routine: 0x01B6E500,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 2520,
        }],
    },
    Reaching {
        routine: 0x01B84070,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 976,
        }],
    },
    Reaching {
        routine: 0x01B9BC30,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 232,
        }],
    },
    Reaching {
        routine: 0x01BBB5E0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 16,
        }],
    },
    Reaching {
        routine: 0x01BE6B40,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 608,
        }],
    },
    Reaching {
        routine: 0x01C033F0,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 864,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 8,
            },
        ],
    },
    Reaching {
        routine: 0x01C062A0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 544,
        }],
    },
    Reaching {
        routine: 0x01C25E00,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 384,
        }],
    },
    Reaching {
        routine: 0x01C370D0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 616,
        }],
    },
    Reaching {
        routine: 0x01C3C270,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 1904,
        }],
    },
    Reaching {
        routine: 0x01C3C2A0,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 1904,
            },
            Step {
                through: Through::AFieldsTable,
                at: 1904,
            },
        ],
    },
    Reaching {
        routine: 0x01CB1E40,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 72,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 80,
            },
        ],
    },
    Reaching {
        routine: 0x01CC1F80,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 72,
            },
            Step {
                through: Through::AFieldsTable,
                at: 112,
            },
        ],
    },
    Reaching {
        routine: 0x01CC57D0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 88,
        }],
    },
    Reaching {
        routine: 0x01CC5C10,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 32,
        }],
    },
    Reaching {
        routine: 0x01CC5C40,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 32,
        }],
    },
    Reaching {
        routine: 0x01CC6510,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 72,
        }],
    },
    Reaching {
        routine: 0x01CC7270,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 0,
        }],
    },
    Reaching {
        routine: 0x01CC75F0,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 16,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 72,
            },
        ],
    },
    Reaching {
        routine: 0x01CC7630,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 16,
        }],
    },
    Reaching {
        routine: 0x01CC7650,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 32,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 72,
            },
        ],
    },
    Reaching {
        routine: 0x01CC76A0,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 88,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 96,
            },
        ],
    },
    Reaching {
        routine: 0x01CC8C60,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 16,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 144,
            },
        ],
    },
    Reaching {
        routine: 0x01CC8CB0,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 32,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 144,
            },
        ],
    },
    Reaching {
        routine: 0x01CCAAC0,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 88,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 96,
            },
        ],
    },
    Reaching {
        routine: 0x01CCAF20,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 88,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 96,
            },
        ],
    },
    Reaching {
        routine: 0x01CCB190,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 88,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 96,
            },
        ],
    },
    Reaching {
        routine: 0x01CDAC30,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 72,
            },
            Step {
                through: Through::AFieldsTable,
                at: 112,
            },
        ],
    },
    Reaching {
        routine: 0x01CE83A0,
        steps: &[
            Step {
                through: Through::AFieldsTable,
                at: 120,
            },
            Step {
                through: Through::AFieldsTable,
                at: 136,
            },
        ],
    },
    Reaching {
        routine: 0x01CF0850,
        steps: &[
            Step {
                through: Through::ItsOwnTable,
                at: 88,
            },
            Step {
                through: Through::ItsOwnTable,
                at: 96,
            },
        ],
    },
    Reaching {
        routine: 0x01CF1BC0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 248,
        }],
    },
    Reaching {
        routine: 0x01CFCCC0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 104,
        }],
    },
    Reaching {
        routine: 0x01CFCCF0,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 104,
        }],
    },
    Reaching {
        routine: 0x01D32E60,
        steps: &[Step {
            through: Through::ItsOwnTable,
            at: 64,
        }],
    },
    Reaching {
        routine: 0x01D7C4F0,
        steps: &[Step {
            through: Through::AFieldsTable,
            at: 200,
        }],
    },
];

/// How many there are.
pub const REACHING_COUNT: usize = 624;

/// Implements part of the reaching family.
///
/// What one routine does, if it is one of these.
#[must_use]
pub fn reaching_at(routine: u32) -> Option<&'static Reaching> {
    REACHING
        .binary_search_by_key(&routine, |held| held.routine)
        .ok()
        .map(|at| &REACHING[at])
}

/// Implements part of the reaching family.
///
/// Every routine that reaches one way at some point.
#[must_use]
pub fn going_through(through: Through) -> Vec<&'static Reaching> {
    REACHING
        .iter()
        .filter(|held| held.steps.iter().any(|step| step.through == through))
        .collect()
}

/// Implements part of the reaching family.
///
/// How the steps reach, commonest first.
#[must_use]
pub fn ways() -> Vec<(Through, usize)> {
    let mut counted: Vec<(Through, usize)> = Vec::new();
    for step in REACHING.iter().flat_map(|held| held.steps.iter()) {
        match counted
            .iter_mut()
            .find(|(through, _)| *through == step.through)
        {
            Some((_, seen)) => *seen += 1,
            None => counted.push((step.through, 1)),
        }
    }
    counted.sort_by(|left, right| right.1.cmp(&left.1).then(left.0.cmp(&right.0)));
    counted
}

/// Implements part of the reaching family.
///
/// The slots reached most often, commonest first.
#[must_use]
pub fn busiest_slots(how_many: usize) -> Vec<(i32, usize)> {
    let mut counted: Vec<(i32, usize)> = Vec::new();
    for step in REACHING.iter().flat_map(|held| held.steps.iter()) {
        match counted.iter_mut().find(|(at, _)| *at == step.at) {
            Some((_, seen)) => *seen += 1,
            None => counted.push((step.at, 1)),
        }
    }
    counted.sort_by(|left, right| right.1.cmp(&left.1).then(left.0.cmp(&right.0)));
    counted.truncate(how_many);
    counted
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn the_count_is_what_the_table_holds() {
        assert_eq!(REACHING.len(), REACHING_COUNT);
    }

    #[test]
    fn the_table_is_sorted_so_it_can_be_searched() {
        assert!(
            REACHING
                .windows(2)
                .all(|pair| pair[0].routine < pair[1].routine)
        );
    }

    #[test]
    fn a_routine_can_be_found_by_its_address() {
        let known = REACHING[0].routine;

        assert!(reaching_at(known).is_some());
        assert!(reaching_at(0).is_none());
    }

    #[test]
    fn every_routine_takes_at_least_one_step_and_not_many() {
        for held in &REACHING {
            assert!(!held.steps.is_empty(), "{:#010X}", held.routine);
            assert!(held.steps.len() <= 6, "{:#010X}", held.routine);
        }
    }

    #[test]
    fn most_of_them_are_a_single_step() {
        let one = REACHING.iter().filter(|held| held.steps.len() == 1).count();

        assert!(one * 2 > REACHING.len(), "{one} of {}", REACHING.len());
    }

    #[test]
    fn most_steps_go_through_the_table_of_what_the_routine_was_handed() {
        // A routine answering for itself in a way its own name cannot express.
        assert_eq!(ways()[0].0, Through::ItsOwnTable);
    }

    #[test]
    fn and_the_next_most_go_through_something_it_holds() {
        assert_eq!(ways()[1].0, Through::AFieldsTable);
    }

    #[test]
    fn reaching_for_a_table_named_outright_is_the_rarest_of_the_three() {
        let counted = ways();

        assert_eq!(counted[counted.len() - 1].0, Through::ATableNamedOutright);
    }

    #[test]
    fn every_way_of_reaching_is_used_by_some_routine() {
        for (through, _) in ways() {
            assert!(!going_through(through).is_empty(), "{through:?}");
        }
    }

    #[test]
    fn every_slot_is_a_whole_number_of_addresses() {
        for held in REACHING.iter().flat_map(|held| held.steps.iter()) {
            assert_eq!(held.at % 8, 0, "{}", held.at);
        }
    }

    #[test]
    fn a_few_slots_account_for_a_good_share_of_the_steps() {
        let busiest = busiest_slots(5);

        assert!(busiest[0].1 > 20, "{busiest:?}");
        assert!(busiest[0].1 >= busiest[4].1);
    }

    #[test]
    fn none_of_these_is_already_spoken_for_by_another_sweep() {
        for held in REACHING.iter().take(200) {
            assert!(crate::straight_line_routines::sequence_of(held.routine).is_none());
            assert!(crate::forwarding_routines::forwarder_at(held.routine).is_none());
            assert!(crate::table_dispatchers::slot_of(held.routine).is_none());
            assert!(crate::small_computations::computation_at(held.routine).is_none());
        }
    }

    #[test]
    fn every_routine_is_listed_once() {
        let mut routines: Vec<u32> = REACHING.iter().map(|held| held.routine).collect();
        let before = routines.len();
        routines.sort_unstable();
        routines.dedup();

        assert_eq!(routines.len(), before);
    }
}
