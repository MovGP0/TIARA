//! Routines that only read, or only write, one field of what they are given.
//!
//! 837 of them. A routine of this shape is a property: it takes an object, goes
//! to one fixed place inside it, and either hands back what is there or puts
//! something there. There is no test, no conversion and no second statement.
//!
//! Together they are a partial map of how the program's objects are laid out —
//! which places are reached from outside at all, how wide each is, and whether
//! anything ever writes to it. Two things in that map are worth stating.
//!
//! Reads outnumber writes by about three to two, so a good half of the fields
//! reached this way are never set through a routine of their own; whatever sets
//! them does it as part of doing something else. And the widths are dominated by
//! the widest, which in a program of this age means these are mostly references
//! to other objects rather than values.
//!
//! The third thing is a warning about the map rather than a fact in it. An
//! offset does **not** identify a field. The places reached most often are
//! reached at two, three and four different widths, because objects of
//! different classes are laid out over each other and the same number means
//! something different in each. Only the rarely-reached places are unambiguous.
//! So this is a map of layout, not of fields, and naming any of these offsets
//! would be inventing something the program does not say.

// The addresses are written without separators so the port-mapping importer can
// match them against the recovered functions.
#![allow(clippy::unreadable_literal)]

/// Which way one of these goes.
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord)]
pub enum Direction {
    /// Hands back what is at the place.
    Reads,
    /// Puts something there.
    Writes,
}

/// One routine that reaches one field.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct Accessor {
    /// Where the routine sits.
    pub routine: u32,
    /// Which way it goes.
    pub direction: Direction,
    /// How far into the object the field sits.
    pub offset: u32,
    /// How wide the field is, in bytes.
    pub width: u8,
}

/// Every such routine, in address order.
pub static ACCESSORS: [Accessor; 837] = [
    Accessor {
        routine: 0x0044E130,
        direction: Direction::Writes,
        offset: 0x020,
        width: 8,
    },
    Accessor {
        routine: 0x00452EC0,
        direction: Direction::Reads,
        offset: 0x010,
        width: 4,
    },
    Accessor {
        routine: 0x00452EF0,
        direction: Direction::Reads,
        offset: 0x014,
        width: 4,
    },
    Accessor {
        routine: 0x0045B330,
        direction: Direction::Reads,
        offset: 0x010,
        width: 4,
    },
    Accessor {
        routine: 0x004B19B0,
        direction: Direction::Reads,
        offset: 0x008,
        width: 8,
    },
    Accessor {
        routine: 0x004B2780,
        direction: Direction::Reads,
        offset: 0x028,
        width: 8,
    },
    Accessor {
        routine: 0x004B5D80,
        direction: Direction::Reads,
        offset: 0x044,
        width: 4,
    },
    Accessor {
        routine: 0x004B5D90,
        direction: Direction::Reads,
        offset: 0x040,
        width: 4,
    },
    Accessor {
        routine: 0x004BAFD0,
        direction: Direction::Writes,
        offset: 0x030,
        width: 8,
    },
    Accessor {
        routine: 0x004D2FE0,
        direction: Direction::Reads,
        offset: 0x008,
        width: 8,
    },
    Accessor {
        routine: 0x004DC520,
        direction: Direction::Reads,
        offset: 0x018,
        width: 8,
    },
    Accessor {
        routine: 0x00536080,
        direction: Direction::Reads,
        offset: 0x020,
        width: 8,
    },
    Accessor {
        routine: 0x00545EE0,
        direction: Direction::Reads,
        offset: 0x008,
        width: 8,
    },
    Accessor {
        routine: 0x005466A0,
        direction: Direction::Reads,
        offset: 0x008,
        width: 8,
    },
    Accessor {
        routine: 0x005486B0,
        direction: Direction::Reads,
        offset: 0x008,
        width: 8,
    },
    Accessor {
        routine: 0x00548D90,
        direction: Direction::Reads,
        offset: 0x008,
        width: 8,
    },
    Accessor {
        routine: 0x0054BFE0,
        direction: Direction::Reads,
        offset: 0x008,
        width: 8,
    },
    Accessor {
        routine: 0x0054C150,
        direction: Direction::Reads,
        offset: 0x008,
        width: 8,
    },
    Accessor {
        routine: 0x00552420,
        direction: Direction::Reads,
        offset: 0x008,
        width: 8,
    },
    Accessor {
        routine: 0x00552680,
        direction: Direction::Reads,
        offset: 0x008,
        width: 8,
    },
    Accessor {
        routine: 0x00552B00,
        direction: Direction::Reads,
        offset: 0x008,
        width: 8,
    },
    Accessor {
        routine: 0x005586B0,
        direction: Direction::Reads,
        offset: 0x038,
        width: 1,
    },
    Accessor {
        routine: 0x005586E0,
        direction: Direction::Reads,
        offset: 0x020,
        width: 8,
    },
    Accessor {
        routine: 0x00558B10,
        direction: Direction::Reads,
        offset: 0x008,
        width: 8,
    },
    Accessor {
        routine: 0x00558CF0,
        direction: Direction::Reads,
        offset: 0x008,
        width: 8,
    },
    Accessor {
        routine: 0x005598E0,
        direction: Direction::Reads,
        offset: 0x038,
        width: 1,
    },
    Accessor {
        routine: 0x00559C00,
        direction: Direction::Reads,
        offset: 0x008,
        width: 8,
    },
    Accessor {
        routine: 0x00559C10,
        direction: Direction::Reads,
        offset: 0x038,
        width: 8,
    },
    Accessor {
        routine: 0x00559CB0,
        direction: Direction::Reads,
        offset: 0x050,
        width: 2,
    },
    Accessor {
        routine: 0x0055BA30,
        direction: Direction::Reads,
        offset: 0x008,
        width: 8,
    },
    Accessor {
        routine: 0x0055C290,
        direction: Direction::Reads,
        offset: 0x008,
        width: 8,
    },
    Accessor {
        routine: 0x005EA700,
        direction: Direction::Writes,
        offset: 0x008,
        width: 8,
    },
    Accessor {
        routine: 0x006021B0,
        direction: Direction::Reads,
        offset: 0x039,
        width: 1,
    },
    Accessor {
        routine: 0x0060DD00,
        direction: Direction::Reads,
        offset: 0x04c,
        width: 4,
    },
    Accessor {
        routine: 0x0060DD10,
        direction: Direction::Reads,
        offset: 0x048,
        width: 4,
    },
    Accessor {
        routine: 0x0061D2A0,
        direction: Direction::Reads,
        offset: 0x0c0,
        width: 8,
    },
    Accessor {
        routine: 0x0064C050,
        direction: Direction::Reads,
        offset: 0x0aa,
        width: 1,
    },
    Accessor {
        routine: 0x0064C080,
        direction: Direction::Reads,
        offset: 0x078,
        width: 8,
    },
    Accessor {
        routine: 0x0064C440,
        direction: Direction::Writes,
        offset: 0x0af,
        width: 1,
    },
    Accessor {
        routine: 0x0064C470,
        direction: Direction::Reads,
        offset: 0x0af,
        width: 1,
    },
    Accessor {
        routine: 0x00650BB0,
        direction: Direction::Reads,
        offset: 0x0e8,
        width: 8,
    },
    Accessor {
        routine: 0x00652050,
        direction: Direction::Reads,
        offset: 0x128,
        width: 8,
    },
    Accessor {
        routine: 0x00660D10,
        direction: Direction::Writes,
        offset: 0x040,
        width: 4,
    },
    Accessor {
        routine: 0x00680640,
        direction: Direction::Reads,
        offset: 0x49c,
        width: 1,
    },
    Accessor {
        routine: 0x00682280,
        direction: Direction::Reads,
        offset: 0x490,
        width: 1,
    },
    Accessor {
        routine: 0x0068A2C0,
        direction: Direction::Reads,
        offset: 0x499,
        width: 1,
    },
    Accessor {
        routine: 0x006AB190,
        direction: Direction::Reads,
        offset: 0x170,
        width: 8,
    },
    Accessor {
        routine: 0x006AB1F0,
        direction: Direction::Reads,
        offset: 0x170,
        width: 8,
    },
    Accessor {
        routine: 0x006D8720,
        direction: Direction::Reads,
        offset: 0x028,
        width: 8,
    },
    Accessor {
        routine: 0x006DA390,
        direction: Direction::Reads,
        offset: 0x028,
        width: 8,
    },
    Accessor {
        routine: 0x006EDB60,
        direction: Direction::Reads,
        offset: 0x028,
        width: 8,
    },
    Accessor {
        routine: 0x006EDB70,
        direction: Direction::Reads,
        offset: 0x028,
        width: 8,
    },
    Accessor {
        routine: 0x007058A0,
        direction: Direction::Reads,
        offset: 0x49c,
        width: 4,
    },
    Accessor {
        routine: 0x00707DF0,
        direction: Direction::Reads,
        offset: 0x028,
        width: 8,
    },
    Accessor {
        routine: 0x00707F20,
        direction: Direction::Reads,
        offset: 0x028,
        width: 8,
    },
    Accessor {
        routine: 0x00716C20,
        direction: Direction::Reads,
        offset: 0x038,
        width: 8,
    },
    Accessor {
        routine: 0x00722530,
        direction: Direction::Reads,
        offset: 0x080,
        width: 8,
    },
    Accessor {
        routine: 0x007241D0,
        direction: Direction::Reads,
        offset: 0x110,
        width: 8,
    },
    Accessor {
        routine: 0x00728D30,
        direction: Direction::Reads,
        offset: 0x0b0,
        width: 8,
    },
    Accessor {
        routine: 0x00743960,
        direction: Direction::Reads,
        offset: 0x498,
        width: 1,
    },
    Accessor {
        routine: 0x0074CD00,
        direction: Direction::Reads,
        offset: 0x09c,
        width: 4,
    },
    Accessor {
        routine: 0x0074CD10,
        direction: Direction::Reads,
        offset: 0x090,
        width: 4,
    },
    Accessor {
        routine: 0x0074CD20,
        direction: Direction::Reads,
        offset: 0x094,
        width: 4,
    },
    Accessor {
        routine: 0x0074CD30,
        direction: Direction::Reads,
        offset: 0x098,
        width: 4,
    },
    Accessor {
        routine: 0x0077E780,
        direction: Direction::Reads,
        offset: 0x068,
        width: 1,
    },
    Accessor {
        routine: 0x00788C10,
        direction: Direction::Reads,
        offset: 0x044,
        width: 4,
    },
    Accessor {
        routine: 0x00788C20,
        direction: Direction::Reads,
        offset: 0x030,
        width: 4,
    },
    Accessor {
        routine: 0x007D8990,
        direction: Direction::Reads,
        offset: 0x008,
        width: 8,
    },
    Accessor {
        routine: 0x007FCE50,
        direction: Direction::Reads,
        offset: 0x520,
        width: 4,
    },
    Accessor {
        routine: 0x007FFBE0,
        direction: Direction::Reads,
        offset: 0x4e0,
        width: 8,
    },
    Accessor {
        routine: 0x008005A0,
        direction: Direction::Reads,
        offset: 0x524,
        width: 1,
    },
    Accessor {
        routine: 0x008199E0,
        direction: Direction::Reads,
        offset: 0x010,
        width: 8,
    },
    Accessor {
        routine: 0x00835810,
        direction: Direction::Reads,
        offset: 0x494,
        width: 4,
    },
    Accessor {
        routine: 0x0083F440,
        direction: Direction::Reads,
        offset: 0x4a1,
        width: 1,
    },
    Accessor {
        routine: 0x008733D0,
        direction: Direction::Reads,
        offset: 0x018,
        width: 1,
    },
    Accessor {
        routine: 0x008B8500,
        direction: Direction::Reads,
        offset: 0x010,
        width: 8,
    },
    Accessor {
        routine: 0x008B8AF0,
        direction: Direction::Reads,
        offset: 0x020,
        width: 8,
    },
    Accessor {
        routine: 0x008B8B00,
        direction: Direction::Reads,
        offset: 0x028,
        width: 8,
    },
    Accessor {
        routine: 0x008B8B10,
        direction: Direction::Reads,
        offset: 0x030,
        width: 8,
    },
    Accessor {
        routine: 0x008B8B20,
        direction: Direction::Reads,
        offset: 0x038,
        width: 1,
    },
    Accessor {
        routine: 0x008B9260,
        direction: Direction::Writes,
        offset: 0x038,
        width: 1,
    },
    Accessor {
        routine: 0x008E6B60,
        direction: Direction::Writes,
        offset: 0x00a,
        width: 2,
    },
    Accessor {
        routine: 0x008E6B70,
        direction: Direction::Writes,
        offset: 0x008,
        width: 1,
    },
    Accessor {
        routine: 0x008E6B80,
        direction: Direction::Writes,
        offset: 0x00c,
        width: 1,
    },
    Accessor {
        routine: 0x008E6B90,
        direction: Direction::Writes,
        offset: 0x00d,
        width: 1,
    },
    Accessor {
        routine: 0x008F4E60,
        direction: Direction::Writes,
        offset: 0x0f8,
        width: 8,
    },
    Accessor {
        routine: 0x008F8D20,
        direction: Direction::Reads,
        offset: 0x008,
        width: 4,
    },
    Accessor {
        routine: 0x008F8D30,
        direction: Direction::Reads,
        offset: 0x00c,
        width: 4,
    },
    Accessor {
        routine: 0x00949160,
        direction: Direction::Reads,
        offset: 0x108,
        width: 8,
    },
    Accessor {
        routine: 0x00949B00,
        direction: Direction::Writes,
        offset: 0x010,
        width: 1,
    },
    Accessor {
        routine: 0x00949B10,
        direction: Direction::Writes,
        offset: 0x018,
        width: 8,
    },
    Accessor {
        routine: 0x00949B90,
        direction: Direction::Writes,
        offset: 0x028,
        width: 2,
    },
    Accessor {
        routine: 0x0094DD80,
        direction: Direction::Reads,
        offset: 0x048,
        width: 8,
    },
    Accessor {
        routine: 0x0094DD90,
        direction: Direction::Reads,
        offset: 0x060,
        width: 8,
    },
    Accessor {
        routine: 0x00950760,
        direction: Direction::Reads,
        offset: 0x080,
        width: 1,
    },
    Accessor {
        routine: 0x009508E0,
        direction: Direction::Reads,
        offset: 0x0b0,
        width: 1,
    },
    Accessor {
        routine: 0x00951870,
        direction: Direction::Reads,
        offset: 0x080,
        width: 8,
    },
    Accessor {
        routine: 0x00954380,
        direction: Direction::Reads,
        offset: 0x088,
        width: 8,
    },
    Accessor {
        routine: 0x009593F0,
        direction: Direction::Writes,
        offset: 0x028,
        width: 1,
    },
    Accessor {
        routine: 0x0095FE10,
        direction: Direction::Writes,
        offset: 0x021,
        width: 1,
    },
    Accessor {
        routine: 0x00961A00,
        direction: Direction::Reads,
        offset: 0x028,
        width: 8,
    },
    Accessor {
        routine: 0x00961A10,
        direction: Direction::Reads,
        offset: 0x030,
        width: 8,
    },
    Accessor {
        routine: 0x00961A20,
        direction: Direction::Reads,
        offset: 0x038,
        width: 8,
    },
    Accessor {
        routine: 0x00961A30,
        direction: Direction::Reads,
        offset: 0x048,
        width: 8,
    },
    Accessor {
        routine: 0x00961A40,
        direction: Direction::Reads,
        offset: 0x058,
        width: 8,
    },
    Accessor {
        routine: 0x00961A90,
        direction: Direction::Reads,
        offset: 0x068,
        width: 8,
    },
    Accessor {
        routine: 0x00961AA0,
        direction: Direction::Reads,
        offset: 0x070,
        width: 8,
    },
    Accessor {
        routine: 0x00961AB0,
        direction: Direction::Reads,
        offset: 0x080,
        width: 8,
    },
    Accessor {
        routine: 0x00961AC0,
        direction: Direction::Reads,
        offset: 0x090,
        width: 8,
    },
    Accessor {
        routine: 0x00963520,
        direction: Direction::Reads,
        offset: 0x030,
        width: 8,
    },
    Accessor {
        routine: 0x00963530,
        direction: Direction::Reads,
        offset: 0x038,
        width: 8,
    },
    Accessor {
        routine: 0x00963540,
        direction: Direction::Reads,
        offset: 0x040,
        width: 8,
    },
    Accessor {
        routine: 0x00963550,
        direction: Direction::Reads,
        offset: 0x050,
        width: 8,
    },
    Accessor {
        routine: 0x00963560,
        direction: Direction::Reads,
        offset: 0x060,
        width: 8,
    },
    Accessor {
        routine: 0x009635B0,
        direction: Direction::Reads,
        offset: 0x070,
        width: 8,
    },
    Accessor {
        routine: 0x009635C0,
        direction: Direction::Reads,
        offset: 0x078,
        width: 8,
    },
    Accessor {
        routine: 0x009635D0,
        direction: Direction::Reads,
        offset: 0x088,
        width: 8,
    },
    Accessor {
        routine: 0x009635E0,
        direction: Direction::Reads,
        offset: 0x098,
        width: 8,
    },
    Accessor {
        routine: 0x009669A0,
        direction: Direction::Writes,
        offset: 0x028,
        width: 1,
    },
    Accessor {
        routine: 0x00967300,
        direction: Direction::Reads,
        offset: 0x048,
        width: 1,
    },
    Accessor {
        routine: 0x00967360,
        direction: Direction::Reads,
        offset: 0x058,
        width: 1,
    },
    Accessor {
        routine: 0x0096E920,
        direction: Direction::Reads,
        offset: 0x020,
        width: 8,
    },
    Accessor {
        routine: 0x0096E930,
        direction: Direction::Reads,
        offset: 0x028,
        width: 8,
    },
    Accessor {
        routine: 0x0096E940,
        direction: Direction::Reads,
        offset: 0x030,
        width: 8,
    },
    Accessor {
        routine: 0x0096E950,
        direction: Direction::Reads,
        offset: 0x038,
        width: 8,
    },
    Accessor {
        routine: 0x0096E960,
        direction: Direction::Reads,
        offset: 0x040,
        width: 8,
    },
    Accessor {
        routine: 0x0096E970,
        direction: Direction::Reads,
        offset: 0x048,
        width: 8,
    },
    Accessor {
        routine: 0x0096E980,
        direction: Direction::Reads,
        offset: 0x058,
        width: 8,
    },
    Accessor {
        routine: 0x0096E9E0,
        direction: Direction::Reads,
        offset: 0x060,
        width: 8,
    },
    Accessor {
        routine: 0x0096E9F0,
        direction: Direction::Reads,
        offset: 0x068,
        width: 8,
    },
    Accessor {
        routine: 0x0096EA00,
        direction: Direction::Reads,
        offset: 0x070,
        width: 8,
    },
    Accessor {
        routine: 0x0096EA10,
        direction: Direction::Reads,
        offset: 0x078,
        width: 8,
    },
    Accessor {
        routine: 0x0096EA20,
        direction: Direction::Reads,
        offset: 0x080,
        width: 8,
    },
    Accessor {
        routine: 0x0096FEF0,
        direction: Direction::Reads,
        offset: 0x010,
        width: 8,
    },
    Accessor {
        routine: 0x0096FF00,
        direction: Direction::Reads,
        offset: 0x018,
        width: 8,
    },
    Accessor {
        routine: 0x0096FF10,
        direction: Direction::Reads,
        offset: 0x020,
        width: 8,
    },
    Accessor {
        routine: 0x0096FF20,
        direction: Direction::Reads,
        offset: 0x028,
        width: 8,
    },
    Accessor {
        routine: 0x0096FF30,
        direction: Direction::Reads,
        offset: 0x030,
        width: 8,
    },
    Accessor {
        routine: 0x0096FF40,
        direction: Direction::Reads,
        offset: 0x040,
        width: 8,
    },
    Accessor {
        routine: 0x0096FF50,
        direction: Direction::Reads,
        offset: 0x048,
        width: 8,
    },
    Accessor {
        routine: 0x0096FF60,
        direction: Direction::Reads,
        offset: 0x050,
        width: 8,
    },
    Accessor {
        routine: 0x0096FF70,
        direction: Direction::Reads,
        offset: 0x058,
        width: 8,
    },
    Accessor {
        routine: 0x0096FF80,
        direction: Direction::Reads,
        offset: 0x060,
        width: 8,
    },
    Accessor {
        routine: 0x0096FF90,
        direction: Direction::Reads,
        offset: 0x068,
        width: 8,
    },
    Accessor {
        routine: 0x0096FFA0,
        direction: Direction::Reads,
        offset: 0x070,
        width: 8,
    },
    Accessor {
        routine: 0x00976710,
        direction: Direction::Writes,
        offset: 0x07a,
        width: 1,
    },
    Accessor {
        routine: 0x00977F80,
        direction: Direction::Writes,
        offset: 0x078,
        width: 8,
    },
    Accessor {
        routine: 0x009785D0,
        direction: Direction::Writes,
        offset: 0x098,
        width: 1,
    },
    Accessor {
        routine: 0x00978600,
        direction: Direction::Writes,
        offset: 0x0a4,
        width: 1,
    },
    Accessor {
        routine: 0x0097D370,
        direction: Direction::Writes,
        offset: 0x088,
        width: 1,
    },
    Accessor {
        routine: 0x0097FA40,
        direction: Direction::Reads,
        offset: 0x0a0,
        width: 1,
    },
    Accessor {
        routine: 0x0097FA50,
        direction: Direction::Reads,
        offset: 0x0a1,
        width: 1,
    },
    Accessor {
        routine: 0x00980760,
        direction: Direction::Reads,
        offset: 0x090,
        width: 8,
    },
    Accessor {
        routine: 0x00982D70,
        direction: Direction::Writes,
        offset: 0x080,
        width: 1,
    },
    Accessor {
        routine: 0x00985730,
        direction: Direction::Writes,
        offset: 0x0a0,
        width: 1,
    },
    Accessor {
        routine: 0x00985770,
        direction: Direction::Writes,
        offset: 0x0b0,
        width: 1,
    },
    Accessor {
        routine: 0x0098D590,
        direction: Direction::Reads,
        offset: 0x040,
        width: 1,
    },
    Accessor {
        routine: 0x00990350,
        direction: Direction::Reads,
        offset: 0x040,
        width: 1,
    },
    Accessor {
        routine: 0x00990520,
        direction: Direction::Reads,
        offset: 0x040,
        width: 8,
    },
    Accessor {
        routine: 0x009D4120,
        direction: Direction::Reads,
        offset: 0x018,
        width: 8,
    },
    Accessor {
        routine: 0x009D5ED0,
        direction: Direction::Reads,
        offset: 0x018,
        width: 8,
    },
    Accessor {
        routine: 0x009EA0C0,
        direction: Direction::Reads,
        offset: 0x03c,
        width: 4,
    },
    Accessor {
        routine: 0x009EA0D0,
        direction: Direction::Reads,
        offset: 0x038,
        width: 4,
    },
    Accessor {
        routine: 0x00A061A0,
        direction: Direction::Reads,
        offset: 0x028,
        width: 8,
    },
    Accessor {
        routine: 0x00A48670,
        direction: Direction::Reads,
        offset: 0x018,
        width: 8,
    },
    Accessor {
        routine: 0x00A486C0,
        direction: Direction::Reads,
        offset: 0x020,
        width: 8,
    },
    Accessor {
        routine: 0x00A48D20,
        direction: Direction::Reads,
        offset: 0x018,
        width: 8,
    },
    Accessor {
        routine: 0x00A491D0,
        direction: Direction::Reads,
        offset: 0x018,
        width: 8,
    },
    Accessor {
        routine: 0x00A73050,
        direction: Direction::Reads,
        offset: 0x014,
        width: 4,
    },
    Accessor {
        routine: 0x00A74960,
        direction: Direction::Reads,
        offset: 0x018,
        width: 4,
    },
    Accessor {
        routine: 0x00A77760,
        direction: Direction::Writes,
        offset: 0x49c,
        width: 4,
    },
    Accessor {
        routine: 0x00A77770,
        direction: Direction::Writes,
        offset: 0x4a0,
        width: 1,
    },
    Accessor {
        routine: 0x00A77780,
        direction: Direction::Writes,
        offset: 0x4a4,
        width: 4,
    },
    Accessor {
        routine: 0x00A77790,
        direction: Direction::Writes,
        offset: 0x490,
        width: 4,
    },
    Accessor {
        routine: 0x00A77820,
        direction: Direction::Writes,
        offset: 0x4a8,
        width: 4,
    },
    Accessor {
        routine: 0x00A77850,
        direction: Direction::Writes,
        offset: 0x4c0,
        width: 4,
    },
    Accessor {
        routine: 0x00A77860,
        direction: Direction::Writes,
        offset: 0x4c4,
        width: 4,
    },
    Accessor {
        routine: 0x00A77870,
        direction: Direction::Writes,
        offset: 0x494,
        width: 4,
    },
    Accessor {
        routine: 0x00A77880,
        direction: Direction::Writes,
        offset: 0x4c8,
        width: 4,
    },
    Accessor {
        routine: 0x00A77890,
        direction: Direction::Writes,
        offset: 0x4d0,
        width: 2,
    },
    Accessor {
        routine: 0x00A778A0,
        direction: Direction::Writes,
        offset: 0x4d8,
        width: 4,
    },
    Accessor {
        routine: 0x00A778B0,
        direction: Direction::Writes,
        offset: 0x4d4,
        width: 4,
    },
    Accessor {
        routine: 0x00A778C0,
        direction: Direction::Writes,
        offset: 0x4dc,
        width: 1,
    },
    Accessor {
        routine: 0x00A77C90,
        direction: Direction::Writes,
        offset: 0x4f8,
        width: 8,
    },
    Accessor {
        routine: 0x00A77CA0,
        direction: Direction::Writes,
        offset: 0x4e0,
        width: 8,
    },
    Accessor {
        routine: 0x00A77CB0,
        direction: Direction::Writes,
        offset: 0x4e8,
        width: 8,
    },
    Accessor {
        routine: 0x00A77CC0,
        direction: Direction::Writes,
        offset: 0x4f0,
        width: 8,
    },
    Accessor {
        routine: 0x00A77CD0,
        direction: Direction::Writes,
        offset: 0x500,
        width: 4,
    },
    Accessor {
        routine: 0x00A77CF0,
        direction: Direction::Writes,
        offset: 0x728,
        width: 1,
    },
    Accessor {
        routine: 0x00A77D90,
        direction: Direction::Writes,
        offset: 0x498,
        width: 4,
    },
    Accessor {
        routine: 0x00A77DA0,
        direction: Direction::Writes,
        offset: 0x4cc,
        width: 4,
    },
    Accessor {
        routine: 0x00A79BA0,
        direction: Direction::Writes,
        offset: 0x098,
        width: 1,
    },
    Accessor {
        routine: 0x00A7A760,
        direction: Direction::Reads,
        offset: 0x0b0,
        width: 4,
    },
    Accessor {
        routine: 0x00A94820,
        direction: Direction::Reads,
        offset: 0x054,
        width: 4,
    },
    Accessor {
        routine: 0x00A9A470,
        direction: Direction::Reads,
        offset: 0x140,
        width: 8,
    },
    Accessor {
        routine: 0x00A9ABF0,
        direction: Direction::Reads,
        offset: 0x148,
        width: 8,
    },
    Accessor {
        routine: 0x00AA8A40,
        direction: Direction::Writes,
        offset: 0x080,
        width: 1,
    },
    Accessor {
        routine: 0x00AA9A70,
        direction: Direction::Reads,
        offset: 0x078,
        width: 4,
    },
    Accessor {
        routine: 0x00AA9A80,
        direction: Direction::Reads,
        offset: 0x06c,
        width: 4,
    },
    Accessor {
        routine: 0x00AA9A90,
        direction: Direction::Reads,
        offset: 0x074,
        width: 4,
    },
    Accessor {
        routine: 0x00AA9AA0,
        direction: Direction::Reads,
        offset: 0x070,
        width: 4,
    },
    Accessor {
        routine: 0x00AA9AB0,
        direction: Direction::Reads,
        offset: 0x080,
        width: 8,
    },
    Accessor {
        routine: 0x00AA9AC0,
        direction: Direction::Reads,
        offset: 0x068,
        width: 4,
    },
    Accessor {
        routine: 0x00AA9AD0,
        direction: Direction::Reads,
        offset: 0x05c,
        width: 4,
    },
    Accessor {
        routine: 0x00AA9AE0,
        direction: Direction::Reads,
        offset: 0x064,
        width: 4,
    },
    Accessor {
        routine: 0x00AA9AF0,
        direction: Direction::Reads,
        offset: 0x060,
        width: 4,
    },
    Accessor {
        routine: 0x00AAAE50,
        direction: Direction::Writes,
        offset: 0x078,
        width: 4,
    },
    Accessor {
        routine: 0x00AAAE60,
        direction: Direction::Writes,
        offset: 0x06c,
        width: 4,
    },
    Accessor {
        routine: 0x00AAAE70,
        direction: Direction::Writes,
        offset: 0x074,
        width: 4,
    },
    Accessor {
        routine: 0x00AAAE80,
        direction: Direction::Writes,
        offset: 0x070,
        width: 4,
    },
    Accessor {
        routine: 0x00AAAE90,
        direction: Direction::Writes,
        offset: 0x068,
        width: 4,
    },
    Accessor {
        routine: 0x00AAAEA0,
        direction: Direction::Writes,
        offset: 0x05c,
        width: 4,
    },
    Accessor {
        routine: 0x00AAAEB0,
        direction: Direction::Writes,
        offset: 0x064,
        width: 4,
    },
    Accessor {
        routine: 0x00AAAEC0,
        direction: Direction::Writes,
        offset: 0x060,
        width: 4,
    },
    Accessor {
        routine: 0x00ABE050,
        direction: Direction::Reads,
        offset: 0x1a0,
        width: 8,
    },
    Accessor {
        routine: 0x00ABE6A0,
        direction: Direction::Reads,
        offset: 0x1a0,
        width: 8,
    },
    Accessor {
        routine: 0x00ABEDE0,
        direction: Direction::Reads,
        offset: 0x1a0,
        width: 8,
    },
    Accessor {
        routine: 0x00AC28C0,
        direction: Direction::Reads,
        offset: 0x0d0,
        width: 4,
    },
    Accessor {
        routine: 0x00AC28D0,
        direction: Direction::Reads,
        offset: 0x0d4,
        width: 4,
    },
    Accessor {
        routine: 0x00AC2E50,
        direction: Direction::Writes,
        offset: 0x0d0,
        width: 4,
    },
    Accessor {
        routine: 0x00AC2E60,
        direction: Direction::Writes,
        offset: 0x0d4,
        width: 4,
    },
    Accessor {
        routine: 0x00AC3560,
        direction: Direction::Reads,
        offset: 0x07c,
        width: 4,
    },
    Accessor {
        routine: 0x00AC37A0,
        direction: Direction::Writes,
        offset: 0x018,
        width: 8,
    },
    Accessor {
        routine: 0x00AC4910,
        direction: Direction::Reads,
        offset: 0x1a0,
        width: 8,
    },
    Accessor {
        routine: 0x00AC4E90,
        direction: Direction::Reads,
        offset: 0x080,
        width: 4,
    },
    Accessor {
        routine: 0x00AC4EE0,
        direction: Direction::Reads,
        offset: 0x0c0,
        width: 4,
    },
    Accessor {
        routine: 0x00ACB130,
        direction: Direction::Reads,
        offset: 0x158,
        width: 8,
    },
    Accessor {
        routine: 0x00ACBCB0,
        direction: Direction::Reads,
        offset: 0x158,
        width: 8,
    },
    Accessor {
        routine: 0x00ACCCF0,
        direction: Direction::Reads,
        offset: 0x158,
        width: 8,
    },
    Accessor {
        routine: 0x00ACDF80,
        direction: Direction::Reads,
        offset: 0x158,
        width: 8,
    },
    Accessor {
        routine: 0x00ACEDE0,
        direction: Direction::Reads,
        offset: 0x148,
        width: 8,
    },
    Accessor {
        routine: 0x00ACF6A0,
        direction: Direction::Reads,
        offset: 0x140,
        width: 8,
    },
    Accessor {
        routine: 0x00AF6BF0,
        direction: Direction::Reads,
        offset: 0x910,
        width: 8,
    },
    Accessor {
        routine: 0x00AF6DF0,
        direction: Direction::Reads,
        offset: 0x0e0,
        width: 2,
    },
    Accessor {
        routine: 0x00B061D0,
        direction: Direction::Writes,
        offset: 0x550,
        width: 8,
    },
    Accessor {
        routine: 0x00B06310,
        direction: Direction::Writes,
        offset: 0x530,
        width: 8,
    },
    Accessor {
        routine: 0x00B07AC0,
        direction: Direction::Reads,
        offset: 0x4d8,
        width: 8,
    },
    Accessor {
        routine: 0x00B07B40,
        direction: Direction::Reads,
        offset: 0x4b8,
        width: 8,
    },
    Accessor {
        routine: 0x00B10B90,
        direction: Direction::Reads,
        offset: 0x4a4,
        width: 4,
    },
    Accessor {
        routine: 0x00B10BA0,
        direction: Direction::Reads,
        offset: 0x4e0,
        width: 4,
    },
    Accessor {
        routine: 0x00B11070,
        direction: Direction::Reads,
        offset: 0x600,
        width: 8,
    },
    Accessor {
        routine: 0x00B12890,
        direction: Direction::Reads,
        offset: 0x4d4,
        width: 4,
    },
    Accessor {
        routine: 0x00B39590,
        direction: Direction::Reads,
        offset: 0x030,
        width: 2,
    },
    Accessor {
        routine: 0x00B395D0,
        direction: Direction::Reads,
        offset: 0x032,
        width: 2,
    },
    Accessor {
        routine: 0x00B5A0F0,
        direction: Direction::Writes,
        offset: 0x040,
        width: 1,
    },
    Accessor {
        routine: 0x00B68FA0,
        direction: Direction::Reads,
        offset: 0x028,
        width: 4,
    },
    Accessor {
        routine: 0x00B986D0,
        direction: Direction::Reads,
        offset: 0x018,
        width: 8,
    },
    Accessor {
        routine: 0x00B9B2A0,
        direction: Direction::Writes,
        offset: 0x01c,
        width: 4,
    },
    Accessor {
        routine: 0x00BAD540,
        direction: Direction::Reads,
        offset: 0x04c,
        width: 1,
    },
    Accessor {
        routine: 0x00BAD550,
        direction: Direction::Writes,
        offset: 0x04c,
        width: 1,
    },
    Accessor {
        routine: 0x00BAD560,
        direction: Direction::Reads,
        offset: 0x04d,
        width: 1,
    },
    Accessor {
        routine: 0x00BAD870,
        direction: Direction::Reads,
        offset: 0x018,
        width: 4,
    },
    Accessor {
        routine: 0x00BAD880,
        direction: Direction::Reads,
        offset: 0x01c,
        width: 4,
    },
    Accessor {
        routine: 0x00BAD890,
        direction: Direction::Reads,
        offset: 0x020,
        width: 4,
    },
    Accessor {
        routine: 0x00BAD8A0,
        direction: Direction::Reads,
        offset: 0x024,
        width: 4,
    },
    Accessor {
        routine: 0x00BAD8F0,
        direction: Direction::Reads,
        offset: 0x038,
        width: 4,
    },
    Accessor {
        routine: 0x00BAD920,
        direction: Direction::Writes,
        offset: 0x018,
        width: 4,
    },
    Accessor {
        routine: 0x00BAD930,
        direction: Direction::Writes,
        offset: 0x01c,
        width: 4,
    },
    Accessor {
        routine: 0x00BAD940,
        direction: Direction::Writes,
        offset: 0x020,
        width: 4,
    },
    Accessor {
        routine: 0x00BAD950,
        direction: Direction::Writes,
        offset: 0x024,
        width: 4,
    },
    Accessor {
        routine: 0x00BAE6B0,
        direction: Direction::Writes,
        offset: 0x038,
        width: 8,
    },
    Accessor {
        routine: 0x00BAED60,
        direction: Direction::Reads,
        offset: 0x020,
        width: 1,
    },
    Accessor {
        routine: 0x00BB15C0,
        direction: Direction::Reads,
        offset: 0x05c,
        width: 1,
    },
    Accessor {
        routine: 0x00BB32B0,
        direction: Direction::Reads,
        offset: 0x070,
        width: 1,
    },
    Accessor {
        routine: 0x00BB32C0,
        direction: Direction::Writes,
        offset: 0x070,
        width: 1,
    },
    Accessor {
        routine: 0x00BC1FD0,
        direction: Direction::Reads,
        offset: 0x148,
        width: 4,
    },
    Accessor {
        routine: 0x00BCF8E0,
        direction: Direction::Reads,
        offset: 0x044,
        width: 4,
    },
    Accessor {
        routine: 0x00BCF8F0,
        direction: Direction::Reads,
        offset: 0x040,
        width: 4,
    },
    Accessor {
        routine: 0x00BD4550,
        direction: Direction::Reads,
        offset: 0x030,
        width: 4,
    },
    Accessor {
        routine: 0x00BD7730,
        direction: Direction::Reads,
        offset: 0x028,
        width: 8,
    },
    Accessor {
        routine: 0x00BF2C10,
        direction: Direction::Reads,
        offset: 0x0b8,
        width: 8,
    },
    Accessor {
        routine: 0x00C09DF0,
        direction: Direction::Reads,
        offset: 0x63a,
        width: 4,
    },
    Accessor {
        routine: 0x00C0DD40,
        direction: Direction::Reads,
        offset: 0x518,
        width: 1,
    },
    Accessor {
        routine: 0x00C11180,
        direction: Direction::Writes,
        offset: 0x5f6,
        width: 1,
    },
    Accessor {
        routine: 0x00C11190,
        direction: Direction::Writes,
        offset: 0x5f7,
        width: 1,
    },
    Accessor {
        routine: 0x00C11280,
        direction: Direction::Writes,
        offset: 0x00c,
        width: 4,
    },
    Accessor {
        routine: 0x00C1BE90,
        direction: Direction::Writes,
        offset: 0x008,
        width: 4,
    },
    Accessor {
        routine: 0x00C2E3E0,
        direction: Direction::Reads,
        offset: 0x01c,
        width: 1,
    },
    Accessor {
        routine: 0x00C2E520,
        direction: Direction::Reads,
        offset: 0x01a,
        width: 2,
    },
    Accessor {
        routine: 0x00C2E530,
        direction: Direction::Writes,
        offset: 0x01a,
        width: 2,
    },
    Accessor {
        routine: 0x00C2FCD0,
        direction: Direction::Reads,
        offset: 0x010,
        width: 8,
    },
    Accessor {
        routine: 0x00C31C80,
        direction: Direction::Writes,
        offset: 0x048,
        width: 4,
    },
    Accessor {
        routine: 0x00C54A10,
        direction: Direction::Reads,
        offset: 0x00a,
        width: 1,
    },
    Accessor {
        routine: 0x00C65B30,
        direction: Direction::Writes,
        offset: 0x010,
        width: 8,
    },
    Accessor {
        routine: 0x00C65B60,
        direction: Direction::Writes,
        offset: 0x00c,
        width: 4,
    },
    Accessor {
        routine: 0x00C65B70,
        direction: Direction::Writes,
        offset: 0x008,
        width: 4,
    },
    Accessor {
        routine: 0x00C6FC40,
        direction: Direction::Writes,
        offset: 0x050,
        width: 1,
    },
    Accessor {
        routine: 0x00C6FC70,
        direction: Direction::Writes,
        offset: 0x01c,
        width: 4,
    },
    Accessor {
        routine: 0x00C6FC80,
        direction: Direction::Writes,
        offset: 0x018,
        width: 4,
    },
    Accessor {
        routine: 0x00C6FE70,
        direction: Direction::Reads,
        offset: 0x028,
        width: 8,
    },
    Accessor {
        routine: 0x00C7B370,
        direction: Direction::Reads,
        offset: 0x298,
        width: 8,
    },
    Accessor {
        routine: 0x00C7B3D0,
        direction: Direction::Reads,
        offset: 0x210,
        width: 8,
    },
    Accessor {
        routine: 0x00C7F210,
        direction: Direction::Reads,
        offset: 0x008,
        width: 8,
    },
    Accessor {
        routine: 0x00C81900,
        direction: Direction::Reads,
        offset: 0x008,
        width: 4,
    },
    Accessor {
        routine: 0x00C81E70,
        direction: Direction::Reads,
        offset: 0x010,
        width: 8,
    },
    Accessor {
        routine: 0x00C85ED0,
        direction: Direction::Reads,
        offset: 0x028,
        width: 8,
    },
    Accessor {
        routine: 0x00C8F760,
        direction: Direction::Writes,
        offset: 0x054,
        width: 1,
    },
    Accessor {
        routine: 0x00CA5480,
        direction: Direction::Writes,
        offset: 0x100,
        width: 8,
    },
    Accessor {
        routine: 0x00CAEEF0,
        direction: Direction::Writes,
        offset: 0x128,
        width: 4,
    },
    Accessor {
        routine: 0x00CC3DA0,
        direction: Direction::Writes,
        offset: 0x1b0,
        width: 1,
    },
    Accessor {
        routine: 0x00CDAA60,
        direction: Direction::Writes,
        offset: 0x078,
        width: 8,
    },
    Accessor {
        routine: 0x00CE2100,
        direction: Direction::Reads,
        offset: 0x008,
        width: 8,
    },
    Accessor {
        routine: 0x00CFA7D0,
        direction: Direction::Reads,
        offset: 0x070,
        width: 4,
    },
    Accessor {
        routine: 0x00CFA7E0,
        direction: Direction::Writes,
        offset: 0x074,
        width: 4,
    },
    Accessor {
        routine: 0x00D05480,
        direction: Direction::Writes,
        offset: 0x1ec,
        width: 1,
    },
    Accessor {
        routine: 0x00D5A0E0,
        direction: Direction::Reads,
        offset: 0x01c,
        width: 4,
    },
    Accessor {
        routine: 0x00D5A0F0,
        direction: Direction::Reads,
        offset: 0x010,
        width: 4,
    },
    Accessor {
        routine: 0x00D5A100,
        direction: Direction::Reads,
        offset: 0x018,
        width: 4,
    },
    Accessor {
        routine: 0x00D5A110,
        direction: Direction::Reads,
        offset: 0x014,
        width: 4,
    },
    Accessor {
        routine: 0x00D5A120,
        direction: Direction::Writes,
        offset: 0x01c,
        width: 4,
    },
    Accessor {
        routine: 0x00D5A130,
        direction: Direction::Writes,
        offset: 0x010,
        width: 4,
    },
    Accessor {
        routine: 0x00D5A140,
        direction: Direction::Writes,
        offset: 0x018,
        width: 4,
    },
    Accessor {
        routine: 0x00D5A150,
        direction: Direction::Writes,
        offset: 0x014,
        width: 4,
    },
    Accessor {
        routine: 0x00D75380,
        direction: Direction::Writes,
        offset: 0x008,
        width: 8,
    },
    Accessor {
        routine: 0x00D77210,
        direction: Direction::Reads,
        offset: 0x118,
        width: 8,
    },
    Accessor {
        routine: 0x00D78160,
        direction: Direction::Writes,
        offset: 0x0ec,
        width: 4,
    },
    Accessor {
        routine: 0x00D78170,
        direction: Direction::Writes,
        offset: 0x0e4,
        width: 4,
    },
    Accessor {
        routine: 0x00D78180,
        direction: Direction::Writes,
        offset: 0x0f0,
        width: 4,
    },
    Accessor {
        routine: 0x00D78190,
        direction: Direction::Writes,
        offset: 0x0e8,
        width: 4,
    },
    Accessor {
        routine: 0x00D7A060,
        direction: Direction::Writes,
        offset: 0x129,
        width: 1,
    },
    Accessor {
        routine: 0x00D7B050,
        direction: Direction::Writes,
        offset: 0x140,
        width: 1,
    },
    Accessor {
        routine: 0x00D7C870,
        direction: Direction::Writes,
        offset: 0x138,
        width: 4,
    },
    Accessor {
        routine: 0x00D7C8A0,
        direction: Direction::Writes,
        offset: 0x134,
        width: 4,
    },
    Accessor {
        routine: 0x00D7C8D0,
        direction: Direction::Writes,
        offset: 0x120,
        width: 4,
    },
    Accessor {
        routine: 0x00D7C900,
        direction: Direction::Writes,
        offset: 0x130,
        width: 4,
    },
    Accessor {
        routine: 0x00DB2390,
        direction: Direction::Reads,
        offset: 0xed6,
        width: 1,
    },
    Accessor {
        routine: 0x00DD7290,
        direction: Direction::Writes,
        offset: 0x0a0,
        width: 1,
    },
    Accessor {
        routine: 0x00DD72D0,
        direction: Direction::Writes,
        offset: 0x094,
        width: 1,
    },
    Accessor {
        routine: 0x00DE50A0,
        direction: Direction::Writes,
        offset: 0x018,
        width: 4,
    },
    Accessor {
        routine: 0x00DE51A0,
        direction: Direction::Writes,
        offset: 0x018,
        width: 8,
    },
    Accessor {
        routine: 0x00DE5280,
        direction: Direction::Writes,
        offset: 0x018,
        width: 4,
    },
    Accessor {
        routine: 0x00DE5380,
        direction: Direction::Writes,
        offset: 0x018,
        width: 8,
    },
    Accessor {
        routine: 0x00DE5460,
        direction: Direction::Writes,
        offset: 0x018,
        width: 8,
    },
    Accessor {
        routine: 0x00DE55A0,
        direction: Direction::Writes,
        offset: 0x018,
        width: 1,
    },
    Accessor {
        routine: 0x00DE59A0,
        direction: Direction::Writes,
        offset: 0x018,
        width: 8,
    },
    Accessor {
        routine: 0x00DE5A80,
        direction: Direction::Writes,
        offset: 0x018,
        width: 8,
    },
    Accessor {
        routine: 0x00E07D50,
        direction: Direction::Writes,
        offset: 0x1050,
        width: 4,
    },
    Accessor {
        routine: 0x00E0F7A0,
        direction: Direction::Writes,
        offset: 0x008,
        width: 4,
    },
    Accessor {
        routine: 0x00E0F7B0,
        direction: Direction::Reads,
        offset: 0x008,
        width: 4,
    },
    Accessor {
        routine: 0x00E0FFB0,
        direction: Direction::Reads,
        offset: 0x818,
        width: 8,
    },
    Accessor {
        routine: 0x00E0FFC0,
        direction: Direction::Reads,
        offset: 0x818,
        width: 8,
    },
    Accessor {
        routine: 0x00E0FFD0,
        direction: Direction::Reads,
        offset: 0x810,
        width: 8,
    },
    Accessor {
        routine: 0x00E122F0,
        direction: Direction::Writes,
        offset: 0x018,
        width: 8,
    },
    Accessor {
        routine: 0x00E14E70,
        direction: Direction::Writes,
        offset: 0x010,
        width: 8,
    },
    Accessor {
        routine: 0x00E1FE10,
        direction: Direction::Reads,
        offset: 0xed6,
        width: 1,
    },
    Accessor {
        routine: 0x00E3CCC0,
        direction: Direction::Reads,
        offset: 0xed6,
        width: 1,
    },
    Accessor {
        routine: 0x00E81C80,
        direction: Direction::Reads,
        offset: 0x0ac,
        width: 4,
    },
    Accessor {
        routine: 0x00EA74E0,
        direction: Direction::Reads,
        offset: 0x004,
        width: 4,
    },
    Accessor {
        routine: 0x00EA74F0,
        direction: Direction::Reads,
        offset: 0x008,
        width: 1,
    },
    Accessor {
        routine: 0x00F02500,
        direction: Direction::Reads,
        offset: 0x4a4,
        width: 4,
    },
    Accessor {
        routine: 0x00F03880,
        direction: Direction::Reads,
        offset: 0x028,
        width: 8,
    },
    Accessor {
        routine: 0x00F13090,
        direction: Direction::Writes,
        offset: 0x090,
        width: 8,
    },
    Accessor {
        routine: 0x00F2EB00,
        direction: Direction::Reads,
        offset: 0x018,
        width: 1,
    },
    Accessor {
        routine: 0x00F62990,
        direction: Direction::Writes,
        offset: 0x018,
        width: 1,
    },
    Accessor {
        routine: 0x00F629A0,
        direction: Direction::Reads,
        offset: 0x018,
        width: 1,
    },
    Accessor {
        routine: 0x00F629B0,
        direction: Direction::Writes,
        offset: 0x019,
        width: 1,
    },
    Accessor {
        routine: 0x00F629C0,
        direction: Direction::Reads,
        offset: 0x019,
        width: 1,
    },
    Accessor {
        routine: 0x00F62A40,
        direction: Direction::Reads,
        offset: 0x030,
        width: 4,
    },
    Accessor {
        routine: 0x00F62A50,
        direction: Direction::Writes,
        offset: 0x030,
        width: 4,
    },
    Accessor {
        routine: 0x00F62A60,
        direction: Direction::Reads,
        offset: 0x048,
        width: 8,
    },
    Accessor {
        routine: 0x00F62A70,
        direction: Direction::Reads,
        offset: 0x040,
        width: 8,
    },
    Accessor {
        routine: 0x00F62A80,
        direction: Direction::Writes,
        offset: 0x060,
        width: 1,
    },
    Accessor {
        routine: 0x00F62A90,
        direction: Direction::Writes,
        offset: 0x080,
        width: 1,
    },
    Accessor {
        routine: 0x00F62AA0,
        direction: Direction::Writes,
        offset: 0x068,
        width: 8,
    },
    Accessor {
        routine: 0x00F62AB0,
        direction: Direction::Writes,
        offset: 0x070,
        width: 8,
    },
    Accessor {
        routine: 0x00F62AF0,
        direction: Direction::Writes,
        offset: 0x088,
        width: 8,
    },
    Accessor {
        routine: 0x00F62B00,
        direction: Direction::Writes,
        offset: 0x090,
        width: 8,
    },
    Accessor {
        routine: 0x00F653C0,
        direction: Direction::Writes,
        offset: 0x010,
        width: 8,
    },
    Accessor {
        routine: 0x00F6DFA0,
        direction: Direction::Writes,
        offset: 0x008,
        width: 4,
    },
    Accessor {
        routine: 0x00F6E120,
        direction: Direction::Writes,
        offset: 0x008,
        width: 4,
    },
    Accessor {
        routine: 0x00F6E170,
        direction: Direction::Writes,
        offset: 0x02c,
        width: 4,
    },
    Accessor {
        routine: 0x00F6E8E0,
        direction: Direction::Writes,
        offset: 0x014,
        width: 4,
    },
    Accessor {
        routine: 0x00F6F870,
        direction: Direction::Reads,
        offset: 0x03c,
        width: 4,
    },
    Accessor {
        routine: 0x00F702B0,
        direction: Direction::Reads,
        offset: 0x114,
        width: 4,
    },
    Accessor {
        routine: 0x00F75650,
        direction: Direction::Writes,
        offset: 0x018,
        width: 4,
    },
    Accessor {
        routine: 0x00F760A0,
        direction: Direction::Writes,
        offset: 0x6d0,
        width: 8,
    },
    Accessor {
        routine: 0x00F76350,
        direction: Direction::Writes,
        offset: 0x6e8,
        width: 8,
    },
    Accessor {
        routine: 0x00F79380,
        direction: Direction::Reads,
        offset: 0x020,
        width: 8,
    },
    Accessor {
        routine: 0x00F79FA0,
        direction: Direction::Writes,
        offset: 0x010,
        width: 8,
    },
    Accessor {
        routine: 0x00F7BDB0,
        direction: Direction::Reads,
        offset: 0x010,
        width: 8,
    },
    Accessor {
        routine: 0x00F7BE00,
        direction: Direction::Reads,
        offset: 0x020,
        width: 8,
    },
    Accessor {
        routine: 0x00F7BE10,
        direction: Direction::Reads,
        offset: 0x030,
        width: 8,
    },
    Accessor {
        routine: 0x00F7BE20,
        direction: Direction::Reads,
        offset: 0x028,
        width: 8,
    },
    Accessor {
        routine: 0x00F832D0,
        direction: Direction::Reads,
        offset: 0x08c,
        width: 2,
    },
    Accessor {
        routine: 0x00F84AF0,
        direction: Direction::Reads,
        offset: 0xd48,
        width: 8,
    },
    Accessor {
        routine: 0x00F85430,
        direction: Direction::Reads,
        offset: 0x6b0,
        width: 1,
    },
    Accessor {
        routine: 0x00F85520,
        direction: Direction::Writes,
        offset: 0x6b0,
        width: 1,
    },
    Accessor {
        routine: 0x00F86780,
        direction: Direction::Reads,
        offset: 0x6d8,
        width: 4,
    },
    Accessor {
        routine: 0x00F8A720,
        direction: Direction::Reads,
        offset: 0x3520,
        width: 8,
    },
    Accessor {
        routine: 0x00F8A730,
        direction: Direction::Reads,
        offset: 0x3448,
        width: 8,
    },
    Accessor {
        routine: 0x00F8A740,
        direction: Direction::Reads,
        offset: 0x3528,
        width: 8,
    },
    Accessor {
        routine: 0x00F8A750,
        direction: Direction::Reads,
        offset: 0x3530,
        width: 8,
    },
    Accessor {
        routine: 0x00F8A760,
        direction: Direction::Reads,
        offset: 0x3538,
        width: 8,
    },
    Accessor {
        routine: 0x00F8A770,
        direction: Direction::Reads,
        offset: 0x3540,
        width: 8,
    },
    Accessor {
        routine: 0x00F8A830,
        direction: Direction::Writes,
        offset: 0x33fc,
        width: 4,
    },
    Accessor {
        routine: 0x00F8D060,
        direction: Direction::Reads,
        offset: 0x3452,
        width: 1,
    },
    Accessor {
        routine: 0x00F8D130,
        direction: Direction::Reads,
        offset: 0x3453,
        width: 1,
    },
    Accessor {
        routine: 0x00F8D140,
        direction: Direction::Reads,
        offset: 0x3454,
        width: 1,
    },
    Accessor {
        routine: 0x00F8D150,
        direction: Direction::Reads,
        offset: 0x3472,
        width: 1,
    },
    Accessor {
        routine: 0x00F8D1C0,
        direction: Direction::Writes,
        offset: 0x33f8,
        width: 1,
    },
    Accessor {
        routine: 0x00F8D1D0,
        direction: Direction::Reads,
        offset: 0x33f8,
        width: 1,
    },
    Accessor {
        routine: 0x00F8D2E0,
        direction: Direction::Reads,
        offset: 0x3473,
        width: 1,
    },
    Accessor {
        routine: 0x00F8D2F0,
        direction: Direction::Writes,
        offset: 0x3453,
        width: 1,
    },
    Accessor {
        routine: 0x00F8D300,
        direction: Direction::Writes,
        offset: 0x3454,
        width: 1,
    },
    Accessor {
        routine: 0x00F8D6B0,
        direction: Direction::Reads,
        offset: 0x3511,
        width: 1,
    },
    Accessor {
        routine: 0x00F8E650,
        direction: Direction::Writes,
        offset: 0x3512,
        width: 1,
    },
    Accessor {
        routine: 0x00F8E660,
        direction: Direction::Reads,
        offset: 0x3488,
        width: 4,
    },
    Accessor {
        routine: 0x00F8F600,
        direction: Direction::Reads,
        offset: 0x3464,
        width: 4,
    },
    Accessor {
        routine: 0x00F8F610,
        direction: Direction::Reads,
        offset: 0x34a0,
        width: 4,
    },
    Accessor {
        routine: 0x00F8F620,
        direction: Direction::Reads,
        offset: 0x048,
        width: 4,
    },
    Accessor {
        routine: 0x00FD5BE0,
        direction: Direction::Writes,
        offset: 0x7d8,
        width: 8,
    },
    Accessor {
        routine: 0x00FD84E0,
        direction: Direction::Reads,
        offset: 0x6fc,
        width: 4,
    },
    Accessor {
        routine: 0x00FD8520,
        direction: Direction::Reads,
        offset: 0x708,
        width: 8,
    },
    Accessor {
        routine: 0x010275E0,
        direction: Direction::Writes,
        offset: 0x6e0,
        width: 8,
    },
    Accessor {
        routine: 0x010275F0,
        direction: Direction::Reads,
        offset: 0x6e0,
        width: 8,
    },
    Accessor {
        routine: 0x010515B0,
        direction: Direction::Writes,
        offset: 0x9c0,
        width: 8,
    },
    Accessor {
        routine: 0x010515C0,
        direction: Direction::Writes,
        offset: 0x9c8,
        width: 8,
    },
    Accessor {
        routine: 0x01053EC0,
        direction: Direction::Writes,
        offset: 0x8ed,
        width: 1,
    },
    Accessor {
        routine: 0x01053ED0,
        direction: Direction::Reads,
        offset: 0x8ed,
        width: 1,
    },
    Accessor {
        routine: 0x01064270,
        direction: Direction::Writes,
        offset: 0x040,
        width: 8,
    },
    Accessor {
        routine: 0x0106A1B0,
        direction: Direction::Reads,
        offset: 0x161,
        width: 1,
    },
    Accessor {
        routine: 0x0106A210,
        direction: Direction::Reads,
        offset: 0x163,
        width: 1,
    },
    Accessor {
        routine: 0x0106A3C0,
        direction: Direction::Writes,
        offset: 0x161,
        width: 1,
    },
    Accessor {
        routine: 0x0106BC50,
        direction: Direction::Writes,
        offset: 0x6f1,
        width: 1,
    },
    Accessor {
        routine: 0x010729F0,
        direction: Direction::Reads,
        offset: 0x6d8,
        width: 4,
    },
    Accessor {
        routine: 0x01072A00,
        direction: Direction::Writes,
        offset: 0x6ec,
        width: 4,
    },
    Accessor {
        routine: 0x01073900,
        direction: Direction::Reads,
        offset: 0x6d8,
        width: 4,
    },
    Accessor {
        routine: 0x010792A0,
        direction: Direction::Writes,
        offset: 0xab8,
        width: 8,
    },
    Accessor {
        routine: 0x010792B0,
        direction: Direction::Writes,
        offset: 0xab0,
        width: 8,
    },
    Accessor {
        routine: 0x01079310,
        direction: Direction::Writes,
        offset: 0xb90,
        width: 8,
    },
    Accessor {
        routine: 0x01079390,
        direction: Direction::Reads,
        offset: 0xbd7,
        width: 1,
    },
    Accessor {
        routine: 0x0107B2F0,
        direction: Direction::Reads,
        offset: 0xb51,
        width: 1,
    },
    Accessor {
        routine: 0x010828E0,
        direction: Direction::Writes,
        offset: 0xb88,
        width: 8,
    },
    Accessor {
        routine: 0x01086CA0,
        direction: Direction::Writes,
        offset: 0x4d20,
        width: 8,
    },
    Accessor {
        routine: 0x0108B760,
        direction: Direction::Reads,
        offset: 0x4c94,
        width: 4,
    },
    Accessor {
        routine: 0x0108B870,
        direction: Direction::Reads,
        offset: 0xbd0,
        width: 1,
    },
    Accessor {
        routine: 0x0108B890,
        direction: Direction::Reads,
        offset: 0xbd1,
        width: 1,
    },
    Accessor {
        routine: 0x0108B8A0,
        direction: Direction::Reads,
        offset: 0xbd2,
        width: 1,
    },
    Accessor {
        routine: 0x0108BBF0,
        direction: Direction::Writes,
        offset: 0xbd8,
        width: 8,
    },
    Accessor {
        routine: 0x01094B10,
        direction: Direction::Reads,
        offset: 0x161,
        width: 1,
    },
    Accessor {
        routine: 0x01094BC0,
        direction: Direction::Reads,
        offset: 0x161,
        width: 1,
    },
    Accessor {
        routine: 0x01094D90,
        direction: Direction::Reads,
        offset: 0x160,
        width: 1,
    },
    Accessor {
        routine: 0x010994E0,
        direction: Direction::Reads,
        offset: 0x161,
        width: 1,
    },
    Accessor {
        routine: 0x010995A0,
        direction: Direction::Reads,
        offset: 0x161,
        width: 1,
    },
    Accessor {
        routine: 0x01099770,
        direction: Direction::Reads,
        offset: 0x160,
        width: 1,
    },
    Accessor {
        routine: 0x0109D300,
        direction: Direction::Reads,
        offset: 0x9e0,
        width: 1,
    },
    Accessor {
        routine: 0x010A3860,
        direction: Direction::Reads,
        offset: 0x980,
        width: 4,
    },
    Accessor {
        routine: 0x010A66B0,
        direction: Direction::Reads,
        offset: 0x1a78,
        width: 1,
    },
    Accessor {
        routine: 0x010A66C0,
        direction: Direction::Writes,
        offset: 0x1a78,
        width: 1,
    },
    Accessor {
        routine: 0x010A6750,
        direction: Direction::Reads,
        offset: 0xa28,
        width: 1,
    },
    Accessor {
        routine: 0x010A6760,
        direction: Direction::Writes,
        offset: 0xa2d,
        width: 1,
    },
    Accessor {
        routine: 0x010AF3B0,
        direction: Direction::Reads,
        offset: 0x020,
        width: 8,
    },
    Accessor {
        routine: 0x010AF590,
        direction: Direction::Writes,
        offset: 0x028,
        width: 1,
    },
    Accessor {
        routine: 0x010B2830,
        direction: Direction::Writes,
        offset: 0x00c,
        width: 1,
    },
    Accessor {
        routine: 0x010B2840,
        direction: Direction::Writes,
        offset: 0x00d,
        width: 1,
    },
    Accessor {
        routine: 0x010B2850,
        direction: Direction::Reads,
        offset: 0x00d,
        width: 1,
    },
    Accessor {
        routine: 0x010B3610,
        direction: Direction::Writes,
        offset: 0x028,
        width: 1,
    },
    Accessor {
        routine: 0x010B3620,
        direction: Direction::Reads,
        offset: 0x028,
        width: 1,
    },
    Accessor {
        routine: 0x010B3630,
        direction: Direction::Writes,
        offset: 0x008,
        width: 4,
    },
    Accessor {
        routine: 0x010B3640,
        direction: Direction::Reads,
        offset: 0x008,
        width: 4,
    },
    Accessor {
        routine: 0x010D35E0,
        direction: Direction::Writes,
        offset: 0x020,
        width: 1,
    },
    Accessor {
        routine: 0x010DBD50,
        direction: Direction::Reads,
        offset: 0x01c,
        width: 4,
    },
    Accessor {
        routine: 0x010DBE60,
        direction: Direction::Reads,
        offset: 0x021,
        width: 1,
    },
    Accessor {
        routine: 0x010DBE70,
        direction: Direction::Writes,
        offset: 0x021,
        width: 1,
    },
    Accessor {
        routine: 0x010E4580,
        direction: Direction::Writes,
        offset: 0x878,
        width: 4,
    },
    Accessor {
        routine: 0x010FFA80,
        direction: Direction::Reads,
        offset: 0x048,
        width: 8,
    },
    Accessor {
        routine: 0x01101340,
        direction: Direction::Writes,
        offset: 0x138,
        width: 8,
    },
    Accessor {
        routine: 0x01102FC0,
        direction: Direction::Reads,
        offset: 0x158,
        width: 8,
    },
    Accessor {
        routine: 0x0110E280,
        direction: Direction::Writes,
        offset: 0x058,
        width: 1,
    },
    Accessor {
        routine: 0x01112970,
        direction: Direction::Reads,
        offset: 0x622,
        width: 2,
    },
    Accessor {
        routine: 0x01117680,
        direction: Direction::Writes,
        offset: 0x730,
        width: 8,
    },
    Accessor {
        routine: 0x0111A640,
        direction: Direction::Reads,
        offset: 0x161,
        width: 1,
    },
    Accessor {
        routine: 0x0111A6F0,
        direction: Direction::Reads,
        offset: 0x161,
        width: 1,
    },
    Accessor {
        routine: 0x0111A8D0,
        direction: Direction::Reads,
        offset: 0x160,
        width: 1,
    },
    Accessor {
        routine: 0x0111EC80,
        direction: Direction::Reads,
        offset: 0x162,
        width: 1,
    },
    Accessor {
        routine: 0x0111EC90,
        direction: Direction::Reads,
        offset: 0x163,
        width: 1,
    },
    Accessor {
        routine: 0x0111EDF0,
        direction: Direction::Reads,
        offset: 0x163,
        width: 1,
    },
    Accessor {
        routine: 0x0112AA40,
        direction: Direction::Writes,
        offset: 0x00c,
        width: 2,
    },
    Accessor {
        routine: 0x0112AA50,
        direction: Direction::Writes,
        offset: 0x014,
        width: 4,
    },
    Accessor {
        routine: 0x0112AA60,
        direction: Direction::Writes,
        offset: 0x00e,
        width: 2,
    },
    Accessor {
        routine: 0x0112AA70,
        direction: Direction::Writes,
        offset: 0x010,
        width: 2,
    },
    Accessor {
        routine: 0x0112AA80,
        direction: Direction::Writes,
        offset: 0x00a,
        width: 2,
    },
    Accessor {
        routine: 0x0112AA90,
        direction: Direction::Writes,
        offset: 0x012,
        width: 2,
    },
    Accessor {
        routine: 0x0112AAA0,
        direction: Direction::Writes,
        offset: 0x008,
        width: 2,
    },
    Accessor {
        routine: 0x011327C0,
        direction: Direction::Reads,
        offset: 0x018,
        width: 1,
    },
    Accessor {
        routine: 0x01132800,
        direction: Direction::Writes,
        offset: 0x018,
        width: 1,
    },
    Accessor {
        routine: 0x01138FE0,
        direction: Direction::Writes,
        offset: 0xa60,
        width: 8,
    },
    Accessor {
        routine: 0x01167B40,
        direction: Direction::Writes,
        offset: 0x010,
        width: 4,
    },
    Accessor {
        routine: 0x012A37C0,
        direction: Direction::Reads,
        offset: 0x088,
        width: 8,
    },
    Accessor {
        routine: 0x012A3880,
        direction: Direction::Reads,
        offset: 0x080,
        width: 8,
    },
    Accessor {
        routine: 0x012A4DD0,
        direction: Direction::Reads,
        offset: 0x088,
        width: 8,
    },
    Accessor {
        routine: 0x012A4DE0,
        direction: Direction::Reads,
        offset: 0x0e0,
        width: 4,
    },
    Accessor {
        routine: 0x012A4DF0,
        direction: Direction::Writes,
        offset: 0x0e0,
        width: 4,
    },
    Accessor {
        routine: 0x012A4F20,
        direction: Direction::Reads,
        offset: 0x0e8,
        width: 4,
    },
    Accessor {
        routine: 0x012A4F30,
        direction: Direction::Writes,
        offset: 0x0e8,
        width: 4,
    },
    Accessor {
        routine: 0x012A4F40,
        direction: Direction::Writes,
        offset: 0x0d8,
        width: 8,
    },
    Accessor {
        routine: 0x012A5100,
        direction: Direction::Writes,
        offset: 0x0b9,
        width: 1,
    },
    Accessor {
        routine: 0x012A51C0,
        direction: Direction::Writes,
        offset: 0x0b0,
        width: 8,
    },
    Accessor {
        routine: 0x012A5250,
        direction: Direction::Reads,
        offset: 0x074,
        width: 4,
    },
    Accessor {
        routine: 0x012E5250,
        direction: Direction::Writes,
        offset: 0x008,
        width: 1,
    },
    Accessor {
        routine: 0x012E5260,
        direction: Direction::Reads,
        offset: 0x008,
        width: 1,
    },
    Accessor {
        routine: 0x012E5270,
        direction: Direction::Writes,
        offset: 0x009,
        width: 1,
    },
    Accessor {
        routine: 0x012E5280,
        direction: Direction::Reads,
        offset: 0x009,
        width: 1,
    },
    Accessor {
        routine: 0x012E5290,
        direction: Direction::Writes,
        offset: 0x00a,
        width: 1,
    },
    Accessor {
        routine: 0x012E52A0,
        direction: Direction::Reads,
        offset: 0x00a,
        width: 1,
    },
    Accessor {
        routine: 0x012E52B0,
        direction: Direction::Writes,
        offset: 0x00c,
        width: 4,
    },
    Accessor {
        routine: 0x012E52C0,
        direction: Direction::Reads,
        offset: 0x00c,
        width: 4,
    },
    Accessor {
        routine: 0x012E52D0,
        direction: Direction::Writes,
        offset: 0x010,
        width: 4,
    },
    Accessor {
        routine: 0x012E52E0,
        direction: Direction::Reads,
        offset: 0x010,
        width: 4,
    },
    Accessor {
        routine: 0x012E52F0,
        direction: Direction::Writes,
        offset: 0x018,
        width: 8,
    },
    Accessor {
        routine: 0x012E5300,
        direction: Direction::Reads,
        offset: 0x018,
        width: 8,
    },
    Accessor {
        routine: 0x012E5310,
        direction: Direction::Writes,
        offset: 0x020,
        width: 8,
    },
    Accessor {
        routine: 0x012E5320,
        direction: Direction::Reads,
        offset: 0x020,
        width: 8,
    },
    Accessor {
        routine: 0x012E5330,
        direction: Direction::Writes,
        offset: 0x028,
        width: 8,
    },
    Accessor {
        routine: 0x012E5340,
        direction: Direction::Reads,
        offset: 0x028,
        width: 8,
    },
    Accessor {
        routine: 0x012E5350,
        direction: Direction::Writes,
        offset: 0x030,
        width: 8,
    },
    Accessor {
        routine: 0x012E5360,
        direction: Direction::Reads,
        offset: 0x030,
        width: 8,
    },
    Accessor {
        routine: 0x012E5370,
        direction: Direction::Writes,
        offset: 0x038,
        width: 8,
    },
    Accessor {
        routine: 0x012E5380,
        direction: Direction::Reads,
        offset: 0x038,
        width: 8,
    },
    Accessor {
        routine: 0x012E5390,
        direction: Direction::Writes,
        offset: 0x044,
        width: 1,
    },
    Accessor {
        routine: 0x012E53A0,
        direction: Direction::Reads,
        offset: 0x044,
        width: 1,
    },
    Accessor {
        routine: 0x012E5700,
        direction: Direction::Writes,
        offset: 0x028,
        width: 4,
    },
    Accessor {
        routine: 0x012E5710,
        direction: Direction::Reads,
        offset: 0x028,
        width: 4,
    },
    Accessor {
        routine: 0x012E5720,
        direction: Direction::Writes,
        offset: 0x018,
        width: 8,
    },
    Accessor {
        routine: 0x012E5730,
        direction: Direction::Reads,
        offset: 0x018,
        width: 8,
    },
    Accessor {
        routine: 0x012E5740,
        direction: Direction::Writes,
        offset: 0x020,
        width: 8,
    },
    Accessor {
        routine: 0x012E5750,
        direction: Direction::Reads,
        offset: 0x020,
        width: 8,
    },
    Accessor {
        routine: 0x012E5790,
        direction: Direction::Writes,
        offset: 0x008,
        width: 1,
    },
    Accessor {
        routine: 0x012E57A0,
        direction: Direction::Reads,
        offset: 0x008,
        width: 1,
    },
    Accessor {
        routine: 0x012E57B0,
        direction: Direction::Writes,
        offset: 0x00a,
        width: 1,
    },
    Accessor {
        routine: 0x012E57C0,
        direction: Direction::Reads,
        offset: 0x00a,
        width: 1,
    },
    Accessor {
        routine: 0x012E57D0,
        direction: Direction::Writes,
        offset: 0x00b,
        width: 1,
    },
    Accessor {
        routine: 0x012E57E0,
        direction: Direction::Reads,
        offset: 0x00b,
        width: 1,
    },
    Accessor {
        routine: 0x012E57F0,
        direction: Direction::Writes,
        offset: 0x00c,
        width: 1,
    },
    Accessor {
        routine: 0x012E5800,
        direction: Direction::Reads,
        offset: 0x00c,
        width: 1,
    },
    Accessor {
        routine: 0x012E5810,
        direction: Direction::Writes,
        offset: 0x00d,
        width: 1,
    },
    Accessor {
        routine: 0x012E5820,
        direction: Direction::Reads,
        offset: 0x00d,
        width: 1,
    },
    Accessor {
        routine: 0x012E5830,
        direction: Direction::Writes,
        offset: 0x009,
        width: 1,
    },
    Accessor {
        routine: 0x012E5840,
        direction: Direction::Reads,
        offset: 0x009,
        width: 1,
    },
    Accessor {
        routine: 0x012E5850,
        direction: Direction::Writes,
        offset: 0x02c,
        width: 4,
    },
    Accessor {
        routine: 0x012E5860,
        direction: Direction::Reads,
        offset: 0x02c,
        width: 4,
    },
    Accessor {
        routine: 0x012E5870,
        direction: Direction::Writes,
        offset: 0x030,
        width: 4,
    },
    Accessor {
        routine: 0x012E5880,
        direction: Direction::Reads,
        offset: 0x030,
        width: 4,
    },
    Accessor {
        routine: 0x012E5890,
        direction: Direction::Writes,
        offset: 0x034,
        width: 4,
    },
    Accessor {
        routine: 0x012E58A0,
        direction: Direction::Reads,
        offset: 0x034,
        width: 4,
    },
    Accessor {
        routine: 0x012EA600,
        direction: Direction::Writes,
        offset: 0x6c8,
        width: 1,
    },
    Accessor {
        routine: 0x01322FA0,
        direction: Direction::Reads,
        offset: 0x1420,
        width: 4,
    },
    Accessor {
        routine: 0x0133BBF0,
        direction: Direction::Writes,
        offset: 0x708,
        width: 8,
    },
    Accessor {
        routine: 0x0137A2B0,
        direction: Direction::Reads,
        offset: 0x080,
        width: 8,
    },
    Accessor {
        routine: 0x0137A3A0,
        direction: Direction::Reads,
        offset: 0x088,
        width: 8,
    },
    Accessor {
        routine: 0x0137A580,
        direction: Direction::Reads,
        offset: 0x118,
        width: 8,
    },
    Accessor {
        routine: 0x0137A5F0,
        direction: Direction::Reads,
        offset: 0x090,
        width: 8,
    },
    Accessor {
        routine: 0x0137C250,
        direction: Direction::Reads,
        offset: 0x080,
        width: 8,
    },
    Accessor {
        routine: 0x0137C260,
        direction: Direction::Reads,
        offset: 0x0fc,
        width: 4,
    },
    Accessor {
        routine: 0x0137C270,
        direction: Direction::Writes,
        offset: 0x0fc,
        width: 4,
    },
    Accessor {
        routine: 0x0137C290,
        direction: Direction::Writes,
        offset: 0x0f0,
        width: 8,
    },
    Accessor {
        routine: 0x0137C2A0,
        direction: Direction::Reads,
        offset: 0x0f0,
        width: 8,
    },
    Accessor {
        routine: 0x0137C2B0,
        direction: Direction::Writes,
        offset: 0x099,
        width: 1,
    },
    Accessor {
        routine: 0x0137C2C0,
        direction: Direction::Reads,
        offset: 0x099,
        width: 1,
    },
    Accessor {
        routine: 0x0137C400,
        direction: Direction::Reads,
        offset: 0x100,
        width: 4,
    },
    Accessor {
        routine: 0x0137C410,
        direction: Direction::Writes,
        offset: 0x100,
        width: 4,
    },
    Accessor {
        routine: 0x0137C6C0,
        direction: Direction::Reads,
        offset: 0x118,
        width: 8,
    },
    Accessor {
        routine: 0x0137C6D0,
        direction: Direction::Reads,
        offset: 0x104,
        width: 4,
    },
    Accessor {
        routine: 0x0137C880,
        direction: Direction::Reads,
        offset: 0x090,
        width: 8,
    },
    Accessor {
        routine: 0x0137C890,
        direction: Direction::Reads,
        offset: 0x108,
        width: 4,
    },
    Accessor {
        routine: 0x0137C8A0,
        direction: Direction::Writes,
        offset: 0x108,
        width: 4,
    },
    Accessor {
        routine: 0x013A5930,
        direction: Direction::Reads,
        offset: 0x170,
        width: 2,
    },
    Accessor {
        routine: 0x013A5960,
        direction: Direction::Reads,
        offset: 0x172,
        width: 2,
    },
    Accessor {
        routine: 0x013B2E70,
        direction: Direction::Writes,
        offset: 0x020,
        width: 4,
    },
    Accessor {
        routine: 0x013B2E80,
        direction: Direction::Reads,
        offset: 0x024,
        width: 1,
    },
    Accessor {
        routine: 0x013B2E90,
        direction: Direction::Writes,
        offset: 0x024,
        width: 1,
    },
    Accessor {
        routine: 0x013B2EA0,
        direction: Direction::Reads,
        offset: 0x025,
        width: 1,
    },
    Accessor {
        routine: 0x013B2EB0,
        direction: Direction::Reads,
        offset: 0x026,
        width: 1,
    },
    Accessor {
        routine: 0x013B54C0,
        direction: Direction::Writes,
        offset: 0x028,
        width: 8,
    },
    Accessor {
        routine: 0x013BA3F0,
        direction: Direction::Writes,
        offset: 0x010,
        width: 4,
    },
    Accessor {
        routine: 0x013BBD10,
        direction: Direction::Writes,
        offset: 0x118,
        width: 4,
    },
    Accessor {
        routine: 0x013BCCA0,
        direction: Direction::Writes,
        offset: 0x060,
        width: 8,
    },
    Accessor {
        routine: 0x013BD120,
        direction: Direction::Writes,
        offset: 0x070,
        width: 8,
    },
    Accessor {
        routine: 0x013BD980,
        direction: Direction::Writes,
        offset: 0x04c,
        width: 4,
    },
    Accessor {
        routine: 0x0141A6A0,
        direction: Direction::Writes,
        offset: 0x6e2,
        width: 1,
    },
    Accessor {
        routine: 0x0141A6B0,
        direction: Direction::Writes,
        offset: 0x6e3,
        width: 1,
    },
    Accessor {
        routine: 0x01433A90,
        direction: Direction::Writes,
        offset: 0x070,
        width: 8,
    },
    Accessor {
        routine: 0x01436230,
        direction: Direction::Writes,
        offset: 0x070,
        width: 1,
    },
    Accessor {
        routine: 0x01436240,
        direction: Direction::Writes,
        offset: 0x071,
        width: 1,
    },
    Accessor {
        routine: 0x01436250,
        direction: Direction::Reads,
        offset: 0x070,
        width: 1,
    },
    Accessor {
        routine: 0x01436260,
        direction: Direction::Reads,
        offset: 0x071,
        width: 1,
    },
    Accessor {
        routine: 0x014B1DC0,
        direction: Direction::Reads,
        offset: 0x161,
        width: 1,
    },
    Accessor {
        routine: 0x014B1EA0,
        direction: Direction::Reads,
        offset: 0x161,
        width: 1,
    },
    Accessor {
        routine: 0x014B2070,
        direction: Direction::Reads,
        offset: 0x160,
        width: 1,
    },
    Accessor {
        routine: 0x014B4640,
        direction: Direction::Reads,
        offset: 0x8b0,
        width: 8,
    },
    Accessor {
        routine: 0x014CDCD0,
        direction: Direction::Reads,
        offset: 0x030,
        width: 8,
    },
    Accessor {
        routine: 0x014CDCE0,
        direction: Direction::Reads,
        offset: 0x1280,
        width: 8,
    },
    Accessor {
        routine: 0x014CDD20,
        direction: Direction::Reads,
        offset: 0x12a0,
        width: 8,
    },
    Accessor {
        routine: 0x014CE780,
        direction: Direction::Writes,
        offset: 0x058,
        width: 4,
    },
    Accessor {
        routine: 0x014EA960,
        direction: Direction::Reads,
        offset: 0x088,
        width: 8,
    },
    Accessor {
        routine: 0x014F88D0,
        direction: Direction::Reads,
        offset: 0x014,
        width: 1,
    },
    Accessor {
        routine: 0x01503700,
        direction: Direction::Reads,
        offset: 0x058,
        width: 8,
    },
    Accessor {
        routine: 0x01503710,
        direction: Direction::Reads,
        offset: 0x098,
        width: 4,
    },
    Accessor {
        routine: 0x01503720,
        direction: Direction::Writes,
        offset: 0x098,
        width: 4,
    },
    Accessor {
        routine: 0x01503730,
        direction: Direction::Reads,
        offset: 0x060,
        width: 8,
    },
    Accessor {
        routine: 0x01503740,
        direction: Direction::Reads,
        offset: 0x09c,
        width: 4,
    },
    Accessor {
        routine: 0x01503750,
        direction: Direction::Writes,
        offset: 0x09c,
        width: 4,
    },
    Accessor {
        routine: 0x01503760,
        direction: Direction::Reads,
        offset: 0x068,
        width: 8,
    },
    Accessor {
        routine: 0x01503770,
        direction: Direction::Reads,
        offset: 0x0a0,
        width: 4,
    },
    Accessor {
        routine: 0x01503780,
        direction: Direction::Writes,
        offset: 0x0a0,
        width: 4,
    },
    Accessor {
        routine: 0x015037D0,
        direction: Direction::Reads,
        offset: 0x080,
        width: 8,
    },
    Accessor {
        routine: 0x015037E0,
        direction: Direction::Writes,
        offset: 0x080,
        width: 8,
    },
    Accessor {
        routine: 0x015038E0,
        direction: Direction::Reads,
        offset: 0x0a8,
        width: 4,
    },
    Accessor {
        routine: 0x015038F0,
        direction: Direction::Writes,
        offset: 0x0a8,
        width: 4,
    },
    Accessor {
        routine: 0x01503EE0,
        direction: Direction::Reads,
        offset: 0x058,
        width: 8,
    },
    Accessor {
        routine: 0x01517530,
        direction: Direction::Reads,
        offset: 0x058,
        width: 8,
    },
    Accessor {
        routine: 0x01517540,
        direction: Direction::Reads,
        offset: 0x080,
        width: 4,
    },
    Accessor {
        routine: 0x01517550,
        direction: Direction::Writes,
        offset: 0x080,
        width: 4,
    },
    Accessor {
        routine: 0x01517560,
        direction: Direction::Reads,
        offset: 0x060,
        width: 8,
    },
    Accessor {
        routine: 0x01517570,
        direction: Direction::Reads,
        offset: 0x084,
        width: 4,
    },
    Accessor {
        routine: 0x01517580,
        direction: Direction::Writes,
        offset: 0x084,
        width: 4,
    },
    Accessor {
        routine: 0x015175A0,
        direction: Direction::Reads,
        offset: 0x090,
        width: 4,
    },
    Accessor {
        routine: 0x015175B0,
        direction: Direction::Writes,
        offset: 0x090,
        width: 4,
    },
    Accessor {
        routine: 0x015175D0,
        direction: Direction::Reads,
        offset: 0x094,
        width: 4,
    },
    Accessor {
        routine: 0x015175E0,
        direction: Direction::Writes,
        offset: 0x094,
        width: 4,
    },
    Accessor {
        routine: 0x01517670,
        direction: Direction::Reads,
        offset: 0x068,
        width: 8,
    },
    Accessor {
        routine: 0x01517680,
        direction: Direction::Reads,
        offset: 0x088,
        width: 4,
    },
    Accessor {
        routine: 0x01517690,
        direction: Direction::Writes,
        offset: 0x088,
        width: 4,
    },
    Accessor {
        routine: 0x01517800,
        direction: Direction::Reads,
        offset: 0x0a0,
        width: 8,
    },
    Accessor {
        routine: 0x01517810,
        direction: Direction::Writes,
        offset: 0x0a0,
        width: 8,
    },
    Accessor {
        routine: 0x01517850,
        direction: Direction::Reads,
        offset: 0x098,
        width: 2,
    },
    Accessor {
        routine: 0x01517860,
        direction: Direction::Writes,
        offset: 0x098,
        width: 2,
    },
    Accessor {
        routine: 0x015178A0,
        direction: Direction::Reads,
        offset: 0x09a,
        width: 2,
    },
    Accessor {
        routine: 0x015178B0,
        direction: Direction::Writes,
        offset: 0x09a,
        width: 2,
    },
    Accessor {
        routine: 0x015178C0,
        direction: Direction::Reads,
        offset: 0x070,
        width: 8,
    },
    Accessor {
        routine: 0x015178D0,
        direction: Direction::Reads,
        offset: 0x08c,
        width: 4,
    },
    Accessor {
        routine: 0x015178E0,
        direction: Direction::Writes,
        offset: 0x08c,
        width: 4,
    },
    Accessor {
        routine: 0x01519040,
        direction: Direction::Reads,
        offset: 0x058,
        width: 8,
    },
    Accessor {
        routine: 0x01519080,
        direction: Direction::Reads,
        offset: 0x060,
        width: 8,
    },
    Accessor {
        routine: 0x015191A0,
        direction: Direction::Reads,
        offset: 0x068,
        width: 8,
    },
    Accessor {
        routine: 0x01519300,
        direction: Direction::Reads,
        offset: 0x070,
        width: 8,
    },
    Accessor {
        routine: 0x0152FB80,
        direction: Direction::Reads,
        offset: 0x1c28,
        width: 8,
    },
    Accessor {
        routine: 0x0154CD10,
        direction: Direction::Writes,
        offset: 0x748,
        width: 8,
    },
    Accessor {
        routine: 0x01565310,
        direction: Direction::Writes,
        offset: 0x70c,
        width: 4,
    },
    Accessor {
        routine: 0x01565320,
        direction: Direction::Reads,
        offset: 0x70c,
        width: 4,
    },
    Accessor {
        routine: 0x01565D40,
        direction: Direction::Reads,
        offset: 0x008,
        width: 8,
    },
    Accessor {
        routine: 0x015660F0,
        direction: Direction::Writes,
        offset: 0x008,
        width: 8,
    },
    Accessor {
        routine: 0x01566D00,
        direction: Direction::Reads,
        offset: 0x0b8,
        width: 4,
    },
    Accessor {
        routine: 0x01566D10,
        direction: Direction::Writes,
        offset: 0x0b8,
        width: 4,
    },
    Accessor {
        routine: 0x01566D20,
        direction: Direction::Reads,
        offset: 0x0b8,
        width: 4,
    },
    Accessor {
        routine: 0x0156B140,
        direction: Direction::Writes,
        offset: 0x700,
        width: 8,
    },
    Accessor {
        routine: 0x0156B150,
        direction: Direction::Reads,
        offset: 0x700,
        width: 8,
    },
    Accessor {
        routine: 0x0156F6C0,
        direction: Direction::Writes,
        offset: 0x008,
        width: 4,
    },
    Accessor {
        routine: 0x0156F730,
        direction: Direction::Writes,
        offset: 0x030,
        width: 8,
    },
    Accessor {
        routine: 0x015718E0,
        direction: Direction::Writes,
        offset: 0x034,
        width: 4,
    },
    Accessor {
        routine: 0x015718F0,
        direction: Direction::Writes,
        offset: 0x040,
        width: 8,
    },
    Accessor {
        routine: 0x01571900,
        direction: Direction::Writes,
        offset: 0x048,
        width: 8,
    },
    Accessor {
        routine: 0x01571910,
        direction: Direction::Writes,
        offset: 0x038,
        width: 4,
    },
    Accessor {
        routine: 0x01571940,
        direction: Direction::Writes,
        offset: 0x008,
        width: 8,
    },
    Accessor {
        routine: 0x01571950,
        direction: Direction::Reads,
        offset: 0x008,
        width: 8,
    },
    Accessor {
        routine: 0x01596430,
        direction: Direction::Reads,
        offset: 0x008,
        width: 4,
    },
    Accessor {
        routine: 0x015C2DF0,
        direction: Direction::Reads,
        offset: 0x028,
        width: 4,
    },
    Accessor {
        routine: 0x015E31B0,
        direction: Direction::Writes,
        offset: 0x008,
        width: 1,
    },
    Accessor {
        routine: 0x015E3BA0,
        direction: Direction::Reads,
        offset: 0x198,
        width: 8,
    },
    Accessor {
        routine: 0x016353A0,
        direction: Direction::Reads,
        offset: 0x030,
        width: 8,
    },
    Accessor {
        routine: 0x016353B0,
        direction: Direction::Reads,
        offset: 0x038,
        width: 8,
    },
    Accessor {
        routine: 0x016353C0,
        direction: Direction::Reads,
        offset: 0x038,
        width: 8,
    },
    Accessor {
        routine: 0x016353D0,
        direction: Direction::Reads,
        offset: 0x628,
        width: 8,
    },
    Accessor {
        routine: 0x01639590,
        direction: Direction::Reads,
        offset: 0x689,
        width: 1,
    },
    Accessor {
        routine: 0x0163E740,
        direction: Direction::Writes,
        offset: 0x068,
        width: 8,
    },
    Accessor {
        routine: 0x0163E750,
        direction: Direction::Reads,
        offset: 0x068,
        width: 8,
    },
    Accessor {
        routine: 0x01643430,
        direction: Direction::Reads,
        offset: 0x060,
        width: 4,
    },
    Accessor {
        routine: 0x01644E30,
        direction: Direction::Writes,
        offset: 0x10b0,
        width: 8,
    },
    Accessor {
        routine: 0x01647430,
        direction: Direction::Reads,
        offset: 0x010,
        width: 8,
    },
    Accessor {
        routine: 0x01647440,
        direction: Direction::Reads,
        offset: 0x018,
        width: 8,
    },
    Accessor {
        routine: 0x01695540,
        direction: Direction::Writes,
        offset: 0x018,
        width: 8,
    },
    Accessor {
        routine: 0x01697C30,
        direction: Direction::Reads,
        offset: 0x00c,
        width: 4,
    },
    Accessor {
        routine: 0x01698B30,
        direction: Direction::Writes,
        offset: 0x008,
        width: 2,
    },
    Accessor {
        routine: 0x016A36D0,
        direction: Direction::Writes,
        offset: 0x010,
        width: 8,
    },
    Accessor {
        routine: 0x016B1720,
        direction: Direction::Writes,
        offset: 0x028,
        width: 4,
    },
    Accessor {
        routine: 0x016B1730,
        direction: Direction::Writes,
        offset: 0x068,
        width: 4,
    },
    Accessor {
        routine: 0x016D3BB0,
        direction: Direction::Reads,
        offset: 0x4aa,
        width: 4,
    },
    Accessor {
        routine: 0x016E9F30,
        direction: Direction::Reads,
        offset: 0x004,
        width: 1,
    },
    Accessor {
        routine: 0x016EBDB0,
        direction: Direction::Reads,
        offset: 0x005,
        width: 1,
    },
    Accessor {
        routine: 0x016EBDC0,
        direction: Direction::Reads,
        offset: 0x128,
        width: 8,
    },
    Accessor {
        routine: 0x016ED770,
        direction: Direction::Reads,
        offset: 0x6a0,
        width: 8,
    },
    Accessor {
        routine: 0x016EE480,
        direction: Direction::Reads,
        offset: 0x11f,
        width: 1,
    },
    Accessor {
        routine: 0x01705790,
        direction: Direction::Reads,
        offset: 0x010,
        width: 8,
    },
    Accessor {
        routine: 0x01706470,
        direction: Direction::Reads,
        offset: 0x720,
        width: 8,
    },
    Accessor {
        routine: 0x01706480,
        direction: Direction::Reads,
        offset: 0x6e8,
        width: 1,
    },
    Accessor {
        routine: 0x01708490,
        direction: Direction::Reads,
        offset: 0x038,
        width: 8,
    },
    Accessor {
        routine: 0x0173D730,
        direction: Direction::Reads,
        offset: 0x010,
        width: 4,
    },
    Accessor {
        routine: 0x0173D740,
        direction: Direction::Writes,
        offset: 0x010,
        width: 4,
    },
    Accessor {
        routine: 0x0173D750,
        direction: Direction::Reads,
        offset: 0x020,
        width: 8,
    },
    Accessor {
        routine: 0x0173D860,
        direction: Direction::Reads,
        offset: 0x039,
        width: 1,
    },
    Accessor {
        routine: 0x01751470,
        direction: Direction::Reads,
        offset: 0x038,
        width: 4,
    },
    Accessor {
        routine: 0x0176A3A0,
        direction: Direction::Writes,
        offset: 0x064,
        width: 4,
    },
    Accessor {
        routine: 0x017919F0,
        direction: Direction::Reads,
        offset: 0x058,
        width: 8,
    },
    Accessor {
        routine: 0x01795670,
        direction: Direction::Writes,
        offset: 0xc90,
        width: 1,
    },
    Accessor {
        routine: 0x01799A70,
        direction: Direction::Reads,
        offset: 0xcf8,
        width: 4,
    },
    Accessor {
        routine: 0x017BF3C0,
        direction: Direction::Reads,
        offset: 0x0a0,
        width: 4,
    },
    Accessor {
        routine: 0x017BF3D0,
        direction: Direction::Reads,
        offset: 0x0a8,
        width: 1,
    },
    Accessor {
        routine: 0x017C06D0,
        direction: Direction::Reads,
        offset: 0x3f0,
        width: 8,
    },
    Accessor {
        routine: 0x017C25E0,
        direction: Direction::Writes,
        offset: 0x098,
        width: 1,
    },
    Accessor {
        routine: 0x017C25F0,
        direction: Direction::Reads,
        offset: 0x098,
        width: 1,
    },
    Accessor {
        routine: 0x017C3740,
        direction: Direction::Reads,
        offset: 0x3d9,
        width: 1,
    },
    Accessor {
        routine: 0x017DF2F0,
        direction: Direction::Reads,
        offset: 0x6c8,
        width: 1,
    },
    Accessor {
        routine: 0x017E32E0,
        direction: Direction::Writes,
        offset: 0x360,
        width: 8,
    },
    Accessor {
        routine: 0x017E32F0,
        direction: Direction::Writes,
        offset: 0x3a0,
        width: 8,
    },
    Accessor {
        routine: 0x017E3300,
        direction: Direction::Reads,
        offset: 0x360,
        width: 8,
    },
    Accessor {
        routine: 0x017E3310,
        direction: Direction::Writes,
        offset: 0x368,
        width: 4,
    },
    Accessor {
        routine: 0x017E3320,
        direction: Direction::Reads,
        offset: 0x368,
        width: 4,
    },
    Accessor {
        routine: 0x017E40A0,
        direction: Direction::Writes,
        offset: 0x35c,
        width: 4,
    },
    Accessor {
        routine: 0x017FF250,
        direction: Direction::Reads,
        offset: 0x052,
        width: 1,
    },
    Accessor {
        routine: 0x017FF5F0,
        direction: Direction::Writes,
        offset: 0x068,
        width: 8,
    },
    Accessor {
        routine: 0x017FF630,
        direction: Direction::Writes,
        offset: 0x078,
        width: 8,
    },
    Accessor {
        routine: 0x017FF660,
        direction: Direction::Reads,
        offset: 0x078,
        width: 8,
    },
    Accessor {
        routine: 0x01803C40,
        direction: Direction::Reads,
        offset: 0x010,
        width: 8,
    },
    Accessor {
        routine: 0x01803C90,
        direction: Direction::Writes,
        offset: 0x010,
        width: 8,
    },
    Accessor {
        routine: 0x0185AA70,
        direction: Direction::Reads,
        offset: 0x018,
        width: 8,
    },
    Accessor {
        routine: 0x0185F2C0,
        direction: Direction::Reads,
        offset: 0x028,
        width: 8,
    },
    Accessor {
        routine: 0x018697D0,
        direction: Direction::Reads,
        offset: 0x010,
        width: 8,
    },
    Accessor {
        routine: 0x01876F60,
        direction: Direction::Reads,
        offset: 0x010,
        width: 1,
    },
    Accessor {
        routine: 0x018777F0,
        direction: Direction::Writes,
        offset: 0x020,
        width: 1,
    },
    Accessor {
        routine: 0x01877810,
        direction: Direction::Reads,
        offset: 0x020,
        width: 1,
    },
    Accessor {
        routine: 0x01877870,
        direction: Direction::Reads,
        offset: 0x010,
        width: 4,
    },
    Accessor {
        routine: 0x01877910,
        direction: Direction::Writes,
        offset: 0x008,
        width: 4,
    },
    Accessor {
        routine: 0x01884030,
        direction: Direction::Reads,
        offset: 0x21a,
        width: 1,
    },
    Accessor {
        routine: 0x01888DB0,
        direction: Direction::Reads,
        offset: 0x034,
        width: 1,
    },
    Accessor {
        routine: 0x01888DC0,
        direction: Direction::Reads,
        offset: 0x020,
        width: 8,
    },
    Accessor {
        routine: 0x01888DD0,
        direction: Direction::Reads,
        offset: 0x028,
        width: 8,
    },
    Accessor {
        routine: 0x01888DF0,
        direction: Direction::Writes,
        offset: 0x034,
        width: 1,
    },
    Accessor {
        routine: 0x0189E600,
        direction: Direction::Writes,
        offset: 0x0d1,
        width: 1,
    },
    Accessor {
        routine: 0x018CF340,
        direction: Direction::Reads,
        offset: 0x098,
        width: 8,
    },
    Accessor {
        routine: 0x01950560,
        direction: Direction::Writes,
        offset: 0x0e0,
        width: 1,
    },
    Accessor {
        routine: 0x019506B0,
        direction: Direction::Reads,
        offset: 0x0c3,
        width: 1,
    },
    Accessor {
        routine: 0x019512E0,
        direction: Direction::Writes,
        offset: 0x0c5,
        width: 1,
    },
    Accessor {
        routine: 0x01953F40,
        direction: Direction::Reads,
        offset: 0x080,
        width: 8,
    },
    Accessor {
        routine: 0x019582E0,
        direction: Direction::Reads,
        offset: 0x008,
        width: 4,
    },
    Accessor {
        routine: 0x0195B9B0,
        direction: Direction::Reads,
        offset: 0x21a,
        width: 1,
    },
    Accessor {
        routine: 0x0195E830,
        direction: Direction::Reads,
        offset: 0x0b0,
        width: 8,
    },
    Accessor {
        routine: 0x0196A2B0,
        direction: Direction::Writes,
        offset: 0x168,
        width: 1,
    },
    Accessor {
        routine: 0x0196F560,
        direction: Direction::Reads,
        offset: 0x188,
        width: 8,
    },
    Accessor {
        routine: 0x01978A10,
        direction: Direction::Reads,
        offset: 0x028,
        width: 8,
    },
    Accessor {
        routine: 0x0197A0B0,
        direction: Direction::Reads,
        offset: 0x0d1,
        width: 1,
    },
    Accessor {
        routine: 0x0197AC40,
        direction: Direction::Writes,
        offset: 0x0d1,
        width: 1,
    },
    Accessor {
        routine: 0x0197CA30,
        direction: Direction::Reads,
        offset: 0x010,
        width: 4,
    },
    Accessor {
        routine: 0x0198D430,
        direction: Direction::Reads,
        offset: 0x210,
        width: 8,
    },
    Accessor {
        routine: 0x01995280,
        direction: Direction::Reads,
        offset: 0x241,
        width: 1,
    },
    Accessor {
        routine: 0x01995410,
        direction: Direction::Reads,
        offset: 0x380,
        width: 1,
    },
    Accessor {
        routine: 0x01995490,
        direction: Direction::Writes,
        offset: 0x384,
        width: 4,
    },
    Accessor {
        routine: 0x019954A0,
        direction: Direction::Reads,
        offset: 0x384,
        width: 4,
    },
    Accessor {
        routine: 0x019954B0,
        direction: Direction::Writes,
        offset: 0x378,
        width: 4,
    },
    Accessor {
        routine: 0x019954C0,
        direction: Direction::Writes,
        offset: 0x37c,
        width: 4,
    },
    Accessor {
        routine: 0x019954D0,
        direction: Direction::Reads,
        offset: 0x378,
        width: 4,
    },
    Accessor {
        routine: 0x019954E0,
        direction: Direction::Reads,
        offset: 0x37c,
        width: 4,
    },
    Accessor {
        routine: 0x019959A0,
        direction: Direction::Reads,
        offset: 0x398,
        width: 4,
    },
    Accessor {
        routine: 0x0199A400,
        direction: Direction::Reads,
        offset: 0x073,
        width: 1,
    },
    Accessor {
        routine: 0x0199E300,
        direction: Direction::Reads,
        offset: 0x3a8,
        width: 1,
    },
    Accessor {
        routine: 0x019A1F40,
        direction: Direction::Writes,
        offset: 0xe60,
        width: 8,
    },
    Accessor {
        routine: 0x019AD800,
        direction: Direction::Reads,
        offset: 0x238,
        width: 8,
    },
    Accessor {
        routine: 0x019CD8C0,
        direction: Direction::Writes,
        offset: 0x03b,
        width: 1,
    },
    Accessor {
        routine: 0x019CF710,
        direction: Direction::Reads,
        offset: 0x051,
        width: 1,
    },
    Accessor {
        routine: 0x019CF720,
        direction: Direction::Reads,
        offset: 0x053,
        width: 1,
    },
    Accessor {
        routine: 0x01A52E40,
        direction: Direction::Writes,
        offset: 0x2944,
        width: 4,
    },
    Accessor {
        routine: 0x01A5EB40,
        direction: Direction::Reads,
        offset: 0x048,
        width: 8,
    },
    Accessor {
        routine: 0x01A69290,
        direction: Direction::Writes,
        offset: 0xc10,
        width: 8,
    },
    Accessor {
        routine: 0x01A99930,
        direction: Direction::Reads,
        offset: 0x07c,
        width: 4,
    },
    Accessor {
        routine: 0x01A99940,
        direction: Direction::Reads,
        offset: 0x080,
        width: 4,
    },
    Accessor {
        routine: 0x01A99990,
        direction: Direction::Reads,
        offset: 0x088,
        width: 4,
    },
    Accessor {
        routine: 0x01A999A0,
        direction: Direction::Writes,
        offset: 0x08c,
        width: 4,
    },
    Accessor {
        routine: 0x01A999B0,
        direction: Direction::Reads,
        offset: 0x08c,
        width: 4,
    },
    Accessor {
        routine: 0x01A99A20,
        direction: Direction::Reads,
        offset: 0x090,
        width: 4,
    },
    Accessor {
        routine: 0x01A99B30,
        direction: Direction::Reads,
        offset: 0x085,
        width: 1,
    },
    Accessor {
        routine: 0x01A99B80,
        direction: Direction::Reads,
        offset: 0x086,
        width: 1,
    },
    Accessor {
        routine: 0x01A99BE0,
        direction: Direction::Reads,
        offset: 0x084,
        width: 1,
    },
    Accessor {
        routine: 0x01A9D8B0,
        direction: Direction::Writes,
        offset: 0x170,
        width: 1,
    },
    Accessor {
        routine: 0x01AEBA80,
        direction: Direction::Reads,
        offset: 0x6b0,
        width: 8,
    },
    Accessor {
        routine: 0x01AECDE0,
        direction: Direction::Writes,
        offset: 0x019,
        width: 1,
    },
    Accessor {
        routine: 0x01AECDF0,
        direction: Direction::Reads,
        offset: 0x019,
        width: 1,
    },
    Accessor {
        routine: 0x01B0F810,
        direction: Direction::Writes,
        offset: 0x060,
        width: 8,
    },
    Accessor {
        routine: 0x01B0F820,
        direction: Direction::Writes,
        offset: 0x390,
        width: 4,
    },
    Accessor {
        routine: 0x01B0F830,
        direction: Direction::Writes,
        offset: 0x394,
        width: 4,
    },
    Accessor {
        routine: 0x01B0F860,
        direction: Direction::Writes,
        offset: 0x2b0,
        width: 8,
    },
    Accessor {
        routine: 0x01B10CD0,
        direction: Direction::Reads,
        offset: 0x008,
        width: 8,
    },
    Accessor {
        routine: 0x01B10CE0,
        direction: Direction::Reads,
        offset: 0x010,
        width: 4,
    },
    Accessor {
        routine: 0x01B10D00,
        direction: Direction::Reads,
        offset: 0x018,
        width: 4,
    },
    Accessor {
        routine: 0x01B10F00,
        direction: Direction::Reads,
        offset: 0x018,
        width: 4,
    },
    Accessor {
        routine: 0x01B36CB0,
        direction: Direction::Writes,
        offset: 0x618,
        width: 8,
    },
    Accessor {
        routine: 0x01B455B0,
        direction: Direction::Reads,
        offset: 0x024,
        width: 4,
    },
    Accessor {
        routine: 0x01B474D0,
        direction: Direction::Reads,
        offset: 0x024,
        width: 4,
    },
    Accessor {
        routine: 0x01B489D0,
        direction: Direction::Reads,
        offset: 0x024,
        width: 4,
    },
    Accessor {
        routine: 0x01B49AC0,
        direction: Direction::Reads,
        offset: 0x024,
        width: 4,
    },
    Accessor {
        routine: 0x01B53190,
        direction: Direction::Writes,
        offset: 0x5570,
        width: 8,
    },
    Accessor {
        routine: 0x01B53570,
        direction: Direction::Writes,
        offset: 0x5580,
        width: 8,
    },
    Accessor {
        routine: 0x01B5DB40,
        direction: Direction::Reads,
        offset: 0x090,
        width: 8,
    },
    Accessor {
        routine: 0x01B5E620,
        direction: Direction::Reads,
        offset: 0x090,
        width: 8,
    },
    Accessor {
        routine: 0x01B5E6D0,
        direction: Direction::Writes,
        offset: 0x068,
        width: 1,
    },
    Accessor {
        routine: 0x01BBACF0,
        direction: Direction::Writes,
        offset: 0x038,
        width: 8,
    },
    Accessor {
        routine: 0x01BF94C0,
        direction: Direction::Reads,
        offset: 0x008,
        width: 8,
    },
    Accessor {
        routine: 0x01BFAB50,
        direction: Direction::Reads,
        offset: 0x008,
        width: 8,
    },
    Accessor {
        routine: 0x01BFB0F0,
        direction: Direction::Writes,
        offset: 0x038,
        width: 8,
    },
    Accessor {
        routine: 0x01BFC9F0,
        direction: Direction::Reads,
        offset: 0x030,
        width: 1,
    },
    Accessor {
        routine: 0x01BFCA00,
        direction: Direction::Reads,
        offset: 0x034,
        width: 4,
    },
    Accessor {
        routine: 0x01BFD130,
        direction: Direction::Writes,
        offset: 0x030,
        width: 8,
    },
    Accessor {
        routine: 0x01BFD960,
        direction: Direction::Reads,
        offset: 0x008,
        width: 8,
    },
    Accessor {
        routine: 0x01C32280,
        direction: Direction::Writes,
        offset: 0x718,
        width: 8,
    },
    Accessor {
        routine: 0x01C323E0,
        direction: Direction::Reads,
        offset: 0x718,
        width: 8,
    },
    Accessor {
        routine: 0x01C681A0,
        direction: Direction::Reads,
        offset: 0x534,
        width: 4,
    },
    Accessor {
        routine: 0x01C97230,
        direction: Direction::Reads,
        offset: 0x18a0,
        width: 8,
    },
    Accessor {
        routine: 0x01CC7260,
        direction: Direction::Reads,
        offset: 0x024,
        width: 4,
    },
    Accessor {
        routine: 0x01CD6740,
        direction: Direction::Writes,
        offset: 0x074,
        width: 4,
    },
    Accessor {
        routine: 0x01CF0D70,
        direction: Direction::Reads,
        offset: 0x00a,
        width: 1,
    },
    Accessor {
        routine: 0x01CFACA0,
        direction: Direction::Reads,
        offset: 0x0ee,
        width: 2,
    },
    Accessor {
        routine: 0x01CFACB0,
        direction: Direction::Reads,
        offset: 0x0f0,
        width: 2,
    },
    Accessor {
        routine: 0x01CFC620,
        direction: Direction::Reads,
        offset: 0x0d1,
        width: 1,
    },
    Accessor {
        routine: 0x01CFC770,
        direction: Direction::Reads,
        offset: 0x0d3,
        width: 1,
    },
    Accessor {
        routine: 0x01D01900,
        direction: Direction::Writes,
        offset: 0x0e8,
        width: 4,
    },
    Accessor {
        routine: 0x01D07010,
        direction: Direction::Reads,
        offset: 0x3ec,
        width: 4,
    },
    Accessor {
        routine: 0x01D07020,
        direction: Direction::Writes,
        offset: 0x3ec,
        width: 4,
    },
    Accessor {
        routine: 0x01D07320,
        direction: Direction::Reads,
        offset: 0x3b8,
        width: 1,
    },
    Accessor {
        routine: 0x01D0A340,
        direction: Direction::Writes,
        offset: 0x532,
        width: 1,
    },
    Accessor {
        routine: 0x01D0A350,
        direction: Direction::Reads,
        offset: 0x532,
        width: 1,
    },
    Accessor {
        routine: 0x01D12280,
        direction: Direction::Reads,
        offset: 0x008,
        width: 8,
    },
    Accessor {
        routine: 0x01D12290,
        direction: Direction::Writes,
        offset: 0x008,
        width: 8,
    },
    Accessor {
        routine: 0x01D122A0,
        direction: Direction::Reads,
        offset: 0x010,
        width: 8,
    },
    Accessor {
        routine: 0x01D122B0,
        direction: Direction::Writes,
        offset: 0x010,
        width: 8,
    },
    Accessor {
        routine: 0x01D122C0,
        direction: Direction::Reads,
        offset: 0x018,
        width: 8,
    },
    Accessor {
        routine: 0x01D122D0,
        direction: Direction::Writes,
        offset: 0x018,
        width: 8,
    },
    Accessor {
        routine: 0x01D122E0,
        direction: Direction::Reads,
        offset: 0x020,
        width: 8,
    },
    Accessor {
        routine: 0x01D122F0,
        direction: Direction::Writes,
        offset: 0x020,
        width: 8,
    },
    Accessor {
        routine: 0x01D12300,
        direction: Direction::Reads,
        offset: 0x028,
        width: 8,
    },
    Accessor {
        routine: 0x01D12310,
        direction: Direction::Writes,
        offset: 0x028,
        width: 8,
    },
    Accessor {
        routine: 0x01D12320,
        direction: Direction::Reads,
        offset: 0x030,
        width: 8,
    },
    Accessor {
        routine: 0x01D12330,
        direction: Direction::Writes,
        offset: 0x030,
        width: 8,
    },
    Accessor {
        routine: 0x01D12350,
        direction: Direction::Writes,
        offset: 0x038,
        width: 2,
    },
    Accessor {
        routine: 0x01D2B010,
        direction: Direction::Writes,
        offset: 0x010,
        width: 1,
    },
    Accessor {
        routine: 0x01D2B050,
        direction: Direction::Reads,
        offset: 0x012,
        width: 1,
    },
    Accessor {
        routine: 0x01D2E590,
        direction: Direction::Reads,
        offset: 0x054,
        width: 8,
    },
    Accessor {
        routine: 0x01D31A40,
        direction: Direction::Reads,
        offset: 0x01c,
        width: 4,
    },
    Accessor {
        routine: 0x01D46540,
        direction: Direction::Writes,
        offset: 0x018,
        width: 4,
    },
    Accessor {
        routine: 0x01D859A0,
        direction: Direction::Reads,
        offset: 0x02a,
        width: 1,
    },
];

/// How many there are.
pub const ACCESSOR_COUNT: usize = 837;

/// Implements part of the accessor family.
///
/// What one routine does, if it is one of these.
#[must_use]
pub fn accessor_at(routine: u32) -> Option<&'static Accessor> {
    ACCESSORS
        .binary_search_by_key(&routine, |held| held.routine)
        .ok()
        .map(|at| &ACCESSORS[at])
}

/// Implements part of the accessor family.
///
/// Every routine that goes one way.
#[must_use]
pub fn going(direction: Direction) -> Vec<&'static Accessor> {
    ACCESSORS
        .iter()
        .filter(|held| held.direction == direction)
        .collect()
}

/// Implements part of the accessor family.
///
/// Every routine that reaches one place, whichever way it goes.
#[must_use]
pub fn reaching(offset: u32) -> Vec<&'static Accessor> {
    ACCESSORS
        .iter()
        .filter(|held| held.offset == offset)
        .collect()
}

/// Implements part of the accessor family.
///
/// The places reached most often, commonest first.
#[must_use]
pub fn commonest_places(how_many: usize) -> Vec<(u32, usize)> {
    let mut counted: Vec<(u32, usize)> = Vec::new();
    for held in &ACCESSORS {
        match counted.iter_mut().find(|(at, _)| *at == held.offset) {
            Some((_, seen)) => *seen += 1,
            None => counted.push((held.offset, 1)),
        }
    }
    counted.sort_by(|left, right| right.1.cmp(&left.1).then(left.0.cmp(&right.0)));
    counted.truncate(how_many);
    counted
}

/// Implements part of the accessor family.
///
/// The places that are read but never written through a routine of their own.
///
/// Most of them. What sets these fields does it while doing something else, so
/// a place appearing here is a field the program hands out but does not offer a
/// way to set.
#[must_use]
pub fn read_but_never_written() -> Vec<u32> {
    let written: Vec<u32> = going(Direction::Writes)
        .into_iter()
        .map(|held| held.offset)
        .collect();
    let mut found: Vec<u32> = going(Direction::Reads)
        .into_iter()
        .map(|held| held.offset)
        .filter(|offset| !written.contains(offset))
        .collect();
    found.sort_unstable();
    found.dedup();
    found
}

/// Implements part of the accessor family.
///
/// How wide the fields reached this way are, commonest width first.
#[must_use]
pub fn widths_in_use() -> Vec<(u8, usize)> {
    let mut counted: Vec<(u8, usize)> = Vec::new();
    for held in &ACCESSORS {
        match counted.iter_mut().find(|(wide, _)| *wide == held.width) {
            Some((_, seen)) => *seen += 1,
            None => counted.push((held.width, 1)),
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
        assert_eq!(ACCESSORS.len(), ACCESSOR_COUNT);
    }

    #[test]
    fn the_table_is_sorted_so_it_can_be_searched() {
        assert!(
            ACCESSORS
                .windows(2)
                .all(|pair| pair[0].routine < pair[1].routine)
        );
    }

    #[test]
    fn every_width_is_one_a_machine_can_load_in_one_go() {
        for held in &ACCESSORS {
            assert!(
                matches!(held.width, 1 | 2 | 4 | 8),
                "{:#010X}",
                held.routine
            );
        }
    }

    #[test]
    fn reads_outnumber_writes() {
        // So a good half of these fields are never set through a routine of
        // their own.
        let reads = going(Direction::Reads).len();
        let writes = going(Direction::Writes).len();

        assert!(reads > writes, "{reads} reads, {writes} writes");
    }

    #[test]
    fn and_both_ways_are_well_represented() {
        assert!(going(Direction::Writes).len() * 3 > ACCESSORS.len());
    }

    #[test]
    fn the_widest_fields_are_the_commonest() {
        // Which in a program of this age means these are mostly references to
        // other objects rather than values.
        let widths = widths_in_use();

        assert_eq!(widths[0].0, 8);
    }

    #[test]
    fn every_width_a_machine_can_load_is_used_at_least_once() {
        let widths = widths_in_use();

        for wide in [1u8, 2, 4, 8] {
            assert!(widths.iter().any(|(held, _)| *held == wide), "{wide}");
        }
    }

    #[test]
    fn some_places_are_reached_by_several_routines() {
        let commonest = commonest_places(5);

        assert!(commonest[0].1 > 1);
        assert!(commonest[0].1 >= commonest[4].1);
    }

    #[test]
    fn the_commonest_places_are_near_the_front_of_an_object() {
        // Which is where a base class puts what it keeps.
        for (offset, _) in commonest_places(5) {
            assert!(offset < 0x100, "{offset:#x}");
        }
    }

    #[test]
    fn many_places_are_read_and_never_written() {
        let orphans = read_but_never_written();

        assert!(!orphans.is_empty());
        assert!(orphans.len() * 2 > commonest_places(usize::MAX).len() / 2);
    }

    #[test]
    fn a_place_that_is_written_is_not_among_them() {
        let orphans = read_but_never_written();
        for held in going(Direction::Writes) {
            assert!(!orphans.contains(&held.offset), "{:#x}", held.offset);
        }
    }

    #[test]
    fn an_accessor_can_be_found_by_its_address() {
        let known = ACCESSORS[0].routine;

        assert!(accessor_at(known).is_some());
        assert!(accessor_at(0).is_none());
        assert!(accessor_at(0xFFFF_FFFF).is_none());
    }

    #[test]
    fn a_place_can_be_found_by_its_offset() {
        let known = ACCESSORS[0].offset;

        assert!(!reaching(known).is_empty());
        assert!(reaching(0xFFFF_FFFF).is_empty());
    }

    #[test]
    fn none_of_these_is_already_a_landing_pad_or_a_shim() {
        // The sweeps are of one population and must not overlap.
        for held in ACCESSORS.iter().take(200) {
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
    fn the_places_reached_most_often_are_reached_at_several_widths() {
        // Because objects of different classes are laid out over each other:
        // an offset does not identify a field.
        let mut disagreeing = 0;
        for (offset, _) in commonest_places(40) {
            let mut widths: Vec<u8> = reaching(offset).iter().map(|held| held.width).collect();
            widths.sort_unstable();
            widths.dedup();
            if widths.len() > 1 {
                disagreeing += 1;
            }
        }

        assert!(disagreeing * 2 > 40, "{disagreeing} of the 40 commonest");
    }

    #[test]
    fn but_most_places_over_all_are_reached_at_one_width() {
        // The busy places are the ambiguous ones; the rare ones are clean.
        let mut ambiguous = 0;
        let mut places = 0;
        for (offset, _) in commonest_places(usize::MAX) {
            places += 1;
            let mut widths: Vec<u8> = reaching(offset).iter().map(|held| held.width).collect();
            widths.sort_unstable();
            widths.dedup();
            if widths.len() > 1 {
                ambiguous += 1;
            }
        }

        assert!(ambiguous * 2 < places, "{ambiguous} of {places}");
    }

    #[test]
    fn which_is_why_none_of_these_offsets_is_given_a_name() {
        // Naming one would be inventing something the program does not say.
        let mut distinct: Vec<u8> = reaching(commonest_places(1)[0].0)
            .iter()
            .map(|held| held.width)
            .collect();
        distinct.sort_unstable();
        distinct.dedup();

        assert!(distinct.len() > 2, "{distinct:?}");
    }
}
