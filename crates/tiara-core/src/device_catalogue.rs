//! What parts are installed, and what each one is.
//!
//! Beside every encrypted `.lib` in the installation's `Spicelib` folder sits
//! a `.tld` that is not encrypted at all, and between them they are the
//! catalogue: 674 files and some nineteen thousand entries, each naming a
//! part, its pins, the category it belongs to and where its symbol is kept.
//!
//! ```text
//! Würth Elektronik
//! SUBCKT WE_171011801   VOUT FB VIN PGND EN   TinaICS:171011801  [SMPS]  ; …
//! MODEL  MHCNEN         <NMOSE> [Internal]
//! VHDLMACRO AD7394      MCU:AD7394 [ADDA]
//! ```
//!
//! The first line names the maker. Every line after it is one entry: what
//! kind it is, its name, its pins where it has any, where its symbol comes
//! from, and its category in brackets. `TinaICS:171011801` means device
//! `171011801` in `TINAICS.DDB`, which [`crate::obss`] can read; a name in
//! angle brackets means the original draws the symbol itself.
//!
//! This is what the bracketed categories in [`crate::component_categories`]
//! are: the compiled-in list there stands in for a library that has not been
//! loaded, and [`Catalogue`] is that library.
//!
//! Nothing here is committed. The catalogue is read from the installation at
//! run time, and the tests read files they write themselves.

use std::collections::BTreeSet;
use std::path::{Path, PathBuf};

use crate::component_categories::{CategoryLibrary, INTERNAL_CATEGORY};

/// The category the catalogue gives a part whose pinout it never resolved.
pub const UNRESOLVED_CATEGORY: &str = "[-]";

/// What the folder of catalogue files is called.
pub const CATALOGUE_FOLDER: &str = "Spicelib";

/// What one catalogue file is called.
pub const CATALOGUE_EXTENSION: &str = "tld";

/// What an entry is.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Kind {
    /// A part built out of other parts, which is most of them.
    Subcircuit,
    /// A part described to the simulator by its model card.
    Model,
    /// A part whose behaviour is written in VHDL.
    VhdlMacro,
}

impl Kind {
    /// The word the catalogue starts the line with.
    #[must_use]
    pub const fn word(self) -> &'static str {
        match self {
            Self::Subcircuit => "SUBCKT",
            Self::Model => "MODEL",
            Self::VhdlMacro => "VHDLMACRO",
        }
    }

    /// The kind a line starts with, where it starts with one.
    ///
    /// A line beginning with anything else - `LOCKED`, which marks an
    /// encrypted library, or a stray blank - is not an entry.
    #[must_use]
    pub fn from_word(word: &str) -> Option<Self> {
        [Self::Subcircuit, Self::Model, Self::VhdlMacro]
            .into_iter()
            .find(|kind| kind.word() == word)
    }
}

/// Where a part's symbol comes from.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Symbol {
    /// A device in one of the installed `.DDB` libraries.
    Stored {
        /// Which library, as the catalogue names it - `TinaICs`, `Texas`,
        /// `MCU`, `Infineon`. The case varies between files, so compare it
        /// with [`str::eq_ignore_ascii_case`].
        library: String,
        /// Which device in it.
        device: String,
    },
    /// A device in `DEVICES.DDB`, named by number.
    ///
    /// This is what the numbers are: the catalogue writes `43` where it
    /// means device `43` of the default library, and those are exactly the
    /// names `DEVICES.DDB` carries - `10`, `100`, `1001` and the rest.
    Default(String),
    /// One the original draws itself, named in angle brackets.
    Drawn(String),
    /// The catalogue says the part's pinout was never resolved.
    ///
    /// These carry `[-]` for a category and the words `Unresolved pinout N
    /// terminals` where the pins would be, so there is nothing to place and
    /// nothing to wire.
    Unresolved,
}

/// One part.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Entry {
    /// What kind of part it is.
    pub kind: Kind,
    /// What it is called, which is what the interface shows.
    pub name: String,
    /// Its pins, in the order the catalogue lists them. A model or a VHDL
    /// macro usually lists none.
    pub pins: Vec<String>,
    /// Where its symbol comes from.
    pub symbol: Symbol,
    /// The category in brackets, without them.
    ///
    /// Some are in two parts, separated by a bar - `NMOS|OptiMOS 30V-40V-N` -
    /// where the first is the category proper and the second the maker's own
    /// grouping. [`Self::group`] gives the first part.
    pub category: String,
    /// Who makes it, from the first line of the file it was read from.
    pub maker: String,
    /// The catalogue file it was read from.
    ///
    /// Its model sits in a library of the same stem beside it, which is how
    /// [`crate::model_library`] finds one. Empty for an entry read from a
    /// line rather than a file.
    pub source: std::path::PathBuf,
}

impl Entry {
    /// The category proper, without any maker's grouping after it.
    #[must_use]
    pub fn group(&self) -> &str {
        self.category
            .split_once('|')
            .map_or(self.category.as_str(), |(group, _)| group)
    }

    /// The category as [`crate::component_categories`] writes one, in
    /// brackets.
    #[must_use]
    pub fn bracketed_group(&self) -> String {
        format!("[{}]", self.group())
    }

    /// Whether this is one of the pieces a part is built from rather than a
    /// part anyone places.
    ///
    /// A sixth of the catalogue is these, and none of them belongs in the
    /// interface.
    #[must_use]
    pub fn is_internal(&self) -> bool {
        self.bracketed_group()
            .eq_ignore_ascii_case(INTERNAL_CATEGORY)
    }

    /// Whether the catalogue knows how to place it.
    ///
    /// An unresolved pinout has no pins to wire and no symbol to draw, so it
    /// is listed and not offered.
    #[must_use]
    pub fn is_unresolved(&self) -> bool {
        self.symbol == Symbol::Unresolved
    }

    /// Whether this is a part someone would put on a sheet.
    #[must_use]
    pub fn is_placeable(&self) -> bool {
        !self.is_internal() && !self.is_unresolved()
    }
}

/// Every part the installation has.
#[derive(Debug, Clone, Default)]
pub struct Catalogue {
    entries: Vec<Entry>,
}

impl Catalogue {
    /// Reads every catalogue file in a folder.
    ///
    /// A file that cannot be read, or that holds nothing an entry can be made
    /// of, is passed over rather than stopping the rest: one bad file in six
    /// hundred should not leave the interface with no parts at all.
    #[must_use]
    pub fn read_folder(folder: &Path) -> Self {
        let Ok(inside) = std::fs::read_dir(folder) else {
            return Self::default();
        };
        let mut entries = Vec::new();
        for file in inside.flatten() {
            let path = file.path();
            if path
                .extension()
                .is_some_and(|ending| ending.eq_ignore_ascii_case(CATALOGUE_EXTENSION))
            {
                entries.extend(read_file(&path));
            }
        }
        entries.sort_by(|left, right| left.name.cmp(&right.name));
        Self { entries }
    }

    /// A catalogue made of entries already read, which is what a test uses.
    #[must_use]
    pub const fn holding(entries: Vec<Entry>) -> Self {
        Self { entries }
    }

    /// Whether anything was found.
    #[must_use]
    pub fn is_loaded(&self) -> bool {
        !self.entries.is_empty()
    }

    /// Every part, including the pieces parts are built from.
    #[must_use]
    pub fn entries(&self) -> &[Entry] {
        &self.entries
    }

    /// The parts anyone would place, which is everything but the pieces and
    /// the ones whose pinout the catalogue never resolved.
    pub fn parts(&self) -> impl Iterator<Item = &Entry> {
        self.entries.iter().filter(|entry| entry.is_placeable())
    }

    /// The parts in one category, by the bracketed name.
    #[must_use]
    pub fn in_category(&self, bracketed: &str) -> Vec<&Entry> {
        self.parts()
            .filter(|entry| entry.bracketed_group().eq_ignore_ascii_case(bracketed))
            .collect()
    }

    /// Every category the installation has parts in, in brackets and in
    /// order.
    #[must_use]
    pub fn categories(&self) -> Vec<String> {
        let names: BTreeSet<String> = self.parts().map(Entry::bracketed_group).collect();
        names.into_iter().collect()
    }

    /// Whether the catalogue has any part in a category.
    ///
    /// This is what [`crate::component_categories`] asks a library, and the
    /// answer differs from the compiled-in list: an installation knows the
    /// categories it actually has parts for.
    #[must_use]
    pub fn knows(&self, bracketed: &str) -> bool {
        self.parts()
            .any(|entry| entry.bracketed_group().eq_ignore_ascii_case(bracketed))
    }

    /// The part with a name, if there is one.
    #[must_use]
    pub fn find(&self, name: &str) -> Option<&Entry> {
        self.entries
            .iter()
            .find(|entry| entry.name.eq_ignore_ascii_case(name))
    }
}

/// The catalogue is what [`crate::component_categories`] means by a library.
///
/// With one loaded, a category is known when the installation actually has a
/// part in it; without one, the compiled-in list stands in. That is the
/// difference the recovered code turns on, and this is the side of it that
/// had nothing behind it until now.
impl CategoryLibrary for Catalogue {
    fn is_loaded(&mut self) -> bool {
        Self::is_loaded(self)
    }

    fn knows(&mut self, category: &str) -> bool {
        Self::knows(self, category)
    }
}

/// The catalogue folder inside an installation.
#[must_use]
pub fn folder_in(installation: &Path) -> PathBuf {
    installation.join(CATALOGUE_FOLDER)
}

/// Every entry in one catalogue file.
///
/// A file that cannot be read gives none.
#[must_use]
pub fn read_file(path: &Path) -> Vec<Entry> {
    let Ok(bytes) = std::fs::read(path) else {
        return Vec::new();
    };
    let text = decode(&bytes);
    let mut lines = text.lines();
    // The first line is the maker, and is not an entry.
    let maker = lines.next().unwrap_or_default().trim().to_owned();
    lines
        .filter_map(|line| read_line(line, &maker))
        .map(|mut entry| {
            path.clone_into(&mut entry.source);
            entry
        })
        .collect()
}

/// One line, where it is an entry.
#[must_use]
pub fn read_line(line: &str, maker: &str) -> Option<Entry> {
    // Whatever follows a semicolon is a comment, and every line has one.
    let line = line.split(';').next().unwrap_or_default().trim();

    // The category is the last thing in brackets, and everything before it is
    // the entry proper. A line without one is not an entry.
    let opened = line.rfind('[')?;
    let closed = line.rfind(']')?;
    if closed < opened {
        return None;
    }
    let category = line.get(opened + 1..closed)?.trim().to_owned();

    let mut words = line.get(..opened)?.split_whitespace();
    let kind = Kind::from_word(words.next()?)?;
    let name = words.next()?.to_owned();

    // A part whose pinout was never resolved says so in words where the pins
    // would be, so none of the rest of the line means anything.
    if category.trim() == UNRESOLVED_CATEGORY.trim_matches(['[', ']']) {
        return Some(Entry {
            kind,
            name,
            pins: Vec::new(),
            symbol: Symbol::Unresolved,
            category,
            maker: maker.to_owned(),
            source: std::path::PathBuf::new(),
        });
    }

    // What is left is the pins and then, last, where the symbol comes from.
    let mut rest: Vec<&str> = words.collect();
    let symbol = read_symbol(rest.pop()?)?;
    let pins = rest.into_iter().map(ToOwned::to_owned).collect();

    Some(Entry {
        kind,
        name,
        pins,
        symbol,
        category,
        maker: maker.to_owned(),
        source: std::path::PathBuf::new(),
    })
}

/// Where a symbol comes from, as the catalogue writes it.
fn read_symbol(word: &str) -> Option<Symbol> {
    if let Some(drawn) = word.strip_prefix('<').and_then(|it| it.strip_suffix('>')) {
        return Some(Symbol::Drawn(drawn.to_owned()));
    }
    if !word.is_empty() && word.bytes().all(|byte| byte.is_ascii_digit()) {
        return Some(Symbol::Default(word.to_owned()));
    }
    let (library, device) = word.split_once(':')?;
    if library.is_empty() || device.is_empty() {
        return None;
    }
    Some(Symbol::Stored {
        library: library.to_owned(),
        device: device.to_owned(),
    })
}

/// The text of a catalogue file.
///
/// Four of the installed files are UTF-16 with a mark at the front and the
/// rest are single-byte, so the mark decides. A single-byte file is read as
/// Latin-1, which cannot fail and keeps the makers' accented names - reading
/// it as UTF-8 would throw them away.
fn decode(bytes: &[u8]) -> String {
    if let Some(rest) = bytes.strip_prefix(&[0xFF, 0xFE]) {
        return decode_utf16(rest, u16::from_le_bytes);
    }
    if let Some(rest) = bytes.strip_prefix(&[0xFE, 0xFF]) {
        return decode_utf16(rest, u16::from_be_bytes);
    }
    bytes.iter().map(|byte| char::from(*byte)).collect()
}

/// A UTF-16 file, one way round or the other.
fn decode_utf16(bytes: &[u8], order: fn([u8; 2]) -> u16) -> String {
    let units: Vec<u16> = bytes
        .chunks_exact(2)
        .map(|pair| order([pair[0], pair[1]]))
        .collect();
    String::from_utf16_lossy(&units)
}

#[cfg(test)]
mod tests {
    use super::{Catalogue, Kind, Symbol, read_file, read_line};
    use std::path::PathBuf;

    const MAKER: &str = "Würth Elektronik";

    fn a_folder(name: &str) -> PathBuf {
        let folder =
            std::env::temp_dir().join(format!("tiara-catalogue-{}-{name}", std::process::id()));
        let _ = std::fs::remove_dir_all(&folder);
        std::fs::create_dir_all(&folder).unwrap();
        folder
    }

    #[test]
    fn a_subcircuit_line_gives_its_name_pins_symbol_and_category() {
        let entry = read_line(
            "SUBCKT WE_171011801       VOUT FB VIN PGND EN    TinaICS:171011801  [SMPS]  ; No processable comment",
            MAKER,
        )
        .unwrap();

        assert_eq!(entry.kind, Kind::Subcircuit);
        assert_eq!(entry.name, "WE_171011801");
        assert_eq!(entry.pins, ["VOUT", "FB", "VIN", "PGND", "EN"]);
        assert_eq!(
            entry.symbol,
            Symbol::Stored {
                library: "TinaICS".to_owned(),
                device: "171011801".to_owned()
            }
        );
        assert_eq!(entry.category, "SMPS");
        assert_eq!(entry.maker, MAKER);
        assert!(!entry.is_internal());
    }

    #[test]
    fn a_model_line_has_a_drawn_symbol_and_no_pins() {
        let entry = read_line("MODEL  MHCNEN          <NMOSE> [Internal]", MAKER).unwrap();

        assert_eq!(entry.kind, Kind::Model);
        assert_eq!(entry.name, "MHCNEN");
        assert!(entry.pins.is_empty());
        assert_eq!(entry.symbol, Symbol::Drawn("NMOSE".to_owned()));
        assert!(entry.is_internal());
    }

    #[test]
    fn a_vhdl_macro_line_is_read_too() {
        let entry = read_line("VHDLMACRO AD7394 MCU:AD7394 [ADDA]", MAKER).unwrap();
        assert_eq!(entry.kind, Kind::VhdlMacro);
        assert_eq!(entry.name, "AD7394");
        assert!(entry.pins.is_empty());
        assert_eq!(entry.bracketed_group(), "[ADDA]");
    }

    #[test]
    fn a_line_that_is_not_an_entry_is_passed_over() {
        // The marker an encrypted library leaves behind.
        assert_eq!(read_line("LOCKED Yss=", MAKER), None);
        assert_eq!(read_line("", MAKER), None);
        assert_eq!(read_line("   ", MAKER), None);
        // A category with nothing in front of it.
        assert_eq!(read_line("[SMPS]", MAKER), None);
        // A word that is not a kind.
        assert_eq!(read_line("SOMETHING X <Y> [SMPS]", MAKER), None);
    }

    #[test]
    fn a_makers_own_grouping_after_the_category_is_kept_but_not_counted() {
        let entry = read_line(
            "SUBCKT BSC0902NSI D G S Infineon:BSC0902NSI [NMOS|OptiMOS 30V-40V-N]",
            MAKER,
        )
        .unwrap();

        assert_eq!(entry.category, "NMOS|OptiMOS 30V-40V-N");
        assert_eq!(entry.group(), "NMOS");
        assert_eq!(entry.bracketed_group(), "[NMOS]");
    }

    #[test]
    fn a_file_names_its_maker_once_and_its_parts_after() {
        let folder = a_folder("one-file");
        let path = folder.join("parts.tld");
        std::fs::write(
            &path,
            "Texas Instruments\r\n\
             SUBCKT OPA364 In+ In- Out Texas:OPA364 [OpAmp] ; nothing\r\n\
             SUBCKT Stage_0 A B <AutoShape> [Internal]\r\n\
             LOCKED Yss=\r\n",
        )
        .unwrap();

        let entries = read_file(&path);
        assert_eq!(entries.len(), 2);
        assert_eq!(entries[0].name, "OPA364");
        assert_eq!(entries[0].maker, "Texas Instruments");
        assert!(entries[1].is_internal());

        let _ = std::fs::remove_dir_all(&folder);
    }

    #[test]
    fn a_file_written_the_other_way_round_reads_the_same() {
        let folder = a_folder("utf16");
        let path = folder.join("wide.tld");
        let text = "Infineon\r\nSUBCKT 2EDF8275F OUTA GNDA Infineon:2EDF8275F [Gate_Driver]\r\n";
        let mut bytes = vec![0xFF, 0xFE];
        for unit in text.encode_utf16() {
            bytes.extend_from_slice(&unit.to_le_bytes());
        }
        std::fs::write(&path, bytes).unwrap();

        let entries = read_file(&path);
        assert_eq!(entries.len(), 1);
        assert_eq!(entries[0].name, "2EDF8275F");
        assert_eq!(entries[0].maker, "Infineon");

        let _ = std::fs::remove_dir_all(&folder);
    }

    #[test]
    fn an_accented_maker_survives_a_single_byte_file() {
        let folder = a_folder("latin");
        let path = folder.join("wurth.tld");
        // The installed files are Latin-1, not UTF-8.
        let mut bytes = b"W\xfcrth Elektronik\r\n".to_vec();
        bytes.extend_from_slice(b"SUBCKT WE_1 A B TinaICS:1 [SMPS]\r\n");
        std::fs::write(&path, bytes).unwrap();

        let entries = read_file(&path);
        assert_eq!(entries[0].maker, "Würth Elektronik");

        let _ = std::fs::remove_dir_all(&folder);
    }

    #[test]
    fn a_folder_is_read_whole_and_sorted_by_name() {
        let folder = a_folder("folder");
        std::fs::write(
            folder.join("second.tld"),
            "Texas\nSUBCKT ZZZ A Texas:ZZZ [OpAmp]\n",
        )
        .unwrap();
        std::fs::write(
            folder.join("first.tld"),
            "Texas\nSUBCKT AAA A Texas:AAA [NPN]\n",
        )
        .unwrap();
        // Not a catalogue file, and not read.
        std::fs::write(folder.join("first.lib"), "<Encrypted Library>\n").unwrap();

        let catalogue = Catalogue::read_folder(&folder);
        assert!(catalogue.is_loaded());
        assert_eq!(catalogue.entries().len(), 2);
        assert_eq!(catalogue.entries()[0].name, "AAA");

        let _ = std::fs::remove_dir_all(&folder);
    }

    #[test]
    fn a_folder_that_is_not_there_gives_an_empty_catalogue() {
        let missing = std::env::temp_dir().join("tiara-no-such-catalogue");
        let _ = std::fs::remove_dir_all(&missing);

        let catalogue = Catalogue::read_folder(&missing);
        assert!(!catalogue.is_loaded());
        assert!(catalogue.categories().is_empty());
        assert!(!catalogue.knows("[OpAmp]"));
    }

    #[test]
    fn the_pieces_parts_are_built_from_are_kept_out_of_the_interface() {
        let catalogue = Catalogue::holding(vec![
            read_line("SUBCKT OPA364 A B Texas:OPA364 [OpAmp]", MAKER).unwrap(),
            read_line("SUBCKT Stage_0 A <AutoShape> [Internal]", MAKER).unwrap(),
        ]);

        assert_eq!(catalogue.entries().len(), 2);
        assert_eq!(catalogue.parts().count(), 1);
        assert_eq!(catalogue.categories(), ["[OpAmp]"]);
        assert!(catalogue.knows("[OpAmp]"));
        assert!(!catalogue.knows("[Internal]"));
    }

    #[test]
    fn the_categories_are_asked_of_the_catalogue_however_they_are_written() {
        let catalogue = Catalogue::holding(vec![
            read_line("SUBCKT OPA364 A B Texas:OPA364 [OpAmp]", MAKER).unwrap(),
        ]);

        assert!(catalogue.knows("[opamp]"));
        assert_eq!(catalogue.in_category("[OPAMP]").len(), 1);
        assert!(catalogue.find("opa364").is_some());
        assert!(catalogue.find("nothing").is_none());
    }

    #[test]
    fn an_installed_catalogue_reads() {
        // Read from the installation at run time and never committed. Where
        // there is no installation there is nothing to check, and every other
        // test here stands on files it writes itself.
        let Some(installation) = std::env::var_os("TIARA_TINA_HOME").map(PathBuf::from) else {
            return;
        };
        let folder = super::folder_in(&installation);
        if !folder.is_dir() {
            return;
        }

        let catalogue = Catalogue::read_folder(&folder);
        assert!(catalogue.is_loaded());
        // The installed catalogue is large, in many categories, and most of
        // it is parts rather than pieces.
        assert!(catalogue.entries().len() > 10_000);
        assert!(catalogue.categories().len() > 40);
        // Named rather than counted, so that a change in what is installed
        // does not quietly make this test say nothing.
        for category in ["[OpAmp]", "[NPN]", "[PNP]", "[NMOS]", "[SMPS]"] {
            assert!(catalogue.knows(category), "{category} should be known");
        }
        assert!(catalogue.parts().count() * 2 > catalogue.entries().len());
        assert!(catalogue.knows("[OpAmp]"));
    }

    #[test]
    fn a_number_where_the_symbol_goes_means_the_default_library() {
        // DEVICES.DDB names its devices by number, and this is where those
        // numbers are referred to from.
        let entry = read_line("SUBCKT AD1580     C A     43     [Ref]", MAKER).unwrap();

        assert_eq!(entry.name, "AD1580");
        assert_eq!(entry.pins, ["C", "A"]);
        assert_eq!(entry.symbol, Symbol::Default("43".to_owned()));
        assert!(entry.is_placeable());
    }

    #[test]
    fn a_part_whose_pinout_was_never_resolved_is_listed_and_not_offered() {
        let entry = read_line(
            "SUBCKT OPA1/BB         Unresolved pinout 6 terminals  [-]",
            MAKER,
        )
        .unwrap();

        assert_eq!(entry.name, "OPA1/BB");
        // The words where the pins would be are not pins, so none are kept.
        assert!(entry.pins.is_empty());
        assert_eq!(entry.symbol, Symbol::Unresolved);
        assert!(entry.is_unresolved());
        assert!(!entry.is_placeable());

        let catalogue = Catalogue::holding(vec![entry]);
        assert_eq!(catalogue.entries().len(), 1);
        assert_eq!(catalogue.parts().count(), 0);
        assert!(catalogue.categories().is_empty());
    }

    #[test]
    fn the_catalogue_is_the_library_the_recovered_sorting_asks() {
        use crate::component_categories::{INTERNAL_CATEGORY, settle_category};

        let mut catalogue = Catalogue::holding(vec![
            read_line("SUBCKT OPA364 A B Texas:OPA364 [OpAmp]", MAKER).unwrap(),
            read_line("SUBCKT WE_1 A B TinaICS:1 [SMPS]", MAKER).unwrap(),
        ]);

        // A category the installation has parts in is kept as it is.
        assert_eq!(settle_category(&mut catalogue, "[OpAmp]"), "[OpAmp]");
        assert_eq!(settle_category(&mut catalogue, "[SMPS]"), "[SMPS]");

        // One it has no parts in goes where an unknown category goes, even
        // though the compiled-in list has it - which is the difference a
        // loaded library makes, and what the recovered code turns on.
        assert!(
            crate::component_categories::KNOWN_CATEGORIES.contains(&"[NPN]"),
            "the compiled-in list should have it"
        );
        assert_eq!(settle_category(&mut catalogue, "[NPN]"), INTERNAL_CATEGORY);

        // With nothing loaded the compiled-in list stands in, and then it is
        // kept.
        let mut empty = Catalogue::default();
        assert_eq!(settle_category(&mut empty, "[NPN]"), "[NPN]");
    }
}
