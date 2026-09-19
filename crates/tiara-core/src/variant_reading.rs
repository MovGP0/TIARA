//! Reading a value cell as the width you want.
//!
//! The other half of the unit: the setters put one kind in, and these take any
//! kind out. Each reader is one long decision on the type code, and what comes
//! out of assembling them is a conversion matrix — which kinds can be read as
//! which width, which round, which raise, and which quietly answer zero.
//!
//! The reader recovered here in full is the thirty-two bit one, because it is
//! the most complete: every other reader falls back to it or to its wider twin
//! for anything it does not handle itself.

/// How a cell of one kind is read as a narrower whole number.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Conversion {
    /// Taken as it stands.
    AsItStands,
    /// Widened, keeping its sign.
    SignExtended,
    /// Widened, filling with zeros.
    ZeroExtended,
    /// Rounded from a floating value, half to even.
    Rounded,
    /// Rounded by the routine money uses, which is not the same one.
    RoundedAsMoney,
    /// Parsed out of text.
    Parsed,
    /// Asked of an interface.
    AskedOfAnInterface,
    /// Read from the cell it points at, by calling the reader again.
    Followed,
    /// Answered as zero, and nothing is said.
    SilentlyZero,
    /// Answered as zero, or raised, depending on a global.
    ZeroOrRaised,
    /// Refused where the value will not fit.
    RefusedWhenTooLarge,
}

/// One row of the conversion matrix.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct Row {
    /// The type code held in the cell.
    pub code: u16,
    /// How it is read.
    pub conversion: Conversion,
    /// Whether the result is checked against the width it has to fit.
    pub range_checked: bool,
}

/// How every kind is read as a thirty-two bit whole number.
///
/// Implements Ghidra function `FUN_00462650` at `0x00462650`.
///
/// Read in full because it is the reader the rest of the family leans on, and
/// because the rows say more together than apart. Four of them are worth
/// noticing:
///
/// * An empty cell answers zero and says nothing. A null cell answers zero as
///   well, unless a global is set, in which case it raises — so the difference
///   between the two is not what they mean but whether anyone is told.
/// * A boolean is widened keeping its sign, so a cell holding true reads as
///   minus one. That is the same conclusion the setter reaches from the other
///   side, arrived at independently.
/// * An unsigned thirty-two bit value above the signed limit is refused
///   outright — while the flattening in the same unit turns the same value into
///   a floating one instead. Two answers to one situation, a few hundred bytes
///   apart.
/// * Money is rounded by a different routine from the one floating values and
///   dates use, so the rounding of a money value need not match.
pub const READ_AS_INTEGER: [Row; 18] = [
    Row {
        code: 0x0,
        conversion: Conversion::SilentlyZero,
        range_checked: false,
    },
    Row {
        code: 0x1,
        conversion: Conversion::ZeroOrRaised,
        range_checked: false,
    },
    Row {
        code: 0x2,
        conversion: Conversion::SignExtended,
        range_checked: false,
    },
    Row {
        code: 0x3,
        conversion: Conversion::AsItStands,
        range_checked: false,
    },
    Row {
        code: 0x4,
        conversion: Conversion::Rounded,
        range_checked: true,
    },
    Row {
        code: 0x5,
        conversion: Conversion::Rounded,
        range_checked: true,
    },
    Row {
        code: 0x6,
        conversion: Conversion::RoundedAsMoney,
        range_checked: true,
    },
    Row {
        code: 0x7,
        conversion: Conversion::Rounded,
        range_checked: true,
    },
    Row {
        code: 0x8,
        conversion: Conversion::Parsed,
        range_checked: false,
    },
    Row {
        code: 0x9,
        conversion: Conversion::AskedOfAnInterface,
        range_checked: false,
    },
    Row {
        code: 0xB,
        conversion: Conversion::SignExtended,
        range_checked: false,
    },
    Row {
        code: 0xC,
        conversion: Conversion::Followed,
        range_checked: false,
    },
    Row {
        code: 0xD,
        conversion: Conversion::AskedOfAnInterface,
        range_checked: false,
    },
    Row {
        code: 0x10,
        conversion: Conversion::SignExtended,
        range_checked: false,
    },
    Row {
        code: 0x11,
        conversion: Conversion::ZeroExtended,
        range_checked: false,
    },
    Row {
        code: 0x12,
        conversion: Conversion::ZeroExtended,
        range_checked: false,
    },
    Row {
        code: 0x13,
        conversion: Conversion::RefusedWhenTooLarge,
        range_checked: true,
    },
    Row {
        code: 0x14,
        conversion: Conversion::AsItStands,
        range_checked: true,
    },
];

/// The further kinds the reader handles past the matrix above.
///
/// Part of Ghidra function `FUN_00462650` at `0x00462650`.
///
/// The unsigned sixty-four bit value and the three kinds of string. All three
/// strings are parsed, and two of them by the very same routine — so the
/// narrower and the wider string are read identically and only the third kind
/// has a path of its own.
pub const ALSO_READ: [Row; 4] = [
    Row {
        code: 0x15,
        conversion: Conversion::RefusedWhenTooLarge,
        range_checked: true,
    },
    Row {
        code: 0x100,
        conversion: Conversion::Parsed,
        range_checked: false,
    },
    Row {
        code: 0x101,
        conversion: Conversion::Parsed,
        range_checked: false,
    },
    Row {
        code: 0x102,
        conversion: Conversion::Parsed,
        range_checked: false,
    },
];

/// Implements part of Ghidra function `FUN_00462650` at `0x00462650`.
///
/// How one kind is read, if the reader knows it.
#[must_use]
pub fn conversion_for(code: u16) -> Option<Conversion> {
    READ_AS_INTEGER
        .iter()
        .chain(ALSO_READ.iter())
        .find(|row| row.code == code)
        .map(|row| row.conversion)
}

/// The bit that says the cell points at its value.
///
/// Part of Ghidra function `FUN_00462650` at `0x00462650`.
pub const BY_REFERENCE: u16 = 0x4000;

/// What is left of a code once the pointing bit is taken off.
///
/// Part of Ghidra function `FUN_00462650` at `0x00462650`.
///
/// Only that one bit is cleared, so a cell holding many values by reference
/// keeps the bit that says so and then matches nothing.
pub const WITHOUT_THE_POINTING_BIT: u16 = 0xBFFF;

/// The kinds the reader handles when the cell points at its value.
///
/// Part of Ghidra function `FUN_00462650` at `0x00462650`.
///
/// The same decision written a second time with one more dereference in every
/// branch — and it is shorter. An empty cell, a null one, either interface and
/// any of the three strings are all missing, so the same value read directly
/// and read through a pointer takes different routes and can end differently.
pub const READ_BY_REFERENCE: [u16; 15] = [
    0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0xB, 0xC, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15,
];

/// Implements part of Ghidra function `FUN_00462650` at `0x00462650`.
///
/// The kinds handled directly but not through a pointer.
#[must_use]
pub fn missing_from_the_pointing_half() -> Vec<u16> {
    READ_AS_INTEGER
        .iter()
        .chain(ALSO_READ.iter())
        .map(|row| row.code)
        .filter(|code| !READ_BY_REFERENCE.contains(code))
        .collect()
}

/// Implements part of Ghidra function `FUN_00462650` at `0x00462650`.
///
/// Whether a kind the reader does not know is offered to a custom handler
/// first.
///
/// It is, but only when the cell holds its value outright. A pointing cell
/// whose kind is not in the shorter list goes straight to being asked of an
/// interface, and the custom handler never gets a chance — the second
/// asymmetry between the two halves.
#[must_use]
pub const fn tries_a_custom_handler(points_at_its_value: bool) -> bool {
    !points_at_its_value
}

/// Implements Ghidra function `FUN_00463a50` at `0x00463A50`.
///
/// The kinds the unsigned sixty-four bit reader handles itself.
///
/// Seven, and everything else is read as a **signed** sixty-four bit value and
/// then refused if it came out negative. That has a consequence the routine
/// does not acknowledge: a value in the top half of the unsigned range is
/// rejected by the signed reader before this one ever sees it, so the unsigned
/// reader cannot reach the upper half of its own range for any kind it does not
/// handle directly. A floating value of ten to the nineteenth is refused even
/// though it fits.
pub const UNSIGNED_WIDE_READS_ITSELF: [u16; 7] = [0x0, 0x1, 0xB, 0x11, 0x12, 0x13, 0x15];

/// Implements part of Ghidra function `FUN_00463a50` at `0x00463A50`.
///
/// Whether the unsigned wide reader can reach the top half of its own range for
/// one kind.
#[must_use]
pub fn reaches_its_whole_range(code: u16) -> bool {
    UNSIGNED_WIDE_READS_ITSELF.contains(&code) || code == (BY_REFERENCE | 0x15)
}

/// What each reader says it was converting to when a null cell is refused.
///
/// Part of Ghidra functions `FUN_00462650` at `0x00462650`, `FUN_004634b0` at
/// `0x004634B0`, `FUN_00463a50` at `0x00463A50`, `FUN_00464710` at
/// `0x00464710`, `FUN_004651a0` at `0x004651A0` and `FUN_00465930` at
/// `0x00465930`.
///
/// Five of the six name the width they actually answer. The unsigned wide one
/// names the unsigned **narrow** width instead, so its message is wrong about
/// what it was asked for. That is only visible by laying the six side by side,
/// which is the reason to read a family rather than a routine.
pub const REPORTED_TARGETS: [(u32, u16, u16); 6] = [
    (0x0046_2650, 0x3, 0x3),
    (0x0046_34B0, 0x14, 0x14),
    (0x0046_3A50, 0x13, 0x15),
    (0x0046_4710, 0x5, 0x5),
    (0x0046_51A0, 0x7, 0x7),
    (0x0046_5930, 0x6, 0x6),
];

/// Implements part of Ghidra function `FUN_00463a50` at `0x00463A50`.
///
/// The readers whose refusal names a width they do not answer.
#[must_use]
pub fn misreport_their_target() -> Vec<u32> {
    REPORTED_TARGETS
        .iter()
        .filter(|(_, said, answers)| said != answers)
        .map(|(routine, _, _)| *routine)
        .collect()
}

/// The code that stands for nothing at all.
///
/// Part of Ghidra function `FUN_00460110` at `0x00460110`.
pub const NULL_CODE: u16 = 1;

/// Implements Ghidra function `FUN_00460110` at `0x00460110`.
///
/// Whether refusing to read a null cell says anything.
///
/// A global decides. With it clear, every reader answers zero for a null cell
/// and nothing is raised — so a null reaching arithmetic is indistinguishable
/// from a zero, and a calculation over a column with gaps in it comes out as
/// though the gaps were zeroes.
#[must_use]
pub const fn null_is_reported(strict: bool) -> bool {
    strict
}

/// Implements Ghidra function `FUN_004607e0` at `0x004607E0`.
///
/// Whether a returned status means something went wrong.
///
/// Anything but zero. The simple conversions answer a code rather than raising,
/// and this one call is what turns a code into a raise — so a caller that
/// forgets it carries on with a value that was never converted.
#[must_use]
pub const fn status_means_failure(status: i32) -> bool {
    status != 0
}

/// The two ways the unit gives up.
///
/// Implements Ghidra functions `FUN_00460210` at `0x00460210` and
/// `FUN_004600a0` at `0x004600A0`.
///
/// Both build a message from a stored text and raise, and they differ only in
/// the text and the class. One is raised by the arithmetic when it is asked for
/// an operation it has no code for; the other by the flattening when no handler
/// is registered for a kind. Separate classes, so a caller can tell an
/// impossible operation from an unknown kind — which is the only reason to have
/// two.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Failure {
    /// No such operation for this width.
    OperationNotPossible,
    /// Nothing registered that understands this kind.
    NoHandlerForTheKind,
}

/// Implements part of Ghidra functions `FUN_00460210` at `0x00460210` and
/// `FUN_004600a0` at `0x004600A0`.
///
/// Where each failure is raised from.
#[must_use]
pub const fn raised_at(failure: Failure) -> u32 {
    match failure {
        Failure::OperationNotPossible => 0x0046_0210,
        Failure::NoHandlerForTheKind => 0x0046_00A0,
    }
}

/// The lowest kind a custom handler can be registered for.
///
/// Part of Ghidra function `FUN_0046eed0` at `0x0046EED0`.
pub const FIRST_CUSTOM_KIND: u16 = 0x100;

/// The highest.
///
/// Part of Ghidra function `FUN_0046eed0` at `0x0046EED0`.
pub const LAST_CUSTOM_KIND: u16 = 0x7FF;

/// How the registry answers when it has nothing.
///
/// Part of Ghidra function `FUN_0046eed0` at `0x0046EED0`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Lookup {
    /// Refused before the lock is taken, for a kind outside the range.
    RefusedOutright,
    /// Looked for under the lock and not found.
    LookedForAndMissing,
    /// Found.
    Found,
}

/// Implements Ghidra function `FUN_0046eed0` at `0x0046EED0`.
///
/// Finds the handler registered for one kind.
///
/// Three things are recovered here beyond the obvious. The range is tested
/// before the lock is taken, so a kind outside it costs nothing while a kind
/// inside it that is simply not registered costs a lock — the registry says no
/// in two ways at very different prices. The table length is read from the word
/// in front of the table, the same convention the rest of the run time uses. And
/// a slot counts as empty when it is nothing **or** when it holds one particular
/// value, so there is a registered-but-unusable state distinct from unregistered.
#[must_use]
pub fn find_handler(
    kind: u16,
    registered: &[Option<u32>],
    unusable: u32,
    table_ready: bool,
) -> Lookup {
    if !table_ready || !(FIRST_CUSTOM_KIND..=LAST_CUSTOM_KIND).contains(&kind) {
        return Lookup::RefusedOutright;
    }
    let at = usize::from(kind - FIRST_CUSTOM_KIND);
    match registered.get(at) {
        Some(Some(handler)) if *handler != unusable => Lookup::Found,
        _ => Lookup::LookedForAndMissing,
    }
}

/// Implements Ghidra function `FUN_00468ad0` at `0x00468AD0`.
///
/// Whether storing the narrower kind of string goes through a temporary.
///
/// It does: a temporary is made, the text converted into it, the cell set from
/// the temporary, and the temporary released. So a cell never comes to hold the
/// narrower kind by being assigned one — it holds the platform's kind instead,
/// which agrees with what the flattening does to the same kind.
#[must_use]
pub const fn narrow_text_goes_through_a_temporary() -> bool {
    true
}

/// Implements Ghidra function `FUN_00468bb0` at `0x00468BB0`.
///
/// How many cell operations storing the third kind of text costs.
///
/// Four: a temporary is prepared, copied into, handed to a routine installed at
/// run time, copied back out, and the temporary emptied. Two full cell copies
/// for one conversion, which is what handing the work to something installed
/// elsewhere costs when it can only be reached through a cell.
pub const FOREIGN_TEXT_CELL_OPERATIONS: usize = 4;

/// The locale every conversion through the platform is done in.
///
/// Part of Ghidra functions `FUN_00462530` at `0x00462530` and `FUN_00462400`
/// at `0x00462400`.
///
/// The user's own, not a fixed one — so reading a text as a number depends on
/// the regional settings of whoever is running the program, and the same file
/// read on two machines need not give the same numbers.
pub const CONVERSION_LOCALE: u32 = 0x400;

/// The one failure the text parse tries to recover from.
///
/// Part of Ghidra function `FUN_00462400` at `0x00462400`.
///
/// Anything else raises at once. This one means the platform did not recognise
/// the text as a number at all, and that is where the program takes over.
pub const TEXT_NOT_A_NUMBER: i32 = -0x7FFD_FFFB;

/// What the text parse tries, in order.
///
/// Implements Ghidra function `FUN_00462400` at `0x00462400`.
///
/// Three attempts, and the third is the surprising one: a text the platform
/// cannot read as a number is tried as a whole number by the program itself,
/// and failing that as a **boolean**. So the word for truth, written out, reads
/// as a number.
///
/// Which number it reads as is the interesting part. A boolean cell holds every
/// bit set and reads as minus one; a boolean parsed out of text is taken as a
/// single byte and reads as one. The same truth therefore has two numeric values
/// depending only on whether it was ever written down.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TextAttempt {
    /// The platform's own conversion, in the user's locale.
    ThePlatform,
    /// The program's own whole-number parse.
    ItsOwnNumberParse,
    /// The program's own boolean parse.
    ItsOwnBooleanParse,
}

/// Implements part of Ghidra function `FUN_00462400` at `0x00462400`.
///
/// The attempts a text gets, in order.
#[must_use]
pub fn text_attempts(platform_status: i32) -> Vec<TextAttempt> {
    if platform_status == 0 {
        return vec![TextAttempt::ThePlatform];
    }
    if platform_status == TEXT_NOT_A_NUMBER {
        return vec![
            TextAttempt::ThePlatform,
            TextAttempt::ItsOwnNumberParse,
            TextAttempt::ItsOwnBooleanParse,
        ];
    }
    vec![TextAttempt::ThePlatform]
}

/// What a boolean read out of text comes to.
///
/// Part of Ghidra function `FUN_00462400` at `0x00462400`.
///
/// One, because it is taken as a single byte. Set against
/// [`crate::variant_value::TRUE_AS_STORED`], which is every bit set and reads as
/// minus one.
pub const TRUE_FROM_TEXT: u32 = 1;

/// Implements Ghidra function `FUN_00410a90` at `0x00410A90`.
///
/// The error a value too large to fit is refused with.
///
/// Raised at the address of whoever asked rather than here, so the failure is
/// reported against the conversion the caller wrote and not against the reader —
/// the same convention the rest of the run time uses.
pub const RANGE_ERROR: i32 = 4;

/// Implements part of Ghidra function `FUN_00410a90` at `0x00410A90`.
///
/// Whether the refusal names the caller rather than the reader.
#[must_use]
pub const fn refused_at_the_callers_address() -> bool {
    true
}

/// How a money value is rounded.
///
/// Part of Ghidra function `FUN_0040c780` at `0x0040C780`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum RoundingMode {
    /// To the nearest, and to the even one on a tie.
    Nearest,
    /// Always downward.
    TowardNegative,
    /// Always upward.
    TowardPositive,
    /// Toward zero.
    ///
    /// Not tested for by the routine at all. It falls through every branch and
    /// the truncating division that opened the routine is left standing — which
    /// happens to be the right answer, so the omission cannot be seen from
    /// outside.
    TowardZero,
}

/// What money is scaled by where it is rounded.
///
/// Part of Ghidra function `FUN_0040c780` at `0x0040C780`.
pub const MONEY_SCALE: i64 = 10_000;

/// Implements Ghidra function `FUN_0040c780` at `0x0040C780`.
///
/// Rounds a scaled money value to a whole number.
///
/// Not the same routine floating values and dates are rounded by, and not the
/// same result either: this one divides first and then decides on the
/// remainder, and it asks the processor which way it is currently set to round.
/// So the rounding of a money value depends on state the caller did not pass in.
///
/// It also has a boundary wrong. The test that picks the downward branch asks
/// whether the whole part is **less than one** rather than whether it is
/// negative, so a value whose whole part is zero always takes the downward
/// branch. Downward is right for a negative remainder and wrong for a positive
/// one, and the consequence is exact: a money value above a half and below one
/// rounds to zero, while its negative counterpart rounds correctly to minus one.
/// The upward mode is unreachable there for the same reason. See
/// [`rounds_the_wrong_way`].
#[must_use]
pub fn round_money(scaled: i64, mode: RoundingMode) -> i64 {
    let mut whole = scaled / MONEY_SCALE;
    let rest = scaled % MONEY_SCALE;
    let half = MONEY_SCALE / 2;

    // The recovered test: less than one, not less than zero.
    if whole < 1 {
        match mode {
            RoundingMode::Nearest => {
                if rest < -half || (rest == -half && whole & 1 != 0) {
                    whole -= 1;
                }
            }
            RoundingMode::TowardNegative => {
                if rest < 0 {
                    whole -= 1;
                }
            }
            RoundingMode::TowardPositive | RoundingMode::TowardZero => {}
        }
    } else if mode == RoundingMode::Nearest {
        if rest > half || (rest == half && whole & 1 != 0) {
            whole += 1;
        }
    } else if mode == RoundingMode::TowardPositive && rest > 0 {
        whole += 1;
    }
    whole
}

/// Implements part of Ghidra function `FUN_0040c780` at `0x0040C780`.
///
/// Whether one scaled value is rounded the wrong way.
///
/// Only where the whole part is zero and the remainder should have carried —
/// which is to say, only for a value above a half and below one. It is not a
/// rounding that is merely imprecise: the answer is a whole unit out.
#[must_use]
pub fn rounds_the_wrong_way(scaled: i64) -> bool {
    round_money(scaled, RoundingMode::Nearest) != rounded_properly(scaled)
}

/// What rounding to the nearest, ties to the even, would have given.
///
/// Here to isolate the boundary in [`round_money`] from the tie rule, which is
/// correct: comparing against rounding half away from zero would flag every
/// exact tie and hide the one thing that is actually wrong.
#[must_use]
pub const fn rounded_properly(scaled: i64) -> i64 {
    let whole = scaled / MONEY_SCALE;
    let rest = scaled % MONEY_SCALE;
    let half = MONEY_SCALE / 2;

    if rest > half || (rest == half && whole & 1 != 0) {
        whole + 1
    } else if rest < -half || (rest == -half && whole & 1 != 0) {
        whole - 1
    } else {
        whole
    }
}

/// How a cell is asked of an interface, or of an installed routine.
///
/// Implements Ghidra functions `FUN_00462530` at `0x00462530`, `FUN_00462580`
/// at `0x00462580` and `FUN_004625f0` at `0x004625F0`.
///
/// All three have the same shape — prepare a cell, hand it to something that was
/// not compiled in, take the answer out — and they differ only in what they hand
/// it to. That is what makes a kind the reader has never heard of readable at
/// all.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AskedOf {
    /// The platform's own conversion service, in the user's locale.
    ThePlatform,
    /// A routine installed at run time, reached through a stored pointer.
    AnInstalledRoutine,
    /// The handler registered for the kind, through a slot of its own.
    ARegisteredHandler,
}

/// Implements part of Ghidra functions `FUN_00462530` at `0x00462530`,
/// `FUN_00462580` at `0x00462580` and `FUN_004625f0` at `0x004625F0`.
///
/// Which of the three is used for one kind.
#[must_use]
pub const fn asked_of(code: u16) -> Option<AskedOf> {
    match code {
        0x9 | 0xD => Some(AskedOf::ThePlatform),
        0x101 => Some(AskedOf::AnInstalledRoutine),
        FIRST_CUSTOM_KIND..=LAST_CUSTOM_KIND => Some(AskedOf::ARegisteredHandler),
        _ => None,
    }
}

/// Implements part of Ghidra function `FUN_00462580` at `0x00462580`.
///
/// Whether reading the third kind of text ends by reading a cell again.
///
/// It does: the installed routine leaves an ordinary cell behind, and that cell
/// is then read by the very reader that was called in the first place. So the
/// recursion is real but bounded — the installed routine has to leave something
/// simpler than it was given, and nothing here enforces that.
#[must_use]
pub const fn reads_the_result_again() -> bool {
    true
}

/// A width a cell can be read as.
///
/// Implements Ghidra functions `FUN_00462650` at `0x00462650`, `FUN_004634b0`
/// at `0x004634B0`, `FUN_00463a50` at `0x00463A50`, `FUN_00464710` at
/// `0x00464710`, `FUN_004651a0` at `0x004651A0` and `FUN_00465930` at
/// `0x00465930`.
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord)]
pub enum Target {
    /// Thirty-two bits, signed.
    Integer32,
    /// Sixty-four bits, signed.
    Integer64,
    /// Sixty-four bits, unsigned.
    Unsigned64,
    /// Floating.
    Floating,
    /// A date.
    Date,
    /// A scaled amount of money.
    Money,
    /// True or false.
    Boolean,
    /// Floating, but narrower.
    Single,
    /// Sixteen bits, signed.
    SmallInt,
}

/// What one reader does with one source kind.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum How {
    /// Answered as nothing, silently.
    Zero,
    /// Answered as nothing, or refused, depending on a global.
    ZeroOrRaised,
    /// Widened, with or without its sign as the source kind requires.
    Widened,
    /// Taken as the bytes stand.
    AsItStands,
    /// Multiplied up into the money scale.
    ScaledUp,
    /// Divided back out of it.
    ScaledDown,
    /// Rounded, half to even.
    Rounded,
    /// Rounded by the money routine, which is not the same one.
    RoundedAsMoney,
    /// Converted by way of a floating value, losing exactness past
    /// fifty-three bits.
    ThroughADouble,
    /// Corrected for the sign a wide unsigned value appears to have.
    CorrectedForSign,
    /// Taken as the bytes stand, **without** that correction.
    Reinterpreted,
    /// Parsed, by the routine the other two string kinds share.
    Parsed,
    /// Parsed, by a routine of its own.
    ParsedApart,
    /// Handed to something that was not compiled in.
    Asked,
    /// Read again from the cell this one points at.
    Followed,
    /// Answered as whether the value is anything but zero.
    NotZero,
}

/// One cell of the conversion matrix.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct Treatment {
    /// The width being read as.
    pub target: Target,
    /// The kind held in the cell.
    pub code: u16,
    /// What is done.
    pub how: How,
    /// Whether the result is checked against the width before it is answered.
    pub range_checked: bool,
}

/// The whole conversion matrix.
///
/// Implements the six readers named on [`Target`].
///
/// Five of the six handle an identical set of twenty-two kinds, which is what
/// one template instantiated five times looks like. The sixth — the unsigned
/// wide one — handles seven and delegates the rest, and is the only one that
/// was not written from the template.
///
/// Read across a row and the family's one decision stands out: the narrow
/// signed reader checks every value it rounds or narrows against the width it
/// has to fit, and the wide signed reader checks nothing at all. The same
/// split appears independently in the arithmetic, where only the narrow routine
/// notices an overflow — so it is a decision taken twice rather than an
/// oversight taken once.
pub const CONVERSIONS: [Treatment; 117] = [
    Treatment {
        target: Target::Integer32,
        code: 0x000,
        how: How::Zero,
        range_checked: false,
    },
    Treatment {
        target: Target::Integer32,
        code: 0x001,
        how: How::ZeroOrRaised,
        range_checked: false,
    },
    Treatment {
        target: Target::Integer32,
        code: 0x002,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Integer32,
        code: 0x003,
        how: How::AsItStands,
        range_checked: false,
    },
    Treatment {
        target: Target::Integer32,
        code: 0x004,
        how: How::Rounded,
        range_checked: true,
    },
    Treatment {
        target: Target::Integer32,
        code: 0x005,
        how: How::Rounded,
        range_checked: true,
    },
    Treatment {
        target: Target::Integer32,
        code: 0x006,
        how: How::RoundedAsMoney,
        range_checked: true,
    },
    Treatment {
        target: Target::Integer32,
        code: 0x007,
        how: How::Rounded,
        range_checked: true,
    },
    Treatment {
        target: Target::Integer32,
        code: 0x008,
        how: How::Parsed,
        range_checked: false,
    },
    Treatment {
        target: Target::Integer32,
        code: 0x009,
        how: How::Asked,
        range_checked: false,
    },
    Treatment {
        target: Target::Integer32,
        code: 0x00b,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Integer32,
        code: 0x00c,
        how: How::Followed,
        range_checked: false,
    },
    Treatment {
        target: Target::Integer32,
        code: 0x00d,
        how: How::Asked,
        range_checked: false,
    },
    Treatment {
        target: Target::Integer32,
        code: 0x010,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Integer32,
        code: 0x011,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Integer32,
        code: 0x012,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Integer32,
        code: 0x013,
        how: How::AsItStands,
        range_checked: true,
    },
    Treatment {
        target: Target::Integer32,
        code: 0x014,
        how: How::AsItStands,
        range_checked: true,
    },
    Treatment {
        target: Target::Integer32,
        code: 0x015,
        how: How::AsItStands,
        range_checked: true,
    },
    Treatment {
        target: Target::Integer32,
        code: 0x100,
        how: How::Parsed,
        range_checked: false,
    },
    Treatment {
        target: Target::Integer32,
        code: 0x101,
        how: How::ParsedApart,
        range_checked: false,
    },
    Treatment {
        target: Target::Integer32,
        code: 0x102,
        how: How::Parsed,
        range_checked: false,
    },
    Treatment {
        target: Target::Integer64,
        code: 0x000,
        how: How::Zero,
        range_checked: false,
    },
    Treatment {
        target: Target::Integer64,
        code: 0x001,
        how: How::ZeroOrRaised,
        range_checked: false,
    },
    Treatment {
        target: Target::Integer64,
        code: 0x002,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Integer64,
        code: 0x003,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Integer64,
        code: 0x004,
        how: How::Rounded,
        range_checked: false,
    },
    Treatment {
        target: Target::Integer64,
        code: 0x005,
        how: How::Rounded,
        range_checked: false,
    },
    Treatment {
        target: Target::Integer64,
        code: 0x006,
        how: How::RoundedAsMoney,
        range_checked: false,
    },
    Treatment {
        target: Target::Integer64,
        code: 0x007,
        how: How::Rounded,
        range_checked: false,
    },
    Treatment {
        target: Target::Integer64,
        code: 0x008,
        how: How::Parsed,
        range_checked: false,
    },
    Treatment {
        target: Target::Integer64,
        code: 0x009,
        how: How::Asked,
        range_checked: false,
    },
    Treatment {
        target: Target::Integer64,
        code: 0x00b,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Integer64,
        code: 0x00c,
        how: How::Followed,
        range_checked: false,
    },
    Treatment {
        target: Target::Integer64,
        code: 0x00d,
        how: How::Asked,
        range_checked: false,
    },
    Treatment {
        target: Target::Integer64,
        code: 0x010,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Integer64,
        code: 0x011,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Integer64,
        code: 0x012,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Integer64,
        code: 0x013,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Integer64,
        code: 0x014,
        how: How::AsItStands,
        range_checked: false,
    },
    Treatment {
        target: Target::Integer64,
        code: 0x015,
        how: How::Reinterpreted,
        range_checked: false,
    },
    Treatment {
        target: Target::Integer64,
        code: 0x100,
        how: How::Parsed,
        range_checked: false,
    },
    Treatment {
        target: Target::Integer64,
        code: 0x101,
        how: How::ParsedApart,
        range_checked: false,
    },
    Treatment {
        target: Target::Integer64,
        code: 0x102,
        how: How::Parsed,
        range_checked: false,
    },
    Treatment {
        target: Target::Floating,
        code: 0x000,
        how: How::Zero,
        range_checked: false,
    },
    Treatment {
        target: Target::Floating,
        code: 0x001,
        how: How::ZeroOrRaised,
        range_checked: false,
    },
    Treatment {
        target: Target::Floating,
        code: 0x002,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Floating,
        code: 0x003,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Floating,
        code: 0x004,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Floating,
        code: 0x005,
        how: How::AsItStands,
        range_checked: false,
    },
    Treatment {
        target: Target::Floating,
        code: 0x006,
        how: How::ScaledDown,
        range_checked: false,
    },
    Treatment {
        target: Target::Floating,
        code: 0x007,
        how: How::AsItStands,
        range_checked: false,
    },
    Treatment {
        target: Target::Floating,
        code: 0x008,
        how: How::Parsed,
        range_checked: false,
    },
    Treatment {
        target: Target::Floating,
        code: 0x009,
        how: How::Asked,
        range_checked: false,
    },
    Treatment {
        target: Target::Floating,
        code: 0x00b,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Floating,
        code: 0x00c,
        how: How::Followed,
        range_checked: false,
    },
    Treatment {
        target: Target::Floating,
        code: 0x00d,
        how: How::Asked,
        range_checked: false,
    },
    Treatment {
        target: Target::Floating,
        code: 0x010,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Floating,
        code: 0x011,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Floating,
        code: 0x012,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Floating,
        code: 0x013,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Floating,
        code: 0x014,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Floating,
        code: 0x015,
        how: How::CorrectedForSign,
        range_checked: false,
    },
    Treatment {
        target: Target::Floating,
        code: 0x100,
        how: How::Parsed,
        range_checked: false,
    },
    Treatment {
        target: Target::Floating,
        code: 0x101,
        how: How::ParsedApart,
        range_checked: false,
    },
    Treatment {
        target: Target::Floating,
        code: 0x102,
        how: How::Parsed,
        range_checked: false,
    },
    Treatment {
        target: Target::Date,
        code: 0x000,
        how: How::Zero,
        range_checked: false,
    },
    Treatment {
        target: Target::Date,
        code: 0x001,
        how: How::ZeroOrRaised,
        range_checked: false,
    },
    Treatment {
        target: Target::Date,
        code: 0x002,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Date,
        code: 0x003,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Date,
        code: 0x004,
        how: How::Asked,
        range_checked: false,
    },
    Treatment {
        target: Target::Date,
        code: 0x005,
        how: How::Asked,
        range_checked: false,
    },
    Treatment {
        target: Target::Date,
        code: 0x006,
        how: How::Asked,
        range_checked: false,
    },
    Treatment {
        target: Target::Date,
        code: 0x007,
        how: How::AsItStands,
        range_checked: false,
    },
    Treatment {
        target: Target::Date,
        code: 0x008,
        how: How::Parsed,
        range_checked: false,
    },
    Treatment {
        target: Target::Date,
        code: 0x009,
        how: How::Asked,
        range_checked: false,
    },
    Treatment {
        target: Target::Date,
        code: 0x00b,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Date,
        code: 0x00c,
        how: How::Followed,
        range_checked: false,
    },
    Treatment {
        target: Target::Date,
        code: 0x00d,
        how: How::Asked,
        range_checked: false,
    },
    Treatment {
        target: Target::Date,
        code: 0x010,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Date,
        code: 0x011,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Date,
        code: 0x012,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Date,
        code: 0x013,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Date,
        code: 0x014,
        how: How::ThroughADouble,
        range_checked: false,
    },
    Treatment {
        target: Target::Date,
        code: 0x015,
        how: How::CorrectedForSign,
        range_checked: false,
    },
    Treatment {
        target: Target::Date,
        code: 0x100,
        how: How::Parsed,
        range_checked: false,
    },
    Treatment {
        target: Target::Date,
        code: 0x101,
        how: How::ParsedApart,
        range_checked: false,
    },
    Treatment {
        target: Target::Date,
        code: 0x102,
        how: How::Parsed,
        range_checked: false,
    },
    Treatment {
        target: Target::Money,
        code: 0x000,
        how: How::Zero,
        range_checked: false,
    },
    Treatment {
        target: Target::Money,
        code: 0x001,
        how: How::ZeroOrRaised,
        range_checked: false,
    },
    Treatment {
        target: Target::Money,
        code: 0x002,
        how: How::ScaledUp,
        range_checked: false,
    },
    Treatment {
        target: Target::Money,
        code: 0x003,
        how: How::ScaledUp,
        range_checked: false,
    },
    Treatment {
        target: Target::Money,
        code: 0x004,
        how: How::Asked,
        range_checked: false,
    },
    Treatment {
        target: Target::Money,
        code: 0x005,
        how: How::Asked,
        range_checked: false,
    },
    Treatment {
        target: Target::Money,
        code: 0x006,
        how: How::AsItStands,
        range_checked: false,
    },
    Treatment {
        target: Target::Money,
        code: 0x007,
        how: How::Asked,
        range_checked: false,
    },
    Treatment {
        target: Target::Money,
        code: 0x008,
        how: How::Parsed,
        range_checked: false,
    },
    Treatment {
        target: Target::Money,
        code: 0x009,
        how: How::Asked,
        range_checked: false,
    },
    Treatment {
        target: Target::Money,
        code: 0x00b,
        how: How::ScaledUp,
        range_checked: false,
    },
    Treatment {
        target: Target::Money,
        code: 0x00c,
        how: How::Followed,
        range_checked: false,
    },
    Treatment {
        target: Target::Money,
        code: 0x00d,
        how: How::Asked,
        range_checked: false,
    },
    Treatment {
        target: Target::Money,
        code: 0x010,
        how: How::ScaledUp,
        range_checked: false,
    },
    Treatment {
        target: Target::Money,
        code: 0x011,
        how: How::ScaledUp,
        range_checked: false,
    },
    Treatment {
        target: Target::Money,
        code: 0x012,
        how: How::ScaledUp,
        range_checked: false,
    },
    Treatment {
        target: Target::Money,
        code: 0x013,
        how: How::ScaledUp,
        range_checked: false,
    },
    Treatment {
        target: Target::Money,
        code: 0x014,
        how: How::ThroughADouble,
        range_checked: false,
    },
    Treatment {
        target: Target::Money,
        code: 0x015,
        how: How::CorrectedForSign,
        range_checked: false,
    },
    Treatment {
        target: Target::Money,
        code: 0x100,
        how: How::Parsed,
        range_checked: false,
    },
    Treatment {
        target: Target::Money,
        code: 0x101,
        how: How::ParsedApart,
        range_checked: false,
    },
    Treatment {
        target: Target::Money,
        code: 0x102,
        how: How::Parsed,
        range_checked: false,
    },
    Treatment {
        target: Target::Unsigned64,
        code: 0x000,
        how: How::Zero,
        range_checked: false,
    },
    Treatment {
        target: Target::Unsigned64,
        code: 0x001,
        how: How::ZeroOrRaised,
        range_checked: false,
    },
    Treatment {
        target: Target::Unsigned64,
        code: 0x00b,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Unsigned64,
        code: 0x011,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Unsigned64,
        code: 0x012,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Unsigned64,
        code: 0x013,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Unsigned64,
        code: 0x015,
        how: How::AsItStands,
        range_checked: false,
    },
];

/// Implements part of the reader family.
///
/// What one reader does with one kind, if it handles it.
#[must_use]
pub fn treatment(target: Target, code: u16) -> Option<Treatment> {
    CONVERSIONS
        .iter()
        .find(|held| held.target == target && held.code == code)
        .copied()
}

/// Implements part of the reader family.
///
/// Every kind one reader handles itself.
#[must_use]
pub fn kinds_handled(target: Target) -> Vec<u16> {
    CONVERSIONS
        .iter()
        .filter(|held| held.target == target)
        .map(|held| held.code)
        .collect()
}

/// Implements part of the reader family.
///
/// The readers that check what they answer against the width.
///
/// One. Which is the finding: everything the narrow signed reader refuses for
/// not fitting, the wide signed reader answers anyway.
#[must_use]
pub fn readers_that_check() -> Vec<Target> {
    let mut found: Vec<Target> = CONVERSIONS
        .iter()
        .filter(|held| held.range_checked)
        .map(|held| held.target)
        .collect();
    found.sort_unstable();
    found.dedup();
    found
}

/// Implements part of Ghidra function `FUN_004634b0` at `0x004634B0`.
///
/// Whether reading a wide unsigned value as this width corrects for its sign.
///
/// Three of the four readers that can hold the whole range add the correction;
/// the wide signed one does not, and has no range check either — so a wide
/// unsigned value above the signed limit read as a signed one comes back
/// negative, and nothing anywhere says so.
#[must_use]
pub fn corrects_a_wide_unsigned_value(target: Target) -> bool {
    treatment(target, 0x15).is_some_and(|held| held.how == How::CorrectedForSign)
}

/// Implements part of the reader family.
///
/// Whether the three kinds of string are read by one routine or three.
///
/// Two routines, always: the platform string and both of the program's own wide
/// strings share one, and the third kind has its own. That holds in all six
/// readers, so it is structural and not incidental.
#[must_use]
pub fn strings_share_a_route(target: Target) -> bool {
    let shared = [0x8u16, 0x100, 0x102];
    shared
        .iter()
        .all(|code| treatment(target, *code).is_some_and(|held| held.how == How::Parsed))
        && treatment(target, 0x101).is_some_and(|held| held.how == How::ParsedApart)
}

/// How a kind the reader cannot read is got at.
///
/// Part of the helper family below.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Route {
    /// One call to the platform, naming the width wanted.
    OnePlatformCall,
    /// Three tries, because the platform has no code for the width wanted.
    ThreeTries,
    /// Copied into a temporary, handed to an installed routine, and the cell it
    /// leaves read again.
    ThroughAnInstalledRoutine,
    /// Put into a temporary as a floating value first, then converted from
    /// there.
    ByWayOfAFloatingValue,
}

/// One helper, and what it is for.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct Helper {
    /// Where it sits.
    pub routine: u32,
    /// The width it produces.
    pub target: Target,
    /// How it gets there.
    pub route: Route,
    /// The width it names when it asks the platform, where it asks at all.
    pub asks_for: Option<u16>,
}

/// Every helper the readers reach for a kind they cannot read themselves.
///
/// Implements Ghidra functions `FUN_004645d0` at `0x004645D0`, `FUN_004631b0`
/// at `0x004631B0`, `FUN_00465060` at `0x00465060`, `FUN_00465800` at
/// `0x00465800`, `FUN_00464630` at `0x00464630`, `FUN_004633d0` at
/// `0x004633D0`, `FUN_004650c0` at `0x004650C0`, `FUN_00465850` at
/// `0x00465850`, `FUN_00464ff0` at `0x00464FF0`, `FUN_00465790` at
/// `0x00465790`, `FUN_00463e30` at `0x00463E30` and `FUN_00463e90` at
/// `0x00463E90`, alongside the two already given functions of their own.
///
/// Three groups, and every member of a group is the same routine with one thing
/// changed. What makes the table worth having is the one member that is not:
/// see [`Route::ThreeTries`].
pub const HELPERS: [Helper; 14] = [
    Helper {
        routine: 0x0046_2530,
        target: Target::Integer32,
        route: Route::OnePlatformCall,
        asks_for: Some(0x03),
    },
    Helper {
        routine: 0x0046_45D0,
        target: Target::Floating,
        route: Route::OnePlatformCall,
        asks_for: Some(0x05),
    },
    Helper {
        routine: 0x0046_5800,
        target: Target::Money,
        route: Route::OnePlatformCall,
        asks_for: Some(0x06),
    },
    Helper {
        routine: 0x0046_5060,
        target: Target::Date,
        route: Route::OnePlatformCall,
        asks_for: Some(0x07),
    },
    Helper {
        routine: 0x0046_31B0,
        target: Target::Integer64,
        route: Route::ThreeTries,
        asks_for: Some(0x03),
    },
    Helper {
        routine: 0x0046_2580,
        target: Target::Integer32,
        route: Route::ThroughAnInstalledRoutine,
        asks_for: None,
    },
    Helper {
        routine: 0x0046_33D0,
        target: Target::Integer64,
        route: Route::ThroughAnInstalledRoutine,
        asks_for: None,
    },
    Helper {
        routine: 0x0046_4630,
        target: Target::Floating,
        route: Route::ThroughAnInstalledRoutine,
        asks_for: None,
    },
    Helper {
        routine: 0x0046_50C0,
        target: Target::Date,
        route: Route::ThroughAnInstalledRoutine,
        asks_for: None,
    },
    Helper {
        routine: 0x0046_5850,
        target: Target::Money,
        route: Route::ThroughAnInstalledRoutine,
        asks_for: None,
    },
    Helper {
        routine: 0x0046_3E30,
        target: Target::Boolean,
        route: Route::OnePlatformCall,
        asks_for: Some(0xb),
    },
    Helper {
        routine: 0x0046_3E90,
        target: Target::Boolean,
        route: Route::ThroughAnInstalledRoutine,
        asks_for: None,
    },
    Helper {
        routine: 0x0046_4FF0,
        target: Target::Date,
        route: Route::ByWayOfAFloatingValue,
        asks_for: Some(0x07),
    },
    Helper {
        routine: 0x0046_5790,
        target: Target::Money,
        route: Route::ByWayOfAFloatingValue,
        asks_for: Some(0x06),
    },
];

/// Implements part of the helper family.
///
/// Every helper that produces one width.
#[must_use]
pub fn helpers_for(target: Target) -> Vec<&'static Helper> {
    HELPERS
        .iter()
        .filter(|helper| helper.target == target)
        .collect()
}

/// Implements part of the helper family.
///
/// The helpers that take one route.
#[must_use]
pub fn helpers_taking(route: Route) -> Vec<&'static Helper> {
    HELPERS
        .iter()
        .filter(|helper| helper.route == route)
        .collect()
}

/// Implements Ghidra function `FUN_004631b0` at `0x004631B0`.
///
/// Why the wide signed reader needs three tries where the others need one.
///
/// The platform's conversion service is asked for a width by number, and there
/// is no number for a signed sixty-four bit one. So the wide reader asks for a
/// thirty-two bit result, and failing that for a floating one which it rounds,
/// and failing that — on the one failure that means the value was not a number
/// at all — parses it as a boolean.
///
/// The consequence is that a value between the thirty-two and sixty-four bit
/// limits reaches the wide reader through a floating value and is rounded, so it
/// arrives inexact past fifty-three bits. The reader that most needs the range
/// is the one that cannot ask for it.
#[must_use]
pub fn has_a_platform_code(width: u16) -> bool {
    PLATFORM_WIDTHS.contains(&width)
}

/// The widths the platform's conversion service can be asked for.
///
/// Part of the helper family.
///
/// Five, and they are exactly the widths that have a one-call helper. The two
/// that do not appear — the wide signed and wide unsigned ones — are the two
/// with no helper of that shape, and the reason the wide signed reader has to
/// take three tries.
pub const PLATFORM_WIDTHS: [u16; 5] = [0x3, 0x5, 0x6, 0x7, 0xB];

/// What one status from the platform means.
///
/// Implements Ghidra function `FUN_00460800` at `0x00460800`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Outcome {
    /// It worked.
    Converted,
    /// The value was not of a kind that converts to the width asked for.
    NotThatKind,
    /// It was, and it did not fit.
    DidNotFit,
    /// Something else, reported without saying what was being converted.
    SomethingElse,
}

/// The status that means the value was not of a convertible kind.
///
/// Part of Ghidra function `FUN_00460800` at `0x00460800`.
pub const NOT_THAT_KIND: i32 = -0x7FFD_FFFB;

/// The status that means it did not fit.
///
/// Part of Ghidra function `FUN_00460800` at `0x00460800`.
pub const DID_NOT_FIT: i32 = -0x7FFD_FFF6;

/// Implements Ghidra function `FUN_00460800` at `0x00460800`.
///
/// What is done with one status from the platform.
///
/// Two statuses are recognised and each is raised with both the kind held and
/// the width wanted, so the message can say what was being converted. Anything
/// else is raised generically and **both type codes are dropped** — so an
/// unusual failure produces a message that names neither end of the conversion
/// it was doing.
#[must_use]
pub const fn outcome_of(status: i32) -> Outcome {
    match status {
        0 => Outcome::Converted,
        NOT_THAT_KIND => Outcome::NotThatKind,
        DID_NOT_FIT => Outcome::DidNotFit,
        _ => Outcome::SomethingElse,
    }
}

/// Implements part of Ghidra function `FUN_00460800` at `0x00460800`.
///
/// Whether the refusal for one status says what was being converted.
#[must_use]
pub const fn names_what_it_was_converting(status: i32) -> bool {
    matches!(
        outcome_of(status),
        Outcome::NotThatKind | Outcome::DidNotFit
    )
}

/// One step of a text parser.
///
/// Part of the parser family below.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Step {
    /// Ask the platform, through the entry point for this width.
    ThePlatform,
    /// Ask it for a thirty-two bit number instead.
    ThePlatformNarrower,
    /// Ask it for a floating value and round.
    ThePlatformFloatingThenRound,
    /// The program's own whole-number parse.
    ItsOwnNumber,
    /// The program's own floating parse.
    ItsOwnFloating,
    /// The program's own date parse.
    ItsOwnDate,
    /// The program's own money parse.
    ItsOwnMoney,
    /// The program's own boolean parse.
    ItsOwnBoolean,
}

/// How one width parses a text.
#[derive(Debug, Clone, Copy)]
pub struct TextParser {
    /// Where the routine sits.
    pub routine: u32,
    /// The width it produces.
    pub target: Target,
    /// What it tries, in order.
    pub steps: &'static [Step],
}

/// Every text parser, one per width.
///
/// Implements Ghidra functions `FUN_00462400` at `0x00462400`, `FUN_00463250`
/// at `0x00463250`, `FUN_004644c0` at `0x004644C0`, `FUN_00464ea0` at
/// `0x00464EA0` and `FUN_00465680` at `0x00465680`.
///
/// Three things come out of having all five:
///
/// * Each asks a **different** entry point of the platform, so what looks like
///   one conversion service is four, and a text can be acceptable to one and
///   not to another.
/// * The chains differ in length and in what they end with, so the same text is
///   a number for one width and an error for another. A spelled-out boolean is
///   the clearest case: two of the five accept it and three do not.
/// * The wide signed one tries its own parse **first**, because the platform has
///   no entry point for that width — the same structural cause that gives it a
///   three-step interface helper, showing up a second time.
pub const TEXT_PARSERS: [TextParser; 5] = [
    TextParser {
        routine: 0x0046_2400,
        target: Target::Integer32,
        steps: &[Step::ThePlatform, Step::ItsOwnNumber, Step::ItsOwnBoolean],
    },
    TextParser {
        routine: 0x0046_3250,
        target: Target::Integer64,
        steps: &[
            Step::ItsOwnNumber,
            Step::ThePlatformNarrower,
            Step::ThePlatformFloatingThenRound,
            Step::ItsOwnBoolean,
        ],
    },
    TextParser {
        routine: 0x0046_44C0,
        target: Target::Floating,
        steps: &[Step::ThePlatform, Step::ItsOwnFloating],
    },
    TextParser {
        routine: 0x0046_4EA0,
        target: Target::Date,
        steps: &[Step::ThePlatform, Step::ItsOwnDate, Step::ItsOwnFloating],
    },
    TextParser {
        routine: 0x0046_5680,
        target: Target::Money,
        steps: &[Step::ThePlatform, Step::ItsOwnMoney],
    },
];

/// Implements part of the parser family.
///
/// How one width parses a text, if it parses one at all.
#[must_use]
pub fn text_parser(target: Target) -> Option<&'static TextParser> {
    TEXT_PARSERS.iter().find(|parser| parser.target == target)
}

/// Implements part of the parser family.
///
/// The widths that accept a boolean spelled out in words.
#[must_use]
pub fn accept_a_spelled_out_boolean() -> Vec<Target> {
    TEXT_PARSERS
        .iter()
        .filter(|parser| parser.steps.contains(&Step::ItsOwnBoolean))
        .map(|parser| parser.target)
        .collect()
}

/// Implements part of the parser family.
///
/// Whether a width asks the platform before trying anything of its own.
#[must_use]
pub fn asks_the_platform_first(target: Target) -> bool {
    text_parser(target).is_some_and(|parser| {
        matches!(
            parser.steps.first(),
            Some(Step::ThePlatform | Step::ThePlatformNarrower)
        )
    })
}

/// The settings the program's own parses are given.
///
/// Part of the parser family.
///
/// The program's own format settings, not the platform's locale — so a text
/// that falls through to a fallback is read under different conventions from
/// one the platform accepted. Both are locale-dependent, and they are two
/// different locales.
#[must_use]
pub const fn uses_its_own_settings(step: Step) -> bool {
    matches!(
        step,
        Step::ItsOwnNumber
            | Step::ItsOwnFloating
            | Step::ItsOwnDate
            | Step::ItsOwnMoney
            | Step::ItsOwnBoolean
    )
}

/// Implements part of the parser family.
///
/// The status every parser reports when its last fallback fails.
///
/// Always the one that means the value was not of a convertible kind,
/// whatever actually went wrong — so a text that failed for some other reason
/// is still reported as not being that kind of thing.
pub const REPORTED_WHEN_ALL_ELSE_FAILS: i32 = NOT_THAT_KIND;

/// Implements Ghidra function `FUN_004602f0` at `0x004602F0`.
///
/// The refusal for a value that would not fit.
///
/// Built the same way as the refusal for a value of the wrong kind — the same
/// steps, the same shape, a different message and a different class. So the two
/// can be told apart by a caller, which is the only reason to have written it
/// twice.
#[must_use]
pub const fn overflow_is_its_own_class() -> bool {
    true
}

/// The three further widths a cell can be read as.
///
/// Implements Ghidra functions `FUN_00463f70` at `0x00463F70`, `FUN_00464c70`
/// at `0x00464C70` and `FUN_00462e80` at `0x00462E80`.
///
/// They are in a table of their own because they are not part of the template:
/// two of them handle far fewer kinds than the five that are, and one handles
/// as many but by doing something no other reader does.
pub const FURTHER_CONVERSIONS: [Treatment; 40] = [
    Treatment {
        target: Target::Boolean,
        code: 0x000,
        how: How::Zero,
        range_checked: false,
    },
    Treatment {
        target: Target::Boolean,
        code: 0x001,
        how: How::ZeroOrRaised,
        range_checked: false,
    },
    Treatment {
        target: Target::Boolean,
        code: 0x002,
        how: How::NotZero,
        range_checked: false,
    },
    Treatment {
        target: Target::Boolean,
        code: 0x003,
        how: How::NotZero,
        range_checked: false,
    },
    Treatment {
        target: Target::Boolean,
        code: 0x004,
        how: How::NotZero,
        range_checked: false,
    },
    Treatment {
        target: Target::Boolean,
        code: 0x005,
        how: How::NotZero,
        range_checked: false,
    },
    Treatment {
        target: Target::Boolean,
        code: 0x006,
        how: How::NotZero,
        range_checked: false,
    },
    Treatment {
        target: Target::Boolean,
        code: 0x007,
        how: How::NotZero,
        range_checked: false,
    },
    Treatment {
        target: Target::Boolean,
        code: 0x008,
        how: How::Parsed,
        range_checked: false,
    },
    Treatment {
        target: Target::Boolean,
        code: 0x009,
        how: How::Asked,
        range_checked: false,
    },
    Treatment {
        target: Target::Boolean,
        code: 0x00b,
        how: How::NotZero,
        range_checked: false,
    },
    Treatment {
        target: Target::Boolean,
        code: 0x00c,
        how: How::Followed,
        range_checked: false,
    },
    Treatment {
        target: Target::Boolean,
        code: 0x00d,
        how: How::Asked,
        range_checked: false,
    },
    Treatment {
        target: Target::Boolean,
        code: 0x010,
        how: How::NotZero,
        range_checked: false,
    },
    Treatment {
        target: Target::Boolean,
        code: 0x011,
        how: How::NotZero,
        range_checked: false,
    },
    Treatment {
        target: Target::Boolean,
        code: 0x012,
        how: How::NotZero,
        range_checked: false,
    },
    Treatment {
        target: Target::Boolean,
        code: 0x013,
        how: How::NotZero,
        range_checked: false,
    },
    Treatment {
        target: Target::Boolean,
        code: 0x014,
        how: How::NotZero,
        range_checked: false,
    },
    Treatment {
        target: Target::Boolean,
        code: 0x015,
        how: How::NotZero,
        range_checked: false,
    },
    Treatment {
        target: Target::Boolean,
        code: 0x100,
        how: How::Parsed,
        range_checked: false,
    },
    Treatment {
        target: Target::Boolean,
        code: 0x101,
        how: How::ParsedApart,
        range_checked: false,
    },
    Treatment {
        target: Target::Boolean,
        code: 0x102,
        how: How::Parsed,
        range_checked: false,
    },
    Treatment {
        target: Target::Single,
        code: 0x000,
        how: How::Zero,
        range_checked: false,
    },
    Treatment {
        target: Target::Single,
        code: 0x001,
        how: How::ZeroOrRaised,
        range_checked: false,
    },
    Treatment {
        target: Target::Single,
        code: 0x002,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Single,
        code: 0x003,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Single,
        code: 0x004,
        how: How::AsItStands,
        range_checked: false,
    },
    Treatment {
        target: Target::Single,
        code: 0x00b,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Single,
        code: 0x010,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Single,
        code: 0x011,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Single,
        code: 0x012,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Single,
        code: 0x013,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Single,
        code: 0x014,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::Single,
        code: 0x015,
        how: How::CorrectedForSign,
        range_checked: false,
    },
    Treatment {
        target: Target::SmallInt,
        code: 0x000,
        how: How::Zero,
        range_checked: false,
    },
    Treatment {
        target: Target::SmallInt,
        code: 0x001,
        how: How::ZeroOrRaised,
        range_checked: false,
    },
    Treatment {
        target: Target::SmallInt,
        code: 0x002,
        how: How::AsItStands,
        range_checked: false,
    },
    Treatment {
        target: Target::SmallInt,
        code: 0x00b,
        how: How::AsItStands,
        range_checked: false,
    },
    Treatment {
        target: Target::SmallInt,
        code: 0x010,
        how: How::Widened,
        range_checked: false,
    },
    Treatment {
        target: Target::SmallInt,
        code: 0x011,
        how: How::Widened,
        range_checked: false,
    },
];

/// Implements part of the reader family.
///
/// How one of the further widths reads one kind.
#[must_use]
pub fn further_treatment(target: Target, code: u16) -> Option<Treatment> {
    FURTHER_CONVERSIONS
        .iter()
        .find(|held| held.target == target && held.code == code)
        .copied()
}

/// Implements part of the reader family.
///
/// How many kinds each reader handles itself.
///
/// The numbers say something the widths alone do not. Coverage does not follow
/// how wide a target is — it follows whether the conversion into it can fail.
/// The boolean reader is as narrow as a target gets and handles every kind,
/// because asking whether something is zero cannot overflow, cannot round and
/// cannot be refused. The single-precision and small whole-number readers are
/// the ones that would have to refuse things, and they handle a third of what
/// the others do and hand the rest on.
pub const KINDS_EACH_READER_HANDLES: [(Target, usize); 9] = [
    (Target::Integer32, 22),
    (Target::Integer64, 22),
    (Target::Floating, 22),
    (Target::Date, 22),
    (Target::Money, 22),
    (Target::Boolean, 22),
    (Target::Single, 12),
    (Target::Unsigned64, 7),
    (Target::SmallInt, 6),
];

/// Implements part of Ghidra function `FUN_00463f70` at `0x00463F70`.
///
/// Whether reading a kind as this width can fail on a value that is not text.
///
/// Only the boolean reader cannot, which is why it is the one the text parsers
/// fall back to and the one that covers every kind.
#[must_use]
pub const fn reading_can_fail(target: Target) -> bool {
    !matches!(target, Target::Boolean)
}

/// Implements Ghidra function `FUN_00460950` at `0x00460950`.
///
/// Setting a cell to nothing-known.
///
/// Empty it first, then write the code — the same order every reference-taking
/// setter uses, and the reason a half-done cell is never a null pointing at
/// something released.
#[must_use]
pub const fn null_is_set_after_emptying() -> bool {
    true
}

/// Implements Ghidra function `FUN_004620f0` at `0x004620F0`.
///
/// Converting a cell to a named width, which is the readers and the setters
/// joined up.
///
/// For each of the twenty-one widths it reads the source with that width's
/// reader and stores the answer with that width's setter. Three things fall out
/// of it:
///
/// * A source already of the width asked for is copied rather than converted,
///   so converting a cell to what it already is costs one copy.
/// * Converting **to** nothing-at-all is the one target that can refuse: a null
///   source with the strict global set raises, and the kind it names in the
///   message is a made-up one rather than any code a cell can hold.
/// * It uses the setters that write the value before the code — every one of
///   them. The style sheet uses the other half of each duplicate pair. So the
///   two orders are not an accident of history: each has a caller, and this is
///   the one that chose value first.
pub const CONVERSION_SETTERS: [(u16, u32); 11] = [
    (0x2, 0x0046_86D0),
    (0x3, 0x0046_8580),
    (0x4, 0x0046_8730),
    (0x5, 0x0046_8770),
    (0x6, 0x0046_87B0),
    (0x7, 0x0046_87E0),
    (0xB, 0x0046_8820),
    (0x10, 0x0046_86A0),
    (0x11, 0x0046_85E0),
    (0x12, 0x0046_8610),
    (0x13, 0x0046_8640),
];

/// Implements part of Ghidra function `FUN_004620f0` at `0x004620F0`.
///
/// Whether the conversion picks the value-first routine wherever there are two.
///
/// It does, for every width whose two routines actually differ in order. The
/// one remaining pair — the two routines for a plain whole number — are the same
/// instruction for instruction, so there is nothing there to pick between. So
/// the duplicate setters are not leftovers: each order has a caller, and the
/// two callers disagree.
#[must_use]
pub fn picks_the_value_first_twin() -> bool {
    let disagreeing = crate::variant_value::disagree_about_order();
    CONVERSION_SETTERS
        .iter()
        .filter(|(code, _)| disagreeing.contains(code))
        .all(|(code, routine)| {
            crate::variant_value::setters_for(*code)
                .iter()
                .any(|setter| setter.routine == *routine && !setter.code_first)
        })
}

/// The kind named when converting a null to nothing-at-all is refused.
///
/// Part of Ghidra function `FUN_004620f0` at `0x004620F0`.
///
/// Not a code any cell can hold. Somebody wanted the message to say something
/// other than null, and reached for a number rather than a name.
pub const MADE_UP_SOURCE_KIND: u32 = 0xFFFF_0001;

/// The status an array routine refuses a cell that is not an array with.
///
/// Part of Ghidra functions `FUN_004609c0` at `0x004609C0` and `FUN_00461520`
/// at `0x00461520`.
pub const NOT_AN_ARRAY: i32 = -0x7FF8_FFA9;

/// Implements Ghidra function `FUN_004609c0` at `0x004609C0`.
///
/// Whether the elements of an array are released one at a time.
///
/// Only when they are themselves cells. An array of anything else is handed to
/// the platform whole, and only an array of cells is walked — each element
/// emptied in turn, a cell's width apart. The count comes from multiplying the
/// extent of every dimension, so an array of no dimensions is walked not at
/// all rather than walked wrongly.
#[must_use]
pub const fn releases_each_element(element_code: u16) -> bool {
    element_code == 0xC
}

/// What an array made by mapping one holds.
///
/// Part of Ghidra function `FUN_00461520` at `0x00461520`.
///
/// Always cells, whatever the source held — so mapping an array of whole
/// numbers gives an array of cells, and the element kind of the answer says
/// nothing about the element kind of the source.
pub const MAPPED_ARRAYS_HOLD_CELLS: u16 = 0x200C;

/// Implements Ghidra function `FUN_00461520` at `0x00461520`.
///
/// Whether the destination survives a failure to make the new array.
///
/// It does: the new array is allocated first and the destination emptied only
/// once there is something to put in it. Failing the other way round would
/// destroy what the caller had in exchange for nothing.
#[must_use]
pub const fn destination_survives_a_failed_allocation() -> bool {
    true
}

/// One of the wrappers that reads a cell as a kind and stores it.
///
/// Implements Ghidra functions `FUN_00461d80` at `0x00461D80`, `FUN_00461df0`
/// at `0x00461DF0`, `FUN_00461e60` at `0x00461E60`, `FUN_00461ed0` at
/// `0x00461ED0` and `FUN_00461f40` at `0x00461F40`.
///
/// Five routines, all the same three steps: read the source as one kind into
/// something of its own, hand that to the setter for the kind, then let it go.
/// What makes them worth listing together is the third step — each uses the
/// release that matches what it read, and the two interface ones use the same
/// release as each other, which is one more sign that the two interface kinds
/// are held identically and differ only in their code.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct StoreWrapper {
    /// Where the wrapper sits.
    pub routine: u32,
    /// The kind it reads the source as.
    pub kind: u16,
    /// The setter it hands the result to.
    pub setter: u32,
    /// The release it finishes with.
    pub release: u32,
}

/// Every read-and-store wrapper.
pub const STORE_WRAPPERS: [StoreWrapper; 5] = [
    StoreWrapper {
        routine: 0x0046_1D80,
        kind: 0x8,
        setter: 0x0046_89D0,
        release: 0x0041_4520,
    },
    StoreWrapper {
        routine: 0x0046_1DF0,
        kind: 0x100,
        setter: 0x0046_8910,
        release: 0x0041_44D0,
    },
    StoreWrapper {
        routine: 0x0046_1E60,
        kind: 0x102,
        setter: 0x0046_8A10,
        release: 0x0041_4480,
    },
    StoreWrapper {
        routine: 0x0046_1ED0,
        kind: 0x9,
        setter: 0x0046_8A90,
        release: 0x0041_B800,
    },
    StoreWrapper {
        routine: 0x0046_1F40,
        kind: 0xD,
        setter: 0x0046_8A50,
        release: 0x0041_B800,
    },
];

/// Implements part of the wrapper family.
///
/// The kinds whose wrappers finish with the same release.
#[must_use]
pub fn share_a_release() -> Vec<u16> {
    STORE_WRAPPERS
        .iter()
        .filter(|wrapper| {
            STORE_WRAPPERS
                .iter()
                .any(|other| other.routine != wrapper.routine && other.release == wrapper.release)
        })
        .map(|wrapper| wrapper.kind)
        .collect()
}

/// Which slot of a registered handler is used, and for what.
///
/// Implements Ghidra function `FUN_00462050` at `0x00462050`.
///
/// A custom conversion is offered twice and to two different handlers. First the
/// handler registered for the **source** kind is asked, through one slot, to
/// turn itself into the width wanted. If there is none, the handler registered
/// for the **target** kind is asked, through a different slot, to make itself
/// out of the source. Only if neither exists does the ordinary conversion run.
///
/// So a custom kind can be converted by whichever end of the conversion knows
/// how, and the order is fixed: the source is asked first.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum HandlerSlot {
    /// Turn yourself into that width.
    IntoThatWidth,
    /// Make yourself out of that value.
    OutOfThatValue,
}

/// Implements part of Ghidra function `FUN_00462050` at `0x00462050`.
///
/// Which slot each end of a custom conversion is asked through.
pub const HANDLER_SLOTS: [(HandlerSlot, usize); 2] = [
    (HandlerSlot::IntoThatWidth, 0x38),
    (HandlerSlot::OutOfThatValue, 0x30),
];

/// Implements part of Ghidra function `FUN_00462050` at `0x00462050`.
///
/// Which end of a custom conversion is asked first.
#[must_use]
pub const fn asked_first() -> HandlerSlot {
    HandlerSlot::IntoThatWidth
}

/// Implements Ghidra function `FUN_00460970` at `0x00460970`.
///
/// How many elements one dimension of an array holds.
///
/// Two calls to the platform, one for each bound, each checked — and then the
/// span between them counted inclusively. A dimension whose upper bound is one
/// below its lower bound therefore counts as none, which is how an empty array
/// is written.
#[must_use]
pub const fn extent_of(lower: i32, upper: i32) -> i32 {
    upper - lower + 1
}

/// The refusals the unit can raise, each its own class.
///
/// Implements Ghidra functions `FUN_00460110` at `0x00460110`, `FUN_004602f0`
/// at `0x004602F0`, `FUN_004603e0` at `0x004603E0`, `FUN_00460210` at
/// `0x00460210` and `FUN_004600a0` at `0x004600A0`.
///
/// Five, built the same way and distinguished only by their message and their
/// class. Having five rather than one is what lets a caller tell an impossible
/// operation from an unknown kind from a value that would not fit — a
/// distinction that is otherwise unrecoverable from a failure.
pub const REFUSALS: [(u32, &str); 5] = [
    (
        0x0046_0110,
        "the value is not of a kind that converts to that width",
    ),
    (0x0046_02F0, "it is, and it would not fit"),
    (0x0046_03E0, "there was no room to make what was asked for"),
    (0x0046_0210, "there is no such operation for that width"),
    (0x0046_00A0, "nothing registered understands that kind"),
];

#[cfg(test)]
mod tests {
    use super::*;
    use crate::variant_value::{DOUBLE, INTEGER};

    #[test]
    fn no_kind_is_listed_twice_across_the_two_tables() {
        let mut codes: Vec<u16> = READ_AS_INTEGER
            .iter()
            .chain(ALSO_READ.iter())
            .map(|row| row.code)
            .collect();
        let before = codes.len();
        codes.sort_unstable();
        codes.dedup();

        assert_eq!(codes.len(), before);
    }

    #[test]
    fn an_empty_cell_reads_as_zero_and_nothing_is_said() {
        assert_eq!(conversion_for(0), Some(Conversion::SilentlyZero));
    }

    #[test]
    fn a_null_cell_reads_as_zero_too_unless_a_global_says_otherwise() {
        // So the difference between empty and null is not what they mean but
        // whether anyone is told.
        assert_eq!(conversion_for(NULL_CODE), Some(Conversion::ZeroOrRaised));
        assert!(null_is_reported(true));
        assert!(!null_is_reported(false));
    }

    #[test]
    fn so_a_null_reaching_arithmetic_cannot_be_told_from_a_zero() {
        assert!(!null_is_reported(false));
        assert_eq!(conversion_for(0), Some(Conversion::SilentlyZero));
    }

    #[test]
    fn a_boolean_is_widened_keeping_its_sign() {
        // Which is the same conclusion the setter reaches from the other side.
        assert_eq!(conversion_for(0xB), Some(Conversion::SignExtended));
        assert_eq!(
            i32::from(i16::from_le_bytes(
                crate::variant_value::boolean_as_stored(true).to_le_bytes()
            )),
            -1
        );
    }

    #[test]
    fn the_signed_narrow_kinds_keep_their_sign_and_the_unsigned_ones_do_not() {
        assert_eq!(conversion_for(0x2), Some(Conversion::SignExtended));
        assert_eq!(conversion_for(0x10), Some(Conversion::SignExtended));
        assert_eq!(conversion_for(0x11), Some(Conversion::ZeroExtended));
        assert_eq!(conversion_for(0x12), Some(Conversion::ZeroExtended));
    }

    #[test]
    fn floating_values_and_dates_are_rounded_and_money_is_rounded_differently() {
        assert_eq!(conversion_for(0x4), Some(Conversion::Rounded));
        assert_eq!(conversion_for(DOUBLE), Some(Conversion::Rounded));
        assert_eq!(conversion_for(0x7), Some(Conversion::Rounded));
        assert_eq!(conversion_for(0x6), Some(Conversion::RoundedAsMoney));
        assert_ne!(Conversion::Rounded, Conversion::RoundedAsMoney);
    }

    #[test]
    fn everything_rounded_or_widened_from_further_out_is_range_checked() {
        for row in READ_AS_INTEGER.iter().chain(ALSO_READ.iter()) {
            let needs_checking = matches!(
                row.conversion,
                Conversion::Rounded | Conversion::RoundedAsMoney | Conversion::RefusedWhenTooLarge
            ) || row.code == 0x14;

            assert_eq!(row.range_checked, needs_checking, "{:#x}", row.code);
        }
    }

    #[test]
    fn an_unsigned_narrow_value_above_the_signed_limit_is_refused_outright() {
        // While the flattening in the same unit makes it a floating value.
        assert_eq!(conversion_for(0x13), Some(Conversion::RefusedWhenTooLarge));
        assert_eq!(
            crate::variant_arithmetic::flattened_code(0x13, true, true, false),
            Some(DOUBLE)
        );
    }

    #[test]
    fn all_three_kinds_of_string_are_parsed() {
        for code in [0x8u16, 0x100, 0x101, 0x102] {
            assert_eq!(conversion_for(code), Some(Conversion::Parsed), "{code:#x}");
        }
    }

    #[test]
    fn both_interfaces_are_asked_the_same_way() {
        // Matching that they are stored the same way.
        assert_eq!(conversion_for(0x9), Some(Conversion::AskedOfAnInterface));
        assert_eq!(conversion_for(0xD), Some(Conversion::AskedOfAnInterface));
    }

    #[test]
    fn a_cell_holding_a_cell_is_followed_by_calling_the_reader_again() {
        assert_eq!(conversion_for(0xC), Some(Conversion::Followed));
    }

    #[test]
    fn a_kind_the_reader_does_not_know_answers_nothing_here() {
        assert_eq!(conversion_for(0xE), None);
        assert_eq!(conversion_for(0x800), None);
    }

    #[test]
    fn the_pointing_half_is_shorter_than_the_direct_one() {
        assert!(READ_BY_REFERENCE.len() < READ_AS_INTEGER.len() + ALSO_READ.len());
    }

    #[test]
    fn seven_kinds_are_handled_directly_but_not_through_a_pointer() {
        // So the same value read the two ways takes different routes.
        assert_eq!(
            missing_from_the_pointing_half(),
            [0x0, 0x1, 0x9, 0xD, 0x100, 0x101, 0x102]
        );
    }

    #[test]
    fn a_custom_handler_is_offered_the_kind_only_when_the_cell_holds_it_outright() {
        assert!(tries_a_custom_handler(false));
        assert!(!tries_a_custom_handler(true));
    }

    #[test]
    fn only_the_pointing_bit_is_taken_off_before_the_second_decision() {
        assert_eq!(WITHOUT_THE_POINTING_BIT, !BY_REFERENCE);
        // So a cell holding many values by reference keeps the bit that says
        // so, and then matches nothing.
        assert_eq!((0x2000 | BY_REFERENCE) & WITHOUT_THE_POINTING_BIT, 0x2000);
    }

    #[test]
    fn the_unsigned_wide_reader_handles_seven_kinds_itself() {
        assert_eq!(UNSIGNED_WIDE_READS_ITSELF.len(), 7);
        assert!(UNSIGNED_WIDE_READS_ITSELF.contains(&0x15));
    }

    #[test]
    fn it_cannot_reach_the_top_of_its_own_range_for_anything_else() {
        // Read as signed first, and refused there before this reader sees it.
        assert!(reaches_its_whole_range(0x15));
        assert!(reaches_its_whole_range(BY_REFERENCE | 0x15));
        assert!(!reaches_its_whole_range(DOUBLE));
        assert!(!reaches_its_whole_range(0x14));
    }

    #[test]
    fn five_of_the_six_readers_name_the_width_they_answer() {
        assert_eq!(
            REPORTED_TARGETS
                .iter()
                .filter(|(_, said, answers)| said == answers)
                .count(),
            5
        );
    }

    #[test]
    fn the_unsigned_wide_one_names_the_unsigned_narrow_width_instead() {
        // Only visible by laying the six side by side.
        assert_eq!(misreport_their_target(), [0x0046_3A50]);
        let (_, said, answers) = REPORTED_TARGETS[2];
        assert_eq!(said, 0x13);
        assert_eq!(answers, 0x15);
    }

    #[test]
    fn every_reader_is_listed_once_and_answers_a_distinct_width() {
        let mut answers: Vec<u16> = REPORTED_TARGETS
            .iter()
            .map(|(_, _, answers)| *answers)
            .collect();
        let before = answers.len();
        answers.sort_unstable();
        answers.dedup();

        assert_eq!(answers.len(), before);
    }

    #[test]
    fn a_status_of_zero_is_the_only_one_that_means_nothing_went_wrong() {
        assert!(!status_means_failure(0));
        assert!(status_means_failure(1));
        assert!(status_means_failure(-1));
    }

    #[test]
    fn the_two_failures_are_raised_from_different_places() {
        assert_ne!(
            raised_at(Failure::OperationNotPossible),
            raised_at(Failure::NoHandlerForTheKind)
        );
    }

    #[test]
    fn the_custom_range_is_a_closed_one() {
        let registered = vec![Some(0x1000u32); 0x700];

        assert_eq!(
            find_handler(FIRST_CUSTOM_KIND, &registered, 0, true),
            Lookup::Found
        );
        assert_eq!(
            find_handler(LAST_CUSTOM_KIND, &registered, 0, true),
            Lookup::Found
        );
        assert_eq!(
            find_handler(FIRST_CUSTOM_KIND - 1, &registered, 0, true),
            Lookup::RefusedOutright
        );
        assert_eq!(
            find_handler(LAST_CUSTOM_KIND + 1, &registered, 0, true),
            Lookup::RefusedOutright
        );
    }

    #[test]
    fn a_kind_outside_the_range_is_refused_before_the_lock_is_taken() {
        // So the registry says no in two ways at very different prices.
        let registered: Vec<Option<u32>> = Vec::new();

        assert_eq!(
            find_handler(0x50, &registered, 0, true),
            Lookup::RefusedOutright
        );
        assert_eq!(
            find_handler(0x200, &registered, 0, true),
            Lookup::LookedForAndMissing
        );
    }

    #[test]
    fn a_slot_holding_the_unusable_value_counts_as_empty() {
        // A registered-but-unusable state, distinct from unregistered.
        let mut registered = vec![None; 0x700];
        registered[0] = Some(0xDEAD);

        assert_eq!(
            find_handler(FIRST_CUSTOM_KIND, &registered, 0xDEAD, true),
            Lookup::LookedForAndMissing
        );
        assert_eq!(
            find_handler(FIRST_CUSTOM_KIND, &registered, 0x1, true),
            Lookup::Found
        );
    }

    #[test]
    fn nothing_is_found_while_the_table_has_not_been_made() {
        let registered = vec![Some(0x1000u32); 0x700];

        assert_eq!(
            find_handler(0x200, &registered, 0, false),
            Lookup::RefusedOutright
        );
    }

    #[test]
    fn a_kind_past_the_end_of_a_short_table_is_simply_missing() {
        let registered = vec![Some(0x1000u32); 4];

        assert_eq!(find_handler(0x103, &registered, 0, true), Lookup::Found);
        assert_eq!(
            find_handler(0x104, &registered, 0, true),
            Lookup::LookedForAndMissing
        );
    }

    #[test]
    fn storing_the_narrower_string_never_leaves_that_kind_in_the_cell() {
        assert!(narrow_text_goes_through_a_temporary());
        assert_eq!(
            crate::variant_arithmetic::flattened_code(0x102, true, false, false),
            Some(0x8)
        );
    }

    #[test]
    fn the_third_kind_of_text_costs_two_full_cell_copies() {
        assert_eq!(FOREIGN_TEXT_CELL_OPERATIONS, 4);
    }

    #[test]
    fn the_plain_whole_number_is_the_one_kind_taken_as_it_stands() {
        let as_it_stands: Vec<u16> = READ_AS_INTEGER
            .iter()
            .filter(|row| row.conversion == Conversion::AsItStands)
            .map(|row| row.code)
            .collect();

        assert!(as_it_stands.contains(&INTEGER));
        // And the wide one, which is taken as it stands but checked first.
        assert_eq!(as_it_stands, [0x3, 0x14]);
    }
}

#[cfg(test)]
mod conversion_tests {
    use super::*;

    #[test]
    fn every_conversion_through_the_platform_uses_the_users_own_locale() {
        // So the same file read on two machines need not give the same
        // numbers.
        assert_eq!(CONVERSION_LOCALE, 0x400);
    }

    #[test]
    fn a_text_the_platform_reads_is_not_tried_again() {
        assert_eq!(text_attempts(0), [TextAttempt::ThePlatform]);
    }

    #[test]
    fn a_text_it_does_not_recognise_gets_two_more_attempts() {
        assert_eq!(
            text_attempts(TEXT_NOT_A_NUMBER),
            [
                TextAttempt::ThePlatform,
                TextAttempt::ItsOwnNumberParse,
                TextAttempt::ItsOwnBooleanParse,
            ]
        );
    }

    #[test]
    fn any_other_failure_raises_at_once() {
        for status in [1, -1, i32::from_le_bytes(0x8000_4005u32.to_le_bytes())] {
            assert_eq!(
                text_attempts(status),
                [TextAttempt::ThePlatform],
                "{status}"
            );
        }
    }

    #[test]
    fn so_the_word_for_truth_written_out_reads_as_a_number() {
        assert!(text_attempts(TEXT_NOT_A_NUMBER).contains(&TextAttempt::ItsOwnBooleanParse));
    }

    #[test]
    fn and_it_reads_as_a_different_number_from_a_boolean_that_was_stored() {
        // Every bit set when stored, a single byte when parsed.
        assert_eq!(TRUE_FROM_TEXT, 1);
        assert_ne!(
            u32::from(crate::variant_value::TRUE_AS_STORED),
            TRUE_FROM_TEXT
        );
    }

    #[test]
    fn a_value_too_large_is_refused_against_the_caller() {
        assert_eq!(RANGE_ERROR, 4);
        assert!(refused_at_the_callers_address());
    }

    #[test]
    fn money_is_rounded_to_the_nearest_and_to_the_even_one_on_a_tie() {
        assert_eq!(round_money(25_000, RoundingMode::Nearest), 2);
        assert_eq!(round_money(35_000, RoundingMode::Nearest), 4);
        assert_eq!(round_money(14_000, RoundingMode::Nearest), 1);
        assert_eq!(round_money(16_000, RoundingMode::Nearest), 2);
    }

    #[test]
    fn a_positive_value_below_one_rounds_to_zero_when_it_should_round_to_one() {
        // The recovered boundary: the downward branch is taken whenever the
        // whole part is less than one rather than less than zero.
        assert_eq!(round_money(6_000, RoundingMode::Nearest), 0);
        assert_eq!(round_money(9_999, RoundingMode::Nearest), 0);
        assert!(rounds_the_wrong_way(6_000));
    }

    #[test]
    fn its_negative_counterpart_rounds_correctly() {
        // So the fault is not symmetric, which is what says it is a boundary
        // and not a convention.
        assert_eq!(round_money(-6_000, RoundingMode::Nearest), -1);
        assert!(!rounds_the_wrong_way(-6_000));
    }

    #[test]
    fn a_value_below_a_half_rounds_to_zero_either_way_and_is_right_to() {
        assert_eq!(round_money(4_000, RoundingMode::Nearest), 0);
        assert_eq!(round_money(-4_000, RoundingMode::Nearest), 0);
        assert!(!rounds_the_wrong_way(4_000));
        assert!(!rounds_the_wrong_way(-4_000));
    }

    #[test]
    fn only_values_below_one_are_rounded_the_wrong_way() {
        for scaled in [
            15_000i64, 25_000, 60_000, 123_456, -60_000, 0, 1, 5_000, 4_000,
        ] {
            assert!(!rounds_the_wrong_way(scaled), "{scaled}");
        }
        // Above a half and below one, and nowhere else.
        for scaled in [5_001i64, 6_000, 7_500, 9_999] {
            assert!(rounds_the_wrong_way(scaled), "{scaled}");
        }
    }

    #[test]
    fn rounding_asks_the_processor_which_way_it_is_set() {
        // So a money result depends on state the caller did not pass in.
        assert_eq!(round_money(14_000, RoundingMode::Nearest), 1);
        assert_eq!(round_money(14_000, RoundingMode::TowardPositive), 2);
    }

    #[test]
    fn rounding_downward_carries_only_a_negative_remainder() {
        assert_eq!(round_money(-6_000, RoundingMode::TowardNegative), -1);
        assert_eq!(round_money(6_000, RoundingMode::TowardNegative), 0);
    }

    #[test]
    fn rounding_toward_zero_is_never_tested_for_and_is_right_anyway() {
        // The truncating division that opened the routine is left standing.
        for scaled in [6_000i64, -6_000, 19_999, -19_999] {
            assert_eq!(
                round_money(scaled, RoundingMode::TowardZero),
                scaled / MONEY_SCALE,
                "{scaled}"
            );
        }
    }

    #[test]
    fn rounding_upward_does_not_reach_a_whole_part_of_zero_either() {
        // The same boundary seen from the other mode: upward sits in the
        // branch a whole part of zero never enters, so it cannot carry there
        // either.
        assert_eq!(round_money(6_000, RoundingMode::TowardPositive), 0);
        assert_eq!(round_money(9_999, RoundingMode::TowardPositive), 0);
        // And it carries perfectly well once the whole part is one or more.
        assert_eq!(round_money(14_000, RoundingMode::TowardPositive), 2);
    }

    #[test]
    fn both_interfaces_are_asked_of_the_platform() {
        assert_eq!(asked_of(0x9), Some(AskedOf::ThePlatform));
        assert_eq!(asked_of(0xD), Some(AskedOf::ThePlatform));
    }

    #[test]
    fn the_third_kind_of_text_is_asked_of_an_installed_routine() {
        assert_eq!(asked_of(0x101), Some(AskedOf::AnInstalledRoutine));
        assert!(reads_the_result_again());
    }

    #[test]
    fn a_custom_kind_is_asked_of_whatever_registered_for_it() {
        assert_eq!(asked_of(0x200), Some(AskedOf::ARegisteredHandler));
        assert_eq!(
            asked_of(LAST_CUSTOM_KIND),
            Some(AskedOf::ARegisteredHandler)
        );
    }

    #[test]
    fn an_ordinary_kind_is_asked_of_nobody() {
        assert_eq!(asked_of(crate::variant_value::INTEGER), None);
        assert_eq!(asked_of(crate::variant_value::DOUBLE), None);
        assert_eq!(asked_of(0x800), None);
    }

    #[test]
    fn the_narrower_and_wider_strings_are_not_asked_of_anyone() {
        // They are parsed here, which is why they have a path of their own.
        assert_eq!(asked_of(0x100), Some(AskedOf::ARegisteredHandler));
        assert_eq!(conversion_for(0x100), Some(Conversion::Parsed));
        assert_eq!(conversion_for(0x102), Some(Conversion::Parsed));
    }
}

#[cfg(test)]
mod matrix_tests {
    use super::*;

    const EVERY_TARGET: [Target; 6] = [
        Target::Integer32,
        Target::Integer64,
        Target::Unsigned64,
        Target::Floating,
        Target::Date,
        Target::Money,
    ];

    #[test]
    fn five_of_the_six_readers_handle_an_identical_set_of_kinds() {
        let template = kinds_handled(Target::Integer32);

        assert_eq!(template.len(), 22);
        for target in [
            Target::Integer64,
            Target::Floating,
            Target::Date,
            Target::Money,
        ] {
            assert_eq!(kinds_handled(target), template, "{target:?}");
        }
    }

    #[test]
    fn the_sixth_was_not_written_from_the_template() {
        let handled = kinds_handled(Target::Unsigned64);

        assert_eq!(handled.len(), 7);
        assert!(handled.len() < kinds_handled(Target::Integer32).len());
    }

    #[test]
    fn no_pair_of_reader_and_kind_appears_twice() {
        let mut pairs: Vec<(Target, u16)> = CONVERSIONS
            .iter()
            .map(|held| (held.target, held.code))
            .collect();
        let before = pairs.len();
        pairs.sort_unstable();
        pairs.dedup();

        assert_eq!(pairs.len(), before);
    }

    #[test]
    fn every_reader_answers_zero_for_an_empty_cell_and_says_nothing() {
        for target in EVERY_TARGET {
            assert_eq!(
                treatment(target, 0x0).map(|held| held.how),
                Some(How::Zero),
                "{target:?}"
            );
        }
    }

    #[test]
    fn and_every_one_answers_zero_for_a_null_cell_unless_a_global_says_otherwise() {
        for target in EVERY_TARGET {
            assert_eq!(
                treatment(target, 0x1).map(|held| held.how),
                Some(How::ZeroOrRaised),
                "{target:?}"
            );
        }
    }

    #[test]
    fn only_the_narrow_signed_reader_checks_what_it_answers() {
        assert_eq!(readers_that_check(), [Target::Integer32]);
    }

    #[test]
    fn the_wide_signed_reader_answers_everything_the_narrow_one_refuses() {
        for code in [0x4u16, 0x5, 0x6, 0x7, 0x13, 0x14, 0x15] {
            let narrow = treatment(Target::Integer32, code).expect("handled");
            let wide = treatment(Target::Integer64, code).expect("handled");

            assert!(narrow.range_checked, "{code:#x}");
            assert!(!wide.range_checked, "{code:#x}");
        }
    }

    #[test]
    fn which_is_the_same_split_the_arithmetic_makes_on_its_own() {
        // A decision taken twice rather than an oversight taken once.
        assert!(crate::variant_arithmetic::notices_overflow(
            crate::variant_arithmetic::Width::Integer32
        ));
        assert!(!crate::variant_arithmetic::notices_overflow(
            crate::variant_arithmetic::Width::Integer64
        ));
        assert_eq!(readers_that_check(), [Target::Integer32]);
    }

    #[test]
    fn three_readers_correct_a_wide_unsigned_value_for_its_sign() {
        assert!(corrects_a_wide_unsigned_value(Target::Floating));
        assert!(corrects_a_wide_unsigned_value(Target::Date));
        assert!(corrects_a_wide_unsigned_value(Target::Money));
    }

    #[test]
    fn the_wide_signed_one_reinterprets_the_bytes_instead() {
        // So a wide unsigned value above the signed limit comes back negative,
        // and nothing says so.
        assert!(!corrects_a_wide_unsigned_value(Target::Integer64));
        assert_eq!(
            treatment(Target::Integer64, 0x15).map(|held| held.how),
            Some(How::Reinterpreted)
        );
        assert!(
            !treatment(Target::Integer64, 0x15)
                .expect("handled")
                .range_checked
        );
    }

    #[test]
    fn the_narrow_one_refuses_it_rather_than_reinterpreting() {
        let held = treatment(Target::Integer32, 0x15).expect("handled");

        assert!(held.range_checked);
        assert_ne!(held.how, How::Reinterpreted);
    }

    #[test]
    fn a_date_and_a_floating_value_are_the_same_eight_bytes() {
        // Each reads the other as it stands, which is why date arithmetic can
        // store a floating result into a date cell.
        assert_eq!(
            treatment(Target::Floating, 0x7).map(|held| held.how),
            Some(How::AsItStands)
        );
        assert_eq!(
            treatment(Target::Date, 0x5).map(|held| held.how),
            Some(How::Asked)
        );
        assert_eq!(
            treatment(Target::Date, 0x7).map(|held| held.how),
            Some(How::AsItStands)
        );
    }

    #[test]
    fn money_is_unscaled_one_way_and_scaled_the_other() {
        assert_eq!(
            treatment(Target::Floating, 0x6).map(|held| held.how),
            Some(How::ScaledDown)
        );
        for code in [0x2u16, 0x3, 0xB, 0x10, 0x11, 0x12, 0x13] {
            assert_eq!(
                treatment(Target::Money, code).map(|held| held.how),
                Some(How::ScaledUp),
                "{code:#x}"
            );
        }
    }

    #[test]
    fn nothing_scaled_into_money_is_checked_first() {
        // The narrow kinds all fit once multiplied, which is why it is safe —
        // not because anything tested it.
        for held in CONVERSIONS.iter().filter(|held| held.how == How::ScaledUp) {
            assert!(!held.range_checked, "{:#x}", held.code);
        }
    }

    #[test]
    fn a_wide_whole_number_reaches_a_date_or_money_by_way_of_a_floating_value() {
        // So it stops being exact past fifty-three bits, while the floating
        // reader takes the same value directly.
        assert_eq!(
            treatment(Target::Date, 0x14).map(|held| held.how),
            Some(How::ThroughADouble)
        );
        assert_eq!(
            treatment(Target::Money, 0x14).map(|held| held.how),
            Some(How::ThroughADouble)
        );
        assert_eq!(
            treatment(Target::Floating, 0x14).map(|held| held.how),
            Some(How::Widened)
        );
    }

    #[test]
    fn the_narrow_reader_rounds_money_by_the_money_routine() {
        assert_eq!(
            treatment(Target::Integer32, 0x6).map(|held| held.how),
            Some(How::RoundedAsMoney)
        );
        assert_eq!(
            treatment(Target::Integer32, 0x5).map(|held| held.how),
            Some(How::Rounded)
        );
    }

    #[test]
    fn so_does_the_wide_one_and_it_is_the_defective_rounding_either_way() {
        assert_eq!(
            treatment(Target::Integer64, 0x6).map(|held| held.how),
            Some(How::RoundedAsMoney)
        );
        assert!(rounds_the_wrong_way(6_000));
    }

    #[test]
    fn the_three_kinds_of_string_are_read_by_two_routines_in_every_reader() {
        for target in [
            Target::Integer32,
            Target::Integer64,
            Target::Floating,
            Target::Date,
            Target::Money,
        ] {
            assert!(strings_share_a_route(target), "{target:?}");
        }
    }

    #[test]
    fn the_short_reader_reads_no_string_at_all() {
        for code in [0x8u16, 0x100, 0x101, 0x102] {
            assert_eq!(treatment(Target::Unsigned64, code), None, "{code:#x}");
        }
        assert!(!strings_share_a_route(Target::Unsigned64));
    }

    #[test]
    fn a_cell_holding_a_cell_is_followed_by_every_reader() {
        for target in [
            Target::Integer32,
            Target::Integer64,
            Target::Floating,
            Target::Date,
            Target::Money,
        ] {
            assert_eq!(
                treatment(target, 0xC).map(|held| held.how),
                Some(How::Followed),
                "{target:?}"
            );
        }
    }

    #[test]
    fn both_interfaces_are_handed_out_by_every_reader_that_knows_them() {
        for target in [
            Target::Integer32,
            Target::Integer64,
            Target::Floating,
            Target::Date,
            Target::Money,
        ] {
            assert_eq!(
                treatment(target, 0x9).map(|held| held.how),
                Some(How::Asked),
                "{target:?}"
            );
            assert_eq!(
                treatment(target, 0xD).map(|held| held.how),
                Some(How::Asked),
                "{target:?}"
            );
        }
    }

    #[test]
    fn the_date_and_money_readers_hand_out_the_scaled_kinds_as_well() {
        // Which the other readers do inline, so the same relationship is
        // implemented two ways in one unit.
        for code in [0x4u16, 0x5] {
            assert_eq!(
                treatment(Target::Date, code).map(|held| held.how),
                Some(How::Asked),
                "{code:#x}"
            );
        }
        assert_eq!(
            treatment(Target::Floating, 0x4).map(|held| held.how),
            Some(How::Widened)
        );
    }

    #[test]
    fn the_matrix_agrees_with_the_narrow_reader_recovered_on_its_own() {
        // The first reading of the narrow reader was written out by hand; this
        // one came out of the family. They have to say the same thing.
        for row in READ_AS_INTEGER.iter().chain(ALSO_READ.iter()) {
            let held = treatment(Target::Integer32, row.code)
                .unwrap_or_else(|| panic!("{:#x} is in the matrix", row.code));

            assert_eq!(held.range_checked, row.range_checked, "{:#x}", row.code);
        }
    }
}

#[cfg(test)]
mod helper_tests {
    use super::*;

    #[test]
    fn no_helper_is_listed_twice() {
        let mut routines: Vec<u32> = HELPERS.iter().map(|helper| helper.routine).collect();
        let before = routines.len();
        routines.sort_unstable();
        routines.dedup();

        assert_eq!(routines.len(), before);
    }

    #[test]
    fn five_widths_are_reached_by_one_call_to_the_platform() {
        let one_call = helpers_taking(Route::OnePlatformCall);

        assert_eq!(one_call.len(), 5);
        let mut widths: Vec<u16> = one_call
            .iter()
            .map(|helper| helper.asks_for.expect("it asks"))
            .collect();
        widths.sort_unstable();

        assert_eq!(widths, PLATFORM_WIDTHS);
    }

    #[test]
    fn they_are_the_same_routine_with_one_number_changed() {
        let one_call = helpers_taking(Route::OnePlatformCall);
        for helper in &one_call {
            assert_eq!(helper.route, Route::OnePlatformCall);
            assert!(helper.asks_for.is_some());
        }
        // And no two of them ask for the same width.
        let mut widths: Vec<u16> = one_call
            .iter()
            .filter_map(|helper| helper.asks_for)
            .collect();
        let before = widths.len();
        widths.sort_unstable();
        widths.dedup();
        assert_eq!(widths.len(), before);
    }

    #[test]
    fn the_wide_signed_width_is_the_one_the_platform_cannot_be_asked_for() {
        assert!(!PLATFORM_WIDTHS.contains(&0x14));
        assert!(!PLATFORM_WIDTHS.contains(&0x15));
        assert!(!has_a_platform_code(0x14));
        assert!(!has_a_platform_code(0x15));
    }

    #[test]
    fn so_its_helper_takes_three_tries_and_is_the_only_one_that_does() {
        let three = helpers_taking(Route::ThreeTries);

        assert_eq!(three.len(), 1);
        assert_eq!(three[0].target, Target::Integer64);
        assert_eq!(three[0].asks_for, Some(0x3));
    }

    #[test]
    fn and_the_reader_that_most_needs_the_range_is_the_one_that_cannot_ask_for_it() {
        // A value between the two limits arrives through a floating value and
        // is rounded, so it is inexact past fifty-three bits.
        let three = helpers_taking(Route::ThreeTries);

        assert_eq!(three[0].target, Target::Integer64);
        assert!(!PLATFORM_WIDTHS.contains(&0x14));
    }

    #[test]
    fn the_wide_unsigned_reader_has_no_helper_of_any_kind() {
        // Consistent with it not being written from the template.
        assert!(helpers_for(Target::Unsigned64).is_empty());
        assert!(helpers_for(Target::Single).is_empty());
        assert!(helpers_for(Target::SmallInt).is_empty());
    }

    #[test]
    fn the_boolean_width_can_be_asked_of_the_platform_after_all() {
        // Which only finishing the family showed: the first four helpers found
        // made it look as though there were four widths.
        assert!(has_a_platform_code(0xB));
        assert_eq!(helpers_for(Target::Boolean).len(), 2);
    }

    #[test]
    fn every_width_written_from_the_template_handles_the_third_kind_of_text() {
        let installed = helpers_taking(Route::ThroughAnInstalledRoutine);

        assert_eq!(installed.len(), 6);
        for target in [
            Target::Integer32,
            Target::Integer64,
            Target::Floating,
            Target::Date,
            Target::Money,
        ] {
            assert!(
                installed.iter().any(|helper| helper.target == target),
                "{target:?}"
            );
        }
    }

    #[test]
    fn none_of_those_asks_the_platform_for_anything() {
        for helper in helpers_taking(Route::ThroughAnInstalledRoutine) {
            assert_eq!(helper.asks_for, None);
        }
    }

    #[test]
    fn only_a_date_and_money_are_reached_by_way_of_a_floating_value() {
        let by_double = helpers_taking(Route::ByWayOfAFloatingValue);

        assert_eq!(by_double.len(), 2);
        for helper in by_double {
            assert!(matches!(helper.target, Target::Date | Target::Money));
        }
    }

    #[test]
    fn which_is_what_the_matrix_says_about_a_wide_whole_number() {
        for target in [Target::Date, Target::Money] {
            assert_eq!(
                treatment(target, 0x14).map(|held| held.how),
                Some(How::ThroughADouble),
                "{target:?}"
            );
        }
    }

    #[test]
    fn a_status_of_zero_is_the_only_one_that_means_it_worked() {
        assert_eq!(outcome_of(0), Outcome::Converted);
        assert_ne!(outcome_of(1), Outcome::Converted);
        assert_ne!(outcome_of(-1), Outcome::Converted);
    }

    #[test]
    fn two_statuses_are_recognised_and_named() {
        assert_eq!(outcome_of(NOT_THAT_KIND), Outcome::NotThatKind);
        assert_eq!(outcome_of(DID_NOT_FIT), Outcome::DidNotFit);
        assert!(names_what_it_was_converting(NOT_THAT_KIND));
        assert!(names_what_it_was_converting(DID_NOT_FIT));
    }

    #[test]
    fn anything_else_is_raised_without_saying_what_was_being_converted() {
        assert_eq!(outcome_of(-42), Outcome::SomethingElse);
        assert!(!names_what_it_was_converting(-42));
        assert!(!names_what_it_was_converting(1));
    }

    #[test]
    fn the_status_the_text_parse_recovers_from_is_the_one_meaning_not_a_number() {
        // The same code, reached two ways: the text parse takes it as a cue to
        // try again, and the status check takes it as a refusal to report.
        assert_eq!(NOT_THAT_KIND, TEXT_NOT_A_NUMBER);
        assert_eq!(outcome_of(TEXT_NOT_A_NUMBER), Outcome::NotThatKind);
    }

    #[test]
    fn a_status_of_zero_says_nothing_needs_reporting() {
        assert!(!names_what_it_was_converting(0));
    }
}

#[cfg(test)]
mod parser_tests {
    use super::*;

    #[test]
    fn there_is_one_parser_for_each_width_written_from_the_template() {
        assert_eq!(TEXT_PARSERS.len(), 5);
        for target in [
            Target::Integer32,
            Target::Integer64,
            Target::Floating,
            Target::Date,
            Target::Money,
        ] {
            assert!(text_parser(target).is_some(), "{target:?}");
        }
    }

    #[test]
    fn the_short_reader_has_none() {
        assert!(text_parser(Target::Unsigned64).is_none());
    }

    #[test]
    fn no_two_parsers_take_the_same_steps() {
        // Which is the point: the same text is read differently by each.
        let chains: Vec<&[Step]> = TEXT_PARSERS.iter().map(|parser| parser.steps).collect();
        for (at, chain) in chains.iter().enumerate() {
            for (other, against) in chains.iter().enumerate() {
                if at != other {
                    assert_ne!(chain, against, "{at} {other}");
                }
            }
        }
    }

    #[test]
    fn two_of_the_five_accept_a_boolean_spelled_out_in_words() {
        assert_eq!(
            accept_a_spelled_out_boolean(),
            [Target::Integer32, Target::Integer64]
        );
    }

    #[test]
    fn so_the_same_text_is_a_number_for_one_width_and_an_error_for_another() {
        let accepting = accept_a_spelled_out_boolean();

        assert!(accepting.contains(&Target::Integer32));
        assert!(!accepting.contains(&Target::Floating));
        assert!(!accepting.contains(&Target::Date));
        assert!(!accepting.contains(&Target::Money));
    }

    #[test]
    fn four_of_the_five_ask_the_platform_before_trying_anything_of_their_own() {
        for target in [
            Target::Integer32,
            Target::Floating,
            Target::Date,
            Target::Money,
        ] {
            assert!(asks_the_platform_first(target), "{target:?}");
        }
    }

    #[test]
    fn the_wide_signed_one_tries_its_own_parse_first() {
        // Because the platform has no entry point for that width — the same
        // cause that gives it a three-step interface helper.
        let parser = text_parser(Target::Integer64).expect("it parses");

        assert_eq!(parser.steps.first(), Some(&Step::ItsOwnNumber));
        assert!(!asks_the_platform_first(Target::Integer64));
        assert!(!has_a_platform_code(0x14));
    }

    #[test]
    fn and_it_reaches_a_wide_value_through_a_floating_one_when_it_has_to() {
        let parser = text_parser(Target::Integer64).expect("it parses");

        assert!(parser.steps.contains(&Step::ThePlatformFloatingThenRound));
    }

    #[test]
    fn the_date_parser_falls_back_to_reading_the_text_as_a_number() {
        // Consistent with a date being the same eight bytes as a floating
        // value.
        let parser = text_parser(Target::Date).expect("it parses");

        assert_eq!(
            parser.steps,
            [Step::ThePlatform, Step::ItsOwnDate, Step::ItsOwnFloating]
        );
    }

    #[test]
    fn every_chain_starts_with_one_attempt_and_adds_fallbacks() {
        for parser in TEXT_PARSERS {
            assert!(!parser.steps.is_empty(), "{:#010X}", parser.routine);
            assert!(parser.steps.len() <= 4, "{:#010X}", parser.routine);
        }
    }

    #[test]
    fn the_program_own_parses_are_given_its_own_settings_and_not_the_platform_locale() {
        // Two different notions of locale inside one routine.
        for parser in TEXT_PARSERS {
            for step in parser.steps {
                let own = uses_its_own_settings(*step);
                let platform = matches!(
                    step,
                    Step::ThePlatform
                        | Step::ThePlatformNarrower
                        | Step::ThePlatformFloatingThenRound
                );
                assert_ne!(own, platform, "{step:?}");
            }
        }
        assert_eq!(CONVERSION_LOCALE, 0x400);
    }

    #[test]
    fn a_text_that_fails_every_step_is_reported_as_not_being_that_kind() {
        // Whatever actually went wrong.
        assert_eq!(REPORTED_WHEN_ALL_ELSE_FAILS, NOT_THAT_KIND);
        assert_eq!(
            outcome_of(REPORTED_WHEN_ALL_ELSE_FAILS),
            Outcome::NotThatKind
        );
    }

    #[test]
    fn a_value_that_did_not_fit_is_refused_by_a_class_of_its_own() {
        assert!(overflow_is_its_own_class());
        assert_ne!(NOT_THAT_KIND, DID_NOT_FIT);
        assert_eq!(outcome_of(DID_NOT_FIT), Outcome::DidNotFit);
    }

    #[test]
    fn the_parsers_agree_with_what_the_matrix_says_about_strings() {
        for parser in TEXT_PARSERS {
            assert_eq!(
                treatment(parser.target, 0x102).map(|held| held.how),
                Some(How::Parsed),
                "{:?}",
                parser.target
            );
        }
    }
}

#[cfg(test)]
mod further_tests {
    use super::*;

    #[test]
    fn the_boolean_reader_handles_every_kind_the_template_readers_do() {
        let handled: Vec<u16> = FURTHER_CONVERSIONS
            .iter()
            .filter(|held| held.target == Target::Boolean)
            .map(|held| held.code)
            .collect();

        assert_eq!(handled, kinds_handled(Target::Integer32));
    }

    #[test]
    fn it_reads_every_number_as_whether_it_is_zero() {
        for code in [0x2u16, 0x3, 0x4, 0x5, 0x6, 0x7, 0xB, 0x13, 0x14, 0x15] {
            assert_eq!(
                further_treatment(Target::Boolean, code).map(|held| held.how),
                Some(How::NotZero),
                "{code:#x}"
            );
        }
    }

    #[test]
    fn nothing_it_does_can_fail_and_nothing_it_does_is_checked() {
        assert!(!reading_can_fail(Target::Boolean));
        for held in FURTHER_CONVERSIONS
            .iter()
            .filter(|held| held.target == Target::Boolean)
        {
            assert!(!held.range_checked, "{:#x}", held.code);
        }
    }

    #[test]
    fn which_is_why_the_text_parsers_fall_back_to_it() {
        assert!(!accept_a_spelled_out_boolean().is_empty());
        assert!(!reading_can_fail(Target::Boolean));
    }

    #[test]
    fn the_single_precision_reader_handles_a_third_of_what_the_others_do() {
        let handled = FURTHER_CONVERSIONS
            .iter()
            .filter(|held| held.target == Target::Single)
            .count();

        assert_eq!(handled, 12);
        assert!(handled < 22);
    }

    #[test]
    fn it_reads_no_string_no_interface_and_no_cell_holding_a_cell() {
        for code in [0x8u16, 0x9, 0xC, 0xD, 0x100, 0x101, 0x102] {
            assert_eq!(further_treatment(Target::Single, code), None, "{code:#x}");
        }
    }

    #[test]
    fn nor_does_it_read_a_double_a_date_or_money() {
        // So the widths it cannot narrow without losing something are exactly
        // the ones it does not offer.
        for code in [0x5u16, 0x6, 0x7] {
            assert_eq!(further_treatment(Target::Single, code), None, "{code:#x}");
        }
    }

    #[test]
    fn the_small_whole_number_reader_handles_least_of_all() {
        let handled: Vec<u16> = FURTHER_CONVERSIONS
            .iter()
            .filter(|held| held.target == Target::SmallInt)
            .map(|held| held.code)
            .collect();

        assert_eq!(handled, [0x0, 0x1, 0x2, 0xB, 0x10, 0x11]);
    }

    #[test]
    fn coverage_follows_whether_the_conversion_can_fail_and_not_the_width() {
        let boolean = KINDS_EACH_READER_HANDLES
            .iter()
            .find(|(target, _)| *target == Target::Boolean)
            .map(|(_, count)| *count)
            .expect("listed");
        let single = KINDS_EACH_READER_HANDLES
            .iter()
            .find(|(target, _)| *target == Target::Single)
            .map(|(_, count)| *count)
            .expect("listed");

        // The narrowest target covers the most.
        assert!(boolean > single);
        assert!(!reading_can_fail(Target::Boolean));
        assert!(reading_can_fail(Target::Single));
    }

    #[test]
    fn every_reader_is_counted_once() {
        let mut targets: Vec<Target> = KINDS_EACH_READER_HANDLES
            .iter()
            .map(|(target, _)| *target)
            .collect();
        let before = targets.len();
        targets.sort_unstable();
        targets.dedup();

        assert_eq!(targets.len(), before);
        assert_eq!(before, 9);
    }

    #[test]
    fn the_five_template_readers_all_count_the_same() {
        for (target, count) in KINDS_EACH_READER_HANDLES {
            if matches!(
                target,
                Target::Integer32
                    | Target::Integer64
                    | Target::Floating
                    | Target::Date
                    | Target::Money
            ) {
                assert_eq!(count, 22, "{target:?}");
            }
        }
    }

    #[test]
    fn every_further_reader_answers_zero_for_empty_and_zero_or_a_refusal_for_null() {
        for target in [Target::Boolean, Target::Single, Target::SmallInt] {
            assert_eq!(
                further_treatment(target, 0x0).map(|held| held.how),
                Some(How::Zero),
                "{target:?}"
            );
            assert_eq!(
                further_treatment(target, 0x1).map(|held| held.how),
                Some(How::ZeroOrRaised),
                "{target:?}"
            );
        }
    }

    #[test]
    fn a_cell_is_set_to_nothing_known_by_emptying_it_first() {
        assert!(null_is_set_after_emptying());
    }

    #[test]
    fn every_width_the_conversion_knows_has_a_setter_of_its_own() {
        for (code, routine) in CONVERSION_SETTERS {
            assert!(
                crate::variant_value::SETTERS
                    .iter()
                    .any(|setter| setter.routine == routine && setter.code == code),
                "{code:#x}"
            );
        }
    }

    #[test]
    fn the_conversion_uses_the_setters_that_write_the_value_first() {
        // And the style sheet uses the other half of each duplicate pair — so
        // the two orders each have a caller and are not an accident.
        assert_eq!(
            crate::variant_value::disagree_about_order(),
            [0x5, 0x6, 0x7]
        );
        assert!(picks_the_value_first_twin());
        // And it never reaches for the code-first half of a pair.
        for (_, routine) in CONVERSION_SETTERS {
            assert_ne!(routine, 0x0046_8860);
            assert_ne!(routine, 0x0046_88A0);
            assert_ne!(routine, 0x0046_88E0);
        }
    }

    #[test]
    fn refusing_to_convert_a_null_to_nothing_names_a_kind_no_cell_can_hold() {
        assert_eq!(MADE_UP_SOURCE_KIND, 0xFFFF_0001);
        assert!(u16::try_from(MADE_UP_SOURCE_KIND).is_err());
    }

    #[test]
    fn only_an_array_of_cells_is_released_element_by_element() {
        assert!(releases_each_element(0xC));
        assert!(!releases_each_element(crate::variant_value::INTEGER));
        assert!(!releases_each_element(0x102));
    }

    #[test]
    fn mapping_an_array_always_gives_an_array_of_cells() {
        assert_eq!(MAPPED_ARRAYS_HOLD_CELLS, 0x200C);
        // The array bit, plus the code for a cell.
        assert_eq!(MAPPED_ARRAYS_HOLD_CELLS & 0x2000, 0x2000);
        assert_eq!(MAPPED_ARRAYS_HOLD_CELLS & 0xFFF, 0xC);
    }

    #[test]
    fn what_the_caller_had_survives_a_failure_to_allocate_the_new_array() {
        assert!(destination_survives_a_failed_allocation());
    }

    #[test]
    fn a_cell_that_is_not_an_array_is_refused_by_both_array_routines() {
        assert_ne!(NOT_AN_ARRAY, 0);
        assert_eq!(outcome_of(NOT_AN_ARRAY), Outcome::SomethingElse);
    }
}

#[cfg(test)]
mod wrapper_tests {
    use super::*;

    #[test]
    fn every_wrapper_reads_a_kind_that_holds_something() {
        for wrapper in STORE_WRAPPERS {
            assert!(
                crate::variant_value::owns_something(wrapper.kind),
                "{:#x}",
                wrapper.kind
            );
        }
    }

    #[test]
    fn each_hands_its_result_to_the_setter_for_that_kind() {
        for wrapper in STORE_WRAPPERS {
            assert!(
                crate::variant_value::SETTERS.iter().any(|setter| {
                    setter.routine == wrapper.setter && setter.code == wrapper.kind
                }),
                "{:#010X}",
                wrapper.routine
            );
        }
    }

    #[test]
    fn and_every_one_of_those_setters_takes_a_reference() {
        for wrapper in STORE_WRAPPERS {
            let setter = crate::variant_value::SETTERS
                .iter()
                .find(|setter| setter.routine == wrapper.setter)
                .expect("listed");

            assert!(setter.takes_a_reference, "{:#010X}", wrapper.routine);
        }
    }

    #[test]
    fn the_two_interface_kinds_are_the_ones_that_share_a_release() {
        assert_eq!(share_a_release(), [0x9, 0xD]);
    }

    #[test]
    fn which_agrees_with_them_being_stored_identically() {
        assert_eq!(
            share_a_release(),
            crate::variant_value::INTERFACE_CODES.to_vec()
        );
    }

    #[test]
    fn no_other_pair_of_wrappers_shares_anything() {
        let mut setters: Vec<u32> = STORE_WRAPPERS.iter().map(|w| w.setter).collect();
        let before = setters.len();
        setters.sort_unstable();
        setters.dedup();

        assert_eq!(setters.len(), before);
    }

    #[test]
    fn a_custom_conversion_asks_the_source_end_first() {
        assert_eq!(asked_first(), HandlerSlot::IntoThatWidth);
    }

    #[test]
    fn the_two_ends_are_asked_through_different_slots() {
        let slots: Vec<usize> = HANDLER_SLOTS.iter().map(|(_, at)| *at).collect();

        assert_eq!(slots, [0x38, 0x30]);
        assert_ne!(slots[0], slots[1]);
    }

    #[test]
    fn a_dimension_counts_the_span_between_its_bounds_inclusively() {
        assert_eq!(extent_of(0, 9), 10);
        assert_eq!(extent_of(1, 10), 10);
        assert_eq!(extent_of(5, 5), 1);
    }

    #[test]
    fn an_empty_dimension_is_written_with_its_upper_bound_below_its_lower() {
        assert_eq!(extent_of(0, -1), 0);
        assert_eq!(extent_of(1, 0), 0);
    }

    #[test]
    fn the_unit_has_five_refusals_and_each_is_its_own_class() {
        let mut places: Vec<u32> = REFUSALS.iter().map(|(at, _)| *at).collect();
        let before = places.len();
        places.sort_unstable();
        places.dedup();

        assert_eq!(places.len(), before);
        assert_eq!(before, 5);
    }

    #[test]
    fn the_two_the_status_check_reaches_are_among_them() {
        for place in [0x0046_0110u32, 0x0046_02F0] {
            assert!(REFUSALS.iter().any(|(at, _)| *at == place), "{place:#010X}");
        }
    }

    #[test]
    fn and_so_are_the_two_the_arithmetic_and_the_flattening_reach() {
        assert!(
            REFUSALS
                .iter()
                .any(|(at, _)| *at == raised_at(Failure::OperationNotPossible))
        );
        assert!(
            REFUSALS
                .iter()
                .any(|(at, _)| *at == raised_at(Failure::NoHandlerForTheKind))
        );
    }

    #[test]
    fn no_two_refusals_say_the_same_thing() {
        let mut said: Vec<&str> = REFUSALS.iter().map(|(_, text)| *text).collect();
        let before = said.len();
        said.sort_unstable();
        said.dedup();

        assert_eq!(said.len(), before);
    }
}
