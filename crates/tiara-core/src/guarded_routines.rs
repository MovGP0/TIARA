//! Routines that ask one question and then do a fixed run of calls.
//!
//! 694 of them. A guard and a sequence: one test, and on one answer a run of
//! calls with nothing in between, on the other nothing at all. Both halves are
//! recoverable, so the routine is — which is what separates these from
//! everything else that branches.
//!
//! What the guards ask is worth recording on its own. Nearly all of them are
//! asking whether something is there: is this pointer set, is this count above
//! nothing, is this flag raised. Very few compare against a particular value.
//! A program that guards this way is one where the common failure being
//! defended against is absence rather than a wrong answer.

// The addresses are written without separators so the port-mapping importer can
// match them against the recovered functions.
#![allow(clippy::unreadable_literal)]

/// What the guard asks.
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord)]
pub enum Asks {
    /// Whether something is above or below another.
    AComparison,
    /// Whether it differs from one.
    IsNotThatValue,
    /// Whether something is missing.
    IsNothing,
    /// Whether something is there at all.
    IsSomething,
    /// Whether something equals a particular value.
    IsThatValue,
    /// Nothing of its own: reached because every question before it failed.
    Otherwise,
    /// Something that fits none of the others.
    SomethingElse,
    /// Two questions at once.
    TwoTestsJoined,
}

/// One routine that is a guard and a sequence.
#[derive(Debug, Clone, Copy)]
pub struct Guarded {
    /// Where it sits.
    pub routine: u32,
    /// What its guard asks.
    pub asks: Asks,
    /// What it calls when the guard lets it through, in order.
    ///
    /// Recovered functions only. A call through an unresolved thunk is not one,
    /// and is not here; see [`Guarded::through_a_thunk`].
    pub calls: &'static [u32],
    /// Whether it also calls through a thunk the decompiler could not resolve.
    pub through_a_thunk: bool,
}

/// Every routine that is one test and then a run of calls.
pub static GUARDED: [Guarded; 694] = [
    Guarded {
        routine: 0x0040A0D0,
        asks: Asks::IsSomething,
        calls: &[0x0040A0F0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00412500,
        asks: Asks::AComparison,
        calls: &[0x004121F0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x004127D0,
        asks: Asks::AComparison,
        calls: &[0x004127A0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x004127F0,
        asks: Asks::AComparison,
        calls: &[0x004127A0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x004185B0,
        asks: Asks::AComparison,
        calls: &[0x00418240],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0041C360,
        asks: Asks::IsNotThatValue,
        calls: &[0x00411F00],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0041C380,
        asks: Asks::IsNotThatValue,
        calls: &[0x004120D0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0041C990,
        asks: Asks::IsNotThatValue,
        calls: &[0x00411F00],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0041CA40,
        asks: Asks::IsNotThatValue,
        calls: &[0x004120D0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0041D420,
        asks: Asks::IsSomething,
        calls: &[0x0041CF50],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0041D450,
        asks: Asks::IsSomething,
        calls: &[0x0041CD20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0041D560,
        asks: Asks::IsSomething,
        calls: &[0x004098E0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x004412C0,
        asks: Asks::IsNotThatValue,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00442C10,
        asks: Asks::IsSomething,
        calls: &[0x004095F0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00442C30,
        asks: Asks::IsSomething,
        calls: &[0x004095F0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00449150,
        asks: Asks::IsNothing,
        calls: &[0x00448E20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00449190,
        asks: Asks::IsNothing,
        calls: &[0x00448AD0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0044E1C0,
        asks: Asks::IsSomething,
        calls: &[0x00410CF0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00460CF0,
        asks: Asks::IsSomething,
        calls: &[0x00461840, 0x00460B80],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0046BD60,
        asks: Asks::AComparison,
        calls: &[0x00461840],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x004A4F90,
        asks: Asks::IsSomething,
        calls: &[0x005974F0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x004AA1E0,
        asks: Asks::IsSomething,
        calls: &[0x004AA3E0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x004AE140,
        asks: Asks::IsSomething,
        calls: &[0x004ADF20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x004AF550,
        asks: Asks::AComparison,
        calls: &[0x004AF060],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x004B6880,
        asks: Asks::TwoTestsJoined,
        calls: &[0x004B6610],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x004B9DC0,
        asks: Asks::IsSomething,
        calls: &[0x004B89E0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x004D0F90,
        asks: Asks::TwoTestsJoined,
        calls: &[0x004D1280],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x004D10C0,
        asks: Asks::IsNothing,
        calls: &[0x004D1020],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x004D1120,
        asks: Asks::IsSomething,
        calls: &[0x004D1A20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x004D19F0,
        asks: Asks::IsNothing,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x004D2470,
        asks: Asks::IsNothing,
        calls: &[0x004D2C10],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00527560,
        asks: Asks::IsSomething,
        calls: &[0x00527500],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00534B80,
        asks: Asks::TwoTestsJoined,
        calls: &[0x00534B60, 0x004134C0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x005647F0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00572090],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00599400,
        asks: Asks::IsSomething,
        calls: &[0x004095F0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00599950,
        asks: Asks::IsSomething,
        calls: &[0x004185D0, 0x004095F0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00599CA0,
        asks: Asks::IsSomething,
        calls: &[0x004095F0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x005A1A90,
        asks: Asks::IsSomething,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x005B2750,
        asks: Asks::IsNothing,
        calls: &[0x004D3000],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x005DADD0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x005DB030,
        asks: Asks::IsNotThatValue,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x005EE0D0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x005EE7D0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x005FB100,
        asks: Asks::TwoTestsJoined,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x005FBCE0,
        asks: Asks::IsSomething,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x005FBFE0,
        asks: Asks::IsSomething,
        calls: &[0x00427930],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x005FC000,
        asks: Asks::IsSomething,
        calls: &[0x00427FF0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x005FFD60,
        asks: Asks::IsSomething,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x005FFD90,
        asks: Asks::IsSomething,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x005FFDC0,
        asks: Asks::IsSomething,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00601990,
        asks: Asks::IsNothing,
        calls: &[0x00601980],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00605BC0,
        asks: Asks::IsNothing,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x006087C0,
        asks: Asks::IsSomething,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00609D30,
        asks: Asks::IsSomething,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x0060A440,
        asks: Asks::IsSomething,
        calls: &[0x00607910],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0060BE00,
        asks: Asks::IsSomething,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00616F40,
        asks: Asks::IsNothing,
        calls: &[0x00616E60],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00619D00,
        asks: Asks::IsNothing,
        calls: &[0x00619660],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006245B0,
        asks: Asks::IsSomething,
        calls: &[0x00624580],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00626490,
        asks: Asks::IsNothing,
        calls: &[0x00452DC0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006264E0,
        asks: Asks::IsSomething,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x0064B1A0,
        asks: Asks::IsSomething,
        calls: &[0x005FFB10, 0x004AFD50],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x0064B200,
        asks: Asks::IsNotThatValue,
        calls: &[0x0064B1A0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0064C450,
        asks: Asks::IsSomething,
        calls: &[0x00654320],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0064DC60,
        asks: Asks::IsNotThatValue,
        calls: &[0x0064FCA0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0064DD10,
        asks: Asks::AComparison,
        calls: &[0x0064DCD0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0064DD30,
        asks: Asks::AComparison,
        calls: &[0x0064DCF0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0064DE80,
        asks: Asks::IsNotThatValue,
        calls: &[0x0064FCA0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0064DFB0,
        asks: Asks::IsNotThatValue,
        calls: &[0x0064FCA0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0064E140,
        asks: Asks::IsNotThatValue,
        calls: &[0x0064FCA0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00650EF0,
        asks: Asks::IsNothing,
        calls: &[0x007F9920, 0x00647F40, 0x00411550],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00651320,
        asks: Asks::IsNotThatValue,
        calls: &[0x0064FCA0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00651610,
        asks: Asks::IsSomething,
        calls: &[0x0064DF10],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00655B90,
        asks: Asks::IsSomething,
        calls: &[0x0064FCA0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00656ED0,
        asks: Asks::IsSomething,
        calls: &[0x0065ED10],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00657310,
        asks: Asks::IsNothing,
        calls: &[0x0065B870],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00659460,
        asks: Asks::IsNotThatValue,
        calls: &[0x0064FCA0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006596F0,
        asks: Asks::IsSomething,
        calls: &[0x0064E1D0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0065AA40,
        asks: Asks::TwoTestsJoined,
        calls: &[0x007F9B70, 0x0064FCA0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0065BB50,
        asks: Asks::IsNotThatValue,
        calls: &[0x0064FCA0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0065BB80,
        asks: Asks::IsNotThatValue,
        calls: &[0x0064FCA0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0065D5D0,
        asks: Asks::IsNotThatValue,
        calls: &[0x0064FCA0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0065D610,
        asks: Asks::IsNotThatValue,
        calls: &[0x0064FCA0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0065D640,
        asks: Asks::IsNotThatValue,
        calls: &[0x0064FCA0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0065F080,
        asks: Asks::IsSomething,
        calls: &[0x0065ED10],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00660160,
        asks: Asks::TwoTestsJoined,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x006601E0,
        asks: Asks::IsSomething,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00660200,
        asks: Asks::IsSomething,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00663CB0,
        asks: Asks::IsNothing,
        calls: &[0x00660AF0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00664F50,
        asks: Asks::TwoTestsJoined,
        calls: &[0x00452DC0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00666780,
        asks: Asks::IsThatValue,
        calls: &[0x006667A0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00667C30,
        asks: Asks::IsSomething,
        calls: &[0x004AE7E0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00668090,
        asks: Asks::IsNotThatValue,
        calls: &[0x0064FCA0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0067FD40,
        asks: Asks::IsNotThatValue,
        calls: &[0x00411550],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0067FEC0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00411550],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006804A0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00681940],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006804C0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00681940, 0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006804F0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00680570,
        asks: Asks::IsNotThatValue,
        calls: &[0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00681F70,
        asks: Asks::TwoTestsJoined,
        calls: &[0x00411550],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00682EE0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00682F00,
        asks: Asks::IsNotThatValue,
        calls: &[0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00683B50,
        asks: Asks::AComparison,
        calls: &[0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00683C50,
        asks: Asks::IsNotThatValue,
        calls: &[0x0064FCA0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006842D0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00685670,
        asks: Asks::IsNotThatValue,
        calls: &[0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00685690,
        asks: Asks::AComparison,
        calls: &[0x0065B830, 0x00470120],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00688E60,
        asks: Asks::IsNothing,
        calls: &[0x00411550],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0068BB60,
        asks: Asks::IsNotThatValue,
        calls: &[0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0068BB80,
        asks: Asks::IsNotThatValue,
        calls: &[0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0068BC30,
        asks: Asks::TwoTestsJoined,
        calls: &[0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0068C150,
        asks: Asks::IsNotThatValue,
        calls: &[0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00691720,
        asks: Asks::IsNothing,
        calls: &[0x0068FDA0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00698600,
        asks: Asks::IsThatValue,
        calls: &[0x00664D10, 0x00786090],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x006D53B0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006D53D0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006D53F0,
        asks: Asks::IsNotThatValue,
        calls: &[0x006D3EF0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006D5610,
        asks: Asks::IsNothing,
        calls: &[0x0065B870],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x006D5DB0,
        asks: Asks::IsNothing,
        calls: &[0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006D68C0,
        asks: Asks::IsNotThatValue,
        calls: &[0x006D6950],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006D6980,
        asks: Asks::IsSomething,
        calls: &[0x006D79E0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006D7380,
        asks: Asks::TwoTestsJoined,
        calls: &[0x006D7820, 0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006D8430,
        asks: Asks::IsNotThatValue,
        calls: &[0x004B1830],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006D8460,
        asks: Asks::IsNotThatValue,
        calls: &[0x006D8480],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006D8560,
        asks: Asks::IsNotThatValue,
        calls: &[0x004B1830],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006D8580,
        asks: Asks::IsNotThatValue,
        calls: &[0x004B1830],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006D85A0,
        asks: Asks::IsNotThatValue,
        calls: &[0x004B1830],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006D8600,
        asks: Asks::IsNotThatValue,
        calls: &[0x004B1830],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006D9190,
        asks: Asks::IsNotThatValue,
        calls: &[0x006D9B20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006D91B0,
        asks: Asks::IsSomething,
        calls: &[0x0064DF10, 0x005FC860],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006D9EC0,
        asks: Asks::IsNotThatValue,
        calls: &[0x004B1830],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006D9EF0,
        asks: Asks::IsNotThatValue,
        calls: &[0x006D9F10],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006DA070,
        asks: Asks::IsNotThatValue,
        calls: &[0x004B1830],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006DA140,
        asks: Asks::IsNotThatValue,
        calls: &[0x004B1830],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006DA200,
        asks: Asks::IsNotThatValue,
        calls: &[0x004B1830],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006DA220,
        asks: Asks::IsNotThatValue,
        calls: &[0x004B1830],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006DA290,
        asks: Asks::IsNotThatValue,
        calls: &[0x004B1830],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006DAEA0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006DAEC0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006DAEE0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006DD8F0,
        asks: Asks::IsNothing,
        calls: &[0x006DC7A0],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x006DE140,
        asks: Asks::IsNothing,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006DEDC0,
        asks: Asks::IsSomething,
        calls: &[0x006DF710],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006DF3A0,
        asks: Asks::IsSomething,
        calls: &[0x006DD340, 0x006DF330],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006E1F40,
        asks: Asks::IsNotThatValue,
        calls: &[0x006D3EF0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006E1F70,
        asks: Asks::IsNotThatValue,
        calls: &[0x006D3EF0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006E1FA0,
        asks: Asks::IsNotThatValue,
        calls: &[0x006D3EF0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006E1FD0,
        asks: Asks::IsNotThatValue,
        calls: &[0x006D3EF0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006E20E0,
        asks: Asks::IsNotThatValue,
        calls: &[0x006D3EF0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006E2110,
        asks: Asks::IsNotThatValue,
        calls: &[0x006D3EF0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006E2140,
        asks: Asks::IsNotThatValue,
        calls: &[0x006D3EF0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006E2170,
        asks: Asks::IsNotThatValue,
        calls: &[0x006D3EF0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006E21A0,
        asks: Asks::IsNotThatValue,
        calls: &[0x006D3EF0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006E54C0,
        asks: Asks::TwoTestsJoined,
        calls: &[0x004AEC30, 0x006DD1E0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006E5620,
        asks: Asks::IsNotThatValue,
        calls: &[0x006E5A00],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006E6A70,
        asks: Asks::IsNotThatValue,
        calls: &[0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006E6A90,
        asks: Asks::IsNotThatValue,
        calls: &[0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006EACB0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006EACD0,
        asks: Asks::IsNotThatValue,
        calls: &[0x0065B870],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x006ECBF0,
        asks: Asks::IsNotThatValue,
        calls: &[0x006ECDF0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006ED920,
        asks: Asks::IsNotThatValue,
        calls: &[0x006ED570],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006ED940,
        asks: Asks::IsNotThatValue,
        calls: &[0x004B1830],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006ED960,
        asks: Asks::IsNotThatValue,
        calls: &[0x004B1830],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006F15C0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006F15E0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006F1600,
        asks: Asks::IsNotThatValue,
        calls: &[0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006F3150,
        asks: Asks::IsNotThatValue,
        calls: &[0x006F2DB0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006F3170,
        asks: Asks::IsNotThatValue,
        calls: &[0x006F2DB0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006F3190,
        asks: Asks::IsNotThatValue,
        calls: &[0x006F2DB0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006F31C0,
        asks: Asks::IsNotThatValue,
        calls: &[0x006EFE10, 0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006F3200,
        asks: Asks::IsNotThatValue,
        calls: &[0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006F3220,
        asks: Asks::IsNotThatValue,
        calls: &[0x006F2DB0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006F3240,
        asks: Asks::IsNotThatValue,
        calls: &[0x006F2DB0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006F3260,
        asks: Asks::IsNotThatValue,
        calls: &[0x006F2DB0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006F32A0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006F3340,
        asks: Asks::IsNotThatValue,
        calls: &[0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006F3360,
        asks: Asks::IsNotThatValue,
        calls: &[0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006F3850,
        asks: Asks::IsNotThatValue,
        calls: &[0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006F3870,
        asks: Asks::IsNotThatValue,
        calls: &[0x006D3EF0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006FCAC0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x006FD3B0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00701DB0,
        asks: Asks::IsNothing,
        calls: &[0x00427AB0],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00702370,
        asks: Asks::IsSomething,
        calls: &[0x00701CA0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x007028A0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00702CE0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00703460,
        asks: Asks::IsNotThatValue,
        calls: &[0x0065B870, 0x0064FCA0],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x007035E0,
        asks: Asks::IsNotThatValue,
        calls: &[0x0065B870, 0x0064FCA0],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00703660,
        asks: Asks::IsNotThatValue,
        calls: &[0x0065B870, 0x0064FCA0, 0x0064FCA0],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00705EA0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00705D00],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0070AFE0,
        asks: Asks::IsNothing,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00710300,
        asks: Asks::IsNothing,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00710360,
        asks: Asks::IsNothing,
        calls: &[0x00710F10],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00710F90,
        asks: Asks::IsSomething,
        calls: &[0x00777CD0, 0x00779380, 0x005FBF20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00711270,
        asks: Asks::IsSomething,
        calls: &[0x004095F0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x007265C0,
        asks: Asks::IsSomething,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x0072A2B0,
        asks: Asks::IsNotThatValue,
        calls: &[0x0072A200],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0072B420,
        asks: Asks::IsSomething,
        calls: &[0x0072A690],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0072B5C0,
        asks: Asks::IsSomething,
        calls: &[0x00414AD0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0072B630,
        asks: Asks::IsSomething,
        calls: &[0x0072A690],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0072DA90,
        asks: Asks::IsThatValue,
        calls: &[0x00411550],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00741FE0,
        asks: Asks::IsNotThatValue,
        calls: &[0x007420C0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00742030,
        asks: Asks::IsNotThatValue,
        calls: &[0x007420C0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00742060,
        asks: Asks::IsNotThatValue,
        calls: &[0x007420C0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00742090,
        asks: Asks::IsNotThatValue,
        calls: &[0x007420C0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00742EB0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00742DE0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00742ED0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00742DE0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00743910,
        asks: Asks::IsNotThatValue,
        calls: &[0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00744460,
        asks: Asks::IsNotThatValue,
        calls: &[0x00654450],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x007444D0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00654450],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x007461A0,
        asks: Asks::IsNotThatValue,
        calls: &[0x004B1830],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00749EC0,
        asks: Asks::IsNotThatValue,
        calls: &[0x004AEAC0, 0x004AEAC0, 0x004AEDB0, 0x004AEDB0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0074B2C0,
        asks: Asks::IsNothing,
        calls: &[0x004AEBA0, 0x0064D480, 0x00411550],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0074B550,
        asks: Asks::IsNotThatValue,
        calls: &[0x0074B570],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0074D4A0,
        asks: Asks::IsNothing,
        calls: &[0x0074CBB0, 0x004D26C0, 0x0067FD90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00786B10,
        asks: Asks::IsSomething,
        calls: &[0x00742EB0, 0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x007872C0,
        asks: Asks::IsSomething,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00788D90,
        asks: Asks::IsNotThatValue,
        calls: &[0x00788D30],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0078A130,
        asks: Asks::IsSomething,
        calls: &[0x00742EB0, 0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x007D53C0,
        asks: Asks::IsNothing,
        calls: &[0x007D5830],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x007D5D90,
        asks: Asks::TwoTestsJoined,
        calls: &[0x007D56E0, 0x0060D3B0],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x007D7690,
        asks: Asks::IsSomething,
        calls: &[0x007D56E0, 0x007D6E60],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x007E3DF0,
        asks: Asks::IsThatValue,
        calls: &[0x007E40C0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x007E6870,
        asks: Asks::IsNotThatValue,
        calls: &[0x007E5850],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x007E6A50,
        asks: Asks::IsThatValue,
        calls: &[0x007E5850],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x007E7030,
        asks: Asks::IsNotThatValue,
        calls: &[0x007E6540],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x007E7050,
        asks: Asks::IsNotThatValue,
        calls: &[0x007E7070],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x007E70B0,
        asks: Asks::IsSomething,
        calls: &[0x004113F0, 0x007E7030],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x007E7300,
        asks: Asks::IsNothing,
        calls: &[0x007E57F0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x007FA1A0,
        asks: Asks::TwoTestsJoined,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x007FA670,
        asks: Asks::IsNotThatValue,
        calls: &[0x007FB150],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x007FA810,
        asks: Asks::IsNotThatValue,
        calls: &[0x007FB150],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x007FA830,
        asks: Asks::IsNotThatValue,
        calls: &[0x007FB150],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x007FB090,
        asks: Asks::AComparison,
        calls: &[0x007F9EC0, 0x007F9EC0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x007FB920,
        asks: Asks::IsNotThatValue,
        calls: &[0x005A14E0, 0x0081E360, 0x005A1A00],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x007FBB80,
        asks: Asks::IsNotThatValue,
        calls: &[0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x007FC120,
        asks: Asks::IsSomething,
        calls: &[0x0065ED10],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x007FE180,
        asks: Asks::IsSomething,
        calls: &[0x0065ED10],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x007FEF20,
        asks: Asks::IsNothing,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x007FFE80,
        asks: Asks::IsSomething,
        calls: &[0x0065ED10],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00801CF0,
        asks: Asks::IsSomething,
        calls: &[0x004AEAC0, 0x0065ED10],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x008035F0,
        asks: Asks::IsSomething,
        calls: &[0x007E5C80],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x008068A0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00806770],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x008068C0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00806770],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x008068E0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00806770],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00806F40,
        asks: Asks::TwoTestsJoined,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00806F90,
        asks: Asks::TwoTestsJoined,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00806FD0,
        asks: Asks::TwoTestsJoined,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00807010,
        asks: Asks::TwoTestsJoined,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00807050,
        asks: Asks::TwoTestsJoined,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00808040,
        asks: Asks::IsNothing,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00809E70,
        asks: Asks::IsSomething,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00809E90,
        asks: Asks::IsSomething,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x0080E550,
        asks: Asks::IsSomething,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00813D20,
        asks: Asks::TwoTestsJoined,
        calls: &[0x00813D40],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0081A890,
        asks: Asks::TwoTestsJoined,
        calls: &[0x0081AA00],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0081D250,
        asks: Asks::IsThatValue,
        calls: &[0x00785C20, 0x0065B870],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00827690,
        asks: Asks::TwoTestsJoined,
        calls: &[0x004AEE50, 0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x008279D0,
        asks: Asks::TwoTestsJoined,
        calls: &[0x00827890, 0x008278F0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0082A780,
        asks: Asks::IsNotThatValue,
        calls: &[0x0082A670],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0082A890,
        asks: Asks::IsNotThatValue,
        calls: &[0x0082A670],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0082B0A0,
        asks: Asks::IsNotThatValue,
        calls: &[0x0064E770],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00844D40,
        asks: Asks::TwoTestsJoined,
        calls: &[0x00845220],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x008483B0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00843E20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00848960,
        asks: Asks::IsNotThatValue,
        calls: &[0x00844D40],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00848A30,
        asks: Asks::IsNotThatValue,
        calls: &[0x00843E20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00848BD0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00848D30,
        asks: Asks::IsNotThatValue,
        calls: &[0x00844D40],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0084BEC0,
        asks: Asks::IsNotThatValue,
        calls: &[0x0084BD30, 0x0084BBF0, 0x0084BDC0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x008502C0,
        asks: Asks::IsSomething,
        calls: &[0x00850300, 0x0064E190],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0085A430,
        asks: Asks::IsSomething,
        calls: &[0x0082BA70],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0086CCA0,
        asks: Asks::IsSomething,
        calls: &[0x0086CC50, 0x0086CF90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x008949A0,
        asks: Asks::IsNothing,
        calls: &[0x00452DC0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x008E6BA0,
        asks: Asks::IsNotThatValue,
        calls: &[0x008E6810],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x008F4570,
        asks: Asks::IsNotThatValue,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x008F94D0,
        asks: Asks::TwoTestsJoined,
        calls: &[0x008F9330],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0096F650,
        asks: Asks::IsNothing,
        calls: &[0x00414520],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x009EA5F0,
        asks: Asks::TwoTestsJoined,
        calls: &[0x009EA420],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x009EBD50,
        asks: Asks::IsNotThatValue,
        calls: &[0x0065B870],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x009EC460,
        asks: Asks::TwoTestsJoined,
        calls: &[0x00680AD0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x009ECE00,
        asks: Asks::IsSomething,
        calls: &[0x005FFA40],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x009ED200,
        asks: Asks::IsSomething,
        calls: &[0x005FFA40],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00A01AB0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00A02C10, 0x00A02C10, 0x00409A70],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00A0A230,
        asks: Asks::IsSomething,
        calls: &[0x00A1BD80],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00A0B720,
        asks: Asks::IsNothing,
        calls: &[0x00A0A5B0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00A0BB50,
        asks: Asks::IsNotThatValue,
        calls: &[0x00A0ABB0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00A0BC70,
        asks: Asks::IsNotThatValue,
        calls: &[0x00A0ABB0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00A0BCB0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00A0ABB0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00A0BCF0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00A0ABB0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00A0BD30,
        asks: Asks::IsNotThatValue,
        calls: &[0x00A0ABB0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00A3ECC0,
        asks: Asks::IsNothing,
        calls: &[0x00A3E950],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00A46D60,
        asks: Asks::IsSomething,
        calls: &[0x00410F20, 0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00A76C40,
        asks: Asks::IsSomething,
        calls: &[0x005FFA40],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00A783D0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00A78210],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00A783F0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00A78210],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00A7C690,
        asks: Asks::IsNotThatValue,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00A94360,
        asks: Asks::IsNothing,
        calls: &[0x00410E60],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00A945D0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00A94830, 0x00A943C0, 0x00A947A0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00A94620,
        asks: Asks::IsNotThatValue,
        calls: &[0x00A94830, 0x00A943C0, 0x00A947A0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00AA16B0,
        asks: Asks::IsSomething,
        calls: &[0x005FFA40],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00AA1CC0,
        asks: Asks::IsSomething,
        calls: &[0x00A74EB0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00AA7190,
        asks: Asks::IsSomething,
        calls: &[0x005FFA40],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00AF5BA0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00AFE370],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00AF96D0,
        asks: Asks::IsNothing,
        calls: &[0x00A7A070],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00AFE260,
        asks: Asks::IsSomething,
        calls: &[0x0064DBE0, 0x0064DBE0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00AFE4C0,
        asks: Asks::IsSomething,
        calls: &[0x00AF5FB0, 0x00AF0C00, 0x00AF6000],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00AFEC50,
        asks: Asks::TwoTestsJoined,
        calls: &[0x00AA8970],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00AFFB40,
        asks: Asks::IsSomething,
        calls: &[0x00AF4BD0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00B067F0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00B07B60,
        asks: Asks::IsNotThatValue,
        calls: &[0x0064DBE0, 0x00B07930],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00B07BA0,
        asks: Asks::IsNotThatValue,
        calls: &[0x0064DBE0, 0x00B07930],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00B07E30,
        asks: Asks::IsSomething,
        calls: &[0x0064DBE0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00B0ADF0,
        asks: Asks::AComparison,
        calls: &[0x0064DBE0, 0x0084E470],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00B11730,
        asks: Asks::IsNothing,
        calls: &[0x0083F820],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00B19400,
        asks: Asks::TwoTestsJoined,
        calls: &[0x004AEAC0, 0x00418590, 0x004AE870],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00B22460,
        asks: Asks::TwoTestsJoined,
        calls: &[0x004AE870],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00B39400,
        asks: Asks::IsSomething,
        calls: &[0x00B39AA0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00B39E00,
        asks: Asks::AComparison,
        calls: &[0x00B146C0, 0x004134C0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00B4E700,
        asks: Asks::IsSomething,
        calls: &[0x00B4FC80],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00B4FB10,
        asks: Asks::AComparison,
        calls: &[0x00B146C0, 0x004134C0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00B508F0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00B1BCB0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00B50970,
        asks: Asks::IsSomething,
        calls: &[0x00B53FE0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00B51A80,
        asks: Asks::IsNotThatValue,
        calls: &[0x00B1BBD0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00B51B80,
        asks: Asks::IsSomething,
        calls: &[0x00B53450],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00B5B530,
        asks: Asks::AComparison,
        calls: &[0x00B5AE40],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00B5C860,
        asks: Asks::IsNothing,
        calls: &[0x00B30F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00B952F0,
        asks: Asks::IsNotThatValue,
        calls: &[0x004095F0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00B95CE0,
        asks: Asks::TwoTestsJoined,
        calls: &[0x004095F0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00BADF70,
        asks: Asks::AComparison,
        calls: &[0x005999B0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00BC2690,
        asks: Asks::IsNotThatValue,
        calls: &[0x00BC1C40],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00BC5CA0,
        asks: Asks::IsSomething,
        calls: &[0x004095F0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00BC5DF0,
        asks: Asks::TwoTestsJoined,
        calls: &[0x00BC5D80],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00BD1BB0,
        asks: Asks::IsSomething,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00BD1BD0,
        asks: Asks::IsSomething,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00BD1BF0,
        asks: Asks::IsSomething,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00BD4070,
        asks: Asks::IsSomething,
        calls: &[0x00BD38F0, 0x00BD3B50],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00BD42B0,
        asks: Asks::IsNothing,
        calls: &[0x00BD38F0, 0x00BD39B0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00BD4450,
        asks: Asks::IsSomething,
        calls: &[0x004095F0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00BD4740,
        asks: Asks::IsSomething,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00BD47E0,
        asks: Asks::IsSomething,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00BE6F30,
        asks: Asks::IsNotThatValue,
        calls: &[0x00BE74B0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00BE7160,
        asks: Asks::AComparison,
        calls: &[0x00409620],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00BE71A0,
        asks: Asks::AComparison,
        calls: &[0x00409620],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00BF3E30,
        asks: Asks::IsSomething,
        calls: &[0x004095F0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00BFAF70,
        asks: Asks::IsNotThatValue,
        calls: &[0x00C0DC30],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00BFB420,
        asks: Asks::IsNotThatValue,
        calls: &[0x00C0DDC0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00BFB510,
        asks: Asks::IsNotThatValue,
        calls: &[0x00BFD160],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00C032B0,
        asks: Asks::AComparison,
        calls: &[0x00BD11B0, 0x00BD11B0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00C03470,
        asks: Asks::IsNotThatValue,
        calls: &[0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00C03490,
        asks: Asks::IsNotThatValue,
        calls: &[0x00BF3BB0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00C03680,
        asks: Asks::IsNotThatValue,
        calls: &[0x00C03500],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00C036A0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00C03500],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00C086C0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00C086E0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00C0DD50,
        asks: Asks::IsNotThatValue,
        calls: &[0x00C0A950],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00C104B0,
        asks: Asks::IsSomething,
        calls: &[0x00C104F0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00C111C0,
        asks: Asks::IsNothing,
        calls: &[0x00BF3760],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00C25CC0,
        asks: Asks::IsSomething,
        calls: &[0x004B89E0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00C28BA0,
        asks: Asks::IsSomething,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00C28C00,
        asks: Asks::IsSomething,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00C29400,
        asks: Asks::IsSomething,
        calls: &[0x004095F0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00C299C0,
        asks: Asks::IsSomething,
        calls: &[0x004095F0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00C2C700,
        asks: Asks::IsSomething,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00C2C770,
        asks: Asks::IsSomething,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00C32960,
        asks: Asks::IsSomething,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00C32A30,
        asks: Asks::IsSomething,
        calls: &[0x00742ED0, 0x00742EB0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00C32A70,
        asks: Asks::IsSomething,
        calls: &[0x00C32AC0, 0x00410F20, 0x00C31CE0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00C32ED0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00C35490, 0x00C24650, 0x00C34390],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00C32FA0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00C35490, 0x00C34390],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00C32FF0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00C35490, 0x00C34390],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00C33030,
        asks: Asks::IsNotThatValue,
        calls: &[0x00C35490],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00C33070,
        asks: Asks::IsNotThatValue,
        calls: &[0x00C35490],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00C34DE0,
        asks: Asks::IsSomething,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00C39270,
        asks: Asks::IsNotThatValue,
        calls: &[0x0064E770],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00C39290,
        asks: Asks::IsNotThatValue,
        calls: &[0x0064E770],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00C392B0,
        asks: Asks::IsNotThatValue,
        calls: &[0x0064E770],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00C392D0,
        asks: Asks::IsNotThatValue,
        calls: &[0x0064E770],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00C392F0,
        asks: Asks::IsNotThatValue,
        calls: &[0x0064E770],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00C46C90,
        asks: Asks::IsSomething,
        calls: &[0x0044D490, 0x004134C0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00C51660,
        asks: Asks::IsSomething,
        calls: &[0x00C51B10],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00C51690,
        asks: Asks::IsSomething,
        calls: &[0x00C51BC0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00C56E60,
        asks: Asks::IsNotThatValue,
        calls: &[0x00C56F60],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00C56EB0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00C55C70, 0x00C55C70, 0x00C55F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00C5C790,
        asks: Asks::AComparison,
        calls: &[0x00611620],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00C629C0,
        asks: Asks::IsThatValue,
        calls: &[0x00805200],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00C72110,
        asks: Asks::TwoTestsJoined,
        calls: &[0x004AEE30, 0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00C72430,
        asks: Asks::TwoTestsJoined,
        calls: &[0x00C722F0, 0x00C72350],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00C73940,
        asks: Asks::IsNotThatValue,
        calls: &[0x0064E770],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00C7DA60,
        asks: Asks::IsNothing,
        calls: &[0x00C7D520],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00C8FFF0,
        asks: Asks::TwoTestsJoined,
        calls: &[0x00C8F050],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00C90070,
        asks: Asks::IsNotThatValue,
        calls: &[0x00C8FFF0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00CAC7E0,
        asks: Asks::IsSomething,
        calls: &[0x00C8AC30],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00CB9D10,
        asks: Asks::IsNothing,
        calls: &[0x00882AA0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00CC2060,
        asks: Asks::IsNotThatValue,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00CEA4D0,
        asks: Asks::TwoTestsJoined,
        calls: &[0x00CE94C0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00CEBF30,
        asks: Asks::IsSomething,
        calls: &[0x004AEE50],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00CF8F80,
        asks: Asks::AComparison,
        calls: &[0x00CF8CE0, 0x004134C0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00CF9C90,
        asks: Asks::IsNotThatValue,
        calls: &[0x00CF9950],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00D03CB0,
        asks: Asks::AComparison,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00D03D20,
        asks: Asks::IsSomething,
        calls: &[0x004B8BA0, 0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00D07180,
        asks: Asks::IsSomething,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00D2F190,
        asks: Asks::IsSomething,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00D2F1B0,
        asks: Asks::IsSomething,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00D3D4B0,
        asks: Asks::IsSomething,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00D3E260,
        asks: Asks::TwoTestsJoined,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00D3F700,
        asks: Asks::TwoTestsJoined,
        calls: &[0x00D3F730],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00D768D0,
        asks: Asks::TwoTestsJoined,
        calls: &[0x0065B870],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00D9D100,
        asks: Asks::IsSomething,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00DD8C30,
        asks: Asks::IsNothing,
        calls: &[0x00DD8D00],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00DDA090,
        asks: Asks::IsSomething,
        calls: &[0x006245B0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00DDE660,
        asks: Asks::IsSomething,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x00DE0CB0,
        asks: Asks::IsNothing,
        calls: &[0x00DDE660],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00E08170,
        asks: Asks::TwoTestsJoined,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00E7B2E0,
        asks: Asks::IsSomething,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00EF4070,
        asks: Asks::IsSomething,
        calls: &[0x01D311C0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00EF4210,
        asks: Asks::IsSomething,
        calls: &[0x004095F0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00EF7D60,
        asks: Asks::IsNothing,
        calls: &[0x0080CC70],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00EF9410,
        asks: Asks::IsSomething,
        calls: &[0x00EF8050, 0x00EF7F30, 0x00EF8050, 0x00EF81F0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00F01EB0,
        asks: Asks::IsSomething,
        calls: &[0x00F01EF0, 0x0064E190],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00F025D0,
        asks: Asks::IsSomething,
        calls: &[0x0064E030],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00F03500,
        asks: Asks::TwoTestsJoined,
        calls: &[0x004B1830],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00F03530,
        asks: Asks::IsNotThatValue,
        calls: &[0x004B1830],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00F03550,
        asks: Asks::TwoTestsJoined,
        calls: &[0x004B1830],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00F03710,
        asks: Asks::TwoTestsJoined,
        calls: &[0x004B1830],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00F0FFE0,
        asks: Asks::IsThatValue,
        calls: &[0x00B90090, 0x01AE24A0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00F10030,
        asks: Asks::IsThatValue,
        calls: &[0x00B90090, 0x01AE24A0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00F10080,
        asks: Asks::IsThatValue,
        calls: &[0x00B90090, 0x01AE24A0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00F100D0,
        asks: Asks::IsThatValue,
        calls: &[0x00B90090, 0x01AE24A0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00F10120,
        asks: Asks::IsThatValue,
        calls: &[0x00B90090, 0x01AE24A0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00F10170,
        asks: Asks::IsThatValue,
        calls: &[0x00B90090, 0x01AE24A0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00F2D610,
        asks: Asks::AComparison,
        calls: &[0x00410A90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00F43E90,
        asks: Asks::IsSomething,
        calls: &[0x00805200],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x00F8E500,
        asks: Asks::IsSomething,
        calls: &[0x00F8D6E0, 0x00F8D840],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01053D10,
        asks: Asks::IsSomething,
        calls: &[0x00F8D160],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x010852B0,
        asks: Asks::TwoTestsJoined,
        calls: &[0x01084E70],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01088A80,
        asks: Asks::IsThatValue,
        calls: &[0x01088AA0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0108A6A0,
        asks: Asks::IsThatValue,
        calls: &[0x00414AD0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0108A9C0,
        asks: Asks::IsNothing,
        calls: &[0x01087A10],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0108B260,
        asks: Asks::IsSomething,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0109EBC0,
        asks: Asks::IsSomething,
        calls: &[0x00442620, 0x00410F20, 0x0109E470],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0109ECE0,
        asks: Asks::IsSomething,
        calls: &[0x00442620, 0x0109E470],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0109EDF0,
        asks: Asks::IsThatValue,
        calls: &[0x00414AD0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0109F070,
        asks: Asks::IsNothing,
        calls: &[0x00F85520, 0x00F84B70],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x010A3AE0,
        asks: Asks::IsNothing,
        calls: &[0x010A38B0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x010A4D40,
        asks: Asks::IsSomething,
        calls: &[0x010A3D40],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x010BC2F0,
        asks: Asks::IsNothing,
        calls: &[0x01CF0B60],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x010BC310,
        asks: Asks::IsNothing,
        calls: &[0x01CF09C0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x010BC330,
        asks: Asks::IsNothing,
        calls: &[0x01CF0A40],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x010BC350,
        asks: Asks::IsNothing,
        calls: &[0x01CF0B00],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x010D3640,
        asks: Asks::AComparison,
        calls: &[0x00B94E60],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x010D3830,
        asks: Asks::AComparison,
        calls: &[0x00B94E60],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x010D3860,
        asks: Asks::AComparison,
        calls: &[0x00B94E60, 0x013B4BC0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x010E3FE0,
        asks: Asks::IsSomething,
        calls: &[0x0064E770],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x010E4410,
        asks: Asks::IsSomething,
        calls: &[0x00F834F0, 0x0064DBE0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x010E4460,
        asks: Asks::IsSomething,
        calls: &[0x0064DBE0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x010F7750,
        asks: Asks::IsNothing,
        calls: &[0x0065B870, 0x00F83340, 0x010F77A0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x010F7E00,
        asks: Asks::IsSomething,
        calls: &[0x0082A6C0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x010F7E40,
        asks: Asks::IsSomething,
        calls: &[0x0082A6C0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01112870,
        asks: Asks::IsNothing,
        calls: &[0x0044D710, 0x004134C0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0113C5C0,
        asks: Asks::IsSomething,
        calls: &[0x0082A6C0, 0x0082A6C0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0113D910,
        asks: Asks::IsThatValue,
        calls: &[0x01137540],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0113DDF0,
        asks: Asks::TwoTestsJoined,
        calls: &[0x0113D790],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01141030,
        asks: Asks::IsSomething,
        calls: &[0x017CC8F0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01143190,
        asks: Asks::IsSomething,
        calls: &[0x0064B380],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01178BA0,
        asks: Asks::IsThatValue,
        calls: &[0x00B90090, 0x00B90440, 0x00B90090, 0x00B90440, 0x012281F0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01178C80,
        asks: Asks::IsThatValue,
        calls: &[0x00B90090, 0x00B90440, 0x00B90090, 0x00B90440, 0x012281F0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01179490,
        asks: Asks::AComparison,
        calls: &[0x0064DE00],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01179B20,
        asks: Asks::IsThatValue,
        calls: &[0x00B90090, 0x00B90440],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01179B60,
        asks: Asks::IsThatValue,
        calls: &[0x00B90090, 0x00B90440],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0117A2A0,
        asks: Asks::IsThatValue,
        calls: &[0x00B90090, 0x00B90440, 0x00B90090, 0x00B90440, 0x012281F0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x011A5CA0,
        asks: Asks::AComparison,
        calls: &[0x005FD4E0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x011A5CE0,
        asks: Asks::AComparison,
        calls: &[0x005FC860],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x011A5D20,
        asks: Asks::AComparison,
        calls: &[0x005FDAB0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x012333F0,
        asks: Asks::IsThatValue,
        calls: &[0x0122B3A0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01233420,
        asks: Asks::IsThatValue,
        calls: &[0x0122B3A0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01233450,
        asks: Asks::IsThatValue,
        calls: &[0x0122B3A0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01233480,
        asks: Asks::IsThatValue,
        calls: &[0x0122B3A0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x012334B0,
        asks: Asks::IsThatValue,
        calls: &[0x0122B3A0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x012334E0,
        asks: Asks::IsThatValue,
        calls: &[0x0122B3A0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01233510,
        asks: Asks::IsThatValue,
        calls: &[0x0122B3A0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01233540,
        asks: Asks::IsThatValue,
        calls: &[0x0122B3A0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01233570,
        asks: Asks::IsThatValue,
        calls: &[0x0122B3A0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x012335A0,
        asks: Asks::IsThatValue,
        calls: &[0x0122B3A0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x012335D0,
        asks: Asks::IsThatValue,
        calls: &[0x0122B3A0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01233600,
        asks: Asks::IsThatValue,
        calls: &[0x0122B3A0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01233630,
        asks: Asks::IsThatValue,
        calls: &[0x00B90090, 0x00B90440, 0x0122B3A0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01233680,
        asks: Asks::IsThatValue,
        calls: &[0x00B90090, 0x00B90440, 0x0122B3A0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x012337D0,
        asks: Asks::IsThatValue,
        calls: &[0x0122B3A0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01233800,
        asks: Asks::IsThatValue,
        calls: &[0x00B90440],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0129F7B0,
        asks: Asks::IsSomething,
        calls: &[0x01CC6030],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x012AF920,
        asks: Asks::IsSomething,
        calls: &[0x00B90440],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x012AF980,
        asks: Asks::AComparison,
        calls: &[0x00B90440],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x012B12E0,
        asks: Asks::IsNothing,
        calls: &[0x012AE470, 0x00F833F0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x012B20B0,
        asks: Asks::IsThatValue,
        calls: &[0x004113F0, 0x00B90090, 0x012B07B0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x012E5EB0,
        asks: Asks::IsSomething,
        calls: &[0x004AEAC0, 0x012E5250],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x012E5EE0,
        asks: Asks::IsSomething,
        calls: &[0x004AEAC0, 0x012E5260],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x012E5F00,
        asks: Asks::IsSomething,
        calls: &[0x004AEAC0, 0x012E5270],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x012E5F30,
        asks: Asks::IsSomething,
        calls: &[0x004AEAC0, 0x012E5280],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x012E5F50,
        asks: Asks::IsSomething,
        calls: &[0x004AEAC0, 0x012E5290],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x012E5F80,
        asks: Asks::IsSomething,
        calls: &[0x004AEAC0, 0x012E52A0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x012E5FA0,
        asks: Asks::IsSomething,
        calls: &[0x004AEAC0, 0x012E52B0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x012E5FD0,
        asks: Asks::IsSomething,
        calls: &[0x004AEAC0, 0x012E52C0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x012E5FF0,
        asks: Asks::IsSomething,
        calls: &[0x004AEAC0, 0x012E52D0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x012E6050,
        asks: Asks::IsSomething,
        calls: &[0x004AEAC0, 0x012E52F0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x012E6090,
        asks: Asks::IsSomething,
        calls: &[0x004AEAC0, 0x012E5300],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x012E60D0,
        asks: Asks::IsSomething,
        calls: &[0x004AEAC0, 0x012E5310],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x012E6110,
        asks: Asks::IsSomething,
        calls: &[0x004AEAC0, 0x012E5320],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x012E6150,
        asks: Asks::IsSomething,
        calls: &[0x004AEAC0, 0x012E5330],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x012E6190,
        asks: Asks::IsSomething,
        calls: &[0x004AEAC0, 0x012E5340],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x012E61D0,
        asks: Asks::IsSomething,
        calls: &[0x004AEAC0, 0x012E5350],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x012E6210,
        asks: Asks::IsSomething,
        calls: &[0x004AEAC0, 0x012E5360],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x012E6250,
        asks: Asks::IsSomething,
        calls: &[0x004AEAC0, 0x012E5370],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x012E6290,
        asks: Asks::IsSomething,
        calls: &[0x004AEAC0, 0x012E5380],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x012F5E30,
        asks: Asks::IsSomething,
        calls: &[0x00418590],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x013065A0,
        asks: Asks::IsNothing,
        calls: &[0x006E2530, 0x013056E0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01341600,
        asks: Asks::IsSomething,
        calls: &[0x017D0C90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01365170,
        asks: Asks::IsSomething,
        calls: &[0x0065B870],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x01367550,
        asks: Asks::IsSomething,
        calls: &[0x0198D430],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01369450,
        asks: Asks::IsSomething,
        calls: &[0x0198D430],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01369FE0,
        asks: Asks::TwoTestsJoined,
        calls: &[0x0198D430],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x013A3180,
        asks: Asks::TwoTestsJoined,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x013A48D0,
        asks: Asks::IsSomething,
        calls: &[0x0132BB80],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x013A5C20,
        asks: Asks::IsSomething,
        calls: &[0x004095F0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x013B5D50,
        asks: Asks::TwoTestsJoined,
        calls: &[0x010D5940],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x013BA260,
        asks: Asks::IsSomething,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x013C55D0,
        asks: Asks::IsSomething,
        calls: &[0x017E9A10],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x013D07E0,
        asks: Asks::TwoTestsJoined,
        calls: &[0x010D5940],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x013F57D0,
        asks: Asks::IsSomething,
        calls: &[0x0064B380, 0x0064B380],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0140F790,
        asks: Asks::IsSomething,
        calls: &[0x004095F0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01411FA0,
        asks: Asks::IsSomething,
        calls: &[0x004095F0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01432540,
        asks: Asks::AComparison,
        calls: &[0x01121E50],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01435F90,
        asks: Asks::IsSomething,
        calls: &[0x004B4B10],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0149ECC0,
        asks: Asks::IsThatValue,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x015072E0,
        asks: Asks::IsThatValue,
        calls: &[0x01507110],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0155C500,
        asks: Asks::IsSomething,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0157FA40,
        asks: Asks::IsSomething,
        calls: &[0x004113F0, 0x004B6DA0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01582560,
        asks: Asks::IsNothing,
        calls: &[0x0044D710, 0x004134C0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x015C8210,
        asks: Asks::IsNothing,
        calls: &[0x015D9F40],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x015CA1C0,
        asks: Asks::IsNothing,
        calls: &[0x015B59B0, 0x004134C0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x015D1DF0,
        asks: Asks::IsSomething,
        calls: &[0x00410F20, 0x00416740, 0x015BF470],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x015E9D30,
        asks: Asks::IsSomething,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x015EBC30,
        asks: Asks::IsSomething,
        calls: &[0x00805200, 0x00410F20, 0x0080CC70],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x015EE3D0,
        asks: Asks::IsSomething,
        calls: &[0x00442620, 0x015FCD60],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x015F49B0,
        asks: Asks::IsSomething,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x016016E0,
        asks: Asks::IsSomething,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0162EB40,
        asks: Asks::TwoTestsJoined,
        calls: &[0x01614C70, 0x01615B20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0162F2C0,
        asks: Asks::IsSomething,
        calls: &[0x01650400],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0163EA20,
        asks: Asks::IsSomething,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0164C7F0,
        asks: Asks::IsSomething,
        calls: &[0x004095F0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x016AE4F0,
        asks: Asks::IsSomething,
        calls: &[0x016AE250],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x016D4490,
        asks: Asks::IsSomething,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x016EF160,
        asks: Asks::IsSomething,
        calls: &[0x01331950],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0174BC90,
        asks: Asks::IsSomething,
        calls: &[0x00414AD0, 0x00414AD0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01755D20,
        asks: Asks::IsSomething,
        calls: &[0x01CEAC00],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0176A3C0,
        asks: Asks::IsSomething,
        calls: &[0x01995600],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0176A410,
        asks: Asks::IsSomething,
        calls: &[0x01995800],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0176A430,
        asks: Asks::IsSomething,
        calls: &[0x01995C70],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0176A470,
        asks: Asks::IsSomething,
        calls: &[0x01995CB0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0176A4E0,
        asks: Asks::IsSomething,
        calls: &[0x019ABDF0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01795680,
        asks: Asks::IsNotThatValue,
        calls: &[0x01791B60, 0x017AFD00],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x017B5160,
        asks: Asks::TwoTestsJoined,
        calls: &[0x017B51D0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x017BAF30,
        asks: Asks::IsSomething,
        calls: &[0x017BB400],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x017C51D0,
        asks: Asks::IsSomething,
        calls: &[0x0040D200],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x017C51F0,
        asks: Asks::TwoTestsJoined,
        calls: &[0x00409A70],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x017C52D0,
        asks: Asks::IsSomething,
        calls: &[0x004095F0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x017C53F0,
        asks: Asks::IsSomething,
        calls: &[0x017C5380, 0x017C5300],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x017CC940,
        asks: Asks::IsSomething,
        calls: &[0x01CC28C0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x017FE8F0,
        asks: Asks::IsSomething,
        calls: &[0x00C4CAF0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01807E90,
        asks: Asks::IsNotThatValue,
        calls: &[0x00416740],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0180F570,
        asks: Asks::IsSomething,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0180FB00,
        asks: Asks::IsSomething,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x018141F0,
        asks: Asks::IsSomething,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0181ABA0,
        asks: Asks::IsNotThatValue,
        calls: &[0x0181A900, 0x0040C770],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01847610,
        asks: Asks::IsNothing,
        calls: &[0x00461840],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01859E00,
        asks: Asks::IsSomething,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01860B60,
        asks: Asks::IsSomething,
        calls: &[0x005FFA40],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x01868620,
        asks: Asks::IsSomething,
        calls: &[0x005FFA40],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x0186FE10,
        asks: Asks::TwoTestsJoined,
        calls: &[0x0186FB30],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0186FE40,
        asks: Asks::IsThatValue,
        calls: &[0x006806A0, 0x0186FB30],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x018879E0,
        asks: Asks::IsNothing,
        calls: &[0x00414AD0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01887D10,
        asks: Asks::TwoTestsJoined,
        calls: &[0x004B6F60],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01887D60,
        asks: Asks::TwoTestsJoined,
        calls: &[0x004B6F60],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01887FA0,
        asks: Asks::IsSomething,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01887FC0,
        asks: Asks::IsThatValue,
        calls: &[0x01888930],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x018986C0,
        asks: Asks::IsNotThatValue,
        calls: &[0x01898F40],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x01899010,
        asks: Asks::IsSomething,
        calls: &[0x01898A50],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x018A7010,
        asks: Asks::IsNotThatValue,
        calls: &[0x018AD880],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x018AB320,
        asks: Asks::IsNothing,
        calls: &[0x018ABA70, 0x018A9020],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x018AC910,
        asks: Asks::IsSomething,
        calls: &[0x018AC8E0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x018B0240,
        asks: Asks::IsSomething,
        calls: &[0x018AFF80],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x018BB330,
        asks: Asks::IsSomething,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x018C7970,
        asks: Asks::IsThatValue,
        calls: &[0x0197FB40],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x018CB4F0,
        asks: Asks::IsSomething,
        calls: &[0x018C5980],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x018CB510,
        asks: Asks::IsSomething,
        calls: &[0x004AEE30],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x018DD080,
        asks: Asks::IsNothing,
        calls: &[0x007FD550],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01963A60,
        asks: Asks::IsSomething,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01967CC0,
        asks: Asks::IsSomething,
        calls: &[0x00452320],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01976C60,
        asks: Asks::IsNothing,
        calls: &[0x00742EB0, 0x01976270],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0197B0A0,
        asks: Asks::IsSomething,
        calls: &[0x01979A90, 0x0197AFE0, 0x018D0F40],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0197C250,
        asks: Asks::IsSomething,
        calls: &[0x0197F0A0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01980530,
        asks: Asks::IsSomething,
        calls: &[0x01976090],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01980710,
        asks: Asks::IsSomething,
        calls: &[0x01980680, 0x019789B0, 0x01976B70, 0x01980530],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01981670,
        asks: Asks::TwoTestsJoined,
        calls: &[0x00414AD0, 0x00414480],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x019816A0,
        asks: Asks::TwoTestsJoined,
        calls: &[0x00414AD0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0198C310,
        asks: Asks::IsNotThatValue,
        calls: &[0x0198D430],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0198C360,
        asks: Asks::IsNotThatValue,
        calls: &[0x0198D430],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x0199DD90,
        asks: Asks::TwoTestsJoined,
        calls: &[0x0198B6A0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x019A4FE0,
        asks: Asks::IsSomething,
        calls: &[0x00B95290],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x019B7940,
        asks: Asks::IsNothing,
        calls: &[0x0080CC70],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x019BB540,
        asks: Asks::IsNotThatValue,
        calls: &[0x00742ED0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x019BB570,
        asks: Asks::IsNotThatValue,
        calls: &[0x019BB4E0, 0x019BB4E0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x019BB620,
        asks: Asks::IsNotThatValue,
        calls: &[0x019BB4E0, 0x019BB4E0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x019CDFD0,
        asks: Asks::IsNothing,
        calls: &[0x00F309B0, 0x00F2F8E0, 0x00F30E70, 0x00F335B0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x019D2330,
        asks: Asks::IsSomething,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01A2B170,
        asks: Asks::IsSomething,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01A2FF80,
        asks: Asks::IsSomething,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01A456F0,
        asks: Asks::IsSomething,
        calls: &[0x00414AD0, 0x0147C100],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01A53690,
        asks: Asks::IsSomething,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01A57160,
        asks: Asks::IsSomething,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01A57F30,
        asks: Asks::IsSomething,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01A5B740,
        asks: Asks::IsSomething,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01A80D90,
        asks: Asks::IsNotThatValue,
        calls: &[0x01A7FC90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01A97EA0,
        asks: Asks::IsSomething,
        calls: &[0x00410F20],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x01A99830,
        asks: Asks::IsNothing,
        calls: &[0x01A99930, 0x01A99940],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01A9CF50,
        asks: Asks::IsNothing,
        calls: &[0x01A9A6F0],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x01A9CF90,
        asks: Asks::IsNothing,
        calls: &[0x01A9A6F0],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x01AC40A0,
        asks: Asks::TwoTestsJoined,
        calls: &[0x01AC1CF0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01AF1100,
        asks: Asks::IsNotThatValue,
        calls: &[0x0064E140],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01AF25B0,
        asks: Asks::IsSomething,
        calls: &[0x01AF07A0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01AF2990,
        asks: Asks::IsNotThatValue,
        calls: &[0x01AF2820],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01AF29B0,
        asks: Asks::IsSomething,
        calls: &[0x01AF0F40],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01AF29D0,
        asks: Asks::IsSomething,
        calls: &[0x01AF1040],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01AF29F0,
        asks: Asks::IsSomething,
        calls: &[0x01AF1100],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01AF2A30,
        asks: Asks::IsSomething,
        calls: &[0x01AF1120],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01AF2AE0,
        asks: Asks::IsSomething,
        calls: &[0x008059A0, 0x01AF2430],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01AF2B10,
        asks: Asks::IsSomething,
        calls: &[0x00805990],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01B07800,
        asks: Asks::IsSomething,
        calls: &[0x004095F0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01B07820,
        asks: Asks::IsSomething,
        calls: &[0x0040D200],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01B07850,
        asks: Asks::TwoTestsJoined,
        calls: &[0x00409A70],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01B08810,
        asks: Asks::AComparison,
        calls: &[0x00B90620],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01B36DC0,
        asks: Asks::IsSomething,
        calls: &[0x0040F590, 0x00409900],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01B878D0,
        asks: Asks::IsSomething,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01B8BC90,
        asks: Asks::IsSomething,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01B8C750,
        asks: Asks::IsSomething,
        calls: &[0x00418590],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01BD5C20,
        asks: Asks::IsNothing,
        calls: &[0x01BD6080],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01BD6080,
        asks: Asks::IsNotThatValue,
        calls: &[0x00654320],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01BE1CB0,
        asks: Asks::IsNothing,
        calls: &[0x0065B870],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x01BE1D20,
        asks: Asks::IsNothing,
        calls: &[0x0065B870],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x01BE7180,
        asks: Asks::IsNotThatValue,
        calls: &[0x00655B90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01BE97C0,
        asks: Asks::IsNotThatValue,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01BFA570,
        asks: Asks::IsNotThatValue,
        calls: &[0x01BF9980],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01BFB100,
        asks: Asks::IsNotThatValue,
        calls: &[0x01BF6300],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01BFB720,
        asks: Asks::IsNotThatValue,
        calls: &[0x01BFA3F0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01BFCA20,
        asks: Asks::IsNotThatValue,
        calls: &[0x01BFC680],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01BFF2C0,
        asks: Asks::IsThatValue,
        calls: &[0x00635840],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01C020E0,
        asks: Asks::IsNotThatValue,
        calls: &[0x01C02010],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01C02100,
        asks: Asks::IsNotThatValue,
        calls: &[0x00654320],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01C02180,
        asks: Asks::IsNotThatValue,
        calls: &[0x0064E770],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01C02820,
        asks: Asks::IsNotThatValue,
        calls: &[0x00654320, 0x00411550],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01C02860,
        asks: Asks::IsNotThatValue,
        calls: &[0x00654320, 0x00411550],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01C07A70,
        asks: Asks::TwoTestsJoined,
        calls: &[0x01C07A10],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01C76EF0,
        asks: Asks::IsSomething,
        calls: &[0x01993F30],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01C88850,
        asks: Asks::TwoTestsJoined,
        calls: &[0x0153B660],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01C88A60,
        asks: Asks::IsSomething,
        calls: &[0x0153B340],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01C9AB40,
        asks: Asks::IsSomething,
        calls: &[0x01C9AA00, 0x01C9AB80],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01C9AE90,
        asks: Asks::IsSomething,
        calls: &[0x01C99750],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01CA0DF0,
        asks: Asks::IsSomething,
        calls: &[0x0064E770],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01CA0E10,
        asks: Asks::IsSomething,
        calls: &[0x0064CBF0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01CA4EF0,
        asks: Asks::IsSomething,
        calls: &[0x00410F20],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01CA74E0,
        asks: Asks::IsNotThatValue,
        calls: &[0x01CA9CB0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01CBFCB0,
        asks: Asks::IsSomething,
        calls: &[0x00409570],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01CCDD70,
        asks: Asks::IsThatValue,
        calls: &[0x00F06430],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01CEC9C0,
        asks: Asks::TwoTestsJoined,
        calls: &[0x01CEC6E0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01CFD450,
        asks: Asks::TwoTestsJoined,
        calls: &[0x01CFD490],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01D31BD0,
        asks: Asks::IsSomething,
        calls: &[0x01D31A70],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01D330B0,
        asks: Asks::IsSomething,
        calls: &[0x004095F0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01D461D0,
        asks: Asks::IsNothing,
        calls: &[0x0042A560],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01D46550,
        asks: Asks::IsSomething,
        calls: &[0x0042A560],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01D81570,
        asks: Asks::IsSomething,
        calls: &[0x00B90440],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01D815D0,
        asks: Asks::AComparison,
        calls: &[0x00B90440],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01D83750,
        asks: Asks::IsThatValue,
        calls: &[0x01D80D40, 0x01D80D00],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01D837E0,
        asks: Asks::IsNothing,
        calls: &[0x01D80D00],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01D83D20,
        asks: Asks::IsThatValue,
        calls: &[0x01D80DA0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01D83DF0,
        asks: Asks::IsThatValue,
        calls: &[0x00B90090, 0x01D82D90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01D83F80,
        asks: Asks::IsThatValue,
        calls: &[0x00B90090, 0x00B90440, 0x01D83910],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01D855D0,
        asks: Asks::IsNothing,
        calls: &[0x00414AD0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01D85780,
        asks: Asks::IsSomething,
        calls: &[],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x01D86000,
        asks: Asks::IsSomething,
        calls: &[0x01D81A90],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01D86020,
        asks: Asks::IsSomething,
        calls: &[0x01D81AE0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01D86040,
        asks: Asks::IsSomething,
        calls: &[0x01D821A0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01D86070,
        asks: Asks::IsSomething,
        calls: &[0x01D82800],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01D86090,
        asks: Asks::IsSomething,
        calls: &[0x0065B870],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x01D866E0,
        asks: Asks::IsSomething,
        calls: &[0x010E19D0, 0x0065B870],
        through_a_thunk: true,
    },
    Guarded {
        routine: 0x01D86770,
        asks: Asks::IsSomething,
        calls: &[0x0113D6B0],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01D86790,
        asks: Asks::IsSomething,
        calls: &[0x0113D630],
        through_a_thunk: false,
    },
    Guarded {
        routine: 0x01D86B00,
        asks: Asks::IsSomething,
        calls: &[0x01B6E530],
        through_a_thunk: false,
    },
];

/// How many there are.
pub const GUARDED_COUNT: usize = 694;

/// Implements part of the guarded family.
///
/// What one routine does, if it is one of these.
#[must_use]
pub fn guarded_at(routine: u32) -> Option<&'static Guarded> {
    GUARDED
        .binary_search_by_key(&routine, |held| held.routine)
        .ok()
        .map(|at| &GUARDED[at])
}

/// Implements part of the guarded family.
///
/// Every routine whose guard asks the same kind of question.
#[must_use]
pub fn asking(asks: Asks) -> Vec<&'static Guarded> {
    GUARDED.iter().filter(|held| held.asks == asks).collect()
}

/// Implements part of the guarded family.
///
/// What the guards ask, commonest first.
#[must_use]
pub fn questions() -> Vec<(Asks, usize)> {
    let mut counted: Vec<(Asks, usize)> = Vec::new();
    for held in &GUARDED {
        match counted.iter_mut().find(|(asks, _)| *asks == held.asks) {
            Some((_, seen)) => *seen += 1,
            None => counted.push((held.asks, 1)),
        }
    }
    counted.sort_by(|left, right| right.1.cmp(&left.1).then(left.0.cmp(&right.0)));
    counted
}

/// Implements part of the guarded family.
///
/// The questions that are about whether something is there at all.
///
/// As against the ones that compare a value with another value. The difference
/// matters because a guard of the first kind is defending against absence and a
/// guard of the second is choosing between cases.
pub const ABOUT_PRESENCE: [Asks; 2] = [Asks::IsSomething, Asks::IsNothing];

/// Implements part of the guarded family.
///
/// How many routines guard against absence rather than against a value.
#[must_use]
pub fn guard_against_absence() -> usize {
    GUARDED
        .iter()
        .filter(|held| ABOUT_PRESENCE.contains(&held.asks))
        .count()
}

/// Implements part of the guarded family.
///
/// Everything these routines call, and how often, commonest first.
#[must_use]
pub fn callees(how_many: usize) -> Vec<(u32, usize)> {
    let mut counted: Vec<(u32, usize)> = Vec::new();
    for call in GUARDED.iter().flat_map(|held| held.calls.iter()) {
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
        assert_eq!(GUARDED.len(), GUARDED_COUNT);
    }

    #[test]
    fn the_table_is_sorted_so_it_can_be_searched() {
        assert!(
            GUARDED
                .windows(2)
                .all(|pair| pair[0].routine < pair[1].routine)
        );
    }

    #[test]
    fn every_routine_calls_something_when_its_guard_lets_it_through() {
        // Unless everything it called went through a thunk with no recovered
        // function behind it, in which case nothing could be written down.
        for held in &GUARDED {
            if held.calls.is_empty() {
                assert!(held.through_a_thunk, "{:#010X}", held.routine);
            }
            assert!(held.calls.len() <= 6, "{:#010X}", held.routine);
        }
    }

    #[test]
    fn every_recorded_call_is_a_function_that_was_recovered() {
        for held in &GUARDED {
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
        let thunked = GUARDED.iter().filter(|held| held.through_a_thunk).count();

        assert!(thunked > 0);
        assert!(thunked < GUARDED.len() / 4);
    }

    #[test]
    fn a_routine_can_be_found_by_its_address() {
        let known = GUARDED[0].routine;

        assert!(guarded_at(known).is_some());
        assert!(guarded_at(0).is_none());
    }

    #[test]
    fn most_of_them_call_exactly_one_thing() {
        let one = GUARDED.iter().filter(|held| held.calls.len() == 1).count();

        assert!(one * 2 > GUARDED.len(), "{one} of {}", GUARDED.len());
    }

    #[test]
    fn every_kind_of_question_is_asked_by_at_least_one_routine() {
        for (_, seen) in questions() {
            assert!(seen > 0);
        }
    }

    #[test]
    fn more_guards_ask_whether_something_is_there_than_compare_a_value() {
        // A program guarding this way is defending against absence rather than
        // against a wrong answer.
        let absence = guard_against_absence();
        let values = asking(Asks::IsThatValue).len() + asking(Asks::IsNotThatValue).len();

        assert!(absence > values, "{absence} against {values}");
    }

    #[test]
    fn very_few_guards_join_two_tests_together() {
        let joined = asking(Asks::TwoTestsJoined).len();

        assert!(joined * 8 < GUARDED.len(), "{joined} of {}", GUARDED.len());
    }

    #[test]
    fn and_fewer_still_compare_one_thing_with_another() {
        assert!(asking(Asks::AComparison).len() < asking(Asks::TwoTestsJoined).len());
    }

    #[test]
    fn no_guard_here_tests_a_single_bit() {
        // Worth stating because the run time does test bits elsewhere — see
        // the value-cell mask. It is not how these routines ask their
        // question.
        assert_eq!(questions().len(), 6);
    }

    #[test]
    fn a_handful_of_routines_are_called_by_many_of_these() {
        let busiest = callees(5);

        assert!(busiest[0].1 > 5, "{busiest:?}");
        assert!(busiest[0].1 >= busiest[4].1);
    }

    #[test]
    fn none_of_these_is_already_spoken_for_by_another_sweep() {
        for held in GUARDED.iter().take(200) {
            assert!(crate::frame_pads::pad_at(held.routine).is_none());
            assert!(crate::shim_routines::target_of(held.routine).is_none());
            assert!(crate::straight_line_routines::sequence_of(held.routine).is_none());
            assert!(crate::stub_routines::pair_at(held.routine).is_none());
        }
    }

    #[test]
    fn every_routine_is_listed_once() {
        let mut routines: Vec<u32> = GUARDED.iter().map(|held| held.routine).collect();
        let before = routines.len();
        routines.sort_unstable();
        routines.dedup();

        assert_eq!(routines.len(), before);
    }
}
