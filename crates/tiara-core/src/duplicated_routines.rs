//! Routines the binary carries more than one copy of.
//!
//! The same code appears at many addresses, byte for byte and calling the
//! same things: a generic container instantiated for one element type after
//! another, or a handler written once and compiled into every form that
//! wanted it. Each copy is a separate recovered function, but they are one
//! behaviour and are ported once.
//!
//! This is the register of which copies belong to which port. It exists
//! because the copies are real — a reader tracing an address out of the
//! original needs to be able to find where it went — and because the count
//! itself says something: a routine with a hundred copies is a template, not
//! a function somebody wrote a hundred times.

// The addresses are written the way the original names them, without the
// grouping that would otherwise be idiomatic: they are identifiers here, not
// quantities.
#![allow(clippy::unreadable_literal)]

/// One routine, the copy that was read, and every other address it appears at.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DuplicatedRoutine {
    /// The copy that was read and ported.
    pub ported: u32,
    /// Where the port lives.
    pub rust_path: &'static str,
    /// What it is called there, where it has a name of its own.
    pub rust_symbol: &'static str,
    /// Every other address the same code sits at.
    pub copies: &'static [u32],
}

impl DuplicatedRoutine {
    /// How many copies of this routine the binary carries in all.
    #[must_use]
    pub const fn total_copies(&self) -> usize {
        self.copies.len() + 1
    }

    /// Whether one address is one of them.
    #[must_use]
    pub fn holds(&self, address: u32) -> bool {
        self.ported == address || self.copies.contains(&address)
    }
}

/// The 43 further copies of `MIDDLE_TEXT_PAIR_RECORD`.
///
/// Ported from `FUN_00410ba0` at `0x00410BA0`.
pub const COPIES_OF_00410BA0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00410BA0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "MIDDLE_TEXT_PAIR_RECORD",
    copies: &[
        0x004BAD40, 0x005DA360, 0x007DDA30, 0x008AF3B0, 0x00A7C430, 0x00AFD890, 0x00C0E4C0,
        0x00C85E60, 0x00CD97C0, 0x00CD9C40, 0x00EC83E0, 0x00ED5470, 0x00F8B8D0, 0x01073140,
        0x010A8720, 0x010AFCC0, 0x0136C3E0, 0x013A47A0, 0x013AC630, 0x013CFD10, 0x013F42F0,
        0x01498310, 0x01575730, 0x01575E80, 0x01626020, 0x01629260, 0x01773D30, 0x017890C0,
        0x017A0130, 0x017A2530, 0x017B8C20, 0x01809E00, 0x018B7140, 0x019929F0, 0x019A45A0,
        0x019A52F0, 0x01A24D30, 0x01A49AA0, 0x01AA3E60, 0x01B9A5E0, 0x01BC4570, 0x01CA1FC0,
        0x01D472A0,
    ],
};

/// The 10 further copies of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00410ef0` at `0x00410EF0`.
pub const COPIES_OF_00410EF0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00410EF0,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[
        0x012E5220, 0x0131CC00, 0x01565CC0, 0x01575BD0, 0x01576150, 0x01612DA0, 0x016192B0,
        0x0161BAD0, 0x016F9AF0, 0x01A25170,
    ],
};

/// The 3 further copies of `RECORD_AT_0041B0A0`.
///
/// Ported from `FUN_0041b0a0` at `0x0041B0A0`.
pub const COPIES_OF_0041B0A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0041B0A0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0041B0A0",
    copies: &[0x00B8A8B0, 0x0135AF00, 0x01716F40],
};

/// The 3 further copies of `RECORD_AT_0041B1C0`.
///
/// Ported from `FUN_0041b1c0` at `0x0041B1C0`.
pub const COPIES_OF_0041B1C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0041B1C0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0041B1C0",
    copies: &[0x00C40600, 0x0119B500, 0x01608C20],
};

/// The 34 further copies of `EARLY_TEXT_TRIO_RECORD`.
///
/// Ported from `FUN_0041b4e0` at `0x0041B4E0`.
pub const COPIES_OF_0041B4E0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0041B4E0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "EARLY_TEXT_TRIO_RECORD",
    copies: &[
        0x00441040, 0x004CA140, 0x007230C0, 0x00835370, 0x008356E0, 0x00CFB1D0, 0x00D030B0,
        0x00D7DFA0, 0x00E0E870, 0x00EC54B0, 0x00ED15D0, 0x00ED3C40, 0x00F2CBF0, 0x00F74970,
        0x00F8E390, 0x01084DF0, 0x010CA860, 0x013CB510, 0x014ECF40, 0x014EF710, 0x015172F0,
        0x015697B0, 0x015FB150, 0x015FB2D0, 0x015FEA30, 0x01625BD0, 0x016F7130, 0x019ACFD0,
        0x019D9EB0, 0x01A2D2E0, 0x01B80910, 0x01BA2AC0, 0x01BB6F90, 0x01C80930,
    ],
};

/// The 12 further copies of `RECORD_AT_0041E320`.
///
/// Ported from `FUN_0041e320` at `0x0041E320`.
pub const COPIES_OF_0041E320: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0041E320,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0041E320",
    copies: &[
        0x004B7100, 0x004B7230, 0x004B9770, 0x004B9D60, 0x004D8310, 0x004D8450, 0x005D1440,
        0x006E8E50, 0x00B98740, 0x00B9B080, 0x00C46960, 0x0157D0C0,
    ],
};

/// The 3 further copies of `RECORD_AT_0041E3A0`.
///
/// Ported from `FUN_0041e3a0` at `0x0041E3A0`.
pub const COPIES_OF_0041E3A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0041E3A0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0041E3A0",
    copies: &[0x009E3ED0, 0x009E44F0, 0x009E46D0],
};

/// The 2 further copies of `RECORD_AT_0041E8A0`.
///
/// Ported from `FUN_0041e8a0` at `0x0041E8A0`.
pub const COPIES_OF_0041E8A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0041E8A0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0041E8A0",
    copies: &[0x006F2840, 0x01B3B610],
};

/// The 30 further copies of `FREED_AT_0X8`.
///
/// Ported from `FUN_004249e0` at `0x004249E0`.
pub const COPIES_OF_004249E0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004249E0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "FREED_AT_0X8",
    copies: &[
        0x0049FBF0, 0x004A06F0, 0x004DA490, 0x005A1490, 0x00611710, 0x006195E0, 0x00722EA0,
        0x00785BD0, 0x008275B0, 0x00957240, 0x00957500, 0x00A732F0, 0x00A796D0, 0x00AFFCA0,
        0x00B19640, 0x00BBBBB0, 0x00C72030, 0x00DE5B40, 0x00DE5E60, 0x00DE5F30, 0x00E08CB0,
        0x00E14730, 0x00F47430, 0x010DBCF0, 0x010E1030, 0x014F9780, 0x0153C470, 0x0153FFB0,
        0x015E81B0, 0x01CB2030,
    ],
};

/// The 4 further copies of `RECORD_AT_0043F970`.
///
/// Ported from `FUN_0043f970` at `0x0043F970`.
pub const COPIES_OF_0043F970: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0043F970,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0043F970",
    copies: &[0x0043FB00, 0x00458BC0, 0x00458C50, 0x00EA4340],
};

/// The 4 further copies of `RECORD_AT_00440940`.
///
/// Ported from `FUN_00440940` at `0x00440940`.
pub const COPIES_OF_00440940: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00440940,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00440940",
    copies: &[0x005D02F0, 0x00C4DAC0, 0x015FA100, 0x01BA1390],
};

/// The 1 further copy of `RECORD_AT_004471C0`.
///
/// Ported from `FUN_004471c0` at `0x004471C0`.
pub const COPIES_OF_004471C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004471C0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_004471C0",
    copies: &[0x01A0D0C0],
};

/// The 9 further copies of `RECORD_AT_0044FA40`.
///
/// Ported from `FUN_0044fa40` at `0x0044FA40`.
pub const COPIES_OF_0044FA40: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0044FA40,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0044FA40",
    copies: &[
        0x009DFDF0, 0x00B046A0, 0x00C031C0, 0x00FD95B0, 0x00FF8940, 0x01027F50, 0x0103C900,
        0x010AF7E0, 0x01B74E00,
    ],
};

/// The 1 further copy of `RECORD_AT_00450000`.
///
/// Ported from `FUN_00450000` at `0x00450000`.
pub const COPIES_OF_00450000: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00450000,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00450000",
    copies: &[0x00F34B70],
};

/// The 146 further copies of `inherited_destructor_flag`.
///
/// Ported from `FUN_004528e0` at `0x004528E0`.
pub const COPIES_OF_004528E0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004528E0,
    rust_path: "crates/tiara-core/src/delphi_runtime.rs",
    rust_symbol: "inherited_destructor_flag",
    copies: &[
        0x004DCE30, 0x004DE470, 0x004DF760, 0x004E0B30, 0x004E1F80, 0x004E3630, 0x004E3B40,
        0x004E4110, 0x004E5570, 0x004E6E40, 0x004E8530, 0x004E9FC0, 0x004EB320, 0x004EC780,
        0x004EE480, 0x004EFBB0, 0x004F15C0, 0x004F2DC0, 0x004F4120, 0x004F5920, 0x0055CBD0,
        0x0055E100, 0x0055F5C0, 0x0055FA90, 0x00560B40, 0x00562270, 0x00562C00, 0x00564A00,
        0x005661A0, 0x00567510, 0x00568960, 0x00569CD0, 0x005A1E30, 0x005A3640, 0x005A4B00,
        0x005A4FD0, 0x005B4E50, 0x005C1F00, 0x005C3920, 0x005C3E80, 0x005DE980, 0x005E01C0,
        0x005E1820, 0x00607B30, 0x00614AD0, 0x00716D60, 0x0078A350, 0x0078BA40, 0x0078BFB0,
        0x0078D3C0, 0x0078EAF0, 0x0078F1E0, 0x00790AB0, 0x00791480, 0x00792940, 0x00792E10,
        0x007937F0, 0x00795080, 0x00795AC0, 0x007974D0, 0x00797A80, 0x00799170, 0x0079A460,
        0x0079B750, 0x00852DB0, 0x008B9290, 0x008BA580, 0x0099CCF0, 0x0099DFE0, 0x0099F3F0,
        0x009A06E0, 0x009A19D0, 0x009A2CC0, 0x009A4090, 0x009A4890, 0x009A5090, 0x009A57B0,
        0x009A6AA0, 0x009A7F30, 0x009A99F0, 0x009A9FE0, 0x009AB3B0, 0x009DD880, 0x00A08460,
        0x00A29F20, 0x00A3E680, 0x00A72D50, 0x00B3C250, 0x00B4D0E0, 0x00BB4C20, 0x00BE20D0,
        0x00BE34F0, 0x00C1B5E0, 0x00C4E4B0, 0x00C7D5F0, 0x00CD3700, 0x00D3A520, 0x00D46EE0,
        0x00D49800, 0x00D9FB00, 0x00DA1230, 0x00DD8A40, 0x00EAEED0, 0x00EB07A0, 0x00F34CF0,
        0x00F363A0, 0x00F36BB0, 0x00F37EA0, 0x00F829E0, 0x010E1430, 0x01106CA0, 0x013C1D30,
        0x01486500, 0x01487DD0, 0x01583310, 0x01584B30, 0x01585060, 0x01585660, 0x0167DB60,
        0x0167EF90, 0x016805F0, 0x016818E0, 0x016D0210, 0x0171BB50, 0x0171D000, 0x0171D4D0,
        0x01779550, 0x0177AC10, 0x01789290, 0x019B0100, 0x019B17F0, 0x019B2BD0, 0x01A91120,
        0x01B111B0, 0x01B12730, 0x01B13A20, 0x01B14E80, 0x01B16890, 0x01B16E40, 0x01B25EF0,
        0x01B27C30, 0x01B8CC60, 0x01CA5540, 0x01CA6CC0, 0x01D2AED0, 0x01D69210,
    ],
};

/// The 133 further copies of `dynamic_array_length`.
///
/// Ported from `FUN_00452920` at `0x00452920`.
pub const COPIES_OF_00452920: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00452920,
    rust_path: "crates/tiara-core/src/delphi_runtime.rs",
    rust_symbol: "dynamic_array_length",
    copies: &[
        0x004DD010, 0x004DE620, 0x004DF910, 0x004E0CE0, 0x004E42C0, 0x004E73F0, 0x004E86E0,
        0x004EA170, 0x004EB4D0, 0x004F0480, 0x004F1770, 0x004F2F70, 0x004F42D0, 0x004F5AD0,
        0x004F7430, 0x004F8940, 0x004F9F40, 0x004FB450, 0x004FCFD0, 0x004FE4E0, 0x004FF620,
        0x005008B0, 0x0055CD80, 0x00564BB0, 0x00566350, 0x005676C0, 0x00568B10, 0x00569E80,
        0x0056B7A0, 0x0056CA60, 0x0056E500, 0x0056FA40, 0x00570BB0, 0x005A2030, 0x005A5BF0,
        0x005A6EB0, 0x005B5000, 0x005C44E0, 0x005C5A90, 0x005C6C20, 0x005DEB70, 0x005E23D0,
        0x00614C80, 0x00716F10, 0x0078C160, 0x00797C80, 0x00799320, 0x0079A610, 0x0079B900,
        0x0079CAE0, 0x0079DDA0, 0x0079F160, 0x007A0420, 0x007A1590, 0x007A2AD0, 0x007A3C40,
        0x007A4F30, 0x007A60A0, 0x007A7210, 0x007A8500, 0x007A97A0, 0x007AACF0, 0x0082CA50,
        0x0082DB90, 0x00854BA0, 0x0086CD70, 0x008B9440, 0x008BA730, 0x0099CEA0, 0x0099E190,
        0x0099F5A0, 0x009A0890, 0x009A1B80, 0x009A2E70, 0x009A4260, 0x009A4A60, 0x009A5260,
        0x009A5960, 0x009A6C50, 0x009AA190, 0x009AB580, 0x009ACA10, 0x009ADB80, 0x009AECF0,
        0x009B0300, 0x009B1850, 0x009B2F40, 0x009DDA30, 0x00BB4E00, 0x00BE2290, 0x00BE36A0,
        0x00C4E660, 0x00C8BA00, 0x00DA17D0, 0x00DA2AC0, 0x00EB0D50, 0x00EB2290, 0x00EEC300,
        0x00EED870, 0x00F36D60, 0x00F38050, 0x00F391C0, 0x01132950, 0x01143C10, 0x01145160,
        0x014889C0, 0x01489F00, 0x015858A0, 0x01586E00, 0x01588380, 0x015894E0, 0x0167DD20,
        0x0167F140, 0x016807A0, 0x01681A90, 0x016D03C0, 0x0171DA70, 0x0171ED60, 0x0171FEE0,
        0x0175B0D0, 0x01789440, 0x019B0300, 0x019B19A0, 0x01A92B20, 0x01B11360, 0x01B128E0,
        0x01B13BD0, 0x01B16FF0, 0x01B27DE0, 0x01B8CE60, 0x01CA7630, 0x01CA8B70, 0x01D693C0,
    ],
};

/// The 1 further copy of `RECORD_AT_00458AA0`.
///
/// Ported from `FUN_00458aa0` at `0x00458AA0`.
pub const COPIES_OF_00458AA0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00458AA0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00458AA0",
    copies: &[0x00458B20],
};

/// The 14 further copies of `RECORD_AT_0045B7F0`.
///
/// Ported from `FUN_0045b7f0` at `0x0045B7F0`.
pub const COPIES_OF_0045B7F0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0045B7F0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0045B7F0",
    copies: &[
        0x0045BA60, 0x0045BC50, 0x004BAAC0, 0x004C29E0, 0x004C3120, 0x004C8420, 0x004C9E50,
        0x004C9F30, 0x004D81A0, 0x004D86D0, 0x004D88F0, 0x005575C0, 0x009E45A0, 0x00F30980,
    ],
};

/// The 4 further copies of `RECORD_AT_004601D0`.
///
/// Ported from `FUN_004601d0` at `0x004601D0`.
pub const COPIES_OF_004601D0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004601D0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_004601D0",
    copies: &[0x004603B0, 0x00C8F400, 0x01615A70, 0x01CA3DF0],
};

/// The 205 further copies of `DESTROYED_AT_0X48`.
///
/// Ported from `FUN_0049f0f0` at `0x0049F0F0`.
pub const COPIES_OF_0049F0F0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0049F0F0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "DESTROYED_AT_0X48",
    copies: &[
        0x0049F480, 0x004DCF50, 0x004DE580, 0x004DF870, 0x004E0C40, 0x004E1F30, 0x004E20B0,
        0x004E2CE0, 0x004E2E70, 0x004E3740, 0x004E3C60, 0x004E4220, 0x004E5520, 0x004E56A0,
        0x004E62B0, 0x004E6440, 0x004E6F50, 0x004E8640, 0x004EA0D0, 0x004EB430, 0x004EC730,
        0x004EC8B0, 0x004ED4B0, 0x004ED640, 0x004EE450, 0x004EE590, 0x004EF0B0, 0x004EF200,
        0x004EFCC0, 0x004F16D0, 0x004F2ED0, 0x004F4230, 0x004F5A30, 0x0055CCE0, 0x0055E0D0,
        0x0055E210, 0x0055ED30, 0x0055EE80, 0x0055F6D0, 0x0055FBA0, 0x00560AF0, 0x00560C70,
        0x005618E0, 0x00561A70, 0x00562380, 0x00562BB0, 0x00562D30, 0x00563940, 0x00563AD0,
        0x00564B10, 0x005662B0, 0x00567620, 0x00568A70, 0x00569DE0, 0x005A3610, 0x005A3750,
        0x005A4270, 0x005A43C0, 0x005A4C10, 0x005A50E0, 0x005B4F60, 0x005C3A30, 0x005DEAB0,
        0x005E0170, 0x005E02F0, 0x005E0EF0, 0x005E1080, 0x005E1940, 0x00614BE0, 0x006FD0E0,
        0x00716E70, 0x0072A720, 0x00782BD0, 0x0078A320, 0x0078A460, 0x0078AF70, 0x0078B0C0,
        0x0078BB50, 0x0078C0C0, 0x0078D390, 0x0078D4D0, 0x0078DFF0, 0x0078E140, 0x0078EC00,
        0x0078F190, 0x0078F310, 0x0078FF20, 0x007900B0, 0x00790BC0, 0x00791450, 0x00791590,
        0x007920B0, 0x00792200, 0x00792A50, 0x00792F20, 0x00795050, 0x00795A70, 0x007968D0,
        0x00796A60, 0x007974A0, 0x007975E0, 0x00799280, 0x0079A570, 0x0079B860, 0x00852D60,
        0x00852EE0, 0x00853BE0, 0x00853D70, 0x008B93A0, 0x008BA690, 0x0099CE00, 0x0099E0F0,
        0x0099F500, 0x009A07F0, 0x009A1AE0, 0x009A2DD0, 0x009A41A0, 0x009A44A0, 0x009A49A0,
        0x009A4CA0, 0x009A51A0, 0x009A54A0, 0x009A58C0, 0x009A6BB0, 0x009A7EE0, 0x009A8D50,
        0x009A8EE0, 0x009A99A0, 0x009A9B20, 0x009AA0F0, 0x009AB4C0, 0x009AB7C0, 0x009DD990,
        0x00BB4D40, 0x00BE3600, 0x00C4E5C0, 0x00D99610, 0x00D996C0, 0x00D9FAD0, 0x00D9FC10,
        0x00DA0730, 0x00DA0880, 0x00DA1340, 0x00EAEE80, 0x00EAF000, 0x00EAFC10, 0x00EAFDA0,
        0x00EB08B0, 0x00F34CA0, 0x00F34E20, 0x00F35A50, 0x00F35BE0, 0x00F364B0, 0x00F36CC0,
        0x00F37FB0, 0x014864B0, 0x01486630, 0x01487240, 0x014873D0, 0x01487EE0, 0x015832C0,
        0x01584130, 0x015842C0, 0x01584C40, 0x01585010, 0x01585190, 0x0167F0A0, 0x01680700,
        0x016819F0, 0x016D0320, 0x0171BB20, 0x0171BC60, 0x0171C770, 0x0171C8C0, 0x0171D110,
        0x0171D5E0, 0x01779500, 0x01779680, 0x0177A2D0, 0x0177A460, 0x0177AD30, 0x017893A0,
        0x019B1900, 0x019B2CE0, 0x01A91230, 0x01B112C0, 0x01B12840, 0x01B13B30, 0x01B14E30,
        0x01B15C90, 0x01B15E20, 0x01B16860, 0x01B169A0, 0x01B16F50, 0x01B25EA0, 0x01B26020,
        0x01B26CC0, 0x01B26E50, 0x01B27D40, 0x01CA54F0, 0x01CA5670, 0x01CA6310, 0x01CA64A0,
        0x01CA6DD0, 0x01D69320,
    ],
};

/// The 4 further copies of `RECORD_AT_0049F4E0`.
///
/// Ported from `FUN_0049f4e0` at `0x0049F4E0`.
pub const COPIES_OF_0049F4E0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0049F4E0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0049F4E0",
    copies: &[0x004E56F0, 0x004FAE80, 0x004FAF30, 0x004FB300],
};

/// The 1 further copy of `RELEASE_0049F950`.
///
/// Ported from `FUN_0049f950` at `0x0049F950`.
pub const COPIES_OF_0049F950: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0049F950,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_0049F950",
    copies: &[0x01743900],
};

/// The 53 further copies of `EARLY_TEXT_PAIR_RECORD`.
///
/// Ported from `FUN_0049fe50` at `0x0049FE50`.
pub const COPIES_OF_0049FE50: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0049FE50,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "EARLY_TEXT_PAIR_RECORD",
    copies: &[
        0x005B3910, 0x005B46A0, 0x005EC860, 0x006654C0, 0x0068E160, 0x006D55E0, 0x006D5850,
        0x006E6810, 0x00729980, 0x00729AD0, 0x00883720, 0x00883B80, 0x00884480, 0x008845E0,
        0x00884740, 0x008848B0, 0x00884A20, 0x00884B90, 0x00884CF0, 0x00885790, 0x00885C00,
        0x00885D70, 0x008861D0, 0x00886350, 0x008864C0, 0x00886630, 0x008867A0, 0x00886900,
        0x00886A80, 0x00886BF0, 0x008877A0, 0x00887DB0, 0x008880E0, 0x0088A0F0, 0x0088A790,
        0x0088C2E0, 0x0088C630, 0x0088C7C0, 0x0088C950, 0x0088CAE0, 0x008F8B40, 0x00C8D400,
        0x00CA9150, 0x00CB1E10, 0x00CBB0E0, 0x010BE270, 0x0132ED50, 0x0132EF20, 0x01526080,
        0x0186B820, 0x01A42610, 0x01BE3FA0, 0x01BF8F90,
    ],
};

/// The 41 further copies of `DESTROYED_AT_0X88`.
///
/// Ported from `FUN_004a00c0` at `0x004A00C0`.
pub const COPIES_OF_004A00C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004A00C0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "DESTROYED_AT_0X88",
    copies: &[
        0x004F7E00, 0x004FA910, 0x004FD9A0, 0x004FFF90, 0x0055D6F0, 0x0056C110, 0x0056EED0,
        0x00571580, 0x005A6560, 0x005DF540, 0x005E2DA0, 0x00789E70, 0x0079D450, 0x0079FAD0,
        0x007A1F60, 0x007A45B0, 0x007A8E80, 0x007AA170, 0x007AB660, 0x00855570, 0x0099EB00,
        0x009B0CD0, 0x009B2220, 0x00BE2C00, 0x00BE4010, 0x00DA2140, 0x00EB1720, 0x00EECCD0,
        0x00F39B90, 0x011445E0, 0x01145AD0, 0x01489390, 0x015857D0, 0x015877D0, 0x01589EB0,
        0x0167E6A0, 0x0171E3E0, 0x0175BAA0, 0x01B17960, 0x01B8D830, 0x01CA8000,
    ],
};

/// The 99 further copies of `FREED_AT_0X58`.
///
/// Ported from `FUN_004a5130` at `0x004A5130`.
pub const COPIES_OF_004A5130: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004A5130,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "FREED_AT_0X58",
    copies: &[
        0x004AE380, 0x00602110, 0x00652E60, 0x00662B10, 0x00663980, 0x0069A190, 0x006DAD20,
        0x00715F00, 0x0072E9E0, 0x007FAF90, 0x00843DC0, 0x0094ED70, 0x00958430, 0x0095E840,
        0x0097D720, 0x0097DCF0, 0x00984210, 0x00986000, 0x00986A10, 0x00986D30, 0x00987060,
        0x00989ED0, 0x0098AB80, 0x0098AE50, 0x0098B0C0, 0x009DD6E0, 0x00A3B600, 0x00A45730,
        0x00ADB730, 0x00BB3940, 0x00BBA4D0, 0x00BE0D30, 0x00C10250, 0x00C28280, 0x00C36220,
        0x00C389E0, 0x00C62930, 0x00C67BB0, 0x00C67D90, 0x00CD6070, 0x00CE9230, 0x00D45C10,
        0x00D73830, 0x00D75360, 0x00DD9AC0, 0x00E05F20, 0x0108D040, 0x010902E0, 0x010AE090,
        0x010B4AA0, 0x010B8E50, 0x010D5A40, 0x01126990, 0x01156D50, 0x0135B860, 0x0139E2C0,
        0x01464120, 0x01469C00, 0x01469DB0, 0x0146F850, 0x014707A0, 0x0147D590, 0x014BA050,
        0x0157F070, 0x015A9D40, 0x015DDE70, 0x015DE000, 0x015FEEE0, 0x015FF0B0, 0x015FF2F0,
        0x015FF4D0, 0x01605150, 0x0160AFA0, 0x01636900, 0x01774550, 0x01776610, 0x01776CF0,
        0x017A4B10, 0x017B3A30, 0x0180C880, 0x01813100, 0x01816F10, 0x01836D60, 0x01837AA0,
        0x01862A90, 0x018BBC70, 0x018C0760, 0x0196E010, 0x019BB1C0, 0x01A2AB40, 0x01A50D70,
        0x01A51110, 0x01A512F0, 0x01AE79E0, 0x01B4C340, 0x01B824E0, 0x01BC9EE0, 0x01BE9950,
        0x01C94C10,
    ],
};

/// The 15 further copies of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_004aa190` at `0x004AA190`.
pub const COPIES_OF_004AA190: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004AA190,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[
        0x005ED910, 0x006212A0, 0x00E14580, 0x010C2720, 0x010D3BC0, 0x012BDF80, 0x013BDCA0,
        0x0153FDA0, 0x016990D0, 0x0169ADF0, 0x0169CA50, 0x0169E250, 0x016B1F80, 0x0181ED20,
        0x01BBAE90,
    ],
};

/// The 5 further copies of `RELEASE_004AA800`.
///
/// Ported from `FUN_004aa800` at `0x004AA800`.
pub const COPIES_OF_004AA800: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004AA800,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_004AA800",
    copies: &[0x005C4EB0, 0x005C75F0, 0x00781420, 0x00782800, 0x00BE1D10],
};

/// The 1 further copy of `RELEASE_004AA840`.
///
/// Ported from `FUN_004aa840` at `0x004AA840`.
pub const COPIES_OF_004AA840: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004AA840,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_004AA840",
    copies: &[0x00781460],
};

/// The 7 further copies of `RELEASE_004AA880`.
///
/// Ported from `FUN_004aa880` at `0x004AA880`.
pub const COPIES_OF_004AA880: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004AA880,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_004AA880",
    copies: &[
        0x005A2A00, 0x005B4090, 0x007833D0, 0x00798650, 0x007A7B90, 0x019B0CD0, 0x019DDB20,
    ],
};

/// The 13 further copies of `RELEASE_004AA8C0`.
///
/// Ported from `FUN_004aa8c0` at `0x004AA8C0`.
pub const COPIES_OF_004AA8C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004AA8C0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_004AA8C0",
    copies: &[
        0x008A5800, 0x009498B0, 0x0095CD70, 0x0095CDD0, 0x009837C0, 0x00983B20, 0x00A739B0,
        0x00AE6390, 0x00D9CBE0, 0x013B99C0, 0x014AF5B0, 0x01636CF0, 0x01A30480,
    ],
};

/// The 212 further copies of `FREED_AT_0X38`.
///
/// Ported from `FUN_004ae210` at `0x004AE210`.
pub const COPIES_OF_004AE210: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004AE210,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "FREED_AT_0X38",
    copies: &[
        0x004B4440, 0x004B44C0, 0x004B4980, 0x004B8D60, 0x004B8E00, 0x004B9E50, 0x004B9F90,
        0x005B8340, 0x005D12E0, 0x005DA200, 0x005DABE0, 0x005DD360, 0x005DD380, 0x005DDF10,
        0x00602230, 0x00602310, 0x006A56F0, 0x006DA920, 0x006DF7D0, 0x006E4500, 0x006E4580,
        0x006E4620, 0x006E4690, 0x006E4710, 0x006E47B0, 0x006F1F30, 0x00741FA0, 0x00779590,
        0x00779920, 0x007D5F40, 0x007D7770, 0x007D7830, 0x007E7960, 0x00809400, 0x0080E2F0,
        0x0089C180, 0x0089C3B0, 0x008A04B0, 0x008AF9D0, 0x0094D400, 0x0094D4C0, 0x0094D580,
        0x0094D640, 0x00958F20, 0x0095EB40, 0x00974F10, 0x0097D3F0, 0x0097D4C0, 0x0097D570,
        0x0097DE00, 0x0097DEB0, 0x0097E1C0, 0x0097E270, 0x0097E320, 0x0097E900, 0x0097EA40,
        0x0097EFE0, 0x0097FAD0, 0x0097FBD0, 0x0097FCD0, 0x0097FE00, 0x0097FEC0, 0x0097FF50,
        0x00985B10, 0x00985C00, 0x00997EA0, 0x009D69F0, 0x009DC1C0, 0x009DCBE0, 0x009E32E0,
        0x009E8670, 0x009E89D0, 0x009E99E0, 0x00A3B6B0, 0x00A419F0, 0x00A45620, 0x00A62C20,
        0x00A72E60, 0x00A7C760, 0x00AF07D0, 0x00B41820, 0x00BB39F0, 0x00BB4310, 0x00BC1110,
        0x00BD0390, 0x00C0FD60, 0x00C0FF90, 0x00C1A830, 0x00C1A8B0, 0x00C28620, 0x00C2B7E0,
        0x00C2E010, 0x00C33250, 0x00C360C0, 0x00C51940, 0x00CB4270, 0x00CCF460, 0x00CDAB20,
        0x00CDAC00, 0x00CDADB0, 0x00CDB310, 0x00CDB3C0, 0x00CDB470, 0x00CDB770, 0x00CDB7F0,
        0x00CDB880, 0x00CFBC10, 0x00D0D660, 0x00D0D840, 0x00D73640, 0x00D736C0, 0x00D73930,
        0x00D74A60, 0x00D74AF0, 0x00DE6A80, 0x00DE6B10, 0x00EA91C0, 0x00F03900, 0x00F03C40,
        0x00F03CC0, 0x00F2D240, 0x00F2D300, 0x0106A470, 0x010B1350, 0x010B5100, 0x010B6E30,
        0x010BB8A0, 0x011564D0, 0x01156960, 0x013C23E0, 0x0141A730, 0x0146D0F0, 0x01471240,
        0x0147C510, 0x0147D1D0, 0x014F1560, 0x015B4000, 0x015B41E0, 0x015CA000, 0x015E2EE0,
        0x015EEDA0, 0x015FC750, 0x015FE660, 0x015FE6E0, 0x0160B7B0, 0x01773EF0, 0x01776BD0,
        0x017B9390, 0x01804780, 0x01804850, 0x01804930, 0x018049D0, 0x018072A0, 0x018078B0,
        0x0180AA10, 0x01816B00, 0x01816BB0, 0x01816CC0, 0x01816D40, 0x01816DE0, 0x0181EE00,
        0x0181EE90, 0x0181EF00, 0x0181EF70, 0x0184CF60, 0x0184D1C0, 0x0184D2B0, 0x0185CC10,
        0x01862790, 0x01862820, 0x01862940, 0x01862C10, 0x01866A60, 0x01869300, 0x01869380,
        0x01876980, 0x018880B0, 0x01893290, 0x018935D0, 0x018AA0F0, 0x018BB310, 0x018BB490,
        0x018BB540, 0x018BD3D0, 0x01914E40, 0x01914F50, 0x01950420, 0x01967880, 0x0196DE80,
        0x0196E0E0, 0x0196E190, 0x0196E210, 0x0196E2B0, 0x01A3D680, 0x01A3EF20, 0x01A4D180,
        0x01B21580, 0x01B7C550, 0x01BE45C0, 0x01BF7DF0, 0x01C079F0, 0x01C17600, 0x01C1F480,
        0x01C7D400, 0x01C7D700, 0x01C7DF70, 0x01C8F270, 0x01C93BD0, 0x01C93D80, 0x01C9AFC0,
        0x01CF4A90, 0x01CF7750,
    ],
};

/// The 30 further copies of `FREED_AT_0X50`.
///
/// Ported from `FUN_004ae3a0` at `0x004AE3A0`.
pub const COPIES_OF_004AE3A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004AE3A0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "FREED_AT_0X50",
    copies: &[
        0x005A1FA0, 0x00602130, 0x006A54D0, 0x0072D570, 0x00793940, 0x007951D0, 0x00795C30,
        0x00797BF0, 0x007D8860, 0x0097D750, 0x0097DD20, 0x009A80A0, 0x00A025A0, 0x00BE2220,
        0x00C10270, 0x00D73850, 0x010B4AC0, 0x0139E2E0, 0x0139E5F0, 0x01583480, 0x0167DCB0,
        0x01798FC0, 0x01837AC0, 0x0185A620, 0x019B0270, 0x019BB1E0, 0x01A2B9A0, 0x01B14FF0,
        0x01B246B0, 0x01B8CDD0,
    ],
};

/// The 12 further copies of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_004ae6a0` at `0x004AE6A0`.
pub const COPIES_OF_004AE6A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004AE6A0,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[
        0x004AFDC0, 0x004B1A60, 0x004B2790, 0x006DEAA0, 0x006EF960, 0x006FAC40, 0x00726F00,
        0x0072A490, 0x007DD290, 0x009E6EA0, 0x00F32D30, 0x00F34430,
    ],
};

/// The 127 further copies of `FORMATTED_EXCEPTION_CLASS`.
///
/// Ported from `FUN_004ae910` at `0x004AE910`.
pub const COPIES_OF_004AE910: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004AE910,
    rust_path: "crates/tiara-core/src/delphi_runtime.rs",
    rust_symbol: "FORMATTED_EXCEPTION_CLASS",
    copies: &[
        0x004DD590, 0x004DEB20, 0x004DFE10, 0x004E11E0, 0x004E47C0, 0x004E78F0, 0x004E8BE0,
        0x004EA6E0, 0x004EB9D0, 0x004F0980, 0x004F1C70, 0x004F34E0, 0x004F47D0, 0x004F6040,
        0x004F7940, 0x004F8E50, 0x004FA450, 0x004FB960, 0x004FD4E0, 0x004FE9E0, 0x004FFB20,
        0x00500DB0, 0x0055D280, 0x005650B0, 0x00566850, 0x00567BC0, 0x00569010, 0x0056A380,
        0x0056BCA0, 0x0056CF60, 0x0056EA10, 0x0056FF40, 0x005710C0, 0x005A2540, 0x005A60F0,
        0x005A73B0, 0x005B5500, 0x005C49F0, 0x005C5F90, 0x005C7130, 0x005DF080, 0x005E28E0,
        0x00615180, 0x00717410, 0x0078C660, 0x00798190, 0x00799820, 0x0079AB10, 0x0079BE00,
        0x0079CFE0, 0x0079E2A0, 0x0079F660, 0x007A0920, 0x007A1AA0, 0x007A2FD0, 0x007A4140,
        0x007A5430, 0x007A65A0, 0x007A7720, 0x007A8A10, 0x007A9CB0, 0x007AB1F0, 0x0082CF50,
        0x0082E090, 0x008550B0, 0x008B9940, 0x008BAC30, 0x0099D3A0, 0x0099E690, 0x0099FAA0,
        0x009A0D90, 0x009A2080, 0x009A3370, 0x009A5E60, 0x009A7150, 0x009AA690, 0x009ACF10,
        0x009AE080, 0x009AF1F0, 0x009B0810, 0x009B1D60, 0x009B3440, 0x009DDF30, 0x00BB5310,
        0x00BE2790, 0x00BE3BA0, 0x00C4EB60, 0x00DA1CD0, 0x00DA2FC0, 0x00EB1260, 0x00EB2790,
        0x00EEC810, 0x00EEDD70, 0x00F37260, 0x00F38550, 0x00F396D0, 0x01132E50, 0x01144120,
        0x01145660, 0x01488ED0, 0x0148A400, 0x01585DB0, 0x01587310, 0x01588880, 0x015899F0,
        0x0167E230, 0x0167F640, 0x01680C80, 0x01681F90, 0x016D08C0, 0x0171DF70, 0x0171F260,
        0x017203E0, 0x0175B5E0, 0x01789940, 0x019B0810, 0x019B1EA0, 0x01A93020, 0x01B11860,
        0x01B12DE0, 0x01B140D0, 0x01B174F0, 0x01B282E0, 0x01B8D370, 0x01CA7B40, 0x01CA9050,
        0x01D698C0,
    ],
};

/// The 128 further copies of `FREED_AT_0X48`.
///
/// Ported from `FUN_004af9f0` at `0x004AF9F0`.
pub const COPIES_OF_004AF9F0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004AF9F0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "FREED_AT_0X48",
    copies: &[
        0x004AFA10, 0x004C3A40, 0x004D9E60, 0x005D1920, 0x0060A970, 0x0060AA10, 0x00653F10,
        0x006542A0, 0x00654570, 0x0065C1D0, 0x00687630, 0x006A54F0, 0x006E5B80, 0x006E5F80,
        0x007D5A90, 0x007D5C10, 0x007D7DD0, 0x007D8550, 0x007D8570, 0x007DDD30, 0x007E40A0,
        0x007E5BA0, 0x00829350, 0x0082C7B0, 0x0089C2B0, 0x00947150, 0x00947C00, 0x0097D2D0,
        0x0097E090, 0x0097F380, 0x00980620, 0x00983140, 0x00985200, 0x009DCA20, 0x009DCB20,
        0x00A019F0, 0x00A3B910, 0x00A3BA20, 0x00A3EE00, 0x00A478B0, 0x00A59770, 0x00A62CA0,
        0x00AC48C0, 0x00ADB8B0, 0x00AF9880, 0x00BAF8D0, 0x00BB4290, 0x00BC18C0, 0x00BC19F0,
        0x00BC1AE0, 0x00BC1BD0, 0x00C100D0, 0x00C103A0, 0x00C1BDD0, 0x00C35EE0, 0x00C702D0,
        0x00CC5DA0, 0x00D06390, 0x00D0D730, 0x00D8EED0, 0x00D8EFF0, 0x00DE7370, 0x00E06100,
        0x00F067E0, 0x00F06940, 0x00F06AA0, 0x00F06C00, 0x00F06D70, 0x00F314C0, 0x01050AD0,
        0x01079860, 0x010ADCF0, 0x010ADDF0, 0x010ADF00, 0x010B52C0, 0x01268530, 0x012846B0,
        0x012E8CF0, 0x0139E300, 0x0139E610, 0x013B2530, 0x013B9590, 0x0141AD10, 0x01471430,
        0x0147D2C0, 0x0147D710, 0x014B9E30, 0x0156B020, 0x0157F470, 0x015B40D0, 0x015DA640,
        0x015E2BF0, 0x01605380, 0x01605610, 0x016057A0, 0x01626CA0, 0x0176C220, 0x0179D440,
        0x017E15D0, 0x01804B00, 0x0180E1F0, 0x018AA3D0, 0x018CA880, 0x0194F790, 0x0194F840,
        0x0196D130, 0x01971780, 0x01972CA0, 0x01972E30, 0x01A02400, 0x01A2F800, 0x01A4FFC0,
        0x01A514A0, 0x01A54C30, 0x01A54E60, 0x01AE7810, 0x01AE7B70, 0x01AE7CC0, 0x01B1D2B0,
        0x01B25290, 0x01B259E0, 0x01B82350, 0x01B84030, 0x01BD4CE0, 0x01BF7D30, 0x01C7D2C0,
        0x01CCDA60, 0x01D0EBB0,
    ],
};

/// The 6 further copies of `RECORD_AT_004B1150`.
///
/// Ported from `FUN_004b1150` at `0x004B1150`.
pub const COPIES_OF_004B1150: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004B1150,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_004B1150",
    copies: &[
        0x01177710, 0x012E7070, 0x019CE430, 0x019EE8B0, 0x01B49BA0, 0x01C47060,
    ],
};

/// The 13 further copies of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_004b2060` at `0x004B2060`.
pub const COPIES_OF_004B2060: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004B2060,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[
        0x00B1F850, 0x00B28E10, 0x00B41F80, 0x00B573B0, 0x00BE1000, 0x00F03870, 0x00F30B90,
        0x00F30C60, 0x00F33500, 0x00F33570, 0x01980450, 0x019A6FD0, 0x01C273C0,
    ],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_004b2bf0` at `0x004B2BF0`.
pub const COPIES_OF_004B2BF0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004B2BF0,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x009E7010],
};

/// The 4 further copies of `RECORD_AT_004B36D0`.
///
/// Ported from `FUN_004b36d0` at `0x004B36D0`.
pub const COPIES_OF_004B36D0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004B36D0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_004B36D0",
    copies: &[0x0068AEB0, 0x0143B610, 0x01B7C570, 0x01B86BD0],
};

/// The 12 further copies of `RELEASE_004B3C30`.
///
/// Ported from `FUN_004b3c30` at `0x004B3C30`.
pub const COPIES_OF_004B3C30: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004B3C30,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_004B3C30",
    copies: &[
        0x00692F80, 0x0095A250, 0x009746F0, 0x00984C60, 0x00A06930, 0x00AE42D0, 0x00C3FB20,
        0x00DE7A10, 0x0107CEA0, 0x01796350, 0x0185FA50, 0x01BE3DC0,
    ],
};

/// The 37 further copies of `LATE_TEXT_TRIO_RECORD`.
///
/// Ported from `FUN_004b4310` at `0x004B4310`.
pub const COPIES_OF_004B4310: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004B4310,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "LATE_TEXT_TRIO_RECORD",
    copies: &[
        0x00554230, 0x00B10DD0, 0x00BC1780, 0x00C0C680, 0x00C4D9F0, 0x00C79CB0, 0x00CCC5B0,
        0x00F02A40, 0x00F4B4A0, 0x00F6F320, 0x00F8B790, 0x01053130, 0x01071BF0, 0x010A5C50,
        0x010A6C40, 0x010B2780, 0x010CA3D0, 0x010CA570, 0x011AE520, 0x011D2860, 0x011D2A30,
        0x011D2BA0, 0x013BBAC0, 0x01448760, 0x0147C5E0, 0x01557120, 0x015DC210, 0x016013B0,
        0x0161CAC0, 0x0199F0B0, 0x019A0810, 0x019AC0F0, 0x019AD4B0, 0x019B7CB0, 0x01B4B490,
        0x01B9F350, 0x01BB4850,
    ],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_004b43a0` at `0x004B43A0`.
pub const COPIES_OF_004B43A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004B43A0,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x009E85B0],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_004b44e0` at `0x004B44E0`.
pub const COPIES_OF_004B44E0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004B44E0,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x009E86B0],
};

/// The 1 further copy of `RECORD_AT_004B4AC0`.
///
/// Ported from `FUN_004b4ac0` at `0x004B4AC0`.
pub const COPIES_OF_004B4AC0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004B4AC0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_004B4AC0",
    copies: &[0x00B9C4A0],
};

/// The 1 further copy of `RECORD_AT_004B5810`.
///
/// Ported from `FUN_004b5810` at `0x004B5810`.
pub const COPIES_OF_004B5810: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004B5810,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_004B5810",
    copies: &[0x004B5AB0],
};

/// The 2 further copies of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_004b63c0` at `0x004B63C0`.
pub const COPIES_OF_004B63C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004B63C0,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x008F8F50, 0x009EA1F0],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_004b7120` at `0x004B7120`.
pub const COPIES_OF_004B7120: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004B7120,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x00B988B0],
};

/// The 3 further copies of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_004b7380` at `0x004B7380`.
pub const COPIES_OF_004B7380: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004B7380,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x004B7400, 0x004B7500, 0x004B7580],
};

/// The 2 further copies of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_004b7480` at `0x004B7480`.
pub const COPIES_OF_004B7480: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004B7480,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x004B7600, 0x004B7670],
};

/// The 2 further copies of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_004b76e0` at `0x004B76E0`.
pub const COPIES_OF_004B76E0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004B76E0,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x004B7760, 0x004B78E0],
};

/// The 3 further copies of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_004b77e0` at `0x004B77E0`.
pub const COPIES_OF_004B77E0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004B77E0,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x004B7860, 0x004B7940, 0x004B79A0],
};

/// The 3 further copies of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_004b7ac0` at `0x004B7AC0`.
pub const COPIES_OF_004B7AC0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004B7AC0,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x004B7B60, 0x004B7CA0, 0x004B7D40],
};

/// The 2 further copies of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_004b7c00` at `0x004B7C00`.
pub const COPIES_OF_004B7C00: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004B7C00,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x004B7DE0, 0x004B7E80],
};

/// The 2 further copies of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_004b7f20` at `0x004B7F20`.
pub const COPIES_OF_004B7F20: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004B7F20,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x004B7FC0, 0x004B81A0],
};

/// The 3 further copies of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_004b8060` at `0x004B8060`.
pub const COPIES_OF_004B8060: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004B8060,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x004B8100, 0x004B8240, 0x004B82E0],
};

/// The 14 further copies of `RECORD_AT_004B8CC0`.
///
/// Ported from `FUN_004b8cc0` at `0x004B8CC0`.
pub const COPIES_OF_004B8CC0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004B8CC0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_004B8CC0",
    copies: &[
        0x004B8CE0, 0x004B93E0, 0x004BEC60, 0x004C3CD0, 0x004C91F0, 0x004C9D60, 0x005D1390,
        0x00628900, 0x00629370, 0x00BB3960, 0x00F305D0, 0x0157C940, 0x0157CA80, 0x0157F380,
    ],
};

/// The 2 further copies of `RECORD_AT_004B95F0`.
///
/// Ported from `FUN_004b95f0` at `0x004B95F0`.
pub const COPIES_OF_004B95F0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004B95F0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_004B95F0",
    copies: &[0x004C8370, 0x006634F0],
};

/// The 75 further copies of `HELD_REFERENCE_OFFSET`.
///
/// Ported from `FUN_004b9650` at `0x004B9650`.
pub const COPIES_OF_004B9650: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004B9650,
    rust_path: "crates/tiara-core/src/delphi_runtime.rs",
    rust_symbol: "HELD_REFERENCE_OFFSET",
    copies: &[
        0x004E37D0, 0x004E3D10, 0x004E6AE0, 0x004E6FE0, 0x004EDCE0, 0x004EDF80, 0x004EF880,
        0x004EFD50, 0x0055F760, 0x0055FC30, 0x00562410, 0x00562680, 0x00564170, 0x00564410,
        0x005A4CA0, 0x005A5170, 0x005C3AC0, 0x005C4070, 0x005E19F0, 0x005E1C90, 0x0064B270,
        0x006DEBB0, 0x006E7760, 0x006EFA70, 0x0078B710, 0x0078BBE0, 0x0078E7C0, 0x0078EC90,
        0x00790750, 0x00790C50, 0x00792AE0, 0x00792FB0, 0x00794D20, 0x00795230, 0x00797140,
        0x00797670, 0x008544B0, 0x00854750, 0x0094AA50, 0x009A9660, 0x009A9BD0, 0x00B13610,
        0x00C1A6D0, 0x00CD0EC0, 0x00CD1DA0, 0x00CD1E50, 0x00CD3650, 0x00CF93A0, 0x00DA0F00,
        0x00DA13D0, 0x00EB0440, 0x00EB0940, 0x00F36540, 0x00F367B0, 0x013A59F0, 0x01487A70,
        0x01487F70, 0x01584CD0, 0x01585240, 0x0171D1A0, 0x0171D670, 0x0177ADE0, 0x0177B080,
        0x019B3F60, 0x019B41D0, 0x01A924B0, 0x01A92720, 0x01B16500, 0x01B16A30, 0x01B1CA40,
        0x01B275B0, 0x01B27820, 0x01BFC5A0, 0x01CA6E60, 0x01CA70D0,
    ],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_004b9810` at `0x004B9810`.
pub const COPIES_OF_004B9810: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004B9810,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x004B9FF0],
};

/// The 2 further copies of `RECORD_AT_004BA570`.
///
/// Ported from `FUN_004ba570` at `0x004BA570`.
pub const COPIES_OF_004BA570: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004BA570,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_004BA570",
    copies: &[0x004BA900, 0x004D7D40],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_004baf90` at `0x004BAF90`.
pub const COPIES_OF_004BAF90: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004BAF90,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x016D6100],
};

/// The 10 further copies of `RELEASE_004BDC20`.
///
/// Ported from `FUN_004bdc20` at `0x004BDC20`.
pub const COPIES_OF_004BDC20: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004BDC20,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_004BDC20",
    copies: &[
        0x005C2070, 0x005DB4C0, 0x006672C0, 0x00778500, 0x00781C80, 0x007D7120, 0x007E5FF0,
        0x0097E7F0, 0x00AA7EC0, 0x00CE2CF0,
    ],
};

/// The 59 further copies of `FREED_AT_0X78`.
///
/// Ported from `FUN_004bdc40` at `0x004BDC40`.
pub const COPIES_OF_004BDC40: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004BDC40,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "FREED_AT_0X78",
    copies: &[
        0x0064F6E0, 0x006FCDA0, 0x006FCF10, 0x006FED40, 0x00708680, 0x00780C30, 0x007D7100,
        0x008156A0, 0x00895D90, 0x0095C3A0, 0x009803A0, 0x009896E0, 0x00A48650, 0x00A48B90,
        0x00A49180, 0x00A66A10, 0x00AA7EA0, 0x00AF05A0, 0x00AF0700, 0x00AF0980, 0x00AF11E0,
        0x00AF1630, 0x00AF7B70, 0x00C34670, 0x00C34A40, 0x00C38C60, 0x00CEA320, 0x00E10220,
        0x01071D40, 0x0108FFF0, 0x010B0090, 0x010B0470, 0x010B0920, 0x012479C0, 0x013491A0,
        0x013492D0, 0x0147BFE0, 0x0149B520, 0x0149D400, 0x0155E6D0, 0x015DE730, 0x017743F0,
        0x01774800, 0x01776430, 0x01794960, 0x017C1210, 0x017F3270, 0x01805CA0, 0x01823AC0,
        0x01835270, 0x0184D620, 0x0184D820, 0x01857E00, 0x018BCC80, 0x01A51880, 0x01B24FA0,
        0x01C7C790, 0x01C97FA0, 0x01C98380,
    ],
};

/// The 71 further copies of `FREED_AT_0X68`.
///
/// Ported from `FUN_004be270` at `0x004BE270`.
pub const COPIES_OF_004BE270: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004BE270,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "FREED_AT_0X68",
    copies: &[
        0x004C32F0, 0x00543AA0, 0x0054A480, 0x0054ABC0, 0x0054B2D0, 0x00553820, 0x005DE7D0,
        0x006DBDB0, 0x006F0F10, 0x006F81B0, 0x00716550, 0x00716770, 0x007D6230, 0x007E7E00,
        0x00817E80, 0x008961E0, 0x0094DCB0, 0x0095A660, 0x00974E00, 0x00979ED0, 0x0098A360,
        0x009957A0, 0x00996540, 0x009DC880, 0x00A44AE0, 0x00AA8140, 0x00ADD3B0, 0x00AF7080,
        0x00B13010, 0x00C2B4D0, 0x00CDDDE0, 0x00CF2FC0, 0x00D75660, 0x00D7A000, 0x00D8F4B0,
        0x00DD9A80, 0x01071EF0, 0x0123FB30, 0x013A7210, 0x013FCF00, 0x014640D0, 0x01470AD0,
        0x0147BC60, 0x0153DA20, 0x0156BBA0, 0x01582B60, 0x015EA430, 0x0160A290, 0x0160F5B0,
        0x0162D7B0, 0x01642050, 0x01693310, 0x0176BE70, 0x01776AA0, 0x0179D2B0, 0x017C2300,
        0x018089C0, 0x018130A0, 0x018130C0, 0x01834A50, 0x01836D80, 0x0183A490, 0x018C0F90,
        0x018C1720, 0x01972940, 0x019BC110, 0x01A2B3F0, 0x01AE7370, 0x01B25840, 0x01B83F50,
        0x01C92D90,
    ],
};

/// The 1 further copy of `RECORD_AT_004BEBF0`.
///
/// Ported from `FUN_004bebf0` at `0x004BEBF0`.
pub const COPIES_OF_004BEBF0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004BEBF0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_004BEBF0",
    copies: &[0x006290F0],
};

/// The 2 further copies of `RECORD_AT_004C0630`.
///
/// Ported from `FUN_004c0630` at `0x004C0630`.
pub const COPIES_OF_004C0630: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004C0630,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_004C0630",
    copies: &[0x004C1EA0, 0x00661EB0],
};

/// The 1 further copy of `RECORD_AT_004C0F70`.
///
/// Ported from `FUN_004c0f70` at `0x004C0F70`.
pub const COPIES_OF_004C0F70: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004C0F70,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_004C0F70",
    copies: &[0x00728E50],
};

/// The 2 further copies of `RECORD_AT_004C3340`.
///
/// Ported from `FUN_004c3340` at `0x004C3340`.
pub const COPIES_OF_004C3340: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004C3340,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_004C3340",
    copies: &[0x00558650, 0x00559880],
};

/// The 259 further copies of `TWO_INTERFACE_RECORD`.
///
/// Ported from `FUN_004c6620` at `0x004C6620`.
pub const COPIES_OF_004C6620: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004C6620,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "TWO_INTERFACE_RECORD",
    copies: &[
        0x004DB290, 0x004DDB10, 0x004DDBE0, 0x004DF020, 0x004DF0F0, 0x004E0310, 0x004E03E0,
        0x004E16E0, 0x004E17B0, 0x004E4CC0, 0x004E4D90, 0x004E7DF0, 0x004E7EC0, 0x004E90E0,
        0x004E91B0, 0x004EABE0, 0x004EACB0, 0x004EBED0, 0x004EBFA0, 0x004F0E80, 0x004F0F50,
        0x004F2170, 0x004F2240, 0x004F39E0, 0x004F3AB0, 0x004F4CD0, 0x004F4DA0, 0x004F6540,
        0x004F6610, 0x004F7EF0, 0x004F7FC0, 0x004F93D0, 0x004F94A0, 0x004FAA00, 0x004FAAD0,
        0x004FBEE0, 0x004FBFB0, 0x004FDA90, 0x004FDB60, 0x004FEEE0, 0x004FEFB0, 0x00500060,
        0x00500130, 0x005012B0, 0x00501380, 0x0055D7C0, 0x0055D890, 0x005655B0, 0x00565680,
        0x00566D50, 0x00566E20, 0x005680C0, 0x00568190, 0x00569510, 0x005695E0, 0x0056A880,
        0x0056A950, 0x0056C1E0, 0x0056C2B0, 0x0056D460, 0x0056D530, 0x0056EFC0, 0x0056F090,
        0x00570440, 0x00570510, 0x00571670, 0x00571740, 0x005A2AF0, 0x005A2BC0, 0x005A6630,
        0x005A6700, 0x005A78B0, 0x005A7980, 0x005B5A00, 0x005B5AD0, 0x005C4FA0, 0x005C5070,
        0x005C6490, 0x005C6560, 0x005C76E0, 0x005C77B0, 0x005DF630, 0x005DF700, 0x005E2E90,
        0x005E2F60, 0x00615680, 0x00615750, 0x00716A80, 0x00716BE0, 0x00717910, 0x007179E0,
        0x0078CB60, 0x0078CC30, 0x00798740, 0x00798810, 0x00799D20, 0x00799DF0, 0x0079B010,
        0x0079B0E0, 0x0079C300, 0x0079C3D0, 0x0079D520, 0x0079D5F0, 0x0079E7A0, 0x0079E870,
        0x0079FBA0, 0x0079FC70, 0x007A0E20, 0x007A0EF0, 0x007A2050, 0x007A2120, 0x007A34D0,
        0x007A35A0, 0x007A4680, 0x007A4750, 0x007A5930, 0x007A5A00, 0x007A6AA0, 0x007A6B70,
        0x007A7C60, 0x007A7D30, 0x007A8F50, 0x007A9020, 0x007AA260, 0x007AA330, 0x007AB730,
        0x007AB800, 0x0082D450, 0x0082D520, 0x0082E590, 0x0082E660, 0x0084D8C0, 0x00855660,
        0x00855730, 0x008B9E40, 0x008B9F10, 0x008BB130, 0x008BB200, 0x0099D8A0, 0x0099D970,
        0x0099EBD0, 0x0099ECA0, 0x0099FFA0, 0x009A0070, 0x009A1290, 0x009A1360, 0x009A2580,
        0x009A2650, 0x009A3870, 0x009A3940, 0x009A6360, 0x009A6430, 0x009A7650, 0x009A7720,
        0x009AAB90, 0x009AAC60, 0x009AD410, 0x009AD4E0, 0x009AE580, 0x009AE650, 0x009AF6F0,
        0x009AF7C0, 0x009B0DC0, 0x009B0E90, 0x009B2310, 0x009B23E0, 0x009B3940, 0x009B3A10,
        0x009DE430, 0x009DE500, 0x00BB5890, 0x00BB5960, 0x00BE2CD0, 0x00BE2DA0, 0x00BE40E0,
        0x00BE41B0, 0x00C4F060, 0x00C4F130, 0x00DA2210, 0x00DA22E0, 0x00DA34C0, 0x00DA3590,
        0x00DDC5C0, 0x00EB1810, 0x00EB18E0, 0x00EB2C90, 0x00EB2D60, 0x00EECDC0, 0x00EECE90,
        0x00EEE2F0, 0x00EEE3C0, 0x00F37760, 0x00F37830, 0x00F38A50, 0x00F38B20, 0x00F39C80,
        0x00F39D50, 0x01133350, 0x01133420, 0x011446D0, 0x011447A0, 0x01145BA0, 0x01145C70,
        0x01489480, 0x01489550, 0x0148A900, 0x0148A9D0, 0x01586380, 0x01586450, 0x015878C0,
        0x01587990, 0x01588D80, 0x01588E50, 0x01589FA0, 0x0158A070, 0x0167E770, 0x0167E840,
        0x0167FB40, 0x0167FC10, 0x01681180, 0x01681250, 0x01682490, 0x01682560, 0x016D0DC0,
        0x016D0E90, 0x0171E4B0, 0x0171E580, 0x0171F760, 0x0171F830, 0x017208E0, 0x017209B0,
        0x0175BB90, 0x0175BC60, 0x01789E40, 0x01789F10, 0x019B0DC0, 0x019B0E90, 0x019B23A0,
        0x019B2470, 0x01A93520, 0x01A935F0, 0x01B11D60, 0x01B11E30, 0x01B132E0, 0x01B133B0,
        0x01B145D0, 0x01B146A0, 0x01B17A30, 0x01B17B00, 0x01B287E0, 0x01B288B0, 0x01B8D920,
        0x01B8D9F0, 0x01CA80F0, 0x01CA81C0, 0x01CA9550, 0x01CA9620, 0x01D69DC0, 0x01D69E90,
    ],
};

/// The 7 further copies of `RECORD_AT_004C6A00`.
///
/// Ported from `FUN_004c6a00` at `0x004C6A00`.
pub const COPIES_OF_004C6A00: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004C6A00,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_004C6A00",
    copies: &[
        0x00A54870, 0x01830960, 0x01830C90, 0x01830EB0, 0x01830FF0, 0x0184B4F0, 0x0184C6A0,
    ],
};

/// The 49 further copies of `FREED_AT_0X88`.
///
/// Ported from `FUN_004c7f60` at `0x004C7F60`.
pub const COPIES_OF_004C7F60: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004C7F60,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "FREED_AT_0X88",
    copies: &[
        0x006D9170, 0x006E0DD0, 0x007864E0, 0x00788810, 0x00789920, 0x007D8340, 0x007E8620,
        0x007E8670, 0x00959080, 0x0096C840, 0x009874C0, 0x00989320, 0x0098A8A0, 0x00996F40,
        0x009DC5C0, 0x00AD10D0, 0x00ADF6F0, 0x00AF96B0, 0x00BC08D0, 0x00C69AB0, 0x00D37780,
        0x00D9CE30, 0x00E05680, 0x00EBA3D0, 0x0107C590, 0x010B02D0, 0x010B06B0, 0x01155E70,
        0x01156650, 0x012D1C00, 0x0130D890, 0x013A78F0, 0x01479850, 0x014AF5D0, 0x015DB7C0,
        0x015DC400, 0x0176D830, 0x01770A90, 0x01772940, 0x01777920, 0x01778790, 0x01A507D0,
        0x01A53A90, 0x01A555D0, 0x01A55840, 0x01A55A00, 0x01B24DE0, 0x01C67CF0, 0x01D075B0,
    ],
};

/// The 1 further copy of `RELEASE_004C7F80`.
///
/// Ported from `FUN_004c7f80` at `0x004C7F80`.
pub const COPIES_OF_004C7F80: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004C7F80,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_004C7F80",
    copies: &[0x009878C0],
};

/// The 1 further copy of `RECORD_AT_004C9CD0`.
///
/// Ported from `FUN_004c9cd0` at `0x004C9CD0`.
pub const COPIES_OF_004C9CD0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004C9CD0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_004C9CD0",
    copies: &[0x004D8BA0],
};

/// The 1 further copy of `RELEASE_004CB670`.
///
/// Ported from `FUN_004cb670` at `0x004CB670`.
pub const COPIES_OF_004CB670: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004CB670,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_004CB670",
    copies: &[0x004CE010],
};

/// The 9 further copies of `RELEASE_004CB690`.
///
/// Ported from `FUN_004cb690` at `0x004CB690`.
pub const COPIES_OF_004CB690: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004CB690,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_004CB690",
    copies: &[
        0x007D5F60, 0x00842CE0, 0x009E3300, 0x00C2B800, 0x00D73950, 0x0146D110, 0x01857F10,
        0x01859F60, 0x01898B70,
    ],
};

/// The 2 further copies of `RELEASE_004CDFF0`.
///
/// Ported from `FUN_004cdff0` at `0x004CDFF0`.
pub const COPIES_OF_004CDFF0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004CDFF0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_004CDFF0",
    copies: &[0x00C424C0, 0x01562E50],
};

/// The 14 further copies of `RELEASE_004D09A0`.
///
/// Ported from `FUN_004d09a0` at `0x004D09A0`.
pub const COPIES_OF_004D09A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004D09A0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_004D09A0",
    copies: &[
        0x005C3FF0, 0x007D6250, 0x00821580, 0x00821770, 0x00974E20, 0x0097F1D0, 0x00D75680,
        0x00D9D9D0, 0x00DD9AA0, 0x014CE210, 0x017B1320, 0x018130E0, 0x01972960, 0x01AE7690,
    ],
};

/// The 1 further copy of `RECORD_AT_004D2090`.
///
/// Ported from `FUN_004d2090` at `0x004D2090`.
pub const COPIES_OF_004D2090: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004D2090,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_004D2090",
    copies: &[0x015A9F30],
};

/// The 3 further copies of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_004d4910` at `0x004D4910`.
pub const COPIES_OF_004D4910: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004D4910,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00A01840, 0x00A01EA0, 0x00B9B1A0],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_004d4f50` at `0x004D4F50`.
pub const COPIES_OF_004D4F50: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004D4F50,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x009498F0],
};

/// The 1 further copy of `RECORD_AT_004D6820`.
///
/// Ported from `FUN_004d6820` at `0x004D6820`.
pub const COPIES_OF_004D6820: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004D6820,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_004D6820",
    copies: &[0x004D69E0],
};

/// The 14 further copies of `RECORD_AT_004D8110`.
///
/// Ported from `FUN_004d8110` at `0x004D8110`.
pub const COPIES_OF_004D8110: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004D8110,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_004D8110",
    copies: &[
        0x004D8230, 0x004D8550, 0x004D8850, 0x004D8990, 0x004D8A30, 0x004D8AE0, 0x004D8D70,
        0x004D8EB0, 0x004D9050, 0x004D9110, 0x004D9230, 0x004D9410, 0x004D94D0, 0x004D96A0,
    ],
};

/// The 1 further copy of `RECORD_AT_004D8640`.
///
/// Ported from `FUN_004d8640` at `0x004D8640`.
pub const COPIES_OF_004D8640: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004D8640,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_004D8640",
    copies: &[0x004D87B0],
};

/// The 1 further copy of `RECORD_AT_004D8CB0`.
///
/// Ported from `FUN_004d8cb0` at `0x004D8CB0`.
pub const COPIES_OF_004D8CB0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004D8CB0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_004D8CB0",
    copies: &[0x004D95E0],
};

/// The 2 further copies of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_004da300` at `0x004DA300`.
pub const COPIES_OF_004DA300: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004DA300,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00714CD0, 0x009D3B20],
};

/// The 2 further copies of `RECORD_AT_004DB5A0`.
///
/// Ported from `FUN_004db5a0` at `0x004DB5A0`.
pub const COPIES_OF_004DB5A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004DB5A0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_004DB5A0",
    copies: &[0x004DB810, 0x004DB930],
};

/// The 1 further copy of `RECORD_AT_004DC020`.
///
/// Ported from `FUN_004dc020` at `0x004DC020`.
pub const COPIES_OF_004DC020: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004DC020,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_004DC020",
    copies: &[0x00619F70],
};

/// The 5 further copies of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_004dc240` at `0x004DC240`.
pub const COPIES_OF_004DC240: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004DC240,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00706D40, 0x009D9E10, 0x00C24E60, 0x00DD8D40, 0x012BEC70],
};

/// The 134 further copies of `FREED_AT_0X40`.
///
/// Ported from `FUN_004dcf80` at `0x004DCF80`.
pub const COPIES_OF_004DCF80: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004DCF80,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "FREED_AT_0X40",
    copies: &[
        0x004DE5B0, 0x004DF8A0, 0x004E0C70, 0x004E20E0, 0x004E3770, 0x004E3C90, 0x004E4250,
        0x004E56D0, 0x004E6F80, 0x004E8670, 0x004EA100, 0x004EB460, 0x004EC8E0, 0x004EE5C0,
        0x004EFCF0, 0x004F1700, 0x004F2F00, 0x004F4260, 0x004F5A60, 0x0055CD10, 0x0055E240,
        0x0055F700, 0x0055FBD0, 0x00560CA0, 0x005623B0, 0x00562D60, 0x00564B40, 0x005662E0,
        0x00567650, 0x00568AA0, 0x00569E10, 0x005A3780, 0x005A4C40, 0x005A5110, 0x005B4F90,
        0x005C3A60, 0x005DEAE0, 0x005E0320, 0x005E1970, 0x00614C10, 0x00716EA0, 0x0078A490,
        0x0078BB80, 0x0078C0F0, 0x0078D500, 0x0078EC30, 0x0078F340, 0x00790BF0, 0x007915C0,
        0x00792A80, 0x00792F50, 0x00797610, 0x007992B0, 0x0079A5A0, 0x0079B890, 0x007D5AB0,
        0x007D5C30, 0x007D7DF0, 0x007D8590, 0x00852F10, 0x008B93D0, 0x008BA6C0, 0x0099BE00,
        0x0099CE30, 0x0099E120, 0x0099F530, 0x009A0820, 0x009A1B10, 0x009A2E00, 0x009A41D0,
        0x009A49D0, 0x009A51D0, 0x009A58F0, 0x009A6BE0, 0x009A9B50, 0x009AA120, 0x009AB4F0,
        0x009DD9C0, 0x00A02320, 0x00A02450, 0x00A08D70, 0x00A59790, 0x00AF84A0, 0x00BB4D70,
        0x00BE3630, 0x00C35F20, 0x00C4E5F0, 0x00D9D670, 0x00D9FC40, 0x00DA1370, 0x00DE03D0,
        0x00EAF030, 0x00EB08E0, 0x00F34E50, 0x00F364E0, 0x00F36CF0, 0x00F37FE0, 0x01268550,
        0x012846D0, 0x01486660, 0x01487F10, 0x01584C70, 0x015851C0, 0x015E0760, 0x0167F0D0,
        0x01680730, 0x01681A20, 0x016D0350, 0x0171BC90, 0x0171D140, 0x0171D610, 0x017796B0,
        0x0177AD60, 0x017893D0, 0x018808F0, 0x018C08A0, 0x019B1930, 0x019B2D10, 0x01A91260,
        0x01AE74A0, 0x01B112F0, 0x01B12870, 0x01B13B60, 0x01B169D0, 0x01B16F80, 0x01B24820,
        0x01B249A0, 0x01B26050, 0x01B27D70, 0x01C7E0B0, 0x01C7E1D0, 0x01CA56A0, 0x01CA6E00,
        0x01D69350,
    ],
};

/// The 81 further copies of `GENERIC_FORWARDED_SLOT`.
///
/// Ported from `FUN_004dd0e0` at `0x004DD0E0`.
pub const COPIES_OF_004DD0E0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004DD0E0,
    rust_path: "crates/tiara-core/src/delphi_runtime.rs",
    rust_symbol: "GENERIC_FORWARDED_SLOT",
    copies: &[
        0x004DE6E0, 0x004DF9D0, 0x004E0DA0, 0x004E4380, 0x004E74B0, 0x004E87A0, 0x004EA230,
        0x004EB590, 0x004F0540, 0x004F1830, 0x004F3030, 0x004F4390, 0x004F5B90, 0x004F8A10,
        0x004FB520, 0x004FE5A0, 0x00500970, 0x00564C70, 0x00566410, 0x00567780, 0x00568BD0,
        0x00569F40, 0x0056CB20, 0x0056FB00, 0x005A6F70, 0x005B50C0, 0x005C5B50, 0x00614D40,
        0x00716FD0, 0x0078C220, 0x007993E0, 0x0079A6D0, 0x0079DE60, 0x007A04E0, 0x007A2B90,
        0x007A4FF0, 0x007A6160, 0x0082CB10, 0x008B9500, 0x008BA7F0, 0x0099CF60, 0x0099F660,
        0x009A0950, 0x009A1C40, 0x009A2F30, 0x009A4270, 0x009A4A70, 0x009A5270, 0x009A5A20,
        0x009A6D10, 0x009AA250, 0x009AB590, 0x009ACAD0, 0x009ADC40, 0x009AEDB0, 0x009B3000,
        0x009DDAF0, 0x00BB4ED0, 0x00C4E720, 0x00DA2B80, 0x00EB2350, 0x00EED940, 0x00F36E20,
        0x00F38110, 0x01132A10, 0x01489FC0, 0x01588440, 0x0167F200, 0x01680860, 0x01681B50,
        0x016D0480, 0x0171EE20, 0x0171FFA0, 0x01789500, 0x019B1A60, 0x01B11420, 0x01B129A0,
        0x01B13C90, 0x01B27EA0, 0x01CA8C30, 0x01D69480,
    ],
};

/// The 77 further copies of `GENERIC_PAIR_HOLDER_OFFSET`.
///
/// Ported from `FUN_004dd170` at `0x004DD170`.
pub const COPIES_OF_004DD170: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004DD170,
    rust_path: "crates/tiara-core/src/delphi_runtime.rs",
    rust_symbol: "GENERIC_PAIR_HOLDER_OFFSET",
    copies: &[
        0x004DE770, 0x004DFA60, 0x004E0E30, 0x004E4410, 0x004E7540, 0x004E8830, 0x004EA2C0,
        0x004EB620, 0x004F05D0, 0x004F18C0, 0x004F30C0, 0x004F4420, 0x004F5C20, 0x004F8AA0,
        0x004FB5B0, 0x004FE630, 0x00500A00, 0x00564D00, 0x005664A0, 0x00567810, 0x00568C60,
        0x00569FD0, 0x0056CBB0, 0x0056FB90, 0x005A7000, 0x005B5150, 0x005C5BE0, 0x00614DD0,
        0x00717060, 0x0078C2B0, 0x00799470, 0x0079A760, 0x0079DEF0, 0x007A0570, 0x007A2C20,
        0x007A5080, 0x007A61F0, 0x0082CBA0, 0x008B9590, 0x008BA880, 0x0099CFF0, 0x0099F6F0,
        0x009A09E0, 0x009A1CD0, 0x009A2FC0, 0x009A5AB0, 0x009A6DA0, 0x009AA2E0, 0x009ACB60,
        0x009ADCD0, 0x009AEE40, 0x009B3090, 0x009DDB80, 0x00BB4F60, 0x00C4E7B0, 0x00DA2C10,
        0x00EB23E0, 0x00EED9D0, 0x00F36EB0, 0x00F381A0, 0x01132AA0, 0x0148A050, 0x015884D0,
        0x0167F290, 0x016808F0, 0x01681BE0, 0x016D0510, 0x0171EEB0, 0x01720030, 0x01789590,
        0x019B1AF0, 0x01B114B0, 0x01B12A30, 0x01B13D20, 0x01B27F30, 0x01CA8CC0, 0x01D69510,
    ],
};

/// The 126 further copies of `RuntimeNotifier`.
///
/// Ported from `FUN_004dd2d0` at `0x004DD2D0`.
pub const COPIES_OF_004DD2D0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004DD2D0,
    rust_path: "crates/tiara-core/src/runtime_collection.rs",
    rust_symbol: "RuntimeNotifier",
    copies: &[
        0x004DE860, 0x004DFB50, 0x004E0F20, 0x004E4500, 0x004E7630, 0x004E8920, 0x004EA420,
        0x004EB710, 0x004F06C0, 0x004F19B0, 0x004F3220, 0x004F4510, 0x004F5D80, 0x004F7680,
        0x004F8B90, 0x004FA190, 0x004FB6A0, 0x004FD220, 0x004FE720, 0x004FF860, 0x00500AF0,
        0x0055CFC0, 0x00564DF0, 0x00566590, 0x00567900, 0x00568D50, 0x0056A0C0, 0x0056B9E0,
        0x0056CCA0, 0x0056E750, 0x0056FC80, 0x00570E00, 0x005A2280, 0x005A5E30, 0x005A70F0,
        0x005B5240, 0x005C4730, 0x005C5CD0, 0x005C6E70, 0x005DEDC0, 0x005E2620, 0x00614EC0,
        0x00717150, 0x0078C3A0, 0x00797ED0, 0x00799560, 0x0079A850, 0x0079BB40, 0x0079CD20,
        0x0079DFE0, 0x0079F3A0, 0x007A0660, 0x007A17E0, 0x007A2D10, 0x007A3E80, 0x007A5170,
        0x007A62E0, 0x007A7460, 0x007A8750, 0x007A99F0, 0x007AAF30, 0x0082CC90, 0x0082DDD0,
        0x00854DF0, 0x008B9680, 0x008BA970, 0x0099D0E0, 0x0099E3D0, 0x0099F7E0, 0x009A0AD0,
        0x009A1DC0, 0x009A30B0, 0x009A5BA0, 0x009A6E90, 0x009AA3D0, 0x009ACC50, 0x009ADDC0,
        0x009AEF30, 0x009B0550, 0x009B1AA0, 0x009B3180, 0x009DDC70, 0x00BB5050, 0x00BE24D0,
        0x00BE38E0, 0x00C4E8A0, 0x00DA1A10, 0x00DA2D00, 0x00EB0FA0, 0x00EB24D0, 0x00EEC550,
        0x00EEDAB0, 0x00F36FA0, 0x00F38290, 0x00F39410, 0x01132B90, 0x01143E60, 0x011453A0,
        0x01488C10, 0x0148A140, 0x01585AF0, 0x01587050, 0x015885C0, 0x01589730, 0x0167DF70,
        0x0167F380, 0x016809D0, 0x01681CD0, 0x016D0600, 0x0171DCB0, 0x0171EFA0, 0x01720120,
        0x0175B320, 0x01789680, 0x019B0550, 0x019B1BE0, 0x01A92D60, 0x01B115A0, 0x01B12B20,
        0x01B13E10, 0x01B17230, 0x01B28020, 0x01B8D0B0, 0x01CA7880, 0x01CA8DA0, 0x01D69600,
    ],
};

/// The 9 further copies of `RECORD_AT_004DD8B0`.
///
/// Ported from `FUN_004dd8b0` at `0x004DD8B0`.
pub const COPIES_OF_004DD8B0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004DD8B0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_004DD8B0",
    copies: &[
        0x004F9170, 0x006210B0, 0x00624D90, 0x00624E90, 0x00714C40, 0x00716070, 0x00716920,
        0x00841CB0, 0x00BB5630,
    ],
};

/// The 83 further copies of `DESTROYED_AT_0X78`.
///
/// Ported from `FUN_004dda30` at `0x004DDA30`.
pub const COPIES_OF_004DDA30: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004DDA30,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "DESTROYED_AT_0X78",
    copies: &[
        0x004DEF60, 0x004E0250, 0x004E1620, 0x004E4C00, 0x004E7D30, 0x004E9020, 0x004EAB20,
        0x004EBE10, 0x004F0DC0, 0x004F20B0, 0x004F3920, 0x004F4C10, 0x004F6480, 0x004F92F0,
        0x004FBE00, 0x004FEE20, 0x005011F0, 0x005654F0, 0x00566C90, 0x00568000, 0x00569450,
        0x0056A7C0, 0x0056D3A0, 0x00570380, 0x005A77F0, 0x005B5940, 0x005C2040, 0x005C63D0,
        0x006155C0, 0x00717850, 0x00780960, 0x00781C50, 0x0078CAA0, 0x00799C60, 0x0079AF50,
        0x0079C240, 0x0079E6E0, 0x007A0D60, 0x007A3410, 0x007A5870, 0x007A69E0, 0x0082D390,
        0x0082E4D0, 0x008B9D80, 0x008BB070, 0x0099D7E0, 0x0099FEE0, 0x009A11D0, 0x009A24C0,
        0x009A37B0, 0x009A62A0, 0x009A7590, 0x009AAAD0, 0x009AD350, 0x009AE4C0, 0x009AF630,
        0x009B3880, 0x009DE370, 0x00BB57B0, 0x00C4EFA0, 0x00DA3400, 0x00EB2BD0, 0x00EEE210,
        0x00F376A0, 0x00F38990, 0x01133290, 0x0148A840, 0x01588CC0, 0x0167FA80, 0x016810C0,
        0x016823D0, 0x016D0D00, 0x0171F6A0, 0x01720820, 0x01789D80, 0x019B22E0, 0x01A93460,
        0x01B11CA0, 0x01B13220, 0x01B14510, 0x01B28720, 0x01CA9490, 0x01D69D00,
    ],
};

/// The 126 further copies of `grow_for_append`.
///
/// Ported from `FUN_004ddff0` at `0x004DDFF0`.
pub const COPIES_OF_004DDFF0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004DDFF0,
    rust_path: "crates/tiara-core/src/delphi_runtime.rs",
    rust_symbol: "grow_for_append",
    copies: &[
        0x004DF350, 0x004E0640, 0x004E1A10, 0x004E4FF0, 0x004E8120, 0x004E9410, 0x004EAF10,
        0x004EC200, 0x004F11B0, 0x004F24A0, 0x004F3D10, 0x004F5000, 0x004F6870, 0x004F8460,
        0x004F98B0, 0x004FAF70, 0x004FC3A0, 0x004FE000, 0x004FF200, 0x00500440, 0x005015E0,
        0x0055DBA0, 0x005658E0, 0x00567080, 0x005683F0, 0x00569840, 0x0056ABB0, 0x0056C5C0,
        0x0056D790, 0x0056F530, 0x00570770, 0x00571BE0, 0x005A3070, 0x005A6A10, 0x005A7BE0,
        0x005B5D30, 0x005C5530, 0x005C67E0, 0x005C7C60, 0x005DFBA0, 0x005E3400, 0x006159B0,
        0x00717C40, 0x0078CE90, 0x00798CC0, 0x0079A050, 0x0079B340, 0x0079C680, 0x0079D900,
        0x0079EAD0, 0x0079FF80, 0x007A1150, 0x007A25C0, 0x007A3800, 0x007A4A60, 0x007A5C60,
        0x007A6DD0, 0x007A8050, 0x007A9330, 0x007AA7E0, 0x007ABB10, 0x0082D770, 0x0082E910,
        0x00855BD0, 0x008BA170, 0x008BB460, 0x0099DBD0, 0x0099EFB0, 0x009A02D0, 0x009A15C0,
        0x009A28B0, 0x009A3BA0, 0x009A6690, 0x009A7980, 0x009AAEC0, 0x009AD740, 0x009AE8B0,
        0x009AFA20, 0x009B1340, 0x009B2880, 0x009B3C80, 0x009DE760, 0x00BB5D70, 0x00BE30B0,
        0x00BE44C0, 0x00C4F390, 0x00DA25F0, 0x00DA37F0, 0x00EB1D80, 0x00EB2FC0, 0x00EED330,
        0x00EEE7D0, 0x00F37A90, 0x00F38D80, 0x00F3A1F0, 0x01133680, 0x01144C50, 0x01145F80,
        0x014899F0, 0x0148AC40, 0x01586910, 0x01587E40, 0x015890C0, 0x0158A510, 0x0167EB50,
        0x0167FE70, 0x016814E0, 0x016827C0, 0x016D10F0, 0x0171E890, 0x0171FAA0, 0x01720C10,
        0x0175C100, 0x0178A160, 0x019B1340, 0x019B26D0, 0x01A938A0, 0x01B12090, 0x01B13610,
        0x01B14900, 0x01B17E10, 0x01B28B10, 0x01B8DEA0, 0x01CA8660, 0x01CA98B0, 0x01D6A0F0,
    ],
};

/// The 130 further copies of `trim_to_count`.
///
/// Ported from `FUN_004de250` at `0x004DE250`.
pub const COPIES_OF_004DE250: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004DE250,
    rust_path: "crates/tiara-core/src/runtime_collection.rs",
    rust_symbol: "trim_to_count",
    copies: &[
        0x004DF5B0, 0x004E08A0, 0x004E1C70, 0x004E5250, 0x004E8380, 0x004E9670, 0x004EB170,
        0x004EC460, 0x004F1410, 0x004F2700, 0x004F3F70, 0x004F5260, 0x004F6AD0, 0x004F86C0,
        0x004F9B10, 0x004FB1D0, 0x004FC600, 0x004FE260, 0x004FF460, 0x005006A0, 0x00501840,
        0x0055DE00, 0x00565B40, 0x005672E0, 0x00568650, 0x00569AA0, 0x0056AE10, 0x0056C820,
        0x0056D9F0, 0x0056F790, 0x005709D0, 0x00571E40, 0x005A32D0, 0x005A6C70, 0x005A7E40,
        0x005B5F90, 0x005C5790, 0x005C6A40, 0x005C7EC0, 0x005DFE00, 0x005E3660, 0x00615C10,
        0x00717EA0, 0x0078D0F0, 0x00798F20, 0x0079A2B0, 0x0079B5A0, 0x0079C8E0, 0x0079DB60,
        0x0079ED30, 0x007A01E0, 0x007A13B0, 0x007A2820, 0x007A3A60, 0x007A4CC0, 0x007A5EC0,
        0x007A7030, 0x007A82B0, 0x007A9590, 0x007AAA40, 0x007ABD70, 0x0082D9D0, 0x0082EB70,
        0x00855E30, 0x008BA3D0, 0x008BB6C0, 0x0099DE30, 0x0099F210, 0x009A0530, 0x009A1820,
        0x009A2B10, 0x009A3E00, 0x009A4600, 0x009A4E00, 0x009A5600, 0x009A68F0, 0x009A7BE0,
        0x009AB120, 0x009AB920, 0x009AD9A0, 0x009AEB10, 0x009AFC80, 0x009B15A0, 0x009B2AE0,
        0x009B3EE0, 0x009DE9C0, 0x00BB5FD0, 0x00BE3310, 0x00BE4720, 0x00C4F5F0, 0x00DA2850,
        0x00DA3A50, 0x00EB1FE0, 0x00EB3220, 0x00EED590, 0x00EEEA30, 0x00F37CF0, 0x00F38FE0,
        0x00F3A450, 0x011338E0, 0x01144EB0, 0x011461E0, 0x01489C50, 0x0148AEA0, 0x01586B70,
        0x015880A0, 0x01589320, 0x0158A770, 0x0167EDB0, 0x016800D0, 0x01681730, 0x01682A20,
        0x016D1350, 0x0171EAF0, 0x0171FD00, 0x01720E70, 0x0175C360, 0x0178A3C0, 0x019B15A0,
        0x019B2930, 0x01A93B00, 0x01B122F0, 0x01B13870, 0x01B14B60, 0x01B18070, 0x01B28D70,
        0x01B8E100, 0x01CA88C0, 0x01CA9B00, 0x01D6A350,
    ],
};

/// The 261 further copies of `RuntimeEnumerator`.
///
/// Ported from `FUN_004de370` at `0x004DE370`.
pub const COPIES_OF_004DE370: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004DE370,
    rust_path: "crates/tiara-core/src/runtime_collection.rs",
    rust_symbol: "RuntimeEnumerator",
    copies: &[
        0x004DE450, 0x004DF660, 0x004DF740, 0x004E0950, 0x004E0A30, 0x004E1D20, 0x004E1E00,
        0x004E5300, 0x004E53E0, 0x004E8430, 0x004E8510, 0x004E9720, 0x004E9800, 0x004EB220,
        0x004EB300, 0x004EC510, 0x004EC5F0, 0x004F14C0, 0x004F15A0, 0x004F27B0, 0x004F2890,
        0x004F4020, 0x004F4100, 0x004F5310, 0x004F53F0, 0x004F6B80, 0x004F6C60, 0x004F8810,
        0x004F88F0, 0x004F9C30, 0x004F9D10, 0x004FB320, 0x004FB400, 0x004FC720, 0x004FC800,
        0x004FE3B0, 0x004FE490, 0x004FF4F0, 0x004FF5D0, 0x00500780, 0x00500860, 0x005018F0,
        0x005019D0, 0x0055DEE0, 0x0055DFC0, 0x00565BF0, 0x00565CD0, 0x00567390, 0x00567470,
        0x00568700, 0x005687E0, 0x00569B50, 0x00569C30, 0x0056AEC0, 0x0056AFA0, 0x0056C900,
        0x0056C9E0, 0x0056DAA0, 0x0056DB80, 0x0056F8E0, 0x0056F9C0, 0x00570A80, 0x00570B60,
        0x00571F90, 0x00572070, 0x005A3420, 0x005A3500, 0x005A6D50, 0x005A6E30, 0x005A7EF0,
        0x005A7FD0, 0x005B6040, 0x005B6120, 0x005C5900, 0x005C59E0, 0x005C6AF0, 0x005C6BD0,
        0x005C8010, 0x005C80F0, 0x005DFF50, 0x005E0030, 0x005E37B0, 0x005E3890, 0x00615CC0,
        0x00615DA0, 0x00717F50, 0x00718030, 0x0078D1A0, 0x0078D280, 0x00799070, 0x00799150,
        0x0079A360, 0x0079A440, 0x0079B650, 0x0079B730, 0x0079C9B0, 0x0079CA90, 0x0079DC40,
        0x0079DD20, 0x0079EDE0, 0x0079EEC0, 0x007A02C0, 0x007A03A0, 0x007A1460, 0x007A1540,
        0x007A2970, 0x007A2A50, 0x007A3B10, 0x007A3BF0, 0x007A4DA0, 0x007A4E80, 0x007A5F70,
        0x007A6050, 0x007A70E0, 0x007A71C0, 0x007A83A0, 0x007A8480, 0x007A9670, 0x007A9750,
        0x007AAB90, 0x007AAC70, 0x007ABE50, 0x007ABF30, 0x0082DA60, 0x0082DB40, 0x0082EC40,
        0x0082ED20, 0x00855F80, 0x00856060, 0x008BA480, 0x008BA560, 0x008BB770, 0x008BB850,
        0x0099DEE0, 0x0099DFC0, 0x0099F2F0, 0x0099F3D0, 0x009A05E0, 0x009A06C0, 0x009A18D0,
        0x009A19B0, 0x009A2BC0, 0x009A2CA0, 0x009A3EB0, 0x009A3F90, 0x009A46B0, 0x009A4790,
        0x009A4EB0, 0x009A4F90, 0x009A56B0, 0x009A5790, 0x009A69A0, 0x009A6A80, 0x009A7C90,
        0x009A7D70, 0x009AB1D0, 0x009AB2B0, 0x009AB9D0, 0x009ABAB0, 0x009ADA50, 0x009ADB30,
        0x009AEBC0, 0x009AECA0, 0x009AFD30, 0x009AFE10, 0x009B16F0, 0x009B17D0, 0x009B2C30,
        0x009B2D10, 0x009B3F90, 0x009B4070, 0x009DEA70, 0x009DEB50, 0x00BB60F0, 0x00BB61D0,
        0x00BE33F0, 0x00BE34D0, 0x00BE4800, 0x00BE48E0, 0x00C4F6A0, 0x00C4F780, 0x00DA2930,
        0x00DA2A10, 0x00DA3B00, 0x00DA3BE0, 0x00EB2130, 0x00EB2210, 0x00EB32D0, 0x00EB33B0,
        0x00EED6E0, 0x00EED7C0, 0x00EEEB50, 0x00EEEC30, 0x00F37DA0, 0x00F37E80, 0x00F39090,
        0x00F39170, 0x00F3A5A0, 0x00F3A680, 0x01133990, 0x01133A70, 0x01145000, 0x011450E0,
        0x011462C0, 0x011463A0, 0x01489DA0, 0x01489E80, 0x0148AF50, 0x0148B030, 0x01586CD0,
        0x01586DB0, 0x015881F0, 0x015882D0, 0x015893B0, 0x01589490, 0x0158A8C0, 0x0158A9A0,
        0x0167EE90, 0x0167EF70, 0x01680180, 0x01680260, 0x016817E0, 0x016818C0, 0x01682AD0,
        0x01682BB0, 0x016D1400, 0x016D14E0, 0x0171EBD0, 0x0171ECB0, 0x0171FDB0, 0x0171FE90,
        0x01720F20, 0x01721000, 0x0175C4B0, 0x0175C590, 0x0178A450, 0x0178A530, 0x019B16F0,
        0x019B17D0, 0x019B29E0, 0x019B2AC0, 0x01A93BD0, 0x01A93CB0, 0x01B123A0, 0x01B12480,
        0x01B13920, 0x01B13A00, 0x01B14C10, 0x01B14CF0, 0x01B18150, 0x01B18230, 0x01B28E20,
        0x01B28F00, 0x01B8E250, 0x01B8E330, 0x01CA8A10, 0x01CA8AF0, 0x01CA9BB0, 0x01CA9C90,
        0x01D6A400, 0x01D6A4E0,
    ],
};

/// The 67 further copies of `set_capacity`.
///
/// Ported from `FUN_004de630` at `0x004DE630`.
pub const COPIES_OF_004DE630: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004DE630,
    rust_path: "crates/tiara-core/src/runtime_collection.rs",
    rust_symbol: "set_capacity",
    copies: &[
        0x004DF920, 0x004E0CF0, 0x004E42D0, 0x004E7400, 0x004E86F0, 0x004EA180, 0x004EB4E0,
        0x004F0490, 0x004F1780, 0x004F2F80, 0x004F42E0, 0x004F5AE0, 0x005008C0, 0x00564BC0,
        0x00566360, 0x005676D0, 0x00568B20, 0x00569E90, 0x0056CA70, 0x0056FA50, 0x005A6EC0,
        0x005B5010, 0x00614C90, 0x00716F20, 0x0078C170, 0x00799330, 0x0079A620, 0x0079B910,
        0x0079DDB0, 0x007A0430, 0x007A2AE0, 0x007A4F40, 0x007A60B0, 0x0082DBA0, 0x008B9450,
        0x008BA740, 0x0099CEB0, 0x0099F5B0, 0x009A08A0, 0x009A1B90, 0x009A2E80, 0x009A5970,
        0x009A6C60, 0x009AA1A0, 0x009ACA20, 0x009ADB90, 0x009AED00, 0x009DDA40, 0x00C4E670,
        0x00DA2AD0, 0x00EB22A0, 0x00F36D70, 0x00F38060, 0x01132960, 0x0167F150, 0x016807B0,
        0x01681AA0, 0x016D03D0, 0x0171FEF0, 0x019B19B0, 0x01A92B30, 0x01B11370, 0x01B128F0,
        0x01B13BE0, 0x01B27DF0, 0x01CA8B80, 0x01D693D0,
    ],
};

/// The 64 further copies of `add`.
///
/// Ported from `FUN_004dec10` at `0x004DEC10`.
pub const COPIES_OF_004DEC10: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004DEC10,
    rust_path: "crates/tiara-core/src/runtime_collection.rs",
    rust_symbol: "add",
    copies: &[
        0x004DFF00, 0x004E12D0, 0x004E48B0, 0x004E79E0, 0x004E8CD0, 0x004EA7D0, 0x004EBAC0,
        0x004F0A70, 0x004F1D60, 0x004F35D0, 0x004F48C0, 0x004F6130, 0x00500EA0, 0x005651A0,
        0x00566940, 0x00567CB0, 0x00569100, 0x0056A470, 0x0056D050, 0x00570030, 0x005A74A0,
        0x005B55F0, 0x00615270, 0x00717500, 0x0078C750, 0x00799910, 0x0079AC00, 0x0079E390,
        0x007A0A10, 0x007A30C0, 0x007A5520, 0x007A6690, 0x008B9A30, 0x008BAD20, 0x0099D490,
        0x0099FB90, 0x009A0E80, 0x009A2170, 0x009A3460, 0x009A5F50, 0x009A7240, 0x009AA780,
        0x009AD000, 0x009AE170, 0x009AF2E0, 0x009DE020, 0x00C4EC50, 0x00DA30B0, 0x00EB2880,
        0x00F37350, 0x00F38640, 0x01132F40, 0x0167F730, 0x01680D70, 0x01682080, 0x016D09B0,
        0x017204D0, 0x019B1F90, 0x01B11950, 0x01B12ED0, 0x01B141C0, 0x01B283D0, 0x01CA9140,
        0x01D699B0,
    ],
};

/// The 64 further copies of `insert`.
///
/// Ported from `FUN_004decc0` at `0x004DECC0`.
pub const COPIES_OF_004DECC0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004DECC0,
    rust_path: "crates/tiara-core/src/runtime_collection.rs",
    rust_symbol: "insert",
    copies: &[
        0x004DFFB0, 0x004E1380, 0x004E4960, 0x004E7A90, 0x004E8D80, 0x004EA880, 0x004EBB70,
        0x004F0B20, 0x004F1E10, 0x004F3680, 0x004F4970, 0x004F61E0, 0x00500F50, 0x00565250,
        0x005669F0, 0x00567D60, 0x005691B0, 0x0056A520, 0x0056D100, 0x005700E0, 0x005A7550,
        0x005B56A0, 0x00615320, 0x007175B0, 0x0078C800, 0x007999C0, 0x0079ACB0, 0x0079E440,
        0x007A0AC0, 0x007A3170, 0x007A55D0, 0x007A6740, 0x008B9AE0, 0x008BADD0, 0x0099D540,
        0x0099FC40, 0x009A0F30, 0x009A2220, 0x009A3510, 0x009A6000, 0x009A72F0, 0x009AA830,
        0x009AD0B0, 0x009AE220, 0x009AF390, 0x009DE0D0, 0x00C4ED00, 0x00DA3160, 0x00EB2930,
        0x00F37400, 0x00F386F0, 0x01132FF0, 0x0167F7E0, 0x01680E20, 0x01682130, 0x016D0A60,
        0x01720580, 0x019B2040, 0x01B11A00, 0x01B12F80, 0x01B14270, 0x01B28480, 0x01CA91F0,
        0x01D69A60,
    ],
};

/// The 67 further copies of `insert_range`.
///
/// Ported from `FUN_004dece0` at `0x004DECE0`.
pub const COPIES_OF_004DECE0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004DECE0,
    rust_path: "crates/tiara-core/src/runtime_collection.rs",
    rust_symbol: "insert_range",
    copies: &[
        0x004DFFD0, 0x004E13A0, 0x004E4980, 0x004E7AB0, 0x004E8DA0, 0x004EA8A0, 0x004EBB90,
        0x004F0B40, 0x004F1E30, 0x004F36A0, 0x004F4990, 0x004F6200, 0x00500F70, 0x00565270,
        0x00566A10, 0x00567D80, 0x005691D0, 0x0056A540, 0x0056D120, 0x00570100, 0x005A7570,
        0x005B56C0, 0x00615340, 0x007175D0, 0x0078C820, 0x007999E0, 0x0079ACD0, 0x0079BFC0,
        0x0079E460, 0x007A0AE0, 0x007A3190, 0x007A55F0, 0x007A6760, 0x0082E250, 0x008B9B00,
        0x008BADF0, 0x0099D560, 0x0099FC60, 0x009A0F50, 0x009A2240, 0x009A3530, 0x009A6020,
        0x009A7310, 0x009AA850, 0x009AD0D0, 0x009AE240, 0x009AF3B0, 0x009DE0F0, 0x00C4ED20,
        0x00DA3180, 0x00EB2950, 0x00F37420, 0x00F38710, 0x01133010, 0x0167F800, 0x01680E40,
        0x01682150, 0x016D0A80, 0x017205A0, 0x019B2060, 0x01A931E0, 0x01B11A20, 0x01B12FA0,
        0x01B14290, 0x01B284A0, 0x01CA9210, 0x01D69A80,
    ],
};

/// The 67 further copies of `insert_range`.
///
/// Ported from `FUN_004ded40` at `0x004DED40`.
pub const COPIES_OF_004DED40: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004DED40,
    rust_path: "crates/tiara-core/src/runtime_collection.rs",
    rust_symbol: "insert_range",
    copies: &[
        0x004E0030, 0x004E1400, 0x004E49E0, 0x004E7B10, 0x004E8E00, 0x004EA900, 0x004EBBF0,
        0x004F0BA0, 0x004F1E90, 0x004F3700, 0x004F49F0, 0x004F6260, 0x00500FD0, 0x005652D0,
        0x00566A70, 0x00567DE0, 0x00569230, 0x0056A5A0, 0x0056D180, 0x00570160, 0x005A75D0,
        0x005B5720, 0x006153A0, 0x00717630, 0x0078C880, 0x00799A40, 0x0079AD30, 0x0079C020,
        0x0079E4C0, 0x007A0B40, 0x007A31F0, 0x007A5650, 0x007A67C0, 0x0082E2B0, 0x008B9B60,
        0x008BAE50, 0x0099D5C0, 0x0099FCC0, 0x009A0FB0, 0x009A22A0, 0x009A3590, 0x009A6080,
        0x009A7370, 0x009AA8B0, 0x009AD130, 0x009AE2A0, 0x009AF410, 0x009DE150, 0x00C4ED80,
        0x00DA31E0, 0x00EB29B0, 0x00F37480, 0x00F38770, 0x01133070, 0x0167F860, 0x01680EA0,
        0x016821B0, 0x016D0AE0, 0x01720600, 0x019B20C0, 0x01A93240, 0x01B11A80, 0x01B13000,
        0x01B142F0, 0x01B28500, 0x01CA9270, 0x01D69AE0,
    ],
};

/// The 64 further copies of `remove`.
///
/// Ported from `FUN_004df120` at `0x004DF120`.
pub const COPIES_OF_004DF120: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004DF120,
    rust_path: "crates/tiara-core/src/runtime_collection.rs",
    rust_symbol: "remove",
    copies: &[
        0x004E0410, 0x004E17E0, 0x004E4DC0, 0x004E7EF0, 0x004E91E0, 0x004EACE0, 0x004EBFD0,
        0x004F0F80, 0x004F2270, 0x004F3AE0, 0x004F4DD0, 0x004F6640, 0x005013B0, 0x005656B0,
        0x00566E50, 0x005681C0, 0x00569610, 0x0056A980, 0x0056D560, 0x00570540, 0x005A79B0,
        0x005B5B00, 0x00615780, 0x00717A10, 0x0078CC60, 0x00799E20, 0x0079B110, 0x0079E8A0,
        0x007A0F20, 0x007A35D0, 0x007A5A30, 0x007A6BA0, 0x008B9F40, 0x008BB230, 0x0099D9A0,
        0x009A00A0, 0x009A1390, 0x009A2680, 0x009A3970, 0x009A6460, 0x009A7750, 0x009AAC90,
        0x009AD510, 0x009AE680, 0x009AF7F0, 0x009DE530, 0x00C4F160, 0x00DA35C0, 0x00EB2D90,
        0x00F37860, 0x00F38B50, 0x01133450, 0x0167FC40, 0x01681280, 0x01682590, 0x016D0EC0,
        0x017209E0, 0x019B24A0, 0x01B11E60, 0x01B133E0, 0x01B146D0, 0x01B288E0, 0x01CA9650,
        0x01D69EC0,
    ],
};

/// The 64 further copies of `remove_from`.
///
/// Ported from `FUN_004df150` at `0x004DF150`.
pub const COPIES_OF_004DF150: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004DF150,
    rust_path: "crates/tiara-core/src/runtime_collection.rs",
    rust_symbol: "remove_from",
    copies: &[
        0x004E0440, 0x004E1810, 0x004E4DF0, 0x004E7F20, 0x004E9210, 0x004EAD10, 0x004EC000,
        0x004F0FB0, 0x004F22A0, 0x004F3B10, 0x004F4E00, 0x004F6670, 0x005013E0, 0x005656E0,
        0x00566E80, 0x005681F0, 0x00569640, 0x0056A9B0, 0x0056D590, 0x00570570, 0x005A79E0,
        0x005B5B30, 0x006157B0, 0x00717A40, 0x0078CC90, 0x00799E50, 0x0079B140, 0x0079E8D0,
        0x007A0F50, 0x007A3600, 0x007A5A60, 0x007A6BD0, 0x008B9F70, 0x008BB260, 0x0099D9D0,
        0x009A00D0, 0x009A13C0, 0x009A26B0, 0x009A39A0, 0x009A6490, 0x009A7780, 0x009AACC0,
        0x009AD540, 0x009AE6B0, 0x009AF820, 0x009DE560, 0x00C4F190, 0x00DA35F0, 0x00EB2DC0,
        0x00F37890, 0x00F38B80, 0x01133480, 0x0167FC70, 0x016812B0, 0x016825C0, 0x016D0EF0,
        0x01720A10, 0x019B24D0, 0x01B11E90, 0x01B13410, 0x01B14700, 0x01B28910, 0x01CA9680,
        0x01D69EF0,
    ],
};

/// The 64 further copies of `extract_value_from`.
///
/// Ported from `FUN_004df1d0` at `0x004DF1D0`.
pub const COPIES_OF_004DF1D0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004DF1D0,
    rust_path: "crates/tiara-core/src/runtime_collection.rs",
    rust_symbol: "extract_value_from",
    copies: &[
        0x004E04C0, 0x004E1890, 0x004E4E70, 0x004E7FA0, 0x004E9290, 0x004EAD90, 0x004EC080,
        0x004F1030, 0x004F2320, 0x004F3B90, 0x004F4E80, 0x004F66F0, 0x00501460, 0x00565760,
        0x00566F00, 0x00568270, 0x005696C0, 0x0056AA30, 0x0056D610, 0x005705F0, 0x005A7A60,
        0x005B5BB0, 0x00615830, 0x00717AC0, 0x0078CD10, 0x00799ED0, 0x0079B1C0, 0x0079E950,
        0x007A0FD0, 0x007A3680, 0x007A5AE0, 0x007A6C50, 0x008B9FF0, 0x008BB2E0, 0x0099DA50,
        0x009A0150, 0x009A1440, 0x009A2730, 0x009A3A20, 0x009A6510, 0x009A7800, 0x009AAD40,
        0x009AD5C0, 0x009AE730, 0x009AF8A0, 0x009DE5E0, 0x00C4F210, 0x00DA3670, 0x00EB2E40,
        0x00F37910, 0x00F38C00, 0x01133500, 0x0167FCF0, 0x01681330, 0x01682640, 0x016D0F70,
        0x01720A90, 0x019B2550, 0x01B11F10, 0x01B13490, 0x01B14780, 0x01B28990, 0x01CA9700,
        0x01D69F70,
    ],
};

/// The 64 further copies of `extract_value`.
///
/// Ported from `FUN_004df220` at `0x004DF220`.
pub const COPIES_OF_004DF220: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004DF220,
    rust_path: "crates/tiara-core/src/runtime_collection.rs",
    rust_symbol: "extract_value",
    copies: &[
        0x004E0510, 0x004E18E0, 0x004E4EC0, 0x004E7FF0, 0x004E92E0, 0x004EADE0, 0x004EC0D0,
        0x004F1080, 0x004F2370, 0x004F3BE0, 0x004F4ED0, 0x004F6740, 0x005014B0, 0x005657B0,
        0x00566F50, 0x005682C0, 0x00569710, 0x0056AA80, 0x0056D660, 0x00570640, 0x005A7AB0,
        0x005B5C00, 0x00615880, 0x00717B10, 0x0078CD60, 0x00799F20, 0x0079B210, 0x0079E9A0,
        0x007A1020, 0x007A36D0, 0x007A5B30, 0x007A6CA0, 0x008BA040, 0x008BB330, 0x0099DAA0,
        0x009A01A0, 0x009A1490, 0x009A2780, 0x009A3A70, 0x009A6560, 0x009A7850, 0x009AAD90,
        0x009AD610, 0x009AE780, 0x009AF8F0, 0x009DE630, 0x00C4F260, 0x00DA36C0, 0x00EB2E90,
        0x00F37960, 0x00F38C50, 0x01133550, 0x0167FD40, 0x01681390, 0x01682690, 0x016D0FC0,
        0x01720AE0, 0x019B25A0, 0x01B11F60, 0x01B134E0, 0x01B147D0, 0x01B289E0, 0x01CA9760,
        0x01D69FC0,
    ],
};

/// The 64 further copies of `contains`.
///
/// Ported from `FUN_004df390` at `0x004DF390`.
pub const COPIES_OF_004DF390: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004DF390,
    rust_path: "crates/tiara-core/src/runtime_collection.rs",
    rust_symbol: "contains",
    copies: &[
        0x004E0680, 0x004E1A50, 0x004E5030, 0x004E8160, 0x004E9450, 0x004EAF50, 0x004EC240,
        0x004F11F0, 0x004F24E0, 0x004F3D50, 0x004F5040, 0x004F68B0, 0x00501620, 0x00565920,
        0x005670C0, 0x00568430, 0x00569880, 0x0056ABF0, 0x0056D7D0, 0x005707B0, 0x005A7C20,
        0x005B5D70, 0x006159F0, 0x00717C80, 0x0078CED0, 0x0079A090, 0x0079B380, 0x0079EB10,
        0x007A1190, 0x007A3840, 0x007A5CA0, 0x007A6E10, 0x008BA1B0, 0x008BB4A0, 0x0099DC10,
        0x009A0310, 0x009A1600, 0x009A28F0, 0x009A3BE0, 0x009A66D0, 0x009A79C0, 0x009AAF00,
        0x009AD780, 0x009AE8F0, 0x009AFA60, 0x009DE7A0, 0x00C4F3D0, 0x00DA3830, 0x00EB3000,
        0x00F37AD0, 0x00F38DC0, 0x011336C0, 0x0167FEB0, 0x01681520, 0x01682800, 0x016D1130,
        0x01720C50, 0x019B2710, 0x01B120D0, 0x01B13650, 0x01B14940, 0x01B28B50, 0x01CA98F0,
        0x01D6A130,
    ],
};

/// The 64 further copies of `index_of`.
///
/// Ported from `FUN_004df3c0` at `0x004DF3C0`.
pub const COPIES_OF_004DF3C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004DF3C0,
    rust_path: "crates/tiara-core/src/runtime_collection.rs",
    rust_symbol: "index_of",
    copies: &[
        0x004E06B0, 0x004E1A80, 0x004E5060, 0x004E8190, 0x004E9480, 0x004EAF80, 0x004EC270,
        0x004F1220, 0x004F2510, 0x004F3D80, 0x004F5070, 0x004F68E0, 0x00501650, 0x00565950,
        0x005670F0, 0x00568460, 0x005698B0, 0x0056AC20, 0x0056D800, 0x005707E0, 0x005A7C50,
        0x005B5DA0, 0x00615A20, 0x00717CB0, 0x0078CF00, 0x0079A0C0, 0x0079B3B0, 0x0079EB40,
        0x007A11C0, 0x007A3870, 0x007A5CD0, 0x007A6E40, 0x008BA1E0, 0x008BB4D0, 0x0099DC40,
        0x009A0340, 0x009A1630, 0x009A2920, 0x009A3C10, 0x009A6700, 0x009A79F0, 0x009AAF30,
        0x009AD7B0, 0x009AE920, 0x009AFA90, 0x009DE7D0, 0x00C4F400, 0x00DA3860, 0x00EB3030,
        0x00F37B00, 0x00F38DF0, 0x011336F0, 0x0167FEE0, 0x01681550, 0x01682830, 0x016D1160,
        0x01720C80, 0x019B2740, 0x01B12100, 0x01B13680, 0x01B14970, 0x01B28B80, 0x01CA9920,
        0x01D6A160,
    ],
};

/// The 64 further copies of `index_from`.
///
/// Ported from `FUN_004df3f0` at `0x004DF3F0`.
pub const COPIES_OF_004DF3F0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004DF3F0,
    rust_path: "crates/tiara-core/src/runtime_collection.rs",
    rust_symbol: "index_from",
    copies: &[
        0x004E06E0, 0x004E1AB0, 0x004E5090, 0x004E81C0, 0x004E94B0, 0x004EAFB0, 0x004EC2A0,
        0x004F1250, 0x004F2540, 0x004F3DB0, 0x004F50A0, 0x004F6910, 0x00501680, 0x00565980,
        0x00567120, 0x00568490, 0x005698E0, 0x0056AC50, 0x0056D830, 0x00570810, 0x005A7C80,
        0x005B5DD0, 0x00615A50, 0x00717CE0, 0x0078CF30, 0x0079A0F0, 0x0079B3E0, 0x0079EB70,
        0x007A11F0, 0x007A38A0, 0x007A5D00, 0x007A6E70, 0x008BA210, 0x008BB500, 0x0099DC70,
        0x009A0370, 0x009A1660, 0x009A2950, 0x009A3C40, 0x009A6730, 0x009A7A20, 0x009AAF60,
        0x009AD7E0, 0x009AE950, 0x009AFAC0, 0x009DE800, 0x00C4F430, 0x00DA3890, 0x00EB3060,
        0x00F37B30, 0x00F38E20, 0x01133720, 0x0167FF10, 0x01681580, 0x01682860, 0x016D1190,
        0x01720CB0, 0x019B2770, 0x01B12130, 0x01B136B0, 0x01B149A0, 0x01B28BB0, 0x01CA9950,
        0x01D6A190,
    ],
};

/// The 64 further copies of `last_index_of`.
///
/// Ported from `FUN_004df430` at `0x004DF430`.
pub const COPIES_OF_004DF430: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004DF430,
    rust_path: "crates/tiara-core/src/runtime_collection.rs",
    rust_symbol: "last_index_of",
    copies: &[
        0x004E0720, 0x004E1AF0, 0x004E50D0, 0x004E8200, 0x004E94F0, 0x004EAFF0, 0x004EC2E0,
        0x004F1290, 0x004F2580, 0x004F3DF0, 0x004F50E0, 0x004F6950, 0x005016C0, 0x005659C0,
        0x00567160, 0x005684D0, 0x00569920, 0x0056AC90, 0x0056D870, 0x00570850, 0x005A7CC0,
        0x005B5E10, 0x00615A90, 0x00717D20, 0x0078CF70, 0x0079A130, 0x0079B420, 0x0079EBB0,
        0x007A1230, 0x007A38E0, 0x007A5D40, 0x007A6EB0, 0x008BA250, 0x008BB540, 0x0099DCB0,
        0x009A03B0, 0x009A16A0, 0x009A2990, 0x009A3C80, 0x009A6770, 0x009A7A60, 0x009AAFA0,
        0x009AD820, 0x009AE990, 0x009AFB00, 0x009DE840, 0x00C4F470, 0x00DA38D0, 0x00EB30A0,
        0x00F37B70, 0x00F38E60, 0x01133760, 0x0167FF50, 0x016815C0, 0x016828A0, 0x016D11D0,
        0x01720CF0, 0x019B27B0, 0x01B12170, 0x01B136F0, 0x01B149E0, 0x01B28BF0, 0x01CA9990,
        0x01D6A1D0,
    ],
};

/// The 141 further copies of `RuntimeEnumerator`.
///
/// Ported from `FUN_004df620` at `0x004DF620`.
pub const COPIES_OF_004DF620: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004DF620,
    rust_path: "crates/tiara-core/src/runtime_collection.rs",
    rust_symbol: "RuntimeEnumerator",
    copies: &[
        0x004DF640, 0x004E0910, 0x004E0930, 0x004E1CE0, 0x004E1D00, 0x004E52C0, 0x004E52E0,
        0x004E83F0, 0x004E8410, 0x004E96E0, 0x004E9700, 0x004EB1E0, 0x004EB200, 0x004EC4D0,
        0x004EC4F0, 0x004F1480, 0x004F14A0, 0x004F2770, 0x004F2790, 0x004F3FE0, 0x004F4000,
        0x004F52D0, 0x004F52F0, 0x004F6B40, 0x004F6B60, 0x005018B0, 0x005018D0, 0x00565BB0,
        0x00565BD0, 0x00567350, 0x00567370, 0x005686C0, 0x005686E0, 0x00569B10, 0x00569B30,
        0x0056AE80, 0x0056AEA0, 0x0056DA60, 0x0056DA80, 0x00570A40, 0x00570A60, 0x005A7EB0,
        0x005A7ED0, 0x005B6000, 0x005B6020, 0x00615C80, 0x00615CA0, 0x00717F10, 0x00717F30,
        0x0078D160, 0x0078D180, 0x0079A320, 0x0079A340, 0x0079B610, 0x0079B630, 0x0079C950,
        0x0079C980, 0x0079EDA0, 0x0079EDC0, 0x007A1420, 0x007A1440, 0x007A3AD0, 0x007A3AF0,
        0x007A5F30, 0x007A5F50, 0x007A70A0, 0x007A70C0, 0x0082EBE0, 0x0082EC10, 0x008BA440,
        0x008BA460, 0x008BB730, 0x008BB750, 0x0099DEA0, 0x0099DEC0, 0x009A05A0, 0x009A05C0,
        0x009A1890, 0x009A18B0, 0x009A2B80, 0x009A2BA0, 0x009A3E70, 0x009A3E90, 0x009A4670,
        0x009A4690, 0x009A4E70, 0x009A4E90, 0x009A5670, 0x009A5690, 0x009A6960, 0x009A6980,
        0x009A7C50, 0x009A7C70, 0x009AB190, 0x009AB1B0, 0x009ADA10, 0x009ADA30, 0x009AEB80,
        0x009AEBA0, 0x009AFCF0, 0x009AFD10, 0x009DEA30, 0x009DEA50, 0x00C4F660, 0x00C4F680,
        0x00DA3AC0, 0x00DA3AE0, 0x00EB3290, 0x00EB32B0, 0x00F37D60, 0x00F37D80, 0x00F39050,
        0x00F39070, 0x01133950, 0x01133970, 0x01680140, 0x01680160, 0x016817A0, 0x016817C0,
        0x01682A90, 0x01682AB0, 0x016D13C0, 0x016D13E0, 0x01720EE0, 0x01720F00, 0x019B29A0,
        0x019B29C0, 0x01A93B70, 0x01A93BA0, 0x01B12360, 0x01B12380, 0x01B138E0, 0x01B13900,
        0x01B14BD0, 0x01B14BF0, 0x01B28DE0, 0x01B28E00, 0x01CA9B70, 0x01CA9B90, 0x01D6A3C0,
        0x01D6A3E0,
    ],
};

/// The 42 further copies of `DESTROYED_AT_0X38`.
///
/// Ported from `FUN_004e0b00` at `0x004E0B00`.
pub const COPIES_OF_004E0B00: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004E0B00,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "DESTROYED_AT_0X38",
    copies: &[
        0x004E3600, 0x004E3AF0, 0x004E6E10, 0x004EFB80, 0x0055F590, 0x0055FA60, 0x00562240,
        0x005A4AD0, 0x005A4FA0, 0x005C38F0, 0x005E17D0, 0x0072A800, 0x0078BA10, 0x0078EAC0,
        0x00790A80, 0x00792910, 0x00792DE0, 0x009A4060, 0x009A4860, 0x009A5060, 0x009AB380,
        0x00DA1200, 0x00EB0770, 0x00F36370, 0x01487DA0, 0x01584B00, 0x016805C0, 0x01716650,
        0x017167B0, 0x0171A100, 0x0171CFD0, 0x0171D4A0, 0x0176C530, 0x0177ABC0, 0x01789260,
        0x019B2BA0, 0x019B37D0, 0x019B3910, 0x01A910F0, 0x01A91D20, 0x01A91E60, 0x01CA6C90,
    ],
};

/// The 2 further copies of `RECORD_AT_004E1F60`.
///
/// Ported from `FUN_004e1f60` at `0x004E1F60`.
pub const COPIES_OF_004E1F60: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004E1F60,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_004E1F60",
    copies: &[0x004E2D10, 0x004E2EA0],
};

/// The 3 further copies of `RECORD_AT_004E2100`.
///
/// Ported from `FUN_004e2100` at `0x004E2100`.
pub const COPIES_OF_004E2100: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004E2100,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_004E2100",
    copies: &[0x004F8370, 0x004F8420, 0x004F87F0],
};

/// The 29 further copies of `stored_hash`.
///
/// Ported from `FUN_004e2420` at `0x004E2420`.
pub const COPIES_OF_004E2420: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004E2420,
    rust_path: "crates/tiara-core/src/runtime_dictionary.rs",
    rust_symbol: "stored_hash",
    copies: &[
        0x004E5A10, 0x004ECC20, 0x004EE8E0, 0x0055E560, 0x00560FE0, 0x005630A0, 0x005A3AA0,
        0x005C2410, 0x005E0660, 0x0078A7B0, 0x0078D820, 0x0078F680, 0x007918E0, 0x00793C60,
        0x00795F90, 0x00853250, 0x009A83E0, 0x00D9FF60, 0x00EAF370, 0x00F35190, 0x014869A0,
        0x015837C0, 0x0171BFB0, 0x017799F0, 0x019B3030, 0x01A91580, 0x01B15350, 0x01B263A0,
        0x01CA59F0,
    ],
};

/// The 29 further copies of `RuntimeNotifier`.
///
/// Ported from `FUN_004e28c0` at `0x004E28C0`.
pub const COPIES_OF_004E28C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004E28C0,
    rust_path: "crates/tiara-core/src/runtime_collection.rs",
    rust_symbol: "RuntimeNotifier",
    copies: &[
        0x004E5E90, 0x004ED090, 0x004EECB0, 0x0055E930, 0x005614C0, 0x00563520, 0x005A3E70,
        0x005C2A60, 0x005E0AD0, 0x0078AB70, 0x0078DBF0, 0x0078FB00, 0x00791CB0, 0x007940C0,
        0x007964B0, 0x008537C0, 0x009A8930, 0x00DA0330, 0x00EAF7F0, 0x00F35630, 0x01486E20,
        0x01583D10, 0x0171C370, 0x01779EC0, 0x019B33E0, 0x01A91930, 0x01B15870, 0x01B268B0,
        0x01CA5F00,
    ],
};

/// The 33 further copies of `RuntimeNotifier`.
///
/// Ported from `FUN_004e2900` at `0x004E2900`.
pub const COPIES_OF_004E2900: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004E2900,
    rust_path: "crates/tiara-core/src/runtime_collection.rs",
    rust_symbol: "RuntimeNotifier",
    copies: &[
        0x004E5ED0, 0x004ED0D0, 0x004EECF0, 0x0055E970, 0x00561500, 0x00563560, 0x005A3EB0,
        0x005C2AA0, 0x005E0B10, 0x0078ABB0, 0x0078DC30, 0x0078FB40, 0x00791CF0, 0x00794100,
        0x007964F0, 0x00853800, 0x009A42A0, 0x009A4AA0, 0x009A52A0, 0x009A8970, 0x009AB5C0,
        0x00DA0370, 0x00EAF830, 0x00F35670, 0x01486E60, 0x01583D50, 0x0171C3B0, 0x01779F00,
        0x019B3420, 0x01A91970, 0x01B158B0, 0x01B268E0, 0x01CA5F30,
    ],
};

/// The 85 further copies of `len`.
///
/// Ported from `FUN_004e37b0` at `0x004E37B0`.
pub const COPIES_OF_004E37B0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004E37B0,
    rust_path: "crates/tiara-core/src/runtime_collection.rs",
    rust_symbol: "len",
    copies: &[
        0x004E3CF0, 0x004E6AC0, 0x004E6FC0, 0x004EDCC0, 0x004EDF60, 0x004EF860, 0x004EFD30,
        0x0055F740, 0x0055FC10, 0x005623F0, 0x00562660, 0x00564150, 0x005643F0, 0x005A4C80,
        0x005A5150, 0x005C3AA0, 0x005C4050, 0x005E19D0, 0x005E1C70, 0x00611650, 0x0078B6F0,
        0x0078BBC0, 0x0078E7A0, 0x0078EC70, 0x00790730, 0x00790C30, 0x00792AC0, 0x00792F90,
        0x00794D00, 0x00795210, 0x00797120, 0x00797650, 0x00854490, 0x00854730, 0x0094AB00,
        0x00957330, 0x00957570, 0x00995040, 0x009A9640, 0x009A9BB0, 0x00AFFCF0, 0x00B19370,
        0x00B19580, 0x00B21FE0, 0x00B22360, 0x00B28DE0, 0x00B353C0, 0x00B41F50, 0x00B58340,
        0x00B59A10, 0x00C1AA10, 0x00C83020, 0x00DA0EE0, 0x00DA13B0, 0x00DE5BB0, 0x00DE5ED0,
        0x00E01E00, 0x00EB0420, 0x00EB0920, 0x00F36520, 0x00F36790, 0x01487A50, 0x01487F50,
        0x01584CB0, 0x01585220, 0x0161B1F0, 0x0171D180, 0x0171D650, 0x0177ADC0, 0x0177B060,
        0x01847410, 0x01888A70, 0x018C5900, 0x018D3E80, 0x0197F1E0, 0x019B3F40, 0x019B41B0,
        0x01A92490, 0x01A92700, 0x01B164E0, 0x01B16A10, 0x01B27590, 0x01B27800, 0x01CA6E40,
        0x01CA70B0,
    ],
};

/// The 89 further copies of `RuntimeEnumerator`.
///
/// Ported from `FUN_004e3910` at `0x004E3910`.
pub const COPIES_OF_004E3910: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004E3910,
    rust_path: "crates/tiara-core/src/runtime_collection.rs",
    rust_symbol: "RuntimeEnumerator",
    copies: &[
        0x004E3E70, 0x004E4000, 0x004E6C50, 0x004E7120, 0x004E72B0, 0x004EDE50, 0x004EE0C0,
        0x004EE250, 0x004EF9C0, 0x004EFE90, 0x004F0010, 0x0055F8A0, 0x0055FD70, 0x0055FEF0,
        0x00562550, 0x005627F0, 0x00562980, 0x005642E0, 0x00564550, 0x005646E0, 0x005A4DE0,
        0x005A52B0, 0x005A5430, 0x005C3C10, 0x005C41F0, 0x005C43A0, 0x005E1B60, 0x005E1DD0,
        0x005E1F60, 0x0078B850, 0x0078BD20, 0x0078BEA0, 0x0078E900, 0x0078EDD0, 0x0078EF50,
        0x007908C0, 0x00790D90, 0x00790F20, 0x00792C20, 0x007930F0, 0x00793270, 0x00794E60,
        0x00795390, 0x00795510, 0x007972B0, 0x007977D0, 0x00797970, 0x00854620, 0x008548C0,
        0x00854A60, 0x009A97A0, 0x009A9D40, 0x009A9ED0, 0x00DA1040, 0x00DA1510, 0x00DA1690,
        0x00EB05B0, 0x00EB0A80, 0x00EB0C10, 0x00F36680, 0x00F36910, 0x00F36AA0, 0x01487BE0,
        0x014880B0, 0x01488240, 0x01584E10, 0x015853B0, 0x01585550, 0x0171D2E0, 0x0171D7B0,
        0x0171D930, 0x0177AF50, 0x0177B1C0, 0x0177B350, 0x019B40A0, 0x019B4310, 0x019B4490,
        0x01A925F0, 0x01A92860, 0x01A929E0, 0x01B16670, 0x01B16B90, 0x01B16D30, 0x01B276F0,
        0x01B27990, 0x01B27B20, 0x01CA6FA0, 0x01CA7240, 0x01CA73D0,
    ],
};

/// The 2 further copies of `RECORD_AT_004E5550`.
///
/// Ported from `FUN_004e5550` at `0x004E5550`.
pub const COPIES_OF_004E5550: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004E5550,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_004E5550",
    copies: &[0x004E62E0, 0x004E6470],
};

/// The 59 further copies of `step_to_next_entry`.
///
/// Ported from `FUN_004e6d33` at `0x004E6D33`.
pub const COPIES_OF_004E6D33: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004E6D33,
    rust_path: "crates/tiara-core/src/runtime_dictionary.rs",
    rust_symbol: "step_to_next_entry",
    copies: &[
        0x004E7203, 0x004E7393, 0x004EDF33, 0x004EE1A3, 0x004EE333, 0x004EFAA3, 0x004EFF73,
        0x004F00F3, 0x0055F983, 0x0055FE53, 0x0055FFD3, 0x00562633, 0x005628D3, 0x00562A63,
        0x005643C3, 0x00564633, 0x005647C3, 0x005A4EC3, 0x005A5393, 0x005A5513, 0x005E1C43,
        0x005E1EB3, 0x005E2043, 0x0078E9E3, 0x0078EEB3, 0x0078F033, 0x007909A3, 0x00790E73,
        0x00791003, 0x00792D03, 0x007931D3, 0x00793353, 0x00854703, 0x008549A3, 0x00854B43,
        0x009A9883, 0x009A9E23, 0x009A9FB3, 0x00DA1123, 0x00DA15F3, 0x00DA1773, 0x00EB0693,
        0x00EB0B63, 0x00EB0CF3, 0x01487CC3, 0x01488193, 0x01488323, 0x01584EF3, 0x01585493,
        0x01585633, 0x0177B033, 0x0177B2A3, 0x0177B433, 0x01B277D3, 0x01B27A73, 0x01B27C03,
        0x01CA7083, 0x01CA7323, 0x01CA74B3,
    ],
};

/// The 10 further copies of `value_at`.
///
/// Ported from `FUN_004e70e0` at `0x004E70E0`.
pub const COPIES_OF_004E70E0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004E70E0,
    rust_path: "crates/tiara-core/src/runtime_dictionary.rs",
    rust_symbol: "value_at",
    copies: &[
        0x004EFE50, 0x0055FD30, 0x00564510, 0x005A5270, 0x0078ED90, 0x00790D50, 0x007930B0,
        0x00DA14D0, 0x00EB0A40, 0x0177B180,
    ],
};

/// The 2 further copies of `RECORD_AT_004EC760`.
///
/// Ported from `FUN_004ec760` at `0x004EC760`.
pub const COPIES_OF_004EC760: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004EC760,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_004EC760",
    copies: &[0x004ED4E0, 0x004ED670],
};

/// The 3 further copies of `RECORD_AT_004EC900`.
///
/// Ported from `FUN_004ec900` at `0x004EC900`.
pub const COPIES_OF_004EC900: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004EC900,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_004EC900",
    copies: &[0x004FDF10, 0x004FDFC0, 0x004FE390],
};

/// The 77 further copies of `RuntimeComparer`.
///
/// Ported from `FUN_004f6c80` at `0x004F6C80`.
pub const COPIES_OF_004F6C80: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004F6C80,
    rust_path: "crates/tiara-core/src/runtime_collection.rs",
    rust_symbol: "RuntimeComparer",
    copies: &[
        0x004F6E60, 0x004F7040, 0x004F7220, 0x004F9D30, 0x004FC820, 0x004FCA00, 0x004FCBE0,
        0x004FCDC0, 0x005019F0, 0x00501BD0, 0x00501DB0, 0x00501F90, 0x00502170, 0x00502DE0,
        0x00502FC0, 0x00503620, 0x005041C0, 0x005045A0, 0x00505040, 0x00572430, 0x005726D0,
        0x00572920, 0x00572B70, 0x00572DC0, 0x00573600, 0x00573F90, 0x005A86C0, 0x005B61B0,
        0x005C84D0, 0x00615E30, 0x007180C0, 0x0079EF50, 0x007AC310, 0x007AC560, 0x007ACC80,
        0x007AD3C0, 0x007AD940, 0x007ADE00, 0x007AE050, 0x008BB8E0, 0x008BBB30, 0x009ABC70,
        0x009AC110, 0x009AC360, 0x009AC5B0, 0x009AC800, 0x009AFEA0, 0x009B00F0, 0x009B2D30,
        0x009B50B0, 0x009B5300, 0x009B5550, 0x009B64D0, 0x009DEBE0, 0x00BB6260, 0x00C4F890,
        0x00DA3EE0, 0x00DB7F70, 0x00DB81C0, 0x00E14F10, 0x00E293E0, 0x00E29630, 0x00EB3770,
        0x00EEEFF0, 0x00F3A710, 0x00F3A960, 0x00F54430, 0x0148B4E0, 0x0158B0E0, 0x016D1570,
        0x01721300, 0x01721550, 0x0178A5C0, 0x017CB0C0, 0x01B29220, 0x01CAA2A0, 0x01D6A570,
    ],
};

/// The 77 further copies of `RuntimeComparer`.
///
/// Ported from `FUN_004f6cb0` at `0x004F6CB0`.
pub const COPIES_OF_004F6CB0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004F6CB0,
    rust_path: "crates/tiara-core/src/runtime_collection.rs",
    rust_symbol: "RuntimeComparer",
    copies: &[
        0x004F6E90, 0x004F7070, 0x004F7250, 0x004F9D60, 0x004FC850, 0x004FCA30, 0x004FCC10,
        0x004FCDF0, 0x00501A20, 0x00501C00, 0x00501DE0, 0x00501FC0, 0x005021A0, 0x00502E10,
        0x00502FF0, 0x00503650, 0x005041F0, 0x005045D0, 0x00505070, 0x00572460, 0x00572700,
        0x00572950, 0x00572BA0, 0x00572DF0, 0x00573630, 0x00573FC0, 0x005A86F0, 0x005B61E0,
        0x005C8500, 0x00615E60, 0x007180F0, 0x0079EF80, 0x007AC340, 0x007AC590, 0x007ACCB0,
        0x007AD3F0, 0x007AD970, 0x007ADE30, 0x007AE080, 0x008BB910, 0x008BBB60, 0x009ABCA0,
        0x009AC140, 0x009AC390, 0x009AC5E0, 0x009AC830, 0x009AFED0, 0x009B0120, 0x009B2D60,
        0x009B50E0, 0x009B5330, 0x009B5580, 0x009B6500, 0x009DEC10, 0x00BB6290, 0x00C4F8C0,
        0x00DA3F10, 0x00DB7FA0, 0x00DB8200, 0x00E14F40, 0x00E29410, 0x00E29660, 0x00EB37A0,
        0x00EEF020, 0x00F3A740, 0x00F3A990, 0x00F54460, 0x0148B510, 0x0158B110, 0x016D15A0,
        0x01721330, 0x01721580, 0x0178A5F0, 0x017CB0F0, 0x01B29250, 0x01CAA2E0, 0x01D6A5A0,
    ],
};

/// The 69 further copies of `search_sorted_range`.
///
/// Ported from `FUN_004f6d50` at `0x004F6D50`.
pub const COPIES_OF_004F6D50: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004F6D50,
    rust_path: "crates/tiara-core/src/sorted_search.rs",
    rust_symbol: "search_sorted_range",
    copies: &[
        0x004F6F30, 0x004F7110, 0x004F72F0, 0x004F9E00, 0x004FC8F0, 0x004FCAD0, 0x004FCCB0,
        0x004FCE90, 0x00501AC0, 0x00501CA0, 0x00501E80, 0x00502060, 0x00502240, 0x00503090,
        0x005036F0, 0x00504670, 0x00505110, 0x00572500, 0x005727A0, 0x005729F0, 0x00572C40,
        0x00572E90, 0x005736D0, 0x00574060, 0x005A8790, 0x005B6280, 0x00615F00, 0x00718190,
        0x0079F020, 0x007AC3E0, 0x007AC630, 0x007ACD50, 0x007AD490, 0x007ADA10, 0x007ADED0,
        0x007AE120, 0x008BB9B0, 0x008BBC00, 0x009ABD40, 0x009AC1E0, 0x009AC430, 0x009AC680,
        0x009AC8D0, 0x009AFF70, 0x009B01C0, 0x009B2E00, 0x009B5180, 0x009B53D0, 0x009B5620,
        0x009DECB0, 0x00BB6330, 0x00C4F960, 0x00DA3FB0, 0x00DB8040, 0x00DB82B0, 0x00E14FE0,
        0x00E294B0, 0x00E29700, 0x00EB3840, 0x00EEF0C0, 0x00F3A7E0, 0x00F3AA30, 0x00F54500,
        0x016D1640, 0x01721620, 0x017CB190, 0x01B292F0, 0x01CAA310, 0x01D6A640,
    ],
};

/// The 27 further copies of `set_capacity`.
///
/// Ported from `FUN_004f7440` at `0x004F7440`.
pub const COPIES_OF_004F7440: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004F7440,
    rust_path: "crates/tiara-core/src/runtime_collection.rs",
    rust_symbol: "set_capacity",
    copies: &[
        0x004F9F50, 0x004FCFE0, 0x0056E510, 0x00570BC0, 0x005A2040, 0x005C44F0, 0x005C6C30,
        0x005DEB80, 0x005E23E0, 0x00797C90, 0x007A15A0, 0x007A97B0, 0x00854BB0, 0x009B0310,
        0x009B1860, 0x00EB0D60, 0x00EEC310, 0x00F391D0, 0x01143C20, 0x014889D0, 0x015858B0,
        0x01586E10, 0x015894F0, 0x0175B0E0, 0x019B0310, 0x01B8CE70, 0x01CA7640,
    ],
};

/// The 48 further copies of `SECOND_HOLDER_OFFSET`.
///
/// Ported from `FUN_004f75a0` at `0x004F75A0`.
pub const COPIES_OF_004F75A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004F75A0,
    rust_path: "crates/tiara-core/src/delphi_runtime.rs",
    rust_symbol: "SECOND_HOLDER_OFFSET",
    copies: &[
        0x004FA0B0, 0x004FD140, 0x004FF780, 0x0055CEE0, 0x0056B900, 0x0056E670, 0x00570D20,
        0x005A21A0, 0x005A5D50, 0x005C4650, 0x005C6D90, 0x005DECE0, 0x005E2540, 0x00797DF0,
        0x0079BA60, 0x0079CC40, 0x0079F2C0, 0x007A1700, 0x007A3DA0, 0x007A7380, 0x007A8670,
        0x007A9910, 0x007AAE50, 0x0082DCF0, 0x00854D10, 0x0099E2F0, 0x009B0470, 0x009B19C0,
        0x00BE23F0, 0x00BE3800, 0x00DA1930, 0x00EB0EC0, 0x00EEC470, 0x00F39330, 0x01143D80,
        0x011452C0, 0x01488B30, 0x01585A10, 0x01586F70, 0x01589650, 0x0167DE90, 0x0171DBD0,
        0x0175B240, 0x019B0470, 0x01A92C80, 0x01B17150, 0x01B8CFD0, 0x01CA77A0,
    ],
};

/// The 27 further copies of `remove_from`.
///
/// Ported from `FUN_004f8020` at `0x004F8020`.
pub const COPIES_OF_004F8020: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004F8020,
    rust_path: "crates/tiara-core/src/runtime_collection.rs",
    rust_symbol: "remove_from",
    copies: &[
        0x004FAB30, 0x004FDBC0, 0x0056F0F0, 0x005717A0, 0x005A2C20, 0x005C50D0, 0x005C7810,
        0x005DF760, 0x005E2FC0, 0x00798870, 0x007A2180, 0x007AA390, 0x00855790, 0x009B0EF0,
        0x009B2440, 0x00EB1940, 0x00EECEF0, 0x00F39DB0, 0x01144800, 0x014895B0, 0x015864B0,
        0x015879F0, 0x0158A0D0, 0x0175BCC0, 0x019B0EF0, 0x01B8DA50, 0x01CA8220,
    ],
};

/// The 2 further copies of `RECORD_AT_004F8290`.
///
/// Ported from `FUN_004f8290` at `0x004F8290`.
pub const COPIES_OF_004F8290: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004F8290,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_004F8290",
    copies: &[0x00502BA0, 0x00502C30],
};

/// The 45 further copies of `contains`.
///
/// Ported from `FUN_004f84a0` at `0x004F84A0`.
pub const COPIES_OF_004F84A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004F84A0,
    rust_path: "crates/tiara-core/src/runtime_collection.rs",
    rust_symbol: "contains",
    copies: &[
        0x004FAFB0, 0x004FE040, 0x00500480, 0x0055DBE0, 0x0056C600, 0x0056F570, 0x00571C20,
        0x005A30B0, 0x005A6A50, 0x005C5570, 0x005C7CA0, 0x005DFBE0, 0x005E3440, 0x00798D00,
        0x0079D940, 0x0079FFC0, 0x007A2600, 0x007A4AA0, 0x007A8090, 0x007A9370, 0x007AA820,
        0x007ABB50, 0x00855C10, 0x0099EFF0, 0x009B1380, 0x009B28C0, 0x00BE30F0, 0x00BE4500,
        0x00DA2630, 0x00EB1DC0, 0x00EED370, 0x00F3A230, 0x01144C90, 0x01145FC0, 0x01489A30,
        0x01586950, 0x01587E80, 0x0158A550, 0x0167EB90, 0x0171E8D0, 0x0175C140, 0x019B1380,
        0x01B17E50, 0x01B8DEE0, 0x01CA86A0,
    ],
};

/// The 45 further copies of `index_from`.
///
/// Ported from `FUN_004f8500` at `0x004F8500`.
pub const COPIES_OF_004F8500: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004F8500,
    rust_path: "crates/tiara-core/src/runtime_collection.rs",
    rust_symbol: "index_from",
    copies: &[
        0x004FB010, 0x004FE0A0, 0x005004E0, 0x0055DC40, 0x0056C660, 0x0056F5D0, 0x00571C80,
        0x005A3110, 0x005A6AB0, 0x005C55D0, 0x005C7D00, 0x005DFC40, 0x005E34A0, 0x00798D60,
        0x0079D9A0, 0x007A0020, 0x007A2660, 0x007A4B00, 0x007A80F0, 0x007A93D0, 0x007AA880,
        0x007ABBB0, 0x00855C70, 0x0099F050, 0x009B13E0, 0x009B2920, 0x00BE3150, 0x00BE4560,
        0x00DA2690, 0x00EB1E20, 0x00EED3D0, 0x00F3A290, 0x01144CF0, 0x01146020, 0x01489A90,
        0x015869B0, 0x01587EE0, 0x0158A5B0, 0x0167EBF0, 0x0171E930, 0x0175C1A0, 0x019B13E0,
        0x01B17EB0, 0x01B8DF40, 0x01CA8700,
    ],
};

/// The 2 further copies of `RECORD_AT_004FADA0`.
///
/// Ported from `FUN_004fada0` at `0x004FADA0`.
pub const COPIES_OF_004FADA0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004FADA0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_004FADA0",
    copies: &[0x005033E0, 0x00503470],
};

/// The 1 further copy of `RECORD_AT_004FBC80`.
///
/// Ported from `FUN_004fbc80` at `0x004FBC80`.
pub const COPIES_OF_004FBC80: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004FBC80,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_004FBC80",
    copies: &[0x00C83710],
};

/// The 2 further copies of `RECORD_AT_004FDE30`.
///
/// Ported from `FUN_004fde30` at `0x004FDE30`.
pub const COPIES_OF_004FDE30: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004FDE30,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_004FDE30",
    copies: &[0x00503F80, 0x00504010],
};

/// The 130 further copies of `RuntimeEnumerator::new`.
///
/// Ported from `FUN_004ff510` at `0x004FF510`.
pub const COPIES_OF_004FF510: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004FF510,
    rust_path: "crates/tiara-core/src/runtime_collection.rs",
    rust_symbol: "RuntimeEnumerator::new",
    copies: &[
        0x004DE390, 0x004DF680, 0x004E0970, 0x004E1D40, 0x004E5320, 0x004E8450, 0x004E9740,
        0x004EB240, 0x004EC530, 0x004F14E0, 0x004F27D0, 0x004F4040, 0x004F5330, 0x004F6BA0,
        0x004F8830, 0x004F9C50, 0x004FB340, 0x004FC740, 0x004FE3D0, 0x005007A0, 0x00501910,
        0x0055DF00, 0x00565C10, 0x005673B0, 0x00568720, 0x00569B70, 0x0056AEE0, 0x0056C920,
        0x0056DAC0, 0x0056F900, 0x00570AA0, 0x00571FB0, 0x005A3440, 0x005A6D70, 0x005A7F10,
        0x005B6060, 0x005C5920, 0x005C6B10, 0x005C8030, 0x005DFF70, 0x005E37D0, 0x00615CE0,
        0x00717F70, 0x0078D1C0, 0x00799090, 0x0079A380, 0x0079B670, 0x0079C9D0, 0x0079DC60,
        0x0079EE00, 0x007A02E0, 0x007A1480, 0x007A2990, 0x007A3B30, 0x007A4DC0, 0x007A5F90,
        0x007A7100, 0x007A83C0, 0x007A9690, 0x007AABB0, 0x007ABE70, 0x0082DA80, 0x0082EC60,
        0x00855FA0, 0x008BA4A0, 0x008BB790, 0x0099DF00, 0x0099F310, 0x009A0600, 0x009A18F0,
        0x009A2BE0, 0x009A3ED0, 0x009A46D0, 0x009A4ED0, 0x009A56D0, 0x009A69C0, 0x009A7CB0,
        0x009AB1F0, 0x009AB9F0, 0x009ADA70, 0x009AEBE0, 0x009AFD50, 0x009B1710, 0x009B2C50,
        0x009B3FB0, 0x009DEA90, 0x00BB6110, 0x00BE3410, 0x00BE4820, 0x00C4F6C0, 0x00DA2950,
        0x00DA3B20, 0x00EB2150, 0x00EB32F0, 0x00EED700, 0x00EEEB70, 0x00F37DC0, 0x00F390B0,
        0x00F3A5C0, 0x011339B0, 0x01145020, 0x011462E0, 0x01489DC0, 0x0148AF70, 0x01586CF0,
        0x01588210, 0x015893D0, 0x0158A8E0, 0x0167EEB0, 0x016801A0, 0x01681800, 0x01682AF0,
        0x016D1420, 0x0171EBF0, 0x0171FDD0, 0x01720F40, 0x0175C4D0, 0x0178A470, 0x019B1710,
        0x019B2A00, 0x01A93BF0, 0x01B123C0, 0x01B13940, 0x01B14C30, 0x01B18170, 0x01B28E40,
        0x01B8E270, 0x01CA8A30, 0x01CA9BD0, 0x01D6A420,
    ],
};

/// The 127 further copies of `index_out_of_bounds`.
///
/// Ported from `FUN_004ffb70` at `0x004FFB70`.
pub const COPIES_OF_004FFB70: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x004FFB70,
    rust_path: "crates/tiara-core/src/runtime_collection.rs",
    rust_symbol: "index_out_of_bounds",
    copies: &[
        0x004AE960, 0x004DD5E0, 0x004DEB70, 0x004DFE60, 0x004E1230, 0x004E4810, 0x004E7940,
        0x004E8C30, 0x004EA730, 0x004EBA20, 0x004F09D0, 0x004F1CC0, 0x004F3530, 0x004F4820,
        0x004F6090, 0x004F7990, 0x004F8EA0, 0x004FA4A0, 0x004FB9B0, 0x004FD530, 0x004FEA30,
        0x00500E00, 0x0055D2D0, 0x00565100, 0x005668A0, 0x00567C10, 0x00569060, 0x0056A3D0,
        0x0056BCF0, 0x0056CFB0, 0x0056EA60, 0x0056FF90, 0x00571110, 0x005A2590, 0x005A6140,
        0x005A7400, 0x005B5550, 0x005C4A40, 0x005C5FE0, 0x005C7180, 0x005DF0D0, 0x005E2930,
        0x006151D0, 0x00717460, 0x0078C6B0, 0x007981E0, 0x00799870, 0x0079AB60, 0x0079BE50,
        0x0079D030, 0x0079E2F0, 0x0079F6B0, 0x007A0970, 0x007A1AF0, 0x007A3020, 0x007A4190,
        0x007A5480, 0x007A65F0, 0x007A7770, 0x007A8A60, 0x007A9D00, 0x007AB240, 0x0082CFA0,
        0x0082E0E0, 0x00855100, 0x008B9990, 0x008BAC80, 0x0099D3F0, 0x0099E6E0, 0x0099FAF0,
        0x009A0DE0, 0x009A20D0, 0x009A33C0, 0x009A5EB0, 0x009A71A0, 0x009AA6E0, 0x009ACF60,
        0x009AE0D0, 0x009AF240, 0x009B0860, 0x009B1DB0, 0x009B3490, 0x009DDF80, 0x00BB5360,
        0x00BE27E0, 0x00BE3BF0, 0x00C4EBB0, 0x00DA1D20, 0x00DA3010, 0x00EB12B0, 0x00EB27E0,
        0x00EEC860, 0x00EEDDC0, 0x00F372B0, 0x00F385A0, 0x00F39720, 0x01132EA0, 0x01144170,
        0x011456B0, 0x01488F20, 0x0148A450, 0x01585E00, 0x01587360, 0x015888D0, 0x01589A40,
        0x0167E280, 0x0167F690, 0x01680CD0, 0x01681FE0, 0x016D0910, 0x0171DFC0, 0x0171F2B0,
        0x01720430, 0x0175B630, 0x01789990, 0x019B0860, 0x019B1EF0, 0x01A93070, 0x01B118B0,
        0x01B12E30, 0x01B14120, 0x01B17540, 0x01B28330, 0x01B8D3C0, 0x01CA7B90, 0x01CA90A0,
        0x01D69910,
    ],
};

/// The 30 further copies of `search_sorted_range`.
///
/// Ported from `FUN_00502cd0` at `0x00502CD0`.
pub const COPIES_OF_00502CD0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00502CD0,
    rust_path: "crates/tiara-core/src/sorted_search.rs",
    rust_symbol: "search_sorted_range",
    copies: &[
        0x00503510, 0x005040B0, 0x00504490, 0x0056B660, 0x00573480, 0x00573E10, 0x00574390,
        0x005A8540, 0x005E2290, 0x005E3E90, 0x007ACB00, 0x007AD240, 0x007AD7C0, 0x007ADC80,
        0x007AEBC0, 0x008562A0, 0x009ABF90, 0x009B6190, 0x00BE4CD0, 0x00DA3D60, 0x00DB8530,
        0x00EB35F0, 0x00EEEE70, 0x00F3AD60, 0x01146860, 0x0148B360, 0x0158B4E0, 0x01721180,
        0x0175C7D0, 0x01CAA190,
    ],
};

/// The 127 further copies of `HELD_INTERFACE_OFFSET`.
///
/// Ported from `FUN_0051fd70` at `0x0051FD70`.
pub const COPIES_OF_0051FD70: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0051FD70,
    rust_path: "crates/tiara-core/src/delphi_runtime.rs",
    rust_symbol: "HELD_INTERFACE_OFFSET",
    copies: &[
        0x005209C0, 0x00520A80, 0x00520B40, 0x00520C00, 0x00520CC0, 0x00520D80, 0x00520E40,
        0x00520F00, 0x00520FC0, 0x00521080, 0x00521140, 0x00521200, 0x005212C0, 0x00521380,
        0x00521440, 0x00521500, 0x005215C0, 0x00521680, 0x00521740, 0x00521800, 0x005218C0,
        0x00521980, 0x00521A40, 0x00572250, 0x00572FF0, 0x005744F0, 0x00574770, 0x005749F0,
        0x00574C70, 0x00574EF0, 0x00575170, 0x005754A0, 0x00575720, 0x00575AE0, 0x00575D60,
        0x005A7FF0, 0x005A88A0, 0x005A8BD0, 0x005B6390, 0x005C8A00, 0x005C8E80, 0x005C9110,
        0x005E38B0, 0x005E3FA0, 0x00616010, 0x007182A0, 0x007ACE60, 0x007AECD0, 0x007AF0C0,
        0x007AF340, 0x007AF5C0, 0x007AF860, 0x007AFB90, 0x007AFE10, 0x007B0140, 0x007B03C0,
        0x007B0780, 0x007B0A00, 0x007B0D30, 0x007B0FB0, 0x007B1230, 0x007B15A0, 0x007B18F0,
        0x007B1CC0, 0x0082EFA0, 0x008563B0, 0x008BBD10, 0x008BBF90, 0x009ABB40, 0x009B4090,
        0x009B4310, 0x009B4640, 0x009B48C0, 0x009B4B40, 0x009B4DC0, 0x009B5730, 0x009B59B0,
        0x009B66B0, 0x009B6930, 0x009B6BB0, 0x009B6E30, 0x009B7200, 0x009B75C0, 0x009DEDC0,
        0x00BB6440, 0x00BE4DE0, 0x00BE4EA0, 0x00C4FA70, 0x00DA40C0, 0x00DA43F0, 0x00DB8640,
        0x00DB88C0, 0x00DB8B80, 0x00E150F0, 0x00E29810, 0x00E29B60, 0x00E29DE0, 0x00EB3950,
        0x00EB3D10, 0x00EEF1D0, 0x00EEF590, 0x00F3AE70, 0x00F3B0F0, 0x00F3B370, 0x00F54610,
        0x01146970, 0x01146D40, 0x0129C660, 0x0148B8D0, 0x0148BC90, 0x0158B5F0, 0x0158BA30,
        0x0158BE00, 0x0158C090, 0x016D1750, 0x01721730, 0x01721A60, 0x01721CF0, 0x0175C8E0,
        0x0178A7A0, 0x017CB2A0, 0x01A93F60, 0x01B29400, 0x01B8E690, 0x01CA9EB0, 0x01CAA430,
        0x01D6A750,
    ],
};

/// The 127 further copies of `HOLDER_FORWARDED_SLOT`.
///
/// Ported from `FUN_0051fe10` at `0x0051FE10`.
pub const COPIES_OF_0051FE10: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0051FE10,
    rust_path: "crates/tiara-core/src/delphi_runtime.rs",
    rust_symbol: "HOLDER_FORWARDED_SLOT",
    copies: &[
        0x00520A60, 0x00520B20, 0x00520BE0, 0x00520CA0, 0x00520D60, 0x00520E20, 0x00520EE0,
        0x00520FA0, 0x00521060, 0x00521120, 0x005211E0, 0x005212A0, 0x00521360, 0x00521420,
        0x005214E0, 0x005215A0, 0x00521660, 0x00521720, 0x005217E0, 0x005218A0, 0x00521960,
        0x00521A20, 0x00521AE0, 0x005722F0, 0x00573090, 0x00574590, 0x00574810, 0x00574A90,
        0x00574D10, 0x00574F90, 0x00575210, 0x00575540, 0x005757C0, 0x00575B80, 0x00575E00,
        0x005A8090, 0x005A8940, 0x005A8C70, 0x005B6430, 0x005C8AA0, 0x005C8F20, 0x005C91B0,
        0x005E3950, 0x005E4040, 0x006160B0, 0x00718340, 0x007ACF00, 0x007AED70, 0x007AF160,
        0x007AF3E0, 0x007AF660, 0x007AF900, 0x007AFC30, 0x007AFEB0, 0x007B01E0, 0x007B0460,
        0x007B0820, 0x007B0AA0, 0x007B0DD0, 0x007B1050, 0x007B12D0, 0x007B1640, 0x007B1990,
        0x007B1D60, 0x0082F040, 0x00856450, 0x008BBDB0, 0x008BC030, 0x009ABBE0, 0x009B4130,
        0x009B43B0, 0x009B46E0, 0x009B4960, 0x009B4BE0, 0x009B4E60, 0x009B57D0, 0x009B5A50,
        0x009B6750, 0x009B69D0, 0x009B6C50, 0x009B6ED0, 0x009B72A0, 0x009B7660, 0x009DEE60,
        0x00BB64E0, 0x00BE4E80, 0x00BE4F40, 0x00C4FB10, 0x00DA4160, 0x00DA4490, 0x00DB86E0,
        0x00DB8960, 0x00DB8C20, 0x00E15190, 0x00E298B0, 0x00E29C00, 0x00E29E80, 0x00EB39F0,
        0x00EB3DB0, 0x00EEF270, 0x00EEF630, 0x00F3AF10, 0x00F3B190, 0x00F3B410, 0x00F546B0,
        0x01146A10, 0x01146DE0, 0x0129C700, 0x0148B970, 0x0148BD30, 0x0158B690, 0x0158BAD0,
        0x0158BEA0, 0x0158C130, 0x016D17F0, 0x017217D0, 0x01721B00, 0x01721D90, 0x0175C980,
        0x0178A840, 0x017CB340, 0x01A94000, 0x01B294A0, 0x01B8E730, 0x01CA9F50, 0x01CAA4D0,
        0x01D6A7F0,
    ],
};

/// The 1 further copy of `RECORD_AT_00535710`.
///
/// Ported from `FUN_00535710` at `0x00535710`.
pub const COPIES_OF_00535710: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00535710,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00535710",
    copies: &[0x005395B0],
};

/// The 24 further copies of `RECORD_AT_005372F0`.
///
/// Ported from `FUN_005372f0` at `0x005372F0`.
pub const COPIES_OF_005372F0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x005372F0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_005372F0",
    copies: &[
        0x00538020, 0x00558840, 0x0055B720, 0x00566180, 0x0056B0D0, 0x0056DC30, 0x0056DCE0,
        0x0056DD90, 0x0056DE40, 0x0056DEF0, 0x0056DFB0, 0x0056E070, 0x0056E130, 0x0056E1E0,
        0x0056E290, 0x0056E340, 0x0056E3F0, 0x0056E4B0, 0x005723A0, 0x0148B750, 0x0148B800,
        0x0148B8B0, 0x01ABED70, 0x01ABEE20,
    ],
};

/// The 2 further copies of `RECORD_AT_005376A0`.
///
/// Ported from `FUN_005376a0` at `0x005376A0`.
pub const COPIES_OF_005376A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x005376A0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_005376A0",
    copies: &[0x005391B0, 0x00F32F00],
};

/// The 2 further copies of `RECORD_AT_00537D10`.
///
/// Ported from `FUN_00537d10` at `0x00537D10`.
pub const COPIES_OF_00537D10: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00537D10,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00537D10",
    copies: &[0x008630D0, 0x009D3330],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_005471e0` at `0x005471E0`.
pub const COPIES_OF_005471E0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x005471E0,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x009E2E70],
};

/// The 1 further copy of `RECORD_AT_00553B00`.
///
/// Ported from `FUN_00553b00` at `0x00553B00`.
pub const COPIES_OF_00553B00: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00553B00,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00553B00",
    copies: &[0x00553B80],
};

/// The 1 further copy of `RECORD_AT_00557B30`.
///
/// Ported from `FUN_00557b30` at `0x00557B30`.
pub const COPIES_OF_00557B30: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00557B30,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00557B30",
    copies: &[0x0055C3E0],
};

/// The 2 further copies of `RECORD_AT_00557CB0`.
///
/// Ported from `FUN_00557cb0` at `0x00557CB0`.
pub const COPIES_OF_00557CB0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00557CB0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00557CB0",
    copies: &[0x00557D50, 0x00557DF0],
};

/// The 1 further copy of `RECORD_AT_005581A0`.
///
/// Ported from `FUN_005581a0` at `0x005581A0`.
pub const COPIES_OF_005581A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x005581A0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_005581A0",
    copies: &[0x0055CA60],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_0055ab90` at `0x0055AB90`.
pub const COPIES_OF_0055AB90: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0055AB90,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00A025E0],
};

/// The 2 further copies of `RECORD_AT_00560B20`.
///
/// Ported from `FUN_00560b20` at `0x00560B20`.
pub const COPIES_OF_00560B20: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00560B20,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00560B20",
    copies: &[0x00561910, 0x00561AA0],
};

/// The 3 further copies of `RECORD_AT_00560CC0`.
///
/// Ported from `FUN_00560cc0` at `0x00560CC0`.
pub const COPIES_OF_00560CC0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00560CC0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00560CC0",
    copies: &[0x0056F440, 0x0056F4F0, 0x0056F8C0],
};

/// The 2 further copies of `RECORD_AT_00562BE0`.
///
/// Ported from `FUN_00562be0` at `0x00562BE0`.
pub const COPIES_OF_00562BE0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00562BE0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00562BE0",
    copies: &[0x00563970, 0x00563B00],
};

/// The 3 further copies of `RECORD_AT_00562D80`.
///
/// Ported from `FUN_00562d80` at `0x00562D80`.
pub const COPIES_OF_00562D80: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00562D80,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00562D80",
    copies: &[0x00571AF0, 0x00571BA0, 0x00571F70],
};

/// The 2 further copies of `RECORD_AT_0056F360`.
///
/// Ported from `FUN_0056f360` at `0x0056F360`.
pub const COPIES_OF_0056F360: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0056F360,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0056F360",
    copies: &[0x00573CE0, 0x00573D70],
};

/// The 2 further copies of `RECORD_AT_00571A10`.
///
/// Ported from `FUN_00571a10` at `0x00571A10`.
pub const COPIES_OF_00571A10: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00571A10,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00571A10",
    copies: &[0x00574260, 0x005742F0],
};

/// The 1 further copy of `RECORD_AT_005943C0`.
///
/// Ported from `FUN_005943c0` at `0x005943C0`.
pub const COPIES_OF_005943C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x005943C0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_005943C0",
    copies: &[0x018479B0],
};

/// The 1 further copy of `RECORD_AT_005A1650`.
///
/// Ported from `FUN_005a1650` at `0x005A1650`.
pub const COPIES_OF_005A1650: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x005A1650,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_005A1650",
    copies: &[0x005A1730],
};

/// The 1 further copy of `RECORD_AT_005A1940`.
///
/// Ported from `FUN_005a1940` at `0x005A1940`.
pub const COPIES_OF_005A1940: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x005A1940,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_005A1940",
    copies: &[0x005A1960],
};

/// The 18 further copies of `RELEASE_005A1F70`.
///
/// Ported from `FUN_005a1f70` at `0x005A1F70`.
pub const COPIES_OF_005A1F70: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x005A1F70,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_005A1F70",
    copies: &[
        0x005DC330, 0x0077EA00, 0x00786E20, 0x007937C0, 0x00793910, 0x007944F0, 0x00794670,
        0x007951A0, 0x00795C00, 0x00797BC0, 0x009A8070, 0x00BE21F0, 0x01583450, 0x0167DC80,
        0x019B0240, 0x01B14FC0, 0x01B8CDA0, 0x01BF9300,
    ],
};

/// The 3 further copies of `RECORD_AT_005A1FC0`.
///
/// Ported from `FUN_005a1fc0` at `0x005A1FC0`.
pub const COPIES_OF_005A1FC0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x005A1FC0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_005A1FC0",
    copies: &[0x005A2F80, 0x005A3030, 0x005A3400],
};

/// The 2 further copies of `RECORD_AT_005A2EA0`.
///
/// Ported from `FUN_005a2ea0` at `0x005A2EA0`.
pub const COPIES_OF_005A2EA0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x005A2EA0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_005A2EA0",
    copies: &[0x005A5960, 0x005A5A00],
};

/// The 14 further copies of `RECORD_AT_005B2100`.
///
/// Ported from `FUN_005b2100` at `0x005B2100`.
pub const COPIES_OF_005B2100: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x005B2100,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_005B2100",
    copies: &[
        0x006248F0, 0x00DE89F0, 0x01086270, 0x012D24E0, 0x012F58C0, 0x015FE810, 0x015FEC50,
        0x0179D0A0, 0x019CE360, 0x01A584D0, 0x01B81EC0, 0x01CF1620, 0x01CF1720, 0x01D40610,
    ],
};

/// The 17 further copies of `RECORD_AT_005B2240`.
///
/// Ported from `FUN_005b2240` at `0x005B2240`.
pub const COPIES_OF_005B2240: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x005B2240,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_005B2240",
    copies: &[
        0x00AD6B50, 0x00B012C0, 0x00C40360, 0x00D572B0, 0x00E0BE80, 0x00F73FF0, 0x00FC9360,
        0x010CAA60, 0x010CAC60, 0x010CAE80, 0x012C4C20, 0x012F3B40, 0x014A7150, 0x0156A290,
        0x015DC030, 0x018359D0, 0x01C94A00,
    ],
};

/// The 1 further copy of `RELEASE_005B40D0`.
///
/// Ported from `FUN_005b40d0` at `0x005B40D0`.
pub const COPIES_OF_005B40D0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x005B40D0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_005B40D0",
    copies: &[0x00783410],
};

/// The 2 further copies of `RELEASE_005B4110`.
///
/// Ported from `FUN_005b4110` at `0x005B4110`.
pub const COPIES_OF_005B4110: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x005B4110,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_005B4110",
    copies: &[0x00CB8750, 0x00CCBC00],
};

/// The 10 further copies of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_005b4b00` at `0x005B4B00`.
pub const COPIES_OF_005B4B00: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x005B4B00,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[
        0x005B4B30, 0x005B4B60, 0x005B4B90, 0x005B4BC0, 0x005B4BF0, 0x005B4C20, 0x005B4C50,
        0x005B4C80, 0x005B4CB0, 0x005B4CE0,
    ],
};

/// The 1 further copy of `RECORD_AT_005B8D00`.
///
/// Ported from `FUN_005b8d00` at `0x005B8D00`.
pub const COPIES_OF_005B8D00: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x005B8D00,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_005B8D00",
    copies: &[0x01A34360],
};

/// The 7 further copies of `RECORD_AT_005BF930`.
///
/// Ported from `FUN_005bf930` at `0x005BF930`.
pub const COPIES_OF_005BF930: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x005BF930,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_005BF930",
    copies: &[
        0x005BF9F0, 0x005C25D0, 0x005C27F0, 0x005C3210, 0x005C7A90, 0x005C87A0, 0x005C8840,
    ],
};

/// The 2 further copies of `RECORD_AT_005C1080`.
///
/// Ported from `FUN_005c1080` at `0x005C1080`.
pub const COPIES_OF_005C1080: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x005C1080,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_005C1080",
    copies: &[0x00CE2D40, 0x013CF720],
};

/// The 8 further copies of `RELEASE_005C1EB0`.
///
/// Ported from `FUN_005c1eb0` at `0x005C1EB0`.
pub const COPIES_OF_005C1EB0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x005C1EB0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_005C1EB0",
    copies: &[
        0x005C2EB0, 0x005C3070, 0x005C3E30, 0x005C3FC0, 0x005EEB30, 0x00745630, 0x00781050,
        0x00BE1B00,
    ],
};

/// The 2 further copies of `RECORD_AT_005C1EE0`.
///
/// Ported from `FUN_005c1ee0` at `0x005C1EE0`.
pub const COPIES_OF_005C1EE0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x005C1EE0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_005C1EE0",
    copies: &[0x005C2EE0, 0x005C30A0],
};

/// The 5 further copies of `RECORD_AT_005C2090`.
///
/// Ported from `FUN_005c2090` at `0x005C2090`.
pub const COPIES_OF_005C2090: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x005C2090,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_005C2090",
    copies: &[0x005C5430, 0x005C54F0, 0x005C58E0, 0x005C8200, 0x005C82A0],
};

/// The 1 further copy of `RECORD_AT_005C3320`.
///
/// Ported from `FUN_005c3320` at `0x005C3320`.
pub const COPIES_OF_005C3320: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x005C3320,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_005C3320",
    copies: &[0x005C94F0],
};

/// The 3 further copies of `RECORD_AT_005C4010`.
///
/// Ported from `FUN_005c4010` at `0x005C4010`.
pub const COPIES_OF_005C4010: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x005C4010,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_005C4010",
    copies: &[0x005C7B70, 0x005C7C20, 0x005C7FF0],
};

/// The 1 further copy of `RECORD_AT_005D0B40`.
///
/// Ported from `FUN_005d0b40` at `0x005D0B40`.
pub const COPIES_OF_005D0B40: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x005D0B40,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_005D0B40",
    copies: &[0x015C0AC0],
};

/// The 1 further copy of `RECORD_AT_005DB610`.
///
/// Ported from `FUN_005db610` at `0x005DB610`.
pub const COPIES_OF_005DB610: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x005DB610,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_005DB610",
    copies: &[0x005DBC10],
};

/// The 4 further copies of `RECORD_AT_005DBCD0`.
///
/// Ported from `FUN_005dbcd0` at `0x005DBCD0`.
pub const COPIES_OF_005DBCD0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x005DBCD0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_005DBCD0",
    copies: &[0x005DEB00, 0x005DFAB0, 0x005DFB60, 0x005DFF30],
};

/// The 3 further copies of `RECORD_AT_005DBD50`.
///
/// Ported from `FUN_005dbd50` at `0x005DBD50`.
pub const COPIES_OF_005DBD50: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x005DBD50,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_005DBD50",
    copies: &[0x005DF9D0, 0x005E2160, 0x005E21F0],
};

/// The 2 further copies of `RECORD_AT_005E01A0`.
///
/// Ported from `FUN_005e01a0` at `0x005E01A0`.
pub const COPIES_OF_005E01A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x005E01A0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_005E01A0",
    copies: &[0x005E0F20, 0x005E10B0],
};

/// The 3 further copies of `RECORD_AT_005E0340`.
///
/// Ported from `FUN_005e0340` at `0x005E0340`.
pub const COPIES_OF_005E0340: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x005E0340,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_005E0340",
    copies: &[0x005E3310, 0x005E33C0, 0x005E3790],
};

/// The 2 further copies of `RECORD_AT_005E3230`.
///
/// Ported from `FUN_005e3230` at `0x005E3230`.
pub const COPIES_OF_005E3230: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x005E3230,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_005E3230",
    copies: &[0x005E3D60, 0x005E3DF0],
};

/// The 10 further copies of `RECORD_AT_005EB1F0`.
///
/// Ported from `FUN_005eb1f0` at `0x005EB1F0`.
pub const COPIES_OF_005EB1F0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x005EB1F0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_005EB1F0",
    copies: &[
        0x005EB520, 0x00AD73A0, 0x00AF4BA0, 0x00F01470, 0x0179BEA0, 0x01992BC0, 0x01994670,
        0x019A8280, 0x01A526B0, 0x01D13530,
    ],
};

/// The 2 further copies of `RECORD_AT_005F1120`.
///
/// Ported from `FUN_005f1120` at `0x005F1120`.
pub const COPIES_OF_005F1120: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x005F1120,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_005F1120",
    copies: &[0x00A015C0, 0x00AF9400],
};

/// The 2 further copies of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_005fcc70` at `0x005FCC70`.
pub const COPIES_OF_005FCC70: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x005FCC70,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x005FD4D0, 0x005FDAA0],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_005fced0` at `0x005FCED0`.
pub const COPIES_OF_005FCED0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x005FCED0,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x005FD660],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_005fcff0` at `0x005FCFF0`.
pub const COPIES_OF_005FCFF0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x005FCFF0,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x005FD6C0],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_005fd640` at `0x005FD640`.
pub const COPIES_OF_005FD640: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x005FD640,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x00BC0BF0],
};

/// The 16 further copies of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00601d70` at `0x00601D70`.
pub const COPIES_OF_00601D70: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00601D70,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[
        0x006E7DB0, 0x00778B00, 0x0089BE20, 0x008B10F0, 0x009EA670, 0x00A082E0, 0x00A3F5C0,
        0x00C1BDF0, 0x00C668B0, 0x00C7D520, 0x00CE2170, 0x00D5A160, 0x015E3110, 0x0197BD10,
        0x01B4A470, 0x01D33100,
    ],
};

/// The 26 further copies of `TEXT_PAIR_0X38_0X68`.
///
/// Ported from `FUN_00602dc0` at `0x00602DC0`.
pub const COPIES_OF_00602DC0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00602DC0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "TEXT_PAIR_0X38_0X68",
    copies: &[
        0x0068B490, 0x00C6FF90, 0x00DE7630, 0x00F51D20, 0x00F6F600, 0x0109CF50, 0x010D1730,
        0x012E2660, 0x014C4330, 0x01545240, 0x0155E430, 0x015F0410, 0x015F0560, 0x015F06A0,
        0x015FE8F0, 0x0160E490, 0x01779030, 0x017CCAB0, 0x01997130, 0x019AC740, 0x019AE9C0,
        0x01AE93D0, 0x01B24A90, 0x01BBDCA0, 0x01CC9F00, 0x01CE7EB0,
    ],
};

/// The 3 further copies of `RELEASE_006032B0`.
///
/// Ported from `FUN_006032b0` at `0x006032B0`.
pub const COPIES_OF_006032B0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x006032B0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_006032B0",
    copies: &[0x010B8A80, 0x01464C80, 0x0146B6D0],
};

/// The 4 further copies of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00603780` at `0x00603780`.
pub const COPIES_OF_00603780: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00603780,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00E09290, 0x014F9620, 0x015E8800, 0x018B7630],
};

/// The 2 further copies of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00603a00` at `0x00603A00`.
pub const COPIES_OF_00603A00: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00603A00,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00C24180, 0x00F03E50],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00605d80` at `0x00605D80`.
pub const COPIES_OF_00605D80: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00605D80,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x0060CCB0],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_0060c580` at `0x0060C580`.
pub const COPIES_OF_0060C580: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0060C580,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00A09DC0],
};

/// The 4 further copies of `RELEASE_0060EBB0`.
///
/// Ported from `FUN_0060ebb0` at `0x0060EBB0`.
pub const COPIES_OF_0060EBB0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0060EBB0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_0060EBB0",
    copies: &[0x00636060, 0x008111B0, 0x00811740, 0x013B7810],
};

/// The 6 further copies of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00611660` at `0x00611660`.
pub const COPIES_OF_00611660: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00611660,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[
        0x00827500, 0x00B19590, 0x00BBBB00, 0x00BD39C0, 0x00C1A8D0, 0x00C71F80,
    ],
};

/// The 23 further copies of `RECORD_AT_00624400`.
///
/// Ported from `FUN_00624400` at `0x00624400`.
pub const COPIES_OF_00624400: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00624400,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00624400",
    copies: &[
        0x00B951F0, 0x00C853C0, 0x00F2E7D0, 0x013C22D0, 0x0146FE90, 0x01531D60, 0x01531F30,
        0x017F08E0, 0x01867DC0, 0x01867FC0, 0x01868860, 0x01868980, 0x01868A80, 0x01868B80,
        0x01868C80, 0x01868D80, 0x018691C0, 0x01869760, 0x01873530, 0x01B1F440, 0x01BAD420,
        0x01C934F0, 0x01CC2180,
    ],
};

/// The 1 further copy of `RECORD_AT_006480A0`.
///
/// Ported from `FUN_006480a0` at `0x006480A0`.
pub const COPIES_OF_006480A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x006480A0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_006480A0",
    copies: &[0x00A95630],
};

/// The 6 further copies of `RECORD_AT_006480D0`.
///
/// Ported from `FUN_006480d0` at `0x006480D0`.
pub const COPIES_OF_006480D0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x006480D0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_006480D0",
    copies: &[
        0x00896220, 0x0147D2E0, 0x01A26D20, 0x01A4FFE0, 0x01A54C50, 0x01A54E80,
    ],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_00649110` at `0x00649110`.
pub const COPIES_OF_00649110: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00649110,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x006A6060],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00649510` at `0x00649510`.
pub const COPIES_OF_00649510: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00649510,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x01BFED80],
};

/// The 6 further copies of `RECORD_AT_0064B620`.
///
/// Ported from `FUN_0064b620` at `0x0064B620`.
pub const COPIES_OF_0064B620: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0064B620,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0064B620",
    copies: &[
        0x00896870, 0x008EC520, 0x008EE540, 0x008EF0C0, 0x011582D0, 0x01BFBFE0,
    ],
};

/// The 4 further copies of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_00680480` at `0x00680480`.
pub const COPIES_OF_00680480: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00680480,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x0068BC80, 0x0068F420, 0x0069FA90, 0x00703440],
};

/// The 4 further copies of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_006805d0` at `0x006805D0`.
pub const COPIES_OF_006805D0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x006805D0,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x0068F4B0, 0x006F3280, 0x007035C0, 0x00848390],
};

/// The 1 further copy of `RECORD_AT_00680E10`.
///
/// Ported from `FUN_00680e10` at `0x00680E10`.
pub const COPIES_OF_00680E10: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00680E10,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00680E10",
    copies: &[0x00681D80],
};

/// The 6 further copies of `RECORD_AT_00682840`.
///
/// Ported from `FUN_00682840` at `0x00682840`.
pub const COPIES_OF_00682840: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00682840,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00682840",
    copies: &[
        0x00C86EA0, 0x0106CC30, 0x0106CDF0, 0x014377B0, 0x01783260, 0x0179DF60,
    ],
};

/// The 1 further copy of `RECORD_AT_00686E20`.
///
/// Ported from `FUN_00686e20` at `0x00686E20`.
pub const COPIES_OF_00686E20: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00686E20,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00686E20",
    copies: &[0x006F5A70],
};

/// The 2 further copies of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_00687ac0` at `0x00687AC0`.
pub const COPIES_OF_00687AC0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00687AC0,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x0069FAC0, 0x006E2080],
};

/// The 1 further copy of `RECORD_AT_00689630`.
///
/// Ported from `FUN_00689630` at `0x00689630`.
pub const COPIES_OF_00689630: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00689630,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00689630",
    copies: &[0x00689D00],
};

/// The 2 further copies of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_00689d60` at `0x00689D60`.
pub const COPIES_OF_00689D60: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00689D60,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x0068A310, 0x006D5190],
};

/// The 1 further copy of `RELEASE_0068D130`.
///
/// Ported from `FUN_0068d130` at `0x0068D130`.
pub const COPIES_OF_0068D130: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0068D130,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_0068D130",
    copies: &[0x0095B9C0],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_0068f460` at `0x0068F460`.
pub const COPIES_OF_0068F460: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0068F460,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x0069FAE0],
};

/// The 4 further copies of `RELEASE_006911D0`.
///
/// Ported from `FUN_006911d0` at `0x006911D0`.
pub const COPIES_OF_006911D0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x006911D0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_006911D0",
    copies: &[0x00691700, 0x00ADB4A0, 0x0154F440, 0x0179B5B0],
};

/// The 14 further copies of `RELEASE_00697070`.
///
/// Ported from `FUN_00697070` at `0x00697070`.
pub const COPIES_OF_00697070: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00697070,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_00697070",
    copies: &[
        0x009560A0, 0x00958C10, 0x0097EF10, 0x00994930, 0x00C35CD0, 0x00D8CAE0, 0x012BB0A0,
        0x012CB4B0, 0x01301B60, 0x013C36C0, 0x016C58C0, 0x016C5D70, 0x0179AB90, 0x01A2A540,
    ],
};

/// The 2 further copies of `RECORD_AT_006D5A80`.
///
/// Ported from `FUN_006d5a80` at `0x006D5A80`.
pub const COPIES_OF_006D5A80: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x006D5A80,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_006D5A80",
    copies: &[0x00EC44A0, 0x018214E0],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_006db020` at `0x006DB020`.
pub const COPIES_OF_006DB020: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x006DB020,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x018A9AA0],
};

/// The 1 further copy of `RECORD_AT_006DBEF0`.
///
/// Ported from `FUN_006dbef0` at `0x006DBEF0`.
pub const COPIES_OF_006DBEF0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x006DBEF0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_006DBEF0",
    copies: &[0x01B3B580],
};

/// The 3 further copies of `RECORD_AT_006E0B30`.
///
/// Ported from `FUN_006e0b30` at `0x006E0B30`.
pub const COPIES_OF_006E0B30: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x006E0B30,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_006E0B30",
    copies: &[0x008E8820, 0x008E8EB0, 0x014ECE20],
};

/// The 7 further copies of `RELEASE_006E58F0`.
///
/// Ported from `FUN_006e58f0` at `0x006E58F0`.
pub const COPIES_OF_006E58F0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x006E58F0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_006E58F0",
    copies: &[
        0x006E5D90, 0x00A45190, 0x015E0B60, 0x01729ED0, 0x017EF5D0, 0x01B0F240, 0x01C0B140,
    ],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_006e6a50` at `0x006E6A50`.
pub const COPIES_OF_006E6A50: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x006E6A50,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x00703640],
};

/// The 2 further copies of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_006e6cc0` at `0x006E6CC0`.
pub const COPIES_OF_006E6CC0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x006E6CC0,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00A3E500, 0x00C1B460],
};

/// The 1 further copy of `RECORD_AT_006E7EB0`.
///
/// Ported from `FUN_006e7eb0` at `0x006E7EB0`.
pub const COPIES_OF_006E7EB0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x006E7EB0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_006E7EB0",
    copies: &[0x006E7F30],
};

/// The 5 further copies of `RECORD_AT_006E8A70`.
///
/// Ported from `FUN_006e8a70` at `0x006E8A70`.
pub const COPIES_OF_006E8A70: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x006E8A70,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_006E8A70",
    copies: &[0x01704C10, 0x01774DD0, 0x01A626D0, 0x01BBAF70, 0x01CE8140],
};

/// The 1 further copy of `RELEASE_006E9980`.
///
/// Ported from `FUN_006e9980` at `0x006E9980`.
pub const COPIES_OF_006E9980: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x006E9980,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_006E9980",
    copies: &[0x006E9C00],
};

/// The 10 further copies of `RELEASE_00710EA0`.
///
/// Ported from `FUN_00710ea0` at `0x00710EA0`.
pub const COPIES_OF_00710EA0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00710EA0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_00710EA0",
    copies: &[
        0x00724CA0, 0x00748970, 0x00749640, 0x00AF8160, 0x00C2BFE0, 0x00D44420, 0x00D46BE0,
        0x01301780, 0x0163C7B0, 0x018BC230,
    ],
};

/// The 9 further copies of `RELEASE_00715710`.
///
/// Ported from `FUN_00715710` at `0x00715710`.
pub const COPIES_OF_00715710: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00715710,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_00715710",
    copies: &[
        0x008170B0, 0x00AF79A0, 0x00C26F00, 0x0107CA10, 0x012BB890, 0x014AE8C0, 0x015D7030,
        0x01A7ED80, 0x01C839D0,
    ],
};

/// The 3 further copies of `RELEASE_00715730`.
///
/// Ported from `FUN_00715730` at `0x00715730`.
pub const COPIES_OF_00715730: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00715730,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_00715730",
    copies: &[0x014AE8E0, 0x01870220, 0x01A7EDA0],
};

/// The 10 further copies of `RELEASE_00715D10`.
///
/// Ported from `FUN_00715d10` at `0x00715D10`.
pub const COPIES_OF_00715D10: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00715D10,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_00715D10",
    copies: &[
        0x00984C40, 0x00AF8DD0, 0x00D7D360, 0x00DE8040, 0x00DE8740, 0x01302B90, 0x01481270,
        0x014C3E30, 0x015815A0, 0x01C05040,
    ],
};

/// The 1 further copy of `RECORD_AT_00716570`.
///
/// Ported from `FUN_00716570` at `0x00716570`.
pub const COPIES_OF_00716570: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00716570,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00716570",
    copies: &[0x00716790],
};

/// The 1 further copy of `RECORD_AT_007234E0`.
///
/// Ported from `FUN_007234e0` at `0x007234E0`.
pub const COPIES_OF_007234E0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x007234E0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_007234E0",
    copies: &[0x00C605E0],
};

/// The 1 further copy of `RECORD_AT_00724CC0`.
///
/// Ported from `FUN_00724cc0` at `0x00724CC0`.
pub const COPIES_OF_00724CC0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00724CC0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00724CC0",
    copies: &[0x00AA83E0],
};

/// The 3 further copies of `RECORD_AT_00725070`.
///
/// Ported from `FUN_00725070` at `0x00725070`.
pub const COPIES_OF_00725070: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00725070,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00725070",
    copies: &[0x00A689B0, 0x010A6360, 0x01C93A30],
};

/// The 1 further copy of `RELEASE_00728410`.
///
/// Ported from `FUN_00728410` at `0x00728410`.
pub const COPIES_OF_00728410: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00728410,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_00728410",
    copies: &[0x007822C0],
};

/// The 1 further copy of `RECORD_AT_00728A10`.
///
/// Ported from `FUN_00728a10` at `0x00728A10`.
pub const COPIES_OF_00728A10: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00728A10,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00728A10",
    copies: &[0x008328F0],
};

/// The 1 further copy of `RECORD_AT_0072DCE0`.
///
/// Ported from `FUN_0072dce0` at `0x0072DCE0`.
pub const COPIES_OF_0072DCE0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0072DCE0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0072DCE0",
    copies: &[0x00C7CC10],
};

/// The 59 further copies of `SPACED_TEXT_PAIR_RECORD`.
///
/// Ported from `FUN_00747300` at `0x00747300`.
pub const COPIES_OF_00747300: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00747300,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "SPACED_TEXT_PAIR_RECORD",
    copies: &[
        0x008835C0, 0x008838A0, 0x00883A20, 0x00883D00, 0x00883E80, 0x00884000, 0x00884180,
        0x00884310, 0x00884E60, 0x00884FF0, 0x00885300, 0x00885490, 0x00885620, 0x00885910,
        0x00885A90, 0x00885EE0, 0x00886060, 0x00886F50, 0x008872A0, 0x00887930, 0x00887AB0,
        0x00888270, 0x00888400, 0x00888590, 0x00888720, 0x008888B0, 0x00888A40, 0x00888BD0,
        0x00888D60, 0x00888F00, 0x008890A0, 0x00889230, 0x008893B0, 0x008898D0, 0x00889A50,
        0x00889D80, 0x0088A420, 0x0088A930, 0x0088AAD0, 0x0088AC70, 0x0088AE00, 0x0088B960,
        0x0088BB00, 0x0088BCA0, 0x0088D170, 0x0088D300, 0x0088D490, 0x0088D630, 0x0088D7E0,
        0x0088D990, 0x0088DB40, 0x0088DCD0, 0x0088DE60, 0x0088DFF0, 0x00CAC550, 0x00EA71D0,
        0x015FCFA0, 0x016159B0, 0x0181AF30,
    ],
};

/// The 10 further copies of `RECORD_AT_007489C0`.
///
/// Ported from `FUN_007489c0` at `0x007489C0`.
pub const COPIES_OF_007489C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x007489C0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_007489C0",
    copies: &[
        0x00749690, 0x007FBDD0, 0x007FC470, 0x0089D2F0, 0x00BACF20, 0x00C537C0, 0x00DD0690,
        0x0132C050, 0x0147DAE0, 0x019DCDC0,
    ],
};

/// The 6 further copies of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_00749c90` at `0x00749C90`.
pub const COPIES_OF_00749C90: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00749C90,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[
        0x0084C680, 0x00A06230, 0x00BD3F50, 0x012E58B0, 0x0185F350, 0x01CC1840,
    ],
};

/// The 1 further copy of `RECORD_AT_00780930`.
///
/// Ported from `FUN_00780930` at `0x00780930`.
pub const COPIES_OF_00780930: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00780930,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00780930",
    copies: &[0x00781C20],
};

/// The 1 further copy of `RECORD_AT_00781030`.
///
/// Ported from `FUN_00781030` at `0x00781030`.
pub const COPIES_OF_00781030: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00781030,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00781030",
    copies: &[0x00783790],
};

/// The 1 further copy of `RECORD_AT_007813F0`.
///
/// Ported from `FUN_007813f0` at `0x007813F0`.
pub const COPIES_OF_007813F0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x007813F0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_007813F0",
    copies: &[0x007827D0],
};

/// The 1 further copy of `RELEASE_00781790`.
///
/// Ported from `FUN_00781790` at `0x00781790`.
pub const COPIES_OF_00781790: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00781790,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_00781790",
    copies: &[0x00BE1940],
};

/// The 49 further copies of `FREED_AT_0X98`.
///
/// Ported from `FUN_00781e10` at `0x00781E10`.
pub const COPIES_OF_00781E10: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00781E10,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "FREED_AT_0X98",
    copies: &[
        0x007FEB10, 0x007FEB70, 0x008A57E0, 0x008B0000, 0x00949890, 0x00981140, 0x00981300,
        0x009814B0, 0x00981660, 0x00981870, 0x00981A20, 0x00981BD0, 0x00981D80, 0x00981F00,
        0x009820E0, 0x009822B0, 0x009824C0, 0x00982670, 0x00982820, 0x009829F0, 0x009837A0,
        0x00983B00, 0x009957D0, 0x009D44F0, 0x009D4800, 0x00AE1890, 0x00AE63B0, 0x00AFA000,
        0x00C41810, 0x00D01780, 0x00D74FD0, 0x00D8CB00, 0x00EE5200, 0x00EE5CB0, 0x0108D510,
        0x01415860, 0x0157F750, 0x0160A590, 0x0160ACB0, 0x0176ACC0, 0x0179ABB0, 0x0180AD10,
        0x0184AAC0, 0x0184ADD0, 0x01A58D00, 0x01BC4070, 0x01C81880, 0x01D42D20, 0x01D432B0,
    ],
};

/// The 3 further copies of `RECORD_AT_00782C00`.
///
/// Ported from `FUN_00782c00` at `0x00782C00`.
pub const COPIES_OF_00782C00: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00782C00,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00782C00",
    copies: &[0x00795AA0, 0x00796900, 0x00796A90],
};

/// The 1 further copy of `RECORD_AT_00783450`.
///
/// Ported from `FUN_00783450` at `0x00783450`.
pub const COPIES_OF_00783450: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00783450,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00783450",
    copies: &[0x007AA1B0],
};

/// The 9 further copies of `RECORD_AT_00787200`.
///
/// Ported from `FUN_00787200` at `0x00787200`.
pub const COPIES_OF_00787200: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00787200,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00787200",
    copies: &[
        0x0084E0A0, 0x00F8DEC0, 0x013BBFE0, 0x0154D4D0, 0x0164AC70, 0x019DA0D0, 0x019DA1A0,
        0x01B244C0, 0x01C94360,
    ],
};

/// The 2 further copies of `RECORD_AT_00787390`.
///
/// Ported from `FUN_00787390` at `0x00787390`.
pub const COPIES_OF_00787390: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00787390,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00787390",
    copies: &[0x01330E00, 0x01330F40],
};

/// The 2 further copies of `RECORD_AT_0078F1C0`.
///
/// Ported from `FUN_0078f1c0` at `0x0078F1C0`.
pub const COPIES_OF_0078F1C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0078F1C0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0078F1C0",
    copies: &[0x0078FF50, 0x007900E0],
};

/// The 3 further copies of `RECORD_AT_0078F360`.
///
/// Ported from `FUN_0078f360` at `0x0078F360`.
pub const COPIES_OF_0078F360: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0078F360,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0078F360",
    copies: &[0x007A24D0, 0x007A2580, 0x007A2950],
};

/// The 5 further copies of `RECORD_AT_00795C50`.
///
/// Ported from `FUN_00795c50` at `0x00795C50`.
pub const COPIES_OF_00795C50: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00795C50,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00795C50",
    copies: &[0x007AA6F0, 0x007AA7A0, 0x007AAB70, 0x007AE810, 0x007AE8B0],
};

/// The 3 further copies of `RECORD_AT_00797C10`.
///
/// Ported from `FUN_00797c10` at `0x00797C10`.
pub const COPIES_OF_00797C10: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00797C10,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00797C10",
    copies: &[0x00798BD0, 0x00798C80, 0x00799050],
};

/// The 2 further copies of `RECORD_AT_00798AF0`.
///
/// Ported from `FUN_00798af0` at `0x00798AF0`.
pub const COPIES_OF_00798AF0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00798AF0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00798AF0",
    copies: &[0x007AC040, 0x007AC0E0],
};

/// The 2 further copies of `RECORD_AT_007A23F0`.
///
/// Ported from `FUN_007a23f0` at `0x007A23F0`.
pub const COPIES_OF_007A23F0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x007A23F0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_007A23F0",
    copies: &[0x007AD690, 0x007AD720],
};

/// The 20 further copies of `RELEASE_007D8360`.
///
/// Ported from `FUN_007d8360` at `0x007D8360`.
pub const COPIES_OF_007D8360: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x007D8360,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_007D8360",
    copies: &[
        0x009590A0, 0x0096C860, 0x009D4520, 0x009D4830, 0x00AE3BE0, 0x00CF1F40, 0x00CF1F60,
        0x00EBA3F0, 0x01155E90, 0x01156670, 0x012D1C20, 0x0130D8B0, 0x01585810, 0x0176D850,
        0x01770AB0, 0x01772960, 0x01777940, 0x01869B90, 0x01B801B0, 0x01B9BB90,
    ],
};

/// The 6 further copies of `RECORD_AT_007DCB30`.
///
/// Ported from `FUN_007dcb30` at `0x007DCB30`.
pub const COPIES_OF_007DCB30: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x007DCB30,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_007DCB30",
    copies: &[
        0x00B8F7C0, 0x00C536D0, 0x00F61010, 0x00F78910, 0x01430C40, 0x015FAF20,
    ],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_007dd140` at `0x007DD140`.
pub const COPIES_OF_007DD140: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x007DD140,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x01BFC430],
};

/// The 1 further copy of `RELEASE_007E4CE0`.
///
/// Ported from `FUN_007e4ce0` at `0x007E4CE0`.
pub const COPIES_OF_007E4CE0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x007E4CE0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_007E4CE0",
    copies: &[0x01BFA200],
};

/// The 1 further copy of `RECORD_AT_007E4D30`.
///
/// Ported from `FUN_007e4d30` at `0x007E4D30`.
pub const COPIES_OF_007E4D30: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x007E4D30,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_007E4D30",
    copies: &[0x01BFA250],
};

/// The 17 further copies of `RECORD_AT_007E4F20`.
///
/// Ported from `FUN_007e4f20` at `0x007E4F20`.
pub const COPIES_OF_007E4F20: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x007E4F20,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_007E4F20",
    copies: &[
        0x009E0410, 0x00B016C0, 0x00B0AC70, 0x00BCA730, 0x00C702F0, 0x00F81AA0, 0x00F81B90,
        0x010B1A30, 0x012423E0, 0x014CE8B0, 0x015FBDB0, 0x01647BD0, 0x01773980, 0x018375A0,
        0x01A55BC0, 0x01C2BC90, 0x01C3BA90,
    ],
};

/// The 1 further copy of `RECORD_AT_007E6010`.
///
/// Ported from `FUN_007e6010` at `0x007E6010`.
pub const COPIES_OF_007E6010: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x007E6010,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_007E6010",
    copies: &[0x00A66A30],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_008080c0` at `0x008080C0`.
pub const COPIES_OF_008080C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x008080C0,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x00A7B2D0],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_00808870` at `0x00808870`.
pub const COPIES_OF_00808870: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00808870,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x00D74940],
};

/// The 2 further copies of `RELEASE_0081CB00`.
///
/// Ported from `FUN_0081cb00` at `0x0081CB00`.
pub const COPIES_OF_0081CB00: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0081CB00,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_0081CB00",
    copies: &[0x00D46C00, 0x013017A0],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_008273c0` at `0x008273C0`.
pub const COPIES_OF_008273C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x008273C0,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00C71E40],
};

/// The 3 further copies of `RELEASE_008283B0`.
///
/// Ported from `FUN_008283b0` at `0x008283B0`.
pub const COPIES_OF_008283B0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x008283B0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_008283B0",
    copies: &[0x00C72E10, 0x014739B0, 0x019DB050],
};

/// The 24 further copies of `RELEASE_008283E0`.
///
/// Ported from `FUN_008283e0` at `0x008283E0`.
pub const COPIES_OF_008283E0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x008283E0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_008283E0",
    copies: &[
        0x008FE5D0, 0x00948190, 0x00956080, 0x00958BF0, 0x009593D0, 0x0097EEF0, 0x0098E1C0,
        0x00994910, 0x00A45EF0, 0x00AE25A0, 0x00AE3F30, 0x00BC0270, 0x00C72E40, 0x00D38030,
        0x00D89AC0, 0x00D8CAC0, 0x012CB490, 0x01301B40, 0x016C57F0, 0x016C5810, 0x016C5CA0,
        0x016C5CC0, 0x01A27600, 0x01BC4020,
    ],
};

/// The 22 further copies of `RECORD_AT_0082BDC0`.
///
/// Ported from `FUN_0082bdc0` at `0x0082BDC0`.
pub const COPIES_OF_0082BDC0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0082BDC0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0082BDC0",
    copies: &[
        0x0082BE70, 0x009EBD10, 0x00B07F20, 0x00C68860, 0x00C69C00, 0x00ED37D0, 0x00ED4460,
        0x00F44400, 0x00F9CA10, 0x01053810, 0x01234060, 0x012EDE00, 0x013CBD20, 0x0142A780,
        0x018B44F0, 0x01B90C10, 0x01B92590, 0x01B9AA00, 0x01BEA0D0, 0x01C384D0, 0x01C3F7C0,
        0x01C720B0,
    ],
};

/// The 1 further copy of `RECORD_AT_008320B0`.
///
/// Ported from `FUN_008320b0` at `0x008320B0`.
pub const COPIES_OF_008320B0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x008320B0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_008320B0",
    copies: &[0x00D7DDA0],
};

/// The 4 further copies of `RECORD_AT_00832920`.
///
/// Ported from `FUN_00832920` at `0x00832920`.
pub const COPIES_OF_00832920: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00832920,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00832920",
    copies: &[0x010B9600, 0x0149EE10, 0x017B9970, 0x017FF3F0],
};

/// The 2 further copies of `RECORD_AT_00832EC0`.
///
/// Ported from `FUN_00832ec0` at `0x00832EC0`.
pub const COPIES_OF_00832EC0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00832EC0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00832EC0",
    copies: &[0x00AAC460, 0x0133ACF0],
};

/// The 1 further copy of `RECORD_AT_00835FE0`.
///
/// Ported from `FUN_00835fe0` at `0x00835FE0`.
pub const COPIES_OF_00835FE0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00835FE0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00835FE0",
    copies: &[0x01352A50],
};

/// The 7 further copies of `RECORD_AT_00837420`.
///
/// Ported from `FUN_00837420` at `0x00837420`.
pub const COPIES_OF_00837420: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00837420,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00837420",
    copies: &[
        0x00BFC9C0, 0x00CBBED0, 0x012F6890, 0x014151B0, 0x01439850, 0x019ACD70, 0x019AD230,
    ],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_0083dce0` at `0x0083DCE0`.
pub const COPIES_OF_0083DCE0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0083DCE0,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x00A77CE0],
};

/// The 2 further copies of `RECORD_AT_00852D90`.
///
/// Ported from `FUN_00852d90` at `0x00852D90`.
pub const COPIES_OF_00852D90: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00852D90,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00852D90",
    copies: &[0x00853C10, 0x00853DA0],
};

/// The 3 further copies of `RECORD_AT_00852F30`.
///
/// Ported from `FUN_00852f30` at `0x00852F30`.
pub const COPIES_OF_00852F30: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00852F30,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00852F30",
    copies: &[0x00855AE0, 0x00855B90, 0x00855F60],
};

/// The 2 further copies of `RECORD_AT_00855A00`.
///
/// Ported from `FUN_00855a00` at `0x00855A00`.
pub const COPIES_OF_00855A00: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00855A00,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00855A00",
    copies: &[0x00856170, 0x00856200],
};

/// The 4 further copies of `RECORD_AT_0085AC90`.
///
/// Ported from `FUN_0085ac90` at `0x0085AC90`.
pub const COPIES_OF_0085AC90: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0085AC90,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0085AC90",
    copies: &[0x00AF5210, 0x013C0D40, 0x0176CD50, 0x01B8BB10],
};

/// The 3 further copies of `RECORD_AT_0085AF10`.
///
/// Ported from `FUN_0085af10` at `0x0085AF10`.
pub const COPIES_OF_0085AF10: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0085AF10,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0085AF10",
    copies: &[0x014C16F0, 0x0197A7C0, 0x01BBE180],
};

/// The 2 further copies of `RELEASE_0085D290`.
///
/// Ported from `FUN_0085d290` at `0x0085D290`.
pub const COPIES_OF_0085D290: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0085D290,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_0085D290",
    copies: &[0x00EE6030, 0x00EE6BD0],
};

/// The 1 further copy of `RELEASE_0085D2B0`.
///
/// Ported from `FUN_0085d2b0` at `0x0085D2B0`.
pub const COPIES_OF_0085D2B0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0085D2B0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_0085D2B0",
    copies: &[0x013FE3F0],
};

/// The 2 further copies of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_008631f0` at `0x008631F0`.
pub const COPIES_OF_008631F0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x008631F0,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00864FB0, 0x008651E0],
};

/// The 2 further copies of `RECORD_AT_008733E0`.
///
/// Ported from `FUN_008733e0` at `0x008733E0`.
pub const COPIES_OF_008733E0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x008733E0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_008733E0",
    copies: &[0x008B1910, 0x00CEBC50],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00873f60` at `0x00873F60`.
pub const COPIES_OF_00873F60: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00873F60,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00874110],
};

/// The 6 further copies of `RECORD_AT_008744F0`.
///
/// Ported from `FUN_008744f0` at `0x008744F0`.
pub const COPIES_OF_008744F0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x008744F0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_008744F0",
    copies: &[
        0x008745C0, 0x00874690, 0x00874760, 0x00874830, 0x00874900, 0x008749D0,
    ],
};

/// The 5 further copies of `RECORD_AT_00876460`.
///
/// Ported from `FUN_00876460` at `0x00876460`.
pub const COPIES_OF_00876460: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00876460,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00876460",
    copies: &[0x00BB3EA0, 0x00F06D90, 0x0147D730, 0x01A844D0, 0x01B252B0],
};

/// The 1 further copy of `RECORD_AT_00878850`.
///
/// Ported from `FUN_00878850` at `0x00878850`.
pub const COPIES_OF_00878850: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00878850,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00878850",
    copies: &[0x00C8B0D0],
};

/// The 7 further copies of `RECORD_AT_00878B30`.
///
/// Ported from `FUN_00878b30` at `0x00878B30`.
pub const COPIES_OF_00878B30: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00878B30,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00878B30",
    copies: &[
        0x00C8C2E0, 0x00CAC7C0, 0x00CAD860, 0x00CAD910, 0x00CB0DB0, 0x00CDC3C0, 0x00CE53F0,
    ],
};

/// The 16 further copies of `RECORD_AT_00878C10`.
///
/// Ported from `FUN_00878c10` at `0x00878C10`.
pub const COPIES_OF_00878C10: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00878C10,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00878C10",
    copies: &[
        0x00878C30, 0x008B1450, 0x008B1510, 0x00CAC9B0, 0x00CACB40, 0x00CACBE0, 0x00CACC90,
        0x00CACD40, 0x00CACFC0, 0x00CAD070, 0x00CAD380, 0x00CAD440, 0x00CAD6F0, 0x00CAD7A0,
        0x00CAD9C0, 0x00CECBD0,
    ],
};

/// The 20 further copies of `RECORD_AT_00885180`.
///
/// Ported from `FUN_00885180` at `0x00885180`.
pub const COPIES_OF_00885180: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00885180,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00885180",
    copies: &[
        0x00886DA0, 0x008870F0, 0x00887450, 0x00887C40, 0x0088AFB0, 0x0088B150, 0x0088B2F0,
        0x0088B490, 0x0088B630, 0x0088B7D0, 0x0088BE40, 0x0088BFD0, 0x0088C160, 0x0088CC80,
        0x0088CE30, 0x0088CFE0, 0x00DB7BE0, 0x00DFDDC0, 0x00E77DB0, 0x01669730,
    ],
};

/// The 8 further copies of `RECORD_AT_00887620`.
///
/// Ported from `FUN_00887620` at `0x00887620`.
pub const COPIES_OF_00887620: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00887620,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00887620",
    copies: &[
        0x00887F70, 0x00889580, 0x00889750, 0x00889C10, 0x0088A2B0, 0x0088C4C0, 0x0112BFA0,
        0x0112C220,
    ],
};

/// The 1 further copy of `RECORD_AT_00889F80`.
///
/// Ported from `FUN_00889f80` at `0x00889F80`.
pub const COPIES_OF_00889F80: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00889F80,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00889F80",
    copies: &[0x0088A620],
};

/// The 7 further copies of `RECORD_AT_0088F7A0`.
///
/// Ported from `FUN_0088f7a0` at `0x0088F7A0`.
pub const COPIES_OF_0088F7A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0088F7A0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0088F7A0",
    copies: &[
        0x00EFA590, 0x01087750, 0x010D6B60, 0x01602230, 0x01602450, 0x016BB0C0, 0x01D3E220,
    ],
};

/// The 2 further copies of `RECORD_AT_00895DD0`.
///
/// Ported from `FUN_00895dd0` at `0x00895DD0`.
pub const COPIES_OF_00895DD0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00895DD0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00895DD0",
    copies: &[0x0123BD50, 0x01A691E0],
};

/// The 4 further copies of `RECORD_AT_008975A0`.
///
/// Ported from `FUN_008975a0` at `0x008975A0`.
pub const COPIES_OF_008975A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x008975A0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_008975A0",
    copies: &[0x008B1620, 0x00C8B280, 0x00C8B3D0, 0x00CB5A50],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_0089b770` at `0x0089B770`.
pub const COPIES_OF_0089B770: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0089B770,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00CBF320],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_0089b850` at `0x0089B850`.
pub const COPIES_OF_0089B850: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0089B850,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x0089BEC0],
};

/// The 1 further copy of `RECORD_AT_0089C560`.
///
/// Ported from `FUN_0089c560` at `0x0089C560`.
pub const COPIES_OF_0089C560: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0089C560,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0089C560",
    copies: &[0x010AE8E0],
};

/// The 5 further copies of `RELEASE_0089DB10`.
///
/// Ported from `FUN_0089db10` at `0x0089DB10`.
pub const COPIES_OF_0089DB10: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0089DB10,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_0089DB10",
    copies: &[0x00CD8FD0, 0x00D00A30, 0x00D00C40, 0x00D07B20, 0x01606020],
};

/// The 20 further copies of `RELEASE_008ABF50`.
///
/// Ported from `FUN_008abf50` at `0x008ABF50`.
pub const COPIES_OF_008ABF50: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x008ABF50,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_008ABF50",
    copies: &[
        0x008B1230, 0x008B13B0, 0x00B9D080, 0x00C7BAD0, 0x00C7BBA0, 0x00CDACD0, 0x00CDAE90,
        0x00CDAF80, 0x00CDB080, 0x00CDB180, 0x00CDB270, 0x00CDB550, 0x00CDB610, 0x00CDB6D0,
        0x00D01870, 0x00D01940, 0x00D01D90, 0x00D01F40, 0x00D020A0, 0x00D08310,
    ],
};

/// The 4 further copies of `RECORD_AT_008AC9A0`.
///
/// Ported from `FUN_008ac9a0` at `0x008AC9A0`.
pub const COPIES_OF_008AC9A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x008AC9A0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_008AC9A0",
    copies: &[0x010BBE90, 0x011259B0, 0x018B9E80, 0x01CE5DD0],
};

/// The 6 further copies of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_008b8a40` at `0x008B8A40`.
pub const COPIES_OF_008B8A40: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x008B8A40,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[
        0x00B17A00, 0x00B28660, 0x00BADE20, 0x00BBF6B0, 0x00BD10D0, 0x00F6F030,
    ],
};

/// The 10 further copies of `RECORD_AT_008E5AC0`.
///
/// Ported from `FUN_008e5ac0` at `0x008E5AC0`.
pub const COPIES_OF_008E5AC0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x008E5AC0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_008E5AC0",
    copies: &[
        0x008E5C30, 0x008E5DA0, 0x008E8AA0, 0x008E9130, 0x008E9540, 0x008E9D80, 0x008EA5C0,
        0x008EADE0, 0x014B8230, 0x01C76890,
    ],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_008f37a0` at `0x008F37A0`.
pub const COPIES_OF_008F37A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x008F37A0,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x008F3B30],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_008f8e00` at `0x008F8E00`.
pub const COPIES_OF_008F8E00: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x008F8E00,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x01877880],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_008f95f0` at `0x008F95F0`.
pub const COPIES_OF_008F95F0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x008F95F0,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00C27350],
};

/// The 4 further copies of `RECORD_AT_008FC4D0`.
///
/// Ported from `FUN_008fc4d0` at `0x008FC4D0`.
pub const COPIES_OF_008FC4D0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x008FC4D0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_008FC4D0",
    copies: &[0x008FC600, 0x008FC760, 0x008FC8A0, 0x0160B930],
};

/// The 9 further copies of `RECORD_AT_008FCB80`.
///
/// Ported from `FUN_008fcb80` at `0x008FCB80`.
pub const COPIES_OF_008FCB80: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x008FCB80,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_008FCB80",
    copies: &[
        0x00E07900, 0x013B9700, 0x015E9E40, 0x015F64E0, 0x015F7390, 0x015FD2C0, 0x01602E70,
        0x01609AE0, 0x01B21860,
    ],
};

/// The 12 further copies of `RECORD_AT_008FCC90`.
///
/// Ported from `FUN_008fcc90` at `0x008FCC90`.
pub const COPIES_OF_008FCC90: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x008FCC90,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_008FCC90",
    copies: &[
        0x008FD220, 0x008FD4B0, 0x008FD6A0, 0x00F78850, 0x01060060, 0x010ADC30, 0x012B9220,
        0x015DEA30, 0x017F6450, 0x017FD730, 0x01B219B0, 0x01D0A5F0,
    ],
};

/// The 1 further copy of `RELEASE_008FE5F0`.
///
/// Ported from `FUN_008fe5f0` at `0x008FE5F0`.
pub const COPIES_OF_008FE5F0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x008FE5F0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_008FE5F0",
    copies: &[0x01955F80],
};

/// The 4 further copies of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_00950730` at `0x00950730`.
pub const COPIES_OF_00950730: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00950730,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x009507A0, 0x00951840, 0x00951E20, 0x00953B30],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00956670` at `0x00956670`.
pub const COPIES_OF_00956670: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00956670,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00956D70],
};

/// The 11 further copies of `RELEASE_0095BBA0`.
///
/// Ported from `FUN_0095bba0` at `0x0095BBA0`.
pub const COPIES_OF_0095BBA0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0095BBA0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_0095BBA0",
    copies: &[
        0x00F303E0, 0x00F30890, 0x010AE290, 0x013C22A0, 0x01499310, 0x015E0960, 0x0176FED0,
        0x01814310, 0x01A542D0, 0x01B23FF0, 0x01C0DFB0,
    ],
};

/// The 3 further copies of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_0095d6a0` at `0x0095D6A0`.
pub const COPIES_OF_0095D6A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0095D6A0,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00A66B20, 0x00F2D5C0, 0x00F488E0],
};

/// The 2 further copies of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_0095e390` at `0x0095E390`.
pub const COPIES_OF_0095E390: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0095E390,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00ABF9E0, 0x019BF090],
};

/// The 2 further copies of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_0095e610` at `0x0095E610`.
pub const COPIES_OF_0095E610: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0095E610,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00A7C5B0, 0x00A98680],
};

/// The 1 further copy of `RELEASE_00972B80`.
///
/// Ported from `FUN_00972b80` at `0x00972B80`.
pub const COPIES_OF_00972B80: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00972B80,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_00972B80",
    copies: &[0x00D95430],
};

/// The 7 further copies of `RELEASE_00974710`.
///
/// Ported from `FUN_00974710` at `0x00974710`.
pub const COPIES_OF_00974710: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00974710,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_00974710",
    copies: &[
        0x00A537E0, 0x00C299F0, 0x00C3FB40, 0x00DE7A30, 0x014CDFC0, 0x0161F1E0, 0x01796370,
    ],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_0097d330` at `0x0097D330`.
pub const COPIES_OF_0097D330: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0097D330,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x00982D30],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_00982f30` at `0x00982F30`.
pub const COPIES_OF_00982F30: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00982F30,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x00985220],
};

/// The 1 further copy of `RECORD_AT_00985B30`.
///
/// Ported from `FUN_00985b30` at `0x00985B30`.
pub const COPIES_OF_00985B30: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00985B30,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00985B30",
    copies: &[0x0170A650],
};

/// The 4 further copies of `RELEASE_00986650`.
///
/// Ported from `FUN_00986650` at `0x00986650`.
pub const COPIES_OF_00986650: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00986650,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_00986650",
    copies: &[0x00999B50, 0x0099A270, 0x0099A990, 0x0099B0B0],
};

/// The 10 further copies of `RELEASE_00987CA0`.
///
/// Ported from `FUN_00987ca0` at `0x00987CA0`.
pub const COPIES_OF_00987CA0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00987CA0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_00987CA0",
    copies: &[
        0x00988060, 0x00BE0C30, 0x0114DB80, 0x013A6A80, 0x0176B040, 0x0176DAB0, 0x01772370,
        0x017773D0, 0x01798F50, 0x01835240,
    ],
};

/// The 2 further copies of `RELEASE_009885C0`.
///
/// Ported from `FUN_009885c0` at `0x009885C0`.
pub const COPIES_OF_009885C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x009885C0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_009885C0",
    copies: &[0x00998C60, 0x00999430],
};

/// The 2 further copies of `RELEASE_00988ED0`.
///
/// Ported from `FUN_00988ed0` at `0x00988ED0`.
pub const COPIES_OF_00988ED0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00988ED0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_00988ED0",
    copies: &[0x00B8A2D0, 0x01648430],
};

/// The 1 further copy of `RELEASE_00989B30`.
///
/// Ported from `FUN_00989b30` at `0x00989B30`.
pub const COPIES_OF_00989B30: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00989B30,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_00989B30",
    copies: &[0x016C5270],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_0098d700` at `0x0098D700`.
pub const COPIES_OF_0098D700: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0098D700,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x012DD0A0],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_00995260` at `0x00995260`.
pub const COPIES_OF_00995260: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00995260,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x00997EF0],
};

/// The 5 further copies of `RELEASE_0099B310`.
///
/// Ported from `FUN_0099b310` at `0x0099B310`.
pub const COPIES_OF_0099B310: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0099B310,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_0099B310",
    copies: &[0x0099B540, 0x0099B770, 0x0099B9A0, 0x0099BC20, 0x00DE7390],
};

/// The 2 further copies of `RECORD_AT_009A7F10`.
///
/// Ported from `FUN_009a7f10` at `0x009A7F10`.
pub const COPIES_OF_009A7F10: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x009A7F10,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_009A7F10",
    copies: &[0x009A8D80, 0x009A8F10],
};

/// The 5 further copies of `RECORD_AT_009A80C0`.
///
/// Ported from `FUN_009a80c0` at `0x009A80C0`.
pub const COPIES_OF_009A80C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x009A80C0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_009A80C0",
    copies: &[0x009B1250, 0x009B1300, 0x009B16D0, 0x009B5D20, 0x009B5DC0],
};

/// The 5 further copies of `RECORD_AT_009A8580`.
///
/// Ported from `FUN_009a8580` at `0x009A8580`.
pub const COPIES_OF_009A8580: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x009A8580,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_009A8580",
    copies: &[0x009A8750, 0x009A9080, 0x009B26B0, 0x009B6060, 0x009B60F0],
};

/// The 1 further copy of `RECORD_AT_009A9170`.
///
/// Ported from `FUN_009a9170` at `0x009A9170`.
pub const COPIES_OF_009A9170: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x009A9170,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_009A9170",
    copies: &[0x009B7590],
};

/// The 3 further copies of `RECORD_AT_009A9B70`.
///
/// Ported from `FUN_009a9b70` at `0x009A9B70`.
pub const COPIES_OF_009A9B70: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x009A9B70,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_009A9B70",
    copies: &[0x009B2790, 0x009B2840, 0x009B2C10],
};

/// The 3 further copies of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_009d6e20` at `0x009D6E20`.
pub const COPIES_OF_009D6E20: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x009D6E20,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00AFFB60, 0x00B08820, 0x00F48D20],
};

/// The 25 further copies of `TEXT_PAIR_0X38_0X78`.
///
/// Ported from `FUN_009dff50` at `0x009DFF50`.
pub const COPIES_OF_009DFF50: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x009DFF50,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "TEXT_PAIR_0X38_0X78",
    copies: &[
        0x00A5D330, 0x00BBF8E0, 0x00BBF9C0, 0x00EE6DF0, 0x01079880, 0x0110AF60, 0x012B3170,
        0x013236A0, 0x013C5CB0, 0x013FCCE0, 0x01473BF0, 0x01575A10, 0x01626450, 0x016B1640,
        0x01815280, 0x019A5A60, 0x019AC670, 0x019B0000, 0x019EF710, 0x01B21770, 0x01B229C0,
        0x01B24840, 0x01BBE010, 0x01BC0BA0, 0x01D40210,
    ],
};

/// The 1 further copy of `RECORD_AT_009E3130`.
///
/// Ported from `FUN_009e3130` at `0x009E3130`.
pub const COPIES_OF_009E3130: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x009E3130,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_009E3130",
    copies: &[0x009E3CC0],
};

/// The 3 further copies of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_009e31e0` at `0x009E31E0`.
pub const COPIES_OF_009E31E0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x009E31E0,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x0142FCF0, 0x01432210, 0x01436200],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_009ec960` at `0x009EC960`.
pub const COPIES_OF_009EC960: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x009EC960,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x01860680],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00a047c0` at `0x00A047C0`.
pub const COPIES_OF_00A047C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00A047C0,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x0185C970],
};

/// The 1 further copy of `RECORD_AT_00A04F40`.
///
/// Ported from `FUN_00a04f40` at `0x00A04F40`.
pub const COPIES_OF_00A04F40: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00A04F40,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00A04F40",
    copies: &[0x0185D1E0],
};

/// The 3 further copies of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_00a061b0` at `0x00A061B0`.
pub const COPIES_OF_00A061B0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00A061B0,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x00B1AE60, 0x01806A10, 0x0185F2D0],
};

/// The 3 further copies of `RECORD_AT_00A29730`.
///
/// Ported from `FUN_00a29730` at `0x00A29730`.
pub const COPIES_OF_00A29730: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00A29730,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00A29730",
    copies: &[0x00A7C780, 0x018AA280, 0x018AA590],
};

/// The 2 further copies of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00a2a140` at `0x00A2A140`.
pub const COPIES_OF_00A2A140: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00A2A140,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00A5CA80, 0x00A750D0],
};

/// The 4 further copies of `RECORD_AT_00A2C440`.
///
/// Ported from `FUN_00a2c440` at `0x00A2C440`.
pub const COPIES_OF_00A2C440: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00A2C440,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00A2C440",
    copies: &[0x00BCC5A0, 0x0141AD40, 0x0156B040, 0x0180D1A0],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00a41170` at `0x00A41170`.
pub const COPIES_OF_00A41170: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00A41170,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00C21930],
};

/// The 26 further copies of `TEXT_PAIR_0X38_0X58`.
///
/// Ported from `FUN_00a4a3a0` at `0x00A4A3A0`.
pub const COPIES_OF_00A4A3A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00A4A3A0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "TEXT_PAIR_0X38_0X58",
    copies: &[
        0x00A4A490, 0x00ABCCF0, 0x00AD6D10, 0x00EAA060, 0x00F872A0, 0x010CDE30, 0x010D0490,
        0x01242850, 0x012F4040, 0x013AE640, 0x01473660, 0x014E8430, 0x01625EE0, 0x01768EF0,
        0x017720D0, 0x01777170, 0x019DE270, 0x01A3E8E0, 0x01A52F10, 0x01AED5D0, 0x01AED6C0,
        0x01B3B4C0, 0x01B830B0, 0x01C27750, 0x01C27810, 0x01C48CD0,
    ],
};

/// The 1 further copy of `RECORD_AT_00A55100`.
///
/// Ported from `FUN_00a55100` at `0x00A55100`.
pub const COPIES_OF_00A55100: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00A55100,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00A55100",
    copies: &[0x018E14F0],
};

/// The 6 further copies of `RECORD_AT_00A594D0`.
///
/// Ported from `FUN_00a594d0` at `0x00A594D0`.
pub const COPIES_OF_00A594D0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00A594D0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00A594D0",
    copies: &[
        0x00F7DB30, 0x0109D5E0, 0x0147F770, 0x014EBE90, 0x01626180, 0x01823840,
    ],
};

/// The 9 further copies of `RECORD_AT_00A59640`.
///
/// Ported from `FUN_00a59640` at `0x00A59640`.
pub const COPIES_OF_00A59640: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00A59640,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00A59640",
    copies: &[
        0x00EC0210, 0x00ECBB30, 0x0112E8F0, 0x0135C480, 0x019C6EE0, 0x01A3CCE0, 0x01BA2B60,
        0x01C3BC50, 0x01CD6600,
    ],
};

/// The 2 further copies of `RECORD_AT_00A59E20`.
///
/// Ported from `FUN_00a59e20` at `0x00A59E20`.
pub const COPIES_OF_00A59E20: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00A59E20,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00A59E20",
    copies: &[0x00A5B880, 0x01073010],
};

/// The 1 further copy of `RECORD_AT_00A5B9B0`.
///
/// Ported from `FUN_00a5b9b0` at `0x00A5B9B0`.
pub const COPIES_OF_00A5B9B0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00A5B9B0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00A5B9B0",
    copies: &[0x01ADB750],
};

/// The 16 further copies of `RECORD_AT_00A5C5F0`.
///
/// Ported from `FUN_00a5c5f0` at `0x00A5C5F0`.
pub const COPIES_OF_00A5C5F0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00A5C5F0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00A5C5F0",
    copies: &[
        0x00B89DD0, 0x00C406C0, 0x00C84F60, 0x00ED4560, 0x013B95B0, 0x015D3620, 0x01704D50,
        0x01716A40, 0x01785450, 0x017CD080, 0x019DB310, 0x019EE530, 0x019EE650, 0x01B249C0,
        0x01BAA060, 0x01C41A80,
    ],
};

/// The 2 further copies of `RECORD_AT_00A61A50`.
///
/// Ported from `FUN_00a61a50` at `0x00A61A50`.
pub const COPIES_OF_00A61A50: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00A61A50,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00A61A50",
    copies: &[0x012C4770, 0x012F35C0],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00a79560` at `0x00A79560`.
pub const COPIES_OF_00A79560: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00A79560,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x016B0970],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00a79620` at `0x00A79620`.
pub const COPIES_OF_00A79620: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00A79620,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00AFFBD0],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00a9a400` at `0x00A9A400`.
pub const COPIES_OF_00A9A400: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00A9A400,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00ACF8E0],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00a9b560` at `0x00A9B560`.
pub const COPIES_OF_00A9B560: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00A9B560,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00ACE910],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00a9b850` at `0x00A9B850`.
pub const COPIES_OF_00A9B850: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00A9B850,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x0197BDB0],
};

/// The 3 further copies of `RELEASE_00AA2FF0`.
///
/// Ported from `FUN_00aa2ff0` at `0x00AA2FF0`.
pub const COPIES_OF_00AA2FF0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00AA2FF0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_00AA2FF0",
    copies: &[0x011943C0, 0x01C76540, 0x01C76840],
};

/// The 3 further copies of `RECORD_AT_00AA7930`.
///
/// Ported from `FUN_00aa7930` at `0x00AA7930`.
pub const COPIES_OF_00AA7930: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00AA7930,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00AA7930",
    copies: &[0x010A7320, 0x010AE750, 0x019A5730],
};

/// The 3 further copies of `RECORD_AT_00AAC410`.
///
/// Ported from `FUN_00aac410` at `0x00AAC410`.
pub const COPIES_OF_00AAC410: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00AAC410,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00AAC410",
    copies: &[0x01294DF0, 0x0133ACC0, 0x01A0B4D0],
};

/// The 2 further copies of `RECORD_AT_00ABC8C0`.
///
/// Ported from `FUN_00abc8c0` at `0x00ABC8C0`.
pub const COPIES_OF_00ABC8C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00ABC8C0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00ABC8C0",
    copies: &[0x012439E0, 0x01243B90],
};

/// The 3 further copies of `RECORD_AT_00ABCFF0`.
///
/// Ported from `FUN_00abcff0` at `0x00ABCFF0`.
pub const COPIES_OF_00ABCFF0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00ABCFF0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00ABCFF0",
    copies: &[0x0155C8D0, 0x01604B60, 0x01B242D0],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00abe600` at `0x00ABE600`.
pub const COPIES_OF_00ABE600: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00ABE600,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00ABED40],
};

/// The 1 further copy of `RECORD_AT_00AC1320`.
///
/// Ported from `FUN_00ac1320` at `0x00AC1320`.
pub const COPIES_OF_00AC1320: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00AC1320,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00AC1320",
    copies: &[0x01879E40],
};

/// The 1 further copy of `RECORD_AT_00AC2630`.
///
/// Ported from `FUN_00ac2630` at `0x00AC2630`.
pub const COPIES_OF_00AC2630: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00AC2630,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00AC2630",
    copies: &[0x0199CD90],
};

/// The 5 further copies of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00ac9d30` at `0x00AC9D30`.
pub const COPIES_OF_00AC9D30: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00AC9D30,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00C26260, 0x00DE56F0, 0x00DE58B0, 0x00EA6BF0, 0x00F48FB0],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00acaa80` at `0x00ACAA80`.
pub const COPIES_OF_00ACAA80: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00ACAA80,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00ACBFD0],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00acc750` at `0x00ACC750`.
pub const COPIES_OF_00ACC750: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00ACC750,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00ACE2F0],
};

/// The 2 further copies of `RECORD_AT_00AD1A40`.
///
/// Ported from `FUN_00ad1a40` at `0x00AD1A40`.
pub const COPIES_OF_00AD1A40: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00AD1A40,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00AD1A40",
    copies: &[0x016372A0, 0x01CD2D40],
};

/// The 1 further copy of `RECORD_AT_00AD2F90`.
///
/// Ported from `FUN_00ad2f90` at `0x00AD2F90`.
pub const COPIES_OF_00AD2F90: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00AD2F90,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00AD2F90",
    copies: &[0x00AF1650],
};

/// The 1 further copy of `RELEASE_00AD6310`.
///
/// Ported from `FUN_00ad6310` at `0x00AD6310`.
pub const COPIES_OF_00AD6310: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00AD6310,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_00AD6310",
    copies: &[0x017FFD00],
};

/// The 2 further copies of `RELEASE_00AD6350`.
///
/// Ported from `FUN_00ad6350` at `0x00AD6350`.
pub const COPIES_OF_00AD6350: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00AD6350,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_00AD6350",
    copies: &[0x00AE33B0, 0x01B20B60],
};

/// The 1 further copy of `RELEASE_00ADB4C0`.
///
/// Ported from `FUN_00adb4c0` at `0x00ADB4C0`.
pub const COPIES_OF_00ADB4C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00ADB4C0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_00ADB4C0",
    copies: &[0x00C2C0B0],
};

/// The 5 further copies of `RELEASE_00ADB4E0`.
///
/// Ported from `FUN_00adb4e0` at `0x00ADB4E0`.
pub const COPIES_OF_00ADB4E0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00ADB4E0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_00ADB4E0",
    copies: &[0x00AE1F20, 0x012F9570, 0x018A8560, 0x019DC730, 0x01A7ED30],
};

/// The 5 further copies of `RELEASE_00ADC0C0`.
///
/// Ported from `FUN_00adc0c0` at `0x00ADC0C0`.
pub const COPIES_OF_00ADC0C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00ADC0C0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_00ADC0C0",
    copies: &[0x00D94160, 0x00D94180, 0x01628350, 0x0162A450, 0x018C33A0],
};

/// The 4 further copies of `RELEASE_00ADC940`.
///
/// Ported from `FUN_00adc940` at `0x00ADC940`.
pub const COPIES_OF_00ADC940: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00ADC940,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_00ADC940",
    copies: &[0x00D392C0, 0x00D49680, 0x010BB230, 0x019C4BA0],
};

/// The 2 further copies of `RELEASE_00ADF430`.
///
/// Ported from `FUN_00adf430` at `0x00ADF430`.
pub const COPIES_OF_00ADF430: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00ADF430,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_00ADF430",
    copies: &[0x00AE5440, 0x0176FC60],
};

/// The 2 further copies of `RELEASE_00ADF470`.
///
/// Ported from `FUN_00adf470` at `0x00ADF470`.
pub const COPIES_OF_00ADF470: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00ADF470,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_00ADF470",
    copies: &[0x0143C9A0, 0x016D8D50],
};

/// The 1 further copy of `RELEASE_00ADF4B0`.
///
/// Ported from `FUN_00adf4b0` at `0x00ADF4B0`.
pub const COPIES_OF_00ADF4B0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00ADF4B0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_00ADF4B0",
    copies: &[0x00C66340],
};

/// The 5 further copies of `RELEASE_00AE1380`.
///
/// Ported from `FUN_00ae1380` at `0x00AE1380`.
pub const COPIES_OF_00AE1380: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00AE1380,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_00AE1380",
    copies: &[0x00BFDBE0, 0x0156D030, 0x01B1FEA0, 0x01C432E0, 0x01C43300],
};

/// The 1 further copy of `RELEASE_00AE6A50`.
///
/// Ported from `FUN_00ae6a50` at `0x00AE6A50`.
pub const COPIES_OF_00AE6A50: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00AE6A50,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_00AE6A50",
    copies: &[0x00AE6EC0],
};

/// The 1 further copy of `RECORD_AT_00AF45F0`.
///
/// Ported from `FUN_00af45f0` at `0x00AF45F0`.
pub const COPIES_OF_00AF45F0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00AF45F0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00AF45F0",
    copies: &[0x01AEE600],
};

/// The 1 further copy of `RELEASE_00AF79C0`.
///
/// Ported from `FUN_00af79c0` at `0x00AF79C0`.
pub const COPIES_OF_00AF79C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00AF79C0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_00AF79C0",
    copies: &[0x01775590],
};

/// The 1 further copy of `RECORD_AT_00AFC640`.
///
/// Ported from `FUN_00afc640` at `0x00AFC640`.
pub const COPIES_OF_00AFC640: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00AFC640,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00AFC640",
    copies: &[0x01BBEEE0],
};

/// The 2 further copies of `RECORD_AT_00AFE0C0`.
///
/// Ported from `FUN_00afe0c0` at `0x00AFE0C0`.
pub const COPIES_OF_00AFE0C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00AFE0C0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00AFE0C0",
    copies: &[0x0161C400, 0x0161C520],
};

/// The 7 further copies of `RECORD_AT_00AFF020`.
///
/// Ported from `FUN_00aff020` at `0x00AFF020`.
pub const COPIES_OF_00AFF020: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00AFF020,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00AFF020",
    copies: &[
        0x00C4DC90, 0x00EC4F90, 0x01083BF0, 0x010B9A40, 0x0180EBC0, 0x01A31D00, 0x01CE6110,
    ],
};

/// The 2 further copies of `RECORD_AT_00AFF3D0`.
///
/// Ported from `FUN_00aff3d0` at `0x00AFF3D0`.
pub const COPIES_OF_00AFF3D0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00AFF3D0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00AFF3D0",
    copies: &[0x01BB6490, 0x01BC2FE0],
};

/// The 3 further copies of `RECORD_AT_00B02D80`.
///
/// Ported from `FUN_00b02d80` at `0x00B02D80`.
pub const COPIES_OF_00B02D80: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00B02D80,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00B02D80",
    copies: &[0x00F5D1D0, 0x00F8D010, 0x010BBD00],
};

/// The 1 further copy of `RELEASE_00B04010`.
///
/// Ported from `FUN_00b04010` at `0x00B04010`.
pub const COPIES_OF_00B04010: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00B04010,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_00B04010",
    copies: &[0x00B04030],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00b08760` at `0x00B08760`.
pub const COPIES_OF_00B08760: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00B08760,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x01B4B280],
};

/// The 3 further copies of `RECORD_AT_00B0A330`.
///
/// Ported from `FUN_00b0a330` at `0x00B0A330`.
pub const COPIES_OF_00B0A330: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00B0A330,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00B0A330",
    copies: &[0x010B8E70, 0x018AA3F0, 0x01C7D2E0],
};

/// The 3 further copies of `RECORD_AT_00B0AD90`.
///
/// Ported from `FUN_00b0ad90` at `0x00B0AD90`.
pub const COPIES_OF_00B0AD90: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00B0AD90,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00B0AD90",
    copies: &[0x010D6470, 0x013A6C70, 0x01B20120],
};

/// The 1 further copy of `RECORD_AT_00B0B540`.
///
/// Ported from `FUN_00b0b540` at `0x00B0B540`.
pub const COPIES_OF_00B0B540: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00B0B540,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00B0B540",
    copies: &[0x01A26B60],
};

/// The 13 further copies of `RECORD_AT_00B12C60`.
///
/// Ported from `FUN_00b12c60` at `0x00B12C60`.
pub const COPIES_OF_00B12C60: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00B12C60,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00B12C60",
    copies: &[
        0x00B5E430, 0x00DE1C80, 0x01830680, 0x01830A70, 0x01830B50, 0x01830D70, 0x01831100,
        0x018311E0, 0x018312C0, 0x0184F470, 0x0184F550, 0x0184F630, 0x0184F710,
    ],
};

/// The 2 further copies of `RECORD_AT_00B150B0`.
///
/// Ported from `FUN_00b150b0` at `0x00B150B0`.
pub const COPIES_OF_00B150B0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00B150B0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00B150B0",
    copies: &[0x00B32F10, 0x016BA310],
};

/// The 1 further copy of `RECORD_AT_00B17B70`.
///
/// Ported from `FUN_00b17b70` at `0x00B17B70`.
pub const COPIES_OF_00B17B70: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00B17B70,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00B17B70",
    copies: &[0x00B17CE0],
};

/// The 18 further copies of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00b191b0` at `0x00B191B0`.
pub const COPIES_OF_00B191B0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00B191B0,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[
        0x00B21E70, 0x00B220F0, 0x00B30BC0, 0x00B34D70, 0x00B581C0, 0x00BDA0D0, 0x00E01C60,
        0x00F1FA40, 0x00F205F0, 0x00F20BD0, 0x01619450, 0x016D6300, 0x018472D0, 0x01888A80,
        0x018C57C0, 0x018D3D00, 0x01AA2C00, 0x01AA30C0,
    ],
};

/// The 5 further copies of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00b22bd0` at `0x00B22BD0`.
pub const COPIES_OF_00B22BD0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00B22BD0,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00B23C80, 0x00B24E20, 0x00B41950, 0x00B5AB30, 0x00B68F50],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_00b25710` at `0x00B25710`.
pub const COPIES_OF_00B25710: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00B25710,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x00B25740],
};

/// The 2 further copies of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_00b25810` at `0x00B25810`.
pub const COPIES_OF_00B25810: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00B25810,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x00C1A380, 0x00C25DB0],
};

/// The 15 further copies of `UNGUARDED_AT_0X38`.
///
/// Ported from `FUN_00b2b900` at `0x00B2B900`.
pub const COPIES_OF_00B2B900: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00B2B900,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "UNGUARDED_AT_0X38",
    copies: &[
        0x00B3DA70, 0x00B59300, 0x00B593A0, 0x00B59430, 0x00B594C0, 0x00B59560, 0x00B59600,
        0x00B596A0, 0x00B59740, 0x00B60800, 0x00B66350, 0x00B69090, 0x00B69180, 0x00B69260,
        0x00B69340,
    ],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00b34e20` at `0x00B34E20`.
pub const COPIES_OF_00B34E20: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00B34E20,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00B41B10],
};

/// The 8 further copies of `rotate_left`.
///
/// Ported from `FUN_00b3de60` at `0x00B3DE60`.
pub const COPIES_OF_00B3DE60: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00B3DE60,
    rust_path: "crates/tiara-core/src/delphi_runtime.rs",
    rust_symbol: "rotate_left",
    copies: &[
        0x00B725F0, 0x00B74AB0, 0x00B797D0, 0x00B7E580, 0x00B7F000, 0x00B877C0, 0x00C886F0,
        0x015AB2D0,
    ],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00b4e6c0` at `0x00B4E6C0`.
pub const COPIES_OF_00B4E6C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00B4E6C0,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00B506A0],
};

/// The 2 further copies of `RECORD_AT_00B4F240`.
///
/// Ported from `FUN_00b4f240` at `0x00B4F240`.
pub const COPIES_OF_00B4F240: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00B4F240,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00B4F240",
    copies: &[0x00B4F700, 0x00DA90A0],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00b4f9a0` at `0x00B4F9A0`.
pub const COPIES_OF_00B4F9A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00B4F9A0,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00B52BC0],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00b57160` at `0x00B57160`.
pub const COPIES_OF_00B57160: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00B57160,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00E11AC0],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00b576c0` at `0x00B576C0`.
pub const COPIES_OF_00B576C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00B576C0,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00B5ACD0],
};

/// The 2 further copies of `RECORD_AT_00B58130`.
///
/// Ported from `FUN_00b58130` at `0x00B58130`.
pub const COPIES_OF_00B58130: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00B58130,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00B58130",
    copies: &[0x00D217A0, 0x015AE440],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00b59770` at `0x00B59770`.
pub const COPIES_OF_00B59770: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00B59770,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x01879E70],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_00b6bc70` at `0x00B6BC70`.
pub const COPIES_OF_00B6BC70: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00B6BC70,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x00B6BF80],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_00b88120` at `0x00B88120`.
pub const COPIES_OF_00B88120: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00B88120,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x00C89370],
};

/// The 8 further copies of `RECORD_AT_00B8AB10`.
///
/// Ported from `FUN_00b8ab10` at `0x00B8AB10`.
pub const COPIES_OF_00B8AB10: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00B8AB10,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00B8AB10",
    copies: &[
        0x01AC7700, 0x01B77080, 0x01C0E150, 0x01C10BE0, 0x01D3A520, 0x01D3A610, 0x01D3A890,
        0x01D3A980,
    ],
};

/// The 1 further copy of `RECORD_AT_00B8D1D0`.
///
/// Ported from `FUN_00b8d1d0` at `0x00B8D1D0`.
pub const COPIES_OF_00B8D1D0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00B8D1D0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00B8D1D0",
    copies: &[0x01520940],
};

/// The 4 further copies of `RECORD_AT_00B8E6D0`.
///
/// Ported from `FUN_00b8e6d0` at `0x00B8E6D0`.
pub const COPIES_OF_00B8E6D0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00B8E6D0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00B8E6D0",
    copies: &[0x00C36D60, 0x00C371F0, 0x016433A0, 0x01B21410],
};

/// The 1 further copy of `RECORD_AT_00B8F2A0`.
///
/// Ported from `FUN_00b8f2a0` at `0x00B8F2A0`.
pub const COPIES_OF_00B8F2A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00B8F2A0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00B8F2A0",
    copies: &[0x00B8F5B0],
};

/// The 2 further copies of `RECORD_AT_00B90040`.
///
/// Ported from `FUN_00b90040` at `0x00B90040`.
pub const COPIES_OF_00B90040: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00B90040,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00B90040",
    copies: &[0x00F04D00, 0x01530DA0],
};

/// The 5 further copies of `RECORD_AT_00B90970`.
///
/// Ported from `FUN_00b90970` at `0x00B90970`.
pub const COPIES_OF_00B90970: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00B90970,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00B90970",
    copies: &[0x00FAE680, 0x00FC08E0, 0x00FCB2B0, 0x013B38B0, 0x01AA3920],
};

/// The 2 further copies of `RECORD_AT_00B90D10`.
///
/// Ported from `FUN_00b90d10` at `0x00B90D10`.
pub const COPIES_OF_00B90D10: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00B90D10,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00B90D10",
    copies: &[0x01379860, 0x01379B80],
};

/// The 1 further copy of `RECORD_AT_00B91E10`.
///
/// Ported from `FUN_00b91e10` at `0x00B91E10`.
pub const COPIES_OF_00B91E10: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00B91E10,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00B91E10",
    copies: &[0x00B91FF0],
};

/// The 1 further copy of `RECORD_AT_00B930A0`.
///
/// Ported from `FUN_00b930a0` at `0x00B930A0`.
pub const COPIES_OF_00B930A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00B930A0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00B930A0",
    copies: &[0x00B935E0],
};

/// The 9 further copies of `RECORD_AT_00B97290`.
///
/// Ported from `FUN_00b97290` at `0x00B97290`.
pub const COPIES_OF_00B97290: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00B97290,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00B97290",
    copies: &[
        0x00F79F10, 0x00F9AA30, 0x00FA6180, 0x00FABC60, 0x00FD5BB0, 0x012E1B00, 0x01543300,
        0x01780770, 0x01A455E0,
    ],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_00b97c60` at `0x00B97C60`.
pub const COPIES_OF_00B97C60: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00B97C60,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x01431860],
};

/// The 2 further copies of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00bbf6c0` at `0x00BBF6C0`.
pub const COPIES_OF_00BBF6C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00BBF6C0,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00C40000, 0x0197C810],
};

/// The 19 further copies of `RECORD_AT_00BC03B0`.
///
/// Ported from `FUN_00bc03b0` at `0x00BC03B0`.
pub const COPIES_OF_00BC03B0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00BC03B0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00BC03B0",
    copies: &[
        0x00BFF750, 0x00EA4020, 0x00EBD320, 0x00F036A0, 0x00F8F5D0, 0x01051580, 0x01086140,
        0x0108DB90, 0x01540250, 0x0155E330, 0x0156A590, 0x0156A640, 0x0156A6F0, 0x0156A7B0,
        0x01832550, 0x01A431A0, 0x01AA31B0, 0x01B38880, 0x01B74C00,
    ],
};

/// The 3 further copies of `RECORD_AT_00BCA8B0`.
///
/// Ported from `FUN_00bca8b0` at `0x00BCA8B0`.
pub const COPIES_OF_00BCA8B0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00BCA8B0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00BCA8B0",
    copies: &[0x00E08840, 0x00E089B0, 0x0130E630],
};

/// The 8 further copies of `RECORD_AT_00BCAAD0`.
///
/// Ported from `FUN_00bcaad0` at `0x00BCAAD0`.
pub const COPIES_OF_00BCAAD0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00BCAAD0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00BCAAD0",
    copies: &[
        0x00C85060, 0x00CDDB20, 0x00CF8E70, 0x014772F0, 0x01636DD0, 0x016486F0, 0x01705760,
        0x01A1EF90,
    ],
};

/// The 3 further copies of `RECORD_AT_00BD1490`.
///
/// Ported from `FUN_00bd1490` at `0x00BD1490`.
pub const COPIES_OF_00BD1490: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00BD1490,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00BD1490",
    copies: &[0x00BD1620, 0x014E00A0, 0x016ABAC0],
};

/// The 4 further copies of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00bda180` at `0x00BDA180`.
pub const COPIES_OF_00BDA180: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00BDA180,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00F20B90, 0x016193F0, 0x0172BF30, 0x01AF2570],
};

/// The 1 further copy of `RECORD_AT_00BF78A0`.
///
/// Ported from `FUN_00bf78a0` at `0x00BF78A0`.
pub const COPIES_OF_00BF78A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00BF78A0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00BF78A0",
    copies: &[0x00E10470],
};

/// The 5 further copies of `RECORD_AT_00BFC630`.
///
/// Ported from `FUN_00bfc630` at `0x00BFC630`.
pub const COPIES_OF_00BFC630: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00BFC630,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00BFC630",
    copies: &[0x0102B720, 0x013C4D40, 0x014C9CB0, 0x01835720, 0x019C1DE0],
};

/// The 2 further copies of `RECORD_AT_00BFDE20`.
///
/// Ported from `FUN_00bfde20` at `0x00BFDE20`.
pub const COPIES_OF_00BFDE20: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00BFDE20,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00BFDE20",
    copies: &[0x01115060, 0x015F8FC0],
};

/// The 3 further copies of `RECORD_AT_00C00740`.
///
/// Ported from `FUN_00c00740` at `0x00C00740`.
pub const COPIES_OF_00C00740: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00C00740,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00C00740",
    copies: &[0x00F06800, 0x00F06AC0, 0x013C2400],
};

/// The 3 further copies of `RECORD_AT_00C00A10`.
///
/// Ported from `FUN_00c00a10` at `0x00C00A10`.
pub const COPIES_OF_00C00A10: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00C00A10,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00C00A10",
    copies: &[0x00C00B60, 0x00C00D50, 0x00C00E90],
};

/// The 8 further copies of `RECORD_AT_00C0A400`.
///
/// Ported from `FUN_00c0a400` at `0x00C0A400`.
pub const COPIES_OF_00C0A400: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00C0A400,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00C0A400",
    copies: &[
        0x00EC7920, 0x00ED4000, 0x012CD210, 0x0132C2B0, 0x0132C580, 0x0132C870, 0x0132CB90,
        0x01B9AE70,
    ],
};

/// The 1 further copy of `RECORD_AT_00C1A540`.
///
/// Ported from `FUN_00c1a540` at `0x00C1A540`.
pub const COPIES_OF_00C1A540: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00C1A540,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00C1A540",
    copies: &[0x00CD6240],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00c2dc10` at `0x00C2DC10`.
pub const COPIES_OF_00C2DC10: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00C2DC10,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00C2EE20],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00c2e790` at `0x00C2E790`.
pub const COPIES_OF_00C2E790: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00C2E790,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00C2E9A0],
};

/// The 1 further copy of `RECORD_AT_00C36FD0`.
///
/// Ported from `FUN_00c36fd0` at `0x00C36FD0`.
pub const COPIES_OF_00C36FD0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00C36FD0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00C36FD0",
    copies: &[0x01AC7490],
};

/// The 3 further copies of `RECORD_AT_00C3D6B0`.
///
/// Ported from `FUN_00c3d6b0` at `0x00C3D6B0`.
pub const COPIES_OF_00C3D6B0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00C3D6B0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00C3D6B0",
    copies: &[0x00EA9E80, 0x013FEC70, 0x019A22E0],
};

/// The 8 further copies of `RECORD_AT_00C3F800`.
///
/// Ported from `FUN_00c3f800` at `0x00C3F800`.
pub const COPIES_OF_00C3F800: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00C3F800,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00C3F800",
    copies: &[
        0x00EBA210, 0x014A7B00, 0x014AF140, 0x0176A950, 0x0176D590, 0x017726A0, 0x01777670,
        0x01796080,
    ],
};

/// The 9 further copies of `RECORD_AT_00C3FD30`.
///
/// Ported from `FUN_00c3fd30` at `0x00C3FD30`.
pub const COPIES_OF_00C3FD30: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00C3FD30,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00C3FD30",
    copies: &[
        0x01156260, 0x0176B070, 0x0176D870, 0x0176DAE0, 0x017723A0, 0x01772980, 0x01777400,
        0x01777960, 0x01D31A20,
    ],
};

/// The 6 further copies of `RECORD_AT_00C40930`.
///
/// Ported from `FUN_00c40930` at `0x00C40930`.
pub const COPIES_OF_00C40930: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00C40930,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00C40930",
    copies: &[
        0x0109FBF0, 0x010A8480, 0x010A85E0, 0x01605E80, 0x01B87F10, 0x01BEB410,
    ],
};

/// The 3 further copies of `RECORD_AT_00C4CE30`.
///
/// Ported from `FUN_00c4ce30` at `0x00C4CE30`.
pub const COPIES_OF_00C4CE30: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00C4CE30,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00C4CE30",
    copies: &[0x00C69730, 0x00D7E100, 0x019988F0],
};

/// The 3 further copies of `RECORD_AT_00C4D0C0`.
///
/// Ported from `FUN_00c4d0c0` at `0x00C4D0C0`.
pub const COPIES_OF_00C4D0C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00C4D0C0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00C4D0C0",
    copies: &[0x015D8670, 0x01795E70, 0x0179C4A0],
};

/// The 3 further copies of `RECORD_AT_00C53440`.
///
/// Ported from `FUN_00c53440` at `0x00C53440`.
pub const COPIES_OF_00C53440: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00C53440,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00C53440",
    copies: &[0x019C78C0, 0x01BA5EC0, 0x01C17C40],
};

/// The 1 further copy of `RECORD_AT_00C538F0`.
///
/// Ported from `FUN_00c538f0` at `0x00C538F0`.
pub const COPIES_OF_00C538F0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00C538F0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00C538F0",
    copies: &[0x01B212C0],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00c5a5a0` at `0x00C5A5A0`.
pub const COPIES_OF_00C5A5A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00C5A5A0,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00F40B20],
};

/// The 4 further copies of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00c5c4e0` at `0x00C5C4E0`.
pub const COPIES_OF_00C5C4E0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00C5C4E0,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00C81E30, 0x016B03E0, 0x01AA2DE0, 0x01B10380],
};

/// The 6 further copies of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00c657f0` at `0x00C657F0`.
pub const COPIES_OF_00C657F0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00C657F0,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[
        0x00C66950, 0x00C6E670, 0x00C6E750, 0x00C6F580, 0x01708000, 0x01981390,
    ],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00c6e6b0` at `0x00C6E6B0`.
pub const COPIES_OF_00C6E6B0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00C6E6B0,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00F2CEF0],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_00c7a680` at `0x00C7A680`.
pub const COPIES_OF_00C7A680: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00C7A680,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x019AF580],
};

/// The 4 further copies of `RELEASE_00C7BA10`.
///
/// Ported from `FUN_00c7ba10` at `0x00C7BA10`.
pub const COPIES_OF_00C7BA10: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00C7BA10,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_00C7BA10",
    copies: &[0x00CBDAF0, 0x00D01AE0, 0x00D01C80, 0x00D055A0],
};

/// The 1 further copy of `RECORD_AT_00C7BD80`.
///
/// Ported from `FUN_00c7bd80` at `0x00C7BD80`.
pub const COPIES_OF_00C7BD80: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00C7BD80,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00C7BD80",
    copies: &[0x00DD8900],
};

/// The 1 further copy of `RECORD_AT_00C81DA0`.
///
/// Ported from `FUN_00c81da0` at `0x00C81DA0`.
pub const COPIES_OF_00C81DA0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00C81DA0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00C81DA0",
    copies: &[0x01AC7E90],
};

/// The 1 further copy of `RELEASE_00C82260`.
///
/// Ported from `FUN_00c82260` at `0x00C82260`.
pub const COPIES_OF_00C82260: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00C82260,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_00C82260",
    copies: &[0x015C43B0],
};

/// The 1 further copy of `RECORD_AT_00C834A0`.
///
/// Ported from `FUN_00c834a0` at `0x00C834A0`.
pub const COPIES_OF_00C834A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00C834A0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00C834A0",
    copies: &[0x017F1190],
};

/// The 6 further copies of `RECORD_AT_00C84E20`.
///
/// Ported from `FUN_00c84e20` at `0x00C84E20`.
pub const COPIES_OF_00C84E20: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00C84E20,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00C84E20",
    copies: &[
        0x01059AB0, 0x0105A070, 0x0163E3E0, 0x01B22470, 0x01B225E0, 0x01B22760,
    ],
};

/// The 1 further copy of `RECORD_AT_00C8B9D0`.
///
/// Ported from `FUN_00c8b9d0` at `0x00C8B9D0`.
pub const COPIES_OF_00C8B9D0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00C8B9D0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00C8B9D0",
    copies: &[0x00C8EFE0],
};

/// The 1 further copy of `RECORD_AT_00C9CBA0`.
///
/// Ported from `FUN_00c9cba0` at `0x00C9CBA0`.
pub const COPIES_OF_00C9CBA0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00C9CBA0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00C9CBA0",
    copies: &[0x01B7FBF0],
};

/// The 1 further copy of `RECORD_AT_00CAEDA0`.
///
/// Ported from `FUN_00caeda0` at `0x00CAEDA0`.
pub const COPIES_OF_00CAEDA0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00CAEDA0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00CAEDA0",
    copies: &[0x00CAEE80],
};

/// The 1 further copy of `RELEASE_00CB0A60`.
///
/// Ported from `FUN_00cb0a60` at `0x00CB0A60`.
pub const COPIES_OF_00CB0A60: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00CB0A60,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_00CB0A60",
    copies: &[0x00CB5A20],
};

/// The 7 further copies of `RECORD_AT_00CBBC50`.
///
/// Ported from `FUN_00cbbc50` at `0x00CBBC50`.
pub const COPIES_OF_00CBBC50: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00CBBC50,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00CBBC50",
    copies: &[
        0x00D57450, 0x00F76240, 0x01085C40, 0x013979D0, 0x013AC4A0, 0x013CB730, 0x0180BCE0,
    ],
};

/// The 1 further copy of `RECORD_AT_00CBDD90`.
///
/// Ported from `FUN_00cbdd90` at `0x00CBDD90`.
pub const COPIES_OF_00CBDD90: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00CBDD90,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00CBDD90",
    copies: &[0x00D01CB0],
};

/// The 2 further copies of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00cc25a0` at `0x00CC25A0`.
pub const COPIES_OF_00CC25A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00CC25A0,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00CEB320, 0x01BFF230],
};

/// The 1 further copy of `RECORD_AT_00CC59C0`.
///
/// Ported from `FUN_00cc59c0` at `0x00CC59C0`.
pub const COPIES_OF_00CC59C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00CC59C0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00CC59C0",
    copies: &[0x00CC5C10],
};

/// The 1 further copy of `RELEASE_00CCC020`.
///
/// Ported from `FUN_00ccc020` at `0x00CCC020`.
pub const COPIES_OF_00CCC020: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00CCC020,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_00CCC020",
    copies: &[0x00CCC3E0],
};

/// The 2 further copies of `RELEASE_00CCD140`.
///
/// Ported from `FUN_00ccd140` at `0x00CCD140`.
pub const COPIES_OF_00CCD140: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00CCD140,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_00CCD140",
    copies: &[0x00CCD370, 0x00CCD940],
};

/// The 1 further copy of `RECORD_AT_00CCEB00`.
///
/// Ported from `FUN_00cceb00` at `0x00CCEB00`.
pub const COPIES_OF_00CCEB00: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00CCEB00,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00CCEB00",
    copies: &[0x00CCFD50],
};

/// The 1 further copy of `RECORD_AT_00CD1400`.
///
/// Ported from `FUN_00cd1400` at `0x00CD1400`.
pub const COPIES_OF_00CD1400: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00CD1400,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00CD1400",
    copies: &[0x00CD18A0],
};

/// The 7 further copies of `RECORD_AT_00CD2080`.
///
/// Ported from `FUN_00cd2080` at `0x00CD2080`.
pub const COPIES_OF_00CD2080: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00CD2080,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00CD2080",
    copies: &[
        0x00CD2250, 0x00CD2460, 0x00CD2670, 0x00CD2880, 0x00CD2A90, 0x00CD3460, 0x01AA0F10,
    ],
};

/// The 4 further copies of `RECORD_AT_00CD2C10`.
///
/// Ported from `FUN_00cd2c10` at `0x00CD2C10`.
pub const COPIES_OF_00CD2C10: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00CD2C10,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00CD2C10",
    copies: &[0x00CD31D0, 0x01085210, 0x0184B290, 0x01AE7CE0],
};

/// The 1 further copy of `RECORD_AT_00CD6E90`.
///
/// Ported from `FUN_00cd6e90` at `0x00CD6E90`.
pub const COPIES_OF_00CD6E90: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00CD6E90,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00CD6E90",
    copies: &[0x00DFE500],
};

/// The 1 further copy of `RECORD_AT_00CD75F0`.
///
/// Ported from `FUN_00cd75f0` at `0x00CD75F0`.
pub const COPIES_OF_00CD75F0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00CD75F0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00CD75F0",
    copies: &[0x00CD7790],
};

/// The 2 further copies of `RECORD_AT_00CD8B40`.
///
/// Ported from `FUN_00cd8b40` at `0x00CD8B40`.
pub const COPIES_OF_00CD8B40: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00CD8B40,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00CD8B40",
    copies: &[0x00CE9250, 0x01A518A0],
};

/// The 1 further copy of `RECORD_AT_00CDCD60`.
///
/// Ported from `FUN_00cdcd60` at `0x00CDCD60`.
pub const COPIES_OF_00CDCD60: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00CDCD60,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00CDCD60",
    copies: &[0x00CDCE90],
};

/// The 3 further copies of `RELEASE_00CE90D0`.
///
/// Ported from `FUN_00ce90d0` at `0x00CE90D0`.
pub const COPIES_OF_00CE90D0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00CE90D0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_00CE90D0",
    copies: &[0x00CE93D0, 0x00CEA490, 0x00CEA680],
};

/// The 2 further copies of `RECORD_AT_00CEA370`.
///
/// Ported from `FUN_00cea370` at `0x00CEA370`.
pub const COPIES_OF_00CEA370: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00CEA370,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00CEA370",
    copies: &[0x014B8F60, 0x017F13E0],
};

/// The 7 further copies of `RECORD_AT_00CEC8F0`.
///
/// Ported from `FUN_00cec8f0` at `0x00CEC8F0`.
pub const COPIES_OF_00CEC8F0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00CEC8F0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00CEC8F0",
    copies: &[
        0x00D2EF40, 0x00F15A60, 0x010A6670, 0x01304E60, 0x0143B2A0, 0x01561E70, 0x017A4120,
    ],
};

/// The 1 further copy of `RECORD_AT_00D05D60`.
///
/// Ported from `FUN_00d05d60` at `0x00D05D60`.
pub const COPIES_OF_00D05D60: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00D05D60,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00D05D60",
    copies: &[0x0198CD60],
};

/// The 2 further copies of `RECORD_AT_00D063B0`.
///
/// Ported from `FUN_00d063b0` at `0x00D063B0`.
pub const COPIES_OF_00D063B0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00D063B0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00D063B0",
    copies: &[0x018B80C0, 0x01B0F270],
};

/// The 1 further copy of `RECORD_AT_00D0CEA0`.
///
/// Ported from `FUN_00d0cea0` at `0x00D0CEA0`.
pub const COPIES_OF_00D0CEA0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00D0CEA0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00D0CEA0",
    copies: &[0x00D20DC0],
};

/// The 1 further copy of `RECORD_AT_00D0D0E0`.
///
/// Ported from `FUN_00d0d0e0` at `0x00D0D0E0`.
pub const COPIES_OF_00D0D0E0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00D0D0E0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00D0D0E0",
    copies: &[0x00D21000],
};

/// The 1 further copy of `RECORD_AT_00D22A20`.
///
/// Ported from `FUN_00d22a20` at `0x00D22A20`.
pub const COPIES_OF_00D22A20: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00D22A20,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00D22A20",
    copies: &[0x00D23010],
};

/// The 4 further copies of `RECORD_AT_00D2A100`.
///
/// Ported from `FUN_00d2a100` at `0x00D2A100`.
pub const COPIES_OF_00D2A100: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00D2A100,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00D2A100",
    copies: &[0x00D2AE70, 0x00F7A750, 0x015EC340, 0x016B0D70],
};

/// The 3 further copies of `RELEASE_00D40C90`.
///
/// Ported from `FUN_00d40c90` at `0x00D40C90`.
pub const COPIES_OF_00D40C90: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00D40C90,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_00D40C90",
    copies: &[0x0143E680, 0x01A35380, 0x01C784F0],
};

/// The 2 further copies of `RECORD_AT_00D41A30`.
///
/// Ported from `FUN_00d41a30` at `0x00D41A30`.
pub const COPIES_OF_00D41A30: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00D41A30,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00D41A30",
    copies: &[0x01AB7AE0, 0x01AC6110],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_00d439c0` at `0x00D439C0`.
pub const COPIES_OF_00D439C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00D439C0,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x00D44540],
};

/// The 3 further copies of `RECORD_AT_00D73870`.
///
/// Ported from `FUN_00d73870` at `0x00D73870`.
pub const COPIES_OF_00D73870: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00D73870,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00D73870",
    copies: &[0x00FA4FB0, 0x013CF370, 0x01C76A90],
};

/// The 1 further copy of `RECORD_AT_00D80A40`.
///
/// Ported from `FUN_00d80a40` at `0x00D80A40`.
pub const COPIES_OF_00D80A40: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00D80A40,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00D80A40",
    copies: &[0x00D85BB0],
};

/// The 2 further copies of `RECORD_AT_00D812D0`.
///
/// Ported from `FUN_00d812d0` at `0x00D812D0`.
pub const COPIES_OF_00D812D0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00D812D0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00D812D0",
    copies: &[0x00D81400, 0x00D821E0],
};

/// The 10 further copies of `RECORD_AT_00D814E0`.
///
/// Ported from `FUN_00d814e0` at `0x00D814E0`.
pub const COPIES_OF_00D814E0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00D814E0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00D814E0",
    copies: &[
        0x00D81630, 0x00D81750, 0x00D81AE0, 0x00D81C60, 0x00D81E50, 0x00D81FD0, 0x00D82770,
        0x00D82BA0, 0x00D82D30, 0x00D82E70,
    ],
};

/// The 1 further copy of `RECORD_AT_00D850E0`.
///
/// Ported from `FUN_00d850e0` at `0x00D850E0`.
pub const COPIES_OF_00D850E0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00D850E0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00D850E0",
    copies: &[0x00D85D70],
};

/// The 1 further copy of `RECORD_AT_00D85980`.
///
/// Ported from `FUN_00d85980` at `0x00D85980`.
pub const COPIES_OF_00D85980: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00D85980,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00D85980",
    copies: &[0x00D86A90],
};

/// The 1 further copy of `RECORD_AT_00D893C0`.
///
/// Ported from `FUN_00d893c0` at `0x00D893C0`.
pub const COPIES_OF_00D893C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00D893C0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00D893C0",
    copies: &[0x00D8CCC0],
};

/// The 1 further copy of `RECORD_AT_00D8A9C0`.
///
/// Ported from `FUN_00d8a9c0` at `0x00D8A9C0`.
pub const COPIES_OF_00D8A9C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00D8A9C0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00D8A9C0",
    copies: &[0x00D9D7F0],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00de5a90` at `0x00DE5A90`.
pub const COPIES_OF_00DE5A90: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00DE5A90,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00DE5DB0],
};

/// The 4 further copies of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00e01d10` at `0x00E01D10`.
pub const COPIES_OF_00E01D10: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00E01D10,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00F1FAF0, 0x00F206A0, 0x00F20C80, 0x01619500],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00e08190` at `0x00E08190`.
pub const COPIES_OF_00E08190: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00E08190,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x0153C260],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00e08c00` at `0x00E08C00`.
pub const COPIES_OF_00E08C00: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00E08C00,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x015E8100],
};

/// The 3 further copies of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00e0aa70` at `0x00E0AA70`.
pub const COPIES_OF_00E0AA70: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00E0AA70,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00E11B80, 0x00E11C70, 0x00E12160],
};

/// The 3 further copies of `RECORD_AT_00E0E440`.
///
/// Ported from `FUN_00e0e440` at `0x00E0E440`.
pub const COPIES_OF_00E0E440: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00E0E440,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00E0E440",
    copies: &[0x00E0E6C0, 0x01627E90, 0x01B21C70],
};

/// The 2 further copies of `RECORD_AT_00E0E5A0`.
///
/// Ported from `FUN_00e0e5a0` at `0x00E0E5A0`.
pub const COPIES_OF_00E0E5A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00E0E5A0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00E0E5A0",
    copies: &[0x00EB9370, 0x01469C20],
};

/// The 3 further copies of `RECORD_AT_00E0EF60`.
///
/// Ported from `FUN_00e0ef60` at `0x00E0EF60`.
pub const COPIES_OF_00E0EF60: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00E0EF60,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00E0EF60",
    copies: &[0x01569E90, 0x01B39FD0, 0x01B3ACD0],
};

/// The 7 further copies of `RECORD_AT_00E10650`.
///
/// Ported from `FUN_00e10650` at `0x00E10650`.
pub const COPIES_OF_00E10650: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00E10650,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00E10650",
    copies: &[
        0x01307180, 0x01307260, 0x01307340, 0x01307420, 0x0141BF90, 0x01649030, 0x019EFFA0,
    ],
};

/// The 2 further copies of `RELEASE_00E13B50`.
///
/// Ported from `FUN_00e13b50` at `0x00E13B50`.
pub const COPIES_OF_00E13B50: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00E13B50,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_00E13B50",
    copies: &[0x01A4C4C0, 0x01A4CCA0],
};

/// The 2 further copies of `RECORD_AT_00E13B70`.
///
/// Ported from `FUN_00e13b70` at `0x00E13B70`.
pub const COPIES_OF_00E13B70: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00E13B70,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00E13B70",
    copies: &[0x0108D060, 0x014BA070],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00e13cc0` at `0x00E13CC0`.
pub const COPIES_OF_00E13CC0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00E13CC0,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x0164A540],
};

/// The 2 further copies of `RECORD_AT_00E24D80`.
///
/// Ported from `FUN_00e24d80` at `0x00E24D80`.
pub const COPIES_OF_00E24D80: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00E24D80,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00E24D80",
    copies: &[0x00E352F0, 0x00E41AF0],
};

/// The 9 further copies of `RECORD_AT_00E80BC0`.
///
/// Ported from `FUN_00e80bc0` at `0x00E80BC0`.
pub const COPIES_OF_00E80BC0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00E80BC0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00E80BC0",
    copies: &[
        0x00F5D680, 0x012B3EA0, 0x01339960, 0x0149CE60, 0x014F7B70, 0x015283E0, 0x01535AA0,
        0x01B9F600, 0x01BA0530,
    ],
};

/// The 1 further copy of `RECORD_AT_00EA7E60`.
///
/// Ported from `FUN_00ea7e60` at `0x00EA7E60`.
pub const COPIES_OF_00EA7E60: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00EA7E60,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00EA7E60",
    copies: &[0x00EA80D0],
};

/// The 5 further copies of `RECORD_AT_00EA8180`.
///
/// Ported from `FUN_00ea8180` at `0x00EA8180`.
pub const COPIES_OF_00EA8180: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00EA8180,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00EA8180",
    copies: &[0x00EA8220, 0x00EA8A80, 0x00EA8B30, 0x00EA8BE0, 0x00EA9070],
};

/// The 1 further copy of `RECORD_AT_00EA88F0`.
///
/// Ported from `FUN_00ea88f0` at `0x00EA88F0`.
pub const COPIES_OF_00EA88F0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00EA88F0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00EA88F0",
    copies: &[0x00EA89D0],
};

/// The 1 further copy of `RECORD_AT_00EA9260`.
///
/// Ported from `FUN_00ea9260` at `0x00EA9260`.
pub const COPIES_OF_00EA9260: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00EA9260,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00EA9260",
    copies: &[0x00EA9310],
};

/// The 1 further copy of `RECORD_AT_00EAB2F0`.
///
/// Ported from `FUN_00eab2f0` at `0x00EAB2F0`.
pub const COPIES_OF_00EAB2F0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00EAB2F0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00EAB2F0",
    copies: &[0x00EAE850],
};

/// The 4 further copies of `RECORD_AT_00EAE020`.
///
/// Ported from `FUN_00eae020` at `0x00EAE020`.
pub const COPIES_OF_00EAE020: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00EAE020,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00EAE020",
    copies: &[0x01337940, 0x01572030, 0x01572220, 0x01695D70],
};

/// The 2 further copies of `RECORD_AT_00EAEEB0`.
///
/// Ported from `FUN_00eaeeb0` at `0x00EAEEB0`.
pub const COPIES_OF_00EAEEB0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00EAEEB0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00EAEEB0",
    copies: &[0x00EAFC40, 0x00EAFDD0],
};

/// The 3 further copies of `RECORD_AT_00EAF050`.
///
/// Ported from `FUN_00eaf050` at `0x00EAF050`.
pub const COPIES_OF_00EAF050: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00EAF050,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00EAF050",
    copies: &[0x00EB1C90, 0x00EB1D40, 0x00EB2110],
};

/// The 2 further copies of `RECORD_AT_00EB1BB0`.
///
/// Ported from `FUN_00eb1bb0` at `0x00EB1BB0`.
pub const COPIES_OF_00EB1BB0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00EB1BB0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00EB1BB0",
    copies: &[0x00EB34C0, 0x00EB3550],
};

/// The 1 further copy of `RECORD_AT_00EB9D60`.
///
/// Ported from `FUN_00eb9d60` at `0x00EB9D60`.
pub const COPIES_OF_00EB9D60: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00EB9D60,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00EB9D60",
    copies: &[0x01BB45E0],
};

/// The 1 further copy of `RECORD_AT_00EC4D20`.
///
/// Ported from `FUN_00ec4d20` at `0x00EC4D20`.
pub const COPIES_OF_00EC4D20: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00EC4D20,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00EC4D20",
    copies: &[0x00ED0E00],
};

/// The 2 further copies of `RECORD_AT_00EC5DF0`.
///
/// Ported from `FUN_00ec5df0` at `0x00EC5DF0`.
pub const COPIES_OF_00EC5DF0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00EC5DF0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00EC5DF0",
    copies: &[0x0135E110, 0x015463E0],
};

/// The 3 further copies of `RECORD_AT_00EC6A20`.
///
/// Ported from `FUN_00ec6a20` at `0x00EC6A20`.
pub const COPIES_OF_00EC6A20: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00EC6A20,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00EC6A20",
    copies: &[0x00EC6E30, 0x00ED2B10, 0x00ED2F10],
};

/// The 2 further copies of `RECORD_AT_00EC71D0`.
///
/// Ported from `FUN_00ec71d0` at `0x00EC71D0`.
pub const COPIES_OF_00EC71D0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00EC71D0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00EC71D0",
    copies: &[0x00ED32A0, 0x016299F0],
};

/// The 1 further copy of `RECORD_AT_00EC7CE0`.
///
/// Ported from `FUN_00ec7ce0` at `0x00EC7CE0`.
pub const COPIES_OF_00EC7CE0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00EC7CE0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00EC7CE0",
    copies: &[0x01B70890],
};

/// The 1 further copy of `RECORD_AT_00EC8050`.
///
/// Ported from `FUN_00ec8050` at `0x00EC8050`.
pub const COPIES_OF_00EC8050: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00EC8050,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00EC8050",
    copies: &[0x00ED5100],
};

/// The 1 further copy of `RECORD_AT_00EC8910`.
///
/// Ported from `FUN_00ec8910` at `0x00EC8910`.
pub const COPIES_OF_00EC8910: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00EC8910,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00EC8910",
    copies: &[0x00ED5BC0],
};

/// The 5 further copies of `RECORD_AT_00EC90D0`.
///
/// Ported from `FUN_00ec90d0` at `0x00EC90D0`.
pub const COPIES_OF_00EC90D0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00EC90D0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00EC90D0",
    copies: &[0x01464330, 0x01469730, 0x01A493A0, 0x01C4CB90, 0x01D40940],
};

/// The 1 further copy of `RECORD_AT_00ECD0B0`.
///
/// Ported from `FUN_00ecd0b0` at `0x00ECD0B0`.
pub const COPIES_OF_00ECD0B0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00ECD0B0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00ECD0B0",
    copies: &[0x00ED2370],
};

/// The 2 further copies of `RECORD_AT_00ED10E0`.
///
/// Ported from `FUN_00ed10e0` at `0x00ED10E0`.
pub const COPIES_OF_00ED10E0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00ED10E0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00ED10E0",
    copies: &[0x019F03A0, 0x01BB6CB0],
};

/// The 2 further copies of `RECORD_AT_00ED4350`.
///
/// Ported from `FUN_00ed4350` at `0x00ED4350`.
pub const COPIES_OF_00ED4350: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00ED4350,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00ED4350",
    copies: &[0x017118C0, 0x0199D470],
};

/// The 1 further copy of `RECORD_AT_00ED4850`.
///
/// Ported from `FUN_00ed4850` at `0x00ED4850`.
pub const COPIES_OF_00ED4850: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00ED4850,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00ED4850",
    copies: &[0x0105A2D0],
};

/// The 1 further copy of `RECORD_AT_00ED5820`.
///
/// Ported from `FUN_00ed5820` at `0x00ED5820`.
pub const COPIES_OF_00ED5820: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00ED5820,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00ED5820",
    copies: &[0x01371150],
};

/// The 2 further copies of `RECORD_AT_00EE6F00`.
///
/// Ported from `FUN_00ee6f00` at `0x00EE6F00`.
pub const COPIES_OF_00EE6F00: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00EE6F00,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00EE6F00",
    copies: &[0x010B17F0, 0x019A04B0],
};

/// The 2 further copies of `RECORD_AT_00EED160`.
///
/// Ported from `FUN_00eed160` at `0x00EED160`.
pub const COPIES_OF_00EED160: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00EED160,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00EED160",
    copies: &[0x00EEED40, 0x00EEEDD0],
};

/// The 3 further copies of `RECORD_AT_00EED240`.
///
/// Ported from `FUN_00eed240` at `0x00EED240`.
pub const COPIES_OF_00EED240: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00EED240,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00EED240",
    copies: &[0x00EED2F0, 0x00EED6C0, 0x017796D0],
};

/// The 5 further copies of `RECORD_AT_00EFAD80`.
///
/// Ported from `FUN_00efad80` at `0x00EFAD80`.
pub const COPIES_OF_00EFAD80: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00EFAD80,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00EFAD80",
    copies: &[0x01253110, 0x013BC9A0, 0x014C1190, 0x014C1320, 0x01D40800],
};

/// The 1 further copy of `RECORD_AT_00F05250`.
///
/// Ported from `FUN_00f05250` at `0x00F05250`.
pub const COPIES_OF_00F05250: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00F05250,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00F05250",
    copies: &[0x01C756F0],
};

/// The 4 further copies of `RECORD_AT_00F06960`.
///
/// Ported from `FUN_00f06960` at `0x00F06960`.
pub const COPIES_OF_00F06960: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00F06960,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00F06960",
    copies: &[0x00F06C20, 0x015F2620, 0x01A332B0, 0x01D0EBD0],
};

/// The 1 further copy of `RECORD_AT_00F1C560`.
///
/// Ported from `FUN_00f1c560` at `0x00F1C560`.
pub const COPIES_OF_00F1C560: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00F1C560,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00F1C560",
    copies: &[0x014DECF0],
};

/// The 4 further copies of `RECORD_AT_00F2FC20`.
///
/// Ported from `FUN_00f2fc20` at `0x00F2FC20`.
pub const COPIES_OF_00F2FC20: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00F2FC20,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00F2FC20",
    copies: &[0x00FC61A0, 0x013A6010, 0x01603840, 0x01B1F5D0],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_00f30b70` at `0x00F30B70`.
pub const COPIES_OF_00F30B70: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00F30B70,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x00F334E0],
};

/// The 2 further copies of `RECORD_AT_00F34CD0`.
///
/// Ported from `FUN_00f34cd0` at `0x00F34CD0`.
pub const COPIES_OF_00F34CD0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00F34CD0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00F34CD0",
    copies: &[0x00F35A80, 0x00F35C10],
};

/// The 3 further copies of `RECORD_AT_00F34E70`.
///
/// Ported from `FUN_00f34e70` at `0x00F34E70`.
pub const COPIES_OF_00F34E70: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00F34E70,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00F34E70",
    copies: &[0x00F3A100, 0x00F3A1B0, 0x00F3A580],
};

/// The 2 further copies of `RECORD_AT_00F3A020`.
///
/// Ported from `FUN_00f3a020` at `0x00F3A020`.
pub const COPIES_OF_00F3A020: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00F3A020,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00F3A020",
    copies: &[0x00F3AC30, 0x00F3ACC0],
};

/// The 2 further copies of `RECORD_AT_00F438F0`.
///
/// Ported from `FUN_00f438f0` at `0x00F438F0`.
pub const COPIES_OF_00F438F0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00F438F0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00F438F0",
    copies: &[0x00F43AE0, 0x0140A3C0],
};

/// The 1 further copy of `RECORD_AT_00F4B310`.
///
/// Ported from `FUN_00f4b310` at `0x00F4B310`.
pub const COPIES_OF_00F4B310: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00F4B310,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00F4B310",
    copies: &[0x00F9AD30],
};

/// The 1 further copy of `RECORD_AT_00F4FA90`.
///
/// Ported from `FUN_00f4fa90` at `0x00F4FA90`.
pub const COPIES_OF_00F4FA90: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00F4FA90,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00F4FA90",
    copies: &[0x012B6AD0],
};

/// The 3 further copies of `RECORD_AT_00F5D480`.
///
/// Ported from `FUN_00f5d480` at `0x00F5D480`.
pub const COPIES_OF_00F5D480: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00F5D480,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00F5D480",
    copies: &[0x0141D8D0, 0x016E5F10, 0x01D61970],
};

/// The 1 further copy of `RECORD_AT_00F5F3B0`.
///
/// Ported from `FUN_00f5f3b0` at `0x00F5F3B0`.
pub const COPIES_OF_00F5F3B0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00F5F3B0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00F5F3B0",
    copies: &[0x0129D5F0],
};

/// The 2 further copies of `RECORD_AT_00F60ED0`.
///
/// Ported from `FUN_00f60ed0` at `0x00F60ED0`.
pub const COPIES_OF_00F60ED0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00F60ED0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00F60ED0",
    copies: &[0x01BA1110, 0x01CE7A20],
};

/// The 3 further copies of `RECORD_AT_00F7A430`.
///
/// Ported from `FUN_00f7a430` at `0x00F7A430`.
pub const COPIES_OF_00F7A430: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00F7A430,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00F7A430",
    copies: &[0x0102B400, 0x01556DB0, 0x0161CF40],
};

/// The 4 further copies of `RECORD_AT_00F7CCE0`.
///
/// Ported from `FUN_00f7cce0` at `0x00F7CCE0`.
pub const COPIES_OF_00F7CCE0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00F7CCE0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00F7CCE0",
    copies: &[0x0145F470, 0x015FBCA0, 0x01643910, 0x01B21B20],
};

/// The 3 further copies of `RECORD_AT_00F85210`.
///
/// Ported from `FUN_00f85210` at `0x00F85210`.
pub const COPIES_OF_00F85210: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00F85210,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00F85210",
    copies: &[0x01575CC0, 0x01575F80, 0x015763B0],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_00f86770` at `0x00F86770`.
pub const COPIES_OF_00F86770: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00F86770,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x01072A40],
};

/// The 10 further copies of `RECORD_AT_00F8C900`.
///
/// Ported from `FUN_00f8c900` at `0x00F8C900`.
pub const COPIES_OF_00F8C900: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00F8C900,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00F8C900",
    copies: &[
        0x01081C80, 0x0109E9C0, 0x010A3A20, 0x01126290, 0x013D0AD0, 0x0146FA50, 0x01493DE0,
        0x014A0540, 0x017E82C0, 0x017F0AC0,
    ],
};

/// The 2 further copies of `RECORD_AT_00F8EDC0`.
///
/// Ported from `FUN_00f8edc0` at `0x00F8EDC0`.
pub const COPIES_OF_00F8EDC0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00F8EDC0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00F8EDC0",
    copies: &[0x0176A830, 0x01A55F70],
};

/// The 2 further copies of `RECORD_AT_00F8F810`.
///
/// Ported from `FUN_00f8f810` at `0x00F8F810`.
pub const COPIES_OF_00F8F810: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00F8F810,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00F8F810",
    copies: &[0x0108ACC0, 0x014CDDB0],
};

/// The 1 further copy of `RECORD_AT_00F92D00`.
///
/// Ported from `FUN_00f92d00` at `0x00F92D00`.
pub const COPIES_OF_00F92D00: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00F92D00,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00F92D00",
    copies: &[0x00F93E70],
};

/// The 18 further copies of `RECORD_AT_00F98A90`.
///
/// Ported from `FUN_00f98a90` at `0x00F98A90`.
pub const COPIES_OF_00F98A90: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00F98A90,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00F98A90",
    copies: &[
        0x00F9AEA0, 0x00F9D860, 0x00FA1510, 0x00FA7620, 0x00FAC780, 0x00FADE80, 0x00FAF510,
        0x00FB0F40, 0x00FB3DE0, 0x00FBA650, 0x00FBDE60, 0x00FC00E0, 0x00FC1770, 0x00FC25D0,
        0x00FC4750, 0x00FC6FE0, 0x00FC9000, 0x00FCA7D0,
    ],
};

/// The 2 further copies of `RECORD_AT_00F9A8E0`.
///
/// Ported from `FUN_00f9a8e0` at `0x00F9A8E0`.
pub const COPIES_OF_00F9A8E0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00F9A8E0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00F9A8E0",
    copies: &[0x00FA6030, 0x00FABB10],
};

/// The 4 further copies of `RECORD_AT_00F9E800`.
///
/// Ported from `FUN_00f9e800` at `0x00F9E800`.
pub const COPIES_OF_00F9E800: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00F9E800,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00F9E800",
    copies: &[0x00FB1820, 0x00FC2DF0, 0x00FC5540, 0x00FC7D60],
};

/// The 1 further copy of `RECORD_AT_00FA39D0`.
///
/// Ported from `FUN_00fa39d0` at `0x00FA39D0`.
pub const COPIES_OF_00FA39D0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00FA39D0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00FA39D0",
    copies: &[0x00FAA500],
};

/// The 1 further copy of `RECORD_AT_00FA5200`.
///
/// Ported from `FUN_00fa5200` at `0x00FA5200`.
pub const COPIES_OF_00FA5200: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00FA5200,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00FA5200",
    copies: &[0x010A7350],
};

/// The 1 further copy of `RECORD_AT_00FB20A0`.
///
/// Ported from `FUN_00fb20a0` at `0x00FB20A0`.
pub const COPIES_OF_00FB20A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00FB20A0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00FB20A0",
    copies: &[0x01A79DD0],
};

/// The 3 further copies of `RECORD_AT_00FBCB90`.
///
/// Ported from `FUN_00fbcb90` at `0x00FBCB90`.
pub const COPIES_OF_00FBCB90: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00FBCB90,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00FBCB90",
    copies: &[0x00FBCD50, 0x00FBCF10, 0x00FBF0B0],
};

/// The 1 further copy of `RECORD_AT_00FC7FD0`.
///
/// Ported from `FUN_00fc7fd0` at `0x00FC7FD0`.
pub const COPIES_OF_00FC7FD0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00FC7FD0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00FC7FD0",
    copies: &[0x01B34C80],
};

/// The 1 further copy of `RECORD_AT_00FCB910`.
///
/// Ported from `FUN_00fcb910` at `0x00FCB910`.
pub const COPIES_OF_00FCB910: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00FCB910,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00FCB910",
    copies: &[0x00FCBFC0],
};

/// The 3 further copies of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_00fd9340` at `0x00FD9340`.
pub const COPIES_OF_00FD9340: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00FD9340,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x00FF2DE0, 0x01027CA0, 0x0103C7D0],
};

/// The 4 further copies of `RECORD_AT_00FDBC90`.
///
/// Ported from `FUN_00fdbc90` at `0x00FDBC90`.
pub const COPIES_OF_00FDBC90: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00FDBC90,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00FDBC90",
    copies: &[0x00FFB4C0, 0x0102B9A0, 0x0102BB90, 0x0103FCB0],
};

/// The 1 further copy of `RECORD_AT_00FF1180`.
///
/// Ported from `FUN_00ff1180` at `0x00FF1180`.
pub const COPIES_OF_00FF1180: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00FF1180,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00FF1180",
    copies: &[0x01024D10],
};

/// The 78 further copies of `ONE_ARRAY_RECORD`.
///
/// Ported from `FUN_00ff1230` at `0x00FF1230`.
pub const COPIES_OF_00FF1230: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00FF1230,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "ONE_ARRAY_RECORD",
    copies: &[
        0x00FF12C0, 0x00FF1350, 0x00FF13E0, 0x00FF1470, 0x00FF1500, 0x00FF1590, 0x00FF1620,
        0x00FF16B0, 0x00FF1740, 0x00FF17D0, 0x00FF1850, 0x00FF18D0, 0x00FF1950, 0x01024DC0,
        0x01024E50, 0x01024EE0, 0x01024F70, 0x01025000, 0x01025090, 0x01025120, 0x010251B0,
        0x01025240, 0x010252D0, 0x01025360, 0x010253F0, 0x01025480, 0x01025510, 0x010255A0,
        0x01025630, 0x010256C0, 0x01025750, 0x010257D0, 0x01025850, 0x010258D0, 0x01025950,
        0x010259D0, 0x01025A50, 0x01025AD0, 0x01025B50, 0x01025BD0, 0x01037F50, 0x01038080,
        0x01038110, 0x010381A0, 0x01038230, 0x010382C0, 0x01038350, 0x010383E0, 0x01038470,
        0x01038500, 0x01038590, 0x01038620, 0x010386B0, 0x01038740, 0x010387D0, 0x01038860,
        0x010388F0, 0x01038980, 0x01038A10, 0x01038A90, 0x01038B10, 0x01038B90, 0x01038D10,
        0x01038D90, 0x01038E10, 0x01038E90, 0x01049AF0, 0x01049C20, 0x01049CB0, 0x01049D40,
        0x01049DD0, 0x01049E60, 0x01049EF0, 0x01049F80, 0x0104A010, 0x0104A090, 0x0104A110,
        0x0104A190,
    ],
};

/// The 1 further copy of `RECORD_AT_00FFB2D0`.
///
/// Ported from `FUN_00ffb2d0` at `0x00FFB2D0`.
pub const COPIES_OF_00FFB2D0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x00FFB2D0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_00FFB2D0",
    copies: &[0x017CCF90],
};

/// The 2 further copies of `RECORD_AT_010284A0`.
///
/// Ported from `FUN_010284a0` at `0x010284A0`.
pub const COPIES_OF_010284A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x010284A0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_010284A0",
    copies: &[0x01569660, 0x016061C0],
};

/// The 1 further copy of `RECORD_AT_01039330`.
///
/// Ported from `FUN_01039330` at `0x01039330`.
pub const COPIES_OF_01039330: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01039330,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01039330",
    copies: &[0x01B894F0],
};

/// The 1 further copy of `RECORD_AT_010497F0`.
///
/// Ported from `FUN_010497f0` at `0x010497F0`.
pub const COPIES_OF_010497F0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x010497F0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_010497F0",
    copies: &[0x013E8520],
};

/// The 7 further copies of `RECORD_AT_0104E730`.
///
/// Ported from `FUN_0104e730` at `0x0104E730`.
pub const COPIES_OF_0104E730: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0104E730,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0104E730",
    copies: &[
        0x0142A9D0, 0x0160E8D0, 0x01634FA0, 0x01636240, 0x017065D0, 0x01A59340, 0x01CA4B70,
    ],
};

/// The 2 further copies of `RECORD_AT_0104F400`.
///
/// Ported from `FUN_0104f400` at `0x0104F400`.
pub const COPIES_OF_0104F400: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0104F400,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0104F400",
    copies: &[0x01B995C0, 0x01C8E750],
};

/// The 1 further copy of `RECORD_AT_010508A0`.
///
/// Ported from `FUN_010508a0` at `0x010508A0`.
pub const COPIES_OF_010508A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x010508A0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_010508A0",
    copies: &[0x0108FB80],
};

/// The 1 further copy of `RECORD_AT_01051480`.
///
/// Ported from `FUN_01051480` at `0x01051480`.
pub const COPIES_OF_01051480: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01051480,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01051480",
    copies: &[0x01794450],
};

/// The 3 further copies of `RECORD_AT_01053A00`.
///
/// Ported from `FUN_01053a00` at `0x01053A00`.
pub const COPIES_OF_01053A00: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01053A00,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01053A00",
    copies: &[0x01053C10, 0x01984850, 0x01D16310],
};

/// The 2 further copies of `RECORD_AT_010561F0`.
///
/// Ported from `FUN_010561f0` at `0x010561F0`.
pub const COPIES_OF_010561F0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x010561F0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_010561F0",
    copies: &[0x0164AB00, 0x01BBEFD0],
};

/// The 1 further copy of `RECORD_AT_0105A480`.
///
/// Ported from `FUN_0105a480` at `0x0105A480`.
pub const COPIES_OF_0105A480: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0105A480,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0105A480",
    copies: &[0x01CC6A40],
};

/// The 1 further copy of `RECORD_AT_0107A680`.
///
/// Ported from `FUN_0107a680` at `0x0107A680`.
pub const COPIES_OF_0107A680: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0107A680,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0107A680",
    copies: &[0x01477E20],
};

/// The 3 further copies of `RECORD_AT_0107AA40`.
///
/// Ported from `FUN_0107aa40` at `0x0107AA40`.
pub const COPIES_OF_0107AA40: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0107AA40,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0107AA40",
    copies: &[0x015FD1F0, 0x01B22070, 0x01B7FE40],
};

/// The 1 further copy of `RECORD_AT_0107D470`.
///
/// Ported from `FUN_0107d470` at `0x0107D470`.
pub const COPIES_OF_0107D470: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0107D470,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0107D470",
    copies: &[0x0107D6F0],
};

/// The 3 further copies of `RECORD_AT_0107D8C0`.
///
/// Ported from `FUN_0107d8c0` at `0x0107D8C0`.
pub const COPIES_OF_0107D8C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0107D8C0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0107D8C0",
    copies: &[0x0108B670, 0x018BB9D0, 0x01A2BC00],
};

/// The 3 further copies of `RECORD_AT_0107DA80`.
///
/// Ported from `FUN_0107da80` at `0x0107DA80`.
pub const COPIES_OF_0107DA80: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0107DA80,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0107DA80",
    copies: &[0x0107DC60, 0x01A45BC0, 0x01B39AD0],
};

/// The 2 further copies of `RECORD_AT_0107E4F0`.
///
/// Ported from `FUN_0107e4f0` at `0x0107E4F0`.
pub const COPIES_OF_0107E4F0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0107E4F0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0107E4F0",
    copies: &[0x01AB4B40, 0x01AB94D0],
};

/// The 1 further copy of `RECORD_AT_0108CD90`.
///
/// Ported from `FUN_0108cd90` at `0x0108CD90`.
pub const COPIES_OF_0108CD90: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0108CD90,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0108CD90",
    copies: &[0x015B6390],
};

/// The 2 further copies of `RECORD_AT_01090010`.
///
/// Ported from `FUN_01090010` at `0x01090010`.
pub const COPIES_OF_01090010: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01090010,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01090010",
    copies: &[0x0149B540, 0x017F3290],
};

/// The 96 further copies of `ALWAYS_TABLE_PROBE`.
///
/// Ported from `FUN_01092290` at `0x01092290`.
pub const COPIES_OF_01092290: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01092290,
    rust_path: "crates/tiara-core/src/hdl_keyword_probe.rs",
    rust_symbol: "ALWAYS_TABLE_PROBE",
    copies: &[
        0x010922D0, 0x01092310, 0x01092350, 0x01092390, 0x010923D0, 0x01092410, 0x01092450,
        0x01092490, 0x010924D0, 0x01092510, 0x01092550, 0x01092590, 0x010925D0, 0x01092610,
        0x01092650, 0x01092690, 0x010926D0, 0x01092710, 0x01092750, 0x01092790, 0x010927D0,
        0x01092810, 0x01092850, 0x01092890, 0x010928D0, 0x01092910, 0x01092950, 0x01092990,
        0x010929D0, 0x01092A10, 0x01092A50, 0x01092A90, 0x01092AD0, 0x01092B10, 0x01092B50,
        0x01092B90, 0x01092BD0, 0x01092C10, 0x01092C50, 0x01092C90, 0x01092CD0, 0x01092D10,
        0x01092D50, 0x01092D90, 0x01092DD0, 0x01092E10, 0x01092E50, 0x01092E90, 0x01092ED0,
        0x01092F10, 0x01092F50, 0x01092F90, 0x01092FD0, 0x01093010, 0x01093050, 0x01093090,
        0x010930D0, 0x01093110, 0x01093150, 0x01093190, 0x010931D0, 0x01093210, 0x01093250,
        0x01093290, 0x010932D0, 0x01093310, 0x01093350, 0x01093390, 0x010933D0, 0x01093410,
        0x01093450, 0x01093490, 0x010934D0, 0x01093510, 0x01093550, 0x01093590, 0x010935D0,
        0x01093610, 0x01093650, 0x01093690, 0x010936D0, 0x01093710, 0x01093750, 0x01093790,
        0x010937D0, 0x01093810, 0x01093850, 0x01093890, 0x010938D0, 0x01093910, 0x01093950,
        0x01093990, 0x010939D0, 0x01093A10, 0x01093A50, 0x01093A90,
    ],
};

/// The 3 further copies of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_01094d80` at `0x01094D80`.
pub const COPIES_OF_01094D80: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01094D80,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x01099760, 0x0111A8C0, 0x014B2060],
};

/// The 94 further copies of `SECOND_TABLE_PROBE`.
///
/// Ported from `FUN_01096b30` at `0x01096B30`.
pub const COPIES_OF_01096B30: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01096B30,
    rust_path: "crates/tiara-core/src/hdl_keyword_probe.rs",
    rust_symbol: "SECOND_TABLE_PROBE",
    copies: &[
        0x01096B70, 0x01096BB0, 0x01096BF0, 0x01096C30, 0x01096C70, 0x01096CB0, 0x01096CF0,
        0x01096D30, 0x01096D70, 0x01096DB0, 0x01096DF0, 0x01096E30, 0x01096E70, 0x01096EB0,
        0x01096EF0, 0x01096F30, 0x01096F70, 0x01096FB0, 0x01096FF0, 0x01097030, 0x01097070,
        0x010970B0, 0x010970F0, 0x01097130, 0x01097170, 0x010971B0, 0x010971F0, 0x01097230,
        0x01097270, 0x010972B0, 0x010972F0, 0x01097330, 0x01097370, 0x010973B0, 0x010973F0,
        0x01097430, 0x01097470, 0x010974B0, 0x010974F0, 0x01097530, 0x01097570, 0x010975B0,
        0x010975F0, 0x01097630, 0x01097670, 0x010976B0, 0x010976F0, 0x01097730, 0x01097770,
        0x010977B0, 0x010977F0, 0x01097830, 0x01097870, 0x010978B0, 0x010978F0, 0x01097930,
        0x01097970, 0x010979B0, 0x010979F0, 0x01097A30, 0x01097A70, 0x01097AB0, 0x01097AF0,
        0x01097B30, 0x01097B70, 0x01097BB0, 0x01097BF0, 0x01097C30, 0x01097C70, 0x01097CB0,
        0x01097CF0, 0x01097D30, 0x01097D70, 0x01097DB0, 0x01097DF0, 0x01097E30, 0x01097E70,
        0x01097EB0, 0x01097EF0, 0x01097F30, 0x01097F70, 0x01097FB0, 0x01097FF0, 0x01098030,
        0x01098070, 0x010980B0, 0x010980F0, 0x01098130, 0x01098170, 0x010981B0, 0x010981F0,
        0x01098230, 0x01098270, 0x010982B0,
    ],
};

/// The 1 further copy of `RECORD_AT_010AE0B0`.
///
/// Ported from `FUN_010ae0b0` at `0x010AE0B0`.
pub const COPIES_OF_010AE0B0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x010AE0B0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_010AE0B0",
    copies: &[0x013E26C0],
};

/// The 1 further copy of `RECORD_AT_010AE2C0`.
///
/// Ported from `FUN_010ae2c0` at `0x010AE2C0`.
pub const COPIES_OF_010AE2C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x010AE2C0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_010AE2C0",
    copies: &[0x014B9E50],
};

/// The 4 further copies of `RELEASE_010B7560`.
///
/// Ported from `FUN_010b7560` at `0x010B7560`.
pub const COPIES_OF_010B7560: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x010B7560,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_010B7560",
    copies: &[0x01560590, 0x01777E70, 0x019B6830, 0x01B25B90],
};

/// The 2 further copies of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_010b8340` at `0x010B8340`.
pub const COPIES_OF_010B8340: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x010B8340,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x010BAC00, 0x017B8F20],
};

/// The 8 further copies of `RECORD_AT_010B9630`.
///
/// Ported from `FUN_010b9630` at `0x010B9630`.
pub const COPIES_OF_010B9630: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x010B9630,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_010B9630",
    copies: &[
        0x0149EE40, 0x014F1580, 0x01773770, 0x017B99A0, 0x017C1230, 0x017FF420, 0x01887620,
        0x01C98DC0,
    ],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_010bb7d0` at `0x010BB7D0`.
pub const COPIES_OF_010BB7D0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x010BB7D0,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x01CFCA20],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_010bb800` at `0x010BB800`.
pub const COPIES_OF_010BB800: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x010BB800,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x01CFC9F0],
};

/// The 3 further copies of `RECORD_AT_010BC120`.
///
/// Ported from `FUN_010bc120` at `0x010BC120`.
pub const COPIES_OF_010BC120: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x010BC120,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_010BC120",
    copies: &[0x0140C710, 0x014FED20, 0x01771040],
};

/// The 1 further copy of `RECORD_AT_010C1420`.
///
/// Ported from `FUN_010c1420` at `0x010C1420`.
pub const COPIES_OF_010C1420: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x010C1420,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_010C1420",
    copies: &[0x01136F30],
};

/// The 7 further copies of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_010c2660` at `0x010C2660`.
pub const COPIES_OF_010C2660: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x010C2660,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[
        0x010D3B00, 0x013BDBE0, 0x01699010, 0x0169AD30, 0x0169C990, 0x0169E190, 0x016B1EC0,
    ],
};

/// The 2 further copies of `RELEASE_010D6680`.
///
/// Ported from `FUN_010d6680` at `0x010D6680`.
pub const COPIES_OF_010D6680: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x010D6680,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_010D6680",
    copies: &[0x013C4A70, 0x01A55300],
};

/// The 4 further copies of `RECORD_AT_010D95B0`.
///
/// Ported from `FUN_010d95b0` at `0x010D95B0`.
pub const COPIES_OF_010D95B0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x010D95B0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_010D95B0",
    copies: &[0x012B11C0, 0x01B599B0, 0x01B681A0, 0x01D836F0],
};

/// The 2 further copies of `RECORD_AT_010DD480`.
///
/// Ported from `FUN_010dd480` at `0x010DD480`.
pub const COPIES_OF_010DD480: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x010DD480,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_010DD480",
    copies: &[0x012E1150, 0x0155FF70],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_010f05e0` at `0x010F05E0`.
pub const COPIES_OF_010F05E0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x010F05E0,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x01A5DA60],
};

/// The 3 further copies of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_01106e10` at `0x01106E10`.
pub const COPIES_OF_01106E10: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01106E10,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x01107440, 0x011076A0, 0x01107C50],
};

/// The 52 further copies of `THIRD_TABLE_PROBE`.
///
/// Ported from `FUN_01118b30` at `0x01118B30`.
pub const COPIES_OF_01118B30: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01118B30,
    rust_path: "crates/tiara-core/src/hdl_keyword_probe.rs",
    rust_symbol: "THIRD_TABLE_PROBE",
    copies: &[
        0x01118B70, 0x01118BB0, 0x01118BF0, 0x01118C30, 0x01118C70, 0x01118CB0, 0x01118CF0,
        0x01118D30, 0x01118D70, 0x01118DB0, 0x01118DF0, 0x01118E30, 0x01118E70, 0x01118EB0,
        0x01118EF0, 0x01118F30, 0x01118F70, 0x01118FB0, 0x01118FF0, 0x01119030, 0x01119070,
        0x011190B0, 0x011190F0, 0x01119130, 0x01119170, 0x011191B0, 0x011191F0, 0x01119230,
        0x01119270, 0x011192B0, 0x011192F0, 0x01119330, 0x01119370, 0x011193B0, 0x011193F0,
        0x01119430, 0x01119470, 0x011194B0, 0x011194F0, 0x01119530, 0x01119570, 0x011195B0,
        0x011195F0, 0x01119630, 0x01119670, 0x011196B0, 0x011196F0, 0x01119730, 0x01119770,
        0x011197B0, 0x011197F0, 0x01119830,
    ],
};

/// The 15 further copies of `RECORD_AT_0111F310`.
///
/// Ported from `FUN_0111f310` at `0x0111F310`.
pub const COPIES_OF_0111F310: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0111F310,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0111F310",
    copies: &[
        0x013D3920, 0x014312B0, 0x014316A0, 0x01433750, 0x01433F50, 0x014340E0, 0x01434270,
        0x01434660, 0x01434820, 0x01434A30, 0x0147D450, 0x01635B10, 0x019DB860, 0x01A400D0,
        0x01B235E0,
    ],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_0111f370` at `0x0111F370`.
pub const COPIES_OF_0111F370: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0111F370,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x01A9A770],
};

/// The 2 further copies of `RECORD_AT_01126730`.
///
/// Ported from `FUN_01126730` at `0x01126730`.
pub const COPIES_OF_01126730: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01126730,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01126730",
    copies: &[0x013F0C90, 0x013F5550],
};

/// The 1 further copy of `RECORD_AT_01127AC0`.
///
/// Ported from `FUN_01127ac0` at `0x01127AC0`.
pub const COPIES_OF_01127AC0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01127AC0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01127AC0",
    copies: &[0x01A2CD20],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_0112a4e0` at `0x0112A4E0`.
pub const COPIES_OF_0112A4E0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0112A4E0,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x0112A5A0],
};

/// The 1 further copy of `RECORD_AT_01130D50`.
///
/// Ported from `FUN_01130d50` at `0x01130D50`.
pub const COPIES_OF_01130D50: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01130D50,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01130D50",
    copies: &[0x01D14E70],
};

/// The 1 further copy of `RECORD_AT_0113B810`.
///
/// Ported from `FUN_0113b810` at `0x0113B810`.
pub const COPIES_OF_0113B810: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0113B810,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0113B810",
    copies: &[0x0113BD50],
};

/// The 2 further copies of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_0113e8e0` at `0x0113E8E0`.
pub const COPIES_OF_0113E8E0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0113E8E0,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x0161AC30, 0x0173CEF0],
};

/// The 1 further copy of `RELEASE_01142BD0`.
///
/// Ported from `FUN_01142bd0` at `0x01142BD0`.
pub const COPIES_OF_01142BD0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01142BD0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_01142BD0",
    copies: &[0x01626B40],
};

/// The 5 further copies of `RECORD_AT_01144B60`.
///
/// Ported from `FUN_01144b60` at `0x01144B60`.
pub const COPIES_OF_01144B60: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01144B60,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01144B60",
    copies: &[0x01144C10, 0x01144FE0, 0x011464B0, 0x01146550, 0x01B15010],
};

/// The 3 further copies of `RECORD_AT_01155EB0`.
///
/// Ported from `FUN_01155eb0` at `0x01155EB0`.
pub const COPIES_OF_01155EB0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01155EB0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01155EB0",
    copies: &[0x01156690, 0x012D1C40, 0x0130D8D0],
};

/// The 1 further copy of `RECORD_AT_011564F0`.
///
/// Ported from `FUN_011564f0` at `0x011564F0`.
pub const COPIES_OF_011564F0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x011564F0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_011564F0",
    copies: &[0x015FC770],
};

/// The 2 further copies of `RECORD_AT_01168A70`.
///
/// Ported from `FUN_01168a70` at `0x01168A70`.
pub const COPIES_OF_01168A70: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01168A70,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01168A70",
    copies: &[0x0116A600, 0x0116AE40],
};

/// The 2 further copies of `RECORD_AT_01176240`.
///
/// Ported from `FUN_01176240` at `0x01176240`.
pub const COPIES_OF_01176240: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01176240,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01176240",
    copies: &[0x01176660, 0x01229440],
};

/// The 1 further copy of `RECORD_AT_01186E10`.
///
/// Ported from `FUN_01186e10` at `0x01186E10`.
pub const COPIES_OF_01186E10: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01186E10,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01186E10",
    copies: &[0x01C33B50],
};

/// The 1 further copy of `RECORD_AT_01220F40`.
///
/// Ported from `FUN_01220f40` at `0x01220F40`.
pub const COPIES_OF_01220F40: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01220F40,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01220F40",
    copies: &[0x01221230],
};

/// The 1 further copy of `RECORD_AT_0122D450`.
///
/// Ported from `FUN_0122d450` at `0x0122D450`.
pub const COPIES_OF_0122D450: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0122D450,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0122D450",
    copies: &[0x01BA7B70],
};

/// The 1 further copy of `RECORD_AT_0122F650`.
///
/// Ported from `FUN_0122f650` at `0x0122F650`.
pub const COPIES_OF_0122F650: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0122F650,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0122F650",
    copies: &[0x01B362A0],
};

/// The 1 further copy of `RECORD_AT_01233E60`.
///
/// Ported from `FUN_01233e60` at `0x01233E60`.
pub const COPIES_OF_01233E60: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01233E60,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01233E60",
    copies: &[0x0150F9E0],
};

/// The 2 further copies of `RECORD_AT_0123F4B0`.
///
/// Ported from `FUN_0123f4b0` at `0x0123F4B0`.
pub const COPIES_OF_0123F4B0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0123F4B0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0123F4B0",
    copies: &[0x019CE7E0, 0x01B8C790],
};

/// The 1 further copy of `RELEASE_01242D00`.
///
/// Ported from `FUN_01242d00` at `0x01242D00`.
pub const COPIES_OF_01242D00: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01242D00,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_01242D00",
    copies: &[0x01B22F90],
};

/// The 1 further copy of `RECORD_AT_01276C70`.
///
/// Ported from `FUN_01276c70` at `0x01276C70`.
pub const COPIES_OF_01276C70: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01276C70,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01276C70",
    copies: &[0x01276D40],
};

/// The 1 further copy of `RECORD_AT_01296AA0`.
///
/// Ported from `FUN_01296aa0` at `0x01296AA0`.
pub const COPIES_OF_01296AA0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01296AA0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01296AA0",
    copies: &[0x01298D60],
};

/// The 2 further copies of `RECORD_AT_0129C400`.
///
/// Ported from `FUN_0129c400` at `0x0129C400`.
pub const COPIES_OF_0129C400: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0129C400,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0129C400",
    copies: &[0x0129C4A0, 0x019B1170],
};

/// The 1 further copy of `RECORD_AT_0129DA60`.
///
/// Ported from `FUN_0129da60` at `0x0129DA60`.
pub const COPIES_OF_0129DA60: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0129DA60,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0129DA60",
    copies: &[0x0129DE70],
};

/// The 9 further copies of `RECORD_AT_0129DB50`.
///
/// Ported from `FUN_0129db50` at `0x0129DB50`.
pub const COPIES_OF_0129DB50: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0129DB50,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0129DB50",
    copies: &[
        0x01338910, 0x014386B0, 0x0149CB70, 0x014A4550, 0x014F16D0, 0x015362F0, 0x01569C60,
        0x0156F980, 0x01C905D0,
    ],
};

/// The 1 further copy of `RELEASE_0129ED00`.
///
/// Ported from `FUN_0129ed00` at `0x0129ED00`.
pub const COPIES_OF_0129ED00: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0129ED00,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_0129ED00",
    copies: &[0x0129ED30],
};

/// The 3 further copies of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_012b0110` at `0x012B0110`.
pub const COPIES_OF_012B0110: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x012B0110,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x01B58D10, 0x01B675C0, 0x01D82960],
};

/// The 1 further copy of `RELEASE_012BB020`.
///
/// Ported from `FUN_012bb020` at `0x012BB020`.
pub const COPIES_OF_012BB020: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x012BB020,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_012BB020",
    copies: &[0x01A36750],
};

/// The 1 further copy of `RECORD_AT_012C7E40`.
///
/// Ported from `FUN_012c7e40` at `0x012C7E40`.
pub const COPIES_OF_012C7E40: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x012C7E40,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_012C7E40",
    copies: &[0x01BB2CD0],
};

/// The 1 further copy of `RECORD_AT_012CB4E0`.
///
/// Ported from `FUN_012cb4e0` at `0x012CB4E0`.
pub const COPIES_OF_012CB4E0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x012CB4E0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_012CB4E0",
    copies: &[0x01301B90],
};

/// The 2 further copies of `RECORD_AT_012CB830`.
///
/// Ported from `FUN_012cb830` at `0x012CB830`.
pub const COPIES_OF_012CB830: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x012CB830,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_012CB830",
    copies: &[0x01301F40, 0x016B0900],
};

/// The 1 further copy of `add_task`.
///
/// Ported from `FUN_012cc640` at `0x012CC640`.
pub const COPIES_OF_012CC640: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x012CC640,
    rust_path: "crates/tiara-core/src/task_progress_list.rs",
    rust_symbol: "add_task",
    copies: &[0x012B3C00],
};

/// The 1 further copy of `RECORD_AT_012CEB80`.
///
/// Ported from `FUN_012ceb80` at `0x012CEB80`.
pub const COPIES_OF_012CEB80: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x012CEB80,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_012CEB80",
    copies: &[0x01309050],
};

/// The 1 further copy of `RECORD_AT_012D01C0`.
///
/// Ported from `FUN_012d01c0` at `0x012D01C0`.
pub const COPIES_OF_012D01C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x012D01C0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_012D01C0",
    copies: &[0x0130A740],
};

/// The 5 further copies of `RECORD_AT_012D0D30`.
///
/// Ported from `FUN_012d0d30` at `0x012D0D30`.
pub const COPIES_OF_012D0D30: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x012D0D30,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_012D0D30",
    copies: &[0x013B1F00, 0x017E47D0, 0x0198DA10, 0x019904A0, 0x01B81780],
};

/// The 3 further copies of `RECORD_AT_012D20D0`.
///
/// Ported from `FUN_012d20d0` at `0x012D20D0`.
pub const COPIES_OF_012D20D0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x012D20D0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_012D20D0",
    copies: &[0x012D2370, 0x0130E120, 0x0130E3C0],
};

/// The 1 further copy of `ResultExport`.
///
/// Ported from `FUN_012d2130` at `0x012D2130`.
pub const COPIES_OF_012D2130: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x012D2130,
    rust_path: "crates/tiara-core/src/test_bench.rs",
    rust_symbol: "ResultExport",
    copies: &[0x0130E180],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_012d23d0` at `0x012D23D0`.
pub const COPIES_OF_012D23D0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x012D23D0,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x0130E420],
};

/// The 1 further copy of `RELEASE_012D67B0`.
///
/// Ported from `FUN_012d67b0` at `0x012D67B0`.
pub const COPIES_OF_012D67B0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x012D67B0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_012D67B0",
    copies: &[0x01314DC0],
};

/// The 2 further copies of `RELEASE_012D67E0`.
///
/// Ported from `FUN_012d67e0` at `0x012D67E0`.
pub const COPIES_OF_012D67E0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x012D67E0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_012D67E0",
    copies: &[0x01482F60, 0x015EA7B0],
};

/// The 1 further copy of `WorkerAssignment`.
///
/// Ported from `FUN_012db0a0` at `0x012DB0A0`.
pub const COPIES_OF_012DB0A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x012DB0A0,
    rust_path: "crates/tiara-core/src/bench_worker.rs",
    rust_symbol: "WorkerAssignment",
    copies: &[0x0131C840],
};

/// The 2 further copies of `set_text`.
///
/// Ported from `FUN_012dcb00` at `0x012DCB00`.
pub const COPIES_OF_012DCB00: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x012DCB00,
    rust_path: "crates/tiara-core/src/named_record.rs",
    rust_symbol: "set_text",
    copies: &[0x0156F6D0, 0x01BBAD00],
};

/// The 1 further copy of `set_text`.
///
/// Ported from `FUN_012dcb80` at `0x012DCB80`.
pub const COPIES_OF_012DCB80: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x012DCB80,
    rust_path: "crates/tiara-core/src/named_record.rs",
    rust_symbol: "set_text",
    copies: &[0x00DE5510],
};

/// The 1 further copy of `set_text`.
///
/// Ported from `FUN_012dcc00` at `0x012DCC00`.
pub const COPIES_OF_012DCC00: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x012DCC00,
    rust_path: "crates/tiara-core/src/named_record.rs",
    rust_symbol: "set_text",
    copies: &[0x01BA3160],
};

/// The 1 further copy of `set_text`.
///
/// Ported from `FUN_012dcd00` at `0x012DCD00`.
pub const COPIES_OF_012DCD00: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x012DCD00,
    rust_path: "crates/tiara-core/src/named_record.rs",
    rust_symbol: "set_text",
    copies: &[0x0149EEE0],
};

/// The 2 further copies of `RECORD_AT_012E8D10`.
///
/// Ported from `FUN_012e8d10` at `0x012E8D10`.
pub const COPIES_OF_012E8D10: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x012E8D10,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_012E8D10",
    copies: &[0x0140A550, 0x017C2320],
};

/// The 2 further copies of `centred_message_left`.
///
/// Ported from `FUN_012e9e60` at `0x012E9E60`.
pub const COPIES_OF_012E9E60: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x012E9E60,
    rust_path: "crates/tiara-core/src/message_dialog.rs",
    rust_symbol: "centred_message_left",
    copies: &[0x01054C00, 0x01A2DB80],
};

/// The 1 further copy of `EIGHT_TEXT_RECORD`.
///
/// Ported from `FUN_012f31f0` at `0x012F31F0`.
pub const COPIES_OF_012F31F0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x012F31F0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "EIGHT_TEXT_RECORD",
    copies: &[0x012C43C0],
};

/// The 1 further copy of `RECORD_AT_012F81A0`.
///
/// Ported from `FUN_012f81a0` at `0x012F81A0`.
pub const COPIES_OF_012F81A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x012F81A0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_012F81A0",
    copies: &[0x012F8A20],
};

/// The 1 further copy of `RELEASE_012F9590`.
///
/// Ported from `FUN_012f9590` at `0x012F9590`.
pub const COPIES_OF_012F9590: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x012F9590,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_012F9590",
    copies: &[0x0195CC40],
};

/// The 1 further copy of `RECORD_AT_012FB340`.
///
/// Ported from `FUN_012fb340` at `0x012FB340`.
pub const COPIES_OF_012FB340: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x012FB340,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_012FB340",
    copies: &[0x012C7990],
};

/// The 1 further copy of `recovered_metadata`.
///
/// Ported from `FUN_0130d680` at `0x0130D680`.
pub const COPIES_OF_0130D680: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0130D680,
    rust_path: "crates/tiara-core/src/analysis_result_file.rs",
    rust_symbol: "recovered_metadata",
    copies: &[0x012D19F0],
};

/// The 1 further copy of `RECORD_AT_0130E850`.
///
/// Ported from `FUN_0130e850` at `0x0130E850`.
pub const COPIES_OF_0130E850: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0130E850,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0130E850",
    copies: &[0x01CC6B40],
};

/// The 4 further copies of `RECORD_AT_0131D440`.
///
/// Ported from `FUN_0131d440` at `0x0131D440`.
pub const COPIES_OF_0131D440: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0131D440,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0131D440",
    copies: &[0x0131FBC0, 0x0133FEA0, 0x01390500, 0x01C65910],
};

/// The 1 further copy of `RECORD_AT_0131D960`.
///
/// Ported from `FUN_0131d960` at `0x0131D960`.
pub const COPIES_OF_0131D960: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0131D960,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0131D960",
    copies: &[0x01C65E30],
};

/// The 2 further copies of `RECORD_AT_0131DD70`.
///
/// Ported from `FUN_0131dd70` at `0x0131DD70`.
pub const COPIES_OF_0131DD70: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0131DD70,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0131DD70",
    copies: &[0x0133D6A0, 0x0138E030],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_0131ddb0` at `0x0131DDB0`.
pub const COPIES_OF_0131DDB0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0131DDB0,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x0138E070],
};

/// The 1 further copy of `RECORD_AT_0131F7C0`.
///
/// Ported from `FUN_0131f7c0` at `0x0131F7C0`.
pub const COPIES_OF_0131F7C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0131F7C0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0131F7C0",
    copies: &[0x0138FCE0],
};

/// The 1 further copy of `RECORD_AT_01320B20`.
///
/// Ported from `FUN_01320b20` at `0x01320B20`.
pub const COPIES_OF_01320B20: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01320B20,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01320B20",
    copies: &[0x01391110],
};

/// The 3 further copies of `RECORD_AT_01330FF0`.
///
/// Ported from `FUN_01330ff0` at `0x01330FF0`.
pub const COPIES_OF_01330FF0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01330FF0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01330FF0",
    copies: &[0x015AF500, 0x015AFE00, 0x015AFF20],
};

/// The 1 further copy of `RECORD_AT_0133DD60`.
///
/// Ported from `FUN_0133dd60` at `0x0133DD60`.
pub const COPIES_OF_0133DD60: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0133DD60,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0133DD60",
    copies: &[0x018B9C10],
};

/// The 1 further copy of `RECORD_AT_013491C0`.
///
/// Ported from `FUN_013491c0` at `0x013491C0`.
pub const COPIES_OF_013491C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x013491C0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_013491C0",
    copies: &[0x01770AD0],
};

/// The 1 further copy of `RECORD_AT_01350F60`.
///
/// Ported from `FUN_01350f60` at `0x01350F60`.
pub const COPIES_OF_01350F60: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01350F60,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01350F60",
    copies: &[0x01351060],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_0135bae0` at `0x0135BAE0`.
pub const COPIES_OF_0135BAE0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0135BAE0,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x014747D0],
};

/// The 1 further copy of `RECORD_AT_01367090`.
///
/// Ported from `FUN_01367090` at `0x01367090`.
pub const COPIES_OF_01367090: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01367090,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01367090",
    copies: &[0x017FE620],
};

/// The 1 further copy of `RECORD_AT_013A3F40`.
///
/// Ported from `FUN_013a3f40` at `0x013A3F40`.
pub const COPIES_OF_013A3F40: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x013A3F40,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_013A3F40",
    copies: &[0x017767E0],
};

/// The 5 further copies of `RELEASE_013A5FF0`.
///
/// Ported from `FUN_013a5ff0` at `0x013A5FF0`.
pub const COPIES_OF_013A5FF0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x013A5FF0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_013A5FF0",
    copies: &[0x013B6BC0, 0x0156CE70, 0x016061A0, 0x0160E390, 0x017767C0],
};

/// The 2 further copies of `RECORD_AT_013A61D0`.
///
/// Ported from `FUN_013a61d0` at `0x013A61D0`.
pub const COPIES_OF_013A61D0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x013A61D0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_013A61D0",
    copies: &[0x0161B3E0, 0x01BBBCA0],
};

/// The 1 further copy of `RECORD_AT_013A67C0`.
///
/// Ported from `FUN_013a67c0` at `0x013A67C0`.
pub const COPIES_OF_013A67C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x013A67C0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_013A67C0",
    copies: &[0x01776630],
};

/// The 1 further copy of `RELEASE_013A83E0`.
///
/// Ported from `FUN_013a83e0` at `0x013A83E0`.
pub const COPIES_OF_013A83E0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x013A83E0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_013A83E0",
    copies: &[0x019DC750],
};

/// The 1 further copy of `RECORD_AT_013ACB30`.
///
/// Ported from `FUN_013acb30` at `0x013ACB30`.
pub const COPIES_OF_013ACB30: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x013ACB30,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_013ACB30",
    copies: &[0x0179BD50],
};

/// The 2 further copies of `RECORD_AT_013B5CB0`.
///
/// Ported from `FUN_013b5cb0` at `0x013B5CB0`.
pub const COPIES_OF_013B5CB0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x013B5CB0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_013B5CB0",
    copies: &[0x0147E390, 0x01572420],
};

/// The 3 further copies of `RECORD_AT_013B63E0`.
///
/// Ported from `FUN_013b63e0` at `0x013B63E0`.
pub const COPIES_OF_013B63E0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x013B63E0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_013B63E0",
    copies: &[0x013B7330, 0x01408850, 0x0153D390],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_013b6ce0` at `0x013B6CE0`.
pub const COPIES_OF_013B6CE0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x013B6CE0,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x0153CA40],
};

/// The 1 further copy of `RECORD_AT_013C1220`.
///
/// Ported from `FUN_013c1220` at `0x013C1220`.
pub const COPIES_OF_013C1220: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x013C1220,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_013C1220",
    copies: &[0x015753E0],
};

/// The 1 further copy of `RECORD_AT_013C6F50`.
///
/// Ported from `FUN_013c6f50` at `0x013C6F50`.
pub const COPIES_OF_013C6F50: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x013C6F50,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_013C6F50",
    copies: &[0x018ACF20],
};

/// The 1 further copy of `RECORD_AT_013CD010`.
///
/// Ported from `FUN_013cd010` at `0x013CD010`.
pub const COPIES_OF_013CD010: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x013CD010,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_013CD010",
    copies: &[0x019B8400],
};

/// The 1 further copy of `RECORD_AT_013D4540`.
///
/// Ported from `FUN_013d4540` at `0x013D4540`.
pub const COPIES_OF_013D4540: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x013D4540,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_013D4540",
    copies: &[0x013E2480],
};

/// The 1 further copy of `RECORD_AT_013D4AD0`.
///
/// Ported from `FUN_013d4ad0` at `0x013D4AD0`.
pub const COPIES_OF_013D4AD0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x013D4AD0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_013D4AD0",
    copies: &[0x013D8CB0],
};

/// The 1 further copy of `RECORD_AT_013DE370`.
///
/// Ported from `FUN_013de370` at `0x013DE370`.
pub const COPIES_OF_013DE370: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x013DE370,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_013DE370",
    copies: &[0x013DEA00],
};

/// The 1 further copy of `RECORD_AT_013E09C0`.
///
/// Ported from `FUN_013e09c0` at `0x013E09C0`.
pub const COPIES_OF_013E09C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x013E09C0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_013E09C0",
    copies: &[0x013E0E40],
};

/// The 1 further copy of `RELEASE_013E1770`.
///
/// Ported from `FUN_013e1770` at `0x013E1770`.
pub const COPIES_OF_013E1770: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x013E1770,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_013E1770",
    copies: &[0x013E1790],
};

/// The 2 further copies of `RECORD_AT_013E8700`.
///
/// Ported from `FUN_013e8700` at `0x013E8700`.
pub const COPIES_OF_013E8700: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x013E8700,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_013E8700",
    copies: &[0x013F89A0, 0x01407880],
};

/// The 1 further copy of `RECORD_AT_013E8AB0`.
///
/// Ported from `FUN_013e8ab0` at `0x013E8AB0`.
pub const COPIES_OF_013E8AB0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x013E8AB0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_013E8AB0",
    copies: &[0x01407D60],
};

/// The 1 further copy of `RECORD_AT_013E8C90`.
///
/// Ported from `FUN_013e8c90` at `0x013E8C90`.
pub const COPIES_OF_013E8C90: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x013E8C90,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_013E8C90",
    copies: &[0x013F8EE0],
};

/// The 1 further copy of `RECORD_AT_013EFAB0`.
///
/// Ported from `FUN_013efab0` at `0x013EFAB0`.
pub const COPIES_OF_013EFAB0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x013EFAB0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_013EFAB0",
    copies: &[0x01D01310],
};

/// The 1 further copy of the port.
///
/// Ported from `FUN_013f0440` at `0x013F0440`.
pub const COPIES_OF_013F0440: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x013F0440,
    rust_path: "crates/tiara-ui/src/catalog_editor/mod.rs",
    rust_symbol: "",
    copies: &[0x013F47E0],
};

/// The 2 further copies of `RECORD_AT_013F8180`.
///
/// Ported from `FUN_013f8180` at `0x013F8180`.
pub const COPIES_OF_013F8180: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x013F8180,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_013F8180",
    copies: &[0x014075D0, 0x015115B0],
};

/// The 1 further copy of `RELEASE_013FE420`.
///
/// Ported from `FUN_013fe420` at `0x013FE420`.
pub const COPIES_OF_013FE420: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x013FE420,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_013FE420",
    copies: &[0x01694020],
};

/// The 22 further copies of the port.
///
/// Ported from `FUN_01400430` at `0x01400430`.
pub const COPIES_OF_01400430: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01400430,
    rust_path: "crates/tiara-core/src/controlled_source_editor.rs",
    rust_symbol: "",
    copies: &[
        0x00C8F600, 0x00F78A10, 0x01064100, 0x0107B5B0, 0x0108BE90, 0x010AEF10, 0x012C54F0,
        0x012C5F80, 0x012C6440, 0x012C6900, 0x012F6BF0, 0x012F8750, 0x0136B850, 0x0136BD90,
        0x0161C930, 0x0172DF00, 0x017F16A0, 0x0183B9A0, 0x01970EC0, 0x0197ADC0, 0x01C70920,
        0x01D43DA0,
    ],
};

/// The 1 further copy of the port.
///
/// Ported from `FUN_01400ae0` at `0x01400AE0`.
pub const COPIES_OF_01400AE0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01400AE0,
    rust_path: "crates/tiara-core/src/controlled_source_editor.rs",
    rust_symbol: "",
    copies: &[0x019FE9C0],
};

/// The 1 further copy of the port.
///
/// Ported from `FUN_01400b40` at `0x01400B40`.
pub const COPIES_OF_01400B40: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01400B40,
    rust_path: "crates/tiara-core/src/controlled_source_editor.rs",
    rust_symbol: "",
    copies: &[0x019FEA20],
};

/// The 75 further copies of the port.
///
/// Ported from `FUN_01401db0` at `0x01401DB0`.
pub const COPIES_OF_01401DB0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01401DB0,
    rust_path: "crates/tiara-core/src/controlled_source_editor.rs",
    rust_symbol: "",
    copies: &[
        0x004CDCF0, 0x005F1350, 0x0072BC00, 0x007DC950, 0x008079E0, 0x0080D720, 0x008AC2B0,
        0x00ACEF60, 0x00AEF780, 0x00B12320, 0x00BC0D70, 0x00BC0F00, 0x00BE7F90, 0x00C404F0,
        0x00C87400, 0x00C87520, 0x00DDFF70, 0x00E0AB60, 0x00E14000, 0x00EBC4C0, 0x00EBC970,
        0x00EBCA80, 0x00F1E060, 0x00F610F0, 0x00F7F500, 0x00F7F5D0, 0x01056330, 0x01086C60,
        0x010A5200, 0x010A55B0, 0x010AFA50, 0x010AFB10, 0x010B1900, 0x010B1B20, 0x010B21A0,
        0x010C0720, 0x010CA010, 0x010CA240, 0x010CA6C0, 0x01143110, 0x0139F940, 0x0139FA80,
        0x013A4650, 0x014A0FD0, 0x014CEA30, 0x014EEFC0, 0x0151F0E0, 0x0153BF10, 0x0154C870,
        0x0155C790, 0x016054F0, 0x01627460, 0x01629550, 0x0164A060, 0x01773C10, 0x0179A460,
        0x017BD9A0, 0x01816680, 0x018167D0, 0x0194EF40, 0x0197EC10, 0x0197EFD0, 0x019A43B0,
        0x019AD630, 0x019B9020, 0x01A24AB0, 0x01AED1C0, 0x01B0E3C0, 0x01BB3C90, 0x01BB6170,
        0x01BB6A60, 0x01C3F700, 0x01C8F110, 0x01C907B0, 0x01D44350,
    ],
};

/// The 25 further copies of the port.
///
/// Ported from `FUN_014020a0` at `0x014020A0`.
pub const COPIES_OF_014020A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x014020A0,
    rust_path: "crates/tiara-ui/src/controlled_source_editor/mod.rs",
    rust_symbol: "",
    copies: &[
        0x005D0450, 0x00A67E00, 0x00AE74B0, 0x00AE79C0, 0x00CE39C0, 0x010A6490, 0x012284E0,
        0x0150F1B0, 0x0150F310, 0x015DACD0, 0x015DBE30, 0x015EB210, 0x016437A0, 0x017F0ED0,
        0x01812770, 0x019DA310, 0x019DA430, 0x01A47C10, 0x01A51620, 0x01A54A50, 0x01A5BC80,
        0x01B35C00, 0x01B35CF0, 0x01B38960, 0x01C93700,
    ],
};

/// The 9 further copies of the port.
///
/// Ported from `FUN_014021a0` at `0x014021A0`.
pub const COPIES_OF_014021A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x014021A0,
    rust_path: "crates/tiara-ui/src/controlled_source_editor/mod.rs",
    rust_symbol: "",
    copies: &[
        0x0045DC00, 0x012C4930, 0x012F36F0, 0x014EC1B0, 0x01B92410, 0x01C072B0, 0x01C3BE80,
        0x01C70500, 0x01C998F0,
    ],
};

/// The 1 further copy of the port.
///
/// Ported from `FUN_01402df0` at `0x01402DF0`.
pub const COPIES_OF_01402DF0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01402DF0,
    rust_path: "crates/tiara-ui/src/controlled_source_editor/mod.rs",
    rust_symbol: "",
    copies: &[0x01234420],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_01408a70` at `0x01408A70`.
pub const COPIES_OF_01408A70: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01408A70,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x0140E6C0],
};

/// The 1 further copy of the port.
///
/// Ported from `FUN_01409fe0` at `0x01409FE0`.
pub const COPIES_OF_01409FE0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01409FE0,
    rust_path: "crates/tiara-ui/src/memory_editor/mod.rs",
    rust_symbol: "",
    copies: &[0x012B3ED0],
};

/// The 1 further copy of `RECORD_AT_0140E610`.
///
/// Ported from `FUN_0140e610` at `0x0140E610`.
pub const COPIES_OF_0140E610: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0140E610,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0140E610",
    copies: &[0x01411050],
};

/// The 1 further copy of `RECORD_AT_0140F020`.
///
/// Ported from `FUN_0140f020` at `0x0140F020`.
pub const COPIES_OF_0140F020: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0140F020,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0140F020",
    copies: &[0x01411770],
};

/// The 1 further copy of `RECORD_AT_014130A0`.
///
/// Ported from `FUN_014130a0` at `0x014130A0`.
pub const COPIES_OF_014130A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x014130A0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_014130A0",
    copies: &[0x015E71A0],
};

/// The 2 further copies of the port.
///
/// Ported from `FUN_0141be20` at `0x0141BE20`.
pub const COPIES_OF_0141BE20: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0141BE20,
    rust_path: "crates/tiara-ui/src/schematic_macro_parameter_editor/mod.rs",
    rust_symbol: "",
    copies: &[0x00EB93E0, 0x00EC94D0],
};

/// The 13 further copies of `RECORD_AT_01426550`.
///
/// Ported from `FUN_01426550` at `0x01426550`.
pub const COPIES_OF_01426550: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01426550,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01426550",
    copies: &[
        0x01426680, 0x014268D0, 0x01426A00, 0x01426CB0, 0x01426DE0, 0x014270D0, 0x01427210,
        0x01427340, 0x01427480, 0x014275D0, 0x01427730, 0x014278A0, 0x01427A20,
    ],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_0142a110` at `0x0142A110`.
pub const COPIES_OF_0142A110: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0142A110,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x01BC17A0],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_0142aad0` at `0x0142AAD0`.
pub const COPIES_OF_0142AAD0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0142AAD0,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x01978860],
};

/// The 2 further copies of `RECORD_AT_0143BB90`.
///
/// Ported from `FUN_0143bb90` at `0x0143BB90`.
pub const COPIES_OF_0143BB90: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0143BB90,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0143BB90",
    copies: &[0x0143C150, 0x01544DF0],
};

/// The 2 further copies of `RELEASE_0143FF00`.
///
/// Ported from `FUN_0143ff00` at `0x0143FF00`.
pub const COPIES_OF_0143FF00: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0143FF00,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_0143FF00",
    copies: &[0x0161E450, 0x0161E8E0],
};

/// The 1 further copy of the port.
///
/// Ported from `FUN_01464e20` at `0x01464E20`.
pub const COPIES_OF_01464E20: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01464E20,
    rust_path: "crates/tiara-ui/src/equation_editor/mod.rs",
    rust_symbol: "",
    copies: &[0x014B5980],
};

/// The 10 further copies of `RECORD_AT_014699E0`.
///
/// Ported from `FUN_014699e0` at `0x014699E0`.
pub const COPIES_OF_014699E0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x014699E0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_014699E0",
    copies: &[
        0x01469F50, 0x0146A100, 0x0146A860, 0x0146B930, 0x0146BB90, 0x0146BD20, 0x0146BF40,
        0x0146C160, 0x0146C970, 0x0160DF90,
    ],
};

/// The 2 further copies of `RECORD_AT_0146FCA0`.
///
/// Ported from `FUN_0146fca0` at `0x0146FCA0`.
pub const COPIES_OF_0146FCA0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0146FCA0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0146FCA0",
    copies: &[0x0149BBA0, 0x01A329C0],
};

/// The 1 further copy of `RECORD_AT_01477680`.
///
/// Ported from `FUN_01477680` at `0x01477680`.
pub const COPIES_OF_01477680: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01477680,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01477680",
    copies: &[0x01BAAC00],
};

/// The 2 further copies of `RECORD_AT_01477F60`.
///
/// Ported from `FUN_01477f60` at `0x01477F60`.
pub const COPIES_OF_01477F60: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01477F60,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01477F60",
    copies: &[0x01479A50, 0x019F3560],
};

/// The 1 further copy of `RECORD_AT_01479540`.
///
/// Ported from `FUN_01479540` at `0x01479540`.
pub const COPIES_OF_01479540: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01479540,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01479540",
    copies: &[0x015FED80],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_0147b530` at `0x0147B530`.
pub const COPIES_OF_0147B530: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0147B530,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x0172A8D0],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_0147b630` at `0x0147B630`.
pub const COPIES_OF_0147B630: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0147B630,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x01629420],
};

/// The 2 further copies of `RECORD_AT_014864E0`.
///
/// Ported from `FUN_014864e0` at `0x014864E0`.
pub const COPIES_OF_014864E0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x014864E0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_014864E0",
    copies: &[0x01487270, 0x01487400],
};

/// The 3 further copies of `RECORD_AT_01486680`.
///
/// Ported from `FUN_01486680` at `0x01486680`.
pub const COPIES_OF_01486680: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01486680,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01486680",
    copies: &[0x01489900, 0x014899B0, 0x01489D80],
};

/// The 4 further copies of `RECORD_AT_01488530`.
///
/// Ported from `FUN_01488530` at `0x01488530`.
pub const COPIES_OF_01488530: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01488530,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01488530",
    copies: &[0x01488640, 0x01488750, 0x01488850, 0x01488960],
};

/// The 2 further copies of `RECORD_AT_01489820`.
///
/// Ported from `FUN_01489820` at `0x01489820`.
pub const COPIES_OF_01489820: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01489820,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01489820",
    copies: &[0x0148B230, 0x0148B2C0],
};

/// The 1 further copy of `RECORD_AT_01499A50`.
///
/// Ported from `FUN_01499a50` at `0x01499A50`.
pub const COPIES_OF_01499A50: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01499A50,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01499A50",
    copies: &[0x01499C90],
};

/// The 3 further copies of `RECORD_AT_014A24F0`.
///
/// Ported from `FUN_014a24f0` at `0x014A24F0`.
pub const COPIES_OF_014A24F0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x014A24F0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_014A24F0",
    copies: &[0x014A2D50, 0x014A4790, 0x014A48A0],
};

/// The 1 further copy of `RECORD_AT_014A2EF0`.
///
/// Ported from `FUN_014a2ef0` at `0x014A2EF0`.
pub const COPIES_OF_014A2EF0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x014A2EF0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_014A2EF0",
    copies: &[0x014A49E0],
};

/// The 1 further copy of `RECORD_AT_014A30E0`.
///
/// Ported from `FUN_014a30e0` at `0x014A30E0`.
pub const COPIES_OF_014A30E0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x014A30E0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_014A30E0",
    copies: &[0x014A4340],
};

/// The 28 further copies of `FOURTH_TABLE_PROBE`.
///
/// Ported from `FUN_014b07e0` at `0x014B07E0`.
pub const COPIES_OF_014B07E0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x014B07E0,
    rust_path: "crates/tiara-core/src/hdl_keyword_probe.rs",
    rust_symbol: "FOURTH_TABLE_PROBE",
    copies: &[
        0x014B0820, 0x014B0860, 0x014B08A0, 0x014B08E0, 0x014B0920, 0x014B0960, 0x014B09A0,
        0x014B09E0, 0x014B0A20, 0x014B0A60, 0x014B0AA0, 0x014B0AE0, 0x014B0B20, 0x014B0B60,
        0x014B0BA0, 0x014B0BE0, 0x014B0C20, 0x014B0C60, 0x014B0CA0, 0x014B0CE0, 0x014B0D20,
        0x014B0D60, 0x014B0DA0, 0x014B0DE0, 0x014B0E20, 0x014B0E60, 0x014B0EA0, 0x014B0EE0,
    ],
};

/// The 2 further copies of `RECORD_AT_014B4600`.
///
/// Ported from `FUN_014b4600` at `0x014B4600`.
pub const COPIES_OF_014B4600: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x014B4600,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_014B4600",
    copies: &[0x0152FB40, 0x01B6ED40],
};

/// The 2 further copies of `RECORD_AT_014B6750`.
///
/// Ported from `FUN_014b6750` at `0x014B6750`.
pub const COPIES_OF_014B6750: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x014B6750,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_014B6750",
    copies: &[0x01534420, 0x01A7B230],
};

/// The 1 further copy of `RECORD_AT_014C06F0`.
///
/// Ported from `FUN_014c06f0` at `0x014C06F0`.
pub const COPIES_OF_014C06F0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x014C06F0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_014C06F0",
    copies: &[0x01B22BF0],
};

/// The 1 further copy of `RECORD_AT_014C1B40`.
///
/// Ported from `FUN_014c1b40` at `0x014C1B40`.
pub const COPIES_OF_014C1B40: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x014C1B40,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_014C1B40",
    copies: &[0x014C1F50],
};

/// The 1 further copy of `RELEASE_014CF6A0`.
///
/// Ported from `FUN_014cf6a0` at `0x014CF6A0`.
pub const COPIES_OF_014CF6A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x014CF6A0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_014CF6A0",
    copies: &[0x01CA5070],
};

/// The 1 further copy of `RECORD_AT_014EEC00`.
///
/// Ported from `FUN_014eec00` at `0x014EEC00`.
pub const COPIES_OF_014EEC00: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x014EEC00,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_014EEC00",
    copies: &[0x014F4650],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_014f96c0` at `0x014F96C0`.
pub const COPIES_OF_014F96C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x014F96C0,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x0153FEF0],
};

/// The 1 further copy of `RECORD_AT_01510960`.
///
/// Ported from `FUN_01510960` at `0x01510960`.
pub const COPIES_OF_01510960: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01510960,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01510960",
    copies: &[0x017A57B0],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_01510a70` at `0x01510A70`.
pub const COPIES_OF_01510A70: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01510A70,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x01520A50],
};

/// The 2 further copies of `screen_mouse_moved`.
///
/// Ported from `FUN_01513450` at `0x01513450`.
pub const COPIES_OF_01513450: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01513450,
    rust_path: "crates/tiara-ui/src/digital_signal_generator/mod.rs",
    rust_symbol: "screen_mouse_moved",
    copies: &[0x012B2050, 0x0138D780],
};

/// The 1 further copy of the port.
///
/// Ported from `FUN_015284a0` at `0x015284A0`.
pub const COPIES_OF_015284A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x015284A0,
    rust_path: "crates/tiara-ui/src/ac_time_function_dialog/mod.rs",
    rust_symbol: "",
    copies: &[0x00E809F0],
};

/// The 1 further copy of `RECORD_AT_015307E0`.
///
/// Ported from `FUN_015307e0` at `0x015307E0`.
pub const COPIES_OF_015307E0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x015307E0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_015307E0",
    copies: &[0x01C91010],
};

/// The 1 further copy of `RECORD_AT_0154D780`.
///
/// Ported from `FUN_0154d780` at `0x0154D780`.
pub const COPIES_OF_0154D780: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0154D780,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0154D780",
    copies: &[0x01D03780],
};

/// The 2 further copies of `RECORD_AT_0154F870`.
///
/// Ported from `FUN_0154f870` at `0x0154F870`.
pub const COPIES_OF_0154F870: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0154F870,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0154F870",
    copies: &[0x01A5EAB0, 0x01B77830],
};

/// The 1 further copy of `RECORD_AT_0155FE30`.
///
/// Ported from `FUN_0155fe30` at `0x0155FE30`.
pub const COPIES_OF_0155FE30: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0155FE30,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0155FE30",
    copies: &[0x0156B290],
};

/// The 1 further copy of `RECORD_AT_0156CE90`.
///
/// Ported from `FUN_0156ce90` at `0x0156CE90`.
pub const COPIES_OF_0156CE90: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0156CE90,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0156CE90",
    copies: &[0x01716CE0],
};

/// The 1 further copy of `RECORD_AT_01575B80`.
///
/// Ported from `FUN_01575b80` at `0x01575B80`.
pub const COPIES_OF_01575B80: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01575B80,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01575B80",
    copies: &[0x01576100],
};

/// The 1 further copy of `RECORD_AT_0157D9D0`.
///
/// Ported from `FUN_0157d9d0` at `0x0157D9D0`.
pub const COPIES_OF_0157D9D0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0157D9D0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0157D9D0",
    copies: &[0x0157DE30],
};

/// The 1 further copy of `RECORD_AT_0157DA20`.
///
/// Ported from `FUN_0157da20` at `0x0157DA20`.
pub const COPIES_OF_0157DA20: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0157DA20,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0157DA20",
    copies: &[0x0157DE80],
};

/// The 5 further copies of `RECORD_AT_0157DBB0`.
///
/// Ported from `FUN_0157dbb0` at `0x0157DBB0`.
pub const COPIES_OF_0157DBB0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0157DBB0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0157DBB0",
    copies: &[0x0157DBD0, 0x01585830, 0x01586810, 0x015868D0, 0x01586CB0],
};

/// The 2 further copies of `RECORD_AT_015832F0`.
///
/// Ported from `FUN_015832f0` at `0x015832F0`.
pub const COPIES_OF_015832F0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x015832F0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_015832F0",
    copies: &[0x01584160, 0x015842F0],
};

/// The 5 further copies of `RECORD_AT_015834A0`.
///
/// Ported from `FUN_015834a0` at `0x015834A0`.
pub const COPIES_OF_015834A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x015834A0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_015834A0",
    copies: &[0x01587D50, 0x01587E00, 0x015881D0, 0x0158AE20, 0x0158AEC0],
};

/// The 5 further copies of `RECORD_AT_01583960`.
///
/// Ported from `FUN_01583960` at `0x01583960`.
pub const COPIES_OF_01583960: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01583960,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01583960",
    copies: &[0x01583B30, 0x01584470, 0x0158A340, 0x0158B3B0, 0x0158B440],
};

/// The 1 further copy of `RECORD_AT_01584560`.
///
/// Ported from `FUN_01584560` at `0x01584560`.
pub const COPIES_OF_01584560: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01584560,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01584560",
    copies: &[0x0158C420],
};

/// The 3 further copies of `RECORD_AT_015851E0`.
///
/// Ported from `FUN_015851e0` at `0x015851E0`.
pub const COPIES_OF_015851E0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x015851E0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_015851E0",
    copies: &[0x0158A420, 0x0158A4D0, 0x0158A8A0],
};

/// The 1 further copy of `RECORD_AT_0158AAC0`.
///
/// Ported from `FUN_0158aac0` at `0x0158AAC0`.
pub const COPIES_OF_0158AAC0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0158AAC0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0158AAC0",
    copies: &[0x0158AB70],
};

/// The 1 further copy of `RECORD_AT_015AB880`.
///
/// Ported from `FUN_015ab880` at `0x015AB880`.
pub const COPIES_OF_015AB880: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x015AB880,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_015AB880",
    copies: &[0x015ABA60],
};

/// The 1 further copy of `RECORD_AT_015C0620`.
///
/// Ported from `FUN_015c0620` at `0x015C0620`.
pub const COPIES_OF_015C0620: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x015C0620,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_015C0620",
    copies: &[0x015FCEF0],
};

/// The 4 further copies of `RECORD_AT_015C2EF0`.
///
/// Ported from `FUN_015c2ef0` at `0x015C2EF0`.
pub const COPIES_OF_015C2EF0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x015C2EF0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_015C2EF0",
    copies: &[0x015C3000, 0x015C37F0, 0x015C87E0, 0x015C9C90],
};

/// The 1 further copy of `RECORD_AT_015C6910`.
///
/// Ported from `FUN_015c6910` at `0x015C6910`.
pub const COPIES_OF_015C6910: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x015C6910,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_015C6910",
    copies: &[0x015C8640],
};

/// The 1 further copy of `RECORD_AT_015C6B70`.
///
/// Ported from `FUN_015c6b70` at `0x015C6B70`.
pub const COPIES_OF_015C6B70: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x015C6B70,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_015C6B70",
    copies: &[0x015CDC90],
};

/// The 1 further copy of `RECORD_AT_015CAED0`.
///
/// Ported from `FUN_015caed0` at `0x015CAED0`.
pub const COPIES_OF_015CAED0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x015CAED0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_015CAED0",
    copies: &[0x015E3AC0],
};

/// The 1 further copy of `RECORD_AT_015D7050`.
///
/// Ported from `FUN_015d7050` at `0x015D7050`.
pub const COPIES_OF_015D7050: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x015D7050,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_015D7050",
    copies: &[0x015DDCF0],
};

/// The 1 further copy of `RELEASE_015DA7C0`.
///
/// Ported from `FUN_015da7c0` at `0x015DA7C0`.
pub const COPIES_OF_015DA7C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x015DA7C0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_015DA7C0",
    copies: &[0x015DAA50],
};

/// The 2 further copies of `RECORD_AT_015DF6C0`.
///
/// Ported from `FUN_015df6c0` at `0x015DF6C0`.
pub const COPIES_OF_015DF6C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x015DF6C0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_015DF6C0",
    copies: &[0x015DF8A0, 0x015DFAD0],
};

/// The 3 further copies of `RECORD_AT_015FC0F0`.
///
/// Ported from `FUN_015fc0f0` at `0x015FC0F0`.
pub const COPIES_OF_015FC0F0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x015FC0F0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_015FC0F0",
    copies: &[0x01A3C9D0, 0x01BBA610, 0x01CE78D0],
};

/// The 1 further copy of `RECORD_AT_015FC8D0`.
///
/// Ported from `FUN_015fc8d0` at `0x015FC8D0`.
pub const COPIES_OF_015FC8D0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x015FC8D0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_015FC8D0",
    copies: &[0x01D121B0],
};

/// The 2 further copies of `RECORD_AT_015FC9D0`.
///
/// Ported from `FUN_015fc9d0` at `0x015FC9D0`.
pub const COPIES_OF_015FC9D0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x015FC9D0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_015FC9D0",
    copies: &[0x015FD040, 0x0160DB20],
};

/// The 3 further copies of `RECORD_AT_015FE4A0`.
///
/// Ported from `FUN_015fe4a0` at `0x015FE4A0`.
pub const COPIES_OF_015FE4A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x015FE4A0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_015FE4A0",
    copies: &[0x01A3E360, 0x01ADE900, 0x01B88380],
};

/// The 3 further copies of `RECORD_AT_015FEF00`.
///
/// Ported from `FUN_015fef00` at `0x015FEF00`.
pub const COPIES_OF_015FEF00: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x015FEF00,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_015FEF00",
    copies: &[0x015FF0D0, 0x015FF310, 0x015FF4F0],
};

/// The 1 further copy of `RECORD_AT_01604A60`.
///
/// Ported from `FUN_01604a60` at `0x01604A60`.
pub const COPIES_OF_01604A60: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01604A60,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01604A60",
    copies: &[0x0160EA80],
};

/// The 1 further copy of `RECORD_AT_01606050`.
///
/// Ported from `FUN_01606050` at `0x01606050`.
pub const COPIES_OF_01606050: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01606050,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01606050",
    copies: &[0x01C7EA80],
};

/// The 1 further copy of `RECORD_AT_0160C880`.
///
/// Ported from `FUN_0160c880` at `0x0160C880`.
pub const COPIES_OF_0160C880: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0160C880,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0160C880",
    copies: &[0x0160D6F0],
};

/// The 1 further copy of `RECORD_AT_0160CD70`.
///
/// Ported from `FUN_0160cd70` at `0x0160CD70`.
pub const COPIES_OF_0160CD70: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0160CD70,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0160CD70",
    copies: &[0x0160D260],
};

/// The 1 further copy of `RECORD_AT_0160E3B0`.
///
/// Ported from `FUN_0160e3b0` at `0x0160E3B0`.
pub const COPIES_OF_0160E3B0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0160E3B0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0160E3B0",
    copies: &[0x0160F850],
};

/// The 1 further copy of `RECORD_AT_01613720`.
///
/// Ported from `FUN_01613720` at `0x01613720`.
pub const COPIES_OF_01613720: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01613720,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01613720",
    copies: &[0x01B1E150],
};

/// The 1 further copy of `RECORD_AT_01616130`.
///
/// Ported from `FUN_01616130` at `0x01616130`.
pub const COPIES_OF_01616130: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01616130,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01616130",
    copies: &[0x017C9F30],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_0161acc0` at `0x0161ACC0`.
pub const COPIES_OF_0161ACC0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0161ACC0,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x0197D8D0],
};

/// The 1 further copy of `RECORD_AT_01625DF0`.
///
/// Ported from `FUN_01625df0` at `0x01625DF0`.
pub const COPIES_OF_01625DF0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01625DF0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01625DF0",
    copies: &[0x0198D320],
};

/// The 1 further copy of `RECORD_AT_0164A9C0`.
///
/// Ported from `FUN_0164a9c0` at `0x0164A9C0`.
pub const COPIES_OF_0164A9C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0164A9C0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0164A9C0",
    copies: &[0x019A10A0],
};

/// The 1 further copy of `RECORD_AT_01652710`.
///
/// Ported from `FUN_01652710` at `0x01652710`.
pub const COPIES_OF_01652710: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01652710,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01652710",
    copies: &[0x01653720],
};

/// The 1 further copy of `RECORD_AT_016A3E20`.
///
/// Ported from `FUN_016a3e20` at `0x016A3E20`.
pub const COPIES_OF_016A3E20: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x016A3E20,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_016A3E20",
    copies: &[0x016A3FB0],
};

/// The 1 further copy of `RECORD_AT_016A6A00`.
///
/// Ported from `FUN_016a6a00` at `0x016A6A00`.
pub const COPIES_OF_016A6A00: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x016A6A00,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_016A6A00",
    copies: &[0x016A6BD0],
};

/// The 1 further copy of `RECORD_AT_016ACAF0`.
///
/// Ported from `FUN_016acaf0` at `0x016ACAF0`.
pub const COPIES_OF_016ACAF0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x016ACAF0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_016ACAF0",
    copies: &[0x01709F20],
};

/// The 1 further copy of `RECORD_AT_016ACF00`.
///
/// Ported from `FUN_016acf00` at `0x016ACF00`.
pub const COPIES_OF_016ACF00: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x016ACF00,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_016ACF00",
    copies: &[0x017FD430],
};

/// The 1 further copy of `RECORD_AT_016B0EB0`.
///
/// Ported from `FUN_016b0eb0` at `0x016B0EB0`.
pub const COPIES_OF_016B0EB0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x016B0EB0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_016B0EB0",
    copies: &[0x017F5510],
};

/// The 1 further copy of `RELEASE_016C5830`.
///
/// Ported from `FUN_016c5830` at `0x016C5830`.
pub const COPIES_OF_016C5830: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x016C5830,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_016C5830",
    copies: &[0x016C5CE0],
};

/// The 1 further copy of `RELEASE_016C5880`.
///
/// Ported from `FUN_016c5880` at `0x016C5880`.
pub const COPIES_OF_016C5880: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x016C5880,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_016C5880",
    copies: &[0x016C5D30],
};

/// The 2 further copies of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_016d63b0` at `0x016D63B0`.
pub const COPIES_OF_016D63B0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x016D63B0,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x01AA2CB0, 0x01AA31E0],
};

/// The 1 further copy of `RECORD_AT_016F9D30`.
///
/// Ported from `FUN_016f9d30` at `0x016F9D30`.
pub const COPIES_OF_016F9D30: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x016F9D30,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_016F9D30",
    copies: &[0x016F9F20],
};

/// The 1 further copy of `RECORD_AT_016FFDD0`.
///
/// Ported from `FUN_016ffdd0` at `0x016FFDD0`.
pub const COPIES_OF_016FFDD0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x016FFDD0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_016FFDD0",
    copies: &[0x019DE4E0],
};

/// The 3 further copies of `RECORD_AT_017082B0`.
///
/// Ported from `FUN_017082b0` at `0x017082B0`.
pub const COPIES_OF_017082B0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x017082B0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_017082B0",
    copies: &[0x01708710, 0x01708B70, 0x01708FD0],
};

/// The 6 further copies of `RECORD_AT_01709320`.
///
/// Ported from `FUN_01709320` at `0x01709320`.
pub const COPIES_OF_01709320: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01709320,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01709320",
    copies: &[
        0x01B45580, 0x01B45FB0, 0x01B474A0, 0x01B485B0, 0x01B489A0, 0x01B49A90,
    ],
};

/// The 1 further copy of `RECORD_AT_01711C10`.
///
/// Ported from `FUN_01711c10` at `0x01711C10`.
pub const COPIES_OF_01711C10: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01711C10,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01711C10",
    copies: &[0x01BAA670],
};

/// The 1 further copy of `RECORD_AT_01713BA0`.
///
/// Ported from `FUN_01713ba0` at `0x01713BA0`.
pub const COPIES_OF_01713BA0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01713BA0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01713BA0",
    copies: &[0x01714F70],
};

/// The 1 further copy of `RECORD_AT_017142C0`.
///
/// Ported from `FUN_017142c0` at `0x017142C0`.
pub const COPIES_OF_017142C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x017142C0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_017142C0",
    copies: &[0x01714A10],
};

/// The 2 further copies of `RECORD_AT_01716930`.
///
/// Ported from `FUN_01716930` at `0x01716930`.
pub const COPIES_OF_01716930: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01716930,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01716930",
    copies: &[0x01998AA0, 0x01C4B460],
};

/// The 1 further copy of `RECORD_AT_01716E20`.
///
/// Ported from `FUN_01716e20` at `0x01716E20`.
pub const COPIES_OF_01716E20: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01716E20,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01716E20",
    copies: &[0x01BAA3E0],
};

/// The 1 further copy of `RECORD_AT_017170A0`.
///
/// Ported from `FUN_017170a0` at `0x017170A0`.
pub const COPIES_OF_017170A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x017170A0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_017170A0",
    copies: &[0x01717740],
};

/// The 1 further copy of `RECORD_AT_0173E7B0`.
///
/// Ported from `FUN_0173e7b0` at `0x0173E7B0`.
pub const COPIES_OF_0173E7B0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0173E7B0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0173E7B0",
    copies: &[0x0173F8F0],
};

/// The 1 further copy of `RECORD_AT_017409C0`.
///
/// Ported from `FUN_017409c0` at `0x017409C0`.
pub const COPIES_OF_017409C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x017409C0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_017409C0",
    copies: &[0x01742310],
};

/// The 2 further copies of `RECORD_AT_0174AAB0`.
///
/// Ported from `FUN_0174aab0` at `0x0174AAB0`.
pub const COPIES_OF_0174AAB0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0174AAB0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0174AAB0",
    copies: &[0x01752490, 0x01752980],
};

/// The 1 further copy of `RECORD_AT_0174CBE0`.
///
/// Ported from `FUN_0174cbe0` at `0x0174CBE0`.
pub const COPIES_OF_0174CBE0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0174CBE0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0174CBE0",
    copies: &[0x01759FD0],
};

/// The 1 further copy of `RECORD_AT_01750700`.
///
/// Ported from `FUN_01750700` at `0x01750700`.
pub const COPIES_OF_01750700: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01750700,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01750700",
    copies: &[0x0175AAC0],
};

/// The 1 further copy of `RECORD_AT_01751820`.
///
/// Ported from `FUN_01751820` at `0x01751820`.
pub const COPIES_OF_01751820: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01751820,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01751820",
    copies: &[0x01751B40],
};

/// The 2 further copies of `RECORD_AT_0175BF30`.
///
/// Ported from `FUN_0175bf30` at `0x0175BF30`.
pub const COPIES_OF_0175BF30: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0175BF30,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0175BF30",
    copies: &[0x0175C6A0, 0x0175C730],
};

/// The 3 further copies of `RECORD_AT_0175C010`.
///
/// Ported from `FUN_0175c010` at `0x0175C010`.
pub const COPIES_OF_0175C010: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0175C010,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0175C010",
    copies: &[0x0175C0C0, 0x0175C490, 0x01B26070],
};

/// The 1 further copy of `RELEASE_0176C8B0`.
///
/// Ported from `FUN_0176c8b0` at `0x0176C8B0`.
pub const COPIES_OF_0176C8B0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0176C8B0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_0176C8B0",
    copies: &[0x0176C8D0],
};

/// The 1 further copy of `RECORD_AT_01773AB0`.
///
/// Ported from `FUN_01773ab0` at `0x01773AB0`.
pub const COPIES_OF_01773AB0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01773AB0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01773AB0",
    copies: &[0x01A38270],
};

/// The 1 further copy of `RECORD_AT_01777EA0`.
///
/// Ported from `FUN_01777ea0` at `0x01777EA0`.
pub const COPIES_OF_01777EA0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01777EA0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01777EA0",
    copies: &[0x01C4D010],
};

/// The 2 further copies of `RECORD_AT_01779530`.
///
/// Ported from `FUN_01779530` at `0x01779530`.
pub const COPIES_OF_01779530: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01779530,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01779530",
    copies: &[0x0177A300, 0x0177A490],
};

/// The 4 further copies of `RECORD_AT_0177FBF0`.
///
/// Ported from `FUN_0177fbf0` at `0x0177FBF0`.
pub const COPIES_OF_0177FBF0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0177FBF0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0177FBF0",
    copies: &[0x0177FD80, 0x01976210, 0x01B6F830, 0x01B6F9F0],
};

/// The 1 further copy of `RECORD_AT_0179A140`.
///
/// Ported from `FUN_0179a140` at `0x0179A140`.
pub const COPIES_OF_0179A140: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0179A140,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0179A140",
    copies: &[0x019EF610],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_017c5020` at `0x017C5020`.
pub const COPIES_OF_017C5020: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x017C5020,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x01A32FC0],
};

/// The 1 further copy of `RECORD_AT_017EF240`.
///
/// Ported from `FUN_017ef240` at `0x017EF240`.
pub const COPIES_OF_017EF240: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x017EF240,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_017EF240",
    copies: &[0x01BE4B60],
};

/// The 2 further copies of `RECORD_AT_017F2020`.
///
/// Ported from `FUN_017f2020` at `0x017F2020`.
pub const COPIES_OF_017F2020: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x017F2020,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_017F2020",
    copies: &[0x0184AAE0, 0x0184ADF0],
};

/// The 2 further copies of `RECORD_AT_017FE6D0`.
///
/// Ported from `FUN_017fe6d0` at `0x017FE6D0`.
pub const COPIES_OF_017FE6D0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x017FE6D0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_017FE6D0",
    copies: &[0x01D32270, 0x01D325B0],
};

/// The 1 further copy of `RECORD_AT_01803E60`.
///
/// Ported from `FUN_01803e60` at `0x01803E60`.
pub const COPIES_OF_01803E60: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01803E60,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01803E60",
    copies: &[0x0181E790],
};

/// The 1 further copy of `RECORD_AT_018040D0`.
///
/// Ported from `FUN_018040d0` at `0x018040D0`.
pub const COPIES_OF_018040D0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x018040D0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_018040D0",
    copies: &[0x0181EA00],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_01804c40` at `0x01804C40`.
pub const COPIES_OF_01804C40: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01804C40,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x0181F070],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_01804cc0` at `0x01804CC0`.
pub const COPIES_OF_01804CC0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01804CC0,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x0181F0F0],
};

/// The 3 further copies of `RELEASE_01809FA0`.
///
/// Ported from `FUN_01809fa0` at `0x01809FA0`.
pub const COPIES_OF_01809FA0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01809FA0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_01809FA0",
    copies: &[0x0180A1B0, 0x0180A3C0, 0x0180A5D0],
};

/// The 1 further copy of `RECORD_AT_01822CF0`.
///
/// Ported from `FUN_01822cf0` at `0x01822CF0`.
pub const COPIES_OF_01822CF0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01822CF0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01822CF0",
    copies: &[0x01832D60],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_01831cf0` at `0x01831CF0`.
pub const COPIES_OF_01831CF0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01831CF0,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x01831E70],
};

/// The 1 further copy of `RECORD_AT_01834A70`.
///
/// Ported from `FUN_01834a70` at `0x01834A70`.
pub const COPIES_OF_01834A70: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01834A70,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01834A70",
    copies: &[0x0183A4B0],
};

/// The 2 further copies of `RECORD_AT_0183AFE0`.
///
/// Ported from `FUN_0183afe0` at `0x0183AFE0`.
pub const COPIES_OF_0183AFE0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0183AFE0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0183AFE0",
    copies: &[0x01A4C100, 0x01B77530],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_01847380` at `0x01847380`.
pub const COPIES_OF_01847380: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01847380,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x01879F30],
};

/// The 2 further copies of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_0184f270` at `0x0184F270`.
pub const COPIES_OF_0184F270: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0184F270,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x0184FA50, 0x018506F0],
};

/// The 4 further copies of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_0184f740` at `0x0184F740`.
pub const COPIES_OF_0184F740: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0184F740,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x0184FB50, 0x0184FC80, 0x01850590, 0x01850C90],
};

/// The 1 further copy of `RECORD_AT_0184FFD0`.
///
/// Ported from `FUN_0184ffd0` at `0x0184FFD0`.
pub const COPIES_OF_0184FFD0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x0184FFD0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_0184FFD0",
    copies: &[0x01851A80],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_01866e00` at `0x01866E00`.
pub const COPIES_OF_01866E00: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01866E00,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x0197C8C0],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_01876db0` at `0x01876DB0`.
pub const COPIES_OF_01876DB0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01876DB0,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x01980190],
};

/// The 1 further copy of `RECORD_AT_018798D0`.
///
/// Ported from `FUN_018798d0` at `0x018798D0`.
pub const COPIES_OF_018798D0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x018798D0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_018798D0",
    copies: &[0x01879BB0],
};

/// The 1 further copy of `RECORD_AT_01881BA0`.
///
/// Ported from `FUN_01881ba0` at `0x01881BA0`.
pub const COPIES_OF_01881BA0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01881BA0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01881BA0",
    copies: &[0x01D85820],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_018cf800` at `0x018CF800`.
pub const COPIES_OF_018CF800: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x018CF800,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x018D4250],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_018cfbe0` at `0x018CFBE0`.
pub const COPIES_OF_018CFBE0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x018CFBE0,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x0197F1F0],
};

/// The 1 further copy of `RECORD_AT_018E2F80`.
///
/// Ported from `FUN_018e2f80` at `0x018E2F80`.
pub const COPIES_OF_018E2F80: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x018E2F80,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_018E2F80",
    copies: &[0x018F3D10],
};

/// The 1 further copy of `RELEASE_019140B0`.
///
/// Ported from `FUN_019140b0` at `0x019140B0`.
pub const COPIES_OF_019140B0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x019140B0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_019140B0",
    copies: &[0x019140D0],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_01980db0` at `0x01980DB0`.
pub const COPIES_OF_01980DB0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01980DB0,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x01980F70],
};

/// The 1 further copy of `RECORD_AT_019A3E80`.
///
/// Ported from `FUN_019a3e80` at `0x019A3E80`.
pub const COPIES_OF_019A3E80: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x019A3E80,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_019A3E80",
    copies: &[0x01B25BC0],
};

/// The 1 further copy of `RECORD_AT_019A5760`.
///
/// Ported from `FUN_019a5760` at `0x019A5760`.
pub const COPIES_OF_019A5760: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x019A5760,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_019A5760",
    copies: &[0x01C765A0],
};

/// The 2 further copies of `RECORD_AT_019A7DC0`.
///
/// Ported from `FUN_019a7dc0` at `0x019A7DC0`.
pub const COPIES_OF_019A7DC0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x019A7DC0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_019A7DC0",
    copies: &[0x01C19090, 0x01C19AE0],
};

/// The 1 further copy of `RECORD_AT_019A97D0`.
///
/// Ported from `FUN_019a97d0` at `0x019A97D0`.
pub const COPIES_OF_019A97D0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x019A97D0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_019A97D0",
    copies: &[0x01B73B50],
};

/// The 3 further copies of `RECORD_AT_019B0290`.
///
/// Ported from `FUN_019b0290` at `0x019B0290`.
pub const COPIES_OF_019B0290: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x019B0290,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_019B0290",
    copies: &[0x019B1250, 0x019B1300, 0x019B16D0],
};

/// The 1 further copy of `RECORD_AT_019B95B0`.
///
/// Ported from `FUN_019b95b0` at `0x019B95B0`.
pub const COPIES_OF_019B95B0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x019B95B0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_019B95B0",
    copies: &[0x01B239A0],
};

/// The 1 further copy of `RECORD_AT_019C1C40`.
///
/// Ported from `FUN_019c1c40` at `0x019C1C40`.
pub const COPIES_OF_019C1C40: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x019C1C40,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_019C1C40",
    copies: &[0x019C5BF0],
};

/// The 1 further copy of `copy_api_key_text`.
///
/// Ported from `FUN_019d8220` at `0x019D8220`.
pub const COPIES_OF_019D8220: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x019D8220,
    rust_path: "crates/tiara-ui/src/set_api_key/mod.rs",
    rust_symbol: "copy_api_key_text",
    copies: &[0x014BCAB0],
};

/// The 1 further copy of `RECORD_AT_019DCA60`.
///
/// Ported from `FUN_019dca60` at `0x019DCA60`.
pub const COPIES_OF_019DCA60: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x019DCA60,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_019DCA60",
    copies: &[0x019EAB50],
};

/// The 1 further copy of `RECORD_AT_019DCF40`.
///
/// Ported from `FUN_019dcf40` at `0x019DCF40`.
pub const COPIES_OF_019DCF40: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x019DCF40,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_019DCF40",
    copies: &[0x019EAF90],
};

/// The 3 further copies of `RELEASE_019E4900`.
///
/// Ported from `FUN_019e4900` at `0x019E4900`.
pub const COPIES_OF_019E4900: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x019E4900,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_019E4900",
    copies: &[0x019E49C0, 0x019E4A80, 0x019E4BA0],
};

/// The 1 further copy of `RELEASE_019E6520`.
///
/// Ported from `FUN_019e6520` at `0x019E6520`.
pub const COPIES_OF_019E6520: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x019E6520,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_019E6520",
    copies: &[0x019EC2B0],
};

/// The 1 further copy of `RECORD_AT_019E6560`.
///
/// Ported from `FUN_019e6560` at `0x019E6560`.
pub const COPIES_OF_019E6560: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x019E6560,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_019E6560",
    copies: &[0x019EC2F0],
};

/// The 1 further copy of `RECORD_AT_019EB350`.
///
/// Ported from `FUN_019eb350` at `0x019EB350`.
pub const COPIES_OF_019EB350: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x019EB350,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_019EB350",
    copies: &[0x01B1DFD0],
};

/// The 1 further copy of `RECORD_AT_01A03C10`.
///
/// Ported from `FUN_01a03c10` at `0x01A03C10`.
pub const COPIES_OF_01A03C10: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01A03C10,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01A03C10",
    copies: &[0x01A04090],
};

/// The 1 further copy of `RECORD_AT_01A31E90`.
///
/// Ported from `FUN_01a31e90` at `0x01A31E90`.
pub const COPIES_OF_01A31E90: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01A31E90,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01A31E90",
    copies: &[0x01B7FCB0],
};

/// The 1 further copy of `RELEASE_01A36DA0`.
///
/// Ported from `FUN_01a36da0` at `0x01A36DA0`.
pub const COPIES_OF_01A36DA0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01A36DA0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_01A36DA0",
    copies: &[0x01A48BA0],
};

/// The 1 further copy of `RECORD_AT_01A47770`.
///
/// Ported from `FUN_01a47770` at `0x01A47770`.
pub const COPIES_OF_01A47770: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01A47770,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01A47770",
    copies: &[0x01D7C6F0],
};

/// The 1 further copy of `RECORD_AT_01A51310`.
///
/// Ported from `FUN_01a51310` at `0x01A51310`.
pub const COPIES_OF_01A51310: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01A51310,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01A51310",
    copies: &[0x01AE74C0],
};

/// The 1 further copy of `RELEASE_01A52440`.
///
/// Ported from `FUN_01a52440` at `0x01A52440`.
pub const COPIES_OF_01A52440: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01A52440,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_01A52440",
    copies: &[0x01A52D50],
};

/// The 1 further copy of `RECORD_AT_01A555F0`.
///
/// Ported from `FUN_01a555f0` at `0x01A555F0`.
pub const COPIES_OF_01A555F0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01A555F0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01A555F0",
    copies: &[0x01A55860],
};

/// The 1 further copy of `RECORD_AT_01A613A0`.
///
/// Ported from `FUN_01a613a0` at `0x01A613A0`.
pub const COPIES_OF_01A613A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01A613A0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01A613A0",
    copies: &[0x01A61F70],
};

/// The 1 further copy of `RELEASE_01A7F8B0`.
///
/// Ported from `FUN_01a7f8b0` at `0x01A7F8B0`.
pub const COPIES_OF_01A7F8B0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01A7F8B0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_01A7F8B0",
    copies: &[0x01A7F920],
};

/// The 1 further copy of `RECORD_AT_01A86F10`.
///
/// Ported from `FUN_01a86f10` at `0x01A86F10`.
pub const COPIES_OF_01A86F10: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01A86F10,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01A86F10",
    copies: &[0x01C81E80],
};

/// The 2 further copies of `RECORD_AT_01AE7830`.
///
/// Ported from `FUN_01ae7830` at `0x01AE7830`.
pub const COPIES_OF_01AE7830: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01AE7830,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01AE7830",
    copies: &[0x01AE7B90, 0x01C74CB0],
};

/// The 1 further copy of `RECORD_AT_01B04E90`.
///
/// Ported from `FUN_01b04e90` at `0x01B04E90`.
pub const COPIES_OF_01B04E90: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01B04E90,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01B04E90",
    copies: &[0x01CF7690],
};

/// The 1 further copy of `RECORD_AT_01B050E0`.
///
/// Ported from `FUN_01b050e0` at `0x01B050E0`.
pub const COPIES_OF_01B050E0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01B050E0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01B050E0",
    copies: &[0x01CA5090],
};

/// The 2 further copies of `RECORD_AT_01B14E60`.
///
/// Ported from `FUN_01b14e60` at `0x01B14E60`.
pub const COPIES_OF_01B14E60: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01B14E60,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01B14E60",
    copies: &[0x01B15CC0, 0x01B15E50],
};

/// The 6 further copies of the port.
///
/// Ported from `FUN_01b215f0` at `0x01B215F0`.
pub const COPIES_OF_01B215F0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01B215F0,
    rust_path: "crates/tiara-ui/src/new_name/mod.rs",
    rust_symbol: "",
    copies: &[
        0x00875360, 0x008FF100, 0x00C53600, 0x00ECC050, 0x0177F090, 0x01D3F970,
    ],
};

/// The 1 further copy of `RECORD_AT_01B21690`.
///
/// Ported from `FUN_01b21690` at `0x01B21690`.
pub const COPIES_OF_01B21690: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01B21690,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01B21690",
    copies: &[0x01B22310],
};

/// The 1 further copy of `RECORD_AT_01B228C0`.
///
/// Ported from `FUN_01b228c0` at `0x01B228C0`.
pub const COPIES_OF_01B228C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01B228C0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01B228C0",
    copies: &[0x01B22AE0],
};

/// The 2 further copies of `RECORD_AT_01B25ED0`.
///
/// Ported from `FUN_01b25ed0` at `0x01B25ED0`.
pub const COPIES_OF_01B25ED0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01B25ED0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01B25ED0",
    copies: &[0x01B26CF0, 0x01B26E80],
};

/// The 2 further copies of `RECORD_AT_01B3CEC0`.
///
/// Ported from `FUN_01b3cec0` at `0x01B3CEC0`.
pub const COPIES_OF_01B3CEC0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01B3CEC0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01B3CEC0",
    copies: &[0x01B3D0A0, 0x01B3D2A0],
};

/// The 1 further copy of `RECORD_AT_01B3E770`.
///
/// Ported from `FUN_01b3e770` at `0x01B3E770`.
pub const COPIES_OF_01B3E770: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01B3E770,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01B3E770",
    copies: &[0x01B3E930],
};

/// The 1 further copy of `RECORD_AT_01B45820`.
///
/// Ported from `FUN_01b45820` at `0x01B45820`.
pub const COPIES_OF_01B45820: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01B45820,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01B45820",
    copies: &[0x01B48CA0],
};

/// The 1 further copy of `load_text`.
///
/// Ported from `FUN_01b522d0` at `0x01B522D0`.
pub const COPIES_OF_01B522D0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01B522D0,
    rust_path: "crates/tiara-ui/src/harmonic_balance_options/mod.rs",
    rust_symbol: "load_text",
    copies: &[0x0106B960],
};

/// The 5 further copies of `RECORD_AT_01B8CDF0`.
///
/// Ported from `FUN_01b8cdf0` at `0x01B8CDF0`.
pub const COPIES_OF_01B8CDF0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01B8CDF0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01B8CDF0",
    copies: &[0x01B8DDB0, 0x01B8DE60, 0x01B8E230, 0x01B8E440, 0x01B8E4E0],
};

/// The 3 further copies of `report_mixed_options_error`.
///
/// Ported from `FUN_01ba02e0` at `0x01BA02E0`.
pub const COPIES_OF_01BA02E0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01BA02E0,
    rust_path: "crates/tiara-ui/src/mixed_mode_options/mod.rs",
    rust_symbol: "report_mixed_options_error",
    copies: &[0x00FACA70, 0x013EB3E0, 0x0140BED0],
};

/// The 3 further copies of `query_mixed_options_close`.
///
/// Ported from `FUN_01ba03c0` at `0x01BA03C0`.
pub const COPIES_OF_01BA03C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01BA03C0,
    rust_path: "crates/tiara-ui/src/mixed_mode_options/mod.rs",
    rust_symbol: "query_mixed_options_close",
    copies: &[0x00FAC7B0, 0x013EB620, 0x0140C220],
};

/// The 1 further copy of `RECORD_AT_01BACE40`.
///
/// Ported from `FUN_01bace40` at `0x01BACE40`.
pub const COPIES_OF_01BACE40: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01BACE40,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01BACE40",
    copies: &[0x01C73D70],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_01bbb290` at `0x01BBB290`.
pub const COPIES_OF_01BBB290: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01BBB290,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x01BBBA60],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_01bbb340` at `0x01BBB340`.
pub const COPIES_OF_01BBB340: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01BBB340,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x01BBBB10],
};

/// The 1 further copy of `parse_error`.
///
/// Ported from `FUN_01bbc400` at `0x01BBC400`.
pub const COPIES_OF_01BBC400: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01BBC400,
    rust_path: "crates/tiara-core/src/ibis.rs",
    rust_symbol: "parse_error",
    copies: &[0x01BA2120],
};

/// The 1 further copy of `RECORD_AT_01BCC400`.
///
/// Ported from `FUN_01bcc400` at `0x01BCC400`.
pub const COPIES_OF_01BCC400: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01BCC400,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01BCC400",
    copies: &[0x01BCC5B0],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_01bd6570` at `0x01BD6570`.
pub const COPIES_OF_01BD6570: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01BD6570,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x01C01970],
};

/// The 1 further copy of `SWEPT_LIFECYCLE`.
///
/// Ported from `FUN_01be9ad0` at `0x01BE9AD0`.
pub const COPIES_OF_01BE9AD0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01BE9AD0,
    rust_path: "crates/tiara-core/src/class_lifecycle.rs",
    rust_symbol: "SWEPT_LIFECYCLE",
    copies: &[0x01BEAF00],
};

/// The 1 further copy of `SWEPT_ACCESSORS`.
///
/// Ported from `FUN_01c028a0` at `0x01C028A0`.
pub const COPIES_OF_01C028A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01C028A0,
    rust_path: "crates/tiara-core/src/field_reach.rs",
    rust_symbol: "SWEPT_ACCESSORS",
    copies: &[0x01C028E0],
};

/// The 1 further copy of `show_modal_dialog`.
///
/// Ported from `FUN_01c760d0` at `0x01C760D0`.
pub const COPIES_OF_01C760D0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01C760D0,
    rust_path: "crates/tiara-ui/src/schematic_editor_commands/mod.rs",
    rust_symbol: "show_modal_dialog",
    copies: &[0x01532840],
};

/// The 1 further copy of `redraw_editor`.
///
/// Ported from `FUN_01c76fd0` at `0x01C76FD0`.
pub const COPIES_OF_01C76FD0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01C76FD0,
    rust_path: "crates/tiara-ui/src/schematic_editor_menu/mod.rs",
    rust_symbol: "redraw_editor",
    copies: &[0x01CA2AA0],
};

/// The 1 further copy of `edit_analysis_options`.
///
/// Ported from `FUN_01c77280` at `0x01C77280`.
pub const COPIES_OF_01C77280: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01C77280,
    rust_path: "crates/tiara-ui/src/schematic_editor_commands/mod.rs",
    rust_symbol: "edit_analysis_options",
    copies: &[0x01533B40],
};

/// The 2 further copies of `run_inert_command`.
///
/// Ported from `FUN_01c9c210` at `0x01C9C210`.
pub const COPIES_OF_01C9C210: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01C9C210,
    rust_path: "crates/tiara-ui/src/schematic_editor_menu/mod.rs",
    rust_symbol: "run_inert_command",
    copies: &[0x015FCBD0, 0x01CA2120],
};

/// The 1 further copy of `RELEASE_01CA51A0`.
///
/// Ported from `FUN_01ca51a0` at `0x01CA51A0`.
pub const COPIES_OF_01CA51A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01CA51A0,
    rust_path: "crates/tiara-core/src/owned_fields.rs",
    rust_symbol: "RELEASE_01CA51A0",
    copies: &[0x01CA5280],
};

/// The 2 further copies of `RECORD_AT_01CA5520`.
///
/// Ported from `FUN_01ca5520` at `0x01CA5520`.
pub const COPIES_OF_01CA5520: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01CA5520,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01CA5520",
    copies: &[0x01CA6340, 0x01CA64D0],
};

/// The 3 further copies of `RECORD_AT_01CA56C0`.
///
/// Ported from `FUN_01ca56c0` at `0x01CA56C0`.
pub const COPIES_OF_01CA56C0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01CA56C0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01CA56C0",
    copies: &[0x01CA8570, 0x01CA8620, 0x01CA89F0],
};

/// The 2 further copies of `RECORD_AT_01CA8490`.
///
/// Ported from `FUN_01ca8490` at `0x01CA8490`.
pub const COPIES_OF_01CA8490: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01CA8490,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01CA8490",
    copies: &[0x01CAA060, 0x01CAA0F0],
};

/// The 1 further copy of `RECORD_AT_01CFD3A0`.
///
/// Ported from `FUN_01cfd3a0` at `0x01CFD3A0`.
pub const COPIES_OF_01CFD3A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01CFD3A0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01CFD3A0",
    copies: &[0x01CFD630],
};

/// The 1 further copy of `RECORD_AT_01CFD430`.
///
/// Ported from `FUN_01cfd430` at `0x01CFD430`.
pub const COPIES_OF_01CFD430: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01CFD430,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01CFD430",
    copies: &[0x01D39CC0],
};

/// The 1 further copy of `RECORD_AT_01CFD750`.
///
/// Ported from `FUN_01cfd750` at `0x01CFD750`.
pub const COPIES_OF_01CFD750: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01CFD750,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01CFD750",
    copies: &[0x01D37010],
};

/// The 1 further copy of `RECORD_AT_01D1BF50`.
///
/// Ported from `FUN_01d1bf50` at `0x01D1BF50`.
pub const COPIES_OF_01D1BF50: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01D1BF50,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01D1BF50",
    copies: &[0x01D1C950],
};

/// The 2 further copies of `draw_if_present`.
///
/// Ported from `FUN_01d2b0a0` at `0x01D2B0A0`.
pub const COPIES_OF_01D2B0A0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01D2B0A0,
    rust_path: "crates/tiara-core/src/curve_drawing.rs",
    rust_symbol: "draw_if_present",
    copies: &[0x010EE050, 0x01A5E580],
};

/// The 1 further copy of `RECORD_AT_01D42CF0`.
///
/// Ported from `FUN_01d42cf0` at `0x01D42CF0`.
pub const COPIES_OF_01D42CF0: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01D42CF0,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01D42CF0",
    copies: &[0x01D43280],
};

/// The 1 further copy of `RECORD_AT_01D42D40`.
///
/// Ported from `FUN_01d42d40` at `0x01D42D40`.
pub const COPIES_OF_01D42D40: DuplicatedRoutine = DuplicatedRoutine {
    ported: 0x01D42D40,
    rust_path: "crates/tiara-core/src/record_layouts.rs",
    rust_symbol: "RECORD_AT_01D42D40",
    copies: &[0x01D432D0],
};

/// Every routine known to have more than one copy in the binary.
pub const DUPLICATED_ROUTINES: [&DuplicatedRoutine; 909] = [
    &COPIES_OF_00410BA0,
    &COPIES_OF_00410EF0,
    &COPIES_OF_0041B0A0,
    &COPIES_OF_0041B1C0,
    &COPIES_OF_0041B4E0,
    &COPIES_OF_0041E320,
    &COPIES_OF_0041E3A0,
    &COPIES_OF_0041E8A0,
    &COPIES_OF_004249E0,
    &COPIES_OF_0043F970,
    &COPIES_OF_00440940,
    &COPIES_OF_004471C0,
    &COPIES_OF_0044FA40,
    &COPIES_OF_00450000,
    &COPIES_OF_004528E0,
    &COPIES_OF_00452920,
    &COPIES_OF_00458AA0,
    &COPIES_OF_0045B7F0,
    &COPIES_OF_004601D0,
    &COPIES_OF_0049F0F0,
    &COPIES_OF_0049F4E0,
    &COPIES_OF_0049F950,
    &COPIES_OF_0049FE50,
    &COPIES_OF_004A00C0,
    &COPIES_OF_004A5130,
    &COPIES_OF_004AA190,
    &COPIES_OF_004AA800,
    &COPIES_OF_004AA840,
    &COPIES_OF_004AA880,
    &COPIES_OF_004AA8C0,
    &COPIES_OF_004AE210,
    &COPIES_OF_004AE3A0,
    &COPIES_OF_004AE6A0,
    &COPIES_OF_004AE910,
    &COPIES_OF_004AF9F0,
    &COPIES_OF_004B1150,
    &COPIES_OF_004B2060,
    &COPIES_OF_004B2BF0,
    &COPIES_OF_004B36D0,
    &COPIES_OF_004B3C30,
    &COPIES_OF_004B4310,
    &COPIES_OF_004B43A0,
    &COPIES_OF_004B44E0,
    &COPIES_OF_004B4AC0,
    &COPIES_OF_004B5810,
    &COPIES_OF_004B63C0,
    &COPIES_OF_004B7120,
    &COPIES_OF_004B7380,
    &COPIES_OF_004B7480,
    &COPIES_OF_004B76E0,
    &COPIES_OF_004B77E0,
    &COPIES_OF_004B7AC0,
    &COPIES_OF_004B7C00,
    &COPIES_OF_004B7F20,
    &COPIES_OF_004B8060,
    &COPIES_OF_004B8CC0,
    &COPIES_OF_004B95F0,
    &COPIES_OF_004B9650,
    &COPIES_OF_004B9810,
    &COPIES_OF_004BA570,
    &COPIES_OF_004BAF90,
    &COPIES_OF_004BDC20,
    &COPIES_OF_004BDC40,
    &COPIES_OF_004BE270,
    &COPIES_OF_004BEBF0,
    &COPIES_OF_004C0630,
    &COPIES_OF_004C0F70,
    &COPIES_OF_004C3340,
    &COPIES_OF_004C6620,
    &COPIES_OF_004C6A00,
    &COPIES_OF_004C7F60,
    &COPIES_OF_004C7F80,
    &COPIES_OF_004C9CD0,
    &COPIES_OF_004CB670,
    &COPIES_OF_004CB690,
    &COPIES_OF_004CDFF0,
    &COPIES_OF_004D09A0,
    &COPIES_OF_004D2090,
    &COPIES_OF_004D4910,
    &COPIES_OF_004D4F50,
    &COPIES_OF_004D6820,
    &COPIES_OF_004D8110,
    &COPIES_OF_004D8640,
    &COPIES_OF_004D8CB0,
    &COPIES_OF_004DA300,
    &COPIES_OF_004DB5A0,
    &COPIES_OF_004DC020,
    &COPIES_OF_004DC240,
    &COPIES_OF_004DCF80,
    &COPIES_OF_004DD0E0,
    &COPIES_OF_004DD170,
    &COPIES_OF_004DD2D0,
    &COPIES_OF_004DD8B0,
    &COPIES_OF_004DDA30,
    &COPIES_OF_004DDFF0,
    &COPIES_OF_004DE250,
    &COPIES_OF_004DE370,
    &COPIES_OF_004DE630,
    &COPIES_OF_004DEC10,
    &COPIES_OF_004DECC0,
    &COPIES_OF_004DECE0,
    &COPIES_OF_004DED40,
    &COPIES_OF_004DF120,
    &COPIES_OF_004DF150,
    &COPIES_OF_004DF1D0,
    &COPIES_OF_004DF220,
    &COPIES_OF_004DF390,
    &COPIES_OF_004DF3C0,
    &COPIES_OF_004DF3F0,
    &COPIES_OF_004DF430,
    &COPIES_OF_004DF620,
    &COPIES_OF_004E0B00,
    &COPIES_OF_004E1F60,
    &COPIES_OF_004E2100,
    &COPIES_OF_004E2420,
    &COPIES_OF_004E28C0,
    &COPIES_OF_004E2900,
    &COPIES_OF_004E37B0,
    &COPIES_OF_004E3910,
    &COPIES_OF_004E5550,
    &COPIES_OF_004E6D33,
    &COPIES_OF_004E70E0,
    &COPIES_OF_004EC760,
    &COPIES_OF_004EC900,
    &COPIES_OF_004F6C80,
    &COPIES_OF_004F6CB0,
    &COPIES_OF_004F6D50,
    &COPIES_OF_004F7440,
    &COPIES_OF_004F75A0,
    &COPIES_OF_004F8020,
    &COPIES_OF_004F8290,
    &COPIES_OF_004F84A0,
    &COPIES_OF_004F8500,
    &COPIES_OF_004FADA0,
    &COPIES_OF_004FBC80,
    &COPIES_OF_004FDE30,
    &COPIES_OF_004FF510,
    &COPIES_OF_004FFB70,
    &COPIES_OF_00502CD0,
    &COPIES_OF_0051FD70,
    &COPIES_OF_0051FE10,
    &COPIES_OF_00535710,
    &COPIES_OF_005372F0,
    &COPIES_OF_005376A0,
    &COPIES_OF_00537D10,
    &COPIES_OF_005471E0,
    &COPIES_OF_00553B00,
    &COPIES_OF_00557B30,
    &COPIES_OF_00557CB0,
    &COPIES_OF_005581A0,
    &COPIES_OF_0055AB90,
    &COPIES_OF_00560B20,
    &COPIES_OF_00560CC0,
    &COPIES_OF_00562BE0,
    &COPIES_OF_00562D80,
    &COPIES_OF_0056F360,
    &COPIES_OF_00571A10,
    &COPIES_OF_005943C0,
    &COPIES_OF_005A1650,
    &COPIES_OF_005A1940,
    &COPIES_OF_005A1F70,
    &COPIES_OF_005A1FC0,
    &COPIES_OF_005A2EA0,
    &COPIES_OF_005B2100,
    &COPIES_OF_005B2240,
    &COPIES_OF_005B40D0,
    &COPIES_OF_005B4110,
    &COPIES_OF_005B4B00,
    &COPIES_OF_005B8D00,
    &COPIES_OF_005BF930,
    &COPIES_OF_005C1080,
    &COPIES_OF_005C1EB0,
    &COPIES_OF_005C1EE0,
    &COPIES_OF_005C2090,
    &COPIES_OF_005C3320,
    &COPIES_OF_005C4010,
    &COPIES_OF_005D0B40,
    &COPIES_OF_005DB610,
    &COPIES_OF_005DBCD0,
    &COPIES_OF_005DBD50,
    &COPIES_OF_005E01A0,
    &COPIES_OF_005E0340,
    &COPIES_OF_005E3230,
    &COPIES_OF_005EB1F0,
    &COPIES_OF_005F1120,
    &COPIES_OF_005FCC70,
    &COPIES_OF_005FCED0,
    &COPIES_OF_005FCFF0,
    &COPIES_OF_005FD640,
    &COPIES_OF_00601D70,
    &COPIES_OF_00602DC0,
    &COPIES_OF_006032B0,
    &COPIES_OF_00603780,
    &COPIES_OF_00603A00,
    &COPIES_OF_00605D80,
    &COPIES_OF_0060C580,
    &COPIES_OF_0060EBB0,
    &COPIES_OF_00611660,
    &COPIES_OF_00624400,
    &COPIES_OF_006480A0,
    &COPIES_OF_006480D0,
    &COPIES_OF_00649110,
    &COPIES_OF_00649510,
    &COPIES_OF_0064B620,
    &COPIES_OF_00680480,
    &COPIES_OF_006805D0,
    &COPIES_OF_00680E10,
    &COPIES_OF_00682840,
    &COPIES_OF_00686E20,
    &COPIES_OF_00687AC0,
    &COPIES_OF_00689630,
    &COPIES_OF_00689D60,
    &COPIES_OF_0068D130,
    &COPIES_OF_0068F460,
    &COPIES_OF_006911D0,
    &COPIES_OF_00697070,
    &COPIES_OF_006D5A80,
    &COPIES_OF_006DB020,
    &COPIES_OF_006DBEF0,
    &COPIES_OF_006E0B30,
    &COPIES_OF_006E58F0,
    &COPIES_OF_006E6A50,
    &COPIES_OF_006E6CC0,
    &COPIES_OF_006E7EB0,
    &COPIES_OF_006E8A70,
    &COPIES_OF_006E9980,
    &COPIES_OF_00710EA0,
    &COPIES_OF_00715710,
    &COPIES_OF_00715730,
    &COPIES_OF_00715D10,
    &COPIES_OF_00716570,
    &COPIES_OF_007234E0,
    &COPIES_OF_00724CC0,
    &COPIES_OF_00725070,
    &COPIES_OF_00728410,
    &COPIES_OF_00728A10,
    &COPIES_OF_0072DCE0,
    &COPIES_OF_00747300,
    &COPIES_OF_007489C0,
    &COPIES_OF_00749C90,
    &COPIES_OF_00780930,
    &COPIES_OF_00781030,
    &COPIES_OF_007813F0,
    &COPIES_OF_00781790,
    &COPIES_OF_00781E10,
    &COPIES_OF_00782C00,
    &COPIES_OF_00783450,
    &COPIES_OF_00787200,
    &COPIES_OF_00787390,
    &COPIES_OF_0078F1C0,
    &COPIES_OF_0078F360,
    &COPIES_OF_00795C50,
    &COPIES_OF_00797C10,
    &COPIES_OF_00798AF0,
    &COPIES_OF_007A23F0,
    &COPIES_OF_007D8360,
    &COPIES_OF_007DCB30,
    &COPIES_OF_007DD140,
    &COPIES_OF_007E4CE0,
    &COPIES_OF_007E4D30,
    &COPIES_OF_007E4F20,
    &COPIES_OF_007E6010,
    &COPIES_OF_008080C0,
    &COPIES_OF_00808870,
    &COPIES_OF_0081CB00,
    &COPIES_OF_008273C0,
    &COPIES_OF_008283B0,
    &COPIES_OF_008283E0,
    &COPIES_OF_0082BDC0,
    &COPIES_OF_008320B0,
    &COPIES_OF_00832920,
    &COPIES_OF_00832EC0,
    &COPIES_OF_00835FE0,
    &COPIES_OF_00837420,
    &COPIES_OF_0083DCE0,
    &COPIES_OF_00852D90,
    &COPIES_OF_00852F30,
    &COPIES_OF_00855A00,
    &COPIES_OF_0085AC90,
    &COPIES_OF_0085AF10,
    &COPIES_OF_0085D290,
    &COPIES_OF_0085D2B0,
    &COPIES_OF_008631F0,
    &COPIES_OF_008733E0,
    &COPIES_OF_00873F60,
    &COPIES_OF_008744F0,
    &COPIES_OF_00876460,
    &COPIES_OF_00878850,
    &COPIES_OF_00878B30,
    &COPIES_OF_00878C10,
    &COPIES_OF_00885180,
    &COPIES_OF_00887620,
    &COPIES_OF_00889F80,
    &COPIES_OF_0088F7A0,
    &COPIES_OF_00895DD0,
    &COPIES_OF_008975A0,
    &COPIES_OF_0089B770,
    &COPIES_OF_0089B850,
    &COPIES_OF_0089C560,
    &COPIES_OF_0089DB10,
    &COPIES_OF_008ABF50,
    &COPIES_OF_008AC9A0,
    &COPIES_OF_008B8A40,
    &COPIES_OF_008E5AC0,
    &COPIES_OF_008F37A0,
    &COPIES_OF_008F8E00,
    &COPIES_OF_008F95F0,
    &COPIES_OF_008FC4D0,
    &COPIES_OF_008FCB80,
    &COPIES_OF_008FCC90,
    &COPIES_OF_008FE5F0,
    &COPIES_OF_00950730,
    &COPIES_OF_00956670,
    &COPIES_OF_0095BBA0,
    &COPIES_OF_0095D6A0,
    &COPIES_OF_0095E390,
    &COPIES_OF_0095E610,
    &COPIES_OF_00972B80,
    &COPIES_OF_00974710,
    &COPIES_OF_0097D330,
    &COPIES_OF_00982F30,
    &COPIES_OF_00985B30,
    &COPIES_OF_00986650,
    &COPIES_OF_00987CA0,
    &COPIES_OF_009885C0,
    &COPIES_OF_00988ED0,
    &COPIES_OF_00989B30,
    &COPIES_OF_0098D700,
    &COPIES_OF_00995260,
    &COPIES_OF_0099B310,
    &COPIES_OF_009A7F10,
    &COPIES_OF_009A80C0,
    &COPIES_OF_009A8580,
    &COPIES_OF_009A9170,
    &COPIES_OF_009A9B70,
    &COPIES_OF_009D6E20,
    &COPIES_OF_009DFF50,
    &COPIES_OF_009E3130,
    &COPIES_OF_009E31E0,
    &COPIES_OF_009EC960,
    &COPIES_OF_00A047C0,
    &COPIES_OF_00A04F40,
    &COPIES_OF_00A061B0,
    &COPIES_OF_00A29730,
    &COPIES_OF_00A2A140,
    &COPIES_OF_00A2C440,
    &COPIES_OF_00A41170,
    &COPIES_OF_00A4A3A0,
    &COPIES_OF_00A55100,
    &COPIES_OF_00A594D0,
    &COPIES_OF_00A59640,
    &COPIES_OF_00A59E20,
    &COPIES_OF_00A5B9B0,
    &COPIES_OF_00A5C5F0,
    &COPIES_OF_00A61A50,
    &COPIES_OF_00A79560,
    &COPIES_OF_00A79620,
    &COPIES_OF_00A9A400,
    &COPIES_OF_00A9B560,
    &COPIES_OF_00A9B850,
    &COPIES_OF_00AA2FF0,
    &COPIES_OF_00AA7930,
    &COPIES_OF_00AAC410,
    &COPIES_OF_00ABC8C0,
    &COPIES_OF_00ABCFF0,
    &COPIES_OF_00ABE600,
    &COPIES_OF_00AC1320,
    &COPIES_OF_00AC2630,
    &COPIES_OF_00AC9D30,
    &COPIES_OF_00ACAA80,
    &COPIES_OF_00ACC750,
    &COPIES_OF_00AD1A40,
    &COPIES_OF_00AD2F90,
    &COPIES_OF_00AD6310,
    &COPIES_OF_00AD6350,
    &COPIES_OF_00ADB4C0,
    &COPIES_OF_00ADB4E0,
    &COPIES_OF_00ADC0C0,
    &COPIES_OF_00ADC940,
    &COPIES_OF_00ADF430,
    &COPIES_OF_00ADF470,
    &COPIES_OF_00ADF4B0,
    &COPIES_OF_00AE1380,
    &COPIES_OF_00AE6A50,
    &COPIES_OF_00AF45F0,
    &COPIES_OF_00AF79C0,
    &COPIES_OF_00AFC640,
    &COPIES_OF_00AFE0C0,
    &COPIES_OF_00AFF020,
    &COPIES_OF_00AFF3D0,
    &COPIES_OF_00B02D80,
    &COPIES_OF_00B04010,
    &COPIES_OF_00B08760,
    &COPIES_OF_00B0A330,
    &COPIES_OF_00B0AD90,
    &COPIES_OF_00B0B540,
    &COPIES_OF_00B12C60,
    &COPIES_OF_00B150B0,
    &COPIES_OF_00B17B70,
    &COPIES_OF_00B191B0,
    &COPIES_OF_00B22BD0,
    &COPIES_OF_00B25710,
    &COPIES_OF_00B25810,
    &COPIES_OF_00B2B900,
    &COPIES_OF_00B34E20,
    &COPIES_OF_00B3DE60,
    &COPIES_OF_00B4E6C0,
    &COPIES_OF_00B4F240,
    &COPIES_OF_00B4F9A0,
    &COPIES_OF_00B57160,
    &COPIES_OF_00B576C0,
    &COPIES_OF_00B58130,
    &COPIES_OF_00B59770,
    &COPIES_OF_00B6BC70,
    &COPIES_OF_00B88120,
    &COPIES_OF_00B8AB10,
    &COPIES_OF_00B8D1D0,
    &COPIES_OF_00B8E6D0,
    &COPIES_OF_00B8F2A0,
    &COPIES_OF_00B90040,
    &COPIES_OF_00B90970,
    &COPIES_OF_00B90D10,
    &COPIES_OF_00B91E10,
    &COPIES_OF_00B930A0,
    &COPIES_OF_00B97290,
    &COPIES_OF_00B97C60,
    &COPIES_OF_00BBF6C0,
    &COPIES_OF_00BC03B0,
    &COPIES_OF_00BCA8B0,
    &COPIES_OF_00BCAAD0,
    &COPIES_OF_00BD1490,
    &COPIES_OF_00BDA180,
    &COPIES_OF_00BF78A0,
    &COPIES_OF_00BFC630,
    &COPIES_OF_00BFDE20,
    &COPIES_OF_00C00740,
    &COPIES_OF_00C00A10,
    &COPIES_OF_00C0A400,
    &COPIES_OF_00C1A540,
    &COPIES_OF_00C2DC10,
    &COPIES_OF_00C2E790,
    &COPIES_OF_00C36FD0,
    &COPIES_OF_00C3D6B0,
    &COPIES_OF_00C3F800,
    &COPIES_OF_00C3FD30,
    &COPIES_OF_00C40930,
    &COPIES_OF_00C4CE30,
    &COPIES_OF_00C4D0C0,
    &COPIES_OF_00C53440,
    &COPIES_OF_00C538F0,
    &COPIES_OF_00C5A5A0,
    &COPIES_OF_00C5C4E0,
    &COPIES_OF_00C657F0,
    &COPIES_OF_00C6E6B0,
    &COPIES_OF_00C7A680,
    &COPIES_OF_00C7BA10,
    &COPIES_OF_00C7BD80,
    &COPIES_OF_00C81DA0,
    &COPIES_OF_00C82260,
    &COPIES_OF_00C834A0,
    &COPIES_OF_00C84E20,
    &COPIES_OF_00C8B9D0,
    &COPIES_OF_00C9CBA0,
    &COPIES_OF_00CAEDA0,
    &COPIES_OF_00CB0A60,
    &COPIES_OF_00CBBC50,
    &COPIES_OF_00CBDD90,
    &COPIES_OF_00CC25A0,
    &COPIES_OF_00CC59C0,
    &COPIES_OF_00CCC020,
    &COPIES_OF_00CCD140,
    &COPIES_OF_00CCEB00,
    &COPIES_OF_00CD1400,
    &COPIES_OF_00CD2080,
    &COPIES_OF_00CD2C10,
    &COPIES_OF_00CD6E90,
    &COPIES_OF_00CD75F0,
    &COPIES_OF_00CD8B40,
    &COPIES_OF_00CDCD60,
    &COPIES_OF_00CE90D0,
    &COPIES_OF_00CEA370,
    &COPIES_OF_00CEC8F0,
    &COPIES_OF_00D05D60,
    &COPIES_OF_00D063B0,
    &COPIES_OF_00D0CEA0,
    &COPIES_OF_00D0D0E0,
    &COPIES_OF_00D22A20,
    &COPIES_OF_00D2A100,
    &COPIES_OF_00D40C90,
    &COPIES_OF_00D41A30,
    &COPIES_OF_00D439C0,
    &COPIES_OF_00D73870,
    &COPIES_OF_00D80A40,
    &COPIES_OF_00D812D0,
    &COPIES_OF_00D814E0,
    &COPIES_OF_00D850E0,
    &COPIES_OF_00D85980,
    &COPIES_OF_00D893C0,
    &COPIES_OF_00D8A9C0,
    &COPIES_OF_00DE5A90,
    &COPIES_OF_00E01D10,
    &COPIES_OF_00E08190,
    &COPIES_OF_00E08C00,
    &COPIES_OF_00E0AA70,
    &COPIES_OF_00E0E440,
    &COPIES_OF_00E0E5A0,
    &COPIES_OF_00E0EF60,
    &COPIES_OF_00E10650,
    &COPIES_OF_00E13B50,
    &COPIES_OF_00E13B70,
    &COPIES_OF_00E13CC0,
    &COPIES_OF_00E24D80,
    &COPIES_OF_00E80BC0,
    &COPIES_OF_00EA7E60,
    &COPIES_OF_00EA8180,
    &COPIES_OF_00EA88F0,
    &COPIES_OF_00EA9260,
    &COPIES_OF_00EAB2F0,
    &COPIES_OF_00EAE020,
    &COPIES_OF_00EAEEB0,
    &COPIES_OF_00EAF050,
    &COPIES_OF_00EB1BB0,
    &COPIES_OF_00EB9D60,
    &COPIES_OF_00EC4D20,
    &COPIES_OF_00EC5DF0,
    &COPIES_OF_00EC6A20,
    &COPIES_OF_00EC71D0,
    &COPIES_OF_00EC7CE0,
    &COPIES_OF_00EC8050,
    &COPIES_OF_00EC8910,
    &COPIES_OF_00EC90D0,
    &COPIES_OF_00ECD0B0,
    &COPIES_OF_00ED10E0,
    &COPIES_OF_00ED4350,
    &COPIES_OF_00ED4850,
    &COPIES_OF_00ED5820,
    &COPIES_OF_00EE6F00,
    &COPIES_OF_00EED160,
    &COPIES_OF_00EED240,
    &COPIES_OF_00EFAD80,
    &COPIES_OF_00F05250,
    &COPIES_OF_00F06960,
    &COPIES_OF_00F1C560,
    &COPIES_OF_00F2FC20,
    &COPIES_OF_00F30B70,
    &COPIES_OF_00F34CD0,
    &COPIES_OF_00F34E70,
    &COPIES_OF_00F3A020,
    &COPIES_OF_00F438F0,
    &COPIES_OF_00F4B310,
    &COPIES_OF_00F4FA90,
    &COPIES_OF_00F5D480,
    &COPIES_OF_00F5F3B0,
    &COPIES_OF_00F60ED0,
    &COPIES_OF_00F7A430,
    &COPIES_OF_00F7CCE0,
    &COPIES_OF_00F85210,
    &COPIES_OF_00F86770,
    &COPIES_OF_00F8C900,
    &COPIES_OF_00F8EDC0,
    &COPIES_OF_00F8F810,
    &COPIES_OF_00F92D00,
    &COPIES_OF_00F98A90,
    &COPIES_OF_00F9A8E0,
    &COPIES_OF_00F9E800,
    &COPIES_OF_00FA39D0,
    &COPIES_OF_00FA5200,
    &COPIES_OF_00FB20A0,
    &COPIES_OF_00FBCB90,
    &COPIES_OF_00FC7FD0,
    &COPIES_OF_00FCB910,
    &COPIES_OF_00FD9340,
    &COPIES_OF_00FDBC90,
    &COPIES_OF_00FF1180,
    &COPIES_OF_00FF1230,
    &COPIES_OF_00FFB2D0,
    &COPIES_OF_010284A0,
    &COPIES_OF_01039330,
    &COPIES_OF_010497F0,
    &COPIES_OF_0104E730,
    &COPIES_OF_0104F400,
    &COPIES_OF_010508A0,
    &COPIES_OF_01051480,
    &COPIES_OF_01053A00,
    &COPIES_OF_010561F0,
    &COPIES_OF_0105A480,
    &COPIES_OF_0107A680,
    &COPIES_OF_0107AA40,
    &COPIES_OF_0107D470,
    &COPIES_OF_0107D8C0,
    &COPIES_OF_0107DA80,
    &COPIES_OF_0107E4F0,
    &COPIES_OF_0108CD90,
    &COPIES_OF_01090010,
    &COPIES_OF_01092290,
    &COPIES_OF_01094D80,
    &COPIES_OF_01096B30,
    &COPIES_OF_010AE0B0,
    &COPIES_OF_010AE2C0,
    &COPIES_OF_010B7560,
    &COPIES_OF_010B8340,
    &COPIES_OF_010B9630,
    &COPIES_OF_010BB7D0,
    &COPIES_OF_010BB800,
    &COPIES_OF_010BC120,
    &COPIES_OF_010C1420,
    &COPIES_OF_010C2660,
    &COPIES_OF_010D6680,
    &COPIES_OF_010D95B0,
    &COPIES_OF_010DD480,
    &COPIES_OF_010F05E0,
    &COPIES_OF_01106E10,
    &COPIES_OF_01118B30,
    &COPIES_OF_0111F310,
    &COPIES_OF_0111F370,
    &COPIES_OF_01126730,
    &COPIES_OF_01127AC0,
    &COPIES_OF_0112A4E0,
    &COPIES_OF_01130D50,
    &COPIES_OF_0113B810,
    &COPIES_OF_0113E8E0,
    &COPIES_OF_01142BD0,
    &COPIES_OF_01144B60,
    &COPIES_OF_01155EB0,
    &COPIES_OF_011564F0,
    &COPIES_OF_01168A70,
    &COPIES_OF_01176240,
    &COPIES_OF_01186E10,
    &COPIES_OF_01220F40,
    &COPIES_OF_0122D450,
    &COPIES_OF_0122F650,
    &COPIES_OF_01233E60,
    &COPIES_OF_0123F4B0,
    &COPIES_OF_01242D00,
    &COPIES_OF_01276C70,
    &COPIES_OF_01296AA0,
    &COPIES_OF_0129C400,
    &COPIES_OF_0129DA60,
    &COPIES_OF_0129DB50,
    &COPIES_OF_0129ED00,
    &COPIES_OF_012B0110,
    &COPIES_OF_012BB020,
    &COPIES_OF_012C7E40,
    &COPIES_OF_012CB4E0,
    &COPIES_OF_012CB830,
    &COPIES_OF_012CC640,
    &COPIES_OF_012CEB80,
    &COPIES_OF_012D01C0,
    &COPIES_OF_012D0D30,
    &COPIES_OF_012D20D0,
    &COPIES_OF_012D2130,
    &COPIES_OF_012D23D0,
    &COPIES_OF_012D67B0,
    &COPIES_OF_012D67E0,
    &COPIES_OF_012DB0A0,
    &COPIES_OF_012DCB00,
    &COPIES_OF_012DCB80,
    &COPIES_OF_012DCC00,
    &COPIES_OF_012DCD00,
    &COPIES_OF_012E8D10,
    &COPIES_OF_012E9E60,
    &COPIES_OF_012F31F0,
    &COPIES_OF_012F81A0,
    &COPIES_OF_012F9590,
    &COPIES_OF_012FB340,
    &COPIES_OF_0130D680,
    &COPIES_OF_0130E850,
    &COPIES_OF_0131D440,
    &COPIES_OF_0131D960,
    &COPIES_OF_0131DD70,
    &COPIES_OF_0131DDB0,
    &COPIES_OF_0131F7C0,
    &COPIES_OF_01320B20,
    &COPIES_OF_01330FF0,
    &COPIES_OF_0133DD60,
    &COPIES_OF_013491C0,
    &COPIES_OF_01350F60,
    &COPIES_OF_0135BAE0,
    &COPIES_OF_01367090,
    &COPIES_OF_013A3F40,
    &COPIES_OF_013A5FF0,
    &COPIES_OF_013A61D0,
    &COPIES_OF_013A67C0,
    &COPIES_OF_013A83E0,
    &COPIES_OF_013ACB30,
    &COPIES_OF_013B5CB0,
    &COPIES_OF_013B63E0,
    &COPIES_OF_013B6CE0,
    &COPIES_OF_013C1220,
    &COPIES_OF_013C6F50,
    &COPIES_OF_013CD010,
    &COPIES_OF_013D4540,
    &COPIES_OF_013D4AD0,
    &COPIES_OF_013DE370,
    &COPIES_OF_013E09C0,
    &COPIES_OF_013E1770,
    &COPIES_OF_013E8700,
    &COPIES_OF_013E8AB0,
    &COPIES_OF_013E8C90,
    &COPIES_OF_013EFAB0,
    &COPIES_OF_013F0440,
    &COPIES_OF_013F8180,
    &COPIES_OF_013FE420,
    &COPIES_OF_01400430,
    &COPIES_OF_01400AE0,
    &COPIES_OF_01400B40,
    &COPIES_OF_01401DB0,
    &COPIES_OF_014020A0,
    &COPIES_OF_014021A0,
    &COPIES_OF_01402DF0,
    &COPIES_OF_01408A70,
    &COPIES_OF_01409FE0,
    &COPIES_OF_0140E610,
    &COPIES_OF_0140F020,
    &COPIES_OF_014130A0,
    &COPIES_OF_0141BE20,
    &COPIES_OF_01426550,
    &COPIES_OF_0142A110,
    &COPIES_OF_0142AAD0,
    &COPIES_OF_0143BB90,
    &COPIES_OF_0143FF00,
    &COPIES_OF_01464E20,
    &COPIES_OF_014699E0,
    &COPIES_OF_0146FCA0,
    &COPIES_OF_01477680,
    &COPIES_OF_01477F60,
    &COPIES_OF_01479540,
    &COPIES_OF_0147B530,
    &COPIES_OF_0147B630,
    &COPIES_OF_014864E0,
    &COPIES_OF_01486680,
    &COPIES_OF_01488530,
    &COPIES_OF_01489820,
    &COPIES_OF_01499A50,
    &COPIES_OF_014A24F0,
    &COPIES_OF_014A2EF0,
    &COPIES_OF_014A30E0,
    &COPIES_OF_014B07E0,
    &COPIES_OF_014B4600,
    &COPIES_OF_014B6750,
    &COPIES_OF_014C06F0,
    &COPIES_OF_014C1B40,
    &COPIES_OF_014CF6A0,
    &COPIES_OF_014EEC00,
    &COPIES_OF_014F96C0,
    &COPIES_OF_01510960,
    &COPIES_OF_01510A70,
    &COPIES_OF_01513450,
    &COPIES_OF_015284A0,
    &COPIES_OF_015307E0,
    &COPIES_OF_0154D780,
    &COPIES_OF_0154F870,
    &COPIES_OF_0155FE30,
    &COPIES_OF_0156CE90,
    &COPIES_OF_01575B80,
    &COPIES_OF_0157D9D0,
    &COPIES_OF_0157DA20,
    &COPIES_OF_0157DBB0,
    &COPIES_OF_015832F0,
    &COPIES_OF_015834A0,
    &COPIES_OF_01583960,
    &COPIES_OF_01584560,
    &COPIES_OF_015851E0,
    &COPIES_OF_0158AAC0,
    &COPIES_OF_015AB880,
    &COPIES_OF_015C0620,
    &COPIES_OF_015C2EF0,
    &COPIES_OF_015C6910,
    &COPIES_OF_015C6B70,
    &COPIES_OF_015CAED0,
    &COPIES_OF_015D7050,
    &COPIES_OF_015DA7C0,
    &COPIES_OF_015DF6C0,
    &COPIES_OF_015FC0F0,
    &COPIES_OF_015FC8D0,
    &COPIES_OF_015FC9D0,
    &COPIES_OF_015FE4A0,
    &COPIES_OF_015FEF00,
    &COPIES_OF_01604A60,
    &COPIES_OF_01606050,
    &COPIES_OF_0160C880,
    &COPIES_OF_0160CD70,
    &COPIES_OF_0160E3B0,
    &COPIES_OF_01613720,
    &COPIES_OF_01616130,
    &COPIES_OF_0161ACC0,
    &COPIES_OF_01625DF0,
    &COPIES_OF_0164A9C0,
    &COPIES_OF_01652710,
    &COPIES_OF_016A3E20,
    &COPIES_OF_016A6A00,
    &COPIES_OF_016ACAF0,
    &COPIES_OF_016ACF00,
    &COPIES_OF_016B0EB0,
    &COPIES_OF_016C5830,
    &COPIES_OF_016C5880,
    &COPIES_OF_016D63B0,
    &COPIES_OF_016F9D30,
    &COPIES_OF_016FFDD0,
    &COPIES_OF_017082B0,
    &COPIES_OF_01709320,
    &COPIES_OF_01711C10,
    &COPIES_OF_01713BA0,
    &COPIES_OF_017142C0,
    &COPIES_OF_01716930,
    &COPIES_OF_01716E20,
    &COPIES_OF_017170A0,
    &COPIES_OF_0173E7B0,
    &COPIES_OF_017409C0,
    &COPIES_OF_0174AAB0,
    &COPIES_OF_0174CBE0,
    &COPIES_OF_01750700,
    &COPIES_OF_01751820,
    &COPIES_OF_0175BF30,
    &COPIES_OF_0175C010,
    &COPIES_OF_0176C8B0,
    &COPIES_OF_01773AB0,
    &COPIES_OF_01777EA0,
    &COPIES_OF_01779530,
    &COPIES_OF_0177FBF0,
    &COPIES_OF_0179A140,
    &COPIES_OF_017C5020,
    &COPIES_OF_017EF240,
    &COPIES_OF_017F2020,
    &COPIES_OF_017FE6D0,
    &COPIES_OF_01803E60,
    &COPIES_OF_018040D0,
    &COPIES_OF_01804C40,
    &COPIES_OF_01804CC0,
    &COPIES_OF_01809FA0,
    &COPIES_OF_01822CF0,
    &COPIES_OF_01831CF0,
    &COPIES_OF_01834A70,
    &COPIES_OF_0183AFE0,
    &COPIES_OF_01847380,
    &COPIES_OF_0184F270,
    &COPIES_OF_0184F740,
    &COPIES_OF_0184FFD0,
    &COPIES_OF_01866E00,
    &COPIES_OF_01876DB0,
    &COPIES_OF_018798D0,
    &COPIES_OF_01881BA0,
    &COPIES_OF_018CF800,
    &COPIES_OF_018CFBE0,
    &COPIES_OF_018E2F80,
    &COPIES_OF_019140B0,
    &COPIES_OF_01980DB0,
    &COPIES_OF_019A3E80,
    &COPIES_OF_019A5760,
    &COPIES_OF_019A7DC0,
    &COPIES_OF_019A97D0,
    &COPIES_OF_019B0290,
    &COPIES_OF_019B95B0,
    &COPIES_OF_019C1C40,
    &COPIES_OF_019D8220,
    &COPIES_OF_019DCA60,
    &COPIES_OF_019DCF40,
    &COPIES_OF_019E4900,
    &COPIES_OF_019E6520,
    &COPIES_OF_019E6560,
    &COPIES_OF_019EB350,
    &COPIES_OF_01A03C10,
    &COPIES_OF_01A31E90,
    &COPIES_OF_01A36DA0,
    &COPIES_OF_01A47770,
    &COPIES_OF_01A51310,
    &COPIES_OF_01A52440,
    &COPIES_OF_01A555F0,
    &COPIES_OF_01A613A0,
    &COPIES_OF_01A7F8B0,
    &COPIES_OF_01A86F10,
    &COPIES_OF_01AE7830,
    &COPIES_OF_01B04E90,
    &COPIES_OF_01B050E0,
    &COPIES_OF_01B14E60,
    &COPIES_OF_01B215F0,
    &COPIES_OF_01B21690,
    &COPIES_OF_01B228C0,
    &COPIES_OF_01B25ED0,
    &COPIES_OF_01B3CEC0,
    &COPIES_OF_01B3E770,
    &COPIES_OF_01B45820,
    &COPIES_OF_01B522D0,
    &COPIES_OF_01B8CDF0,
    &COPIES_OF_01BA02E0,
    &COPIES_OF_01BA03C0,
    &COPIES_OF_01BACE40,
    &COPIES_OF_01BBB290,
    &COPIES_OF_01BBB340,
    &COPIES_OF_01BBC400,
    &COPIES_OF_01BCC400,
    &COPIES_OF_01BD6570,
    &COPIES_OF_01BE9AD0,
    &COPIES_OF_01C028A0,
    &COPIES_OF_01C760D0,
    &COPIES_OF_01C76FD0,
    &COPIES_OF_01C77280,
    &COPIES_OF_01C9C210,
    &COPIES_OF_01CA51A0,
    &COPIES_OF_01CA5520,
    &COPIES_OF_01CA56C0,
    &COPIES_OF_01CA8490,
    &COPIES_OF_01CFD3A0,
    &COPIES_OF_01CFD430,
    &COPIES_OF_01CFD750,
    &COPIES_OF_01D1BF50,
    &COPIES_OF_01D2B0A0,
    &COPIES_OF_01D42CF0,
    &COPIES_OF_01D42D40,
];

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn no_routine_lists_the_copy_that_was_ported_among_its_others() {
        for routine in DUPLICATED_ROUTINES {
            assert!(
                !routine.copies.contains(&routine.ported),
                "{:#X}",
                routine.ported
            );
        }
    }

    #[test]
    fn no_address_appears_twice_anywhere() {
        let mut seen: Vec<u32> = Vec::new();
        for routine in DUPLICATED_ROUTINES {
            seen.push(routine.ported);
            seen.extend_from_slice(routine.copies);
        }
        let before = seen.len();
        seen.sort_unstable();
        seen.dedup();

        assert_eq!(seen.len(), before);
    }

    #[test]
    fn every_routine_has_at_least_two_copies_and_names_where_it_went() {
        for routine in DUPLICATED_ROUTINES {
            assert!(routine.total_copies() >= 2, "{:#X}", routine.ported);
            assert!(routine.rust_path.contains("/src/"), "{:#X}", routine.ported);
        }
    }

    #[test]
    fn a_routine_knows_which_addresses_are_its_own() {
        let routine = DUPLICATED_ROUTINES[0];

        assert!(routine.holds(routine.ported));
        assert!(routine.holds(routine.copies[0]));
        assert!(!routine.holds(0));
    }

    #[test]
    fn the_largest_groups_are_templates_rather_than_repetition() {
        let largest = DUPLICATED_ROUTINES
            .into_iter()
            .map(DuplicatedRoutine::total_copies)
            .max()
            .unwrap_or(0);

        assert!(largest > 50);
    }
}
