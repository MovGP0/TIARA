//! Engineering notation: picking a magnitude prefix, and taking one back off.
//!
//! These two are inverses and are used together. A measured value is scaled
//! into a readable range and told which prefix that took; the unit it was
//! measured in is then stripped back to its base so the new prefix can be put
//! in front of it. Doing it in two halves is what lets a value recorded in
//! millivolts come back out as microvolts when that is the range it landed in.

/// Reported when a value falls outside every band.
///
/// Part of Ghidra function `FUN_012e1210` at `0x012E1210`.
///
/// The recovered code returns this through the same out-parameter as the
/// prefix, so a caller that concatenates the prefix onto a unit name writes
/// the whole sentence into its report where a unit should be. The port keeps
/// the text but separates the two outcomes; see [`prefix_text`].
pub const WRONG_INPUT_MESSAGE: &str = "Wrong input number.";

/// The smallest band, and the epsilon the band edges are shifted by.
///
/// Part of Ghidra function `FUN_012e1210` at `0x012E1210`.
///
/// One constant serving as both is not a coincidence in effect: it makes the
/// bottom band's lower edge exactly zero, so no positive value is ever too
/// small to name. See [`choose_prefix`].
const SMALLEST_BAND: f64 = 1e-15;

/// How many bands the search walks.
const BAND_COUNT: usize = 10;

/// A magnitude prefix.
///
/// Part of Ghidra function `FUN_012e1210` at `0x012E1210`.
///
/// The bands themselves are recovered exactly — the search starts at `1e-15`
/// and multiplies by a thousand — so which prefix goes with which band is not
/// in doubt. The spellings are the standard ones for those bands; the
/// recovered code holds them as string constants Ghidra did not type, so the
/// only real choice here is writing micro as `u` rather than the Greek letter,
/// which is what a program emitting into a plain-text report is likely to
/// have done.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SiPrefix {
    /// A thousandth of a millionth of a millionth.
    Femto,
    /// A millionth of a millionth.
    Pico,
    /// A thousandth of a millionth.
    Nano,
    /// A millionth.
    Micro,
    /// A thousandth.
    Milli,
    /// None: the value is already in range and carries no prefix.
    Unscaled,
    /// A thousand.
    Kilo,
    /// A million.
    Mega,
    /// A thousand million.
    Giga,
}

impl SiPrefix {
    /// Which prefix each band is named with, in the order they are searched.
    ///
    /// Part of Ghidra function `FUN_012e1210` at `0x012E1210`.
    ///
    /// Ten bands but nine distinct prefixes: the recovered code sets the
    /// prefix for the next band at the end of each step and stops doing so
    /// after the ninth, so the tenth band — a million million and up — is
    /// labelled with the ninth band's prefix while still being divided by its
    /// own scale. A value of `2e12` therefore comes out as `2 G` rather than
    /// `2 T`, understating it a thousandfold. This is reproduced rather than
    /// corrected, because a report written by the original and one written
    /// here have to agree.
    pub const BANDS: [Self; BAND_COUNT] = [
        Self::Femto,
        Self::Pico,
        Self::Nano,
        Self::Micro,
        Self::Milli,
        Self::Unscaled,
        Self::Kilo,
        Self::Mega,
        Self::Giga,
        Self::Giga,
    ];

    /// The symbol written in front of a unit.
    ///
    /// The unscaled band has none, which is why this is a string rather than
    /// a character — an empty prefix concatenates onto a unit name and leaves
    /// it alone.
    #[must_use]
    pub const fn symbol(self) -> &'static str {
        match self {
            Self::Femto => "f",
            Self::Pico => "p",
            Self::Nano => "n",
            Self::Micro => "u",
            Self::Milli => "m",
            Self::Unscaled => "",
            Self::Kilo => "k",
            Self::Mega => "M",
            Self::Giga => "G",
        }
    }
}

/// The scale of each band, lowest first.
///
/// Part of Ghidra function `FUN_012e1210` at `0x012E1210`.
///
/// Built by repeated multiplication, the way the recovered search builds it,
/// rather than by exponentiation — the two do not agree to the last bit and
/// the band edges are compared against, so it matters which one is used.
#[must_use]
pub const fn band_scales() -> [f64; BAND_COUNT] {
    let mut scales = [0.0; BAND_COUNT];
    let mut scale = SMALLEST_BAND;
    let mut band = 0;
    while band < BAND_COUNT {
        scales[band] = scale;
        scale *= 1000.0;
        band += 1;
    }
    scales
}

/// A value too large for any band to name.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ValueOutOfBands;

impl core::fmt::Display for ValueOutOfBands {
    fn fmt(&self, formatter: &mut core::fmt::Formatter<'_>) -> core::fmt::Result {
        formatter.write_str(WRONG_INPUT_MESSAGE)
    }
}

impl std::error::Error for ValueOutOfBands {}

/// Implements Ghidra function `FUN_012e1210` at `0x012E1210`.
///
/// Scales one value into a readable range and says what prefix that took.
///
/// The sign is set aside for the search and put back afterwards, so the bands
/// are decided on magnitude alone. Each band's edges are shifted down by a
/// fixed epsilon, which at the bottom of the range pulls the first band's
/// lower edge to exactly zero — so every positive value, however small, lands
/// somewhere, and only the top of the range can fail. Zero is answered before
/// the search begins and keeps no prefix at all.
///
/// The bands are reached by multiplying a thousand at a time rather than by
/// exponentiation, which leaves each scale a hair above the power of ten it
/// stands for. The visible consequence is that a value sitting exactly on a
/// boundary stays in the band below: one kilovolt is written as 1000 V, not
/// 1 kV.
///
/// # Errors
///
/// Returns [`ValueOutOfBands`] for a magnitude at or above the top band's
/// upper edge, and for a value that is not a number.
pub fn choose_prefix(value: f64) -> Result<(f64, SiPrefix), ValueOutOfBands> {
    // The recovered code tests against zero exactly; an epsilon here would
    // send values the original scales into the branch that does not.
    #[allow(clippy::float_cmp)]
    if value == 0.0 {
        return Ok((value, SiPrefix::Unscaled));
    }

    let negative = value < 0.0;
    let magnitude = value.abs();
    let mut scale = SMALLEST_BAND;
    for prefix in SiPrefix::BANDS {
        // Not a fused multiply-add: that is the more accurate of the two, and
        // the recovered edge is the less accurate one. A value sitting on a
        // band boundary has to fall the same side of it here as there.
        #[allow(clippy::suboptimal_flops)]
        let upper = scale * 1000.0 - SMALLEST_BAND;
        if magnitude >= scale - SMALLEST_BAND && magnitude < upper {
            let scaled = magnitude / scale;
            return Ok((if negative { -scaled } else { scaled }, prefix));
        }
        scale *= 1000.0;
    }
    Err(ValueOutOfBands)
}

/// What the recovered code puts in the prefix slot, failure included.
///
/// Part of Ghidra function `FUN_012e1210` at `0x012E1210`.
///
/// Kept so a caller that reproduces the original's reports gets the original's
/// text, including the sentence that ends up where a prefix belongs.
#[must_use]
pub const fn prefix_text(chosen: Result<(f64, SiPrefix), ValueOutOfBands>) -> &'static str {
    match chosen {
        Ok((_, prefix)) => prefix.symbol(),
        Err(_) => WRONG_INPUT_MESSAGE,
    }
}

/// The longest unit name the stripper will look at.
///
/// Part of Ghidra function `FUN_012e14b0` at `0x012E14B0`.
pub const LONGEST_UNIT: usize = 7;

/// How many prefix symbols the recovered stripper knows.
///
/// Part of Ghidra function `FUN_012e14b0` at `0x012E14B0`.
///
/// Seven single-character constants, at `0x012E18FC` through `0x012E1960`.
/// Their characters are not in the decompilation — Ghidra left them untyped —
/// but the sibling at `0x012E0AE0` tests its own copy of the same list against
/// eight doubles that are typed, which settles the set: femto through giga,
/// exactly [`MULTIPLIER_PREFIXES`]. The stripper holds one fewer, and its last
/// two constants sit at the same odd spacing as mega and giga do there, so
/// what it omits is one of the first six. Which one is still unknown. See
/// [`UnitVocabulary::engineering`].
pub const RECOVERED_PREFIX_COUNT: usize = 7;

/// The one whole-unit name that survived as a literal.
///
/// Part of Ghidra function `FUN_012e14b0` at `0x012E14B0`.
pub const RECOVERED_WHOLE_UNIT: &str = "Celsius";

/// The names a unit string may be stripped down to, and what may be stripped.
///
/// Part of Ghidra function `FUN_012e14b0` at `0x012E14B0`.
pub struct UnitVocabulary<'a> {
    /// The prefix symbols a unit may begin with.
    ///
    /// All of them do the same thing, so the order they are tested in is not
    /// observable.
    pub prefix_symbols: &'a [char],
    /// Units recognised whole, in the order the recovered code tests them.
    ///
    /// The order does matter: every one is tested and a later match overwrites
    /// an earlier, so the last name that the unit begins with is the answer.
    pub whole_units: &'a [&'a str],
}

impl UnitVocabulary<'static> {
    /// Every prefix [`choose_prefix`] can emit, and the units it knows whole.
    ///
    /// The recovered stripper knows seven of these eight; which one it leaves
    /// out did not survive. This one knows all eight, which is the pairing the
    /// two halves need in order to be inverses, and is the same set the
    /// multiplier at `0x012E0AE0` works from. The difference is visible only
    /// for a unit beginning with whichever one the original left out, where
    /// this strips a character the original kept.
    ///
    /// The whole-unit names are the recovered lengths — three characters,
    /// then seven, then two — of which only the seven-character one survived
    /// as a literal.
    #[must_use]
    pub const fn engineering() -> Self {
        Self {
            prefix_symbols: &['f', 'p', 'n', 'u', 'm', 'k', 'M', 'G'],
            whole_units: &["deg", RECOVERED_WHOLE_UNIT, "dB"],
        }
    }
}

/// Implements Ghidra function `FUN_012e14b0` at `0x012E14B0`.
///
/// Strips a magnitude prefix off a unit, leaving the unit it is a prefix of.
///
/// A single character is a unit already and is handed straight back. Anything
/// of two to seven characters has its first character tested: if that is a
/// prefix symbol, what remains is the answer. If it is not, the string is
/// matched from the front against the units that are spelled out, because
/// those begin with characters that would otherwise look like prefixes.
///
/// Everything else — nothing at all, or eight characters and up — comes back
/// empty, and so does a two-to-seven character string that is neither prefixed
/// nor recognised. The recovered code reaches that last case by simply not
/// assigning its result, which leaves a Delphi caller holding the empty string
/// it started with; the two are the same thing seen from outside.
#[must_use]
pub fn base_unit<'a>(unit: &'a str, vocabulary: &UnitVocabulary<'a>) -> &'a str {
    let length = unit.chars().count();
    if length == 1 {
        return unit;
    }
    if !(2..=LONGEST_UNIT).contains(&length) {
        return "";
    }

    let Some(first) = unit.chars().next() else {
        return "";
    };
    if vocabulary.prefix_symbols.contains(&first) {
        return &unit[first.len_utf8()..];
    }

    let mut recognised = "";
    for name in vocabulary.whole_units {
        if unit.starts_with(name) {
            recognised = name;
        }
    }
    recognised
}

/// The prefixes that stand for a multiplier, smallest first.
///
/// Part of Ghidra function `FUN_012e0ae0` at `0x012E0AE0`.
///
/// Eight of the nine bands: every one that scales, with the unscaled band
/// left out because there is nothing to multiply by. This list is recovered
/// independently of [`SiPrefix::BANDS`] — from a table of eight doubles at
/// `0x012E0D9C` through `0x012E0E10` holding `1e-15` to `1e9` — and the two
/// agree, which is what pins the enum's membership down: there is no tera
/// here either.
pub const MULTIPLIER_PREFIXES: [SiPrefix; 8] = [
    SiPrefix::Femto,
    SiPrefix::Pico,
    SiPrefix::Nano,
    SiPrefix::Micro,
    SiPrefix::Milli,
    SiPrefix::Kilo,
    SiPrefix::Mega,
    SiPrefix::Giga,
];

impl SiPrefix {
    /// What a value carrying this prefix has to be multiplied by.
    ///
    /// Part of Ghidra function `FUN_012e0ae0` at `0x012E0AE0`.
    ///
    /// These are exact powers of ten, unlike the band scales the chooser
    /// searches with, which it reaches by multiplying a thousand at a time and
    /// which drift. So scaling a value down with [`choose_prefix`] and back up
    /// with this does not return quite the number it started from.
    #[must_use]
    pub const fn multiplier(self) -> f64 {
        match self {
            Self::Femto => 1e-15,
            Self::Pico => 1e-12,
            Self::Nano => 1e-9,
            Self::Micro => 1e-6,
            Self::Milli => 1e-3,
            Self::Unscaled => 1.0,
            Self::Kilo => 1e3,
            Self::Mega => 1e6,
            Self::Giga => 1e9,
        }
    }

    /// Which prefix one symbol stands for, if any.
    ///
    /// Part of Ghidra function `FUN_012e0ae0` at `0x012E0AE0`.
    ///
    /// The comparison is exact and case-sensitive, which it has to be: milli
    /// and mega are the same letter in different cases.
    #[must_use]
    pub fn from_symbol(symbol: char) -> Option<Self> {
        MULTIPLIER_PREFIXES
            .into_iter()
            .find(|prefix| prefix.symbol().starts_with(symbol))
    }
}

/// Implements Ghidra function `FUN_012e0ae0` at `0x012E0AE0`.
///
/// What a unit string's prefix multiplies its value by.
///
/// The sibling of [`base_unit`], and shaped the same way: a unit of one
/// character has no prefix, one of eight characters or more is not looked at,
/// and anything between has its first character tested. Between them they turn
/// `mV` into a thousandth and a volt.
///
/// A field holding one of the texts that stand in for a value that could not
/// be produced is answered before anything else, because there is no value for
/// a multiplier to apply to — see the marker test in
/// [`crate::csv_import::is_unusable_value`], which this shares.
///
/// The recovered code leaves its result unassigned when the first character is
/// none of the eight, returning whatever was on the stack. This answers one,
/// which is what every other way of having no prefix answers.
#[must_use]
pub fn multiplier_for_prefix(unit: &str, unusable_markers: &[&str]) -> f64 {
    if unusable_markers.contains(&unit) {
        return 1.0;
    }

    let length = unit.chars().count();
    if !(2..=LONGEST_UNIT).contains(&length) {
        return 1.0;
    }

    unit.chars()
        .next()
        .and_then(SiPrefix::from_symbol)
        .map_or(1.0, SiPrefix::multiplier)
}

/// Implements Ghidra function `FUN_012e0e20` at `0x012E0E20`.
///
/// Scales a value by whatever prefix its unit carries.
///
/// The third of the family and the one the readers actually call: where
/// [`multiplier_for_prefix`] answers the factor, this applies it. It is gated
/// the same way — a one-character unit, one of eight characters or more, and a
/// field holding a stand-in for a missing value all leave the number alone.
///
/// Two things separate it from its sibling, and both are in its favour.
///
/// Kilo is matched without regard to case, by `CompareText` where every other
/// prefix uses `CompareStr`, so a unit written `KOhm` is scaled here and is
/// not by [`multiplier_for_prefix`]. Nothing is lost by it: milli is tested
/// before kilo and mega after, so neither can be reached by the other's
/// letter.
///
/// And where the sibling leaves its result unassigned for a first character it
/// does not know, this one has already put the original value there and
/// returns it unchanged — the same answer as every other way of having no
/// prefix.
#[must_use]
pub fn apply_prefix(value: f64, unit: &str, unusable_markers: &[&str]) -> f64 {
    if unusable_markers.contains(&unit) {
        return value;
    }

    let length = unit.chars().count();
    if !(2..=LONGEST_UNIT).contains(&length) {
        return value;
    }

    let Some(first) = unit.chars().next() else {
        return value;
    };
    for prefix in MULTIPLIER_PREFIXES {
        let matched = if prefix == SiPrefix::Kilo {
            first.eq_ignore_ascii_case(&'k')
        } else {
            prefix.symbol().starts_with(first)
        };
        if matched {
            return value * prefix.multiplier();
        }
    }
    value
}

#[cfg(test)]
mod tests {
    use super::*;

    fn prefix_of(value: f64) -> Result<SiPrefix, ValueOutOfBands> {
        choose_prefix(value).map(|(_, prefix)| prefix)
    }

    fn scaled(value: f64) -> f64 {
        choose_prefix(value).map_or(f64::NAN, |(scaled, _)| scaled)
    }

    #[test]
    fn a_value_already_in_range_keeps_itself_and_takes_no_prefix() {
        assert!((scaled(4.7) - 4.7).abs() < 1e-12);
        assert_eq!(prefix_of(4.7), Ok(SiPrefix::Unscaled));
        assert_eq!(SiPrefix::Unscaled.symbol(), "");
    }

    #[test]
    fn each_band_is_named_by_its_own_prefix() {
        // Taken from the middle of each band; the edges are their own story.
        let expected = [
            (5e-15, SiPrefix::Femto),
            (5e-12, SiPrefix::Pico),
            (5e-9, SiPrefix::Nano),
            (5e-6, SiPrefix::Micro),
            (5e-3, SiPrefix::Milli),
            (5.0, SiPrefix::Unscaled),
            (5e3, SiPrefix::Kilo),
            (5e6, SiPrefix::Mega),
            (5e9, SiPrefix::Giga),
        ];
        for (value, prefix) in expected {
            assert_eq!(prefix_of(value), Ok(prefix), "{value}");
        }
    }

    #[test]
    fn a_round_thousand_stays_in_the_band_below_it() {
        // Building the scales by repeated multiplication leaves each one a
        // hair above the power of ten it stands for, so the value that looks
        // like the start of a band sits just short of it. A measurement of
        // exactly one kilovolt is written as 1000 V.
        assert_eq!(prefix_of(1e3), Ok(SiPrefix::Unscaled));
        assert_eq!(prefix_of(1e6), Ok(SiPrefix::Kilo));
        assert_eq!(prefix_of(1e9), Ok(SiPrefix::Mega));
        assert_eq!(prefix_of(1e12), Ok(SiPrefix::Giga));
    }

    #[test]
    fn the_epsilon_moves_the_bottom_bands_edge_by_a_tenth_of_a_percent() {
        // Subtracting a fixed 1e-15 from an edge of 1e-12 is a real shift;
        // by the time the edges are large it is nothing at all. So the femto
        // band stops a thousandth short of pico and never reads above 999 f.
        assert_eq!(prefix_of(9.995e-13), Ok(SiPrefix::Pico));
        assert_eq!(prefix_of(9.985e-13), Ok(SiPrefix::Femto));
    }

    #[test]
    fn the_bands_tile_without_gaps_because_both_edges_move_together() {
        let scales = band_scales();
        for band in 0..scales.len() - 1 {
            // Spelled the way the search spells it, not the accurate way.
            #[allow(clippy::suboptimal_flops)]
            let upper = scales[band] * 1000.0 - 1e-15;
            let next_lower = scales[band + 1] - 1e-15;

            assert!((upper - next_lower).abs() < f64::EPSILON, "{band}");
        }
    }

    #[test]
    fn scaling_brings_a_value_into_the_readable_range() {
        assert!((scaled(4.7e-6) - 4.7).abs() < 1e-9);
        assert!((scaled(2.2e3) - 2.2).abs() < 1e-9);
    }

    #[test]
    fn the_top_band_reuses_the_band_below_its_prefix() {
        // The recovered defect: 2e12 is a thousand giga, not two giga.
        assert_eq!(prefix_of(2e12), Ok(SiPrefix::Giga));
        assert!((scaled(2e12) - 2.0).abs() < 1e-9);
        assert_eq!(SiPrefix::BANDS[8], SiPrefix::BANDS[9]);
    }

    #[test]
    fn the_sign_is_set_aside_for_the_search_and_put_back() {
        assert_eq!(prefix_of(-4.7e-6), Ok(SiPrefix::Micro));
        assert!((scaled(-4.7e-6) + 4.7).abs() < 1e-9);
    }

    #[test]
    fn zero_is_answered_without_searching_and_keeps_no_prefix() {
        let chosen = choose_prefix(0.0);

        assert_eq!(chosen.map(|(_, prefix)| prefix), Ok(SiPrefix::Unscaled));
        assert!(scaled(0.0).abs() < f64::EPSILON);
    }

    #[test]
    fn no_positive_value_is_ever_too_small_to_name() {
        // The epsilon pulls the bottom band's lower edge to exactly zero.
        for value in [1e-20, 1e-100, f64::MIN_POSITIVE] {
            assert_eq!(
                choose_prefix(value).map(|(_, prefix)| prefix),
                Ok(SiPrefix::Femto)
            );
        }
    }

    #[test]
    fn only_the_top_of_the_range_can_fail() {
        assert_eq!(choose_prefix(1e16), Err(ValueOutOfBands));
        assert_eq!(choose_prefix(-1e20), Err(ValueOutOfBands));
        // And only barely: the top edge is a hair above a thousand million
        // million, so that value itself is still nameable.
        assert_eq!(prefix_of(1e15), Ok(SiPrefix::Giga));
        assert_eq!(choose_prefix(f64::INFINITY), Err(ValueOutOfBands));
        assert_eq!(choose_prefix(f64::NAN), Err(ValueOutOfBands));
    }

    #[test]
    fn the_failure_is_reported_where_a_prefix_belongs() {
        assert_eq!(prefix_text(choose_prefix(1e16)), WRONG_INPUT_MESSAGE);
        assert_eq!(prefix_text(choose_prefix(4.7e-6)), "u");
    }

    #[test]
    fn the_bands_are_built_the_way_the_search_builds_them() {
        let scales = band_scales();

        assert_eq!(scales.len(), SiPrefix::BANDS.len());
        assert!((scales[0] - SMALLEST_BAND).abs() < f64::EPSILON);
        for window in scales.windows(2) {
            assert!((window[1] / window[0] - 1000.0).abs() < 1e-6);
        }
    }

    #[test]
    fn a_single_character_is_a_unit_already() {
        let vocabulary = UnitVocabulary::engineering();

        assert_eq!(base_unit("V", &vocabulary), "V");
        assert_eq!(base_unit("s", &vocabulary), "s");
        // Even one that would otherwise read as a prefix.
        assert_eq!(base_unit("m", &vocabulary), "m");
    }

    #[test]
    fn a_prefixed_unit_is_stripped_back_to_its_base() {
        let vocabulary = UnitVocabulary::engineering();

        assert_eq!(base_unit("mV", &vocabulary), "V");
        assert_eq!(base_unit("kOhm", &vocabulary), "Ohm");
        assert_eq!(base_unit("uF", &vocabulary), "F");
    }

    #[test]
    fn units_that_look_prefixed_are_recognised_whole() {
        let vocabulary = UnitVocabulary::engineering();

        assert_eq!(base_unit("Celsius", &vocabulary), "Celsius");
        assert_eq!(base_unit("deg", &vocabulary), "deg");
        assert_eq!(base_unit("dB", &vocabulary), "dB");
    }

    #[test]
    fn a_whole_unit_is_matched_from_the_front_rather_than_exactly() {
        let vocabulary = UnitVocabulary::engineering();

        assert_eq!(base_unit("degree", &vocabulary), "deg");
    }

    #[test]
    fn the_last_recognised_name_wins() {
        // Every name is tested and a later match overwrites an earlier one.
        let vocabulary = UnitVocabulary {
            prefix_symbols: &[],
            whole_units: &["ab", "abc"],
        };

        assert_eq!(base_unit("abcd", &vocabulary), "abc");

        let reversed = UnitVocabulary {
            prefix_symbols: &[],
            whole_units: &["abc", "ab"],
        };

        assert_eq!(base_unit("abcd", &reversed), "ab");
    }

    #[test]
    fn nothing_and_too_much_both_come_back_empty() {
        let vocabulary = UnitVocabulary::engineering();

        assert_eq!(base_unit("", &vocabulary), "");
        assert_eq!(base_unit("Ohm/Volt", &vocabulary), "");
    }

    #[test]
    fn an_unrecognised_unit_comes_back_empty_the_same_way() {
        let vocabulary = UnitVocabulary::engineering();

        assert_eq!(base_unit("Xyz", &vocabulary), "");
        assert_eq!(base_unit("Ohm", &vocabulary), "");
    }

    #[test]
    fn seven_characters_are_looked_at_and_eight_are_not() {
        let vocabulary = UnitVocabulary::engineering();

        assert_eq!(RECOVERED_WHOLE_UNIT.chars().count(), LONGEST_UNIT);
        assert_eq!(base_unit(RECOVERED_WHOLE_UNIT, &vocabulary), "Celsius");
        assert_eq!(base_unit("mCelsius", &vocabulary), "");
    }

    #[test]
    fn the_two_halves_are_inverses_over_every_prefix_the_chooser_emits() {
        let vocabulary = UnitVocabulary::engineering();
        for prefix in SiPrefix::BANDS {
            let unit = format!("{}V", prefix.symbol());

            assert_eq!(base_unit(&unit, &vocabulary), "V", "{unit}");
        }
    }

    #[test]
    fn the_recovered_stripper_knew_fewer_prefixes_than_this_one() {
        // Recorded because it is the one place the port knowingly differs.
        assert!(UnitVocabulary::engineering().prefix_symbols.len() > RECOVERED_PREFIX_COUNT);
    }
}

#[cfg(test)]
mod multiplier_tests {
    use super::*;

    #[test]
    fn each_prefix_multiplies_by_its_own_power_of_ten() {
        let expected = [
            (SiPrefix::Femto, 1e-15),
            (SiPrefix::Pico, 1e-12),
            (SiPrefix::Nano, 1e-9),
            (SiPrefix::Micro, 1e-6),
            (SiPrefix::Milli, 1e-3),
            (SiPrefix::Unscaled, 1.0),
            (SiPrefix::Kilo, 1e3),
            (SiPrefix::Mega, 1e6),
            (SiPrefix::Giga, 1e9),
        ];
        for (prefix, multiplier) in expected {
            assert!(
                (prefix.multiplier() - multiplier).abs() < f64::EPSILON * multiplier.abs(),
                "{prefix:?}"
            );
        }
    }

    #[test]
    fn the_two_recoveries_of_the_prefix_set_agree() {
        // The chooser's bands come from a search that starts at 1e-15 and
        // multiplies by a thousand; this table is eight separate doubles
        // compiled into a different function. Nothing forces them to match.
        let mut from_bands: Vec<SiPrefix> = SiPrefix::BANDS
            .into_iter()
            .filter(|prefix| *prefix != SiPrefix::Unscaled)
            .collect();
        from_bands.dedup();

        assert_eq!(from_bands, MULTIPLIER_PREFIXES.to_vec());
    }

    #[test]
    fn the_table_is_exact_where_the_bands_drift() {
        let scales = band_scales();

        // The chooser's unscaled band is not quite one.
        assert!((scales[5] - 1.0).abs() > 0.0);
        // The multiplier for the band below it is exactly a thousandth.
        assert!((SiPrefix::Milli.multiplier() - 1e-3).abs() < f64::EPSILON * 1e-3);
    }

    #[test]
    fn scaling_down_and_back_up_returns_very_nearly_the_value() {
        let (scaled, prefix) = choose_prefix(4.7e-6).expect("in range");
        let back = scaled * prefix.multiplier();

        assert!((back - 4.7e-6).abs() < 1e-20);
    }

    #[test]
    fn a_symbol_resolves_to_its_own_prefix() {
        for prefix in MULTIPLIER_PREFIXES {
            let symbol = prefix.symbol().chars().next().expect("a symbol");

            assert_eq!(SiPrefix::from_symbol(symbol), Some(prefix));
        }
    }

    #[test]
    fn milli_and_mega_are_told_apart_by_case_alone() {
        assert_eq!(SiPrefix::from_symbol('m'), Some(SiPrefix::Milli));
        assert_eq!(SiPrefix::from_symbol('M'), Some(SiPrefix::Mega));
    }

    #[test]
    fn the_unscaled_band_has_no_symbol_to_resolve() {
        assert!(!MULTIPLIER_PREFIXES.contains(&SiPrefix::Unscaled));
        assert_eq!(SiPrefix::from_symbol('x'), None);
    }

    #[test]
    fn a_prefixed_unit_multiplies_by_its_prefix() {
        assert!((multiplier_for_prefix("mV", &[]) - 1e-3).abs() < f64::EPSILON);
        assert!((multiplier_for_prefix("kOhm", &[]) - 1e3).abs() < 1e-9);
    }

    #[test]
    fn a_bare_unit_multiplies_by_one() {
        assert!((multiplier_for_prefix("V", &[]) - 1.0).abs() < f64::EPSILON);
    }

    #[test]
    fn a_unit_too_long_to_look_at_multiplies_by_one() {
        assert!((multiplier_for_prefix("microvolt", &[]) - 1.0).abs() < f64::EPSILON);
        assert!((multiplier_for_prefix("", &[]) - 1.0).abs() < f64::EPSILON);
    }

    #[test]
    fn an_unrecognised_first_character_multiplies_by_one() {
        // Where the recovered code returns whatever was on the stack.
        assert!((multiplier_for_prefix("Xy", &[]) - 1.0).abs() < f64::EPSILON);
    }

    #[test]
    fn a_stand_in_for_a_missing_value_is_answered_before_anything_else() {
        let markers = [WRONG_INPUT_MESSAGE];

        assert!((multiplier_for_prefix(WRONG_INPUT_MESSAGE, &markers) - 1.0).abs() < f64::EPSILON);
    }

    #[test]
    fn the_two_halves_of_a_prefixed_unit_come_apart_together() {
        let vocabulary = UnitVocabulary::engineering();

        assert_eq!(base_unit("mV", &vocabulary), "V");
        assert!((multiplier_for_prefix("mV", &[]) - 1e-3).abs() < f64::EPSILON);
    }
}

#[cfg(test)]
mod apply_tests {
    use super::*;

    fn close(left: f64, right: f64) -> bool {
        (left - right).abs() <= f64::EPSILON * right.abs().max(1.0)
    }

    #[test]
    fn a_prefixed_unit_scales_the_value_it_belongs_to() {
        assert!(close(apply_prefix(4.7, "mV", &[]), 4.7e-3));
        assert!(close(apply_prefix(2.2, "kOhm", &[]), 2.2e3));
        assert!(close(apply_prefix(1.0, "pF", &[]), 1e-12));
    }

    #[test]
    fn kilo_is_the_one_prefix_matched_without_regard_to_case() {
        assert!(close(apply_prefix(2.2, "KOhm", &[]), 2.2e3));
        // Its sibling compares exactly and so leaves this one alone.
        assert!(close(multiplier_for_prefix("KOhm", &[]), 1.0));
    }

    #[test]
    fn milli_and_mega_are_still_told_apart_by_case() {
        assert!(close(apply_prefix(1.0, "mV", &[]), 1e-3));
        assert!(close(apply_prefix(1.0, "MV", &[]), 1e6));
    }

    #[test]
    fn a_bare_unit_leaves_the_value_alone() {
        assert!(close(apply_prefix(4.7, "V", &[]), 4.7));
    }

    #[test]
    fn a_unit_too_long_to_look_at_leaves_it_alone() {
        assert!(close(apply_prefix(4.7, "microvolt", &[]), 4.7));
        assert!(close(apply_prefix(4.7, "", &[]), 4.7));
    }

    #[test]
    fn a_first_character_it_does_not_know_leaves_it_alone() {
        // Where the sibling returns whatever was on the stack, this is defined.
        assert!(close(apply_prefix(4.7, "Xy", &[]), 4.7));
    }

    #[test]
    fn a_stand_in_for_a_missing_value_leaves_it_alone() {
        let markers = [WRONG_INPUT_MESSAGE];

        assert!(close(apply_prefix(4.7, WRONG_INPUT_MESSAGE, &markers), 4.7));
    }

    #[test]
    fn scaling_agrees_with_the_multiplier_wherever_both_recognise_the_prefix() {
        for unit in ["fF", "pF", "nF", "uF", "mV", "kOhm", "MOhm", "GOhm"] {
            assert!(
                close(
                    apply_prefix(3.0, unit, &[]),
                    3.0 * multiplier_for_prefix(unit, &[])
                ),
                "{unit}"
            );
        }
    }

    #[test]
    fn a_negative_value_keeps_its_sign() {
        assert!(close(apply_prefix(-4.7, "mV", &[]), -4.7e-3));
    }
}
