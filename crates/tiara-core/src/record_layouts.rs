//! What the compiler-written clean-up routines say about a record's shape.
//!
//! Delphi emits a routine for every record type that holds a managed field —
//! a string, an interface reference or an array of either — and that routine
//! releases each of them by name and offset. Rust has no counterpart: dropping
//! a value releases what it owns, and there is nothing to write down.
//!
//! What is worth keeping is not the routine but what it discloses. It names
//! every managed field of a record, where it sits, and what kind it is, for a
//! record nothing else in the decompilation describes — so when a function
//! that reaches into one of these records is ported, this is where to look up
//! what it is reaching for.

/// What kind of managed field sits at one offset.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ManagedField {
    /// A run of one or more strings, each eight bytes.
    Texts(usize),
    /// An interface reference.
    Interface,
    /// A run of elements of some other record type, finalised together.
    ///
    /// The element type is a pointer the decompilation does not resolve, so
    /// only how many there are is known — not how wide each one is, and
    /// therefore not where the run ends.
    Elements { element_type: u32, count: usize },
    /// A dynamic array: one pointer, released whole.
    ///
    /// Released by the two-argument helper rather than the three-argument one,
    /// which is what tells a dynamic array from a fixed run of elements — the
    /// array knows its own length and the run has to be told.
    DynamicArray { element_type: u32 },
    /// A run of strings of the other kind.
    ///
    /// Two separate pairs of helpers release strings, and a record may hold
    /// both. Which of the language's string types each pair belongs to is not
    /// recoverable; what is recoverable is that they are not the same type,
    /// because nothing would use two helpers for one.
    OtherStrings(usize),
    /// A field released by pointing at its type rather than by naming a kind.
    ///
    /// The helper takes the field and a type descriptor and works out the rest
    /// for itself, so the field's kind lives in a table this does not reach.
    TypedValue { type_info: u32 },
}

impl ManagedField {
    /// How many bytes this field occupies, where that is known.
    ///
    /// A run of elements has no known width, because the size of its element
    /// type is not recoverable from the clean-up routine alone.
    #[must_use]
    pub const fn width(self) -> Option<usize> {
        match self {
            Self::Texts(count) | Self::OtherStrings(count) => Some(count * 8),
            Self::Interface | Self::DynamicArray { .. } => Some(8),
            Self::Elements { .. } | Self::TypedValue { .. } => None,
        }
    }

    /// A run of elements of another record type.
    #[must_use]
    pub const fn elements(element_type: u32, count: usize) -> Self {
        Self::Elements {
            element_type,
            count,
        }
    }

    /// A dynamic array of one element type.
    #[must_use]
    pub const fn array(element_type: u32) -> Self {
        Self::DynamicArray { element_type }
    }

    /// A field released through its type descriptor.
    #[must_use]
    pub const fn typed(type_info: u32) -> Self {
        Self::TypedValue { type_info }
    }
}

/// The managed fields of one record, in the order they are released.
#[derive(Debug, Clone, Copy)]
pub struct ManagedLayout {
    /// Where the clean-up routine for this record lives.
    pub finaliser: u32,
    /// Each managed field, by offset.
    pub fields: &'static [(usize, ManagedField)],
}

impl ManagedLayout {
    /// What kind of field sits at one offset, if the record has one there.
    #[must_use]
    pub fn field_at(&self, offset: usize) -> Option<ManagedField> {
        self.fields
            .iter()
            .find(|(at, _)| *at == offset)
            .map(|(_, field)| *field)
    }

    /// The last offset the record is known to reach.
    #[must_use]
    pub fn last_offset(&self) -> usize {
        self.fields.last().map_or(0, |(at, _)| *at)
    }
}

/// Recovered from Ghidra function `FUN_012ed2d0` at `0x012ED2D0`.
///
/// A large record — the fields alone run to `0x360` and beyond — holding
/// strings, a great many interface references, and eight runs of elements of
/// three different types. The interfaces outnumber everything else better than
/// two to one, which is what a record built to hold onto other objects looks
/// like rather than one built to hold data.
pub const INTERFACE_HEAVY_RECORD: ManagedLayout = ManagedLayout {
    finaliser: 0x012E_D2D0,
    fields: &[
        (0x068, ManagedField::Texts(3)),
        (0x080, ManagedField::Texts(1)),
        (0x088, ManagedField::Interface),
        (0x090, ManagedField::Interface),
        (0x098, ManagedField::Interface),
        (0x0A0, ManagedField::Texts(1)),
        (0x0A8, ManagedField::Interface),
        (0x0B0, ManagedField::Interface),
        (0x0B8, ManagedField::Texts(1)),
        (0x0C0, ManagedField::Interface),
        (0x0C8, ManagedField::Interface),
        (0x0D0, ManagedField::Texts(1)),
        (
            0x0D8,
            ManagedField::Elements {
                element_type: 0x00B9_F960,
                count: 2,
            },
        ),
        (0x0E8, ManagedField::Interface),
        (0x0F0, ManagedField::Interface),
        (0x0F8, ManagedField::Texts(1)),
        (0x100, ManagedField::Interface),
        (0x108, ManagedField::Interface),
        (0x110, ManagedField::Texts(1)),
        (0x118, ManagedField::Interface),
        (0x120, ManagedField::Interface),
        (0x128, ManagedField::Texts(1)),
        (
            0x130,
            ManagedField::Elements {
                element_type: 0x00B9_F960,
                count: 2,
            },
        ),
        (0x140, ManagedField::Interface),
        (0x148, ManagedField::Interface),
        (
            0x150,
            ManagedField::Elements {
                element_type: 0x00B9_F8E0,
                count: 2,
            },
        ),
        (0x160, ManagedField::Interface),
        (0x168, ManagedField::Interface),
        (0x170, ManagedField::Interface),
        (0x178, ManagedField::Interface),
        (0x180, ManagedField::Interface),
        (0x188, ManagedField::Interface),
        (0x190, ManagedField::Interface),
        (0x198, ManagedField::Interface),
        (0x1A0, ManagedField::Interface),
        (0x1A8, ManagedField::Interface),
        (0x1B0, ManagedField::Texts(3)),
        (0x1C8, ManagedField::Interface),
        (0x1D0, ManagedField::Interface),
        (0x1D8, ManagedField::Interface),
        (0x1E0, ManagedField::Interface),
        (0x1E8, ManagedField::Texts(1)),
        (0x1F0, ManagedField::Interface),
        (0x1F8, ManagedField::Interface),
        (0x200, ManagedField::Interface),
        (0x208, ManagedField::Interface),
        (0x210, ManagedField::Interface),
        (0x218, ManagedField::Texts(1)),
        (
            0x220,
            ManagedField::Elements {
                element_type: 0x00B9_F960,
                count: 2,
            },
        ),
        (0x230, ManagedField::Interface),
        (0x238, ManagedField::Interface),
        (0x240, ManagedField::Interface),
        (0x248, ManagedField::Texts(2)),
        (0x258, ManagedField::Interface),
        (0x260, ManagedField::Interface),
        (0x268, ManagedField::Interface),
        (0x270, ManagedField::Interface),
        (0x278, ManagedField::Interface),
        (0x280, ManagedField::Interface),
        (0x288, ManagedField::Interface),
        (0x290, ManagedField::Texts(1)),
        (
            0x298,
            ManagedField::Elements {
                element_type: 0x00B9_F960,
                count: 2,
            },
        ),
        (0x2A8, ManagedField::Texts(1)),
        (
            0x2B0,
            ManagedField::Elements {
                element_type: 0x00B9_F8E0,
                count: 3,
            },
        ),
        (0x2C8, ManagedField::Texts(3)),
        (0x2E0, ManagedField::Interface),
        (0x2E8, ManagedField::Interface),
        (0x2F0, ManagedField::Texts(2)),
        (0x300, ManagedField::Texts(3)),
        (
            0x318,
            ManagedField::Elements {
                element_type: 0x00B9_F8E0,
                count: 2,
            },
        ),
        (
            0x328,
            ManagedField::Elements {
                element_type: 0x00B9_FCA0,
                count: 5,
            },
        ),
        (
            0x350,
            ManagedField::Elements {
                element_type: 0x00B9_F960,
                count: 2,
            },
        ),
        (
            0x360,
            ManagedField::Elements {
                element_type: 0x00B9_FC60,
                count: 8,
            },
        ),
    ],
};

/// Recovered from Ghidra function `FUN_012f26a0` at `0x012F26A0`.
///
/// A small record with a pair of elements, a pair of strings and three
/// interface references — and a gap between the last two interfaces wide
/// enough for four more eight-byte fields that hold nothing needing release.
pub const SMALL_RECORD: ManagedLayout = ManagedLayout {
    finaliser: 0x012F_26A0,
    fields: &[
        (
            0x30,
            ManagedField::Elements {
                element_type: 0x00B9_F8E0,
                count: 2,
            },
        ),
        (0x40, ManagedField::Texts(2)),
        (0x50, ManagedField::Interface),
        (0x58, ManagedField::Interface),
        (0x80, ManagedField::Interface),
    ],
};

/// Recovered from Ghidra function `FUN_012f2b00` at `0x012F2B00`.
///
/// Small, and interrupted: four eight-byte fields between `0x50` and `0x70`
/// hold nothing that needs releasing, so they are numbers or plain pointers.
pub const GAPPED_RECORD: ManagedLayout = ManagedLayout {
    finaliser: 0x012F_2B00,
    fields: &[
        (0x20, ManagedField::Texts(3)),
        (0x38, ManagedField::Interface),
        (0x40, ManagedField::Texts(1)),
        (0x48, ManagedField::Interface),
        (0x70, ManagedField::Texts(1)),
        (0x78, ManagedField::Interface),
        (0x80, ManagedField::Interface),
    ],
};

/// Recovered from Ghidra function `FUN_012f31f0` at `0x012F31F0`.
///
/// Notable for eight strings in a row from `0x58`, released in one call — a
/// run that long is a fixed-size array of strings rather than eight separately
/// named fields.
pub const EIGHT_TEXT_RECORD: ManagedLayout = ManagedLayout {
    finaliser: 0x012F_31F0,
    fields: &[
        (0x50, ManagedField::Interface),
        (0x58, ManagedField::Texts(8)),
        (0x98, ManagedField::Interface),
        (0xA0, ManagedField::Interface),
        (0xA8, ManagedField::Interface),
        (0xB0, ManagedField::Texts(1)),
        (
            0xB8,
            ManagedField::Elements {
                element_type: 0x00B9_FCA0,
                count: 2,
            },
        ),
        (0xC8, ManagedField::Interface),
        (0x100, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_012f4bb0` at `0x012F4BB0`.
///
/// Three managed fields spread over more than seven hundred bytes: a string, a
/// dynamic array, and then nothing at all until `0x2E0`. Whatever fills the
/// space between needs no releasing, so it is numbers — a record built mostly
/// to hold measurements.
pub const SPARSE_ARRAY_RECORD: ManagedLayout = ManagedLayout {
    finaliser: 0x012F_4BB0,
    fields: &[
        (0x38, ManagedField::Texts(1)),
        (
            0x40,
            ManagedField::DynamicArray {
                element_type: 0x0043_2B90,
            },
        ),
        (0x2E0, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_012f5ec0` at `0x012F5EC0`.
///
/// Strings in runs with unmanaged fields between them, and one dynamic array
/// at the end of the same element type the other two records here carry.
pub const TEXT_AND_ARRAY_RECORD: ManagedLayout = ManagedLayout {
    finaliser: 0x012F_5EC0,
    fields: &[
        (0x40, ManagedField::Texts(4)),
        (0x80, ManagedField::Texts(1)),
        (0x98, ManagedField::Texts(3)),
        (
            0xC0,
            ManagedField::DynamicArray {
                element_type: 0x0043_2B90,
            },
        ),
    ],
};

/// Recovered from Ghidra function `FUN_012f7410` at `0x012F7410`.
///
/// Two single strings and then three pairs of them, one after another with no
/// gaps, ending in a dynamic array. Released as pairs rather than as one run
/// of six, so the pairs are separate fields that happen to sit together.
pub const TEXT_PAIRS_RECORD: ManagedLayout = ManagedLayout {
    finaliser: 0x012F_7410,
    fields: &[
        (0x30, ManagedField::Texts(1)),
        (0x38, ManagedField::Texts(1)),
        (0x40, ManagedField::Texts(2)),
        (0x50, ManagedField::Texts(2)),
        (0x60, ManagedField::Texts(2)),
        (
            0x70,
            ManagedField::DynamicArray {
                element_type: 0x0043_2B90,
            },
        ),
    ],
};

/// Every record layout recovered from a clean-up routine.
pub const RECOVERED_LAYOUTS: [&ManagedLayout; 17] = [
    &INTERFACE_HEAVY_RECORD,
    &SMALL_RECORD,
    &GAPPED_RECORD,
    &EIGHT_TEXT_RECORD,
    &SPARSE_ARRAY_RECORD,
    &TEXT_AND_ARRAY_RECORD,
    &TEXT_PAIRS_RECORD,
    &TWO_INTERFACE_RECORD,
    &ONE_ARRAY_RECORD,
    &SPACED_TEXT_PAIR_RECORD,
    &EARLY_TEXT_PAIR_RECORD,
    &MIDDLE_TEXT_PAIR_RECORD,
    &LATE_TEXT_TRIO_RECORD,
    &EARLY_TEXT_TRIO_RECORD,
    &TEXT_PAIR_0X38_0X68,
    &TEXT_PAIR_0X38_0X58,
    &TEXT_PAIR_0X38_0X78,
];

/// Recovered from Ghidra function `FUN_012fb340` at `0x012FB340`.
///
/// 6 managed fields between `0x48` and `0x340`: 9 strings, 1 dynamic array.
pub const RECORD_AT_012FB340: ManagedLayout = ManagedLayout {
    finaliser: 0x012F_B340,
    fields: &[
        (0x48, ManagedField::Texts(4)),
        (0x68, ManagedField::Texts(1)),
        (0x70, ManagedField::Texts(2)),
        (0x88, ManagedField::Texts(1)),
        (0x90, ManagedField::array(0x0043_2B90)),
        (0x340, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_012fc390` at `0x012FC390`.
///
/// 19 managed fields between `0x28` and `0x1C8`: 34 strings, 3 interface references, 3 runs of elements.
pub const RECORD_AT_012FC390: ManagedLayout = ManagedLayout {
    finaliser: 0x012F_C390,
    fields: &[
        (0x28, ManagedField::elements(0x00B9_F8E0, 2)),
        (0x38, ManagedField::Texts(1)),
        (0x40, ManagedField::Texts(1)),
        (0x48, ManagedField::Texts(1)),
        (0x50, ManagedField::elements(0x00B9_F8E0, 2)),
        (0x60, ManagedField::Texts(11)),
        (0xB8, ManagedField::Texts(1)),
        (0xC0, ManagedField::Texts(1)),
        (0xC8, ManagedField::Texts(2)),
        (0xD8, ManagedField::Texts(2)),
        (0xE8, ManagedField::Texts(1)),
        (0xF0, ManagedField::Texts(1)),
        (0x108, ManagedField::Texts(3)),
        (0x120, ManagedField::Interface),
        (0x128, ManagedField::Texts(8)),
        (0x168, ManagedField::elements(0x00B9_FCA0, 3)),
        (0x180, ManagedField::Interface),
        (0x188, ManagedField::Interface),
        (0x1C8, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_012fd3c0` at `0x012FD3C0`.
///
/// 12 managed fields between `0x20` and `0x118`: 17 strings, 5 interface references, 1 run of elements.
pub const RECORD_AT_012FD3C0: ManagedLayout = ManagedLayout {
    finaliser: 0x012F_D3C0,
    fields: &[
        (0x20, ManagedField::Interface),
        (0x28, ManagedField::Texts(8)),
        (0x68, ManagedField::Texts(3)),
        (0x80, ManagedField::Interface),
        (0x88, ManagedField::Interface),
        (0x90, ManagedField::Interface),
        (0xA8, ManagedField::Texts(3)),
        (0xC0, ManagedField::Texts(1)),
        (0xF0, ManagedField::Texts(1)),
        (0x100, ManagedField::elements(0x00B9_FCA0, 2)),
        (0x110, ManagedField::Interface),
        (0x118, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_012fea50` at `0x012FEA50`.
///
/// 7 managed fields between `0x30` and `0x168`: 20 strings, 4 interface references.
pub const RECORD_AT_012FEA50: ManagedLayout = ManagedLayout {
    finaliser: 0x012F_EA50,
    fields: &[
        (0x30, ManagedField::Texts(14)),
        (0xA0, ManagedField::Interface),
        (0xE8, ManagedField::Texts(1)),
        (0xF8, ManagedField::Interface),
        (0x108, ManagedField::Texts(5)),
        (0x160, ManagedField::Interface),
        (0x168, ManagedField::Interface),
    ],
};

/// Recovered from Ghidra function `FUN_013017d0` at `0x013017D0`.
///
/// 4 managed fields between `0x48` and `0xF8`: 6 strings, 1 dynamic array.
pub const RECORD_AT_013017D0: ManagedLayout = ManagedLayout {
    finaliser: 0x0130_17D0,
    fields: &[
        (0x48, ManagedField::Texts(2)),
        (0xA4, ManagedField::array(0x01D2_E6D8)),
        (0xD8, ManagedField::Texts(3)),
        (0xF8, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01302680` at `0x01302680`.
///
/// 15 managed fields between `0x48` and `0xC8`: 8 strings, 8 interface references.
pub const RECORD_AT_01302680: ManagedLayout = ManagedLayout {
    finaliser: 0x0130_2680,
    fields: &[
        (0x48, ManagedField::Texts(2)),
        (0x58, ManagedField::Texts(1)),
        (0x60, ManagedField::Interface),
        (0x68, ManagedField::Texts(1)),
        (0x70, ManagedField::Interface),
        (0x78, ManagedField::Texts(1)),
        (0x80, ManagedField::Interface),
        (0x88, ManagedField::Texts(1)),
        (0x90, ManagedField::Interface),
        (0x98, ManagedField::Texts(1)),
        (0xA0, ManagedField::Interface),
        (0xA8, ManagedField::Interface),
        (0xB8, ManagedField::Texts(1)),
        (0xC0, ManagedField::Interface),
        (0xC8, ManagedField::Interface),
    ],
};

/// Recovered from Ghidra function `FUN_01302bb0` at `0x01302BB0`.
///
/// 4 managed fields between `0x30` and `0xF0`: 5 strings, 1 dynamic array.
pub const RECORD_AT_01302BB0: ManagedLayout = ManagedLayout {
    finaliser: 0x0130_2BB0,
    fields: &[
        (0x30, ManagedField::Texts(1)),
        (0x40, ManagedField::Texts(3)),
        (0x8C, ManagedField::array(0x01D2_E6D8)),
        (0xF0, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01309850` at `0x01309850`.
///
/// 17 managed fields between `0x40` and `0x148`: 20 strings, 9 interface references.
pub const RECORD_AT_01309850: ManagedLayout = ManagedLayout {
    finaliser: 0x0130_9850,
    fields: &[
        (0x40, ManagedField::Texts(2)),
        (0x50, ManagedField::Interface),
        (0x58, ManagedField::Texts(3)),
        (0x70, ManagedField::Interface),
        (0x78, ManagedField::Texts(1)),
        (0x80, ManagedField::Interface),
        (0x88, ManagedField::Texts(1)),
        (0x90, ManagedField::Interface),
        (0x98, ManagedField::Texts(1)),
        (0xA0, ManagedField::Interface),
        (0xA8, ManagedField::Texts(1)),
        (0xB0, ManagedField::Interface),
        (0xD0, ManagedField::Interface),
        (0xD8, ManagedField::Interface),
        (0xE0, ManagedField::Texts(7)),
        (0x118, ManagedField::Interface),
        (0x148, ManagedField::Texts(4)),
    ],
};

/// Recovered from Ghidra function `FUN_0130a210` at `0x0130A210`.
///
/// 11 managed fields between `0x30` and `0x130`: 18 strings, 5 interface references.
pub const RECORD_AT_0130A210: ManagedLayout = ManagedLayout {
    finaliser: 0x0130_A210,
    fields: &[
        (0x30, ManagedField::Texts(8)),
        (0x70, ManagedField::Interface),
        (0x78, ManagedField::Texts(1)),
        (0x80, ManagedField::Interface),
        (0x88, ManagedField::Texts(2)),
        (0xA8, ManagedField::Texts(2)),
        (0xB8, ManagedField::Interface),
        (0xC0, ManagedField::Interface),
        (0xC8, ManagedField::Interface),
        (0x108, ManagedField::Texts(4)),
        (0x130, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_0130d400` at `0x0130D400`.
///
/// 4 managed fields between `0xB0` and `0x198`: 3 strings, 2 fields released through a type descriptor.
pub const RECORD_AT_0130D400: ManagedLayout = ManagedLayout {
    finaliser: 0x0130_D400,
    fields: &[
        (0xB0, ManagedField::Texts(2)),
        (0xC8, ManagedField::typed(0x0130_B440)),
        (0x148, ManagedField::Texts(1)),
        (0x198, ManagedField::typed(0x0130_B498)),
    ],
};

/// Recovered from Ghidra function `FUN_013123a0` at `0x013123A0`.
///
/// 83 managed fields between `0x48` and `0x9E0`: 102 strings, 30 interface references, 11 runs of elements, 1 field released through a type descriptor.
pub const RECORD_AT_013123A0: ManagedLayout = ManagedLayout {
    finaliser: 0x0131_23A0,
    fields: &[
        (0x48, ManagedField::Interface),
        (0x50, ManagedField::Interface),
        (0x58, ManagedField::Texts(2)),
        (0x68, ManagedField::Interface),
        (0x70, ManagedField::Texts(2)),
        (0x80, ManagedField::Interface),
        (0x88, ManagedField::Texts(2)),
        (0x98, ManagedField::Interface),
        (0xA0, ManagedField::Texts(2)),
        (0xB0, ManagedField::elements(0x00B9_F8E0, 2)),
        (0xC0, ManagedField::Texts(3)),
        (0xD8, ManagedField::Interface),
        (0xE0, ManagedField::Texts(3)),
        (0xF8, ManagedField::Interface),
        (0x100, ManagedField::Texts(9)),
        (0x148, ManagedField::elements(0x00B9_F8E0, 2)),
        (0x158, ManagedField::Texts(3)),
        (0x170, ManagedField::Interface),
        (0x178, ManagedField::Texts(1)),
        (0x180, ManagedField::Interface),
        (0x188, ManagedField::Texts(1)),
        (0x190, ManagedField::elements(0x00B9_F8E0, 4)),
        (0x1B0, ManagedField::Texts(1)),
        (0x1B8, ManagedField::elements(0x00B9_F8E0, 2)),
        (0x1C8, ManagedField::Texts(1)),
        (0x1D0, ManagedField::Interface),
        (0x1D8, ManagedField::Texts(1)),
        (0x1E0, ManagedField::Interface),
        (0x1E8, ManagedField::Texts(2)),
        (0x1F8, ManagedField::Interface),
        (0x200, ManagedField::Texts(1)),
        (0x208, ManagedField::Interface),
        (0x210, ManagedField::Texts(2)),
        (0x220, ManagedField::Interface),
        (0x228, ManagedField::Texts(1)),
        (0x230, ManagedField::Interface),
        (0x238, ManagedField::Texts(2)),
        (0x248, ManagedField::Interface),
        (0x250, ManagedField::Texts(1)),
        (0x258, ManagedField::elements(0x00B9_F8E0, 6)),
        (0x288, ManagedField::Texts(2)),
        (0x298, ManagedField::Interface),
        (0x2A0, ManagedField::Texts(1)),
        (0x2A8, ManagedField::Interface),
        (0x2B0, ManagedField::Texts(1)),
        (0x2B8, ManagedField::Interface),
        (0x2C0, ManagedField::Texts(2)),
        (0x2D0, ManagedField::Interface),
        (0x2D8, ManagedField::Texts(2)),
        (0x2E8, ManagedField::Interface),
        (0x2F0, ManagedField::Texts(1)),
        (0x2F8, ManagedField::Interface),
        (0x300, ManagedField::Texts(2)),
        (0x310, ManagedField::elements(0x00B9_F8E0, 5)),
        (0x338, ManagedField::Texts(1)),
        (0x340, ManagedField::Interface),
        (0x348, ManagedField::Texts(1)),
        (0x350, ManagedField::elements(0x00B9_F8E0, 2)),
        (0x368, ManagedField::Interface),
        (0x360, ManagedField::Texts(1)),
        (0x370, ManagedField::Interface),
        (0x378, ManagedField::Texts(1)),
        (0x380, ManagedField::Interface),
        (0x388, ManagedField::Texts(1)),
        (0x390, ManagedField::Interface),
        (0x398, ManagedField::Texts(1)),
        (0x3A0, ManagedField::elements(0x00B9_F8E0, 2)),
        (0x3B0, ManagedField::Texts(1)),
        (0x3B8, ManagedField::elements(0x00B9_F8E0, 2)),
        (0x3C8, ManagedField::Texts(1)),
        (0x3D0, ManagedField::elements(0x00B9_F8E0, 3)),
        (0x3E8, ManagedField::Texts(3)),
        (0x410, ManagedField::Texts(1)),
        (0x418, ManagedField::Interface),
        (0x420, ManagedField::Texts(9)),
        (0x840, ManagedField::Texts(10)),
        (0x8A0, ManagedField::elements(0x00B9_FCA0, 5)),
        (0x8C8, ManagedField::Interface),
        (0x8D0, ManagedField::Texts(17)),
        (0x960, ManagedField::Interface),
        (0x968, ManagedField::Texts(2)),
        (0x988, ManagedField::typed(0x0130_E4A8)),
        (0x9E0, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01317aa0` at `0x01317AA0`.
///
/// 99 managed fields between `0x68` and `0x678`: 32 strings, 74 interface references, 4 runs of elements, 1 dynamic array.
pub const RECORD_AT_01317AA0: ManagedLayout = ManagedLayout {
    finaliser: 0x0131_7AA0,
    fields: &[
        (0x68, ManagedField::Interface),
        (0x70, ManagedField::Texts(6)),
        (0xA0, ManagedField::Interface),
        (0xA8, ManagedField::Interface),
        (0xB0, ManagedField::Interface),
        (0xB8, ManagedField::Texts(2)),
        (0xC8, ManagedField::Interface),
        (0xD0, ManagedField::Texts(2)),
        (0xE0, ManagedField::Interface),
        (0xE8, ManagedField::elements(0x00B9_F960, 2)),
        (0xF8, ManagedField::Interface),
        (0x100, ManagedField::Interface),
        (0x108, ManagedField::Texts(1)),
        (0x110, ManagedField::Interface),
        (0x118, ManagedField::Interface),
        (0x120, ManagedField::Interface),
        (0x128, ManagedField::Interface),
        (0x130, ManagedField::Texts(3)),
        (0x148, ManagedField::Interface),
        (0x150, ManagedField::elements(0x00B9_F960, 2)),
        (0x160, ManagedField::Interface),
        (0x168, ManagedField::Interface),
        (0x170, ManagedField::Texts(1)),
        (0x178, ManagedField::Interface),
        (0x180, ManagedField::Interface),
        (0x188, ManagedField::Interface),
        (0x190, ManagedField::Interface),
        (0x198, ManagedField::Texts(1)),
        (0x1A0, ManagedField::Interface),
        (0x1A8, ManagedField::Interface),
        (0x1B0, ManagedField::Texts(1)),
        (0x1B8, ManagedField::Interface),
        (0x1C0, ManagedField::Interface),
        (0x1C8, ManagedField::Interface),
        (0x1D0, ManagedField::Interface),
        (0x1D8, ManagedField::Interface),
        (0x1E0, ManagedField::Interface),
        (0x1E8, ManagedField::Interface),
        (0x1F0, ManagedField::Interface),
        (0x1F8, ManagedField::Texts(1)),
        (0x200, ManagedField::Interface),
        (0x208, ManagedField::Interface),
        (0x210, ManagedField::Interface),
        (0x218, ManagedField::Interface),
        (0x220, ManagedField::Texts(1)),
        (0x228, ManagedField::Interface),
        (0x230, ManagedField::Interface),
        (0x238, ManagedField::Texts(1)),
        (0x240, ManagedField::Interface),
        (0x248, ManagedField::Interface),
        (0x250, ManagedField::Interface),
        (0x258, ManagedField::Interface),
        (0x260, ManagedField::Interface),
        (0x268, ManagedField::Interface),
        (0x270, ManagedField::Interface),
        (0x278, ManagedField::Interface),
        (0x280, ManagedField::Texts(1)),
        (0x288, ManagedField::Interface),
        (0x290, ManagedField::Interface),
        (0x298, ManagedField::Interface),
        (0x2A0, ManagedField::Interface),
        (0x2A8, ManagedField::Texts(1)),
        (0x2B0, ManagedField::Interface),
        (0x2B8, ManagedField::Interface),
        (0x2C0, ManagedField::Texts(1)),
        (0x2C8, ManagedField::Interface),
        (0x2D0, ManagedField::Interface),
        (0x2D8, ManagedField::Interface),
        (0x2E0, ManagedField::Interface),
        (0x2E8, ManagedField::Interface),
        (0x2F0, ManagedField::Interface),
        (0x2F8, ManagedField::Interface),
        (0x300, ManagedField::Interface),
        (0x308, ManagedField::Texts(1)),
        (0x310, ManagedField::Interface),
        (0x318, ManagedField::Interface),
        (0x320, ManagedField::Interface),
        (0x328, ManagedField::Interface),
        (0x330, ManagedField::Texts(1)),
        (0x338, ManagedField::Interface),
        (0x340, ManagedField::Interface),
        (0x348, ManagedField::Interface),
        (0x350, ManagedField::Interface),
        (0x358, ManagedField::Interface),
        (0x360, ManagedField::Texts(1)),
        (0x368, ManagedField::Interface),
        (0x370, ManagedField::Texts(1)),
        (0x380, ManagedField::Interface),
        (0x388, ManagedField::Interface),
        (0x378, ManagedField::Interface),
        (0x390, ManagedField::Interface),
        (0x398, ManagedField::Interface),
        (0x3A0, ManagedField::Interface),
        (0x3A8, ManagedField::Texts(3)),
        (0x3C0, ManagedField::array(0x0043_2B90)),
        (0x640, ManagedField::Texts(2)),
        (0x650, ManagedField::elements(0x00B9_F8E0, 2)),
        (0x660, ManagedField::elements(0x00B9_FCA0, 3)),
        (0x678, ManagedField::Interface),
    ],
};

/// Recovered from Ghidra function `FUN_01318440` at `0x01318440`.
///
/// 4 managed fields between `0x30` and `0x2F8`: 7 strings, 1 dynamic array.
pub const RECORD_AT_01318440: ManagedLayout = ManagedLayout {
    finaliser: 0x0131_8440,
    fields: &[
        (0x30, ManagedField::Texts(3)),
        (0x60, ManagedField::Texts(3)),
        (0x78, ManagedField::array(0x0043_2B90)),
        (0x2F8, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_013188a0` at `0x013188A0`.
///
/// 14 managed fields between `0x40` and `0x338`: 5 strings, 10 interface references, 1 dynamic array.
pub const RECORD_AT_013188A0: ManagedLayout = ManagedLayout {
    finaliser: 0x0131_88A0,
    fields: &[
        (0x40, ManagedField::Texts(2)),
        (0x50, ManagedField::Interface),
        (0x58, ManagedField::Interface),
        (0x60, ManagedField::Interface),
        (0x68, ManagedField::Interface),
        (0x70, ManagedField::Interface),
        (0x78, ManagedField::Interface),
        (0x80, ManagedField::Interface),
        (0x88, ManagedField::Texts(1)),
        (0x98, ManagedField::Texts(2)),
        (0xA8, ManagedField::array(0x0043_2B90)),
        (0x328, ManagedField::Interface),
        (0x330, ManagedField::Interface),
        (0x338, ManagedField::Interface),
    ],
};

/// Recovered from Ghidra function `FUN_013199d0` at `0x013199D0`.
///
/// 18 managed fields between `0x38` and `0x230`: 26 strings, 7 interface references, 4 runs of elements.
pub const RECORD_AT_013199D0: ManagedLayout = ManagedLayout {
    finaliser: 0x0131_99D0,
    fields: &[
        (0x38, ManagedField::Interface),
        (0x40, ManagedField::Texts(1)),
        (0x48, ManagedField::Interface),
        (0x50, ManagedField::Texts(2)),
        (0x60, ManagedField::elements(0x00B9_F8E0, 6)),
        (0x90, ManagedField::Texts(2)),
        (0xA0, ManagedField::elements(0x00B9_F8E0, 2)),
        (0xB0, ManagedField::elements(0x00B9_FCA0, 2)),
        (0xC0, ManagedField::Interface),
        (0xC8, ManagedField::Interface),
        (0xD0, ManagedField::Interface),
        (0xD8, ManagedField::Texts(12)),
        (0x138, ManagedField::elements(0x00B9_FCA0, 2)),
        (0x1B8, ManagedField::Texts(3)),
        (0x1D0, ManagedField::Interface),
        (0x1D8, ManagedField::Interface),
        (0x1E8, ManagedField::Texts(3)),
        (0x230, ManagedField::Texts(3)),
    ],
};

/// Recovered from Ghidra function `FUN_0131abe0` at `0x0131ABE0`.
///
/// 17 managed fields between `0x30` and `0x148`: 11 strings, 7 interface references, 4 runs of elements.
pub const RECORD_AT_0131ABE0: ManagedLayout = ManagedLayout {
    finaliser: 0x0131_ABE0,
    fields: &[
        (0x30, ManagedField::Texts(6)),
        (0x60, ManagedField::elements(0x00B9_F8E0, 2)),
        (0x70, ManagedField::Texts(1)),
        (0x78, ManagedField::elements(0x00B9_F8E0, 2)),
        (0x88, ManagedField::Texts(1)),
        (0x90, ManagedField::elements(0x00B9_F8E0, 2)),
        (0xA0, ManagedField::Interface),
        (0xA8, ManagedField::Interface),
        (0xB0, ManagedField::Texts(1)),
        (0xB8, ManagedField::Interface),
        (0xC0, ManagedField::Interface),
        (0xC8, ManagedField::Texts(1)),
        (0xD0, ManagedField::Interface),
        (0xD8, ManagedField::Interface),
        (0xE0, ManagedField::Interface),
        (0x128, ManagedField::elements(0x00B9_FCA0, 4)),
        (0x148, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_0131c1a0` at `0x0131C1A0`.
///
/// 28 managed fields between `0x78` and `0x1F0`: 22 strings, 14 interface references, 3 runs of elements.
pub const RECORD_AT_0131C1A0: ManagedLayout = ManagedLayout {
    finaliser: 0x0131_C1A0,
    fields: &[
        (0x78, ManagedField::Texts(3)),
        (0x90, ManagedField::Interface),
        (0x98, ManagedField::Texts(2)),
        (0xA8, ManagedField::Texts(1)),
        (0xB0, ManagedField::Texts(3)),
        (0xC8, ManagedField::Interface),
        (0xF0, ManagedField::Texts(1)),
        (0xF8, ManagedField::Interface),
        (0x100, ManagedField::Texts(5)),
        (0x128, ManagedField::Interface),
        (0x130, ManagedField::Interface),
        (0x138, ManagedField::Interface),
        (0x140, ManagedField::Texts(1)),
        (0x148, ManagedField::Interface),
        (0x150, ManagedField::Interface),
        (0x158, ManagedField::Texts(1)),
        (0x160, ManagedField::Interface),
        (0x168, ManagedField::Texts(1)),
        (0x170, ManagedField::elements(0x00B9_F960, 2)),
        (0x180, ManagedField::Interface),
        (0x188, ManagedField::elements(0x00B9_FCA0, 2)),
        (0x198, ManagedField::Texts(1)),
        (0x1A0, ManagedField::elements(0x00B9_FCA0, 2)),
        (0x1C0, ManagedField::Texts(3)),
        (0x1D8, ManagedField::Interface),
        (0x1E0, ManagedField::Interface),
        (0x1E8, ManagedField::Interface),
        (0x1F0, ManagedField::Interface),
    ],
};

/// Recovered from Ghidra function `FUN_0131d960` at `0x0131D960`.
///
/// 16 managed fields between `0x30` and `0x108`: 11 strings, 7 of the other string kind.
pub const RECORD_AT_0131D960: ManagedLayout = ManagedLayout {
    finaliser: 0x0131_D960,
    fields: &[
        (0x30, ManagedField::Texts(1)),
        (0x38, ManagedField::OtherStrings(1)),
        (0x40, ManagedField::Texts(1)),
        (0x48, ManagedField::OtherStrings(1)),
        (0x50, ManagedField::Texts(1)),
        (0x58, ManagedField::OtherStrings(1)),
        (0x60, ManagedField::Texts(1)),
        (0x68, ManagedField::OtherStrings(1)),
        (0x70, ManagedField::Texts(1)),
        (0x78, ManagedField::OtherStrings(1)),
        (0x80, ManagedField::Texts(1)),
        (0x88, ManagedField::OtherStrings(1)),
        (0x90, ManagedField::Texts(1)),
        (0x98, ManagedField::OtherStrings(1)),
        (0xA0, ManagedField::Texts(2)),
        (0x108, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_013200e0` at `0x013200E0`.
///
/// 16 managed fields between `0x30` and `0x108`: 11 strings, 7 of the other string kind.
pub const RECORD_AT_013200E0: ManagedLayout = ManagedLayout {
    finaliser: 0x0132_00E0,
    fields: &[
        (0x30, ManagedField::Texts(1)),
        (0x38, ManagedField::OtherStrings(1)),
        (0x40, ManagedField::Texts(1)),
        (0x48, ManagedField::OtherStrings(1)),
        (0x50, ManagedField::Texts(1)),
        (0x58, ManagedField::OtherStrings(1)),
        (0x60, ManagedField::Texts(1)),
        (0x68, ManagedField::OtherStrings(1)),
        (0x70, ManagedField::Texts(1)),
        (0x78, ManagedField::OtherStrings(1)),
        (0x80, ManagedField::Texts(1)),
        (0x88, ManagedField::OtherStrings(1)),
        (0x90, ManagedField::Texts(1)),
        (0x98, ManagedField::OtherStrings(1)),
        (0xA0, ManagedField::Texts(2)),
        (0x108, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_013318c0` at `0x013318C0`.
///
/// 4 managed fields between `0x48` and `0x88`: 9 strings, 1 of the other string kind.
pub const RECORD_AT_013318C0: ManagedLayout = ManagedLayout {
    finaliser: 0x0133_18C0,
    fields: &[
        (0x48, ManagedField::Texts(1)),
        (0x50, ManagedField::OtherStrings(1)),
        (0x58, ManagedField::Texts(5)),
        (0x88, ManagedField::Texts(3)),
    ],
};

/// Recovered from Ghidra function `FUN_013403c0` at `0x013403C0`.
///
/// 16 managed fields between `0x30` and `0x108`: 11 strings, 7 of the other string kind.
pub const RECORD_AT_013403C0: ManagedLayout = ManagedLayout {
    finaliser: 0x0134_03C0,
    fields: &[
        (0x30, ManagedField::Texts(1)),
        (0x38, ManagedField::OtherStrings(1)),
        (0x40, ManagedField::Texts(1)),
        (0x48, ManagedField::OtherStrings(1)),
        (0x50, ManagedField::Texts(1)),
        (0x58, ManagedField::OtherStrings(1)),
        (0x60, ManagedField::Texts(1)),
        (0x68, ManagedField::OtherStrings(1)),
        (0x70, ManagedField::Texts(1)),
        (0x78, ManagedField::OtherStrings(1)),
        (0x80, ManagedField::Texts(1)),
        (0x88, ManagedField::OtherStrings(1)),
        (0x90, ManagedField::Texts(1)),
        (0x98, ManagedField::OtherStrings(1)),
        (0xA0, ManagedField::Texts(2)),
        (0x108, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_01348e60` at `0x01348E60`.
///
/// 5 managed fields between `0x48` and `0x620`: 27 strings, 2 of the other string kind.
pub const RECORD_AT_01348E60: ManagedLayout = ManagedLayout {
    finaliser: 0x0134_8E60,
    fields: &[
        (0x48, ManagedField::Texts(15)),
        (0xD0, ManagedField::Texts(9)),
        (0x588, ManagedField::Texts(2)),
        (0x610, ManagedField::Texts(1)),
        (0x620, ManagedField::OtherStrings(2)),
    ],
};

/// Recovered from Ghidra function `FUN_01351170` at `0x01351170`.
///
/// 3 managed fields between `0x30` and `0x58`: 1 string, 3 of the other string kind.
pub const RECORD_AT_01351170: ManagedLayout = ManagedLayout {
    finaliser: 0x0135_1170,
    fields: &[
        (0x30, ManagedField::OtherStrings(1)),
        (0x38, ManagedField::Texts(1)),
        (0x58, ManagedField::OtherStrings(2)),
    ],
};

/// Recovered from Ghidra function `FUN_01358a20` at `0x01358A20`.
///
/// 38 managed fields between `0xA0` and `0x420`: 57 strings, 54 of the other string kind.
pub const RECORD_AT_01358A20: ManagedLayout = ManagedLayout {
    finaliser: 0x0135_8A20,
    fields: &[
        (0xA0, ManagedField::OtherStrings(3)),
        (0xB8, ManagedField::Texts(1)),
        (0xC0, ManagedField::OtherStrings(1)),
        (0xC8, ManagedField::Texts(1)),
        (0xD0, ManagedField::OtherStrings(3)),
        (0xE8, ManagedField::Texts(1)),
        (0xF0, ManagedField::OtherStrings(3)),
        (0x108, ManagedField::Texts(3)),
        (0x120, ManagedField::OtherStrings(3)),
        (0x138, ManagedField::Texts(1)),
        (0x140, ManagedField::OtherStrings(3)),
        (0x158, ManagedField::Texts(2)),
        (0x168, ManagedField::OtherStrings(4)),
        (0x188, ManagedField::Texts(7)),
        (0x1D0, ManagedField::Texts(12)),
        (0x230, ManagedField::OtherStrings(3)),
        (0x248, ManagedField::Texts(3)),
        (0x260, ManagedField::OtherStrings(3)),
        (0x278, ManagedField::Texts(2)),
        (0x288, ManagedField::OtherStrings(4)),
        (0x2A8, ManagedField::Texts(1)),
        (0x2B0, ManagedField::OtherStrings(3)),
        (0x2C8, ManagedField::Texts(3)),
        (0x2E0, ManagedField::OtherStrings(3)),
        (0x2F8, ManagedField::Texts(3)),
        (0x310, ManagedField::OtherStrings(3)),
        (0x328, ManagedField::Texts(3)),
        (0x340, ManagedField::OtherStrings(3)),
        (0x358, ManagedField::Texts(2)),
        (0x368, ManagedField::OtherStrings(4)),
        (0x388, ManagedField::Texts(3)),
        (0x3B0, ManagedField::OtherStrings(3)),
        (0x3C8, ManagedField::Texts(2)),
        (0x3D8, ManagedField::OtherStrings(1)),
        (0x3E0, ManagedField::OtherStrings(3)),
        (0x3F8, ManagedField::Texts(3)),
        (0x418, ManagedField::OtherStrings(1)),
        (0x420, ManagedField::Texts(4)),
    ],
};

/// Recovered from Ghidra function `FUN_013593e0` at `0x013593E0`.
///
/// 7 managed fields between `0x58` and `0xC8`: 7 strings, 9 of the other string kind.
pub const RECORD_AT_013593E0: ManagedLayout = ManagedLayout {
    finaliser: 0x0135_93E0,
    fields: &[
        (0x58, ManagedField::OtherStrings(3)),
        (0x70, ManagedField::Texts(2)),
        (0x80, ManagedField::OtherStrings(3)),
        (0x98, ManagedField::Texts(1)),
        (0xA0, ManagedField::OtherStrings(3)),
        (0xB8, ManagedField::Texts(1)),
        (0xC8, ManagedField::Texts(3)),
    ],
};

/// Recovered from Ghidra function `FUN_0135c350` at `0x0135C350`.
///
/// 3 managed fields between `0x70` and `0x108`: 9 strings, 2 of the other string kind.
pub const RECORD_AT_0135C350: ManagedLayout = ManagedLayout {
    finaliser: 0x0135_C350,
    fields: &[
        (0x70, ManagedField::Texts(8)),
        (0xB8, ManagedField::OtherStrings(2)),
        (0x108, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_004c6620` at `0x004C6620`.
///
/// The smallest layout of all, and the commonest: two interface references
/// side by side and nothing else needing release. The binary carries this
/// same routine in 260 places, which is what a two-reference record looks
/// like when it is a building block rather than a thing in itself.
pub const TWO_INTERFACE_RECORD: ManagedLayout = ManagedLayout {
    finaliser: 0x004C_6620,
    fields: &[
        (0x30, ManagedField::Interface),
        (0x38, ManagedField::Interface),
    ],
};

/// Recovered from Ghidra function `FUN_00ff1230` at `0x00FF1230`.
///
/// One dynamic array at `0x38` and nothing else — the whole of what this
/// record has to be told to let go of, in 79 copies. Everything else it holds
/// is numbers.
pub const ONE_ARRAY_RECORD: ManagedLayout = ManagedLayout {
    finaliser: 0x00FF_1230,
    fields: &[(
        0x38,
        ManagedField::DynamicArray {
            element_type: 0x00F6_8330,
        },
    )],
};

/// Recovered from Ghidra function `FUN_00747300` at `0x00747300`.
///
/// Two strings with room for two unmanaged fields between them, in 60 copies.
/// Released one at a time rather than as a run, so they are two named fields
/// that happen to be of the same kind and not an array of two.
pub const SPACED_TEXT_PAIR_RECORD: ManagedLayout = ManagedLayout {
    finaliser: 0x0074_7300,
    fields: &[
        (0x50, ManagedField::Texts(1)),
        (0x68, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_0049fe50` at `0x0049FE50`.
///
/// The same shape as [`SPACED_TEXT_PAIR_RECORD`] a little earlier in the
/// object, in 54 copies: two strings, three unmanaged fields apart.
pub const EARLY_TEXT_PAIR_RECORD: ManagedLayout = ManagedLayout {
    finaliser: 0x0049_FE50,
    fields: &[
        (0x40, ManagedField::Texts(1)),
        (0x58, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00410ba0` at `0x00410BA0`.
///
/// Two strings, two unmanaged fields apart, in 44 copies — the same shape as
/// the other text pairs at yet another pair of offsets. Three of these
/// recovered so far, no two at the same place.
pub const MIDDLE_TEXT_PAIR_RECORD: ManagedLayout = ManagedLayout {
    finaliser: 0x0041_0BA0,
    fields: &[
        (0x48, ManagedField::Texts(1)),
        (0x58, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_004b4310` at `0x004B4310`.
///
/// A run of two strings and then a third on its own two fields later, in 38
/// copies. The run and the single are released by different helpers, so the
/// first two are one field and the third is another — not three of a kind.
pub const LATE_TEXT_TRIO_RECORD: ManagedLayout = ManagedLayout {
    finaliser: 0x004B_4310,
    fields: &[
        (0x40, ManagedField::Texts(2)),
        (0x58, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_0041b4e0` at `0x0041B4E0`.
///
/// The same shape as [`LATE_TEXT_TRIO_RECORD`] two fields earlier, in 35
/// copies.
pub const EARLY_TEXT_TRIO_RECORD: ManagedLayout = ManagedLayout {
    finaliser: 0x0041_B4E0,
    fields: &[
        (0x30, ManagedField::Texts(2)),
        (0x48, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00602dc0` at `0x00602DC0`.
///
/// A string at `0x38` and a second at `0x68`, in 27 copies.
///
/// One of three text pairs recovered that all begin at `0x38` and differ only
/// in where the second sits — `0x58`, `0x68` and `0x78`. Nothing links the
/// two offsets of a pair, which is what one would expect if the first string
/// is something every one of these classes has and the second is its own.
pub const TEXT_PAIR_0X38_0X68: ManagedLayout = ManagedLayout {
    finaliser: 0x0060_2DC0,
    fields: &[
        (0x38, ManagedField::Texts(1)),
        (0x68, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00a4a3a0` at `0x00A4A3A0`.
///
/// The same pair with the second string at `0x58`, in 27 copies.
pub const TEXT_PAIR_0X38_0X58: ManagedLayout = ManagedLayout {
    finaliser: 0x00A4_A3A0,
    fields: &[
        (0x38, ManagedField::Texts(1)),
        (0x58, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_009dff50` at `0x009DFF50`.
///
/// And with it at `0x78`, in 26 copies.
pub const TEXT_PAIR_0X38_0X78: ManagedLayout = ManagedLayout {
    finaliser: 0x009D_FF50,
    fields: &[
        (0x38, ManagedField::Texts(1)),
        (0x78, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_005372f0` at `0x005372F0`, in 26 copies.
///
/// Managed fields at 0x30.
pub const RECORD_AT_005372F0: ManagedLayout = ManagedLayout {
    finaliser: 0x0053_72F0,
    fields: &[(0x30, ManagedField::array(0x0052_7BF8))],
};

/// Recovered from Ghidra function `FUN_00624400` at `0x00624400`, in 25 copies.
///
/// Managed fields at 0x30, 0x48.
pub const RECORD_AT_00624400: ManagedLayout = ManagedLayout {
    finaliser: 0x0062_4400,
    fields: &[
        (0x30, ManagedField::Texts(1)),
        (0x48, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_0082bdc0` at `0x0082BDC0`, in 24 copies.
///
/// Managed fields at 0x30, 0x38.
pub const RECORD_AT_0082BDC0: ManagedLayout = ManagedLayout {
    finaliser: 0x0082_BDC0,
    fields: &[
        (0x30, ManagedField::Texts(1)),
        (0x38, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00885180` at `0x00885180`, in 22 copies.
///
/// Managed fields at 0x60, 0x78.
pub const RECORD_AT_00885180: ManagedLayout = ManagedLayout {
    finaliser: 0x0088_5180,
    fields: &[
        (0x60, ManagedField::Texts(1)),
        (0x78, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00bc03b0` at `0x00BC03B0`, in 21 copies.
///
/// Managed fields at 0x28, 0x48.
pub const RECORD_AT_00BC03B0: ManagedLayout = ManagedLayout {
    finaliser: 0x00BC_03B0,
    fields: &[
        (0x28, ManagedField::Texts(1)),
        (0x48, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00f98a90` at `0x00F98A90`, in 20 copies.
///
/// Managed fields at 0x48, 0x520.
pub const RECORD_AT_00F98A90: ManagedLayout = ManagedLayout {
    finaliser: 0x00F9_8A90,
    fields: &[
        (0x48, ManagedField::array(0x00F6_8330)),
        (0x520, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_007e4f20` at `0x007E4F20`, in 19 copies.
///
/// Managed fields at 0x30, 0x68.
pub const RECORD_AT_007E4F20: ManagedLayout = ManagedLayout {
    finaliser: 0x007E_4F20,
    fields: &[
        (0x30, ManagedField::Texts(2)),
        (0x68, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_005b2240` at `0x005B2240`, in 19 copies.
///
/// Managed fields at 0x38, 0x58.
pub const RECORD_AT_005B2240: ManagedLayout = ManagedLayout {
    finaliser: 0x005B_2240,
    fields: &[
        (0x38, ManagedField::Texts(3)),
        (0x58, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00a5c5f0` at `0x00A5C5F0`, in 18 copies.
///
/// Managed fields at 0x38, 0x70.
pub const RECORD_AT_00A5C5F0: ManagedLayout = ManagedLayout {
    finaliser: 0x00A5_C5F0,
    fields: &[
        (0x38, ManagedField::Texts(1)),
        (0x70, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00878c10` at `0x00878C10`, in 18 copies.
///
/// Managed fields at 0x38.
pub const RECORD_AT_00878C10: ManagedLayout = ManagedLayout {
    finaliser: 0x0087_8C10,
    fields: &[(0x38, ManagedField::typed(0x0086_E978))],
};

/// Recovered from Ghidra function `FUN_0111f310` at `0x0111F310`, in 17 copies.
///
/// Managed fields at 0x30, 0x50.
pub const RECORD_AT_0111F310: ManagedLayout = ManagedLayout {
    finaliser: 0x0111_F310,
    fields: &[
        (0x30, ManagedField::Texts(2)),
        (0x50, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_005b2100` at `0x005B2100`, in 16 copies.
///
/// Managed fields at 0x38, 0x60.
pub const RECORD_AT_005B2100: ManagedLayout = ManagedLayout {
    finaliser: 0x005B_2100,
    fields: &[
        (0x38, ManagedField::Texts(1)),
        (0x60, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_004d8110` at `0x004D8110`, in 16 copies.
///
/// Managed fields at 0x30, 0x38.
pub const RECORD_AT_004D8110: ManagedLayout = ManagedLayout {
    finaliser: 0x004D_8110,
    fields: &[
        (0x30, ManagedField::Texts(1)),
        (0x38, ManagedField::typed(0x0040_6578)),
    ],
};

/// Recovered from Ghidra function `FUN_004b8cc0` at `0x004B8CC0`, in 16 copies.
///
/// Managed fields at 0x48.
pub const RECORD_AT_004B8CC0: ManagedLayout = ManagedLayout {
    finaliser: 0x004B_8CC0,
    fields: &[(0x48, ManagedField::typed(0x0040_6578))],
};

/// Recovered from Ghidra function `FUN_0045b7f0` at `0x0045B7F0`, in 16 copies.
///
/// Managed fields at 0x38.
pub const RECORD_AT_0045B7F0: ManagedLayout = ManagedLayout {
    finaliser: 0x0045_B7F0,
    fields: &[(0x38, ManagedField::typed(0x0040_6578))],
};

/// Recovered from Ghidra function `FUN_01426550` at `0x01426550`, in 15 copies.
///
/// Managed fields at 0x30.
pub const RECORD_AT_01426550: ManagedLayout = ManagedLayout {
    finaliser: 0x0142_6550,
    fields: &[(0x30, ManagedField::typed(0x0142_5F80))],
};

/// Recovered from Ghidra function `FUN_00b12c60` at `0x00B12C60`, in 15 copies.
///
/// Managed fields at 0x30.
pub const RECORD_AT_00B12C60: ManagedLayout = ManagedLayout {
    finaliser: 0x00B1_2C60,
    fields: &[(0x30, ManagedField::elements(0x0040_13D8, 2))],
};

/// Recovered from Ghidra function `FUN_008fcc90` at `0x008FCC90`, in 14 copies.
///
/// Managed fields at 0x30, 0x60.
pub const RECORD_AT_008FCC90: ManagedLayout = ManagedLayout {
    finaliser: 0x008F_CC90,
    fields: &[
        (0x30, ManagedField::Texts(2)),
        (0x60, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_0041e320` at `0x0041E320`, in 14 copies.
///
/// Managed fields at 0x58.
pub const RECORD_AT_0041E320: ManagedLayout = ManagedLayout {
    finaliser: 0x0041_E320,
    fields: &[(0x58, ManagedField::typed(0x0040_6578))],
};

/// Recovered from Ghidra function `FUN_014699e0` at `0x014699E0`, in 12 copies.
///
/// Managed fields at 0x30, 0x50.
pub const RECORD_AT_014699E0: ManagedLayout = ManagedLayout {
    finaliser: 0x0146_99E0,
    fields: &[
        (0x30, ManagedField::Texts(1)),
        (0x50, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_00f8c900` at `0x00F8C900`, in 12 copies.
///
/// Managed fields at 0x60, 0x178.
pub const RECORD_AT_00F8C900: ManagedLayout = ManagedLayout {
    finaliser: 0x00F8_C900,
    fields: &[
        (0x60, ManagedField::Texts(2)),
        (0x178, ManagedField::Texts(3)),
    ],
};

/// Recovered from Ghidra function `FUN_00d814e0` at `0x00D814E0`, in 12 copies.
///
/// Managed fields at 0x38.
pub const RECORD_AT_00D814E0: ManagedLayout = ManagedLayout {
    finaliser: 0x00D8_14E0,
    fields: &[(0x38, ManagedField::array(0x00D6_23C8))],
};

/// Recovered from Ghidra function `FUN_008e5ac0` at `0x008E5AC0`, in 12 copies.
///
/// Managed fields at 0x50, 0x78.
pub const RECORD_AT_008E5AC0: ManagedLayout = ManagedLayout {
    finaliser: 0x008E_5AC0,
    fields: &[
        (0x50, ManagedField::Texts(1)),
        (0x78, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_007489c0` at `0x007489C0`, in 12 copies.
///
/// Managed fields at 0x38, 0x50.
pub const RECORD_AT_007489C0: ManagedLayout = ManagedLayout {
    finaliser: 0x0074_89C0,
    fields: &[
        (0x38, ManagedField::Texts(1)),
        (0x50, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_005eb1f0` at `0x005EB1F0`, in 12 copies.
///
/// Managed fields at 0x58, 0x68.
pub const RECORD_AT_005EB1F0: ManagedLayout = ManagedLayout {
    finaliser: 0x005E_B1F0,
    fields: &[
        (0x58, ManagedField::Texts(1)),
        (0x68, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_0129db50` at `0x0129DB50`, in 11 copies.
///
/// Managed fields at 0x38.
pub const RECORD_AT_0129DB50: ManagedLayout = ManagedLayout {
    finaliser: 0x0129_DB50,
    fields: &[(0x38, ManagedField::array(0x01D0_D0B8))],
};

/// Recovered from Ghidra function `FUN_00e80bc0` at `0x00E80BC0`, in 11 copies.
///
/// Managed fields at 0x28, 0x38.
pub const RECORD_AT_00E80BC0: ManagedLayout = ManagedLayout {
    finaliser: 0x00E8_0BC0,
    fields: &[
        (0x28, ManagedField::Texts(1)),
        (0x38, ManagedField::array(0x01D0_D0B8)),
    ],
};

/// Recovered from Ghidra function `FUN_00c3fd30` at `0x00C3FD30`, in 11 copies.
///
/// Managed fields at 0x4C.
pub const RECORD_AT_00C3FD30: ManagedLayout = ManagedLayout {
    finaliser: 0x00C3_FD30,
    fields: &[(0x4C, ManagedField::array(0x01D2_E6D8))],
};

/// Recovered from Ghidra function `FUN_00b97290` at `0x00B97290`, in 11 copies.
///
/// Managed fields at 0x28, 0x38, 0x68.
pub const RECORD_AT_00B97290: ManagedLayout = ManagedLayout {
    finaliser: 0x00B9_7290,
    fields: &[
        (0x28, ManagedField::Texts(1)),
        (0x38, ManagedField::Texts(1)),
        (0x68, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00a59640` at `0x00A59640`, in 11 copies.
///
/// Managed fields at 0x28, 0x58.
pub const RECORD_AT_00A59640: ManagedLayout = ManagedLayout {
    finaliser: 0x00A5_9640,
    fields: &[
        (0x28, ManagedField::Texts(1)),
        (0x58, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_008fcb80` at `0x008FCB80`, in 11 copies.
///
/// Managed fields at 0x28, 0x40.
pub const RECORD_AT_008FCB80: ManagedLayout = ManagedLayout {
    finaliser: 0x008F_CB80,
    fields: &[
        (0x28, ManagedField::Texts(1)),
        (0x40, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00787200` at `0x00787200`, in 11 copies.
///
/// Managed fields at 0x48, 0x68.
pub const RECORD_AT_00787200: ManagedLayout = ManagedLayout {
    finaliser: 0x0078_7200,
    fields: &[
        (0x48, ManagedField::Texts(1)),
        (0x68, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_004dd8b0` at `0x004DD8B0`, in 11 copies.
///
/// Managed fields at 0x40, 0x48.
pub const RECORD_AT_004DD8B0: ManagedLayout = ManagedLayout {
    finaliser: 0x004D_D8B0,
    fields: &[
        (0x40, ManagedField::Interface),
        (0x48, ManagedField::Interface),
    ],
};

/// Recovered from Ghidra function `FUN_0044fa40` at `0x0044FA40`, in 11 copies.
///
/// Managed fields at 0x30, 0x58.
pub const RECORD_AT_0044FA40: ManagedLayout = ManagedLayout {
    finaliser: 0x0044_FA40,
    fields: &[
        (0x30, ManagedField::Texts(2)),
        (0x58, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_010b9630` at `0x010B9630`, in 10 copies.
///
/// Managed fields at 0x30, 0x50.
pub const RECORD_AT_010B9630: ManagedLayout = ManagedLayout {
    finaliser: 0x010B_9630,
    fields: &[
        (0x30, ManagedField::Texts(1)),
        (0x50, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00c3f800` at `0x00C3F800`, in 10 copies.
///
/// Managed fields at 0x3C.
pub const RECORD_AT_00C3F800: ManagedLayout = ManagedLayout {
    finaliser: 0x00C3_F800,
    fields: &[(0x3C, ManagedField::array(0x01D2_E6D8))],
};

/// Recovered from Ghidra function `FUN_00c0a400` at `0x00C0A400`, in 10 copies.
///
/// Managed fields at 0x38, 0x58.
pub const RECORD_AT_00C0A400: ManagedLayout = ManagedLayout {
    finaliser: 0x00C0_A400,
    fields: &[
        (0x38, ManagedField::Texts(2)),
        (0x58, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00bcaad0` at `0x00BCAAD0`, in 10 copies.
///
/// Managed fields at 0x38, 0x80.
pub const RECORD_AT_00BCAAD0: ManagedLayout = ManagedLayout {
    finaliser: 0x00BC_AAD0,
    fields: &[
        (0x38, ManagedField::Texts(1)),
        (0x80, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00b8ab10` at `0x00B8AB10`, in 10 copies.
///
/// Managed fields at 0x48, 0x88.
pub const RECORD_AT_00B8AB10: ManagedLayout = ManagedLayout {
    finaliser: 0x00B8_AB10,
    fields: &[
        (0x48, ManagedField::Texts(1)),
        (0x88, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00887620` at `0x00887620`, in 10 copies.
///
/// Managed fields at 0x70, 0x88.
pub const RECORD_AT_00887620: ManagedLayout = ManagedLayout {
    finaliser: 0x0088_7620,
    fields: &[
        (0x70, ManagedField::Texts(1)),
        (0x88, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_0104e730` at `0x0104E730`, in 9 copies.
///
/// Managed fields at 0x38, 0x48.
pub const RECORD_AT_0104E730: ManagedLayout = ManagedLayout {
    finaliser: 0x0104_E730,
    fields: &[
        (0x38, ManagedField::Texts(1)),
        (0x48, ManagedField::Texts(3)),
    ],
};

/// Recovered from Ghidra function `FUN_00e10650` at `0x00E10650`, in 9 copies.
///
/// Managed fields at 0x30, 0x78.
pub const RECORD_AT_00E10650: ManagedLayout = ManagedLayout {
    finaliser: 0x00E1_0650,
    fields: &[
        (0x30, ManagedField::Texts(2)),
        (0x78, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00cec8f0` at `0x00CEC8F0`, in 9 copies.
///
/// Managed fields at 0x48, 0x68.
pub const RECORD_AT_00CEC8F0: ManagedLayout = ManagedLayout {
    finaliser: 0x00CE_C8F0,
    fields: &[
        (0x48, ManagedField::Texts(3)),
        (0x68, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00cd2080` at `0x00CD2080`, in 9 copies.
///
/// Managed fields at 0x30, 0x98.
pub const RECORD_AT_00CD2080: ManagedLayout = ManagedLayout {
    finaliser: 0x00CD_2080,
    fields: &[
        (0x30, ManagedField::Texts(1)),
        (0x98, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00cbbc50` at `0x00CBBC50`, in 9 copies.
///
/// Managed fields at 0x40, 0x68.
pub const RECORD_AT_00CBBC50: ManagedLayout = ManagedLayout {
    finaliser: 0x00CB_BC50,
    fields: &[
        (0x40, ManagedField::Texts(4)),
        (0x68, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00aff020` at `0x00AFF020`, in 9 copies.
///
/// Managed fields at 0x38, 0x68.
pub const RECORD_AT_00AFF020: ManagedLayout = ManagedLayout {
    finaliser: 0x00AF_F020,
    fields: &[
        (0x38, ManagedField::Texts(5)),
        (0x68, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_0088f7a0` at `0x0088F7A0`, in 9 copies.
///
/// Managed fields at 0x40, 0x48.
pub const RECORD_AT_0088F7A0: ManagedLayout = ManagedLayout {
    finaliser: 0x0088_F7A0,
    fields: &[
        (0x40, ManagedField::Texts(1)),
        (0x48, ManagedField::OtherStrings(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00878b30` at `0x00878B30`, in 9 copies.
///
/// Managed fields at 0x48.
pub const RECORD_AT_00878B30: ManagedLayout = ManagedLayout {
    finaliser: 0x0087_8B30,
    fields: &[(0x48, ManagedField::typed(0x0086_E978))],
};

/// Recovered from Ghidra function `FUN_00837420` at `0x00837420`, in 9 copies.
///
/// Managed fields at 0x30, 0x58.
pub const RECORD_AT_00837420: ManagedLayout = ManagedLayout {
    finaliser: 0x0083_7420,
    fields: &[
        (0x30, ManagedField::Texts(4)),
        (0x58, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_005bf930` at `0x005BF930`, in 9 copies.
///
/// Managed fields at 0x40.
pub const RECORD_AT_005BF930: ManagedLayout = ManagedLayout {
    finaliser: 0x005B_F930,
    fields: &[(0x40, ManagedField::array(0x005B_C4E0))],
};

/// Recovered from Ghidra function `FUN_004c6a00` at `0x004C6A00`, in 9 copies.
///
/// Managed fields at 0x38.
pub const RECORD_AT_004C6A00: ManagedLayout = ManagedLayout {
    finaliser: 0x004C_6A00,
    fields: &[(0x38, ManagedField::elements(0x0040_13D8, 3))],
};

/// Recovered from Ghidra function `FUN_01709320` at `0x01709320`, in 8 copies.
///
/// Managed fields at 0x48, 0xA8.
pub const RECORD_AT_01709320: ManagedLayout = ManagedLayout {
    finaliser: 0x0170_9320,
    fields: &[
        (0x48, ManagedField::Texts(3)),
        (0xA8, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00c84e20` at `0x00C84E20`, in 8 copies.
///
/// Managed fields at 0x40, 0x58, 0x98.
pub const RECORD_AT_00C84E20: ManagedLayout = ManagedLayout {
    finaliser: 0x00C8_4E20,
    fields: &[
        (0x40, ManagedField::Texts(2)),
        (0x58, ManagedField::Texts(1)),
        (0x98, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00c40930` at `0x00C40930`, in 8 copies.
///
/// Managed fields at 0x38, 0x48, 0x88.
pub const RECORD_AT_00C40930: ManagedLayout = ManagedLayout {
    finaliser: 0x00C4_0930,
    fields: &[
        (0x38, ManagedField::Texts(1)),
        (0x48, ManagedField::Texts(1)),
        (0x88, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00a594d0` at `0x00A594D0`, in 8 copies.
///
/// Managed fields at 0x28, 0x68.
pub const RECORD_AT_00A594D0: ManagedLayout = ManagedLayout {
    finaliser: 0x00A5_94D0,
    fields: &[
        (0x28, ManagedField::Texts(1)),
        (0x68, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_008744f0` at `0x008744F0`, in 8 copies.
///
/// Managed fields at 0x28, 0x38.
pub const RECORD_AT_008744F0: ManagedLayout = ManagedLayout {
    finaliser: 0x0087_44F0,
    fields: &[
        (0x28, ManagedField::Interface),
        (0x38, ManagedField::Interface),
    ],
};

/// Recovered from Ghidra function `FUN_007dcb30` at `0x007DCB30`, in 8 copies.
///
/// Managed fields at 0x28, 0x50.
pub const RECORD_AT_007DCB30: ManagedLayout = ManagedLayout {
    finaliser: 0x007D_CB30,
    fields: &[
        (0x28, ManagedField::Texts(1)),
        (0x50, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00682840` at `0x00682840`, in 8 copies.
///
/// Managed fields at 0x30, 0x38, 0x48.
pub const RECORD_AT_00682840: ManagedLayout = ManagedLayout {
    finaliser: 0x0068_2840,
    fields: &[
        (0x30, ManagedField::Texts(1)),
        (0x38, ManagedField::Texts(1)),
        (0x48, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_0064b620` at `0x0064B620`, in 8 copies.
///
/// Managed fields at 0x40, 0x68.
pub const RECORD_AT_0064B620: ManagedLayout = ManagedLayout {
    finaliser: 0x0064_B620,
    fields: &[
        (0x40, ManagedField::Texts(1)),
        (0x68, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_006480d0` at `0x006480D0`, in 8 copies.
///
/// Managed fields at 0x30, 0x40.
pub const RECORD_AT_006480D0: ManagedLayout = ManagedLayout {
    finaliser: 0x0064_80D0,
    fields: &[
        (0x30, ManagedField::Texts(1)),
        (0x40, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_004b1150` at `0x004B1150`, in 8 copies.
///
/// Managed fields at 0x48, 0x78.
pub const RECORD_AT_004B1150: ManagedLayout = ManagedLayout {
    finaliser: 0x004B_1150,
    fields: &[
        (0x48, ManagedField::Texts(1)),
        (0x78, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01b8cdf0` at `0x01B8CDF0`, in 7 copies.
///
/// Managed fields at 0x38.
pub const RECORD_AT_01B8CDF0: ManagedLayout = ManagedLayout {
    finaliser: 0x01B8_CDF0,
    fields: &[(0x38, ManagedField::array(0x01B7_D278))],
};

/// Recovered from Ghidra function `FUN_01583960` at `0x01583960`, in 7 copies.
///
/// Managed fields at 0x40.
pub const RECORD_AT_01583960: ManagedLayout = ManagedLayout {
    finaliser: 0x0158_3960,
    fields: &[(0x40, ManagedField::array(0x0157_7948))],
};

/// Recovered from Ghidra function `FUN_015834a0` at `0x015834A0`, in 7 copies.
///
/// Managed fields at 0x38.
pub const RECORD_AT_015834A0: ManagedLayout = ManagedLayout {
    finaliser: 0x0158_34A0,
    fields: &[(0x38, ManagedField::array(0x0157_7A50))],
};

/// Recovered from Ghidra function `FUN_0157dbb0` at `0x0157DBB0`, in 7 copies.
///
/// Managed fields at 0x3E.
pub const RECORD_AT_0157DBB0: ManagedLayout = ManagedLayout {
    finaliser: 0x0157_DBB0,
    fields: &[(0x3E, ManagedField::array(0x0157_64A8))],
};

/// Recovered from Ghidra function `FUN_012d0d30` at `0x012D0D30`, in 7 copies.
///
/// Managed fields at 0x68, 0x78.
pub const RECORD_AT_012D0D30: ManagedLayout = ManagedLayout {
    finaliser: 0x012D_0D30,
    fields: &[
        (0x68, ManagedField::Texts(1)),
        (0x78, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01144b60` at `0x01144B60`, in 7 copies.
///
/// Managed fields at 0x38.
pub const RECORD_AT_01144B60: ManagedLayout = ManagedLayout {
    finaliser: 0x0114_4B60,
    fields: &[(0x38, ManagedField::array(0x01B0_08E8))],
};

/// Recovered from Ghidra function `FUN_00efad80` at `0x00EFAD80`, in 7 copies.
///
/// Managed fields at 0x48, 0x70.
pub const RECORD_AT_00EFAD80: ManagedLayout = ManagedLayout {
    finaliser: 0x00EF_AD80,
    fields: &[
        (0x48, ManagedField::Texts(1)),
        (0x70, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00ec90d0` at `0x00EC90D0`, in 7 copies.
///
/// Managed fields at 0x30, 0x48, 0x88.
pub const RECORD_AT_00EC90D0: ManagedLayout = ManagedLayout {
    finaliser: 0x00EC_90D0,
    fields: &[
        (0x30, ManagedField::Texts(2)),
        (0x48, ManagedField::Texts(1)),
        (0x88, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00ea8180` at `0x00EA8180`, in 7 copies.
///
/// Managed fields at 0x48.
pub const RECORD_AT_00EA8180: ManagedLayout = ManagedLayout {
    finaliser: 0x00EA_8180,
    fields: &[(0x48, ManagedField::array(0x00EA_5F80))],
};

/// Recovered from Ghidra function `FUN_00bfc630` at `0x00BFC630`, in 7 copies.
///
/// Managed fields at 0x50, 0x78.
pub const RECORD_AT_00BFC630: ManagedLayout = ManagedLayout {
    finaliser: 0x00BF_C630,
    fields: &[
        (0x50, ManagedField::Texts(4)),
        (0x78, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00b90970` at `0x00B90970`, in 7 copies.
///
/// Managed fields at 0x30, 0x138.
pub const RECORD_AT_00B90970: ManagedLayout = ManagedLayout {
    finaliser: 0x00B9_0970,
    fields: &[
        (0x30, ManagedField::Texts(1)),
        (0x138, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_009a8580` at `0x009A8580`, in 7 copies.
///
/// Managed fields at 0x40.
pub const RECORD_AT_009A8580: ManagedLayout = ManagedLayout {
    finaliser: 0x009A_8580,
    fields: &[(0x40, ManagedField::array(0x0094_27F8))],
};

/// Recovered from Ghidra function `FUN_009a80c0` at `0x009A80C0`, in 7 copies.
///
/// Managed fields at 0x38.
pub const RECORD_AT_009A80C0: ManagedLayout = ManagedLayout {
    finaliser: 0x009A_80C0,
    fields: &[(0x38, ManagedField::array(0x0094_28E8))],
};

/// Recovered from Ghidra function `FUN_00876460` at `0x00876460`, in 7 copies.
///
/// Managed fields at 0x30, 0x60.
pub const RECORD_AT_00876460: ManagedLayout = ManagedLayout {
    finaliser: 0x0087_6460,
    fields: &[
        (0x30, ManagedField::Texts(1)),
        (0x60, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_00795c50` at `0x00795C50`, in 7 copies.
///
/// Managed fields at 0x38.
pub const RECORD_AT_00795C50: ManagedLayout = ManagedLayout {
    finaliser: 0x0079_5C50,
    fields: &[(0x38, ManagedField::array(0x0076_F818))],
};

/// Recovered from Ghidra function `FUN_006e8a70` at `0x006E8A70`, in 7 copies.
///
/// Managed fields at 0x38, 0x58.
pub const RECORD_AT_006E8A70: ManagedLayout = ManagedLayout {
    finaliser: 0x006E_8A70,
    fields: &[
        (0x38, ManagedField::Texts(1)),
        (0x58, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_005c2090` at `0x005C2090`, in 7 copies.
///
/// Managed fields at 0x38.
pub const RECORD_AT_005C2090: ManagedLayout = ManagedLayout {
    finaliser: 0x005C_2090,
    fields: &[(0x38, ManagedField::array(0x005B_C868))],
};

/// Recovered from Ghidra function `FUN_0177fbf0` at `0x0177FBF0`, in 6 copies.
///
/// Managed fields at 0x38, 0x50.
pub const RECORD_AT_0177FBF0: ManagedLayout = ManagedLayout {
    finaliser: 0x0177_FBF0,
    fields: &[
        (0x38, ManagedField::Texts(1)),
        (0x50, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_015c2ef0` at `0x015C2EF0`, in 6 copies.
///
/// Managed fields at 0x20.
pub const RECORD_AT_015C2EF0: ManagedLayout = ManagedLayout {
    finaliser: 0x015C_2EF0,
    fields: &[(0x20, ManagedField::array(0x015B_9418))],
};

/// Recovered from Ghidra function `FUN_01488530` at `0x01488530`, in 6 copies.
///
/// Managed fields at 0x48, 0x70.
pub const RECORD_AT_01488530: ManagedLayout = ManagedLayout {
    finaliser: 0x0148_8530,
    fields: &[
        (0x48, ManagedField::Texts(1)),
        (0x70, ManagedField::array(0x0052_7BF8)),
    ],
};

/// Recovered from Ghidra function `FUN_0131d440` at `0x0131D440`, in 6 copies.
///
/// Managed fields at 0x38, 0x80.
pub const RECORD_AT_0131D440: ManagedLayout = ManagedLayout {
    finaliser: 0x0131_D440,
    fields: &[
        (0x38, ManagedField::OtherStrings(1)),
        (0x80, ManagedField::OtherStrings(1)),
    ],
};

/// Recovered from Ghidra function `FUN_010d95b0` at `0x010D95B0`, in 6 copies.
///
/// Managed fields at 0x48, 0x50.
pub const RECORD_AT_010D95B0: ManagedLayout = ManagedLayout {
    finaliser: 0x010D_95B0,
    fields: &[
        (0x48, ManagedField::Texts(1)),
        (0x50, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_00fdbc90` at `0x00FDBC90`, in 6 copies.
///
/// Managed fields at 0x48, 0xA0.
pub const RECORD_AT_00FDBC90: ManagedLayout = ManagedLayout {
    finaliser: 0x00FD_BC90,
    fields: &[
        (0x48, ManagedField::Texts(5)),
        (0xA0, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00f9e800` at `0x00F9E800`, in 6 copies.
///
/// Managed fields at 0x38, 0x48, 0x60, 0x70.
pub const RECORD_AT_00F9E800: ManagedLayout = ManagedLayout {
    finaliser: 0x00F9_E800,
    fields: &[
        (0x38, ManagedField::Texts(2)),
        (0x48, ManagedField::Texts(3)),
        (0x60, ManagedField::Texts(2)),
        (0x70, ManagedField::Texts(3)),
    ],
};

/// Recovered from Ghidra function `FUN_00f7cce0` at `0x00F7CCE0`, in 6 copies.
///
/// Managed fields at 0x38, 0x70.
pub const RECORD_AT_00F7CCE0: ManagedLayout = ManagedLayout {
    finaliser: 0x00F7_CCE0,
    fields: &[
        (0x38, ManagedField::Texts(3)),
        (0x70, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00f2fc20` at `0x00F2FC20`, in 6 copies.
///
/// Managed fields at 0x20, 0x48.
pub const RECORD_AT_00F2FC20: ManagedLayout = ManagedLayout {
    finaliser: 0x00F2_FC20,
    fields: &[
        (0x20, ManagedField::Texts(1)),
        (0x48, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00f06960` at `0x00F06960`, in 6 copies.
///
/// Managed fields at 0x30, 0x60.
pub const RECORD_AT_00F06960: ManagedLayout = ManagedLayout {
    finaliser: 0x00F0_6960,
    fields: &[
        (0x30, ManagedField::Texts(1)),
        (0x60, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00eae020` at `0x00EAE020`, in 6 copies.
///
/// Managed fields at 0x38, 0x88.
pub const RECORD_AT_00EAE020: ManagedLayout = ManagedLayout {
    finaliser: 0x00EA_E020,
    fields: &[
        (0x38, ManagedField::Texts(3)),
        (0x88, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00d2a100` at `0x00D2A100`, in 6 copies.
///
/// Managed fields at 0x38, 0x58.
pub const RECORD_AT_00D2A100: ManagedLayout = ManagedLayout {
    finaliser: 0x00D2_A100,
    fields: &[
        (0x38, ManagedField::Texts(3)),
        (0x58, ManagedField::OtherStrings(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00cd2c10` at `0x00CD2C10`, in 6 copies.
///
/// Managed fields at 0x30, 0x68.
pub const RECORD_AT_00CD2C10: ManagedLayout = ManagedLayout {
    finaliser: 0x00CD_2C10,
    fields: &[
        (0x30, ManagedField::Texts(1)),
        (0x68, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00b8e6d0` at `0x00B8E6D0`, in 6 copies.
///
/// Managed fields at 0x38, 0x60.
pub const RECORD_AT_00B8E6D0: ManagedLayout = ManagedLayout {
    finaliser: 0x00B8_E6D0,
    fields: &[
        (0x38, ManagedField::Texts(1)),
        (0x60, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_00a2c440` at `0x00A2C440`, in 6 copies.
///
/// Managed fields at 0x28, 0x78.
pub const RECORD_AT_00A2C440: ManagedLayout = ManagedLayout {
    finaliser: 0x00A2_C440,
    fields: &[
        (0x28, ManagedField::Texts(2)),
        (0x78, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_008fc4d0` at `0x008FC4D0`, in 6 copies.
///
/// Managed fields at 0x28, 0x38, 0x60.
pub const RECORD_AT_008FC4D0: ManagedLayout = ManagedLayout {
    finaliser: 0x008F_C4D0,
    fields: &[
        (0x28, ManagedField::Texts(1)),
        (0x38, ManagedField::Texts(1)),
        (0x60, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_008ac9a0` at `0x008AC9A0`, in 6 copies.
///
/// Managed fields at 0x48, 0x78.
pub const RECORD_AT_008AC9A0: ManagedLayout = ManagedLayout {
    finaliser: 0x008A_C9A0,
    fields: &[
        (0x48, ManagedField::Texts(5)),
        (0x78, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_008975a0` at `0x008975A0`, in 6 copies.
///
/// Managed fields at 0x58.
pub const RECORD_AT_008975A0: ManagedLayout = ManagedLayout {
    finaliser: 0x0089_75A0,
    fields: &[(0x58, ManagedField::typed(0x0086_E978))],
};

/// Recovered from Ghidra function `FUN_0085ac90` at `0x0085AC90`, in 6 copies.
///
/// Managed fields at 0x40, 0x78.
pub const RECORD_AT_0085AC90: ManagedLayout = ManagedLayout {
    finaliser: 0x0085_AC90,
    fields: &[
        (0x40, ManagedField::Texts(2)),
        (0x78, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00832920` at `0x00832920`, in 6 copies.
///
/// Managed fields at 0x58, 0x50.
pub const RECORD_AT_00832920: ManagedLayout = ManagedLayout {
    finaliser: 0x0083_2920,
    fields: &[
        (0x58, ManagedField::Texts(1)),
        (0x50, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_005dbcd0` at `0x005DBCD0`, in 6 copies.
///
/// Managed fields at 0x30.
pub const RECORD_AT_005DBCD0: ManagedLayout = ManagedLayout {
    finaliser: 0x005D_BCD0,
    fields: &[(0x30, ManagedField::array(0x005D_3E40))],
};

/// Recovered from Ghidra function `FUN_004b36d0` at `0x004B36D0`, in 6 copies.
///
/// Managed fields at 0x20, 0x30.
pub const RECORD_AT_004B36D0: ManagedLayout = ManagedLayout {
    finaliser: 0x004B_36D0,
    fields: &[
        (0x20, ManagedField::Texts(1)),
        (0x30, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_0049f4e0` at `0x0049F4E0`, in 6 copies.
///
/// Managed fields at 0x30.
pub const RECORD_AT_0049F4E0: ManagedLayout = ManagedLayout {
    finaliser: 0x0049_F4E0,
    fields: &[(0x30, ManagedField::array(0x0049_90D8))],
};

/// Recovered from Ghidra function `FUN_004601d0` at `0x004601D0`, in 6 copies.
///
/// Managed fields at 0x38, 0x68.
pub const RECORD_AT_004601D0: ManagedLayout = ManagedLayout {
    finaliser: 0x0046_01D0,
    fields: &[
        (0x38, ManagedField::Texts(2)),
        (0x68, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00440940` at `0x00440940`, in 6 copies.
///
/// Managed fields at 0x30, 0x50.
pub const RECORD_AT_00440940: ManagedLayout = ManagedLayout {
    finaliser: 0x0044_0940,
    fields: &[
        (0x30, ManagedField::Texts(2)),
        (0x50, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_0043f970` at `0x0043F970`, in 6 copies.
///
/// Managed fields at 0x48.
pub const RECORD_AT_0043F970: ManagedLayout = ManagedLayout {
    finaliser: 0x0043_F970,
    fields: &[(0x48, ManagedField::typed(0x0040_65C0))],
};

/// Recovered from Ghidra function `FUN_01ca56c0` at `0x01CA56C0`, in 5 copies.
///
/// Managed fields at 0x30.
pub const RECORD_AT_01CA56C0: ManagedLayout = ManagedLayout {
    finaliser: 0x01CA_56C0,
    fields: &[(0x30, ManagedField::array(0x01C9_D548))],
};

/// Recovered from Ghidra function `FUN_019b0290` at `0x019B0290`, in 5 copies.
///
/// Managed fields at 0x30.
pub const RECORD_AT_019B0290: ManagedLayout = ManagedLayout {
    finaliser: 0x019B_0290,
    fields: &[(0x30, ManagedField::array(0x0198_4BE0))],
};

/// Recovered from Ghidra function `FUN_0175c010` at `0x0175C010`, in 5 copies.
///
/// Managed fields at 0x30.
pub const RECORD_AT_0175C010: ManagedLayout = ManagedLayout {
    finaliser: 0x0175_C010,
    fields: &[(0x30, ManagedField::array(0x01B1_86E8))],
};

/// Recovered from Ghidra function `FUN_017082b0` at `0x017082B0`, in 5 copies.
///
/// Managed fields at 0x50, 0x60, 0xB8.
pub const RECORD_AT_017082B0: ManagedLayout = ManagedLayout {
    finaliser: 0x0170_82B0,
    fields: &[
        (0x50, ManagedField::Texts(2)),
        (0x60, ManagedField::Texts(4)),
        (0xB8, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_015fef00` at `0x015FEF00`, in 5 copies.
///
/// Managed fields at 0x20, 0x38.
pub const RECORD_AT_015FEF00: ManagedLayout = ManagedLayout {
    finaliser: 0x015F_EF00,
    fields: &[
        (0x20, ManagedField::Texts(1)),
        (0x38, ManagedField::Texts(3)),
    ],
};

/// Recovered from Ghidra function `FUN_015fe4a0` at `0x015FE4A0`, in 5 copies.
///
/// Managed fields at 0x40, 0x88.
pub const RECORD_AT_015FE4A0: ManagedLayout = ManagedLayout {
    finaliser: 0x015F_E4A0,
    fields: &[
        (0x40, ManagedField::Texts(4)),
        (0x88, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_015fc0f0` at `0x015FC0F0`, in 5 copies.
///
/// Managed fields at 0x28, 0x38, 0x78.
pub const RECORD_AT_015FC0F0: ManagedLayout = ManagedLayout {
    finaliser: 0x015F_C0F0,
    fields: &[
        (0x28, ManagedField::Texts(1)),
        (0x38, ManagedField::Texts(1)),
        (0x78, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_015851e0` at `0x015851E0`, in 5 copies.
///
/// Managed fields at 0x30.
pub const RECORD_AT_015851E0: ManagedLayout = ManagedLayout {
    finaliser: 0x0158_51E0,
    fields: &[(0x30, ManagedField::array(0x0157_7948))],
};

/// Recovered from Ghidra function `FUN_014a24f0` at `0x014A24F0`, in 5 copies.
///
/// Managed fields at 0x3A.
pub const RECORD_AT_014A24F0: ManagedLayout = ManagedLayout {
    finaliser: 0x014A_24F0,
    fields: &[(0x3A, ManagedField::array(0x01D0_D0B8))],
};

/// Recovered from Ghidra function `FUN_01486680` at `0x01486680`, in 5 copies.
///
/// Managed fields at 0x30.
pub const RECORD_AT_01486680: ManagedLayout = ManagedLayout {
    finaliser: 0x0148_6680,
    fields: &[(0x30, ManagedField::array(0x0148_3BA8))],
};

/// Recovered from Ghidra function `FUN_013b63e0` at `0x013B63E0`, in 5 copies.
///
/// Managed fields at 0x40, 0xA8.
pub const RECORD_AT_013B63E0: ManagedLayout = ManagedLayout {
    finaliser: 0x013B_63E0,
    fields: &[
        (0x40, ManagedField::Texts(1)),
        (0xA8, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01330ff0` at `0x01330FF0`, in 5 copies.
///
/// Managed fields at 0x28, 0x40.
pub const RECORD_AT_01330FF0: ManagedLayout = ManagedLayout {
    finaliser: 0x0133_0FF0,
    fields: &[
        (0x28, ManagedField::Texts(1)),
        (0x40, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_012d20d0` at `0x012D20D0`, in 5 copies.
///
/// Managed fields at 0x88, 0x98, 0xA08.
pub const RECORD_AT_012D20D0: ManagedLayout = ManagedLayout {
    finaliser: 0x012D_20D0,
    fields: &[
        (0x88, ManagedField::Texts(1)),
        (0x98, ManagedField::array(0x01D0_D0B8)),
        (0xA08, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01155eb0` at `0x01155EB0`, in 5 copies.
///
/// Managed fields at 0x4C, 0xB0.
pub const RECORD_AT_01155EB0: ManagedLayout = ManagedLayout {
    finaliser: 0x0115_5EB0,
    fields: &[
        (0x4C, ManagedField::array(0x01D2_E6D8)),
        (0xB0, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_010bc120` at `0x010BC120`, in 5 copies.
///
/// Managed fields at 0x40, 0x88.
pub const RECORD_AT_010BC120: ManagedLayout = ManagedLayout {
    finaliser: 0x010B_C120,
    fields: &[
        (0x40, ManagedField::Texts(8)),
        (0x88, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_0107da80` at `0x0107DA80`, in 5 copies.
///
/// Managed fields at 0x30, 0x48.
pub const RECORD_AT_0107DA80: ManagedLayout = ManagedLayout {
    finaliser: 0x0107_DA80,
    fields: &[
        (0x30, ManagedField::Texts(2)),
        (0x48, ManagedField::Texts(3)),
    ],
};

/// Recovered from Ghidra function `FUN_0107d8c0` at `0x0107D8C0`, in 5 copies.
///
/// Managed fields at 0x28, 0x38.
pub const RECORD_AT_0107D8C0: ManagedLayout = ManagedLayout {
    finaliser: 0x0107_D8C0,
    fields: &[
        (0x28, ManagedField::Texts(1)),
        (0x38, ManagedField::Texts(3)),
    ],
};

/// Recovered from Ghidra function `FUN_0107aa40` at `0x0107AA40`, in 5 copies.
///
/// Managed fields at 0x40, 0x80.
pub const RECORD_AT_0107AA40: ManagedLayout = ManagedLayout {
    finaliser: 0x0107_AA40,
    fields: &[
        (0x40, ManagedField::Texts(4)),
        (0x80, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01053a00` at `0x01053A00`, in 5 copies.
///
/// Managed fields at 0x40, 0x48, 0x68.
pub const RECORD_AT_01053A00: ManagedLayout = ManagedLayout {
    finaliser: 0x0105_3A00,
    fields: &[
        (0x40, ManagedField::Texts(1)),
        (0x48, ManagedField::Texts(3)),
        (0x68, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00fbcb90` at `0x00FBCB90`, in 5 copies.
///
/// Managed fields at 0x40, 0x58, 0x68.
pub const RECORD_AT_00FBCB90: ManagedLayout = ManagedLayout {
    finaliser: 0x00FB_CB90,
    fields: &[
        (0x40, ManagedField::Texts(3)),
        (0x58, ManagedField::Texts(1)),
        (0x68, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00f85210` at `0x00F85210`, in 5 copies.
///
/// Managed fields at 0x38.
pub const RECORD_AT_00F85210: ManagedLayout = ManagedLayout {
    finaliser: 0x00F8_5210,
    fields: &[(0x38, ManagedField::array(0x00E0_21A8))],
};

/// Recovered from Ghidra function `FUN_00f7a430` at `0x00F7A430`, in 5 copies.
///
/// Managed fields at 0x50, 0xB8.
pub const RECORD_AT_00F7A430: ManagedLayout = ManagedLayout {
    finaliser: 0x00F7_A430,
    fields: &[
        (0x50, ManagedField::Texts(12)),
        (0xB8, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00f5d480` at `0x00F5D480`, in 5 copies.
///
/// Managed fields at 0x48.
pub const RECORD_AT_00F5D480: ManagedLayout = ManagedLayout {
    finaliser: 0x00F5_D480,
    fields: &[(0x48, ManagedField::array(0x01D0_D0B8))],
};

/// Recovered from Ghidra function `FUN_00f34e70` at `0x00F34E70`, in 5 copies.
///
/// Managed fields at 0x30.
pub const RECORD_AT_00F34E70: ManagedLayout = ManagedLayout {
    finaliser: 0x00F3_4E70,
    fields: &[(0x30, ManagedField::array(0x00F2_5EC0))],
};

/// Recovered from Ghidra function `FUN_00eed240` at `0x00EED240`, in 5 copies.
///
/// Managed fields at 0x30.
pub const RECORD_AT_00EED240: ManagedLayout = ManagedLayout {
    finaliser: 0x00EE_D240,
    fields: &[(0x30, ManagedField::array(0x0176_5EB0))],
};

/// Recovered from Ghidra function `FUN_00ec6a20` at `0x00EC6A20`, in 5 copies.
///
/// Managed fields at 0x50, 0xB8.
pub const RECORD_AT_00EC6A20: ManagedLayout = ManagedLayout {
    finaliser: 0x00EC_6A20,
    fields: &[
        (0x50, ManagedField::Texts(12)),
        (0xB8, ManagedField::Texts(3)),
    ],
};

/// Recovered from Ghidra function `FUN_00eaf050` at `0x00EAF050`, in 5 copies.
///
/// Managed fields at 0x30.
pub const RECORD_AT_00EAF050: ManagedLayout = ManagedLayout {
    finaliser: 0x00EA_F050,
    fields: &[(0x30, ManagedField::array(0x00EA_B588))],
};

/// Recovered from Ghidra function `FUN_00e0ef60` at `0x00E0EF60`, in 5 copies.
///
/// Managed fields at 0x40, 0x58.
pub const RECORD_AT_00E0EF60: ManagedLayout = ManagedLayout {
    finaliser: 0x00E0_EF60,
    fields: &[
        (0x40, ManagedField::Texts(2)),
        (0x58, ManagedField::Texts(3)),
    ],
};

/// Recovered from Ghidra function `FUN_00e0e440` at `0x00E0E440`, in 5 copies.
///
/// Managed fields at 0x40, 0x70.
pub const RECORD_AT_00E0E440: ManagedLayout = ManagedLayout {
    finaliser: 0x00E0_E440,
    fields: &[
        (0x40, ManagedField::Texts(2)),
        (0x70, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00d73870` at `0x00D73870`, in 5 copies.
///
/// Managed fields at 0x28, 0x48.
pub const RECORD_AT_00D73870: ManagedLayout = ManagedLayout {
    finaliser: 0x00D7_3870,
    fields: &[
        (0x28, ManagedField::Texts(2)),
        (0x48, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00c53440` at `0x00C53440`, in 5 copies.
///
/// Managed fields at 0x38, 0x98.
pub const RECORD_AT_00C53440: ManagedLayout = ManagedLayout {
    finaliser: 0x00C5_3440,
    fields: &[
        (0x38, ManagedField::Texts(1)),
        (0x98, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00c4d0c0` at `0x00C4D0C0`, in 5 copies.
///
/// Managed fields at 0x30, 0x48, 0x58.
pub const RECORD_AT_00C4D0C0: ManagedLayout = ManagedLayout {
    finaliser: 0x00C4_D0C0,
    fields: &[
        (0x30, ManagedField::Texts(1)),
        (0x48, ManagedField::Texts(1)),
        (0x58, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00c4ce30` at `0x00C4CE30`, in 5 copies.
///
/// Managed fields at 0x30, 0x68.
pub const RECORD_AT_00C4CE30: ManagedLayout = ManagedLayout {
    finaliser: 0x00C4_CE30,
    fields: &[
        (0x30, ManagedField::Texts(6)),
        (0x68, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00c3d6b0` at `0x00C3D6B0`, in 5 copies.
///
/// Managed fields at 0x38, 0x88.
pub const RECORD_AT_00C3D6B0: ManagedLayout = ManagedLayout {
    finaliser: 0x00C3_D6B0,
    fields: &[
        (0x38, ManagedField::Texts(5)),
        (0x88, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00c00a10` at `0x00C00A10`, in 5 copies.
///
/// Managed fields at 0x38.
pub const RECORD_AT_00C00A10: ManagedLayout = ManagedLayout {
    finaliser: 0x00C0_0A10,
    fields: &[(0x38, ManagedField::typed(0x0040_66F0))],
};

/// Recovered from Ghidra function `FUN_00c00740` at `0x00C00740`, in 5 copies.
///
/// Managed fields at 0x30, 0x70.
pub const RECORD_AT_00C00740: ManagedLayout = ManagedLayout {
    finaliser: 0x00C0_0740,
    fields: &[
        (0x30, ManagedField::Texts(1)),
        (0x70, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00bd1490` at `0x00BD1490`, in 5 copies.
///
/// Managed fields at 0x30, 0x38.
pub const RECORD_AT_00BD1490: ManagedLayout = ManagedLayout {
    finaliser: 0x00BD_1490,
    fields: &[
        (0x30, ManagedField::Texts(1)),
        (0x38, ManagedField::OtherStrings(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00bca8b0` at `0x00BCA8B0`, in 5 copies.
///
/// Managed fields at 0x38, 0x80.
pub const RECORD_AT_00BCA8B0: ManagedLayout = ManagedLayout {
    finaliser: 0x00BC_A8B0,
    fields: &[
        (0x38, ManagedField::Texts(3)),
        (0x80, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00b0ad90` at `0x00B0AD90`, in 5 copies.
///
/// Managed fields at 0x40, 0x80.
pub const RECORD_AT_00B0AD90: ManagedLayout = ManagedLayout {
    finaliser: 0x00B0_AD90,
    fields: &[
        (0x40, ManagedField::Texts(2)),
        (0x80, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00b0a330` at `0x00B0A330`, in 5 copies.
///
/// Managed fields at 0x28, 0x30.
pub const RECORD_AT_00B0A330: ManagedLayout = ManagedLayout {
    finaliser: 0x00B0_A330,
    fields: &[
        (0x28, ManagedField::Texts(1)),
        (0x30, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00b02d80` at `0x00B02D80`, in 5 copies.
///
/// Managed fields at 0x48, 0x88.
pub const RECORD_AT_00B02D80: ManagedLayout = ManagedLayout {
    finaliser: 0x00B0_2D80,
    fields: &[
        (0x48, ManagedField::Texts(7)),
        (0x88, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00abcff0` at `0x00ABCFF0`, in 5 copies.
///
/// Managed fields at 0x40, 0x68.
pub const RECORD_AT_00ABCFF0: ManagedLayout = ManagedLayout {
    finaliser: 0x00AB_CFF0,
    fields: &[
        (0x40, ManagedField::Texts(2)),
        (0x68, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00aac410` at `0x00AAC410`, in 5 copies.
///
/// Managed fields at 0xD8, 0xD0.
pub const RECORD_AT_00AAC410: ManagedLayout = ManagedLayout {
    finaliser: 0x00AA_C410,
    fields: &[
        (0xD8, ManagedField::Texts(1)),
        (0xD0, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00aa7930` at `0x00AA7930`, in 5 copies.
///
/// Managed fields at 0x78, 0x70.
pub const RECORD_AT_00AA7930: ManagedLayout = ManagedLayout {
    finaliser: 0x00AA_7930,
    fields: &[
        (0x78, ManagedField::Texts(1)),
        (0x70, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00a29730` at `0x00A29730`, in 5 copies.
///
/// Managed fields at 0x20, 0x58.
pub const RECORD_AT_00A29730: ManagedLayout = ManagedLayout {
    finaliser: 0x00A2_9730,
    fields: &[
        (0x20, ManagedField::Texts(1)),
        (0x58, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_009a9b70` at `0x009A9B70`, in 5 copies.
///
/// Managed fields at 0x30.
pub const RECORD_AT_009A9B70: ManagedLayout = ManagedLayout {
    finaliser: 0x009A_9B70,
    fields: &[(0x30, ManagedField::array(0x0094_27F8))],
};

/// Recovered from Ghidra function `FUN_0085af10` at `0x0085AF10`, in 5 copies.
///
/// Managed fields at 0x48, 0x98.
pub const RECORD_AT_0085AF10: ManagedLayout = ManagedLayout {
    finaliser: 0x0085_AF10,
    fields: &[
        (0x48, ManagedField::Texts(1)),
        (0x98, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00852f30` at `0x00852F30`, in 5 copies.
///
/// Managed fields at 0x30.
pub const RECORD_AT_00852F30: ManagedLayout = ManagedLayout {
    finaliser: 0x0085_2F30,
    fields: &[(0x30, ManagedField::array(0x0085_0BE8))],
};

/// Recovered from Ghidra function `FUN_00797c10` at `0x00797C10`, in 5 copies.
///
/// Managed fields at 0x30.
pub const RECORD_AT_00797C10: ManagedLayout = ManagedLayout {
    finaliser: 0x0079_7C10,
    fields: &[(0x30, ManagedField::array(0x0075_CB10))],
};

/// Recovered from Ghidra function `FUN_0078f360` at `0x0078F360`, in 5 copies.
///
/// Managed fields at 0x30.
pub const RECORD_AT_0078F360: ManagedLayout = ManagedLayout {
    finaliser: 0x0078_F360,
    fields: &[(0x30, ManagedField::array(0x0076_7418))],
};

/// Recovered from Ghidra function `FUN_00782c00` at `0x00782C00`, in 5 copies.
///
/// Managed fields at 0x30.
pub const RECORD_AT_00782C00: ManagedLayout = ManagedLayout {
    finaliser: 0x0078_2C00,
    fields: &[(0x30, ManagedField::array(0x0076_F818))],
};

/// Recovered from Ghidra function `FUN_00725070` at `0x00725070`, in 5 copies.
///
/// Managed fields at 0x28, 0x48.
pub const RECORD_AT_00725070: ManagedLayout = ManagedLayout {
    finaliser: 0x0072_5070,
    fields: &[
        (0x28, ManagedField::Texts(3)),
        (0x48, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_006e0b30` at `0x006E0B30`, in 5 copies.
///
/// Managed fields at 0x48, 0x68.
pub const RECORD_AT_006E0B30: ManagedLayout = ManagedLayout {
    finaliser: 0x006E_0B30,
    fields: &[
        (0x48, ManagedField::Texts(2)),
        (0x68, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_005e0340` at `0x005E0340`, in 5 copies.
///
/// Managed fields at 0x30.
pub const RECORD_AT_005E0340: ManagedLayout = ManagedLayout {
    finaliser: 0x005E_0340,
    fields: &[(0x30, ManagedField::array(0x005D_7C00))],
};

/// Recovered from Ghidra function `FUN_005dbd50` at `0x005DBD50`, in 5 copies.
///
/// Managed fields at 0x40.
pub const RECORD_AT_005DBD50: ManagedLayout = ManagedLayout {
    finaliser: 0x005D_BD50,
    fields: &[(0x40, ManagedField::array(0x005D_3E40))],
};

/// Recovered from Ghidra function `FUN_005c4010` at `0x005C4010`, in 5 copies.
///
/// Managed fields at 0x30.
pub const RECORD_AT_005C4010: ManagedLayout = ManagedLayout {
    finaliser: 0x005C_4010,
    fields: &[(0x30, ManagedField::array(0x005B_C4E0))],
};

/// Recovered from Ghidra function `FUN_005a1fc0` at `0x005A1FC0`, in 5 copies.
///
/// Managed fields at 0x30.
pub const RECORD_AT_005A1FC0: ManagedLayout = ManagedLayout {
    finaliser: 0x005A_1FC0,
    fields: &[(0x30, ManagedField::array(0x0059_BD38))],
};

/// Recovered from Ghidra function `FUN_00562d80` at `0x00562D80`, in 5 copies.
///
/// Managed fields at 0x30.
pub const RECORD_AT_00562D80: ManagedLayout = ManagedLayout {
    finaliser: 0x0056_2D80,
    fields: &[(0x30, ManagedField::array(0x0053_F690))],
};

/// Recovered from Ghidra function `FUN_00560cc0` at `0x00560CC0`, in 5 copies.
///
/// Managed fields at 0x30.
pub const RECORD_AT_00560CC0: ManagedLayout = ManagedLayout {
    finaliser: 0x0056_0CC0,
    fields: &[(0x30, ManagedField::array(0x0053_CFE0))],
};

/// Recovered from Ghidra function `FUN_004ec900` at `0x004EC900`, in 5 copies.
///
/// Managed fields at 0x30.
pub const RECORD_AT_004EC900: ManagedLayout = ManagedLayout {
    finaliser: 0x004E_C900,
    fields: &[(0x30, ManagedField::array(0x004A_5608))],
};

/// Recovered from Ghidra function `FUN_004e2100` at `0x004E2100`, in 5 copies.
///
/// Managed fields at 0x30.
pub const RECORD_AT_004E2100: ManagedLayout = ManagedLayout {
    finaliser: 0x004E_2100,
    fields: &[(0x30, ManagedField::array(0x0049_0208))],
};

/// Recovered from Ghidra function `FUN_0041e3a0` at `0x0041E3A0`, in 5 copies.
///
/// Managed fields at 0x60.
pub const RECORD_AT_0041E3A0: ManagedLayout = ManagedLayout {
    finaliser: 0x0041_E3A0,
    fields: &[(0x60, ManagedField::typed(0x0040_6578))],
};

/// Recovered from Ghidra function `FUN_0041b1c0` at `0x0041B1C0`, in 5 copies.
///
/// Managed fields at 0x30, 0x70.
pub const RECORD_AT_0041B1C0: ManagedLayout = ManagedLayout {
    finaliser: 0x0041_B1C0,
    fields: &[
        (0x30, ManagedField::Texts(2)),
        (0x70, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_0041b0a0` at `0x0041B0A0`, in 5 copies.
///
/// Managed fields at 0x38, 0x70.
pub const RECORD_AT_0041B0A0: ManagedLayout = ManagedLayout {
    finaliser: 0x0041_B0A0,
    fields: &[
        (0x38, ManagedField::Texts(1)),
        (0x70, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_01ca8490` at `0x01CA8490`, in 4 copies.
///
/// Managed fields at 0x40.
pub const RECORD_AT_01CA8490: ManagedLayout = ManagedLayout {
    finaliser: 0x01CA_8490,
    fields: &[(0x40, ManagedField::array(0x01C9_D548))],
};

/// Recovered from Ghidra function `FUN_01ca5520` at `0x01CA5520`, in 4 copies.
///
/// Managed fields at 0x38.
pub const RECORD_AT_01CA5520: ManagedLayout = ManagedLayout {
    finaliser: 0x01CA_5520,
    fields: &[(0x38, ManagedField::array(0x01C9_D548))],
};

/// Recovered from Ghidra function `FUN_01b3cec0` at `0x01B3CEC0`, in 4 copies.
///
/// Managed fields at 0x38, 0x70, 0x88.
pub const RECORD_AT_01B3CEC0: ManagedLayout = ManagedLayout {
    finaliser: 0x01B3_CEC0,
    fields: &[
        (0x38, ManagedField::Texts(3)),
        (0x70, ManagedField::typed(0x0040_66F0)),
        (0x88, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_01b25ed0` at `0x01B25ED0`, in 4 copies.
///
/// Managed fields at 0x38.
pub const RECORD_AT_01B25ED0: ManagedLayout = ManagedLayout {
    finaliser: 0x01B2_5ED0,
    fields: &[(0x38, ManagedField::array(0x01B1_86E8))],
};

/// Recovered from Ghidra function `FUN_01b14e60` at `0x01B14E60`, in 4 copies.
///
/// Managed fields at 0x30.
pub const RECORD_AT_01B14E60: ManagedLayout = ManagedLayout {
    finaliser: 0x01B1_4E60,
    fields: &[(0x30, ManagedField::array(0x01B0_08E8))],
};

/// Recovered from Ghidra function `FUN_01ae7830` at `0x01AE7830`, in 4 copies.
///
/// Managed fields at 0x30, 0x78.
pub const RECORD_AT_01AE7830: ManagedLayout = ManagedLayout {
    finaliser: 0x01AE_7830,
    fields: &[
        (0x30, ManagedField::Texts(1)),
        (0x78, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_019a7dc0` at `0x019A7DC0`, in 4 copies.
///
/// Managed fields at 0x78, 0xB8.
pub const RECORD_AT_019A7DC0: ManagedLayout = ManagedLayout {
    finaliser: 0x019A_7DC0,
    fields: &[
        (0x78, ManagedField::Texts(1)),
        (0xB8, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_0183afe0` at `0x0183AFE0`, in 4 copies.
///
/// Managed fields at 0x58, 0x68.
pub const RECORD_AT_0183AFE0: ManagedLayout = ManagedLayout {
    finaliser: 0x0183_AFE0,
    fields: &[
        (0x58, ManagedField::Texts(1)),
        (0x68, ManagedField::Texts(3)),
    ],
};

/// Recovered from Ghidra function `FUN_017fe6d0` at `0x017FE6D0`, in 4 copies.
///
/// Managed fields at 0x30, 0x38.
pub const RECORD_AT_017FE6D0: ManagedLayout = ManagedLayout {
    finaliser: 0x017F_E6D0,
    fields: &[
        (0x30, ManagedField::OtherStrings(1)),
        (0x38, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_017f2020` at `0x017F2020`, in 4 copies.
///
/// Managed fields at 0x40, 0x78.
pub const RECORD_AT_017F2020: ManagedLayout = ManagedLayout {
    finaliser: 0x017F_2020,
    fields: &[
        (0x40, ManagedField::Texts(3)),
        (0x78, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01779530` at `0x01779530`, in 4 copies.
///
/// Managed fields at 0x38.
pub const RECORD_AT_01779530: ManagedLayout = ManagedLayout {
    finaliser: 0x0177_9530,
    fields: &[(0x38, ManagedField::array(0x0176_5EB0))],
};

/// Recovered from Ghidra function `FUN_0175bf30` at `0x0175BF30`, in 4 copies.
///
/// Managed fields at 0x40.
pub const RECORD_AT_0175BF30: ManagedLayout = ManagedLayout {
    finaliser: 0x0175_BF30,
    fields: &[(0x40, ManagedField::array(0x01B1_86E8))],
};

/// Recovered from Ghidra function `FUN_0174aab0` at `0x0174AAB0`, in 4 copies.
///
/// Managed fields at 0xD0, 0xD8.
pub const RECORD_AT_0174AAB0: ManagedLayout = ManagedLayout {
    finaliser: 0x0174_AAB0,
    fields: &[
        (0xD0, ManagedField::Interface),
        (0xD8, ManagedField::Interface),
    ],
};

/// Recovered from Ghidra function `FUN_01716930` at `0x01716930`, in 4 copies.
///
/// Managed fields at 0x30, 0x78.
pub const RECORD_AT_01716930: ManagedLayout = ManagedLayout {
    finaliser: 0x0171_6930,
    fields: &[
        (0x30, ManagedField::Texts(2)),
        (0x78, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_015fc9d0` at `0x015FC9D0`, in 4 copies.
///
/// Managed fields at 0x50, 0x60.
pub const RECORD_AT_015FC9D0: ManagedLayout = ManagedLayout {
    finaliser: 0x015F_C9D0,
    fields: &[
        (0x50, ManagedField::Texts(1)),
        (0x60, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_015df6c0` at `0x015DF6C0`, in 4 copies.
///
/// Managed fields at 0x59.
pub const RECORD_AT_015DF6C0: ManagedLayout = ManagedLayout {
    finaliser: 0x015D_F6C0,
    fields: &[(0x59, ManagedField::array(0x015B_8318))],
};

/// Recovered from Ghidra function `FUN_015832f0` at `0x015832F0`, in 4 copies.
///
/// Managed fields at 0x30.
pub const RECORD_AT_015832F0: ManagedLayout = ManagedLayout {
    finaliser: 0x0158_32F0,
    fields: &[(0x30, ManagedField::array(0x0157_7A50))],
};

/// Recovered from Ghidra function `FUN_0154f870` at `0x0154F870`, in 4 copies.
///
/// Managed fields at 0x58, 0x78.
pub const RECORD_AT_0154F870: ManagedLayout = ManagedLayout {
    finaliser: 0x0154_F870,
    fields: &[
        (0x58, ManagedField::Texts(3)),
        (0x78, ManagedField::Texts(3)),
    ],
};

/// Recovered from Ghidra function `FUN_014b6750` at `0x014B6750`, in 4 copies.
///
/// Managed fields at 0x28, 0x50.
pub const RECORD_AT_014B6750: ManagedLayout = ManagedLayout {
    finaliser: 0x014B_6750,
    fields: &[
        (0x28, ManagedField::Texts(2)),
        (0x50, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_014b4600` at `0x014B4600`, in 4 copies.
///
/// Managed fields at 0x40, 0x58, 0x68.
pub const RECORD_AT_014B4600: ManagedLayout = ManagedLayout {
    finaliser: 0x014B_4600,
    fields: &[
        (0x40, ManagedField::Texts(1)),
        (0x58, ManagedField::Texts(1)),
        (0x68, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01489820` at `0x01489820`, in 4 copies.
///
/// Managed fields at 0x40.
pub const RECORD_AT_01489820: ManagedLayout = ManagedLayout {
    finaliser: 0x0148_9820,
    fields: &[(0x40, ManagedField::array(0x0148_3BA8))],
};

/// Recovered from Ghidra function `FUN_014864e0` at `0x014864E0`, in 4 copies.
///
/// Managed fields at 0x38.
pub const RECORD_AT_014864E0: ManagedLayout = ManagedLayout {
    finaliser: 0x0148_64E0,
    fields: &[(0x38, ManagedField::array(0x0148_3BA8))],
};

/// Recovered from Ghidra function `FUN_01477f60` at `0x01477F60`, in 4 copies.
///
/// Managed fields at 0x30, 0x80.
pub const RECORD_AT_01477F60: ManagedLayout = ManagedLayout {
    finaliser: 0x0147_7F60,
    fields: &[
        (0x30, ManagedField::Texts(4)),
        (0x80, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_0146fca0` at `0x0146FCA0`, in 4 copies.
///
/// Managed fields at 0x48, 0x58.
pub const RECORD_AT_0146FCA0: ManagedLayout = ManagedLayout {
    finaliser: 0x0146_FCA0,
    fields: &[
        (0x48, ManagedField::Texts(1)),
        (0x58, ManagedField::Texts(3)),
    ],
};

/// Recovered from Ghidra function `FUN_0143bb90` at `0x0143BB90`, in 4 copies.
///
/// Managed fields at 0x40, 0x98.
pub const RECORD_AT_0143BB90: ManagedLayout = ManagedLayout {
    finaliser: 0x0143_BB90,
    fields: &[
        (0x40, ManagedField::Texts(10)),
        (0x98, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_013f8180` at `0x013F8180`, in 4 copies.
///
/// Managed fields at 0x38, 0x58.
pub const RECORD_AT_013F8180: ManagedLayout = ManagedLayout {
    finaliser: 0x013F_8180,
    fields: &[
        (0x38, ManagedField::Texts(4)),
        (0x58, ManagedField::OtherStrings(1)),
    ],
};

/// Recovered from Ghidra function `FUN_013e8700` at `0x013E8700`, in 4 copies.
///
/// Managed fields at 0x128, 0x130.
pub const RECORD_AT_013E8700: ManagedLayout = ManagedLayout {
    finaliser: 0x013E_8700,
    fields: &[
        (0x128, ManagedField::Texts(1)),
        (0x130, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_013b5cb0` at `0x013B5CB0`, in 4 copies.
///
/// Managed fields at 0x60, 0x70.
pub const RECORD_AT_013B5CB0: ManagedLayout = ManagedLayout {
    finaliser: 0x013B_5CB0,
    fields: &[
        (0x60, ManagedField::Texts(1)),
        (0x70, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_013a61d0` at `0x013A61D0`, in 4 copies.
///
/// Managed fields at 0x48, 0x90.
pub const RECORD_AT_013A61D0: ManagedLayout = ManagedLayout {
    finaliser: 0x013A_61D0,
    fields: &[
        (0x48, ManagedField::Texts(1)),
        (0x90, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_0131dd70` at `0x0131DD70`, in 4 copies.
///
/// Managed fields at 0xC0, 0xE0.
pub const RECORD_AT_0131DD70: ManagedLayout = ManagedLayout {
    finaliser: 0x0131_DD70,
    fields: &[
        (0xC0, ManagedField::Texts(2)),
        (0xE0, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_012e8d10` at `0x012E8D10`, in 4 copies.
///
/// Managed fields at 0x20, 0x28, 0x30.
pub const RECORD_AT_012E8D10: ManagedLayout = ManagedLayout {
    finaliser: 0x012E_8D10,
    fields: &[
        (0x20, ManagedField::Texts(1)),
        (0x28, ManagedField::Texts(1)),
        (0x30, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_012cb830` at `0x012CB830`, in 4 copies.
///
/// Managed fields at 0x60, 0x78.
pub const RECORD_AT_012CB830: ManagedLayout = ManagedLayout {
    finaliser: 0x012C_B830,
    fields: &[
        (0x60, ManagedField::Texts(2)),
        (0x78, ManagedField::Texts(3)),
    ],
};

/// Recovered from Ghidra function `FUN_0129c400` at `0x0129C400`, in 4 copies.
///
/// Managed fields at 0x40.
pub const RECORD_AT_0129C400: ManagedLayout = ManagedLayout {
    finaliser: 0x0129_C400,
    fields: &[(0x40, ManagedField::array(0x0198_4BE0))],
};

/// Recovered from Ghidra function `FUN_0123f4b0` at `0x0123F4B0`, in 4 copies.
///
/// Managed fields at 0x40, 0x68.
pub const RECORD_AT_0123F4B0: ManagedLayout = ManagedLayout {
    finaliser: 0x0123_F4B0,
    fields: &[
        (0x40, ManagedField::Texts(1)),
        (0x68, ManagedField::Texts(3)),
    ],
};

/// Recovered from Ghidra function `FUN_01176240` at `0x01176240`, in 4 copies.
///
/// Managed fields at 0x48, 0x58.
pub const RECORD_AT_01176240: ManagedLayout = ManagedLayout {
    finaliser: 0x0117_6240,
    fields: &[
        (0x48, ManagedField::Texts(2)),
        (0x58, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01168a70` at `0x01168A70`, in 4 copies.
///
/// Managed fields at 0x48, 0x150.
pub const RECORD_AT_01168A70: ManagedLayout = ManagedLayout {
    finaliser: 0x0116_8A70,
    fields: &[
        (0x48, ManagedField::Texts(1)),
        (0x150, ManagedField::Texts(3)),
    ],
};

/// Recovered from Ghidra function `FUN_01126730` at `0x01126730`, in 4 copies.
///
/// Managed fields at 0x30, 0x150.
pub const RECORD_AT_01126730: ManagedLayout = ManagedLayout {
    finaliser: 0x0112_6730,
    fields: &[
        (0x30, ManagedField::Texts(4)),
        (0x150, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_010dd480` at `0x010DD480`, in 4 copies.
///
/// Managed fields at 0x48, 0x58, 0x80.
pub const RECORD_AT_010DD480: ManagedLayout = ManagedLayout {
    finaliser: 0x010D_D480,
    fields: &[
        (0x48, ManagedField::Texts(1)),
        (0x58, ManagedField::Texts(1)),
        (0x80, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01090010` at `0x01090010`, in 4 copies.
///
/// Managed fields at 0x20, 0x48.
pub const RECORD_AT_01090010: ManagedLayout = ManagedLayout {
    finaliser: 0x0109_0010,
    fields: &[
        (0x20, ManagedField::Texts(4)),
        (0x48, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_0107e4f0` at `0x0107E4F0`, in 4 copies.
///
/// Managed fields at 0x30, 0x78.
pub const RECORD_AT_0107E4F0: ManagedLayout = ManagedLayout {
    finaliser: 0x0107_E4F0,
    fields: &[
        (0x30, ManagedField::Texts(4)),
        (0x78, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_010561f0` at `0x010561F0`, in 4 copies.
///
/// Managed fields at 0x58, 0x78.
pub const RECORD_AT_010561F0: ManagedLayout = ManagedLayout {
    finaliser: 0x0105_61F0,
    fields: &[
        (0x58, ManagedField::Texts(1)),
        (0x78, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_0104f400` at `0x0104F400`, in 4 copies.
///
/// Managed fields at 0x28, 0x38.
pub const RECORD_AT_0104F400: ManagedLayout = ManagedLayout {
    finaliser: 0x0104_F400,
    fields: &[
        (0x28, ManagedField::Texts(2)),
        (0x38, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_010284a0` at `0x010284A0`, in 4 copies.
///
/// Managed fields at 0x48, 0x80.
pub const RECORD_AT_010284A0: ManagedLayout = ManagedLayout {
    finaliser: 0x0102_84A0,
    fields: &[
        (0x48, ManagedField::Texts(1)),
        (0x80, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00f9a8e0` at `0x00F9A8E0`, in 4 copies.
///
/// Managed fields at 0x30, 0xA8.
pub const RECORD_AT_00F9A8E0: ManagedLayout = ManagedLayout {
    finaliser: 0x00F9_A8E0,
    fields: &[
        (0x30, ManagedField::Texts(8)),
        (0xA8, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00f8f810` at `0x00F8F810`, in 4 copies.
///
/// Managed fields at 0x28, 0x38.
pub const RECORD_AT_00F8F810: ManagedLayout = ManagedLayout {
    finaliser: 0x00F8_F810,
    fields: &[
        (0x28, ManagedField::Texts(1)),
        (0x38, ManagedField::OtherStrings(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00f8edc0` at `0x00F8EDC0`, in 4 copies.
///
/// Managed fields at 0x38, 0x78.
pub const RECORD_AT_00F8EDC0: ManagedLayout = ManagedLayout {
    finaliser: 0x00F8_EDC0,
    fields: &[
        (0x38, ManagedField::Texts(2)),
        (0x78, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00f60ed0` at `0x00F60ED0`, in 4 copies.
///
/// Managed fields at 0x28, 0x60.
pub const RECORD_AT_00F60ED0: ManagedLayout = ManagedLayout {
    finaliser: 0x00F6_0ED0,
    fields: &[
        (0x28, ManagedField::Texts(1)),
        (0x60, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00f438f0` at `0x00F438F0`, in 4 copies.
///
/// Managed fields at 0x38, 0x40, 0x48.
pub const RECORD_AT_00F438F0: ManagedLayout = ManagedLayout {
    finaliser: 0x00F4_38F0,
    fields: &[
        (0x38, ManagedField::Texts(1)),
        (0x40, ManagedField::Texts(1)),
        (0x48, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00f3a020` at `0x00F3A020`, in 4 copies.
///
/// Managed fields at 0x40.
pub const RECORD_AT_00F3A020: ManagedLayout = ManagedLayout {
    finaliser: 0x00F3_A020,
    fields: &[(0x40, ManagedField::array(0x00F2_5EC0))],
};

/// Recovered from Ghidra function `FUN_00f34cd0` at `0x00F34CD0`, in 4 copies.
///
/// Managed fields at 0x38.
pub const RECORD_AT_00F34CD0: ManagedLayout = ManagedLayout {
    finaliser: 0x00F3_4CD0,
    fields: &[(0x38, ManagedField::array(0x00F2_5EC0))],
};

/// Recovered from Ghidra function `FUN_00eed160` at `0x00EED160`, in 4 copies.
///
/// Managed fields at 0x40.
pub const RECORD_AT_00EED160: ManagedLayout = ManagedLayout {
    finaliser: 0x00EE_D160,
    fields: &[(0x40, ManagedField::array(0x0176_5EB0))],
};

/// Recovered from Ghidra function `FUN_00ee6f00` at `0x00EE6F00`, in 4 copies.
///
/// Managed fields at 0x38, 0x78.
pub const RECORD_AT_00EE6F00: ManagedLayout = ManagedLayout {
    finaliser: 0x00EE_6F00,
    fields: &[
        (0x38, ManagedField::Texts(3)),
        (0x78, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00ed4350` at `0x00ED4350`, in 4 copies.
///
/// Managed fields at 0x50, 0x78.
pub const RECORD_AT_00ED4350: ManagedLayout = ManagedLayout {
    finaliser: 0x00ED_4350,
    fields: &[
        (0x50, ManagedField::Texts(2)),
        (0x78, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00ed10e0` at `0x00ED10E0`, in 4 copies.
///
/// Managed fields at 0x40, 0x78.
pub const RECORD_AT_00ED10E0: ManagedLayout = ManagedLayout {
    finaliser: 0x00ED_10E0,
    fields: &[
        (0x40, ManagedField::Texts(6)),
        (0x78, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00ec71d0` at `0x00EC71D0`, in 4 copies.
///
/// Managed fields at 0x48, 0x98.
pub const RECORD_AT_00EC71D0: ManagedLayout = ManagedLayout {
    finaliser: 0x00EC_71D0,
    fields: &[
        (0x48, ManagedField::Texts(5)),
        (0x98, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_00ec5df0` at `0x00EC5DF0`, in 4 copies.
///
/// Managed fields at 0x40, 0x78.
pub const RECORD_AT_00EC5DF0: ManagedLayout = ManagedLayout {
    finaliser: 0x00EC_5DF0,
    fields: &[
        (0x40, ManagedField::Texts(6)),
        (0x78, ManagedField::Texts(3)),
    ],
};

/// Recovered from Ghidra function `FUN_00eb1bb0` at `0x00EB1BB0`, in 4 copies.
///
/// Managed fields at 0x40.
pub const RECORD_AT_00EB1BB0: ManagedLayout = ManagedLayout {
    finaliser: 0x00EB_1BB0,
    fields: &[(0x40, ManagedField::array(0x00EA_B588))],
};

/// Recovered from Ghidra function `FUN_00eaeeb0` at `0x00EAEEB0`, in 4 copies.
///
/// Managed fields at 0x38.
pub const RECORD_AT_00EAEEB0: ManagedLayout = ManagedLayout {
    finaliser: 0x00EA_EEB0,
    fields: &[(0x38, ManagedField::array(0x00EA_B588))],
};

/// Recovered from Ghidra function `FUN_00e24d80` at `0x00E24D80`, in 4 copies.
///
/// Managed fields at 0x298, 0x2C0.
pub const RECORD_AT_00E24D80: ManagedLayout = ManagedLayout {
    finaliser: 0x00E2_4D80,
    fields: &[
        (0x298, ManagedField::elements(0x01AF_6C10, 4)),
        (0x2C0, ManagedField::elements(0x01AF_6C10, 2)),
    ],
};

/// Recovered from Ghidra function `FUN_00e13b70` at `0x00E13B70`, in 4 copies.
///
/// Managed fields at 0x20, 0x40.
pub const RECORD_AT_00E13B70: ManagedLayout = ManagedLayout {
    finaliser: 0x00E1_3B70,
    fields: &[
        (0x20, ManagedField::Texts(1)),
        (0x40, ManagedField::Texts(3)),
    ],
};

/// Recovered from Ghidra function `FUN_00e0e5a0` at `0x00E0E5A0`, in 4 copies.
///
/// Managed fields at 0x38, 0x88.
pub const RECORD_AT_00E0E5A0: ManagedLayout = ManagedLayout {
    finaliser: 0x00E0_E5A0,
    fields: &[
        (0x38, ManagedField::Texts(2)),
        (0x88, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00d812d0` at `0x00D812D0`, in 4 copies.
///
/// Managed fields at 0x30.
pub const RECORD_AT_00D812D0: ManagedLayout = ManagedLayout {
    finaliser: 0x00D8_12D0,
    fields: &[(0x30, ManagedField::array(0x00D6_23C8))],
};

/// Recovered from Ghidra function `FUN_00d41a30` at `0x00D41A30`, in 4 copies.
///
/// Managed fields at 0x48, 0xB0.
pub const RECORD_AT_00D41A30: ManagedLayout = ManagedLayout {
    finaliser: 0x00D4_1A30,
    fields: &[
        (0x48, ManagedField::Texts(1)),
        (0xB0, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00d063b0` at `0x00D063B0`, in 4 copies.
///
/// Managed fields at 0x20, 0x38.
pub const RECORD_AT_00D063B0: ManagedLayout = ManagedLayout {
    finaliser: 0x00D0_63B0,
    fields: &[
        (0x20, ManagedField::Texts(1)),
        (0x38, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00cea370` at `0x00CEA370`, in 4 copies.
///
/// Managed fields at 0x30, 0x58.
pub const RECORD_AT_00CEA370: ManagedLayout = ManagedLayout {
    finaliser: 0x00CE_A370,
    fields: &[
        (0x30, ManagedField::Texts(1)),
        (0x58, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00cd8b40` at `0x00CD8B40`, in 4 copies.
///
/// Managed fields at 0x30, 0x48.
pub const RECORD_AT_00CD8B40: ManagedLayout = ManagedLayout {
    finaliser: 0x00CD_8B40,
    fields: &[
        (0x30, ManagedField::Texts(1)),
        (0x48, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_00bfde20` at `0x00BFDE20`, in 4 copies.
///
/// Managed fields at 0x38, 0x40.
pub const RECORD_AT_00BFDE20: ManagedLayout = ManagedLayout {
    finaliser: 0x00BF_DE20,
    fields: &[
        (0x38, ManagedField::OtherStrings(1)),
        (0x40, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_00b90d10` at `0x00B90D10`, in 4 copies.
///
/// Managed fields at 0x138, 0x1C0.
pub const RECORD_AT_00B90D10: ManagedLayout = ManagedLayout {
    finaliser: 0x00B9_0D10,
    fields: &[
        (0x138, ManagedField::Texts(6)),
        (0x1C0, ManagedField::Texts(4)),
    ],
};

/// Recovered from Ghidra function `FUN_00b90040` at `0x00B90040`, in 4 copies.
///
/// Managed fields at 0x28, 0x40, 0x78.
pub const RECORD_AT_00B90040: ManagedLayout = ManagedLayout {
    finaliser: 0x00B9_0040,
    fields: &[
        (0x28, ManagedField::Texts(1)),
        (0x40, ManagedField::Texts(2)),
        (0x78, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00b58130` at `0x00B58130`, in 4 copies.
///
/// Managed fields at 0x20, 0x40.
pub const RECORD_AT_00B58130: ManagedLayout = ManagedLayout {
    finaliser: 0x00B5_8130,
    fields: &[
        (0x20, ManagedField::Texts(1)),
        (0x40, ManagedField::OtherStrings(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00b4f240` at `0x00B4F240`, in 4 copies.
///
/// Managed fields at 0x28, 0x38, 0x68.
pub const RECORD_AT_00B4F240: ManagedLayout = ManagedLayout {
    finaliser: 0x00B4_F240,
    fields: &[
        (0x28, ManagedField::OtherStrings(1)),
        (0x38, ManagedField::OtherStrings(1)),
        (0x68, ManagedField::OtherStrings(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00b150b0` at `0x00B150B0`, in 4 copies.
///
/// Managed fields at 0x38, 0x48.
pub const RECORD_AT_00B150B0: ManagedLayout = ManagedLayout {
    finaliser: 0x00B1_50B0,
    fields: &[
        (0x38, ManagedField::OtherStrings(1)),
        (0x48, ManagedField::OtherStrings(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00aff3d0` at `0x00AFF3D0`, in 4 copies.
///
/// Managed fields at 0x28, 0x48.
pub const RECORD_AT_00AFF3D0: ManagedLayout = ManagedLayout {
    finaliser: 0x00AF_F3D0,
    fields: &[
        (0x28, ManagedField::Texts(3)),
        (0x48, ManagedField::Texts(3)),
    ],
};

/// Recovered from Ghidra function `FUN_00afe0c0` at `0x00AFE0C0`, in 4 copies.
///
/// Managed fields at 0x38, 0x48.
pub const RECORD_AT_00AFE0C0: ManagedLayout = ManagedLayout {
    finaliser: 0x00AF_E0C0,
    fields: &[
        (0x38, ManagedField::OtherStrings(1)),
        (0x48, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00ad1a40` at `0x00AD1A40`, in 4 copies.
///
/// Managed fields at 0x60, 0x78.
pub const RECORD_AT_00AD1A40: ManagedLayout = ManagedLayout {
    finaliser: 0x00AD_1A40,
    fields: &[
        (0x60, ManagedField::Texts(2)),
        (0x78, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00abc8c0` at `0x00ABC8C0`, in 4 copies.
///
/// Managed fields at 0x70, 0x98.
pub const RECORD_AT_00ABC8C0: ManagedLayout = ManagedLayout {
    finaliser: 0x00AB_C8C0,
    fields: &[
        (0x70, ManagedField::Texts(4)),
        (0x98, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00a61a50` at `0x00A61A50`, in 4 copies.
///
/// Managed fields at 0x50, 0x70.
pub const RECORD_AT_00A61A50: ManagedLayout = ManagedLayout {
    finaliser: 0x00A6_1A50,
    fields: &[
        (0x50, ManagedField::Texts(2)),
        (0x70, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00a59e20` at `0x00A59E20`, in 4 copies.
///
/// Managed fields at 0x20, 0x68.
pub const RECORD_AT_00A59E20: ManagedLayout = ManagedLayout {
    finaliser: 0x00A5_9E20,
    fields: &[
        (0x20, ManagedField::Texts(1)),
        (0x68, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_009a7f10` at `0x009A7F10`, in 4 copies.
///
/// Managed fields at 0x30.
pub const RECORD_AT_009A7F10: ManagedLayout = ManagedLayout {
    finaliser: 0x009A_7F10,
    fields: &[(0x30, ManagedField::array(0x0094_28E8))],
};

/// Recovered from Ghidra function `FUN_00895dd0` at `0x00895DD0`, in 4 copies.
///
/// Managed fields at 0x30, 0x40.
pub const RECORD_AT_00895DD0: ManagedLayout = ManagedLayout {
    finaliser: 0x0089_5DD0,
    fields: &[
        (0x30, ManagedField::Texts(1)),
        (0x40, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_008733e0` at `0x008733E0`, in 4 copies.
///
/// Managed fields at 0x0.
pub const RECORD_AT_008733E0: ManagedLayout = ManagedLayout {
    finaliser: 0x0087_33E0,
    fields: &[(0x0, ManagedField::typed(0x0086_E978))],
};

/// Recovered from Ghidra function `FUN_00855a00` at `0x00855A00`, in 4 copies.
///
/// Managed fields at 0x40.
pub const RECORD_AT_00855A00: ManagedLayout = ManagedLayout {
    finaliser: 0x0085_5A00,
    fields: &[(0x40, ManagedField::array(0x0085_0BE8))],
};

/// Recovered from Ghidra function `FUN_00852d90` at `0x00852D90`, in 4 copies.
///
/// Managed fields at 0x38.
pub const RECORD_AT_00852D90: ManagedLayout = ManagedLayout {
    finaliser: 0x0085_2D90,
    fields: &[(0x38, ManagedField::array(0x0085_0BE8))],
};

/// Recovered from Ghidra function `FUN_00832ec0` at `0x00832EC0`, in 4 copies.
///
/// Managed fields at 0xC8, 0xC0.
pub const RECORD_AT_00832EC0: ManagedLayout = ManagedLayout {
    finaliser: 0x0083_2EC0,
    fields: &[
        (0xC8, ManagedField::Texts(1)),
        (0xC0, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_007a23f0` at `0x007A23F0`, in 4 copies.
///
/// Managed fields at 0x40.
pub const RECORD_AT_007A23F0: ManagedLayout = ManagedLayout {
    finaliser: 0x007A_23F0,
    fields: &[(0x40, ManagedField::array(0x0076_7418))],
};

/// Recovered from Ghidra function `FUN_00798af0` at `0x00798AF0`, in 4 copies.
///
/// Managed fields at 0x40.
pub const RECORD_AT_00798AF0: ManagedLayout = ManagedLayout {
    finaliser: 0x0079_8AF0,
    fields: &[(0x40, ManagedField::array(0x0075_CB10))],
};

/// Recovered from Ghidra function `FUN_0078f1c0` at `0x0078F1C0`, in 4 copies.
///
/// Managed fields at 0x38.
pub const RECORD_AT_0078F1C0: ManagedLayout = ManagedLayout {
    finaliser: 0x0078_F1C0,
    fields: &[(0x38, ManagedField::array(0x0076_7418))],
};

/// Recovered from Ghidra function `FUN_00787390` at `0x00787390`, in 4 copies.
///
/// Managed fields at 0x28, 0x58.
pub const RECORD_AT_00787390: ManagedLayout = ManagedLayout {
    finaliser: 0x0078_7390,
    fields: &[
        (0x28, ManagedField::Texts(3)),
        (0x58, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_006d5a80` at `0x006D5A80`, in 4 copies.
///
/// Managed fields at 0x28, 0x50.
pub const RECORD_AT_006D5A80: ManagedLayout = ManagedLayout {
    finaliser: 0x006D_5A80,
    fields: &[
        (0x28, ManagedField::Texts(1)),
        (0x50, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_005f1120` at `0x005F1120`, in 4 copies.
///
/// Managed fields at 0x20, 0x38, 0x48.
pub const RECORD_AT_005F1120: ManagedLayout = ManagedLayout {
    finaliser: 0x005F_1120,
    fields: &[
        (0x20, ManagedField::Texts(1)),
        (0x38, ManagedField::Texts(1)),
        (0x48, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_005e3230` at `0x005E3230`, in 4 copies.
///
/// Managed fields at 0x40.
pub const RECORD_AT_005E3230: ManagedLayout = ManagedLayout {
    finaliser: 0x005E_3230,
    fields: &[(0x40, ManagedField::array(0x005D_7C00))],
};

/// Recovered from Ghidra function `FUN_005e01a0` at `0x005E01A0`, in 4 copies.
///
/// Managed fields at 0x38.
pub const RECORD_AT_005E01A0: ManagedLayout = ManagedLayout {
    finaliser: 0x005E_01A0,
    fields: &[(0x38, ManagedField::array(0x005D_7C00))],
};

/// Recovered from Ghidra function `FUN_005c1ee0` at `0x005C1EE0`, in 4 copies.
///
/// Managed fields at 0x30.
pub const RECORD_AT_005C1EE0: ManagedLayout = ManagedLayout {
    finaliser: 0x005C_1EE0,
    fields: &[(0x30, ManagedField::array(0x005B_C868))],
};

/// Recovered from Ghidra function `FUN_005c1080` at `0x005C1080`, in 4 copies.
///
/// Managed fields at 0x40, 0x60.
pub const RECORD_AT_005C1080: ManagedLayout = ManagedLayout {
    finaliser: 0x005C_1080,
    fields: &[
        (0x40, ManagedField::Texts(1)),
        (0x60, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_005a2ea0` at `0x005A2EA0`, in 4 copies.
///
/// Managed fields at 0x40.
pub const RECORD_AT_005A2EA0: ManagedLayout = ManagedLayout {
    finaliser: 0x005A_2EA0,
    fields: &[(0x40, ManagedField::array(0x0059_BD38))],
};

/// Recovered from Ghidra function `FUN_00571a10` at `0x00571A10`, in 4 copies.
///
/// Managed fields at 0x40.
pub const RECORD_AT_00571A10: ManagedLayout = ManagedLayout {
    finaliser: 0x0057_1A10,
    fields: &[(0x40, ManagedField::array(0x0053_F690))],
};

/// Recovered from Ghidra function `FUN_0056f360` at `0x0056F360`, in 4 copies.
///
/// Managed fields at 0x40.
pub const RECORD_AT_0056F360: ManagedLayout = ManagedLayout {
    finaliser: 0x0056_F360,
    fields: &[(0x40, ManagedField::array(0x0053_CFE0))],
};

/// Recovered from Ghidra function `FUN_00562be0` at `0x00562BE0`, in 4 copies.
///
/// Managed fields at 0x38.
pub const RECORD_AT_00562BE0: ManagedLayout = ManagedLayout {
    finaliser: 0x0056_2BE0,
    fields: &[(0x38, ManagedField::array(0x0053_F690))],
};

/// Recovered from Ghidra function `FUN_00560b20` at `0x00560B20`, in 4 copies.
///
/// Managed fields at 0x38.
pub const RECORD_AT_00560B20: ManagedLayout = ManagedLayout {
    finaliser: 0x0056_0B20,
    fields: &[(0x38, ManagedField::array(0x0053_CFE0))],
};

/// Recovered from Ghidra function `FUN_00557cb0` at `0x00557CB0`, in 4 copies.
///
/// Managed fields at 0x50.
pub const RECORD_AT_00557CB0: ManagedLayout = ManagedLayout {
    finaliser: 0x0055_7CB0,
    fields: &[(0x50, ManagedField::array(0x0052_7BF8))],
};

/// Recovered from Ghidra function `FUN_00537d10` at `0x00537D10`, in 4 copies.
///
/// Managed fields at 0x30, 0x38.
pub const RECORD_AT_00537D10: ManagedLayout = ManagedLayout {
    finaliser: 0x0053_7D10,
    fields: &[
        (0x30, ManagedField::Interface),
        (0x38, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_005376a0` at `0x005376A0`, in 4 copies.
///
/// Managed fields at 0x40.
pub const RECORD_AT_005376A0: ManagedLayout = ManagedLayout {
    finaliser: 0x0053_76A0,
    fields: &[(0x40, ManagedField::array(0x0052_7BF8))],
};

/// Recovered from Ghidra function `FUN_004fde30` at `0x004FDE30`, in 4 copies.
///
/// Managed fields at 0x40.
pub const RECORD_AT_004FDE30: ManagedLayout = ManagedLayout {
    finaliser: 0x004F_DE30,
    fields: &[(0x40, ManagedField::array(0x004A_5608))],
};

/// Recovered from Ghidra function `FUN_004fada0` at `0x004FADA0`, in 4 copies.
///
/// Managed fields at 0x40.
pub const RECORD_AT_004FADA0: ManagedLayout = ManagedLayout {
    finaliser: 0x004F_ADA0,
    fields: &[(0x40, ManagedField::array(0x0049_90D8))],
};

/// Recovered from Ghidra function `FUN_004f8290` at `0x004F8290`, in 4 copies.
///
/// Managed fields at 0x40.
pub const RECORD_AT_004F8290: ManagedLayout = ManagedLayout {
    finaliser: 0x004F_8290,
    fields: &[(0x40, ManagedField::array(0x0049_0208))],
};

/// Recovered from Ghidra function `FUN_004ec760` at `0x004EC760`, in 4 copies.
///
/// Managed fields at 0x38.
pub const RECORD_AT_004EC760: ManagedLayout = ManagedLayout {
    finaliser: 0x004E_C760,
    fields: &[(0x38, ManagedField::array(0x004A_5608))],
};

/// Recovered from Ghidra function `FUN_004e5550` at `0x004E5550`, in 4 copies.
///
/// Managed fields at 0x38.
pub const RECORD_AT_004E5550: ManagedLayout = ManagedLayout {
    finaliser: 0x004E_5550,
    fields: &[(0x38, ManagedField::array(0x0049_90D8))],
};

/// Recovered from Ghidra function `FUN_004e1f60` at `0x004E1F60`, in 4 copies.
///
/// Managed fields at 0x38.
pub const RECORD_AT_004E1F60: ManagedLayout = ManagedLayout {
    finaliser: 0x004E_1F60,
    fields: &[(0x38, ManagedField::array(0x0049_0208))],
};

/// Recovered from Ghidra function `FUN_004db5a0` at `0x004DB5A0`, in 4 copies.
///
/// Managed fields at 0x28, 0x30, 0x38.
pub const RECORD_AT_004DB5A0: ManagedLayout = ManagedLayout {
    finaliser: 0x004D_B5A0,
    fields: &[
        (0x28, ManagedField::Interface),
        (0x30, ManagedField::Interface),
        (0x38, ManagedField::Interface),
    ],
};

/// Recovered from Ghidra function `FUN_004c3340` at `0x004C3340`, in 4 copies.
///
/// Managed fields at 0x38, 0x40.
pub const RECORD_AT_004C3340: ManagedLayout = ManagedLayout {
    finaliser: 0x004C_3340,
    fields: &[
        (0x38, ManagedField::Interface),
        (0x40, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_004c0630` at `0x004C0630`, in 4 copies.
///
/// Managed fields at 0x58, 0x68.
pub const RECORD_AT_004C0630: ManagedLayout = ManagedLayout {
    finaliser: 0x004C_0630,
    fields: &[
        (0x58, ManagedField::typed(0x0040_6578)),
        (0x68, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_004ba570` at `0x004BA570`, in 4 copies.
///
/// Managed fields at 0x20.
pub const RECORD_AT_004BA570: ManagedLayout = ManagedLayout {
    finaliser: 0x004B_A570,
    fields: &[(0x20, ManagedField::typed(0x0040_6578))],
};

/// Recovered from Ghidra function `FUN_004b95f0` at `0x004B95F0`, in 4 copies.
///
/// Managed fields at 0x30.
pub const RECORD_AT_004B95F0: ManagedLayout = ManagedLayout {
    finaliser: 0x004B_95F0,
    fields: &[(0x30, ManagedField::typed(0x0040_6578))],
};

/// Recovered from Ghidra function `FUN_0041e8a0` at `0x0041E8A0`, in 4 copies.
///
/// Managed fields at 0x60.
pub const RECORD_AT_0041E8A0: ManagedLayout = ManagedLayout {
    finaliser: 0x0041_E8A0,
    fields: &[(0x60, ManagedField::typed(0x0040_66F0))],
};

/// Recovered from Ghidra function `FUN_01d42d40` at `0x01D42D40`, in 3 copies.
///
/// Managed fields at 0x30, 0x48, 0xA0, 0xB0.
pub const RECORD_AT_01D42D40: ManagedLayout = ManagedLayout {
    finaliser: 0x01D4_2D40,
    fields: &[
        (0x30, ManagedField::Texts(1)),
        (0x48, ManagedField::Texts(4)),
        (0xA0, ManagedField::Texts(1)),
        (0xB0, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_01d42cf0` at `0x01D42CF0`, in 3 copies.
///
/// Managed fields at 0xA8, 0xA0.
pub const RECORD_AT_01D42CF0: ManagedLayout = ManagedLayout {
    finaliser: 0x01D4_2CF0,
    fields: &[
        (0xA8, ManagedField::Texts(1)),
        (0xA0, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01d1bf50` at `0x01D1BF50`, in 3 copies.
///
/// Managed fields at 0x30, 0xD0, 0x110, 0x120.
pub const RECORD_AT_01D1BF50: ManagedLayout = ManagedLayout {
    finaliser: 0x01D1_BF50,
    fields: &[
        (0x30, ManagedField::Texts(5)),
        (0xD0, ManagedField::Texts(1)),
        (0x110, ManagedField::Texts(1)),
        (0x120, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01cfd750` at `0x01CFD750`, in 3 copies.
///
/// Managed fields at 0x4F.
pub const RECORD_AT_01CFD750: ManagedLayout = ManagedLayout {
    finaliser: 0x01CF_D750,
    fields: &[(0x4F, ManagedField::array(0x01D3_6AF8))],
};

/// Recovered from Ghidra function `FUN_01cfd430` at `0x01CFD430`, in 3 copies.
///
/// Managed fields at 0x3F.
pub const RECORD_AT_01CFD430: ManagedLayout = ManagedLayout {
    finaliser: 0x01CF_D430,
    fields: &[(0x3F, ManagedField::array(0x01D3_6AF8))],
};

/// Recovered from Ghidra function `FUN_01cfd3a0` at `0x01CFD3A0`, in 3 copies.
///
/// Managed fields at 0x4E.
pub const RECORD_AT_01CFD3A0: ManagedLayout = ManagedLayout {
    finaliser: 0x01CF_D3A0,
    fields: &[(0x4E, ManagedField::elements(0x01D3_6AF8, 2))],
};

/// Recovered from Ghidra function `FUN_01bcc400` at `0x01BCC400`, in 3 copies.
///
/// Managed fields at 0x28, 0x30, 0x38, 0x40, 0x48.
pub const RECORD_AT_01BCC400: ManagedLayout = ManagedLayout {
    finaliser: 0x01BC_C400,
    fields: &[
        (0x28, ManagedField::Interface),
        (0x30, ManagedField::Interface),
        (0x38, ManagedField::Interface),
        (0x40, ManagedField::Interface),
        (0x48, ManagedField::Interface),
    ],
};

/// Recovered from Ghidra function `FUN_01bace40` at `0x01BACE40`, in 3 copies.
///
/// Managed fields at 0x50, 0x58.
pub const RECORD_AT_01BACE40: ManagedLayout = ManagedLayout {
    finaliser: 0x01BA_CE40,
    fields: &[
        (0x50, ManagedField::Texts(1)),
        (0x58, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01b45820` at `0x01B45820`, in 3 copies.
///
/// Managed fields at 0x48, 0x58, 0xA8.
pub const RECORD_AT_01B45820: ManagedLayout = ManagedLayout {
    finaliser: 0x01B4_5820,
    fields: &[
        (0x48, ManagedField::Texts(1)),
        (0x58, ManagedField::Texts(3)),
        (0xA8, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01b3e770` at `0x01B3E770`, in 3 copies.
///
/// Managed fields at 0x40, 0x80, 0x98.
pub const RECORD_AT_01B3E770: ManagedLayout = ManagedLayout {
    finaliser: 0x01B3_E770,
    fields: &[
        (0x40, ManagedField::Texts(2)),
        (0x80, ManagedField::typed(0x0040_66F0)),
        (0x98, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01b228c0` at `0x01B228C0`, in 3 copies.
///
/// Managed fields at 0x40, 0x88.
pub const RECORD_AT_01B228C0: ManagedLayout = ManagedLayout {
    finaliser: 0x01B2_28C0,
    fields: &[
        (0x40, ManagedField::Texts(2)),
        (0x88, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_01b21690` at `0x01B21690`, in 3 copies.
///
/// Managed fields at 0x30, 0x2C0.
pub const RECORD_AT_01B21690: ManagedLayout = ManagedLayout {
    finaliser: 0x01B2_1690,
    fields: &[
        (0x30, ManagedField::array(0x0043_2B90)),
        (0x2C0, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01b050e0` at `0x01B050E0`, in 3 copies.
///
/// Managed fields at 0x40, 0x50.
pub const RECORD_AT_01B050E0: ManagedLayout = ManagedLayout {
    finaliser: 0x01B0_50E0,
    fields: &[
        (0x40, ManagedField::Texts(1)),
        (0x50, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01b04e90` at `0x01B04E90`, in 3 copies.
///
/// Managed fields at 0x38, 0x48, 0x68.
pub const RECORD_AT_01B04E90: ManagedLayout = ManagedLayout {
    finaliser: 0x01B0_4E90,
    fields: &[
        (0x38, ManagedField::Texts(1)),
        (0x48, ManagedField::Texts(1)),
        (0x68, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_01a86f10` at `0x01A86F10`, in 3 copies.
///
/// Managed fields at 0x30, 0x60, 0x70.
pub const RECORD_AT_01A86F10: ManagedLayout = ManagedLayout {
    finaliser: 0x01A8_6F10,
    fields: &[
        (0x30, ManagedField::Texts(6)),
        (0x60, ManagedField::Texts(2)),
        (0x70, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_01a613a0` at `0x01A613A0`, in 3 copies.
///
/// Managed fields at 0x40, 0x90.
pub const RECORD_AT_01A613A0: ManagedLayout = ManagedLayout {
    finaliser: 0x01A6_13A0,
    fields: &[
        (0x40, ManagedField::Texts(7)),
        (0x90, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_01a555f0` at `0x01A555F0`, in 3 copies.
///
/// Managed fields at 0x30, 0x58, 0xC0.
pub const RECORD_AT_01A555F0: ManagedLayout = ManagedLayout {
    finaliser: 0x01A5_55F0,
    fields: &[
        (0x30, ManagedField::Texts(3)),
        (0x58, ManagedField::Texts(5)),
        (0xC0, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01a51310` at `0x01A51310`, in 3 copies.
///
/// Managed fields at 0x30, 0x48, 0x78.
pub const RECORD_AT_01A51310: ManagedLayout = ManagedLayout {
    finaliser: 0x01A5_1310,
    fields: &[
        (0x30, ManagedField::Texts(1)),
        (0x48, ManagedField::Texts(1)),
        (0x78, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01a47770` at `0x01A47770`, in 3 copies.
///
/// Managed fields at 0x40, 0x48, 0x50, 0x68.
pub const RECORD_AT_01A47770: ManagedLayout = ManagedLayout {
    finaliser: 0x01A4_7770,
    fields: &[
        (0x40, ManagedField::Texts(1)),
        (0x48, ManagedField::Texts(1)),
        (0x50, ManagedField::Texts(2)),
        (0x68, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01a31e90` at `0x01A31E90`, in 3 copies.
///
/// Managed fields at 0x20, 0x50.
pub const RECORD_AT_01A31E90: ManagedLayout = ManagedLayout {
    finaliser: 0x01A3_1E90,
    fields: &[
        (0x20, ManagedField::Texts(1)),
        (0x50, ManagedField::OtherStrings(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01a03c10` at `0x01A03C10`, in 3 copies.
///
/// Managed fields at 0x78, 0xD8.
pub const RECORD_AT_01A03C10: ManagedLayout = ManagedLayout {
    finaliser: 0x01A0_3C10,
    fields: &[
        (0x78, ManagedField::Texts(7)),
        (0xD8, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_019eb350` at `0x019EB350`, in 3 copies.
///
/// Managed fields at 0x40, 0x58, 0x78.
pub const RECORD_AT_019EB350: ManagedLayout = ManagedLayout {
    finaliser: 0x019E_B350,
    fields: &[
        (0x40, ManagedField::Texts(2)),
        (0x58, ManagedField::Texts(1)),
        (0x78, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_019e6560` at `0x019E6560`, in 3 copies.
///
/// Managed fields at 0x30, 0x48, 0x50, 0x70, 0x78, 0x80, 0xB8, 0xE8.
pub const RECORD_AT_019E6560: ManagedLayout = ManagedLayout {
    finaliser: 0x019E_6560,
    fields: &[
        (0x30, ManagedField::Texts(3)),
        (0x48, ManagedField::array(0x00EA_5BE0)),
        (0x50, ManagedField::Texts(1)),
        (0x70, ManagedField::Texts(1)),
        (0x78, ManagedField::array(0x00EA_5BE0)),
        (0x80, ManagedField::array(0x00EA_5AE8)),
        (0xB8, ManagedField::Texts(1)),
        (0xE8, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_019dcf40` at `0x019DCF40`, in 3 copies.
///
/// Managed fields at 0x38, 0x68, 0xB8.
pub const RECORD_AT_019DCF40: ManagedLayout = ManagedLayout {
    finaliser: 0x019D_CF40,
    fields: &[
        (0x38, ManagedField::array(0x00EA_5AE8)),
        (0x68, ManagedField::array(0x00EA_5F80)),
        (0xB8, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_019dca60` at `0x019DCA60`, in 3 copies.
///
/// Managed fields at 0x20, 0x50, 0x78.
pub const RECORD_AT_019DCA60: ManagedLayout = ManagedLayout {
    finaliser: 0x019D_CA60,
    fields: &[
        (0x20, ManagedField::Texts(1)),
        (0x50, ManagedField::Texts(2)),
        (0x78, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_019c1c40` at `0x019C1C40`, in 3 copies.
///
/// Managed fields at 0x40, 0x68, 0x78.
pub const RECORD_AT_019C1C40: ManagedLayout = ManagedLayout {
    finaliser: 0x019C_1C40,
    fields: &[
        (0x40, ManagedField::Texts(1)),
        (0x68, ManagedField::Texts(1)),
        (0x78, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_019b95b0` at `0x019B95B0`, in 3 copies.
///
/// Managed fields at 0x48, 0x78.
pub const RECORD_AT_019B95B0: ManagedLayout = ManagedLayout {
    finaliser: 0x019B_95B0,
    fields: &[
        (0x48, ManagedField::Texts(3)),
        (0x78, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_019a97d0` at `0x019A97D0`, in 3 copies.
///
/// Managed fields at 0x40, 0x68, 0xB0.
pub const RECORD_AT_019A97D0: ManagedLayout = ManagedLayout {
    finaliser: 0x019A_97D0,
    fields: &[
        (0x40, ManagedField::Texts(4)),
        (0x68, ManagedField::Texts(1)),
        (0xB0, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_019a5760` at `0x019A5760`, in 3 copies.
///
/// Managed fields at 0x48, 0x70.
pub const RECORD_AT_019A5760: ManagedLayout = ManagedLayout {
    finaliser: 0x019A_5760,
    fields: &[
        (0x48, ManagedField::Texts(2)),
        (0x70, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_019a3e80` at `0x019A3E80`, in 3 copies.
///
/// Managed fields at 0x68, 0xA8.
pub const RECORD_AT_019A3E80: ManagedLayout = ManagedLayout {
    finaliser: 0x019A_3E80,
    fields: &[
        (0x68, ManagedField::Texts(1)),
        (0xA8, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_018e2f80` at `0x018E2F80`, in 3 copies.
///
/// Managed fields at 0x58.
pub const RECORD_AT_018E2F80: ManagedLayout = ManagedLayout {
    finaliser: 0x018E_2F80,
    fields: &[(0x58, ManagedField::elements(0x0040_13D8, 10))],
};

/// Recovered from Ghidra function `FUN_01881ba0` at `0x01881BA0`, in 3 copies.
///
/// Managed fields at 0x28, 0x38.
pub const RECORD_AT_01881BA0: ManagedLayout = ManagedLayout {
    finaliser: 0x0188_1BA0,
    fields: &[
        (0x28, ManagedField::Texts(1)),
        (0x38, ManagedField::Interface),
    ],
};

/// Recovered from Ghidra function `FUN_018798d0` at `0x018798D0`, in 3 copies.
///
/// Managed fields at 0x28.
pub const RECORD_AT_018798D0: ManagedLayout = ManagedLayout {
    finaliser: 0x0187_98D0,
    fields: &[(0x28, ManagedField::elements(0x0040_13D8, 3))],
};

/// Recovered from Ghidra function `FUN_0184ffd0` at `0x0184FFD0`, in 3 copies.
///
/// Managed fields at 0x28.
pub const RECORD_AT_0184FFD0: ManagedLayout = ManagedLayout {
    finaliser: 0x0184_FFD0,
    fields: &[(0x28, ManagedField::elements(0x0040_13D8, 2))],
};

/// Recovered from Ghidra function `FUN_01834a70` at `0x01834A70`, in 3 copies.
///
/// Managed fields at 0x20, 0x50.
pub const RECORD_AT_01834A70: ManagedLayout = ManagedLayout {
    finaliser: 0x0183_4A70,
    fields: &[
        (0x20, ManagedField::Texts(1)),
        (0x50, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_01822cf0` at `0x01822CF0`, in 3 copies.
///
/// Managed fields at 0x40.
pub const RECORD_AT_01822CF0: ManagedLayout = ManagedLayout {
    finaliser: 0x0182_2CF0,
    fields: &[(0x40, ManagedField::elements(0x0183_DB48, 2))],
};

/// Recovered from Ghidra function `FUN_018040d0` at `0x018040D0`, in 3 copies.
///
/// Managed fields at 0x40, 0x78, 0xA8.
pub const RECORD_AT_018040D0: ManagedLayout = ManagedLayout {
    finaliser: 0x0180_40D0,
    fields: &[
        (0x40, ManagedField::Texts(6)),
        (0x78, ManagedField::Texts(1)),
        (0xA8, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01803e60` at `0x01803E60`, in 3 copies.
///
/// Managed fields at 0x48, 0xB0.
pub const RECORD_AT_01803E60: ManagedLayout = ManagedLayout {
    finaliser: 0x0180_3E60,
    fields: &[
        (0x48, ManagedField::Texts(7)),
        (0xB0, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_017ef240` at `0x017EF240`, in 3 copies.
///
/// Managed fields at 0x50, 0x68.
pub const RECORD_AT_017EF240: ManagedLayout = ManagedLayout {
    finaliser: 0x017E_F240,
    fields: &[
        (0x50, ManagedField::Texts(1)),
        (0x68, ManagedField::Texts(3)),
    ],
};

/// Recovered from Ghidra function `FUN_0179a140` at `0x0179A140`, in 3 copies.
///
/// Managed fields at 0x50, 0x98.
pub const RECORD_AT_0179A140: ManagedLayout = ManagedLayout {
    finaliser: 0x0179_A140,
    fields: &[
        (0x50, ManagedField::Texts(8)),
        (0x98, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01777ea0` at `0x01777EA0`, in 3 copies.
///
/// Managed fields at 0x28, 0x48.
pub const RECORD_AT_01777EA0: ManagedLayout = ManagedLayout {
    finaliser: 0x0177_7EA0,
    fields: &[
        (0x28, ManagedField::Texts(2)),
        (0x48, ManagedField::Texts(3)),
    ],
};

/// Recovered from Ghidra function `FUN_01773ab0` at `0x01773AB0`, in 3 copies.
///
/// Managed fields at 0x30, 0x68.
pub const RECORD_AT_01773AB0: ManagedLayout = ManagedLayout {
    finaliser: 0x0177_3AB0,
    fields: &[
        (0x30, ManagedField::Texts(2)),
        (0x68, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_01751820` at `0x01751820`, in 3 copies.
///
/// Managed fields at 0x58, 0xC0, 0xC8.
pub const RECORD_AT_01751820: ManagedLayout = ManagedLayout {
    finaliser: 0x0175_1820,
    fields: &[
        (0x58, ManagedField::Interface),
        (0xC0, ManagedField::Interface),
        (0xC8, ManagedField::Interface),
    ],
};

/// Recovered from Ghidra function `FUN_01750700` at `0x01750700`, in 3 copies.
///
/// Managed fields at 0xC0, 0xC8.
pub const RECORD_AT_01750700: ManagedLayout = ManagedLayout {
    finaliser: 0x0175_0700,
    fields: &[
        (0xC0, ManagedField::Interface),
        (0xC8, ManagedField::Interface),
    ],
};

/// Recovered from Ghidra function `FUN_0174cbe0` at `0x0174CBE0`, in 3 copies.
///
/// Managed fields at 0x60, 0xD0, 0xD8.
pub const RECORD_AT_0174CBE0: ManagedLayout = ManagedLayout {
    finaliser: 0x0174_CBE0,
    fields: &[
        (0x60, ManagedField::elements(0x00B9_FCA0, 2)),
        (0xD0, ManagedField::Interface),
        (0xD8, ManagedField::Interface),
    ],
};

/// Recovered from Ghidra function `FUN_017409c0` at `0x017409C0`, in 3 copies.
///
/// Managed fields at 0x68, 0x80, 0xB8, 0xC8, 0x160, 0x168.
pub const RECORD_AT_017409C0: ManagedLayout = ManagedLayout {
    finaliser: 0x0174_09C0,
    fields: &[
        (0x68, ManagedField::elements(0x00B9_FCA0, 3)),
        (0x80, ManagedField::Texts(7)),
        (0xB8, ManagedField::Interface),
        (0xC8, ManagedField::Interface),
        (0x160, ManagedField::Interface),
        (0x168, ManagedField::Interface),
    ],
};

/// Recovered from Ghidra function `FUN_0173e7b0` at `0x0173E7B0`, in 3 copies.
///
/// Managed fields at 0x60, 0x70, 0xA8, 0xB0, 0x130, 0x138.
pub const RECORD_AT_0173E7B0: ManagedLayout = ManagedLayout {
    finaliser: 0x0173_E7B0,
    fields: &[
        (0x60, ManagedField::elements(0x00B9_FCA0, 2)),
        (0x70, ManagedField::Texts(7)),
        (0xA8, ManagedField::Interface),
        (0xB0, ManagedField::Interface),
        (0x130, ManagedField::Interface),
        (0x138, ManagedField::Interface),
    ],
};

/// Recovered from Ghidra function `FUN_017170a0` at `0x017170A0`, in 3 copies.
///
/// Managed fields at 0x48, 0x98.
pub const RECORD_AT_017170A0: ManagedLayout = ManagedLayout {
    finaliser: 0x0171_70A0,
    fields: &[
        (0x48, ManagedField::Texts(3)),
        (0x98, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_01716e20` at `0x01716E20`, in 3 copies.
///
/// Managed fields at 0x48, 0x98.
pub const RECORD_AT_01716E20: ManagedLayout = ManagedLayout {
    finaliser: 0x0171_6E20,
    fields: &[
        (0x48, ManagedField::Texts(3)),
        (0x98, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_017142c0` at `0x017142C0`, in 3 copies.
///
/// Managed fields at 0x40, 0xB8, 0xC8, 0x118.
pub const RECORD_AT_017142C0: ManagedLayout = ManagedLayout {
    finaliser: 0x0171_42C0,
    fields: &[
        (0x40, ManagedField::Texts(14)),
        (0xB8, ManagedField::OtherStrings(2)),
        (0xC8, ManagedField::Texts(3)),
        (0x118, ManagedField::Texts(4)),
    ],
};

/// Recovered from Ghidra function `FUN_01713ba0` at `0x01713BA0`, in 3 copies.
///
/// Managed fields at 0x40, 0xD8.
pub const RECORD_AT_01713BA0: ManagedLayout = ManagedLayout {
    finaliser: 0x0171_3BA0,
    fields: &[
        (0x40, ManagedField::Texts(12)),
        (0xD8, ManagedField::Texts(4)),
    ],
};

/// Recovered from Ghidra function `FUN_01711c10` at `0x01711C10`, in 3 copies.
///
/// Managed fields at 0x38, 0x68, 0x70, 0x308.
pub const RECORD_AT_01711C10: ManagedLayout = ManagedLayout {
    finaliser: 0x0171_1C10,
    fields: &[
        (0x38, ManagedField::Texts(5)),
        (0x68, ManagedField::Texts(1)),
        (0x70, ManagedField::array(0x0043_2B90)),
        (0x308, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_016ffdd0` at `0x016FFDD0`, in 3 copies.
///
/// Managed fields at 0x38, 0x48, 0x68.
pub const RECORD_AT_016FFDD0: ManagedLayout = ManagedLayout {
    finaliser: 0x016F_FDD0,
    fields: &[
        (0x38, ManagedField::Texts(1)),
        (0x48, ManagedField::Texts(1)),
        (0x68, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_016f9d30` at `0x016F9D30`, in 3 copies.
///
/// Managed fields at 0x38, 0x90.
pub const RECORD_AT_016F9D30: ManagedLayout = ManagedLayout {
    finaliser: 0x016F_9D30,
    fields: &[
        (0x38, ManagedField::OtherStrings(3)),
        (0x90, ManagedField::OtherStrings(1)),
    ],
};

/// Recovered from Ghidra function `FUN_016b0eb0` at `0x016B0EB0`, in 3 copies.
///
/// Managed fields at 0x30, 0x68.
pub const RECORD_AT_016B0EB0: ManagedLayout = ManagedLayout {
    finaliser: 0x016B_0EB0,
    fields: &[
        (0x30, ManagedField::Texts(2)),
        (0x68, ManagedField::OtherStrings(1)),
    ],
};

/// Recovered from Ghidra function `FUN_016acf00` at `0x016ACF00`, in 3 copies.
///
/// Managed fields at 0x28, 0x50.
pub const RECORD_AT_016ACF00: ManagedLayout = ManagedLayout {
    finaliser: 0x016A_CF00,
    fields: &[
        (0x28, ManagedField::Texts(1)),
        (0x50, ManagedField::OtherStrings(1)),
    ],
};

/// Recovered from Ghidra function `FUN_016acaf0` at `0x016ACAF0`, in 3 copies.
///
/// Managed fields at 0x28, 0x48.
pub const RECORD_AT_016ACAF0: ManagedLayout = ManagedLayout {
    finaliser: 0x016A_CAF0,
    fields: &[
        (0x28, ManagedField::Texts(1)),
        (0x48, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_016a6a00` at `0x016A6A00`, in 3 copies.
///
/// Managed fields at 0x30, 0x70.
pub const RECORD_AT_016A6A00: ManagedLayout = ManagedLayout {
    finaliser: 0x016A_6A00,
    fields: &[
        (0x30, ManagedField::Texts(1)),
        (0x70, ManagedField::OtherStrings(1)),
    ],
};

/// Recovered from Ghidra function `FUN_016a3e20` at `0x016A3E20`, in 3 copies.
///
/// Managed fields at 0x38, 0x48, 0x178.
pub const RECORD_AT_016A3E20: ManagedLayout = ManagedLayout {
    finaliser: 0x016A_3E20,
    fields: &[
        (0x38, ManagedField::Texts(1)),
        (0x48, ManagedField::Texts(1)),
        (0x178, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01652710` at `0x01652710`, in 3 copies.
///
/// Managed fields at 0x68, 0x90.
pub const RECORD_AT_01652710: ManagedLayout = ManagedLayout {
    finaliser: 0x0165_2710,
    fields: &[
        (0x68, ManagedField::Texts(3)),
        (0x90, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_0164a9c0` at `0x0164A9C0`, in 3 copies.
///
/// Managed fields at 0x40, 0x88.
pub const RECORD_AT_0164A9C0: ManagedLayout = ManagedLayout {
    finaliser: 0x0164_A9C0,
    fields: &[
        (0x40, ManagedField::Texts(2)),
        (0x88, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01625df0` at `0x01625DF0`, in 3 copies.
///
/// Managed fields at 0x58, 0x70.
pub const RECORD_AT_01625DF0: ManagedLayout = ManagedLayout {
    finaliser: 0x0162_5DF0,
    fields: &[
        (0x58, ManagedField::Texts(1)),
        (0x70, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01616130` at `0x01616130`, in 3 copies.
///
/// Managed fields at 0x40, 0x58, 0x80.
pub const RECORD_AT_01616130: ManagedLayout = ManagedLayout {
    finaliser: 0x0161_6130,
    fields: &[
        (0x40, ManagedField::Texts(2)),
        (0x58, ManagedField::Texts(1)),
        (0x80, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01613720` at `0x01613720`, in 3 copies.
///
/// Managed fields at 0x30, 0x70.
pub const RECORD_AT_01613720: ManagedLayout = ManagedLayout {
    finaliser: 0x0161_3720,
    fields: &[
        (0x30, ManagedField::Texts(4)),
        (0x70, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_0160e3b0` at `0x0160E3B0`, in 3 copies.
///
/// Managed fields at 0x28, 0x48, 0x90.
pub const RECORD_AT_0160E3B0: ManagedLayout = ManagedLayout {
    finaliser: 0x0160_E3B0,
    fields: &[
        (0x28, ManagedField::Texts(2)),
        (0x48, ManagedField::Texts(1)),
        (0x90, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_0160cd70` at `0x0160CD70`, in 3 copies.
///
/// Managed fields at 0x58, 0x8A0.
pub const RECORD_AT_0160CD70: ManagedLayout = ManagedLayout {
    finaliser: 0x0160_CD70,
    fields: &[
        (0x58, ManagedField::Texts(4)),
        (0x8A0, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_0160c880` at `0x0160C880`, in 3 copies.
///
/// Managed fields at 0x48, 0x890.
pub const RECORD_AT_0160C880: ManagedLayout = ManagedLayout {
    finaliser: 0x0160_C880,
    fields: &[
        (0x48, ManagedField::Texts(4)),
        (0x890, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_01606050` at `0x01606050`, in 3 copies.
///
/// Managed fields at 0x28, 0x80.
pub const RECORD_AT_01606050: ManagedLayout = ManagedLayout {
    finaliser: 0x0160_6050,
    fields: &[
        (0x28, ManagedField::Texts(2)),
        (0x80, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01604a60` at `0x01604A60`, in 3 copies.
///
/// Managed fields at 0x28, 0x38, 0x40, 0x2E0.
pub const RECORD_AT_01604A60: ManagedLayout = ManagedLayout {
    finaliser: 0x0160_4A60,
    fields: &[
        (0x28, ManagedField::Texts(1)),
        (0x38, ManagedField::Texts(1)),
        (0x40, ManagedField::array(0x0043_2B90)),
        (0x2E0, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_015fc8d0` at `0x015FC8D0`, in 3 copies.
///
/// Managed fields at 0x30, 0x68.
pub const RECORD_AT_015FC8D0: ManagedLayout = ManagedLayout {
    finaliser: 0x015F_C8D0,
    fields: &[
        (0x30, ManagedField::Texts(4)),
        (0x68, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_015d7050` at `0x015D7050`, in 3 copies.
///
/// Managed fields at 0x38.
pub const RECORD_AT_015D7050: ManagedLayout = ManagedLayout {
    finaliser: 0x015D_7050,
    fields: &[(0x38, ManagedField::array(0x015B_9418))],
};

/// Recovered from Ghidra function `FUN_015caed0` at `0x015CAED0`, in 3 copies.
///
/// Managed fields at 0x50.
pub const RECORD_AT_015CAED0: ManagedLayout = ManagedLayout {
    finaliser: 0x015C_AED0,
    fields: &[(0x50, ManagedField::array(0x015B_9418))],
};

/// Recovered from Ghidra function `FUN_015c6b70` at `0x015C6B70`, in 3 copies.
///
/// Managed fields at 0x20.
pub const RECORD_AT_015C6B70: ManagedLayout = ManagedLayout {
    finaliser: 0x015C_6B70,
    fields: &[(0x20, ManagedField::elements(0x015B_9418, 3))],
};

/// Recovered from Ghidra function `FUN_015c6910` at `0x015C6910`, in 3 copies.
///
/// Managed fields at 0x20.
pub const RECORD_AT_015C6910: ManagedLayout = ManagedLayout {
    finaliser: 0x015C_6910,
    fields: &[(0x20, ManagedField::elements(0x015B_9418, 2))],
};

/// Recovered from Ghidra function `FUN_015c0620` at `0x015C0620`, in 3 copies.
///
/// Managed fields at 0x20, 0x40.
pub const RECORD_AT_015C0620: ManagedLayout = ManagedLayout {
    finaliser: 0x015C_0620,
    fields: &[
        (0x20, ManagedField::Texts(2)),
        (0x40, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_015ab880` at `0x015AB880`, in 3 copies.
///
/// Managed fields at 0x38, 0x40, 0x58.
pub const RECORD_AT_015AB880: ManagedLayout = ManagedLayout {
    finaliser: 0x015A_B880,
    fields: &[
        (0x38, ManagedField::Texts(1)),
        (0x40, ManagedField::OtherStrings(1)),
        (0x58, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_0158aac0` at `0x0158AAC0`, in 3 copies.
///
/// Managed fields at 0x38.
pub const RECORD_AT_0158AAC0: ManagedLayout = ManagedLayout {
    finaliser: 0x0158_AAC0,
    fields: &[(0x38, ManagedField::array(0x0157_64A8))],
};

/// Recovered from Ghidra function `FUN_01584560` at `0x01584560`, in 3 copies.
///
/// Managed fields at 0x50.
pub const RECORD_AT_01584560: ManagedLayout = ManagedLayout {
    finaliser: 0x0158_4560,
    fields: &[(0x50, ManagedField::elements(0x0157_7948, 2))],
};

/// Recovered from Ghidra function `FUN_0157da20` at `0x0157DA20`, in 3 copies.
///
/// Managed fields at 0x74, 0xF8.
pub const RECORD_AT_0157DA20: ManagedLayout = ManagedLayout {
    finaliser: 0x0157_DA20,
    fields: &[
        (0x74, ManagedField::elements(0x0157_64A8, 2)),
        (0xF8, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_0157d9d0` at `0x0157D9D0`, in 3 copies.
///
/// Managed fields at 0xF8, 0xB6, 0x74.
pub const RECORD_AT_0157D9D0: ManagedLayout = ManagedLayout {
    finaliser: 0x0157_D9D0,
    fields: &[
        (0xF8, ManagedField::Texts(1)),
        (0xB6, ManagedField::array(0x0157_64A8)),
        (0x74, ManagedField::array(0x0157_64A8)),
    ],
};

/// Recovered from Ghidra function `FUN_01575b80` at `0x01575B80`, in 3 copies.
///
/// Managed fields at 0x28.
pub const RECORD_AT_01575B80: ManagedLayout = ManagedLayout {
    finaliser: 0x0157_5B80,
    fields: &[(0x28, ManagedField::elements(0x00E0_21A8, 2))],
};

/// Recovered from Ghidra function `FUN_0156ce90` at `0x0156CE90`, in 3 copies.
///
/// Managed fields at 0x40, 0x90.
pub const RECORD_AT_0156CE90: ManagedLayout = ManagedLayout {
    finaliser: 0x0156_CE90,
    fields: &[
        (0x40, ManagedField::Texts(2)),
        (0x90, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_0155fe30` at `0x0155FE30`, in 3 copies.
///
/// Managed fields at 0x50, 0x60.
pub const RECORD_AT_0155FE30: ManagedLayout = ManagedLayout {
    finaliser: 0x0155_FE30,
    fields: &[
        (0x50, ManagedField::OtherStrings(2)),
        (0x60, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_0154d780` at `0x0154D780`, in 3 copies.
///
/// Managed fields at 0x48, 0x58, 0x90.
pub const RECORD_AT_0154D780: ManagedLayout = ManagedLayout {
    finaliser: 0x0154_D780,
    fields: &[
        (0x48, ManagedField::Texts(1)),
        (0x58, ManagedField::Texts(1)),
        (0x90, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_015307e0` at `0x015307E0`, in 3 copies.
///
/// Managed fields at 0x50, 0x58, 0x60.
pub const RECORD_AT_015307E0: ManagedLayout = ManagedLayout {
    finaliser: 0x0153_07E0,
    fields: &[
        (0x50, ManagedField::Texts(1)),
        (0x58, ManagedField::Texts(1)),
        (0x60, ManagedField::Texts(4)),
    ],
};

/// Recovered from Ghidra function `FUN_01510960` at `0x01510960`, in 3 copies.
///
/// Managed fields at 0x30, 0x38, 0x48.
pub const RECORD_AT_01510960: ManagedLayout = ManagedLayout {
    finaliser: 0x0151_0960,
    fields: &[
        (0x30, ManagedField::Texts(1)),
        (0x38, ManagedField::Texts(2)),
        (0x48, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_014eec00` at `0x014EEC00`, in 3 copies.
///
/// Managed fields at 0x30.
pub const RECORD_AT_014EEC00: ManagedLayout = ManagedLayout {
    finaliser: 0x014E_EC00,
    fields: &[(0x30, ManagedField::array(0x014E_D9E8))],
};

/// Recovered from Ghidra function `FUN_014c1b40` at `0x014C1B40`, in 3 copies.
///
/// Managed fields at 0x30, 0x48, 0xA8.
pub const RECORD_AT_014C1B40: ManagedLayout = ManagedLayout {
    finaliser: 0x014C_1B40,
    fields: &[
        (0x30, ManagedField::Texts(1)),
        (0x48, ManagedField::Texts(3)),
        (0xA8, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_014c06f0` at `0x014C06F0`, in 3 copies.
///
/// Managed fields at 0x20, 0x30, 0x2C0.
pub const RECORD_AT_014C06F0: ManagedLayout = ManagedLayout {
    finaliser: 0x014C_06F0,
    fields: &[
        (0x20, ManagedField::Texts(2)),
        (0x30, ManagedField::array(0x0043_2B90)),
        (0x2C0, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_014a30e0` at `0x014A30E0`, in 3 copies.
///
/// Managed fields at 0x37.
pub const RECORD_AT_014A30E0: ManagedLayout = ManagedLayout {
    finaliser: 0x014A_30E0,
    fields: &[(0x37, ManagedField::array(0x01D0_D0B8))],
};

/// Recovered from Ghidra function `FUN_014a2ef0` at `0x014A2EF0`, in 3 copies.
///
/// Managed fields at 0x35.
pub const RECORD_AT_014A2EF0: ManagedLayout = ManagedLayout {
    finaliser: 0x014A_2EF0,
    fields: &[(0x35, ManagedField::array(0x01D0_D0B8))],
};

/// Recovered from Ghidra function `FUN_01499a50` at `0x01499A50`, in 3 copies.
///
/// Managed fields at 0x38, 0x48, 0xA0.
pub const RECORD_AT_01499A50: ManagedLayout = ManagedLayout {
    finaliser: 0x0149_9A50,
    fields: &[
        (0x38, ManagedField::Texts(1)),
        (0x48, ManagedField::Texts(3)),
        (0xA0, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01479540` at `0x01479540`, in 3 copies.
///
/// Managed fields at 0x48, 0x68.
pub const RECORD_AT_01479540: ManagedLayout = ManagedLayout {
    finaliser: 0x0147_9540,
    fields: &[
        (0x48, ManagedField::Texts(1)),
        (0x68, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_01477680` at `0x01477680`, in 3 copies.
///
/// Managed fields at 0x40, 0x68.
pub const RECORD_AT_01477680: ManagedLayout = ManagedLayout {
    finaliser: 0x0147_7680,
    fields: &[
        (0x40, ManagedField::Texts(4)),
        (0x68, ManagedField::Texts(6)),
    ],
};

/// Recovered from Ghidra function `FUN_014130a0` at `0x014130A0`, in 3 copies.
///
/// Managed fields at 0x70, 0x188.
pub const RECORD_AT_014130A0: ManagedLayout = ManagedLayout {
    finaliser: 0x0141_30A0,
    fields: &[
        (0x70, ManagedField::Texts(2)),
        (0x188, ManagedField::Texts(3)),
    ],
};

/// Recovered from Ghidra function `FUN_0140f020` at `0x0140F020`, in 3 copies.
///
/// Managed fields at 0x50, 0x60, 0x70, 0x80.
pub const RECORD_AT_0140F020: ManagedLayout = ManagedLayout {
    finaliser: 0x0140_F020,
    fields: &[
        (0x50, ManagedField::Texts(2)),
        (0x60, ManagedField::Texts(2)),
        (0x70, ManagedField::Texts(2)),
        (0x80, ManagedField::Texts(8)),
    ],
};

/// Recovered from Ghidra function `FUN_0140e610` at `0x0140E610`, in 3 copies.
///
/// Managed fields at 0x40, 0x1A8.
pub const RECORD_AT_0140E610: ManagedLayout = ManagedLayout {
    finaliser: 0x0140_E610,
    fields: &[
        (0x40, ManagedField::Texts(2)),
        (0x1A8, ManagedField::Texts(3)),
    ],
};

/// Recovered from Ghidra function `FUN_013efab0` at `0x013EFAB0`, in 3 copies.
///
/// Managed fields at 0x48, 0x160.
pub const RECORD_AT_013EFAB0: ManagedLayout = ManagedLayout {
    finaliser: 0x013E_FAB0,
    fields: &[
        (0x48, ManagedField::Texts(3)),
        (0x160, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_013e8c90` at `0x013E8C90`, in 3 copies.
///
/// Managed fields at 0x130, 0x138.
pub const RECORD_AT_013E8C90: ManagedLayout = ManagedLayout {
    finaliser: 0x013E_8C90,
    fields: &[
        (0x130, ManagedField::Texts(1)),
        (0x138, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_013e8ab0` at `0x013E8AB0`, in 3 copies.
///
/// Managed fields at 0x20, 0x30, 0x3B8.
pub const RECORD_AT_013E8AB0: ManagedLayout = ManagedLayout {
    finaliser: 0x013E_8AB0,
    fields: &[
        (0x20, ManagedField::Texts(2)),
        (0x30, ManagedField::OtherStrings(1)),
        (0x3B8, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_013e09c0` at `0x013E09C0`, in 3 copies.
///
/// Managed fields at 0x78, 0xA0.
pub const RECORD_AT_013E09C0: ManagedLayout = ManagedLayout {
    finaliser: 0x013E_09C0,
    fields: &[
        (0x78, ManagedField::Texts(4)),
        (0xA0, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_013de370` at `0x013DE370`, in 3 copies.
///
/// Managed fields at 0x178, 0x198.
pub const RECORD_AT_013DE370: ManagedLayout = ManagedLayout {
    finaliser: 0x013D_E370,
    fields: &[
        (0x178, ManagedField::Texts(2)),
        (0x198, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_013d4ad0` at `0x013D4AD0`, in 3 copies.
///
/// Managed fields at 0xA0, 0xC0.
pub const RECORD_AT_013D4AD0: ManagedLayout = ManagedLayout {
    finaliser: 0x013D_4AD0,
    fields: &[
        (0xA0, ManagedField::Texts(3)),
        (0xC0, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_013d4540` at `0x013D4540`, in 3 copies.
///
/// Managed fields at 0xA8, 0xC8.
pub const RECORD_AT_013D4540: ManagedLayout = ManagedLayout {
    finaliser: 0x013D_4540,
    fields: &[
        (0xA8, ManagedField::Texts(2)),
        (0xC8, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_013cd010` at `0x013CD010`, in 3 copies.
///
/// Managed fields at 0x48, 0x98.
pub const RECORD_AT_013CD010: ManagedLayout = ManagedLayout {
    finaliser: 0x013C_D010,
    fields: &[
        (0x48, ManagedField::Texts(9)),
        (0x98, ManagedField::Texts(3)),
    ],
};

/// Recovered from Ghidra function `FUN_013c6f50` at `0x013C6F50`, in 3 copies.
///
/// Managed fields at 0x58, 0xA8.
pub const RECORD_AT_013C6F50: ManagedLayout = ManagedLayout {
    finaliser: 0x013C_6F50,
    fields: &[
        (0x58, ManagedField::Texts(1)),
        (0xA8, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_013c1220` at `0x013C1220`, in 3 copies.
///
/// Managed fields at 0x48, 0xA0.
pub const RECORD_AT_013C1220: ManagedLayout = ManagedLayout {
    finaliser: 0x013C_1220,
    fields: &[
        (0x48, ManagedField::Texts(3)),
        (0xA0, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_013acb30` at `0x013ACB30`, in 3 copies.
///
/// Managed fields at 0x48, 0x90.
pub const RECORD_AT_013ACB30: ManagedLayout = ManagedLayout {
    finaliser: 0x013A_CB30,
    fields: &[
        (0x48, ManagedField::Texts(3)),
        (0x90, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_013a67c0` at `0x013A67C0`, in 3 copies.
///
/// Managed fields at 0x20, 0x40.
pub const RECORD_AT_013A67C0: ManagedLayout = ManagedLayout {
    finaliser: 0x013A_67C0,
    fields: &[
        (0x20, ManagedField::Texts(1)),
        (0x40, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_013a3f40` at `0x013A3F40`, in 3 copies.
///
/// Managed fields at 0x28, 0x40.
pub const RECORD_AT_013A3F40: ManagedLayout = ManagedLayout {
    finaliser: 0x013A_3F40,
    fields: &[
        (0x28, ManagedField::Texts(2)),
        (0x40, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_01367090` at `0x01367090`, in 3 copies.
///
/// Managed fields at 0x40, 0x48.
pub const RECORD_AT_01367090: ManagedLayout = ManagedLayout {
    finaliser: 0x0136_7090,
    fields: &[
        (0x40, ManagedField::OtherStrings(1)),
        (0x48, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01350f60` at `0x01350F60`, in 3 copies.
///
/// Managed fields at 0x38, 0x40, 0x48.
pub const RECORD_AT_01350F60: ManagedLayout = ManagedLayout {
    finaliser: 0x0135_0F60,
    fields: &[
        (0x38, ManagedField::Texts(1)),
        (0x40, ManagedField::OtherStrings(1)),
        (0x48, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_013491c0` at `0x013491C0`, in 3 copies.
///
/// Managed fields at 0x44.
pub const RECORD_AT_013491C0: ManagedLayout = ManagedLayout {
    finaliser: 0x0134_91C0,
    fields: &[(0x44, ManagedField::array(0x01D2_E6D8))],
};

/// Recovered from Ghidra function `FUN_0133dd60` at `0x0133DD60`, in 3 copies.
///
/// Managed fields at 0x38, 0x70.
pub const RECORD_AT_0133DD60: ManagedLayout = ManagedLayout {
    finaliser: 0x0133_DD60,
    fields: &[
        (0x38, ManagedField::Texts(4)),
        (0x70, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_01320b20` at `0x01320B20`, in 3 copies.
///
/// Managed fields at 0x28, 0x38, 0x68, 0x70.
pub const RECORD_AT_01320B20: ManagedLayout = ManagedLayout {
    finaliser: 0x0132_0B20,
    fields: &[
        (0x28, ManagedField::Interface),
        (0x38, ManagedField::Interface),
        (0x68, ManagedField::Interface),
        (0x70, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_0131f7c0` at `0x0131F7C0`, in 3 copies.
///
/// Managed fields at 0x58, 0x70.
pub const RECORD_AT_0131F7C0: ManagedLayout = ManagedLayout {
    finaliser: 0x0131_F7C0,
    fields: &[
        (0x58, ManagedField::array(0x00E0_21A8)),
        (0x70, ManagedField::Texts(3)),
    ],
};

/// Recovered from Ghidra function `FUN_0130e850` at `0x0130E850`, in 3 copies.
///
/// Managed fields at 0x38, 0x48, 0x78.
pub const RECORD_AT_0130E850: ManagedLayout = ManagedLayout {
    finaliser: 0x0130_E850,
    fields: &[
        (0x38, ManagedField::Texts(1)),
        (0x48, ManagedField::Texts(1)),
        (0x78, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_012f81a0` at `0x012F81A0`, in 3 copies.
///
/// Managed fields at 0x50, 0x58, 0x68.
pub const RECORD_AT_012F81A0: ManagedLayout = ManagedLayout {
    finaliser: 0x012F_81A0,
    fields: &[
        (0x50, ManagedField::Texts(1)),
        (0x58, ManagedField::Texts(1)),
        (0x68, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_012d01c0` at `0x012D01C0`, in 3 copies.
///
/// Managed fields at 0x30, 0x68.
pub const RECORD_AT_012D01C0: ManagedLayout = ManagedLayout {
    finaliser: 0x012D_01C0,
    fields: &[
        (0x30, ManagedField::Texts(4)),
        (0x68, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_012ceb80` at `0x012CEB80`, in 3 copies.
///
/// Managed fields at 0x40, 0x48, 0x60, 0x68, 0x70, 0x80, 0x88.
pub const RECORD_AT_012CEB80: ManagedLayout = ManagedLayout {
    finaliser: 0x012C_EB80,
    fields: &[
        (0x40, ManagedField::Interface),
        (0x48, ManagedField::Texts(3)),
        (0x60, ManagedField::Interface),
        (0x68, ManagedField::Interface),
        (0x70, ManagedField::Texts(2)),
        (0x80, ManagedField::Interface),
        (0x88, ManagedField::Interface),
    ],
};

/// Recovered from Ghidra function `FUN_012cb4e0` at `0x012CB4E0`, in 3 copies.
///
/// Managed fields at 0x64, 0xC8.
pub const RECORD_AT_012CB4E0: ManagedLayout = ManagedLayout {
    finaliser: 0x012C_B4E0,
    fields: &[
        (0x64, ManagedField::array(0x01D2_E6D8)),
        (0xC8, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_012c7e40` at `0x012C7E40`, in 3 copies.
///
/// Managed fields at 0x30, 0x48.
pub const RECORD_AT_012C7E40: ManagedLayout = ManagedLayout {
    finaliser: 0x012C_7E40,
    fields: &[
        (0x30, ManagedField::Texts(3)),
        (0x48, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_0129da60` at `0x0129DA60`, in 3 copies.
///
/// Managed fields at 0x32.
pub const RECORD_AT_0129DA60: ManagedLayout = ManagedLayout {
    finaliser: 0x0129_DA60,
    fields: &[(0x32, ManagedField::array(0x01D0_BA10))],
};

/// Recovered from Ghidra function `FUN_01296aa0` at `0x01296AA0`, in 3 copies.
///
/// Managed fields at 0x40, 0x80.
pub const RECORD_AT_01296AA0: ManagedLayout = ManagedLayout {
    finaliser: 0x0129_6AA0,
    fields: &[
        (0x40, ManagedField::Texts(4)),
        (0x80, ManagedField::Interface),
    ],
};

/// Recovered from Ghidra function `FUN_01276c70` at `0x01276C70`, in 3 copies.
///
/// Managed fields at 0x38, 0x70.
pub const RECORD_AT_01276C70: ManagedLayout = ManagedLayout {
    finaliser: 0x0127_6C70,
    fields: &[
        (0x38, ManagedField::Interface),
        (0x70, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01233e60` at `0x01233E60`, in 3 copies.
///
/// Managed fields at 0x38, 0x40.
pub const RECORD_AT_01233E60: ManagedLayout = ManagedLayout {
    finaliser: 0x0123_3E60,
    fields: &[
        (0x38, ManagedField::Texts(1)),
        (0x40, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_0122f650` at `0x0122F650`, in 3 copies.
///
/// Managed fields at 0x28, 0x58.
pub const RECORD_AT_0122F650: ManagedLayout = ManagedLayout {
    finaliser: 0x0122_F650,
    fields: &[
        (0x28, ManagedField::Texts(5)),
        (0x58, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_0122d450` at `0x0122D450`, in 3 copies.
///
/// Managed fields at 0x30, 0x38, 0x40, 0x48.
pub const RECORD_AT_0122D450: ManagedLayout = ManagedLayout {
    finaliser: 0x0122_D450,
    fields: &[
        (0x30, ManagedField::Texts(1)),
        (0x38, ManagedField::Texts(1)),
        (0x40, ManagedField::Texts(1)),
        (0x48, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01220f40` at `0x01220F40`, in 3 copies.
///
/// Managed fields at 0x40, 0x48, 0x50, 0x58.
pub const RECORD_AT_01220F40: ManagedLayout = ManagedLayout {
    finaliser: 0x0122_0F40,
    fields: &[
        (0x40, ManagedField::Texts(1)),
        (0x48, ManagedField::Texts(1)),
        (0x50, ManagedField::Texts(1)),
        (0x58, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01186e10` at `0x01186E10`, in 3 copies.
///
/// Managed fields at 0x48, 0x80.
pub const RECORD_AT_01186E10: ManagedLayout = ManagedLayout {
    finaliser: 0x0118_6E10,
    fields: &[
        (0x48, ManagedField::Texts(1)),
        (0x80, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_011564f0` at `0x011564F0`, in 3 copies.
///
/// Managed fields at 0x20, 0x50.
pub const RECORD_AT_011564F0: ManagedLayout = ManagedLayout {
    finaliser: 0x0115_64F0,
    fields: &[
        (0x20, ManagedField::Texts(1)),
        (0x50, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_0113b810` at `0x0113B810`, in 3 copies.
///
/// Managed fields at 0x40, 0x48, 0x50, 0xB8, 0xE0, 0x1E8.
pub const RECORD_AT_0113B810: ManagedLayout = ManagedLayout {
    finaliser: 0x0113_B810,
    fields: &[
        (0x40, ManagedField::Texts(1)),
        (0x48, ManagedField::Texts(1)),
        (0x50, ManagedField::Texts(2)),
        (0xB8, ManagedField::OtherStrings(4)),
        (0xE0, ManagedField::Texts(1)),
        (0x1E8, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01130d50` at `0x01130D50`, in 3 copies.
///
/// Managed fields at 0x38, 0x98.
pub const RECORD_AT_01130D50: ManagedLayout = ManagedLayout {
    finaliser: 0x0113_0D50,
    fields: &[
        (0x38, ManagedField::Texts(2)),
        (0x98, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01127ac0` at `0x01127AC0`, in 3 copies.
///
/// Managed fields at 0x30, 0x40, 0x48, 0x58.
pub const RECORD_AT_01127AC0: ManagedLayout = ManagedLayout {
    finaliser: 0x0112_7AC0,
    fields: &[
        (0x30, ManagedField::Texts(2)),
        (0x40, ManagedField::Texts(1)),
        (0x48, ManagedField::Texts(1)),
        (0x58, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_010c1420` at `0x010C1420`, in 3 copies.
///
/// Managed fields at 0x150, 0x168.
pub const RECORD_AT_010C1420: ManagedLayout = ManagedLayout {
    finaliser: 0x010C_1420,
    fields: &[
        (0x150, ManagedField::Texts(1)),
        (0x168, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_010ae2c0` at `0x010AE2C0`, in 3 copies.
///
/// Managed fields at 0x20, 0x30.
pub const RECORD_AT_010AE2C0: ManagedLayout = ManagedLayout {
    finaliser: 0x010A_E2C0,
    fields: &[
        (0x20, ManagedField::Texts(1)),
        (0x30, ManagedField::Texts(3)),
    ],
};

/// Recovered from Ghidra function `FUN_010ae0b0` at `0x010AE0B0`, in 3 copies.
///
/// Managed fields at 0x38, 0x70.
pub const RECORD_AT_010AE0B0: ManagedLayout = ManagedLayout {
    finaliser: 0x010A_E0B0,
    fields: &[
        (0x38, ManagedField::Texts(2)),
        (0x70, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_0108cd90` at `0x0108CD90`, in 3 copies.
///
/// Managed fields at 0x20, 0x38.
pub const RECORD_AT_0108CD90: ManagedLayout = ManagedLayout {
    finaliser: 0x0108_CD90,
    fields: &[
        (0x20, ManagedField::Texts(2)),
        (0x38, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_0107d470` at `0x0107D470`, in 3 copies.
///
/// Managed fields at 0x40, 0x58, 0x88, 0x98.
pub const RECORD_AT_0107D470: ManagedLayout = ManagedLayout {
    finaliser: 0x0107_D470,
    fields: &[
        (0x40, ManagedField::Texts(2)),
        (0x58, ManagedField::Texts(1)),
        (0x88, ManagedField::Texts(1)),
        (0x98, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_0107a680` at `0x0107A680`, in 3 copies.
///
/// Managed fields at 0x30, 0x98.
pub const RECORD_AT_0107A680: ManagedLayout = ManagedLayout {
    finaliser: 0x0107_A680,
    fields: &[
        (0x30, ManagedField::Texts(6)),
        (0x98, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_0105a480` at `0x0105A480`, in 3 copies.
///
/// Managed fields at 0x38, 0x48, 0x70.
pub const RECORD_AT_0105A480: ManagedLayout = ManagedLayout {
    finaliser: 0x0105_A480,
    fields: &[
        (0x38, ManagedField::Texts(1)),
        (0x48, ManagedField::Texts(1)),
        (0x70, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01051480` at `0x01051480`, in 3 copies.
///
/// Managed fields at 0x28, 0x58, 0x68.
pub const RECORD_AT_01051480: ManagedLayout = ManagedLayout {
    finaliser: 0x0105_1480,
    fields: &[
        (0x28, ManagedField::Texts(2)),
        (0x58, ManagedField::Texts(1)),
        (0x68, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_010508a0` at `0x010508A0`, in 3 copies.
///
/// Managed fields at 0x30, 0x48, 0x78.
pub const RECORD_AT_010508A0: ManagedLayout = ManagedLayout {
    finaliser: 0x0105_08A0,
    fields: &[
        (0x30, ManagedField::Texts(2)),
        (0x48, ManagedField::Texts(1)),
        (0x78, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_010497f0` at `0x010497F0`, in 3 copies.
///
/// Managed fields at 0x40, 0x58.
pub const RECORD_AT_010497F0: ManagedLayout = ManagedLayout {
    finaliser: 0x0104_97F0,
    fields: &[
        (0x40, ManagedField::Texts(3)),
        (0x58, ManagedField::OtherStrings(1)),
    ],
};

/// Recovered from Ghidra function `FUN_01039330` at `0x01039330`, in 3 copies.
///
/// Managed fields at 0x38, 0xC8.
pub const RECORD_AT_01039330: ManagedLayout = ManagedLayout {
    finaliser: 0x0103_9330,
    fields: &[
        (0x38, ManagedField::Texts(17)),
        (0xC8, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00ffb2d0` at `0x00FFB2D0`, in 3 copies.
///
/// Managed fields at 0x58, 0x88.
pub const RECORD_AT_00FFB2D0: ManagedLayout = ManagedLayout {
    finaliser: 0x00FF_B2D0,
    fields: &[
        (0x58, ManagedField::Texts(5)),
        (0x88, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00ff1180` at `0x00FF1180`, in 3 copies.
///
/// Managed fields at 0x28, 0x38.
pub const RECORD_AT_00FF1180: ManagedLayout = ManagedLayout {
    finaliser: 0x00FF_1180,
    fields: &[
        (0x28, ManagedField::Texts(1)),
        (0x38, ManagedField::array(0x00F6_8330)),
    ],
};

/// Recovered from Ghidra function `FUN_00fcb910` at `0x00FCB910`, in 3 copies.
///
/// Managed fields at 0x38, 0x80.
pub const RECORD_AT_00FCB910: ManagedLayout = ManagedLayout {
    finaliser: 0x00FC_B910,
    fields: &[
        (0x38, ManagedField::Texts(4)),
        (0x80, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_00fc7fd0` at `0x00FC7FD0`, in 3 copies.
///
/// Managed fields at 0x38, 0x48.
pub const RECORD_AT_00FC7FD0: ManagedLayout = ManagedLayout {
    finaliser: 0x00FC_7FD0,
    fields: &[
        (0x38, ManagedField::Texts(2)),
        (0x48, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00fb20a0` at `0x00FB20A0`, in 3 copies.
///
/// Managed fields at 0x38, 0x48, 0x50.
pub const RECORD_AT_00FB20A0: ManagedLayout = ManagedLayout {
    finaliser: 0x00FB_20A0,
    fields: &[
        (0x38, ManagedField::Texts(2)),
        (0x48, ManagedField::Texts(1)),
        (0x50, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_00fa5200` at `0x00FA5200`, in 3 copies.
///
/// Managed fields at 0x30, 0x68.
pub const RECORD_AT_00FA5200: ManagedLayout = ManagedLayout {
    finaliser: 0x00FA_5200,
    fields: &[
        (0x30, ManagedField::Texts(3)),
        (0x68, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00fa39d0` at `0x00FA39D0`, in 3 copies.
///
/// Managed fields at 0x38, 0x48, 0x60, 0x70, 0x88, 0x98, 0xB0, 0xC0, 0xD8, 0xE8, 0x100, 0x110.
pub const RECORD_AT_00FA39D0: ManagedLayout = ManagedLayout {
    finaliser: 0x00FA_39D0,
    fields: &[
        (0x38, ManagedField::Texts(2)),
        (0x48, ManagedField::Texts(3)),
        (0x60, ManagedField::Texts(2)),
        (0x70, ManagedField::Texts(3)),
        (0x88, ManagedField::Texts(2)),
        (0x98, ManagedField::Texts(3)),
        (0xB0, ManagedField::Texts(2)),
        (0xC0, ManagedField::Texts(3)),
        (0xD8, ManagedField::Texts(2)),
        (0xE8, ManagedField::Texts(3)),
        (0x100, ManagedField::Texts(2)),
        (0x110, ManagedField::Texts(3)),
    ],
};

/// Recovered from Ghidra function `FUN_00f92d00` at `0x00F92D00`, in 3 copies.
///
/// Managed fields at 0x38, 0x48, 0x58, 0x68, 0x88, 0x98.
pub const RECORD_AT_00F92D00: ManagedLayout = ManagedLayout {
    finaliser: 0x00F9_2D00,
    fields: &[
        (0x38, ManagedField::Texts(2)),
        (0x48, ManagedField::Texts(2)),
        (0x58, ManagedField::Texts(2)),
        (0x68, ManagedField::Texts(4)),
        (0x88, ManagedField::Texts(2)),
        (0x98, ManagedField::Texts(6)),
    ],
};

/// Recovered from Ghidra function `FUN_00f5f3b0` at `0x00F5F3B0`, in 3 copies.
///
/// Managed fields at 0x42.
pub const RECORD_AT_00F5F3B0: ManagedLayout = ManagedLayout {
    finaliser: 0x00F5_F3B0,
    fields: &[(0x42, ManagedField::array(0x01D0_BA10))],
};

/// Recovered from Ghidra function `FUN_00f4fa90` at `0x00F4FA90`, in 3 copies.
///
/// Managed fields at 0x60, 0xA8.
pub const RECORD_AT_00F4FA90: ManagedLayout = ManagedLayout {
    finaliser: 0x00F4_FA90,
    fields: &[
        (0x60, ManagedField::Texts(4)),
        (0xA8, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00f4b310` at `0x00F4B310`, in 3 copies.
///
/// Managed fields at 0x40, 0xC0.
pub const RECORD_AT_00F4B310: ManagedLayout = ManagedLayout {
    finaliser: 0x00F4_B310,
    fields: &[
        (0x40, ManagedField::Texts(8)),
        (0xC0, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00f1c560` at `0x00F1C560`, in 3 copies.
///
/// Managed fields at 0x68, 0xA0.
pub const RECORD_AT_00F1C560: ManagedLayout = ManagedLayout {
    finaliser: 0x00F1_C560,
    fields: &[
        (0x68, ManagedField::Texts(1)),
        (0xA0, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00f05250` at `0x00F05250`, in 3 copies.
///
/// Managed fields at 0x50, 0x68.
pub const RECORD_AT_00F05250: ManagedLayout = ManagedLayout {
    finaliser: 0x00F0_5250,
    fields: &[
        (0x50, ManagedField::Texts(3)),
        (0x68, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00ed5820` at `0x00ED5820`, in 3 copies.
///
/// Managed fields at 0x30, 0x58.
pub const RECORD_AT_00ED5820: ManagedLayout = ManagedLayout {
    finaliser: 0x00ED_5820,
    fields: &[
        (0x30, ManagedField::Texts(3)),
        (0x58, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00ed4850` at `0x00ED4850`, in 3 copies.
///
/// Managed fields at 0x38, 0x48, 0x80.
pub const RECORD_AT_00ED4850: ManagedLayout = ManagedLayout {
    finaliser: 0x00ED_4850,
    fields: &[
        (0x38, ManagedField::Texts(1)),
        (0x48, ManagedField::Texts(1)),
        (0x80, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00ecd0b0` at `0x00ECD0B0`, in 3 copies.
///
/// Managed fields at 0x38, 0x68.
pub const RECORD_AT_00ECD0B0: ManagedLayout = ManagedLayout {
    finaliser: 0x00EC_D0B0,
    fields: &[
        (0x38, ManagedField::Texts(5)),
        (0x68, ManagedField::Texts(3)),
    ],
};

/// Recovered from Ghidra function `FUN_00ec8910` at `0x00EC8910`, in 3 copies.
///
/// Managed fields at 0x38, 0x40, 0x48, 0x58.
pub const RECORD_AT_00EC8910: ManagedLayout = ManagedLayout {
    finaliser: 0x00EC_8910,
    fields: &[
        (0x38, ManagedField::Texts(1)),
        (0x40, ManagedField::Texts(1)),
        (0x48, ManagedField::Texts(1)),
        (0x58, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00ec8050` at `0x00EC8050`, in 3 copies.
///
/// Managed fields at 0x58, 0x60, 0x68, 0x70, 0x78.
pub const RECORD_AT_00EC8050: ManagedLayout = ManagedLayout {
    finaliser: 0x00EC_8050,
    fields: &[
        (0x58, ManagedField::Texts(1)),
        (0x60, ManagedField::Texts(1)),
        (0x68, ManagedField::Texts(1)),
        (0x70, ManagedField::Texts(1)),
        (0x78, ManagedField::Texts(3)),
    ],
};

/// Recovered from Ghidra function `FUN_00ec7ce0` at `0x00EC7CE0`, in 3 copies.
///
/// Managed fields at 0x48, 0x70.
pub const RECORD_AT_00EC7CE0: ManagedLayout = ManagedLayout {
    finaliser: 0x00EC_7CE0,
    fields: &[
        (0x48, ManagedField::Texts(3)),
        (0x70, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_00ec4d20` at `0x00EC4D20`, in 3 copies.
///
/// Managed fields at 0x38, 0x78, 0x98.
pub const RECORD_AT_00EC4D20: ManagedLayout = ManagedLayout {
    finaliser: 0x00EC_4D20,
    fields: &[
        (0x38, ManagedField::Texts(6)),
        (0x78, ManagedField::Texts(3)),
        (0x98, ManagedField::Texts(3)),
    ],
};

/// Recovered from Ghidra function `FUN_00eb9d60` at `0x00EB9D60`, in 3 copies.
///
/// Managed fields at 0x38, 0x90.
pub const RECORD_AT_00EB9D60: ManagedLayout = ManagedLayout {
    finaliser: 0x00EB_9D60,
    fields: &[
        (0x38, ManagedField::Texts(3)),
        (0x90, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00eab2f0` at `0x00EAB2F0`, in 3 copies.
///
/// Managed fields at 0x28, 0x68.
pub const RECORD_AT_00EAB2F0: ManagedLayout = ManagedLayout {
    finaliser: 0x00EA_B2F0,
    fields: &[
        (0x28, ManagedField::Texts(3)),
        (0x68, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00ea9260` at `0x00EA9260`, in 3 copies.
///
/// Managed fields at 0x58.
pub const RECORD_AT_00EA9260: ManagedLayout = ManagedLayout {
    finaliser: 0x00EA_9260,
    fields: &[(0x58, ManagedField::array(0x00EA_5F80))],
};

/// Recovered from Ghidra function `FUN_00ea88f0` at `0x00EA88F0`, in 3 copies.
///
/// Managed fields at 0x38, 0x48.
pub const RECORD_AT_00EA88F0: ManagedLayout = ManagedLayout {
    finaliser: 0x00EA_88F0,
    fields: &[
        (0x38, ManagedField::array(0x00EA_5BE0)),
        (0x48, ManagedField::array(0x00EA_5F80)),
    ],
};

/// Recovered from Ghidra function `FUN_00ea7e60` at `0x00EA7E60`, in 3 copies.
///
/// Managed fields at 0x48, 0x78.
pub const RECORD_AT_00EA7E60: ManagedLayout = ManagedLayout {
    finaliser: 0x00EA_7E60,
    fields: &[
        (0x48, ManagedField::array(0x00EA_5AE8)),
        (0x78, ManagedField::array(0x00EA_5F80)),
    ],
};

/// Recovered from Ghidra function `FUN_00d8a9c0` at `0x00D8A9C0`, in 3 copies.
///
/// Managed fields at 0x48.
pub const RECORD_AT_00D8A9C0: ManagedLayout = ManagedLayout {
    finaliser: 0x00D8_A9C0,
    fields: &[(0x48, ManagedField::array(0x00D6_23C8))],
};

/// Recovered from Ghidra function `FUN_00d893c0` at `0x00D893C0`, in 3 copies.
///
/// Managed fields at 0x58.
pub const RECORD_AT_00D893C0: ManagedLayout = ManagedLayout {
    finaliser: 0x00D8_93C0,
    fields: &[(0x58, ManagedField::array(0x00D6_23C8))],
};

/// Recovered from Ghidra function `FUN_00d85980` at `0x00D85980`, in 3 copies.
///
/// Managed fields at 0x68.
pub const RECORD_AT_00D85980: ManagedLayout = ManagedLayout {
    finaliser: 0x00D8_5980,
    fields: &[(0x68, ManagedField::array(0x00D6_27E8))],
};

/// Recovered from Ghidra function `FUN_00d850e0` at `0x00D850E0`, in 3 copies.
///
/// Managed fields at 0x48.
pub const RECORD_AT_00D850E0: ManagedLayout = ManagedLayout {
    finaliser: 0x00D8_50E0,
    fields: &[(0x48, ManagedField::array(0x00D6_27E8))],
};

/// Recovered from Ghidra function `FUN_00d80a40` at `0x00D80A40`, in 3 copies.
///
/// Managed fields at 0x58.
pub const RECORD_AT_00D80A40: ManagedLayout = ManagedLayout {
    finaliser: 0x00D8_0A40,
    fields: &[(0x58, ManagedField::array(0x00D6_27E8))],
};

/// Recovered from Ghidra function `FUN_00d22a20` at `0x00D22A20`, in 3 copies.
///
/// Managed fields at 0x40, 0x48, 0x60.
pub const RECORD_AT_00D22A20: ManagedLayout = ManagedLayout {
    finaliser: 0x00D2_2A20,
    fields: &[
        (0x40, ManagedField::OtherStrings(1)),
        (0x48, ManagedField::Texts(1)),
        (0x60, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_00d0d0e0` at `0x00D0D0E0`, in 3 copies.
///
/// Managed fields at 0x38, 0x48, 0x50, 0x68.
pub const RECORD_AT_00D0D0E0: ManagedLayout = ManagedLayout {
    finaliser: 0x00D0_D0E0,
    fields: &[
        (0x38, ManagedField::Texts(2)),
        (0x48, ManagedField::OtherStrings(1)),
        (0x50, ManagedField::Texts(2)),
        (0x68, ManagedField::OtherStrings(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00d0cea0` at `0x00D0CEA0`, in 3 copies.
///
/// Managed fields at 0x50, 0x88.
pub const RECORD_AT_00D0CEA0: ManagedLayout = ManagedLayout {
    finaliser: 0x00D0_CEA0,
    fields: &[
        (0x50, ManagedField::Texts(6)),
        (0x88, ManagedField::OtherStrings(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00d05d60` at `0x00D05D60`, in 3 copies.
///
/// Managed fields at 0x40, 0x70.
pub const RECORD_AT_00D05D60: ManagedLayout = ManagedLayout {
    finaliser: 0x00D0_5D60,
    fields: &[
        (0x40, ManagedField::Texts(4)),
        (0x70, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00cdcd60` at `0x00CDCD60`, in 3 copies.
///
/// Managed fields at 0x28.
pub const RECORD_AT_00CDCD60: ManagedLayout = ManagedLayout {
    finaliser: 0x00CD_CD60,
    fields: &[(0x28, ManagedField::typed(0x0086_E978))],
};

/// Recovered from Ghidra function `FUN_00cd75f0` at `0x00CD75F0`, in 3 copies.
///
/// Managed fields at 0x48, 0x50, 0x68.
pub const RECORD_AT_00CD75F0: ManagedLayout = ManagedLayout {
    finaliser: 0x00CD_75F0,
    fields: &[
        (0x48, ManagedField::Texts(1)),
        (0x50, ManagedField::OtherStrings(1)),
        (0x68, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00cd6e90` at `0x00CD6E90`, in 3 copies.
///
/// Managed fields at 0x60, 0x78.
pub const RECORD_AT_00CD6E90: ManagedLayout = ManagedLayout {
    finaliser: 0x00CD_6E90,
    fields: &[
        (0x60, ManagedField::OtherStrings(1)),
        (0x78, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00cd1400` at `0x00CD1400`, in 3 copies.
///
/// Managed fields at 0x80, 0xC0, 0xC8.
pub const RECORD_AT_00CD1400: ManagedLayout = ManagedLayout {
    finaliser: 0x00CD_1400,
    fields: &[
        (0x80, ManagedField::Texts(8)),
        (0xC0, ManagedField::Interface),
        (0xC8, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00cceb00` at `0x00CCEB00`, in 3 copies.
///
/// Managed fields at 0x48, 0x68.
pub const RECORD_AT_00CCEB00: ManagedLayout = ManagedLayout {
    finaliser: 0x00CC_EB00,
    fields: &[
        (0x48, ManagedField::Texts(2)),
        (0x68, ManagedField::Texts(3)),
    ],
};

/// Recovered from Ghidra function `FUN_00cc59c0` at `0x00CC59C0`, in 3 copies.
///
/// Managed fields at 0x40, 0x58, 0xA8.
pub const RECORD_AT_00CC59C0: ManagedLayout = ManagedLayout {
    finaliser: 0x00CC_59C0,
    fields: &[
        (0x40, ManagedField::Texts(2)),
        (0x58, ManagedField::typed(0x0086_E978)),
        (0xA8, ManagedField::Interface),
    ],
};

/// Recovered from Ghidra function `FUN_00cbdd90` at `0x00CBDD90`, in 3 copies.
///
/// Managed fields at 0x70, 0x80.
pub const RECORD_AT_00CBDD90: ManagedLayout = ManagedLayout {
    finaliser: 0x00CB_DD90,
    fields: &[
        (0x70, ManagedField::Texts(1)),
        (0x80, ManagedField::Interface),
    ],
};

/// Recovered from Ghidra function `FUN_00caeda0` at `0x00CAEDA0`, in 3 copies.
///
/// Managed fields at 0x38, 0x70.
pub const RECORD_AT_00CAEDA0: ManagedLayout = ManagedLayout {
    finaliser: 0x00CA_EDA0,
    fields: &[
        (0x38, ManagedField::Texts(1)),
        (0x70, ManagedField::Interface),
    ],
};

/// Recovered from Ghidra function `FUN_00c9cba0` at `0x00C9CBA0`, in 3 copies.
///
/// Managed fields at 0x30, 0x60.
pub const RECORD_AT_00C9CBA0: ManagedLayout = ManagedLayout {
    finaliser: 0x00C9_CBA0,
    fields: &[
        (0x30, ManagedField::Texts(4)),
        (0x60, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_00c8b9d0` at `0x00C8B9D0`, in 3 copies.
///
/// Managed fields at 0x38, 0x60.
pub const RECORD_AT_00C8B9D0: ManagedLayout = ManagedLayout {
    finaliser: 0x00C8_B9D0,
    fields: &[
        (0x38, ManagedField::typed(0x0086_E978)),
        (0x60, ManagedField::Interface),
    ],
};

/// Recovered from Ghidra function `FUN_00c834a0` at `0x00C834A0`, in 3 copies.
///
/// Managed fields at 0x60, 0xB8.
pub const RECORD_AT_00C834A0: ManagedLayout = ManagedLayout {
    finaliser: 0x00C8_34A0,
    fields: &[
        (0x60, ManagedField::Texts(2)),
        (0xB8, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_00c81da0` at `0x00C81DA0`, in 3 copies.
///
/// Managed fields at 0x38, 0x98.
pub const RECORD_AT_00C81DA0: ManagedLayout = ManagedLayout {
    finaliser: 0x00C8_1DA0,
    fields: &[
        (0x38, ManagedField::Texts(10)),
        (0x98, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00c7bd80` at `0x00C7BD80`, in 3 copies.
///
/// Managed fields at 0x28, 0x58.
pub const RECORD_AT_00C7BD80: ManagedLayout = ManagedLayout {
    finaliser: 0x00C7_BD80,
    fields: &[
        (0x28, ManagedField::Interface),
        (0x58, ManagedField::Interface),
    ],
};

/// Recovered from Ghidra function `FUN_00c538f0` at `0x00C538F0`, in 3 copies.
///
/// Managed fields at 0x30, 0x48, 0x70.
pub const RECORD_AT_00C538F0: ManagedLayout = ManagedLayout {
    finaliser: 0x00C5_38F0,
    fields: &[
        (0x30, ManagedField::Texts(2)),
        (0x48, ManagedField::Texts(1)),
        (0x70, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00c36fd0` at `0x00C36FD0`, in 3 copies.
///
/// Managed fields at 0x30, 0x88.
pub const RECORD_AT_00C36FD0: ManagedLayout = ManagedLayout {
    finaliser: 0x00C3_6FD0,
    fields: &[
        (0x30, ManagedField::Texts(10)),
        (0x88, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00c1a540` at `0x00C1A540`, in 3 copies.
///
/// Managed fields at 0x38, 0x48.
pub const RECORD_AT_00C1A540: ManagedLayout = ManagedLayout {
    finaliser: 0x00C1_A540,
    fields: &[
        (0x38, ManagedField::Texts(1)),
        (0x48, ManagedField::OtherStrings(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00bf78a0` at `0x00BF78A0`, in 3 copies.
///
/// Managed fields at 0x68, 0x78, 0xB8.
pub const RECORD_AT_00BF78A0: ManagedLayout = ManagedLayout {
    finaliser: 0x00BF_78A0,
    fields: &[
        (0x68, ManagedField::Texts(1)),
        (0x78, ManagedField::Texts(1)),
        (0xB8, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00b930a0` at `0x00B930A0`, in 3 copies.
///
/// Managed fields at 0x30, 0x88.
pub const RECORD_AT_00B930A0: ManagedLayout = ManagedLayout {
    finaliser: 0x00B9_30A0,
    fields: &[
        (0x30, ManagedField::Texts(8)),
        (0x88, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00b91e10` at `0x00B91E10`, in 3 copies.
///
/// Managed fields at 0x28, 0x148, 0x190.
pub const RECORD_AT_00B91E10: ManagedLayout = ManagedLayout {
    finaliser: 0x00B9_1E10,
    fields: &[
        (0x28, ManagedField::Texts(1)),
        (0x148, ManagedField::Texts(2)),
        (0x190, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00b8f2a0` at `0x00B8F2A0`, in 3 copies.
///
/// Managed fields at 0x28, 0x60, 0x80.
pub const RECORD_AT_00B8F2A0: ManagedLayout = ManagedLayout {
    finaliser: 0x00B8_F2A0,
    fields: &[
        (0x28, ManagedField::Texts(2)),
        (0x60, ManagedField::Texts(2)),
        (0x80, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00b8d1d0` at `0x00B8D1D0`, in 3 copies.
///
/// Managed fields at 0x38, 0x40, 0x58.
pub const RECORD_AT_00B8D1D0: ManagedLayout = ManagedLayout {
    finaliser: 0x00B8_D1D0,
    fields: &[
        (0x38, ManagedField::Texts(1)),
        (0x40, ManagedField::Texts(2)),
        (0x58, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00b17b70` at `0x00B17B70`, in 3 copies.
///
/// Managed fields at 0x40, 0x128.
pub const RECORD_AT_00B17B70: ManagedLayout = ManagedLayout {
    finaliser: 0x00B1_7B70,
    fields: &[
        (0x40, ManagedField::Interface),
        (0x128, ManagedField::OtherStrings(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00b0b540` at `0x00B0B540`, in 3 copies.
///
/// Managed fields at 0x38, 0x88.
pub const RECORD_AT_00B0B540: ManagedLayout = ManagedLayout {
    finaliser: 0x00B0_B540,
    fields: &[
        (0x38, ManagedField::Texts(1)),
        (0x88, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00afc640` at `0x00AFC640`, in 3 copies.
///
/// Managed fields at 0x58, 0x78.
pub const RECORD_AT_00AFC640: ManagedLayout = ManagedLayout {
    finaliser: 0x00AF_C640,
    fields: &[
        (0x58, ManagedField::Texts(1)),
        (0x78, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00af45f0` at `0x00AF45F0`, in 3 copies.
///
/// Managed fields at 0x50, 0x98.
pub const RECORD_AT_00AF45F0: ManagedLayout = ManagedLayout {
    finaliser: 0x00AF_45F0,
    fields: &[
        (0x50, ManagedField::Texts(1)),
        (0x98, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00ad2f90` at `0x00AD2F90`, in 3 copies.
///
/// Managed fields at 0x50, 0x68.
pub const RECORD_AT_00AD2F90: ManagedLayout = ManagedLayout {
    finaliser: 0x00AD_2F90,
    fields: &[
        (0x50, ManagedField::Texts(1)),
        (0x68, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_00ac2630` at `0x00AC2630`, in 3 copies.
///
/// Managed fields at 0x68, 0x80.
pub const RECORD_AT_00AC2630: ManagedLayout = ManagedLayout {
    finaliser: 0x00AC_2630,
    fields: &[
        (0x68, ManagedField::Texts(1)),
        (0x80, ManagedField::Texts(2)),
    ],
};

/// Recovered from Ghidra function `FUN_00ac1320` at `0x00AC1320`, in 3 copies.
///
/// Managed fields at 0x38.
pub const RECORD_AT_00AC1320: ManagedLayout = ManagedLayout {
    finaliser: 0x00AC_1320,
    fields: &[(0x38, ManagedField::elements(0x0040_13D8, 4))],
};

/// Recovered from Ghidra function `FUN_00a5b9b0` at `0x00A5B9B0`, in 3 copies.
///
/// Managed fields at 0x28, 0x48, 0x78.
pub const RECORD_AT_00A5B9B0: ManagedLayout = ManagedLayout {
    finaliser: 0x00A5_B9B0,
    fields: &[
        (0x28, ManagedField::Texts(3)),
        (0x48, ManagedField::Texts(1)),
        (0x78, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00a55100` at `0x00A55100`, in 3 copies.
///
/// Managed fields at 0x48.
pub const RECORD_AT_00A55100: ManagedLayout = ManagedLayout {
    finaliser: 0x00A5_5100,
    fields: &[(0x48, ManagedField::elements(0x0040_13D8, 3))],
};

/// Recovered from Ghidra function `FUN_00a04f40` at `0x00A04F40`, in 3 copies.
///
/// Managed fields at 0x28, 0x38.
pub const RECORD_AT_00A04F40: ManagedLayout = ManagedLayout {
    finaliser: 0x00A0_4F40,
    fields: &[
        (0x28, ManagedField::OtherStrings(1)),
        (0x38, ManagedField::OtherStrings(1)),
    ],
};

/// Recovered from Ghidra function `FUN_009e3130` at `0x009E3130`, in 3 copies.
///
/// Managed fields at 0x30, 0x58.
pub const RECORD_AT_009E3130: ManagedLayout = ManagedLayout {
    finaliser: 0x009E_3130,
    fields: &[
        (0x30, ManagedField::typed(0x0040_6578)),
        (0x58, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_009a9170` at `0x009A9170`, in 3 copies.
///
/// Managed fields at 0x50.
pub const RECORD_AT_009A9170: ManagedLayout = ManagedLayout {
    finaliser: 0x009A_9170,
    fields: &[(0x50, ManagedField::elements(0x0094_27F8, 2))],
};

/// Recovered from Ghidra function `FUN_00985b30` at `0x00985B30`, in 3 copies.
///
/// Managed fields at 0x20, 0x60.
pub const RECORD_AT_00985B30: ManagedLayout = ManagedLayout {
    finaliser: 0x0098_5B30,
    fields: &[
        (0x20, ManagedField::Texts(1)),
        (0x60, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_0089c560` at `0x0089C560`, in 3 copies.
///
/// Managed fields at 0x30, 0x78.
pub const RECORD_AT_0089C560: ManagedLayout = ManagedLayout {
    finaliser: 0x0089_C560,
    fields: &[
        (0x30, ManagedField::Texts(4)),
        (0x78, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00889f80` at `0x00889F80`, in 3 copies.
///
/// Managed fields at 0x80, 0x98.
pub const RECORD_AT_00889F80: ManagedLayout = ManagedLayout {
    finaliser: 0x0088_9F80,
    fields: &[
        (0x80, ManagedField::Texts(1)),
        (0x98, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00878850` at `0x00878850`, in 3 copies.
///
/// Managed fields at 0x58, 0x88.
pub const RECORD_AT_00878850: ManagedLayout = ManagedLayout {
    finaliser: 0x0087_8850,
    fields: &[
        (0x58, ManagedField::typed(0x0086_E978)),
        (0x88, ManagedField::Interface),
    ],
};

/// Recovered from Ghidra function `FUN_00835fe0` at `0x00835FE0`, in 3 copies.
///
/// Managed fields at 0x50, 0x90.
pub const RECORD_AT_00835FE0: ManagedLayout = ManagedLayout {
    finaliser: 0x0083_5FE0,
    fields: &[
        (0x50, ManagedField::Texts(2)),
        (0x90, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_008320b0` at `0x008320B0`, in 3 copies.
///
/// Managed fields at 0xA8, 0xA0, 0x98.
pub const RECORD_AT_008320B0: ManagedLayout = ManagedLayout {
    finaliser: 0x0083_20B0,
    fields: &[
        (0xA8, ManagedField::Texts(1)),
        (0xA0, ManagedField::Texts(1)),
        (0x98, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_007e6010` at `0x007E6010`, in 3 copies.
///
/// Managed fields at 0x28, 0x68.
pub const RECORD_AT_007E6010: ManagedLayout = ManagedLayout {
    finaliser: 0x007E_6010,
    fields: &[
        (0x28, ManagedField::Texts(2)),
        (0x68, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_007e4d30` at `0x007E4D30`, in 3 copies.
///
/// Managed fields at 0x28, 0x68, 0xA0, 0xC8.
pub const RECORD_AT_007E4D30: ManagedLayout = ManagedLayout {
    finaliser: 0x007E_4D30,
    fields: &[
        (0x28, ManagedField::Texts(4)),
        (0x68, ManagedField::Texts(3)),
        (0xA0, ManagedField::Texts(1)),
        (0xC8, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00783450` at `0x00783450`, in 3 copies.
///
/// Managed fields at 0x70.
pub const RECORD_AT_00783450: ManagedLayout = ManagedLayout {
    finaliser: 0x0078_3450,
    fields: &[(0x70, ManagedField::array(0x0076_F818))],
};

/// Recovered from Ghidra function `FUN_007813f0` at `0x007813F0`, in 3 copies.
///
/// Managed fields at 0xB0.
pub const RECORD_AT_007813F0: ManagedLayout = ManagedLayout {
    finaliser: 0x0078_13F0,
    fields: &[(0xB0, ManagedField::array(0x0075_CB10))],
};

/// Recovered from Ghidra function `FUN_00781030` at `0x00781030`, in 3 copies.
///
/// Managed fields at 0x70.
pub const RECORD_AT_00781030: ManagedLayout = ManagedLayout {
    finaliser: 0x0078_1030,
    fields: &[(0x70, ManagedField::array(0x0075_CB10))],
};

/// Recovered from Ghidra function `FUN_00780930` at `0x00780930`, in 3 copies.
///
/// Managed fields at 0x80.
pub const RECORD_AT_00780930: ManagedLayout = ManagedLayout {
    finaliser: 0x0078_0930,
    fields: &[(0x80, ManagedField::array(0x0075_CB10))],
};

/// Recovered from Ghidra function `FUN_0072dce0` at `0x0072DCE0`, in 3 copies.
///
/// Managed fields at 0x48, 0x50.
pub const RECORD_AT_0072DCE0: ManagedLayout = ManagedLayout {
    finaliser: 0x0072_DCE0,
    fields: &[
        (0x48, ManagedField::Interface),
        (0x50, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00728a10` at `0x00728A10`, in 3 copies.
///
/// Managed fields at 0x68, 0x60.
pub const RECORD_AT_00728A10: ManagedLayout = ManagedLayout {
    finaliser: 0x0072_8A10,
    fields: &[
        (0x68, ManagedField::Texts(1)),
        (0x60, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00724cc0` at `0x00724CC0`, in 3 copies.
///
/// Managed fields at 0x20, 0x50.
pub const RECORD_AT_00724CC0: ManagedLayout = ManagedLayout {
    finaliser: 0x0072_4CC0,
    fields: &[
        (0x20, ManagedField::Texts(1)),
        (0x50, ManagedField::Texts(3)),
    ],
};

/// Recovered from Ghidra function `FUN_007234e0` at `0x007234E0`, in 3 copies.
///
/// Managed fields at 0x30, 0x40.
pub const RECORD_AT_007234E0: ManagedLayout = ManagedLayout {
    finaliser: 0x0072_34E0,
    fields: &[
        (0x30, ManagedField::Texts(2)),
        (0x40, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_00716570` at `0x00716570`, in 3 copies.
///
/// Managed fields at 0x28, 0x30, 0x50.
pub const RECORD_AT_00716570: ManagedLayout = ManagedLayout {
    finaliser: 0x0071_6570,
    fields: &[
        (0x28, ManagedField::Interface),
        (0x30, ManagedField::Texts(1)),
        (0x50, ManagedField::Interface),
    ],
};

/// Recovered from Ghidra function `FUN_006e7eb0` at `0x006E7EB0`, in 3 copies.
///
/// Managed fields at 0x50.
pub const RECORD_AT_006E7EB0: ManagedLayout = ManagedLayout {
    finaliser: 0x006E_7EB0,
    fields: &[(0x50, ManagedField::typed(0x0040_6578))],
};

/// Recovered from Ghidra function `FUN_006dbef0` at `0x006DBEF0`, in 3 copies.
///
/// Managed fields at 0x48.
pub const RECORD_AT_006DBEF0: ManagedLayout = ManagedLayout {
    finaliser: 0x006D_BEF0,
    fields: &[(0x48, ManagedField::typed(0x0040_66F0))],
};

/// Recovered from Ghidra function `FUN_00689630` at `0x00689630`, in 3 copies.
///
/// Managed fields at 0x28.
pub const RECORD_AT_00689630: ManagedLayout = ManagedLayout {
    finaliser: 0x0068_9630,
    fields: &[(0x28, ManagedField::elements(0x0048_4DC8, 4))],
};

/// Recovered from Ghidra function `FUN_00686e20` at `0x00686E20`, in 3 copies.
///
/// Managed fields at 0x40.
pub const RECORD_AT_00686E20: ManagedLayout = ManagedLayout {
    finaliser: 0x0068_6E20,
    fields: &[(0x40, ManagedField::elements(0x0048_4DC8, 2))],
};

/// Recovered from Ghidra function `FUN_00680e10` at `0x00680E10`, in 3 copies.
///
/// Managed fields at 0x30.
pub const RECORD_AT_00680E10: ManagedLayout = ManagedLayout {
    finaliser: 0x0068_0E10,
    fields: &[(0x30, ManagedField::elements(0x0048_4DC8, 2))],
};

/// Recovered from Ghidra function `FUN_006480a0` at `0x006480A0`, in 3 copies.
///
/// Managed fields at 0x48, 0x40.
pub const RECORD_AT_006480A0: ManagedLayout = ManagedLayout {
    finaliser: 0x0064_80A0,
    fields: &[
        (0x48, ManagedField::Texts(1)),
        (0x40, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_005db610` at `0x005DB610`, in 3 copies.
///
/// Managed fields at 0x50.
pub const RECORD_AT_005DB610: ManagedLayout = ManagedLayout {
    finaliser: 0x005D_B610,
    fields: &[(0x50, ManagedField::array(0x005D_3E40))],
};

/// Recovered from Ghidra function `FUN_005d0b40` at `0x005D0B40`, in 3 copies.
///
/// Managed fields at 0x38, 0x60.
pub const RECORD_AT_005D0B40: ManagedLayout = ManagedLayout {
    finaliser: 0x005D_0B40,
    fields: &[
        (0x38, ManagedField::Texts(2)),
        (0x60, ManagedField::array(0x0043_2B90)),
    ],
};

/// Recovered from Ghidra function `FUN_005c3320` at `0x005C3320`, in 3 copies.
///
/// Managed fields at 0x50.
pub const RECORD_AT_005C3320: ManagedLayout = ManagedLayout {
    finaliser: 0x005C_3320,
    fields: &[(0x50, ManagedField::elements(0x005B_C4E0, 2))],
};

/// Recovered from Ghidra function `FUN_005b8d00` at `0x005B8D00`, in 3 copies.
///
/// Managed fields at 0x38, 0x90.
pub const RECORD_AT_005B8D00: ManagedLayout = ManagedLayout {
    finaliser: 0x005B_8D00,
    fields: &[
        (0x38, ManagedField::Texts(1)),
        (0x90, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_005a1940` at `0x005A1940`, in 3 copies.
///
/// Managed fields at 0x50.
pub const RECORD_AT_005A1940: ManagedLayout = ManagedLayout {
    finaliser: 0x005A_1940,
    fields: &[(0x50, ManagedField::array(0x0059_BD38))],
};

/// Recovered from Ghidra function `FUN_005a1650` at `0x005A1650`, in 3 copies.
///
/// Managed fields at 0x60.
pub const RECORD_AT_005A1650: ManagedLayout = ManagedLayout {
    finaliser: 0x005A_1650,
    fields: &[(0x60, ManagedField::array(0x0059_BD38))],
};

/// Recovered from Ghidra function `FUN_005943c0` at `0x005943C0`, in 3 copies.
///
/// Managed fields at 0x40.
pub const RECORD_AT_005943C0: ManagedLayout = ManagedLayout {
    finaliser: 0x0059_43C0,
    fields: &[(0x40, ManagedField::elements(0x0040_13D8, 2))],
};

/// Recovered from Ghidra function `FUN_005581a0` at `0x005581A0`, in 3 copies.
///
/// Managed fields at 0x48, 0x88.
pub const RECORD_AT_005581A0: ManagedLayout = ManagedLayout {
    finaliser: 0x0055_81A0,
    fields: &[
        (0x48, ManagedField::Texts(7)),
        (0x88, ManagedField::typed(0x0053_1510)),
    ],
};

/// Recovered from Ghidra function `FUN_00557b30` at `0x00557B30`, in 3 copies.
///
/// Managed fields at 0x38.
pub const RECORD_AT_00557B30: ManagedLayout = ManagedLayout {
    finaliser: 0x0055_7B30,
    fields: &[(0x38, ManagedField::typed(0x0053_1510))],
};

/// Recovered from Ghidra function `FUN_00553b00` at `0x00553B00`, in 3 copies.
///
/// Managed fields at 0x38.
pub const RECORD_AT_00553B00: ManagedLayout = ManagedLayout {
    finaliser: 0x0055_3B00,
    fields: &[(0x38, ManagedField::typed(0x0052_F6A0))],
};

/// Recovered from Ghidra function `FUN_00535710` at `0x00535710`, in 3 copies.
///
/// Managed fields at 0x40.
pub const RECORD_AT_00535710: ManagedLayout = ManagedLayout {
    finaliser: 0x0053_5710,
    fields: &[(0x40, ManagedField::elements(0x0052_7BF8, 5))],
};

/// Recovered from Ghidra function `FUN_004fbc80` at `0x004FBC80`, in 3 copies.
///
/// Managed fields at 0x40, 0x48.
pub const RECORD_AT_004FBC80: ManagedLayout = ManagedLayout {
    finaliser: 0x004F_BC80,
    fields: &[
        (0x40, ManagedField::Texts(1)),
        (0x48, ManagedField::Interface),
    ],
};

/// Recovered from Ghidra function `FUN_004dc020` at `0x004DC020`, in 3 copies.
///
/// Managed fields at 0x38.
pub const RECORD_AT_004DC020: ManagedLayout = ManagedLayout {
    finaliser: 0x004D_C020,
    fields: &[(0x38, ManagedField::typed(0x004D_BD78))],
};

/// Recovered from Ghidra function `FUN_004d8cb0` at `0x004D8CB0`, in 3 copies.
///
/// Managed fields at 0x28, 0x30, 0x48.
pub const RECORD_AT_004D8CB0: ManagedLayout = ManagedLayout {
    finaliser: 0x004D_8CB0,
    fields: &[
        (0x28, ManagedField::Texts(1)),
        (0x30, ManagedField::typed(0x0040_6578)),
        (0x48, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_004d8640` at `0x004D8640`, in 3 copies.
///
/// Managed fields at 0x20, 0x38.
pub const RECORD_AT_004D8640: ManagedLayout = ManagedLayout {
    finaliser: 0x004D_8640,
    fields: &[
        (0x20, ManagedField::typed(0x0040_6578)),
        (0x38, ManagedField::Texts(1)),
    ],
};

/// Recovered from Ghidra function `FUN_004d6820` at `0x004D6820`, in 3 copies.
///
/// Managed fields at 0x28.
pub const RECORD_AT_004D6820: ManagedLayout = ManagedLayout {
    finaliser: 0x004D_6820,
    fields: &[(0x28, ManagedField::typed(0x004D_96D8))],
};

/// Recovered from Ghidra function `FUN_004d2090` at `0x004D2090`, in 3 copies.
///
/// Managed fields at 0x28, 0x40.
pub const RECORD_AT_004D2090: ManagedLayout = ManagedLayout {
    finaliser: 0x004D_2090,
    fields: &[
        (0x28, ManagedField::Texts(1)),
        (0x40, ManagedField::OtherStrings(1)),
    ],
};

/// Recovered from Ghidra function `FUN_004c9cd0` at `0x004C9CD0`, in 3 copies.
///
/// Managed fields at 0x30.
pub const RECORD_AT_004C9CD0: ManagedLayout = ManagedLayout {
    finaliser: 0x004C_9CD0,
    fields: &[(0x30, ManagedField::elements(0x0040_6578, 2))],
};

/// Recovered from Ghidra function `FUN_004c0f70` at `0x004C0F70`, in 3 copies.
///
/// Managed fields at 0x48, 0x68.
pub const RECORD_AT_004C0F70: ManagedLayout = ManagedLayout {
    finaliser: 0x004C_0F70,
    fields: &[
        (0x48, ManagedField::Texts(1)),
        (0x68, ManagedField::Interface),
    ],
};

/// Recovered from Ghidra function `FUN_004bebf0` at `0x004BEBF0`, in 3 copies.
///
/// Managed fields at 0x68.
pub const RECORD_AT_004BEBF0: ManagedLayout = ManagedLayout {
    finaliser: 0x004B_EBF0,
    fields: &[(0x68, ManagedField::typed(0x0040_6578))],
};

/// Recovered from Ghidra function `FUN_004b5810` at `0x004B5810`, in 3 copies.
///
/// Managed fields at 0x38.
pub const RECORD_AT_004B5810: ManagedLayout = ManagedLayout {
    finaliser: 0x004B_5810,
    fields: &[(0x38, ManagedField::typed(0x0048_CB50))],
};

/// Recovered from Ghidra function `FUN_004b4ac0` at `0x004B4AC0`, in 3 copies.
///
/// Managed fields at 0x38, 0x40.
pub const RECORD_AT_004B4AC0: ManagedLayout = ManagedLayout {
    finaliser: 0x004B_4AC0,
    fields: &[
        (0x38, ManagedField::Texts(1)),
        (0x40, ManagedField::elements(0x0040_6578, 2)),
    ],
};

/// Recovered from Ghidra function `FUN_00458aa0` at `0x00458AA0`, in 3 copies.
///
/// Managed fields at 0x38.
pub const RECORD_AT_00458AA0: ManagedLayout = ManagedLayout {
    finaliser: 0x0045_8AA0,
    fields: &[(0x38, ManagedField::typed(0x0040_65C0))],
};

/// Recovered from Ghidra function `FUN_00450000` at `0x00450000`, in 3 copies.
///
/// Managed fields at 0x28.
pub const RECORD_AT_00450000: ManagedLayout = ManagedLayout {
    finaliser: 0x0045_0000,
    fields: &[(0x28, ManagedField::array(0x0043_7810))],
};

/// Recovered from Ghidra function `FUN_004471c0` at `0x004471C0`, in 3 copies.
///
/// Managed fields at 0x50, 0xA8.
pub const RECORD_AT_004471C0: ManagedLayout = ManagedLayout {
    finaliser: 0x0044_71C0,
    fields: &[
        (0x50, ManagedField::Texts(2)),
        (0xA8, ManagedField::Texts(1)),
    ],
};

/// Every layout swept mechanically out of a clean-up routine.
///
/// These were read straight off the routines rather than written out by hand,
/// which is why each is named after the routine and not after anything the
/// record does: nothing here knows what any of them is for.
pub const SWEPT_LAYOUTS: [&ManagedLayout; 568] = [
    &RECORD_AT_012FB340,
    &RECORD_AT_012FC390,
    &RECORD_AT_012FD3C0,
    &RECORD_AT_012FEA50,
    &RECORD_AT_013017D0,
    &RECORD_AT_01302680,
    &RECORD_AT_01302BB0,
    &RECORD_AT_01309850,
    &RECORD_AT_0130A210,
    &RECORD_AT_0130D400,
    &RECORD_AT_013123A0,
    &RECORD_AT_01317AA0,
    &RECORD_AT_01318440,
    &RECORD_AT_013188A0,
    &RECORD_AT_013199D0,
    &RECORD_AT_0131ABE0,
    &RECORD_AT_0131C1A0,
    &RECORD_AT_0131D960,
    &RECORD_AT_013200E0,
    &RECORD_AT_013318C0,
    &RECORD_AT_013403C0,
    &RECORD_AT_01348E60,
    &RECORD_AT_01351170,
    &RECORD_AT_01358A20,
    &RECORD_AT_013593E0,
    &RECORD_AT_0135C350,
    &RECORD_AT_005372F0,
    &RECORD_AT_00624400,
    &RECORD_AT_0082BDC0,
    &RECORD_AT_00885180,
    &RECORD_AT_00BC03B0,
    &RECORD_AT_00F98A90,
    &RECORD_AT_007E4F20,
    &RECORD_AT_005B2240,
    &RECORD_AT_00A5C5F0,
    &RECORD_AT_00878C10,
    &RECORD_AT_0111F310,
    &RECORD_AT_005B2100,
    &RECORD_AT_004D8110,
    &RECORD_AT_004B8CC0,
    &RECORD_AT_0045B7F0,
    &RECORD_AT_01426550,
    &RECORD_AT_00B12C60,
    &RECORD_AT_008FCC90,
    &RECORD_AT_0041E320,
    &RECORD_AT_014699E0,
    &RECORD_AT_00F8C900,
    &RECORD_AT_00D814E0,
    &RECORD_AT_008E5AC0,
    &RECORD_AT_007489C0,
    &RECORD_AT_005EB1F0,
    &RECORD_AT_0129DB50,
    &RECORD_AT_00E80BC0,
    &RECORD_AT_00C3FD30,
    &RECORD_AT_00B97290,
    &RECORD_AT_00A59640,
    &RECORD_AT_008FCB80,
    &RECORD_AT_00787200,
    &RECORD_AT_004DD8B0,
    &RECORD_AT_0044FA40,
    &RECORD_AT_010B9630,
    &RECORD_AT_00C3F800,
    &RECORD_AT_00C0A400,
    &RECORD_AT_00BCAAD0,
    &RECORD_AT_00B8AB10,
    &RECORD_AT_00887620,
    &RECORD_AT_0104E730,
    &RECORD_AT_00E10650,
    &RECORD_AT_00CEC8F0,
    &RECORD_AT_00CD2080,
    &RECORD_AT_00CBBC50,
    &RECORD_AT_00AFF020,
    &RECORD_AT_0088F7A0,
    &RECORD_AT_00878B30,
    &RECORD_AT_00837420,
    &RECORD_AT_005BF930,
    &RECORD_AT_004C6A00,
    &RECORD_AT_01709320,
    &RECORD_AT_00C84E20,
    &RECORD_AT_00C40930,
    &RECORD_AT_00A594D0,
    &RECORD_AT_008744F0,
    &RECORD_AT_007DCB30,
    &RECORD_AT_00682840,
    &RECORD_AT_0064B620,
    &RECORD_AT_006480D0,
    &RECORD_AT_004B1150,
    &RECORD_AT_01B8CDF0,
    &RECORD_AT_01583960,
    &RECORD_AT_015834A0,
    &RECORD_AT_0157DBB0,
    &RECORD_AT_012D0D30,
    &RECORD_AT_01144B60,
    &RECORD_AT_00EFAD80,
    &RECORD_AT_00EC90D0,
    &RECORD_AT_00EA8180,
    &RECORD_AT_00BFC630,
    &RECORD_AT_00B90970,
    &RECORD_AT_009A8580,
    &RECORD_AT_009A80C0,
    &RECORD_AT_00876460,
    &RECORD_AT_00795C50,
    &RECORD_AT_006E8A70,
    &RECORD_AT_005C2090,
    &RECORD_AT_0177FBF0,
    &RECORD_AT_015C2EF0,
    &RECORD_AT_01488530,
    &RECORD_AT_0131D440,
    &RECORD_AT_010D95B0,
    &RECORD_AT_00FDBC90,
    &RECORD_AT_00F9E800,
    &RECORD_AT_00F7CCE0,
    &RECORD_AT_00F2FC20,
    &RECORD_AT_00F06960,
    &RECORD_AT_00EAE020,
    &RECORD_AT_00D2A100,
    &RECORD_AT_00CD2C10,
    &RECORD_AT_00B8E6D0,
    &RECORD_AT_00A2C440,
    &RECORD_AT_008FC4D0,
    &RECORD_AT_008AC9A0,
    &RECORD_AT_008975A0,
    &RECORD_AT_0085AC90,
    &RECORD_AT_00832920,
    &RECORD_AT_005DBCD0,
    &RECORD_AT_004B36D0,
    &RECORD_AT_0049F4E0,
    &RECORD_AT_004601D0,
    &RECORD_AT_00440940,
    &RECORD_AT_0043F970,
    &RECORD_AT_01CA56C0,
    &RECORD_AT_019B0290,
    &RECORD_AT_0175C010,
    &RECORD_AT_017082B0,
    &RECORD_AT_015FEF00,
    &RECORD_AT_015FE4A0,
    &RECORD_AT_015FC0F0,
    &RECORD_AT_015851E0,
    &RECORD_AT_014A24F0,
    &RECORD_AT_01486680,
    &RECORD_AT_013B63E0,
    &RECORD_AT_01330FF0,
    &RECORD_AT_012D20D0,
    &RECORD_AT_01155EB0,
    &RECORD_AT_010BC120,
    &RECORD_AT_0107DA80,
    &RECORD_AT_0107D8C0,
    &RECORD_AT_0107AA40,
    &RECORD_AT_01053A00,
    &RECORD_AT_00FBCB90,
    &RECORD_AT_00F85210,
    &RECORD_AT_00F7A430,
    &RECORD_AT_00F5D480,
    &RECORD_AT_00F34E70,
    &RECORD_AT_00EED240,
    &RECORD_AT_00EC6A20,
    &RECORD_AT_00EAF050,
    &RECORD_AT_00E0EF60,
    &RECORD_AT_00E0E440,
    &RECORD_AT_00D73870,
    &RECORD_AT_00C53440,
    &RECORD_AT_00C4D0C0,
    &RECORD_AT_00C4CE30,
    &RECORD_AT_00C3D6B0,
    &RECORD_AT_00C00A10,
    &RECORD_AT_00C00740,
    &RECORD_AT_00BD1490,
    &RECORD_AT_00BCA8B0,
    &RECORD_AT_00B0AD90,
    &RECORD_AT_00B0A330,
    &RECORD_AT_00B02D80,
    &RECORD_AT_00ABCFF0,
    &RECORD_AT_00AAC410,
    &RECORD_AT_00AA7930,
    &RECORD_AT_00A29730,
    &RECORD_AT_009A9B70,
    &RECORD_AT_0085AF10,
    &RECORD_AT_00852F30,
    &RECORD_AT_00797C10,
    &RECORD_AT_0078F360,
    &RECORD_AT_00782C00,
    &RECORD_AT_00725070,
    &RECORD_AT_006E0B30,
    &RECORD_AT_005E0340,
    &RECORD_AT_005DBD50,
    &RECORD_AT_005C4010,
    &RECORD_AT_005A1FC0,
    &RECORD_AT_00562D80,
    &RECORD_AT_00560CC0,
    &RECORD_AT_004EC900,
    &RECORD_AT_004E2100,
    &RECORD_AT_0041E3A0,
    &RECORD_AT_0041B1C0,
    &RECORD_AT_0041B0A0,
    &RECORD_AT_01CA8490,
    &RECORD_AT_01CA5520,
    &RECORD_AT_01B3CEC0,
    &RECORD_AT_01B25ED0,
    &RECORD_AT_01B14E60,
    &RECORD_AT_01AE7830,
    &RECORD_AT_019A7DC0,
    &RECORD_AT_0183AFE0,
    &RECORD_AT_017FE6D0,
    &RECORD_AT_017F2020,
    &RECORD_AT_01779530,
    &RECORD_AT_0175BF30,
    &RECORD_AT_0174AAB0,
    &RECORD_AT_01716930,
    &RECORD_AT_015FC9D0,
    &RECORD_AT_015DF6C0,
    &RECORD_AT_015832F0,
    &RECORD_AT_0154F870,
    &RECORD_AT_014B6750,
    &RECORD_AT_014B4600,
    &RECORD_AT_01489820,
    &RECORD_AT_014864E0,
    &RECORD_AT_01477F60,
    &RECORD_AT_0146FCA0,
    &RECORD_AT_0143BB90,
    &RECORD_AT_013F8180,
    &RECORD_AT_013E8700,
    &RECORD_AT_013B5CB0,
    &RECORD_AT_013A61D0,
    &RECORD_AT_0131DD70,
    &RECORD_AT_012E8D10,
    &RECORD_AT_012CB830,
    &RECORD_AT_0129C400,
    &RECORD_AT_0123F4B0,
    &RECORD_AT_01176240,
    &RECORD_AT_01168A70,
    &RECORD_AT_01126730,
    &RECORD_AT_010DD480,
    &RECORD_AT_01090010,
    &RECORD_AT_0107E4F0,
    &RECORD_AT_010561F0,
    &RECORD_AT_0104F400,
    &RECORD_AT_010284A0,
    &RECORD_AT_00F9A8E0,
    &RECORD_AT_00F8F810,
    &RECORD_AT_00F8EDC0,
    &RECORD_AT_00F60ED0,
    &RECORD_AT_00F438F0,
    &RECORD_AT_00F3A020,
    &RECORD_AT_00F34CD0,
    &RECORD_AT_00EED160,
    &RECORD_AT_00EE6F00,
    &RECORD_AT_00ED4350,
    &RECORD_AT_00ED10E0,
    &RECORD_AT_00EC71D0,
    &RECORD_AT_00EC5DF0,
    &RECORD_AT_00EB1BB0,
    &RECORD_AT_00EAEEB0,
    &RECORD_AT_00E24D80,
    &RECORD_AT_00E13B70,
    &RECORD_AT_00E0E5A0,
    &RECORD_AT_00D812D0,
    &RECORD_AT_00D41A30,
    &RECORD_AT_00D063B0,
    &RECORD_AT_00CEA370,
    &RECORD_AT_00CD8B40,
    &RECORD_AT_00BFDE20,
    &RECORD_AT_00B90D10,
    &RECORD_AT_00B90040,
    &RECORD_AT_00B58130,
    &RECORD_AT_00B4F240,
    &RECORD_AT_00B150B0,
    &RECORD_AT_00AFF3D0,
    &RECORD_AT_00AFE0C0,
    &RECORD_AT_00AD1A40,
    &RECORD_AT_00ABC8C0,
    &RECORD_AT_00A61A50,
    &RECORD_AT_00A59E20,
    &RECORD_AT_009A7F10,
    &RECORD_AT_00895DD0,
    &RECORD_AT_008733E0,
    &RECORD_AT_00855A00,
    &RECORD_AT_00852D90,
    &RECORD_AT_00832EC0,
    &RECORD_AT_007A23F0,
    &RECORD_AT_00798AF0,
    &RECORD_AT_0078F1C0,
    &RECORD_AT_00787390,
    &RECORD_AT_006D5A80,
    &RECORD_AT_005F1120,
    &RECORD_AT_005E3230,
    &RECORD_AT_005E01A0,
    &RECORD_AT_005C1EE0,
    &RECORD_AT_005C1080,
    &RECORD_AT_005A2EA0,
    &RECORD_AT_00571A10,
    &RECORD_AT_0056F360,
    &RECORD_AT_00562BE0,
    &RECORD_AT_00560B20,
    &RECORD_AT_00557CB0,
    &RECORD_AT_00537D10,
    &RECORD_AT_005376A0,
    &RECORD_AT_004FDE30,
    &RECORD_AT_004FADA0,
    &RECORD_AT_004F8290,
    &RECORD_AT_004EC760,
    &RECORD_AT_004E5550,
    &RECORD_AT_004E1F60,
    &RECORD_AT_004DB5A0,
    &RECORD_AT_004C3340,
    &RECORD_AT_004C0630,
    &RECORD_AT_004BA570,
    &RECORD_AT_004B95F0,
    &RECORD_AT_0041E8A0,
    &RECORD_AT_01D42D40,
    &RECORD_AT_01D42CF0,
    &RECORD_AT_01D1BF50,
    &RECORD_AT_01CFD750,
    &RECORD_AT_01CFD430,
    &RECORD_AT_01CFD3A0,
    &RECORD_AT_01BCC400,
    &RECORD_AT_01BACE40,
    &RECORD_AT_01B45820,
    &RECORD_AT_01B3E770,
    &RECORD_AT_01B228C0,
    &RECORD_AT_01B21690,
    &RECORD_AT_01B050E0,
    &RECORD_AT_01B04E90,
    &RECORD_AT_01A86F10,
    &RECORD_AT_01A613A0,
    &RECORD_AT_01A555F0,
    &RECORD_AT_01A51310,
    &RECORD_AT_01A47770,
    &RECORD_AT_01A31E90,
    &RECORD_AT_01A03C10,
    &RECORD_AT_019EB350,
    &RECORD_AT_019E6560,
    &RECORD_AT_019DCF40,
    &RECORD_AT_019DCA60,
    &RECORD_AT_019C1C40,
    &RECORD_AT_019B95B0,
    &RECORD_AT_019A97D0,
    &RECORD_AT_019A5760,
    &RECORD_AT_019A3E80,
    &RECORD_AT_018E2F80,
    &RECORD_AT_01881BA0,
    &RECORD_AT_018798D0,
    &RECORD_AT_0184FFD0,
    &RECORD_AT_01834A70,
    &RECORD_AT_01822CF0,
    &RECORD_AT_018040D0,
    &RECORD_AT_01803E60,
    &RECORD_AT_017EF240,
    &RECORD_AT_0179A140,
    &RECORD_AT_01777EA0,
    &RECORD_AT_01773AB0,
    &RECORD_AT_01751820,
    &RECORD_AT_01750700,
    &RECORD_AT_0174CBE0,
    &RECORD_AT_017409C0,
    &RECORD_AT_0173E7B0,
    &RECORD_AT_017170A0,
    &RECORD_AT_01716E20,
    &RECORD_AT_017142C0,
    &RECORD_AT_01713BA0,
    &RECORD_AT_01711C10,
    &RECORD_AT_016FFDD0,
    &RECORD_AT_016F9D30,
    &RECORD_AT_016B0EB0,
    &RECORD_AT_016ACF00,
    &RECORD_AT_016ACAF0,
    &RECORD_AT_016A6A00,
    &RECORD_AT_016A3E20,
    &RECORD_AT_01652710,
    &RECORD_AT_0164A9C0,
    &RECORD_AT_01625DF0,
    &RECORD_AT_01616130,
    &RECORD_AT_01613720,
    &RECORD_AT_0160E3B0,
    &RECORD_AT_0160CD70,
    &RECORD_AT_0160C880,
    &RECORD_AT_01606050,
    &RECORD_AT_01604A60,
    &RECORD_AT_015FC8D0,
    &RECORD_AT_015D7050,
    &RECORD_AT_015CAED0,
    &RECORD_AT_015C6B70,
    &RECORD_AT_015C6910,
    &RECORD_AT_015C0620,
    &RECORD_AT_015AB880,
    &RECORD_AT_0158AAC0,
    &RECORD_AT_01584560,
    &RECORD_AT_0157DA20,
    &RECORD_AT_0157D9D0,
    &RECORD_AT_01575B80,
    &RECORD_AT_0156CE90,
    &RECORD_AT_0155FE30,
    &RECORD_AT_0154D780,
    &RECORD_AT_015307E0,
    &RECORD_AT_01510960,
    &RECORD_AT_014EEC00,
    &RECORD_AT_014C1B40,
    &RECORD_AT_014C06F0,
    &RECORD_AT_014A30E0,
    &RECORD_AT_014A2EF0,
    &RECORD_AT_01499A50,
    &RECORD_AT_01479540,
    &RECORD_AT_01477680,
    &RECORD_AT_014130A0,
    &RECORD_AT_0140F020,
    &RECORD_AT_0140E610,
    &RECORD_AT_013EFAB0,
    &RECORD_AT_013E8C90,
    &RECORD_AT_013E8AB0,
    &RECORD_AT_013E09C0,
    &RECORD_AT_013DE370,
    &RECORD_AT_013D4AD0,
    &RECORD_AT_013D4540,
    &RECORD_AT_013CD010,
    &RECORD_AT_013C6F50,
    &RECORD_AT_013C1220,
    &RECORD_AT_013ACB30,
    &RECORD_AT_013A67C0,
    &RECORD_AT_013A3F40,
    &RECORD_AT_01367090,
    &RECORD_AT_01350F60,
    &RECORD_AT_013491C0,
    &RECORD_AT_0133DD60,
    &RECORD_AT_01320B20,
    &RECORD_AT_0131F7C0,
    &RECORD_AT_0130E850,
    &RECORD_AT_012F81A0,
    &RECORD_AT_012D01C0,
    &RECORD_AT_012CEB80,
    &RECORD_AT_012CB4E0,
    &RECORD_AT_012C7E40,
    &RECORD_AT_0129DA60,
    &RECORD_AT_01296AA0,
    &RECORD_AT_01276C70,
    &RECORD_AT_01233E60,
    &RECORD_AT_0122F650,
    &RECORD_AT_0122D450,
    &RECORD_AT_01220F40,
    &RECORD_AT_01186E10,
    &RECORD_AT_011564F0,
    &RECORD_AT_0113B810,
    &RECORD_AT_01130D50,
    &RECORD_AT_01127AC0,
    &RECORD_AT_010C1420,
    &RECORD_AT_010AE2C0,
    &RECORD_AT_010AE0B0,
    &RECORD_AT_0108CD90,
    &RECORD_AT_0107D470,
    &RECORD_AT_0107A680,
    &RECORD_AT_0105A480,
    &RECORD_AT_01051480,
    &RECORD_AT_010508A0,
    &RECORD_AT_010497F0,
    &RECORD_AT_01039330,
    &RECORD_AT_00FFB2D0,
    &RECORD_AT_00FF1180,
    &RECORD_AT_00FCB910,
    &RECORD_AT_00FC7FD0,
    &RECORD_AT_00FB20A0,
    &RECORD_AT_00FA5200,
    &RECORD_AT_00FA39D0,
    &RECORD_AT_00F92D00,
    &RECORD_AT_00F5F3B0,
    &RECORD_AT_00F4FA90,
    &RECORD_AT_00F4B310,
    &RECORD_AT_00F1C560,
    &RECORD_AT_00F05250,
    &RECORD_AT_00ED5820,
    &RECORD_AT_00ED4850,
    &RECORD_AT_00ECD0B0,
    &RECORD_AT_00EC8910,
    &RECORD_AT_00EC8050,
    &RECORD_AT_00EC7CE0,
    &RECORD_AT_00EC4D20,
    &RECORD_AT_00EB9D60,
    &RECORD_AT_00EAB2F0,
    &RECORD_AT_00EA9260,
    &RECORD_AT_00EA88F0,
    &RECORD_AT_00EA7E60,
    &RECORD_AT_00D8A9C0,
    &RECORD_AT_00D893C0,
    &RECORD_AT_00D85980,
    &RECORD_AT_00D850E0,
    &RECORD_AT_00D80A40,
    &RECORD_AT_00D22A20,
    &RECORD_AT_00D0D0E0,
    &RECORD_AT_00D0CEA0,
    &RECORD_AT_00D05D60,
    &RECORD_AT_00CDCD60,
    &RECORD_AT_00CD75F0,
    &RECORD_AT_00CD6E90,
    &RECORD_AT_00CD1400,
    &RECORD_AT_00CCEB00,
    &RECORD_AT_00CC59C0,
    &RECORD_AT_00CBDD90,
    &RECORD_AT_00CAEDA0,
    &RECORD_AT_00C9CBA0,
    &RECORD_AT_00C8B9D0,
    &RECORD_AT_00C834A0,
    &RECORD_AT_00C81DA0,
    &RECORD_AT_00C7BD80,
    &RECORD_AT_00C538F0,
    &RECORD_AT_00C36FD0,
    &RECORD_AT_00C1A540,
    &RECORD_AT_00BF78A0,
    &RECORD_AT_00B930A0,
    &RECORD_AT_00B91E10,
    &RECORD_AT_00B8F2A0,
    &RECORD_AT_00B8D1D0,
    &RECORD_AT_00B17B70,
    &RECORD_AT_00B0B540,
    &RECORD_AT_00AFC640,
    &RECORD_AT_00AF45F0,
    &RECORD_AT_00AD2F90,
    &RECORD_AT_00AC2630,
    &RECORD_AT_00AC1320,
    &RECORD_AT_00A5B9B0,
    &RECORD_AT_00A55100,
    &RECORD_AT_00A04F40,
    &RECORD_AT_009E3130,
    &RECORD_AT_009A9170,
    &RECORD_AT_00985B30,
    &RECORD_AT_0089C560,
    &RECORD_AT_00889F80,
    &RECORD_AT_00878850,
    &RECORD_AT_00835FE0,
    &RECORD_AT_008320B0,
    &RECORD_AT_007E6010,
    &RECORD_AT_007E4D30,
    &RECORD_AT_00783450,
    &RECORD_AT_007813F0,
    &RECORD_AT_00781030,
    &RECORD_AT_00780930,
    &RECORD_AT_0072DCE0,
    &RECORD_AT_00728A10,
    &RECORD_AT_00724CC0,
    &RECORD_AT_007234E0,
    &RECORD_AT_00716570,
    &RECORD_AT_006E7EB0,
    &RECORD_AT_006DBEF0,
    &RECORD_AT_00689630,
    &RECORD_AT_00686E20,
    &RECORD_AT_00680E10,
    &RECORD_AT_006480A0,
    &RECORD_AT_005DB610,
    &RECORD_AT_005D0B40,
    &RECORD_AT_005C3320,
    &RECORD_AT_005B8D00,
    &RECORD_AT_005A1940,
    &RECORD_AT_005A1650,
    &RECORD_AT_005943C0,
    &RECORD_AT_005581A0,
    &RECORD_AT_00557B30,
    &RECORD_AT_00553B00,
    &RECORD_AT_00535710,
    &RECORD_AT_004FBC80,
    &RECORD_AT_004DC020,
    &RECORD_AT_004D8CB0,
    &RECORD_AT_004D8640,
    &RECORD_AT_004D6820,
    &RECORD_AT_004D2090,
    &RECORD_AT_004C9CD0,
    &RECORD_AT_004C0F70,
    &RECORD_AT_004BEBF0,
    &RECORD_AT_004B5810,
    &RECORD_AT_004B4AC0,
    &RECORD_AT_00458AA0,
    &RECORD_AT_00450000,
    &RECORD_AT_004471C0,
];

#[cfg(test)]
mod tests {
    use super::*;

    fn all_layouts() -> Vec<&'static ManagedLayout> {
        RECOVERED_LAYOUTS.into_iter().chain(SWEPT_LAYOUTS).collect()
    }

    #[test]
    fn three_recovered_pairs_share_a_first_string_and_differ_in_the_second() {
        let pairs = [
            TEXT_PAIR_0X38_0X58,
            TEXT_PAIR_0X38_0X68,
            TEXT_PAIR_0X38_0X78,
        ];
        let mut seconds = Vec::new();
        for pair in pairs {
            assert_eq!(pair.fields[0].0, 0x38, "{:#X}", pair.finaliser);
            seconds.push(pair.fields[1].0);
        }
        seconds.sort_unstable();
        seconds.dedup();

        assert_eq!(seconds, [0x58, 0x68, 0x78]);
    }

    #[test]
    fn no_layout_names_one_offset_twice() {
        for layout in all_layouts() {
            let mut offsets: Vec<usize> = layout.fields.iter().map(|(at, _)| *at).collect();
            let before = offsets.len();
            offsets.sort_unstable();
            offsets.dedup();

            assert_eq!(offsets.len(), before, "{:#X}", layout.finaliser);
        }
    }

    #[test]
    fn a_clean_up_routine_almost_always_releases_in_the_order_the_fields_sit() {
        // Almost: a handful release one field out of turn, which is worth
        // keeping rather than tidying, because the order is otherwise the
        // order the fields were declared in and that is what makes it
        // evidence.
        let all = all_layouts();
        let out_of_order: Vec<u32> = all
            .iter()
            .filter(|layout| {
                let offsets: Vec<usize> = layout.fields.iter().map(|(at, _)| *at).collect();
                let mut sorted = offsets.clone();
                sorted.sort_unstable();
                offsets != sorted
            })
            .map(|layout| layout.finaliser)
            .collect();

        assert!(out_of_order.len() * 20 < all.len(), "{out_of_order:?}");
        assert!(out_of_order.contains(&0x0131_23A0));
        assert!(out_of_order.contains(&0x0131_7AA0));
    }

    #[test]
    fn no_field_of_known_width_runs_into_the_next() {
        for layout in all_layouts() {
            let mut fields = layout.fields.to_vec();
            fields.sort_by_key(|(at, _)| *at);
            for pair in fields.windows(2) {
                let (at, field) = pair[0];
                let (next, _) = pair[1];
                if let Some(width) = field.width() {
                    assert!(at + width <= next, "{at:#X} of {:#X}", layout.finaliser);
                }
            }
        }
    }

    #[test]
    fn every_swept_layout_holds_at_least_one_field() {
        for layout in SWEPT_LAYOUTS {
            assert!(!layout.fields.is_empty(), "{:#X}", layout.finaliser);
        }
    }

    #[test]
    fn a_layout_is_named_after_the_routine_it_came_from() {
        assert_eq!(RECORD_AT_012FB340.finaliser, 0x012F_B340);
        assert_eq!(RECORD_AT_0135C350.finaliser, 0x0135_C350);
    }

    #[test]
    fn a_run_of_elements_has_no_width_that_can_be_worked_out() {
        assert_eq!(
            ManagedField::Elements {
                element_type: 0x00B9_F960,
                count: 2
            }
            .width(),
            None
        );
    }

    #[test]
    fn a_run_of_strings_is_eight_bytes_each() {
        assert_eq!(ManagedField::Texts(1).width(), Some(8));
        assert_eq!(ManagedField::Texts(3).width(), Some(24));
        assert_eq!(ManagedField::Interface.width(), Some(8));
    }

    #[test]
    fn a_field_can_be_looked_up_by_where_it_sits() {
        assert_eq!(
            INTERFACE_HEAVY_RECORD.field_at(0x088),
            Some(ManagedField::Interface)
        );
        assert_eq!(
            INTERFACE_HEAVY_RECORD.field_at(0x068),
            Some(ManagedField::Texts(3))
        );
    }

    #[test]
    fn an_offset_the_record_does_not_manage_has_nothing_there() {
        // Which is not the same as nothing being there: an unmanaged field —
        // a number, say — never appears in a clean-up routine at all.
        assert_eq!(INTERFACE_HEAVY_RECORD.field_at(0x000), None);
        assert_eq!(INTERFACE_HEAVY_RECORD.field_at(0x084), None);
    }

    #[test]
    fn the_large_record_is_mostly_references_to_other_things() {
        let interfaces = INTERFACE_HEAVY_RECORD
            .fields
            .iter()
            .filter(|(_, field)| *field == ManagedField::Interface)
            .count();

        assert!(interfaces * 2 > INTERFACE_HEAVY_RECORD.fields.len());
    }

    #[test]
    fn the_small_record_leaves_a_gap_before_its_last_interface() {
        // Room for four eight-byte fields that need no releasing.
        assert_eq!(SMALL_RECORD.field_at(0x58), Some(ManagedField::Interface));
        for offset in [0x60, 0x68, 0x70, 0x78] {
            assert_eq!(SMALL_RECORD.field_at(offset), None, "{offset:#X}");
        }
        assert_eq!(SMALL_RECORD.last_offset(), 0x80);
    }
}
