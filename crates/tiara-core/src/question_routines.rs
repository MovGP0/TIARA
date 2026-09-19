//! Routines that ask several questions, one after another.
//!
//! 1999 of them, each with two to five questions at the top level, none inside
//! another, and a body of its own for each. Recorded question by question with
//! what each body calls, so the routine is given branch by branch rather than
//! flattened into one list.
//!
//! Over half of them turn out to be one thing. 1012 of the 1999 call the run time's
//! make-an-instance and the run time's after-it-is-made — and in **every one of
//! those**, without a single exception, the two sit in different branches. That
//! is the shape a constructor is compiled into: one flag says whether an
//! instance has to be made, the same flag is asked again at the end to say
//! whether the finishing step is owed, and the work of the constructor sits
//! between them. So this table is mostly the program's constructors, and
//! [`is_a_constructor`] finds them.
//!
//! A further 304 call the run time's take-it-apart instead. What is left is the
//! ordinary run of routines that ask more than one question, and what they ask
//! is overwhelmingly whether something is there.

// The addresses are written without separators so the port-mapping importer can
// match them against the recovered functions.
#![allow(clippy::unreadable_literal)]

pub use crate::guarded_routines::Asks;

/// One branch: a question and what its body calls.
#[derive(Debug, Clone, Copy)]
pub struct Branch {
    /// What the question is.
    ///
    /// A branch reached because every question before it failed asks nothing of
    /// its own, and is marked [`Asks::Otherwise`].
    pub asks: Asks,
    /// What its body calls, in order.
    ///
    /// Recovered functions only. A call through an unresolved thunk is not one,
    /// and is not here; see [`Asking::through_a_thunk`].
    pub calls: &'static [u32],
}

/// One routine that asks several questions.
#[derive(Debug, Clone, Copy)]
pub struct Asking {
    /// Where it sits.
    pub routine: u32,
    /// Its branches, in the order they are asked.
    pub branches: &'static [Branch],
    /// Whether it also calls through a thunk the decompiler could not resolve.
    pub through_a_thunk: bool,
}

/// The run-time routine that makes an instance.
///
/// Recovered earlier as the class-create helper.
pub const MAKES_AN_INSTANCE: u32 = 0x004119E0;

/// The one called once an instance has been made.
pub const AFTER_IT_IS_MADE: u32 = 0x00411A20;

/// The one that takes an instance apart.
pub const TAKES_IT_APART: u32 = 0x00411A00;

/// Every routine that asks several questions one after another.
pub static ASKING: [Asking; 1999] = [
    Asking {
        routine: 0x00409500,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00408B00],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x00409880,
        branches: &[
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0041F930],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00409970,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x0040ABB0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0040AC60,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0040AD20,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0040CFE0,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00409930],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0040D3D0,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x0040C9E0],
            },
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x00409930],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0040EA40,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x0040CA00],
            },
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x00409930],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00411CF0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00411B90],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00408330],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00408330],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004135F0,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x00414160],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00414280,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x004095C0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x004095F0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004166C0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00409A70],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0041AEA0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00407D90],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x004079C0, 0x00416740, 0x00409A70],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0041E140,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0041F190,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00414D00],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00409A70],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00424930,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0043E600,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00416740],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x0043E840,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x0043E890,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x0043FDB0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00419260, 0x00414AD0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00419260, 0x00414AD0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00440970,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::SomethingElse,
                calls: &[],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x004485A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0043D320],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0044D490,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0044D710,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0044D9F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0044DCA0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0044DFB0,
        branches: &[
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0044EAD0,
        branches: &[
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0044EF10,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x0044F850,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00416AD0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00451BA0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00427C10],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00452190,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00452040, 0x00452020],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00451E30],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00452AB0,
        branches: &[
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x00452A70],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0041DDD0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00453560,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00454310],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00453CC0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004540D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00454190,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00455840,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0044D8D0, 0x004134C0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0044D8D0, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0045AFE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0045B570,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0045B660,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0045B810,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0046C8D0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x004607E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004603E0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0046DF70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0046E4C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0049F000,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004E6770],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x004E6770],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004A2F70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004A4F10,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x004EB750],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00597E50],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004AE870,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x004AE960],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00409A70],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004AEA00,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x004AE960],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x004AE960],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004AEC30,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x004AE960],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00409A70],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004AEF40,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x004AE960],
            },
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x00419260],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004AFEE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004B0E80,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x004B0D20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x004B0D60],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004B1580,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004B1640,
        branches: &[
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004B1710,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004B17C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004B1C30,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004B1E70],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004B25E0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00594F90],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00594F90],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004B26D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004B5BD0,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x004B3510],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x004B3510],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004B63E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004B3510],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x004B3510],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004B6450,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x004B5DE0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00409A70],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004B6530,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004B3510],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x004B3510],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004B6760,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x004B3510],
            },
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x00419260],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004B6A00,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004B6AB0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004B8B50,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x004B9610],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004B9860,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004B9BD0,
        branches: &[
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x004BA660,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004BA930,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004BAD70,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x004BAC90],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x004BAC90],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004BAEB0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004BD950,
        branches: &[
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x00599670],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00597E50],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004BE3D0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00411840],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004BE470,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004BDEE0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004BF430,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::SomethingElse,
                calls: &[0x004BDEE0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004BF480,
        branches: &[
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x004BDEE0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004C3730,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x004C3A60],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004C3830,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00411870],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004C67A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00411870],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004C8A70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004C9040,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0044D8D0, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004CE3F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004CE4B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004D0B00,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004D0BA0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004D22D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004D29F0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004D23A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004D2B10],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004D2880,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x004E0F60],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004D3C10],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004D3DE0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x004AE960],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00594F90],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004D49D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004D4ED0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004D4B30,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004D4FA0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004D5060,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004D59E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004D5B00,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004D6590,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004D74B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004D9720,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004D98B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004DA3E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004DC690,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x004DC530],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004DD190,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0051FE30, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004DD310,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004DD480,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004DD530,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B610],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004DE790,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0051FEA0, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004DE8A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004DEA10,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004DEAC0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004DFA80,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0051FF10, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004DFB90,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004DFD00,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004DFDB0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004E0E50,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0051FD00, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004E0F60,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004E10D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004E1180,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004E2940,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004E29F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004E2F30,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x004E2340],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0044D710, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004E4430,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0051FFE0, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004E4540,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004E46B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004E4760,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004E5F10,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004E5FC0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004E6500,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x004E5930],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0044D710, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004E7560,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x005200B0, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004E7670,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004E77E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004E7890,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004E8850,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00520120, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004E8960,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004E8AD0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004E8B80,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004E9860,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004E9910,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004E99C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004EA2E0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00520190, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004EA460,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004EA5D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004EA680,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004EB640,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00520200, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004EB750,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004EB8C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004EB970,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004ED110,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004ED1C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004ED700,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x004ECB40],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0044D710, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004EED30,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004EEDE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004EF2A0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x004EE800],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0044D710, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004F01C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004F0270,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004F05F0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00520300, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004F0700,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004F0870,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004F0920,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004F18E0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00520370, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004F19F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004F1B60,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004F1C10,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004F30E0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x005203E0, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004F3260,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004F33D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004F3480,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004F4440,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00520450, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004F4550,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004F46C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004F4770,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004F5C40,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x005204C0, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004F5DC0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004F5F30,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004F5FE0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004F76C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004F7830,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004F78E0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B5B0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004F8AC0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00520640, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004F8BD0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004F8D40,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004F8DF0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B610],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004FA1D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004FA340,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004FA3F0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B5B0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004FB5D0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00520720, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004FB6E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004FB850,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004FB900,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B610],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004FD260,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004FD3D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004FD480,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B5B0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004FE650,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00520800, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004FE760,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004FE8D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x004FE980,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B4F0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00500A20,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x005208E0, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00500B30,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00500CA0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00500D50,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005346E0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00451A00],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00451A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00534AE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00419260],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00419260],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00535DD0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00535F80,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x004185D0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00536E10,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0044D710, 0x004134C0],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005382B0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0044D710, 0x004134C0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00409A70],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00538320,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0044D710, 0x004134C0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00409A70],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00538390,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0044D710, 0x004134C0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00541770,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00557760,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0055B840,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0055B9E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0055B820],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0055D000,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0055D170,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0055D220,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B670],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0055E9B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0055EA60,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0055EF20,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0055E480],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0044D710, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00561540,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005615F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00561B30,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00560F00],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0044D710, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005635A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00563650,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00563B90,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00562FC0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0044D710, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00564D20,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x005723C0, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00564E30,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00564FA0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00565050,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005664C0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00572660, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005665D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00566740,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005667F0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00567830,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x005728B0, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00567940,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00567AB0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00567B60,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00568C80,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00572B00, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00568D90,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00568F00,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00568FB0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00569FF0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00572D50, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0056A100,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0056A270,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0056A320,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0056B270,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0056B320,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0056BA20,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0056BB90,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0056BC40,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B670],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0056CBD0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00573590, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0056CCE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0056CE50,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0056CF00,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0056E790,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0056E900,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0056E9B0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B5B0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0056FBB0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00573F20, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0056FCC0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0056FE30,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0056FEE0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00570E40,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00570FB0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00571060,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B5B0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005889E0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::SomethingElse,
                calls: &[0x00464C60, 0x0040C840],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x004634B0],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x00588420],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005950E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00595060],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x0044D470],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00595110,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00594F90],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005951B0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00594F90],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00595250,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00594F90],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005952E0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00594F90],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00595380,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00594F90],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0041B840],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x0041B840, 0x0041B840],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00595830,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00594F90],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00414AD0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00414B50, 0x00414AD0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00595AF0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00594F90],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00414BF0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00414C70, 0x00414BF0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00595CD0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x00595060],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00595D40,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x00595060],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00595DB0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x00595060],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00597D00,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x00595060],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00597D70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x00595060],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00597DE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x00595060],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00597E50,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x00595060],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00597EC0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x00595060],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005980D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x00595060],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00599430,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00594F90],
            },
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x00409A70],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005994F0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00594F90],
            },
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x00409A70],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005995B0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00594F90],
            },
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x00409A70],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00599670,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00594F90],
            },
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x00409A70],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0059B430,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00594F90],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B400],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x005981E0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0059B490,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00594F90],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B400],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00598420],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0059B4F0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00594F90],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B400],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00598660],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0059B550,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00594F90],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B400],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x005988B0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0059B5B0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00594F90],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B400],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00598AA0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0059B610,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00594F90],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B400],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00598E40],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0059B670,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00594F90],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B400],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x005991C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0059B830,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0044D710, 0x004134C0],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0059B8C0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0044D710, 0x004134C0],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0059B9E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x0059B950],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0059BA60,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x0059B950],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005A13C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005A22C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005A2430,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005A24E0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B5B0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005A3EF0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005A3FA0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005A4460,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x005A39C0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0044D710, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005A55E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005A5690,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005A5E70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005A5FE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005A6090,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B670],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005A7020,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x005A8650, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005A7130,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005A72A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005A7350,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005B2060,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x00414AD0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00450070, 0x0043E130],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005B2270,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005B2340,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x005B4770],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005B5170,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x005B6140, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005B5280,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005B53F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005B54A0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005BA540,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x0041DDD0, 0x0044D490, 0x004134C0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x005BA1C0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x005BA1C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005BBFF0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x005C01A0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005C00E0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::SomethingElse,
                calls: &[0x005BBCB0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005C2AE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005C2B90,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005C3130,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x005C2310],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0044D710, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005C4770,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005C48E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005C4990,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B5B0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005C5C00,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x005C8460, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005C5D10,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005C5E80,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005C5F30,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B490],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005C6EB0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005C7020,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005C70D0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B5B0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005DA0F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005DC4F0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x005DC0B0],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005DCE10,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005DDF30,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x005DC900],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x005DC590],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x005DC3F0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005DEE00,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005DEF70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005DF020,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B5B0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005E0B50,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005E0C00,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005E1140,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x005E0580],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0044D710, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005E2660,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005E27D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005E2880,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B5B0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005EA3C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005EA470,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005ECD60,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005ECE10,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005ED7A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005ED850,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005FB6E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005FD7D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005FDD10,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x005FDDC0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00603960,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00604E80,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00602EF0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x006038A0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00605670,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x00605CC0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00606B80,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00606460],
            },
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x00606D90],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00606BD0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00606460],
            },
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x00606D90],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00606C20,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00606460],
            },
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x00606D90],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00607810,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00607BC0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00607750],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x00608C30,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x00609730,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x00609CE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x0060A050,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x005FFDF0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0060A840,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x005FFE20],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0060CD00,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x004B1060],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0060D2C0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00607B80],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0060D9B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0060F080,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00610CA0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00610D40,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006112B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00611350,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00614900,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006149B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00614650],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00614DF0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00615DC0, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00614F00,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00615070,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00615120,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006182F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00427C10],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006184D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00618BB0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00619330,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006193D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00619D40,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0061CFB0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x007D7C60],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x007D7C70, 0x004D26C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0061D050,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0061D350,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0061D840,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x0061D890,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x0061DA30,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x0061DAD0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006211F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00622430,
        branches: &[
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x00623140,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006231E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00623280,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00623AF0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00623B90,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00623C30,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00626400,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x00427C10],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00628260,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00628460,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00628B20,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00628BD0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00628D70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006491C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0064CEE0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0064E4C0],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x0064D040],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x0064FE10],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0064D230,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0064B380],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0064B380],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0064B380],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0064B380],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x0064D2E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00665AC0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00665AC0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00665AC0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00665AC0],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x0064E700,
        branches: &[
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x0064DBE0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00650A80,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0064E190],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00650B30,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0064E190],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411550],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006510A0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00664ED0],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00652A60,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00654BC0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x004AEAC0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x004AEAC0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0065A1E0,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x00654870],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x00655E40],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0065A280,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x00654870],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x0065ABB0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0065ACB0],
            },
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x0064D560],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0065AE10,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00665AC0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00665AC0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00665AC0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00665AC0],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x0065B420,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0065B870],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x0065B870],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0044D710, 0x004134C0],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x0065F1B0,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x00648970],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00660520,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00660670,
        branches: &[
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x00660730],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00660730],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x0044D490, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006606D0,
        branches: &[
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x006607D0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x006607D0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x0044D490, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006610C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00661280,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00661280],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00661280],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00662D50,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00662D50],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00662D50],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00665950,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00666700,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00667A20, 0x004D1F00, 0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00667B30,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00667F40],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0067DFB0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00682130,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x0065B870],
            },
            Branch {
                asks: Asks::SomethingElse,
                calls: &[0x00411550],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x00682FC0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00683790,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00685720,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::SomethingElse,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x0064FCA0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00685F40,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::SomethingElse,
                calls: &[0x0065B870, 0x004701C0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00688BF0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0068AF60,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::SomethingElse,
                calls: &[0x0068E220],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x0065B870, 0x00470120],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0068B5C0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::SomethingElse,
                calls: &[0x0065B870],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x0068BC50,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x00655B90],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0068BE20,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x00655B90],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0068ECD0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004DB2D0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004DB850, 0x004DB730],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0068ED50,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004DB2D0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004DB850, 0x004DB730],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0068F5D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0068FAD0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00691FA0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00692580,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x004D62F0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x006926B0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x00692650,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x006926B0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x00693850,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00423B50],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006967D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006987D0,
        branches: &[
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00698320],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x00698960,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00699490,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x00786040],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x00786040],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00699540,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0069A5C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0069C460,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0069C420],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0069C3F0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0069D010,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0069D1A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0069D250,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0069D650],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x006A0080,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006A3230,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006A32E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x004B18B0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00414AD0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006A3630,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006A3990,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x006A39E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x006A3B30],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006A5810,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00414480],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x004167D0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x006A60D0,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006A9F50,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006AA000,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004D2D90],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006AA610,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006AA6E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006AA7B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004D2D90],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006AAEE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004D2D90],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006AB5C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006AB670,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006D5150,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x006D5940],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00654450],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006D51F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x007D7C60],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0064FCA0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x007D7C70, 0x004D26C0, 0x007D56E0, 0x0064FCA0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006D8B00,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0065B870, 0x00470120],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0065B870],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x006D8CA0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00648400],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x00416EA0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00416EA0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006DA2B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006DA6B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006DED30,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x006DF690],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0065B870],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x006DF710],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x006E03A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006E4390,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x007D7C60],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x006E4280],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x007D7C70, 0x004D26C0, 0x007D56E0, 0x006E4280],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006E4420,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x007D7C60],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x006E4280],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x007D7C70, 0x004D26C0, 0x007D56E0, 0x006E4280],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006E6920,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x006E6090],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x0065B870],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x006E6B80,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x005FBF20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0065B870],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x006E6BE0,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x005FBF20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0065B870],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x006E8BC0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0065B870],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0064E770, 0x0064FCA0],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x006ED280,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x006EDB60, 0x0065B870, 0x004B1870],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x006EDA50,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006EDE60,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006EFBB0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x006EFC30],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006F5FB0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x006EF050],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006F6890,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::SomethingElse,
                calls: &[0x0065B870],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x006F8A60,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x006F8880],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006FA0E0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0064DBE0],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006FD250,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x007D7C60],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x006FD210],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x007D7C70, 0x004D26C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x006FD340,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x007D7C60],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x006FD300],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x007D7C70, 0x004D26C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00704800,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::SomethingElse,
                calls: &[0x0065B830],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x00704870,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::SomethingElse,
                calls: &[0x0065B830],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x00705830,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::SomethingElse,
                calls: &[0x0065B830, 0x00416740],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x00707E40,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007080E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x0070A770,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x0070BAD0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0070BFE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0070CBC0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0070E2D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0070F470,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0070F700,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x00717080,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00718050, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00717190,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00717300,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007173B0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00722450,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004D62F0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00724D70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00726560,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x00726B20,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00726C60,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00726D20,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x00727610,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007277D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00728F60],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00411550],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00729E20,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x0072D4C0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00806AF0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00806B40],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x00800470],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0072E890,
        branches: &[
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x00414AD0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00416DC0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00741520,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00741610,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x005FD670, 0x005FDCB0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00742CD0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00742DE0, 0x004D6550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00744B90,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00745810],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00744750],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007460F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00746510,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00746790,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00746F40,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007473F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00749BD0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00749F20,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0074BB20,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x0074CDE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0074D8A0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0074E130, 0x004D6550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00779B50,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0061A430],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00781940,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00796530],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00797F10],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0079A890],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x007995A0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00786A00,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00786B10],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00787880,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00787940,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00787CC0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00787D30, 0x00787880],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00788E40,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x00788CC0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00781840, 0x00779380, 0x00788CC0],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00781840, 0x007793C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00789EB0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00789F70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0078ABF0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0078ACA0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0078B160,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0078A6D0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0044D710, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0078C2D0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0079EEE0, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0078C3E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0078C550,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0078C600,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0078DC70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0078DD20,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0078E1E0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0078D740],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0044D710, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0078FB80,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0078FC30,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00790170,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0078F5A0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0044D710, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007910D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00791180,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00791D30,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00791DE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007922A0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00791800],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0044D710, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00793420,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007934D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00794140,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007941F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00794710,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00793B80],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0044D710, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007956C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00795770,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00796530,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007965E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00796B20,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00795EA0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0044D710, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00797F10,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00798080,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00798130,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B5B0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00799490,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x007AC2A0, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007995A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00799710,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007997C0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0079A780,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x007AC4F0, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0079A890,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0079AA00,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0079AAB0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0079BB80,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0079BCF0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0079BDA0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0079CD60,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0079CED0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0079CF80,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B670],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0079DF10,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x007ACC10, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0079E020,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0079E190,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0079E240,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0079F3E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0079F550,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0079F600,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B670],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007A0590,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x007AD350, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007A06A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007A0810,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007A08C0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007A1820,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007A1990,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007A1A40,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B5B0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007A2C40,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x007AD8D0, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007A2D50,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007A2EC0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007A2F70,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007A3EC0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007A4030,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007A40E0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B670],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007A50A0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x007ADD90, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007A51B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007A5320,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007A53D0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007A6210,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x007ADFE0, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007A6320,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007A6490,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007A6540,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007A74A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007A7610,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007A76C0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B670],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007A8790,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007A8900,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007A89B0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B670],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007A9A30,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007A9BA0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007A9C50,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B5B0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007AAF70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007AB0E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007AB190,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B670],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007D5160,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007D5830,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0041DDD0, 0x0044D490, 0x004134C0],
            },
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x007D6470],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007D6390,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0041DDD0, 0x0044D490, 0x004134C0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x007D56E0],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x007D88E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007DDE30,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x007E2EC0, 0x00411550],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x007DDE90],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007E3D90,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x007D7C60],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x007D7C70, 0x004D26C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007E6A70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x007D7C60],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x007D7C70, 0x004D26C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007F9FA0,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x0065B870],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x007FC060,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0065ED10],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x007FBFD0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0065ED10],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007FC500,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411550],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007FC730,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007FC7F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x00805990],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x007FCAE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x007FDF50],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00805370,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411550],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00805AD0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00808D30,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0080E110],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0080DD10],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x008099D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00809990],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00809990],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0080EAA0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x0080EAE0,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::SomethingElse,
                calls: &[0x00410F20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0080F430,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x0080F4A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x0065B870],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0080FE90,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00813C90,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00827300,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00829130,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0082A4F0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x008279D0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0082BF80,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x008279D0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0082C5C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0082CBC0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x005205D0, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0082CCD0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0082CE40,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0082CEF0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B4F0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0082DE10,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0082DF80,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0082E030,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00834C50,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0083FD00,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0083DA90],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411550],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x008456D0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0065B870],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x0065B870],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x008455A0],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x00845850,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::SomethingElse,
                calls: &[0x008456D0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00848460,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0083DA60],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0041DDD0, 0x0083D530],
            },
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x00844DA0, 0x00411550],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00848AC0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0083DA60],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0041DDD0, 0x0083D530],
            },
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x00844DD0, 0x00411550],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00848C60,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0083DA60],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0041DDD0, 0x0083D530],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0084B650,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0084BA10],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0084BAB0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0084BB60,
        branches: &[
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0084BFF0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0084C0B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0084CB30,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0084D420,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00853840,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x008538F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00853E30,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00853170],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0044D710, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00854E30,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00854FA0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00855050,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B5B0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0085D580,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00863630,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0086DFD0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00873550,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00873600,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00873AB0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00873BD0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00873CE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00874B00,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00878280,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00409A70],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00882920,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x008829D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00882AA0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x008830B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x00892130,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00892BE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x008945D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00416740, 0x00427C10],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00894670,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00416740, 0x00427C10],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00894730,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00416740, 0x00427C10],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x008947E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00416740, 0x00427C10],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x008948B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00416740, 0x00427C10],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0089B950,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0089BA00,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0089BBA0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0089BC50,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0089DB40,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x008AC100,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x00414480],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x008B1530,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x004B6DC0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x008764E0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x008B1F70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x008B81E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x008B8360],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x008B8290,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x008B83D0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x008B85A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x008B8660,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x008B8EA0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x008B95B0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x008BB870, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x008B96C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x008B9830,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x008B98E0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x008BA8A0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x008BBAC0, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x008BA9B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x008BAB20,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x008BABD0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x008E6EC0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x008E8B90,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00409A70],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x008F7F70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x008F9070,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x008F8E00],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00409A70],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x008F9770,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0041DDD0, 0x0044D490, 0x004134C0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x008F9840,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0041DDD0, 0x0044D490, 0x004134C0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x008FE920,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x008FE9D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00416310],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00416310],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00416310],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00416310],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00948C00,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x0044D490, 0x004134C0],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x004113F0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x009902A0, 0x00410F20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00948CC0,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x0044D490, 0x004134C0],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x004113F0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00990420, 0x00410F20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00948D80,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x0044D490, 0x004134C0],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x004113F0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x009906D0, 0x00410F20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0094AB70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0094B750,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::SomethingElse,
                calls: &[0x0044D490, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0094F810,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009504F0,
        branches: &[
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009530F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009534B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00953870,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00953DB0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00957190,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0095F9A0,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x0044D490, 0x004134C0],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0095E3E0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00966200,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::SomethingElse,
                calls: &[0x00966240],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009672A0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::SomethingElse,
                calls: &[0x00414B90],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00414520],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0096CF90,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0096DCA0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0044D490, 0x004134C0],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x0044D490, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00974B70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0044D490, 0x004134C0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410E60, 0x00597E50],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0097CFA0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009806B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00982C30,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00983160,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x0044D490, 0x004134C0],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0044D490, 0x004134C0],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0044D490, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009843B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00984E20,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0044D490, 0x004134C0],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0044D490, 0x004134C0],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00984F80,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0044D490, 0x004134C0],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0044D490, 0x004134C0],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00985C60,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0044D530, 0x004134C0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0044D490, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00989CA0,
        branches: &[
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x0044D530, 0x004134C0],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00594F90],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0098CCC0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009902A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00990420,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009906D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009908B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00994BF0,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x00414520],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00994EE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00995110,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009953A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00995820,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009959A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00995B30,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00996180,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00996690,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00996920,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00997150,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0099D010,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x009ABC00, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0099D120,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0099D290,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0099D340,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0099E410,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0099E580,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0099E630,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B670],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0099F710,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x009AC0A0, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0099F820,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0099F990,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0099FA40,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009A0A00,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x009AC2F0, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009A0B10,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009A0C80,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009A0D30,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009A1CF0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x009AC540, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009A1E00,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009A1F70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009A2020,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009A2FE0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x009AC790, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009A30F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009A3260,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009A3310,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009A42E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009A4AE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009A52E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009A5AD0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x009AFE30, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009A5BE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009A5D50,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009A5E00,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009A6DC0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x009B0080, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009A6ED0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009A7040,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009A70F0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009A89B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009A8A60,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009A8FA0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x009A8300],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0044D710, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009AA300,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x009ABAD0, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009AA410,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009AA580,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009AA630,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009AB600,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009ACB80,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x009B5040, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009ACC90,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009ACE00,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009ACEB0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009ADCF0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x009B5290, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009ADE00,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009ADF70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009AE020,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009AEE60,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x009B54E0, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009AEF70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009AF0E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009AF190,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009B0590,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009B0700,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009B07B0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B5B0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009B1AE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009B1C50,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009B1D00,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B5B0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009B30B0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x009B6460, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009B31C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009B3330,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009B33E0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B430],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009D4BE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009D6BF0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009D7110,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009DDBA0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x009DEB70, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009DDCB0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009DDE20,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009DDED0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009E0930,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x009E3680,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009E3750,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009E3820,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009E4B20,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009E9F10,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x009E7910],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x009E7910],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009EA210,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x009E7910],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x009E7910],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009EA280,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x009EA120],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00409A70],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009EA340,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x009E7910],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x009E7910],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009EA710,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x009EC850,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A01B30,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A01C30,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A05BA0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00A074D0],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0044D470],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A09F40,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x00A1C560,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00A1C1B0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A1D640,
        branches: &[
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00A1D960],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A2A060,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A336D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A33890,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004095F0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A34BE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A39200,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A39980,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A3E5C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A3E6E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A3EC80,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004095F0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0042A270],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A3F810,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004095F0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004095F0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A3F9E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A412B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00A415D0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A41F20,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A47110,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0044D470],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x00A47300,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A481E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A48BE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A48DC0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A49240,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A4DFC0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A52510,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A525D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A54E70,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::SomethingElse,
                calls: &[0x00462650],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A55160,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x00462650],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A551D0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x00462650],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A557B0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x00462650],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A5B260,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x004169F0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A5C9C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A62CC0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A63280,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x004169F0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A66A60,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A66BE0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00A521C0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A72CA0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A73060,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A731C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x00A73240,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A74970,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A75020,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A79F50,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A7A070,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A7A110,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A7A610,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x00A7C650,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00414AD0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A7C7C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A94BE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A95230,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A9A2A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00A98C40],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A9A320,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A9B470,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00A9D1C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00AA3940,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00AA6400,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00A94670],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00A956B0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00AA8C30,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00AA8D90,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00AA8D00],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x00AA8DD0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00AA8DE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00AA8D00],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x004AEAC0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00AA8E90,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00AB50A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00419260],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00ABDCB0,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00ABEDF0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00ABEEB0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00ABF160,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00ABF8F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00AC0BA0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00AC1370,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00AC39C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00AC4B90,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00AC54B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00ACA160,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00ACA540,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00ACBEE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00ACD500,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00ACE830,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00ACF7F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00AD5060,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00AF6C00, 0x00A72F50, 0x00A72F00],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004AEAC0, 0x00AB5240],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00AD67F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00AF0380,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00414AD0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00414AD0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00AF2730,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0065B870],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x00AF27F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00AF2730, 0x0068E980],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00AF2660, 0x0068E980],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00AF5A30,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00742EB0, 0x00AF5780],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00742EB0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00AF6080,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x00AF26C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00AFF590,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B02670,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0080CE30, 0x00B019B0],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x008059A0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B04410,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B04800,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00409A00],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00409A00],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B063E0,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x0043E420],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x0064DBE0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B0CC70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B111A0,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x008483B0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B12A60,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B136C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B139E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B17100,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B17470,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B1A7F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00410E60, 0x004AEDB0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B22B20,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B28730,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00414B90],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00B27D20, 0x00414B90],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00B222C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B39420,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00414B90],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00B39C20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B39490,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00414B90],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00B39C20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B39500,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00414BF0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00B39C20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B39C20,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00B39DB0],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B3C1B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B3D940,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B419A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B4D010,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B4F900,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B52B20,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B54080,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B567E0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00B147C0, 0x004134C0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00414B90],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B57D70,
        branches: &[
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B5BE50,
        branches: &[
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B6BEB0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B6CA10,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B6CAC0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B6CFE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B882F0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0044D490, 0x004134C0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00B877E0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B89420,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B91070,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x004170C0, 0x00416E20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x004170C0, 0x00416E20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B96E00,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B9B250,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B9B450,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x004B89E0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B9B580,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00416740, 0x004B89E0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B9BA70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00415AB0, 0x004B89E0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B9BED0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B9C050,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00B9C200,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00B9C140],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00BADB60,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00BADC10,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00BADC90],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004113F0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00BAFE20,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00BB1460,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00BB1B60,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00BB1E80,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00BB2210,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00BB2650,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00BB2970,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00BB2CA0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00BB4F80,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00BB61F0, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00BB5090,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00BB5200,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00BB52B0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B610],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00BBA4F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00BBB620,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00BBC030,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00BBFB30,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00BC12A0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00BC0BF0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00BC0BF0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00BC0BF0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00BC0BF0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00BC0BF0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00BC52E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004095F0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004095F0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004095F0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00BCF010,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00417840],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00BCF360,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x00BCEEA0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00409A70],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00BCFF20,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x00BCEEA0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00BD11B0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x00BD1070],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00BD16B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00BD14C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00BD1700,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00BD1650],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00BD3CB0,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x00BD3A70, 0x004AE7E0],
            },
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00BD3E40,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00BD73A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00BE2510,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00BE2680,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00BE2730,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B670],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00BE3920,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00BE3A90,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00BE3B40,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B670],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00BFEF90,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00BE19C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C01EE0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x004AEE50],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C099C0,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x00BF28A0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00C087B0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C0B0D0,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x00BFA470, 0x00BFA6C0],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C0C720,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x0065B870],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x00C11370,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C11480,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C11660,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004AE7E0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C1B520,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C1BC40,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004095F0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0042A270],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C1BFB0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004095F0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C1C070,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C1C1C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C1C2B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C1F530,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C1F6E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C1F840,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C21A70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00C21C50],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C22CA0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C23420,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x0041DDD0, 0x00C1A320],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00409A70],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C23CB0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C249E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C25510,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004095F0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C25BB0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C282A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C287B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00C1AB80],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x00C289B0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00C28A90, 0x00C28A40],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0041DDD0, 0x00C1A320],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C29430,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C2CD70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x00C2DE60,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C2DF20,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00C1AB80],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C2E2D0,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C2E8E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C2ED50,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C2F0F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C2F1B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C2F6F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C2F9B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C2FC20,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C318F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C31DB0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C41090,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x004AEAC0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C41110,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x004AEAC0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C41170,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00C3F550],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00C3F530],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x004AEAC0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C42AA0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0040C2F0, 0x0040C2F0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0040AF80],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x0040AF80],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C439D0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00C42630, 0x0040C850],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C46880,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004095F0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C48470,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004D1F00],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C4C8C0,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x00C4CC90],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C4C900,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C4E7D0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00C4F820, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C4E8E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C4EA50,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C4EB00,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C516B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00C51B70],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C54210,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0064CC50],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0065B870, 0x007F94C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C59F40,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00680E40],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x00C5F040,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x01794B80],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C65730,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C65830,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00416740],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00416740],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00416740],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x00C6E3A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C6F4C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C6F960,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C6FDB0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C71D80,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C74230,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x00C72430],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C789C0,
        branches: &[
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x00C7A400,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C7B080,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x00C816F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C85C40,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00C7F060],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C85D10,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00C7F210],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C85D40,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00C7F220],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C85E90,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00414480],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00C7F3B0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C87E30,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C89540,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0044D490, 0x004134C0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00C88710],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C8AC70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C8BAC0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C8BB80,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0086DFD0, 0x004134C0],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x0086DFD0, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C8BC90,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00C8B3F0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C8BD10,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00C8B3F0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C8BD70,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00C8B3F0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C8BDE0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00C8B3F0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C8BE50,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00C8B3F0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C8BEA0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00419260],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C8BF20,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00419260],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C8BF80,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00419260],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C8C000,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00419260],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C8C080,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00419260],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C8C850,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00C98B90,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x00C99220],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CAC450,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00410E60],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x004AE7E0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CB4660,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CB98A0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00C8F850],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00C8FB90],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CBAB60,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CBAC20,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CBB300,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CBBF00,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CBCF10,
        branches: &[
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CBE4C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CBF990,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CBFA90,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CBFB30,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00CBFB80],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CBFFE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CC1F00,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CC3E00,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CCD970,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x004AEAC0],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CCDDB0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CCECB0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00410F20, 0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CD6090,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CDCC20,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CDCD80,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CDD790,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x004B6930],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CE2560,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CE28F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CE2E30,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CE45C0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00414AD0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CE6F00,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00416AD0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CE70A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00CE9860, 0x004AEE50, 0x00CE98A0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CEB1C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CF14A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CF16E0,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CF27D0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0041DDD0, 0x0086DFD0, 0x004134C0],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x00410F20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CF9290,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CF96A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00CF8F40, 0x00CF8F80],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CF9750,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CF9810,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CF9E00,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CFA720,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00CFBA30,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00D00470,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00D067F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00D39680,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00D3B110,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x00D414F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00D43470,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00D44BA0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00D46050,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00D46280,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00D46360,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00D472B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00D477F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00D488F0,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x007D5080, 0x007D55A0, 0x007D5670],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x007D5080, 0x007D55A0, 0x007D5670],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00D49BE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x00D4A2E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00D4A570,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00D4ACC0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00D4B2C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00D4BE80,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00D4CD40,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00D58750,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00D75390,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00410E60],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004AE7E0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00D7D3D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00D7D610,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00D7D830,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00DA03B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00DA0460,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00DA0920,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00D9FE80],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0044D710, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00DA1A50,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00DA1BC0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00DA1C70,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B670],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00DA2C30,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00DA3E70, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00DA2D40,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00DA2EB0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00DA2F60,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00DAE860,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00DAEB90,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00DD2A60,
        branches: &[
            Branch {
                asks: Asks::SomethingElse,
                calls: &[0x016EBFA0, 0x016ED220],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x016EBE60, 0x016ED320],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00DD69A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00DD6F80,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00DD89A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00DD8C50,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00DD8D00],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00624CE0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00DD8E60,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00DD96D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00DD9B20,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00DDC630,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00DDCAD0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00417840, 0x004095F0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00DDFAA0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0065B870],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00659ED0],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x00DEE620,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x016EACF0],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x016E9E20, 0x016EBDD0, 0x016ED320, 0x016EA040],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x016E9E20, 0x016EBE60, 0x016ED320],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00DEE7C0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x016EACF0],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x016E9E20, 0x016EC240, 0x016ED5D0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x016E9E20, 0x016EBE60, 0x016ED320],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00E01E80,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00E01F50,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00E07E60,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00E078A0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00E0A980,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00E0AFA0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00E08170],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00E0BA80,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00E0DF00,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00E0F700,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00E11A10,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00E11BC0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00E120B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00E7DA40,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x016EACF0],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x00E7D1B0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00E7D6B0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00E81400,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00E81DA0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00E81D40],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00E81D40],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00E81D40],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00EA3300,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00EA32C0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00EA6B50,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00EA7200,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00EA78F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00EA7D60,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x00EA68E0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00EA8270,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x00EA68E0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00EAF870,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00EAF920,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00EAFE60,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00EAF290],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0044D710, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00EB0FE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00EB1150,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00EB1200,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B5B0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00EB2400,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00EB3700, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00EB2510,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00EB2680,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00EB2730,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00EEC590,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00EEC700,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00EEC7B0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B5B0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00EEDAF0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00EEDC60,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00EEDD10,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B610],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F01200,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00658A80],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F037A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F04B50,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F08900,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F10240,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x01ABFBD0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x01ABFBD0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F110C0,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x004095F0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F20870,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F2E400,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x00419260],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x00410A90],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F2E870,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F2E930,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F2E9D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F2F760,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F2FCF0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F2FDB0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F30430,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00410A90],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F30480,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00410A90],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F30670,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00410A90],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F308C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00410A90],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F309B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F313E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00410A90],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F33040,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F33100,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F331C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F33270,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F34790,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F356B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F35760,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F35CA0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00F350B0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0044D710, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F36ED0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00F3A6A0, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F36FE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F37150,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F37200,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F381C0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00F3A8F0, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F382D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F38440,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F384F0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F39450,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F395C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F39670,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B5B0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F47060,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004095F0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F47380,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F48820,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F48C60,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F4A470,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F4ADC0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F4CC90,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F58FE0,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x01B0FA20, 0x01B0FA40],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x01B0FA40],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F5DE10,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F5DED0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F5F180,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F60260,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F6FDF0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F70760,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F71050,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00F60970, 0x004B84C0],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x004B84C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F73960,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F74170,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F76290,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x00F750E0, 0x00F65130, 0x00F6F900],
            },
            Branch {
                asks: Asks::SomethingElse,
                calls: &[0x010508E0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F77D30,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00F6DE60, 0x004AE7E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00F766A0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F7BD50,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F7CD40,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F7CE40,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F810E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004095F0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F81120,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F811E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F812A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F82AF0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x00F8A2C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F8A3B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004095F0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004095F0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00F8A610,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00FD92A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x00FF2D40,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01027C00,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0103C730,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0104E100,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x01052670, 0x006807E0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0104EAA0,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x0104E7B0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x01053E80],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x010529B0,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x01053EE0],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00F8D1C0, 0x00F8D300, 0x01052800, 0x00F8D300],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0105A0D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0105CEB0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00414AD0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00414AD0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00414AD0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00416AD0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x010634E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01064180,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01068070,
        branches: &[
            Branch {
                asks: Asks::SomethingElse,
                calls: &[0x00410AB0],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x010680B0,
        branches: &[
            Branch {
                asks: Asks::SomethingElse,
                calls: &[0x00410AB0],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x010695B0,
        branches: &[
            Branch {
                asks: Asks::SomethingElse,
                calls: &[0x00410AB0],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x010878B0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x01087780, 0x015FA560, 0x0065B870],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x01087A10,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x01085CD0, 0x010879A0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x0108B840, 0x01085CD0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x010892F0,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x01089370],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x01089730],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x01089C90],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x0108CB20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x010A3A80,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x010A5640],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x010A5680],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x010AE530,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x010AEB10,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004095F0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004095F0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x010BB580,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::SomethingElse,
                calls: &[0x01D325E0, 0x01D325E0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x01D320F0, 0x01D320F0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x010C9D50,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x010CBAA0,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0040C770],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x010E0F80,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x010E4010,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0064E770],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0082A6C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x010E6DF0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00C42800],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00C42800],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x010E7580,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x010E82D0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x01A8DEE0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x010EF100,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x010F7D70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x010E7EC0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x010E7EC0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x010FBE10,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00F1DF90],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00F1DF90],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x010FCDD0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x010FCE90,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004095F0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x010FFC80,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x011014E0,
        branches: &[
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x011035D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01106D50,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x011070B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x01CC6030],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x01CC6030],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01107B90,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01110FF0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x01121E50,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01126790,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x0111C5C0, 0x00C03380],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x01119B00, 0x00C03380],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x01B25310],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x011272D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0112A8D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0112A990,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0112C7A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0112C860,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0112CCF0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0112CDB0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01130820,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x011308E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01132AC0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00520950, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01132BD0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01132D40,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01132DF0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01143EA0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01144010,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x011440C0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B5B0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x011453E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01145550,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01145600,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B670],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0114EE90,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01166E80,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x01165EB0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01171B90,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0064DD90, 0x0043FC00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01229F20,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00C42800, 0x00C42800],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00C42800],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0122A0A0,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00C42800, 0x00C42800],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00526500],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0122A290,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00416E20, 0x00416EA0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0122FA90,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00B90440],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0122FB70,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00B90440],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0122FE40,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00B90440],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01233910,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x01175DA0],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x012281F0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01233A40,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x01175DA0],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x012281F0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01236220,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x01175DA0],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x012281F0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0123B5E0,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x01194FD0, 0x01D3A010],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x01194FD0, 0x01D3A010],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01242120,
        branches: &[
            Branch {
                asks: Asks::SomethingElse,
                calls: &[0x01242110],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x01242110],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01268350,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x012B31A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x012B4460,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x012BE1F0,
        branches: &[
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x00418590],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x012DCD60,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00414480],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00414AD0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x012DCEF0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00414480],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00414AD0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x012F56C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20, 0x0072D440],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0131C700,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x004D1A50],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x013189E0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0132E6F0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0132C0E0],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0132C700],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x0132C080],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01330AF0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01339620,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0135A330,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0135BEF0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01364F70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x01C6CEE0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0136BDF0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0136C070,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0136C440,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0136C720,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0136CCE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0136D9F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0136DCB0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0136EA40,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0136FF90,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0139E570,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x01D31A40, 0x00B047E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00418590],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x013A5CD0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0040D200],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x013A6180,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004095F0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x013B5AB0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x013B6BE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x013B95E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00414AD0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00414AD0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x013BA2B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004095F0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x01694110],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x013B33D0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x013BAB20,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004095F0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00442620, 0x015FCD60],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x013C4610,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x013CD830,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x0111C5C0, 0x00C03380],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x01119B00, 0x00C03380],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x01B25310],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x013CD8C0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0074B490],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x0074B490],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x00414AD0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00414AD0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x013CE330,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x013D2310,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x013EC890,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x013F61C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x014290A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0142FD40,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01434C50,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01436380,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01437450,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01439280,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x014723C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01474600,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01478F00,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01479310,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0147B370,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0147B480,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0147CEA0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0044D490, 0x004134C0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00414AD0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x014860E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00414AD0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x01488670],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x014861F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x01488780],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01486EA0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01486F50,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01487490,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x014868C0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0044D710, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01488C50,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01488DC0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01488E70,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B5B0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0148A070,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0148B470, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0148A180,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0148A2F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0148A3A0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B430],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0149C020,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x014A4260,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00417C40],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00417C40],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00B047E0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x014A4360,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00417C40],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00417C40],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00B047E0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x014B81D0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::SomethingElse,
                calls: &[0x00410F20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x014C0750,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0043DEC0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x014C47F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004D1F00, 0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x014C9130,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x016EECA0],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x016EECA0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x014D6CD0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x014D09C0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x014D5BF0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x014D74B0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x014D1C10],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x014D1C10],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x014D65D0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x014D7CA0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x014D09C0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x014D5BF0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x014D8520,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x014D1C10],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x014D1C10],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x014D65D0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x014D8E50,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x014D2C50],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x014D1C10],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x014D65D0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x014DBB80,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x016BC3A0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x014F4D70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x014F5550,
        branches: &[
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x017C58C0, 0x0040D200],
            },
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x017C53F0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x014FDEB0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x01CC6030],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0150EE90,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004095F0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01516F10,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01516FE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004095F0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01528170,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01535290,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0153B430,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x0153A8E0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0153BC10,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x019A4600],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x0153AF00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0153BE60,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x00441920, 0x004414C0, 0x00414B50, 0x00B91E50],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00E1DDD0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0153C940,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0153F6F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01540280,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x015430D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01543190,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0154B610,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00414BF0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00D30CF0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0154BA10,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0154BAD0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01565F10,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01565FB0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x015695B0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00B96DF0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01571400,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01571B80,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01571DC0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01574660,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x015762B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004095F0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0157CF70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01583D90,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01583E40,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01584380,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x015836E0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0044D710, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01585B30,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01585CA0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01585D50,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B5B0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01587090,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01587200,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x015872B0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B5B0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x015884F0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0158B070, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01588600,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01588770,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01588820,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B430],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01589770,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x015898E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01589990,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B5B0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x015A9D60,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x015BF040,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x00416AD0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x015BFC50,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x015BFFE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x015C1C10,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x015CD230,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004095F0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004095F0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x015E1D70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x015EB6B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x015EB760,
        branches: &[
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x004095F0, 0x004095F0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x015EBF50,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x015E9D30],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x015EEC20,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00418590],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00442620, 0x015FCD60],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x015EF2A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00418590],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00442620, 0x015FCD60],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x015F3110,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00E08170],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01602CD0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00418590],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x016124D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004095F0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01612560,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x016126F0,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01612C30,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01612CE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01618EE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01618F80,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01619030,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01619130,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01619340,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x016195C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01619990,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01619A40,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004095F0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0161A130,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::SomethingElse,
                calls: &[0x0161A0C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0161B970,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0161BA10,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0161BB40,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x01613110],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x016353C0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x01647430],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0161DB10,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0161DB10],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0161DB10],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0161DB60,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0161DB60],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0161DB60],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x016271B0,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x0043F750],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0162A860,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x016A94D0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0162D170,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x004AE7E0],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x004AE7E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0162D170],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0162D170],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0162EA10,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x01613110],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0162F210,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x01613110],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x01650470],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01633AF0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01639320,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01646710,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x01613110],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0164A680,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x016766C0,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x01B0FA20, 0x01B0FA40],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x01B0FA40],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0167DFB0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0167E120,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0167E1D0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B670],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0167F2B0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00E29370, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0167F3C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0167F530,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0167F5E0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x016802C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01680370,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01680420,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01680A00,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01680B70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01680C20,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01681C00,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00E295C0, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01681D10,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01681E80,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01681F30,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01682C10,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01682CC0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01682D70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x016A35D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x016A4D80,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x016A52E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x016A5500,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x016A5690,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x016A94D0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x016A5800,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x016A6C10,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x016A94D0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x016B0320,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x016B0A30,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004095F0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x016B0BA0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x01B202F0, 0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x016BAFF0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x016A4020],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x016A4020],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x016C2310,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00414AD0],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x004154B0, 0x004155B0, 0x00416880],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x016D0530,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x016D1500, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x016D0640,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x016D07B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x016D0860,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x016D44D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x016D4DD0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x016D4B30],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x016D7040,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::SomethingElse,
                calls: &[0x00416780],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00414AD0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x016E3FC0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::SomethingElse,
                calls: &[0x016E4030, 0x016E4390, 0x016E4260, 0x016E4C80],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x016EA170,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x00409A70],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x016ED8A0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::SomethingElse,
                calls: &[0x00C44460],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x016ED9E0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x01B08A30, 0x00B90630, 0x016ED960],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x016F9A50,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01704720,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01707EF0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0171AF00,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0171C3F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0171C4A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0171C960,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0171BED0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0044D710, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0171DCF0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0171DE60,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0171DF10,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B670],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0171EED0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x01721290, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0171EFE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0171F150,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0171F200,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B430],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01720050,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x017214E0, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01720160,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x017202D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01720380,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0173D760,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0173EA00,
        branches: &[
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x0173D2C0],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x004113D0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01741190,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x017488B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x0173D100],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x017498E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0174B050,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0174BB40,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00414AD0, 0x00414480],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00416DC0, 0x00416DC0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0174BCD0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0174C110,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0174C640,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0174CCD0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0174F210,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01750130,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01754CE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01757A50,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0175B360,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0175B4D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0175B580,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B5B0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01768B60,
        branches: &[
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x00418590],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0176A490,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x019954D0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01773F90,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x01773FD0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01779150,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01779F30,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01779FE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0177A520,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x01779910],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0044D710, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0177D960,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01784B90,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x017880A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x017895B0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0178A550, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x017896C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01789830,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x017898E0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B4F0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01791A00,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01796750,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x017AFD00],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x004AE7E0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x004AE7E0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01797060,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x00C3F320],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x017970E0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x017A1E70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x017AD620,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x017AD610],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x017AD610],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x017AE490,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x017AE620,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x017AD610],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x017AD610],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x017AECD0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x017AD610],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x017AD610],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x017AFD80,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x017AD610],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x017AD610],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x017B0190,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x017B0130],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x017B0130],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00498310, 0x004095F0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x017B3D70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x017B4010,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x017B4A90,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x017B4EF0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x017B6AC0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x017B8D70,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::SomethingElse,
                calls: &[0x01B240B0, 0x01D313E0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x017BB280,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x019A4E10],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x017BD7A0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x01CEFDF0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x01CEFDF0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x017BF050,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x017BEFB0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x017BEAD0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x017BF150,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x017BEFB0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x017BEAD0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x017BF210,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x017BEFB0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x017BEAD0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x017C2B80,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x017C2B70],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x017C4F60,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x017D72C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x017D7510,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x017D7590],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00409A70],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x017D90F0,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x00409620],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x017DCFD0,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x017DD0A0],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x017DD280],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x017DD6B0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x017E1290,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00414AD0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00414AD0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x017E3230,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0040AF40],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x010C7A40, 0x010D35F0, 0x017E2760, 0x010D3800],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x010D6B90],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x017F1FA0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x017EFD70],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x017F2B70],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x017F3DB0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x017F3EB0,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x017F3FB0],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00409A70],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x017F3FF0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x017FE910,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x017FE450],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0080D170],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00F836B0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01801550,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x018038A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01803940,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004AEE30],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01803AD0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00410E60],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004AEE30],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01804390,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x018046A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20, 0x004412F0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x018054D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x018055C0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00415BD0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x004156B0, 0x00415BD0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x01805570],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x018066D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01807BD0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x01807B80],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00416660, 0x00415F70],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x01807C80,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x01807B80],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00415D10, 0x00415AB0],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x01813750,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x01950E90],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x01950E90],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01814650,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x01811220],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x004BE2C0, 0x01811140],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01816320,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01816F60,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01818CC0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0181A500,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x0181B150],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0181E310,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004AEE30],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0181E430,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00410E60],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004AEE30],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0181EC70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0181F710,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0181F800,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00415BD0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x004156B0, 0x00415BD0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0181F7B0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01831A40,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x018334F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01849B80,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01849DB0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0184AEA0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00410AE0, 0x01849B80, 0x01847420],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0184B680,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0184F2C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x018332D0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01850000,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01851820,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01851AB0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01852B40,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01854780,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x0185E8F0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x01860BA0],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0044D470],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01860570,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x018616D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01862520,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01866D50,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x018695C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0186AA40,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0186AAE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x0186FE80,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01873B70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01876D10,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x018811B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x018814E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01881890,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01883C10,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01884990,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01888CC0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0188C150,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00416740],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00416740],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0188C4F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x0188D0F0,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x0188D1B0, 0x0188D050],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x0188D030],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01891510,
        branches: &[
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x01891A50],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x018925C0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::SomethingElse,
                calls: &[0x01892830],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x018932D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x01893500],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x018933F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x01893500],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01897F20,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01897FD0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01899AF0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01899C20,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x0189A420],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0189D610,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x018A4DF0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x018A5690,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00452320],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x018A9020,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x018A9B40],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x018AA790,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x018ABA30],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x018AB560,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x018A9B40],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x018AFDE0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x01894A70],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x018B0C80,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x018BA320,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x018B8410, 0x0043F750, 0x01803ED0],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x018B8410, 0x00448430, 0x01803ED0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x018BA6C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0043FC00],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0180D800],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x018C3440,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x018CF810,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x018D0B10,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x018D0C10,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x018D0CF0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0194E940,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0194F560,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x019523A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0197D9C0],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01952440,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0197DA80],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01953F80,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01954030,
        branches: &[
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01954920,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01954A30,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01956000,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01956770,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01956C90,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01957DA0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x019586C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0195AC20,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0195A020],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00498350, 0x0197DEB0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0195D0F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0195D1C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0195E5C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0195E6D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0195E780,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x019604F0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0195ACE0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00498350, 0x0197DEB0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x019624B0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x01962920],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01964D50,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0180F210],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0180F210],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01964F50,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x019668B0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x01966C80],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x019667E0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01966930,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x01966C80],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01969630,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x019696E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01969AE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0196B4E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0196B5A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0196C260,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0196C780,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0196D250,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0196DBB0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01971280,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0194FA10],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01977650,
        branches: &[
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x0196F540],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01978880,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01978A20,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x019798B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0197A4F0, 0x00452320],
            },
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x00452320],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01979E40,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01979F50,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0189D480, 0x0189D730],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0197AE10,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0197B570,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0197B620,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x01881A60, 0x018819B0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00452320],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0197BA60,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00452320],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004412F0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0197BBF0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0197BCA0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0197BF40,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0197C1A0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0197C400,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00452320],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0197D120,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0197D750],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0197E560,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x0197E8D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01980A20,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01980FE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x019812D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01993300,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x019AF200,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x004AE7E0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x019B0590,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x019B0700,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x019B07B0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B5B0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x019B1B10,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00E14EA0, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x019B1C20,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x019B1D90,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x019B1E40,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x019B3460,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x019B3510,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x019B39B0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x019B2F50],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0044D710, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x019C2000,
        branches: &[
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x0044D490, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x019C2070,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[0x0044D490, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x019DAAA0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01A24B20,
        branches: &[
            Branch {
                asks: Asks::SomethingElse,
                calls: &[0x01A24B10],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x01A24B10],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01A24E80,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01A24F20,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01A2DC20,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x00414B50],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x00414B50],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x00414B50],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x00414B50],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01A2F040,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01A30160,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x01A2F9D0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x01A41FD0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01A33560,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01A5AD00,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004412F0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01A64090,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01A919B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01A91A60,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01A91F00,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x01A914A0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0044D710, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01A92DA0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01A92F10,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01A92FC0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01AA2B60,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01AA2D30,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01AA3430,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01AB6D60,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x01CC8370],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01AC6E00,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01AE9240,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x01CC6990],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01AE9310,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x01AE91C0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x01CC6A70, 0x005DD980, 0x00410F20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01AEB8A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x007FD7D0, 0x007FD800, 0x01AEEAF0, 0x01AED550],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x01CA0DB0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01AEB980,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x01AEE630, 0x01AED550],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x01CA0DD0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01AEBB40,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01AEBE10,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B053C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004095F0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004095F0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B08A60,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x01B084B0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x01B086A0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B08B00,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x01B084B0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x01B086A0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B0FF70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B10900,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B114D0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00DB7F00, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B115E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B11750,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B11800,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B124E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B12590,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B12640,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B12A50,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00F543C0, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B12B60,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B12CD0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B12D80,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B13D40,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x017CB050, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B13E50,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B13FC0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B14070,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B158F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B159A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B15EE0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x01B15260],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0044D710, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B17270,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B173E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B17490,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B670],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B20F60,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00415AB0, 0x004B89E0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B210C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00415AB0, 0x004B89E0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B26920,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B269D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B26F10,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x01B262B0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0044D710, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B27F50,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x01B291B0, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B28060,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B281D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B28280,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B28F60,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B29010,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B290C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B38700,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x00416BA0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B4A510,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x01D347D0, 0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B4C5C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B5E190,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B86950,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00414AD0],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00414AD0],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00414AD0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B8C180,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B8D0F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B8D260,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B8D310,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B5B0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01B921C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01BA5D60,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01BAFE80,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01BAFFE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0040C770, 0x00419260],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01BBB1E0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01BBB7A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01BBDD70,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00414AD0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00414AD0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00414AD0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00414AD0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x01BBC400],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01BD3330,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01BD3F80,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00635A10],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x00635C00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01BD4300,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01BD62C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01BD83B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01BE0840,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01BE10F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01BE3560,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01BE3620,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004D2D90],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01BE58D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01BE6760,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::SomethingElse,
                calls: &[0x01BD5FA0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01BEAE50,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01BEB140,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x01C074B0],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x01C07120],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x01C07120],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01BEB6E0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x004B6930],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01BEB7C0,
        branches: &[
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x00410F20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01BF62B0,
        branches: &[
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0065A1C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01BFA2C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01BFB160,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01BFB4D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01BFC930,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01BFCFF0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01BFD1A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01BFEE60,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01C01A70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x01C02120],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x01C03420],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01C04100,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01C07B80,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01C0A430,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x0064CC50],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[0x0064CC50],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01C0B720,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01C0CF70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01C17C70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01C19B20,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01C1E7A0,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x00416E20],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x00416E20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01C29C90,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01C32BE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01C43320,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00442620, 0x015FCD60],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01C433D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00442620, 0x015FCD60],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01C480A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01CA17F0,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x012DADA0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0131C540],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01CA5F70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01CA6020,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01CA6560,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x01CA5900],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0044D710, 0x004134C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01CA78C0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01CA7A30,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01CA7AE0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B5B0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01CA8DD0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01CA8F40,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01CA8FF0,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01CAFE10,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01CB1860,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01CB1D80,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01CB1F70,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01CBF8A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004095F0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01CC0410,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01CC1630,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01CC16D0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01CC23F0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01CC3DB0,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::IsThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01CC6080,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x00410F20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01CC9F30,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01CCDB90,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00410F20],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01CE8BC0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0040F200, 0x0040F590, 0x00409900, 0x00414480],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01CE8C10,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0040F200, 0x0040F590, 0x00409900],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01CEA850,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01CFB180,
        branches: &[
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x01D0A350, 0x017BEAD0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01CFB240,
        branches: &[
            Branch {
                asks: Asks::IsNotThatValue,
                calls: &[],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x017BEFB0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01D0EFE0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01D2C800,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004095F0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01D315A0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00415AB0, 0x01D311C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01D31630,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00414DE0, 0x01D311C0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01D34560,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01D34800,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x01D34EF0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00409A70],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01D3C840,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004095F0],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01D3F8F0,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: true,
    },
    Asking {
        routine: 0x01D44BD0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01D46580,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0042A560],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0041B800],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x0041B800],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01D59940,
        branches: &[
            Branch {
                asks: Asks::IsThatValue,
                calls: &[0x01164E10],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01D69530,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x01D6A500, 0x0041B840],
            },
            Branch {
                asks: Asks::IsNothing,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01D69640,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01D697B0,
        branches: &[
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x004119E0],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x00411A20],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01D69860,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[0x0059B550],
            },
            Branch {
                asks: Asks::AComparison,
                calls: &[0x00411A00],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01D74580,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x016EE260, 0x01D74430, 0x016EA050],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01D75100,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[0x016EE260, 0x01D74D10],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01D75A30,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::SomethingElse,
                calls: &[0x016EE260, 0x01D754B0],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01D76070,
        branches: &[
            Branch {
                asks: Asks::AComparison,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::SomethingElse,
                calls: &[0x016EE1F0, 0x01D75ED0, 0x016EA050],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01D863F0,
        branches: &[
            Branch {
                asks: Asks::IsNothing,
                calls: &[0x010E1810],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[],
            },
        ],
        through_a_thunk: false,
    },
    Asking {
        routine: 0x01D86B20,
        branches: &[
            Branch {
                asks: Asks::TwoTestsJoined,
                calls: &[],
            },
            Branch {
                asks: Asks::Otherwise,
                calls: &[],
            },
            Branch {
                asks: Asks::IsSomething,
                calls: &[0x010DB950],
            },
        ],
        through_a_thunk: false,
    },
];

/// How many there are.
pub const ASKING_COUNT: usize = 1999;

/// Implements part of the several-questions family.
///
/// What one routine does, if it is one of these.
#[must_use]
pub fn asking_at(routine: u32) -> Option<&'static Asking> {
    ASKING
        .binary_search_by_key(&routine, |held| held.routine)
        .ok()
        .map(|at| &ASKING[at])
}

/// Implements part of the several-questions family.
///
/// Whether a routine is a constructor.
///
/// It is if it both makes an instance and does the finishing step — and those
/// two never sit in the same branch, because the flag that decides one decides
/// the other.
#[must_use]
pub fn is_a_constructor(held: &Asking) -> bool {
    held.branches
        .iter()
        .any(|branch| branch.calls.contains(&MAKES_AN_INSTANCE))
        && held
            .branches
            .iter()
            .any(|branch| branch.calls.contains(&AFTER_IT_IS_MADE))
}

/// Implements part of the several-questions family.
///
/// Every routine that is a constructor.
#[must_use]
pub fn constructors() -> Vec<&'static Asking> {
    ASKING
        .iter()
        .filter(|held| is_a_constructor(held))
        .collect()
}

/// Implements part of the several-questions family.
///
/// Every routine that takes an instance apart.
#[must_use]
pub fn take_an_instance_apart() -> Vec<&'static Asking> {
    ASKING
        .iter()
        .filter(|held| {
            held.branches
                .iter()
                .any(|branch| branch.calls.contains(&TAKES_IT_APART))
        })
        .collect()
}

/// Implements part of the several-questions family.
///
/// Whether the two halves of a constructor sit in different branches.
#[must_use]
pub fn halves_are_apart(held: &Asking) -> bool {
    let makes = held
        .branches
        .iter()
        .position(|branch| branch.calls.contains(&MAKES_AN_INSTANCE));
    let finishes = held
        .branches
        .iter()
        .position(|branch| branch.calls.contains(&AFTER_IT_IS_MADE));
    match (makes, finishes) {
        (Some(one), Some(other)) => one != other,
        _ => false,
    }
}

/// Implements part of the several-questions family.
///
/// What the questions are, commonest first.
#[must_use]
pub fn questions() -> Vec<(Asks, usize)> {
    let mut counted: Vec<(Asks, usize)> = Vec::new();
    for branch in ASKING.iter().flat_map(|held| held.branches.iter()) {
        match counted.iter_mut().find(|(asks, _)| *asks == branch.asks) {
            Some((_, seen)) => *seen += 1,
            None => counted.push((branch.asks, 1)),
        }
    }
    counted.sort_by(|left, right| right.1.cmp(&left.1).then(left.0.cmp(&right.0)));
    counted
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn the_count_is_what_the_table_holds() {
        assert_eq!(ASKING.len(), ASKING_COUNT);
    }

    #[test]
    fn the_table_is_sorted_so_it_can_be_searched() {
        assert!(
            ASKING
                .windows(2)
                .all(|pair| pair[0].routine < pair[1].routine)
        );
    }

    #[test]
    fn a_routine_can_be_found_by_its_address() {
        let known = ASKING[0].routine;

        assert!(asking_at(known).is_some());
        assert!(asking_at(0).is_none());
    }

    #[test]
    fn every_routine_asks_at_least_two_questions() {
        for held in &ASKING {
            assert!(held.branches.len() >= 2, "{:#010X}", held.routine);
            assert!(held.branches.len() <= 5, "{:#010X}", held.routine);
        }
    }

    #[test]
    fn over_half_of_them_are_constructors() {
        let built = constructors().len();

        assert!(built * 2 > ASKING.len(), "{built} of {}", ASKING.len());
    }

    #[test]
    fn and_in_every_one_the_two_halves_sit_in_different_branches() {
        // Without a single exception: the flag that decides whether an
        // instance is made decides whether the finishing step is owed.
        for held in constructors() {
            assert!(halves_are_apart(held), "{:#010X}", held.routine);
        }
    }

    #[test]
    fn a_routine_that_only_makes_an_instance_is_not_one() {
        assert!(
            !ASKING
                .iter()
                .filter(|held| !is_a_constructor(held))
                .any(|held| held
                    .branches
                    .iter()
                    .any(|branch| branch.calls.contains(&MAKES_AN_INSTANCE))
                    && held
                        .branches
                        .iter()
                        .any(|branch| branch.calls.contains(&AFTER_IT_IS_MADE)))
        );
    }

    #[test]
    fn some_take_an_instance_apart_instead() {
        let taken = take_an_instance_apart();

        assert!(!taken.is_empty());
        assert!(taken.len() < constructors().len());
    }

    #[test]
    fn the_three_run_time_routines_are_distinct() {
        assert_ne!(MAKES_AN_INSTANCE, AFTER_IT_IS_MADE);
        assert_ne!(MAKES_AN_INSTANCE, TAKES_IT_APART);
        assert_ne!(AFTER_IT_IS_MADE, TAKES_IT_APART);
    }

    #[test]
    fn what_they_ask_is_overwhelmingly_whether_something_is_there() {
        assert_eq!(questions()[0].0, Asks::IsSomething);
        let counted = questions();
        let rest: usize = counted.iter().skip(1).map(|(_, seen)| *seen).sum();

        assert!(counted[0].1 * 2 > rest, "{} against {rest}", counted[0].1);
    }

    #[test]
    fn a_branch_reached_because_everything_else_failed_asks_nothing() {
        let otherwise = ASKING
            .iter()
            .flat_map(|held| held.branches.iter())
            .filter(|branch| branch.asks == Asks::Otherwise)
            .count();

        assert!(otherwise > 0);
    }

    #[test]
    fn some_branches_call_nothing_at_all() {
        let silent = ASKING
            .iter()
            .flat_map(|held| held.branches.iter())
            .filter(|branch| branch.calls.is_empty())
            .count();

        assert!(silent > 0);
    }

    #[test]
    fn but_every_routine_calls_something_somewhere() {
        // Unless everything it called went through a thunk with no recovered
        // function behind it, in which case nothing could be written down.
        for held in &ASKING {
            assert!(
                held.branches.iter().any(|branch| !branch.calls.is_empty()) || held.through_a_thunk,
                "{:#010X}",
                held.routine
            );
        }
    }

    #[test]
    fn every_recorded_call_is_a_function_that_was_recovered() {
        for held in &ASKING {
            for call in held.branches.iter().flat_map(|branch| branch.calls.iter()) {
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
        let thunked = ASKING.iter().filter(|held| held.through_a_thunk).count();

        assert!(thunked > 0);
        assert!(thunked < ASKING.len() / 4);
    }

    #[test]
    fn none_of_these_is_already_spoken_for_by_another_sweep() {
        for held in ASKING.iter().take(200) {
            assert!(crate::two_way_routines::choice_at(held.routine).is_none());
            assert!(crate::guarded_routines::guarded_at(held.routine).is_none());
            assert!(crate::loop_routines::iterates_at(held.routine).is_none());
        }
    }

    #[test]
    fn every_routine_is_listed_once() {
        let mut routines: Vec<u32> = ASKING.iter().map(|held| held.routine).collect();
        let before = routines.len();
        routines.sort_unstable();
        routines.dedup();

        assert_eq!(routines.len(), before);
    }
}
