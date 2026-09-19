//! Routines that are one statement and call nothing.
//!
//! 4255 of them. Each takes what it was given, does one thing with it, and
//! returns. There is no test, no loop and no call, so whatever a routine of this
//! shape does is the whole of what it does.
//!
//! Sorted by what that one statement is, they fall into a handful of kinds, and
//! the largest by far writes a single global. Counting the writers of each
//! global turns up the structure worth having: of the globals written this way,
//! a thousand and forty-six have exactly two writers, two hundred and five have
//! one, and none has three. Reading those pairs settles what they are — one adds
//! one and the other takes one away, and the two routines sit sixteen bytes
//! apart in every case but one.
//!
//! So the program keeps a thousand and forty-five nesting counts, each with a
//! generated pair of routines to go in and come out again. [`COUNTERS`] is that
//! list. The single exception is not a count at all: it is a random-number
//! generator, whose pair is a routine to seed it and a routine to step it, and
//! whose halves sit eighty bytes apart rather than sixteen.

// The addresses are written without separators so the port-mapping importer can
// match them against the recovered functions.
#![allow(clippy::unreadable_literal)]

/// What the one statement does.
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord)]
pub enum Shape {
    /// Assigns something that fits none of the other shapes.
    AssignsSomethingElse,
    /// Something else again.
    Other,
    /// Hands back one name, often a processor register the decompiler surfaced as a local.
    ReturnsAName,
    /// Hands back one thing read from one place.
    ReturnsSomethingReadOnce,
    /// Hands back the result of one small piece of arithmetic.
    ReturnsSomethingWorkedOut,
    /// Writes one value into one global.
    SetsAGlobal,
    /// Writes one field of what it was given.
    WritesAField,
    /// Writes through a pointer it was given.
    WritesThroughAPointer,
}

/// One such routine.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct Trivial {
    /// Where it sits.
    pub routine: u32,
    /// What its one statement does.
    pub shape: Shape,
    /// The global it writes, where it writes one that can be named.
    pub writes: Option<u32>,
}

/// Every one-statement, call-free routine.
pub static TRIVIAL: [Trivial; 4255] = [
    Trivial {
        routine: 0x00407320,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x00409E10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x01DB9010),
    },
    Trivial {
        routine: 0x00409E60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x01DB9010),
    },
    Trivial {
        routine: 0x0040A0B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x01DB9048),
    },
    Trivial {
        routine: 0x0040A0C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0040A110,
        shape: Shape::SetsAGlobal,
        writes: None,
    },
    Trivial {
        routine: 0x0040A140,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0040A150,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x0040A160,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x0040A1A0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x0040A1D0,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x0040A3E0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x0040A3F0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x0040A490,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x0040A560,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x0040C760,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x0040C770,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x0040C840,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x0040C850,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0040CA90,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00410A80,
        shape: Shape::SetsAGlobal,
        writes: None,
    },
    Trivial {
        routine: 0x00410AD0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00410CB0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00410F50,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x004110F0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00411100,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x004115A0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x004115B0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00411B80,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x004153C0,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x0041D540,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0041E0A0,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x0041E0B0,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x0041E0C0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x0041E0D0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x0041E0E0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0041E110,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0041EB70,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x0041EBB0,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x0041EBF0,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x0041EC30,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x0041EC70,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x0041EDB0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0041F8D0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00420FC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0200C2A8),
    },
    Trivial {
        routine: 0x00422C80,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00422CB0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00422E10,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x00422E80,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00423090,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x004230A0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x004230B0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x004230C0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00423990,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x004239B0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00423C30,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00423C60,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00423D30,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00423D60,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00424A30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0200C2C8),
    },
    Trivial {
        routine: 0x00424A40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0200C2C8),
    },
    Trivial {
        routine: 0x004256A0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x004256B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0200C2E0),
    },
    Trivial {
        routine: 0x0042A200,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x0042A2A0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0042A320,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0042AFB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0200C300),
    },
    Trivial {
        routine: 0x0042AFC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0200C300),
    },
    Trivial {
        routine: 0x0042AFD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0200C304),
    },
    Trivial {
        routine: 0x0042AFE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0200C304),
    },
    Trivial {
        routine: 0x0042B000,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0200C308),
    },
    Trivial {
        routine: 0x0042B010,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0200C308),
    },
    Trivial {
        routine: 0x0042B630,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0200C30C),
    },
    Trivial {
        routine: 0x0042BF30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0200C3D0),
    },
    Trivial {
        routine: 0x0042BF40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0200C3D0),
    },
    Trivial {
        routine: 0x0042BF50,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00432550,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0200C3D4),
    },
    Trivial {
        routine: 0x00432D40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0200C41C),
    },
    Trivial {
        routine: 0x0043A260,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0200C618),
    },
    Trivial {
        routine: 0x00442440,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x00451E20,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x00455FE0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00456810,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00458070,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00458080,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x004581F0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00458200,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00458410,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00458420,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00458A30,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0045A9C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0045B390,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x0045B3A0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0045B640,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x0045B650,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0045B740,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x0045B750,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x0045B8E0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x0045B910,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0045B950,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0045B9B0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x0045B9C0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0045BB50,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0045D5C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0045D5D0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0045D5E0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0045E170,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02010958),
    },
    Trivial {
        routine: 0x0046C220,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x0046C230,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x0046E710,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0046E890,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0046E8A0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0046EE90,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0046EEA0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0046EEB0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0046EEC0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x004701D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020115C8),
    },
    Trivial {
        routine: 0x004701E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020115C8),
    },
    Trivial {
        routine: 0x00471150,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020115CC),
    },
    Trivial {
        routine: 0x00471160,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020115CC),
    },
    Trivial {
        routine: 0x004B12B0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x004B1E40,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x004B1FC0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x004B33C0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x004B3DF0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x004B7080,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x004B7090,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x004C9870,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x004D1E00,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x004D2F50,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x004D2F80,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x004D2F90,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x004D3000,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x004D3020,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x004D3030,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x004D3040,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x004D4560,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x004D4770,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x004D4AC0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x004D4C90,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x004D4CA0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x004D55C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x004D55D0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x004D55E0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x004D55F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x004D6200,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x004D8090,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x004DBF10,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x004DC510,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00525A60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02011670),
    },
    Trivial {
        routine: 0x00525A70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02011670),
    },
    Trivial {
        routine: 0x00527590,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02011674),
    },
    Trivial {
        routine: 0x0052F390,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02011688),
    },
    Trivial {
        routine: 0x00534770,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00534E30,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00534E40,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00534E50,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00535770,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00536180,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x0053C6C0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x0053C6D0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0053C6F0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x005469B0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x005469C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x005469D0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x005471D0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x005472D0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00548660,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0054C460,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00552F90,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x005549A0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x005577F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00557800,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00557810,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00557C10,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00557C20,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x005586F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00558700,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00558710,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00559CA0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00559CC0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0055A0D0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00587DA0,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x00587DF0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00587EE0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00587EF0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00587F10,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00587F50,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00587F70,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00587FB0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00587FD0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00588010,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00588030,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00588070,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00588090,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x005880D0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x005880F0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00588130,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00588150,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00588180,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x005881A0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x005881E0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00588200,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00588220,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00588240,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00588260,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x005882A0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00588300,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00588340,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00588380,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x005883A0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00589390,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x0058F770,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020116C0),
    },
    Trivial {
        routine: 0x00592450,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02011ED0),
    },
    Trivial {
        routine: 0x00592BE0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00592BF0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00592C00,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00592C50,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00592C60,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00592C90,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00592CA0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00592CF0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00592D20,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00592D30,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00592E40,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00592EB0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00592F70,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00593020,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x005930C0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00593160,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x005931B0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x005944C0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x005945B0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x005945C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00594C10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02011ED4),
    },
    Trivial {
        routine: 0x00594C20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02011ED4),
    },
    Trivial {
        routine: 0x0059BB10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02011ED8),
    },
    Trivial {
        routine: 0x0059BB20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02011ED8),
    },
    Trivial {
        routine: 0x0059BF80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02011EE8),
    },
    Trivial {
        routine: 0x005A1E10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02011EEC),
    },
    Trivial {
        routine: 0x005A1E20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02011EEC),
    },
    Trivial {
        routine: 0x005B3280,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x005B37F0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x005B7280,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02011F00),
    },
    Trivial {
        routine: 0x005B7290,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02011F00),
    },
    Trivial {
        routine: 0x005B8360,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02011F04),
    },
    Trivial {
        routine: 0x005B8370,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02011F04),
    },
    Trivial {
        routine: 0x005B8D40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02011F08),
    },
    Trivial {
        routine: 0x005B8D50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02011F08),
    },
    Trivial {
        routine: 0x005B8D60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02011F0C),
    },
    Trivial {
        routine: 0x005BA1C0,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x005BA5F0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x005BA7A0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x005BA7C0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x005BA7D0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x005BA9A0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x005BA9B0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x005BAA90,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x005BAB20,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x005BAFC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02011F28),
    },
    Trivial {
        routine: 0x005BAFD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02011F28),
    },
    Trivial {
        routine: 0x005D2DA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02011F74),
    },
    Trivial {
        routine: 0x005D2DB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02011F74),
    },
    Trivial {
        routine: 0x005E77A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02011F80),
    },
    Trivial {
        routine: 0x005EECC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02011F84),
    },
    Trivial {
        routine: 0x005EECD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02011F84),
    },
    Trivial {
        routine: 0x005F1410,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02011F88),
    },
    Trivial {
        routine: 0x005F21B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02011F8C),
    },
    Trivial {
        routine: 0x005F21C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02011F8C),
    },
    Trivial {
        routine: 0x005FA810,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02011F98),
    },
    Trivial {
        routine: 0x005FEFE0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00600270,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00602190,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x006021A0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x006021C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x006060B0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00607B70,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x0060C570,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0060DCD0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0060F550,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0060F570,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x006117E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012048),
    },
    Trivial {
        routine: 0x006117F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012048),
    },
    Trivial {
        routine: 0x00612220,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201204C),
    },
    Trivial {
        routine: 0x00612230,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201204C),
    },
    Trivial {
        routine: 0x00614AB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012068),
    },
    Trivial {
        routine: 0x00614AC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012068),
    },
    Trivial {
        routine: 0x00616FA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012088),
    },
    Trivial {
        routine: 0x00616FB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012088),
    },
    Trivial {
        routine: 0x00618400,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00618D60,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x006191B0,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x00619290,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x00619650,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00619E80,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x0061A180,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201208C),
    },
    Trivial {
        routine: 0x0061B470,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012244),
    },
    Trivial {
        routine: 0x0061B480,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012244),
    },
    Trivial {
        routine: 0x0061B680,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012248),
    },
    Trivial {
        routine: 0x0061B690,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012248),
    },
    Trivial {
        routine: 0x0061D400,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201224C),
    },
    Trivial {
        routine: 0x0061D470,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012250),
    },
    Trivial {
        routine: 0x0061D480,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012250),
    },
    Trivial {
        routine: 0x0061DE00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012254),
    },
    Trivial {
        routine: 0x0061DF20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012258),
    },
    Trivial {
        routine: 0x0061DF30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012258),
    },
    Trivial {
        routine: 0x0061DF40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012260),
    },
    Trivial {
        routine: 0x00622BB0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00625BC0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00625BD0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00625BE0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00626480,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00626610,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012284),
    },
    Trivial {
        routine: 0x00626620,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012284),
    },
    Trivial {
        routine: 0x00626750,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012288),
    },
    Trivial {
        routine: 0x00626760,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012288),
    },
    Trivial {
        routine: 0x00634F60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201228C),
    },
    Trivial {
        routine: 0x00634F70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201228C),
    },
    Trivial {
        routine: 0x00636520,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012290),
    },
    Trivial {
        routine: 0x006365E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012294),
    },
    Trivial {
        routine: 0x006365F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012294),
    },
    Trivial {
        routine: 0x00636600,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012298),
    },
    Trivial {
        routine: 0x00636610,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012298),
    },
    Trivial {
        routine: 0x00636620,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201229C),
    },
    Trivial {
        routine: 0x00636630,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201229C),
    },
    Trivial {
        routine: 0x00636640,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020122A0),
    },
    Trivial {
        routine: 0x00636650,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020122A0),
    },
    Trivial {
        routine: 0x00636660,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020122A4),
    },
    Trivial {
        routine: 0x00636670,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020122A4),
    },
    Trivial {
        routine: 0x006366B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020122A8),
    },
    Trivial {
        routine: 0x00636A00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020122AC),
    },
    Trivial {
        routine: 0x00636A10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020122AC),
    },
    Trivial {
        routine: 0x006490C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x006490F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x006497A0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x006497B0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x006497C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0064C040,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0064C060,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0064C070,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0064C350,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0064D390,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0064DF50,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0064DF60,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0064E0B0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0064E900,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0064EB50,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0064EC50,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x0064F980,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00651650,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00651780,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00652A50,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00654400,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x0065BBB0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0065BBC0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0065BE20,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0065EC50,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0065EC60,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0065F460,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x0065FEB0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00661190,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00664D50,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x006663A0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x006667A0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00666BA0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x006679F0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00667A40,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x006853C0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x006878C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x006882F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00689D50,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0068F6F0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x006998E0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x0069A820,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020123B0),
    },
    Trivial {
        routine: 0x0069A830,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020123B0),
    },
    Trivial {
        routine: 0x0069A840,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020123B4),
    },
    Trivial {
        routine: 0x0069A850,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020123B4),
    },
    Trivial {
        routine: 0x0069A8C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020123B8),
    },
    Trivial {
        routine: 0x0069A8D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020123B8),
    },
    Trivial {
        routine: 0x0069A930,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020123BC),
    },
    Trivial {
        routine: 0x0069A940,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020123BC),
    },
    Trivial {
        routine: 0x0069A950,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020123C0),
    },
    Trivial {
        routine: 0x0069A960,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020123C0),
    },
    Trivial {
        routine: 0x0069A970,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020123C4),
    },
    Trivial {
        routine: 0x0069A980,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020123C4),
    },
    Trivial {
        routine: 0x0069A990,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020123C8),
    },
    Trivial {
        routine: 0x0069A9A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020123C8),
    },
    Trivial {
        routine: 0x0069AE00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020123CC),
    },
    Trivial {
        routine: 0x0069AE10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020123CC),
    },
    Trivial {
        routine: 0x0069B310,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020123D0),
    },
    Trivial {
        routine: 0x0069B320,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020123D0),
    },
    Trivial {
        routine: 0x0069B840,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020123D4),
    },
    Trivial {
        routine: 0x0069B850,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020123D4),
    },
    Trivial {
        routine: 0x0069B910,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020123D8),
    },
    Trivial {
        routine: 0x0069B920,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020123D8),
    },
    Trivial {
        routine: 0x0069C7A0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0069E920,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020123DC),
    },
    Trivial {
        routine: 0x0069EBF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020123E0),
    },
    Trivial {
        routine: 0x0069EC00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020123E0),
    },
    Trivial {
        routine: 0x006A0710,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020123E4),
    },
    Trivial {
        routine: 0x006A0720,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020123E4),
    },
    Trivial {
        routine: 0x006A3980,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x006A4800,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020123E8),
    },
    Trivial {
        routine: 0x006A4810,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020123E8),
    },
    Trivial {
        routine: 0x006A4940,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020123EC),
    },
    Trivial {
        routine: 0x006A4950,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020123EC),
    },
    Trivial {
        routine: 0x006AA8E0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x006AA8F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x006AB8C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012400),
    },
    Trivial {
        routine: 0x006AB8D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012400),
    },
    Trivial {
        routine: 0x006D4D50,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x006D8450,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x006D9EE0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x006DFE80,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x006E4D70,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x006EAF40,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x006EB320,
        shape: Shape::SetsAGlobal,
        writes: Some(0x01E00558),
    },
    Trivial {
        routine: 0x006EB400,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x006ED830,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x006F37D0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x006F37E0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x006F8450,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x006FA810,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x006FA820,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x006FD900,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x006FD910,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x007009F0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x0070BFD0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x007112C0,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x00711C80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020124B8),
    },
    Trivial {
        routine: 0x00711C90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020124B8),
    },
    Trivial {
        routine: 0x00711CA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020124BC),
    },
    Trivial {
        routine: 0x00711CB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020124BC),
    },
    Trivial {
        routine: 0x00716D50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020124C0),
    },
    Trivial {
        routine: 0x00723540,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x00741890,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00746280,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00749780,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0074A390,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0074B7B0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0074E480,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201251C),
    },
    Trivial {
        routine: 0x0075CCA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020125A4),
    },
    Trivial {
        routine: 0x007794B0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0077BE00,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00782C20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020125A1),
    },
    Trivial {
        routine: 0x007837E0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x007837F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00783800,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00783810,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00783840,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00783850,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00783860,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00783870,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00783880,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00783890,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x007838A0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x007854E0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x007854F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x007855F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00785600,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x007861E0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00786A50,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00788CB0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0078A180,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0078A210,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020125A8),
    },
    Trivial {
        routine: 0x0078A220,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020125A8),
    },
    Trivial {
        routine: 0x007D53B0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x007D7880,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x007D89B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020125B0),
    },
    Trivial {
        routine: 0x007D89C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020125B0),
    },
    Trivial {
        routine: 0x007E2C20,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x007E5A30,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x007E6530,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x007E8B20,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x007E92D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020125E0),
    },
    Trivial {
        routine: 0x007E92E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020125E0),
    },
    Trivial {
        routine: 0x007E97A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020125E4),
    },
    Trivial {
        routine: 0x007E97B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020125E4),
    },
    Trivial {
        routine: 0x007E9860,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020125E8),
    },
    Trivial {
        routine: 0x007E9870,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020125E8),
    },
    Trivial {
        routine: 0x007E9C50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012630),
    },
    Trivial {
        routine: 0x007F9260,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x007F9270,
        shape: Shape::SetsAGlobal,
        writes: Some(0x01E13FBC),
    },
    Trivial {
        routine: 0x007F9CF0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x007FB310,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x007FE0A0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x007FFC10,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00808D90,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x0080B160,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x0080FFD0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x008101D0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00813730,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00820440,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00820450,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00820730,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00822390,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020126CC),
    },
    Trivial {
        routine: 0x008223A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020126CC),
    },
    Trivial {
        routine: 0x00832F80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012730),
    },
    Trivial {
        routine: 0x00832F90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012730),
    },
    Trivial {
        routine: 0x008355D0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00835D20,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00837DC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012734),
    },
    Trivial {
        routine: 0x00837DD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012734),
    },
    Trivial {
        routine: 0x0083F420,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0083F430,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0083F770,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0083F780,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0083FE50,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00849D80,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00849D90,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00849DA0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00849DB0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00849DC0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00849DD0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0084E0D0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x0084E0E0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00850AC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012748),
    },
    Trivial {
        routine: 0x00850AD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012748),
    },
    Trivial {
        routine: 0x00850B90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201274C),
    },
    Trivial {
        routine: 0x00850BC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012750),
    },
    Trivial {
        routine: 0x00850BD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012750),
    },
    Trivial {
        routine: 0x00852C20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012754),
    },
    Trivial {
        routine: 0x00852C30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012754),
    },
    Trivial {
        routine: 0x00858D00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012758),
    },
    Trivial {
        routine: 0x00858D10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012758),
    },
    Trivial {
        routine: 0x00858D20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012760),
    },
    Trivial {
        routine: 0x0085DBF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020127A0),
    },
    Trivial {
        routine: 0x0085DC00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020127A4),
    },
    Trivial {
        routine: 0x0085DC10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020127A4),
    },
    Trivial {
        routine: 0x0085DC20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x01E1BEA8),
    },
    Trivial {
        routine: 0x0085DC30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020127A8),
    },
    Trivial {
        routine: 0x0085DE80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020127AC),
    },
    Trivial {
        routine: 0x0085DE90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020127AC),
    },
    Trivial {
        routine: 0x0085E1C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020127B0),
    },
    Trivial {
        routine: 0x0085E1D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020127B0),
    },
    Trivial {
        routine: 0x008686D0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008686E0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008686F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0086D0E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020127F8),
    },
    Trivial {
        routine: 0x0086D110,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020127FC),
    },
    Trivial {
        routine: 0x0086D120,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020127FC),
    },
    Trivial {
        routine: 0x0086D130,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012800),
    },
    Trivial {
        routine: 0x0086D140,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012800),
    },
    Trivial {
        routine: 0x0086D1F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012810),
    },
    Trivial {
        routine: 0x0086D200,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012814),
    },
    Trivial {
        routine: 0x0086D210,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012814),
    },
    Trivial {
        routine: 0x0086E0A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012818),
    },
    Trivial {
        routine: 0x0086E0B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012818),
    },
    Trivial {
        routine: 0x0086E520,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201281C),
    },
    Trivial {
        routine: 0x0086E530,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201281C),
    },
    Trivial {
        routine: 0x0086E930,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012820),
    },
    Trivial {
        routine: 0x0086E940,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012820),
    },
    Trivial {
        routine: 0x0086E950,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012824),
    },
    Trivial {
        routine: 0x0086E960,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012824),
    },
    Trivial {
        routine: 0x008739C0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x008739D0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00873BB0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00873BC0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00873C80,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00873C90,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00873D90,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00873DC0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00873E10,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00873E20,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00874010,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00874080,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008740F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00874100,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008741C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00874230,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00874290,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008742A0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00874AB0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00874AC0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00878360,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00878370,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00878380,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00878390,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x008783A0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00878520,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00878C70,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00879CE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201282C),
    },
    Trivial {
        routine: 0x00879CF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201282C),
    },
    Trivial {
        routine: 0x00879F70,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00879F80,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00879F90,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00879FA0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00879FB0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00879FF0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0087A000,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0087A010,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0087A050,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012950),
    },
    Trivial {
        routine: 0x00882450,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012954),
    },
    Trivial {
        routine: 0x00882460,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012954),
    },
    Trivial {
        routine: 0x00882B90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012958),
    },
    Trivial {
        routine: 0x00882BA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012958),
    },
    Trivial {
        routine: 0x00882F70,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00882F80,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0088EE20,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x0088EE30,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0088EEB0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x0088EEC0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x0088EF00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A14),
    },
    Trivial {
        routine: 0x00890730,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A18),
    },
    Trivial {
        routine: 0x00890740,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A1C),
    },
    Trivial {
        routine: 0x00890750,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A1C),
    },
    Trivial {
        routine: 0x008927C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A20),
    },
    Trivial {
        routine: 0x008927D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A20),
    },
    Trivial {
        routine: 0x00892C80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A24),
    },
    Trivial {
        routine: 0x00892C90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A28),
    },
    Trivial {
        routine: 0x00892CA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A28),
    },
    Trivial {
        routine: 0x00892CB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A2C),
    },
    Trivial {
        routine: 0x00892CC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A2C),
    },
    Trivial {
        routine: 0x00892CD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A30),
    },
    Trivial {
        routine: 0x00892CE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A30),
    },
    Trivial {
        routine: 0x00892CF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A34),
    },
    Trivial {
        routine: 0x00892D00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A34),
    },
    Trivial {
        routine: 0x0089B8F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0089D4E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A48),
    },
    Trivial {
        routine: 0x0089E0D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A4C),
    },
    Trivial {
        routine: 0x0089E0E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A4C),
    },
    Trivial {
        routine: 0x0089E0F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A50),
    },
    Trivial {
        routine: 0x0089E100,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A50),
    },
    Trivial {
        routine: 0x0089E3A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A54),
    },
    Trivial {
        routine: 0x0089E3B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A54),
    },
    Trivial {
        routine: 0x008B0300,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008B1670,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008B1930,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A78),
    },
    Trivial {
        routine: 0x008B1940,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A78),
    },
    Trivial {
        routine: 0x008B30E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A7C),
    },
    Trivial {
        routine: 0x008B30F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A7C),
    },
    Trivial {
        routine: 0x008B3100,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A80),
    },
    Trivial {
        routine: 0x008B3110,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A80),
    },
    Trivial {
        routine: 0x008B3B00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A84),
    },
    Trivial {
        routine: 0x008B3C90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A88),
    },
    Trivial {
        routine: 0x008B9270,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A8C),
    },
    Trivial {
        routine: 0x008B9280,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A8C),
    },
    Trivial {
        routine: 0x008CB270,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CB280,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CB570,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CB580,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CB800,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CB810,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CBA90,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CBAA0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CBD20,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CBD30,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CBF90,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CBFA0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CC270,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CC280,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CC590,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CC5A0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CC7F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CC800,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CCA80,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CCA90,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CCCD0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CCCE0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CCE70,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CCE80,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CCF40,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CCF50,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CD0C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CD0D0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CD320,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CD330,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CD550,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CD560,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CD680,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CD690,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CD7B0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CD7C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CD8A0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CD8B0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CD980,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CD990,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CDB00,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CDB10,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CDC70,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CDC80,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CDE30,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CDE40,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CDFB0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CDFC0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CE200,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CE210,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CE380,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CE390,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CE4C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CE4D0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CE640,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CE650,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CE7C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CE7D0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CE950,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CE960,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CEB20,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CEB30,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CECA0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CECB0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CEE20,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CEE30,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CEFA0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CEFB0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CF120,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CF130,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CF2B0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CF2C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CF430,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CF440,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CF5B0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CF5C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CF730,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CF740,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CF8B0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CF8C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CFA80,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CFA90,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CFBF0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CFC00,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CFD60,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CFD70,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CFED0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008CFEE0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D0040,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D0050,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D01F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D0200,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D0360,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D0370,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D04A0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D04B0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D0610,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D0620,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D0780,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D0790,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D0930,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D0940,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D0B00,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D0B10,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D0C80,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D0C90,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D0E10,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D0E20,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D0F80,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D0F90,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D1100,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D1110,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D1280,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D1290,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D13C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D13D0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D14E0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D14F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D15F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D1600,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D1760,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D1770,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D1870,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D1880,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D19C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D19D0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D1B20,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D1B30,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D1C80,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D1C90,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D1D70,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D1D80,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D1E60,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D1E70,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D1F50,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D1F60,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D2040,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D2050,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D2130,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D2140,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D2220,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D2230,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008D22B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A90),
    },
    Trivial {
        routine: 0x008D22C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A90),
    },
    Trivial {
        routine: 0x008E5DD0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008E6A60,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008EC0E0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x008EC570,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008ECC50,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008ECE40,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008ED210,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008ED280,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008ED2E0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008ED350,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008ED3C0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008ED430,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008ED4A0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008ED510,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008ED580,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008ED740,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008ED7A0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008ED7B0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008ED820,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008ED890,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008ED8F0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008ED900,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008ED970,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008ED9E0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008EDAC0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008EE860,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008EE930,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008EE9A0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008EEB60,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008EEC20,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008EECD0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008EEEA0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008EEF10,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008EF5E0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008EF6A0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008EF760,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008EF820,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008EF8E0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008EF9A0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008EFA60,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008EFB20,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008EFBE0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008EFCA0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008F2220,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A94),
    },
    Trivial {
        routine: 0x008F2230,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A94),
    },
    Trivial {
        routine: 0x008F4850,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008F4B00,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008F4B70,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008F4F90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A98),
    },
    Trivial {
        routine: 0x008F4FA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A98),
    },
    Trivial {
        routine: 0x008F75E0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008F75F0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008F7600,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008F7620,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008F7640,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008F9B80,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x008F9B90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A9C),
    },
    Trivial {
        routine: 0x008F9BA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012A9C),
    },
    Trivial {
        routine: 0x008F9BD0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008F9C10,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008F9C20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012AA0),
    },
    Trivial {
        routine: 0x008F9C30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012AA0),
    },
    Trivial {
        routine: 0x008F9E00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012AA4),
    },
    Trivial {
        routine: 0x008F9E10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012AA4),
    },
    Trivial {
        routine: 0x008FC3A0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008FDEB0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x008FF040,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012AA8),
    },
    Trivial {
        routine: 0x008FF050,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012AA8),
    },
    Trivial {
        routine: 0x009009B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012AAC),
    },
    Trivial {
        routine: 0x009009C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012AAC),
    },
    Trivial {
        routine: 0x00947030,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00947040,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00948E80,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00948E90,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00949140,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00949150,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00949170,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0094D8C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0094E650,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00950800,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00950840,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x009508D0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00951EE0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00953260,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x009535C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x009537D0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00953970,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00953B90,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00953D90,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00953E80,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00953E90,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00953EF0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00954340,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00954DE0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00954DF0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00954E00,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00954E50,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00954E60,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00961A50,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00961A60,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00961A70,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00963570,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00963580,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00963590,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00970070,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00970080,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x009705F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x009706A0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00970830,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00970900,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x009709E0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00970AB0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00970B80,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00970D10,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00970D60,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00970EA0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00970F70,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00971180,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00971300,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00971450,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00971CA0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00972C60,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00972EC0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00972F90,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x009730E0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x009732D0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x009732E0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00973440,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x009734A0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0098CD60,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0098CD70,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0098CD80,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0098E1E0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00990410,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x009906C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x009908A0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x009913D0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x009D4130,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x009DFB80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012AE8),
    },
    Trivial {
        routine: 0x009DFB90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012AE8),
    },
    Trivial {
        routine: 0x009DFBA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012AEC),
    },
    Trivial {
        routine: 0x009DFBB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012AEC),
    },
    Trivial {
        routine: 0x009DFC40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012AF0),
    },
    Trivial {
        routine: 0x009E04F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012B00),
    },
    Trivial {
        routine: 0x009E0500,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012B18),
    },
    Trivial {
        routine: 0x009E0510,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012B18),
    },
    Trivial {
        routine: 0x009E1020,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012B1C),
    },
    Trivial {
        routine: 0x009E1030,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02012B1C),
    },
    Trivial {
        routine: 0x009E1F30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02013324),
    },
    Trivial {
        routine: 0x009E1F40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02013324),
    },
    Trivial {
        routine: 0x009E1F50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02013340),
    },
    Trivial {
        routine: 0x009E3560,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x009E4C60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02013344),
    },
    Trivial {
        routine: 0x009E4C70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02013344),
    },
    Trivial {
        routine: 0x009E8030,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x009EA7F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02013348),
    },
    Trivial {
        routine: 0x009EA800,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02013348),
    },
    Trivial {
        routine: 0x009ED6A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02013370),
    },
    Trivial {
        routine: 0x009ED6B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02013370),
    },
    Trivial {
        routine: 0x009F15A0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x009F2750,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02013374),
    },
    Trivial {
        routine: 0x009F2760,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02013374),
    },
    Trivial {
        routine: 0x009F4690,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00A02C90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02013378),
    },
    Trivial {
        routine: 0x00A02EF0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00A02F00,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00A02F10,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00A02F20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02013390),
    },
    Trivial {
        routine: 0x00A02F30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02013390),
    },
    Trivial {
        routine: 0x00A04E10,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00A06300,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00A07680,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02013394),
    },
    Trivial {
        routine: 0x00A08E20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020133A8),
    },
    Trivial {
        routine: 0x00A08E30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020133A8),
    },
    Trivial {
        routine: 0x00A08E70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020133AC),
    },
    Trivial {
        routine: 0x00A08E80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020133AC),
    },
    Trivial {
        routine: 0x00A09B80,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00A0D710,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00A0D730,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00A1BC70,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00A29770,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020133B4),
    },
    Trivial {
        routine: 0x00A29780,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020133B4),
    },
    Trivial {
        routine: 0x00A29F10,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00A29F60,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00A2A2A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020133B8),
    },
    Trivial {
        routine: 0x00A2A2B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020133B8),
    },
    Trivial {
        routine: 0x00A2C990,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020133BC),
    },
    Trivial {
        routine: 0x00A2CB30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020133C0),
    },
    Trivial {
        routine: 0x00A2CB40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020133C0),
    },
    Trivial {
        routine: 0x00A32F80,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00A32F90,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00A3D970,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00A3D9F0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00A42070,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020137D4),
    },
    Trivial {
        routine: 0x00A42080,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020137D4),
    },
    Trivial {
        routine: 0x00A46FF0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00A472F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00A47640,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00A47670,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00A4EAB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014460),
    },
    Trivial {
        routine: 0x00A4ED10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014470),
    },
    Trivial {
        routine: 0x00A4ED20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014470),
    },
    Trivial {
        routine: 0x00A623F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020144E8),
    },
    Trivial {
        routine: 0x00A68BF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014708),
    },
    Trivial {
        routine: 0x00A77EF0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00A77F00,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00A78440,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201470C),
    },
    Trivial {
        routine: 0x00A78450,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201470C),
    },
    Trivial {
        routine: 0x00A7B310,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014720),
    },
    Trivial {
        routine: 0x00A7B320,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014720),
    },
    Trivial {
        routine: 0x00A7C7B0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00A7C950,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00A7D020,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014724),
    },
    Trivial {
        routine: 0x00A7D030,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014724),
    },
    Trivial {
        routine: 0x00A936B0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00A99880,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00AA1940,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00AA8F60,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00ABF860,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00ABF8E0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00AC3640,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00AC3740,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00AC3750,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00AC3760,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00AC3770,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00AC3780,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00AC3A80,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00AC40C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00ACD560,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00ACD570,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00ACD580,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00ACD5F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00ACD600,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00ACD610,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00ACD620,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00ACD640,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00ACF0C0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00ACF9B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014754),
    },
    Trivial {
        routine: 0x00ACF9C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014754),
    },
    Trivial {
        routine: 0x00ACF9D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014758),
    },
    Trivial {
        routine: 0x00ACF9E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014758),
    },
    Trivial {
        routine: 0x00AE7BA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201475C),
    },
    Trivial {
        routine: 0x00AE7BB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201475C),
    },
    Trivial {
        routine: 0x00AF5FA0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00AFFB30,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00B01C40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014790),
    },
    Trivial {
        routine: 0x00B01C50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014790),
    },
    Trivial {
        routine: 0x00B047C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020147A0),
    },
    Trivial {
        routine: 0x00B047D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020147A0),
    },
    Trivial {
        routine: 0x00B04850,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020147A4),
    },
    Trivial {
        routine: 0x00B04860,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020147A4),
    },
    Trivial {
        routine: 0x00B04870,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020147A8),
    },
    Trivial {
        routine: 0x00B04880,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020147A8),
    },
    Trivial {
        routine: 0x00B048B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020147AC),
    },
    Trivial {
        routine: 0x00B048C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020147AC),
    },
    Trivial {
        routine: 0x00B06C40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020147B0),
    },
    Trivial {
        routine: 0x00B06C50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020147B0),
    },
    Trivial {
        routine: 0x00B07F80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020147B4),
    },
    Trivial {
        routine: 0x00B08870,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00B088E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020147BC),
    },
    Trivial {
        routine: 0x00B088F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020147BC),
    },
    Trivial {
        routine: 0x00B0B600,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020147C0),
    },
    Trivial {
        routine: 0x00B0B610,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020147C0),
    },
    Trivial {
        routine: 0x00B0D5C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020147C4),
    },
    Trivial {
        routine: 0x00B13A90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020147C8),
    },
    Trivial {
        routine: 0x00B13AA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020147C8),
    },
    Trivial {
        routine: 0x00B13F80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020147CC),
    },
    Trivial {
        routine: 0x00B13F90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020147CC),
    },
    Trivial {
        routine: 0x00B14A90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020147D0),
    },
    Trivial {
        routine: 0x00B14CF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020147D4),
    },
    Trivial {
        routine: 0x00B14D00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020147D4),
    },
    Trivial {
        routine: 0x00B156D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020147DC),
    },
    Trivial {
        routine: 0x00B156E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020147DC),
    },
    Trivial {
        routine: 0x00B15B50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020147E0),
    },
    Trivial {
        routine: 0x00B15B60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020147E0),
    },
    Trivial {
        routine: 0x00B18680,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020147E4),
    },
    Trivial {
        routine: 0x00B18690,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x00B186E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020147E8),
    },
    Trivial {
        routine: 0x00B186F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020147E8),
    },
    Trivial {
        routine: 0x00B19810,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020147EC),
    },
    Trivial {
        routine: 0x00B19820,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020147EC),
    },
    Trivial {
        routine: 0x00B1B170,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020147F0),
    },
    Trivial {
        routine: 0x00B1B180,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020147F0),
    },
    Trivial {
        routine: 0x00B1BA40,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00B1BCB0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00B1BCC0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00B1BCD0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B1BCE0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00B1BD10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014820),
    },
    Trivial {
        routine: 0x00B1C800,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00B1FAB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014830),
    },
    Trivial {
        routine: 0x00B20280,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014838),
    },
    Trivial {
        routine: 0x00B226E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201483C),
    },
    Trivial {
        routine: 0x00B226F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201483C),
    },
    Trivial {
        routine: 0x00B22E00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014840),
    },
    Trivial {
        routine: 0x00B22E10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014840),
    },
    Trivial {
        routine: 0x00B25110,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014848),
    },
    Trivial {
        routine: 0x00B25120,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014848),
    },
    Trivial {
        routine: 0x00B258F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201484C),
    },
    Trivial {
        routine: 0x00B25900,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201484C),
    },
    Trivial {
        routine: 0x00B2C720,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014850),
    },
    Trivial {
        routine: 0x00B2C730,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014850),
    },
    Trivial {
        routine: 0x00B300B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014854),
    },
    Trivial {
        routine: 0x00B300C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014854),
    },
    Trivial {
        routine: 0x00B33A90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014858),
    },
    Trivial {
        routine: 0x00B33AA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014858),
    },
    Trivial {
        routine: 0x00B36500,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201485C),
    },
    Trivial {
        routine: 0x00B36510,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201485C),
    },
    Trivial {
        routine: 0x00B38980,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014860),
    },
    Trivial {
        routine: 0x00B38990,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014860),
    },
    Trivial {
        routine: 0x00B39ED0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014864),
    },
    Trivial {
        routine: 0x00B3ACB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201486C),
    },
    Trivial {
        routine: 0x00B3ACC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201486C),
    },
    Trivial {
        routine: 0x00B3D690,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014870),
    },
    Trivial {
        routine: 0x00B3D6A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014870),
    },
    Trivial {
        routine: 0x00B3DD00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014874),
    },
    Trivial {
        routine: 0x00B3DD10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014874),
    },
    Trivial {
        routine: 0x00B3DE20,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00B3DE30,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00B3DE40,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00B3DE50,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00B3FB40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014878),
    },
    Trivial {
        routine: 0x00B3FB50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014878),
    },
    Trivial {
        routine: 0x00B44FD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201487C),
    },
    Trivial {
        routine: 0x00B44FE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201487C),
    },
    Trivial {
        routine: 0x00B50960,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00B58A30,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00B5A1F0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00B5A290,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014880),
    },
    Trivial {
        routine: 0x00B5A2A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014880),
    },
    Trivial {
        routine: 0x00B5B570,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014884),
    },
    Trivial {
        routine: 0x00B5B580,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014884),
    },
    Trivial {
        routine: 0x00B5C8A0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00B61D00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014888),
    },
    Trivial {
        routine: 0x00B61D10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014888),
    },
    Trivial {
        routine: 0x00B68580,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201488C),
    },
    Trivial {
        routine: 0x00B68590,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201488C),
    },
    Trivial {
        routine: 0x00B69390,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014890),
    },
    Trivial {
        routine: 0x00B693A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014890),
    },
    Trivial {
        routine: 0x00B693B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014894),
    },
    Trivial {
        routine: 0x00B693C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014894),
    },
    Trivial {
        routine: 0x00B693D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014898),
    },
    Trivial {
        routine: 0x00B693E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02014898),
    },
    Trivial {
        routine: 0x00B69A60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201489C),
    },
    Trivial {
        routine: 0x00B69A70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201489C),
    },
    Trivial {
        routine: 0x00B6BCC0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B6BCF0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B6BD00,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B6BFD0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B6C000,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B6C010,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B6C4E0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00B6CB40,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B6D0D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020148A0),
    },
    Trivial {
        routine: 0x00B6D0E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020148A0),
    },
    Trivial {
        routine: 0x00B6E460,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B6F610,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B70780,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020148A4),
    },
    Trivial {
        routine: 0x00B70790,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020148A4),
    },
    Trivial {
        routine: 0x00B70C90,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B70CE0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B720E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020148A8),
    },
    Trivial {
        routine: 0x00B720F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020148A8),
    },
    Trivial {
        routine: 0x00B72610,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B72620,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B745A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020148AC),
    },
    Trivial {
        routine: 0x00B745B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020148AC),
    },
    Trivial {
        routine: 0x00B74AD0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00B74C90,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B74CA0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B75E30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020148B0),
    },
    Trivial {
        routine: 0x00B75E40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020148B0),
    },
    Trivial {
        routine: 0x00B760E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020148B4),
    },
    Trivial {
        routine: 0x00B760F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020148B4),
    },
    Trivial {
        routine: 0x00B765D0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B765E0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B77700,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020148B8),
    },
    Trivial {
        routine: 0x00B77710,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020148B8),
    },
    Trivial {
        routine: 0x00B77B50,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00B780F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020148BC),
    },
    Trivial {
        routine: 0x00B785F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B78600,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B792E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020188C4),
    },
    Trivial {
        routine: 0x00B792F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020188C4),
    },
    Trivial {
        routine: 0x00B797F0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00B79810,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B79860,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B7C680,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020188C8),
    },
    Trivial {
        routine: 0x00B7C690,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020188C8),
    },
    Trivial {
        routine: 0x00B7CB80,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00B7CBC0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B7CC10,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B7D440,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020188CC),
    },
    Trivial {
        routine: 0x00B7D450,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020188CC),
    },
    Trivial {
        routine: 0x00B7D950,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00B7D970,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B7D980,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B7E090,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020188D0),
    },
    Trivial {
        routine: 0x00B7E0A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020188D0),
    },
    Trivial {
        routine: 0x00B7E5A0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00B7E5C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B7E610,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B7EB10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020188D4),
    },
    Trivial {
        routine: 0x00B7EB20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020188D4),
    },
    Trivial {
        routine: 0x00B7F020,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00B7F040,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B7F090,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B7F6E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020188D8),
    },
    Trivial {
        routine: 0x00B7F6F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020188D8),
    },
    Trivial {
        routine: 0x00B7FC00,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B7FC10,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B80AF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020188DC),
    },
    Trivial {
        routine: 0x00B80B00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020188DC),
    },
    Trivial {
        routine: 0x00B80FF0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B81040,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B838B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020188E0),
    },
    Trivial {
        routine: 0x00B838C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020188E0),
    },
    Trivial {
        routine: 0x00B83DA0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00B83DE0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B83E30,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B84240,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020188E4),
    },
    Trivial {
        routine: 0x00B84250,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020188E4),
    },
    Trivial {
        routine: 0x00B847A0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B847F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B865A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020188E8),
    },
    Trivial {
        routine: 0x00B86B00,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B86B50,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B872E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020198F0),
    },
    Trivial {
        routine: 0x00B872F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020198F0),
    },
    Trivial {
        routine: 0x00B87300,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020198F4),
    },
    Trivial {
        routine: 0x00B87310,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020198F4),
    },
    Trivial {
        routine: 0x00B87FB0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B87FC0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B883C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020198F8),
    },
    Trivial {
        routine: 0x00B883D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020198F8),
    },
    Trivial {
        routine: 0x00B88BC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020198FC),
    },
    Trivial {
        routine: 0x00B88BD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020198FC),
    },
    Trivial {
        routine: 0x00B90500,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201990C),
    },
    Trivial {
        routine: 0x00B90510,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201990C),
    },
    Trivial {
        routine: 0x00B909D0,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x00B921E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019910),
    },
    Trivial {
        routine: 0x00B921F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019910),
    },
    Trivial {
        routine: 0x00B93E50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019920),
    },
    Trivial {
        routine: 0x00B948B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019A24),
    },
    Trivial {
        routine: 0x00B948C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019A24),
    },
    Trivial {
        routine: 0x00B94DB0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B95120,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00B955E0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B959C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00B95A60,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x00B95A70,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x00B95A80,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00B95AC0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00B95B20,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00B95C00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019A28),
    },
    Trivial {
        routine: 0x00B95C10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019A28),
    },
    Trivial {
        routine: 0x00B95C20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019A2C),
    },
    Trivial {
        routine: 0x00B95C30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019A2C),
    },
    Trivial {
        routine: 0x00B95D10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019A30),
    },
    Trivial {
        routine: 0x00B95D20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019A30),
    },
    Trivial {
        routine: 0x00B964C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019A34),
    },
    Trivial {
        routine: 0x00B964D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019A34),
    },
    Trivial {
        routine: 0x00B96D40,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00B970E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019A38),
    },
    Trivial {
        routine: 0x00B970F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019A38),
    },
    Trivial {
        routine: 0x00B975B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019A98),
    },
    Trivial {
        routine: 0x00B975E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019A9C),
    },
    Trivial {
        routine: 0x00B975F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019A9C),
    },
    Trivial {
        routine: 0x00B97D50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019AA0),
    },
    Trivial {
        routine: 0x00B98490,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00B98950,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019AA4),
    },
    Trivial {
        routine: 0x00B98960,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019AA4),
    },
    Trivial {
        routine: 0x00B99C30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019AA8),
    },
    Trivial {
        routine: 0x00B9C4E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019AAC),
    },
    Trivial {
        routine: 0x00B9C4F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019AAC),
    },
    Trivial {
        routine: 0x00B9C500,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019AB0),
    },
    Trivial {
        routine: 0x00B9C510,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019AB0),
    },
    Trivial {
        routine: 0x00B9CB40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019AB4),
    },
    Trivial {
        routine: 0x00B9CB50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019AB4),
    },
    Trivial {
        routine: 0x00B9ED40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019AC4),
    },
    Trivial {
        routine: 0x00B9ED50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019AC4),
    },
    Trivial {
        routine: 0x00BAD530,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00BAD860,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00BAE000,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00BAE3B0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00BB0410,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00BB08B0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00BB1DB0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00BB2200,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00BB3590,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00BB4C10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019AC8),
    },
    Trivial {
        routine: 0x00BB7730,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00BB7750,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00BB7840,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019ACC),
    },
    Trivial {
        routine: 0x00BB7850,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019ACC),
    },
    Trivial {
        routine: 0x00BB7860,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019AD0),
    },
    Trivial {
        routine: 0x00BB7870,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019AD0),
    },
    Trivial {
        routine: 0x00BBC980,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019AD4),
    },
    Trivial {
        routine: 0x00BBD050,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019AE0),
    },
    Trivial {
        routine: 0x00BBD060,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019AE0),
    },
    Trivial {
        routine: 0x00BBD260,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019AE4),
    },
    Trivial {
        routine: 0x00BBD270,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019AE4),
    },
    Trivial {
        routine: 0x00BBFD50,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00BC14E0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00BC17D0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00BC1CF0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00BC1F60,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00BC20C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00BC2100,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00BC5100,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00BC5110,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00BCBBC0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00BCBDB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019AF8),
    },
    Trivial {
        routine: 0x00BCBDC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019AFC),
    },
    Trivial {
        routine: 0x00BCBDD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019AFC),
    },
    Trivial {
        routine: 0x00BCC930,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019B00),
    },
    Trivial {
        routine: 0x00BCC940,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019B00),
    },
    Trivial {
        routine: 0x00BD10E0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00BD1370,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019B04),
    },
    Trivial {
        routine: 0x00BD1380,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019B04),
    },
    Trivial {
        routine: 0x00BD1ED0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019B0C),
    },
    Trivial {
        routine: 0x00BD39B0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00BD3F70,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00BD4540,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00BD4E90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019B10),
    },
    Trivial {
        routine: 0x00BDA290,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019B24),
    },
    Trivial {
        routine: 0x00BDA2A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019B24),
    },
    Trivial {
        routine: 0x00BE0550,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00BE0560,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00BE12E0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00BE1F30,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00BE1F40,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00BE20B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019B28),
    },
    Trivial {
        routine: 0x00BE20C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019B28),
    },
    Trivial {
        routine: 0x00BE8070,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019B2C),
    },
    Trivial {
        routine: 0x00BE8080,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019B2C),
    },
    Trivial {
        routine: 0x00BF3750,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00BF4150,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00BFDCA0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00C10E70,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00C11270,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00C116C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019B34),
    },
    Trivial {
        routine: 0x00C119C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019B40),
    },
    Trivial {
        routine: 0x00C119D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019B40),
    },
    Trivial {
        routine: 0x00C1A7C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00C1BC80,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00C1E290,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00C27250,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00C28B00,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00C2DD90,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00C2DE50,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00C2E320,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00C2E580,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00C2E7E0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00C2E9F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00C2F2B0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00C30970,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00C30980,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00C31CD0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00C35100,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00C36B30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019B50),
    },
    Trivial {
        routine: 0x00C36B40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019B50),
    },
    Trivial {
        routine: 0x00C37880,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019C00),
    },
    Trivial {
        routine: 0x00C37890,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019C00),
    },
    Trivial {
        routine: 0x00C395C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019C04),
    },
    Trivial {
        routine: 0x00C395D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019C04),
    },
    Trivial {
        routine: 0x00C395E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019C08),
    },
    Trivial {
        routine: 0x00C395F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019C08),
    },
    Trivial {
        routine: 0x00C3BE60,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x00C3C500,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00C3C720,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00C3C730,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00C3EC70,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00C3EC80,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00C42620,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019C20),
    },
    Trivial {
        routine: 0x00C42830,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00C44310,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019C50),
    },
    Trivial {
        routine: 0x00C45E30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019C64),
    },
    Trivial {
        routine: 0x00C45E40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019C64),
    },
    Trivial {
        routine: 0x00C46060,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019C68),
    },
    Trivial {
        routine: 0x00C46070,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019C68),
    },
    Trivial {
        routine: 0x00C46190,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019C6C),
    },
    Trivial {
        routine: 0x00C461A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019C6C),
    },
    Trivial {
        routine: 0x00C46D00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019C70),
    },
    Trivial {
        routine: 0x00C46D10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019C70),
    },
    Trivial {
        routine: 0x00C49430,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019C74),
    },
    Trivial {
        routine: 0x00C51BB0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00C51BC0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00C52CD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019CA8),
    },
    Trivial {
        routine: 0x00C52DD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019CAC),
    },
    Trivial {
        routine: 0x00C52DE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019CAC),
    },
    Trivial {
        routine: 0x00C53220,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00C53230,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00C53940,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019CB0),
    },
    Trivial {
        routine: 0x00C53950,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019CB0),
    },
    Trivial {
        routine: 0x00C542F0,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x00C543F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019CC0),
    },
    Trivial {
        routine: 0x00C54400,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019CC0),
    },
    Trivial {
        routine: 0x00C54410,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019CC4),
    },
    Trivial {
        routine: 0x00C54420,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019CC4),
    },
    Trivial {
        routine: 0x00C54720,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00C54730,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00C547B0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00C547C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00C549E0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00C54A20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019CC8),
    },
    Trivial {
        routine: 0x00C54A30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019CC8),
    },
    Trivial {
        routine: 0x00C569D0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00C57040,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019CCC),
    },
    Trivial {
        routine: 0x00C57050,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019CCC),
    },
    Trivial {
        routine: 0x00C59A20,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00C5AB70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019CD0),
    },
    Trivial {
        routine: 0x00C5AB80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019CD0),
    },
    Trivial {
        routine: 0x00C5AB90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019CD4),
    },
    Trivial {
        routine: 0x00C5ABA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019CD4),
    },
    Trivial {
        routine: 0x00C5BA70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019CD8),
    },
    Trivial {
        routine: 0x00C5BA80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019CD8),
    },
    Trivial {
        routine: 0x00C5C890,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019CDC),
    },
    Trivial {
        routine: 0x00C5C8A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019CDC),
    },
    Trivial {
        routine: 0x00C5F140,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00C5F1A0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00C5F1B0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00C5F1C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00C5F1D0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00C5F860,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00C5FE40,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00C5FF00,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00C60050,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00C601C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00C60340,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00C60610,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00C608F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00C60B00,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00C60F60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019CE0),
    },
    Trivial {
        routine: 0x00C60F70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019CE0),
    },
    Trivial {
        routine: 0x00C65B80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019CE8),
    },
    Trivial {
        routine: 0x00C65B90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019CE8),
    },
    Trivial {
        routine: 0x00C66620,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019CF8),
    },
    Trivial {
        routine: 0x00C66630,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019CF8),
    },
    Trivial {
        routine: 0x00C66990,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019CFC),
    },
    Trivial {
        routine: 0x00C669A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019CFC),
    },
    Trivial {
        routine: 0x00C66C90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019D00),
    },
    Trivial {
        routine: 0x00C66CA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019D00),
    },
    Trivial {
        routine: 0x00C68370,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00C68380,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00C68A50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019D04),
    },
    Trivial {
        routine: 0x00C68A60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019D04),
    },
    Trivial {
        routine: 0x00C69FF0,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x00C6A000,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019D08),
    },
    Trivial {
        routine: 0x00C6A010,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019D08),
    },
    Trivial {
        routine: 0x00C6AB10,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x00C6BE10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019D0C),
    },
    Trivial {
        routine: 0x00C6BE20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019D0C),
    },
    Trivial {
        routine: 0x00C70630,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019D10),
    },
    Trivial {
        routine: 0x00C74770,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019D14),
    },
    Trivial {
        routine: 0x00C74780,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019D14),
    },
    Trivial {
        routine: 0x00C747A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019D18),
    },
    Trivial {
        routine: 0x00C747B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019D18),
    },
    Trivial {
        routine: 0x00C7B3E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019D1C),
    },
    Trivial {
        routine: 0x00C7B3F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019D1C),
    },
    Trivial {
        routine: 0x00C7CDD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019D50),
    },
    Trivial {
        routine: 0x00C7D630,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00C7DA90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019E94),
    },
    Trivial {
        routine: 0x00C7F3F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019E98),
    },
    Trivial {
        routine: 0x00C7F400,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019E98),
    },
    Trivial {
        routine: 0x00C81970,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00C85EE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019EA8),
    },
    Trivial {
        routine: 0x00C85EF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019EA8),
    },
    Trivial {
        routine: 0x00C87580,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019EAC),
    },
    Trivial {
        routine: 0x00C87590,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019EAC),
    },
    Trivial {
        routine: 0x00C880C0,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x00C88230,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019EB0),
    },
    Trivial {
        routine: 0x00C88240,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019EB0),
    },
    Trivial {
        routine: 0x00C89200,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00C89210,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00C89610,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019EB4),
    },
    Trivial {
        routine: 0x00C89620,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019EB4),
    },
    Trivial {
        routine: 0x00C8C330,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019EB8),
    },
    Trivial {
        routine: 0x00C8C340,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019EB8),
    },
    Trivial {
        routine: 0x00C8C350,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019EBC),
    },
    Trivial {
        routine: 0x00C8C360,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019EBC),
    },
    Trivial {
        routine: 0x00C8CA60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019EC0),
    },
    Trivial {
        routine: 0x00C8CA70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019EC0),
    },
    Trivial {
        routine: 0x00C90090,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019EC8),
    },
    Trivial {
        routine: 0x00C900A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019EC8),
    },
    Trivial {
        routine: 0x00C901C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019ECC),
    },
    Trivial {
        routine: 0x00C901D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019ECC),
    },
    Trivial {
        routine: 0x00C986A0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00C986B0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00C986C0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00C98770,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00C98820,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00C988D0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00C98980,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00C98A30,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00C98AE0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00C98D40,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00C98DE0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00C98E80,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00C98F20,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00C98FC0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00C99060,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00CA5640,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00CA5650,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00CA8690,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F08),
    },
    Trivial {
        routine: 0x00CA86A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F08),
    },
    Trivial {
        routine: 0x00CA91D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F0C),
    },
    Trivial {
        routine: 0x00CA91E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F0C),
    },
    Trivial {
        routine: 0x00CAEEC0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00CB0AD0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00CB0AE0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00CB0E10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F10),
    },
    Trivial {
        routine: 0x00CB2000,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F14),
    },
    Trivial {
        routine: 0x00CB2010,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F14),
    },
    Trivial {
        routine: 0x00CB3950,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F18),
    },
    Trivial {
        routine: 0x00CB3960,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F18),
    },
    Trivial {
        routine: 0x00CB47E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F1C),
    },
    Trivial {
        routine: 0x00CB8B10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F20),
    },
    Trivial {
        routine: 0x00CB8B20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F20),
    },
    Trivial {
        routine: 0x00CB9E80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F24),
    },
    Trivial {
        routine: 0x00CB9E90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F24),
    },
    Trivial {
        routine: 0x00CBAE70,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00CBB140,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00CBB150,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00CBB4C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F28),
    },
    Trivial {
        routine: 0x00CBB4D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F28),
    },
    Trivial {
        routine: 0x00CBBFB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F2C),
    },
    Trivial {
        routine: 0x00CBBFC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F2C),
    },
    Trivial {
        routine: 0x00CBDF50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F30),
    },
    Trivial {
        routine: 0x00CBDF60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F30),
    },
    Trivial {
        routine: 0x00CBE080,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F34),
    },
    Trivial {
        routine: 0x00CBE090,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F34),
    },
    Trivial {
        routine: 0x00CBE650,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F38),
    },
    Trivial {
        routine: 0x00CBE660,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F38),
    },
    Trivial {
        routine: 0x00CBFD50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F3C),
    },
    Trivial {
        routine: 0x00CBFD60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F3C),
    },
    Trivial {
        routine: 0x00CBFD70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F40),
    },
    Trivial {
        routine: 0x00CBFD80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F40),
    },
    Trivial {
        routine: 0x00CC0100,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F44),
    },
    Trivial {
        routine: 0x00CC0110,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F44),
    },
    Trivial {
        routine: 0x00CC1E30,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00CC20B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F48),
    },
    Trivial {
        routine: 0x00CC2740,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F4C),
    },
    Trivial {
        routine: 0x00CC2750,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F4C),
    },
    Trivial {
        routine: 0x00CC2B50,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00CC2B60,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00CC2C00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F50),
    },
    Trivial {
        routine: 0x00CC2C10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F50),
    },
    Trivial {
        routine: 0x00CC2C20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F54),
    },
    Trivial {
        routine: 0x00CC2C30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F54),
    },
    Trivial {
        routine: 0x00CC2C40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F58),
    },
    Trivial {
        routine: 0x00CC2C50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F58),
    },
    Trivial {
        routine: 0x00CC2C60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F5C),
    },
    Trivial {
        routine: 0x00CC2C70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F5C),
    },
    Trivial {
        routine: 0x00CC2C80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F60),
    },
    Trivial {
        routine: 0x00CC2C90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F60),
    },
    Trivial {
        routine: 0x00CC2CA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F64),
    },
    Trivial {
        routine: 0x00CC2CB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F64),
    },
    Trivial {
        routine: 0x00CC2CC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F68),
    },
    Trivial {
        routine: 0x00CC2CD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F68),
    },
    Trivial {
        routine: 0x00CC3FF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F7C),
    },
    Trivial {
        routine: 0x00CC4000,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F7C),
    },
    Trivial {
        routine: 0x00CC62D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F80),
    },
    Trivial {
        routine: 0x00CC62E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F80),
    },
    Trivial {
        routine: 0x00CCEB60,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00CCFDB0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00CD3B20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F88),
    },
    Trivial {
        routine: 0x00CD3B30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F88),
    },
    Trivial {
        routine: 0x00CD3C10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F8C),
    },
    Trivial {
        routine: 0x00CD3C20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F8C),
    },
    Trivial {
        routine: 0x00CD55C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00CD6380,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00CD6390,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00CD6780,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00CD6790,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00CD6840,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00CD6C00,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00CD7070,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00CD71B0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00CD71D0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00CD7C90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F94),
    },
    Trivial {
        routine: 0x00CD7CA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F94),
    },
    Trivial {
        routine: 0x00CD7CB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F98),
    },
    Trivial {
        routine: 0x00CD7CC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F98),
    },
    Trivial {
        routine: 0x00CD7CD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F9C),
    },
    Trivial {
        routine: 0x00CD7CE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019F9C),
    },
    Trivial {
        routine: 0x00CD7CF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019FA0),
    },
    Trivial {
        routine: 0x00CD7D00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019FA0),
    },
    Trivial {
        routine: 0x00CD7D80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019FB0),
    },
    Trivial {
        routine: 0x00CD9C80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019FC8),
    },
    Trivial {
        routine: 0x00CD9C90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019FC8),
    },
    Trivial {
        routine: 0x00CDAA70,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00CDB8A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019FCC),
    },
    Trivial {
        routine: 0x00CDB8B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019FCC),
    },
    Trivial {
        routine: 0x00CDC750,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019FD0),
    },
    Trivial {
        routine: 0x00CDC760,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02019FD0),
    },
    Trivial {
        routine: 0x00CDCEB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A054),
    },
    Trivial {
        routine: 0x00CDDB50,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00CDDB80,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00CDDCC0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00CDE2C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00CE20E0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00CE20F0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00CE46A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A05C),
    },
    Trivial {
        routine: 0x00CE56F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00CE5700,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A060),
    },
    Trivial {
        routine: 0x00CE5710,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A060),
    },
    Trivial {
        routine: 0x00CE98D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A064),
    },
    Trivial {
        routine: 0x00CE98E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A064),
    },
    Trivial {
        routine: 0x00CEA880,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A068),
    },
    Trivial {
        routine: 0x00CEA890,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A068),
    },
    Trivial {
        routine: 0x00CEB650,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A06C),
    },
    Trivial {
        routine: 0x00CEB660,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A06C),
    },
    Trivial {
        routine: 0x00CEB670,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A070),
    },
    Trivial {
        routine: 0x00CEB680,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A070),
    },
    Trivial {
        routine: 0x00CEBC70,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00CED160,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A084),
    },
    Trivial {
        routine: 0x00CED170,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A084),
    },
    Trivial {
        routine: 0x00CEE960,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A088),
    },
    Trivial {
        routine: 0x00CEE970,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A088),
    },
    Trivial {
        routine: 0x00CEEFB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A08C),
    },
    Trivial {
        routine: 0x00CEEFC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A08C),
    },
    Trivial {
        routine: 0x00CF2A40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A090),
    },
    Trivial {
        routine: 0x00CF2A50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A090),
    },
    Trivial {
        routine: 0x00CF2A60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A094),
    },
    Trivial {
        routine: 0x00CF2A70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A094),
    },
    Trivial {
        routine: 0x00CF3750,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A098),
    },
    Trivial {
        routine: 0x00CF3760,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A098),
    },
    Trivial {
        routine: 0x00CF4000,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00CF4010,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00CF5890,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A0A0),
    },
    Trivial {
        routine: 0x00CF58A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A0A0),
    },
    Trivial {
        routine: 0x00CF5E70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A0A4),
    },
    Trivial {
        routine: 0x00CF5E80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A0A4),
    },
    Trivial {
        routine: 0x00CFB040,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00CFB050,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00CFCE20,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00CFCED0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A0B0),
    },
    Trivial {
        routine: 0x00CFCEE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A0B0),
    },
    Trivial {
        routine: 0x00D08360,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A0B4),
    },
    Trivial {
        routine: 0x00D08370,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A0B4),
    },
    Trivial {
        routine: 0x00D08380,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A0B8),
    },
    Trivial {
        routine: 0x00D08390,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A0B8),
    },
    Trivial {
        routine: 0x00D083A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A0BC),
    },
    Trivial {
        routine: 0x00D083B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A0BC),
    },
    Trivial {
        routine: 0x00D083C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A0C0),
    },
    Trivial {
        routine: 0x00D083D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A0C0),
    },
    Trivial {
        routine: 0x00D083E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A0C4),
    },
    Trivial {
        routine: 0x00D083F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A0C4),
    },
    Trivial {
        routine: 0x00D08400,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A0C8),
    },
    Trivial {
        routine: 0x00D08410,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A0C8),
    },
    Trivial {
        routine: 0x00D0CCA0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D0D320,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D0EC60,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D0EC70,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00D14230,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D156E0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D18350,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D1A520,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D1ABB0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00D1ABD0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D1ABF0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D1AC10,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D1AC30,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D1AC70,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D1AFD0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00D1C100,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D1C350,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D1C4E0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00D1C500,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D1C520,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D1C540,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D1C560,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D1C580,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D1C5A0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D1CBA0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D1CBB0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00D1CDB0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D1CDF0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00D1CE10,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D1CE50,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00D20B40,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D2B3F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A0D4),
    },
    Trivial {
        routine: 0x00D2B400,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A0D4),
    },
    Trivial {
        routine: 0x00D2FC80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A100),
    },
    Trivial {
        routine: 0x00D30E90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A15C),
    },
    Trivial {
        routine: 0x00D30EA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A16C),
    },
    Trivial {
        routine: 0x00D30F90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A174),
    },
    Trivial {
        routine: 0x00D30FA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0201A174),
    },
    Trivial {
        routine: 0x00D47900,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D47950,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D49CA0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D7DA20,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00D7DA30,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x00D7E640,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00D7E650,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x00D7EFC0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00D7F440,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D7F450,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D7F460,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D7F470,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D7F480,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D805A0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D805B0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D80FA0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D811B0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D81230,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D81240,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D812F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D81300,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D81420,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D81430,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D81550,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D81560,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D81570,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D81650,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D81660,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D81770,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D81780,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D817F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D81800,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D81860,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D81870,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D81910,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D81920,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D81950,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D81960,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D81B00,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D81B10,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D81B80,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D81B90,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D81CD0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D81CE0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D81E70,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D81E80,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D82010,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D82090,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D820A0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D82200,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D82210,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D82790,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D827F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D82BC0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D82BD0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D82D50,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D82D60,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D82EE0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D82EF0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D82F50,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D82FB0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D83030,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D83040,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D86BD0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D87660,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D88840,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D8D7A0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D8D7B0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D8F260,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D8F280,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D8F290,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D98B80,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D98B90,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D98BA0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D98BB0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D98BC0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D98BD0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D98BE0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D98BF0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D98C00,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D98C30,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D98C40,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D98C50,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D98C60,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D98C70,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D98C80,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D9CFB0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D9F800,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00D9F8B0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00DA8ED0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DA38),
    },
    Trivial {
        routine: 0x00DA8EE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DA38),
    },
    Trivial {
        routine: 0x00DA8EF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DA3C),
    },
    Trivial {
        routine: 0x00DA8F00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DA3C),
    },
    Trivial {
        routine: 0x00DA8F10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DA40),
    },
    Trivial {
        routine: 0x00DA8F20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DA40),
    },
    Trivial {
        routine: 0x00DA8F30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DA44),
    },
    Trivial {
        routine: 0x00DA8F40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DA44),
    },
    Trivial {
        routine: 0x00DA9F50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DA7C),
    },
    Trivial {
        routine: 0x00DA9F60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DA7C),
    },
    Trivial {
        routine: 0x00DAD920,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DA80),
    },
    Trivial {
        routine: 0x00DAD930,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DA80),
    },
    Trivial {
        routine: 0x00DAF0E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DA84),
    },
    Trivial {
        routine: 0x00DAF0F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DA84),
    },
    Trivial {
        routine: 0x00DB0A90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DA88),
    },
    Trivial {
        routine: 0x00DB0AA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DA88),
    },
    Trivial {
        routine: 0x00DB3A10,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00DB7EE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DA8C),
    },
    Trivial {
        routine: 0x00DB7EF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DA8C),
    },
    Trivial {
        routine: 0x00DBCA70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DA90),
    },
    Trivial {
        routine: 0x00DBCA80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DA90),
    },
    Trivial {
        routine: 0x00DCF650,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DA94),
    },
    Trivial {
        routine: 0x00DCF660,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DA94),
    },
    Trivial {
        routine: 0x00DCFAE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DA98),
    },
    Trivial {
        routine: 0x00DCFAF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DA98),
    },
    Trivial {
        routine: 0x00DD00A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DA9C),
    },
    Trivial {
        routine: 0x00DD00B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DA9C),
    },
    Trivial {
        routine: 0x00DD00C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DAA0),
    },
    Trivial {
        routine: 0x00DD00D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DAA0),
    },
    Trivial {
        routine: 0x00DD1BA0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00DD1BB0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00DD2C00,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00DD5E40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DB28),
    },
    Trivial {
        routine: 0x00DD6030,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DB40),
    },
    Trivial {
        routine: 0x00DD6040,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DB40),
    },
    Trivial {
        routine: 0x00DD6B50,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00DD7340,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DB44),
    },
    Trivial {
        routine: 0x00DD7380,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DB48),
    },
    Trivial {
        routine: 0x00DD7390,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DB48),
    },
    Trivial {
        routine: 0x00DD8E50,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00DDC7B0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00DE1300,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00DE1360,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00DE1440,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00DE1450,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00DE1550,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00DE1560,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00DE1570,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00DE1580,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00DE15C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00DE1740,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00DE17B0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00DE1830,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00DE1840,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00DE1850,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00DE1860,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00DE1970,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00DE1980,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00DE1990,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00DE19C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00DE1F20,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00DE1F30,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00DE1F40,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00DE1F80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DB80),
    },
    Trivial {
        routine: 0x00DE1FC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DB84),
    },
    Trivial {
        routine: 0x00DE1FD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DB84),
    },
    Trivial {
        routine: 0x00DE1FE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DB88),
    },
    Trivial {
        routine: 0x00DE1FF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DB88),
    },
    Trivial {
        routine: 0x00DE73E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DB8C),
    },
    Trivial {
        routine: 0x00DE73F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DB8C),
    },
    Trivial {
        routine: 0x00DE9280,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DB90),
    },
    Trivial {
        routine: 0x00DE9290,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DB90),
    },
    Trivial {
        routine: 0x00DE9BC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DB94),
    },
    Trivial {
        routine: 0x00DE9BD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DB94),
    },
    Trivial {
        routine: 0x00DF1D00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DB98),
    },
    Trivial {
        routine: 0x00DF1D10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DB98),
    },
    Trivial {
        routine: 0x00DFBAF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DE88),
    },
    Trivial {
        routine: 0x00DFC0E0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00DFFCD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DFA0),
    },
    Trivial {
        routine: 0x00DFFCE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DFA0),
    },
    Trivial {
        routine: 0x00DFFCF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DFA4),
    },
    Trivial {
        routine: 0x00DFFD00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DFA4),
    },
    Trivial {
        routine: 0x00E02070,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DFA8),
    },
    Trivial {
        routine: 0x00E02080,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DFA8),
    },
    Trivial {
        routine: 0x00E02140,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DFAC),
    },
    Trivial {
        routine: 0x00E02150,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DFAC),
    },
    Trivial {
        routine: 0x00E042B0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00E042C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DFCC),
    },
    Trivial {
        routine: 0x00E042D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DFCC),
    },
    Trivial {
        routine: 0x00E042E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DFD0),
    },
    Trivial {
        routine: 0x00E042F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202DFD0),
    },
    Trivial {
        routine: 0x00E06C00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E128),
    },
    Trivial {
        routine: 0x00E06EA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E12C),
    },
    Trivial {
        routine: 0x00E06EB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E12C),
    },
    Trivial {
        routine: 0x00E07950,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00E08240,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E130),
    },
    Trivial {
        routine: 0x00E08250,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E130),
    },
    Trivial {
        routine: 0x00E08630,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00E08640,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00E08650,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00E08660,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00E08670,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00E08680,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E134),
    },
    Trivial {
        routine: 0x00E08690,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E134),
    },
    Trivial {
        routine: 0x00E086F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E138),
    },
    Trivial {
        routine: 0x00E089E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E13C),
    },
    Trivial {
        routine: 0x00E089F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E13C),
    },
    Trivial {
        routine: 0x00E08F60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E140),
    },
    Trivial {
        routine: 0x00E08F70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E140),
    },
    Trivial {
        routine: 0x00E09F50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E144),
    },
    Trivial {
        routine: 0x00E09F60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E144),
    },
    Trivial {
        routine: 0x00E0B170,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E154),
    },
    Trivial {
        routine: 0x00E0C240,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E158),
    },
    Trivial {
        routine: 0x00E0C250,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E158),
    },
    Trivial {
        routine: 0x00E10A70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E15C),
    },
    Trivial {
        routine: 0x00E10A80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E15C),
    },
    Trivial {
        routine: 0x00E12750,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E160),
    },
    Trivial {
        routine: 0x00E12760,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E160),
    },
    Trivial {
        routine: 0x00E13DA0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00E14E80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E164),
    },
    Trivial {
        routine: 0x00E14E90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E164),
    },
    Trivial {
        routine: 0x00E15E50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E168),
    },
    Trivial {
        routine: 0x00E15E60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E168),
    },
    Trivial {
        routine: 0x00E16370,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00E164A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E16C),
    },
    Trivial {
        routine: 0x00E164B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E170),
    },
    Trivial {
        routine: 0x00E164C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E170),
    },
    Trivial {
        routine: 0x00E1E2D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E968),
    },
    Trivial {
        routine: 0x00E1E2E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E968),
    },
    Trivial {
        routine: 0x00E290E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E96C),
    },
    Trivial {
        routine: 0x00E290F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E96C),
    },
    Trivial {
        routine: 0x00E39930,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E970),
    },
    Trivial {
        routine: 0x00E39940,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E970),
    },
    Trivial {
        routine: 0x00E46130,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E974),
    },
    Trivial {
        routine: 0x00E46140,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E974),
    },
    Trivial {
        routine: 0x00E74520,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E978),
    },
    Trivial {
        routine: 0x00E74530,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E978),
    },
    Trivial {
        routine: 0x00E78400,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E97C),
    },
    Trivial {
        routine: 0x00E78410,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E97C),
    },
    Trivial {
        routine: 0x00E7AD40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E9C0),
    },
    Trivial {
        routine: 0x00E7AD50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E9C0),
    },
    Trivial {
        routine: 0x00E7B790,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E9C4),
    },
    Trivial {
        routine: 0x00E7B7A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E9C4),
    },
    Trivial {
        routine: 0x00E7DE30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E9C8),
    },
    Trivial {
        routine: 0x00E7DE40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E9C8),
    },
    Trivial {
        routine: 0x00E7FFF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E9CC),
    },
    Trivial {
        routine: 0x00E80000,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202E9CC),
    },
    Trivial {
        routine: 0x00E80C90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EA10),
    },
    Trivial {
        routine: 0x00E80CA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EA10),
    },
    Trivial {
        routine: 0x00E81D00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EA14),
    },
    Trivial {
        routine: 0x00E81D10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EA14),
    },
    Trivial {
        routine: 0x00EA1BA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EA18),
    },
    Trivial {
        routine: 0x00EA1BB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EA18),
    },
    Trivial {
        routine: 0x00EA1C40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EA40),
    },
    Trivial {
        routine: 0x00EA1C50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EA40),
    },
    Trivial {
        routine: 0x00EA4360,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00EA47B0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00EA55E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EA44),
    },
    Trivial {
        routine: 0x00EA55F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EA44),
    },
    Trivial {
        routine: 0x00EA74D0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00EA9330,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EA48),
    },
    Trivial {
        routine: 0x00EA9340,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EA48),
    },
    Trivial {
        routine: 0x00EB9460,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EA88),
    },
    Trivial {
        routine: 0x00EB9470,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EA88),
    },
    Trivial {
        routine: 0x00EBA910,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EA8C),
    },
    Trivial {
        routine: 0x00EBA920,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EA8C),
    },
    Trivial {
        routine: 0x00EBC240,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00EBCAE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EAA0),
    },
    Trivial {
        routine: 0x00EBCAF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EAA0),
    },
    Trivial {
        routine: 0x00EBD530,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EAB0),
    },
    Trivial {
        routine: 0x00EBD540,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EAB0),
    },
    Trivial {
        routine: 0x00EBE090,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EAB4),
    },
    Trivial {
        routine: 0x00EBE0A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EAB4),
    },
    Trivial {
        routine: 0x00EC8960,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EAB8),
    },
    Trivial {
        routine: 0x00EC8970,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EAB8),
    },
    Trivial {
        routine: 0x00EC9550,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EAD0),
    },
    Trivial {
        routine: 0x00EC9560,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EAD0),
    },
    Trivial {
        routine: 0x00ED5C10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EAD4),
    },
    Trivial {
        routine: 0x00ED5C20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EAD4),
    },
    Trivial {
        routine: 0x00EEC2B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EAE0),
    },
    Trivial {
        routine: 0x00EEC2C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EAE0),
    },
    Trivial {
        routine: 0x00EF3FE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EAE4),
    },
    Trivial {
        routine: 0x00EF3FF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EAE4),
    },
    Trivial {
        routine: 0x00EF4060,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00EF4240,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EAE8),
    },
    Trivial {
        routine: 0x00EF4250,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EAE8),
    },
    Trivial {
        routine: 0x00EF4870,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EAEC),
    },
    Trivial {
        routine: 0x00EF4880,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EAEC),
    },
    Trivial {
        routine: 0x00EF7D40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EAF0),
    },
    Trivial {
        routine: 0x00EF7D50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EAF0),
    },
    Trivial {
        routine: 0x00EFE090,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EAF4),
    },
    Trivial {
        routine: 0x00EFE0A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EAF4),
    },
    Trivial {
        routine: 0x00F02ED0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00F02FA0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00F03FB0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00F04010,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00F04500,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EAF8),
    },
    Trivial {
        routine: 0x00F04510,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EAF8),
    },
    Trivial {
        routine: 0x00F05030,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EB08),
    },
    Trivial {
        routine: 0x00F05040,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EB08),
    },
    Trivial {
        routine: 0x00F07310,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EB0C),
    },
    Trivial {
        routine: 0x00F081D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EB10),
    },
    Trivial {
        routine: 0x00F081E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EB10),
    },
    Trivial {
        routine: 0x00F08BB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EB14),
    },
    Trivial {
        routine: 0x00F08BC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EB14),
    },
    Trivial {
        routine: 0x00F08DB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EB18),
    },
    Trivial {
        routine: 0x00F08DC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EB18),
    },
    Trivial {
        routine: 0x00F08DD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EB1C),
    },
    Trivial {
        routine: 0x00F08DE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EB1C),
    },
    Trivial {
        routine: 0x00F0B830,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EB20),
    },
    Trivial {
        routine: 0x00F0B840,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EB20),
    },
    Trivial {
        routine: 0x00F0CB10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EB24),
    },
    Trivial {
        routine: 0x00F0CB20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EB24),
    },
    Trivial {
        routine: 0x00F0D590,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EB28),
    },
    Trivial {
        routine: 0x00F0D5A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EB28),
    },
    Trivial {
        routine: 0x00F0E090,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EB2C),
    },
    Trivial {
        routine: 0x00F0E0A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EB2C),
    },
    Trivial {
        routine: 0x00F0FE00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x01EFAB58),
    },
    Trivial {
        routine: 0x00F0FE10,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x00F0FE20,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00F105B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EB30),
    },
    Trivial {
        routine: 0x00F105C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EB30),
    },
    Trivial {
        routine: 0x00F11C90,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00F11CA0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00F12050,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EB34),
    },
    Trivial {
        routine: 0x00F12060,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EB34),
    },
    Trivial {
        routine: 0x00F121B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EB38),
    },
    Trivial {
        routine: 0x00F121C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EB38),
    },
    Trivial {
        routine: 0x00F16530,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00F16540,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00F168E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EB3C),
    },
    Trivial {
        routine: 0x00F168F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EB3C),
    },
    Trivial {
        routine: 0x00F1E300,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EB50),
    },
    Trivial {
        routine: 0x00F21270,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EB54),
    },
    Trivial {
        routine: 0x00F21280,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EB54),
    },
    Trivial {
        routine: 0x00F21380,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EB58),
    },
    Trivial {
        routine: 0x00F21390,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EB58),
    },
    Trivial {
        routine: 0x00F2CF90,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00F2E470,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00F32F20,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00F32F30,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00F40930,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00F40DA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202ECE8),
    },
    Trivial {
        routine: 0x00F40DB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202ECE8),
    },
    Trivial {
        routine: 0x00F44D30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202ECEC),
    },
    Trivial {
        routine: 0x00F44D40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202ECEC),
    },
    Trivial {
        routine: 0x00F48A00,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00F4A020,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202ECF0),
    },
    Trivial {
        routine: 0x00F4A030,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202ECF0),
    },
    Trivial {
        routine: 0x00F4A6C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202ED00),
    },
    Trivial {
        routine: 0x00F4A6D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202ED00),
    },
    Trivial {
        routine: 0x00F4A6E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202ED04),
    },
    Trivial {
        routine: 0x00F4A6F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202ED04),
    },
    Trivial {
        routine: 0x00F4C0F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202ED08),
    },
    Trivial {
        routine: 0x00F4C100,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202ED08),
    },
    Trivial {
        routine: 0x00F51490,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202ED1C),
    },
    Trivial {
        routine: 0x00F514A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202ED1C),
    },
    Trivial {
        routine: 0x00F51AD0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00F543A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202ED20),
    },
    Trivial {
        routine: 0x00F543B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202ED20),
    },
    Trivial {
        routine: 0x00F5AC00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202ED24),
    },
    Trivial {
        routine: 0x00F5AC10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202ED24),
    },
    Trivial {
        routine: 0x00F5C670,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202ED28),
    },
    Trivial {
        routine: 0x00F5C680,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202ED28),
    },
    Trivial {
        routine: 0x00F5D6D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202ED2C),
    },
    Trivial {
        routine: 0x00F5D6E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202ED2C),
    },
    Trivial {
        routine: 0x00F5E020,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202ED30),
    },
    Trivial {
        routine: 0x00F5E030,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202ED30),
    },
    Trivial {
        routine: 0x00F5FA60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202ED34),
    },
    Trivial {
        routine: 0x00F5FA70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202ED34),
    },
    Trivial {
        routine: 0x00F5FCA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202ED38),
    },
    Trivial {
        routine: 0x00F5FCB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202ED38),
    },
    Trivial {
        routine: 0x00F5FE90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EE50),
    },
    Trivial {
        routine: 0x00F60400,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EE60),
    },
    Trivial {
        routine: 0x00F60410,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EE60),
    },
    Trivial {
        routine: 0x00F60D70,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x00F612E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EE74),
    },
    Trivial {
        routine: 0x00F62A20,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00F62A30,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00F654D0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00F654E0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00F65500,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EE78),
    },
    Trivial {
        routine: 0x00F65510,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EE78),
    },
    Trivial {
        routine: 0x00F6E240,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00F6F090,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00F6F1C0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00F6F1D0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00F6F880,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00F6F8E0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00F6F8F0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00F6F900,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00F6F910,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00F70CC0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00F70FA0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00F71FC0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00F74040,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00F749F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00F76360,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EEDC),
    },
    Trivial {
        routine: 0x00F76370,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EEDC),
    },
    Trivial {
        routine: 0x00F77DA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EEE0),
    },
    Trivial {
        routine: 0x00F77DB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EEE0),
    },
    Trivial {
        routine: 0x00F7A780,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EEE4),
    },
    Trivial {
        routine: 0x00F7A790,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EEE4),
    },
    Trivial {
        routine: 0x00F7AD10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EEE8),
    },
    Trivial {
        routine: 0x00F7AD20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EEE8),
    },
    Trivial {
        routine: 0x00F7B810,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EEF8),
    },
    Trivial {
        routine: 0x00F7B820,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EEF8),
    },
    Trivial {
        routine: 0x00F7BE30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EEFC),
    },
    Trivial {
        routine: 0x00F7BE40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EEFC),
    },
    Trivial {
        routine: 0x00F7DEE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF00),
    },
    Trivial {
        routine: 0x00F7DEF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF00),
    },
    Trivial {
        routine: 0x00F81CD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF04),
    },
    Trivial {
        routine: 0x00F81CE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF04),
    },
    Trivial {
        routine: 0x00F81D20,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00F81D50,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00F81D60,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00F81D70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF08),
    },
    Trivial {
        routine: 0x00F81D80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF08),
    },
    Trivial {
        routine: 0x00F82DF0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00F83A40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF18),
    },
    Trivial {
        routine: 0x00F83A50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF18),
    },
    Trivial {
        routine: 0x00F85440,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00F855A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF28),
    },
    Trivial {
        routine: 0x00F855B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF28),
    },
    Trivial {
        routine: 0x00F860F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF38),
    },
    Trivial {
        routine: 0x00F86100,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF38),
    },
    Trivial {
        routine: 0x00F867F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF48),
    },
    Trivial {
        routine: 0x00F86800,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF48),
    },
    Trivial {
        routine: 0x00F87610,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00F87620,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00F87630,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x00F87640,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF58),
    },
    Trivial {
        routine: 0x00F87650,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF58),
    },
    Trivial {
        routine: 0x00F8B590,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00F8D180,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00F8D190,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00F8E060,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00F8E610,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00F90B60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF5C),
    },
    Trivial {
        routine: 0x00F90B70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF5C),
    },
    Trivial {
        routine: 0x00F910C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF64),
    },
    Trivial {
        routine: 0x00F910D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF64),
    },
    Trivial {
        routine: 0x00F917D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF68),
    },
    Trivial {
        routine: 0x00F917E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF68),
    },
    Trivial {
        routine: 0x00F91F60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF6C),
    },
    Trivial {
        routine: 0x00F91F70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF6C),
    },
    Trivial {
        routine: 0x00F92F30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF70),
    },
    Trivial {
        routine: 0x00F92F40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF70),
    },
    Trivial {
        routine: 0x00F93FD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF74),
    },
    Trivial {
        routine: 0x00F93FE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF74),
    },
    Trivial {
        routine: 0x00F955D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF78),
    },
    Trivial {
        routine: 0x00F955E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF78),
    },
    Trivial {
        routine: 0x00F96350,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF7C),
    },
    Trivial {
        routine: 0x00F96360,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF7C),
    },
    Trivial {
        routine: 0x00F973B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF80),
    },
    Trivial {
        routine: 0x00F973C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF80),
    },
    Trivial {
        routine: 0x00F98020,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF84),
    },
    Trivial {
        routine: 0x00F98030,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF84),
    },
    Trivial {
        routine: 0x00F98C70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF88),
    },
    Trivial {
        routine: 0x00F98C80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF88),
    },
    Trivial {
        routine: 0x00F9CA40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF8C),
    },
    Trivial {
        routine: 0x00F9CA50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF8C),
    },
    Trivial {
        routine: 0x00F9FE80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF90),
    },
    Trivial {
        routine: 0x00F9FE90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF90),
    },
    Trivial {
        routine: 0x00FA61B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF94),
    },
    Trivial {
        routine: 0x00FA61C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF94),
    },
    Trivial {
        routine: 0x00FABCD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF98),
    },
    Trivial {
        routine: 0x00FABCE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF98),
    },
    Trivial {
        routine: 0x00FACAD0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00FACAE0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00FACD70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF9C),
    },
    Trivial {
        routine: 0x00FACD80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EF9C),
    },
    Trivial {
        routine: 0x00FAEB20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EFA8),
    },
    Trivial {
        routine: 0x00FAEB30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EFA8),
    },
    Trivial {
        routine: 0x00FB01C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EFAC),
    },
    Trivial {
        routine: 0x00FB01D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EFAC),
    },
    Trivial {
        routine: 0x00FB25A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EFB0),
    },
    Trivial {
        routine: 0x00FB25B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EFB0),
    },
    Trivial {
        routine: 0x00FB9360,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EFB4),
    },
    Trivial {
        routine: 0x00FB9370,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EFB4),
    },
    Trivial {
        routine: 0x00FBCFB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EFB8),
    },
    Trivial {
        routine: 0x00FBCFC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EFB8),
    },
    Trivial {
        routine: 0x00FBF2B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EFBC),
    },
    Trivial {
        routine: 0x00FBF2C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EFBC),
    },
    Trivial {
        routine: 0x00FC0D70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EFC0),
    },
    Trivial {
        routine: 0x00FC0D80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EFC0),
    },
    Trivial {
        routine: 0x00FC18A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EFC4),
    },
    Trivial {
        routine: 0x00FC18B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EFC4),
    },
    Trivial {
        routine: 0x00FC38A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EFC8),
    },
    Trivial {
        routine: 0x00FC38B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EFC8),
    },
    Trivial {
        routine: 0x00FC61F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EFCC),
    },
    Trivial {
        routine: 0x00FC6200,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EFCC),
    },
    Trivial {
        routine: 0x00FC8340,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EFD0),
    },
    Trivial {
        routine: 0x00FC8350,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EFD0),
    },
    Trivial {
        routine: 0x00FC9480,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00FC9490,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00FC9830,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EFD4),
    },
    Trivial {
        routine: 0x00FC9840,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EFD4),
    },
    Trivial {
        routine: 0x00FCDA10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EFE0),
    },
    Trivial {
        routine: 0x00FCDA20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EFE0),
    },
    Trivial {
        routine: 0x00FD5BF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EFE4),
    },
    Trivial {
        routine: 0x00FD5C00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202EFE4),
    },
    Trivial {
        routine: 0x00FD6710,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F3EC),
    },
    Trivial {
        routine: 0x00FD6720,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F3EC),
    },
    Trivial {
        routine: 0x00FD7630,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F3F0),
    },
    Trivial {
        routine: 0x00FD7640,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F3F0),
    },
    Trivial {
        routine: 0x00FD8570,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F3F4),
    },
    Trivial {
        routine: 0x00FD8580,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F3F4),
    },
    Trivial {
        routine: 0x00FD8D70,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00FD8D80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F3F8),
    },
    Trivial {
        routine: 0x00FD8D90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F3F8),
    },
    Trivial {
        routine: 0x00FD97B0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00FD97C0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00FDA150,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x00FF2660,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F3FC),
    },
    Trivial {
        routine: 0x00FF2670,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F3FC),
    },
    Trivial {
        routine: 0x00FF8E20,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x00FF8E30,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x00FF8F20,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x00FF9270,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01026D20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F400),
    },
    Trivial {
        routine: 0x01026D30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F400),
    },
    Trivial {
        routine: 0x01027550,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01027630,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F404),
    },
    Trivial {
        routine: 0x01027640,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F404),
    },
    Trivial {
        routine: 0x01028340,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01028350,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01028500,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0103C3E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F408),
    },
    Trivial {
        routine: 0x0103C3F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F408),
    },
    Trivial {
        routine: 0x0103EF10,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0103EF20,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x0104A600,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F40C),
    },
    Trivial {
        routine: 0x0104A610,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F40C),
    },
    Trivial {
        routine: 0x010521D0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x010544E0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01054540,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F428),
    },
    Trivial {
        routine: 0x01054550,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F428),
    },
    Trivial {
        routine: 0x01054560,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F830),
    },
    Trivial {
        routine: 0x01054570,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F830),
    },
    Trivial {
        routine: 0x010545A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F834),
    },
    Trivial {
        routine: 0x010545B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F834),
    },
    Trivial {
        routine: 0x01054BC0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01054CA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F840),
    },
    Trivial {
        routine: 0x01054CB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F840),
    },
    Trivial {
        routine: 0x01056FE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F844),
    },
    Trivial {
        routine: 0x01056FF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F844),
    },
    Trivial {
        routine: 0x01057190,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F848),
    },
    Trivial {
        routine: 0x010571A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F848),
    },
    Trivial {
        routine: 0x01065760,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F84C),
    },
    Trivial {
        routine: 0x010674D0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0106A3B0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x0106BAA0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x0106BC60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F854),
    },
    Trivial {
        routine: 0x0106BC70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F854),
    },
    Trivial {
        routine: 0x0106C1A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F858),
    },
    Trivial {
        routine: 0x0106C1B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F858),
    },
    Trivial {
        routine: 0x0106CA00,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x0106CE70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F85C),
    },
    Trivial {
        routine: 0x0106CE80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F85C),
    },
    Trivial {
        routine: 0x0106D8B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F868),
    },
    Trivial {
        routine: 0x0106D8C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F868),
    },
    Trivial {
        routine: 0x0106DDA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F86C),
    },
    Trivial {
        routine: 0x0106DDB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F86C),
    },
    Trivial {
        routine: 0x0106EB90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F870),
    },
    Trivial {
        routine: 0x0106EBA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F870),
    },
    Trivial {
        routine: 0x0106F460,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F874),
    },
    Trivial {
        routine: 0x0106F470,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F874),
    },
    Trivial {
        routine: 0x0106F480,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F880),
    },
    Trivial {
        routine: 0x0106F490,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F880),
    },
    Trivial {
        routine: 0x01070960,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F884),
    },
    Trivial {
        routine: 0x01070970,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F884),
    },
    Trivial {
        routine: 0x01072010,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F888),
    },
    Trivial {
        routine: 0x01072020,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F888),
    },
    Trivial {
        routine: 0x01072030,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F88C),
    },
    Trivial {
        routine: 0x01072040,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F88C),
    },
    Trivial {
        routine: 0x01072050,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F890),
    },
    Trivial {
        routine: 0x01072060,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F890),
    },
    Trivial {
        routine: 0x01072B50,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01072C80,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x01073180,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F894),
    },
    Trivial {
        routine: 0x01073190,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F894),
    },
    Trivial {
        routine: 0x01073910,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F898),
    },
    Trivial {
        routine: 0x01073920,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F898),
    },
    Trivial {
        routine: 0x0107A3B0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0108B740,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0108B750,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0108B8B0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01090560,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F8A8),
    },
    Trivial {
        routine: 0x01093AD0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01094D70,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x010982F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01099750,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01099B70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F8E0),
    },
    Trivial {
        routine: 0x01099B80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F8E0),
    },
    Trivial {
        routine: 0x0109D2F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0109FAB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F8F0),
    },
    Trivial {
        routine: 0x0109FAC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F8F0),
    },
    Trivial {
        routine: 0x0109FC50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F8F4),
    },
    Trivial {
        routine: 0x0109FC60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F8F4),
    },
    Trivial {
        routine: 0x010A06B0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x010A06F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F8F8),
    },
    Trivial {
        routine: 0x010A0700,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F8F8),
    },
    Trivial {
        routine: 0x010A0EC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F8FC),
    },
    Trivial {
        routine: 0x010A0ED0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F8FC),
    },
    Trivial {
        routine: 0x010A5710,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x010A6E60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F90C),
    },
    Trivial {
        routine: 0x010A8780,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F910),
    },
    Trivial {
        routine: 0x010A8790,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F910),
    },
    Trivial {
        routine: 0x010AF5A0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x010B3AB0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x010B3AC0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x010B47B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F938),
    },
    Trivial {
        routine: 0x010B4810,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F93C),
    },
    Trivial {
        routine: 0x010B57F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x010B5800,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x010B5810,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x010B58C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x010B58D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F944),
    },
    Trivial {
        routine: 0x010B58E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F944),
    },
    Trivial {
        routine: 0x010B6610,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x010B6940,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F948),
    },
    Trivial {
        routine: 0x010B6950,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F948),
    },
    Trivial {
        routine: 0x010B7C70,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x010B9B30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F94C),
    },
    Trivial {
        routine: 0x010B9B40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F94C),
    },
    Trivial {
        routine: 0x010BA0F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F950),
    },
    Trivial {
        routine: 0x010BA100,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F950),
    },
    Trivial {
        routine: 0x010BB3D0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x010BC370,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F954),
    },
    Trivial {
        routine: 0x010BC380,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F954),
    },
    Trivial {
        routine: 0x010BED90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F958),
    },
    Trivial {
        routine: 0x010BEDA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F958),
    },
    Trivial {
        routine: 0x010BF6C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F95C),
    },
    Trivial {
        routine: 0x010BF6D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F95C),
    },
    Trivial {
        routine: 0x010C17C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F964),
    },
    Trivial {
        routine: 0x010C1E20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F968),
    },
    Trivial {
        routine: 0x010C1E30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F96C),
    },
    Trivial {
        routine: 0x010C21F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x010C2200,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x010C2220,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F970),
    },
    Trivial {
        routine: 0x010C2230,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F970),
    },
    Trivial {
        routine: 0x010C2360,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F974),
    },
    Trivial {
        routine: 0x010C2370,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F974),
    },
    Trivial {
        routine: 0x010C79F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F978),
    },
    Trivial {
        routine: 0x010C7A00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F978),
    },
    Trivial {
        routine: 0x010C8670,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x010C8690,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x010C86B0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x010C94E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F97C),
    },
    Trivial {
        routine: 0x010C94F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F97C),
    },
    Trivial {
        routine: 0x010CB740,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F980),
    },
    Trivial {
        routine: 0x010CB750,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F980),
    },
    Trivial {
        routine: 0x010D12B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F984),
    },
    Trivial {
        routine: 0x010D12C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F984),
    },
    Trivial {
        routine: 0x010D38A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F988),
    },
    Trivial {
        routine: 0x010D38B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F988),
    },
    Trivial {
        routine: 0x010D56D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F98C),
    },
    Trivial {
        routine: 0x010D56E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F98C),
    },
    Trivial {
        routine: 0x010D5AA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F990),
    },
    Trivial {
        routine: 0x010D5AB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F990),
    },
    Trivial {
        routine: 0x010D6BD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F994),
    },
    Trivial {
        routine: 0x010D6BE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F994),
    },
    Trivial {
        routine: 0x010D78E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F998),
    },
    Trivial {
        routine: 0x010D78F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F998),
    },
    Trivial {
        routine: 0x010D9950,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F99C),
    },
    Trivial {
        routine: 0x010D9960,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F99C),
    },
    Trivial {
        routine: 0x010DBD40,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x010DC860,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x010DCD30,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x010DE410,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F9A0),
    },
    Trivial {
        routine: 0x010DE420,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202F9A0),
    },
    Trivial {
        routine: 0x010E2B80,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x010E3C00,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x010E44E0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x010ECC70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202FD58),
    },
    Trivial {
        routine: 0x010ECC80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202FD58),
    },
    Trivial {
        routine: 0x010EE8C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x010EE8D0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x010EE8E0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x010EEB60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202FD5C),
    },
    Trivial {
        routine: 0x010EEB70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202FD5C),
    },
    Trivial {
        routine: 0x010EF8C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202FD60),
    },
    Trivial {
        routine: 0x010EF8D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202FD60),
    },
    Trivial {
        routine: 0x010F1280,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x010F1290,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x010F1670,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202FD64),
    },
    Trivial {
        routine: 0x010F1680,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202FD64),
    },
    Trivial {
        routine: 0x010F20A0,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x010F2CD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202FD70),
    },
    Trivial {
        routine: 0x010F2CE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0202FD70),
    },
    Trivial {
        routine: 0x010FD020,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020300FC),
    },
    Trivial {
        routine: 0x010FFA60,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01101350,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01101360,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01104C60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0203010C),
    },
    Trivial {
        routine: 0x01107E60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02030110),
    },
    Trivial {
        routine: 0x01107E70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02030110),
    },
    Trivial {
        routine: 0x0110E0E0,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x0110E290,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x0110EBE0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0110EE10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02030114),
    },
    Trivial {
        routine: 0x0110EE20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02030114),
    },
    Trivial {
        routine: 0x0110EE30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02030118),
    },
    Trivial {
        routine: 0x0110EE40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02030118),
    },
    Trivial {
        routine: 0x01112650,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01114420,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0203011C),
    },
    Trivial {
        routine: 0x01114430,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0203011C),
    },
    Trivial {
        routine: 0x01114A40,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x011150E0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01115270,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02030120),
    },
    Trivial {
        routine: 0x01115280,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02030120),
    },
    Trivial {
        routine: 0x01115290,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02030124),
    },
    Trivial {
        routine: 0x011152A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02030124),
    },
    Trivial {
        routine: 0x01115A20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02030130),
    },
    Trivial {
        routine: 0x01116060,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02030134),
    },
    Trivial {
        routine: 0x01116070,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02030134),
    },
    Trivial {
        routine: 0x01116890,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02030138),
    },
    Trivial {
        routine: 0x011168A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02030138),
    },
    Trivial {
        routine: 0x01117690,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02030158),
    },
    Trivial {
        routine: 0x011176A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02030158),
    },
    Trivial {
        routine: 0x01119870,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0111A8B0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x0111EE00,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01128120,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02030170),
    },
    Trivial {
        routine: 0x01128130,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02030170),
    },
    Trivial {
        routine: 0x01128180,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02030174),
    },
    Trivial {
        routine: 0x01128190,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02030174),
    },
    Trivial {
        routine: 0x0112A010,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x0112AFF0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x0112B0E0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x011307F0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01130E30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02030184),
    },
    Trivial {
        routine: 0x01130E40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02030184),
    },
    Trivial {
        routine: 0x01133A90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0203019C),
    },
    Trivial {
        routine: 0x01133AA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0203019C),
    },
    Trivial {
        routine: 0x01133AB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020301A0),
    },
    Trivial {
        routine: 0x01133AC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020301A0),
    },
    Trivial {
        routine: 0x01133B40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020301B0),
    },
    Trivial {
        routine: 0x01133B50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020301B0),
    },
    Trivial {
        routine: 0x01133B60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020301B4),
    },
    Trivial {
        routine: 0x01133B70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020301B4),
    },
    Trivial {
        routine: 0x01133B80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020301B8),
    },
    Trivial {
        routine: 0x01133B90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020301B8),
    },
    Trivial {
        routine: 0x01133CF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020301BC),
    },
    Trivial {
        routine: 0x01133D00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020301BC),
    },
    Trivial {
        routine: 0x01136F90,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01138FD0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x0113E320,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020301C0),
    },
    Trivial {
        routine: 0x0113E330,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020301C0),
    },
    Trivial {
        routine: 0x0113F880,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020301C4),
    },
    Trivial {
        routine: 0x0113F890,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020301C4),
    },
    Trivial {
        routine: 0x01143BC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020301C8),
    },
    Trivial {
        routine: 0x01143BD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020301C8),
    },
    Trivial {
        routine: 0x0114E790,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020301E0),
    },
    Trivial {
        routine: 0x0114E7A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020301E0),
    },
    Trivial {
        routine: 0x01151570,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020301F8),
    },
    Trivial {
        routine: 0x01151580,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020301F8),
    },
    Trivial {
        routine: 0x01154090,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020301FC),
    },
    Trivial {
        routine: 0x011540A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020301FC),
    },
    Trivial {
        routine: 0x01155CC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0203034C),
    },
    Trivial {
        routine: 0x01155CD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0203034C),
    },
    Trivial {
        routine: 0x01156BB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02030350),
    },
    Trivial {
        routine: 0x01156BC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02030350),
    },
    Trivial {
        routine: 0x0115CFA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02030364),
    },
    Trivial {
        routine: 0x0115CFB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02030364),
    },
    Trivial {
        routine: 0x0115D6C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02030368),
    },
    Trivial {
        routine: 0x0115D6D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02030368),
    },
    Trivial {
        routine: 0x0115DD10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02030378),
    },
    Trivial {
        routine: 0x0115DD20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02030378),
    },
    Trivial {
        routine: 0x0115DDF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02038E58),
    },
    Trivial {
        routine: 0x01160660,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02038E5C),
    },
    Trivial {
        routine: 0x01160670,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02038E5C),
    },
    Trivial {
        routine: 0x01160B50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02038E68),
    },
    Trivial {
        routine: 0x01160B60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02038E68),
    },
    Trivial {
        routine: 0x01163570,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02038E6C),
    },
    Trivial {
        routine: 0x01163580,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02038E6C),
    },
    Trivial {
        routine: 0x01164120,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02038E70),
    },
    Trivial {
        routine: 0x01164130,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02038E70),
    },
    Trivial {
        routine: 0x01164E00,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01164F70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02038E74),
    },
    Trivial {
        routine: 0x01164F80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02038E74),
    },
    Trivial {
        routine: 0x01165D40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02038E78),
    },
    Trivial {
        routine: 0x01165D50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02038E78),
    },
    Trivial {
        routine: 0x01165FA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02038E7C),
    },
    Trivial {
        routine: 0x01165FB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02038E7C),
    },
    Trivial {
        routine: 0x01167C40,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01167F30,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01167F40,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01167FA0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x011680A0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x011686F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01169040,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0116A280,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0116AAC0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0116B310,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0116C030,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0116CAE0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01171FF0,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x01172890,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020412E8),
    },
    Trivial {
        routine: 0x011728A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020412E8),
    },
    Trivial {
        routine: 0x01175D90,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x01179BA0,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x01179BB0,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x01179BC0,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x01179BD0,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x01179BE0,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x01179BF0,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x01179C00,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x01179C10,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x0117A400,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02041C70),
    },
    Trivial {
        routine: 0x0117A410,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02041C70),
    },
    Trivial {
        routine: 0x01188F10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02041C74),
    },
    Trivial {
        routine: 0x01188F20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02041C74),
    },
    Trivial {
        routine: 0x01189580,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02041C78),
    },
    Trivial {
        routine: 0x01189590,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02041C78),
    },
    Trivial {
        routine: 0x01192E90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02041C7C),
    },
    Trivial {
        routine: 0x01192EA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02041C7C),
    },
    Trivial {
        routine: 0x01195100,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02041C80),
    },
    Trivial {
        routine: 0x01195110,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02041C80),
    },
    Trivial {
        routine: 0x01196360,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02042098),
    },
    Trivial {
        routine: 0x011974D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x01F299BC),
    },
    Trivial {
        routine: 0x011974E0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01198240,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020420B0),
    },
    Trivial {
        routine: 0x011A5050,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x011A51E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020420C0),
    },
    Trivial {
        routine: 0x011A9A80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x020C6570),
    },
    Trivial {
        routine: 0x011AA710,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107188),
    },
    Trivial {
        routine: 0x011AA720,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107188),
    },
    Trivial {
        routine: 0x011AD3D0,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x011AD3E0,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x011AD3F0,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x011AD400,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x011AD410,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x011AD420,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x011AD430,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x011AD440,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x011AD450,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x011AD460,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x011AD470,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x011AD480,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x011AD490,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x011AD4A0,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x011AD520,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021071E8),
    },
    Trivial {
        routine: 0x011D2FE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107660),
    },
    Trivial {
        routine: 0x01221720,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x012218F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107684),
    },
    Trivial {
        routine: 0x01234A70,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x01236A60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107738),
    },
    Trivial {
        routine: 0x01236EB0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01236FF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210773C),
    },
    Trivial {
        routine: 0x01237000,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210773C),
    },
    Trivial {
        routine: 0x01238BA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107740),
    },
    Trivial {
        routine: 0x01238BB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107740),
    },
    Trivial {
        routine: 0x01239FA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107744),
    },
    Trivial {
        routine: 0x01239FB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107744),
    },
    Trivial {
        routine: 0x0123B3F0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01241F30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107748),
    },
    Trivial {
        routine: 0x01241F40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107748),
    },
    Trivial {
        routine: 0x01242280,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0129C2F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210774C),
    },
    Trivial {
        routine: 0x0129C300,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210774C),
    },
    Trivial {
        routine: 0x0129DBF0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x0129F820,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107750),
    },
    Trivial {
        routine: 0x0129F830,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107750),
    },
    Trivial {
        routine: 0x012A4700,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x012A4F50,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x012A51D0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x012A51E0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x012A5260,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x012A5840,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x012A7020,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107754),
    },
    Trivial {
        routine: 0x012A7030,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107754),
    },
    Trivial {
        routine: 0x012A7040,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107758),
    },
    Trivial {
        routine: 0x012A7050,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107758),
    },
    Trivial {
        routine: 0x012ADC30,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x012B2730,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210775C),
    },
    Trivial {
        routine: 0x012B2740,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210775C),
    },
    Trivial {
        routine: 0x012B32F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107760),
    },
    Trivial {
        routine: 0x012B3300,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107760),
    },
    Trivial {
        routine: 0x012B3FA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107764),
    },
    Trivial {
        routine: 0x012B3FB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107764),
    },
    Trivial {
        routine: 0x012B4FF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107768),
    },
    Trivial {
        routine: 0x012B5000,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107768),
    },
    Trivial {
        routine: 0x012B62A0,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x012BAB30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107778),
    },
    Trivial {
        routine: 0x012BAB40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107778),
    },
    Trivial {
        routine: 0x012BB9C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210777C),
    },
    Trivial {
        routine: 0x012BB9D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210777C),
    },
    Trivial {
        routine: 0x012BC4E0,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x012BCE00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107788),
    },
    Trivial {
        routine: 0x012BCE10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107788),
    },
    Trivial {
        routine: 0x012BFA20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210778C),
    },
    Trivial {
        routine: 0x012BFA30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210778C),
    },
    Trivial {
        routine: 0x012CB990,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107798),
    },
    Trivial {
        routine: 0x012CB9A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107798),
    },
    Trivial {
        routine: 0x012CD290,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210779C),
    },
    Trivial {
        routine: 0x012CD2A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210779C),
    },
    Trivial {
        routine: 0x012DB390,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021077A8),
    },
    Trivial {
        routine: 0x012DB3A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021077A8),
    },
    Trivial {
        routine: 0x012DD520,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021077AC),
    },
    Trivial {
        routine: 0x012DD530,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021077AC),
    },
    Trivial {
        routine: 0x012DE0D0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x012E2840,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021077B0),
    },
    Trivial {
        routine: 0x012E2850,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021077B0),
    },
    Trivial {
        routine: 0x012E2860,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021077B4),
    },
    Trivial {
        routine: 0x012E2870,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021077B4),
    },
    Trivial {
        routine: 0x012E2E10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021077B8),
    },
    Trivial {
        routine: 0x012E2E20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021077B8),
    },
    Trivial {
        routine: 0x012E62D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021077BC),
    },
    Trivial {
        routine: 0x012E62E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021077BC),
    },
    Trivial {
        routine: 0x012E6890,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x012E6900,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021077C0),
    },
    Trivial {
        routine: 0x012E6910,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021077C0),
    },
    Trivial {
        routine: 0x012E6EF0,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x012E70F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021077C4),
    },
    Trivial {
        routine: 0x012E7100,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021077C4),
    },
    Trivial {
        routine: 0x012E7F10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021077C8),
    },
    Trivial {
        routine: 0x012E7F20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021077C8),
    },
    Trivial {
        routine: 0x012E8FB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021077CC),
    },
    Trivial {
        routine: 0x012E8FC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021077CC),
    },
    Trivial {
        routine: 0x012E9930,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021077D0),
    },
    Trivial {
        routine: 0x012E9940,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021077D0),
    },
    Trivial {
        routine: 0x012E9F00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021077E0),
    },
    Trivial {
        routine: 0x012E9F10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021077E0),
    },
    Trivial {
        routine: 0x012EA6C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021077F0),
    },
    Trivial {
        routine: 0x012EA6D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021077F0),
    },
    Trivial {
        routine: 0x012EB1B0,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x012EDF10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107800),
    },
    Trivial {
        routine: 0x012EDF20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107800),
    },
    Trivial {
        routine: 0x01307450,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107810),
    },
    Trivial {
        routine: 0x01307460,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107810),
    },
    Trivial {
        routine: 0x0131CC30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107820),
    },
    Trivial {
        routine: 0x0131CC40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107820),
    },
    Trivial {
        routine: 0x013299B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107824),
    },
    Trivial {
        routine: 0x013299C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107824),
    },
    Trivial {
        routine: 0x0132BE70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107830),
    },
    Trivial {
        routine: 0x0132BE80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107830),
    },
    Trivial {
        routine: 0x0132DDF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107834),
    },
    Trivial {
        routine: 0x0132DE00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107834),
    },
    Trivial {
        routine: 0x0132EFD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107838),
    },
    Trivial {
        routine: 0x0132EFE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107838),
    },
    Trivial {
        routine: 0x0132F400,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210783C),
    },
    Trivial {
        routine: 0x0132F410,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210783C),
    },
    Trivial {
        routine: 0x0132F850,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107840),
    },
    Trivial {
        routine: 0x0132F860,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107840),
    },
    Trivial {
        routine: 0x01338A70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107870),
    },
    Trivial {
        routine: 0x01338A80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107870),
    },
    Trivial {
        routine: 0x01339C80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107874),
    },
    Trivial {
        routine: 0x01339C90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107874),
    },
    Trivial {
        routine: 0x0133AE10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107878),
    },
    Trivial {
        routine: 0x0133AE20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107878),
    },
    Trivial {
        routine: 0x0133BD30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107888),
    },
    Trivial {
        routine: 0x0133BD40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107888),
    },
    Trivial {
        routine: 0x013410E0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x013411E0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x0134E6B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02107898),
    },
    Trivial {
        routine: 0x0134F940,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021078A8),
    },
    Trivial {
        routine: 0x0135F0B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108258),
    },
    Trivial {
        routine: 0x0135F0C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108258),
    },
    Trivial {
        routine: 0x01365070,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x013650D0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x013650E0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x013650F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01365100,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x013671C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01367820,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01369EA0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0136A4A0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0136A7C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0136A970,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0136AB70,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0136ADA0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0136B550,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0136BB10,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0136BF00,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0136C180,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0136CAC0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0136CDA0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0136D130,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0136D330,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0136DAB0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0136DD60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210825C),
    },
    Trivial {
        routine: 0x0136DD70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210825C),
    },
    Trivial {
        routine: 0x0136F1D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108270),
    },
    Trivial {
        routine: 0x0136F1E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108270),
    },
    Trivial {
        routine: 0x013711D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021082CC),
    },
    Trivial {
        routine: 0x013711E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021082CC),
    },
    Trivial {
        routine: 0x01374FE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108324),
    },
    Trivial {
        routine: 0x01374FF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108324),
    },
    Trivial {
        routine: 0x0137C0C0,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x0137CDA0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0137F500,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108328),
    },
    Trivial {
        routine: 0x0137F510,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108328),
    },
    Trivial {
        routine: 0x0137F520,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210832C),
    },
    Trivial {
        routine: 0x0137F530,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210832C),
    },
    Trivial {
        routine: 0x0137F540,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108330),
    },
    Trivial {
        routine: 0x0137F550,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108330),
    },
    Trivial {
        routine: 0x01388940,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0138D860,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108334),
    },
    Trivial {
        routine: 0x0138D870,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108338),
    },
    Trivial {
        routine: 0x0138D880,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108338),
    },
    Trivial {
        routine: 0x01397040,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210833C),
    },
    Trivial {
        routine: 0x01397050,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210833C),
    },
    Trivial {
        routine: 0x0139E630,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108340),
    },
    Trivial {
        routine: 0x0139E640,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108340),
    },
    Trivial {
        routine: 0x013A5620,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108350),
    },
    Trivial {
        routine: 0x013A5630,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108350),
    },
    Trivial {
        routine: 0x013A58E0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x013A5910,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x013A5920,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x013A5940,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x013A5C70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108354),
    },
    Trivial {
        routine: 0x013A5C80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108354),
    },
    Trivial {
        routine: 0x013AA340,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210835C),
    },
    Trivial {
        routine: 0x013AC800,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108390),
    },
    Trivial {
        routine: 0x013AC810,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108390),
    },
    Trivial {
        routine: 0x013B16E0,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x013B2580,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108394),
    },
    Trivial {
        routine: 0x013B2590,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108394),
    },
    Trivial {
        routine: 0x013B2E60,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x013B4BB0,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x013B4C10,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x013B54D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021083FC),
    },
    Trivial {
        routine: 0x013B54E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021083FC),
    },
    Trivial {
        routine: 0x013B6460,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108400),
    },
    Trivial {
        routine: 0x013B6470,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108400),
    },
    Trivial {
        routine: 0x013B8570,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108404),
    },
    Trivial {
        routine: 0x013BA3E0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x013BC8F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x01F3BCF4),
    },
    Trivial {
        routine: 0x013BD990,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108408),
    },
    Trivial {
        routine: 0x013BD9A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108408),
    },
    Trivial {
        routine: 0x013C0440,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210840C),
    },
    Trivial {
        routine: 0x013C0450,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210840C),
    },
    Trivial {
        routine: 0x013C0820,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108428),
    },
    Trivial {
        routine: 0x013C17E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210842C),
    },
    Trivial {
        routine: 0x013C17F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210842C),
    },
    Trivial {
        routine: 0x013C1BF0,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x013C3770,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108430),
    },
    Trivial {
        routine: 0x013C3780,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108430),
    },
    Trivial {
        routine: 0x013C5BB0,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x013C7800,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108444),
    },
    Trivial {
        routine: 0x013D0EF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108450),
    },
    Trivial {
        routine: 0x013D1D70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108454),
    },
    Trivial {
        routine: 0x013D1D80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108454),
    },
    Trivial {
        routine: 0x013D2D60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108458),
    },
    Trivial {
        routine: 0x013D2D70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108458),
    },
    Trivial {
        routine: 0x013E25B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108460),
    },
    Trivial {
        routine: 0x013E6320,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210845C),
    },
    Trivial {
        routine: 0x013E6330,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210845C),
    },
    Trivial {
        routine: 0x013E8FD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108470),
    },
    Trivial {
        routine: 0x013E8FE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108470),
    },
    Trivial {
        routine: 0x013EAB00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108474),
    },
    Trivial {
        routine: 0x013EAB10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108474),
    },
    Trivial {
        routine: 0x013EB640,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108478),
    },
    Trivial {
        routine: 0x013EB650,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108478),
    },
    Trivial {
        routine: 0x013EE770,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108490),
    },
    Trivial {
        routine: 0x013EE780,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108490),
    },
    Trivial {
        routine: 0x013F0DD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108494),
    },
    Trivial {
        routine: 0x013F0DE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108494),
    },
    Trivial {
        routine: 0x013F5850,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108498),
    },
    Trivial {
        routine: 0x013F5860,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02108498),
    },
    Trivial {
        routine: 0x013F67E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210849C),
    },
    Trivial {
        routine: 0x013F67F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210849C),
    },
    Trivial {
        routine: 0x013F8FA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021084A0),
    },
    Trivial {
        routine: 0x013F8FB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021084A0),
    },
    Trivial {
        routine: 0x013FA230,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021084A4),
    },
    Trivial {
        routine: 0x013FA240,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021084A4),
    },
    Trivial {
        routine: 0x013FAEB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021084A8),
    },
    Trivial {
        routine: 0x013FAEC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021084A8),
    },
    Trivial {
        routine: 0x01408220,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021084C4),
    },
    Trivial {
        routine: 0x01408230,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021084C4),
    },
    Trivial {
        routine: 0x01408CC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021084C8),
    },
    Trivial {
        routine: 0x01408CD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021084C8),
    },
    Trivial {
        routine: 0x0140A590,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021084CC),
    },
    Trivial {
        routine: 0x0140A5A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021084CC),
    },
    Trivial {
        routine: 0x0140A680,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021084D0),
    },
    Trivial {
        routine: 0x0140A690,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021084D0),
    },
    Trivial {
        routine: 0x0140B550,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0140B560,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021084D4),
    },
    Trivial {
        routine: 0x0140B570,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021084D4),
    },
    Trivial {
        routine: 0x0140CA80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021084E0),
    },
    Trivial {
        routine: 0x0140CA90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021084E0),
    },
    Trivial {
        routine: 0x0140F7E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021084E4),
    },
    Trivial {
        routine: 0x0140F7F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021084E4),
    },
    Trivial {
        routine: 0x01411FF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021084E8),
    },
    Trivial {
        routine: 0x01412000,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021084E8),
    },
    Trivial {
        routine: 0x014138A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210A4F8),
    },
    Trivial {
        routine: 0x014138B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210A4F8),
    },
    Trivial {
        routine: 0x01416910,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210A4FC),
    },
    Trivial {
        routine: 0x01416920,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210A4FC),
    },
    Trivial {
        routine: 0x01419CE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210A508),
    },
    Trivial {
        routine: 0x01419CF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210A508),
    },
    Trivial {
        routine: 0x0141B5E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210C50C),
    },
    Trivial {
        routine: 0x0141B5F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210C50C),
    },
    Trivial {
        routine: 0x0141CCB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210C510),
    },
    Trivial {
        routine: 0x0141CCC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210C510),
    },
    Trivial {
        routine: 0x0141D780,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210C514),
    },
    Trivial {
        routine: 0x0141D790,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210C514),
    },
    Trivial {
        routine: 0x0141F220,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210C518),
    },
    Trivial {
        routine: 0x0141F230,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210C518),
    },
    Trivial {
        routine: 0x01427A40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210C51C),
    },
    Trivial {
        routine: 0x01427A50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210C51C),
    },
    Trivial {
        routine: 0x01428190,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210C520),
    },
    Trivial {
        routine: 0x014281A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210C520),
    },
    Trivial {
        routine: 0x014287E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210C524),
    },
    Trivial {
        routine: 0x014287F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210C524),
    },
    Trivial {
        routine: 0x01429570,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210C560),
    },
    Trivial {
        routine: 0x01429580,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210C560),
    },
    Trivial {
        routine: 0x0142AB40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210C564),
    },
    Trivial {
        routine: 0x0142AB50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210C564),
    },
    Trivial {
        routine: 0x014301F0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01430200,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x01430AA0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01430AB0,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x01431120,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01431130,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x014314A0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x014314B0,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x01431760,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01431840,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01431850,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x01431F40,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01431F50,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x01432520,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01432530,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x014344C0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x014344D0,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x01434690,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x014346A0,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x01434850,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01434860,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x01434B60,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01434B80,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x01437C00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210C578),
    },
    Trivial {
        routine: 0x01437C10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210C578),
    },
    Trivial {
        routine: 0x014389B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210E4C4),
    },
    Trivial {
        routine: 0x014389C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210E4C4),
    },
    Trivial {
        routine: 0x014398E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210E4C8),
    },
    Trivial {
        routine: 0x014398F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210E4C8),
    },
    Trivial {
        routine: 0x014407A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210E4CC),
    },
    Trivial {
        routine: 0x014407B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210E4CC),
    },
    Trivial {
        routine: 0x01444880,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210E4D8),
    },
    Trivial {
        routine: 0x01444890,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210E4D8),
    },
    Trivial {
        routine: 0x01447740,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210E4DC),
    },
    Trivial {
        routine: 0x014488E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210E4EC),
    },
    Trivial {
        routine: 0x014488F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210E4EC),
    },
    Trivial {
        routine: 0x014493E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210E4F0),
    },
    Trivial {
        routine: 0x014493F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210E4F0),
    },
    Trivial {
        routine: 0x0144C1A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EA08),
    },
    Trivial {
        routine: 0x0144C1B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EA08),
    },
    Trivial {
        routine: 0x0145C5D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EA18),
    },
    Trivial {
        routine: 0x0145E580,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EA1C),
    },
    Trivial {
        routine: 0x01460940,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EA20),
    },
    Trivial {
        routine: 0x01460950,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EA20),
    },
    Trivial {
        routine: 0x014655F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EA38),
    },
    Trivial {
        routine: 0x01466E60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EA58),
    },
    Trivial {
        routine: 0x01466E70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EA58),
    },
    Trivial {
        routine: 0x0146CA30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EA5C),
    },
    Trivial {
        routine: 0x0146CA40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EA5C),
    },
    Trivial {
        routine: 0x0146CAB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EA60),
    },
    Trivial {
        routine: 0x0146D130,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EA64),
    },
    Trivial {
        routine: 0x0146D140,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EA64),
    },
    Trivial {
        routine: 0x01471510,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EA68),
    },
    Trivial {
        routine: 0x01471520,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EA68),
    },
    Trivial {
        routine: 0x01473C80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EA6C),
    },
    Trivial {
        routine: 0x01473C90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EA6C),
    },
    Trivial {
        routine: 0x01474C00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EA70),
    },
    Trivial {
        routine: 0x01474C10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EA70),
    },
    Trivial {
        routine: 0x014753D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EA74),
    },
    Trivial {
        routine: 0x014753E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EA74),
    },
    Trivial {
        routine: 0x01475C50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EA78),
    },
    Trivial {
        routine: 0x01475C60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EA78),
    },
    Trivial {
        routine: 0x01476A50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EA7C),
    },
    Trivial {
        routine: 0x01476A60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EA7C),
    },
    Trivial {
        routine: 0x01479DB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EA80),
    },
    Trivial {
        routine: 0x01479DC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EA80),
    },
    Trivial {
        routine: 0x0147B6F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EA84),
    },
    Trivial {
        routine: 0x0147D7B0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01483B10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EA88),
    },
    Trivial {
        routine: 0x01483B20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EA88),
    },
    Trivial {
        routine: 0x0149CED0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EAC8),
    },
    Trivial {
        routine: 0x0149CEE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EAC8),
    },
    Trivial {
        routine: 0x0149D540,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0149EFD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EACC),
    },
    Trivial {
        routine: 0x0149EFE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EACC),
    },
    Trivial {
        routine: 0x014A1220,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EAD8),
    },
    Trivial {
        routine: 0x014A1230,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EAD8),
    },
    Trivial {
        routine: 0x014AF660,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EAF0),
    },
    Trivial {
        routine: 0x014AF670,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EAF4),
    },
    Trivial {
        routine: 0x014AF680,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EAF4),
    },
    Trivial {
        routine: 0x014B0F20,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x014B2050,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x014B6940,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EB08),
    },
    Trivial {
        routine: 0x014B6950,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EB08),
    },
    Trivial {
        routine: 0x014B7D30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EB18),
    },
    Trivial {
        routine: 0x014B7D40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EB18),
    },
    Trivial {
        routine: 0x014B8330,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EB1C),
    },
    Trivial {
        routine: 0x014B8340,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EB1C),
    },
    Trivial {
        routine: 0x014B9000,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EB24),
    },
    Trivial {
        routine: 0x014B9010,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EB24),
    },
    Trivial {
        routine: 0x014BA5D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EB30),
    },
    Trivial {
        routine: 0x014BA5E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EB30),
    },
    Trivial {
        routine: 0x014BA680,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EB34),
    },
    Trivial {
        routine: 0x014BBC80,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x014BC0A0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x014BC0B0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x014BC0C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x014BC0D0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x014BC330,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EB38),
    },
    Trivial {
        routine: 0x014BC3C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EB54),
    },
    Trivial {
        routine: 0x014BC3D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EB54),
    },
    Trivial {
        routine: 0x014BCAF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EB60),
    },
    Trivial {
        routine: 0x014BCB00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EB60),
    },
    Trivial {
        routine: 0x014BF180,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EB70),
    },
    Trivial {
        routine: 0x014BF190,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EB70),
    },
    Trivial {
        routine: 0x014BF820,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EB80),
    },
    Trivial {
        routine: 0x014C4F90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EB98),
    },
    Trivial {
        routine: 0x014C5330,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EB9C),
    },
    Trivial {
        routine: 0x014C5340,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EB9C),
    },
    Trivial {
        routine: 0x014C7670,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EBA0),
    },
    Trivial {
        routine: 0x014C7680,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EBA0),
    },
    Trivial {
        routine: 0x014CDD30,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x014CE790,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x014CFB60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EBA4),
    },
    Trivial {
        routine: 0x014CFB70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EBA4),
    },
    Trivial {
        routine: 0x014D9F60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EBA8),
    },
    Trivial {
        routine: 0x014D9F70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EBA8),
    },
    Trivial {
        routine: 0x014DB2E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EBAC),
    },
    Trivial {
        routine: 0x014DB2F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EBAC),
    },
    Trivial {
        routine: 0x014E7690,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EBB0),
    },
    Trivial {
        routine: 0x014E76A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EBB0),
    },
    Trivial {
        routine: 0x014EAD10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EBB4),
    },
    Trivial {
        routine: 0x014EAD20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EBB4),
    },
    Trivial {
        routine: 0x014ED9C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EBB8),
    },
    Trivial {
        routine: 0x014ED9D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EBB8),
    },
    Trivial {
        routine: 0x014EF780,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EBBC),
    },
    Trivial {
        routine: 0x014EF790,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EBBC),
    },
    Trivial {
        routine: 0x014F46A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EBC0),
    },
    Trivial {
        routine: 0x014F46B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EBC0),
    },
    Trivial {
        routine: 0x014F4EA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EBC4),
    },
    Trivial {
        routine: 0x014F4EB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EBC4),
    },
    Trivial {
        routine: 0x014F7290,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EBC8),
    },
    Trivial {
        routine: 0x014F72A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EBC8),
    },
    Trivial {
        routine: 0x014F7C20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EBCC),
    },
    Trivial {
        routine: 0x014F7C30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EBCC),
    },
    Trivial {
        routine: 0x014F8530,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EBD0),
    },
    Trivial {
        routine: 0x014F8540,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EBD0),
    },
    Trivial {
        routine: 0x014F89D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EBD4),
    },
    Trivial {
        routine: 0x014F89E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EBD4),
    },
    Trivial {
        routine: 0x014F9C00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EBE0),
    },
    Trivial {
        routine: 0x014F9C10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EBE0),
    },
    Trivial {
        routine: 0x014F9E60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EBE4),
    },
    Trivial {
        routine: 0x014F9E70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EBE4),
    },
    Trivial {
        routine: 0x014F9E80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EBE8),
    },
    Trivial {
        routine: 0x014F9E90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EBE8),
    },
    Trivial {
        routine: 0x014FADF0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x014FAE00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EBEC),
    },
    Trivial {
        routine: 0x014FAE10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EBEC),
    },
    Trivial {
        routine: 0x014FC010,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EBF8),
    },
    Trivial {
        routine: 0x014FC020,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EBF8),
    },
    Trivial {
        routine: 0x015008B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EC10),
    },
    Trivial {
        routine: 0x015008C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EC10),
    },
    Trivial {
        routine: 0x01504BE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EC20),
    },
    Trivial {
        routine: 0x01504BF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EC20),
    },
    Trivial {
        routine: 0x01507390,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01509190,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EC48),
    },
    Trivial {
        routine: 0x01509C60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EC4C),
    },
    Trivial {
        routine: 0x01509C70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EC4C),
    },
    Trivial {
        routine: 0x0150A4F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EC50),
    },
    Trivial {
        routine: 0x0150A500,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EC50),
    },
    Trivial {
        routine: 0x0150A510,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EC54),
    },
    Trivial {
        routine: 0x0150A520,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EC54),
    },
    Trivial {
        routine: 0x015135B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EC58),
    },
    Trivial {
        routine: 0x015135C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EC58),
    },
    Trivial {
        routine: 0x01519660,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EC5C),
    },
    Trivial {
        routine: 0x01519670,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EC5C),
    },
    Trivial {
        routine: 0x01519680,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EC60),
    },
    Trivial {
        routine: 0x01519690,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EC60),
    },
    Trivial {
        routine: 0x01521820,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EC64),
    },
    Trivial {
        routine: 0x01521830,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EC64),
    },
    Trivial {
        routine: 0x015218E0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01521900,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x015260C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210ED90),
    },
    Trivial {
        routine: 0x01527800,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210ED60),
    },
    Trivial {
        routine: 0x01527810,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210ED60),
    },
    Trivial {
        routine: 0x01527820,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EDC8),
    },
    Trivial {
        routine: 0x01527830,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EDC8),
    },
    Trivial {
        routine: 0x01528500,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EDCC),
    },
    Trivial {
        routine: 0x01528510,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EDCC),
    },
    Trivial {
        routine: 0x0152A510,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EDD0),
    },
    Trivial {
        routine: 0x0152A520,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EDD0),
    },
    Trivial {
        routine: 0x0152A9D0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x0152BD60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EDD4),
    },
    Trivial {
        routine: 0x0152BD70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EDD4),
    },
    Trivial {
        routine: 0x01533D30,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01534490,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EDE0),
    },
    Trivial {
        routine: 0x015344A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EDE0),
    },
    Trivial {
        routine: 0x01535EB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EDE4),
    },
    Trivial {
        routine: 0x01535EC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EDE4),
    },
    Trivial {
        routine: 0x01538630,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EDE8),
    },
    Trivial {
        routine: 0x01538640,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EDE8),
    },
    Trivial {
        routine: 0x0153B6A0,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x0153C4C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EE18),
    },
    Trivial {
        routine: 0x0153C4D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EE18),
    },
    Trivial {
        routine: 0x0153C4E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EE1C),
    },
    Trivial {
        routine: 0x0153C4F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EE1C),
    },
    Trivial {
        routine: 0x0153DA70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EE20),
    },
    Trivial {
        routine: 0x0153DA80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EE20),
    },
    Trivial {
        routine: 0x0153DC00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EE24),
    },
    Trivial {
        routine: 0x0153DC70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EE28),
    },
    Trivial {
        routine: 0x0153DC80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EE28),
    },
    Trivial {
        routine: 0x01540690,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EE2C),
    },
    Trivial {
        routine: 0x015406A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EE2C),
    },
    Trivial {
        routine: 0x01541C10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EE30),
    },
    Trivial {
        routine: 0x01541C20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EE30),
    },
    Trivial {
        routine: 0x015425C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EE34),
    },
    Trivial {
        routine: 0x015425D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EE34),
    },
    Trivial {
        routine: 0x01542C80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EE38),
    },
    Trivial {
        routine: 0x01542C90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EE38),
    },
    Trivial {
        routine: 0x01543360,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EE3C),
    },
    Trivial {
        routine: 0x01543370,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EE3C),
    },
    Trivial {
        routine: 0x01544640,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x015453A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EE40),
    },
    Trivial {
        routine: 0x015453B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EE40),
    },
    Trivial {
        routine: 0x015453E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EE44),
    },
    Trivial {
        routine: 0x015453F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EE44),
    },
    Trivial {
        routine: 0x01546500,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EE48),
    },
    Trivial {
        routine: 0x01546510,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EE48),
    },
    Trivial {
        routine: 0x015652D0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01569D50,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0156D4C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EE68),
    },
    Trivial {
        routine: 0x015724B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EE6C),
    },
    Trivial {
        routine: 0x01576480,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EE74),
    },
    Trivial {
        routine: 0x01576490,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EE74),
    },
    Trivial {
        routine: 0x01583150,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EEA4),
    },
    Trivial {
        routine: 0x01583160,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EEA4),
    },
    Trivial {
        routine: 0x01593F50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EEA8),
    },
    Trivial {
        routine: 0x01593F60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EEA8),
    },
    Trivial {
        routine: 0x01594720,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EEAC),
    },
    Trivial {
        routine: 0x01594990,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EEF8),
    },
    Trivial {
        routine: 0x015949A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EEF8),
    },
    Trivial {
        routine: 0x01594BF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EEFC),
    },
    Trivial {
        routine: 0x01594C00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EEFC),
    },
    Trivial {
        routine: 0x01594C10,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01595B30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EF04),
    },
    Trivial {
        routine: 0x01595B40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EF04),
    },
    Trivial {
        routine: 0x015964D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EF08),
    },
    Trivial {
        routine: 0x015964E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EF08),
    },
    Trivial {
        routine: 0x015A7750,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EF0C),
    },
    Trivial {
        routine: 0x015A7760,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EF0C),
    },
    Trivial {
        routine: 0x015A7830,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EF10),
    },
    Trivial {
        routine: 0x015A7840,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EF10),
    },
    Trivial {
        routine: 0x015A9200,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x015AA0B0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x015AA0D0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x015AA4E0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x015AA5E0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x015AAA90,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x015AAFE0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x015AB1B0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x015ABE30,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x015ADB00,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x015B1D10,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x015B1D30,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x015B3A80,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x015B3B70,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x015B3C90,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x015B5740,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EF1C),
    },
    Trivial {
        routine: 0x015B60F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EF20),
    },
    Trivial {
        routine: 0x015B6100,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210EF20),
    },
    Trivial {
        routine: 0x015B63D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F724),
    },
    Trivial {
        routine: 0x015C1B10,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x015C9E90,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x015CDA00,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x015D3C20,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x015E2DB0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x015E2DE0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x015E2E10,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x015E2E40,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x015E4180,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x015E4B20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F778),
    },
    Trivial {
        routine: 0x015E57C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F77C),
    },
    Trivial {
        routine: 0x015E57D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F77C),
    },
    Trivial {
        routine: 0x015E6010,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F780),
    },
    Trivial {
        routine: 0x015E6020,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F780),
    },
    Trivial {
        routine: 0x015E6DA0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x015E74C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F790),
    },
    Trivial {
        routine: 0x015E74D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F790),
    },
    Trivial {
        routine: 0x015E7B40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F794),
    },
    Trivial {
        routine: 0x015E7B50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F794),
    },
    Trivial {
        routine: 0x015E7EF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F798),
    },
    Trivial {
        routine: 0x015E84D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F79C),
    },
    Trivial {
        routine: 0x015E84E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F79C),
    },
    Trivial {
        routine: 0x015E9D10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F7A0),
    },
    Trivial {
        routine: 0x015E9D20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F7A0),
    },
    Trivial {
        routine: 0x015E9F40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F7C8),
    },
    Trivial {
        routine: 0x015E9F50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F7C8),
    },
    Trivial {
        routine: 0x015EA370,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F7D8),
    },
    Trivial {
        routine: 0x015EA380,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F7D8),
    },
    Trivial {
        routine: 0x015EAB80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F7DC),
    },
    Trivial {
        routine: 0x015EAB90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F7DC),
    },
    Trivial {
        routine: 0x015EB300,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F7E8),
    },
    Trivial {
        routine: 0x015EB310,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F7E8),
    },
    Trivial {
        routine: 0x015EC390,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F7EC),
    },
    Trivial {
        routine: 0x015EC3A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F7EC),
    },
    Trivial {
        routine: 0x015EF370,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F7F0),
    },
    Trivial {
        routine: 0x015EF380,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F7F0),
    },
    Trivial {
        routine: 0x015F22D0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x015F63E0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x015F63F0,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x015F6410,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x015F8BE0,
        shape: Shape::Other,
        writes: None,
    },
    Trivial {
        routine: 0x015F8C90,
        shape: Shape::Other,
        writes: None,
    },
    Trivial {
        routine: 0x015F8EC0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x015F8EF0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x015F8F00,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x015F8F10,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x015F9CF0,
        shape: Shape::Other,
        writes: None,
    },
    Trivial {
        routine: 0x015F9D00,
        shape: Shape::Other,
        writes: None,
    },
    Trivial {
        routine: 0x015F9EC0,
        shape: Shape::Other,
        writes: None,
    },
    Trivial {
        routine: 0x015FC2D0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x015FCD60,
        shape: Shape::Other,
        writes: None,
    },
    Trivial {
        routine: 0x015FD610,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01600360,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0160BFE0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01611170,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F800),
    },
    Trivial {
        routine: 0x01611180,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F800),
    },
    Trivial {
        routine: 0x01612DD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F808),
    },
    Trivial {
        routine: 0x01612DE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F808),
    },
    Trivial {
        routine: 0x01615C80,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01615DD0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01616D10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F810),
    },
    Trivial {
        routine: 0x01616D20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F810),
    },
    Trivial {
        routine: 0x0161A170,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F814),
    },
    Trivial {
        routine: 0x0161A180,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F814),
    },
    Trivial {
        routine: 0x0161B560,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F81C),
    },
    Trivial {
        routine: 0x0161B570,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F81C),
    },
    Trivial {
        routine: 0x0161BBA0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0161D070,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F820),
    },
    Trivial {
        routine: 0x0161D080,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F820),
    },
    Trivial {
        routine: 0x0161E020,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F824),
    },
    Trivial {
        routine: 0x0161EAE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F828),
    },
    Trivial {
        routine: 0x0161EAF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F828),
    },
    Trivial {
        routine: 0x0161F2D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F82C),
    },
    Trivial {
        routine: 0x0161F2E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F82C),
    },
    Trivial {
        routine: 0x0161F550,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F830),
    },
    Trivial {
        routine: 0x0161F560,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F830),
    },
    Trivial {
        routine: 0x01629120,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0163D0D0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0164BAA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F860),
    },
    Trivial {
        routine: 0x0164BAB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F860),
    },
    Trivial {
        routine: 0x01655450,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F864),
    },
    Trivial {
        routine: 0x01655460,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F864),
    },
    Trivial {
        routine: 0x0165ADF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F868),
    },
    Trivial {
        routine: 0x0165AE00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F868),
    },
    Trivial {
        routine: 0x01663330,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01669820,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F884),
    },
    Trivial {
        routine: 0x01669830,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F884),
    },
    Trivial {
        routine: 0x01676430,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x0167DB40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F8D0),
    },
    Trivial {
        routine: 0x0167DB50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F8D0),
    },
    Trivial {
        routine: 0x0168C3D0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01690FC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F8D4),
    },
    Trivial {
        routine: 0x01690FD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F8D4),
    },
    Trivial {
        routine: 0x01694660,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F8D8),
    },
    Trivial {
        routine: 0x01694670,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F8D8),
    },
    Trivial {
        routine: 0x01695E00,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01695E10,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01697C20,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01697C70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F8DC),
    },
    Trivial {
        routine: 0x01697C80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F8DC),
    },
    Trivial {
        routine: 0x01698DB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F8E0),
    },
    Trivial {
        routine: 0x01698DC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F8E0),
    },
    Trivial {
        routine: 0x0169AA40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F8E4),
    },
    Trivial {
        routine: 0x0169AA50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F8E4),
    },
    Trivial {
        routine: 0x0169C730,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F8E8),
    },
    Trivial {
        routine: 0x0169C740,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F8E8),
    },
    Trivial {
        routine: 0x0169DEA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F8EC),
    },
    Trivial {
        routine: 0x0169DEB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F8EC),
    },
    Trivial {
        routine: 0x0169F6B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F8F0),
    },
    Trivial {
        routine: 0x0169F6C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210F8F0),
    },
    Trivial {
        routine: 0x016A6310,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x016A64A0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x016A9CC0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x016A9D90,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x016AA270,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x016AA280,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x016AA3A0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x016AA3B0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x016AA3C0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x016AA6E0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x016AA700,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x016AAAD0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x016AAAF0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x016AAB10,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x016AAB20,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x016AAB30,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x016AAB40,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x016AE980,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FDA8),
    },
    Trivial {
        routine: 0x016AE990,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FDA8),
    },
    Trivial {
        routine: 0x016AF3D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FDAC),
    },
    Trivial {
        routine: 0x016AF3E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FDAC),
    },
    Trivial {
        routine: 0x016B1BC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FDB0),
    },
    Trivial {
        routine: 0x016B1BD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FDB0),
    },
    Trivial {
        routine: 0x016B2C60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FDB4),
    },
    Trivial {
        routine: 0x016B2C70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FDB4),
    },
    Trivial {
        routine: 0x016B9CB0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x016B9D70,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x016BBD30,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x016BD070,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x016C35E0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x016C3A50,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x016D01F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FDB8),
    },
    Trivial {
        routine: 0x016D0200,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FDB8),
    },
    Trivial {
        routine: 0x016D2790,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FDBC),
    },
    Trivial {
        routine: 0x016D27A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FDBC),
    },
    Trivial {
        routine: 0x016D3BC0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x016D4270,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x016D5000,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FDC0),
    },
    Trivial {
        routine: 0x016D5010,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FDC0),
    },
    Trivial {
        routine: 0x016D7020,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FDC4),
    },
    Trivial {
        routine: 0x016D7030,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FDC4),
    },
    Trivial {
        routine: 0x016DA8E0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x016DA900,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x016DA920,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x016DDC60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FEC0),
    },
    Trivial {
        routine: 0x016DDC90,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x016DDCB0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x016DEA00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FEC4),
    },
    Trivial {
        routine: 0x016DEA10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FEC4),
    },
    Trivial {
        routine: 0x016E2EE0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x016E2F30,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x016E8FB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FEC8),
    },
    Trivial {
        routine: 0x016E8FC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FEC8),
    },
    Trivial {
        routine: 0x016E9420,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FECC),
    },
    Trivial {
        routine: 0x016E9D70,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x016EFE10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FED0),
    },
    Trivial {
        routine: 0x016F8FC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FEF8),
    },
    Trivial {
        routine: 0x016FB790,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FF38),
    },
    Trivial {
        routine: 0x016FB7A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FF38),
    },
    Trivial {
        routine: 0x016FCE90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FF4C),
    },
    Trivial {
        routine: 0x016FCEA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FF4C),
    },
    Trivial {
        routine: 0x016FD820,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FF50),
    },
    Trivial {
        routine: 0x016FD830,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FF50),
    },
    Trivial {
        routine: 0x016FEB40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FF54),
    },
    Trivial {
        routine: 0x016FEB50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FF54),
    },
    Trivial {
        routine: 0x01701280,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FF58),
    },
    Trivial {
        routine: 0x01701290,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FF58),
    },
    Trivial {
        routine: 0x01703D70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FF5C),
    },
    Trivial {
        routine: 0x017058D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FF68),
    },
    Trivial {
        routine: 0x017058E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FF68),
    },
    Trivial {
        routine: 0x01706C10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FF6C),
    },
    Trivial {
        routine: 0x01706C20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FF6C),
    },
    Trivial {
        routine: 0x01708420,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01709140,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x017093E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FF70),
    },
    Trivial {
        routine: 0x017093F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FF70),
    },
    Trivial {
        routine: 0x0170B950,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FF74),
    },
    Trivial {
        routine: 0x0170B960,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FF74),
    },
    Trivial {
        routine: 0x01710C70,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x0172A910,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x0172A950,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x017302B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FFA0),
    },
    Trivial {
        routine: 0x017302C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FFA0),
    },
    Trivial {
        routine: 0x0173CF30,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0173D360,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0173D700,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0173D720,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0173DC90,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0173EBD0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x017424A0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01743F80,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x017443D0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x017443E0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x017466E0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01747570,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01748AE0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01749B10,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0174BDB0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x0174F0C0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x0174F0D0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x017500D0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01750790,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x017524C0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01754B40,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01757BB0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01757BC0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x0175B080,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FFA4),
    },
    Trivial {
        routine: 0x0175B090,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FFA4),
    },
    Trivial {
        routine: 0x0175F810,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FFF0),
    },
    Trivial {
        routine: 0x0175F820,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FFF0),
    },
    Trivial {
        routine: 0x0176C120,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0176E850,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01771FD0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01776190,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x017761A0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01777090,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01778120,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x017793C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FFF4),
    },
    Trivial {
        routine: 0x017793D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0210FFF4),
    },
    Trivial {
        routine: 0x0177C370,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110000),
    },
    Trivial {
        routine: 0x0177C380,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110000),
    },
    Trivial {
        routine: 0x0177E060,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110004),
    },
    Trivial {
        routine: 0x0177E070,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110004),
    },
    Trivial {
        routine: 0x0177EAD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110008),
    },
    Trivial {
        routine: 0x0177EAE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110008),
    },
    Trivial {
        routine: 0x01781020,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0211000C),
    },
    Trivial {
        routine: 0x01781C40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110088),
    },
    Trivial {
        routine: 0x01781C50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110088),
    },
    Trivial {
        routine: 0x017822D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0211008C),
    },
    Trivial {
        routine: 0x017822E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0211008C),
    },
    Trivial {
        routine: 0x01783340,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110090),
    },
    Trivial {
        routine: 0x01783350,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110090),
    },
    Trivial {
        routine: 0x01783360,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110094),
    },
    Trivial {
        routine: 0x01783370,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110094),
    },
    Trivial {
        routine: 0x017839A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110098),
    },
    Trivial {
        routine: 0x017839B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110098),
    },
    Trivial {
        routine: 0x01783F40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0211009C),
    },
    Trivial {
        routine: 0x01783F50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0211009C),
    },
    Trivial {
        routine: 0x01785850,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021100A0),
    },
    Trivial {
        routine: 0x01785860,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021100A0),
    },
    Trivial {
        routine: 0x01789190,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021100A4),
    },
    Trivial {
        routine: 0x017891A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021100A4),
    },
    Trivial {
        routine: 0x017919D0,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x01798550,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01798570,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x017A1210,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021100AC),
    },
    Trivial {
        routine: 0x017A1220,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021100AC),
    },
    Trivial {
        routine: 0x017A2570,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021100B0),
    },
    Trivial {
        routine: 0x017A2580,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021100B0),
    },
    Trivial {
        routine: 0x017A6AD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021100B4),
    },
    Trivial {
        routine: 0x017A6AE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021100B4),
    },
    Trivial {
        routine: 0x017AD600,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x017AFCC0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x017AFD10,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x017AFD20,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x017AFD30,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x017AFEE0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x017B00E0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x017B00F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x017B1380,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x017B1430,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x017B1970,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x017B2FE0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x017B3A90,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x017B3D00,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x017B58D0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x017B5A90,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x017B5BE0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x017B7300,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x017B7EC0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x017B8630,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021100B8),
    },
    Trivial {
        routine: 0x017B8640,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021100B8),
    },
    Trivial {
        routine: 0x017B8C50,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x017B8EB0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x017B8EC0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x017B9B30,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x017B9B90,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x017B9BA0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x017B9BB0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x017B9BE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021100D4),
    },
    Trivial {
        routine: 0x017B9BF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021100D4),
    },
    Trivial {
        routine: 0x017BC420,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021100D8),
    },
    Trivial {
        routine: 0x017BC430,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021100D8),
    },
    Trivial {
        routine: 0x017BC9E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021100DC),
    },
    Trivial {
        routine: 0x017BC9F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021100DC),
    },
    Trivial {
        routine: 0x017BD3C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x017BD3D0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x017BD8B0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x017BDB60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021100E0),
    },
    Trivial {
        routine: 0x017BDB70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021100E0),
    },
    Trivial {
        routine: 0x017BF3E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021100E4),
    },
    Trivial {
        routine: 0x017BF3F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021100E4),
    },
    Trivial {
        routine: 0x017BFC80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021100E8),
    },
    Trivial {
        routine: 0x017BFC90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021100E8),
    },
    Trivial {
        routine: 0x017C06E0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x017C1DC0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x017C2370,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x017C28E0,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x017C51B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021100EC),
    },
    Trivial {
        routine: 0x017C51C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021100EC),
    },
    Trivial {
        routine: 0x017C7620,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x017CB030,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021100F4),
    },
    Trivial {
        routine: 0x017CB040,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021100F4),
    },
    Trivial {
        routine: 0x017D4300,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110108),
    },
    Trivial {
        routine: 0x017D4310,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110108),
    },
    Trivial {
        routine: 0x017DE710,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110110),
    },
    Trivial {
        routine: 0x017DE720,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110110),
    },
    Trivial {
        routine: 0x017DF300,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110114),
    },
    Trivial {
        routine: 0x017DF310,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110114),
    },
    Trivial {
        routine: 0x017E2430,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x017E32D0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x017E9A10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110118),
    },
    Trivial {
        routine: 0x017EA800,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0211011C),
    },
    Trivial {
        routine: 0x017EA810,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0211011C),
    },
    Trivial {
        routine: 0x017EBBC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110120),
    },
    Trivial {
        routine: 0x017EBBD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110120),
    },
    Trivial {
        routine: 0x017EC2C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110124),
    },
    Trivial {
        routine: 0x017EC2D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110124),
    },
    Trivial {
        routine: 0x017F0DC0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x017F0DD0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x017F0DE0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x017F3530,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110160),
    },
    Trivial {
        routine: 0x017F3540,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110160),
    },
    Trivial {
        routine: 0x017F5420,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110164),
    },
    Trivial {
        routine: 0x017F5430,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110164),
    },
    Trivial {
        routine: 0x017FEAA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110188),
    },
    Trivial {
        routine: 0x017FEAB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110188),
    },
    Trivial {
        routine: 0x017FEC80,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x017FEC90,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x017FF130,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x017FF140,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x017FF610,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x017FF640,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x017FF650,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x017FF690,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0211018C),
    },
    Trivial {
        routine: 0x017FF6A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0211018C),
    },
    Trivial {
        routine: 0x017FFFB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110190),
    },
    Trivial {
        routine: 0x017FFFC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021101A0),
    },
    Trivial {
        routine: 0x017FFFD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021101A0),
    },
    Trivial {
        routine: 0x01800710,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021101B0),
    },
    Trivial {
        routine: 0x01800720,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021101B0),
    },
    Trivial {
        routine: 0x01801620,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021101B4),
    },
    Trivial {
        routine: 0x01801630,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021101B4),
    },
    Trivial {
        routine: 0x01805D30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021101B8),
    },
    Trivial {
        routine: 0x01805D40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021101B8),
    },
    Trivial {
        routine: 0x01807E70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021101BC),
    },
    Trivial {
        routine: 0x01807E80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021101BC),
    },
    Trivial {
        routine: 0x01808A20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110264),
    },
    Trivial {
        routine: 0x01808A30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110264),
    },
    Trivial {
        routine: 0x0180C0D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110268),
    },
    Trivial {
        routine: 0x01810250,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0211026C),
    },
    Trivial {
        routine: 0x01810260,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0211026C),
    },
    Trivial {
        routine: 0x018148C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110270),
    },
    Trivial {
        routine: 0x018148D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110270),
    },
    Trivial {
        routine: 0x01815160,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x018152C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110274),
    },
    Trivial {
        routine: 0x018152D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110274),
    },
    Trivial {
        routine: 0x018162C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01817210,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110278),
    },
    Trivial {
        routine: 0x01817220,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110278),
    },
    Trivial {
        routine: 0x01818E70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021102A8),
    },
    Trivial {
        routine: 0x01818E80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021102A8),
    },
    Trivial {
        routine: 0x01819470,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021102AC),
    },
    Trivial {
        routine: 0x01819480,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021102AC),
    },
    Trivial {
        routine: 0x0181A4E0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x0181A570,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x0181A8F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0181BDD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021102B0),
    },
    Trivial {
        routine: 0x0181BDE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021102B0),
    },
    Trivial {
        routine: 0x0181CD50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021102B4),
    },
    Trivial {
        routine: 0x0181CD60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021102B4),
    },
    Trivial {
        routine: 0x0181FD40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021102B8),
    },
    Trivial {
        routine: 0x0181FD50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021102B8),
    },
    Trivial {
        routine: 0x018226E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021102BC),
    },
    Trivial {
        routine: 0x018226F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021102BC),
    },
    Trivial {
        routine: 0x0182D260,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021102D0),
    },
    Trivial {
        routine: 0x0182D270,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021102D0),
    },
    Trivial {
        routine: 0x01831A30,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01833340,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021102D4),
    },
    Trivial {
        routine: 0x01833350,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021102D4),
    },
    Trivial {
        routine: 0x01833F00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021102D8),
    },
    Trivial {
        routine: 0x01833F10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021102D8),
    },
    Trivial {
        routine: 0x0183DA80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021102DC),
    },
    Trivial {
        routine: 0x0183DA90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021102DC),
    },
    Trivial {
        routine: 0x01847650,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01851F50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021102E4),
    },
    Trivial {
        routine: 0x01851F60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021102E4),
    },
    Trivial {
        routine: 0x01853600,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021102E8),
    },
    Trivial {
        routine: 0x01853610,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021102E8),
    },
    Trivial {
        routine: 0x018553F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021102EC),
    },
    Trivial {
        routine: 0x01855400,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021102EC),
    },
    Trivial {
        routine: 0x01856560,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x018566F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01857360,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01857F80,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0185A660,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0185D0B0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0185F420,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01860D50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110300),
    },
    Trivial {
        routine: 0x018616C0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01861F40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110310),
    },
    Trivial {
        routine: 0x01861F50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110310),
    },
    Trivial {
        routine: 0x01863240,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01867400,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01867AC0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01867E90,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x018687C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x018688E0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01869100,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01869110,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01869120,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01869260,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0186A070,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0186A080,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0186A0A0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0186A170,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110320),
    },
    Trivial {
        routine: 0x0186A180,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110320),
    },
    Trivial {
        routine: 0x0186A190,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110324),
    },
    Trivial {
        routine: 0x0186A1A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110324),
    },
    Trivial {
        routine: 0x0186C0C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110510),
    },
    Trivial {
        routine: 0x0186C0D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110510),
    },
    Trivial {
        routine: 0x0186CE10,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0186FDE0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x018713D0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x018722E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0211051C),
    },
    Trivial {
        routine: 0x018722F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0211051C),
    },
    Trivial {
        routine: 0x018735C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110520),
    },
    Trivial {
        routine: 0x01873DE0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01874EB0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01874FE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110524),
    },
    Trivial {
        routine: 0x01874FF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110524),
    },
    Trivial {
        routine: 0x01876F80,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01877710,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01877800,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x0187BD80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0211062C),
    },
    Trivial {
        routine: 0x0187BD90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0211062C),
    },
    Trivial {
        routine: 0x0187FCA0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01880310,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x018803B0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01880470,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01880480,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x018807B0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01880910,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01880950,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01880C20,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01880DD0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01880F70,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01881A90,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01884040,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01884680,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01888E00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110638),
    },
    Trivial {
        routine: 0x01888E10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110638),
    },
    Trivial {
        routine: 0x0188D9D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0211063C),
    },
    Trivial {
        routine: 0x01893110,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x018938E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110640),
    },
    Trivial {
        routine: 0x018938F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110640),
    },
    Trivial {
        routine: 0x01894AF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110644),
    },
    Trivial {
        routine: 0x01894B00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110644),
    },
    Trivial {
        routine: 0x0189A2D0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0189ACE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110648),
    },
    Trivial {
        routine: 0x0189ACF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110648),
    },
    Trivial {
        routine: 0x0189AD40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0211064C),
    },
    Trivial {
        routine: 0x0189C140,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0189CFD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110658),
    },
    Trivial {
        routine: 0x0189CFE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110658),
    },
    Trivial {
        routine: 0x0189D7B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0211065C),
    },
    Trivial {
        routine: 0x018A73C0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x018A73D0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x018A89A0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x018A91E0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x018AA880,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x018B1A60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110664),
    },
    Trivial {
        routine: 0x018B4920,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110698),
    },
    Trivial {
        routine: 0x018B4930,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110698),
    },
    Trivial {
        routine: 0x018B9080,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x018C34E0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x018C3580,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0211069C),
    },
    Trivial {
        routine: 0x018C3590,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0211069C),
    },
    Trivial {
        routine: 0x018D0D40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021106A0),
    },
    Trivial {
        routine: 0x018D0D50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021106A0),
    },
    Trivial {
        routine: 0x018D11B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021106A4),
    },
    Trivial {
        routine: 0x018D11C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021106A4),
    },
    Trivial {
        routine: 0x018D1910,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021106A8),
    },
    Trivial {
        routine: 0x018D1920,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021106A8),
    },
    Trivial {
        routine: 0x018DCF20,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x018DD210,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021106C8),
    },
    Trivial {
        routine: 0x018DD220,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021106C8),
    },
    Trivial {
        routine: 0x018DD230,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021106CC),
    },
    Trivial {
        routine: 0x018E1530,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021106D0),
    },
    Trivial {
        routine: 0x018E1540,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021106D0),
    },
    Trivial {
        routine: 0x018FBF20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021106E4),
    },
    Trivial {
        routine: 0x018FBF30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021106E4),
    },
    Trivial {
        routine: 0x018FC0F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021106E8),
    },
    Trivial {
        routine: 0x01900670,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021106EC),
    },
    Trivial {
        routine: 0x01904EB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021106F0),
    },
    Trivial {
        routine: 0x01909D60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021106F4),
    },
    Trivial {
        routine: 0x0194E130,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0194E840,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0194E850,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0194E860,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0194E870,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0194E880,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0194F160,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0194F190,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0194F1A0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0194FB90,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01950830,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01950AC0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01950F20,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01951120,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01951130,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01951140,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01951240,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01951250,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01951260,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01952190,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x019521A0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01952330,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01952380,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01952510,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01953900,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01953F50,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01953F70,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01954810,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01954910,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01958D70,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01958D90,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01958DA0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0195B860,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0195B9E0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0195E510,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0195E840,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0195E860,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0195E890,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0195F360,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0195F390,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0195F3C0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0195F3F0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0195F450,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x019688D0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01968BF0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x0196A340,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0196A5E0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0196BC20,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0196BD60,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0196C580,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01976E80,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01978670,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x019787F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x019797C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x019797D0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0197A010,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0197AA90,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0197AAA0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0197B100,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0197B110,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x0197B7B0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0197B900,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x0197B920,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0197B930,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0197B940,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0197BFC0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0197BFD0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0197C020,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0197C030,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0197C040,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0197C050,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0197C0E0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0197C0F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0197C140,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0197C150,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0197C160,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x0197C170,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0197C180,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0197C4E0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0197CC50,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x0197F740,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x0197F750,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x0197F7A0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01980C10,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01980C20,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01981610,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01982AA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110750),
    },
    Trivial {
        routine: 0x01982AB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110750),
    },
    Trivial {
        routine: 0x01984A10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110754),
    },
    Trivial {
        routine: 0x01984A20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110754),
    },
    Trivial {
        routine: 0x01995400,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x019A1F50,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x019B5B50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021107A0),
    },
    Trivial {
        routine: 0x019B9E10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021107A4),
    },
    Trivial {
        routine: 0x019B9E20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021107A4),
    },
    Trivial {
        routine: 0x019BB6B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021107A8),
    },
    Trivial {
        routine: 0x019BB6C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021107A8),
    },
    Trivial {
        routine: 0x019BF0E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021107AC),
    },
    Trivial {
        routine: 0x019BF0F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021107AC),
    },
    Trivial {
        routine: 0x019CC680,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021107B0),
    },
    Trivial {
        routine: 0x019CC690,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021107B0),
    },
    Trivial {
        routine: 0x019CDAD0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x019CE880,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021107C0),
    },
    Trivial {
        routine: 0x019CE890,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021107C0),
    },
    Trivial {
        routine: 0x019CF700,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x019CF730,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x019CF740,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021107C4),
    },
    Trivial {
        routine: 0x019CF750,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021107C4),
    },
    Trivial {
        routine: 0x019CFD00,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x019D2520,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021107C8),
    },
    Trivial {
        routine: 0x019D2530,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021107C8),
    },
    Trivial {
        routine: 0x019D70B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021107CC),
    },
    Trivial {
        routine: 0x019D70C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021107CC),
    },
    Trivial {
        routine: 0x019D7A50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021107D8),
    },
    Trivial {
        routine: 0x019D7A60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021107D8),
    },
    Trivial {
        routine: 0x019D8240,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021107DC),
    },
    Trivial {
        routine: 0x019D8250,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021107DC),
    },
    Trivial {
        routine: 0x019DBA40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021107E0),
    },
    Trivial {
        routine: 0x019DBA50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021107E0),
    },
    Trivial {
        routine: 0x019DC850,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021107E4),
    },
    Trivial {
        routine: 0x019DC860,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021107E4),
    },
    Trivial {
        routine: 0x019E6640,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021107E8),
    },
    Trivial {
        routine: 0x019E6650,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021107E8),
    },
    Trivial {
        routine: 0x019EA940,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021107EC),
    },
    Trivial {
        routine: 0x019EA950,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021107EC),
    },
    Trivial {
        routine: 0x019EC3D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021107F0),
    },
    Trivial {
        routine: 0x019EC3E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021107F0),
    },
    Trivial {
        routine: 0x01A23B80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021107F4),
    },
    Trivial {
        routine: 0x01A23B90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021107F4),
    },
    Trivial {
        routine: 0x01A27270,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021107F8),
    },
    Trivial {
        routine: 0x01A27280,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021107F8),
    },
    Trivial {
        routine: 0x01A29320,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021107FC),
    },
    Trivial {
        routine: 0x01A29330,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021107FC),
    },
    Trivial {
        routine: 0x01A2C430,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110808),
    },
    Trivial {
        routine: 0x01A2D380,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0211080C),
    },
    Trivial {
        routine: 0x01A2D390,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0211080C),
    },
    Trivial {
        routine: 0x01A2DE80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110818),
    },
    Trivial {
        routine: 0x01A2DE90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110818),
    },
    Trivial {
        routine: 0x01A2E4A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0211081C),
    },
    Trivial {
        routine: 0x01A2E4B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0211081C),
    },
    Trivial {
        routine: 0x01A30940,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110820),
    },
    Trivial {
        routine: 0x01A30950,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110820),
    },
    Trivial {
        routine: 0x01A30960,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110824),
    },
    Trivial {
        routine: 0x01A30970,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110824),
    },
    Trivial {
        routine: 0x01A39770,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110828),
    },
    Trivial {
        routine: 0x01A53CA0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01A5BAC0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01A5C100,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0211082C),
    },
    Trivial {
        routine: 0x01A5C110,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0211082C),
    },
    Trivial {
        routine: 0x01A5EB20,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01A60E10,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01A64360,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110830),
    },
    Trivial {
        routine: 0x01A64370,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110830),
    },
    Trivial {
        routine: 0x01A64840,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110834),
    },
    Trivial {
        routine: 0x01A64850,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110834),
    },
    Trivial {
        routine: 0x01A66490,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110840),
    },
    Trivial {
        routine: 0x01A664A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110840),
    },
    Trivial {
        routine: 0x01A677D0,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x01A69C60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110844),
    },
    Trivial {
        routine: 0x01A69C70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110844),
    },
    Trivial {
        routine: 0x01A844B0,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x01A8B870,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110860),
    },
    Trivial {
        routine: 0x01A8DBC0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01A8DC00,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01A8DCB0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01A8DF40,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01A90ED0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01AA0B70,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01AA0B80,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01AA21E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110A44),
    },
    Trivial {
        routine: 0x01AA21F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110A44),
    },
    Trivial {
        routine: 0x01AA22A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110A48),
    },
    Trivial {
        routine: 0x01AA22B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110A48),
    },
    Trivial {
        routine: 0x01AA3260,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110A4C),
    },
    Trivial {
        routine: 0x01AA3270,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110A4C),
    },
    Trivial {
        routine: 0x01AA34F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110A50),
    },
    Trivial {
        routine: 0x01AA3500,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110A50),
    },
    Trivial {
        routine: 0x01AA79D0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01AA7A00,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01AB4BC0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01AB4BD0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01AB9550,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01AB9560,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01ABA070,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01ABA080,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01ABA090,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01ABA950,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01ABA960,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01ABA970,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01ABB000,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01ABB010,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01ABB020,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01ABBA20,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01ABBA30,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01ABBA40,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01ABEC20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110A78),
    },
    Trivial {
        routine: 0x01ABEC30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110A78),
    },
    Trivial {
        routine: 0x01AC4330,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01AC4340,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01AC4350,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01AC4680,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110A7C),
    },
    Trivial {
        routine: 0x01AC4690,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110A7C),
    },
    Trivial {
        routine: 0x01AC51C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110A80),
    },
    Trivial {
        routine: 0x01AC51D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110A80),
    },
    Trivial {
        routine: 0x01AC5D20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110A84),
    },
    Trivial {
        routine: 0x01AC5D30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110A84),
    },
    Trivial {
        routine: 0x01AC62A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110A88),
    },
    Trivial {
        routine: 0x01AC62B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110A88),
    },
    Trivial {
        routine: 0x01AC8240,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110A8C),
    },
    Trivial {
        routine: 0x01AC8250,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110A8C),
    },
    Trivial {
        routine: 0x01AC8B10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110A90),
    },
    Trivial {
        routine: 0x01AC8B20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110A90),
    },
    Trivial {
        routine: 0x01AC9560,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110A94),
    },
    Trivial {
        routine: 0x01AC9570,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110A94),
    },
    Trivial {
        routine: 0x01AE5F50,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01AE5F60,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01AE9640,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110A98),
    },
    Trivial {
        routine: 0x01AE9650,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110A98),
    },
    Trivial {
        routine: 0x01AEC050,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110A9C),
    },
    Trivial {
        routine: 0x01AEC060,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110A9C),
    },
    Trivial {
        routine: 0x01AEC070,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110AA8),
    },
    Trivial {
        routine: 0x01AEC080,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110AA8),
    },
    Trivial {
        routine: 0x01AECD70,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01AEED20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110AB8),
    },
    Trivial {
        routine: 0x01AF2B30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110AC8),
    },
    Trivial {
        routine: 0x01B057C0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01B08850,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01B08A00,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01B08A30,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01B0F800,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01B0F840,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x01B0F850,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x01B0F870,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01B0FA10,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01B0FA20,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01B0FA30,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x01B0FAE0,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x01B0FAF0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01B0FB10,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01B10080,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01B10A80,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01B10CF0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01B111A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110CE0),
    },
    Trivial {
        routine: 0x01B1C960,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x01B1EE00,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01B218A0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01B218B0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01B2ACE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110CFC),
    },
    Trivial {
        routine: 0x01B2ACF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110CFC),
    },
    Trivial {
        routine: 0x01B36700,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D1C),
    },
    Trivial {
        routine: 0x01B36CC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D20),
    },
    Trivial {
        routine: 0x01B36CD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D20),
    },
    Trivial {
        routine: 0x01B38420,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D24),
    },
    Trivial {
        routine: 0x01B38430,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D24),
    },
    Trivial {
        routine: 0x01B38570,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D28),
    },
    Trivial {
        routine: 0x01B38580,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D28),
    },
    Trivial {
        routine: 0x01B44140,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D2C),
    },
    Trivial {
        routine: 0x01B449A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D30),
    },
    Trivial {
        routine: 0x01B449B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D30),
    },
    Trivial {
        routine: 0x01B46330,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D34),
    },
    Trivial {
        routine: 0x01B46340,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D34),
    },
    Trivial {
        routine: 0x01B47CD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D38),
    },
    Trivial {
        routine: 0x01B47CE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D38),
    },
    Trivial {
        routine: 0x01B485E0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01B490F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D3C),
    },
    Trivial {
        routine: 0x01B49100,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D3C),
    },
    Trivial {
        routine: 0x01B49DB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D40),
    },
    Trivial {
        routine: 0x01B4AD50,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01B4AD60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D44),
    },
    Trivial {
        routine: 0x01B4AD70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D44),
    },
    Trivial {
        routine: 0x01B4B5A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D48),
    },
    Trivial {
        routine: 0x01B4B5B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D48),
    },
    Trivial {
        routine: 0x01B4B5C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D4C),
    },
    Trivial {
        routine: 0x01B4B5D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D4C),
    },
    Trivial {
        routine: 0x01B4F260,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x01B4FF20,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x01B51D60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D50),
    },
    Trivial {
        routine: 0x01B51D70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D50),
    },
    Trivial {
        routine: 0x01B523A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D54),
    },
    Trivial {
        routine: 0x01B523B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D54),
    },
    Trivial {
        routine: 0x01B54760,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D58),
    },
    Trivial {
        routine: 0x01B54770,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D58),
    },
    Trivial {
        routine: 0x01B54780,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D5C),
    },
    Trivial {
        routine: 0x01B54790,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D5C),
    },
    Trivial {
        routine: 0x01B5A9F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D60),
    },
    Trivial {
        routine: 0x01B5AA00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D60),
    },
    Trivial {
        routine: 0x01B5E540,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01B5E560,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x01B5E630,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01B5E650,
        shape: Shape::WritesThroughAPointer,
        writes: None,
    },
    Trivial {
        routine: 0x01B5EBF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D64),
    },
    Trivial {
        routine: 0x01B5EC00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D64),
    },
    Trivial {
        routine: 0x01B69B00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D68),
    },
    Trivial {
        routine: 0x01B69B10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D68),
    },
    Trivial {
        routine: 0x01B69B20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D6C),
    },
    Trivial {
        routine: 0x01B69B30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D6C),
    },
    Trivial {
        routine: 0x01B6BCC0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01B70900,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D70),
    },
    Trivial {
        routine: 0x01B70910,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D70),
    },
    Trivial {
        routine: 0x01B712E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D74),
    },
    Trivial {
        routine: 0x01B712F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D74),
    },
    Trivial {
        routine: 0x01B71AA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D78),
    },
    Trivial {
        routine: 0x01B71AB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D78),
    },
    Trivial {
        routine: 0x01B71FA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D7C),
    },
    Trivial {
        routine: 0x01B71FB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D7C),
    },
    Trivial {
        routine: 0x01B72A10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D80),
    },
    Trivial {
        routine: 0x01B72A20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D80),
    },
    Trivial {
        routine: 0x01B75740,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D84),
    },
    Trivial {
        routine: 0x01B75750,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D84),
    },
    Trivial {
        routine: 0x01B76750,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D88),
    },
    Trivial {
        routine: 0x01B76760,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D88),
    },
    Trivial {
        routine: 0x01B79800,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D8C),
    },
    Trivial {
        routine: 0x01B79810,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D8C),
    },
    Trivial {
        routine: 0x01B7C660,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D90),
    },
    Trivial {
        routine: 0x01B7C670,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D90),
    },
    Trivial {
        routine: 0x01B7CF80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D94),
    },
    Trivial {
        routine: 0x01B7CF90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D94),
    },
    Trivial {
        routine: 0x01B7FCE0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01B80AF0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01B8CC50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D98),
    },
    Trivial {
        routine: 0x01B904E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D9C),
    },
    Trivial {
        routine: 0x01B904F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110D9C),
    },
    Trivial {
        routine: 0x01B90D50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110DA0),
    },
    Trivial {
        routine: 0x01B90D60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110DA0),
    },
    Trivial {
        routine: 0x01B90D70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110DA4),
    },
    Trivial {
        routine: 0x01B90D80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110DA4),
    },
    Trivial {
        routine: 0x01B91550,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110DA8),
    },
    Trivial {
        routine: 0x01B91560,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110DA8),
    },
    Trivial {
        routine: 0x01B91570,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110DAC),
    },
    Trivial {
        routine: 0x01B92B80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110DB8),
    },
    Trivial {
        routine: 0x01B92B90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110DB8),
    },
    Trivial {
        routine: 0x01B92BA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110DBC),
    },
    Trivial {
        routine: 0x01B92BB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110DBC),
    },
    Trivial {
        routine: 0x01B9B0A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110DC0),
    },
    Trivial {
        routine: 0x01B9B870,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110DE8),
    },
    Trivial {
        routine: 0x01B9B880,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110DE8),
    },
    Trivial {
        routine: 0x01B9D170,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110DEC),
    },
    Trivial {
        routine: 0x01B9D180,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110DEC),
    },
    Trivial {
        routine: 0x01B9E850,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02110F74),
    },
    Trivial {
        routine: 0x01B9FA00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02111370),
    },
    Trivial {
        routine: 0x01B9FA10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02111370),
    },
    Trivial {
        routine: 0x01B9FA20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02111374),
    },
    Trivial {
        routine: 0x01B9FA30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02111374),
    },
    Trivial {
        routine: 0x01B9FA40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02111378),
    },
    Trivial {
        routine: 0x01B9FA50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02111378),
    },
    Trivial {
        routine: 0x01B9FA60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0211137C),
    },
    Trivial {
        routine: 0x01B9FA70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0211137C),
    },
    Trivial {
        routine: 0x01B9FB00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02111380),
    },
    Trivial {
        routine: 0x01BA05A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02111390),
    },
    Trivial {
        routine: 0x01BA05B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02111390),
    },
    Trivial {
        routine: 0x01BA1620,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01BA1640,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x01BA2EE0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01BA3210,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02111394),
    },
    Trivial {
        routine: 0x01BA4CA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021113A0),
    },
    Trivial {
        routine: 0x01BA4CB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021113A0),
    },
    Trivial {
        routine: 0x01BA8B50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021113A4),
    },
    Trivial {
        routine: 0x01BA8B60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021113A4),
    },
    Trivial {
        routine: 0x01BA9620,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01BA9700,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021113A8),
    },
    Trivial {
        routine: 0x01BA9710,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021113A8),
    },
    Trivial {
        routine: 0x01BAB7E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021113B8),
    },
    Trivial {
        routine: 0x01BAB7F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021113B8),
    },
    Trivial {
        routine: 0x01BAD780,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021113BC),
    },
    Trivial {
        routine: 0x01BAE8B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021113C8),
    },
    Trivial {
        routine: 0x01BAE8C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021113C8),
    },
    Trivial {
        routine: 0x01BAEED0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021113CC),
    },
    Trivial {
        routine: 0x01BAEEE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021113CC),
    },
    Trivial {
        routine: 0x01BAF4C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021113D0),
    },
    Trivial {
        routine: 0x01BAF4D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021113D0),
    },
    Trivial {
        routine: 0x01BAF4E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021113D4),
    },
    Trivial {
        routine: 0x01BAF4F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021113D4),
    },
    Trivial {
        routine: 0x01BB0B30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021113D8),
    },
    Trivial {
        routine: 0x01BB0B40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021113D8),
    },
    Trivial {
        routine: 0x01BB40C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021113DC),
    },
    Trivial {
        routine: 0x01BB40D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021113DC),
    },
    Trivial {
        routine: 0x01BB5090,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021113E0),
    },
    Trivial {
        routine: 0x01BB50A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021113E0),
    },
    Trivial {
        routine: 0x01BB7940,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021113F0),
    },
    Trivial {
        routine: 0x01BB7950,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021113F0),
    },
    Trivial {
        routine: 0x01BBFE10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021113F4),
    },
    Trivial {
        routine: 0x01BC17B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021113F8),
    },
    Trivial {
        routine: 0x01BC17C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021113F8),
    },
    Trivial {
        routine: 0x01BC45D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021113FC),
    },
    Trivial {
        routine: 0x01BC45E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021113FC),
    },
    Trivial {
        routine: 0x01BC4A20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02111428),
    },
    Trivial {
        routine: 0x01BC4A30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02111428),
    },
    Trivial {
        routine: 0x01BC4A40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0211142C),
    },
    Trivial {
        routine: 0x01BC4A50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0211142C),
    },
    Trivial {
        routine: 0x01BCA040,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01BCA050,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01BCA060,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01BCA070,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01BCA110,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01BCA120,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01BCA130,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01BCA140,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01BCA150,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01BCA160,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01BCA170,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01BCA180,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01BCA320,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01BCDEB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02111430),
    },
    Trivial {
        routine: 0x01BCDF40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02111434),
    },
    Trivial {
        routine: 0x01BCDF50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02111434),
    },
    Trivial {
        routine: 0x01BCFBD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02111438),
    },
    Trivial {
        routine: 0x01BCFBE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02111438),
    },
    Trivial {
        routine: 0x01BD3690,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01BD6560,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01BD7B50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0211143C),
    },
    Trivial {
        routine: 0x01BD7B60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0211143C),
    },
    Trivial {
        routine: 0x01BD8710,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01BD8EB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02111440),
    },
    Trivial {
        routine: 0x01BD8EC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02111440),
    },
    Trivial {
        routine: 0x01BD9D60,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01BD9D70,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01BD9D80,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01BDB090,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01BDBAA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02111444),
    },
    Trivial {
        routine: 0x01BDBAB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02111444),
    },
    Trivial {
        routine: 0x01BE1210,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01BE5610,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x01BE5DE0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01BE6C80,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01BE8750,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01BEB850,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02111450),
    },
    Trivial {
        routine: 0x01BFA8F0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01BFF4C0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01C06930,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01C0E290,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02111484),
    },
    Trivial {
        routine: 0x01C0E2A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02111484),
    },
    Trivial {
        routine: 0x01C133D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02111488),
    },
    Trivial {
        routine: 0x01C133E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x02111488),
    },
    Trivial {
        routine: 0x01C1B3D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0211148C),
    },
    Trivial {
        routine: 0x01C1B3E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0211148C),
    },
    Trivial {
        routine: 0x01C1CA60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021114B8),
    },
    Trivial {
        routine: 0x01C22B80,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01C236D0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01C28690,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021114D4),
    },
    Trivial {
        routine: 0x01C286A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021114D4),
    },
    Trivial {
        routine: 0x01C28B40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021114D8),
    },
    Trivial {
        routine: 0x01C28B50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021114D8),
    },
    Trivial {
        routine: 0x01C28B60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021114DC),
    },
    Trivial {
        routine: 0x01C28B70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x021114DC),
    },
    Trivial {
        routine: 0x01C29C70,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01C29C80,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01C32770,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03566764),
    },
    Trivial {
        routine: 0x01C32780,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03566764),
    },
    Trivial {
        routine: 0x01C32EA0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01C32EB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03566768),
    },
    Trivial {
        routine: 0x01C32EC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03566768),
    },
    Trivial {
        routine: 0x01C345B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0356678C),
    },
    Trivial {
        routine: 0x01C439B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x035667A0),
    },
    Trivial {
        routine: 0x01C439C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x035667A0),
    },
    Trivial {
        routine: 0x01C473D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x035667A4),
    },
    Trivial {
        routine: 0x01C473E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x035667A4),
    },
    Trivial {
        routine: 0x01C48DB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x035667A8),
    },
    Trivial {
        routine: 0x01C48DC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x035667A8),
    },
    Trivial {
        routine: 0x01C49A40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x035667AC),
    },
    Trivial {
        routine: 0x01C49A50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x035667AC),
    },
    Trivial {
        routine: 0x01C4D160,
        shape: Shape::SetsAGlobal,
        writes: Some(0x035667B0),
    },
    Trivial {
        routine: 0x01C4D170,
        shape: Shape::SetsAGlobal,
        writes: Some(0x035667B0),
    },
    Trivial {
        routine: 0x01C691C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01C88B30,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01C97220,
        shape: Shape::AssignsSomethingElse,
        writes: None,
    },
    Trivial {
        routine: 0x01CA40D0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CB00A0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01CB00B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03566818),
    },
    Trivial {
        routine: 0x01CB00C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03566818),
    },
    Trivial {
        routine: 0x01CB1690,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CB16A0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CB16B0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CB1B50,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CB1B60,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CB2140,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0356681C),
    },
    Trivial {
        routine: 0x01CB2150,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0356681C),
    },
    Trivial {
        routine: 0x01CBF900,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CBF910,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CC0390,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CC03A0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CC0E70,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CC0E80,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CC1780,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CC1790,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CC1AD0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CC1AE0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CC2620,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CC2630,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CC3E60,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CC3E70,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CC3E80,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CC5C60,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01CC6020,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01CC6710,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CC7090,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CC7250,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CC8300,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CC8310,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CC8320,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CC8330,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CC8340,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CC8350,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CC8360,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01CC8390,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01CC8A20,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CC8A40,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CC8AB0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CC8AC0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CC8AD0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CC8AE0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CC92B0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CC92C0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CC92D0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CC92E0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CC92F0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CC9300,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CC9310,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CC9320,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CC9C40,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CC9C50,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CC9C60,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CC9C70,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CC9C80,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CC9C90,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CC9E20,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CC9E30,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CC9E40,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CC9E50,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CCA660,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CCA670,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CCA680,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CCA690,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CCA800,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CCA810,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CCA820,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CCA830,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CCAA70,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CCAA80,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CCAA90,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CCAAA0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CCAAB0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CCB440,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CCB450,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CCB5E0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CCB5F0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01CCBDA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03566880),
    },
    Trivial {
        routine: 0x01CCBDB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03566880),
    },
    Trivial {
        routine: 0x01CCDDC0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CCDDD0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CD89F0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CD8A00,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CD9040,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03566884),
    },
    Trivial {
        routine: 0x01CD9050,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03566884),
    },
    Trivial {
        routine: 0x01CDCF60,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CDCF70,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CDCF80,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CDD150,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03566888),
    },
    Trivial {
        routine: 0x01CDD160,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03566888),
    },
    Trivial {
        routine: 0x01CE6450,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CE6460,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CEAC60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0356688C),
    },
    Trivial {
        routine: 0x01CEAC70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x0356688C),
    },
    Trivial {
        routine: 0x01CED230,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CED240,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CED250,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CEFD70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03566890),
    },
    Trivial {
        routine: 0x01CEFD80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03566890),
    },
    Trivial {
        routine: 0x01CF0420,
        shape: Shape::SetsAGlobal,
        writes: Some(0x035668A0),
    },
    Trivial {
        routine: 0x01CF0700,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CF09B0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01CF0C60,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CF0C90,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CF0CA0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CF0E80,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CF0F70,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CF0FA0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CF0FD0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CF0FF0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01CF1050,
        shape: Shape::SetsAGlobal,
        writes: Some(0x035668A4),
    },
    Trivial {
        routine: 0x01CF1060,
        shape: Shape::SetsAGlobal,
        writes: Some(0x035668A4),
    },
    Trivial {
        routine: 0x01CFACC0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01D01390,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01D013A0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01D013B0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01D018F0,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01D03580,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01D03E90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x01FF0D88),
    },
    Trivial {
        routine: 0x01D049C0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01D04D40,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01D0A6D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x035668A8),
    },
    Trivial {
        routine: 0x01D0E4E0,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01D0F160,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01D12340,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01D27780,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567A2C),
    },
    Trivial {
        routine: 0x01D28120,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567A30),
    },
    Trivial {
        routine: 0x01D28130,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567A30),
    },
    Trivial {
        routine: 0x01D2C680,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01D2C690,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01D2DE70,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01D2E4D0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01D2E570,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01D2E5B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567A34),
    },
    Trivial {
        routine: 0x01D2E5C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567A34),
    },
    Trivial {
        routine: 0x01D33350,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01D333F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567A3C),
    },
    Trivial {
        routine: 0x01D33400,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567A3C),
    },
    Trivial {
        routine: 0x01D34A70,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01D34AE0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01D34DB0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01D350E0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01D35220,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567A48),
    },
    Trivial {
        routine: 0x01D3A770,
        shape: Shape::ReturnsSomethingReadOnce,
        writes: None,
    },
    Trivial {
        routine: 0x01D3AB10,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01D3AD40,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01D3B060,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01D3B2D0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01D3B610,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01D3B830,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01D3B920,
        shape: Shape::WritesAField,
        writes: None,
    },
    Trivial {
        routine: 0x01D3C330,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01D3C510,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01D3CBC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567AB0),
    },
    Trivial {
        routine: 0x01D40000,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01D40A70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567AB8),
    },
    Trivial {
        routine: 0x01D420D0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01D420E0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01D42210,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01D438C0,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01D463C0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01D47420,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567BD4),
    },
    Trivial {
        routine: 0x01D47430,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567BD4),
    },
    Trivial {
        routine: 0x01D47490,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567BD8),
    },
    Trivial {
        routine: 0x01D474A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567BD8),
    },
    Trivial {
        routine: 0x01D48F10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567BDC),
    },
    Trivial {
        routine: 0x01D48F20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567BDC),
    },
    Trivial {
        routine: 0x01D4A150,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567BE0),
    },
    Trivial {
        routine: 0x01D4A160,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567BE0),
    },
    Trivial {
        routine: 0x01D4B420,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567BE4),
    },
    Trivial {
        routine: 0x01D4B430,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567BE4),
    },
    Trivial {
        routine: 0x01D4E300,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567BE8),
    },
    Trivial {
        routine: 0x01D4E310,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567BE8),
    },
    Trivial {
        routine: 0x01D4F400,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567BEC),
    },
    Trivial {
        routine: 0x01D4F410,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567BEC),
    },
    Trivial {
        routine: 0x01D51DA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567BF0),
    },
    Trivial {
        routine: 0x01D51DB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567BF0),
    },
    Trivial {
        routine: 0x01D54680,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567BF4),
    },
    Trivial {
        routine: 0x01D54690,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567BF4),
    },
    Trivial {
        routine: 0x01D56DF0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567BF8),
    },
    Trivial {
        routine: 0x01D56E00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567BF8),
    },
    Trivial {
        routine: 0x01D57610,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567BFC),
    },
    Trivial {
        routine: 0x01D57620,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567BFC),
    },
    Trivial {
        routine: 0x01D59350,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C00),
    },
    Trivial {
        routine: 0x01D59360,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C00),
    },
    Trivial {
        routine: 0x01D59CD0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C04),
    },
    Trivial {
        routine: 0x01D59CE0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C04),
    },
    Trivial {
        routine: 0x01D5A260,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C08),
    },
    Trivial {
        routine: 0x01D5A270,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C08),
    },
    Trivial {
        routine: 0x01D5BC60,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C0C),
    },
    Trivial {
        routine: 0x01D5BC70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C0C),
    },
    Trivial {
        routine: 0x01D5DDA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C10),
    },
    Trivial {
        routine: 0x01D5DDB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C10),
    },
    Trivial {
        routine: 0x01D5E0E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C14),
    },
    Trivial {
        routine: 0x01D5E0F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C14),
    },
    Trivial {
        routine: 0x01D62F90,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C18),
    },
    Trivial {
        routine: 0x01D62FA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C18),
    },
    Trivial {
        routine: 0x01D65E80,
        shape: Shape::ReturnsSomethingWorkedOut,
        writes: None,
    },
    Trivial {
        routine: 0x01D66D10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C1C),
    },
    Trivial {
        routine: 0x01D66D20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C1C),
    },
    Trivial {
        routine: 0x01D691F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C20),
    },
    Trivial {
        routine: 0x01D69200,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C20),
    },
    Trivial {
        routine: 0x01D6C4F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C24),
    },
    Trivial {
        routine: 0x01D6C500,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C24),
    },
    Trivial {
        routine: 0x01D6C850,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C28),
    },
    Trivial {
        routine: 0x01D6C860,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C28),
    },
    Trivial {
        routine: 0x01D6E980,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C2C),
    },
    Trivial {
        routine: 0x01D6E990,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C2C),
    },
    Trivial {
        routine: 0x01D6EB10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C30),
    },
    Trivial {
        routine: 0x01D6EB20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C30),
    },
    Trivial {
        routine: 0x01D6EC20,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C34),
    },
    Trivial {
        routine: 0x01D6EC30,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C34),
    },
    Trivial {
        routine: 0x01D6F0A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C38),
    },
    Trivial {
        routine: 0x01D6F0B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C38),
    },
    Trivial {
        routine: 0x01D700E0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C3C),
    },
    Trivial {
        routine: 0x01D700F0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C3C),
    },
    Trivial {
        routine: 0x01D70C00,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C40),
    },
    Trivial {
        routine: 0x01D70C10,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C40),
    },
    Trivial {
        routine: 0x01D71730,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C44),
    },
    Trivial {
        routine: 0x01D71740,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C44),
    },
    Trivial {
        routine: 0x01D72570,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C48),
    },
    Trivial {
        routine: 0x01D72580,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C48),
    },
    Trivial {
        routine: 0x01D73530,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C4C),
    },
    Trivial {
        routine: 0x01D73540,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C4C),
    },
    Trivial {
        routine: 0x01D73570,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01D74230,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C50),
    },
    Trivial {
        routine: 0x01D74240,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C50),
    },
    Trivial {
        routine: 0x01D74B70,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C54),
    },
    Trivial {
        routine: 0x01D74B80,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C54),
    },
    Trivial {
        routine: 0x01D75290,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C58),
    },
    Trivial {
        routine: 0x01D752A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C58),
    },
    Trivial {
        routine: 0x01D75CA0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C5C),
    },
    Trivial {
        routine: 0x01D75CB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C5C),
    },
    Trivial {
        routine: 0x01D767A0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C60),
    },
    Trivial {
        routine: 0x01D767B0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C60),
    },
    Trivial {
        routine: 0x01D76B40,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C64),
    },
    Trivial {
        routine: 0x01D76B50,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C64),
    },
    Trivial {
        routine: 0x01D771C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C70),
    },
    Trivial {
        routine: 0x01D771D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C70),
    },
    Trivial {
        routine: 0x01D7AEC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C74),
    },
    Trivial {
        routine: 0x01D7AED0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C74),
    },
    Trivial {
        routine: 0x01D7BFA0,
        shape: Shape::ReturnsAName,
        writes: None,
    },
    Trivial {
        routine: 0x01D7D6C0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C78),
    },
    Trivial {
        routine: 0x01D7D6D0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C78),
    },
    Trivial {
        routine: 0x01D7D720,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C7C),
    },
    Trivial {
        routine: 0x01D7D730,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C7C),
    },
    Trivial {
        routine: 0x01D84080,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C80),
    },
    Trivial {
        routine: 0x01D84090,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567C80),
    },
    Trivial {
        routine: 0x01D86BB0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567CA8),
    },
    Trivial {
        routine: 0x01D86BC0,
        shape: Shape::SetsAGlobal,
        writes: Some(0x03567CA8),
    },
];

/// How many there are.
pub const TRIVIAL_COUNT: usize = 4255;

/// Implements part of the one-statement family.
///
/// What one routine does, if it is one of these.
#[must_use]
pub fn trivial_at(routine: u32) -> Option<&'static Trivial> {
    TRIVIAL
        .binary_search_by_key(&routine, |held| held.routine)
        .ok()
        .map(|at| &TRIVIAL[at])
}

/// Implements part of the one-statement family.
///
/// Every routine of one shape.
#[must_use]
pub fn of_shape(shape: Shape) -> Vec<&'static Trivial> {
    TRIVIAL.iter().filter(|held| held.shape == shape).collect()
}

/// Implements part of the one-statement family.
///
/// How many routines there are of each shape, commonest first.
#[must_use]
pub fn shapes_in_use() -> Vec<(Shape, usize)> {
    let mut counted: Vec<(Shape, usize)> = Vec::new();
    for held in &TRIVIAL {
        match counted.iter_mut().find(|(shape, _)| *shape == held.shape) {
            Some((_, seen)) => *seen += 1,
            None => counted.push((held.shape, 1)),
        }
    }
    counted.sort_by(|left, right| right.1.cmp(&left.1).then(left.0.cmp(&right.0)));
    counted
}

/// Implements part of the one-statement family.
///
/// Every global written by a routine of this kind, and how many write it.
#[must_use]
pub fn globals_written() -> Vec<(u32, usize)> {
    let mut counted: Vec<(u32, usize)> = Vec::new();
    for held in TRIVIAL.iter().filter_map(|held| held.writes) {
        match counted.iter_mut().find(|(at, _)| *at == held) {
            Some((_, seen)) => *seen += 1,
            None => counted.push((held, 1)),
        }
    }
    counted.sort_by(|left, right| right.1.cmp(&left.1).then(left.0.cmp(&right.0)));
    counted
}

/// Implements part of the one-statement family.
///
/// The globals more than one such routine writes.
#[must_use]
pub fn globals_with_several_writers() -> Vec<u32> {
    globals_written()
        .into_iter()
        .filter(|(_, seen)| *seen > 1)
        .map(|(at, _)| at)
        .collect()
}

/// How far apart the two routines of a pair sit.
///
/// Part of the one-statement family.
///
/// Sixteen bytes, in every pair but one. A stride that fixed is what generated
/// code looks like: the two were emitted together, one after the other, with
/// nothing in between.
pub const PAIR_STRIDE: u32 = 0x10;

/// A global that is counted up and down.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct Counter {
    /// The global the count is kept in.
    pub global: u32,
    /// The routine that adds one.
    pub goes_in: u32,
    /// The routine that takes one away.
    pub comes_out: u32,
}

/// Every nesting count the program keeps.
///
/// Each has a routine to go in and a routine to come out, and the two sit
/// [`PAIR_STRIDE`] apart.
pub static COUNTERS: [Counter; 1045] = [
    Counter {
        global: 0x0200C2C8,
        goes_in: 0x00424A30,
        comes_out: 0x00424A40,
    },
    Counter {
        global: 0x0200C300,
        goes_in: 0x0042AFB0,
        comes_out: 0x0042AFC0,
    },
    Counter {
        global: 0x0200C304,
        goes_in: 0x0042AFD0,
        comes_out: 0x0042AFE0,
    },
    Counter {
        global: 0x0200C308,
        goes_in: 0x0042B000,
        comes_out: 0x0042B010,
    },
    Counter {
        global: 0x0200C3D0,
        goes_in: 0x0042BF30,
        comes_out: 0x0042BF40,
    },
    Counter {
        global: 0x020115C8,
        goes_in: 0x004701D0,
        comes_out: 0x004701E0,
    },
    Counter {
        global: 0x020115CC,
        goes_in: 0x00471150,
        comes_out: 0x00471160,
    },
    Counter {
        global: 0x02011670,
        goes_in: 0x00525A60,
        comes_out: 0x00525A70,
    },
    Counter {
        global: 0x02011ED4,
        goes_in: 0x00594C10,
        comes_out: 0x00594C20,
    },
    Counter {
        global: 0x02011ED8,
        goes_in: 0x0059BB10,
        comes_out: 0x0059BB20,
    },
    Counter {
        global: 0x02011EEC,
        goes_in: 0x005A1E10,
        comes_out: 0x005A1E20,
    },
    Counter {
        global: 0x02011F00,
        goes_in: 0x005B7280,
        comes_out: 0x005B7290,
    },
    Counter {
        global: 0x02011F04,
        goes_in: 0x005B8360,
        comes_out: 0x005B8370,
    },
    Counter {
        global: 0x02011F08,
        goes_in: 0x005B8D40,
        comes_out: 0x005B8D50,
    },
    Counter {
        global: 0x02011F28,
        goes_in: 0x005BAFC0,
        comes_out: 0x005BAFD0,
    },
    Counter {
        global: 0x02011F74,
        goes_in: 0x005D2DA0,
        comes_out: 0x005D2DB0,
    },
    Counter {
        global: 0x02011F84,
        goes_in: 0x005EECC0,
        comes_out: 0x005EECD0,
    },
    Counter {
        global: 0x02011F8C,
        goes_in: 0x005F21B0,
        comes_out: 0x005F21C0,
    },
    Counter {
        global: 0x02012048,
        goes_in: 0x006117E0,
        comes_out: 0x006117F0,
    },
    Counter {
        global: 0x0201204C,
        goes_in: 0x00612220,
        comes_out: 0x00612230,
    },
    Counter {
        global: 0x02012068,
        goes_in: 0x00614AB0,
        comes_out: 0x00614AC0,
    },
    Counter {
        global: 0x02012088,
        goes_in: 0x00616FA0,
        comes_out: 0x00616FB0,
    },
    Counter {
        global: 0x02012244,
        goes_in: 0x0061B470,
        comes_out: 0x0061B480,
    },
    Counter {
        global: 0x02012248,
        goes_in: 0x0061B680,
        comes_out: 0x0061B690,
    },
    Counter {
        global: 0x02012250,
        goes_in: 0x0061D470,
        comes_out: 0x0061D480,
    },
    Counter {
        global: 0x02012258,
        goes_in: 0x0061DF20,
        comes_out: 0x0061DF30,
    },
    Counter {
        global: 0x02012284,
        goes_in: 0x00626610,
        comes_out: 0x00626620,
    },
    Counter {
        global: 0x02012288,
        goes_in: 0x00626750,
        comes_out: 0x00626760,
    },
    Counter {
        global: 0x0201228C,
        goes_in: 0x00634F60,
        comes_out: 0x00634F70,
    },
    Counter {
        global: 0x02012294,
        goes_in: 0x006365E0,
        comes_out: 0x006365F0,
    },
    Counter {
        global: 0x02012298,
        goes_in: 0x00636600,
        comes_out: 0x00636610,
    },
    Counter {
        global: 0x0201229C,
        goes_in: 0x00636620,
        comes_out: 0x00636630,
    },
    Counter {
        global: 0x020122A0,
        goes_in: 0x00636640,
        comes_out: 0x00636650,
    },
    Counter {
        global: 0x020122A4,
        goes_in: 0x00636660,
        comes_out: 0x00636670,
    },
    Counter {
        global: 0x020122AC,
        goes_in: 0x00636A00,
        comes_out: 0x00636A10,
    },
    Counter {
        global: 0x020123B0,
        goes_in: 0x0069A820,
        comes_out: 0x0069A830,
    },
    Counter {
        global: 0x020123B4,
        goes_in: 0x0069A840,
        comes_out: 0x0069A850,
    },
    Counter {
        global: 0x020123B8,
        goes_in: 0x0069A8C0,
        comes_out: 0x0069A8D0,
    },
    Counter {
        global: 0x020123BC,
        goes_in: 0x0069A930,
        comes_out: 0x0069A940,
    },
    Counter {
        global: 0x020123C0,
        goes_in: 0x0069A950,
        comes_out: 0x0069A960,
    },
    Counter {
        global: 0x020123C4,
        goes_in: 0x0069A970,
        comes_out: 0x0069A980,
    },
    Counter {
        global: 0x020123C8,
        goes_in: 0x0069A990,
        comes_out: 0x0069A9A0,
    },
    Counter {
        global: 0x020123CC,
        goes_in: 0x0069AE00,
        comes_out: 0x0069AE10,
    },
    Counter {
        global: 0x020123D0,
        goes_in: 0x0069B310,
        comes_out: 0x0069B320,
    },
    Counter {
        global: 0x020123D4,
        goes_in: 0x0069B840,
        comes_out: 0x0069B850,
    },
    Counter {
        global: 0x020123D8,
        goes_in: 0x0069B910,
        comes_out: 0x0069B920,
    },
    Counter {
        global: 0x020123E0,
        goes_in: 0x0069EBF0,
        comes_out: 0x0069EC00,
    },
    Counter {
        global: 0x020123E4,
        goes_in: 0x006A0710,
        comes_out: 0x006A0720,
    },
    Counter {
        global: 0x020123E8,
        goes_in: 0x006A4800,
        comes_out: 0x006A4810,
    },
    Counter {
        global: 0x020123EC,
        goes_in: 0x006A4940,
        comes_out: 0x006A4950,
    },
    Counter {
        global: 0x02012400,
        goes_in: 0x006AB8C0,
        comes_out: 0x006AB8D0,
    },
    Counter {
        global: 0x020124B8,
        goes_in: 0x00711C80,
        comes_out: 0x00711C90,
    },
    Counter {
        global: 0x020124BC,
        goes_in: 0x00711CA0,
        comes_out: 0x00711CB0,
    },
    Counter {
        global: 0x020125A8,
        goes_in: 0x0078A210,
        comes_out: 0x0078A220,
    },
    Counter {
        global: 0x020125B0,
        goes_in: 0x007D89B0,
        comes_out: 0x007D89C0,
    },
    Counter {
        global: 0x020125E0,
        goes_in: 0x007E92D0,
        comes_out: 0x007E92E0,
    },
    Counter {
        global: 0x020125E4,
        goes_in: 0x007E97A0,
        comes_out: 0x007E97B0,
    },
    Counter {
        global: 0x020125E8,
        goes_in: 0x007E9860,
        comes_out: 0x007E9870,
    },
    Counter {
        global: 0x020126CC,
        goes_in: 0x00822390,
        comes_out: 0x008223A0,
    },
    Counter {
        global: 0x02012730,
        goes_in: 0x00832F80,
        comes_out: 0x00832F90,
    },
    Counter {
        global: 0x02012734,
        goes_in: 0x00837DC0,
        comes_out: 0x00837DD0,
    },
    Counter {
        global: 0x02012748,
        goes_in: 0x00850AC0,
        comes_out: 0x00850AD0,
    },
    Counter {
        global: 0x02012750,
        goes_in: 0x00850BC0,
        comes_out: 0x00850BD0,
    },
    Counter {
        global: 0x02012754,
        goes_in: 0x00852C20,
        comes_out: 0x00852C30,
    },
    Counter {
        global: 0x02012758,
        goes_in: 0x00858D00,
        comes_out: 0x00858D10,
    },
    Counter {
        global: 0x020127A4,
        goes_in: 0x0085DC00,
        comes_out: 0x0085DC10,
    },
    Counter {
        global: 0x020127AC,
        goes_in: 0x0085DE80,
        comes_out: 0x0085DE90,
    },
    Counter {
        global: 0x020127B0,
        goes_in: 0x0085E1C0,
        comes_out: 0x0085E1D0,
    },
    Counter {
        global: 0x020127FC,
        goes_in: 0x0086D110,
        comes_out: 0x0086D120,
    },
    Counter {
        global: 0x02012800,
        goes_in: 0x0086D130,
        comes_out: 0x0086D140,
    },
    Counter {
        global: 0x02012814,
        goes_in: 0x0086D200,
        comes_out: 0x0086D210,
    },
    Counter {
        global: 0x02012818,
        goes_in: 0x0086E0A0,
        comes_out: 0x0086E0B0,
    },
    Counter {
        global: 0x0201281C,
        goes_in: 0x0086E520,
        comes_out: 0x0086E530,
    },
    Counter {
        global: 0x02012820,
        goes_in: 0x0086E930,
        comes_out: 0x0086E940,
    },
    Counter {
        global: 0x02012824,
        goes_in: 0x0086E950,
        comes_out: 0x0086E960,
    },
    Counter {
        global: 0x0201282C,
        goes_in: 0x00879CE0,
        comes_out: 0x00879CF0,
    },
    Counter {
        global: 0x02012954,
        goes_in: 0x00882450,
        comes_out: 0x00882460,
    },
    Counter {
        global: 0x02012958,
        goes_in: 0x00882B90,
        comes_out: 0x00882BA0,
    },
    Counter {
        global: 0x02012A1C,
        goes_in: 0x00890740,
        comes_out: 0x00890750,
    },
    Counter {
        global: 0x02012A20,
        goes_in: 0x008927C0,
        comes_out: 0x008927D0,
    },
    Counter {
        global: 0x02012A28,
        goes_in: 0x00892C90,
        comes_out: 0x00892CA0,
    },
    Counter {
        global: 0x02012A2C,
        goes_in: 0x00892CB0,
        comes_out: 0x00892CC0,
    },
    Counter {
        global: 0x02012A30,
        goes_in: 0x00892CD0,
        comes_out: 0x00892CE0,
    },
    Counter {
        global: 0x02012A34,
        goes_in: 0x00892CF0,
        comes_out: 0x00892D00,
    },
    Counter {
        global: 0x02012A4C,
        goes_in: 0x0089E0D0,
        comes_out: 0x0089E0E0,
    },
    Counter {
        global: 0x02012A50,
        goes_in: 0x0089E0F0,
        comes_out: 0x0089E100,
    },
    Counter {
        global: 0x02012A54,
        goes_in: 0x0089E3A0,
        comes_out: 0x0089E3B0,
    },
    Counter {
        global: 0x02012A78,
        goes_in: 0x008B1930,
        comes_out: 0x008B1940,
    },
    Counter {
        global: 0x02012A7C,
        goes_in: 0x008B30E0,
        comes_out: 0x008B30F0,
    },
    Counter {
        global: 0x02012A80,
        goes_in: 0x008B3100,
        comes_out: 0x008B3110,
    },
    Counter {
        global: 0x02012A8C,
        goes_in: 0x008B9270,
        comes_out: 0x008B9280,
    },
    Counter {
        global: 0x02012A90,
        goes_in: 0x008D22B0,
        comes_out: 0x008D22C0,
    },
    Counter {
        global: 0x02012A94,
        goes_in: 0x008F2220,
        comes_out: 0x008F2230,
    },
    Counter {
        global: 0x02012A98,
        goes_in: 0x008F4F90,
        comes_out: 0x008F4FA0,
    },
    Counter {
        global: 0x02012A9C,
        goes_in: 0x008F9B90,
        comes_out: 0x008F9BA0,
    },
    Counter {
        global: 0x02012AA0,
        goes_in: 0x008F9C20,
        comes_out: 0x008F9C30,
    },
    Counter {
        global: 0x02012AA4,
        goes_in: 0x008F9E00,
        comes_out: 0x008F9E10,
    },
    Counter {
        global: 0x02012AA8,
        goes_in: 0x008FF040,
        comes_out: 0x008FF050,
    },
    Counter {
        global: 0x02012AAC,
        goes_in: 0x009009B0,
        comes_out: 0x009009C0,
    },
    Counter {
        global: 0x02012AE8,
        goes_in: 0x009DFB80,
        comes_out: 0x009DFB90,
    },
    Counter {
        global: 0x02012AEC,
        goes_in: 0x009DFBA0,
        comes_out: 0x009DFBB0,
    },
    Counter {
        global: 0x02012B18,
        goes_in: 0x009E0500,
        comes_out: 0x009E0510,
    },
    Counter {
        global: 0x02012B1C,
        goes_in: 0x009E1020,
        comes_out: 0x009E1030,
    },
    Counter {
        global: 0x02013324,
        goes_in: 0x009E1F30,
        comes_out: 0x009E1F40,
    },
    Counter {
        global: 0x02013344,
        goes_in: 0x009E4C60,
        comes_out: 0x009E4C70,
    },
    Counter {
        global: 0x02013348,
        goes_in: 0x009EA7F0,
        comes_out: 0x009EA800,
    },
    Counter {
        global: 0x02013370,
        goes_in: 0x009ED6A0,
        comes_out: 0x009ED6B0,
    },
    Counter {
        global: 0x02013374,
        goes_in: 0x009F2750,
        comes_out: 0x009F2760,
    },
    Counter {
        global: 0x02013390,
        goes_in: 0x00A02F20,
        comes_out: 0x00A02F30,
    },
    Counter {
        global: 0x020133A8,
        goes_in: 0x00A08E20,
        comes_out: 0x00A08E30,
    },
    Counter {
        global: 0x020133AC,
        goes_in: 0x00A08E70,
        comes_out: 0x00A08E80,
    },
    Counter {
        global: 0x020133B4,
        goes_in: 0x00A29770,
        comes_out: 0x00A29780,
    },
    Counter {
        global: 0x020133B8,
        goes_in: 0x00A2A2A0,
        comes_out: 0x00A2A2B0,
    },
    Counter {
        global: 0x020133C0,
        goes_in: 0x00A2CB30,
        comes_out: 0x00A2CB40,
    },
    Counter {
        global: 0x020137D4,
        goes_in: 0x00A42070,
        comes_out: 0x00A42080,
    },
    Counter {
        global: 0x02014470,
        goes_in: 0x00A4ED10,
        comes_out: 0x00A4ED20,
    },
    Counter {
        global: 0x0201470C,
        goes_in: 0x00A78440,
        comes_out: 0x00A78450,
    },
    Counter {
        global: 0x02014720,
        goes_in: 0x00A7B310,
        comes_out: 0x00A7B320,
    },
    Counter {
        global: 0x02014724,
        goes_in: 0x00A7D020,
        comes_out: 0x00A7D030,
    },
    Counter {
        global: 0x02014754,
        goes_in: 0x00ACF9B0,
        comes_out: 0x00ACF9C0,
    },
    Counter {
        global: 0x02014758,
        goes_in: 0x00ACF9D0,
        comes_out: 0x00ACF9E0,
    },
    Counter {
        global: 0x0201475C,
        goes_in: 0x00AE7BA0,
        comes_out: 0x00AE7BB0,
    },
    Counter {
        global: 0x02014790,
        goes_in: 0x00B01C40,
        comes_out: 0x00B01C50,
    },
    Counter {
        global: 0x020147A0,
        goes_in: 0x00B047C0,
        comes_out: 0x00B047D0,
    },
    Counter {
        global: 0x020147A4,
        goes_in: 0x00B04850,
        comes_out: 0x00B04860,
    },
    Counter {
        global: 0x020147A8,
        goes_in: 0x00B04870,
        comes_out: 0x00B04880,
    },
    Counter {
        global: 0x020147AC,
        goes_in: 0x00B048B0,
        comes_out: 0x00B048C0,
    },
    Counter {
        global: 0x020147B0,
        goes_in: 0x00B06C40,
        comes_out: 0x00B06C50,
    },
    Counter {
        global: 0x020147BC,
        goes_in: 0x00B088E0,
        comes_out: 0x00B088F0,
    },
    Counter {
        global: 0x020147C0,
        goes_in: 0x00B0B600,
        comes_out: 0x00B0B610,
    },
    Counter {
        global: 0x020147C8,
        goes_in: 0x00B13A90,
        comes_out: 0x00B13AA0,
    },
    Counter {
        global: 0x020147CC,
        goes_in: 0x00B13F80,
        comes_out: 0x00B13F90,
    },
    Counter {
        global: 0x020147D4,
        goes_in: 0x00B14CF0,
        comes_out: 0x00B14D00,
    },
    Counter {
        global: 0x020147DC,
        goes_in: 0x00B156D0,
        comes_out: 0x00B156E0,
    },
    Counter {
        global: 0x020147E0,
        goes_in: 0x00B15B50,
        comes_out: 0x00B15B60,
    },
    Counter {
        global: 0x020147E8,
        goes_in: 0x00B186E0,
        comes_out: 0x00B186F0,
    },
    Counter {
        global: 0x020147EC,
        goes_in: 0x00B19810,
        comes_out: 0x00B19820,
    },
    Counter {
        global: 0x020147F0,
        goes_in: 0x00B1B170,
        comes_out: 0x00B1B180,
    },
    Counter {
        global: 0x0201483C,
        goes_in: 0x00B226E0,
        comes_out: 0x00B226F0,
    },
    Counter {
        global: 0x02014840,
        goes_in: 0x00B22E00,
        comes_out: 0x00B22E10,
    },
    Counter {
        global: 0x02014848,
        goes_in: 0x00B25110,
        comes_out: 0x00B25120,
    },
    Counter {
        global: 0x0201484C,
        goes_in: 0x00B258F0,
        comes_out: 0x00B25900,
    },
    Counter {
        global: 0x02014850,
        goes_in: 0x00B2C720,
        comes_out: 0x00B2C730,
    },
    Counter {
        global: 0x02014854,
        goes_in: 0x00B300B0,
        comes_out: 0x00B300C0,
    },
    Counter {
        global: 0x02014858,
        goes_in: 0x00B33A90,
        comes_out: 0x00B33AA0,
    },
    Counter {
        global: 0x0201485C,
        goes_in: 0x00B36500,
        comes_out: 0x00B36510,
    },
    Counter {
        global: 0x02014860,
        goes_in: 0x00B38980,
        comes_out: 0x00B38990,
    },
    Counter {
        global: 0x0201486C,
        goes_in: 0x00B3ACB0,
        comes_out: 0x00B3ACC0,
    },
    Counter {
        global: 0x02014870,
        goes_in: 0x00B3D690,
        comes_out: 0x00B3D6A0,
    },
    Counter {
        global: 0x02014874,
        goes_in: 0x00B3DD00,
        comes_out: 0x00B3DD10,
    },
    Counter {
        global: 0x02014878,
        goes_in: 0x00B3FB40,
        comes_out: 0x00B3FB50,
    },
    Counter {
        global: 0x0201487C,
        goes_in: 0x00B44FD0,
        comes_out: 0x00B44FE0,
    },
    Counter {
        global: 0x02014880,
        goes_in: 0x00B5A290,
        comes_out: 0x00B5A2A0,
    },
    Counter {
        global: 0x02014884,
        goes_in: 0x00B5B570,
        comes_out: 0x00B5B580,
    },
    Counter {
        global: 0x02014888,
        goes_in: 0x00B61D00,
        comes_out: 0x00B61D10,
    },
    Counter {
        global: 0x0201488C,
        goes_in: 0x00B68580,
        comes_out: 0x00B68590,
    },
    Counter {
        global: 0x02014890,
        goes_in: 0x00B69390,
        comes_out: 0x00B693A0,
    },
    Counter {
        global: 0x02014894,
        goes_in: 0x00B693B0,
        comes_out: 0x00B693C0,
    },
    Counter {
        global: 0x02014898,
        goes_in: 0x00B693D0,
        comes_out: 0x00B693E0,
    },
    Counter {
        global: 0x0201489C,
        goes_in: 0x00B69A60,
        comes_out: 0x00B69A70,
    },
    Counter {
        global: 0x020148A0,
        goes_in: 0x00B6D0D0,
        comes_out: 0x00B6D0E0,
    },
    Counter {
        global: 0x020148A4,
        goes_in: 0x00B70780,
        comes_out: 0x00B70790,
    },
    Counter {
        global: 0x020148A8,
        goes_in: 0x00B720E0,
        comes_out: 0x00B720F0,
    },
    Counter {
        global: 0x020148AC,
        goes_in: 0x00B745A0,
        comes_out: 0x00B745B0,
    },
    Counter {
        global: 0x020148B0,
        goes_in: 0x00B75E30,
        comes_out: 0x00B75E40,
    },
    Counter {
        global: 0x020148B4,
        goes_in: 0x00B760E0,
        comes_out: 0x00B760F0,
    },
    Counter {
        global: 0x020148B8,
        goes_in: 0x00B77700,
        comes_out: 0x00B77710,
    },
    Counter {
        global: 0x020188C4,
        goes_in: 0x00B792E0,
        comes_out: 0x00B792F0,
    },
    Counter {
        global: 0x020188C8,
        goes_in: 0x00B7C680,
        comes_out: 0x00B7C690,
    },
    Counter {
        global: 0x020188CC,
        goes_in: 0x00B7D440,
        comes_out: 0x00B7D450,
    },
    Counter {
        global: 0x020188D0,
        goes_in: 0x00B7E090,
        comes_out: 0x00B7E0A0,
    },
    Counter {
        global: 0x020188D4,
        goes_in: 0x00B7EB10,
        comes_out: 0x00B7EB20,
    },
    Counter {
        global: 0x020188D8,
        goes_in: 0x00B7F6E0,
        comes_out: 0x00B7F6F0,
    },
    Counter {
        global: 0x020188DC,
        goes_in: 0x00B80AF0,
        comes_out: 0x00B80B00,
    },
    Counter {
        global: 0x020188E0,
        goes_in: 0x00B838B0,
        comes_out: 0x00B838C0,
    },
    Counter {
        global: 0x020188E4,
        goes_in: 0x00B84240,
        comes_out: 0x00B84250,
    },
    Counter {
        global: 0x020198F0,
        goes_in: 0x00B872E0,
        comes_out: 0x00B872F0,
    },
    Counter {
        global: 0x020198F4,
        goes_in: 0x00B87300,
        comes_out: 0x00B87310,
    },
    Counter {
        global: 0x020198F8,
        goes_in: 0x00B883C0,
        comes_out: 0x00B883D0,
    },
    Counter {
        global: 0x020198FC,
        goes_in: 0x00B88BC0,
        comes_out: 0x00B88BD0,
    },
    Counter {
        global: 0x0201990C,
        goes_in: 0x00B90500,
        comes_out: 0x00B90510,
    },
    Counter {
        global: 0x02019910,
        goes_in: 0x00B921E0,
        comes_out: 0x00B921F0,
    },
    Counter {
        global: 0x02019A24,
        goes_in: 0x00B948B0,
        comes_out: 0x00B948C0,
    },
    Counter {
        global: 0x02019A28,
        goes_in: 0x00B95C00,
        comes_out: 0x00B95C10,
    },
    Counter {
        global: 0x02019A2C,
        goes_in: 0x00B95C20,
        comes_out: 0x00B95C30,
    },
    Counter {
        global: 0x02019A30,
        goes_in: 0x00B95D10,
        comes_out: 0x00B95D20,
    },
    Counter {
        global: 0x02019A34,
        goes_in: 0x00B964C0,
        comes_out: 0x00B964D0,
    },
    Counter {
        global: 0x02019A38,
        goes_in: 0x00B970E0,
        comes_out: 0x00B970F0,
    },
    Counter {
        global: 0x02019A9C,
        goes_in: 0x00B975E0,
        comes_out: 0x00B975F0,
    },
    Counter {
        global: 0x02019AA4,
        goes_in: 0x00B98950,
        comes_out: 0x00B98960,
    },
    Counter {
        global: 0x02019AAC,
        goes_in: 0x00B9C4E0,
        comes_out: 0x00B9C4F0,
    },
    Counter {
        global: 0x02019AB0,
        goes_in: 0x00B9C500,
        comes_out: 0x00B9C510,
    },
    Counter {
        global: 0x02019AB4,
        goes_in: 0x00B9CB40,
        comes_out: 0x00B9CB50,
    },
    Counter {
        global: 0x02019AC4,
        goes_in: 0x00B9ED40,
        comes_out: 0x00B9ED50,
    },
    Counter {
        global: 0x02019ACC,
        goes_in: 0x00BB7840,
        comes_out: 0x00BB7850,
    },
    Counter {
        global: 0x02019AD0,
        goes_in: 0x00BB7860,
        comes_out: 0x00BB7870,
    },
    Counter {
        global: 0x02019AE0,
        goes_in: 0x00BBD050,
        comes_out: 0x00BBD060,
    },
    Counter {
        global: 0x02019AE4,
        goes_in: 0x00BBD260,
        comes_out: 0x00BBD270,
    },
    Counter {
        global: 0x02019AFC,
        goes_in: 0x00BCBDC0,
        comes_out: 0x00BCBDD0,
    },
    Counter {
        global: 0x02019B00,
        goes_in: 0x00BCC930,
        comes_out: 0x00BCC940,
    },
    Counter {
        global: 0x02019B04,
        goes_in: 0x00BD1370,
        comes_out: 0x00BD1380,
    },
    Counter {
        global: 0x02019B24,
        goes_in: 0x00BDA290,
        comes_out: 0x00BDA2A0,
    },
    Counter {
        global: 0x02019B28,
        goes_in: 0x00BE20B0,
        comes_out: 0x00BE20C0,
    },
    Counter {
        global: 0x02019B2C,
        goes_in: 0x00BE8070,
        comes_out: 0x00BE8080,
    },
    Counter {
        global: 0x02019B40,
        goes_in: 0x00C119C0,
        comes_out: 0x00C119D0,
    },
    Counter {
        global: 0x02019B50,
        goes_in: 0x00C36B30,
        comes_out: 0x00C36B40,
    },
    Counter {
        global: 0x02019C00,
        goes_in: 0x00C37880,
        comes_out: 0x00C37890,
    },
    Counter {
        global: 0x02019C04,
        goes_in: 0x00C395C0,
        comes_out: 0x00C395D0,
    },
    Counter {
        global: 0x02019C08,
        goes_in: 0x00C395E0,
        comes_out: 0x00C395F0,
    },
    Counter {
        global: 0x02019C64,
        goes_in: 0x00C45E30,
        comes_out: 0x00C45E40,
    },
    Counter {
        global: 0x02019C68,
        goes_in: 0x00C46060,
        comes_out: 0x00C46070,
    },
    Counter {
        global: 0x02019C6C,
        goes_in: 0x00C46190,
        comes_out: 0x00C461A0,
    },
    Counter {
        global: 0x02019C70,
        goes_in: 0x00C46D00,
        comes_out: 0x00C46D10,
    },
    Counter {
        global: 0x02019CAC,
        goes_in: 0x00C52DD0,
        comes_out: 0x00C52DE0,
    },
    Counter {
        global: 0x02019CB0,
        goes_in: 0x00C53940,
        comes_out: 0x00C53950,
    },
    Counter {
        global: 0x02019CC0,
        goes_in: 0x00C543F0,
        comes_out: 0x00C54400,
    },
    Counter {
        global: 0x02019CC4,
        goes_in: 0x00C54410,
        comes_out: 0x00C54420,
    },
    Counter {
        global: 0x02019CC8,
        goes_in: 0x00C54A20,
        comes_out: 0x00C54A30,
    },
    Counter {
        global: 0x02019CCC,
        goes_in: 0x00C57040,
        comes_out: 0x00C57050,
    },
    Counter {
        global: 0x02019CD0,
        goes_in: 0x00C5AB70,
        comes_out: 0x00C5AB80,
    },
    Counter {
        global: 0x02019CD4,
        goes_in: 0x00C5AB90,
        comes_out: 0x00C5ABA0,
    },
    Counter {
        global: 0x02019CD8,
        goes_in: 0x00C5BA70,
        comes_out: 0x00C5BA80,
    },
    Counter {
        global: 0x02019CDC,
        goes_in: 0x00C5C890,
        comes_out: 0x00C5C8A0,
    },
    Counter {
        global: 0x02019CE0,
        goes_in: 0x00C60F60,
        comes_out: 0x00C60F70,
    },
    Counter {
        global: 0x02019CE8,
        goes_in: 0x00C65B80,
        comes_out: 0x00C65B90,
    },
    Counter {
        global: 0x02019CF8,
        goes_in: 0x00C66620,
        comes_out: 0x00C66630,
    },
    Counter {
        global: 0x02019CFC,
        goes_in: 0x00C66990,
        comes_out: 0x00C669A0,
    },
    Counter {
        global: 0x02019D00,
        goes_in: 0x00C66C90,
        comes_out: 0x00C66CA0,
    },
    Counter {
        global: 0x02019D04,
        goes_in: 0x00C68A50,
        comes_out: 0x00C68A60,
    },
    Counter {
        global: 0x02019D08,
        goes_in: 0x00C6A000,
        comes_out: 0x00C6A010,
    },
    Counter {
        global: 0x02019D0C,
        goes_in: 0x00C6BE10,
        comes_out: 0x00C6BE20,
    },
    Counter {
        global: 0x02019D14,
        goes_in: 0x00C74770,
        comes_out: 0x00C74780,
    },
    Counter {
        global: 0x02019D18,
        goes_in: 0x00C747A0,
        comes_out: 0x00C747B0,
    },
    Counter {
        global: 0x02019D1C,
        goes_in: 0x00C7B3E0,
        comes_out: 0x00C7B3F0,
    },
    Counter {
        global: 0x02019E98,
        goes_in: 0x00C7F3F0,
        comes_out: 0x00C7F400,
    },
    Counter {
        global: 0x02019EA8,
        goes_in: 0x00C85EE0,
        comes_out: 0x00C85EF0,
    },
    Counter {
        global: 0x02019EAC,
        goes_in: 0x00C87580,
        comes_out: 0x00C87590,
    },
    Counter {
        global: 0x02019EB0,
        goes_in: 0x00C88230,
        comes_out: 0x00C88240,
    },
    Counter {
        global: 0x02019EB4,
        goes_in: 0x00C89610,
        comes_out: 0x00C89620,
    },
    Counter {
        global: 0x02019EB8,
        goes_in: 0x00C8C330,
        comes_out: 0x00C8C340,
    },
    Counter {
        global: 0x02019EBC,
        goes_in: 0x00C8C350,
        comes_out: 0x00C8C360,
    },
    Counter {
        global: 0x02019EC0,
        goes_in: 0x00C8CA60,
        comes_out: 0x00C8CA70,
    },
    Counter {
        global: 0x02019EC8,
        goes_in: 0x00C90090,
        comes_out: 0x00C900A0,
    },
    Counter {
        global: 0x02019ECC,
        goes_in: 0x00C901C0,
        comes_out: 0x00C901D0,
    },
    Counter {
        global: 0x02019F08,
        goes_in: 0x00CA8690,
        comes_out: 0x00CA86A0,
    },
    Counter {
        global: 0x02019F0C,
        goes_in: 0x00CA91D0,
        comes_out: 0x00CA91E0,
    },
    Counter {
        global: 0x02019F14,
        goes_in: 0x00CB2000,
        comes_out: 0x00CB2010,
    },
    Counter {
        global: 0x02019F18,
        goes_in: 0x00CB3950,
        comes_out: 0x00CB3960,
    },
    Counter {
        global: 0x02019F20,
        goes_in: 0x00CB8B10,
        comes_out: 0x00CB8B20,
    },
    Counter {
        global: 0x02019F24,
        goes_in: 0x00CB9E80,
        comes_out: 0x00CB9E90,
    },
    Counter {
        global: 0x02019F28,
        goes_in: 0x00CBB4C0,
        comes_out: 0x00CBB4D0,
    },
    Counter {
        global: 0x02019F2C,
        goes_in: 0x00CBBFB0,
        comes_out: 0x00CBBFC0,
    },
    Counter {
        global: 0x02019F30,
        goes_in: 0x00CBDF50,
        comes_out: 0x00CBDF60,
    },
    Counter {
        global: 0x02019F34,
        goes_in: 0x00CBE080,
        comes_out: 0x00CBE090,
    },
    Counter {
        global: 0x02019F38,
        goes_in: 0x00CBE650,
        comes_out: 0x00CBE660,
    },
    Counter {
        global: 0x02019F3C,
        goes_in: 0x00CBFD50,
        comes_out: 0x00CBFD60,
    },
    Counter {
        global: 0x02019F40,
        goes_in: 0x00CBFD70,
        comes_out: 0x00CBFD80,
    },
    Counter {
        global: 0x02019F44,
        goes_in: 0x00CC0100,
        comes_out: 0x00CC0110,
    },
    Counter {
        global: 0x02019F4C,
        goes_in: 0x00CC2740,
        comes_out: 0x00CC2750,
    },
    Counter {
        global: 0x02019F50,
        goes_in: 0x00CC2C00,
        comes_out: 0x00CC2C10,
    },
    Counter {
        global: 0x02019F54,
        goes_in: 0x00CC2C20,
        comes_out: 0x00CC2C30,
    },
    Counter {
        global: 0x02019F58,
        goes_in: 0x00CC2C40,
        comes_out: 0x00CC2C50,
    },
    Counter {
        global: 0x02019F5C,
        goes_in: 0x00CC2C60,
        comes_out: 0x00CC2C70,
    },
    Counter {
        global: 0x02019F60,
        goes_in: 0x00CC2C80,
        comes_out: 0x00CC2C90,
    },
    Counter {
        global: 0x02019F64,
        goes_in: 0x00CC2CA0,
        comes_out: 0x00CC2CB0,
    },
    Counter {
        global: 0x02019F68,
        goes_in: 0x00CC2CC0,
        comes_out: 0x00CC2CD0,
    },
    Counter {
        global: 0x02019F7C,
        goes_in: 0x00CC3FF0,
        comes_out: 0x00CC4000,
    },
    Counter {
        global: 0x02019F80,
        goes_in: 0x00CC62D0,
        comes_out: 0x00CC62E0,
    },
    Counter {
        global: 0x02019F88,
        goes_in: 0x00CD3B20,
        comes_out: 0x00CD3B30,
    },
    Counter {
        global: 0x02019F8C,
        goes_in: 0x00CD3C10,
        comes_out: 0x00CD3C20,
    },
    Counter {
        global: 0x02019F94,
        goes_in: 0x00CD7C90,
        comes_out: 0x00CD7CA0,
    },
    Counter {
        global: 0x02019F98,
        goes_in: 0x00CD7CB0,
        comes_out: 0x00CD7CC0,
    },
    Counter {
        global: 0x02019F9C,
        goes_in: 0x00CD7CD0,
        comes_out: 0x00CD7CE0,
    },
    Counter {
        global: 0x02019FA0,
        goes_in: 0x00CD7CF0,
        comes_out: 0x00CD7D00,
    },
    Counter {
        global: 0x02019FC8,
        goes_in: 0x00CD9C80,
        comes_out: 0x00CD9C90,
    },
    Counter {
        global: 0x02019FCC,
        goes_in: 0x00CDB8A0,
        comes_out: 0x00CDB8B0,
    },
    Counter {
        global: 0x02019FD0,
        goes_in: 0x00CDC750,
        comes_out: 0x00CDC760,
    },
    Counter {
        global: 0x0201A060,
        goes_in: 0x00CE5700,
        comes_out: 0x00CE5710,
    },
    Counter {
        global: 0x0201A064,
        goes_in: 0x00CE98D0,
        comes_out: 0x00CE98E0,
    },
    Counter {
        global: 0x0201A068,
        goes_in: 0x00CEA880,
        comes_out: 0x00CEA890,
    },
    Counter {
        global: 0x0201A06C,
        goes_in: 0x00CEB650,
        comes_out: 0x00CEB660,
    },
    Counter {
        global: 0x0201A070,
        goes_in: 0x00CEB670,
        comes_out: 0x00CEB680,
    },
    Counter {
        global: 0x0201A084,
        goes_in: 0x00CED160,
        comes_out: 0x00CED170,
    },
    Counter {
        global: 0x0201A088,
        goes_in: 0x00CEE960,
        comes_out: 0x00CEE970,
    },
    Counter {
        global: 0x0201A08C,
        goes_in: 0x00CEEFB0,
        comes_out: 0x00CEEFC0,
    },
    Counter {
        global: 0x0201A090,
        goes_in: 0x00CF2A40,
        comes_out: 0x00CF2A50,
    },
    Counter {
        global: 0x0201A094,
        goes_in: 0x00CF2A60,
        comes_out: 0x00CF2A70,
    },
    Counter {
        global: 0x0201A098,
        goes_in: 0x00CF3750,
        comes_out: 0x00CF3760,
    },
    Counter {
        global: 0x0201A0A0,
        goes_in: 0x00CF5890,
        comes_out: 0x00CF58A0,
    },
    Counter {
        global: 0x0201A0A4,
        goes_in: 0x00CF5E70,
        comes_out: 0x00CF5E80,
    },
    Counter {
        global: 0x0201A0B0,
        goes_in: 0x00CFCED0,
        comes_out: 0x00CFCEE0,
    },
    Counter {
        global: 0x0201A0B4,
        goes_in: 0x00D08360,
        comes_out: 0x00D08370,
    },
    Counter {
        global: 0x0201A0B8,
        goes_in: 0x00D08380,
        comes_out: 0x00D08390,
    },
    Counter {
        global: 0x0201A0BC,
        goes_in: 0x00D083A0,
        comes_out: 0x00D083B0,
    },
    Counter {
        global: 0x0201A0C0,
        goes_in: 0x00D083C0,
        comes_out: 0x00D083D0,
    },
    Counter {
        global: 0x0201A0C4,
        goes_in: 0x00D083E0,
        comes_out: 0x00D083F0,
    },
    Counter {
        global: 0x0201A0C8,
        goes_in: 0x00D08400,
        comes_out: 0x00D08410,
    },
    Counter {
        global: 0x0201A0D4,
        goes_in: 0x00D2B3F0,
        comes_out: 0x00D2B400,
    },
    Counter {
        global: 0x0201A174,
        goes_in: 0x00D30F90,
        comes_out: 0x00D30FA0,
    },
    Counter {
        global: 0x0202DA38,
        goes_in: 0x00DA8ED0,
        comes_out: 0x00DA8EE0,
    },
    Counter {
        global: 0x0202DA3C,
        goes_in: 0x00DA8EF0,
        comes_out: 0x00DA8F00,
    },
    Counter {
        global: 0x0202DA40,
        goes_in: 0x00DA8F10,
        comes_out: 0x00DA8F20,
    },
    Counter {
        global: 0x0202DA44,
        goes_in: 0x00DA8F30,
        comes_out: 0x00DA8F40,
    },
    Counter {
        global: 0x0202DA7C,
        goes_in: 0x00DA9F50,
        comes_out: 0x00DA9F60,
    },
    Counter {
        global: 0x0202DA80,
        goes_in: 0x00DAD920,
        comes_out: 0x00DAD930,
    },
    Counter {
        global: 0x0202DA84,
        goes_in: 0x00DAF0E0,
        comes_out: 0x00DAF0F0,
    },
    Counter {
        global: 0x0202DA88,
        goes_in: 0x00DB0A90,
        comes_out: 0x00DB0AA0,
    },
    Counter {
        global: 0x0202DA8C,
        goes_in: 0x00DB7EE0,
        comes_out: 0x00DB7EF0,
    },
    Counter {
        global: 0x0202DA90,
        goes_in: 0x00DBCA70,
        comes_out: 0x00DBCA80,
    },
    Counter {
        global: 0x0202DA94,
        goes_in: 0x00DCF650,
        comes_out: 0x00DCF660,
    },
    Counter {
        global: 0x0202DA98,
        goes_in: 0x00DCFAE0,
        comes_out: 0x00DCFAF0,
    },
    Counter {
        global: 0x0202DA9C,
        goes_in: 0x00DD00A0,
        comes_out: 0x00DD00B0,
    },
    Counter {
        global: 0x0202DAA0,
        goes_in: 0x00DD00C0,
        comes_out: 0x00DD00D0,
    },
    Counter {
        global: 0x0202DB40,
        goes_in: 0x00DD6030,
        comes_out: 0x00DD6040,
    },
    Counter {
        global: 0x0202DB48,
        goes_in: 0x00DD7380,
        comes_out: 0x00DD7390,
    },
    Counter {
        global: 0x0202DB84,
        goes_in: 0x00DE1FC0,
        comes_out: 0x00DE1FD0,
    },
    Counter {
        global: 0x0202DB88,
        goes_in: 0x00DE1FE0,
        comes_out: 0x00DE1FF0,
    },
    Counter {
        global: 0x0202DB8C,
        goes_in: 0x00DE73E0,
        comes_out: 0x00DE73F0,
    },
    Counter {
        global: 0x0202DB90,
        goes_in: 0x00DE9280,
        comes_out: 0x00DE9290,
    },
    Counter {
        global: 0x0202DB94,
        goes_in: 0x00DE9BC0,
        comes_out: 0x00DE9BD0,
    },
    Counter {
        global: 0x0202DB98,
        goes_in: 0x00DF1D00,
        comes_out: 0x00DF1D10,
    },
    Counter {
        global: 0x0202DFA0,
        goes_in: 0x00DFFCD0,
        comes_out: 0x00DFFCE0,
    },
    Counter {
        global: 0x0202DFA4,
        goes_in: 0x00DFFCF0,
        comes_out: 0x00DFFD00,
    },
    Counter {
        global: 0x0202DFA8,
        goes_in: 0x00E02070,
        comes_out: 0x00E02080,
    },
    Counter {
        global: 0x0202DFAC,
        goes_in: 0x00E02140,
        comes_out: 0x00E02150,
    },
    Counter {
        global: 0x0202DFCC,
        goes_in: 0x00E042C0,
        comes_out: 0x00E042D0,
    },
    Counter {
        global: 0x0202DFD0,
        goes_in: 0x00E042E0,
        comes_out: 0x00E042F0,
    },
    Counter {
        global: 0x0202E12C,
        goes_in: 0x00E06EA0,
        comes_out: 0x00E06EB0,
    },
    Counter {
        global: 0x0202E130,
        goes_in: 0x00E08240,
        comes_out: 0x00E08250,
    },
    Counter {
        global: 0x0202E134,
        goes_in: 0x00E08680,
        comes_out: 0x00E08690,
    },
    Counter {
        global: 0x0202E13C,
        goes_in: 0x00E089E0,
        comes_out: 0x00E089F0,
    },
    Counter {
        global: 0x0202E140,
        goes_in: 0x00E08F60,
        comes_out: 0x00E08F70,
    },
    Counter {
        global: 0x0202E144,
        goes_in: 0x00E09F50,
        comes_out: 0x00E09F60,
    },
    Counter {
        global: 0x0202E158,
        goes_in: 0x00E0C240,
        comes_out: 0x00E0C250,
    },
    Counter {
        global: 0x0202E15C,
        goes_in: 0x00E10A70,
        comes_out: 0x00E10A80,
    },
    Counter {
        global: 0x0202E160,
        goes_in: 0x00E12750,
        comes_out: 0x00E12760,
    },
    Counter {
        global: 0x0202E164,
        goes_in: 0x00E14E80,
        comes_out: 0x00E14E90,
    },
    Counter {
        global: 0x0202E168,
        goes_in: 0x00E15E50,
        comes_out: 0x00E15E60,
    },
    Counter {
        global: 0x0202E170,
        goes_in: 0x00E164B0,
        comes_out: 0x00E164C0,
    },
    Counter {
        global: 0x0202E968,
        goes_in: 0x00E1E2D0,
        comes_out: 0x00E1E2E0,
    },
    Counter {
        global: 0x0202E96C,
        goes_in: 0x00E290E0,
        comes_out: 0x00E290F0,
    },
    Counter {
        global: 0x0202E970,
        goes_in: 0x00E39930,
        comes_out: 0x00E39940,
    },
    Counter {
        global: 0x0202E974,
        goes_in: 0x00E46130,
        comes_out: 0x00E46140,
    },
    Counter {
        global: 0x0202E978,
        goes_in: 0x00E74520,
        comes_out: 0x00E74530,
    },
    Counter {
        global: 0x0202E97C,
        goes_in: 0x00E78400,
        comes_out: 0x00E78410,
    },
    Counter {
        global: 0x0202E9C0,
        goes_in: 0x00E7AD40,
        comes_out: 0x00E7AD50,
    },
    Counter {
        global: 0x0202E9C4,
        goes_in: 0x00E7B790,
        comes_out: 0x00E7B7A0,
    },
    Counter {
        global: 0x0202E9C8,
        goes_in: 0x00E7DE30,
        comes_out: 0x00E7DE40,
    },
    Counter {
        global: 0x0202E9CC,
        goes_in: 0x00E7FFF0,
        comes_out: 0x00E80000,
    },
    Counter {
        global: 0x0202EA10,
        goes_in: 0x00E80C90,
        comes_out: 0x00E80CA0,
    },
    Counter {
        global: 0x0202EA14,
        goes_in: 0x00E81D00,
        comes_out: 0x00E81D10,
    },
    Counter {
        global: 0x0202EA18,
        goes_in: 0x00EA1BA0,
        comes_out: 0x00EA1BB0,
    },
    Counter {
        global: 0x0202EA40,
        goes_in: 0x00EA1C40,
        comes_out: 0x00EA1C50,
    },
    Counter {
        global: 0x0202EA44,
        goes_in: 0x00EA55E0,
        comes_out: 0x00EA55F0,
    },
    Counter {
        global: 0x0202EA48,
        goes_in: 0x00EA9330,
        comes_out: 0x00EA9340,
    },
    Counter {
        global: 0x0202EA88,
        goes_in: 0x00EB9460,
        comes_out: 0x00EB9470,
    },
    Counter {
        global: 0x0202EA8C,
        goes_in: 0x00EBA910,
        comes_out: 0x00EBA920,
    },
    Counter {
        global: 0x0202EAA0,
        goes_in: 0x00EBCAE0,
        comes_out: 0x00EBCAF0,
    },
    Counter {
        global: 0x0202EAB0,
        goes_in: 0x00EBD530,
        comes_out: 0x00EBD540,
    },
    Counter {
        global: 0x0202EAB4,
        goes_in: 0x00EBE090,
        comes_out: 0x00EBE0A0,
    },
    Counter {
        global: 0x0202EAB8,
        goes_in: 0x00EC8960,
        comes_out: 0x00EC8970,
    },
    Counter {
        global: 0x0202EAD0,
        goes_in: 0x00EC9550,
        comes_out: 0x00EC9560,
    },
    Counter {
        global: 0x0202EAD4,
        goes_in: 0x00ED5C10,
        comes_out: 0x00ED5C20,
    },
    Counter {
        global: 0x0202EAE0,
        goes_in: 0x00EEC2B0,
        comes_out: 0x00EEC2C0,
    },
    Counter {
        global: 0x0202EAE4,
        goes_in: 0x00EF3FE0,
        comes_out: 0x00EF3FF0,
    },
    Counter {
        global: 0x0202EAE8,
        goes_in: 0x00EF4240,
        comes_out: 0x00EF4250,
    },
    Counter {
        global: 0x0202EAEC,
        goes_in: 0x00EF4870,
        comes_out: 0x00EF4880,
    },
    Counter {
        global: 0x0202EAF0,
        goes_in: 0x00EF7D40,
        comes_out: 0x00EF7D50,
    },
    Counter {
        global: 0x0202EAF4,
        goes_in: 0x00EFE090,
        comes_out: 0x00EFE0A0,
    },
    Counter {
        global: 0x0202EAF8,
        goes_in: 0x00F04500,
        comes_out: 0x00F04510,
    },
    Counter {
        global: 0x0202EB08,
        goes_in: 0x00F05030,
        comes_out: 0x00F05040,
    },
    Counter {
        global: 0x0202EB10,
        goes_in: 0x00F081D0,
        comes_out: 0x00F081E0,
    },
    Counter {
        global: 0x0202EB14,
        goes_in: 0x00F08BB0,
        comes_out: 0x00F08BC0,
    },
    Counter {
        global: 0x0202EB18,
        goes_in: 0x00F08DB0,
        comes_out: 0x00F08DC0,
    },
    Counter {
        global: 0x0202EB1C,
        goes_in: 0x00F08DD0,
        comes_out: 0x00F08DE0,
    },
    Counter {
        global: 0x0202EB20,
        goes_in: 0x00F0B830,
        comes_out: 0x00F0B840,
    },
    Counter {
        global: 0x0202EB24,
        goes_in: 0x00F0CB10,
        comes_out: 0x00F0CB20,
    },
    Counter {
        global: 0x0202EB28,
        goes_in: 0x00F0D590,
        comes_out: 0x00F0D5A0,
    },
    Counter {
        global: 0x0202EB2C,
        goes_in: 0x00F0E090,
        comes_out: 0x00F0E0A0,
    },
    Counter {
        global: 0x0202EB30,
        goes_in: 0x00F105B0,
        comes_out: 0x00F105C0,
    },
    Counter {
        global: 0x0202EB34,
        goes_in: 0x00F12050,
        comes_out: 0x00F12060,
    },
    Counter {
        global: 0x0202EB38,
        goes_in: 0x00F121B0,
        comes_out: 0x00F121C0,
    },
    Counter {
        global: 0x0202EB3C,
        goes_in: 0x00F168E0,
        comes_out: 0x00F168F0,
    },
    Counter {
        global: 0x0202EB54,
        goes_in: 0x00F21270,
        comes_out: 0x00F21280,
    },
    Counter {
        global: 0x0202EB58,
        goes_in: 0x00F21380,
        comes_out: 0x00F21390,
    },
    Counter {
        global: 0x0202ECE8,
        goes_in: 0x00F40DA0,
        comes_out: 0x00F40DB0,
    },
    Counter {
        global: 0x0202ECEC,
        goes_in: 0x00F44D30,
        comes_out: 0x00F44D40,
    },
    Counter {
        global: 0x0202ECF0,
        goes_in: 0x00F4A020,
        comes_out: 0x00F4A030,
    },
    Counter {
        global: 0x0202ED00,
        goes_in: 0x00F4A6C0,
        comes_out: 0x00F4A6D0,
    },
    Counter {
        global: 0x0202ED04,
        goes_in: 0x00F4A6E0,
        comes_out: 0x00F4A6F0,
    },
    Counter {
        global: 0x0202ED08,
        goes_in: 0x00F4C0F0,
        comes_out: 0x00F4C100,
    },
    Counter {
        global: 0x0202ED1C,
        goes_in: 0x00F51490,
        comes_out: 0x00F514A0,
    },
    Counter {
        global: 0x0202ED20,
        goes_in: 0x00F543A0,
        comes_out: 0x00F543B0,
    },
    Counter {
        global: 0x0202ED24,
        goes_in: 0x00F5AC00,
        comes_out: 0x00F5AC10,
    },
    Counter {
        global: 0x0202ED28,
        goes_in: 0x00F5C670,
        comes_out: 0x00F5C680,
    },
    Counter {
        global: 0x0202ED2C,
        goes_in: 0x00F5D6D0,
        comes_out: 0x00F5D6E0,
    },
    Counter {
        global: 0x0202ED30,
        goes_in: 0x00F5E020,
        comes_out: 0x00F5E030,
    },
    Counter {
        global: 0x0202ED34,
        goes_in: 0x00F5FA60,
        comes_out: 0x00F5FA70,
    },
    Counter {
        global: 0x0202ED38,
        goes_in: 0x00F5FCA0,
        comes_out: 0x00F5FCB0,
    },
    Counter {
        global: 0x0202EE60,
        goes_in: 0x00F60400,
        comes_out: 0x00F60410,
    },
    Counter {
        global: 0x0202EE78,
        goes_in: 0x00F65500,
        comes_out: 0x00F65510,
    },
    Counter {
        global: 0x0202EEDC,
        goes_in: 0x00F76360,
        comes_out: 0x00F76370,
    },
    Counter {
        global: 0x0202EEE0,
        goes_in: 0x00F77DA0,
        comes_out: 0x00F77DB0,
    },
    Counter {
        global: 0x0202EEE4,
        goes_in: 0x00F7A780,
        comes_out: 0x00F7A790,
    },
    Counter {
        global: 0x0202EEE8,
        goes_in: 0x00F7AD10,
        comes_out: 0x00F7AD20,
    },
    Counter {
        global: 0x0202EEF8,
        goes_in: 0x00F7B810,
        comes_out: 0x00F7B820,
    },
    Counter {
        global: 0x0202EEFC,
        goes_in: 0x00F7BE30,
        comes_out: 0x00F7BE40,
    },
    Counter {
        global: 0x0202EF00,
        goes_in: 0x00F7DEE0,
        comes_out: 0x00F7DEF0,
    },
    Counter {
        global: 0x0202EF04,
        goes_in: 0x00F81CD0,
        comes_out: 0x00F81CE0,
    },
    Counter {
        global: 0x0202EF08,
        goes_in: 0x00F81D70,
        comes_out: 0x00F81D80,
    },
    Counter {
        global: 0x0202EF18,
        goes_in: 0x00F83A40,
        comes_out: 0x00F83A50,
    },
    Counter {
        global: 0x0202EF28,
        goes_in: 0x00F855A0,
        comes_out: 0x00F855B0,
    },
    Counter {
        global: 0x0202EF38,
        goes_in: 0x00F860F0,
        comes_out: 0x00F86100,
    },
    Counter {
        global: 0x0202EF48,
        goes_in: 0x00F867F0,
        comes_out: 0x00F86800,
    },
    Counter {
        global: 0x0202EF58,
        goes_in: 0x00F87640,
        comes_out: 0x00F87650,
    },
    Counter {
        global: 0x0202EF5C,
        goes_in: 0x00F90B60,
        comes_out: 0x00F90B70,
    },
    Counter {
        global: 0x0202EF64,
        goes_in: 0x00F910C0,
        comes_out: 0x00F910D0,
    },
    Counter {
        global: 0x0202EF68,
        goes_in: 0x00F917D0,
        comes_out: 0x00F917E0,
    },
    Counter {
        global: 0x0202EF6C,
        goes_in: 0x00F91F60,
        comes_out: 0x00F91F70,
    },
    Counter {
        global: 0x0202EF70,
        goes_in: 0x00F92F30,
        comes_out: 0x00F92F40,
    },
    Counter {
        global: 0x0202EF74,
        goes_in: 0x00F93FD0,
        comes_out: 0x00F93FE0,
    },
    Counter {
        global: 0x0202EF78,
        goes_in: 0x00F955D0,
        comes_out: 0x00F955E0,
    },
    Counter {
        global: 0x0202EF7C,
        goes_in: 0x00F96350,
        comes_out: 0x00F96360,
    },
    Counter {
        global: 0x0202EF80,
        goes_in: 0x00F973B0,
        comes_out: 0x00F973C0,
    },
    Counter {
        global: 0x0202EF84,
        goes_in: 0x00F98020,
        comes_out: 0x00F98030,
    },
    Counter {
        global: 0x0202EF88,
        goes_in: 0x00F98C70,
        comes_out: 0x00F98C80,
    },
    Counter {
        global: 0x0202EF8C,
        goes_in: 0x00F9CA40,
        comes_out: 0x00F9CA50,
    },
    Counter {
        global: 0x0202EF90,
        goes_in: 0x00F9FE80,
        comes_out: 0x00F9FE90,
    },
    Counter {
        global: 0x0202EF94,
        goes_in: 0x00FA61B0,
        comes_out: 0x00FA61C0,
    },
    Counter {
        global: 0x0202EF98,
        goes_in: 0x00FABCD0,
        comes_out: 0x00FABCE0,
    },
    Counter {
        global: 0x0202EF9C,
        goes_in: 0x00FACD70,
        comes_out: 0x00FACD80,
    },
    Counter {
        global: 0x0202EFA8,
        goes_in: 0x00FAEB20,
        comes_out: 0x00FAEB30,
    },
    Counter {
        global: 0x0202EFAC,
        goes_in: 0x00FB01C0,
        comes_out: 0x00FB01D0,
    },
    Counter {
        global: 0x0202EFB0,
        goes_in: 0x00FB25A0,
        comes_out: 0x00FB25B0,
    },
    Counter {
        global: 0x0202EFB4,
        goes_in: 0x00FB9360,
        comes_out: 0x00FB9370,
    },
    Counter {
        global: 0x0202EFB8,
        goes_in: 0x00FBCFB0,
        comes_out: 0x00FBCFC0,
    },
    Counter {
        global: 0x0202EFBC,
        goes_in: 0x00FBF2B0,
        comes_out: 0x00FBF2C0,
    },
    Counter {
        global: 0x0202EFC0,
        goes_in: 0x00FC0D70,
        comes_out: 0x00FC0D80,
    },
    Counter {
        global: 0x0202EFC4,
        goes_in: 0x00FC18A0,
        comes_out: 0x00FC18B0,
    },
    Counter {
        global: 0x0202EFC8,
        goes_in: 0x00FC38A0,
        comes_out: 0x00FC38B0,
    },
    Counter {
        global: 0x0202EFCC,
        goes_in: 0x00FC61F0,
        comes_out: 0x00FC6200,
    },
    Counter {
        global: 0x0202EFD0,
        goes_in: 0x00FC8340,
        comes_out: 0x00FC8350,
    },
    Counter {
        global: 0x0202EFD4,
        goes_in: 0x00FC9830,
        comes_out: 0x00FC9840,
    },
    Counter {
        global: 0x0202EFE0,
        goes_in: 0x00FCDA10,
        comes_out: 0x00FCDA20,
    },
    Counter {
        global: 0x0202EFE4,
        goes_in: 0x00FD5BF0,
        comes_out: 0x00FD5C00,
    },
    Counter {
        global: 0x0202F3EC,
        goes_in: 0x00FD6710,
        comes_out: 0x00FD6720,
    },
    Counter {
        global: 0x0202F3F0,
        goes_in: 0x00FD7630,
        comes_out: 0x00FD7640,
    },
    Counter {
        global: 0x0202F3F4,
        goes_in: 0x00FD8570,
        comes_out: 0x00FD8580,
    },
    Counter {
        global: 0x0202F3F8,
        goes_in: 0x00FD8D80,
        comes_out: 0x00FD8D90,
    },
    Counter {
        global: 0x0202F3FC,
        goes_in: 0x00FF2660,
        comes_out: 0x00FF2670,
    },
    Counter {
        global: 0x0202F400,
        goes_in: 0x01026D20,
        comes_out: 0x01026D30,
    },
    Counter {
        global: 0x0202F404,
        goes_in: 0x01027630,
        comes_out: 0x01027640,
    },
    Counter {
        global: 0x0202F408,
        goes_in: 0x0103C3E0,
        comes_out: 0x0103C3F0,
    },
    Counter {
        global: 0x0202F40C,
        goes_in: 0x0104A600,
        comes_out: 0x0104A610,
    },
    Counter {
        global: 0x0202F428,
        goes_in: 0x01054540,
        comes_out: 0x01054550,
    },
    Counter {
        global: 0x0202F830,
        goes_in: 0x01054560,
        comes_out: 0x01054570,
    },
    Counter {
        global: 0x0202F834,
        goes_in: 0x010545A0,
        comes_out: 0x010545B0,
    },
    Counter {
        global: 0x0202F840,
        goes_in: 0x01054CA0,
        comes_out: 0x01054CB0,
    },
    Counter {
        global: 0x0202F844,
        goes_in: 0x01056FE0,
        comes_out: 0x01056FF0,
    },
    Counter {
        global: 0x0202F848,
        goes_in: 0x01057190,
        comes_out: 0x010571A0,
    },
    Counter {
        global: 0x0202F854,
        goes_in: 0x0106BC60,
        comes_out: 0x0106BC70,
    },
    Counter {
        global: 0x0202F858,
        goes_in: 0x0106C1A0,
        comes_out: 0x0106C1B0,
    },
    Counter {
        global: 0x0202F85C,
        goes_in: 0x0106CE70,
        comes_out: 0x0106CE80,
    },
    Counter {
        global: 0x0202F868,
        goes_in: 0x0106D8B0,
        comes_out: 0x0106D8C0,
    },
    Counter {
        global: 0x0202F86C,
        goes_in: 0x0106DDA0,
        comes_out: 0x0106DDB0,
    },
    Counter {
        global: 0x0202F870,
        goes_in: 0x0106EB90,
        comes_out: 0x0106EBA0,
    },
    Counter {
        global: 0x0202F874,
        goes_in: 0x0106F460,
        comes_out: 0x0106F470,
    },
    Counter {
        global: 0x0202F880,
        goes_in: 0x0106F480,
        comes_out: 0x0106F490,
    },
    Counter {
        global: 0x0202F884,
        goes_in: 0x01070960,
        comes_out: 0x01070970,
    },
    Counter {
        global: 0x0202F888,
        goes_in: 0x01072010,
        comes_out: 0x01072020,
    },
    Counter {
        global: 0x0202F88C,
        goes_in: 0x01072030,
        comes_out: 0x01072040,
    },
    Counter {
        global: 0x0202F890,
        goes_in: 0x01072050,
        comes_out: 0x01072060,
    },
    Counter {
        global: 0x0202F894,
        goes_in: 0x01073180,
        comes_out: 0x01073190,
    },
    Counter {
        global: 0x0202F898,
        goes_in: 0x01073910,
        comes_out: 0x01073920,
    },
    Counter {
        global: 0x0202F8E0,
        goes_in: 0x01099B70,
        comes_out: 0x01099B80,
    },
    Counter {
        global: 0x0202F8F0,
        goes_in: 0x0109FAB0,
        comes_out: 0x0109FAC0,
    },
    Counter {
        global: 0x0202F8F4,
        goes_in: 0x0109FC50,
        comes_out: 0x0109FC60,
    },
    Counter {
        global: 0x0202F8F8,
        goes_in: 0x010A06F0,
        comes_out: 0x010A0700,
    },
    Counter {
        global: 0x0202F8FC,
        goes_in: 0x010A0EC0,
        comes_out: 0x010A0ED0,
    },
    Counter {
        global: 0x0202F910,
        goes_in: 0x010A8780,
        comes_out: 0x010A8790,
    },
    Counter {
        global: 0x0202F944,
        goes_in: 0x010B58D0,
        comes_out: 0x010B58E0,
    },
    Counter {
        global: 0x0202F948,
        goes_in: 0x010B6940,
        comes_out: 0x010B6950,
    },
    Counter {
        global: 0x0202F94C,
        goes_in: 0x010B9B30,
        comes_out: 0x010B9B40,
    },
    Counter {
        global: 0x0202F950,
        goes_in: 0x010BA0F0,
        comes_out: 0x010BA100,
    },
    Counter {
        global: 0x0202F954,
        goes_in: 0x010BC370,
        comes_out: 0x010BC380,
    },
    Counter {
        global: 0x0202F958,
        goes_in: 0x010BED90,
        comes_out: 0x010BEDA0,
    },
    Counter {
        global: 0x0202F95C,
        goes_in: 0x010BF6C0,
        comes_out: 0x010BF6D0,
    },
    Counter {
        global: 0x0202F970,
        goes_in: 0x010C2220,
        comes_out: 0x010C2230,
    },
    Counter {
        global: 0x0202F974,
        goes_in: 0x010C2360,
        comes_out: 0x010C2370,
    },
    Counter {
        global: 0x0202F978,
        goes_in: 0x010C79F0,
        comes_out: 0x010C7A00,
    },
    Counter {
        global: 0x0202F97C,
        goes_in: 0x010C94E0,
        comes_out: 0x010C94F0,
    },
    Counter {
        global: 0x0202F980,
        goes_in: 0x010CB740,
        comes_out: 0x010CB750,
    },
    Counter {
        global: 0x0202F984,
        goes_in: 0x010D12B0,
        comes_out: 0x010D12C0,
    },
    Counter {
        global: 0x0202F988,
        goes_in: 0x010D38A0,
        comes_out: 0x010D38B0,
    },
    Counter {
        global: 0x0202F98C,
        goes_in: 0x010D56D0,
        comes_out: 0x010D56E0,
    },
    Counter {
        global: 0x0202F990,
        goes_in: 0x010D5AA0,
        comes_out: 0x010D5AB0,
    },
    Counter {
        global: 0x0202F994,
        goes_in: 0x010D6BD0,
        comes_out: 0x010D6BE0,
    },
    Counter {
        global: 0x0202F998,
        goes_in: 0x010D78E0,
        comes_out: 0x010D78F0,
    },
    Counter {
        global: 0x0202F99C,
        goes_in: 0x010D9950,
        comes_out: 0x010D9960,
    },
    Counter {
        global: 0x0202F9A0,
        goes_in: 0x010DE410,
        comes_out: 0x010DE420,
    },
    Counter {
        global: 0x0202FD58,
        goes_in: 0x010ECC70,
        comes_out: 0x010ECC80,
    },
    Counter {
        global: 0x0202FD5C,
        goes_in: 0x010EEB60,
        comes_out: 0x010EEB70,
    },
    Counter {
        global: 0x0202FD60,
        goes_in: 0x010EF8C0,
        comes_out: 0x010EF8D0,
    },
    Counter {
        global: 0x0202FD64,
        goes_in: 0x010F1670,
        comes_out: 0x010F1680,
    },
    Counter {
        global: 0x0202FD70,
        goes_in: 0x010F2CD0,
        comes_out: 0x010F2CE0,
    },
    Counter {
        global: 0x02030110,
        goes_in: 0x01107E60,
        comes_out: 0x01107E70,
    },
    Counter {
        global: 0x02030114,
        goes_in: 0x0110EE10,
        comes_out: 0x0110EE20,
    },
    Counter {
        global: 0x02030118,
        goes_in: 0x0110EE30,
        comes_out: 0x0110EE40,
    },
    Counter {
        global: 0x0203011C,
        goes_in: 0x01114420,
        comes_out: 0x01114430,
    },
    Counter {
        global: 0x02030120,
        goes_in: 0x01115270,
        comes_out: 0x01115280,
    },
    Counter {
        global: 0x02030124,
        goes_in: 0x01115290,
        comes_out: 0x011152A0,
    },
    Counter {
        global: 0x02030134,
        goes_in: 0x01116060,
        comes_out: 0x01116070,
    },
    Counter {
        global: 0x02030138,
        goes_in: 0x01116890,
        comes_out: 0x011168A0,
    },
    Counter {
        global: 0x02030158,
        goes_in: 0x01117690,
        comes_out: 0x011176A0,
    },
    Counter {
        global: 0x02030170,
        goes_in: 0x01128120,
        comes_out: 0x01128130,
    },
    Counter {
        global: 0x02030174,
        goes_in: 0x01128180,
        comes_out: 0x01128190,
    },
    Counter {
        global: 0x02030184,
        goes_in: 0x01130E30,
        comes_out: 0x01130E40,
    },
    Counter {
        global: 0x0203019C,
        goes_in: 0x01133A90,
        comes_out: 0x01133AA0,
    },
    Counter {
        global: 0x020301A0,
        goes_in: 0x01133AB0,
        comes_out: 0x01133AC0,
    },
    Counter {
        global: 0x020301B0,
        goes_in: 0x01133B40,
        comes_out: 0x01133B50,
    },
    Counter {
        global: 0x020301B4,
        goes_in: 0x01133B60,
        comes_out: 0x01133B70,
    },
    Counter {
        global: 0x020301B8,
        goes_in: 0x01133B80,
        comes_out: 0x01133B90,
    },
    Counter {
        global: 0x020301BC,
        goes_in: 0x01133CF0,
        comes_out: 0x01133D00,
    },
    Counter {
        global: 0x020301C0,
        goes_in: 0x0113E320,
        comes_out: 0x0113E330,
    },
    Counter {
        global: 0x020301C4,
        goes_in: 0x0113F880,
        comes_out: 0x0113F890,
    },
    Counter {
        global: 0x020301C8,
        goes_in: 0x01143BC0,
        comes_out: 0x01143BD0,
    },
    Counter {
        global: 0x020301E0,
        goes_in: 0x0114E790,
        comes_out: 0x0114E7A0,
    },
    Counter {
        global: 0x020301F8,
        goes_in: 0x01151570,
        comes_out: 0x01151580,
    },
    Counter {
        global: 0x020301FC,
        goes_in: 0x01154090,
        comes_out: 0x011540A0,
    },
    Counter {
        global: 0x0203034C,
        goes_in: 0x01155CC0,
        comes_out: 0x01155CD0,
    },
    Counter {
        global: 0x02030350,
        goes_in: 0x01156BB0,
        comes_out: 0x01156BC0,
    },
    Counter {
        global: 0x02030364,
        goes_in: 0x0115CFA0,
        comes_out: 0x0115CFB0,
    },
    Counter {
        global: 0x02030368,
        goes_in: 0x0115D6C0,
        comes_out: 0x0115D6D0,
    },
    Counter {
        global: 0x02030378,
        goes_in: 0x0115DD10,
        comes_out: 0x0115DD20,
    },
    Counter {
        global: 0x02038E5C,
        goes_in: 0x01160660,
        comes_out: 0x01160670,
    },
    Counter {
        global: 0x02038E68,
        goes_in: 0x01160B50,
        comes_out: 0x01160B60,
    },
    Counter {
        global: 0x02038E6C,
        goes_in: 0x01163570,
        comes_out: 0x01163580,
    },
    Counter {
        global: 0x02038E70,
        goes_in: 0x01164120,
        comes_out: 0x01164130,
    },
    Counter {
        global: 0x02038E74,
        goes_in: 0x01164F70,
        comes_out: 0x01164F80,
    },
    Counter {
        global: 0x02038E78,
        goes_in: 0x01165D40,
        comes_out: 0x01165D50,
    },
    Counter {
        global: 0x02038E7C,
        goes_in: 0x01165FA0,
        comes_out: 0x01165FB0,
    },
    Counter {
        global: 0x020412E8,
        goes_in: 0x01172890,
        comes_out: 0x011728A0,
    },
    Counter {
        global: 0x02041C70,
        goes_in: 0x0117A400,
        comes_out: 0x0117A410,
    },
    Counter {
        global: 0x02041C74,
        goes_in: 0x01188F10,
        comes_out: 0x01188F20,
    },
    Counter {
        global: 0x02041C78,
        goes_in: 0x01189580,
        comes_out: 0x01189590,
    },
    Counter {
        global: 0x02041C7C,
        goes_in: 0x01192E90,
        comes_out: 0x01192EA0,
    },
    Counter {
        global: 0x02041C80,
        goes_in: 0x01195100,
        comes_out: 0x01195110,
    },
    Counter {
        global: 0x02107188,
        goes_in: 0x011AA710,
        comes_out: 0x011AA720,
    },
    Counter {
        global: 0x0210773C,
        goes_in: 0x01236FF0,
        comes_out: 0x01237000,
    },
    Counter {
        global: 0x02107740,
        goes_in: 0x01238BA0,
        comes_out: 0x01238BB0,
    },
    Counter {
        global: 0x02107744,
        goes_in: 0x01239FA0,
        comes_out: 0x01239FB0,
    },
    Counter {
        global: 0x02107748,
        goes_in: 0x01241F30,
        comes_out: 0x01241F40,
    },
    Counter {
        global: 0x0210774C,
        goes_in: 0x0129C2F0,
        comes_out: 0x0129C300,
    },
    Counter {
        global: 0x02107750,
        goes_in: 0x0129F820,
        comes_out: 0x0129F830,
    },
    Counter {
        global: 0x02107754,
        goes_in: 0x012A7020,
        comes_out: 0x012A7030,
    },
    Counter {
        global: 0x02107758,
        goes_in: 0x012A7040,
        comes_out: 0x012A7050,
    },
    Counter {
        global: 0x0210775C,
        goes_in: 0x012B2730,
        comes_out: 0x012B2740,
    },
    Counter {
        global: 0x02107760,
        goes_in: 0x012B32F0,
        comes_out: 0x012B3300,
    },
    Counter {
        global: 0x02107764,
        goes_in: 0x012B3FA0,
        comes_out: 0x012B3FB0,
    },
    Counter {
        global: 0x02107768,
        goes_in: 0x012B4FF0,
        comes_out: 0x012B5000,
    },
    Counter {
        global: 0x02107778,
        goes_in: 0x012BAB30,
        comes_out: 0x012BAB40,
    },
    Counter {
        global: 0x0210777C,
        goes_in: 0x012BB9C0,
        comes_out: 0x012BB9D0,
    },
    Counter {
        global: 0x02107788,
        goes_in: 0x012BCE00,
        comes_out: 0x012BCE10,
    },
    Counter {
        global: 0x0210778C,
        goes_in: 0x012BFA20,
        comes_out: 0x012BFA30,
    },
    Counter {
        global: 0x02107798,
        goes_in: 0x012CB990,
        comes_out: 0x012CB9A0,
    },
    Counter {
        global: 0x0210779C,
        goes_in: 0x012CD290,
        comes_out: 0x012CD2A0,
    },
    Counter {
        global: 0x021077A8,
        goes_in: 0x012DB390,
        comes_out: 0x012DB3A0,
    },
    Counter {
        global: 0x021077AC,
        goes_in: 0x012DD520,
        comes_out: 0x012DD530,
    },
    Counter {
        global: 0x021077B0,
        goes_in: 0x012E2840,
        comes_out: 0x012E2850,
    },
    Counter {
        global: 0x021077B4,
        goes_in: 0x012E2860,
        comes_out: 0x012E2870,
    },
    Counter {
        global: 0x021077B8,
        goes_in: 0x012E2E10,
        comes_out: 0x012E2E20,
    },
    Counter {
        global: 0x021077BC,
        goes_in: 0x012E62D0,
        comes_out: 0x012E62E0,
    },
    Counter {
        global: 0x021077C0,
        goes_in: 0x012E6900,
        comes_out: 0x012E6910,
    },
    Counter {
        global: 0x021077C4,
        goes_in: 0x012E70F0,
        comes_out: 0x012E7100,
    },
    Counter {
        global: 0x021077C8,
        goes_in: 0x012E7F10,
        comes_out: 0x012E7F20,
    },
    Counter {
        global: 0x021077CC,
        goes_in: 0x012E8FB0,
        comes_out: 0x012E8FC0,
    },
    Counter {
        global: 0x021077D0,
        goes_in: 0x012E9930,
        comes_out: 0x012E9940,
    },
    Counter {
        global: 0x021077E0,
        goes_in: 0x012E9F00,
        comes_out: 0x012E9F10,
    },
    Counter {
        global: 0x021077F0,
        goes_in: 0x012EA6C0,
        comes_out: 0x012EA6D0,
    },
    Counter {
        global: 0x02107800,
        goes_in: 0x012EDF10,
        comes_out: 0x012EDF20,
    },
    Counter {
        global: 0x02107810,
        goes_in: 0x01307450,
        comes_out: 0x01307460,
    },
    Counter {
        global: 0x02107820,
        goes_in: 0x0131CC30,
        comes_out: 0x0131CC40,
    },
    Counter {
        global: 0x02107824,
        goes_in: 0x013299B0,
        comes_out: 0x013299C0,
    },
    Counter {
        global: 0x02107830,
        goes_in: 0x0132BE70,
        comes_out: 0x0132BE80,
    },
    Counter {
        global: 0x02107834,
        goes_in: 0x0132DDF0,
        comes_out: 0x0132DE00,
    },
    Counter {
        global: 0x02107838,
        goes_in: 0x0132EFD0,
        comes_out: 0x0132EFE0,
    },
    Counter {
        global: 0x0210783C,
        goes_in: 0x0132F400,
        comes_out: 0x0132F410,
    },
    Counter {
        global: 0x02107840,
        goes_in: 0x0132F850,
        comes_out: 0x0132F860,
    },
    Counter {
        global: 0x02107870,
        goes_in: 0x01338A70,
        comes_out: 0x01338A80,
    },
    Counter {
        global: 0x02107874,
        goes_in: 0x01339C80,
        comes_out: 0x01339C90,
    },
    Counter {
        global: 0x02107878,
        goes_in: 0x0133AE10,
        comes_out: 0x0133AE20,
    },
    Counter {
        global: 0x02107888,
        goes_in: 0x0133BD30,
        comes_out: 0x0133BD40,
    },
    Counter {
        global: 0x02108258,
        goes_in: 0x0135F0B0,
        comes_out: 0x0135F0C0,
    },
    Counter {
        global: 0x0210825C,
        goes_in: 0x0136DD60,
        comes_out: 0x0136DD70,
    },
    Counter {
        global: 0x02108270,
        goes_in: 0x0136F1D0,
        comes_out: 0x0136F1E0,
    },
    Counter {
        global: 0x021082CC,
        goes_in: 0x013711D0,
        comes_out: 0x013711E0,
    },
    Counter {
        global: 0x02108324,
        goes_in: 0x01374FE0,
        comes_out: 0x01374FF0,
    },
    Counter {
        global: 0x02108328,
        goes_in: 0x0137F500,
        comes_out: 0x0137F510,
    },
    Counter {
        global: 0x0210832C,
        goes_in: 0x0137F520,
        comes_out: 0x0137F530,
    },
    Counter {
        global: 0x02108330,
        goes_in: 0x0137F540,
        comes_out: 0x0137F550,
    },
    Counter {
        global: 0x02108338,
        goes_in: 0x0138D870,
        comes_out: 0x0138D880,
    },
    Counter {
        global: 0x0210833C,
        goes_in: 0x01397040,
        comes_out: 0x01397050,
    },
    Counter {
        global: 0x02108340,
        goes_in: 0x0139E630,
        comes_out: 0x0139E640,
    },
    Counter {
        global: 0x02108350,
        goes_in: 0x013A5620,
        comes_out: 0x013A5630,
    },
    Counter {
        global: 0x02108354,
        goes_in: 0x013A5C70,
        comes_out: 0x013A5C80,
    },
    Counter {
        global: 0x02108390,
        goes_in: 0x013AC800,
        comes_out: 0x013AC810,
    },
    Counter {
        global: 0x02108394,
        goes_in: 0x013B2580,
        comes_out: 0x013B2590,
    },
    Counter {
        global: 0x021083FC,
        goes_in: 0x013B54D0,
        comes_out: 0x013B54E0,
    },
    Counter {
        global: 0x02108400,
        goes_in: 0x013B6460,
        comes_out: 0x013B6470,
    },
    Counter {
        global: 0x02108408,
        goes_in: 0x013BD990,
        comes_out: 0x013BD9A0,
    },
    Counter {
        global: 0x0210840C,
        goes_in: 0x013C0440,
        comes_out: 0x013C0450,
    },
    Counter {
        global: 0x0210842C,
        goes_in: 0x013C17E0,
        comes_out: 0x013C17F0,
    },
    Counter {
        global: 0x02108430,
        goes_in: 0x013C3770,
        comes_out: 0x013C3780,
    },
    Counter {
        global: 0x02108454,
        goes_in: 0x013D1D70,
        comes_out: 0x013D1D80,
    },
    Counter {
        global: 0x02108458,
        goes_in: 0x013D2D60,
        comes_out: 0x013D2D70,
    },
    Counter {
        global: 0x0210845C,
        goes_in: 0x013E6320,
        comes_out: 0x013E6330,
    },
    Counter {
        global: 0x02108470,
        goes_in: 0x013E8FD0,
        comes_out: 0x013E8FE0,
    },
    Counter {
        global: 0x02108474,
        goes_in: 0x013EAB00,
        comes_out: 0x013EAB10,
    },
    Counter {
        global: 0x02108478,
        goes_in: 0x013EB640,
        comes_out: 0x013EB650,
    },
    Counter {
        global: 0x02108490,
        goes_in: 0x013EE770,
        comes_out: 0x013EE780,
    },
    Counter {
        global: 0x02108494,
        goes_in: 0x013F0DD0,
        comes_out: 0x013F0DE0,
    },
    Counter {
        global: 0x02108498,
        goes_in: 0x013F5850,
        comes_out: 0x013F5860,
    },
    Counter {
        global: 0x0210849C,
        goes_in: 0x013F67E0,
        comes_out: 0x013F67F0,
    },
    Counter {
        global: 0x021084A0,
        goes_in: 0x013F8FA0,
        comes_out: 0x013F8FB0,
    },
    Counter {
        global: 0x021084A4,
        goes_in: 0x013FA230,
        comes_out: 0x013FA240,
    },
    Counter {
        global: 0x021084A8,
        goes_in: 0x013FAEB0,
        comes_out: 0x013FAEC0,
    },
    Counter {
        global: 0x021084C4,
        goes_in: 0x01408220,
        comes_out: 0x01408230,
    },
    Counter {
        global: 0x021084C8,
        goes_in: 0x01408CC0,
        comes_out: 0x01408CD0,
    },
    Counter {
        global: 0x021084CC,
        goes_in: 0x0140A590,
        comes_out: 0x0140A5A0,
    },
    Counter {
        global: 0x021084D0,
        goes_in: 0x0140A680,
        comes_out: 0x0140A690,
    },
    Counter {
        global: 0x021084D4,
        goes_in: 0x0140B560,
        comes_out: 0x0140B570,
    },
    Counter {
        global: 0x021084E0,
        goes_in: 0x0140CA80,
        comes_out: 0x0140CA90,
    },
    Counter {
        global: 0x021084E4,
        goes_in: 0x0140F7E0,
        comes_out: 0x0140F7F0,
    },
    Counter {
        global: 0x021084E8,
        goes_in: 0x01411FF0,
        comes_out: 0x01412000,
    },
    Counter {
        global: 0x0210A4F8,
        goes_in: 0x014138A0,
        comes_out: 0x014138B0,
    },
    Counter {
        global: 0x0210A4FC,
        goes_in: 0x01416910,
        comes_out: 0x01416920,
    },
    Counter {
        global: 0x0210A508,
        goes_in: 0x01419CE0,
        comes_out: 0x01419CF0,
    },
    Counter {
        global: 0x0210C50C,
        goes_in: 0x0141B5E0,
        comes_out: 0x0141B5F0,
    },
    Counter {
        global: 0x0210C510,
        goes_in: 0x0141CCB0,
        comes_out: 0x0141CCC0,
    },
    Counter {
        global: 0x0210C514,
        goes_in: 0x0141D780,
        comes_out: 0x0141D790,
    },
    Counter {
        global: 0x0210C518,
        goes_in: 0x0141F220,
        comes_out: 0x0141F230,
    },
    Counter {
        global: 0x0210C51C,
        goes_in: 0x01427A40,
        comes_out: 0x01427A50,
    },
    Counter {
        global: 0x0210C520,
        goes_in: 0x01428190,
        comes_out: 0x014281A0,
    },
    Counter {
        global: 0x0210C524,
        goes_in: 0x014287E0,
        comes_out: 0x014287F0,
    },
    Counter {
        global: 0x0210C560,
        goes_in: 0x01429570,
        comes_out: 0x01429580,
    },
    Counter {
        global: 0x0210C564,
        goes_in: 0x0142AB40,
        comes_out: 0x0142AB50,
    },
    Counter {
        global: 0x0210C578,
        goes_in: 0x01437C00,
        comes_out: 0x01437C10,
    },
    Counter {
        global: 0x0210E4C4,
        goes_in: 0x014389B0,
        comes_out: 0x014389C0,
    },
    Counter {
        global: 0x0210E4C8,
        goes_in: 0x014398E0,
        comes_out: 0x014398F0,
    },
    Counter {
        global: 0x0210E4CC,
        goes_in: 0x014407A0,
        comes_out: 0x014407B0,
    },
    Counter {
        global: 0x0210E4D8,
        goes_in: 0x01444880,
        comes_out: 0x01444890,
    },
    Counter {
        global: 0x0210E4EC,
        goes_in: 0x014488E0,
        comes_out: 0x014488F0,
    },
    Counter {
        global: 0x0210E4F0,
        goes_in: 0x014493E0,
        comes_out: 0x014493F0,
    },
    Counter {
        global: 0x0210EA08,
        goes_in: 0x0144C1A0,
        comes_out: 0x0144C1B0,
    },
    Counter {
        global: 0x0210EA20,
        goes_in: 0x01460940,
        comes_out: 0x01460950,
    },
    Counter {
        global: 0x0210EA58,
        goes_in: 0x01466E60,
        comes_out: 0x01466E70,
    },
    Counter {
        global: 0x0210EA5C,
        goes_in: 0x0146CA30,
        comes_out: 0x0146CA40,
    },
    Counter {
        global: 0x0210EA64,
        goes_in: 0x0146D130,
        comes_out: 0x0146D140,
    },
    Counter {
        global: 0x0210EA68,
        goes_in: 0x01471510,
        comes_out: 0x01471520,
    },
    Counter {
        global: 0x0210EA6C,
        goes_in: 0x01473C80,
        comes_out: 0x01473C90,
    },
    Counter {
        global: 0x0210EA70,
        goes_in: 0x01474C00,
        comes_out: 0x01474C10,
    },
    Counter {
        global: 0x0210EA74,
        goes_in: 0x014753D0,
        comes_out: 0x014753E0,
    },
    Counter {
        global: 0x0210EA78,
        goes_in: 0x01475C50,
        comes_out: 0x01475C60,
    },
    Counter {
        global: 0x0210EA7C,
        goes_in: 0x01476A50,
        comes_out: 0x01476A60,
    },
    Counter {
        global: 0x0210EA80,
        goes_in: 0x01479DB0,
        comes_out: 0x01479DC0,
    },
    Counter {
        global: 0x0210EA88,
        goes_in: 0x01483B10,
        comes_out: 0x01483B20,
    },
    Counter {
        global: 0x0210EAC8,
        goes_in: 0x0149CED0,
        comes_out: 0x0149CEE0,
    },
    Counter {
        global: 0x0210EACC,
        goes_in: 0x0149EFD0,
        comes_out: 0x0149EFE0,
    },
    Counter {
        global: 0x0210EAD8,
        goes_in: 0x014A1220,
        comes_out: 0x014A1230,
    },
    Counter {
        global: 0x0210EAF4,
        goes_in: 0x014AF670,
        comes_out: 0x014AF680,
    },
    Counter {
        global: 0x0210EB08,
        goes_in: 0x014B6940,
        comes_out: 0x014B6950,
    },
    Counter {
        global: 0x0210EB18,
        goes_in: 0x014B7D30,
        comes_out: 0x014B7D40,
    },
    Counter {
        global: 0x0210EB1C,
        goes_in: 0x014B8330,
        comes_out: 0x014B8340,
    },
    Counter {
        global: 0x0210EB24,
        goes_in: 0x014B9000,
        comes_out: 0x014B9010,
    },
    Counter {
        global: 0x0210EB30,
        goes_in: 0x014BA5D0,
        comes_out: 0x014BA5E0,
    },
    Counter {
        global: 0x0210EB54,
        goes_in: 0x014BC3C0,
        comes_out: 0x014BC3D0,
    },
    Counter {
        global: 0x0210EB60,
        goes_in: 0x014BCAF0,
        comes_out: 0x014BCB00,
    },
    Counter {
        global: 0x0210EB70,
        goes_in: 0x014BF180,
        comes_out: 0x014BF190,
    },
    Counter {
        global: 0x0210EB9C,
        goes_in: 0x014C5330,
        comes_out: 0x014C5340,
    },
    Counter {
        global: 0x0210EBA0,
        goes_in: 0x014C7670,
        comes_out: 0x014C7680,
    },
    Counter {
        global: 0x0210EBA4,
        goes_in: 0x014CFB60,
        comes_out: 0x014CFB70,
    },
    Counter {
        global: 0x0210EBA8,
        goes_in: 0x014D9F60,
        comes_out: 0x014D9F70,
    },
    Counter {
        global: 0x0210EBAC,
        goes_in: 0x014DB2E0,
        comes_out: 0x014DB2F0,
    },
    Counter {
        global: 0x0210EBB0,
        goes_in: 0x014E7690,
        comes_out: 0x014E76A0,
    },
    Counter {
        global: 0x0210EBB4,
        goes_in: 0x014EAD10,
        comes_out: 0x014EAD20,
    },
    Counter {
        global: 0x0210EBB8,
        goes_in: 0x014ED9C0,
        comes_out: 0x014ED9D0,
    },
    Counter {
        global: 0x0210EBBC,
        goes_in: 0x014EF780,
        comes_out: 0x014EF790,
    },
    Counter {
        global: 0x0210EBC0,
        goes_in: 0x014F46A0,
        comes_out: 0x014F46B0,
    },
    Counter {
        global: 0x0210EBC4,
        goes_in: 0x014F4EA0,
        comes_out: 0x014F4EB0,
    },
    Counter {
        global: 0x0210EBC8,
        goes_in: 0x014F7290,
        comes_out: 0x014F72A0,
    },
    Counter {
        global: 0x0210EBCC,
        goes_in: 0x014F7C20,
        comes_out: 0x014F7C30,
    },
    Counter {
        global: 0x0210EBD0,
        goes_in: 0x014F8530,
        comes_out: 0x014F8540,
    },
    Counter {
        global: 0x0210EBD4,
        goes_in: 0x014F89D0,
        comes_out: 0x014F89E0,
    },
    Counter {
        global: 0x0210EBE0,
        goes_in: 0x014F9C00,
        comes_out: 0x014F9C10,
    },
    Counter {
        global: 0x0210EBE4,
        goes_in: 0x014F9E60,
        comes_out: 0x014F9E70,
    },
    Counter {
        global: 0x0210EBE8,
        goes_in: 0x014F9E80,
        comes_out: 0x014F9E90,
    },
    Counter {
        global: 0x0210EBEC,
        goes_in: 0x014FAE00,
        comes_out: 0x014FAE10,
    },
    Counter {
        global: 0x0210EBF8,
        goes_in: 0x014FC010,
        comes_out: 0x014FC020,
    },
    Counter {
        global: 0x0210EC10,
        goes_in: 0x015008B0,
        comes_out: 0x015008C0,
    },
    Counter {
        global: 0x0210EC20,
        goes_in: 0x01504BE0,
        comes_out: 0x01504BF0,
    },
    Counter {
        global: 0x0210EC4C,
        goes_in: 0x01509C60,
        comes_out: 0x01509C70,
    },
    Counter {
        global: 0x0210EC50,
        goes_in: 0x0150A4F0,
        comes_out: 0x0150A500,
    },
    Counter {
        global: 0x0210EC54,
        goes_in: 0x0150A510,
        comes_out: 0x0150A520,
    },
    Counter {
        global: 0x0210EC58,
        goes_in: 0x015135B0,
        comes_out: 0x015135C0,
    },
    Counter {
        global: 0x0210EC5C,
        goes_in: 0x01519660,
        comes_out: 0x01519670,
    },
    Counter {
        global: 0x0210EC60,
        goes_in: 0x01519680,
        comes_out: 0x01519690,
    },
    Counter {
        global: 0x0210EC64,
        goes_in: 0x01521820,
        comes_out: 0x01521830,
    },
    Counter {
        global: 0x0210ED60,
        goes_in: 0x01527800,
        comes_out: 0x01527810,
    },
    Counter {
        global: 0x0210EDC8,
        goes_in: 0x01527820,
        comes_out: 0x01527830,
    },
    Counter {
        global: 0x0210EDCC,
        goes_in: 0x01528500,
        comes_out: 0x01528510,
    },
    Counter {
        global: 0x0210EDD0,
        goes_in: 0x0152A510,
        comes_out: 0x0152A520,
    },
    Counter {
        global: 0x0210EDD4,
        goes_in: 0x0152BD60,
        comes_out: 0x0152BD70,
    },
    Counter {
        global: 0x0210EDE0,
        goes_in: 0x01534490,
        comes_out: 0x015344A0,
    },
    Counter {
        global: 0x0210EDE4,
        goes_in: 0x01535EB0,
        comes_out: 0x01535EC0,
    },
    Counter {
        global: 0x0210EDE8,
        goes_in: 0x01538630,
        comes_out: 0x01538640,
    },
    Counter {
        global: 0x0210EE18,
        goes_in: 0x0153C4C0,
        comes_out: 0x0153C4D0,
    },
    Counter {
        global: 0x0210EE1C,
        goes_in: 0x0153C4E0,
        comes_out: 0x0153C4F0,
    },
    Counter {
        global: 0x0210EE20,
        goes_in: 0x0153DA70,
        comes_out: 0x0153DA80,
    },
    Counter {
        global: 0x0210EE28,
        goes_in: 0x0153DC70,
        comes_out: 0x0153DC80,
    },
    Counter {
        global: 0x0210EE2C,
        goes_in: 0x01540690,
        comes_out: 0x015406A0,
    },
    Counter {
        global: 0x0210EE30,
        goes_in: 0x01541C10,
        comes_out: 0x01541C20,
    },
    Counter {
        global: 0x0210EE34,
        goes_in: 0x015425C0,
        comes_out: 0x015425D0,
    },
    Counter {
        global: 0x0210EE38,
        goes_in: 0x01542C80,
        comes_out: 0x01542C90,
    },
    Counter {
        global: 0x0210EE3C,
        goes_in: 0x01543360,
        comes_out: 0x01543370,
    },
    Counter {
        global: 0x0210EE40,
        goes_in: 0x015453A0,
        comes_out: 0x015453B0,
    },
    Counter {
        global: 0x0210EE44,
        goes_in: 0x015453E0,
        comes_out: 0x015453F0,
    },
    Counter {
        global: 0x0210EE48,
        goes_in: 0x01546500,
        comes_out: 0x01546510,
    },
    Counter {
        global: 0x0210EE74,
        goes_in: 0x01576480,
        comes_out: 0x01576490,
    },
    Counter {
        global: 0x0210EEA4,
        goes_in: 0x01583150,
        comes_out: 0x01583160,
    },
    Counter {
        global: 0x0210EEA8,
        goes_in: 0x01593F50,
        comes_out: 0x01593F60,
    },
    Counter {
        global: 0x0210EEF8,
        goes_in: 0x01594990,
        comes_out: 0x015949A0,
    },
    Counter {
        global: 0x0210EEFC,
        goes_in: 0x01594BF0,
        comes_out: 0x01594C00,
    },
    Counter {
        global: 0x0210EF04,
        goes_in: 0x01595B30,
        comes_out: 0x01595B40,
    },
    Counter {
        global: 0x0210EF08,
        goes_in: 0x015964D0,
        comes_out: 0x015964E0,
    },
    Counter {
        global: 0x0210EF0C,
        goes_in: 0x015A7750,
        comes_out: 0x015A7760,
    },
    Counter {
        global: 0x0210EF10,
        goes_in: 0x015A7830,
        comes_out: 0x015A7840,
    },
    Counter {
        global: 0x0210EF20,
        goes_in: 0x015B60F0,
        comes_out: 0x015B6100,
    },
    Counter {
        global: 0x0210F77C,
        goes_in: 0x015E57C0,
        comes_out: 0x015E57D0,
    },
    Counter {
        global: 0x0210F780,
        goes_in: 0x015E6010,
        comes_out: 0x015E6020,
    },
    Counter {
        global: 0x0210F790,
        goes_in: 0x015E74C0,
        comes_out: 0x015E74D0,
    },
    Counter {
        global: 0x0210F794,
        goes_in: 0x015E7B40,
        comes_out: 0x015E7B50,
    },
    Counter {
        global: 0x0210F79C,
        goes_in: 0x015E84D0,
        comes_out: 0x015E84E0,
    },
    Counter {
        global: 0x0210F7A0,
        goes_in: 0x015E9D10,
        comes_out: 0x015E9D20,
    },
    Counter {
        global: 0x0210F7C8,
        goes_in: 0x015E9F40,
        comes_out: 0x015E9F50,
    },
    Counter {
        global: 0x0210F7D8,
        goes_in: 0x015EA370,
        comes_out: 0x015EA380,
    },
    Counter {
        global: 0x0210F7DC,
        goes_in: 0x015EAB80,
        comes_out: 0x015EAB90,
    },
    Counter {
        global: 0x0210F7E8,
        goes_in: 0x015EB300,
        comes_out: 0x015EB310,
    },
    Counter {
        global: 0x0210F7EC,
        goes_in: 0x015EC390,
        comes_out: 0x015EC3A0,
    },
    Counter {
        global: 0x0210F7F0,
        goes_in: 0x015EF370,
        comes_out: 0x015EF380,
    },
    Counter {
        global: 0x0210F800,
        goes_in: 0x01611170,
        comes_out: 0x01611180,
    },
    Counter {
        global: 0x0210F808,
        goes_in: 0x01612DD0,
        comes_out: 0x01612DE0,
    },
    Counter {
        global: 0x0210F810,
        goes_in: 0x01616D10,
        comes_out: 0x01616D20,
    },
    Counter {
        global: 0x0210F814,
        goes_in: 0x0161A170,
        comes_out: 0x0161A180,
    },
    Counter {
        global: 0x0210F81C,
        goes_in: 0x0161B560,
        comes_out: 0x0161B570,
    },
    Counter {
        global: 0x0210F820,
        goes_in: 0x0161D070,
        comes_out: 0x0161D080,
    },
    Counter {
        global: 0x0210F828,
        goes_in: 0x0161EAE0,
        comes_out: 0x0161EAF0,
    },
    Counter {
        global: 0x0210F82C,
        goes_in: 0x0161F2D0,
        comes_out: 0x0161F2E0,
    },
    Counter {
        global: 0x0210F830,
        goes_in: 0x0161F550,
        comes_out: 0x0161F560,
    },
    Counter {
        global: 0x0210F860,
        goes_in: 0x0164BAA0,
        comes_out: 0x0164BAB0,
    },
    Counter {
        global: 0x0210F864,
        goes_in: 0x01655450,
        comes_out: 0x01655460,
    },
    Counter {
        global: 0x0210F868,
        goes_in: 0x0165ADF0,
        comes_out: 0x0165AE00,
    },
    Counter {
        global: 0x0210F884,
        goes_in: 0x01669820,
        comes_out: 0x01669830,
    },
    Counter {
        global: 0x0210F8D0,
        goes_in: 0x0167DB40,
        comes_out: 0x0167DB50,
    },
    Counter {
        global: 0x0210F8D4,
        goes_in: 0x01690FC0,
        comes_out: 0x01690FD0,
    },
    Counter {
        global: 0x0210F8D8,
        goes_in: 0x01694660,
        comes_out: 0x01694670,
    },
    Counter {
        global: 0x0210F8DC,
        goes_in: 0x01697C70,
        comes_out: 0x01697C80,
    },
    Counter {
        global: 0x0210F8E0,
        goes_in: 0x01698DB0,
        comes_out: 0x01698DC0,
    },
    Counter {
        global: 0x0210F8E4,
        goes_in: 0x0169AA40,
        comes_out: 0x0169AA50,
    },
    Counter {
        global: 0x0210F8E8,
        goes_in: 0x0169C730,
        comes_out: 0x0169C740,
    },
    Counter {
        global: 0x0210F8EC,
        goes_in: 0x0169DEA0,
        comes_out: 0x0169DEB0,
    },
    Counter {
        global: 0x0210F8F0,
        goes_in: 0x0169F6B0,
        comes_out: 0x0169F6C0,
    },
    Counter {
        global: 0x0210FDA8,
        goes_in: 0x016AE980,
        comes_out: 0x016AE990,
    },
    Counter {
        global: 0x0210FDAC,
        goes_in: 0x016AF3D0,
        comes_out: 0x016AF3E0,
    },
    Counter {
        global: 0x0210FDB0,
        goes_in: 0x016B1BC0,
        comes_out: 0x016B1BD0,
    },
    Counter {
        global: 0x0210FDB4,
        goes_in: 0x016B2C60,
        comes_out: 0x016B2C70,
    },
    Counter {
        global: 0x0210FDB8,
        goes_in: 0x016D01F0,
        comes_out: 0x016D0200,
    },
    Counter {
        global: 0x0210FDBC,
        goes_in: 0x016D2790,
        comes_out: 0x016D27A0,
    },
    Counter {
        global: 0x0210FDC0,
        goes_in: 0x016D5000,
        comes_out: 0x016D5010,
    },
    Counter {
        global: 0x0210FDC4,
        goes_in: 0x016D7020,
        comes_out: 0x016D7030,
    },
    Counter {
        global: 0x0210FEC4,
        goes_in: 0x016DEA00,
        comes_out: 0x016DEA10,
    },
    Counter {
        global: 0x0210FEC8,
        goes_in: 0x016E8FB0,
        comes_out: 0x016E8FC0,
    },
    Counter {
        global: 0x0210FF38,
        goes_in: 0x016FB790,
        comes_out: 0x016FB7A0,
    },
    Counter {
        global: 0x0210FF4C,
        goes_in: 0x016FCE90,
        comes_out: 0x016FCEA0,
    },
    Counter {
        global: 0x0210FF50,
        goes_in: 0x016FD820,
        comes_out: 0x016FD830,
    },
    Counter {
        global: 0x0210FF54,
        goes_in: 0x016FEB40,
        comes_out: 0x016FEB50,
    },
    Counter {
        global: 0x0210FF58,
        goes_in: 0x01701280,
        comes_out: 0x01701290,
    },
    Counter {
        global: 0x0210FF68,
        goes_in: 0x017058D0,
        comes_out: 0x017058E0,
    },
    Counter {
        global: 0x0210FF6C,
        goes_in: 0x01706C10,
        comes_out: 0x01706C20,
    },
    Counter {
        global: 0x0210FF70,
        goes_in: 0x017093E0,
        comes_out: 0x017093F0,
    },
    Counter {
        global: 0x0210FF74,
        goes_in: 0x0170B950,
        comes_out: 0x0170B960,
    },
    Counter {
        global: 0x0210FFA0,
        goes_in: 0x017302B0,
        comes_out: 0x017302C0,
    },
    Counter {
        global: 0x0210FFA4,
        goes_in: 0x0175B080,
        comes_out: 0x0175B090,
    },
    Counter {
        global: 0x0210FFF0,
        goes_in: 0x0175F810,
        comes_out: 0x0175F820,
    },
    Counter {
        global: 0x0210FFF4,
        goes_in: 0x017793C0,
        comes_out: 0x017793D0,
    },
    Counter {
        global: 0x02110000,
        goes_in: 0x0177C370,
        comes_out: 0x0177C380,
    },
    Counter {
        global: 0x02110004,
        goes_in: 0x0177E060,
        comes_out: 0x0177E070,
    },
    Counter {
        global: 0x02110008,
        goes_in: 0x0177EAD0,
        comes_out: 0x0177EAE0,
    },
    Counter {
        global: 0x02110088,
        goes_in: 0x01781C40,
        comes_out: 0x01781C50,
    },
    Counter {
        global: 0x0211008C,
        goes_in: 0x017822D0,
        comes_out: 0x017822E0,
    },
    Counter {
        global: 0x02110090,
        goes_in: 0x01783340,
        comes_out: 0x01783350,
    },
    Counter {
        global: 0x02110094,
        goes_in: 0x01783360,
        comes_out: 0x01783370,
    },
    Counter {
        global: 0x02110098,
        goes_in: 0x017839A0,
        comes_out: 0x017839B0,
    },
    Counter {
        global: 0x0211009C,
        goes_in: 0x01783F40,
        comes_out: 0x01783F50,
    },
    Counter {
        global: 0x021100A0,
        goes_in: 0x01785850,
        comes_out: 0x01785860,
    },
    Counter {
        global: 0x021100A4,
        goes_in: 0x01789190,
        comes_out: 0x017891A0,
    },
    Counter {
        global: 0x021100AC,
        goes_in: 0x017A1210,
        comes_out: 0x017A1220,
    },
    Counter {
        global: 0x021100B0,
        goes_in: 0x017A2570,
        comes_out: 0x017A2580,
    },
    Counter {
        global: 0x021100B4,
        goes_in: 0x017A6AD0,
        comes_out: 0x017A6AE0,
    },
    Counter {
        global: 0x021100B8,
        goes_in: 0x017B8630,
        comes_out: 0x017B8640,
    },
    Counter {
        global: 0x021100D4,
        goes_in: 0x017B9BE0,
        comes_out: 0x017B9BF0,
    },
    Counter {
        global: 0x021100D8,
        goes_in: 0x017BC420,
        comes_out: 0x017BC430,
    },
    Counter {
        global: 0x021100DC,
        goes_in: 0x017BC9E0,
        comes_out: 0x017BC9F0,
    },
    Counter {
        global: 0x021100E0,
        goes_in: 0x017BDB60,
        comes_out: 0x017BDB70,
    },
    Counter {
        global: 0x021100E4,
        goes_in: 0x017BF3E0,
        comes_out: 0x017BF3F0,
    },
    Counter {
        global: 0x021100E8,
        goes_in: 0x017BFC80,
        comes_out: 0x017BFC90,
    },
    Counter {
        global: 0x021100EC,
        goes_in: 0x017C51B0,
        comes_out: 0x017C51C0,
    },
    Counter {
        global: 0x021100F4,
        goes_in: 0x017CB030,
        comes_out: 0x017CB040,
    },
    Counter {
        global: 0x02110108,
        goes_in: 0x017D4300,
        comes_out: 0x017D4310,
    },
    Counter {
        global: 0x02110110,
        goes_in: 0x017DE710,
        comes_out: 0x017DE720,
    },
    Counter {
        global: 0x02110114,
        goes_in: 0x017DF300,
        comes_out: 0x017DF310,
    },
    Counter {
        global: 0x0211011C,
        goes_in: 0x017EA800,
        comes_out: 0x017EA810,
    },
    Counter {
        global: 0x02110120,
        goes_in: 0x017EBBC0,
        comes_out: 0x017EBBD0,
    },
    Counter {
        global: 0x02110124,
        goes_in: 0x017EC2C0,
        comes_out: 0x017EC2D0,
    },
    Counter {
        global: 0x02110160,
        goes_in: 0x017F3530,
        comes_out: 0x017F3540,
    },
    Counter {
        global: 0x02110164,
        goes_in: 0x017F5420,
        comes_out: 0x017F5430,
    },
    Counter {
        global: 0x02110188,
        goes_in: 0x017FEAA0,
        comes_out: 0x017FEAB0,
    },
    Counter {
        global: 0x0211018C,
        goes_in: 0x017FF690,
        comes_out: 0x017FF6A0,
    },
    Counter {
        global: 0x021101A0,
        goes_in: 0x017FFFC0,
        comes_out: 0x017FFFD0,
    },
    Counter {
        global: 0x021101B0,
        goes_in: 0x01800710,
        comes_out: 0x01800720,
    },
    Counter {
        global: 0x021101B4,
        goes_in: 0x01801620,
        comes_out: 0x01801630,
    },
    Counter {
        global: 0x021101B8,
        goes_in: 0x01805D30,
        comes_out: 0x01805D40,
    },
    Counter {
        global: 0x021101BC,
        goes_in: 0x01807E70,
        comes_out: 0x01807E80,
    },
    Counter {
        global: 0x02110264,
        goes_in: 0x01808A20,
        comes_out: 0x01808A30,
    },
    Counter {
        global: 0x0211026C,
        goes_in: 0x01810250,
        comes_out: 0x01810260,
    },
    Counter {
        global: 0x02110270,
        goes_in: 0x018148C0,
        comes_out: 0x018148D0,
    },
    Counter {
        global: 0x02110274,
        goes_in: 0x018152C0,
        comes_out: 0x018152D0,
    },
    Counter {
        global: 0x02110278,
        goes_in: 0x01817210,
        comes_out: 0x01817220,
    },
    Counter {
        global: 0x021102A8,
        goes_in: 0x01818E70,
        comes_out: 0x01818E80,
    },
    Counter {
        global: 0x021102AC,
        goes_in: 0x01819470,
        comes_out: 0x01819480,
    },
    Counter {
        global: 0x021102B0,
        goes_in: 0x0181BDD0,
        comes_out: 0x0181BDE0,
    },
    Counter {
        global: 0x021102B4,
        goes_in: 0x0181CD50,
        comes_out: 0x0181CD60,
    },
    Counter {
        global: 0x021102B8,
        goes_in: 0x0181FD40,
        comes_out: 0x0181FD50,
    },
    Counter {
        global: 0x021102BC,
        goes_in: 0x018226E0,
        comes_out: 0x018226F0,
    },
    Counter {
        global: 0x021102D0,
        goes_in: 0x0182D260,
        comes_out: 0x0182D270,
    },
    Counter {
        global: 0x021102D4,
        goes_in: 0x01833340,
        comes_out: 0x01833350,
    },
    Counter {
        global: 0x021102D8,
        goes_in: 0x01833F00,
        comes_out: 0x01833F10,
    },
    Counter {
        global: 0x021102DC,
        goes_in: 0x0183DA80,
        comes_out: 0x0183DA90,
    },
    Counter {
        global: 0x021102E4,
        goes_in: 0x01851F50,
        comes_out: 0x01851F60,
    },
    Counter {
        global: 0x021102E8,
        goes_in: 0x01853600,
        comes_out: 0x01853610,
    },
    Counter {
        global: 0x021102EC,
        goes_in: 0x018553F0,
        comes_out: 0x01855400,
    },
    Counter {
        global: 0x02110310,
        goes_in: 0x01861F40,
        comes_out: 0x01861F50,
    },
    Counter {
        global: 0x02110320,
        goes_in: 0x0186A170,
        comes_out: 0x0186A180,
    },
    Counter {
        global: 0x02110324,
        goes_in: 0x0186A190,
        comes_out: 0x0186A1A0,
    },
    Counter {
        global: 0x02110510,
        goes_in: 0x0186C0C0,
        comes_out: 0x0186C0D0,
    },
    Counter {
        global: 0x0211051C,
        goes_in: 0x018722E0,
        comes_out: 0x018722F0,
    },
    Counter {
        global: 0x02110524,
        goes_in: 0x01874FE0,
        comes_out: 0x01874FF0,
    },
    Counter {
        global: 0x0211062C,
        goes_in: 0x0187BD80,
        comes_out: 0x0187BD90,
    },
    Counter {
        global: 0x02110638,
        goes_in: 0x01888E00,
        comes_out: 0x01888E10,
    },
    Counter {
        global: 0x02110640,
        goes_in: 0x018938E0,
        comes_out: 0x018938F0,
    },
    Counter {
        global: 0x02110644,
        goes_in: 0x01894AF0,
        comes_out: 0x01894B00,
    },
    Counter {
        global: 0x02110648,
        goes_in: 0x0189ACE0,
        comes_out: 0x0189ACF0,
    },
    Counter {
        global: 0x02110658,
        goes_in: 0x0189CFD0,
        comes_out: 0x0189CFE0,
    },
    Counter {
        global: 0x02110698,
        goes_in: 0x018B4920,
        comes_out: 0x018B4930,
    },
    Counter {
        global: 0x0211069C,
        goes_in: 0x018C3580,
        comes_out: 0x018C3590,
    },
    Counter {
        global: 0x021106A0,
        goes_in: 0x018D0D40,
        comes_out: 0x018D0D50,
    },
    Counter {
        global: 0x021106A4,
        goes_in: 0x018D11B0,
        comes_out: 0x018D11C0,
    },
    Counter {
        global: 0x021106A8,
        goes_in: 0x018D1910,
        comes_out: 0x018D1920,
    },
    Counter {
        global: 0x021106C8,
        goes_in: 0x018DD210,
        comes_out: 0x018DD220,
    },
    Counter {
        global: 0x021106D0,
        goes_in: 0x018E1530,
        comes_out: 0x018E1540,
    },
    Counter {
        global: 0x021106E4,
        goes_in: 0x018FBF20,
        comes_out: 0x018FBF30,
    },
    Counter {
        global: 0x02110750,
        goes_in: 0x01982AA0,
        comes_out: 0x01982AB0,
    },
    Counter {
        global: 0x02110754,
        goes_in: 0x01984A10,
        comes_out: 0x01984A20,
    },
    Counter {
        global: 0x021107A4,
        goes_in: 0x019B9E10,
        comes_out: 0x019B9E20,
    },
    Counter {
        global: 0x021107A8,
        goes_in: 0x019BB6B0,
        comes_out: 0x019BB6C0,
    },
    Counter {
        global: 0x021107AC,
        goes_in: 0x019BF0E0,
        comes_out: 0x019BF0F0,
    },
    Counter {
        global: 0x021107B0,
        goes_in: 0x019CC680,
        comes_out: 0x019CC690,
    },
    Counter {
        global: 0x021107C0,
        goes_in: 0x019CE880,
        comes_out: 0x019CE890,
    },
    Counter {
        global: 0x021107C4,
        goes_in: 0x019CF740,
        comes_out: 0x019CF750,
    },
    Counter {
        global: 0x021107C8,
        goes_in: 0x019D2520,
        comes_out: 0x019D2530,
    },
    Counter {
        global: 0x021107CC,
        goes_in: 0x019D70B0,
        comes_out: 0x019D70C0,
    },
    Counter {
        global: 0x021107D8,
        goes_in: 0x019D7A50,
        comes_out: 0x019D7A60,
    },
    Counter {
        global: 0x021107DC,
        goes_in: 0x019D8240,
        comes_out: 0x019D8250,
    },
    Counter {
        global: 0x021107E0,
        goes_in: 0x019DBA40,
        comes_out: 0x019DBA50,
    },
    Counter {
        global: 0x021107E4,
        goes_in: 0x019DC850,
        comes_out: 0x019DC860,
    },
    Counter {
        global: 0x021107E8,
        goes_in: 0x019E6640,
        comes_out: 0x019E6650,
    },
    Counter {
        global: 0x021107EC,
        goes_in: 0x019EA940,
        comes_out: 0x019EA950,
    },
    Counter {
        global: 0x021107F0,
        goes_in: 0x019EC3D0,
        comes_out: 0x019EC3E0,
    },
    Counter {
        global: 0x021107F4,
        goes_in: 0x01A23B80,
        comes_out: 0x01A23B90,
    },
    Counter {
        global: 0x021107F8,
        goes_in: 0x01A27270,
        comes_out: 0x01A27280,
    },
    Counter {
        global: 0x021107FC,
        goes_in: 0x01A29320,
        comes_out: 0x01A29330,
    },
    Counter {
        global: 0x0211080C,
        goes_in: 0x01A2D380,
        comes_out: 0x01A2D390,
    },
    Counter {
        global: 0x02110818,
        goes_in: 0x01A2DE80,
        comes_out: 0x01A2DE90,
    },
    Counter {
        global: 0x0211081C,
        goes_in: 0x01A2E4A0,
        comes_out: 0x01A2E4B0,
    },
    Counter {
        global: 0x02110820,
        goes_in: 0x01A30940,
        comes_out: 0x01A30950,
    },
    Counter {
        global: 0x02110824,
        goes_in: 0x01A30960,
        comes_out: 0x01A30970,
    },
    Counter {
        global: 0x0211082C,
        goes_in: 0x01A5C100,
        comes_out: 0x01A5C110,
    },
    Counter {
        global: 0x02110830,
        goes_in: 0x01A64360,
        comes_out: 0x01A64370,
    },
    Counter {
        global: 0x02110834,
        goes_in: 0x01A64840,
        comes_out: 0x01A64850,
    },
    Counter {
        global: 0x02110840,
        goes_in: 0x01A66490,
        comes_out: 0x01A664A0,
    },
    Counter {
        global: 0x02110844,
        goes_in: 0x01A69C60,
        comes_out: 0x01A69C70,
    },
    Counter {
        global: 0x02110A44,
        goes_in: 0x01AA21E0,
        comes_out: 0x01AA21F0,
    },
    Counter {
        global: 0x02110A48,
        goes_in: 0x01AA22A0,
        comes_out: 0x01AA22B0,
    },
    Counter {
        global: 0x02110A4C,
        goes_in: 0x01AA3260,
        comes_out: 0x01AA3270,
    },
    Counter {
        global: 0x02110A50,
        goes_in: 0x01AA34F0,
        comes_out: 0x01AA3500,
    },
    Counter {
        global: 0x02110A78,
        goes_in: 0x01ABEC20,
        comes_out: 0x01ABEC30,
    },
    Counter {
        global: 0x02110A7C,
        goes_in: 0x01AC4680,
        comes_out: 0x01AC4690,
    },
    Counter {
        global: 0x02110A80,
        goes_in: 0x01AC51C0,
        comes_out: 0x01AC51D0,
    },
    Counter {
        global: 0x02110A84,
        goes_in: 0x01AC5D20,
        comes_out: 0x01AC5D30,
    },
    Counter {
        global: 0x02110A88,
        goes_in: 0x01AC62A0,
        comes_out: 0x01AC62B0,
    },
    Counter {
        global: 0x02110A8C,
        goes_in: 0x01AC8240,
        comes_out: 0x01AC8250,
    },
    Counter {
        global: 0x02110A90,
        goes_in: 0x01AC8B10,
        comes_out: 0x01AC8B20,
    },
    Counter {
        global: 0x02110A94,
        goes_in: 0x01AC9560,
        comes_out: 0x01AC9570,
    },
    Counter {
        global: 0x02110A98,
        goes_in: 0x01AE9640,
        comes_out: 0x01AE9650,
    },
    Counter {
        global: 0x02110A9C,
        goes_in: 0x01AEC050,
        comes_out: 0x01AEC060,
    },
    Counter {
        global: 0x02110AA8,
        goes_in: 0x01AEC070,
        comes_out: 0x01AEC080,
    },
    Counter {
        global: 0x02110CFC,
        goes_in: 0x01B2ACE0,
        comes_out: 0x01B2ACF0,
    },
    Counter {
        global: 0x02110D20,
        goes_in: 0x01B36CC0,
        comes_out: 0x01B36CD0,
    },
    Counter {
        global: 0x02110D24,
        goes_in: 0x01B38420,
        comes_out: 0x01B38430,
    },
    Counter {
        global: 0x02110D28,
        goes_in: 0x01B38570,
        comes_out: 0x01B38580,
    },
    Counter {
        global: 0x02110D30,
        goes_in: 0x01B449A0,
        comes_out: 0x01B449B0,
    },
    Counter {
        global: 0x02110D34,
        goes_in: 0x01B46330,
        comes_out: 0x01B46340,
    },
    Counter {
        global: 0x02110D38,
        goes_in: 0x01B47CD0,
        comes_out: 0x01B47CE0,
    },
    Counter {
        global: 0x02110D3C,
        goes_in: 0x01B490F0,
        comes_out: 0x01B49100,
    },
    Counter {
        global: 0x02110D44,
        goes_in: 0x01B4AD60,
        comes_out: 0x01B4AD70,
    },
    Counter {
        global: 0x02110D48,
        goes_in: 0x01B4B5A0,
        comes_out: 0x01B4B5B0,
    },
    Counter {
        global: 0x02110D4C,
        goes_in: 0x01B4B5C0,
        comes_out: 0x01B4B5D0,
    },
    Counter {
        global: 0x02110D50,
        goes_in: 0x01B51D60,
        comes_out: 0x01B51D70,
    },
    Counter {
        global: 0x02110D54,
        goes_in: 0x01B523A0,
        comes_out: 0x01B523B0,
    },
    Counter {
        global: 0x02110D58,
        goes_in: 0x01B54760,
        comes_out: 0x01B54770,
    },
    Counter {
        global: 0x02110D5C,
        goes_in: 0x01B54780,
        comes_out: 0x01B54790,
    },
    Counter {
        global: 0x02110D60,
        goes_in: 0x01B5A9F0,
        comes_out: 0x01B5AA00,
    },
    Counter {
        global: 0x02110D64,
        goes_in: 0x01B5EBF0,
        comes_out: 0x01B5EC00,
    },
    Counter {
        global: 0x02110D68,
        goes_in: 0x01B69B00,
        comes_out: 0x01B69B10,
    },
    Counter {
        global: 0x02110D6C,
        goes_in: 0x01B69B20,
        comes_out: 0x01B69B30,
    },
    Counter {
        global: 0x02110D70,
        goes_in: 0x01B70900,
        comes_out: 0x01B70910,
    },
    Counter {
        global: 0x02110D74,
        goes_in: 0x01B712E0,
        comes_out: 0x01B712F0,
    },
    Counter {
        global: 0x02110D78,
        goes_in: 0x01B71AA0,
        comes_out: 0x01B71AB0,
    },
    Counter {
        global: 0x02110D7C,
        goes_in: 0x01B71FA0,
        comes_out: 0x01B71FB0,
    },
    Counter {
        global: 0x02110D80,
        goes_in: 0x01B72A10,
        comes_out: 0x01B72A20,
    },
    Counter {
        global: 0x02110D84,
        goes_in: 0x01B75740,
        comes_out: 0x01B75750,
    },
    Counter {
        global: 0x02110D88,
        goes_in: 0x01B76750,
        comes_out: 0x01B76760,
    },
    Counter {
        global: 0x02110D8C,
        goes_in: 0x01B79800,
        comes_out: 0x01B79810,
    },
    Counter {
        global: 0x02110D90,
        goes_in: 0x01B7C660,
        comes_out: 0x01B7C670,
    },
    Counter {
        global: 0x02110D94,
        goes_in: 0x01B7CF80,
        comes_out: 0x01B7CF90,
    },
    Counter {
        global: 0x02110D9C,
        goes_in: 0x01B904E0,
        comes_out: 0x01B904F0,
    },
    Counter {
        global: 0x02110DA0,
        goes_in: 0x01B90D50,
        comes_out: 0x01B90D60,
    },
    Counter {
        global: 0x02110DA4,
        goes_in: 0x01B90D70,
        comes_out: 0x01B90D80,
    },
    Counter {
        global: 0x02110DA8,
        goes_in: 0x01B91550,
        comes_out: 0x01B91560,
    },
    Counter {
        global: 0x02110DB8,
        goes_in: 0x01B92B80,
        comes_out: 0x01B92B90,
    },
    Counter {
        global: 0x02110DBC,
        goes_in: 0x01B92BA0,
        comes_out: 0x01B92BB0,
    },
    Counter {
        global: 0x02110DE8,
        goes_in: 0x01B9B870,
        comes_out: 0x01B9B880,
    },
    Counter {
        global: 0x02110DEC,
        goes_in: 0x01B9D170,
        comes_out: 0x01B9D180,
    },
    Counter {
        global: 0x02111370,
        goes_in: 0x01B9FA00,
        comes_out: 0x01B9FA10,
    },
    Counter {
        global: 0x02111374,
        goes_in: 0x01B9FA20,
        comes_out: 0x01B9FA30,
    },
    Counter {
        global: 0x02111378,
        goes_in: 0x01B9FA40,
        comes_out: 0x01B9FA50,
    },
    Counter {
        global: 0x0211137C,
        goes_in: 0x01B9FA60,
        comes_out: 0x01B9FA70,
    },
    Counter {
        global: 0x02111390,
        goes_in: 0x01BA05A0,
        comes_out: 0x01BA05B0,
    },
    Counter {
        global: 0x021113A0,
        goes_in: 0x01BA4CA0,
        comes_out: 0x01BA4CB0,
    },
    Counter {
        global: 0x021113A4,
        goes_in: 0x01BA8B50,
        comes_out: 0x01BA8B60,
    },
    Counter {
        global: 0x021113A8,
        goes_in: 0x01BA9700,
        comes_out: 0x01BA9710,
    },
    Counter {
        global: 0x021113B8,
        goes_in: 0x01BAB7E0,
        comes_out: 0x01BAB7F0,
    },
    Counter {
        global: 0x021113C8,
        goes_in: 0x01BAE8B0,
        comes_out: 0x01BAE8C0,
    },
    Counter {
        global: 0x021113CC,
        goes_in: 0x01BAEED0,
        comes_out: 0x01BAEEE0,
    },
    Counter {
        global: 0x021113D0,
        goes_in: 0x01BAF4C0,
        comes_out: 0x01BAF4D0,
    },
    Counter {
        global: 0x021113D4,
        goes_in: 0x01BAF4E0,
        comes_out: 0x01BAF4F0,
    },
    Counter {
        global: 0x021113D8,
        goes_in: 0x01BB0B30,
        comes_out: 0x01BB0B40,
    },
    Counter {
        global: 0x021113DC,
        goes_in: 0x01BB40C0,
        comes_out: 0x01BB40D0,
    },
    Counter {
        global: 0x021113E0,
        goes_in: 0x01BB5090,
        comes_out: 0x01BB50A0,
    },
    Counter {
        global: 0x021113F0,
        goes_in: 0x01BB7940,
        comes_out: 0x01BB7950,
    },
    Counter {
        global: 0x021113F8,
        goes_in: 0x01BC17B0,
        comes_out: 0x01BC17C0,
    },
    Counter {
        global: 0x021113FC,
        goes_in: 0x01BC45D0,
        comes_out: 0x01BC45E0,
    },
    Counter {
        global: 0x02111428,
        goes_in: 0x01BC4A20,
        comes_out: 0x01BC4A30,
    },
    Counter {
        global: 0x0211142C,
        goes_in: 0x01BC4A40,
        comes_out: 0x01BC4A50,
    },
    Counter {
        global: 0x02111434,
        goes_in: 0x01BCDF40,
        comes_out: 0x01BCDF50,
    },
    Counter {
        global: 0x02111438,
        goes_in: 0x01BCFBD0,
        comes_out: 0x01BCFBE0,
    },
    Counter {
        global: 0x0211143C,
        goes_in: 0x01BD7B50,
        comes_out: 0x01BD7B60,
    },
    Counter {
        global: 0x02111440,
        goes_in: 0x01BD8EB0,
        comes_out: 0x01BD8EC0,
    },
    Counter {
        global: 0x02111444,
        goes_in: 0x01BDBAA0,
        comes_out: 0x01BDBAB0,
    },
    Counter {
        global: 0x02111484,
        goes_in: 0x01C0E290,
        comes_out: 0x01C0E2A0,
    },
    Counter {
        global: 0x02111488,
        goes_in: 0x01C133D0,
        comes_out: 0x01C133E0,
    },
    Counter {
        global: 0x0211148C,
        goes_in: 0x01C1B3D0,
        comes_out: 0x01C1B3E0,
    },
    Counter {
        global: 0x021114D4,
        goes_in: 0x01C28690,
        comes_out: 0x01C286A0,
    },
    Counter {
        global: 0x021114D8,
        goes_in: 0x01C28B40,
        comes_out: 0x01C28B50,
    },
    Counter {
        global: 0x021114DC,
        goes_in: 0x01C28B60,
        comes_out: 0x01C28B70,
    },
    Counter {
        global: 0x03566764,
        goes_in: 0x01C32770,
        comes_out: 0x01C32780,
    },
    Counter {
        global: 0x03566768,
        goes_in: 0x01C32EB0,
        comes_out: 0x01C32EC0,
    },
    Counter {
        global: 0x035667A0,
        goes_in: 0x01C439B0,
        comes_out: 0x01C439C0,
    },
    Counter {
        global: 0x035667A4,
        goes_in: 0x01C473D0,
        comes_out: 0x01C473E0,
    },
    Counter {
        global: 0x035667A8,
        goes_in: 0x01C48DB0,
        comes_out: 0x01C48DC0,
    },
    Counter {
        global: 0x035667AC,
        goes_in: 0x01C49A40,
        comes_out: 0x01C49A50,
    },
    Counter {
        global: 0x035667B0,
        goes_in: 0x01C4D160,
        comes_out: 0x01C4D170,
    },
    Counter {
        global: 0x03566818,
        goes_in: 0x01CB00B0,
        comes_out: 0x01CB00C0,
    },
    Counter {
        global: 0x0356681C,
        goes_in: 0x01CB2140,
        comes_out: 0x01CB2150,
    },
    Counter {
        global: 0x03566880,
        goes_in: 0x01CCBDA0,
        comes_out: 0x01CCBDB0,
    },
    Counter {
        global: 0x03566884,
        goes_in: 0x01CD9040,
        comes_out: 0x01CD9050,
    },
    Counter {
        global: 0x03566888,
        goes_in: 0x01CDD150,
        comes_out: 0x01CDD160,
    },
    Counter {
        global: 0x0356688C,
        goes_in: 0x01CEAC60,
        comes_out: 0x01CEAC70,
    },
    Counter {
        global: 0x03566890,
        goes_in: 0x01CEFD70,
        comes_out: 0x01CEFD80,
    },
    Counter {
        global: 0x035668A4,
        goes_in: 0x01CF1050,
        comes_out: 0x01CF1060,
    },
    Counter {
        global: 0x03567A30,
        goes_in: 0x01D28120,
        comes_out: 0x01D28130,
    },
    Counter {
        global: 0x03567A34,
        goes_in: 0x01D2E5B0,
        comes_out: 0x01D2E5C0,
    },
    Counter {
        global: 0x03567A3C,
        goes_in: 0x01D333F0,
        comes_out: 0x01D33400,
    },
    Counter {
        global: 0x03567BD4,
        goes_in: 0x01D47420,
        comes_out: 0x01D47430,
    },
    Counter {
        global: 0x03567BD8,
        goes_in: 0x01D47490,
        comes_out: 0x01D474A0,
    },
    Counter {
        global: 0x03567BDC,
        goes_in: 0x01D48F10,
        comes_out: 0x01D48F20,
    },
    Counter {
        global: 0x03567BE0,
        goes_in: 0x01D4A150,
        comes_out: 0x01D4A160,
    },
    Counter {
        global: 0x03567BE4,
        goes_in: 0x01D4B420,
        comes_out: 0x01D4B430,
    },
    Counter {
        global: 0x03567BE8,
        goes_in: 0x01D4E300,
        comes_out: 0x01D4E310,
    },
    Counter {
        global: 0x03567BEC,
        goes_in: 0x01D4F400,
        comes_out: 0x01D4F410,
    },
    Counter {
        global: 0x03567BF0,
        goes_in: 0x01D51DA0,
        comes_out: 0x01D51DB0,
    },
    Counter {
        global: 0x03567BF4,
        goes_in: 0x01D54680,
        comes_out: 0x01D54690,
    },
    Counter {
        global: 0x03567BF8,
        goes_in: 0x01D56DF0,
        comes_out: 0x01D56E00,
    },
    Counter {
        global: 0x03567BFC,
        goes_in: 0x01D57610,
        comes_out: 0x01D57620,
    },
    Counter {
        global: 0x03567C00,
        goes_in: 0x01D59350,
        comes_out: 0x01D59360,
    },
    Counter {
        global: 0x03567C04,
        goes_in: 0x01D59CD0,
        comes_out: 0x01D59CE0,
    },
    Counter {
        global: 0x03567C08,
        goes_in: 0x01D5A260,
        comes_out: 0x01D5A270,
    },
    Counter {
        global: 0x03567C0C,
        goes_in: 0x01D5BC60,
        comes_out: 0x01D5BC70,
    },
    Counter {
        global: 0x03567C10,
        goes_in: 0x01D5DDA0,
        comes_out: 0x01D5DDB0,
    },
    Counter {
        global: 0x03567C14,
        goes_in: 0x01D5E0E0,
        comes_out: 0x01D5E0F0,
    },
    Counter {
        global: 0x03567C18,
        goes_in: 0x01D62F90,
        comes_out: 0x01D62FA0,
    },
    Counter {
        global: 0x03567C1C,
        goes_in: 0x01D66D10,
        comes_out: 0x01D66D20,
    },
    Counter {
        global: 0x03567C20,
        goes_in: 0x01D691F0,
        comes_out: 0x01D69200,
    },
    Counter {
        global: 0x03567C24,
        goes_in: 0x01D6C4F0,
        comes_out: 0x01D6C500,
    },
    Counter {
        global: 0x03567C28,
        goes_in: 0x01D6C850,
        comes_out: 0x01D6C860,
    },
    Counter {
        global: 0x03567C2C,
        goes_in: 0x01D6E980,
        comes_out: 0x01D6E990,
    },
    Counter {
        global: 0x03567C30,
        goes_in: 0x01D6EB10,
        comes_out: 0x01D6EB20,
    },
    Counter {
        global: 0x03567C34,
        goes_in: 0x01D6EC20,
        comes_out: 0x01D6EC30,
    },
    Counter {
        global: 0x03567C38,
        goes_in: 0x01D6F0A0,
        comes_out: 0x01D6F0B0,
    },
    Counter {
        global: 0x03567C3C,
        goes_in: 0x01D700E0,
        comes_out: 0x01D700F0,
    },
    Counter {
        global: 0x03567C40,
        goes_in: 0x01D70C00,
        comes_out: 0x01D70C10,
    },
    Counter {
        global: 0x03567C44,
        goes_in: 0x01D71730,
        comes_out: 0x01D71740,
    },
    Counter {
        global: 0x03567C48,
        goes_in: 0x01D72570,
        comes_out: 0x01D72580,
    },
    Counter {
        global: 0x03567C4C,
        goes_in: 0x01D73530,
        comes_out: 0x01D73540,
    },
    Counter {
        global: 0x03567C50,
        goes_in: 0x01D74230,
        comes_out: 0x01D74240,
    },
    Counter {
        global: 0x03567C54,
        goes_in: 0x01D74B70,
        comes_out: 0x01D74B80,
    },
    Counter {
        global: 0x03567C58,
        goes_in: 0x01D75290,
        comes_out: 0x01D752A0,
    },
    Counter {
        global: 0x03567C5C,
        goes_in: 0x01D75CA0,
        comes_out: 0x01D75CB0,
    },
    Counter {
        global: 0x03567C60,
        goes_in: 0x01D767A0,
        comes_out: 0x01D767B0,
    },
    Counter {
        global: 0x03567C64,
        goes_in: 0x01D76B40,
        comes_out: 0x01D76B50,
    },
    Counter {
        global: 0x03567C70,
        goes_in: 0x01D771C0,
        comes_out: 0x01D771D0,
    },
    Counter {
        global: 0x03567C74,
        goes_in: 0x01D7AEC0,
        comes_out: 0x01D7AED0,
    },
    Counter {
        global: 0x03567C78,
        goes_in: 0x01D7D6C0,
        comes_out: 0x01D7D6D0,
    },
    Counter {
        global: 0x03567C7C,
        goes_in: 0x01D7D720,
        comes_out: 0x01D7D730,
    },
    Counter {
        global: 0x03567C80,
        goes_in: 0x01D84080,
        comes_out: 0x01D84090,
    },
    Counter {
        global: 0x03567CA8,
        goes_in: 0x01D86BB0,
        comes_out: 0x01D86BC0,
    },
];

/// The one pair that is not a count.
///
/// Part of the one-statement family.
///
/// A random-number generator: one routine seeds it from what it is given, the
/// other steps it by multiplying and adding. It is the only global with two
/// one-statement writers that is not counted, and the only pair whose halves are
/// not sixteen bytes apart.
pub const NOT_A_COUNTER: (u32, u32, u32) = (0x01DB9010, 0x00409E10, 0x00409E60);

/// Implements part of the one-statement family.
///
/// The count kept in one global, if one is.
#[must_use]
pub fn counter_for(global: u32) -> Option<&'static Counter> {
    COUNTERS.iter().find(|held| held.global == global)
}

/// Implements part of the one-statement family.
///
/// Whether the two routines of every count sit the same distance apart.
#[must_use]
pub fn all_pairs_are_adjacent() -> bool {
    COUNTERS
        .iter()
        .all(|held| held.comes_out - held.goes_in == PAIR_STRIDE)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn the_count_is_what_the_table_holds() {
        assert_eq!(TRIVIAL.len(), TRIVIAL_COUNT);
    }

    #[test]
    fn the_table_is_sorted_so_it_can_be_searched() {
        assert!(
            TRIVIAL
                .windows(2)
                .all(|pair| pair[0].routine < pair[1].routine)
        );
    }

    #[test]
    fn a_routine_can_be_found_by_its_address() {
        let known = TRIVIAL[0].routine;

        assert!(trivial_at(known).is_some());
        assert!(trivial_at(0).is_none());
        assert!(trivial_at(0xFFFF_FFFF).is_none());
    }

    #[test]
    fn every_shape_has_at_least_one_routine() {
        for (_, seen) in shapes_in_use() {
            assert!(seen > 0);
        }
    }

    #[test]
    fn the_commonest_shape_is_writing_a_global() {
        assert_eq!(shapes_in_use()[0].0, Shape::SetsAGlobal);
    }

    #[test]
    fn and_it_is_the_commonest_by_a_wide_margin() {
        let counted = shapes_in_use();

        assert!(counted[0].1 > counted[1].1);
        assert!(counted[0].1 * 2 > counted.iter().map(|(_, seen)| *seen).sum::<usize>() / 2);
    }

    #[test]
    fn only_the_routines_that_write_a_global_name_one() {
        for held in &TRIVIAL {
            if held.writes.is_some() {
                assert_eq!(held.shape, Shape::SetsAGlobal, "{:#010X}", held.routine);
            }
        }
    }

    #[test]
    fn most_of_the_globals_are_written_by_exactly_two_routines() {
        let all = globals_written().len();
        let several = globals_with_several_writers().len();

        assert!(several * 2 > all, "{several} of {all}");
    }

    #[test]
    fn and_none_is_written_by_three() {
        for (at, seen) in globals_written() {
            assert!(seen <= 2, "{at:#010X} has {seen}");
        }
    }

    #[test]
    fn all_but_one_of_those_pairs_is_a_count() {
        let several = globals_with_several_writers().len();

        assert_eq!(COUNTERS.len(), several - 1);
    }

    #[test]
    fn a_count_goes_in_before_it_comes_out() {
        for held in &COUNTERS {
            assert!(held.goes_in < held.comes_out, "{:#010X}", held.global);
        }
    }

    #[test]
    fn and_the_two_halves_always_sit_sixteen_bytes_apart() {
        // A stride that fixed is what generated code looks like: the two were
        // emitted together with nothing in between.
        assert!(all_pairs_are_adjacent());
        assert_eq!(PAIR_STRIDE, 16);
    }

    #[test]
    fn the_one_pair_that_is_not_a_count_is_a_random_number_generator() {
        let (global, seeds, steps) = NOT_A_COUNTER;

        assert!(counter_for(global).is_none());
        assert!(steps - seeds > PAIR_STRIDE);
    }

    #[test]
    fn every_count_is_listed_once() {
        let mut globals: Vec<u32> = COUNTERS.iter().map(|held| held.global).collect();
        let before = globals.len();
        globals.sort_unstable();
        globals.dedup();

        assert_eq!(globals.len(), before);
    }

    #[test]
    fn a_count_can_be_found_by_the_global_it_is_kept_in() {
        let known = COUNTERS[0].global;

        assert!(counter_for(known).is_some());
        assert!(counter_for(0).is_none());
    }

    #[test]
    fn every_global_written_sits_in_the_data_segment() {
        for (at, _) in globals_written() {
            assert!(at > 0x0100_0000, "{at:#010X}");
        }
    }

    #[test]
    fn none_of_these_is_already_spoken_for_by_another_sweep() {
        for held in TRIVIAL.iter().take(300) {
            assert!(
                crate::frame_pads::pad_at(held.routine).is_none(),
                "{:#010X}",
                held.routine
            );
            assert!(
                crate::shim_routines::target_of(held.routine).is_none(),
                "{:#010X}",
                held.routine
            );
        }
    }

    #[test]
    fn a_routine_that_only_hands_something_back_writes_nothing() {
        for held in of_shape(Shape::ReturnsAName) {
            assert!(held.writes.is_none(), "{:#010X}", held.routine);
        }
    }

    #[test]
    fn there_are_several_distinct_shapes() {
        assert!(shapes_in_use().len() >= 5);
    }

    #[test]
    fn every_routine_is_listed_once() {
        let mut routines: Vec<u32> = TRIVIAL.iter().map(|held| held.routine).collect();
        let before = routines.len();
        routines.sort_unstable();
        routines.dedup();

        assert_eq!(routines.len(), before);
    }
}
