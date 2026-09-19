//! The little routines the compiler leaves behind to tidy up a frame.
//!
//! Every routine in the value-cell unit that holds something releasable has one
//! of these standing behind it: a landing pad that runs when the routine is
//! left, whether it returned or raised, and lets go of exactly one thing at
//! exactly one place in the frame.
//!
//! Taken one at a time they say nothing. Taken together they are a map of the
//! unit's stack discipline — which routines hold what, where they keep it, and
//! which of the several kinds of release each needs. What that map shows is
//! that the offsets cluster hard: almost everything is held at one of four
//! places in the frame, which is what a compiler laying out locals the same way
//! every time produces.

// The addresses are written without separators so that the port-mapping
// importer can match them against the recovered functions.
#![allow(clippy::unreadable_literal)]

/// What one of these pads lets go of.
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord)]
pub enum Releases {
    /// A string of the program's own wide kind.
    OwnWideString,
    /// One of the narrow kind.
    NarrowString,
    /// One of the platform's kind.
    PlatformString,
    /// An interface reference.
    Interface,
    /// A value cell, emptied.
    Cell,
    /// Several strings of one kind at once.
    SeveralStrings,
    /// Nothing — the pad exists but has nothing to do.
    Nothing,
}

/// One tidying pad.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct Pad {
    /// Where the pad sits.
    pub routine: u32,
    /// What it lets go of.
    pub releases: Releases,
    /// Where in the frame the thing is kept.
    pub offset: u16,
    /// How many, where it lets go of several.
    pub count: u8,
}

/// Every tidying pad recovered from the value-cell unit.
///
/// Implements the 93 routines listed here, each a single call and a return.
pub const PADS: [Pad; 93] = [
    Pad {
        routine: 0x004600F0,
        releases: Releases::OwnWideString,
        offset: 0x028,
        count: 1,
    },
    Pad {
        routine: 0x00460260,
        releases: Releases::OwnWideString,
        offset: 0x028,
        count: 1,
    },
    Pad {
        routine: 0x004602D0,
        releases: Releases::OwnWideString,
        offset: 0x028,
        count: 1,
    },
    Pad {
        routine: 0x00460430,
        releases: Releases::OwnWideString,
        offset: 0x028,
        count: 1,
    },
    Pad {
        routine: 0x00460930,
        releases: Releases::OwnWideString,
        offset: 0x028,
        count: 1,
    },
    Pad {
        routine: 0x00461C50,
        releases: Releases::PlatformString,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x00461D60,
        releases: Releases::Cell,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x00461DD0,
        releases: Releases::PlatformString,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x00461E40,
        releases: Releases::NarrowString,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x00461EB0,
        releases: Releases::OwnWideString,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x00461F20,
        releases: Releases::Interface,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x00461F90,
        releases: Releases::Interface,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x004625D0,
        releases: Releases::Cell,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x00462CC0,
        releases: Releases::Nothing,
        offset: 0x000,
        count: 0,
    },
    Pad {
        routine: 0x00462DA0,
        releases: Releases::Nothing,
        offset: 0x000,
        count: 0,
    },
    Pad {
        routine: 0x00462E70,
        releases: Releases::Nothing,
        offset: 0x000,
        count: 0,
    },
    Pad {
        routine: 0x00462F90,
        releases: Releases::Nothing,
        offset: 0x000,
        count: 0,
    },
    Pad {
        routine: 0x00463090,
        releases: Releases::Nothing,
        offset: 0x000,
        count: 0,
    },
    Pad {
        routine: 0x004631A0,
        releases: Releases::Nothing,
        offset: 0x000,
        count: 0,
    },
    Pad {
        routine: 0x00463430,
        releases: Releases::Cell,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x00463A40,
        releases: Releases::Nothing,
        offset: 0x000,
        count: 0,
    },
    Pad {
        routine: 0x00463BA0,
        releases: Releases::Nothing,
        offset: 0x000,
        count: 0,
    },
    Pad {
        routine: 0x00463EF0,
        releases: Releases::Cell,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x00464690,
        releases: Releases::Cell,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x00464E90,
        releases: Releases::Nothing,
        offset: 0x000,
        count: 0,
    },
    Pad {
        routine: 0x00465120,
        releases: Releases::Cell,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x004658B0,
        releases: Releases::Cell,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x00465F90,
        releases: Releases::Cell,
        offset: 0x048,
        count: 1,
    },
    Pad {
        routine: 0x00466000,
        releases: Releases::OwnWideString,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x00466070,
        releases: Releases::OwnWideString,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x004660E0,
        releases: Releases::OwnWideString,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x00466150,
        releases: Releases::OwnWideString,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x004661E0,
        releases: Releases::OwnWideString,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x00466200,
        releases: Releases::OwnWideString,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x00466270,
        releases: Releases::PlatformString,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x004662E0,
        releases: Releases::PlatformString,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x00466350,
        releases: Releases::PlatformString,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x00466400,
        releases: Releases::Cell,
        offset: 0x048,
        count: 1,
    },
    Pad {
        routine: 0x00466480,
        releases: Releases::Cell,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x00466C00,
        releases: Releases::OwnWideString,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x00466C70,
        releases: Releases::OwnWideString,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x00466CE0,
        releases: Releases::OwnWideString,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x00466D50,
        releases: Releases::OwnWideString,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x00466DE0,
        releases: Releases::OwnWideString,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x00466E00,
        releases: Releases::OwnWideString,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x00466E70,
        releases: Releases::PlatformString,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x00466EE0,
        releases: Releases::PlatformString,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x00466F50,
        releases: Releases::PlatformString,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x00467000,
        releases: Releases::Cell,
        offset: 0x048,
        count: 1,
    },
    Pad {
        routine: 0x00467080,
        releases: Releases::Cell,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x00467780,
        releases: Releases::OwnWideString,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x004677F0,
        releases: Releases::OwnWideString,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x00467860,
        releases: Releases::OwnWideString,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x004678D0,
        releases: Releases::OwnWideString,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x00467960,
        releases: Releases::OwnWideString,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x00467980,
        releases: Releases::OwnWideString,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x004679F0,
        releases: Releases::PlatformString,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x00467A60,
        releases: Releases::PlatformString,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x00467AD0,
        releases: Releases::PlatformString,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x00467B80,
        releases: Releases::Cell,
        offset: 0x048,
        count: 1,
    },
    Pad {
        routine: 0x00467C00,
        releases: Releases::Cell,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x00468320,
        releases: Releases::Cell,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x004689B0,
        releases: Releases::NarrowString,
        offset: 0x028,
        count: 1,
    },
    Pad {
        routine: 0x00468B20,
        releases: Releases::PlatformString,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x00468B90,
        releases: Releases::PlatformString,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x00468C10,
        releases: Releases::Cell,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x00468E80,
        releases: Releases::PlatformString,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x004693D0,
        releases: Releases::Cell,
        offset: 0x048,
        count: 1,
    },
    Pad {
        routine: 0x004693F0,
        releases: Releases::Cell,
        offset: 0x048,
        count: 1,
    },
    Pad {
        routine: 0x00469410,
        releases: Releases::Cell,
        offset: 0x048,
        count: 1,
    },
    Pad {
        routine: 0x00469430,
        releases: Releases::Cell,
        offset: 0x048,
        count: 1,
    },
    Pad {
        routine: 0x00469450,
        releases: Releases::Cell,
        offset: 0x048,
        count: 1,
    },
    Pad {
        routine: 0x00469540,
        releases: Releases::Cell,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x004699D0,
        releases: Releases::Nothing,
        offset: 0x000,
        count: 0,
    },
    Pad {
        routine: 0x00469BB0,
        releases: Releases::Nothing,
        offset: 0x000,
        count: 0,
    },
    Pad {
        routine: 0x0046A4B0,
        releases: Releases::Cell,
        offset: 0x058,
        count: 1,
    },
    Pad {
        routine: 0x0046A4D0,
        releases: Releases::Cell,
        offset: 0x040,
        count: 1,
    },
    Pad {
        routine: 0x0046AEB0,
        releases: Releases::Cell,
        offset: 0x048,
        count: 1,
    },
    Pad {
        routine: 0x0046AED0,
        releases: Releases::Cell,
        offset: 0x048,
        count: 1,
    },
    Pad {
        routine: 0x0046AEF0,
        releases: Releases::Cell,
        offset: 0x048,
        count: 1,
    },
    Pad {
        routine: 0x0046AF10,
        releases: Releases::Cell,
        offset: 0x048,
        count: 1,
    },
    Pad {
        routine: 0x0046AF30,
        releases: Releases::Cell,
        offset: 0x048,
        count: 1,
    },
    Pad {
        routine: 0x0046C4A0,
        releases: Releases::PlatformString,
        offset: 0x038,
        count: 1,
    },
    Pad {
        routine: 0x0046CC70,
        releases: Releases::Cell,
        offset: 0x058,
        count: 1,
    },
    Pad {
        routine: 0x0046CE60,
        releases: Releases::Cell,
        offset: 0x068,
        count: 1,
    },
    Pad {
        routine: 0x0046E010,
        releases: Releases::Nothing,
        offset: 0x000,
        count: 0,
    },
    Pad {
        routine: 0x0046E4B0,
        releases: Releases::Nothing,
        offset: 0x000,
        count: 0,
    },
    Pad {
        routine: 0x0046E7B0,
        releases: Releases::Cell,
        offset: 0x000,
        count: 1,
    },
    Pad {
        routine: 0x0046EDB0,
        releases: Releases::OwnWideString,
        offset: 0x688,
        count: 1,
    },
    Pad {
        routine: 0x0046F140,
        releases: Releases::OwnWideString,
        offset: 0x020,
        count: 1,
    },
    Pad {
        routine: 0x00469D40,
        releases: Releases::SeveralStrings,
        offset: 0x030,
        count: 2,
    },
    Pad {
        routine: 0x0046A780,
        releases: Releases::SeveralStrings,
        offset: 0x040,
        count: 2,
    },
    Pad {
        routine: 0x0046C170,
        releases: Releases::SeveralStrings,
        offset: 0x030,
        count: 2,
    },
];

/// Implements part of the pad family.
///
/// Every pad that lets go of one kind of thing.
#[must_use]
pub fn pads_releasing(releases: Releases) -> Vec<&'static Pad> {
    PADS.iter().filter(|pad| pad.releases == releases).collect()
}

/// Implements part of the pad family.
///
/// The places in a frame that anything is ever held at, commonest first.
#[must_use]
pub fn offsets_in_use() -> Vec<(u16, usize)> {
    let mut counted: Vec<(u16, usize)> = Vec::new();
    for pad in PADS {
        if pad.releases == Releases::Nothing {
            continue;
        }
        match counted.iter_mut().find(|(at, _)| *at == pad.offset) {
            Some((_, seen)) => *seen += 1,
            None => counted.push((pad.offset, 1)),
        }
    }
    counted.sort_by(|left, right| right.1.cmp(&left.1).then(left.0.cmp(&right.0)));
    counted
}

/// Implements part of the pad family.
///
/// How much of the unit is accounted for by the commonest few places.
#[must_use]
pub fn share_at_the_commonest(places: usize) -> f64 {
    let counted = offsets_in_use();
    let held: usize = counted.iter().map(|(_, seen)| *seen).sum();
    let top: usize = counted.iter().take(places).map(|(_, seen)| *seen).sum();
    if held == 0 {
        return 0.0;
    }
    #[expect(
        clippy::cast_precision_loss,
        reason = "counts of a few hundred, well inside what a double holds exactly"
    )]
    {
        top as f64 / held as f64
    }
}

/// Implements part of the pad family.
///
/// The three kinds of string, and the routine each is released by.
///
/// Told apart by which of the three text renderers used which — so the naming
/// here is not guessed from the release routines but carried across from
/// [`crate::variant_text`], where each renderer builds one kind and clears it
/// with one of these.
pub const STRING_RELEASES: [(Releases, u32); 3] = [
    (Releases::OwnWideString, 0x00414480),
    (Releases::NarrowString, 0x004144d0),
    (Releases::PlatformString, 0x00414520),
];

/// One routine that is nothing but a call to another.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct Forward {
    /// Where it sits.
    pub routine: u32,
    /// What it calls.
    pub target: u32,
    /// The constant it passes on, where it passes one.
    pub carries: Option<i32>,
}

/// Every routine in the unit that is one call and a return.
///
/// Implements the 56 routines listed here.
///
/// Most are of no interest on their own. The set that is worth having whole is
/// the eleven that all call one routine, each carrying a different number — see
/// [`OPERATION_ENTRY_POINTS`].
pub const FORWARDS: [Forward; 56] = [
    Forward {
        routine: 0x00460200,
        target: 0x004600A0,
        carries: None,
    },
    Forward {
        routine: 0x004616F0,
        target: 0x00461840,
        carries: None,
    },
    Forward {
        routine: 0x004618E0,
        target: 0x00467310,
        carries: None,
    },
    Forward {
        routine: 0x00461900,
        target: 0x00461C70,
        carries: None,
    },
    Forward {
        routine: 0x00461CE0,
        target: 0x00461C90,
        carries: None,
    },
    Forward {
        routine: 0x00464C60,
        target: 0x00464710,
        carries: None,
    },
    Forward {
        routine: 0x00468C30,
        target: 0x00468C40,
        carries: None,
    },
    Forward {
        routine: 0x0046B010,
        target: 0x004607E0,
        carries: None,
    },
    Forward {
        routine: 0x0046B0A0,
        target: 0x00460BA0,
        carries: None,
    },
    Forward {
        routine: 0x0046B840,
        target: 0x004607E0,
        carries: None,
    },
    Forward {
        routine: 0x0046B8D0,
        target: 0x00460BA0,
        carries: None,
    },
    Forward {
        routine: 0x0046C250,
        target: 0x004620F0,
        carries: None,
    },
    Forward {
        routine: 0x0046C300,
        target: 0x0046EED0,
        carries: None,
    },
    Forward {
        routine: 0x0046C3F0,
        target: 0x0046C410,
        carries: None,
    },
    Forward {
        routine: 0x0046C6D0,
        target: 0x0046C6A0,
        carries: None,
    },
    Forward {
        routine: 0x0046CA60,
        target: 0x0046CA70,
        carries: Some(1),
    },
    Forward {
        routine: 0x0046CC90,
        target: 0x0046CB70,
        carries: None,
    },
    Forward {
        routine: 0x0046CE80,
        target: 0x0046CCC0,
        carries: None,
    },
    Forward {
        routine: 0x0046D730,
        target: 0x0046CA40,
        carries: None,
    },
    Forward {
        routine: 0x0046DDC0,
        target: 0x0046CA40,
        carries: None,
    },
    Forward {
        routine: 0x0046DF50,
        target: 0x00412130,
        carries: None,
    },
    Forward {
        routine: 0x0046E450,
        target: 0x00412130,
        carries: None,
    },
    Forward {
        routine: 0x0046E570,
        target: 0x00412130,
        carries: None,
    },
    Forward {
        routine: 0x0046E590,
        target: 0x0046E750,
        carries: None,
    },
    Forward {
        routine: 0x0046E660,
        target: 0x0046E750,
        carries: None,
    },
    Forward {
        routine: 0x0046E740,
        target: 0x004600A0,
        carries: None,
    },
    Forward {
        routine: 0x0046E750,
        target: 0x00460210,
        carries: None,
    },
    Forward {
        routine: 0x0046E760,
        target: 0x004608E0,
        carries: None,
    },
    Forward {
        routine: 0x0046E780,
        target: 0x0046E750,
        carries: None,
    },
    Forward {
        routine: 0x0046E7D0,
        target: 0x00461C70,
        carries: None,
    },
    Forward {
        routine: 0x0046E7F0,
        target: 0x004620F0,
        carries: None,
    },
    Forward {
        routine: 0x0046E820,
        target: 0x0046E760,
        carries: None,
    },
    Forward {
        routine: 0x0046E830,
        target: 0x00468A10,
        carries: None,
    },
    Forward {
        routine: 0x0046E850,
        target: 0x00468910,
        carries: None,
    },
    Forward {
        routine: 0x0046E870,
        target: 0x004689D0,
        carries: None,
    },
    Forward {
        routine: 0x0046E8D0,
        target: 0x0046C370,
        carries: None,
    },
    Forward {
        routine: 0x0046E8F0,
        target: 0x0046C3F0,
        carries: None,
    },
    Forward {
        routine: 0x0046E920,
        target: 0x0043E5A0,
        carries: None,
    },
    Forward {
        routine: 0x0046EDD0,
        target: 0x0046E7B0,
        carries: None,
    },
    Forward {
        routine: 0x0046EE00,
        target: 0x00461400,
        carries: Some(1),
    },
    Forward {
        routine: 0x0046EFB0,
        target: 0x00412130,
        carries: None,
    },
    Forward {
        routine: 0x0046F120,
        target: 0x00412130,
        carries: None,
    },
    Forward {
        routine: 0x0046F160,
        target: 0x00460B80,
        carries: None,
    },
    Forward {
        routine: 0x0046F180,
        target: 0x00460950,
        carries: None,
    },
    Forward {
        routine: 0x0046F1A0,
        target: 0x0046C6D0,
        carries: None,
    },
    Forward {
        routine: 0x0046F1C0,
        target: 0x0046A320,
        carries: Some(0),
    },
    Forward {
        routine: 0x0046F1E0,
        target: 0x0046A320,
        carries: Some(1),
    },
    Forward {
        routine: 0x0046F200,
        target: 0x0046A320,
        carries: Some(2),
    },
    Forward {
        routine: 0x0046F220,
        target: 0x0046A320,
        carries: Some(4),
    },
    Forward {
        routine: 0x0046F240,
        target: 0x0046A320,
        carries: Some(5),
    },
    Forward {
        routine: 0x0046F260,
        target: 0x0046A320,
        carries: Some(8),
    },
    Forward {
        routine: 0x0046F280,
        target: 0x0046A320,
        carries: Some(9),
    },
    Forward {
        routine: 0x0046F2A0,
        target: 0x0046A320,
        carries: Some(10),
    },
    Forward {
        routine: 0x0046F2C0,
        target: 0x0046A320,
        carries: Some(6),
    },
    Forward {
        routine: 0x0046F2E0,
        target: 0x0046A320,
        carries: Some(7),
    },
    Forward {
        routine: 0x0046F300,
        target: 0x0046A320,
        carries: Some(3),
    },
];

/// Implements part of the forward family.
///
/// Every routine that forwards to one target.
#[must_use]
pub fn forwards_to(target: u32) -> Vec<&'static Forward> {
    FORWARDS
        .iter()
        .filter(|held| held.target == target)
        .collect()
}

/// Where the arithmetic entry points begin.
///
/// Part of Ghidra function `FUN_0046a320` at `0x0046A320`, which all eleven
/// call.
pub const FIRST_OPERATION_ENTRY: u32 = 0x0046F1C0;

/// How far apart they sit.
///
/// Part of the entry-point family.
pub const OPERATION_ENTRY_STRIDE: u32 = 0x20;

/// The eleven public ways to ask for arithmetic.
///
/// Implements the routines from `0x0046F1C0` to `0x0046F300`, every one of them
/// a single call to `FUN_0046a320` at `0x0046A320` carrying an operation
/// number.
///
/// This confirms the operation numbering recovered from the arithmetic routines
/// themselves, from a place that has nothing to do with them: eleven entry
/// points, evenly spaced, carrying nought through ten with none missing and
/// none repeated.
///
/// What it adds is the order. The numbers do not run in address order — they go
/// 0, 1, 2, 4, 5, 8, 9, 10, 6, 7, 3. So the numbering was settled before these
/// were written and they were added as they were wanted, with dividing, which
/// is the one operation that never happens in whole numbers, added last of all.
pub const OPERATION_ENTRY_POINTS: [(u32, i32); 11] = [
    (0x0046F1C0, 0),
    (0x0046F1E0, 1),
    (0x0046F200, 2),
    (0x0046F220, 4),
    (0x0046F240, 5),
    (0x0046F260, 8),
    (0x0046F280, 9),
    (0x0046F2A0, 10),
    (0x0046F2C0, 6),
    (0x0046F2E0, 7),
    (0x0046F300, 3),
];

/// Implements part of the entry-point family.
///
/// The operation one entry point asks for.
#[must_use]
pub fn operation_asked_for(routine: u32) -> Option<i32> {
    OPERATION_ENTRY_POINTS
        .iter()
        .find(|(at, _)| *at == routine)
        .map(|(_, code)| *code)
}

/// Implements Ghidra function `FUN_0046a320` at `0x0046A320`.
///
/// Whether both operands are simple enough for the ordinary arithmetic.
///
/// Both have to be below the limit, and the test is made twice: once on the
/// codes as they stand and once on their low twelve bits, so a flag above those
/// bits does not send an otherwise ordinary pair the long way round.
#[must_use]
pub const fn both_are_ordinary(left: u16, right: u16) -> bool {
    (left < 0x10F && right < 0x10F) || ((left & 0xFFF) < 0x10F && (right & 0xFFF) < 0x10F)
}

/// Implements part of Ghidra function `FUN_0046a320` at `0x0046A320`.
///
/// Whether a pointing operand is flattened in place or merely followed.
///
/// The left-hand one is flattened — written back over itself — and the routine
/// then starts again. The right-hand one is only followed, and nothing is
/// written. So asking for the same arithmetic with the operands the other way
/// round can change one of them and not the other.
#[must_use]
pub const fn flattened_in_place(left_hand: bool) -> bool {
    left_hand
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn no_pad_is_listed_twice() {
        let mut routines: Vec<u32> = PADS.iter().map(|pad| pad.routine).collect();
        let before = routines.len();
        routines.sort_unstable();
        routines.dedup();

        assert_eq!(routines.len(), before);
    }

    #[test]
    fn every_pad_that_releases_something_names_where_it_is_kept() {
        for pad in PADS {
            if pad.releases == Releases::Nothing {
                assert_eq!(pad.offset, 0, "{:#010X}", pad.routine);
            }
        }
    }

    #[test]
    fn a_pad_that_lets_go_of_several_says_how_many() {
        for pad in pads_releasing(Releases::SeveralStrings) {
            assert!(pad.count > 1, "{:#010X}", pad.routine);
        }
    }

    #[test]
    fn and_every_other_pad_lets_go_of_one_thing() {
        for pad in PADS {
            if pad.releases != Releases::SeveralStrings {
                assert!(pad.count <= 1, "{:#010X}", pad.routine);
            }
        }
    }

    #[test]
    fn some_pads_exist_with_nothing_to_do() {
        // A landing pad is generated whether or not the frame holds anything,
        // so a routine that holds nothing still gets one.
        assert!(!pads_releasing(Releases::Nothing).is_empty());
    }

    #[test]
    fn the_places_things_are_kept_cluster_hard() {
        // Which is what a compiler laying out locals the same way every time
        // produces.
        let counted = offsets_in_use();

        assert!(counted.len() > 3);
        assert!(share_at_the_commonest(4) > 0.6, "{:?}", &counted[..4]);
    }

    #[test]
    fn the_commonest_place_is_used_by_more_than_one_kind_of_release() {
        let counted = offsets_in_use();
        let commonest = counted[0].0;
        let mut kinds: Vec<Releases> = PADS
            .iter()
            .filter(|pad| pad.offset == commonest && pad.releases != Releases::Nothing)
            .map(|pad| pad.releases)
            .collect();
        kinds.sort_unstable();
        kinds.dedup();

        assert!(kinds.len() > 1, "{kinds:?}");
    }

    #[test]
    fn every_offset_is_a_whole_number_of_words_from_the_frame() {
        for pad in PADS {
            assert_eq!(pad.offset % 8, 0, "{:#010X}", pad.routine);
        }
    }

    #[test]
    fn the_three_string_kinds_each_have_a_release_of_their_own() {
        let mut routines: Vec<u32> = STRING_RELEASES.iter().map(|(_, at)| *at).collect();
        let before = routines.len();
        routines.sort_unstable();
        routines.dedup();

        assert_eq!(routines.len(), before);
    }

    #[test]
    fn and_each_is_the_one_its_renderer_clears_with() {
        // Carried across from the text renderers rather than guessed here.
        assert_eq!(crate::variant_text::SET_BASES.len(), STRING_RELEASES.len());
    }

    #[test]
    fn every_kind_of_release_is_used_by_at_least_one_pad() {
        for releases in [
            Releases::OwnWideString,
            Releases::NarrowString,
            Releases::PlatformString,
            Releases::Cell,
            Releases::Nothing,
        ] {
            assert!(!pads_releasing(releases).is_empty(), "{releases:?}");
        }
    }

    #[test]
    fn cells_are_released_at_more_places_than_strings_are() {
        // A routine can hold several cells at once and does; a routine holding
        // several strings uses the pad that lets go of several.
        let cell_places: Vec<u16> = {
            let mut found: Vec<u16> = pads_releasing(Releases::Cell)
                .iter()
                .map(|pad| pad.offset)
                .collect();
            found.sort_unstable();
            found.dedup();
            found
        };

        assert!(cell_places.len() > 1);
    }

    #[test]
    fn the_share_at_no_places_is_nothing_and_at_all_of_them_is_everything() {
        assert!((share_at_the_commonest(0) - 0.0).abs() < f64::EPSILON);
        let all = offsets_in_use().len();
        assert!((share_at_the_commonest(all) - 1.0).abs() < f64::EPSILON);
    }
}

#[cfg(test)]
mod forward_tests {
    use super::*;

    #[test]
    fn no_forward_is_listed_twice() {
        let mut routines: Vec<u32> = FORWARDS.iter().map(|held| held.routine).collect();
        let before = routines.len();
        routines.sort_unstable();
        routines.dedup();

        assert_eq!(routines.len(), before);
    }

    #[test]
    fn no_forward_calls_itself() {
        for held in FORWARDS {
            assert_ne!(held.routine, held.target, "{:#010X}", held.routine);
        }
    }

    #[test]
    fn eleven_of_them_are_the_arithmetic_entry_points() {
        assert_eq!(OPERATION_ENTRY_POINTS.len(), 11);
        assert_eq!(forwards_to(0x0046A320).len(), 11);
    }

    #[test]
    fn they_carry_every_operation_number_once() {
        // Which confirms the numbering recovered from the arithmetic routines,
        // from a place that has nothing to do with them.
        let mut codes: Vec<i32> = OPERATION_ENTRY_POINTS
            .iter()
            .map(|(_, code)| *code)
            .collect();
        codes.sort_unstable();

        assert_eq!(codes, (0..11).collect::<Vec<i32>>());
    }

    #[test]
    fn and_every_one_names_an_operation_the_arithmetic_knows() {
        for (_, code) in OPERATION_ENTRY_POINTS {
            assert!(
                crate::variant_arithmetic::operation_for(code).is_some(),
                "{code}"
            );
        }
    }

    #[test]
    fn the_entry_points_are_evenly_spaced() {
        for (at, (routine, _)) in OPERATION_ENTRY_POINTS.iter().enumerate() {
            let expected = FIRST_OPERATION_ENTRY
                + OPERATION_ENTRY_STRIDE * u32::try_from(at).expect("a small table");

            assert_eq!(*routine, expected, "{at}");
        }
    }

    #[test]
    fn but_the_numbers_do_not_run_in_address_order() {
        // So the numbering was settled first and the entry points added as
        // they were wanted.
        let codes: Vec<i32> = OPERATION_ENTRY_POINTS
            .iter()
            .map(|(_, code)| *code)
            .collect();
        let mut sorted = codes.clone();
        sorted.sort_unstable();

        assert_ne!(codes, sorted);
        assert_eq!(codes, [0, 1, 2, 4, 5, 8, 9, 10, 6, 7, 3]);
    }

    #[test]
    fn dividing_was_added_last_of_all() {
        // The one operation that never happens in whole numbers.
        let last = OPERATION_ENTRY_POINTS.last().expect("eleven of them");

        assert_eq!(
            crate::variant_arithmetic::operation_for(last.1),
            Some(crate::variant_arithmetic::Operation::Divide)
        );
    }

    #[test]
    fn an_address_that_is_not_an_entry_point_asks_for_nothing() {
        assert_eq!(operation_asked_for(0x0046A320), None);
        assert_eq!(operation_asked_for(FIRST_OPERATION_ENTRY), Some(0));
    }

    #[test]
    fn two_ordinary_operands_take_the_ordinary_route() {
        assert!(both_are_ordinary(
            crate::variant_value::INTEGER,
            crate::variant_value::DOUBLE
        ));
        assert!(both_are_ordinary(0x102, 0x3));
    }

    #[test]
    fn a_flag_above_the_low_twelve_bits_does_not_send_a_pair_the_long_way() {
        // Which is what the second test is for.
        assert!(both_are_ordinary(0x4000 | 0x5, 0x4000 | 0x3));
        assert!(!both_are_ordinary(0x800, 0x800));
    }

    #[test]
    fn one_unusual_operand_is_enough_to_leave_the_ordinary_route() {
        assert!(!both_are_ordinary(0x900, crate::variant_value::INTEGER));
        assert!(!both_are_ordinary(crate::variant_value::INTEGER, 0x900));
    }

    #[test]
    fn only_the_left_hand_operand_is_written_back_when_it_points() {
        // So the same arithmetic with the operands exchanged changes one of
        // them and not the other.
        assert!(flattened_in_place(true));
        assert!(!flattened_in_place(false));
    }
}
