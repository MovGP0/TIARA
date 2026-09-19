//! Reading a comma-separated file of measurements into the application.
//!
//! The importer is a long-lived object: the application makes one at startup
//! and keeps it for the whole session, so every import has to put it back the
//! way it found it. That is why loading a file clears and rebuilds both of the
//! importer's halves before reading a single line, rather than appending to
//! whatever the last import left behind.

/// How many text slots the importer holds.
///
/// Part of Ghidra function `FUN_012dddd0` at `0x012DDDD0`.
pub const TEXT_COUNT: usize = 5;

/// How many of them the constructor names.
///
/// Part of Ghidra function `FUN_012dddd0` at `0x012DDDD0`.
///
/// The constructor initialises the first two and leaves the rest to the
/// parser, which is the only division the recovered code draws between them.
pub const CONSTRUCTED_TEXTS: usize = 2;

/// An import in progress, and everything one import owns.
///
/// Part of Ghidra function `FUN_012dddd0` at `0x012DDDD0`.
///
/// Both halves are absent rather than empty until a file is loaded, which is
/// a distinction the recovered code makes and acts on: clearing skips a list
/// that was never built, and one that was built but is empty is cleared the
/// same as a full one.
#[derive(Debug)]
pub struct CsvImport<Row> {
    lines: Option<Vec<String>>,
    rows: Option<Vec<Row>>,
    texts: [String; TEXT_COUNT],
}

impl<Row> Default for CsvImport<Row> {
    fn default() -> Self {
        Self::new()
    }
}

impl<Row> CsvImport<Row> {
    /// Implements Ghidra function `FUN_012dddd0` at `0x012DDDD0`.
    ///
    /// Makes an importer that has not yet read anything.
    ///
    /// Neither half exists yet — the first load builds them — and the text
    /// slots start empty.
    #[must_use]
    pub const fn new() -> Self {
        Self {
            lines: None,
            rows: None,
            texts: [const { String::new() }; TEXT_COUNT],
        }
    }

    /// Implements Ghidra function `FUN_012ddf50` at `0x012DDF50`.
    ///
    /// Builds both halves fresh, discarding whatever was there.
    ///
    /// Always a pair: a line list with no rows to go with it would leave the
    /// parser reading into nothing, so the two are made in one step and are
    /// never separately present.
    pub fn prepare(&mut self) {
        self.lines = Some(Vec::new());
        self.rows = Some(Vec::new());
    }

    /// Implements Ghidra function `FUN_012ddec0` at `0x012DDEC0`.
    ///
    /// Throws away both halves and everything in them.
    ///
    /// The recovered code walks the row list destroying each row by hand
    /// before releasing the list itself, because the list holds pointers and
    /// owns what they point at; dropping the vector does exactly that here.
    /// The two halves are also released differently — the line list is simply
    /// forgotten while the row list is emptied first — which is the shape of
    /// an owner that borrowed one and built the other.
    ///
    /// The destructor, Ghidra function `FUN_012dde80` at `0x012DDE80`, is
    /// this and nothing else: it releases the object after calling here, and
    /// releases nothing of its own. Dropping the value does the second half.
    pub fn clear(&mut self) {
        self.lines = None;
        self.rows = None;
    }

    /// The lines read from the file, if one has been read.
    #[must_use]
    pub fn lines(&self) -> Option<&[String]> {
        self.lines.as_deref()
    }

    /// The rows recovered from those lines, if a file has been read.
    #[must_use]
    pub fn rows(&self) -> Option<&[Row]> {
        self.rows.as_deref()
    }

    /// One of the importer's text slots, or empty for one out of range.
    #[must_use]
    pub fn text(&self, slot: usize) -> &str {
        self.texts.get(slot).map_or("", String::as_str)
    }

    /// Puts a value in one text slot, ignoring one out of range.
    pub fn set_text(&mut self, slot: usize, value: String) {
        if let Some(text) = self.texts.get_mut(slot) {
            *text = value;
        }
    }

    /// Empties the slots the parser owns, leaving the constructed ones alone.
    ///
    /// Part of Ghidra function `FUN_012de0f0` at `0x012DE0F0`.
    pub fn clear_parsed_texts(&mut self) {
        for text in &mut self.texts[CONSTRUCTED_TEXTS..] {
            text.clear();
        }
    }
}

/// What an importer needs of the world around it.
///
/// Part of Ghidra function `FUN_012ddf90` at `0x012DDF90`.
pub trait CsvImportHost {
    /// What one parsed line becomes.
    type Row;

    /// Whether a file is there to be read.
    fn file_exists(&self, path: &str) -> bool;

    /// Every line of one file.
    fn read_lines(&mut self, path: &str) -> Vec<String>;

    /// Recovers the rows from the lines just read.
    ///
    /// The parser itself is Ghidra function `FUN_012de0f0` at `0x012DE0F0`
    /// and is not yet ported; this is where it goes.
    fn parse(&mut self, lines: &[String]) -> Vec<Self::Row>;
}

/// Implements Ghidra function `FUN_012ddf90` at `0x012DDF90`.
///
/// Reads one file into the importer, replacing anything it already held.
///
/// A file that is not there is not an error and not reported as one — the
/// importer is left exactly as it was, still holding the previous import.
/// That is the same answer as a file that turned out to be empty, so a caller
/// that wants to know which happened has to ask about the file itself.
///
/// Returns whether the file was read.
pub fn load_file<Host: CsvImportHost>(
    import: &mut CsvImport<Host::Row>,
    host: &mut Host,
    path: &str,
) -> bool {
    if path.is_empty() || !host.file_exists(path) {
        return false;
    }

    import.clear();
    import.prepare();
    let lines = host.read_lines(path);
    let rows = host.parse(&lines);
    import.lines = Some(lines);
    import.rows = Some(rows);
    true
}

/// The filter the import dialog offers.
///
/// Part of Ghidra function `FUN_013020a0` at `0x013020A0`.
pub const CSV_FILTER: &str = "Comma-separated values.csv|*.csv";

/// The dialog options the import sets.
///
/// Part of Ghidra function `FUN_013020a0` at `0x013020A0`.
///
/// `ofFileMustExist` and nothing else. It is assigned rather than added to,
/// so whatever the dialog was carrying — including anything set when the form
/// was designed — is discarded each time the import is run.
pub const CSV_DIALOG_OPTIONS: u32 = 0x200;

/// Which of the filter's entries starts selected.
///
/// Part of Ghidra function `FUN_013020a0` at `0x013020A0`.
pub const CSV_FILTER_INDEX: u32 = 1;

/// How the import dialog is set up before it is shown.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct OpenDialogSetup {
    /// The option set, assigned whole.
    pub options: u32,
    /// The file kinds offered.
    pub filter: String,
    /// Which of them is selected to begin with.
    pub filter_index: u32,
}

/// Implements Ghidra function `FUN_013020a0` at `0x013020A0`.
///
/// How the dialog is set up for a comma-separated import.
#[must_use]
pub fn csv_dialog_setup() -> OpenDialogSetup {
    OpenDialogSetup {
        options: CSV_DIALOG_OPTIONS,
        filter: CSV_FILTER.to_owned(),
        filter_index: CSV_FILTER_INDEX,
    }
}

/// What the import command needs of the application around it.
///
/// Part of Ghidra function `FUN_013020a0` at `0x013020A0`.
pub trait CsvImportCommandHost {
    /// Shows the set-up dialog and answers what was chosen, empty for
    /// nothing.
    fn ask_for_file(&mut self, setup: &OpenDialogSetup) -> String;

    /// Whether a file is there to be read.
    fn file_exists(&self, path: &str) -> bool;

    /// Reads that file into the importer.
    fn load(&mut self, path: &str);
}

/// Implements Ghidra function `FUN_013020a0` at `0x013020A0`.
///
/// Imports a comma-separated file, asking for one if none was named.
///
/// A caller that already knows the file never sees the dialog, and the dialog
/// is set up only on the way to showing it — so the settings are applied at
/// the moment they are needed rather than kept correct in between.
///
/// The chosen path is answered whether or not it was read, so a caller cannot
/// tell an import that happened from one that did not; only the file's own
/// existence distinguishes them.
pub fn import_csv_file<Host: CsvImportCommandHost>(host: &mut Host, path: &str) -> String {
    let chosen = if path.is_empty() {
        host.ask_for_file(&csv_dialog_setup())
    } else {
        path.to_owned()
    };

    if host.file_exists(&chosen) {
        host.load(&chosen);
    }
    chosen
}

/// Implements Ghidra function `FUN_012e19b0` at `0x012E19B0`.
///
/// Whether a line is one character repeated, and so a rule rather than data.
///
/// Files written for people to read have lines of dashes or equals signs
/// separating their sections, and those have to be stepped over rather than
/// parsed. Testing every character against the first is enough to find them
/// without knowing which character was used.
///
/// The recovered code never assigns its answer for an empty line — the flag
/// it returns is only written inside the loop, and an empty line does not
/// enter it — so the original returns whatever happened to be on the stack.
/// This answers `false`, on the grounds that nothing was matched, and records
/// the difference rather than passing it on.
///
/// The recovered function is a method that never touches the object it is
/// called on.
#[must_use]
pub fn is_rule_line(line: &str) -> bool {
    let mut characters = line.chars();
    let Some(first) = characters.next() else {
        return false;
    };
    characters.all(|character| character == first)
}

/// Implements Ghidra function `FUN_012e1a40` at `0x012E1A40`.
///
/// How many separators one line carries.
///
/// The recovered code finds the first separator, throws away everything up to
/// and including it, and starts again on what is left, so what it counts is
/// occurrences and not fields. It stops as soon as there is nothing left to
/// search, which makes a trailing separator count like any other.
///
/// The recovered function is a method that never touches the object it is
/// called on.
#[must_use]
pub fn count_separators(line: &str, separator: char) -> usize {
    line.matches(separator).count()
}

/// What a count is being asked for.
///
/// Part of Ghidra function `FUN_012e1b30` at `0x012E1B30`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ColumnCount {
    /// Recovered mode 0: the fields between the separators, one more than
    /// there are separators.
    Fields,
    /// Recovered mode 1: the separators themselves.
    Separators,
}

/// Implements Ghidra function `FUN_012e1b30` at `0x012E1B30`.
///
/// Counts either the fields of a line or the separators between them.
///
/// Both answers come from the same count and differ by exactly one, which is
/// why one function serves both: a caller laying out columns wants the fields
/// and a caller checking a line against the header wants the separators, and
/// neither should have to remember which way the adjustment goes.
///
/// The recovered code has no answer for a mode that is neither, and returns an
/// uninitialised value rather than failing. Naming the two modes makes that
/// case unreachable.
#[must_use]
pub fn count_columns(line: &str, separator: char, wanted: ColumnCount) -> usize {
    let separators = count_separators(line, separator);
    match wanted {
        ColumnCount::Fields => separators + 1,
        ColumnCount::Separators => separators,
    }
}

/// Implements Ghidra function `FUN_012e24f0` at `0x012E24F0`.
///
/// Empties every string in a run of them.
///
/// The recovered code is given the last index rather than a count, and guards
/// against a negative one — which is exactly what an empty array yields when
/// its caller passes `length - 1`. So the guard is not defensive: it is the
/// empty case, spelled the only way it can be when the length is read from
/// the array itself.
pub fn clear_texts(texts: &mut [String]) {
    for text in texts {
        text.clear();
    }
}

/// What one call to [`take_field`] produced.
///
/// Part of Ghidra function `FUN_012e2230` at `0x012E2230`.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TakenField {
    /// The field, trimmed at both ends.
    pub text: String,
    /// What is left of the line, when the field was consumed.
    pub rest: String,
    /// Whether anything was found to take.
    pub found: bool,
}

/// Implements Ghidra function `FUN_012e2230` at `0x012E2230`.
///
/// Takes the text before the next separator, optionally cutting it away.
///
/// The field is trimmed at both ends before it is answered, so a file laid out
/// with spaces around its separators reads the same as one without.
///
/// Two quite different situations come back the same way, both as an empty
/// field with nothing consumed: a separator that is not there at all, and one
/// at the very start with an empty field in front of it. The consequence is
/// that this cannot be looped on by itself — a caller that keeps taking
/// fields until it gets an empty one stops early on a genuinely empty field,
/// and one that keeps going until the line is empty never finishes, because
/// the last field of a line with no trailing separator is never consumed.
/// Whatever drives it has to count the fields it expects rather than wait to
/// run out.
#[must_use]
pub fn take_field(line: &str, separator: &str, consume: bool) -> TakenField {
    let Some(position) = line.find(separator).filter(|found| *found > 0) else {
        return TakenField {
            text: String::new(),
            rest: line.to_owned(),
            found: false,
        };
    };

    let rest = if consume {
        line[position + separator.len()..].to_owned()
    } else {
        line.to_owned()
    };
    TakenField {
        text: line[..position].trim().to_owned(),
        rest,
        found: true,
    }
}

/// A row that answers to a name.
///
/// Part of Ghidra function `FUN_012e2590` at `0x012E2590`.
pub trait NamedRow {
    /// The name this row is found by.
    fn row_name(&self) -> &str;
}

/// Implements Ghidra function `FUN_012e2590` at `0x012E2590`.
///
/// Finds the row with one name, or nothing.
///
/// The search is exact and case-sensitive, and it stops at the first match —
/// so a file carrying the same name twice is read as though only the first
/// one were there.
///
/// The recovered code separates a row list that was never built from one that
/// is merely empty, and answers correctly only for the first: an empty list
/// leaves its result unassigned and returns whatever was on the stack. Both
/// are nothing here.
#[must_use]
pub fn find_row<'rows, Row: NamedRow>(rows: &'rows [Row], name: &str) -> Option<&'rows Row> {
    rows.iter().find(|row| row.row_name() == name)
}

/// Implements Ghidra function `FUN_012e2780` at `0x012E2780`.
///
/// Whether a field holds one of the texts that stand in for a missing value.
///
/// One of the two is the sentence the magnitude-prefix chooser returns when a
/// value falls outside every band — see [`crate::si_prefix::WRONG_INPUT_MESSAGE`].
/// A file written by this application can therefore carry that sentence where
/// a number belongs, and reading one back has to recognise it rather than try
/// to parse it. The second text is a constant Ghidra did not type and did not
/// survive, so it is supplied by the caller.
#[must_use]
pub fn is_unusable_value(text: &str, markers: &[&str]) -> bool {
    markers.contains(&text)
}

/// The one stand-in text that survived as a literal.
///
/// Part of Ghidra function `FUN_012e2780` at `0x012E2780`.
#[must_use]
pub const fn recovered_unusable_markers() -> [&'static str; 1] {
    [crate::si_prefix::WRONG_INPUT_MESSAGE]
}

/// A field that could not be read as a number.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct UnreadableNumber {
    /// The text that was to be converted.
    pub text: String,
    /// Which of the wanted values it was.
    pub slot: usize,
}

impl core::fmt::Display for UnreadableNumber {
    fn fmt(&self, formatter: &mut core::fmt::Formatter<'_>) -> core::fmt::Result {
        write!(
            formatter,
            "field {} is not a number: {}",
            self.slot, self.text
        )
    }
}

impl std::error::Error for UnreadableNumber {}

/// Implements Ghidra function `FUN_012e1df0` at `0x012E1DF0`.
///
/// Reads a line as a fixed number of values.
///
/// How many values are wanted is settled before the line is looked at, which
/// is what makes this different from splitting: the line is asked for exactly
/// that many and cannot answer with fewer. When it runs out of separators the
/// remainder is converted again for every slot still to fill, so a short line
/// ends with its last value repeated rather than with the missing ones left
/// alone — the recovered code deletes through a separator it did not find,
/// which deletes nothing, and then reads the same text again.
///
/// One value wanted is not one turn of that loop but a case of its own: the
/// whole line is converted as it stands, separators and all. So a line of
/// `1,2` read for one value is not the same as its first field.
///
/// Nothing is trimmed here, unlike [`split_fields`]; the text goes to the
/// conversion exactly as it was cut. In the original that conversion is
/// `StrToFloat` against the application's global format settings, so what
/// counts as a decimal point depends on where the program is running — see
/// [`crate::ibis_spice::DecimalSeparatorGuard`]. That choice is the caller's
/// here.
///
/// # Errors
///
/// Returns [`UnreadableNumber`] for the first field the conversion refuses.
pub fn parse_values<Number>(
    line: &str,
    separator: char,
    to_number: Number,
    out: &mut [f64],
) -> Result<(), UnreadableNumber>
where
    Number: Fn(&str) -> Option<f64>,
{
    let read = |text: &str, slot: usize| {
        to_number(text).ok_or_else(|| UnreadableNumber {
            text: text.to_owned(),
            slot,
        })
    };

    match out.len() {
        0 => Ok(()),
        1 => {
            out[0] = read(line, 0)?;
            Ok(())
        }
        _ => {
            let mut rest = line;
            for (slot, value) in out.iter_mut().enumerate() {
                let found = rest.find(separator).filter(|position| *position > 0);
                let text = found.map_or(rest, |position| &rest[..position]);
                *value = read(text, slot)?;
                if let Some(position) = rest.find(separator) {
                    rest = &rest[position + separator.len_utf8()..];
                }
            }
            Ok(())
        }
    }
}

/// Implements Ghidra function `FUN_012e2050` at `0x012E2050`.
///
/// Splits a line into trimmed fields, as many as there turn out to be.
///
/// Each field is taken from in front of a separator and trimmed at both ends,
/// so a file laid out with spaces around its separators reads the same as one
/// without. The loop ends when there is no separator left, which means the
/// text after the last one is never a field at all: a line of `a,b,c` yields
/// two fields, not three, and a caller that wants the last one has to take it
/// from what remains.
///
/// The recovered code writes each field to the next slot of an array it was
/// given and never checks how many slots there are, so a line carrying more
/// separators than the caller expected writes past the end of that array.
/// This stops at the end of the slice instead, and answers how many fields it
/// wrote so a caller can tell the two situations apart.
///
/// It also carries a flag that is set to false and tested at the bottom of the
/// loop but never set anywhere — the loop can only end by running out of
/// separators.
pub fn split_fields(line: &str, separator: char, out: &mut [String]) -> usize {
    let mut rest = line;
    let mut written = 0;
    while written < out.len() {
        let Some(position) = rest.find(separator) else {
            break;
        };
        rest[..position].trim().clone_into(&mut out[written]);
        rest = &rest[position + separator.len_utf8()..];
        written += 1;
    }
    written
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Default)]
    struct Files {
        present: Vec<String>,
        contents: Vec<String>,
        reads: usize,
        parses: usize,
    }

    impl CsvImportHost for Files {
        type Row = String;

        fn file_exists(&self, path: &str) -> bool {
            self.present.iter().any(|held| held == path)
        }

        fn read_lines(&mut self, _path: &str) -> Vec<String> {
            self.reads += 1;
            self.contents.clone()
        }

        fn parse(&mut self, lines: &[String]) -> Vec<Self::Row> {
            self.parses += 1;
            lines.iter().map(|line| line.to_uppercase()).collect()
        }
    }

    fn one_file(name: &str, lines: &[&str]) -> Files {
        Files {
            present: vec![name.to_owned()],
            contents: lines.iter().map(|line| (*line).to_owned()).collect(),
            ..Files::default()
        }
    }

    #[test]
    fn a_new_importer_holds_neither_half() {
        let import = CsvImport::<String>::new();

        assert!(import.lines().is_none());
        assert!(import.rows().is_none());
    }

    #[test]
    fn its_text_slots_start_empty() {
        let import = CsvImport::<String>::new();

        for slot in 0..TEXT_COUNT {
            assert_eq!(import.text(slot), "", "{slot}");
        }
    }

    #[test]
    fn a_slot_past_the_end_reads_empty_and_writes_nowhere() {
        let mut import = CsvImport::<String>::new();
        import.set_text(TEXT_COUNT, "lost".to_owned());

        assert_eq!(import.text(TEXT_COUNT), "");
    }

    #[test]
    fn preparing_makes_both_halves_at_once() {
        let mut import = CsvImport::<String>::new();
        import.prepare();

        assert_eq!(import.lines(), Some(&[][..]));
        assert_eq!(import.rows(), Some(&[][..]));
    }

    #[test]
    fn clearing_takes_both_halves_away_rather_than_emptying_them() {
        let mut import = CsvImport::<String>::new();
        import.prepare();
        import.clear();

        assert!(import.lines().is_none());
        assert!(import.rows().is_none());
    }

    #[test]
    fn clearing_an_importer_that_never_loaded_anything_is_allowed() {
        let mut import = CsvImport::<String>::new();
        import.clear();

        assert!(import.rows().is_none());
    }

    #[test]
    fn loading_reads_the_lines_and_the_rows_recovered_from_them() {
        let mut import = CsvImport::new();
        let mut files = one_file("data.csv", &["a,b", "c,d"]);

        assert!(load_file(&mut import, &mut files, "data.csv"));
        assert_eq!(
            import.lines(),
            Some(&["a,b".to_owned(), "c,d".to_owned()][..])
        );
        assert_eq!(
            import.rows(),
            Some(&["A,B".to_owned(), "C,D".to_owned()][..])
        );
    }

    #[test]
    fn a_file_that_is_not_there_leaves_the_previous_import_standing() {
        let mut import = CsvImport::new();
        let mut files = one_file("data.csv", &["a,b"]);
        load_file(&mut import, &mut files, "data.csv");

        assert!(!load_file(&mut import, &mut files, "gone.csv"));
        assert_eq!(import.rows(), Some(&["A,B".to_owned()][..]));
        assert_eq!(files.reads, 1);
    }

    #[test]
    fn an_empty_file_is_read_and_leaves_the_importer_holding_nothing() {
        let mut import = CsvImport::new();
        let mut files = one_file("empty.csv", &[]);

        assert!(load_file(&mut import, &mut files, "empty.csv"));
        assert_eq!(import.rows(), Some(&[][..]));
    }

    #[test]
    fn a_second_load_replaces_the_first_rather_than_adding_to_it() {
        let mut import = CsvImport::new();
        let mut files = one_file("first.csv", &["a"]);
        load_file(&mut import, &mut files, "first.csv");

        files.present.push("second.csv".to_owned());
        files.contents = vec!["b".to_owned()];

        assert!(load_file(&mut import, &mut files, "second.csv"));
        assert_eq!(import.rows(), Some(&["B".to_owned()][..]));
    }

    #[test]
    fn the_parser_owns_the_last_three_text_slots() {
        let mut import = CsvImport::<String>::new();
        for slot in 0..TEXT_COUNT {
            import.set_text(slot, "kept".to_owned());
        }
        import.clear_parsed_texts();

        for slot in 0..CONSTRUCTED_TEXTS {
            assert_eq!(import.text(slot), "kept", "{slot}");
        }
        for slot in CONSTRUCTED_TEXTS..TEXT_COUNT {
            assert_eq!(import.text(slot), "", "{slot}");
        }
    }

    #[derive(Debug, Default)]
    struct Command {
        answer: String,
        present: Vec<String>,
        asked: Vec<OpenDialogSetup>,
        loaded: Vec<String>,
    }

    impl CsvImportCommandHost for Command {
        fn ask_for_file(&mut self, setup: &OpenDialogSetup) -> String {
            self.asked.push(setup.clone());
            self.answer.clone()
        }

        fn file_exists(&self, path: &str) -> bool {
            self.present.iter().any(|held| held == path)
        }

        fn load(&mut self, path: &str) {
            self.loaded.push(path.to_owned());
        }
    }

    #[test]
    fn naming_a_file_imports_it_without_showing_a_dialog() {
        let mut host = Command {
            present: vec!["data.csv".to_owned()],
            ..Command::default()
        };

        assert_eq!(import_csv_file(&mut host, "data.csv"), "data.csv");
        assert!(host.asked.is_empty());
        assert_eq!(host.loaded, ["data.csv"]);
    }

    #[test]
    fn naming_none_asks_for_one_and_imports_what_comes_back() {
        let mut host = Command {
            answer: "picked.csv".to_owned(),
            present: vec!["picked.csv".to_owned()],
            ..Command::default()
        };

        assert_eq!(import_csv_file(&mut host, ""), "picked.csv");
        assert_eq!(host.loaded, ["picked.csv"]);
    }

    #[test]
    fn the_dialog_is_set_up_the_moment_before_it_is_shown() {
        let mut host = Command::default();
        import_csv_file(&mut host, "");

        assert_eq!(host.asked, [csv_dialog_setup()]);
        assert_eq!(host.asked[0].filter, CSV_FILTER);
        assert_eq!(host.asked[0].options, CSV_DIALOG_OPTIONS);
        assert_eq!(host.asked[0].filter_index, CSV_FILTER_INDEX);
    }

    #[test]
    fn a_cancelled_dialog_imports_nothing_and_answers_nothing() {
        let mut host = Command::default();

        assert_eq!(import_csv_file(&mut host, ""), "");
        assert!(host.loaded.is_empty());
    }

    #[test]
    fn the_chosen_path_is_answered_even_when_it_was_not_imported() {
        // Nothing in the answer distinguishes this from a file that loaded.
        let mut host = Command {
            answer: "missing.csv".to_owned(),
            ..Command::default()
        };

        assert_eq!(import_csv_file(&mut host, "missing.csv"), "missing.csv");
        assert!(host.loaded.is_empty());
    }

    #[test]
    fn the_options_are_assigned_rather_than_added_to() {
        // One option and no others: ofFileMustExist.
        assert_eq!(CSV_DIALOG_OPTIONS.count_ones(), 1);
        assert_eq!(CSV_DIALOG_OPTIONS, 1 << 9);
    }
}

#[cfg(test)]
mod helper_tests {
    use super::*;

    #[test]
    fn a_line_of_one_repeated_character_is_a_rule() {
        assert!(is_rule_line("--------"));
        assert!(is_rule_line("========"));
    }

    #[test]
    fn a_single_character_is_a_rule_by_itself() {
        assert!(is_rule_line("-"));
    }

    #[test]
    fn a_line_carrying_anything_else_is_not() {
        assert!(!is_rule_line("---x---"));
        assert!(!is_rule_line("a,b,c"));
    }

    #[test]
    fn an_empty_line_answers_false_where_the_original_answers_nothing() {
        // The recovered code leaves its flag unwritten here.
        assert!(!is_rule_line(""));
    }

    #[test]
    fn separators_are_counted_wherever_they_fall() {
        assert_eq!(count_separators("a,b,c", ','), 2);
        assert_eq!(count_separators("a;b;c;d", ';'), 3);
    }

    #[test]
    fn a_line_without_the_separator_carries_none() {
        assert_eq!(count_separators("abc", ','), 0);
        assert_eq!(count_separators("", ','), 0);
    }

    #[test]
    fn a_trailing_separator_counts_like_any_other() {
        assert_eq!(count_separators("a,b,", ','), 2);
        assert_eq!(count_separators(",", ','), 1);
    }

    #[test]
    fn empty_fields_between_separators_are_still_separators() {
        assert_eq!(count_separators("a,,b", ','), 2);
    }

    #[test]
    fn the_two_counts_differ_by_exactly_one() {
        for line in ["a,b,c", "", "a", ",,,"] {
            let fields = count_columns(line, ',', ColumnCount::Fields);
            let separators = count_columns(line, ',', ColumnCount::Separators);

            assert_eq!(fields, separators + 1, "{line}");
        }
    }

    #[test]
    fn a_line_with_no_separator_is_still_one_field() {
        assert_eq!(count_columns("abc", ',', ColumnCount::Fields), 1);
        assert_eq!(count_columns("", ',', ColumnCount::Fields), 1);
    }

    #[test]
    fn clearing_leaves_the_slots_in_place_and_empty() {
        let mut texts = ["a".to_owned(), "b".to_owned(), "c".to_owned()];
        clear_texts(&mut texts);

        assert_eq!(texts.len(), 3);
        assert!(texts.iter().all(String::is_empty));
    }

    #[test]
    fn clearing_nothing_is_the_case_the_guard_is_there_for() {
        let mut texts: [String; 0] = [];
        clear_texts(&mut texts);

        assert!(texts.is_empty());
    }
}

#[cfg(test)]
mod field_tests {
    use super::*;

    #[test]
    fn the_text_before_the_separator_is_the_field() {
        let taken = take_field("abc,def", ",", false);

        assert_eq!(taken.text, "abc");
        assert!(taken.found);
    }

    #[test]
    fn the_field_is_trimmed_at_both_ends() {
        assert_eq!(take_field("  abc  ,def", ",", false).text, "abc");
    }

    #[test]
    fn consuming_cuts_the_field_and_its_separator_away() {
        let taken = take_field("abc,def,ghi", ",", true);

        assert_eq!(taken.rest, "def,ghi");
    }

    #[test]
    fn not_consuming_leaves_the_line_as_it_was() {
        let taken = take_field("abc,def", ",", false);

        assert_eq!(taken.rest, "abc,def");
    }

    #[test]
    fn a_separator_that_is_not_there_takes_nothing() {
        let taken = take_field("abc", ",", true);

        assert_eq!(taken.text, "");
        assert_eq!(taken.rest, "abc");
        assert!(!taken.found);
    }

    #[test]
    fn an_empty_first_field_is_indistinguishable_from_no_separator() {
        let missing = take_field("abc", ",", true);
        let empty = take_field(",abc", ",", true);

        assert_eq!(missing.text, empty.text);
        assert_eq!(missing.found, empty.found);
        // And neither makes progress, which is why this cannot be looped on.
        assert_eq!(empty.rest, ",abc");
    }

    #[test]
    fn the_last_field_of_a_line_is_never_consumed() {
        let taken = take_field("ghi", ",", true);

        assert_eq!(taken.rest, "ghi");
    }

    #[test]
    fn a_multi_character_separator_is_cut_away_whole() {
        let taken = take_field("abc::def", "::", true);

        assert_eq!(taken.text, "abc");
        assert_eq!(taken.rest, "def");
    }

    #[derive(Debug)]
    struct Row(&'static str);

    impl NamedRow for Row {
        fn row_name(&self) -> &str {
            self.0
        }
    }

    #[test]
    fn a_row_is_found_by_its_name() {
        let rows = [Row("first"), Row("second")];

        assert_eq!(
            find_row(&rows, "second").map(NamedRow::row_name),
            Some("second")
        );
    }

    #[test]
    fn the_search_is_exact_and_case_sensitive() {
        let rows = [Row("Gain")];

        assert!(find_row(&rows, "gain").is_none());
        assert!(find_row(&rows, "Gai").is_none());
    }

    #[test]
    fn the_first_of_two_rows_with_one_name_is_the_one_found() {
        let rows = [Row("first of two"), Row("first of two")];
        let found = find_row(&rows, "first of two").expect("the first row matches");

        assert!(std::ptr::eq(found, std::ptr::from_ref(&rows[0])));
    }

    #[test]
    fn an_empty_list_finds_nothing_where_the_original_finds_anything() {
        let rows: [Row; 0] = [];

        assert!(find_row(&rows, "anything").is_none());
    }

    #[test]
    fn the_choosers_failure_sentence_is_a_stand_in_for_a_value() {
        let markers = recovered_unusable_markers();

        assert!(is_unusable_value(
            crate::si_prefix::WRONG_INPUT_MESSAGE,
            &markers
        ));
    }

    #[test]
    fn an_ordinary_field_is_not_one() {
        let markers = recovered_unusable_markers();

        assert!(!is_unusable_value("4.7", &markers));
        assert!(!is_unusable_value("", &markers));
    }

    #[test]
    fn a_caller_may_supply_the_text_that_did_not_survive() {
        assert!(is_unusable_value("n/a", &["n/a", "Wrong input number."]));
    }
}

#[cfg(test)]
mod split_tests {
    use super::*;

    fn plain(text: &str) -> Option<f64> {
        text.trim().parse().ok()
    }

    #[test]
    fn a_line_is_read_as_the_values_it_was_asked_for() {
        let mut values = [0.0; 3];

        assert_eq!(parse_values("1,2,3", ',', plain, &mut values), Ok(()));
        assert_eq!(values.to_vec(), vec![1.0, 2.0, 3.0]);
    }

    #[test]
    fn the_text_after_the_last_separator_is_the_last_value() {
        let mut values = [0.0; 2];
        parse_values("4.5,6.5", ',', plain, &mut values).expect("both fields are numbers");

        assert_eq!(values.to_vec(), vec![4.5, 6.5]);
    }

    #[test]
    fn a_short_line_ends_with_its_last_value_repeated() {
        let mut values = [0.0; 4];
        parse_values("1,2", ',', plain, &mut values).expect("both fields are numbers");

        assert_eq!(values.to_vec(), vec![1.0, 2.0, 2.0, 2.0]);
    }

    #[test]
    fn one_value_wanted_reads_the_whole_line_rather_than_its_first_field() {
        let mut single = [0.0; 1];

        // The conversion sees "1,2", not "1", and it is the conversion that
        // decides what to do with that.
        assert_eq!(
            parse_values("1,2", ',', plain, &mut single),
            Err(UnreadableNumber {
                text: "1,2".to_owned(),
                slot: 0
            })
        );
    }

    #[test]
    fn one_value_wanted_from_a_line_with_no_separator_reads_it() {
        let mut single = [0.0; 1];
        parse_values("7.5", ',', plain, &mut single).expect("the line is a number");

        assert_eq!(single.to_vec(), vec![7.5]);
    }

    #[test]
    fn wanting_nothing_reads_nothing_and_cannot_fail() {
        assert_eq!(parse_values("not a number", ',', plain, &mut []), Ok(()));
    }

    #[test]
    fn the_first_field_that_will_not_convert_is_the_one_reported() {
        let mut values = [0.0; 3];

        assert_eq!(
            parse_values("1,x,y", ',', plain, &mut values),
            Err(UnreadableNumber {
                text: "x".to_owned(),
                slot: 1
            })
        );
    }

    #[test]
    fn the_conversion_is_the_callers_so_the_decimal_point_is_too() {
        let comma_decimals = |text: &str| text.trim().replace(',', ".").parse().ok();
        let mut values = [0.0; 2];
        parse_values("1,5;2,5", ';', comma_decimals, &mut values).expect("both fields are numbers");

        assert_eq!(values.to_vec(), vec![1.5, 2.5]);
    }

    #[test]
    fn a_line_splits_into_the_fields_before_its_separators() {
        let mut fields = [String::new(), String::new(), String::new()];

        assert_eq!(split_fields("a,b,c", ',', &mut fields), 2);
        assert_eq!(fields[0], "a");
        assert_eq!(fields[1], "b");
    }

    #[test]
    fn the_text_after_the_last_separator_is_not_a_field() {
        let mut one = [String::new()];

        assert_eq!(split_fields("only", ',', &mut one), 0);
        assert_eq!(one[0], "");
    }

    #[test]
    fn each_field_is_trimmed_at_both_ends() {
        let mut fields = [String::new(), String::new()];
        split_fields("  a  ,  b  ,c", ',', &mut fields);

        assert_eq!(fields[0], "a");
        assert_eq!(fields[1], "b");
    }

    #[test]
    fn an_empty_field_is_still_a_field() {
        let mut fields = [String::new(), String::new()];

        assert_eq!(split_fields(",,c", ',', &mut fields), 2);
        assert_eq!(fields[0], "");
        assert_eq!(fields[1], "");
    }

    #[test]
    fn more_fields_than_slots_stop_at_the_end_rather_than_running_past_it() {
        let mut fields = [String::new(), String::new()];

        // The recovered code would have written four.
        assert_eq!(split_fields("a,b,c,d,e", ',', &mut fields), 2);
        assert_eq!(fields[1], "b");
    }

    #[test]
    fn the_count_tells_running_out_of_separators_from_running_out_of_room() {
        let mut room = [String::new(), String::new(), String::new()];

        // Ran out of separators, with a slot to spare.
        assert_eq!(split_fields("a,b,c", ',', &mut room), 2);

        let mut tight = [String::new(), String::new()];
        let slots = tight.len();

        // Ran out of room, with more line still to read.
        assert_eq!(split_fields("a,b,c,d", ',', &mut tight), slots);
    }

    #[test]
    fn a_trailing_separator_leaves_an_empty_last_field_that_is_not_taken() {
        let mut room = [String::new(), String::new(), String::new()];

        assert_eq!(split_fields("a,b,", ',', &mut room), 2);
        assert_eq!(room[2], "");
    }
}
