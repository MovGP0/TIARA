//! Routines that answer a call by handing it on.
//!
//! 373 of them, each one statement: reach somewhere, find a table of routines,
//! and call one slot of it. Nothing is worked out and nothing is kept.
//!
//! Most reach into a **field** of what they were given and call a slot of
//! whatever is there — an object answering for something it holds. Read
//! together they say which slot is forwarded most, and one slot stands well
//! clear of the rest: a hundred and forty-five of them hand on to the same
//! place. That is one method of one interface being answered on behalf of a
//! held thing by a hundred and forty-five different holders.

// The addresses are written without separators so the port-mapping importer can
// match them against the recovered functions.
#![allow(clippy::unreadable_literal)]

/// Where the table comes from.
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord)]
pub enum Reached {
    /// A single routine kept in a known place, called without a table at all.
    AStoredRoutine,
    /// In a field of what it was given, and then the table of whatever is there.
    ThroughAFieldsTable,
    /// In a table named outright rather than reached through anything.
    ThroughATableNamedOutright,
    /// In the table of the thing it was given.
    ThroughItsOwnTable,
}

/// One routine that hands a call on.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct Forwarder {
    /// Where it sits.
    pub routine: u32,
    /// Where it finds the table.
    pub reached: Reached,
    /// Which slot of that table it calls.
    pub slot: i32,
    /// Which field it reaches into, where it reaches into one.
    pub field: Option<u32>,
}

/// Every routine that hands a call on and does nothing else.
pub static FORWARDERS: [Forwarder; 373] = [
    Forwarder {
        routine: 0x00412670,
        reached: Reached::ThroughATableNamedOutright,
        slot: 24,
        field: None,
    },
    Forwarder {
        routine: 0x0041F8A0,
        reached: Reached::AStoredRoutine,
        slot: 0,
        field: None,
    },
    Forwarder {
        routine: 0x00424740,
        reached: Reached::ThroughAFieldsTable,
        slot: 32,
        field: Some(0x080),
    },
    Forwarder {
        routine: 0x004AF480,
        reached: Reached::ThroughATableNamedOutright,
        slot: 24,
        field: None,
    },
    Forwarder {
        routine: 0x004B1E10,
        reached: Reached::ThroughAFieldsTable,
        slot: 72,
        field: Some(0x080),
    },
    Forwarder {
        routine: 0x004B1EF0,
        reached: Reached::ThroughAFieldsTable,
        slot: 72,
        field: Some(0x060),
    },
    Forwarder {
        routine: 0x004B6DA0,
        reached: Reached::ThroughItsOwnTable,
        slot: 80,
        field: None,
    },
    Forwarder {
        routine: 0x004B6DC0,
        reached: Reached::ThroughItsOwnTable,
        slot: 80,
        field: None,
    },
    Forwarder {
        routine: 0x004B6E40,
        reached: Reached::ThroughItsOwnTable,
        slot: 16,
        field: None,
    },
    Forwarder {
        routine: 0x004BF610,
        reached: Reached::ThroughAFieldsTable,
        slot: 72,
        field: Some(0x068),
    },
    Forwarder {
        routine: 0x004CE570,
        reached: Reached::ThroughAFieldsTable,
        slot: 24,
        field: Some(0x048),
    },
    Forwarder {
        routine: 0x004D4200,
        reached: Reached::ThroughAFieldsTable,
        slot: 56,
        field: Some(0x018),
    },
    Forwarder {
        routine: 0x004D4220,
        reached: Reached::ThroughAFieldsTable,
        slot: 64,
        field: Some(0x018),
    },
    Forwarder {
        routine: 0x004D6D10,
        reached: Reached::ThroughAFieldsTable,
        slot: 24,
        field: Some(0x048),
    },
    Forwarder {
        routine: 0x004DC0D0,
        reached: Reached::ThroughAFieldsTable,
        slot: 32,
        field: Some(0x060),
    },
    Forwarder {
        routine: 0x00548BC0,
        reached: Reached::ThroughAFieldsTable,
        slot: 40,
        field: Some(0x038),
    },
    Forwarder {
        routine: 0x00548C10,
        reached: Reached::ThroughAFieldsTable,
        slot: 48,
        field: Some(0x038),
    },
    Forwarder {
        routine: 0x00548C30,
        reached: Reached::ThroughAFieldsTable,
        slot: 64,
        field: Some(0x038),
    },
    Forwarder {
        routine: 0x00548D40,
        reached: Reached::ThroughAFieldsTable,
        slot: 80,
        field: Some(0x038),
    },
    Forwarder {
        routine: 0x005B3D70,
        reached: Reached::ThroughATableNamedOutright,
        slot: 24,
        field: None,
    },
    Forwarder {
        routine: 0x005DBEF0,
        reached: Reached::ThroughAFieldsTable,
        slot: 40,
        field: Some(0x008),
    },
    Forwarder {
        routine: 0x005DC840,
        reached: Reached::ThroughAFieldsTable,
        slot: 48,
        field: Some(0x008),
    },
    Forwarder {
        routine: 0x005FDF50,
        reached: Reached::ThroughItsOwnTable,
        slot: 248,
        field: None,
    },
    Forwarder {
        routine: 0x005FF880,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x070),
    },
    Forwarder {
        routine: 0x005FF8A0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x078),
    },
    Forwarder {
        routine: 0x005FF8C0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x080),
    },
    Forwarder {
        routine: 0x00618D20,
        reached: Reached::ThroughItsOwnTable,
        slot: 0,
        field: None,
    },
    Forwarder {
        routine: 0x00618D40,
        reached: Reached::ThroughItsOwnTable,
        slot: 8,
        field: None,
    },
    Forwarder {
        routine: 0x00619FC0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x008),
    },
    Forwarder {
        routine: 0x00622C70,
        reached: Reached::ThroughAFieldsTable,
        slot: 8,
        field: Some(0x010),
    },
    Forwarder {
        routine: 0x00622C90,
        reached: Reached::ThroughAFieldsTable,
        slot: 8,
        field: Some(0x010),
    },
    Forwarder {
        routine: 0x00649380,
        reached: Reached::ThroughAFieldsTable,
        slot: 352,
        field: Some(0x050),
    },
    Forwarder {
        routine: 0x006495F0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x058),
    },
    Forwarder {
        routine: 0x0064DF10,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x0b8),
    },
    Forwarder {
        routine: 0x0064E770,
        reached: Reached::ThroughItsOwnTable,
        slot: 392,
        field: None,
    },
    Forwarder {
        routine: 0x00652370,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x0d0),
    },
    Forwarder {
        routine: 0x00652550,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x0d8),
    },
    Forwarder {
        routine: 0x00652570,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x130),
    },
    Forwarder {
        routine: 0x0065ECF0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x328),
    },
    Forwarder {
        routine: 0x0065F800,
        reached: Reached::ThroughItsOwnTable,
        slot: 488,
        field: None,
    },
    Forwarder {
        routine: 0x00665FE0,
        reached: Reached::ThroughAFieldsTable,
        slot: 152,
        field: Some(0x498),
    },
    Forwarder {
        routine: 0x00666220,
        reached: Reached::ThroughAFieldsTable,
        slot: 136,
        field: Some(0x498),
    },
    Forwarder {
        routine: 0x00682680,
        reached: Reached::ThroughAFieldsTable,
        slot: 664,
        field: Some(0x038),
    },
    Forwarder {
        routine: 0x00682EC0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x4d8),
    },
    Forwarder {
        routine: 0x00687360,
        reached: Reached::ThroughAFieldsTable,
        slot: 40,
        field: Some(0x4f0),
    },
    Forwarder {
        routine: 0x00688770,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x4d8),
    },
    Forwarder {
        routine: 0x0068B650,
        reached: Reached::ThroughAFieldsTable,
        slot: 144,
        field: Some(0x4a0),
    },
    Forwarder {
        routine: 0x0068E000,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x4a0),
    },
    Forwarder {
        routine: 0x006A4400,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x188),
    },
    Forwarder {
        routine: 0x006A5170,
        reached: Reached::ThroughAFieldsTable,
        slot: 40,
        field: Some(0x050),
    },
    Forwarder {
        routine: 0x006A5530,
        reached: Reached::ThroughAFieldsTable,
        slot: 40,
        field: Some(0x080),
    },
    Forwarder {
        routine: 0x006A5660,
        reached: Reached::ThroughAFieldsTable,
        slot: 40,
        field: Some(0x060),
    },
    Forwarder {
        routine: 0x006A57B0,
        reached: Reached::ThroughAFieldsTable,
        slot: 40,
        field: Some(0x070),
    },
    Forwarder {
        routine: 0x006A5A00,
        reached: Reached::ThroughAFieldsTable,
        slot: 40,
        field: Some(0x070),
    },
    Forwarder {
        routine: 0x006A5AA0,
        reached: Reached::ThroughAFieldsTable,
        slot: 40,
        field: Some(0x060),
    },
    Forwarder {
        routine: 0x006A5B40,
        reached: Reached::ThroughAFieldsTable,
        slot: 40,
        field: Some(0x060),
    },
    Forwarder {
        routine: 0x006A5C70,
        reached: Reached::ThroughAFieldsTable,
        slot: 40,
        field: Some(0x070),
    },
    Forwarder {
        routine: 0x006A5D20,
        reached: Reached::ThroughAFieldsTable,
        slot: 40,
        field: Some(0x070),
    },
    Forwarder {
        routine: 0x006A5DF0,
        reached: Reached::ThroughAFieldsTable,
        slot: 40,
        field: Some(0x060),
    },
    Forwarder {
        routine: 0x006A5E70,
        reached: Reached::ThroughAFieldsTable,
        slot: 40,
        field: Some(0x050),
    },
    Forwarder {
        routine: 0x006A5F10,
        reached: Reached::ThroughAFieldsTable,
        slot: 40,
        field: Some(0x060),
    },
    Forwarder {
        routine: 0x006D5740,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x4c8),
    },
    Forwarder {
        routine: 0x006D8C30,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x490),
    },
    Forwarder {
        routine: 0x006DB040,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x490),
    },
    Forwarder {
        routine: 0x006E2330,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x550),
    },
    Forwarder {
        routine: 0x006E8BA0,
        reached: Reached::ThroughAFieldsTable,
        slot: 664,
        field: Some(0x038),
    },
    Forwarder {
        routine: 0x006EAD10,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x4f0),
    },
    Forwarder {
        routine: 0x006EADB0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x4f8),
    },
    Forwarder {
        routine: 0x006EAEF0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x510),
    },
    Forwarder {
        routine: 0x006EDE00,
        reached: Reached::ThroughAFieldsTable,
        slot: 72,
        field: Some(0x0d0),
    },
    Forwarder {
        routine: 0x006F6700,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x4e0),
    },
    Forwarder {
        routine: 0x006F6720,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x500),
    },
    Forwarder {
        routine: 0x006F6740,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x770),
    },
    Forwarder {
        routine: 0x00705570,
        reached: Reached::ThroughAFieldsTable,
        slot: 40,
        field: Some(0x4f0),
    },
    Forwarder {
        routine: 0x00705640,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x588),
    },
    Forwarder {
        routine: 0x00706830,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x040),
    },
    Forwarder {
        routine: 0x00707DD0,
        reached: Reached::ThroughAFieldsTable,
        slot: 72,
        field: Some(0x050),
    },
    Forwarder {
        routine: 0x00724400,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x0d0),
    },
    Forwarder {
        routine: 0x00725280,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x0d8),
    },
    Forwarder {
        routine: 0x00725900,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x0d0),
    },
    Forwarder {
        routine: 0x007414B0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x320),
    },
    Forwarder {
        routine: 0x007414D0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x318),
    },
    Forwarder {
        routine: 0x00742010,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x318),
    },
    Forwarder {
        routine: 0x00745E10,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x4c0),
    },
    Forwarder {
        routine: 0x00745E30,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x4b0),
    },
    Forwarder {
        routine: 0x00745E50,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x4b8),
    },
    Forwarder {
        routine: 0x0074A500,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x4a0),
    },
    Forwarder {
        routine: 0x0074B530,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x4a0),
    },
    Forwarder {
        routine: 0x00778E90,
        reached: Reached::ThroughItsOwnTable,
        slot: 32,
        field: None,
    },
    Forwarder {
        routine: 0x00779980,
        reached: Reached::ThroughATableNamedOutright,
        slot: 136,
        field: None,
    },
    Forwarder {
        routine: 0x007799A0,
        reached: Reached::ThroughATableNamedOutright,
        slot: 136,
        field: None,
    },
    Forwarder {
        routine: 0x00786870,
        reached: Reached::ThroughAFieldsTable,
        slot: 416,
        field: Some(0x010),
    },
    Forwarder {
        routine: 0x007FB110,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x498),
    },
    Forwarder {
        routine: 0x007FB130,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x4b0),
    },
    Forwarder {
        routine: 0x007FFBF0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x4f0),
    },
    Forwarder {
        routine: 0x00806BA0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x688),
    },
    Forwarder {
        routine: 0x008089F0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x100),
    },
    Forwarder {
        routine: 0x00808A10,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x108),
    },
    Forwarder {
        routine: 0x00808A30,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x110),
    },
    Forwarder {
        routine: 0x00808A50,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x118),
    },
    Forwarder {
        routine: 0x00808A70,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x120),
    },
    Forwarder {
        routine: 0x0080C3D0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x140),
    },
    Forwarder {
        routine: 0x0080C610,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x0a0),
    },
    Forwarder {
        routine: 0x00813D00,
        reached: Reached::ThroughAFieldsTable,
        slot: 72,
        field: Some(0x020),
    },
    Forwarder {
        routine: 0x00814F60,
        reached: Reached::ThroughAFieldsTable,
        slot: 96,
        field: Some(0x020),
    },
    Forwarder {
        routine: 0x008751C0,
        reached: Reached::AStoredRoutine,
        slot: 0,
        field: None,
    },
    Forwarder {
        routine: 0x0089B920,
        reached: Reached::ThroughAFieldsTable,
        slot: 8,
        field: Some(0x008),
    },
    Forwarder {
        routine: 0x008B1850,
        reached: Reached::ThroughATableNamedOutright,
        slot: 40,
        field: None,
    },
    Forwarder {
        routine: 0x008F4B80,
        reached: Reached::ThroughAFieldsTable,
        slot: 32,
        field: Some(0x048),
    },
    Forwarder {
        routine: 0x008F7780,
        reached: Reached::ThroughAFieldsTable,
        slot: 56,
        field: Some(0x008),
    },
    Forwarder {
        routine: 0x008F77A0,
        reached: Reached::ThroughAFieldsTable,
        slot: 48,
        field: Some(0x008),
    },
    Forwarder {
        routine: 0x008F7B40,
        reached: Reached::ThroughAFieldsTable,
        slot: 152,
        field: Some(0x008),
    },
    Forwarder {
        routine: 0x008F7B60,
        reached: Reached::ThroughAFieldsTable,
        slot: 168,
        field: Some(0x008),
    },
    Forwarder {
        routine: 0x008F7D90,
        reached: Reached::ThroughAFieldsTable,
        slot: 192,
        field: Some(0x008),
    },
    Forwarder {
        routine: 0x008F7DB0,
        reached: Reached::ThroughAFieldsTable,
        slot: 184,
        field: Some(0x008),
    },
    Forwarder {
        routine: 0x008F7F30,
        reached: Reached::ThroughAFieldsTable,
        slot: 176,
        field: Some(0x008),
    },
    Forwarder {
        routine: 0x008F7F50,
        reached: Reached::ThroughAFieldsTable,
        slot: 216,
        field: Some(0x008),
    },
    Forwarder {
        routine: 0x008F8660,
        reached: Reached::ThroughAFieldsTable,
        slot: 160,
        field: Some(0x060),
    },
    Forwarder {
        routine: 0x008F87A0,
        reached: Reached::ThroughAFieldsTable,
        slot: 160,
        field: Some(0x050),
    },
    Forwarder {
        routine: 0x00956800,
        reached: Reached::ThroughAFieldsTable,
        slot: 72,
        field: Some(0x130),
    },
    Forwarder {
        routine: 0x00956FD0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x130),
    },
    Forwarder {
        routine: 0x00958460,
        reached: Reached::ThroughAFieldsTable,
        slot: 224,
        field: Some(0x088),
    },
    Forwarder {
        routine: 0x009584C0,
        reached: Reached::ThroughAFieldsTable,
        slot: 32,
        field: Some(0x008),
    },
    Forwarder {
        routine: 0x009584E0,
        reached: Reached::ThroughAFieldsTable,
        slot: 40,
        field: Some(0x008),
    },
    Forwarder {
        routine: 0x00958500,
        reached: Reached::ThroughAFieldsTable,
        slot: 48,
        field: Some(0x008),
    },
    Forwarder {
        routine: 0x00958640,
        reached: Reached::ThroughAFieldsTable,
        slot: 56,
        field: Some(0x008),
    },
    Forwarder {
        routine: 0x0096C2D0,
        reached: Reached::ThroughAFieldsTable,
        slot: 8,
        field: Some(0x090),
    },
    Forwarder {
        routine: 0x0096C2F0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x090),
    },
    Forwarder {
        routine: 0x0096C310,
        reached: Reached::ThroughAFieldsTable,
        slot: 24,
        field: Some(0x090),
    },
    Forwarder {
        routine: 0x0096C330,
        reached: Reached::ThroughAFieldsTable,
        slot: 32,
        field: Some(0x090),
    },
    Forwarder {
        routine: 0x0096C350,
        reached: Reached::ThroughAFieldsTable,
        slot: 40,
        field: Some(0x090),
    },
    Forwarder {
        routine: 0x0096C370,
        reached: Reached::ThroughAFieldsTable,
        slot: 48,
        field: Some(0x090),
    },
    Forwarder {
        routine: 0x0096C390,
        reached: Reached::ThroughAFieldsTable,
        slot: 56,
        field: Some(0x090),
    },
    Forwarder {
        routine: 0x0096C3B0,
        reached: Reached::ThroughAFieldsTable,
        slot: 64,
        field: Some(0x090),
    },
    Forwarder {
        routine: 0x0096C3D0,
        reached: Reached::ThroughAFieldsTable,
        slot: 72,
        field: Some(0x090),
    },
    Forwarder {
        routine: 0x0096C3F0,
        reached: Reached::ThroughAFieldsTable,
        slot: 80,
        field: Some(0x090),
    },
    Forwarder {
        routine: 0x0096C410,
        reached: Reached::ThroughAFieldsTable,
        slot: 88,
        field: Some(0x090),
    },
    Forwarder {
        routine: 0x0096C430,
        reached: Reached::ThroughAFieldsTable,
        slot: 96,
        field: Some(0x090),
    },
    Forwarder {
        routine: 0x0096DDE0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x030),
    },
    Forwarder {
        routine: 0x0096E090,
        reached: Reached::ThroughAFieldsTable,
        slot: 64,
        field: Some(0x030),
    },
    Forwarder {
        routine: 0x00971CB0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x0a0),
    },
    Forwarder {
        routine: 0x00984520,
        reached: Reached::ThroughAFieldsTable,
        slot: 168,
        field: Some(0x098),
    },
    Forwarder {
        routine: 0x00984540,
        reached: Reached::ThroughAFieldsTable,
        slot: 176,
        field: Some(0x098),
    },
    Forwarder {
        routine: 0x00985690,
        reached: Reached::ThroughAFieldsTable,
        slot: 160,
        field: Some(0x098),
    },
    Forwarder {
        routine: 0x00985740,
        reached: Reached::ThroughAFieldsTable,
        slot: 168,
        field: Some(0x098),
    },
    Forwarder {
        routine: 0x009ABEF0,
        reached: Reached::ThroughAFieldsTable,
        slot: 24,
        field: Some(0x018),
    },
    Forwarder {
        routine: 0x00A029F0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x028),
    },
    Forwarder {
        routine: 0x00A0B740,
        reached: Reached::ThroughAFieldsTable,
        slot: 208,
        field: Some(0x050),
    },
    Forwarder {
        routine: 0x00A161C0,
        reached: Reached::ThroughAFieldsTable,
        slot: 8,
        field: Some(0x238),
    },
    Forwarder {
        routine: 0x00A48D30,
        reached: Reached::ThroughAFieldsTable,
        slot: 72,
        field: Some(0x018),
    },
    Forwarder {
        routine: 0x00A48D50,
        reached: Reached::ThroughAFieldsTable,
        slot: 96,
        field: Some(0x018),
    },
    Forwarder {
        routine: 0x00A491E0,
        reached: Reached::ThroughAFieldsTable,
        slot: 72,
        field: Some(0x018),
    },
    Forwarder {
        routine: 0x00A49200,
        reached: Reached::ThroughAFieldsTable,
        slot: 96,
        field: Some(0x018),
    },
    Forwarder {
        routine: 0x00A9B200,
        reached: Reached::ThroughAFieldsTable,
        slot: 608,
        field: Some(0x148),
    },
    Forwarder {
        routine: 0x00A9B310,
        reached: Reached::ThroughAFieldsTable,
        slot: 616,
        field: Some(0x148),
    },
    Forwarder {
        routine: 0x00A9CEE0,
        reached: Reached::ThroughAFieldsTable,
        slot: 72,
        field: Some(0x0a8),
    },
    Forwarder {
        routine: 0x00AA4500,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x570),
    },
    Forwarder {
        routine: 0x00ACF680,
        reached: Reached::ThroughAFieldsTable,
        slot: 608,
        field: Some(0x140),
    },
    Forwarder {
        routine: 0x00ACF740,
        reached: Reached::ThroughAFieldsTable,
        slot: 616,
        field: Some(0x140),
    },
    Forwarder {
        routine: 0x00ACF760,
        reached: Reached::ThroughAFieldsTable,
        slot: 616,
        field: Some(0x140),
    },
    Forwarder {
        routine: 0x00AFE5D0,
        reached: Reached::ThroughAFieldsTable,
        slot: 40,
        field: Some(0x8b0),
    },
    Forwarder {
        routine: 0x00B10F50,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x5f8),
    },
    Forwarder {
        routine: 0x00B11080,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x600),
    },
    Forwarder {
        routine: 0x00B2B390,
        reached: Reached::ThroughAFieldsTable,
        slot: 0,
        field: Some(0x098),
    },
    Forwarder {
        routine: 0x00B2B770,
        reached: Reached::ThroughAFieldsTable,
        slot: 0,
        field: Some(0x088),
    },
    Forwarder {
        routine: 0x00B35B30,
        reached: Reached::ThroughAFieldsTable,
        slot: 0,
        field: Some(0x048),
    },
    Forwarder {
        routine: 0x00B36490,
        reached: Reached::ThroughAFieldsTable,
        slot: 0,
        field: Some(0x068),
    },
    Forwarder {
        routine: 0x00B58100,
        reached: Reached::ThroughAFieldsTable,
        slot: 0,
        field: Some(0x048),
    },
    Forwarder {
        routine: 0x00B61300,
        reached: Reached::ThroughAFieldsTable,
        slot: 0,
        field: Some(0x098),
    },
    Forwarder {
        routine: 0x00B619C0,
        reached: Reached::ThroughAFieldsTable,
        slot: 0,
        field: Some(0x048),
    },
    Forwarder {
        routine: 0x00B61C70,
        reached: Reached::ThroughAFieldsTable,
        slot: 0,
        field: Some(0x070),
    },
    Forwarder {
        routine: 0x00B61CA0,
        reached: Reached::ThroughAFieldsTable,
        slot: 0,
        field: Some(0x068),
    },
    Forwarder {
        routine: 0x00B62C60,
        reached: Reached::ThroughAFieldsTable,
        slot: 0,
        field: Some(0x058),
    },
    Forwarder {
        routine: 0x00B62C90,
        reached: Reached::ThroughAFieldsTable,
        slot: 0,
        field: Some(0x060),
    },
    Forwarder {
        routine: 0x00B64740,
        reached: Reached::ThroughAFieldsTable,
        slot: 0,
        field: Some(0x048),
    },
    Forwarder {
        routine: 0x00B68530,
        reached: Reached::ThroughAFieldsTable,
        slot: 0,
        field: Some(0x058),
    },
    Forwarder {
        routine: 0x00BB2DB0,
        reached: Reached::ThroughAFieldsTable,
        slot: 40,
        field: Some(0x018),
    },
    Forwarder {
        routine: 0x00BBACC0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x008),
    },
    Forwarder {
        routine: 0x00BBB870,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x018),
    },
    Forwarder {
        routine: 0x00BC1C90,
        reached: Reached::ThroughAFieldsTable,
        slot: 40,
        field: Some(0x078),
    },
    Forwarder {
        routine: 0x00BD4C30,
        reached: Reached::ThroughAFieldsTable,
        slot: 80,
        field: Some(0x018),
    },
    Forwarder {
        routine: 0x00BFB350,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x4e8),
    },
    Forwarder {
        routine: 0x00BFCC30,
        reached: Reached::ThroughAFieldsTable,
        slot: 96,
        field: Some(0x4e8),
    },
    Forwarder {
        routine: 0x00C07E10,
        reached: Reached::ThroughAFieldsTable,
        slot: 752,
        field: Some(0x2d0),
    },
    Forwarder {
        routine: 0x00C08D70,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x610),
    },
    Forwarder {
        routine: 0x00C111A0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x600),
    },
    Forwarder {
        routine: 0x00C2E8C0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x018),
    },
    Forwarder {
        routine: 0x00C2EA60,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x018),
    },
    Forwarder {
        routine: 0x00C35CF0,
        reached: Reached::ThroughAFieldsTable,
        slot: 40,
        field: Some(0x0e8),
    },
    Forwarder {
        routine: 0x00C38A00,
        reached: Reached::ThroughAFieldsTable,
        slot: 0,
        field: Some(0x050),
    },
    Forwarder {
        routine: 0x00C65A60,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x070),
    },
    Forwarder {
        routine: 0x00C6F4A0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x020),
    },
    Forwarder {
        routine: 0x00C84A50,
        reached: Reached::ThroughAFieldsTable,
        slot: 40,
        field: Some(0x010),
    },
    Forwarder {
        routine: 0x00CAF630,
        reached: Reached::ThroughAFieldsTable,
        slot: 160,
        field: Some(0x060),
    },
    Forwarder {
        routine: 0x00CAF770,
        reached: Reached::ThroughAFieldsTable,
        slot: 160,
        field: Some(0x060),
    },
    Forwarder {
        routine: 0x00CAF9F0,
        reached: Reached::ThroughAFieldsTable,
        slot: 160,
        field: Some(0x060),
    },
    Forwarder {
        routine: 0x00CAFD00,
        reached: Reached::ThroughAFieldsTable,
        slot: 160,
        field: Some(0x090),
    },
    Forwarder {
        routine: 0x00CBAEF0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x030),
    },
    Forwarder {
        routine: 0x00CBD240,
        reached: Reached::ThroughAFieldsTable,
        slot: 128,
        field: Some(0x108),
    },
    Forwarder {
        routine: 0x00CBDEF0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x0f0),
    },
    Forwarder {
        routine: 0x00CBDF10,
        reached: Reached::ThroughItsOwnTable,
        slot: 248,
        field: None,
    },
    Forwarder {
        routine: 0x00CBF450,
        reached: Reached::ThroughAFieldsTable,
        slot: 8,
        field: Some(0x008),
    },
    Forwarder {
        routine: 0x00CC13D0,
        reached: Reached::ThroughAFieldsTable,
        slot: 32,
        field: Some(0x070),
    },
    Forwarder {
        routine: 0x00CC1400,
        reached: Reached::ThroughAFieldsTable,
        slot: 64,
        field: Some(0x070),
    },
    Forwarder {
        routine: 0x00CC1420,
        reached: Reached::ThroughAFieldsTable,
        slot: 40,
        field: Some(0x070),
    },
    Forwarder {
        routine: 0x00CDAD80,
        reached: Reached::ThroughAFieldsTable,
        slot: 152,
        field: Some(0x038),
    },
    Forwarder {
        routine: 0x00CDDA30,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x018),
    },
    Forwarder {
        routine: 0x00CE1E20,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x080),
    },
    Forwarder {
        routine: 0x00CE2D10,
        reached: Reached::ThroughAFieldsTable,
        slot: 72,
        field: Some(0x0a0),
    },
    Forwarder {
        routine: 0x00CE35B0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x120),
    },
    Forwarder {
        routine: 0x00CE3DC0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x0e8),
    },
    Forwarder {
        routine: 0x00CE3DE0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x0f0),
    },
    Forwarder {
        routine: 0x00CEB5C0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x020),
    },
    Forwarder {
        routine: 0x00D05F80,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x218),
    },
    Forwarder {
        routine: 0x00D73220,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x0a0),
    },
    Forwarder {
        routine: 0x00D77F30,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x118),
    },
    Forwarder {
        routine: 0x00D78650,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x128),
    },
    Forwarder {
        routine: 0x00D78670,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x130),
    },
    Forwarder {
        routine: 0x00D7A040,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x120),
    },
    Forwarder {
        routine: 0x00D7A480,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x130),
    },
    Forwarder {
        routine: 0x00D7A4A0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x138),
    },
    Forwarder {
        routine: 0x00D7B060,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x148),
    },
    Forwarder {
        routine: 0x00D7B080,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x150),
    },
    Forwarder {
        routine: 0x00D7B7B0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x148),
    },
    Forwarder {
        routine: 0x00D7B7D0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x130),
    },
    Forwarder {
        routine: 0x00D7B7F0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x138),
    },
    Forwarder {
        routine: 0x00D7B810,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x140),
    },
    Forwarder {
        routine: 0x00D7BDD0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x138),
    },
    Forwarder {
        routine: 0x00D7BDF0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x128),
    },
    Forwarder {
        routine: 0x00D7BE10,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x120),
    },
    Forwarder {
        routine: 0x00D7BE30,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x130),
    },
    Forwarder {
        routine: 0x00D7C2F0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x128),
    },
    Forwarder {
        routine: 0x00D7C880,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x148),
    },
    Forwarder {
        routine: 0x00D7C8B0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x150),
    },
    Forwarder {
        routine: 0x00D7C8E0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x128),
    },
    Forwarder {
        routine: 0x00D7C910,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x140),
    },
    Forwarder {
        routine: 0x00DE5BF0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x008),
    },
    Forwarder {
        routine: 0x00DE5F10,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x008),
    },
    Forwarder {
        routine: 0x00E7B2C0,
        reached: Reached::ThroughAFieldsTable,
        slot: 40,
        field: Some(0x010),
    },
    Forwarder {
        routine: 0x00F03740,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x020),
    },
    Forwarder {
        routine: 0x00F03BC0,
        reached: Reached::ThroughAFieldsTable,
        slot: 72,
        field: Some(0x060),
    },
    Forwarder {
        routine: 0x00F04480,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x018),
    },
    Forwarder {
        routine: 0x00F09E70,
        reached: Reached::ThroughAFieldsTable,
        slot: 608,
        field: Some(0x728),
    },
    Forwarder {
        routine: 0x00F09E90,
        reached: Reached::ThroughAFieldsTable,
        slot: 608,
        field: Some(0x6f8),
    },
    Forwarder {
        routine: 0x00F09EF0,
        reached: Reached::ThroughAFieldsTable,
        slot: 608,
        field: Some(0x700),
    },
    Forwarder {
        routine: 0x00F09F10,
        reached: Reached::ThroughAFieldsTable,
        slot: 608,
        field: Some(0x730),
    },
    Forwarder {
        routine: 0x00F760B0,
        reached: Reached::ThroughAFieldsTable,
        slot: 632,
        field: Some(0x6b0),
    },
    Forwarder {
        routine: 0x00F7D290,
        reached: Reached::ThroughAFieldsTable,
        slot: 144,
        field: Some(0x028),
    },
    Forwarder {
        routine: 0x00F8E6D0,
        reached: Reached::ThroughAFieldsTable,
        slot: 616,
        field: Some(0x038),
    },
    Forwarder {
        routine: 0x01052FE0,
        reached: Reached::ThroughAFieldsTable,
        slot: 608,
        field: Some(0x838),
    },
    Forwarder {
        routine: 0x0106E730,
        reached: Reached::ThroughAFieldsTable,
        slot: 608,
        field: Some(0x6d0),
    },
    Forwarder {
        routine: 0x0106E750,
        reached: Reached::ThroughAFieldsTable,
        slot: 608,
        field: Some(0x6e0),
    },
    Forwarder {
        routine: 0x0106E770,
        reached: Reached::ThroughAFieldsTable,
        slot: 608,
        field: Some(0x6e8),
    },
    Forwarder {
        routine: 0x0106E790,
        reached: Reached::ThroughAFieldsTable,
        slot: 608,
        field: Some(0x700),
    },
    Forwarder {
        routine: 0x0106E8C0,
        reached: Reached::ThroughAFieldsTable,
        slot: 608,
        field: Some(0x6d8),
    },
    Forwarder {
        routine: 0x0106E900,
        reached: Reached::ThroughAFieldsTable,
        slot: 616,
        field: Some(0x6d0),
    },
    Forwarder {
        routine: 0x0106E920,
        reached: Reached::ThroughAFieldsTable,
        slot: 616,
        field: Some(0x6e0),
    },
    Forwarder {
        routine: 0x0106E940,
        reached: Reached::ThroughAFieldsTable,
        slot: 616,
        field: Some(0x6e8),
    },
    Forwarder {
        routine: 0x0106EA30,
        reached: Reached::ThroughAFieldsTable,
        slot: 616,
        field: Some(0x6d8),
    },
    Forwarder {
        routine: 0x0106EA50,
        reached: Reached::ThroughAFieldsTable,
        slot: 616,
        field: Some(0x700),
    },
    Forwarder {
        routine: 0x010DBD60,
        reached: Reached::ThroughAFieldsTable,
        slot: 40,
        field: Some(0x008),
    },
    Forwarder {
        routine: 0x010F7E80,
        reached: Reached::ThroughItsOwnTable,
        slot: 1368,
        field: None,
    },
    Forwarder {
        routine: 0x010FCFB0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x008),
    },
    Forwarder {
        routine: 0x01138AF0,
        reached: Reached::ThroughAFieldsTable,
        slot: 320,
        field: Some(0xa18),
    },
    Forwarder {
        routine: 0x01139970,
        reached: Reached::ThroughAFieldsTable,
        slot: 128,
        field: Some(0xa18),
    },
    Forwarder {
        routine: 0x011399A0,
        reached: Reached::ThroughAFieldsTable,
        slot: 128,
        field: Some(0xa18),
    },
    Forwarder {
        routine: 0x012AF6A0,
        reached: Reached::ThroughAFieldsTable,
        slot: 320,
        field: Some(0xdb8),
    },
    Forwarder {
        routine: 0x012AF6C0,
        reached: Reached::ThroughAFieldsTable,
        slot: 320,
        field: Some(0xdb8),
    },
    Forwarder {
        routine: 0x012AF6E0,
        reached: Reached::ThroughAFieldsTable,
        slot: 320,
        field: Some(0xdb8),
    },
    Forwarder {
        routine: 0x012C5990,
        reached: Reached::ThroughAFieldsTable,
        slot: 704,
        field: Some(0x748),
    },
    Forwarder {
        routine: 0x0138BAE0,
        reached: Reached::ThroughAFieldsTable,
        slot: 224,
        field: Some(0xe88),
    },
    Forwarder {
        routine: 0x0138BB00,
        reached: Reached::ThroughAFieldsTable,
        slot: 224,
        field: Some(0xe88),
    },
    Forwarder {
        routine: 0x014793E0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x290),
    },
    Forwarder {
        routine: 0x0157D040,
        reached: Reached::ThroughAFieldsTable,
        slot: 24,
        field: Some(0x008),
    },
    Forwarder {
        routine: 0x0157D0E0,
        reached: Reached::ThroughAFieldsTable,
        slot: 80,
        field: Some(0x008),
    },
    Forwarder {
        routine: 0x0157D100,
        reached: Reached::ThroughAFieldsTable,
        slot: 32,
        field: Some(0x008),
    },
    Forwarder {
        routine: 0x0157D120,
        reached: Reached::ThroughAFieldsTable,
        slot: 48,
        field: Some(0x008),
    },
    Forwarder {
        routine: 0x015CA0F0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x0c8),
    },
    Forwarder {
        routine: 0x015CA120,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x0d0),
    },
    Forwarder {
        routine: 0x015CA150,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x0d8),
    },
    Forwarder {
        routine: 0x01663120,
        reached: Reached::ThroughATableNamedOutright,
        slot: 336,
        field: None,
    },
    Forwarder {
        routine: 0x016BD1E0,
        reached: Reached::ThroughAFieldsTable,
        slot: 80,
        field: Some(0x9b8),
    },
    Forwarder {
        routine: 0x016E3FA0,
        reached: Reached::ThroughAFieldsTable,
        slot: 40,
        field: Some(0x0b0),
    },
    Forwarder {
        routine: 0x016E72E0,
        reached: Reached::ThroughAFieldsTable,
        slot: 40,
        field: Some(0x070),
    },
    Forwarder {
        routine: 0x016EBD90,
        reached: Reached::ThroughAFieldsTable,
        slot: 248,
        field: Some(0x128),
    },
    Forwarder {
        routine: 0x0173D100,
        reached: Reached::ThroughItsOwnTable,
        slot: 0,
        field: None,
    },
    Forwarder {
        routine: 0x01791B40,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x058),
    },
    Forwarder {
        routine: 0x017C2DE0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x2d0),
    },
    Forwarder {
        routine: 0x018014C0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x018),
    },
    Forwarder {
        routine: 0x018014E0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x010),
    },
    Forwarder {
        routine: 0x0184C1A0,
        reached: Reached::ThroughAFieldsTable,
        slot: 8,
        field: Some(0x030),
    },
    Forwarder {
        routine: 0x0184CAF0,
        reached: Reached::ThroughAFieldsTable,
        slot: 40,
        field: Some(0x0a8),
    },
    Forwarder {
        routine: 0x0184CD80,
        reached: Reached::ThroughAFieldsTable,
        slot: 48,
        field: Some(0x0a8),
    },
    Forwarder {
        routine: 0x0184ED20,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x0b8),
    },
    Forwarder {
        routine: 0x01862690,
        reached: Reached::ThroughAFieldsTable,
        slot: 40,
        field: Some(0x048),
    },
    Forwarder {
        routine: 0x018626C0,
        reached: Reached::ThroughAFieldsTable,
        slot: 72,
        field: Some(0x048),
    },
    Forwarder {
        routine: 0x018626E0,
        reached: Reached::ThroughAFieldsTable,
        slot: 96,
        field: Some(0x048),
    },
    Forwarder {
        routine: 0x01862AB0,
        reached: Reached::ThroughAFieldsTable,
        slot: 200,
        field: Some(0x048),
    },
    Forwarder {
        routine: 0x01876B40,
        reached: Reached::ThroughAFieldsTable,
        slot: 40,
        field: Some(0x008),
    },
    Forwarder {
        routine: 0x01880070,
        reached: Reached::ThroughAFieldsTable,
        slot: 120,
        field: Some(0x020),
    },
    Forwarder {
        routine: 0x0189C150,
        reached: Reached::ThroughAFieldsTable,
        slot: 608,
        field: Some(0x7c8),
    },
    Forwarder {
        routine: 0x018A73A0,
        reached: Reached::ThroughAFieldsTable,
        slot: 632,
        field: Some(0x538),
    },
    Forwarder {
        routine: 0x018A9FB0,
        reached: Reached::ThroughAFieldsTable,
        slot: 672,
        field: Some(0x050),
    },
    Forwarder {
        routine: 0x018AA250,
        reached: Reached::ThroughAFieldsTable,
        slot: 672,
        field: Some(0x050),
    },
    Forwarder {
        routine: 0x018AA6F0,
        reached: Reached::ThroughAFieldsTable,
        slot: 672,
        field: Some(0x050),
    },
    Forwarder {
        routine: 0x018AAB90,
        reached: Reached::ThroughAFieldsTable,
        slot: 672,
        field: Some(0x060),
    },
    Forwarder {
        routine: 0x018AAFE0,
        reached: Reached::ThroughAFieldsTable,
        slot: 672,
        field: Some(0x070),
    },
    Forwarder {
        routine: 0x018AB240,
        reached: Reached::ThroughAFieldsTable,
        slot: 672,
        field: Some(0x070),
    },
    Forwarder {
        routine: 0x018ACD60,
        reached: Reached::ThroughAFieldsTable,
        slot: 672,
        field: Some(0x060),
    },
    Forwarder {
        routine: 0x018AD1B0,
        reached: Reached::ThroughAFieldsTable,
        slot: 672,
        field: Some(0x050),
    },
    Forwarder {
        routine: 0x018AD430,
        reached: Reached::ThroughAFieldsTable,
        slot: 672,
        field: Some(0x050),
    },
    Forwarder {
        routine: 0x018AF290,
        reached: Reached::ThroughAFieldsTable,
        slot: 616,
        field: Some(0x848),
    },
    Forwarder {
        routine: 0x018BB6D0,
        reached: Reached::ThroughAFieldsTable,
        slot: 240,
        field: Some(0x068),
    },
    Forwarder {
        routine: 0x0194EA50,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x238),
    },
    Forwarder {
        routine: 0x0194EAA0,
        reached: Reached::ThroughAFieldsTable,
        slot: 40,
        field: Some(0x238),
    },
    Forwarder {
        routine: 0x0194EE20,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x238),
    },
    Forwarder {
        routine: 0x01955510,
        reached: Reached::ThroughAFieldsTable,
        slot: 240,
        field: Some(0x1a0),
    },
    Forwarder {
        routine: 0x01955850,
        reached: Reached::ThroughAFieldsTable,
        slot: 296,
        field: Some(0x1a0),
    },
    Forwarder {
        routine: 0x01958DC0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x020),
    },
    Forwarder {
        routine: 0x01958DE0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x008),
    },
    Forwarder {
        routine: 0x01958E00,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x018),
    },
    Forwarder {
        routine: 0x01958E20,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x010),
    },
    Forwarder {
        routine: 0x0195A6C0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x1c0),
    },
    Forwarder {
        routine: 0x0195A6E0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x208),
    },
    Forwarder {
        routine: 0x0195D0D0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x290),
    },
    Forwarder {
        routine: 0x0195E520,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x030),
    },
    Forwarder {
        routine: 0x0195E5A0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x040),
    },
    Forwarder {
        routine: 0x0195F740,
        reached: Reached::ThroughAFieldsTable,
        slot: 88,
        field: Some(0x308),
    },
    Forwarder {
        routine: 0x0195F8B0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x308),
    },
    Forwarder {
        routine: 0x01966BD0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x2c8),
    },
    Forwarder {
        routine: 0x01968E60,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x1f0),
    },
    Forwarder {
        routine: 0x01968E80,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x1e8),
    },
    Forwarder {
        routine: 0x0196BB40,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x158),
    },
    Forwarder {
        routine: 0x0196BB60,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x160),
    },
    Forwarder {
        routine: 0x0196BC30,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x190),
    },
    Forwarder {
        routine: 0x0196CC50,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x028),
    },
    Forwarder {
        routine: 0x0196CC70,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x050),
    },
    Forwarder {
        routine: 0x0196D9B0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x028),
    },
    Forwarder {
        routine: 0x0196D9D0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x030),
    },
    Forwarder {
        routine: 0x0196F4E0,
        reached: Reached::ThroughAFieldsTable,
        slot: 32,
        field: Some(0x080),
    },
    Forwarder {
        routine: 0x0196F500,
        reached: Reached::ThroughAFieldsTable,
        slot: 48,
        field: Some(0x080),
    },
    Forwarder {
        routine: 0x0196F570,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x260),
    },
    Forwarder {
        routine: 0x0196F590,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x1a8),
    },
    Forwarder {
        routine: 0x01970B90,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x220),
    },
    Forwarder {
        routine: 0x01970BB0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x228),
    },
    Forwarder {
        routine: 0x01970BD0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x240),
    },
    Forwarder {
        routine: 0x01977570,
        reached: Reached::ThroughAFieldsTable,
        slot: 8,
        field: Some(0x1d8),
    },
    Forwarder {
        routine: 0x0197C7F0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x018),
    },
    Forwarder {
        routine: 0x0197D260,
        reached: Reached::ThroughAFieldsTable,
        slot: 40,
        field: Some(0x010),
    },
    Forwarder {
        routine: 0x0197D550,
        reached: Reached::ThroughAFieldsTable,
        slot: 48,
        field: Some(0x010),
    },
    Forwarder {
        routine: 0x0197E8B0,
        reached: Reached::ThroughAFieldsTable,
        slot: 40,
        field: Some(0x008),
    },
    Forwarder {
        routine: 0x0197EAA0,
        reached: Reached::ThroughAFieldsTable,
        slot: 48,
        field: Some(0x008),
    },
    Forwarder {
        routine: 0x0197EAC0,
        reached: Reached::ThroughAFieldsTable,
        slot: 176,
        field: Some(0x008),
    },
    Forwarder {
        routine: 0x0197EC40,
        reached: Reached::ThroughAFieldsTable,
        slot: 72,
        field: Some(0x008),
    },
    Forwarder {
        routine: 0x01980030,
        reached: Reached::ThroughAFieldsTable,
        slot: 40,
        field: Some(0x008),
    },
    Forwarder {
        routine: 0x01995290,
        reached: Reached::ThroughAFieldsTable,
        slot: 144,
        field: Some(0x428),
    },
    Forwarder {
        routine: 0x019AD7E0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x238),
    },
    Forwarder {
        routine: 0x019AF0A0,
        reached: Reached::ThroughAFieldsTable,
        slot: 144,
        field: Some(0x420),
    },
    Forwarder {
        routine: 0x019AF250,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x3d0),
    },
    Forwarder {
        routine: 0x01A2A970,
        reached: Reached::ThroughAFieldsTable,
        slot: 136,
        field: Some(0x738),
    },
    Forwarder {
        routine: 0x01B44960,
        reached: Reached::ThroughAFieldsTable,
        slot: 296,
        field: Some(0x6b0),
    },
    Forwarder {
        routine: 0x01B67490,
        reached: Reached::ThroughAFieldsTable,
        slot: 200,
        field: Some(0xda0),
    },
    Forwarder {
        routine: 0x01BD4F10,
        reached: Reached::ThroughAFieldsTable,
        slot: 440,
        field: Some(0x5b8),
    },
    Forwarder {
        routine: 0x01BF7F10,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x0e0),
    },
    Forwarder {
        routine: 0x01BFCBF0,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x048),
    },
    Forwarder {
        routine: 0x01BFCC10,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x050),
    },
    Forwarder {
        routine: 0x01BFCF30,
        reached: Reached::ThroughAFieldsTable,
        slot: 16,
        field: Some(0x038),
    },
    Forwarder {
        routine: 0x01C7CD70,
        reached: Reached::ThroughAFieldsTable,
        slot: 384,
        field: Some(0xa48),
    },
    Forwarder {
        routine: 0x01D11EF0,
        reached: Reached::ThroughAFieldsTable,
        slot: 144,
        field: Some(0x0a0),
    },
    Forwarder {
        routine: 0x01D81370,
        reached: Reached::ThroughAFieldsTable,
        slot: 320,
        field: Some(0xa88),
    },
    Forwarder {
        routine: 0x01D81390,
        reached: Reached::ThroughAFieldsTable,
        slot: 320,
        field: Some(0xa88),
    },
    Forwarder {
        routine: 0x01D813B0,
        reached: Reached::ThroughAFieldsTable,
        slot: 320,
        field: Some(0xa88),
    },
    Forwarder {
        routine: 0x01D83CE0,
        reached: Reached::ThroughAFieldsTable,
        slot: 328,
        field: Some(0xa88),
    },
];

/// How many there are.
pub const FORWARDER_COUNT: usize = 373;

/// Implements part of the forwarding family.
///
/// What one routine does, if it is one of these.
#[must_use]
pub fn forwarder_at(routine: u32) -> Option<&'static Forwarder> {
    FORWARDERS
        .binary_search_by_key(&routine, |held| held.routine)
        .ok()
        .map(|at| &FORWARDERS[at])
}

/// Implements part of the forwarding family.
///
/// Every routine that finds its table the same way.
#[must_use]
pub fn reaching(reached: Reached) -> Vec<&'static Forwarder> {
    FORWARDERS
        .iter()
        .filter(|held| held.reached == reached)
        .collect()
}

/// Implements part of the forwarding family.
///
/// The slots handed on to most often, commonest first.
#[must_use]
pub fn busiest_slots(how_many: usize) -> Vec<(i32, usize)> {
    let mut counted: Vec<(i32, usize)> = Vec::new();
    for held in &FORWARDERS {
        match counted.iter_mut().find(|(slot, _)| *slot == held.slot) {
            Some((_, seen)) => *seen += 1,
            None => counted.push((held.slot, 1)),
        }
    }
    counted.sort_by(|left, right| right.1.cmp(&left.1).then(left.0.cmp(&right.0)));
    counted.truncate(how_many);
    counted
}

/// Implements part of the forwarding family.
///
/// The fields reached into, commonest first.
///
/// Spread much more widely than the slots are. So it is not one held thing
/// answered in many ways — it is many held things answered the same way.
#[must_use]
pub fn fields_reached(how_many: usize) -> Vec<(u32, usize)> {
    let mut counted: Vec<(u32, usize)> = Vec::new();
    for held in FORWARDERS.iter().filter_map(|held| held.field) {
        match counted.iter_mut().find(|(at, _)| *at == held) {
            Some((_, seen)) => *seen += 1,
            None => counted.push((held, 1)),
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
        assert_eq!(FORWARDERS.len(), FORWARDER_COUNT);
    }

    #[test]
    fn the_table_is_sorted_so_it_can_be_searched() {
        assert!(
            FORWARDERS
                .windows(2)
                .all(|pair| pair[0].routine < pair[1].routine)
        );
    }

    #[test]
    fn a_forwarder_can_be_found_by_its_address() {
        let known = FORWARDERS[0].routine;

        assert!(forwarder_at(known).is_some());
        assert!(forwarder_at(0).is_none());
    }

    #[test]
    fn most_of_them_reach_into_a_field_of_what_they_were_given() {
        let through_a_field = reaching(Reached::ThroughAFieldsTable).len();

        assert!(through_a_field * 2 > FORWARDERS.len());
    }

    #[test]
    fn and_only_those_name_a_field() {
        for held in &FORWARDERS {
            assert_eq!(
                held.field.is_some(),
                held.reached == Reached::ThroughAFieldsTable,
                "{:#010X}",
                held.routine
            );
        }
    }

    #[test]
    fn one_slot_is_handed_on_to_far_more_than_any_other() {
        // One method of one interface, answered on behalf of a held thing by
        // many different holders.
        let busiest = busiest_slots(3);

        assert!(busiest[0].1 > busiest[1].1 * 2, "{busiest:?}");
    }

    #[test]
    fn the_fields_are_spread_much_more_widely_than_the_slots() {
        // So it is not one held thing answered in many ways — it is many held
        // things answered the same way.
        let slots = busiest_slots(usize::MAX).len();
        let fields = fields_reached(usize::MAX).len();

        assert!(fields > slots, "{fields} fields, {slots} slots");
    }

    #[test]
    fn every_offset_is_a_whole_number_of_addresses() {
        for held in &FORWARDERS {
            assert_eq!(held.slot % 8, 0, "{:#010X}", held.routine);
            if let Some(field) = held.field {
                assert_eq!(field % 8, 0, "{:#010X}", held.routine);
            }
        }
    }

    #[test]
    fn a_few_reach_their_table_without_a_field_at_all() {
        let others: usize = [
            Reached::ThroughItsOwnTable,
            Reached::ThroughATableNamedOutright,
            Reached::AStoredRoutine,
        ]
        .into_iter()
        .map(|reached| reaching(reached).len())
        .sum();

        assert!(others > 0);
        assert!(others < FORWARDERS.len() / 10);
    }

    #[test]
    fn none_of_these_is_already_spoken_for_by_another_sweep() {
        for held in FORWARDERS.iter().take(200) {
            assert!(crate::frame_pads::pad_at(held.routine).is_none());
            assert!(crate::shim_routines::target_of(held.routine).is_none());
            assert!(crate::table_dispatchers::slot_of(held.routine).is_none());
            assert!(crate::stub_routines::pair_at(held.routine).is_none());
        }
    }

    #[test]
    fn every_routine_is_listed_once() {
        let mut routines: Vec<u32> = FORWARDERS.iter().map(|held| held.routine).collect();
        let before = routines.len();
        routines.sort_unstable();
        routines.dedup();

        assert_eq!(routines.len(), before);
    }
}
