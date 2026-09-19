//! A record with a name, a few text fields and a couple of lists.
//!
//! Two closely related shapes appear in the recovered code and this module
//! carries both. What is worth keeping about them is not what they hold —
//! the symbols name none of the fields — but *how* they are filled: each text
//! field on its own, and each list wholesale in one call.

/// One of the record's text fields.
///
/// Part of Ghidra functions `FUN_012dcb00` at `0x012DCB00`, `FUN_012dcb80` at
/// `0x012DCB80`, `FUN_012dcc00` at `0x012DCC00`, `FUN_012dcc80` at
/// `0x012DCC80` and `FUN_012dcd00` at `0x012DCD00`.
///
/// Five fields, five setters, each a separate function writing one offset —
/// so a caller changes exactly what it means to and never has to restate the
/// others. Naming them by position is all the symbols support.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TextField {
    /// The field at the lowest offset.
    First,
    /// The second.
    Second,
    /// The third.
    Third,
    /// The fourth.
    Fourth,
    /// The fifth.
    Fifth,
}

impl TextField {
    /// Every field, in the order the setters cover them.
    pub const ALL: [Self; 5] = [
        Self::First,
        Self::Second,
        Self::Third,
        Self::Fourth,
        Self::Fifth,
    ];

    /// Which slot of the record it is.
    #[must_use]
    pub const fn slot(self) -> usize {
        match self {
            Self::First => 0,
            Self::Second => 1,
            Self::Third => 2,
            Self::Fourth => 3,
            Self::Fifth => 4,
        }
    }
}

/// Which of the record's two lists is meant.
///
/// Part of Ghidra functions `FUN_012dcdb0` at `0x012DCDB0` and `FUN_012dcf40`
/// at `0x012DCF40`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum RecordList {
    /// The first list.
    First,
    /// The second.
    Second,
}

/// A record with a name, five text fields and two lists.
///
/// Built by Ghidra function `FUN_012dc660` at `0x012DC660`, which takes the
/// name and clears everything else — so a record always starts empty but
/// never nameless.
///
/// It also owns a list of [`TripleRecord`] entries, which its destructor
/// `FUN_012dc7e0` at `0x012DC7E0` frees one at a time before freeing the list
/// itself — so the entries belong to the record rather than being shared with
/// whatever built them.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct NamedRecord {
    name: String,
    text: [String; 5],
    first_list: Vec<String>,
    second_list: Vec<String>,
    entries: Vec<TripleRecord>,
}

impl NamedRecord {
    /// Implements Ghidra function `FUN_012dc660` at `0x012DC660`.
    ///
    /// Starts a record under one name.
    ///
    /// The name is the only thing a new record has; every text field and both
    /// lists begin empty, so nothing is carried over from whatever the memory
    /// held before.
    #[must_use]
    pub fn new(name: impl Into<String>) -> Self {
        Self {
            name: name.into(),
            ..Self::default()
        }
    }

    /// What the record is called.
    #[must_use]
    pub fn name(&self) -> &str {
        &self.name
    }

    /// One text field's contents.
    #[must_use]
    pub fn text(&self, field: TextField) -> &str {
        &self.text[field.slot()]
    }

    /// Implements Ghidra functions `FUN_012dcb00` at `0x012DCB00` through
    /// `FUN_012dcd00` at `0x012DCD00`.
    ///
    /// Sets one text field, leaving every other alone.
    pub fn set_text(&mut self, field: TextField, value: impl Into<String>) {
        self.text[field.slot()] = value.into();
    }

    /// One list's contents.
    #[must_use]
    pub fn list(&self, which: RecordList) -> &[String] {
        match which {
            RecordList::First => &self.first_list,
            RecordList::Second => &self.second_list,
        }
    }

    /// Implements Ghidra functions `FUN_012dcdb0` at `0x012DCDB0` and
    /// `FUN_012dcf40` at `0x012DCF40`.
    ///
    /// Replaces one list outright.
    ///
    /// The recovered setters take their values as a variadic argument list,
    /// size the array to match and then fill it — so a list is always
    /// replaced whole rather than appended to. A caller that wants to add one
    /// entry has to pass every entry, which is what keeps the two lists from
    /// drifting out of step with whatever built them.
    pub fn set_list(&mut self, which: RecordList, values: Vec<String>) {
        match which {
            RecordList::First => self.first_list = values,
            RecordList::Second => self.second_list = values,
        }
    }
}

/// A record of three texts, three lists and three flags.
///
/// Built by Ghidra function `FUN_012dc4a0` at `0x012DC4A0` and released by
/// `FUN_012dc600` at `0x012DC600`.
///
/// One entry of a [`NamedRecord`]. Its three texts are named nowhere in the
/// class itself — the accessor at `0x012DD160` is the only place they are
/// named at all, and it calls them the parameter, its symbol and its unit.
/// See [`ParameterField`].
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct TripleRecord {
    /// The three text fields.
    pub text: [String; 3],
    /// The three lists.
    pub lists: [Vec<String>; 3],
    /// The three flags.
    pub flags: [bool; 3],
}

impl TripleRecord {
    /// How many of each thing the record holds.
    pub const ARITY: usize = 3;

    /// Implements Ghidra function `FUN_012dc4a0` at `0x012DC4A0`.
    ///
    /// Starts an empty record.
    ///
    /// Every list is allocated at length one and its single entry cleared,
    /// rather than left unallocated — so a caller can write to any of them
    /// without checking first.
    #[must_use]
    pub fn new() -> Self {
        Self {
            text: Default::default(),
            lists: [
                vec![String::new()],
                vec![String::new()],
                vec![String::new()],
            ],
            flags: [false; 3],
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn the_five_text_fields_have_five_distinct_slots() {
        let mut slots: Vec<_> = TextField::ALL.iter().map(|field| field.slot()).collect();
        let total = slots.len();
        slots.sort_unstable();
        slots.dedup();

        assert_eq!(slots.len(), total);
        assert_eq!(slots, [0, 1, 2, 3, 4]);
    }

    #[test]
    fn a_new_record_has_only_its_name() {
        let record = NamedRecord::new("case1");

        assert_eq!(record.name(), "case1");
        for field in TextField::ALL {
            assert!(record.text(field).is_empty(), "{field:?}");
        }
        assert!(record.list(RecordList::First).is_empty());
        assert!(record.list(RecordList::Second).is_empty());
    }

    #[test]
    fn setting_one_field_leaves_every_other_alone() {
        let mut record = NamedRecord::new("case1");
        for field in TextField::ALL {
            record.set_text(field, format!("{field:?}"));
        }

        record.set_text(TextField::Third, "changed");

        assert_eq!(record.text(TextField::Third), "changed");
        assert_eq!(record.text(TextField::First), "First");
        assert_eq!(record.text(TextField::Fifth), "Fifth");
    }

    #[test]
    fn a_list_is_replaced_whole_rather_than_appended_to() {
        let mut record = NamedRecord::new("case1");
        record.set_list(RecordList::First, vec!["a".to_owned(), "b".to_owned()]);
        record.set_list(RecordList::First, vec!["c".to_owned()]);

        assert_eq!(record.list(RecordList::First), ["c"]);
    }

    #[test]
    fn the_two_lists_are_independent() {
        let mut record = NamedRecord::new("case1");
        record.set_list(RecordList::First, vec!["a".to_owned()]);

        assert_eq!(record.list(RecordList::First), ["a"]);
        assert!(record.list(RecordList::Second).is_empty());
    }

    #[test]
    fn an_empty_list_can_be_set_deliberately() {
        let mut record = NamedRecord::new("case1");
        record.set_list(RecordList::Second, vec!["x".to_owned()]);
        record.set_list(RecordList::Second, Vec::new());

        assert!(record.list(RecordList::Second).is_empty());
    }

    #[test]
    fn the_name_survives_every_other_change() {
        let mut record = NamedRecord::new("case1");
        record.set_text(TextField::First, "a");
        record.set_list(RecordList::First, vec!["b".to_owned()]);

        assert_eq!(record.name(), "case1");
    }

    #[test]
    fn the_triple_record_holds_three_of_everything() {
        let record = TripleRecord::new();

        assert_eq!(record.text.len(), TripleRecord::ARITY);
        assert_eq!(record.lists.len(), TripleRecord::ARITY);
        assert_eq!(record.flags.len(), TripleRecord::ARITY);
    }

    #[test]
    fn its_lists_start_allocated_so_a_caller_need_not_check_first() {
        let record = TripleRecord::new();

        for list in &record.lists {
            assert_eq!(list.len(), 1);
            assert!(list[0].is_empty());
        }
    }

    #[test]
    fn its_flags_all_start_clear() {
        assert!(TripleRecord::new().flags.iter().all(|flag| !flag));
    }
}

impl NamedRecord {
    /// The entries this record owns.
    #[must_use]
    pub fn entries(&self) -> &[TripleRecord] {
        &self.entries
    }

    /// Implements Ghidra function `FUN_012dc8a0` at `0x012DC8A0`.
    ///
    /// Adds one entry, built from everything it needs in a single call.
    ///
    /// Thirteen arguments rather than a built object: two texts, three lists
    /// each with its own length, three flags and a third text. Taking them
    /// together is what makes an entry impossible to add half-filled — there
    /// is no moment at which one exists with some of its lists set.
    ///
    /// The recovered code trims the owning list's capacity to its current
    /// count immediately before appending, which forces a reallocation on
    /// every single add rather than letting the capacity amortise. This port
    /// does not reproduce that — Rust's own growth does the amortising — but
    /// it is recorded because it is a real cost in the original and would
    /// look like an oversight rather than a choice if it were simply dropped.
    ///
    /// Returns the entry's position.
    pub fn add_entry(&mut self, entry: TripleRecord) -> usize {
        self.entries.push(entry);
        self.entries.len() - 1
    }
}

#[cfg(test)]
mod entry_tests {
    use super::*;

    fn entry(mark: &str) -> TripleRecord {
        let mut record = TripleRecord::new();
        record.text[0] = mark.to_owned();
        record
    }

    #[test]
    fn a_new_record_owns_no_entries() {
        assert!(NamedRecord::new("case1").entries().is_empty());
    }

    #[test]
    fn entries_are_kept_in_the_order_they_were_added() {
        let mut record = NamedRecord::new("case1");
        record.add_entry(entry("a"));
        record.add_entry(entry("b"));

        let marks: Vec<_> = record
            .entries()
            .iter()
            .map(|held| held.text[0].as_str())
            .collect();
        assert_eq!(marks, ["a", "b"]);
    }

    #[test]
    fn each_addition_reports_where_it_landed() {
        let mut record = NamedRecord::new("case1");

        assert_eq!(record.add_entry(entry("a")), 0);
        assert_eq!(record.add_entry(entry("b")), 1);
    }

    #[test]
    fn an_entry_arrives_whole_rather_than_being_filled_in_afterwards() {
        let mut built = TripleRecord::new();
        built.text = ["a".to_owned(), "b".to_owned(), "c".to_owned()];
        built.lists[1] = vec!["x".to_owned(), "y".to_owned()];
        built.flags = [true, false, true];

        let mut record = NamedRecord::new("case1");
        record.add_entry(built.clone());

        assert_eq!(record.entries()[0], built);
    }

    #[test]
    fn entries_and_the_records_own_lists_are_separate() {
        let mut record = NamedRecord::new("case1");
        record.set_list(RecordList::First, vec!["a".to_owned()]);
        record.add_entry(entry("b"));

        assert_eq!(record.list(RecordList::First), ["a"]);
        assert_eq!(record.entries().len(), 1);
    }
}

/// Which of an entry's three texts a lookup means.
///
/// Part of Ghidra function `FUN_012dd160` at `0x012DD160`.
///
/// These are the names the recovered accessor matches against, and they are
/// what identify a [`TripleRecord`]'s three texts: an entry describes one
/// parameter, by name, by symbol and by unit. Nothing else in the class says
/// so — the accessor is the only place the fields are named at all.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ParameterField {
    /// The parameter itself.
    Parameter,
    /// The symbol it is written with.
    Symbol,
    /// The unit it is measured in.
    Unit,
}

impl ParameterField {
    /// Every field, in the order the accessor tests them.
    pub const ALL: [Self; 3] = [Self::Parameter, Self::Symbol, Self::Unit];

    /// The name the accessor matches against.
    #[must_use]
    pub const fn lookup_name(self) -> &'static str {
        match self {
            Self::Parameter => "PARAMETER_PARAM",
            Self::Symbol => "PARAMETER_SYMBOL",
            Self::Unit => "PARAMETER_UNIT",
        }
    }

    /// Which of the entry's three texts it is.
    #[must_use]
    pub const fn slot(self) -> usize {
        match self {
            Self::Parameter => 0,
            Self::Symbol => 1,
            Self::Unit => 2,
        }
    }

    /// Which field one name asks for, if any.
    ///
    /// Part of Ghidra function `FUN_012dd160` at `0x012DD160`.
    ///
    /// The comparison is exact — these names are written by the program
    /// rather than by a person, so there is nothing to be lenient about.
    #[must_use]
    pub fn from_lookup_name(name: &str) -> Option<Self> {
        Self::ALL
            .into_iter()
            .find(|field| field.lookup_name() == name)
    }
}

impl TripleRecord {
    /// One of this entry's three texts.
    #[must_use]
    pub fn field(&self, field: ParameterField) -> &str {
        &self.text[field.slot()]
    }
}

impl NamedRecord {
    /// Implements Ghidra function `FUN_012dd160` at `0x012DD160`.
    ///
    /// Looks up one field of one entry, by the entry's position and the
    /// field's name.
    ///
    /// Both ways of asking can fail and both fail the same way: an index past
    /// the end and a name the accessor does not know each yield nothing
    /// rather than an error. The caller's output is cleared before either is
    /// checked, so a failed lookup leaves an empty answer rather than
    /// whatever the caller was holding — which is what makes it safe to call
    /// without checking first.
    #[must_use]
    pub fn parameter_field(&self, index: usize, name: &str) -> String {
        let Some(entry) = self.entries.get(index) else {
            return String::new();
        };
        let Some(field) = ParameterField::from_lookup_name(name) else {
            return String::new();
        };
        entry.field(field).to_owned()
    }
}

#[cfg(test)]
mod parameter_field_tests {
    use super::*;

    fn parameter(name: &str, symbol: &str, unit: &str) -> TripleRecord {
        let mut record = TripleRecord::new();
        record.text = [name.to_owned(), symbol.to_owned(), unit.to_owned()];
        record
    }

    #[test]
    fn the_three_lookup_names_are_the_recovered_ones() {
        assert_eq!(ParameterField::Parameter.lookup_name(), "PARAMETER_PARAM");
        assert_eq!(ParameterField::Symbol.lookup_name(), "PARAMETER_SYMBOL");
        assert_eq!(ParameterField::Unit.lookup_name(), "PARAMETER_UNIT");
    }

    #[test]
    fn every_name_resolves_to_its_own_field() {
        for field in ParameterField::ALL {
            assert_eq!(
                ParameterField::from_lookup_name(field.lookup_name()),
                Some(field)
            );
        }
    }

    #[test]
    fn a_name_the_accessor_does_not_know_resolves_to_nothing() {
        assert_eq!(ParameterField::from_lookup_name("PARAMETER_OTHER"), None);
        assert_eq!(ParameterField::from_lookup_name(""), None);
    }

    #[test]
    fn the_names_are_matched_exactly_because_the_program_writes_them() {
        assert_eq!(ParameterField::from_lookup_name("parameter_param"), None);
    }

    #[test]
    fn each_field_reads_its_own_text() {
        let entry = parameter("Gain", "A", "dB");

        assert_eq!(entry.field(ParameterField::Parameter), "Gain");
        assert_eq!(entry.field(ParameterField::Symbol), "A");
        assert_eq!(entry.field(ParameterField::Unit), "dB");
    }

    #[test]
    fn a_lookup_finds_the_entry_at_its_position() {
        let mut record = NamedRecord::new("part");
        record.add_entry(parameter("Gain", "A", "dB"));
        record.add_entry(parameter("Offset", "V", "mV"));

        assert_eq!(record.parameter_field(1, "PARAMETER_PARAM"), "Offset");
        assert_eq!(record.parameter_field(1, "PARAMETER_UNIT"), "mV");
    }

    #[test]
    fn an_index_past_the_end_yields_nothing_rather_than_an_error() {
        let record = NamedRecord::new("part");

        assert_eq!(record.parameter_field(0, "PARAMETER_PARAM"), "");
        assert_eq!(record.parameter_field(99, "PARAMETER_PARAM"), "");
    }

    #[test]
    fn an_unknown_name_yields_nothing_the_same_way() {
        let mut record = NamedRecord::new("part");
        record.add_entry(parameter("Gain", "A", "dB"));

        assert_eq!(record.parameter_field(0, "PARAMETER_OTHER"), "");
    }

    #[test]
    fn both_ways_of_failing_are_indistinguishable_to_the_caller() {
        let record = NamedRecord::new("part");

        assert_eq!(
            record.parameter_field(99, "PARAMETER_PARAM"),
            record.parameter_field(0, "PARAMETER_OTHER")
        );
    }
}
