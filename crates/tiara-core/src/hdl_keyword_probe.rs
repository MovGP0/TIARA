//! Trying one keyword against what is being read.
//!
//! A parser built this way asks one question at a time — is the next thing
//! this particular word? — and answers with the state it should move to. There
//! is one routine per question and one table of words per parser, and nothing
//! in either says what the words are for: the state numbers carry all of that,
//! and they are only meaningful to whatever is stepping through them.

/// One parser's way of asking.
///
/// Part of Ghidra functions `FUN_01092290` at `0x01092290` and `FUN_01096b30`
/// at `0x01096B30`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct KeywordProbe {
    /// Where the parser keeps the words it asks about.
    pub table: u32,
    /// The state to move to when the word was not there.
    pub unmatched: u8,
    /// The state to move to when it was.
    pub matched: u8,
}

impl KeywordProbe {
    /// Which state one answer leads to.
    ///
    /// Part of Ghidra functions `FUN_01092290` at `0x01092290` and
    /// `FUN_01096b30` at `0x01096B30`.
    ///
    /// Both outcomes are states, neither is a failure: a word that was not
    /// there moves the parser on just as surely as one that was, only
    /// elsewhere. Nothing here can refuse.
    #[must_use]
    pub const fn state(self, matched: bool) -> u8 {
        if matched {
            self.matched
        } else {
            self.unmatched
        }
    }

    /// How far apart the two states it can lead to are.
    ///
    /// One, in both recovered probes — a match moves on by exactly one more
    /// than a miss, whatever the pair happens to be.
    #[must_use]
    pub const fn step(self) -> u8 {
        self.matched - self.unmatched
    }
}

/// Implements Ghidra function `FUN_01092290` at `0x01092290`.
///
/// The probe over the table beginning with `always`.
///
/// The one word that survived being typed, and it names the language: a
/// parser whose first keyword is `always` is reading Verilog. Its two states
/// are the lowest pair, so this is asked early.
pub const ALWAYS_TABLE_PROBE: KeywordProbe = KeywordProbe {
    table: 0x01F0_CD30,
    unmatched: 1,
    matched: 2,
};

/// Implements Ghidra function `FUN_01096b30` at `0x01096B30`.
///
/// The probe over a second table, asked one state later.
///
/// The same shape over a different table, and its states are the first pair's
/// each raised by one — so whatever the first probe answers, this one answers
/// from a step further along. None of the words in this table survived.
pub const SECOND_TABLE_PROBE: KeywordProbe = KeywordProbe {
    table: 0x01F0_DAB0,
    unmatched: 2,
    matched: 3,
};

/// Implements Ghidra function `FUN_01118b30` at `0x01118B30`.
///
/// A third table, asked with the same two states as the first.
///
/// Sharing a state pair with [`ALWAYS_TABLE_PROBE`] means the two are
/// alternatives at the same point of the parse rather than steps of one chain
/// — two different vocabularies that could each be what comes next.
pub const THIRD_TABLE_PROBE: KeywordProbe = KeywordProbe {
    table: 0x01F2_2E60,
    unmatched: 1,
    matched: 2,
};

/// Implements Ghidra function `FUN_014b07e0` at `0x014B07E0`.
///
/// A fourth table, again with the first probe's two states.
///
/// Three of the four share that pair, so most of these probes are
/// alternatives offered at the same point rather than a sequence — one parse
/// position with several vocabularies that could satisfy it.
pub const FOURTH_TABLE_PROBE: KeywordProbe = KeywordProbe {
    table: 0x01F5_20C8,
    unmatched: 1,
    matched: 2,
};

/// Every recovered probe.
pub const KEYWORD_PROBES: [KeywordProbe; 4] = [
    ALWAYS_TABLE_PROBE,
    SECOND_TABLE_PROBE,
    THIRD_TABLE_PROBE,
    FOURTH_TABLE_PROBE,
];

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn a_match_and_a_miss_both_lead_somewhere() {
        for probe in KEYWORD_PROBES {
            assert_ne!(probe.state(true), probe.state(false));
            assert!(probe.state(true) > 0);
            assert!(probe.state(false) > 0);
        }
    }

    #[test]
    fn a_match_moves_on_by_exactly_one_more_than_a_miss() {
        for probe in KEYWORD_PROBES {
            assert_eq!(probe.step(), 1, "{probe:?}");
        }
    }

    #[test]
    fn the_second_probe_answers_from_a_step_further_along() {
        assert_eq!(
            SECOND_TABLE_PROBE.unmatched,
            ALWAYS_TABLE_PROBE.unmatched + 1
        );
        assert_eq!(SECOND_TABLE_PROBE.matched, ALWAYS_TABLE_PROBE.matched + 1);
    }

    #[test]
    fn no_two_probes_read_the_same_table() {
        let mut tables: Vec<u32> = KEYWORD_PROBES.iter().map(|probe| probe.table).collect();
        let before = tables.len();
        tables.sort_unstable();
        tables.dedup();

        assert_eq!(tables.len(), before);
    }

    #[test]
    fn most_probes_share_a_state_pair_and_so_are_alternatives_not_a_chain() {
        let sharing = KEYWORD_PROBES
            .iter()
            .filter(|probe| {
                probe.unmatched == ALWAYS_TABLE_PROBE.unmatched
                    && probe.matched == ALWAYS_TABLE_PROBE.matched
            })
            .count();

        assert_eq!(sharing, 3);
        assert_ne!(THIRD_TABLE_PROBE.table, ALWAYS_TABLE_PROBE.table);
    }

    #[test]
    fn the_first_probes_states_are_the_lowest_pair() {
        assert_eq!(ALWAYS_TABLE_PROBE.unmatched, 1);
        assert_eq!(ALWAYS_TABLE_PROBE.matched, 2);
    }

    #[test]
    fn one_probes_match_is_the_others_miss() {
        // Which is what makes them a chain rather than two choices.
        assert_eq!(ALWAYS_TABLE_PROBE.matched, SECOND_TABLE_PROBE.unmatched);
    }
}
