//! The longer straight-line routines.
//!
//! 936 routines with no branch in them, each a run of up to a dozen calls. The
//! companion to [`crate::straight_line_routines`], which holds the short ones;
//! these were left out of it by a cap on length rather than by being different
//! in kind, and the same thing is true of them: with no condition anywhere, the
//! sequence of calls is the whole of what the routine does.
//!
//! Length changes what they turn out to be. 218 of the 936 call **nothing but the
//! run time's releases** — a run of six, eight, a dozen things let go of in
//! order and nothing else. Those are not landing pads, which the compiler
//! writes and which let go of one thing or a few; they are routines of the
//! program's own, whose whole job is to take an object's contents apart. The
//! longer the sequence, the more likely that is all it is.
//!
//! Some of them also call through a thunk the decompiler could not resolve.
//! There is no recovered function behind such a call, so it is left out of the
//! sequence and [`Sequence::through_a_thunk`] says so: the sequence is then
//! known to be short of a call rather than quietly wrong about one.

// The addresses are written without separators so the port-mapping importer can
// match them against the recovered functions.
#![allow(clippy::unreadable_literal)]

/// One routine and the calls it makes, in order.
#[derive(Debug, Clone, Copy)]
pub struct Sequence {
    /// Where it sits.
    pub routine: u32,
    /// What it calls, in order.
    ///
    /// Recovered functions only. A call through an unresolved thunk is not one,
    /// and is not here; see [`Sequence::through_a_thunk`].
    pub calls: &'static [u32],
    /// Whether it also calls through a thunk the decompiler could not resolve.
    pub through_a_thunk: bool,
}

/// Every longer straight-line routine.
pub static SEQUENCES: [Sequence; 936] = [
    Sequence {
        routine: 0x00410BE0,
        calls: &[
            0x00410AE0, 0x00416740, 0x00414CB0, 0x00416740, 0x00414CB0, 0x00407000, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00413790,
        calls: &[0x004136F0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00414210,
        calls: &[0x00410A80, 0x004095F0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00420110,
        calls: &[0x0041F810, 0x0041F990, 0x00413790],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x004238F0,
        calls: &[0x00423B50, 0x00423B50, 0x00423B50],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00441640,
        calls: &[
            0x00456870, 0x00414480, 0x00416DC0, 0x00414AD0, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0044EA00,
        calls: &[0x0044D710, 0x0044D710],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0044EEA0,
        calls: &[0x0044EDE0, 0x0044EDE0, 0x0044EE20],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00452FB0,
        calls: &[0x00414480, 0x00448450, 0x00453060, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x004535B0,
        calls: &[0x00414480, 0x004484B0, 0x00453060, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00453740,
        calls: &[0x00414480, 0x00448450, 0x00453060, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x004544F0,
        calls: &[0x00414480, 0x00448450, 0x004545B0, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x004549A0,
        calls: &[0x00414480, 0x004484B0, 0x004545B0, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00454BF0,
        calls: &[0x00414480, 0x00448450, 0x004545B0, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0045B760,
        calls: &[0x00419430, 0x00419260, 0x004194B0, 0x00419430],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00465F10,
        calls: &[0x00460800, 0x00414B90, 0x00460B80],
        through_a_thunk: true,
    },
    Sequence {
        routine: 0x0049FDC0,
        calls: &[
            0x0041DDD0, 0x00410AE0, 0x0044D530, 0x004134C0, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x004B06E0,
        calls: &[0x004DCCC0, 0x00597280, 0x0041B840, 0x00412130],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x004B37D0,
        calls: &[0x004B3880],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x004B4B10,
        calls: &[0x004B50B0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x004C6E30,
        calls: &[
            0x004C6C50, 0x00414B50, 0x00414480, 0x004C48B0, 0x00414AD0, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x004CB330,
        calls: &[
            0x004C9BF0, 0x004C1D80, 0x00414B50, 0x004C9EA0, 0x004C9D80, 0x004CA3D0, 0x004C9D80,
            0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x004D7210,
        calls: &[0x00414480, 0x00417320, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x004D8580,
        calls: &[
            0x00414480, 0x00448450, 0x00459CA0, 0x004D8330, 0x00414480, 0x00419430, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x004D86F0,
        calls: &[
            0x00414480, 0x00448450, 0x00459CA0, 0x004D8330, 0x00414480, 0x00419430, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x004D8EE0,
        calls: &[
            0x00459790, 0x004D8330, 0x00459CA0, 0x004D8330, 0x00419430, 0x00419430,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x004D9260,
        calls: &[
            0x00419260, 0x00459AB0, 0x00419260, 0x004D8330, 0x00459CA0, 0x004D8330, 0x00419430,
            0x00419430,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x004D9440,
        calls: &[0x00416AD0, 0x00459CA0, 0x004D8330, 0x00414480, 0x00419430],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00502B20,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00502BC0,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00503360,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00503400,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00503F00,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00503FA0,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00539C10,
        calls: &[
            0x00414480, 0x00417740, 0x00414520, 0x00417740, 0x00414480, 0x00417740, 0x00414480,
            0x004144D0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0054BE10,
        calls: &[0x00416CD0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0055B7A0,
        calls: &[0x00534510],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00573C60,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00573D00,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x005741E0,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00574280,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x005BA4D0,
        calls: &[
            0x00448820, 0x004489D0, 0x005BA740, 0x0040C840, 0x00448970, 0x00448910,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x005BAF60,
        calls: &[
            0x00448820, 0x004489D0, 0x005BA740, 0x0040C840, 0x00448970, 0x00448910,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x005BF950,
        calls: &[0x00417580, 0x005BBA20, 0x005BFA10, 0x005BFF80, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x005DA810,
        calls: &[0x00414480, 0x0044A2B0, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x005DA8D0,
        calls: &[0x00414480, 0x0044A350, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x005DA990,
        calls: &[0x00414480, 0x00448450, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x005DAA50,
        calls: &[0x00414480, 0x0044A300, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x005DC3F0,
        calls: &[0x004B3D70, 0x00416780, 0x00416CD0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x005DC900,
        calls: &[0x005DBD70, 0x005DBEA0, 0x005E1140, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x005E20E0,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x005E2180,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x005E3CE0,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x005E3D80,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x005FCCD0,
        calls: &[0x00414480, 0x0041DC50, 0x00414AD0, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00602C60,
        calls: &[
            0x00418560, 0x0043E600, 0x00414AD0, 0x00414AD0, 0x004AE7E0, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0060D2C0,
        calls: &[0x00410E60, 0x00607B80],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x006247D0,
        calls: &[0x0041B800, 0x006245B0, 0x00414480, 0x00414480],
        through_a_thunk: true,
    },
    Sequence {
        routine: 0x00624B70,
        calls: &[0x00624610, 0x0041B800, 0x006245B0, 0x00414480],
        through_a_thunk: true,
    },
    Sequence {
        routine: 0x00631F70,
        calls: &[0x00631FE0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00648850,
        calls: &[],
        through_a_thunk: true,
    },
    Sequence {
        routine: 0x00662620,
        calls: &[0x005FD4E0, 0x005FD4E0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00663B20,
        calls: &[0x0065B870, 0x00664E30, 0x0065B870, 0x00663CF0],
        through_a_thunk: true,
    },
    Sequence {
        routine: 0x0067F2C0,
        calls: &[0x005FFA40, 0x005FDB10],
        through_a_thunk: true,
    },
    Sequence {
        routine: 0x00682D60,
        calls: &[0x0065B870, 0x0065B870, 0x0065B870],
        through_a_thunk: true,
    },
    Sequence {
        routine: 0x00685FC0,
        calls: &[
            0x0064DD90, 0x00416E20, 0x0065B870, 0x0064DE00, 0x0065B870, 0x00414480,
        ],
        through_a_thunk: true,
    },
    Sequence {
        routine: 0x0068B400,
        calls: &[
            0x00414610, 0x00416740, 0x00414D00, 0x00414740, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x006988D0,
        calls: &[0x00423B50, 0x004230C0, 0x004230C0, 0x00423B50, 0x00423B50],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0069D6E0,
        calls: &[
            0x0069E100, 0x0069DF70, 0x00416740, 0x004424B0, 0x00416740, 0x004424B0, 0x00416740,
            0x004424B0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x006E7130,
        calls: &[0x00414610, 0x006E6D80, 0x00442660, 0x006E6F00, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x006E85D0,
        calls: &[0x004B2DF0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x006EA9C0,
        calls: &[0x0065B870, 0x004701B0, 0x0065B870, 0x0065B870],
        through_a_thunk: true,
    },
    Sequence {
        routine: 0x006ECAF0,
        calls: &[0x006556B0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x006F2860,
        calls: &[],
        through_a_thunk: true,
    },
    Sequence {
        routine: 0x007002B0,
        calls: &[
            0x0040D200, 0x0065B870, 0x0065B870, 0x006FA830, 0x0065B870, 0x0065B870, 0x004701A0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00703C80,
        calls: &[0x00703C70, 0x004B1870],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00708850,
        calls: &[0x007082B0],
        through_a_thunk: true,
    },
    Sequence {
        routine: 0x00708AC0,
        calls: &[],
        through_a_thunk: true,
    },
    Sequence {
        routine: 0x00708D40,
        calls: &[0x005FFA40, 0x005FFA40, 0x005FD000, 0x005FFA40],
        through_a_thunk: true,
    },
    Sequence {
        routine: 0x00714BB0,
        calls: &[0x00714B70, 0x0041B890, 0x0041B840, 0x0041B800, 0x0041B800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00723550,
        calls: &[0x007287B0, 0x00724380, 0x007241D0, 0x00728D30, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00723690,
        calls: &[0x007287B0, 0x00724380, 0x007241D0, 0x00728D30, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00725BF0,
        calls: &[0x0069E8A0, 0x0069D7C0],
        through_a_thunk: true,
    },
    Sequence {
        routine: 0x0072E550,
        calls: &[0x005FFA40, 0x00422DB0, 0x0064D1F0, 0x0064D3A0],
        through_a_thunk: true,
    },
    Sequence {
        routine: 0x007303B0,
        calls: &[0x00427AB0, 0x00442DD0],
        through_a_thunk: true,
    },
    Sequence {
        routine: 0x00787B20,
        calls: &[
            0x00787CA0, 0x00787F60, 0x00787CA0, 0x00787FA0, 0x00787F60, 0x00787C80,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00796170,
        calls: &[0x00414AD0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x007978E0,
        calls: &[0x00414AD0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x007AD610,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x007AD6B0,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x007AE790,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x007AE830,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x007E78A0,
        calls: &[
            0x00410E60, 0x007E7650, 0x004194B0, 0x007E77F0, 0x00410F20, 0x00419430,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x007E8F20,
        calls: &[0x007E8D80, 0x007E8D80, 0x0043E6D0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0080C450,
        calls: &[0x00414480, 0x00414B50, 0x00414AD0, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0080C510,
        calls: &[0x00414480, 0x00414B50, 0x00414AD0, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x008139C0,
        calls: &[0x00423B50, 0x004230C0, 0x004230C0, 0x00423B50, 0x00423B50],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0082BDF0,
        calls: &[0x0064DD90, 0x0041DDD0, 0x0043E650, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00848BF0,
        calls: &[0x008482C0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x008560F0,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00856190,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0085D3A0,
        calls: &[
            0x00414560, 0x00414560, 0x00414480, 0x00414480, 0x00419430, 0x00414480, 0x00419430,
            0x00419430,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00863810,
        calls: &[0x0041B800, 0x0041D630, 0x00862F00, 0x0041B800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00863B20,
        calls: &[0x0041B800, 0x0041D630, 0x00862F00, 0x0041B800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00863BE0,
        calls: &[0x0041B800, 0x0041D630, 0x00862F00, 0x0041B800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00863CA0,
        calls: &[0x00414520, 0x0041D630, 0x004168B0, 0x00414520],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00863D60,
        calls: &[0x00414520, 0x0041D630, 0x004168B0, 0x00414520],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00863E20,
        calls: &[0x0041B800, 0x0041D630, 0x00862F00, 0x0041B800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00863EE0,
        calls: &[0x00414520, 0x0041D630, 0x004168B0, 0x00414520],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00864200,
        calls: &[0x0041B800, 0x0041D630, 0x00862F00, 0x0041B800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x008642C0,
        calls: &[0x00414520, 0x0041D630, 0x004168B0, 0x00414520],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00864380,
        calls: &[0x0041B800, 0x0041D630, 0x00862F00, 0x0041B800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00864BA0,
        calls: &[0x00414520, 0x0041D630, 0x004168B0, 0x00414520],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00864D10,
        calls: &[0x00414520, 0x0041D630, 0x004168B0, 0x00414520],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00865090,
        calls: &[0x0041B800, 0x0041D630, 0x00862F00, 0x0041B800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x008652C0,
        calls: &[0x0041B800, 0x0041D630, 0x00862F00, 0x0041B800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00865A10,
        calls: &[0x008659D0, 0x004168E0, 0x0041D630, 0x00414520, 0x0041B800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00865C50,
        calls: &[0x008659D0, 0x0041D630, 0x0041B800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00865D00,
        calls: &[0x008659D0, 0x004168E0, 0x0041D630, 0x00414520, 0x0041B800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00865DD0,
        calls: &[0x008659D0, 0x004168E0, 0x0041D630, 0x00414520, 0x0041B800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00865EA0,
        calls: &[0x008659D0, 0x004168E0, 0x0041D630, 0x00414520, 0x0041B800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00866230,
        calls: &[0x00866040, 0x0041D630, 0x0041B800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00866D90,
        calls: &[0x0041B800, 0x00866910, 0x0041D630, 0x0041B800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00866E70,
        calls: &[0x00866490, 0x004168E0, 0x0041D630, 0x00414520, 0x0041B800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00868530,
        calls: &[0x00868350, 0x004168E0, 0x0041D630, 0x00414520, 0x0041B800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00869D50,
        calls: &[0x008687D0, 0x0041D630, 0x0041B800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00869EB0,
        calls: &[0x008687D0, 0x0041D630, 0x0041B800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00869F60,
        calls: &[0x008687D0, 0x0041D630, 0x0041B800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0086A010,
        calls: &[0x008687D0, 0x0041D630, 0x0041B800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0086A2D0,
        calls: &[0x008687D0, 0x0041D630, 0x0041B800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0086A820,
        calls: &[0x008687D0, 0x004168E0, 0x0041D630, 0x00414520, 0x0041B800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0086CCD0,
        calls: &[0x0041DDD0, 0x0044D530, 0x004134C0, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x008783B0,
        calls: &[
            0x0043F750, 0x0043F750, 0x0043F750, 0x0043F750, 0x00416CD0, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x008787B0,
        calls: &[0x0041B910, 0x0086E810, 0x008785A0, 0x00419430, 0x0041B800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00879ED0,
        calls: &[0x0041DDD0, 0x00442F70, 0x0086DFD0, 0x004134C0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0089B6F0,
        calls: &[0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x008ABEE0,
        calls: &[0x004B6930, 0x008A2B70, 0x008AC320, 0x00410F20],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x008AED80,
        calls: &[
            0x00414480, 0x00414480, 0x00414480, 0x00414480, 0x00414480, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x008AEED0,
        calls: &[
            0x00414480, 0x00414480, 0x00414480, 0x00414480, 0x00414480, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x008AF120,
        calls: &[
            0x00414480, 0x0041B800, 0x00414560, 0x00414480, 0x00414480, 0x00414480, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x008AF330,
        calls: &[0x00414B50, 0x00874EE0, 0x0043EA00, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x008AF950,
        calls: &[
            0x00414480, 0x004B6930, 0x008AF5F0, 0x004B6D10, 0x004B4060, 0x00410F20,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x008B1280,
        calls: &[0x0041B910, 0x008B1190, 0x00419430, 0x0041B800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x008B1330,
        calls: &[0x00410E60, 0x008788C0, 0x004B6DC0, 0x008B1470, 0x00410F20],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x008B8720,
        calls: &[
            0x008B87A0, 0x008B8930, 0x008B8850, 0x008B8890, 0x008B88D0, 0x008B8DA0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0094D370,
        calls: &[0x009949D0, 0x00410F20],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0094D420,
        calls: &[0x009949D0, 0x00410F20],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0094D4E0,
        calls: &[0x009949D0, 0x00410F20],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0094D5A0,
        calls: &[0x009949D0, 0x00410F20],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00965FB0,
        calls: &[
            0x0059B8C0, 0x00410F20, 0x0059B8C0, 0x00410F20, 0x0059B8C0, 0x00410F20,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0096B840,
        calls: &[
            0x004145C0, 0x00414480, 0x004145C0, 0x00414480, 0x004145C0, 0x004145C0, 0x004145C0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00970780,
        calls: &[0x0096F6F0, 0x00414B90, 0x00414B90, 0x00414B90, 0x00414B90],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00971AE0,
        calls: &[0x0096F6F0, 0x00414B90, 0x00414B90, 0x00414B90, 0x00971CB0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00972E10,
        calls: &[
            0x0096F6F0, 0x00414B90, 0x00414B90, 0x00414B90, 0x00414B90, 0x00414B90, 0x00414B90,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00982E60,
        calls: &[0x0097CFA0, 0x00973570, 0x00974F30],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00984470,
        calls: &[0x0097F900, 0x00973570, 0x00976870],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00985B60,
        calls: &[0x008F9510, 0x008F9640, 0x00414B90, 0x00410F20, 0x00414520],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x009B5CA0,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x009B5D40,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x009B5FE0,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x009B6080,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x009D31D0,
        calls: &[0x005974F0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x009D6260,
        calls: &[0x00414610, 0x004168E0, 0x00414520, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x009D7390,
        calls: &[0x009D71D0, 0x004168E0, 0x009D3370, 0x00414520],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x009D7460,
        calls: &[0x009D71D0, 0x004168E0, 0x004168E0, 0x009D3370, 0x004145C0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x009D7550,
        calls: &[0x009D71D0, 0x004168E0, 0x009D3370, 0x00414520],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x009D7620,
        calls: &[0x009D71D0, 0x004168E0, 0x004168E0, 0x009D3370, 0x004145C0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x009D7EA0,
        calls: &[0x009D7DD0, 0x009D3370, 0x0041B890, 0x0041B800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x009D82C0,
        calls: &[0x009D81F0, 0x004168E0, 0x004168B0, 0x004145C0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x009D86B0,
        calls: &[0x009D81F0, 0x004168E0, 0x009D35F0, 0x00414520],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x009D8A90,
        calls: &[0x009D81F0, 0x004168E0, 0x004168E0, 0x004145C0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x009D8C20,
        calls: &[
            0x009D81F0, 0x009D3290, 0x004113F0, 0x009D3370, 0x0041B890, 0x0041B800,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x009D8D20,
        calls: &[0x009D81F0, 0x004168E0, 0x004168E0, 0x004145C0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x009D8FF0,
        calls: &[
            0x009D8150, 0x009D81F0, 0x009D3290, 0x004113F0, 0x009D3370, 0x0041B890, 0x0041B800,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x009D90F0,
        calls: &[
            0x009D8150, 0x009D81F0, 0x009D3290, 0x004113F0, 0x009D3370, 0x0041B890, 0x0041B800,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x009D95A0,
        calls: &[0x004113F0, 0x009D3370, 0x0041B890, 0x0041B800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x009D9D40,
        calls: &[0x0041B800, 0x0041D630, 0x0041D630, 0x0041B800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x009DA720,
        calls: &[0x009DA5A0, 0x00416020, 0x004168B0, 0x004145C0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x009DB830,
        calls: &[0x009DAB20, 0x004168E0, 0x009D35F0, 0x00414520],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x009DB9F0,
        calls: &[0x0041B910, 0x009DAB20, 0x009D3290, 0x009D3370, 0x0041B800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x009DCAA0,
        calls: &[0x009D3B20, 0x009DC720, 0x0041D630, 0x00410F20],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x009E3240,
        calls: &[
            0x009E4B20, 0x00410E60, 0x009E3190, 0x00414910, 0x00410F20, 0x00410F20,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x009E7BC0,
        calls: &[0x009E95A0, 0x009E9600, 0x009E7CF0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x009E8B90,
        calls: &[0x009E95A0, 0x009E9600, 0x009E9250],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00A01A10,
        calls: &[0x004192A0, 0x00A02A30, 0x00414AD0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00A02250,
        calls: &[
            0x00A01F50, 0x00414480, 0x00414AD0, 0x00414480, 0x00410F20, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00A07560,
        calls: &[0x00414610, 0x00414AD0, 0x0044D530, 0x004134C0, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00A330F0,
        calls: &[
            0x00A33040, 0x00A33040, 0x00A33040, 0x00A33040, 0x00A33040, 0x00A33040, 0x00A33040,
            0x00A33040, 0x00A33040, 0x00A33040,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00A34610,
        calls: &[0x00A33EB0, 0x00A32F90, 0x00A34420],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00A37AE0,
        calls: &[0x00A32F80, 0x00A32EA0, 0x00A32EA0, 0x00A32F80],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00A47800,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00A4A2E0,
        calls: &[
            0x00414610, 0x00414480, 0x0043E600, 0x00414B50, 0x00414480, 0x00414AD0, 0x00414480,
            0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00A4A3D0,
        calls: &[
            0x00414610, 0x00414480, 0x0043E600, 0x00414B50, 0x00414480, 0x00414AD0, 0x00414480,
            0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00A4DE90,
        calls: &[
            0x009EC440, 0x005FCD80, 0x0040C770, 0x005FCC80, 0x005FCE70, 0x005FC860, 0x005FCFA0,
            0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00A55B00,
        calls: &[
            0x00A55F70, 0x00A55F70, 0x00A55F70, 0x00A55F70, 0x00A55F70, 0x00A55F70, 0x00A55F70,
            0x00A55F70, 0x00A55F70,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00A59000,
        calls: &[
            0x00414560, 0x00417840, 0x00414560, 0x00417840, 0x00414560, 0x00417840, 0x00414480,
            0x00460BA0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00A5CB30,
        calls: &[0x00442F70, 0x009EC420, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00ABF530,
        calls: &[0x00ABF340],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00AC0980,
        calls: &[
            0x00A4A4C0, 0x00A52510, 0x004AEAC0, 0x00A52A80, 0x004AE7E0, 0x00A57B50, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00ADC9A0,
        calls: &[0x004AEAC0, 0x00AB5440, 0x004AEAC0, 0x00AC28E0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00ADCA40,
        calls: &[0x004AEAC0, 0x00AB54B0, 0x004AEAC0, 0x00AC28E0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00ADCAE0,
        calls: &[0x004AEAC0, 0x00AB53D0, 0x004AEAC0, 0x00AC28E0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00ADCB80,
        calls: &[0x004AEAC0, 0x00AB5520, 0x004AEAC0, 0x00AC28E0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00ADCC20,
        calls: &[0x004AEAC0, 0x00AB5590, 0x004AEAC0, 0x00AC28E0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00ADCD90,
        calls: &[0x004AEAC0, 0x00AB5680, 0x004AEAC0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00AE5F20,
        calls: &[0x00A74CD0, 0x00A9B900, 0x004AEAC0, 0x00AB3440],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00AF0740,
        calls: &[
            0x00AD03B0, 0x00AE63D0, 0x00AD3070, 0x00AF0380, 0x00410F20, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00AF97E0,
        calls: &[0x00A7AE70, 0x00A7B2E0, 0x00410F20],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00B04060,
        calls: &[
            0x00414560, 0x00414560, 0x00419430, 0x00417740, 0x00414560, 0x00414560, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00B060D0,
        calls: &[0x00414610, 0x0064DBE0, 0x0065B870, 0x00B05E80, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00B0D120,
        calls: &[0x00416830, 0x0043FC50, 0x00414480],
        through_a_thunk: true,
    },
    Sequence {
        routine: 0x00B10F70,
        calls: &[0x0041DDD0, 0x0041DDD0, 0x00416CD0, 0x00416DB0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00B1D580,
        calls: &[
            0x00414480, 0x00414520, 0x00414560, 0x004145C0, 0x00414560, 0x004145C0, 0x00414560,
            0x004145C0, 0x00414560, 0x004145C0, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00B1E3F0,
        calls: &[
            0x00414480, 0x004145C0, 0x00414590, 0x00414520, 0x004144D0, 0x00414520, 0x00414590,
            0x004145C0, 0x004144D0, 0x004145C0, 0x00414590, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00B2F440,
        calls: &[
            0x00417360, 0x00414DF0, 0x00414DF0, 0x00409A70, 0x00414DF0, 0x00409A70,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00B327E0,
        calls: &[
            0x004144D0, 0x00414480, 0x00414590, 0x00414480, 0x00414590, 0x00417740, 0x00414520,
            0x00414590,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00B32B30,
        calls: &[
            0x00415AD0, 0x00414DF0, 0x00409A70, 0x0043F750, 0x00415DD0, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00B36C40,
        calls: &[
            0x00414520, 0x00414590, 0x00414480, 0x00414590, 0x00414480, 0x00414590, 0x00414590,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00B371E0,
        calls: &[
            0x004144D0, 0x00414480, 0x004144D0, 0x00414480, 0x00414520, 0x00414480, 0x004144D0,
            0x00414480, 0x004144D0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00B39C90,
        calls: &[0x00415D10, 0x00414DF0, 0x00414DF0, 0x00414DF0, 0x00414DF0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00B3BE30,
        calls: &[
            0x004144D0, 0x00414480, 0x00414590, 0x00414480, 0x00414590, 0x00414480, 0x00414590,
            0x00414480, 0x00414590, 0x00414480, 0x004144D0, 0x00414520,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00B3C290,
        calls: &[0x00416880, 0x004B9860, 0x00B3C370, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00B43F40,
        calls: &[
            0x00B25840, 0x00B25840, 0x00B25870, 0x00B25840, 0x00B25840, 0x00B25840, 0x00B25840,
            0x00B25840, 0x00B25840, 0x00B25840, 0x00B25840, 0x00B25840,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00B445D0,
        calls: &[
            0x004B6DA0, 0x004B6DC0, 0x00B25870, 0x004B6DC0, 0x004B6DC0, 0x00B25870, 0x004B6DC0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00B4F9E0,
        calls: &[0x00415D10, 0x00414DF0, 0x00414DF0, 0x00414DF0, 0x00414DF0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00B4FD90,
        calls: &[0x00B4FC70, 0x00B4FC70, 0x00B4FC70, 0x00B1ADB0, 0x004144D0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00B60090,
        calls: &[0x00B256E0, 0x00B598D0, 0x00B256E0, 0x00B598D0, 0x00B257F0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00B60190,
        calls: &[0x00B256E0, 0x00B598D0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00B7CDD0,
        calls: &[0x00B7CD70, 0x00B7CD70, 0x00B7CD70],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00B83F20,
        calls: &[
            0x0040D200, 0x00409A70, 0x00B83DA0, 0x00B83DA0, 0x00B83DA0, 0x00B83DA0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00B86B60,
        calls: &[0x0040D200, 0x00B6CA10, 0x0043E2C0, 0x0043E2C0, 0x00410F20],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00B88010,
        calls: &[
            0x0040D200, 0x004D22D0, 0x00B6BE30, 0x0043E2C0, 0x00B6BE30, 0x0043E2C0, 0x00410F20,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00B8E520,
        calls: &[
            0x0043F750, 0x0043F750, 0x00416CD0, 0x004401F0, 0x00B8A7D0, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00B8E650,
        calls: &[
            0x00414610, 0x00414610, 0x00416BA0, 0x00B8A7D0, 0x00414480, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00B903D0,
        calls: &[
            0x00414480, 0x00414560, 0x00414480, 0x00414560, 0x00414480, 0x00414560, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00B92240,
        calls: &[0x00414610, 0x00414610, 0x00414AD0, 0x00416910, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00B9D750,
        calls: &[
            0x0041B800, 0x00417840, 0x0041B800, 0x0041B800, 0x00417840, 0x00414480, 0x00414480,
            0x0041B800,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00B9DDB0,
        calls: &[
            0x0041B800, 0x00414480, 0x0041B800, 0x0041B800, 0x0041B800, 0x0041B800, 0x0041B800,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00BB0700,
        calls: &[
            0x00414560, 0x0041B800, 0x0041B800, 0x0041B800, 0x0041B800, 0x0041B800, 0x0041B800,
            0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00BB16C0,
        calls: &[0x00BAC850, 0x00416CD0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00BB1DC0,
        calls: &[0x00BAF6A0, 0x00BAD080, 0x00BAC850, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00BB2740,
        calls: &[0x00BAD080, 0x00416CD0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00BB4A40,
        calls: &[
            0x0041B800, 0x00414480, 0x00417840, 0x00414480, 0x0041B800, 0x0041B800, 0x00414560,
            0x00417840, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00BBC2C0,
        calls: &[0x00BBA3E0],
        through_a_thunk: true,
    },
    Sequence {
        routine: 0x00BCAA50,
        calls: &[0x00414610, 0x00BCA8E0, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00C0A5F0,
        calls: &[0x00BF3750, 0x00BFA470, 0x00BFA6C0, 0x00C086E0, 0x00BF28A0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00C1E930,
        calls: &[0x00C1E2A0, 0x0040D200, 0x0040D200, 0x0040D200],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00C210C0,
        calls: &[
            0x00C1E2A0, 0x0040D200, 0x0040D200, 0x0040D200, 0x0040D200, 0x0040D200, 0x0040D200,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00C2EEA0,
        calls: &[0x004095C0, 0x004AE7E0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00C32D00,
        calls: &[0x00C35490, 0x00C34E10, 0x00C1AA50, 0x00C22DA0, 0x00C24280],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00C3C850,
        calls: &[
            0x01D311C0, 0x01D311C0, 0x01D311C0, 0x01D311C0, 0x01D311C0, 0x01D311C0, 0x01D311C0,
            0x00C3C390, 0x00C3C390,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00C44870,
        calls: &[
            0x0040AF80, 0x00C43C40, 0x0040BCD0, 0x0040AF80, 0x00C43C40, 0x0040BDD0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00C44940,
        calls: &[0x00C43C40, 0x0040BCD0, 0x00C43C40, 0x0040BDD0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00C449C0,
        calls: &[0x00C44590, 0x0040C760, 0x00C445D0, 0x0040BCD0, 0x0040BDD0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00C44C20,
        calls: &[0x00C44590, 0x0040C760, 0x00C445D0, 0x0040BCD0, 0x0040BDD0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00C4F7A0,
        calls: &[0x00409A70, 0x005894C0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00C59360,
        calls: &[0x00829530, 0x0064DBE0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00C79860,
        calls: &[0x00C78D60, 0x00442B60, 0x00C78D60, 0x004167D0, 0x00442C30],
        through_a_thunk: true,
    },
    Sequence {
        routine: 0x00C7B9B0,
        calls: &[0x004BA3C0, 0x00C7B8B0, 0x00410F20],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00C7BBD0,
        calls: &[0x0041B910, 0x0041B800, 0x00452340, 0x0041B800, 0x0041B800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00C7BD10,
        calls: &[0x0041B910, 0x00C7BC70, 0x0041B800, 0x0041B800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00C7C150,
        calls: &[
            0x0041B800, 0x0041B800, 0x00417840, 0x00417840, 0x0041B800, 0x0041B800, 0x0041B800,
            0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00C7C1D0,
        calls: &[0x00414610, 0x00C7C270, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00C817F0,
        calls: &[
            0x00414610, 0x00415DD0, 0x00B0D0C0, 0x004144D0, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00C84170,
        calls: &[0x00414610, 0x00414610, 0x00414610, 0x00C83750, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00C84730,
        calls: &[
            0x00414480, 0x0041B800, 0x00414560, 0x0041B800, 0x00414560, 0x0041B800, 0x00414480,
            0x0041B800, 0x00417840, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00C86CB0,
        calls: &[
            0x0065F300, 0x0064B380, 0x0064B380, 0x0064B380, 0x00C40440, 0x00C86F80,
        ],
        through_a_thunk: true,
    },
    Sequence {
        routine: 0x00C89260,
        calls: &[
            0x0040D200, 0x004D22D0, 0x00B6BE30, 0x0043E2C0, 0x00B6BE30, 0x0043E2C0, 0x00410F20,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00C8EF60,
        calls: &[0x0041B910, 0x00877E10, 0x00C8F010, 0x00419430, 0x0041B800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00C8FBE0,
        calls: &[0x00C8FB10],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00CA5510,
        calls: &[0x00414610, 0x00415DD0, 0x00415AB0, 0x004144D0, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00CAC9D0,
        calls: &[
            0x0041B910, 0x00875240, 0x0041B840, 0x00877FF0, 0x00419430, 0x0041B800, 0x0041B800,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00CAED30,
        calls: &[0x0041B910, 0x00416BA0, 0x00414480, 0x0041B800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00CAF810,
        calls: &[
            0x0041B910, 0x00875240, 0x0041B840, 0x00C8AFF0, 0x0041B800, 0x0041B800,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00CBD260,
        calls: &[0x00414610, 0x0041B910, 0x00CBDE70, 0x00414480, 0x0041B800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00CBDCD0,
        calls: &[0x00414610, 0x0041B910, 0x00CBDE70, 0x00414480, 0x0041B800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00CC1710,
        calls: &[0x00410F20, 0x00CBF470],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00CC1800,
        calls: &[0x00410F20, 0x00410F20, 0x00CBF470],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00CC56F0,
        calls: &[
            0x00419430, 0x00414560, 0x00419430, 0x00419430, 0x00414480, 0x00414480, 0x0041B800,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00CCE4C0,
        calls: &[0x00882AA0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00CCE610,
        calls: &[0x00882AA0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00CCEB70,
        calls: &[0x00882AA0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00CD0E30,
        calls: &[0x00CCFDC0, 0x00414AD0, 0x00414AD0, 0x00414AD0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00CDAA80,
        calls: &[
            0x00410E60, 0x00874520, 0x00878900, 0x0041B800, 0x004B6DC0, 0x00410F20, 0x0041B800,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00CDAB60,
        calls: &[
            0x0041B910, 0x00410E60, 0x00CDAD00, 0x004B6DC0, 0x0086F700, 0x008787B0, 0x00410F20,
            0x0041B800,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00CDAC40,
        calls: &[
            0x00419430, 0x00410E60, 0x00CDAD00, 0x004B6DC0, 0x00878880, 0x00410F20,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00CDB1D0,
        calls: &[0x00410E60, 0x004B6DC0, 0x00410F20],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00CDB2A0,
        calls: &[0x0041B910, 0x00882AA0, 0x00CDADD0, 0x00410F20, 0x0041B800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00CEE890,
        calls: &[
            0x00414560, 0x0041B800, 0x00417840, 0x00414480, 0x00417840, 0x00414560, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00CF0D70,
        calls: &[
            0x00414480, 0x00448ED0, 0x0044A3A0, 0x00416BA0, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00CF2C10,
        calls: &[0x00CF2B30, 0x00409A70, 0x00CF2B30, 0x00CF2B30],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00CFBB90,
        calls: &[0x008B1F70, 0x008B1280, 0x0043E1A0, 0x00410F20, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00D0EC80,
        calls: &[0x0040D200, 0x00D0D260],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00D156F0,
        calls: &[0x0040D200, 0x00D0D260],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00D1A530,
        calls: &[0x0040D200, 0x00D19990, 0x00D0D260],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00D1C110,
        calls: &[0x0040D200, 0x00D1AFE0, 0x00D0D260],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00D21950,
        calls: &[
            0x0040D200, 0x0040D200, 0x0040D200, 0x0040D200, 0x0040D200, 0x0040D200, 0x0040D200,
            0x0040D200, 0x0040D200, 0x0040D200, 0x0040D200, 0x0040D200,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00D2B090,
        calls: &[0x00D2A9D0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00D2B120,
        calls: &[0x00D2A9D0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00D37120,
        calls: &[0x00429CA0, 0x004230C0, 0x004230C0, 0x00429CA0, 0x00429CA0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00D3AE30,
        calls: &[0x00787CA0, 0x00787F60],
        through_a_thunk: true,
    },
    Sequence {
        routine: 0x00D40DF0,
        calls: &[0x00787CA0, 0x00787F60],
        through_a_thunk: true,
    },
    Sequence {
        routine: 0x00D47710,
        calls: &[0x005FFA40, 0x005FFA40, 0x005FD000, 0x005FFA40],
        through_a_thunk: true,
    },
    Sequence {
        routine: 0x00D57690,
        calls: &[
            0x00423B50, 0x004230A0, 0x004230A0, 0x004230C0, 0x004230C0, 0x00423B50, 0x00423B50,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00D58810,
        calls: &[0x004238D0, 0x004238D0, 0x00D589A0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00D59220,
        calls: &[0x00D574E0, 0x0060A050],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00D72E40,
        calls: &[0x00D74990, 0x00D74950, 0x00D74950, 0x00416CD0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00D756C0,
        calls: &[
            0x00410AE0, 0x00D574E0, 0x00410E60, 0x004B8D80, 0x004B89E0, 0x004B89E0, 0x00410F20,
            0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00D77950,
        calls: &[0x004D2E60],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00D7DF20,
        calls: &[
            0x00414B50, 0x00D57300, 0x00D57170, 0x0043FC00, 0x00414560, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00D83220,
        calls: &[0x00414AD0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00D837D0,
        calls: &[0x00D72E40, 0x00414AD0, 0x00414AD0, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00D8EBF0,
        calls: &[
            0x00D75390, 0x00D75390, 0x00D75390, 0x00D75390, 0x00D75390, 0x00D75390, 0x00D75390,
            0x00D75390, 0x00D75390, 0x00D75390, 0x00D75390,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00D8ECD0,
        calls: &[0x0060F770, 0x005FC8C0, 0x0040D200, 0x005FCC40],
        through_a_thunk: true,
    },
    Sequence {
        routine: 0x00DA9B00,
        calls: &[
            0x004194B0, 0x004194B0, 0x004194B0, 0x004194B0, 0x00419430, 0x00419430,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00DD1DD0,
        calls: &[
            0x00DD07B0, 0x016EBE60, 0x016EBFA0, 0x016EC1C0, 0x016ED320, 0x016ED220, 0x016ED5D0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00DD3B10,
        calls: &[0x016EBDD0, 0x016EBFA0, 0x016ED320, 0x016ED220],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00DD88A0,
        calls: &[0x0041B910, 0x00DD8750, 0x0041B800, 0x0041B800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00DDE410,
        calls: &[0x006556B0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00DE51B0,
        calls: &[0x00414480, 0x00448450, 0x00416BA0, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00DE5290,
        calls: &[0x00414480, 0x00448450, 0x00416BA0, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00DE5390,
        calls: &[0x00414480, 0x00448450, 0x00416BA0, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00DE6A10,
        calls: &[0x00414610, 0x004B9860, 0x00DE6910, 0x00410F20, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00DE88C0,
        calls: &[
            0x00414610, 0x00B89270, 0x00B8E520, 0x004168E0, 0x00414B90, 0x00414480, 0x00414520,
            0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00DE8980,
        calls: &[
            0x00414610, 0x00B89270, 0x00B8E520, 0x00414AD0, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00DE8F60,
        calls: &[
            0x00414560, 0x00414520, 0x004144D0, 0x00414480, 0x00414520, 0x00414560, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00DEECA0,
        calls: &[
            0x016EACF0, 0x016E9E20, 0x016EC240, 0x016ED5D0, 0x016EBE60, 0x016ED320, 0x016E9F40,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00DEED70,
        calls: &[
            0x016EACF0, 0x016E9E20, 0x016EC240, 0x016ED5D0, 0x016EBE60, 0x016ED320, 0x016E9F40,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00DF1B90,
        calls: &[
            0x016E9E20, 0x016E9CD0, 0x016E9F40, 0x016EA000, 0x016EB0A0, 0x016EC240, 0x016EBFA0,
            0x016EBE60, 0x016ED5D0, 0x016ED220, 0x016ED320,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00DF2330,
        calls: &[0x01B05600, 0x01B05600, 0x017DD810, 0x017DDE40],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00DF28F0,
        calls: &[0x01B05600, 0x01B05600, 0x017DD810, 0x017DDE40],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00DF4A60,
        calls: &[0x01B05690, 0x01B05690, 0x017DDB80, 0x017DDB80],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00DF5510,
        calls: &[0x01B05600, 0x01B05600, 0x017DD810, 0x017DDE40],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00DF6AD0,
        calls: &[
            0x01B05600, 0x01B05600, 0x01B05600, 0x01B05690, 0x017DDFB0, 0x017DDB80,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00DFA070,
        calls: &[0x01B05600, 0x01B05600, 0x01B05690, 0x017DDE40],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00DFA320,
        calls: &[0x01B05600, 0x01B05600, 0x01B05690, 0x017DDFB0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00DFA650,
        calls: &[0x01B05600, 0x01B05600, 0x017DDE40],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00E056A0,
        calls: &[
            0x004144D0, 0x00414480, 0x00414520, 0x004144D0, 0x00414480, 0x00414520, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00E05D80,
        calls: &[0x00414AD0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00E078A0,
        calls: &[
            0x00414610, 0x00416BA0, 0x00E07840, 0x00414140, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00E080E0,
        calls: &[0x00414610, 0x00414610, 0x00E08090, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00EA7DC0,
        calls: &[
            0x00417580, 0x00417580, 0x00EA7A10, 0x00EA82D0, 0x00EA74F0, 0x00417740, 0x00417740,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00EA8030,
        calls: &[
            0x00417580, 0x00417580, 0x00EA7A10, 0x00EA82D0, 0x00EA74F0, 0x00417740, 0x00417740,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00EA8850,
        calls: &[
            0x00417580, 0x00EA7A10, 0x00EA8240, 0x00417C40, 0x00417740, 0x00417740,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00EA8930,
        calls: &[
            0x00417580, 0x00EA7A10, 0x00EA8240, 0x00417C40, 0x00417740, 0x00417740,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00EAE880,
        calls: &[0x00414B50, 0x00410F20, 0x005DC9D0, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00EB3440,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00EB34E0,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00ED3C70,
        calls: &[
            0x0065F800, 0x00410F20, 0x00410F20, 0x00410F20, 0x00410F20, 0x00410F20, 0x00410F20,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00ED62C0,
        calls: &[0x00414610, 0x00416910, 0x016A4200, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00EDA760,
        calls: &[
            0x00414560, 0x00414590, 0x00414480, 0x00414590, 0x00414480, 0x00414560, 0x00414590,
            0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00EE57C0,
        calls: &[0x00414C70, 0x00410F20, 0x00418590, 0x00410F20],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00EE5870,
        calls: &[
            0x00414560, 0x00414480, 0x004144D0, 0x00414480, 0x00414480, 0x004144D0, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00EE6090,
        calls: &[
            0x00414610, 0x01CF1750, 0x017BF050, 0x00409570, 0x01D38290, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00EE6140,
        calls: &[0x00414610, 0x01CF1750, 0x017BF050, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00EEECC0,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00EEED60,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00F2D260,
        calls: &[0x004540D0, 0x00417320, 0x00455AE0, 0x00410F20, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00F3ABB0,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00F3AC50,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00F40370,
        calls: &[0x00829530, 0x0064DBE0, 0x0082A4F0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00F422A0,
        calls: &[
            0x0065F300, 0x008483E0, 0x00F42CE0, 0x00F42D30, 0x0064CF60, 0x00414480, 0x0064DBE0,
            0x004B6930,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00F4B4D0,
        calls: &[0x00848A70, 0x0064CC50, 0x0064CB90, 0x0064CC50, 0x0064CC50],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00F52EA0,
        calls: &[
            0x00414610, 0x01B06050, 0x00F51A00, 0x016F1C10, 0x00F51AE0, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00F59C00,
        calls: &[
            0x016EB0A0, 0x016EB0A0, 0x016EB0A0, 0x016EB0A0, 0x016EE260, 0x00F57990, 0x016E9F40,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00F5C1A0,
        calls: &[0x016EBB00, 0x016EE260, 0x00F5B110, 0x016E9F40, 0x016E9F50],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00F5C3D0,
        calls: &[0x016EBB00, 0x016EE260, 0x00F5B110, 0x016E9F40, 0x016E9F50],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00F5F080,
        calls: &[
            0x0043F750, 0x0043F750, 0x0043F750, 0x0043F750, 0x00416CD0, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00F63210,
        calls: &[0x00F652E0, 0x00F65300, 0x00F65320, 0x00F652C0, 0x00F62F10],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00F63520,
        calls: &[
            0x00F62B60, 0x00F652E0, 0x00F65300, 0x00F65320, 0x00F652C0, 0x00F6EB60, 0x00F605F0,
            0x00F63480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00F787D0,
        calls: &[0x00414610, 0x0043E130, 0x00416BA0, 0x00414560, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00F872F0,
        calls: &[
            0x0043FBA0, 0x00416BA0, 0x0064DE00, 0x0043F750, 0x0064DE00, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00F8B3C0,
        calls: &[0x00442620, 0x015FA440, 0x004169A0, 0x00414AD0, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00F8D910,
        calls: &[0x00F8D6E0, 0x00F8A700, 0x00F8C0D0, 0x010A6F60],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00F951E0,
        calls: &[
            0x00414560, 0x00414560, 0x00414560, 0x00414560, 0x00414560, 0x00414560, 0x00414560,
            0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00FA2770,
        calls: &[0x0064CF60],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00FA4920,
        calls: &[0x00B90090, 0x00B90440],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00FAE340,
        calls: &[0x0064CF60],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00FBE390,
        calls: &[0x0064CF60],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00FBEAC0,
        calls: &[
            0x00414560, 0x00414560, 0x00414560, 0x00414560, 0x00414560, 0x00414560, 0x00414560,
            0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00FC05F0,
        calls: &[0x0064CF60],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00FCABC0,
        calls: &[0x0064CF60],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00FD82F0,
        calls: &[
            0x00414610, 0x00414AD0, 0x00FD81F0, 0x00FD8220, 0x00B90440, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00FD8430,
        calls: &[0x00414AD0, 0x00B90090, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x00FF8E40,
        calls: &[
            0x00414610, 0x00414610, 0x00414610, 0x01025BF0, 0x00416CD0, 0x00F787D0, 0x00414480,
            0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x010283D0,
        calls: &[
            0x00414610, 0x01027E00, 0x01028340, 0x01028350, 0x01028080, 0x01028D30, 0x00414480,
            0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0103EF30,
        calls: &[0x00414610, 0x0103C810, 0x0103EF10, 0x0103EF20, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01046D30,
        calls: &[
            0x00414560, 0x00414560, 0x00414480, 0x00414480, 0x00414560, 0x00414480, 0x00417740,
            0x00414560, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01051510,
        calls: &[
            0x00414610, 0x00F60CE0, 0x00414AD0, 0x01051360, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01051B80,
        calls: &[0x0065B870, 0x0065B870, 0x0065B870, 0x00F8F2B0, 0x01052690],
        through_a_thunk: true,
    },
    Sequence {
        routine: 0x01055DC0,
        calls: &[
            0x0041B800, 0x00414480, 0x0041B800, 0x0041B800, 0x0041B800, 0x00414560, 0x0041B800,
            0x00417840, 0x0041B800, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01056150,
        calls: &[0x00414610, 0x00414610, 0x01054CD0, 0x00414480, 0x00414560],
        through_a_thunk: true,
    },
    Sequence {
        routine: 0x01063570,
        calls: &[
            0x00414560, 0x00414560, 0x00417740, 0x00414560, 0x00414480, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01063C30,
        calls: &[
            0x0041B800, 0x00414560, 0x0041B800, 0x0041B800, 0x0041B800, 0x0041B800, 0x00417840,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01083CA0,
        calls: &[
            0x00BF2C10, 0x005FCE30, 0x005FCE30, 0x005FCE30, 0x005FCE30, 0x005FCE30, 0x005FCE30,
            0x005FCE30, 0x005FCE30, 0x005FCE30, 0x0065B870, 0x010A7790,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01086BC0,
        calls: &[0x01086B70, 0x00416CD0, 0x00442620, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0109D230,
        calls: &[
            0x00F8EC20, 0x00F7D070, 0x00F8F570, 0x00F7D0F0, 0x0109E330, 0x0109E3D0, 0x00F90AC0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0109E760,
        calls: &[0x006D5120, 0x0043E130, 0x00414AD0, 0x00442620, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x010A42E0,
        calls: &[
            0x00410F20, 0x00410F20, 0x00410F20, 0x00410F20, 0x00410F20, 0x00410F20, 0x00410F20,
            0x00410F20, 0x00410F20,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x010A4370,
        calls: &[0x00414610, 0x00414610, 0x00414AD0, 0x00414AD0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x010ADC60,
        calls: &[
            0x005EA470, 0x005EA670, 0x015FECC0, 0x005EA880, 0x00410F20, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x010ADD60,
        calls: &[
            0x005EA470, 0x005EA670, 0x015FECC0, 0x005EA880, 0x00410F20, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x010ADE70,
        calls: &[
            0x005EA470, 0x005EA670, 0x015FECC0, 0x005EA880, 0x00410F20, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x010AF760,
        calls: &[
            0x00414610, 0x00441A10, 0x0043E1A0, 0x00416DB0, 0x00414560, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x010AF9D0,
        calls: &[0x00441A10, 0x0043E130, 0x00416DB0, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x010AFA90,
        calls: &[0x00441A10, 0x0043E130, 0x00416DB0, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x010B12E0,
        calls: &[0x00414610, 0x004B9860, 0x00410F20, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x010B2D80,
        calls: &[
            0x00414610, 0x00414610, 0x010AE9E0, 0x00414AD0, 0x004AE7E0, 0x010AF3B0, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x010B3FE0,
        calls: &[
            0x01D311C0, 0x01D326D0, 0x01D311C0, 0x01D326D0, 0x01D311C0, 0x01D326D0, 0x01D324E0,
            0x01D324E0, 0x01D311C0, 0x01D326D0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x010BB610,
        calls: &[0x004095C0, 0x004B6930, 0x004B6930],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x010C1040,
        calls: &[0x00B91170, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x010CB800,
        calls: &[0x00414610, 0x00B8F030, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x010CBE50,
        calls: &[
            0x0040C840, 0x010CBDA0, 0x010CBE10, 0x00416CD0, 0x00414AD0, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x010EE0C0,
        calls: &[0x01A8DCD0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x010FF9D0,
        calls: &[0x005FC570],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01106CE0,
        calls: &[0x00414AD0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01107490,
        calls: &[0x01107120, 0x004113F0, 0x00414AD0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x011076E0,
        calls: &[0x01107120, 0x004113F0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01107940,
        calls: &[0x01106CE0, 0x004113F0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0112A2C0,
        calls: &[0x0112A210],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0112B9B0,
        calls: &[
            0x005C05D0, 0x005BA6B0, 0x005BA700, 0x005C05D0, 0x005BA6B0, 0x005BA720, 0x0112BA60,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0112E240,
        calls: &[0x00414480, 0x00448450, 0x0112E140, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0112F7C0,
        calls: &[
            0x00414480, 0x004484B0, 0x0112E140, 0x0112EBB0, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01136E50,
        calls: &[
            0x00B8FD60, 0x00B909E0, 0x004169A0, 0x00416AD0, 0x00416910, 0x00415020, 0x00414480,
            0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01146430,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x011464D0,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0115C5B0,
        calls: &[
            0x00414560, 0x00414480, 0x00414560, 0x00414560, 0x00417740, 0x00414560, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01165E10,
        calls: &[0x01165D60, 0x0043FC50, 0x01165D60, 0x0043FC50, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01167FB0,
        calls: &[
            0x01167B10, 0x005FCE30, 0x005FC860, 0x005FDAB0, 0x005FDCB0, 0x005FD4E0, 0x005FD4E0,
            0x005FDAB0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0116C270,
        calls: &[0x0040C770, 0x0040C770, 0x0040C770, 0x0040C770, 0x0040C770],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0116D8D0,
        calls: &[0x00414610, 0x00416910, 0x00415020, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01175DF0,
        calls: &[
            0x0064E030, 0x0064E030, 0x0064E030, 0x0064E030, 0x0064E030, 0x0064E030, 0x00682EE0,
            0x00682EE0, 0x00682EE0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x011782B0,
        calls: &[0x00416CD0, 0x01B1DEF0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0119DB90,
        calls: &[
            0x00414560, 0x00414480, 0x00414560, 0x00414480, 0x00414480, 0x00414480, 0x00414480,
            0x00414560, 0x00417840, 0x00417840, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x011A4F60,
        calls: &[0x00416CD0, 0x01B1DEF0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x011A5080,
        calls: &[0x00416CD0, 0x01B1DEF0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x011A97F0,
        calls: &[0x00416CD0, 0x01B1DEF0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x011A98E0,
        calls: &[0x00416CD0, 0x01B1DEF0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x011AD1D0,
        calls: &[0x00416CD0, 0x01B1DEF0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x011AD2C0,
        calls: &[0x00416CD0, 0x01B1DEF0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x011D1240,
        calls: &[
            0x00414560, 0x00414560, 0x00414560, 0x00414560, 0x00414560, 0x00414560, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x011D2DA0,
        calls: &[0x00416CD0, 0x01B1DEF0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x011D2E90,
        calls: &[0x00416CD0, 0x01B1DEF0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x011D4840,
        calls: &[0x0064DBE0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0121ABF0,
        calls: &[
            0x00414560, 0x00414480, 0x00414560, 0x00414560, 0x00414560, 0x00414560, 0x00414560,
            0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x012213F0,
        calls: &[0x011D4970],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01221480,
        calls: &[0x011D4970],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01221510,
        calls: &[0x011D4970],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x012215A0,
        calls: &[0x011D4970],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01221630,
        calls: &[0x00416CD0, 0x01B1DEF0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01221750,
        calls: &[0x00416CD0, 0x01B1DEF0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01228040,
        calls: &[
            0x00414480, 0x00414480, 0x00414480, 0x00414480, 0x00414480, 0x00414480, 0x00414480,
            0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01233030,
        calls: &[0x00416CD0, 0x01B1DEF0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01233120,
        calls: &[0x00416CD0, 0x01B1DEF0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01233AF0,
        calls: &[
            0x0064DBE0, 0x0064DBE0, 0x0064DBE0, 0x0064DBE0, 0x0064DBE0, 0x0064DBE0, 0x0064DBE0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0123EF40,
        calls: &[0x00414610, 0x00410E60, 0x00414AD0, 0x004AE7E0, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x012429F0,
        calls: &[
            0x004170C0, 0x00416DC0, 0x004170C0, 0x00416E20, 0x004170C0, 0x004170C0, 0x004170C0,
            0x00416DC0, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01249060,
        calls: &[
            0x00414560, 0x0041B800, 0x00417840, 0x00414560, 0x0041B800, 0x00417840, 0x00414480,
            0x00419430, 0x0041B800,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0124B980,
        calls: &[
            0x00414560, 0x0041B800, 0x0041B800, 0x00417840, 0x00414560, 0x00417840, 0x0041B800,
            0x00414480, 0x00414560, 0x00417840, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0124C430,
        calls: &[
            0x00414560, 0x0041B800, 0x00414560, 0x0041B800, 0x00417840, 0x00414480, 0x0041B800,
            0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0124CC30,
        calls: &[
            0x00414560, 0x0041B800, 0x00414560, 0x00417840, 0x00414480, 0x00417840, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0124DCC0,
        calls: &[0x0124CE70, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0124FD80,
        calls: &[
            0x00414560, 0x0041B800, 0x00414480, 0x0041B800, 0x00414480, 0x0041B800, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01250950,
        calls: &[
            0x00414610, 0x00414610, 0x0043F750, 0x0124FE60, 0x0041B800, 0x00414480, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01250BC0,
        calls: &[
            0x00414610, 0x00414610, 0x00414610, 0x0043F750, 0x01250A90, 0x00414480, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01253800,
        calls: &[
            0x00414480, 0x0041B800, 0x00414560, 0x0041B800, 0x00414560, 0x0041B800, 0x00414480,
            0x00417840,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01266A00,
        calls: &[
            0x0041B800, 0x00414480, 0x00414520, 0x0041B800, 0x00414560, 0x0041B800, 0x00414480,
            0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01267C20,
        calls: &[
            0x00414560, 0x004145C0, 0x00414480, 0x004145C0, 0x00414560, 0x004145C0, 0x0041B800,
            0x0041B800, 0x0041B800, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01276BF0,
        calls: &[0x00414610, 0x0041B890, 0x0041B800, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0127C3C0,
        calls: &[
            0x0041B800, 0x00414480, 0x0041B800, 0x00414480, 0x00417840, 0x00414480, 0x00417840,
            0x00417840, 0x0041B800, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0127D130,
        calls: &[
            0x0041B800, 0x00414560, 0x00417840, 0x00414480, 0x00417840, 0x0041B800, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0127F610,
        calls: &[
            0x0041B800, 0x00414560, 0x00417840, 0x00414480, 0x0041B800, 0x00417840, 0x0041B800,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01292120,
        calls: &[
            0x0041B800, 0x00414560, 0x0041B800, 0x00414560, 0x0041B800, 0x0041B800, 0x0041B800,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01294150,
        calls: &[
            0x00414560, 0x0041B800, 0x00414560, 0x0041B800, 0x00414480, 0x00417840, 0x0041B800,
            0x00417840, 0x00417840, 0x0041B800, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01294E20,
        calls: &[
            0x004144D0, 0x00414520, 0x00414480, 0x00414480, 0x0041B800, 0x00414560, 0x00414560,
            0x0041B800, 0x0041B800, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01295730,
        calls: &[
            0x00414560, 0x0041B800, 0x00414560, 0x0041B800, 0x00414560, 0x0041B800, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x012966D0,
        calls: &[
            0x004144D0, 0x004145C0, 0x0041B800, 0x00414560, 0x0041B800, 0x0041B800, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01299750,
        calls: &[
            0x00417840, 0x00414480, 0x0041B800, 0x00414560, 0x00414560, 0x00417840, 0x0041B800,
            0x0041B800,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0129F200,
        calls: &[0x00414AD0, 0x01B15380, 0x00C44B60, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x012BB8B0,
        calls: &[
            0x00414520, 0x00414480, 0x00414560, 0x0041B800, 0x0041B800, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x012BC430,
        calls: &[0x004B6930, 0x0064B380, 0x0064B380, 0x0064CF60],
        through_a_thunk: true,
    },
    Sequence {
        routine: 0x012C28A0,
        calls: &[0x004095C0, 0x0040D200],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x012C34A0,
        calls: &[
            0x0041B800, 0x00414560, 0x0041B800, 0x00414560, 0x0041B800, 0x0041B800, 0x0041B800,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x012C3CA0,
        calls: &[
            0x00414560, 0x0041B800, 0x00414560, 0x0041B800, 0x00414480, 0x0041B800, 0x00414480,
            0x0041B800, 0x0041B800,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x012C87F0,
        calls: &[
            0x00417840, 0x00414560, 0x00414480, 0x00414480, 0x00414560, 0x0041B800, 0x00414560,
            0x00417840, 0x0041B800, 0x0041B800, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x012C92E0,
        calls: &[
            0x0041B800, 0x00414560, 0x00414560, 0x0041B800, 0x0041B800, 0x0041B800, 0x00414560,
            0x00414480, 0x00414480, 0x00417840, 0x0041B800,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x012C9F70,
        calls: &[
            0x00414560, 0x0041B800, 0x00414560, 0x0041B800, 0x00414560, 0x0041B800, 0x0041B800,
            0x00414560, 0x0041B800, 0x0041B800,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01300B50,
        calls: &[
            0x0041B800, 0x00414560, 0x0041B800, 0x00414560, 0x0041B800, 0x00414560, 0x0041B800,
            0x0041B800, 0x0041B800,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01303DF0,
        calls: &[
            0x0064DD90, 0x00414AD0, 0x0064DD90, 0x00414AD0, 0x0064DD90, 0x00414AD0, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0131C9F0,
        calls: &[0x00414610, 0x00414AD0, 0x004D1A50, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0131CA90,
        calls: &[0x00414610, 0x00414AD0, 0x004D1A50, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01327720,
        calls: &[
            0x00414480, 0x00414520, 0x00414590, 0x00414560, 0x00414560, 0x00414560, 0x00414560,
            0x00414560, 0x00414480, 0x00414480, 0x00414560, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01328EE0,
        calls: &[
            0x00414480, 0x00414520, 0x00414590, 0x00414560, 0x00414560, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01330F80,
        calls: &[
            0x00414610, 0x00414610, 0x01330E40, 0x00416DB0, 0x00414480, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0134D5E0,
        calls: &[
            0x00414480, 0x00414520, 0x00414590, 0x00414560, 0x00414560, 0x00414560, 0x0041B800,
            0x00414480, 0x00414480, 0x00414560, 0x00414480, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0134F830,
        calls: &[
            0x00414630, 0x00410E60, 0x00B959A0, 0x00B95A80, 0x004AE7E0, 0x0134F2E0, 0x0134F550,
            0x0134F800, 0x004144D0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01396500,
        calls: &[
            0x00414480, 0x00414520, 0x00414590, 0x00414480, 0x00414560, 0x00414560, 0x00414560,
            0x00414560, 0x00414560, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x013A9E80,
        calls: &[0x00414B50, 0x015FCA00, 0x00416CD0, 0x00416CD0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x013ACE60,
        calls: &[0x00414480, 0x00414480, 0x013ACF20, 0x00416CD0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x013AE5B0,
        calls: &[
            0x00414610, 0x00B08760, 0x00F42D60, 0x00848A70, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x013B24B0,
        calls: &[0x007FC180, 0x013AD290, 0x00410F20, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x013B6140,
        calls: &[0x013B9DC0, 0x013BC030, 0x013B6260, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x013B6E10,
        calls: &[0x013B9DC0, 0x013BC030, 0x013B71B0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x013B7CA0,
        calls: &[
            0x00414480, 0x0041B800, 0x00414560, 0x0041B800, 0x00414560, 0x0041B800, 0x00414480,
            0x00417840, 0x0041B800, 0x00417740,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x013B8120,
        calls: &[
            0x00414480, 0x0041B800, 0x0041B800, 0x00417840, 0x0041B800, 0x00417840, 0x00417840,
            0x0041B800, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x013B9680,
        calls: &[
            0x00414610, 0x0043E1A0, 0x00414B50, 0x004170C0, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x013BBF50,
        calls: &[0x00414610, 0x00442F70, 0x00416CD0, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x013C2350,
        calls: &[0x00414610, 0x004B6930, 0x00410F20, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x013C4720,
        calls: &[
            0x00414610, 0x00414AD0, 0x013B9A60, 0x013BD120, 0x013C4680, 0x013C5E90, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x013CD9A0,
        calls: &[0x013CD5C0, 0x00C0FAE0, 0x00C0DAD0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x013E3370,
        calls: &[
            0x00414560, 0x00414590, 0x00414560, 0x00414590, 0x00414480, 0x00414590, 0x00414560,
            0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x013E4510,
        calls: &[
            0x00414560, 0x00414590, 0x00414560, 0x00414590, 0x00414560, 0x00414590, 0x00414560,
            0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x013E4ED0,
        calls: &[
            0x00414560, 0x004144D0, 0x00414480, 0x00414590, 0x00414560, 0x00414590, 0x00414560,
            0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x013E7530,
        calls: &[
            0x00414480, 0x00414480, 0x00414480, 0x00414480, 0x00414560, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x013FD780,
        calls: &[
            0x004144D0, 0x00414560, 0x004144D0, 0x00414480, 0x004144D0, 0x00414560, 0x00414560,
            0x00414480, 0x00414480, 0x00414560, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x013FE470,
        calls: &[
            0x004144D0, 0x00414480, 0x004144D0, 0x00414480, 0x004144D0, 0x00414560, 0x00414560,
            0x00414560, 0x00414560, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01409810,
        calls: &[0x00849E90, 0x0065B870, 0x0065B870],
        through_a_thunk: true,
    },
    Sequence {
        routine: 0x0140F520,
        calls: &[0x0040D200, 0x00B0B020, 0x0140B070, 0x0140E330],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0141A6C0,
        calls: &[0x00414610, 0x01B21190, 0x00410F20, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0141FAF0,
        calls: &[
            0x016E9E20, 0x016E9CD0, 0x016EBDD0, 0x016EBDD0, 0x016ECBF0, 0x016EBE60, 0x016EC850,
            0x016EBE60, 0x016ECA70, 0x016EBDD0, 0x016EC970, 0x016E9F40,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0141FF10,
        calls: &[
            0x016E9E20, 0x016E9CD0, 0x016EBE60, 0x016EC850, 0x016EBDD0, 0x016EBE60, 0x016ECA70,
            0x016EBDD0, 0x016ECBF0, 0x016EBDD0, 0x016EC970, 0x016E9F40,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0143CA00,
        calls: &[
            0x004144D0, 0x00414480, 0x004144D0, 0x00414560, 0x00414560, 0x00414560, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0143E6B0,
        calls: &[
            0x00414480, 0x00414560, 0x00414560, 0x00414520, 0x00414480, 0x00414590, 0x00414480,
            0x004144D0, 0x004144D0, 0x00414480, 0x004144D0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0143ED50,
        calls: &[
            0x00414480, 0x00414560, 0x00414560, 0x00414520, 0x00414480, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0143F2E0,
        calls: &[
            0x004144D0, 0x00414560, 0x00414560, 0x00414480, 0x004144D0, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0143FF30,
        calls: &[
            0x00414560, 0x00414560, 0x004144D0, 0x00414560, 0x004144D0, 0x00414560, 0x004144D0,
            0x00414560, 0x004144D0, 0x00414560, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x014406A0,
        calls: &[
            0x00414560, 0x00414560, 0x004144D0, 0x00414560, 0x004144D0, 0x00414560, 0x004144D0,
            0x00414560, 0x004144D0, 0x00414560, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0146D040,
        calls: &[
            0x00410E60, 0x004B9F40, 0x00A39860, 0x004B6DC0, 0x00603F70, 0x00410F20, 0x00410F20,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0146FE10,
        calls: &[0x00441920, 0x00442F70, 0x0064DE00, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01479400,
        calls: &[0x00414480, 0x01477740, 0x00414AD0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x014794C0,
        calls: &[0x00414610, 0x00414610, 0x01479570, 0x00414480, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0147C530,
        calls: &[
            0x0147C450, 0x00416CD0, 0x0147C4C0, 0x00416CD0, 0x00414560, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0147D0C0,
        calls: &[0x0147D070, 0x0147D070, 0x0147D070, 0x0147D070],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0147D130,
        calls: &[0x004B6930, 0x00F30500, 0x004113F0, 0x00410F20, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0148B1B0,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0148B250,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01493900,
        calls: &[
            0x017E3010, 0x005FC860, 0x00B89270, 0x00B8E520, 0x00416CD0, 0x0064DE00, 0x00414560,
        ],
        through_a_thunk: true,
    },
    Sequence {
        routine: 0x014AD7E0,
        calls: &[
            0x00414560, 0x0041B800, 0x00414560, 0x0041B800, 0x00414560, 0x0041B800, 0x00414560,
            0x00417740, 0x00417840, 0x0041B800,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x014B4650,
        calls: &[0x00BFAA50, 0x00BFAA40, 0x00442F70, 0x0064DE00, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x014BE4E0,
        calls: &[
            0x00417840, 0x0041B800, 0x00414560, 0x0041B800, 0x0041B800, 0x0041B800, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x014BEA60,
        calls: &[
            0x00417840, 0x0041B800, 0x00414560, 0x0041B800, 0x0041B800, 0x0041B800, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x014C2800,
        calls: &[
            0x00414610, 0x0044F900, 0x0044F900, 0x0044F900, 0x005B8960, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x014CDD40,
        calls: &[0x00415430, 0x00416880, 0x01B05000, 0x00414480, 0x004144D0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x014D2ED0,
        calls: &[0x00409570, 0x00409570, 0x00409570, 0x00409570, 0x00409570],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x014D4D40,
        calls: &[0x00409570, 0x00409570, 0x00409570, 0x00409570, 0x00409570],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x014DC280,
        calls: &[0x014DB750, 0x017BF050, 0x00409570, 0x01D38290, 0x014DC240],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x014E4150,
        calls: &[
            0x00414480, 0x00414590, 0x00414560, 0x00414590, 0x00414560, 0x00414590, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x014E7480,
        calls: &[
            0x00414590, 0x00414480, 0x00414560, 0x004144D0, 0x00414560, 0x004144D0, 0x00414480,
            0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x014EBF20,
        calls: &[0x004167D0, 0x01B21480, 0x00410F20, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x014F3720,
        calls: &[
            0x00414560, 0x00414480, 0x00414560, 0x00414480, 0x00414560, 0x004144D0, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x014F71C0,
        calls: &[
            0x00414480, 0x00414520, 0x00414590, 0x00414560, 0x00414560, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x014F9F20,
        calls: &[0x01AA16F0, 0x014F9D60, 0x014F9DC0, 0x01AA3960],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01506E40,
        calls: &[0x010F5A80, 0x01506C40],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x015288B0,
        calls: &[
            0x017CA500, 0x016F5570, 0x01B077A0, 0x016F66E0, 0x00416CD0, 0x01664230, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0152A8C0,
        calls: &[
            0x017CA500, 0x016F5570, 0x01B077A0, 0x016F66E0, 0x00416CD0, 0x01664230, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0152FB90,
        calls: &[0x00BFAA50, 0x00BFAA40, 0x00442F70, 0x0064DE00, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01538520,
        calls: &[
            0x00414480, 0x00414520, 0x00414590, 0x00414560, 0x00414560, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01541370,
        calls: &[0x01D347D0, 0x0153F480, 0x0153F480, 0x0153F480, 0x0153F480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01555FE0,
        calls: &[
            0x00414480, 0x004144D0, 0x00414560, 0x00414590, 0x00414560, 0x004144D0, 0x00414560,
            0x00414560, 0x00414560, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01557920,
        calls: &[
            0x00414560, 0x00414480, 0x004144D0, 0x00414560, 0x00414480, 0x00414480, 0x00414560,
            0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0155C550,
        calls: &[
            0x00414560, 0x00417840, 0x00414560, 0x00414590, 0x00414590, 0x00414560, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0155C800,
        calls: &[0x00414610, 0x00416CD0, 0x00416CD0, 0x00414560, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0155E290,
        calls: &[
            0x00414610, 0x004B84C0, 0x004414C0, 0x00414B50, 0x0160B740, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01560C90,
        calls: &[
            0x00414560, 0x004144D0, 0x00414480, 0x004144D0, 0x00414480, 0x004144D0, 0x00414480,
            0x004144D0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01566FF0,
        calls: &[
            0x015FCDF0, 0x00414AD0, 0x015FCD70, 0x00414AD0, 0x00B96DF0, 0x00B96DF0, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0156A5C0,
        calls: &[0x00414610, 0x00416BA0, 0x0156A840, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0156A670,
        calls: &[0x00414610, 0x0156A860, 0x00416BA0, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0156A720,
        calls: &[0x00414610, 0x00416BA0, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0156A880,
        calls: &[
            0x00416CD0, 0x00B96DF0, 0x0156A380, 0x0156A380, 0x01603440, 0x01603440, 0x0156A9C0,
            0x0156AA70, 0x01603440, 0x0156A490,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0157EEE0,
        calls: &[
            0x0041B910, 0x0041B910, 0x01583170, 0x01584760, 0x00417740, 0x00417840,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0157EFB0,
        calls: &[0x0157F930, 0x004B9860, 0x0157F0A0, 0x00410F20, 0x00410F20],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01581010,
        calls: &[
            0x00414560, 0x00414560, 0x00417740, 0x00417840, 0x00417840, 0x00414560, 0x00417840,
            0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0158ADA0,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0158AE40,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0158B330,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0158B3D0,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x015A1960,
        calls: &[0x015A2510, 0x015A2520],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x015B1D60,
        calls: &[0x0040D200, 0x015B3C40],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x015B3AA0,
        calls: &[0x0040D200, 0x015B3C40],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x015BF370,
        calls: &[0x00414610, 0x00414610, 0x00414610, 0x00450070, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x015BF4E0,
        calls: &[0x004167D0, 0x00416740, 0x004167D0, 0x00416740, 0x00414560],
        through_a_thunk: true,
    },
    Sequence {
        routine: 0x015C0210,
        calls: &[0x015BFF30, 0x015BF270, 0x015BFAD0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x015C33C0,
        calls: &[0x015BF270, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x015D1E50,
        calls: &[
            0x00417840, 0x00414520, 0x00417840, 0x00417840, 0x00414520, 0x00417840, 0x00414520,
            0x004144D0, 0x004144D0, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x015D4AE0,
        calls: &[
            0x00417840, 0x00414560, 0x00417740, 0x00414480, 0x00417740, 0x00414560, 0x00417740,
            0x00414480, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x015D9770,
        calls: &[0x00441820, 0x00416AD0, 0x00416740, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x015DA4A0,
        calls: &[0x00441A10, 0x015BF270, 0x004170C0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x015E09B0,
        calls: &[0x015CA1C0, 0x015CA240, 0x015DCE90, 0x015D84A0, 0x015DCFC0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x015E4000,
        calls: &[0x00410E60, 0x004095C0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x015F1770,
        calls: &[
            0x004144D0, 0x00414480, 0x004144D0, 0x00414480, 0x004144D0, 0x00414480, 0x00414590,
            0x004144D0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x015F21C0,
        calls: &[
            0x00414610, 0x00414610, 0x00442620, 0x00442620, 0x00427810, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x015F26E0,
        calls: &[0x00414610, 0x01771420, 0x015F27D0, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x015F5620,
        calls: &[
            0x00414610, 0x00417580, 0x00414B50, 0x00417C40, 0x00417740, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x015F6CD0,
        calls: &[
            0x00417740, 0x00414560, 0x00417740, 0x00414560, 0x00414480, 0x00414480, 0x00414590,
            0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x015F6F60,
        calls: &[
            0x014CDD20, 0x014CDCE0, 0x014CDCF0, 0x015FCD70, 0x00416CD0, 0x015F6DB0, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x015FCE80,
        calls: &[
            0x00414610, 0x015FCD70, 0x015FCDF0, 0x00B96DF0, 0x00B96DF0, 0x00414560, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x015FCF20,
        calls: &[
            0x00414610, 0x00414610, 0x01574660, 0x004134C0, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x015FCFD0,
        calls: &[
            0x00414610, 0x00414610, 0x015749B0, 0x004134C0, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x015FD240,
        calls: &[
            0x00414610, 0x0043E1A0, 0x00414B50, 0x004170C0, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x015FEBC0,
        calls: &[0x00414610, 0x00416CD0, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x015FF970,
        calls: &[
            0x00414480, 0x004144D0, 0x00414560, 0x00414480, 0x00414560, 0x00414480, 0x004144D0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01604AB0,
        calls: &[
            0x00414610, 0x017FF4F0, 0x01B22130, 0x00416CD0, 0x00414AD0, 0x00414560, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x016079E0,
        calls: &[
            0x00414560, 0x00414560, 0x00414560, 0x00414560, 0x00414480, 0x00414480, 0x00414560,
            0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01609A70,
        calls: &[0x00414610, 0x0043E130, 0x00416DB0, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0160A710,
        calls: &[0x00414630, 0x01609DA0, 0x0160A330, 0x004144D0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0160A7A0,
        calls: &[0x00414630, 0x01609DA0, 0x0160AA50, 0x004144D0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0160A830,
        calls: &[0x00414630, 0x01609DA0, 0x0160AA50, 0x004144D0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0160B740,
        calls: &[
            0x00414610, 0x00410E60, 0x004B8BA0, 0x004B9DF0, 0x00410F20, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01615860,
        calls: &[0x01615570, 0x0043F750, 0x00416CD0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x016159E0,
        calls: &[
            0x00414610, 0x01615910, 0x0043FC00, 0x0043FC00, 0x01615860, 0x00414560, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x016162B0,
        calls: &[0x01618E70, 0x01618E70, 0x01615DF0, 0x01615DF0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01619810,
        calls: &[
            0x004B89E0, 0x004168E0, 0x01B20E90, 0x004168E0, 0x01B20E90, 0x004B89E0, 0x004145C0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x016198D0,
        calls: &[
            0x004B84C0, 0x01B20F00, 0x004168B0, 0x01B20F00, 0x004168B0, 0x004B84C0, 0x004145C0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0161CA20,
        calls: &[
            0x0043F750, 0x0043F750, 0x00416CD0, 0x00414AD0, 0x00414560, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0161F260,
        calls: &[0x004095C0, 0x0040D200],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01625D50,
        calls: &[
            0x00414610, 0x00416CD0, 0x015748D0, 0x004134C0, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01626F30,
        calls: &[0x01618E70, 0x01618E70, 0x01615DF0, 0x01615DF0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01628390,
        calls: &[0x00414610, 0x00416910, 0x0161EA50, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0162EB80,
        calls: &[0x0162EAE0, 0x01612510, 0x00409A70, 0x00409A70, 0x0162EAA0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x016354B0,
        calls: &[0x01618E70, 0x01618E70, 0x01615DF0, 0x01615DF0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x016374B0,
        calls: &[
            0x00414610, 0x00416910, 0x016261E0, 0x01698550, 0x01698500, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x016414B0,
        calls: &[
            0x00414520, 0x004145C0, 0x00414560, 0x004145C0, 0x00414560, 0x004145C0, 0x00414480,
            0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x016432F0,
        calls: &[
            0x00414610, 0x00414610, 0x00414AD0, 0x00414AD0, 0x00416CD0, 0x01602E30, 0x00414480,
            0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01643F90,
        calls: &[0x0043F750, 0x0043F750, 0x0043F750, 0x00416CD0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x016479D0,
        calls: &[0x00414610, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01648AF0,
        calls: &[
            0x00414610, 0x00410E60, 0x016485D0, 0x01648740, 0x00410F20, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01648BF0,
        calls: &[0x01B218C0, 0x00414AD0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01648CA0,
        calls: &[0x01B218C0, 0x01B217F0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x016493C0,
        calls: &[
            0x00414610, 0x00414610, 0x01619680, 0x004AE7E0, 0x01619C50, 0x004AE7E0, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x016502E0,
        calls: &[0x00B92140, 0x016EE260, 0x016EA6C0, 0x0164EF00, 0x00B92140],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x016633D0,
        calls: &[
            0x0165DFB0, 0x0165DFB0, 0x0165DFB0, 0x0165DFB0, 0x0165DFB0, 0x0165DFB0, 0x0165DFB0,
            0x0165DFB0, 0x0165E0C0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01677AD0,
        calls: &[0x01B0FB20, 0x00B8FD60, 0x00416BA0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01694060,
        calls: &[
            0x00414560, 0x004144D0, 0x00414480, 0x004144D0, 0x00414480, 0x004144D0, 0x00414480,
            0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x016985B0,
        calls: &[
            0x004095C0, 0x0040D200, 0x00414CE0, 0x00409570, 0x00414CE0, 0x00442450, 0x004095F0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x016986C0,
        calls: &[0x004095C0, 0x0040D200, 0x004095F0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x016A78D0,
        calls: &[
            0x00414560, 0x00414560, 0x00414590, 0x00414560, 0x00414590, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x016AAEE0,
        calls: &[
            0x00C43C40, 0x0040BDD0, 0x00526810, 0x00C43C40, 0x0040BCD0, 0x00526970,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x016AAF70,
        calls: &[
            0x00C43C40, 0x0040BCD0, 0x00526810, 0x00C43C40, 0x0040BDD0, 0x00526970,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x016AB020,
        calls: &[
            0x00C43C40, 0x0040BDD0, 0x00C43C40, 0x0040BCD0, 0x005268C0, 0x00526A20, 0x00C43C40,
            0x0040BCD0, 0x005268C0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x016AB120,
        calls: &[
            0x00C44460, 0x00C44720, 0x00C444B0, 0x00C44500, 0x00C44790, 0x016AADD0, 0x00C44460,
            0x00C44790,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x016AB350,
        calls: &[
            0x00C44460, 0x00C44720, 0x00C44720, 0x00C44500, 0x00C449C0, 0x00C444B0, 0x016AADD0,
            0x00C44460, 0x00C44720,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x016AB430,
        calls: &[
            0x00C44720, 0x00C44500, 0x00C449C0, 0x00C444B0, 0x016AADD0, 0x00C44460, 0x00C44720,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x016AB520,
        calls: &[
            0x00526970, 0x00C43C40, 0x0040BCD0, 0x00526810, 0x00C43C40, 0x0040BDD0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x016AB5B0,
        calls: &[
            0x00526810, 0x00C43C40, 0x0040BCD0, 0x00526970, 0x00C43C40, 0x0040BDD0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x016AB640,
        calls: &[
            0x00526970, 0x00526810, 0x00C43C40, 0x0040BCD0, 0x00C43C40, 0x0040BDD0, 0x00526810,
            0x00C43C40, 0x0040BCD0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x016AB870,
        calls: &[
            0x00C444B0, 0x00C44500, 0x00C44790, 0x016AADD0, 0x00C44460, 0x00C44790,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x016ACA40,
        calls: &[
            0x00414610, 0x00414610, 0x0064DE00, 0x00416BA0, 0x00C54370, 0x0067FCE0, 0x0080CC70,
            0x00414480, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x016ADEC0,
        calls: &[
            0x00414560, 0x004144D0, 0x00414560, 0x004144D0, 0x00414560, 0x00414590, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x016B9120,
        calls: &[
            0x00414630, 0x00416880, 0x00450070, 0x00415DD0, 0x00414560, 0x004144D0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x016B93A0,
        calls: &[0x00B8FE00, 0x00415DD0, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x016BAE20,
        calls: &[0x016BAD90, 0x004154B0, 0x00415560, 0x016A4200],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x016BFB30,
        calls: &[
            0x00414560, 0x00414590, 0x004144D0, 0x004144D0, 0x00414480, 0x00414590, 0x00414560,
            0x00414590, 0x00414560, 0x00414590, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x016D4E80,
        calls: &[
            0x0064CC50, 0x0064CBF0, 0x006604B0, 0x005FD4E0, 0x005FD4E0, 0x005FD4E0, 0x0064DBE0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x016F1C30,
        calls: &[0x004095C0, 0x00597E50],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x016FA620,
        calls: &[
            0x00414480, 0x004144D0, 0x00414480, 0x00414590, 0x00414480, 0x004144D0, 0x00414480,
            0x00414590, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x016FB1D0,
        calls: &[
            0x00414480, 0x004144D0, 0x00414480, 0x00414520, 0x004144D0, 0x00414560, 0x00414590,
            0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x016FB350,
        calls: &[
            0x00414630, 0x00414610, 0x00416880, 0x00414480, 0x004144D0, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x016FB460,
        calls: &[
            0x00414630, 0x00414610, 0x00416880, 0x00414480, 0x004144D0, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x016FC360,
        calls: &[0x00414480, 0x00414560, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01701140,
        calls: &[
            0x00414480, 0x004144D0, 0x00414480, 0x004144D0, 0x00414480, 0x004144D0, 0x00414560,
            0x00414560, 0x00414480, 0x00414560, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01704B80,
        calls: &[
            0x00414610, 0x00414610, 0x00416CD0, 0x0044D490, 0x004134C0, 0x00414480, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01709E70,
        calls: &[
            0x00414610, 0x00414610, 0x0064DE00, 0x00416BA0, 0x00C54370, 0x0067FCE0, 0x0080CC70,
            0x00414480, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0172A750,
        calls: &[
            0x00414560, 0x0041B800, 0x00414480, 0x0041B800, 0x0041B800, 0x00414480, 0x0041B800,
            0x0041B800, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0172DFC0,
        calls: &[
            0x0172A910, 0x0172A920, 0x004169A0, 0x0172BA20, 0x00416910, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0172F320,
        calls: &[
            0x0172A2B0, 0x0172A910, 0x0172A920, 0x00415020, 0x0172A910, 0x0172A920, 0x00415020,
            0x00410F20,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01745CB0,
        calls: &[
            0x0041B800, 0x00414480, 0x00417840, 0x00414480, 0x00414480, 0x0041B800, 0x00414480,
            0x0041B800, 0x0041B800,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01747200,
        calls: &[
            0x00414560, 0x00417840, 0x00414480, 0x0041B800, 0x00414480, 0x0041B800, 0x0041B800,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01754740,
        calls: &[
            0x0041B800, 0x00414480, 0x0041B800, 0x00414480, 0x0041B800, 0x00414480, 0x00414560,
            0x00414480, 0x0041B800, 0x0041B800,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x017564A0,
        calls: &[
            0x00414480, 0x0041B800, 0x0041B800, 0x00414560, 0x0041B800, 0x0041B800, 0x00414480,
            0x00414480, 0x0041B800, 0x0041B800, 0x0041B800,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0175C620,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0175C6C0,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01769F10,
        calls: &[
            0x00414520, 0x004144D0, 0x00414520, 0x004144D0, 0x00414480, 0x00414520, 0x004144D0,
            0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0176C1A0,
        calls: &[0x01D30B30, 0x00410F20],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0176F5D0,
        calls: &[
            0x00414560, 0x00414560, 0x004144D0, 0x00414560, 0x004144D0, 0x00414560, 0x004144D0,
            0x00414560, 0x004144D0, 0x00414560, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0176FCD0,
        calls: &[
            0x004144D0, 0x00414560, 0x004144D0, 0x00414480, 0x00414480, 0x004144D0, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01772040,
        calls: &[
            0x00414610, 0x00414AD0, 0x00416CD0, 0x00440A20, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x017737A0,
        calls: &[
            0x0043F750, 0x0043F750, 0x0043F750, 0x0043F750, 0x00416CD0, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01773E60,
        calls: &[
            0x00414610, 0x00410E60, 0x004B9F40, 0x004B89E0, 0x004B8BA0, 0x00410F20, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x017741E0,
        calls: &[0x00414610, 0x01773FD0, 0x01773E60, 0x004B89E0, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01774860,
        calls: &[0x004B6DC0, 0x004B84C0, 0x004B84C0, 0x004B84C0, 0x004B6DC0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x017770E0,
        calls: &[
            0x00414610, 0x00414AD0, 0x00416CD0, 0x00440A20, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01794C00,
        calls: &[
            0x01794D60, 0x0082A6C0, 0x0082A6C0, 0x0082A6C0, 0x0082A6C0, 0x0082A6C0, 0x0082A6C0,
            0x0082A6C0, 0x0082A6C0, 0x0082A6C0, 0x0082A6C0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01794CB0,
        calls: &[
            0x01794D60, 0x0082A6C0, 0x0082A6C0, 0x0082A6C0, 0x0082A6C0, 0x0082A6C0, 0x0082A6C0,
            0x0082A6C0, 0x0082A6C0, 0x0082A6C0, 0x0082A6C0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x017970E0,
        calls: &[
            0x00C3C560, 0x01797160, 0x00C3F030, 0x00C3F350, 0x00C3F1C0, 0x01798270, 0x017989E0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01799A80,
        calls: &[0x005FD4E0, 0x005FD6D0, 0x005FDAB0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0179B610,
        calls: &[
            0x00414480, 0x00414560, 0x00414480, 0x00414480, 0x00414480, 0x00414480, 0x00414560,
            0x00414560, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x017A4E70,
        calls: &[
            0x0043F750, 0x00416BA0, 0x006DEE40, 0x006DCBD0, 0x006DC990, 0x00410F20, 0x00410F20,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x017A64F0,
        calls: &[
            0x007D5AD0, 0x0043F750, 0x00416BA0, 0x006DEE40, 0x006DD070, 0x006DCBD0, 0x006DC990,
            0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x017A6600,
        calls: &[
            0x0043F750, 0x00416BA0, 0x006DEE40, 0x006DD070, 0x006DCBD0, 0x006DC990, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x017AEC60,
        calls: &[0x00498310, 0x017AE4E0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x017B1510,
        calls: &[0x00414FF0, 0x00498310],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x017B1D00,
        calls: &[0x00498350, 0x017AD620, 0x00498350],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x017B3090,
        calls: &[0x00498310, 0x00498310],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x017B5040,
        calls: &[0x00498310, 0x017B4F80],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x017BCD70,
        calls: &[0x017BDC30],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x017BDC30,
        calls: &[0x017FF2C0, 0x00414480, 0x004B6930],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x017CF770,
        calls: &[
            0x017CF580, 0x017CF580, 0x017CF580, 0x017CF580, 0x017CF580, 0x017CF580,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x017CF910,
        calls: &[0x017CF580, 0x017CF580, 0x017CF580, 0x017CF580, 0x017CF580],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x017D8100,
        calls: &[0x017D7270, 0x017D7270, 0x017D7270, 0x017D7F30],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x017DE1E0,
        calls: &[0x017DCB00, 0x017DCB00, 0x017DCB00, 0x017DCB00],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x017F43B0,
        calls: &[0x017F3FA0, 0x017F3FA0, 0x017F3FA0, 0x017F3FA0, 0x00B956D0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x017F5F80,
        calls: &[
            0x004144D0, 0x00414560, 0x004144D0, 0x00414560, 0x004144D0, 0x00414560, 0x004144D0,
            0x00414560, 0x004144D0, 0x00414560, 0x004144D0, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x017FD3B0,
        calls: &[
            0x00414630, 0x00416880, 0x004170C0, 0x00415AD0, 0x00414480, 0x004144D0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x017FD9F0,
        calls: &[
            0x004144D0, 0x00414480, 0x004144D0, 0x00414480, 0x00414590, 0x00414560, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x017FE590,
        calls: &[0x00415DD0, 0x017FE450, 0x004144D0, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01802EA0,
        calls: &[0x0043F750, 0x00416CD0, 0x00416EA0, 0x00414DE0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01804140,
        calls: &[
            0x0043E5A0, 0x00416CD0, 0x0043E5A0, 0x00416BA0, 0x004170C0, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01807450,
        calls: &[0x004B6DA0, 0x00416660, 0x00415F70, 0x00414520],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01809A30,
        calls: &[
            0x0045AE90, 0x004BA470, 0x00415AB0, 0x00414CD0, 0x004B6DC0, 0x0180AA30, 0x00410F20,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0180D700,
        calls: &[
            0x004169F0, 0x004095C0, 0x004B6DC0, 0x00414DE0, 0x004C8670, 0x004095F0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0180D780,
        calls: &[
            0x00414CB0, 0x004095C0, 0x00416740, 0x004C86E0, 0x004B6DC0, 0x004095F0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0180FB80,
        calls: &[
            0x004169F0, 0x00414DE0, 0x004169F0, 0x00414DE0, 0x00442B00, 0x00414480,
        ],
        through_a_thunk: true,
    },
    Sequence {
        routine: 0x0181C9A0,
        calls: &[
            0x0181CCD0, 0x0064DBE0, 0x0181CCF0, 0x006E6840, 0x0181C950, 0x006E6860, 0x0181CC80,
            0x008059A0, 0x0181CA40, 0x0080CC70,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0181DF10,
        calls: &[0x0043F750, 0x00416CD0, 0x00416EA0, 0x00414DE0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0181EA70,
        calls: &[
            0x0043E5A0, 0x00416CD0, 0x0043E5A0, 0x00416BA0, 0x004170C0, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01820B90,
        calls: &[
            0x00414AD0, 0x01820CC0, 0x01820DD0, 0x00414AD0, 0x00414480, 0x00414AD0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x018248A0,
        calls: &[0x00414610, 0x0043FC00, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01824920,
        calls: &[0x00414610, 0x00448650, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x018249B0,
        calls: &[0x00414610, 0x0044B200, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01830210,
        calls: &[0x0046F3B0, 0x00468820, 0x00460BA0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x018302B0,
        calls: &[0x0046F360, 0x00468820, 0x00460BA0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01830350,
        calls: &[0x0046F380, 0x00468820, 0x00460BA0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x018303F0,
        calls: &[0x0046F3D0, 0x00468820, 0x00460BA0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01830490,
        calls: &[0x0046F340, 0x00468820, 0x00460BA0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01830530,
        calls: &[0x0046F320, 0x00468820, 0x00460BA0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01831750,
        calls: &[0x004634B0, 0x0184B910, 0x004113D0, 0x00468820, 0x00460BA0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01833A30,
        calls: &[
            0x00414560, 0x0041B800, 0x00460BA0, 0x0041B800, 0x00417740, 0x00417840, 0x004145C0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01836EB0,
        calls: &[0x00414480, 0x00414480, 0x0183DA20, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01839890,
        calls: &[
            0x00414480, 0x00460BA0, 0x00414560, 0x00460BA0, 0x00460BA0, 0x00414480, 0x00414560,
            0x00460BA0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0183D050,
        calls: &[
            0x01836FD0, 0x0184F010, 0x01847420, 0x0181E3C0, 0x01838880, 0x01836FD0, 0x0184EE20,
            0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01849B00,
        calls: &[
            0x00460BA0, 0x00414480, 0x00460BA0, 0x00414480, 0x00460BA0, 0x00460BA0, 0x00460BA0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0184A290,
        calls: &[
            0x00414610, 0x004170C0, 0x00416E20, 0x00416CD0, 0x0184A4F0, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0184A3C0,
        calls: &[
            0x00414610, 0x004170C0, 0x00416E20, 0x00416CD0, 0x0184A560, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0184B6D0,
        calls: &[0x00414AD0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0184CFA0,
        calls: &[0x0072D710],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0184D9D0,
        calls: &[0x00410AE0, 0x00468700, 0x00411550, 0x00460BA0, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0185A730,
        calls: &[0x00A3C5C0, 0x00A39E90, 0x0185A7A0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01860C30,
        calls: &[0x00414610, 0x00414AD0, 0x0044D530, 0x004134C0, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01862B70,
        calls: &[0x00410E60, 0x004B6DC0, 0x00410F20],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01867BA0,
        calls: &[0x00609F90, 0x0060A330, 0x00609F90],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01868AF0,
        calls: &[
            0x00410AE0, 0x00442F70, 0x0044D490, 0x004134C0, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01868BF0,
        calls: &[
            0x00410AE0, 0x00442F70, 0x0044D490, 0x004134C0, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01868CF0,
        calls: &[
            0x00410AE0, 0x00442F70, 0x0044D490, 0x004134C0, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01869270,
        calls: &[0x00603F70, 0x00410F20],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01870AA0,
        calls: &[
            0x00414520, 0x00414480, 0x00414520, 0x00414480, 0x00414520, 0x00414480, 0x00414520,
            0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01871210,
        calls: &[0x0064DD90, 0x004168E0, 0x00414520, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01871650,
        calls: &[0x0068B1B0, 0x0065BB80, 0x0064C650, 0x0068BE70],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x018738F0,
        calls: &[0x00415D10, 0x018738D0, 0x00414DF0, 0x018738D0, 0x00414DF0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01876900,
        calls: &[0x00410E60, 0x01873A10, 0x00416880, 0x00410F20, 0x004144D0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01880190,
        calls: &[0x005FD4E0, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01884B40,
        calls: &[0x0196BF40, 0x0040C840, 0x0040C840, 0x0196BAA0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01884D60,
        calls: &[0x0196B7F0, 0x0040C770, 0x0040C770, 0x0196BAA0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x018931F0,
        calls: &[0x005FC570, 0x005FCC70, 0x005FCC80, 0x005FCE00, 0x00410F20],
        through_a_thunk: true,
    },
    Sequence {
        routine: 0x01893530,
        calls: &[0x005FC570, 0x005FCE30, 0x005FCC70, 0x005FCC80, 0x00410F20],
        through_a_thunk: true,
    },
    Sequence {
        routine: 0x0189A830,
        calls: &[0x0065F2F0, 0x005FD4E0, 0x005FD4E0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x018B7CE0,
        calls: &[
            0x018B7DF0, 0x018B80F0, 0x01804490, 0x018B7680, 0x0197F570, 0x01888160,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x018B9FB0,
        calls: &[
            0x018039F0, 0x01803ED0, 0x0180D940, 0x01803ED0, 0x0180D940, 0x01803ED0, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x018BB4B0,
        calls: &[0x01979E40, 0x00441640, 0x00414AD0, 0x00410F20, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x018BC250,
        calls: &[
            0x00414560, 0x00460BA0, 0x00414480, 0x00460BA0, 0x00414480, 0x00460BA0, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x018BD330,
        calls: &[
            0x01810FA0, 0x018039F0, 0x018039A0, 0x018039F0, 0x018140F0, 0x018039F0, 0x018B7DF0,
            0x00410F20,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x018D4390,
        calls: &[0x018D3FE0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x018D43E0,
        calls: &[0x00414610, 0x00414610, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x018EA360,
        calls: &[0x005FBFA0, 0x00468530, 0x00411550, 0x00460BA0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0195B6D0,
        calls: &[
            0x00414560, 0x00460BA0, 0x00414560, 0x00460BA0, 0x00414560, 0x00460BA0, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0195B870,
        calls: &[
            0x01958B10, 0x01958E60, 0x01958E80, 0x01958E40, 0x0195A020, 0x00410F20, 0x005FFA40,
            0x0180C8F0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0195C0D0,
        calls: &[0x01810040, 0x00526FF0, 0x00526FF0],
        through_a_thunk: true,
    },
    Sequence {
        routine: 0x0195CC60,
        calls: &[
            0x00414480, 0x00460BA0, 0x00414560, 0x00460BA0, 0x00414560, 0x00460BA0, 0x00414480,
            0x0041B800, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01962880,
        calls: &[0x0195CE10, 0x0194E140, 0x005FC570, 0x01958B10],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01962920,
        calls: &[0x0195CD40, 0x00410F20, 0x00410F20, 0x00410F20],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01963380,
        calls: &[
            0x004145C0, 0x00460BA0, 0x00414520, 0x00417840, 0x004145C0, 0x004144D0, 0x004145C0,
            0x00460BA0, 0x004145C0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01963A90,
        calls: &[
            0x00414480, 0x00460BA0, 0x00414480, 0x004144D0, 0x00460BA0, 0x00414560, 0x00414520,
            0x004145C0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x019642D0,
        calls: &[
            0x004144D0, 0x00414560, 0x00460BA0, 0x00414480, 0x00414480, 0x00414560, 0x004144D0,
            0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01965540,
        calls: &[
            0x00460BA0, 0x00414480, 0x00460BA0, 0x00414480, 0x00460BA0, 0x00414480, 0x00460BA0,
            0x00414480, 0x00460BA0, 0x00414480, 0x00460BA0, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0196A6A0,
        calls: &[0x0196A360, 0x007FD7D0, 0x007FD800],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0196AEE0,
        calls: &[
            0x00460BA0, 0x00414480, 0x00460BA0, 0x00414480, 0x00460BA0, 0x00414480, 0x00460BA0,
            0x00460BA0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0196B190,
        calls: &[0x0196A500, 0x007FF680, 0x007FFC60, 0x007FFC60],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01973AE0,
        calls: &[
            0x00460BA0, 0x00414480, 0x00460BA0, 0x00414480, 0x00417840, 0x00414480, 0x00460BA0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01973F30,
        calls: &[
            0x00460BA0, 0x00414560, 0x00460BA0, 0x00414560, 0x00460BA0, 0x00414480, 0x00460BA0,
            0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0198D580,
        calls: &[0x00B956D0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x0198FDC0,
        calls: &[
            0x00414560, 0x0041B800, 0x0041B800, 0x0041B800, 0x00414560, 0x00414560, 0x0041B800,
            0x00414480, 0x0041B800, 0x00414480, 0x00417840, 0x00417840,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01996EF0,
        calls: &[
            0x019AEAD0, 0x019AF0A0, 0x01D3BED0, 0x0199A410, 0x019954D0, 0x019AED30, 0x019AEDE0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x019AD660,
        calls: &[
            0x004B6930, 0x004B6D10, 0x004B67B0, 0x019AD2F0, 0x019AD570, 0x00410F20,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x019BE8E0,
        calls: &[
            0x00414480, 0x00414560, 0x00414560, 0x00414560, 0x00419430, 0x00414560, 0x00414480,
            0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x019C0130,
        calls: &[0x00442F70],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x019C5470,
        calls: &[0x01CF1750, 0x01D38290],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x019C6E50,
        calls: &[0x00414610, 0x00416BA0, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x019CE540,
        calls: &[0x00442F70, 0x0064DE00, 0x0080CC70, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x019CFFB0,
        calls: &[0x0040C770, 0x0040C770],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x019D0010,
        calls: &[0x005264B0, 0x005264B0, 0x0040C770, 0x0040C850, 0x0040C770],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x019D01B0,
        calls: &[
            0x00414610, 0x005FCD80, 0x005FCE30, 0x005FC860, 0x019CFFB0, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x019DB080,
        calls: &[
            0x00414480, 0x00414480, 0x00414480, 0x00414480, 0x00414480, 0x00414480, 0x00414480,
            0x00414560, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x019E4830,
        calls: &[
            0x00414480, 0x00414480, 0x00414480, 0x00414480, 0x00414480, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x019E4DA0,
        calls: &[
            0x00414480, 0x00414480, 0x00414480, 0x00414480, 0x00414480, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x019E4E30,
        calls: &[
            0x00414480, 0x00414480, 0x00414480, 0x00414480, 0x00414480, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x019EBC90,
        calls: &[
            0x00414560, 0x00417740, 0x00414480, 0x00417840, 0x00414560, 0x00417740, 0x00417740,
            0x00417740, 0x00414560, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x019ECF10,
        calls: &[
            0x00414480, 0x004144D0, 0x00417740, 0x00417740, 0x00414480, 0x004144D0, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x019ED150,
        calls: &[
            0x00414480, 0x004144D0, 0x00417740, 0x00417740, 0x00414480, 0x004144D0, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x019FE4C0,
        calls: &[
            0x00414480, 0x004144D0, 0x00414560, 0x004144D0, 0x00414480, 0x004144D0, 0x00414560,
            0x00414590, 0x00414560, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01A10C10,
        calls: &[
            0x00414560, 0x00414590, 0x00414560, 0x00414590, 0x00414560, 0x00414560, 0x00414480,
            0x00414560, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01A24A30,
        calls: &[0x01A24930, 0x00416CD0, 0x00440A20, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01A24FD0,
        calls: &[
            0x00414480, 0x00414480, 0x00414480, 0x00414480, 0x00414480, 0x00414480, 0x00414480,
            0x01A24D70,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01A26860,
        calls: &[0x004095C0, 0x01A24B20, 0x004AE7E0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01A2B1A0,
        calls: &[
            0x00414480, 0x00414560, 0x00417740, 0x00417840, 0x00419430, 0x00419430, 0x00414560,
            0x00414480, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01A35950,
        calls: &[
            0x00414560, 0x00417740, 0x00414480, 0x00417740, 0x00414480, 0x00417740, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01A37E30,
        calls: &[
            0x00414560, 0x00414560, 0x00414480, 0x0041B800, 0x00419430, 0x00414480, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01A38BD0,
        calls: &[
            0x00414480, 0x00417840, 0x00414480, 0x00417840, 0x00417740, 0x0041B800, 0x00414560,
            0x00417840, 0x00417840, 0x0041B800, 0x00414560, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01A3CA00,
        calls: &[
            0x00417580, 0x00EA7AD0, 0x00416CD0, 0x00EA7A10, 0x00EA8C00, 0x00414560, 0x00417740,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01A3E860,
        calls: &[
            0x00414610, 0x013B9E80, 0x015FCA00, 0x00414AD0, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01A403D0,
        calls: &[0x019BB4E0, 0x00414480, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01A40AE0,
        calls: &[0x004AFA90, 0x004AFA90, 0x00618BB0, 0x019CED20, 0x004D1E30],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01A43030,
        calls: &[0x00414610, 0x013BB8F0, 0x010563E0, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01A43130,
        calls: &[0x00414610, 0x0043E1A0, 0x004170C0, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01A471A0,
        calls: &[
            0x00414560, 0x00414560, 0x00414480, 0x004144D0, 0x00414560, 0x00414560, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01A494C0,
        calls: &[0x01A49190, 0x00414AD0, 0x00414480, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01A49570,
        calls: &[0x00416880, 0x01B21480, 0x0043F750, 0x00410F20, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01A4B790,
        calls: &[0x00414610, 0x01A4B730, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01A4B830,
        calls: &[
            0x00414610, 0x004B3260, 0x01A452D0, 0x004B3390, 0x01A4B730, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01A4CFA0,
        calls: &[
            0x00414610, 0x004B3260, 0x01A452D0, 0x004B3390, 0x01A4B730, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01A4D050,
        calls: &[
            0x00414610, 0x004B3260, 0x01A452D0, 0x004B3390, 0x01A4B730, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01A4D100,
        calls: &[0x00414610, 0x004B6930, 0x00410F20, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01A5B120,
        calls: &[0x00460BA0, 0x00460B80, 0x00468C40, 0x00460BA0, 0x00460BA0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01A5F250,
        calls: &[0x005FCE00, 0x005FCE00, 0x005FCE00],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01A677F0,
        calls: &[
            0x00414560, 0x00414480, 0x00414480, 0x00414480, 0x00414480, 0x00414560, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01A7B5E0,
        calls: &[0x0064D120, 0x0064CB90, 0x0064CB90, 0x0064CB90],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01A83670,
        calls: &[
            0x00414560, 0x00414560, 0x00414560, 0x00414480, 0x00414480, 0x00414560, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01A9A790,
        calls: &[
            0x0040BCD0, 0x0040BDD0, 0x0040C770, 0x0040BDD0, 0x0040BCD0, 0x0040C770, 0x00B92120,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01A9E0E0,
        calls: &[
            0x005FBF20, 0x00B90650, 0x0040C770, 0x00B90650, 0x0040C770, 0x00B90650, 0x0040C770,
            0x00635080, 0x0040C770, 0x00635590,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01A9FAA0,
        calls: &[
            0x01A99990, 0x01A999B0, 0x01A99A20, 0x01A99B30, 0x01A99B80, 0x01A99BE0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01AA36F0,
        calls: &[0x00B89270, 0x00B8E520, 0x00442620, 0x0080D2F0, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01AAC620,
        calls: &[
            0x00410F20, 0x01D34560, 0x01AABC70, 0x00410F20, 0x00410F20, 0x00410F20, 0x00410F20,
            0x01AAC330,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01AC8A80,
        calls: &[0x005FD4D0, 0x01A8DB90, 0x005FD660, 0x01A8DF10, 0x00C5A4C0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01AC94D0,
        calls: &[0x005FD4D0, 0x01A8DB90, 0x005FD660, 0x01A8DF10, 0x00C5A4C0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01ADB4C0,
        calls: &[
            0x00414560, 0x004144D0, 0x00414560, 0x00414520, 0x004144D0, 0x00414560, 0x00414520,
            0x00414560, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01AEBA90,
        calls: &[0x00414610, 0x00608C80, 0x0060A8F0, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01AEE630,
        calls: &[
            0x0040E780, 0x004169A0, 0x0040E780, 0x004169A0, 0x00416CD0, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01AEE720,
        calls: &[
            0x00414610, 0x0040E780, 0x004169A0, 0x0040E780, 0x004169A0, 0x00416CD0, 0x00414560,
            0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01AEE9C0,
        calls: &[
            0x0040E780, 0x004169A0, 0x0040E780, 0x004169A0, 0x0040E780, 0x004169A0, 0x00416CD0,
            0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01B05080,
        calls: &[
            0x00414610, 0x00414610, 0x0044D9F0, 0x004134C0, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01B07C00,
        calls: &[
            0x01B07820, 0x01B07820, 0x01B07820, 0x01B07820, 0x01B07820, 0x017C55A0, 0x017C5480,
            0x01B0F5C0, 0x0040D200, 0x0040D200,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01B15530,
        calls: &[0x00414AD0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01B16CA0,
        calls: &[0x00414AD0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01B1F270,
        calls: &[
            0x00414560, 0x004144D0, 0x00414560, 0x004144D0, 0x00414480, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01B214F0,
        calls: &[0x00414610, 0x00414610, 0x004B6930, 0x00410F20, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01B21610,
        calls: &[
            0x00414610, 0x00417580, 0x00441230, 0x004412C0, 0x00417740, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01B217F0,
        calls: &[0x00414610, 0x0043E130, 0x00416DB0, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01B24440,
        calls: &[0x00414610, 0x00450070, 0x00414AD0, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01B34750,
        calls: &[
            0x00414560, 0x00414480, 0x00414560, 0x00414480, 0x00414560, 0x00414560, 0x00414560,
            0x00414560, 0x00414560, 0x00414480, 0x00414560, 0x00417840,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01B356E0,
        calls: &[
            0x00414480, 0x00414560, 0x00414560, 0x00414560, 0x00414480, 0x00414560, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01B4EDF0,
        calls: &[
            0x00414480, 0x0041B800, 0x00414560, 0x0041B800, 0x00417840, 0x0041B800, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01B4FF40,
        calls: &[
            0x00414560, 0x00417840, 0x00414480, 0x00414480, 0x00414560, 0x00414560, 0x00414480,
            0x00419430, 0x00419430, 0x00414480, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01B53EC0,
        calls: &[
            0x00414560, 0x00414560, 0x00414480, 0x00414480, 0x00414480, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01B740D0,
        calls: &[
            0x00414560, 0x004144D0, 0x00414560, 0x00414520, 0x00414480, 0x004144D0, 0x00414560,
            0x00414520, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01B7FC30,
        calls: &[0x00414630, 0x00416880, 0x0043FC00, 0x00414480, 0x004144D0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01B83FB0,
        calls: &[0x004B6930, 0x016CC2A0, 0x00410F20, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01B87F50,
        calls: &[
            0x00414610, 0x00417580, 0x00414B50, 0x00597EC0, 0x00417740, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01B8AA60,
        calls: &[
            0x00414560, 0x004144D0, 0x00414560, 0x00417740, 0x00414560, 0x00417740, 0x00414560,
            0x00414560, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01B8E3C0,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01B8E460,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01B90370,
        calls: &[
            0x00414480, 0x00414480, 0x00414480, 0x00414560, 0x00414480, 0x00414480, 0x00414480,
            0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01B913F0,
        calls: &[
            0x00414610, 0x00414610, 0x007FC180, 0x0064DE00, 0x0064DE00, 0x008059A0, 0x0080CC70,
            0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01B99E90,
        calls: &[
            0x00414560, 0x00417740, 0x00414560, 0x00417740, 0x00417740, 0x00417740, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01BA1140,
        calls: &[0x01BA1040, 0x00416780, 0x00416780, 0x00416BA0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01BA1310,
        calls: &[
            0x00414610, 0x00416780, 0x00416780, 0x00416BA0, 0x00414560, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01BA25A0,
        calls: &[
            0x00414560, 0x004144D0, 0x00414480, 0x00414590, 0x00414480, 0x00414590, 0x004144D0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01BA2AF0,
        calls: &[0x00414610, 0x01BA11E0, 0x01BA29E0, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01BA3CE0,
        calls: &[0x00414610, 0x007FC180, 0x00414AD0, 0x008059A0, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01BACB50,
        calls: &[
            0x00414560, 0x00414560, 0x00414560, 0x00414480, 0x00414480, 0x00414480, 0x00414480,
            0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01BB48B0,
        calls: &[0x00414610, 0x01BB4620, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01BBAEE0,
        calls: &[0x00414610, 0x00414610, 0x00416CD0, 0x00414480, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01BBEE30,
        calls: &[0x00414610, 0x00B8FD60, 0x00416CD0, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01BBEF30,
        calls: &[0x00414610, 0x00414610, 0x00416CD0, 0x00414480, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01BC3930,
        calls: &[
            0x00414480, 0x00414560, 0x00414480, 0x00414560, 0x00414480, 0x00414560, 0x00414560,
            0x00414480, 0x00414560, 0x00414560, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01BC4090,
        calls: &[
            0x00414560, 0x00414560, 0x00414480, 0x00414480, 0x00414480, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01BCCA40,
        calls: &[0x00DDF020, 0x00468340, 0x0041B890, 0x0041B800, 0x00460BA0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01BCCB60,
        calls: &[
            0x01BCCC20, 0x00414520, 0x0041D630, 0x00414B90, 0x00655750, 0x0041B800, 0x00414520,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01BCD2C0,
        calls: &[0x0046F1A0, 0x01BCCC20, 0x0041D630, 0x0041B800, 0x00460BA0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01BCD530,
        calls: &[0x0046BD60, 0x01BCCC20, 0x0041D630, 0x0041B800, 0x00460BA0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01BCDAB0,
        calls: &[0x0046F1A0, 0x01BCCC20, 0x0041D630, 0x0041B800, 0x00460BA0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01BCDB70,
        calls: &[0x0046F1A0, 0x01BCCC20, 0x0041D630, 0x0041B800, 0x00460BA0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01BCDCC0,
        calls: &[0x0046F1A0, 0x01BCCC20, 0x0041D630, 0x0041B800, 0x00460BA0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01BCDD70,
        calls: &[0x0046F1A0, 0x01BCCC20, 0x0041D630, 0x0041B800, 0x00460BA0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01BD4DF0,
        calls: &[
            0x0064D0B0, 0x0064D0B0, 0x0064D120, 0x004238D0, 0x00664D10, 0x0064D3A0, 0x00423210,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01BD9C00,
        calls: &[0x0046BD60, 0x00460BA0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01BDA960,
        calls: &[
            0x00417840, 0x00414560, 0x00460BA0, 0x00414480, 0x00414560, 0x00460BA0, 0x00460BA0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01BE74C0,
        calls: &[0x01BEA390, 0x0064CBF0, 0x00423B50],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01BE8040,
        calls: &[0x005FFA40],
        through_a_thunk: true,
    },
    Sequence {
        routine: 0x01BE93F0,
        calls: &[0x00410F20, 0x00410F20, 0x00410F20],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01BF6240,
        calls: &[],
        through_a_thunk: true,
    },
    Sequence {
        routine: 0x01BF7160,
        calls: &[0x00414610, 0x00414AD0, 0x01BF70E0, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01BF7C50,
        calls: &[0x00441B80, 0x004B9860, 0x01BF7D80, 0x00410F20, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01C03420,
        calls: &[0x00410F20, 0x004D4540, 0x01BFF100],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01C0B220,
        calls: &[0x01BE9B40, 0x01C03E40, 0x005FD4E0, 0x005FDAB0, 0x00635A10],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01C16D50,
        calls: &[0x004238D0, 0x00781840, 0x005FFA40, 0x00781840, 0x00778DC0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01C1AEA0,
        calls: &[0x004238D0, 0x00781840, 0x005FFA40, 0x00781840, 0x00778DC0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01C1E290,
        calls: &[
            0x00414480, 0x00414560, 0x00414480, 0x00414480, 0x00414480, 0x00414560, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01C276F0,
        calls: &[0x00414610, 0x0043E1A0, 0x01C27510, 0x00414480, 0x00414480],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01C314D0,
        calls: &[
            0x00414560, 0x00414480, 0x00414480, 0x00414480, 0x00414560, 0x00414560, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01C3B430,
        calls: &[
            0x00414560, 0x00414560, 0x00414560, 0x00414560, 0x00414560, 0x00414560, 0x00414560,
            0x00417740, 0x00417740,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01C4C940,
        calls: &[
            0x00414560, 0x00414560, 0x00414560, 0x00414480, 0x00414560, 0x00414480, 0x00414560,
            0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01C674E0,
        calls: &[
            0x00414590, 0x00414560, 0x00414590, 0x00414560, 0x004144D0, 0x00414480, 0x00414590,
            0x00414560, 0x004144D0, 0x00414560, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01C78530,
        calls: &[
            0x00414480, 0x00414520, 0x00414480, 0x004144D0, 0x00414480, 0x00414520, 0x00414590,
            0x00414480, 0x00414560, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01C81FF0,
        calls: &[0x01C81F40, 0x0043FC50, 0x01C81F40, 0x0043FC50, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01C86F00,
        calls: &[
            0x00414480, 0x00414520, 0x004144D0, 0x00414480, 0x00414520, 0x004144D0, 0x00414480,
            0x00414520, 0x004144D0, 0x00414560, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01C8E240,
        calls: &[
            0x00414480, 0x004144D0, 0x00414560, 0x004144D0, 0x00414480, 0x004144D0, 0x00414590,
            0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01C91B10,
        calls: &[
            0x00414560, 0x004144D0, 0x00414480, 0x00414520, 0x00414480, 0x004144D0, 0x00414480,
            0x00414520, 0x00414560, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01C923B0,
        calls: &[
            0x00414480, 0x00414520, 0x00414480, 0x004144D0, 0x00414560, 0x004144D0, 0x00414480,
            0x00414520, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01C92720,
        calls: &[
            0x00414480, 0x00414520, 0x00414480, 0x004144D0, 0x00414560, 0x004144D0, 0x00414480,
            0x00414520, 0x00414480, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01C96C40,
        calls: &[
            0x00414480, 0x00414480, 0x0041B800, 0x00414560, 0x00414480, 0x00414480, 0x00414560,
            0x0041B800,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01C99CA0,
        calls: &[
            0x00414610, 0x00414610, 0x007FC180, 0x010A4370, 0x008059A0, 0x010A58B0, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01CA0430,
        calls: &[
            0x0041B800, 0x00414560, 0x0041B800, 0x00419430, 0x00417740, 0x00419430, 0x00414560,
            0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01CA34B0,
        calls: &[
            0x00414480, 0x00414480, 0x00414480, 0x0041B800, 0x00414560, 0x00414480, 0x00414480,
            0x00414480, 0x0041B800,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01CA39C0,
        calls: &[
            0x00414480, 0x00414560, 0x00414480, 0x00414560, 0x00414480, 0x0041B800, 0x00414480,
            0x00414480, 0x0041B800,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01CA3EC0,
        calls: &[0x00416CD0, 0x01B1DEF0, 0x00414560],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01CA9FE0,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01CAA080,
        calls: &[0x00417740, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01CC2640,
        calls: &[
            0x01D34DB0, 0x01CC37D0, 0x004168E0, 0x01D31290, 0x00414520, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01CC56D0,
        calls: &[0x01D347D0, 0x01D347D0, 0x01CC0A60, 0x01D347D0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01CC5750,
        calls: &[0x01D347D0, 0x01D347D0, 0x01CC0A60, 0x01D347D0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01CC6830,
        calls: &[0x01D347D0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01CC68E0,
        calls: &[0x01D347D0],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01CD9F90,
        calls: &[0x005FFA40, 0x005FFA40, 0x005FFA40, 0x005FFA40],
        through_a_thunk: true,
    },
    Sequence {
        routine: 0x01CF2F40,
        calls: &[
            0x00414520, 0x00414480, 0x004144D0, 0x00414480, 0x00414520, 0x004144D0, 0x00414560,
            0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01CFAB80,
        calls: &[
            0x00417580, 0x00414B50, 0x01CFD6A0, 0x00417C40, 0x00414480, 0x00417740,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01CFD300,
        calls: &[0x00417580, 0x00417580, 0x01D39670, 0x00417840],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01D09BE0,
        calls: &[
            0x00414590, 0x00414560, 0x00414590, 0x00414560, 0x00414590, 0x00414560, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01D12000,
        calls: &[0x01D11F10],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01D273C0,
        calls: &[
            0x00414480, 0x00414590, 0x00414560, 0x00414590, 0x00414560, 0x004144D0, 0x00414560,
            0x004144D0, 0x00414560, 0x00414590, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01D39CF0,
        calls: &[0x004179D0, 0x01D3A780, 0x01D396B0, 0x00417740],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01D3A550,
        calls: &[
            0x00414610, 0x00B94E60, 0x0172A2B0, 0x004169A0, 0x0172BB00, 0x00410F20, 0x00414480,
            0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01D3A8C0,
        calls: &[
            0x00414610, 0x00B94E60, 0x0172A2B0, 0x004169A0, 0x0172BB00, 0x00410F20, 0x00414480,
            0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01D463D0,
        calls: &[
            0x01D461D0, 0x01D471A0, 0x01D46F70, 0x00416740, 0x0042A560, 0x00414480,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01D46DA0,
        calls: &[
            0x01D461D0, 0x01D471A0, 0x00416CD0, 0x00416740, 0x0042A560, 0x00414560,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01D51C40,
        calls: &[
            0x016EB0A0, 0x016E9CD0, 0x016E9E20, 0x016EBE60, 0x016ED320, 0x016EBE60, 0x016ED320,
            0x016EBE60, 0x016ED320, 0x016EC580, 0x016E9F40,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01D66B00,
        calls: &[
            0x004095F0, 0x004095F0, 0x004095F0, 0x004095F0, 0x004095F0, 0x004095F0, 0x004095F0,
        ],
        through_a_thunk: false,
    },
    Sequence {
        routine: 0x01D84B00,
        calls: &[0x004168E0, 0x00415F70, 0x0041B800, 0x006245B0, 0x00414520],
        through_a_thunk: true,
    },
    Sequence {
        routine: 0x01D87390,
        calls: &[
            0x00410F20, 0x01D42EC0, 0x00410F20, 0x00410F20, 0x00410F20, 0x00410F20, 0x01D42EC0,
            0x01D7A5F0, 0x010DB950, 0x01D42EC0, 0x00410F20,
        ],
        through_a_thunk: false,
    },
];

/// How many there are.
pub const SEQUENCE_COUNT: usize = 936;

/// The run-time routines that let something go.
///
/// Recovered earlier across the landing-pad families.
pub const RELEASES: [u32; 12] = [
    0x00414480, 0x00414560, 0x004144D0, 0x00414520, 0x0041B800, 0x00414590, 0x004145C0, 0x00417740,
    0x00419430, 0x00417840, 0x00460B80, 0x00410F20,
];

/// Implements part of the longer straight-line family.
///
/// What one routine does, if it is one of these.
#[must_use]
pub fn sequence_at(routine: u32) -> Option<&'static Sequence> {
    SEQUENCES
        .binary_search_by_key(&routine, |held| held.routine)
        .ok()
        .map(|at| &SEQUENCES[at])
}

/// Implements part of the longer straight-line family.
///
/// Whether one call lets something go.
#[must_use]
pub fn is_a_release(call: u32) -> bool {
    RELEASES.contains(&call)
}

/// Implements part of the longer straight-line family.
///
/// The routines whose every call lets something go.
///
/// A routine here takes an object's contents apart and does nothing else. It is
/// the program's own work rather than the compiler's: a landing pad lets go of
/// one thing or a few and is generated, where these are written.
#[must_use]
pub fn take_things_apart() -> Vec<&'static Sequence> {
    SEQUENCES
        .iter()
        .filter(|held| !held.calls.is_empty() && held.calls.iter().all(|call| is_a_release(*call)))
        .collect()
}

/// Implements part of the longer straight-line family.
///
/// How many of the calls in one routine let something go.
#[must_use]
pub fn releases_in(held: &Sequence) -> usize {
    held.calls
        .iter()
        .filter(|call| is_a_release(**call))
        .count()
}

/// Implements part of the longer straight-line family.
///
/// What share of routines of one length do nothing but let things go.
///
/// It rises with the length. A routine that makes one call could be doing
/// anything; a routine that makes a dozen in a row with no condition between
/// them is almost always emptying something.
#[must_use]
pub fn share_taking_apart(calls: usize) -> f64 {
    let of_that_length: Vec<&Sequence> = SEQUENCES
        .iter()
        .filter(|held| held.calls.len() == calls)
        .collect();
    if of_that_length.is_empty() {
        return 0.0;
    }
    let apart = of_that_length
        .iter()
        .filter(|held| !held.calls.is_empty() && held.calls.iter().all(|call| is_a_release(*call)))
        .count();
    #[expect(
        clippy::cast_precision_loss,
        reason = "counts of a few hundred, well inside what a double holds exactly"
    )]
    {
        apart as f64 / of_that_length.len() as f64
    }
}

/// Implements part of the longer straight-line family.
///
/// Everything these routines call, and how often, commonest first.
#[must_use]
pub fn callees(how_many: usize) -> Vec<(u32, usize)> {
    let mut counted: Vec<(u32, usize)> = Vec::new();
    for call in SEQUENCES.iter().flat_map(|held| held.calls.iter()) {
        match counted.iter_mut().find(|(at, _)| at == call) {
            Some((_, seen)) => *seen += 1,
            None => counted.push((*call, 1)),
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
        assert_eq!(SEQUENCES.len(), SEQUENCE_COUNT);
    }

    #[test]
    fn the_table_is_sorted_so_it_can_be_searched() {
        assert!(
            SEQUENCES
                .windows(2)
                .all(|pair| pair[0].routine < pair[1].routine)
        );
    }

    #[test]
    fn a_routine_can_be_found_by_its_address() {
        let known = SEQUENCES[0].routine;

        assert!(sequence_at(known).is_some());
        assert!(sequence_at(0).is_none());
    }

    #[test]
    fn these_are_longer_than_the_ones_in_the_other_table() {
        let longest = SEQUENCES
            .iter()
            .map(|held| held.calls.len())
            .max()
            .expect("some");

        assert!(longest > 6);
    }

    #[test]
    fn none_of_them_is_in_the_other_table() {
        for held in SEQUENCES.iter().take(300) {
            assert!(
                crate::straight_line_routines::sequence_of(held.routine).is_none(),
                "{:#010X}",
                held.routine
            );
        }
    }

    #[test]
    fn many_of_them_do_nothing_but_let_things_go() {
        let apart = take_things_apart().len();

        assert!(
            apart > SEQUENCES.len() / 8,
            "{apart} of {}",
            SEQUENCES.len()
        );
    }

    #[test]
    fn and_that_grows_with_how_many_calls_they_make() {
        // A routine making one call could be doing anything; one making many in
        // a row with no condition between them is almost always emptying
        // something.
        let few = share_taking_apart(2);
        let many = share_taking_apart(10);

        assert!(many > few, "{many} against {few}");
    }

    #[test]
    fn the_releases_are_the_ones_recovered_earlier() {
        for call in RELEASES {
            assert!(is_a_release(call), "{call:#010X}");
        }
        assert!(!is_a_release(0));
    }

    #[test]
    fn the_busiest_thing_they_call_lets_something_go() {
        let busiest = callees(1);

        assert!(is_a_release(busiest[0].0), "{:#010X}", busiest[0].0);
    }

    #[test]
    fn a_routine_that_takes_things_apart_releases_everything_it_calls() {
        for held in take_things_apart().iter().take(50) {
            assert_eq!(releases_in(held), held.calls.len());
        }
    }

    #[test]
    fn a_routine_with_no_recorded_call_calls_through_a_thunk() {
        // The only way a straight-line routine here records nothing is that
        // everything it called went through a thunk with no recovered function
        // behind it.
        for held in &SEQUENCES {
            if held.calls.is_empty() {
                assert!(held.through_a_thunk, "{:#010X}", held.routine);
            }
            assert!(held.calls.len() <= 12, "{:#010X}", held.routine);
        }
    }

    #[test]
    fn every_recorded_call_is_a_function_that_was_recovered() {
        for held in &SEQUENCES {
            for call in held.calls {
                assert!(
                    (0x0040_6DE0..=0x01D8_7790).contains(call),
                    "{call:#010X} in {:#010X}",
                    held.routine
                );
            }
        }
    }

    #[test]
    fn some_of_them_call_through_a_thunk() {
        let thunked = SEQUENCES.iter().filter(|held| held.through_a_thunk).count();

        assert!(thunked > 0);
        assert!(thunked < SEQUENCES.len() / 4);
    }

    #[test]
    fn the_share_of_a_length_nothing_has_is_nothing() {
        assert!((share_taking_apart(0) - 0.0).abs() < f64::EPSILON);
        assert!((share_taking_apart(99) - 0.0).abs() < f64::EPSILON);
    }

    #[test]
    fn every_routine_is_listed_once() {
        let mut routines: Vec<u32> = SEQUENCES.iter().map(|held| held.routine).collect();
        let before = routines.len();
        routines.sort_unstable();
        routines.dedup();

        assert_eq!(routines.len(), before);
    }
}
