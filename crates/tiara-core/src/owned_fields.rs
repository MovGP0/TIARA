//! Letting go of the one object another object owns.
//!
//! Where a class holds exactly one thing that has to be destroyed with it, the
//! compiler writes a routine that does nothing but destroy that one thing, and
//! writes another for every class that does the same at a different offset.
//! The binary carries hundreds of them.
//!
//! None of them has a counterpart in Rust: a field that owns something is
//! dropped with the value that holds it, and there is no routine to write. The
//! reason to record them at all is that each one says where an owned field
//! sits, which is not written down anywhere else — and that the two ways of
//! letting go are not the same route to the same place.

/// How an owned field is let go.
///
/// Part of Ghidra functions `FUN_004ae210` at `0x004AE210` and `FUN_0049f0f0`
/// at `0x0049F0F0`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Release {
    /// Handed to the run time's free, which tests for nothing itself and
    /// destroys what it is given.
    ///
    /// The test is inside the helper rather than at the call, so the routine
    /// is one instruction and the field may be nothing without harm.
    Freed,
    /// Destroyed directly through its own destructor, after testing the field.
    ///
    /// The same outcome by a different route: the test is written out at the
    /// call and the destructor reached through the object's own table, which
    /// is what a call has to do when it will not go through the run time.
    Destroyed,
    /// Destroyed directly, without testing the field first.
    ///
    /// The third way, and the only one that can fail: a field that is nothing
    /// is called through anyway. Whoever wrote it knew the field could not be
    /// nothing at that point, and nothing in the routine says so.
    DestroyedUnguarded,
}

/// One class's owned field and how it is released.
///
/// Part of Ghidra functions `FUN_004ae210` at `0x004AE210` and `FUN_0049f0f0`
/// at `0x0049F0F0`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct OwnedField {
    /// Where the routine that releases it lives.
    pub routine: u32,
    /// Where in the object the field sits.
    pub offset: usize,
    /// Which of the two ways it goes.
    pub release: Release,
}

/// Implements Ghidra function `FUN_004ae210` at `0x004AE210`.
///
/// The field at `0x38`, handed to the run time's free.
///
/// The commonest shape of all: one object, one owned thing, one line. Nothing
/// is put back in the field afterwards, so the pointer is left as it was —
/// which is safe only because this runs while the object that holds it is
/// being destroyed and nothing will read it again.
pub const FREED_AT_0X38: OwnedField = OwnedField {
    routine: 0x004A_E210,
    offset: 0x38,
    release: Release::Freed,
};

/// Implements Ghidra function `FUN_0049f0f0` at `0x0049F0F0`.
///
/// The field at `0x48`, destroyed directly when it is there.
///
/// Reached through the object's own destructor rather than the run time's
/// free, with the test for nothing written out at the call. The field is left
/// as it was here too.
pub const DESTROYED_AT_0X48: OwnedField = OwnedField {
    routine: 0x0049_F0F0,
    offset: 0x48,
    release: Release::Destroyed,
};

/// Implements Ghidra function `FUN_004dcf80` at `0x004DCF80`.
///
/// The field at `0x40`, handed to the run time's free.
///
/// The same shape as the one at `0x38` and a third of the way as common, which
/// says only that objects tend to keep their one owned thing early.
pub const FREED_AT_0X40: OwnedField = OwnedField {
    routine: 0x004D_CF80,
    offset: 0x40,
    release: Release::Freed,
};

/// Implements Ghidra function `FUN_004af9f0` at `0x004AF9F0`.
///
/// The field at `0x48`, handed to the run time's free.
///
/// The same offset as [`DESTROYED_AT_0X48`] and the other way of letting go,
/// which settles that the two routes are a choice rather than a consequence of
/// where the field sits: both shapes exist for the same offset, in 129 copies
/// and 206.
pub const FREED_AT_0X48: OwnedField = OwnedField {
    routine: 0x004A_F9F0,
    offset: 0x48,
    release: Release::Freed,
};

/// Implements Ghidra function `FUN_004a5130` at `0x004A5130`.
///
/// The field at `0x58`, handed to the run time's free.
///
/// The furthest in of the four freed offsets and the least common of them at
/// 100 copies, which is the shape of the same idea in a class with more of its
/// own to keep first.
pub const FREED_AT_0X58: OwnedField = OwnedField {
    routine: 0x004A_5130,
    offset: 0x58,
    release: Release::Freed,
};

/// Implements Ghidra function `FUN_004dda30` at `0x004DDA30`.
///
/// The field at `0x78`, destroyed directly when it is there.
///
/// The furthest in of all of them, and destroyed rather than freed — 84
/// copies. Nothing distinguishes the classes that reach this far except how
/// much they keep before it.
pub const DESTROYED_AT_0X78: OwnedField = OwnedField {
    routine: 0x004D_DA30,
    offset: 0x78,
    release: Release::Destroyed,
};

/// Implements Ghidra function `FUN_004be270` at `0x004BE270`.
///
/// The field at `0x68`, handed to the run time's free.
pub const FREED_AT_0X68: OwnedField = OwnedField {
    routine: 0x004B_E270,
    offset: 0x68,
    release: Release::Freed,
};

/// Implements Ghidra function `FUN_004bdc40` at `0x004BDC40`.
///
/// The field at `0x78`, handed to the run time's free.
///
/// The second offset released both ways: [`DESTROYED_AT_0X78`] reaches the
/// same place by testing and calling the destructor directly. With `0x48` the
/// same, that is two offsets of the seven where both routes exist, which is
/// what settles it as a choice rather than a rule.
pub const FREED_AT_0X78: OwnedField = OwnedField {
    routine: 0x004B_DC40,
    offset: 0x78,
    release: Release::Freed,
};

/// Implements Ghidra function `FUN_004c7f60` at `0x004C7F60`.
///
/// The field at `0x88`, handed to the run time's free.
pub const FREED_AT_0X88: OwnedField = OwnedField {
    routine: 0x004C_7F60,
    offset: 0x88,
    release: Release::Freed,
};

/// Implements Ghidra function `FUN_00781e10` at `0x00781E10`.
///
/// The field at `0x98`, handed to the run time's free.
pub const FREED_AT_0X98: OwnedField = OwnedField {
    routine: 0x0078_1E10,
    offset: 0x98,
    release: Release::Freed,
};

/// Implements Ghidra function `FUN_004e0b00` at `0x004E0B00`.
///
/// The field at `0x38`, destroyed directly when it is there.
///
/// The commonest freed offset is also released this way, which makes it the
/// third of the recovered offsets to have both routes.
pub const DESTROYED_AT_0X38: OwnedField = OwnedField {
    routine: 0x004E_0B00,
    offset: 0x38,
    release: Release::Destroyed,
};

/// Implements Ghidra function `FUN_004a00c0` at `0x004A00C0`.
///
/// The field at `0x88`, destroyed directly when it is there.
///
/// And the fourth. Of the eight offsets recovered, half have both routes —
/// which is as clear as this evidence gets that the route is chosen and not
/// determined.
pub const DESTROYED_AT_0X88: OwnedField = OwnedField {
    routine: 0x004A_00C0,
    offset: 0x88,
    release: Release::Destroyed,
};

/// Implements Ghidra function `FUN_004249e0` at `0x004249E0`.
///
/// The field at `8`, freed inside a destructor that also chains upward.
///
/// The only one of these recovered that does two things: it frees what it owns
/// and then calls the inherited destructor with the flag masked the way
/// [`crate::delphi_runtime::inherited_destructor_flag`] describes. Everything
/// else in this family is one line and leaves the chaining to its caller, so
/// this is the shape a class takes when the owned field belongs to it rather
/// than to the level above.
pub const FREED_AT_0X8: OwnedField = OwnedField {
    routine: 0x0042_49E0,
    offset: 0x8,
    release: Release::Freed,
};

/// Implements Ghidra function `FUN_004ae3a0` at `0x004AE3A0`.
///
/// The field at `0x50`, handed to the run time's free.
pub const FREED_AT_0X50: OwnedField = OwnedField {
    routine: 0x004A_E3A0,
    offset: 0x50,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_008283e0` at `0x008283E0`, in 26 copies.
///
/// The field at `0xA8`, handed to the run time's free.
pub const RELEASE_008283E0: OwnedField = OwnedField {
    routine: 0x0082_83E0,
    offset: 0xA8,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_008abf50` at `0x008ABF50`, in 22 copies.
///
/// The field at `0x38`, handed to the run time's free.
pub const RELEASE_008ABF50: OwnedField = OwnedField {
    routine: 0x008A_BF50,
    offset: 0x38,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_007d8360` at `0x007D8360`, in 22 copies.
///
/// The field at `0x80`, handed to the run time's free.
pub const RELEASE_007D8360: OwnedField = OwnedField {
    routine: 0x007D_8360,
    offset: 0x80,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_00697070` at `0x00697070`, in 16 copies.
///
/// The field at `0xA0`, handed to the run time's free.
pub const RELEASE_00697070: OwnedField = OwnedField {
    routine: 0x0069_7070,
    offset: 0xA0,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_004d09a0` at `0x004D09A0`, in 16 copies.
///
/// The field at `0x60`, handed to the run time's free.
pub const RELEASE_004D09A0: OwnedField = OwnedField {
    routine: 0x004D_09A0,
    offset: 0x60,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_004aa8c0` at `0x004AA8C0`, in 15 copies.
///
/// The field at `0x90`, handed to the run time's free.
pub const RELEASE_004AA8C0: OwnedField = OwnedField {
    routine: 0x004A_A8C0,
    offset: 0x90,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_004b3c30` at `0x004B3C30`, in 14 copies.
///
/// The field at `0xB8`, handed to the run time's free.
pub const RELEASE_004B3C30: OwnedField = OwnedField {
    routine: 0x004B_3C30,
    offset: 0xB8,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_0095bba0` at `0x0095BBA0`, in 13 copies.
///
/// The field at `0x58`, handed to the run time's free.
pub const RELEASE_0095BBA0: OwnedField = OwnedField {
    routine: 0x0095_BBA0,
    offset: 0x58,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_00987ca0` at `0x00987CA0`, in 12 copies.
///
/// The field at `0x88`, handed to the run time's free.
pub const RELEASE_00987CA0: OwnedField = OwnedField {
    routine: 0x0098_7CA0,
    offset: 0x88,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_00715d10` at `0x00715D10`, in 12 copies.
///
/// The field at `0xC0`, handed to the run time's free.
pub const RELEASE_00715D10: OwnedField = OwnedField {
    routine: 0x0071_5D10,
    offset: 0xC0,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_00710ea0` at `0x00710EA0`, in 12 copies.
///
/// The field at `0x108`, handed to the run time's free.
pub const RELEASE_00710EA0: OwnedField = OwnedField {
    routine: 0x0071_0EA0,
    offset: 0x108,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_004bdc20` at `0x004BDC20`, in 12 copies.
///
/// The field at `0x70`, handed to the run time's free.
pub const RELEASE_004BDC20: OwnedField = OwnedField {
    routine: 0x004B_DC20,
    offset: 0x70,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_00715710` at `0x00715710`, in 11 copies.
///
/// The field at `0xD8`, handed to the run time's free.
pub const RELEASE_00715710: OwnedField = OwnedField {
    routine: 0x0071_5710,
    offset: 0xD8,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_004cb690` at `0x004CB690`, in 11 copies.
///
/// The field at `0x30`, handed to the run time's free.
pub const RELEASE_004CB690: OwnedField = OwnedField {
    routine: 0x004C_B690,
    offset: 0x30,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_00974710` at `0x00974710`, in 9 copies.
///
/// The field at `0xB0`, handed to the run time's free.
pub const RELEASE_00974710: OwnedField = OwnedField {
    routine: 0x0097_4710,
    offset: 0xB0,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_006e58f0` at `0x006E58F0`, in 9 copies.
///
/// The field at `0x48`, handed to the run time's free.
pub const RELEASE_006E58F0: OwnedField = OwnedField {
    routine: 0x006E_58F0,
    offset: 0x48,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_013a5ff0` at `0x013A5FF0`, in 7 copies.
///
/// The field at `0x58`, handed to the run time's free.
pub const RELEASE_013A5FF0: OwnedField = OwnedField {
    routine: 0x013A_5FF0,
    offset: 0x58,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_00ae1380` at `0x00AE1380`, in 7 copies.
///
/// The field at `0x268`, handed to the run time's free.
pub const RELEASE_00AE1380: OwnedField = OwnedField {
    routine: 0x00AE_1380,
    offset: 0x268,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_00adc0c0` at `0x00ADC0C0`, in 7 copies.
///
/// The field at `0x158`, handed to the run time's free.
pub const RELEASE_00ADC0C0: OwnedField = OwnedField {
    routine: 0x00AD_C0C0,
    offset: 0x158,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_00adb4e0` at `0x00ADB4E0`, in 7 copies.
///
/// The field at `0xE8`, handed to the run time's free.
pub const RELEASE_00ADB4E0: OwnedField = OwnedField {
    routine: 0x00AD_B4E0,
    offset: 0xE8,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_0099b310` at `0x0099B310`, in 7 copies.
///
/// The field at `0x40`, handed to the run time's free.
pub const RELEASE_0099B310: OwnedField = OwnedField {
    routine: 0x0099_B310,
    offset: 0x40,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_0089db10` at `0x0089DB10`, in 7 copies.
///
/// The field at `0x58`, handed to the run time's free.
pub const RELEASE_0089DB10: OwnedField = OwnedField {
    routine: 0x0089_DB10,
    offset: 0x58,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_010b7560` at `0x010B7560`, in 6 copies.
///
/// The field at `0x78`, handed to the run time's free.
pub const RELEASE_010B7560: OwnedField = OwnedField {
    routine: 0x010B_7560,
    offset: 0x78,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_00c7ba10` at `0x00C7BA10`, in 6 copies.
///
/// The field at `0x48`, handed to the run time's free.
pub const RELEASE_00C7BA10: OwnedField = OwnedField {
    routine: 0x00C7_BA10,
    offset: 0x48,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_00adc940` at `0x00ADC940`, in 6 copies.
///
/// The field at `0x128`, handed to the run time's free.
pub const RELEASE_00ADC940: OwnedField = OwnedField {
    routine: 0x00AD_C940,
    offset: 0x128,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_00986650` at `0x00986650`, in 6 copies.
///
/// The field at `0x90`, handed to the run time's free.
pub const RELEASE_00986650: OwnedField = OwnedField {
    routine: 0x0098_6650,
    offset: 0x90,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_006911d0` at `0x006911D0`, in 6 copies.
///
/// The field at `0xF8`, handed to the run time's free.
pub const RELEASE_006911D0: OwnedField = OwnedField {
    routine: 0x0069_11D0,
    offset: 0xF8,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_0060ebb0` at `0x0060EBB0`, in 6 copies.
///
/// The field at `0x138`, handed to the run time's free.
pub const RELEASE_0060EBB0: OwnedField = OwnedField {
    routine: 0x0060_EBB0,
    offset: 0x138,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_01809fa0` at `0x01809FA0`, in 5 copies.
///
/// The field at `0x58`, handed to the run time's free.
pub const RELEASE_01809FA0: OwnedField = OwnedField {
    routine: 0x0180_9FA0,
    offset: 0x58,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_00d40c90` at `0x00D40C90`, in 5 copies.
///
/// The field at `0x148`, handed to the run time's free.
pub const RELEASE_00D40C90: OwnedField = OwnedField {
    routine: 0x00D4_0C90,
    offset: 0x148,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_00ce90d0` at `0x00CE90D0`, in 5 copies.
///
/// The field at `0x38`, handed to the run time's free.
pub const RELEASE_00CE90D0: OwnedField = OwnedField {
    routine: 0x00CE_90D0,
    offset: 0x38,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_00aa2ff0` at `0x00AA2FF0`, in 5 copies.
///
/// The field at `0x2D8`, handed to the run time's free.
pub const RELEASE_00AA2FF0: OwnedField = OwnedField {
    routine: 0x00AA_2FF0,
    offset: 0x2D8,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_008283b0` at `0x008283B0`, in 5 copies.
///
/// The field at `0xB8`, handed to the run time's free.
pub const RELEASE_008283B0: OwnedField = OwnedField {
    routine: 0x0082_83B0,
    offset: 0xB8,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_00715730` at `0x00715730`, in 5 copies.
///
/// The field at `0xD0`, handed to the run time's free.
pub const RELEASE_00715730: OwnedField = OwnedField {
    routine: 0x0071_5730,
    offset: 0xD0,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_006032b0` at `0x006032B0`, in 5 copies.
///
/// The field at `0xC0`, handed to the run time's free.
pub const RELEASE_006032B0: OwnedField = OwnedField {
    routine: 0x0060_32B0,
    offset: 0xC0,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_0143ff00` at `0x0143FF00`, in 4 copies.
///
/// The field at `0x2A8`, handed to the run time's free.
pub const RELEASE_0143FF00: OwnedField = OwnedField {
    routine: 0x0143_FF00,
    offset: 0x2A8,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_012d67e0` at `0x012D67E0`, in 4 copies.
///
/// The field at `0x188`, handed to the run time's free.
pub const RELEASE_012D67E0: OwnedField = OwnedField {
    routine: 0x012D_67E0,
    offset: 0x188,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_010d6680` at `0x010D6680`, in 4 copies.
///
/// The field at `0xB8`, handed to the run time's free.
pub const RELEASE_010D6680: OwnedField = OwnedField {
    routine: 0x010D_6680,
    offset: 0xB8,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_00e13b50` at `0x00E13B50`, in 4 copies.
///
/// The field at `0x68`, handed to the run time's free.
pub const RELEASE_00E13B50: OwnedField = OwnedField {
    routine: 0x00E1_3B50,
    offset: 0x68,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_00ccd140` at `0x00CCD140`, in 4 copies.
///
/// The field at `0x48`, handed to the run time's free.
pub const RELEASE_00CCD140: OwnedField = OwnedField {
    routine: 0x00CC_D140,
    offset: 0x48,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_00adf470` at `0x00ADF470`, in 4 copies.
///
/// The field at `0x200`, handed to the run time's free.
pub const RELEASE_00ADF470: OwnedField = OwnedField {
    routine: 0x00AD_F470,
    offset: 0x200,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_00adf430` at `0x00ADF430`, in 4 copies.
///
/// The field at `0x210`, handed to the run time's free.
pub const RELEASE_00ADF430: OwnedField = OwnedField {
    routine: 0x00AD_F430,
    offset: 0x210,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_00ad6350` at `0x00AD6350`, in 4 copies.
///
/// The field at `0x178`, handed to the run time's free.
pub const RELEASE_00AD6350: OwnedField = OwnedField {
    routine: 0x00AD_6350,
    offset: 0x178,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_00988ed0` at `0x00988ED0`, in 4 copies.
///
/// The field at `0xD8`, handed to the run time's free.
pub const RELEASE_00988ED0: OwnedField = OwnedField {
    routine: 0x0098_8ED0,
    offset: 0xD8,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_009885c0` at `0x009885C0`, in 4 copies.
///
/// The field at `0xC0`, handed to the run time's free.
pub const RELEASE_009885C0: OwnedField = OwnedField {
    routine: 0x0098_85C0,
    offset: 0xC0,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_0085d290` at `0x0085D290`, in 4 copies.
///
/// The field at `0x298`, handed to the run time's free.
pub const RELEASE_0085D290: OwnedField = OwnedField {
    routine: 0x0085_D290,
    offset: 0x298,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_0081cb00` at `0x0081CB00`, in 4 copies.
///
/// The field at `0x100`, handed to the run time's free.
pub const RELEASE_0081CB00: OwnedField = OwnedField {
    routine: 0x0081_CB00,
    offset: 0x100,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_005b4110` at `0x005B4110`, in 4 copies.
///
/// The field at `0x88`, handed to the run time's free.
pub const RELEASE_005B4110: OwnedField = OwnedField {
    routine: 0x005B_4110,
    offset: 0x88,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_004cdff0` at `0x004CDFF0`, in 4 copies.
///
/// The field at `0x1D8`, handed to the run time's free.
pub const RELEASE_004CDFF0: OwnedField = OwnedField {
    routine: 0x004C_DFF0,
    offset: 0x1D8,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_01ca51a0` at `0x01CA51A0`, in 3 copies.
///
/// The field at `0x50`, handed to the run time's free.
pub const RELEASE_01CA51A0: OwnedField = OwnedField {
    routine: 0x01CA_51A0,
    offset: 0x50,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_01a7f8b0` at `0x01A7F8B0`, in 3 copies.
///
/// The field at `0x98`, handed to the run time's free.
pub const RELEASE_01A7F8B0: OwnedField = OwnedField {
    routine: 0x01A7_F8B0,
    offset: 0x98,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_01a52440` at `0x01A52440`, in 3 copies.
///
/// The field at `0xF8`, handed to the run time's free.
pub const RELEASE_01A52440: OwnedField = OwnedField {
    routine: 0x01A5_2440,
    offset: 0xF8,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_01a36da0` at `0x01A36DA0`, in 3 copies.
///
/// The field at `0xD0`, handed to the run time's free.
pub const RELEASE_01A36DA0: OwnedField = OwnedField {
    routine: 0x01A3_6DA0,
    offset: 0xD0,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_019140b0` at `0x019140B0`, in 3 copies.
///
/// The field at `0xB28`, handed to the run time's free.
pub const RELEASE_019140B0: OwnedField = OwnedField {
    routine: 0x0191_40B0,
    offset: 0xB28,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_0176c8b0` at `0x0176C8B0`, in 3 copies.
///
/// The field at `0x2068`, handed to the run time's free.
pub const RELEASE_0176C8B0: OwnedField = OwnedField {
    routine: 0x0176_C8B0,
    offset: 0x2068,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_016c5880` at `0x016C5880`, in 3 copies.
///
/// The field at `0x88`, handed to the run time's free.
pub const RELEASE_016C5880: OwnedField = OwnedField {
    routine: 0x016C_5880,
    offset: 0x88,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_016c5830` at `0x016C5830`, in 3 copies.
///
/// The field at `0x90`, handed to the run time's free.
pub const RELEASE_016C5830: OwnedField = OwnedField {
    routine: 0x016C_5830,
    offset: 0x90,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_015da7c0` at `0x015DA7C0`, in 3 copies.
///
/// The field at `0x50`, handed to the run time's free.
pub const RELEASE_015DA7C0: OwnedField = OwnedField {
    routine: 0x015D_A7C0,
    offset: 0x50,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_014cf6a0` at `0x014CF6A0`, in 3 copies.
///
/// The field at `0x60`, handed to the run time's free.
pub const RELEASE_014CF6A0: OwnedField = OwnedField {
    routine: 0x014C_F6A0,
    offset: 0x60,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_013fe420` at `0x013FE420`, in 3 copies.
///
/// The field at `0x280`, handed to the run time's free.
pub const RELEASE_013FE420: OwnedField = OwnedField {
    routine: 0x013F_E420,
    offset: 0x280,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_013e1770` at `0x013E1770`, in 3 copies.
///
/// The field at `0x4C8`, handed to the run time's free.
pub const RELEASE_013E1770: OwnedField = OwnedField {
    routine: 0x013E_1770,
    offset: 0x4C8,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_013a83e0` at `0x013A83E0`, in 3 copies.
///
/// The field at `0xE0`, handed to the run time's free.
pub const RELEASE_013A83E0: OwnedField = OwnedField {
    routine: 0x013A_83E0,
    offset: 0xE0,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_012f9590` at `0x012F9590`, in 3 copies.
///
/// The field at `0xE0`, handed to the run time's free.
pub const RELEASE_012F9590: OwnedField = OwnedField {
    routine: 0x012F_9590,
    offset: 0xE0,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_012d67b0` at `0x012D67B0`, in 3 copies.
///
/// The field at `0x198`, handed to the run time's free.
pub const RELEASE_012D67B0: OwnedField = OwnedField {
    routine: 0x012D_67B0,
    offset: 0x198,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_012bb020` at `0x012BB020`, in 3 copies.
///
/// The field at `0xA8`, handed to the run time's free.
pub const RELEASE_012BB020: OwnedField = OwnedField {
    routine: 0x012B_B020,
    offset: 0xA8,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_0129ed00` at `0x0129ED00`, in 3 copies.
///
/// The field at `0x150`, handed to the run time's free.
pub const RELEASE_0129ED00: OwnedField = OwnedField {
    routine: 0x0129_ED00,
    offset: 0x150,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_01242d00` at `0x01242D00`, in 3 copies.
///
/// The field at `0x48`, handed to the run time's free.
pub const RELEASE_01242D00: OwnedField = OwnedField {
    routine: 0x0124_2D00,
    offset: 0x48,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_01142bd0` at `0x01142BD0`, in 3 copies.
///
/// The field at `0x68`, handed to the run time's free.
pub const RELEASE_01142BD0: OwnedField = OwnedField {
    routine: 0x0114_2BD0,
    offset: 0x68,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_00ccc020` at `0x00CCC020`, in 3 copies.
///
/// The field at `0x58`, handed to the run time's free.
pub const RELEASE_00CCC020: OwnedField = OwnedField {
    routine: 0x00CC_C020,
    offset: 0x58,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_00cb0a60` at `0x00CB0A60`, in 3 copies.
///
/// The field at `0x68`, handed to the run time's free.
pub const RELEASE_00CB0A60: OwnedField = OwnedField {
    routine: 0x00CB_0A60,
    offset: 0x68,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_00c82260` at `0x00C82260`, in 3 copies.
///
/// The field at `0x38`, handed to the run time's free.
pub const RELEASE_00C82260: OwnedField = OwnedField {
    routine: 0x00C8_2260,
    offset: 0x38,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_00b04010` at `0x00B04010`, in 3 copies.
///
/// The field at `0x420`, handed to the run time's free.
pub const RELEASE_00B04010: OwnedField = OwnedField {
    routine: 0x00B0_4010,
    offset: 0x420,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_00af79c0` at `0x00AF79C0`, in 3 copies.
///
/// The field at `0xD0`, handed to the run time's free.
pub const RELEASE_00AF79C0: OwnedField = OwnedField {
    routine: 0x00AF_79C0,
    offset: 0xD0,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_00ae6a50` at `0x00AE6A50`, in 3 copies.
///
/// The field at `0x48`, handed to the run time's free.
pub const RELEASE_00AE6A50: OwnedField = OwnedField {
    routine: 0x00AE_6A50,
    offset: 0x48,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_00adf4b0` at `0x00ADF4B0`, in 3 copies.
///
/// The field at `0x238`, handed to the run time's free.
pub const RELEASE_00ADF4B0: OwnedField = OwnedField {
    routine: 0x00AD_F4B0,
    offset: 0x238,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_00adb4c0` at `0x00ADB4C0`, in 3 copies.
///
/// The field at `0xF0`, handed to the run time's free.
pub const RELEASE_00ADB4C0: OwnedField = OwnedField {
    routine: 0x00AD_B4C0,
    offset: 0xF0,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_00ad6310` at `0x00AD6310`, in 3 copies.
///
/// The field at `0x188`, handed to the run time's free.
pub const RELEASE_00AD6310: OwnedField = OwnedField {
    routine: 0x00AD_6310,
    offset: 0x188,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_00989b30` at `0x00989B30`, in 3 copies.
///
/// The field at `0x88`, handed to the run time's free.
pub const RELEASE_00989B30: OwnedField = OwnedField {
    routine: 0x0098_9B30,
    offset: 0x88,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_00972b80` at `0x00972B80`, in 3 copies.
///
/// The field at `0x328`, handed to the run time's free.
pub const RELEASE_00972B80: OwnedField = OwnedField {
    routine: 0x0097_2B80,
    offset: 0x328,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_008fe5f0` at `0x008FE5F0`, in 3 copies.
///
/// The field at `0xA0`, handed to the run time's free.
pub const RELEASE_008FE5F0: OwnedField = OwnedField {
    routine: 0x008F_E5F0,
    offset: 0xA0,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_0085d2b0` at `0x0085D2B0`, in 3 copies.
///
/// The field at `0x290`, handed to the run time's free.
pub const RELEASE_0085D2B0: OwnedField = OwnedField {
    routine: 0x0085_D2B0,
    offset: 0x290,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_007e4ce0` at `0x007E4CE0`, in 3 copies.
///
/// The field at `0xC0`, handed to the run time's free.
pub const RELEASE_007E4CE0: OwnedField = OwnedField {
    routine: 0x007E_4CE0,
    offset: 0xC0,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_006e9980` at `0x006E9980`, in 3 copies.
///
/// The field at `0xA8`, handed to the run time's free.
pub const RELEASE_006E9980: OwnedField = OwnedField {
    routine: 0x006E_9980,
    offset: 0xA8,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_0068d130` at `0x0068D130`, in 3 copies.
///
/// The field at `0x118`, handed to the run time's free.
pub const RELEASE_0068D130: OwnedField = OwnedField {
    routine: 0x0068_D130,
    offset: 0x118,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_004cb670` at `0x004CB670`, in 3 copies.
///
/// The field at `0x1E0`, handed to the run time's free.
pub const RELEASE_004CB670: OwnedField = OwnedField {
    routine: 0x004C_B670,
    offset: 0x1E0,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_004c7f80` at `0x004C7F80`, in 3 copies.
///
/// The field at `0x80`, handed to the run time's free.
pub const RELEASE_004C7F80: OwnedField = OwnedField {
    routine: 0x004C_7F80,
    offset: 0x80,
    release: Release::Freed,
};

/// Recovered from Ghidra function `FUN_005a1f70` at `0x005A1F70`, in 20 copies.
///
/// The field at `0x58`, destroyed directly when it is there.
pub const RELEASE_005A1F70: OwnedField = OwnedField {
    routine: 0x005A_1F70,
    offset: 0x58,
    release: Release::Destroyed,
};

/// Recovered from Ghidra function `FUN_005c1eb0` at `0x005C1EB0`, in 10 copies.
///
/// The field at `0x68`, destroyed directly when it is there.
pub const RELEASE_005C1EB0: OwnedField = OwnedField {
    routine: 0x005C_1EB0,
    offset: 0x68,
    release: Release::Destroyed,
};

/// Recovered from Ghidra function `FUN_004aa880` at `0x004AA880`, in 9 copies.
///
/// The field at `0x98`, destroyed directly when it is there.
pub const RELEASE_004AA880: OwnedField = OwnedField {
    routine: 0x004A_A880,
    offset: 0x98,
    release: Release::Destroyed,
};

/// Recovered from Ghidra function `FUN_004aa800` at `0x004AA800`, in 7 copies.
///
/// The field at `0xA8`, destroyed directly when it is there.
pub const RELEASE_004AA800: OwnedField = OwnedField {
    routine: 0x004A_A800,
    offset: 0xA8,
    release: Release::Destroyed,
};

/// Recovered from Ghidra function `FUN_019e4900` at `0x019E4900`, in 5 copies.
///
/// The field at `0x9F8`, destroyed directly when it is there.
pub const RELEASE_019E4900: OwnedField = OwnedField {
    routine: 0x019E_4900,
    offset: 0x9F8,
    release: Release::Destroyed,
};

/// Recovered from Ghidra function `FUN_019e6520` at `0x019E6520`, in 3 copies.
///
/// The field at `0xB0`, destroyed directly when it is there.
pub const RELEASE_019E6520: OwnedField = OwnedField {
    routine: 0x019E_6520,
    offset: 0xB0,
    release: Release::Destroyed,
};

/// Recovered from Ghidra function `FUN_00781790` at `0x00781790`, in 3 copies.
///
/// The field at `0x128`, destroyed directly when it is there.
pub const RELEASE_00781790: OwnedField = OwnedField {
    routine: 0x0078_1790,
    offset: 0x128,
    release: Release::Destroyed,
};

/// Recovered from Ghidra function `FUN_00728410` at `0x00728410`, in 3 copies.
///
/// The field at `0xD8`, destroyed directly when it is there.
pub const RELEASE_00728410: OwnedField = OwnedField {
    routine: 0x0072_8410,
    offset: 0xD8,
    release: Release::Destroyed,
};

/// Recovered from Ghidra function `FUN_005b40d0` at `0x005B40D0`, in 3 copies.
///
/// The field at `0x90`, destroyed directly when it is there.
pub const RELEASE_005B40D0: OwnedField = OwnedField {
    routine: 0x005B_40D0,
    offset: 0x90,
    release: Release::Destroyed,
};

/// Recovered from Ghidra function `FUN_004aa840` at `0x004AA840`, in 3 copies.
///
/// The field at `0xA0`, destroyed directly when it is there.
pub const RELEASE_004AA840: OwnedField = OwnedField {
    routine: 0x004A_A840,
    offset: 0xA0,
    release: Release::Destroyed,
};

/// Recovered from Ghidra function `FUN_0049f950` at `0x0049F950`, in 3 copies.
///
/// The field at `0x108`, destroyed directly when it is there.
pub const RELEASE_0049F950: OwnedField = OwnedField {
    routine: 0x0049_F950,
    offset: 0x108,
    release: Release::Destroyed,
};

/// Implements Ghidra function `FUN_00b2b900` at `0x00B2B900`.
///
/// The field at `0x38`, destroyed without being tested first.
///
/// The same offset as the guarded destruction at `0x004E0B00` and the freed
/// one at `0x004AE210`, so one offset is released all three ways in different
/// classes — which settles that the guard, like the route, is a choice.
pub const UNGUARDED_AT_0X38: OwnedField = OwnedField {
    routine: 0x00B2_B900,
    offset: 0x38,
    release: Release::DestroyedUnguarded,
};

/// Every owned-field release swept mechanically out of its routine.
///
/// Read straight off the routines, so each is named after the routine rather
/// than after the offset: two classes can free a field at the same offset and
/// they are still two routines.
pub const SWEPT_RELEASES: [OwnedField; 97] = [
    RELEASE_008283E0,
    RELEASE_008ABF50,
    RELEASE_007D8360,
    RELEASE_00697070,
    RELEASE_004D09A0,
    RELEASE_004AA8C0,
    RELEASE_004B3C30,
    RELEASE_0095BBA0,
    RELEASE_00987CA0,
    RELEASE_00715D10,
    RELEASE_00710EA0,
    RELEASE_004BDC20,
    RELEASE_00715710,
    RELEASE_004CB690,
    RELEASE_00974710,
    RELEASE_006E58F0,
    RELEASE_013A5FF0,
    RELEASE_00AE1380,
    RELEASE_00ADC0C0,
    RELEASE_00ADB4E0,
    RELEASE_0099B310,
    RELEASE_0089DB10,
    RELEASE_010B7560,
    RELEASE_00C7BA10,
    RELEASE_00ADC940,
    RELEASE_00986650,
    RELEASE_006911D0,
    RELEASE_0060EBB0,
    RELEASE_01809FA0,
    RELEASE_00D40C90,
    RELEASE_00CE90D0,
    RELEASE_00AA2FF0,
    RELEASE_008283B0,
    RELEASE_00715730,
    RELEASE_006032B0,
    RELEASE_0143FF00,
    RELEASE_012D67E0,
    RELEASE_010D6680,
    RELEASE_00E13B50,
    RELEASE_00CCD140,
    RELEASE_00ADF470,
    RELEASE_00ADF430,
    RELEASE_00AD6350,
    RELEASE_00988ED0,
    RELEASE_009885C0,
    RELEASE_0085D290,
    RELEASE_0081CB00,
    RELEASE_005B4110,
    RELEASE_004CDFF0,
    RELEASE_01CA51A0,
    RELEASE_01A7F8B0,
    RELEASE_01A52440,
    RELEASE_01A36DA0,
    RELEASE_019140B0,
    RELEASE_0176C8B0,
    RELEASE_016C5880,
    RELEASE_016C5830,
    RELEASE_015DA7C0,
    RELEASE_014CF6A0,
    RELEASE_013FE420,
    RELEASE_013E1770,
    RELEASE_013A83E0,
    RELEASE_012F9590,
    RELEASE_012D67B0,
    RELEASE_012BB020,
    RELEASE_0129ED00,
    RELEASE_01242D00,
    RELEASE_01142BD0,
    RELEASE_00CCC020,
    RELEASE_00CB0A60,
    RELEASE_00C82260,
    RELEASE_00B04010,
    RELEASE_00AF79C0,
    RELEASE_00AE6A50,
    RELEASE_00ADF4B0,
    RELEASE_00ADB4C0,
    RELEASE_00AD6310,
    RELEASE_00989B30,
    RELEASE_00972B80,
    RELEASE_008FE5F0,
    RELEASE_0085D2B0,
    RELEASE_007E4CE0,
    RELEASE_006E9980,
    RELEASE_0068D130,
    RELEASE_004CB670,
    RELEASE_004C7F80,
    RELEASE_005A1F70,
    RELEASE_005C1EB0,
    RELEASE_004AA880,
    RELEASE_004AA800,
    RELEASE_019E4900,
    RELEASE_019E6520,
    RELEASE_00781790,
    RELEASE_00728410,
    RELEASE_005B40D0,
    RELEASE_004AA840,
    RELEASE_0049F950,
];

/// Every owned-field release recovered so far.
pub const OWNED_FIELDS: [OwnedField; 15] = [
    FREED_AT_0X8,
    FREED_AT_0X38,
    FREED_AT_0X40,
    FREED_AT_0X48,
    FREED_AT_0X50,
    FREED_AT_0X58,
    FREED_AT_0X68,
    FREED_AT_0X78,
    FREED_AT_0X88,
    FREED_AT_0X98,
    DESTROYED_AT_0X38,
    DESTROYED_AT_0X48,
    DESTROYED_AT_0X78,
    DESTROYED_AT_0X88,
    UNGUARDED_AT_0X38,
];

/// Implements Ghidra functions `FUN_004ae210` at `0x004AE210` and
/// `FUN_0049f0f0` at `0x0049F0F0`.
///
/// What releasing one field does to the object holding it.
///
/// Both routines leave the field pointing where it pointed, so neither can be
/// called twice safely. Neither is ever meant to be: each runs once, while the
/// object around it is going.
#[must_use]
pub const fn clears_the_field(field: OwnedField) -> bool {
    let _ = field;
    false
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn the_two_recovered_releases_sit_at_different_offsets() {
        assert_eq!(FREED_AT_0X38.offset, 0x38);
        assert_eq!(DESTROYED_AT_0X48.offset, 0x48);
    }

    #[test]
    fn they_take_different_routes_to_the_same_place() {
        assert_eq!(FREED_AT_0X38.release, Release::Freed);
        assert_eq!(DESTROYED_AT_0X48.release, Release::Destroyed);
        assert_ne!(FREED_AT_0X38.release, DESTROYED_AT_0X48.release);
    }

    #[test]
    fn neither_puts_anything_back_in_the_field() {
        for field in OWNED_FIELDS {
            assert!(!clears_the_field(field), "{:#X}", field.routine);
        }
    }

    #[test]
    fn each_release_names_the_routine_it_came_from() {
        assert_eq!(FREED_AT_0X38.routine, 0x004A_E210);
        assert_eq!(DESTROYED_AT_0X48.routine, 0x0049_F0F0);
    }

    fn destroyed_count() -> usize {
        OWNED_FIELDS
            .iter()
            .filter(|field| field.release == Release::Destroyed)
            .count()
    }

    #[test]
    fn one_offset_is_released_all_three_ways_in_different_classes() {
        let ways: Vec<Release> = OWNED_FIELDS
            .iter()
            .filter(|field| field.offset == 0x38)
            .map(|field| field.release)
            .collect();

        assert!(ways.contains(&Release::Freed));
        assert!(ways.contains(&Release::Destroyed));
        assert!(ways.contains(&Release::DestroyedUnguarded));
    }

    #[test]
    fn every_offset_released_directly_is_also_released_through_the_run_time() {
        // So the route is a choice, not a consequence of where it sits.
        let freed: Vec<usize> = OWNED_FIELDS
            .iter()
            .filter(|field| field.release == Release::Freed)
            .map(|field| field.offset)
            .collect();
        let both: Vec<usize> = OWNED_FIELDS
            .iter()
            .filter(|field| field.release == Release::Destroyed && freed.contains(&field.offset))
            .map(|field| field.offset)
            .collect();

        assert_eq!(both.len(), 4);
        assert_eq!(both.len(), destroyed_count());
    }

    #[test]
    fn no_two_recovered_releases_are_the_same() {
        let mut routines: Vec<u32> = OWNED_FIELDS.iter().map(|field| field.routine).collect();
        let before = routines.len();
        routines.sort_unstable();
        routines.dedup();

        assert_eq!(routines.len(), before);
    }
}
