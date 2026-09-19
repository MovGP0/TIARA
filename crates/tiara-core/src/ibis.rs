//! The recovered IBIS model library: its data model and its file reader.
//!
//! IBIS files describe the electrical behaviour of a chip's I/O buffers as
//! measured tables rather than as a circuit, which is what lets a simulator
//! use a vendor's real buffer without being told how it is built. A file is a
//! flat sequence of bracketed keywords, each opening a section whose
//! continuation lines belong to it until the next keyword.
//!
//! Nearly every electrical quantity in the format comes as three numbers
//! rather than one — typical, minimum and maximum — so that a single file
//! describes a part across its whole process and temperature range. That
//! triple is [`TypMinMax`], and it runs through the entire model.

use std::fmt;

/// A quantity measured at the three process corners.
///
/// The reader always takes all three, in this order, with no spelling for a
/// missing corner.
#[derive(Debug, Clone, Copy, PartialEq, Default)]
pub struct TypMinMax {
    /// The typical corner.
    pub typical: f64,
    /// The slow/minimum corner.
    pub minimum: f64,
    /// The fast/maximum corner.
    pub maximum: f64,
}

impl TypMinMax {
    /// Builds a triple from the three corners in the order the reader takes
    /// them.
    #[must_use]
    pub const fn new(typical: f64, minimum: f64, maximum: f64) -> Self {
        Self {
            typical,
            minimum,
            maximum,
        }
    }
}

/// One of the four current-voltage tables a buffer model carries.
///
/// The two clamps describe the protection diodes to each supply rail and the
/// two drivers the transistors that pull the pin, which together are what let
/// a simulator reproduce the buffer without a transistor model of it.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub enum IvTable {
    /// The clamp diode to the supply rail.
    PowerClamp,
    /// The clamp diode to ground.
    GroundClamp,
    /// The pull-up driver.
    Pullup,
    /// The pull-down driver.
    Pulldown,
}

impl IvTable {
    /// The index the recovered code stores each table under.
    ///
    /// Part of Ghidra function `FUN_01bbdba0` at `0x01BBDBA0`.
    #[must_use]
    pub const fn index(self) -> usize {
        match self {
            Self::PowerClamp => 0,
            Self::GroundClamp => 1,
            Self::Pullup => 2,
            Self::Pulldown => 3,
        }
    }

    /// Recovers a table from its index.
    #[must_use]
    pub const fn from_index(index: usize) -> Option<Self> {
        match index {
            0 => Some(Self::PowerClamp),
            1 => Some(Self::GroundClamp),
            2 => Some(Self::Pullup),
            3 => Some(Self::Pulldown),
            _ => None,
        }
    }

    /// Every table, in the recovered index order.
    pub const ALL: [Self; 4] = [
        Self::PowerClamp,
        Self::GroundClamp,
        Self::Pullup,
        Self::Pulldown,
    ];
}

/// Implements Ghidra function `FUN_01bbaaa0` at `0x01BBAAA0`.
///
/// Reports whether a keyword is the two-word keyword built from these words.
///
/// The format lets a two-word keyword be written with either separator
/// between the words, so `MODEL SELECTOR` and `MODEL_SELECTOR` are the same
/// keyword. The recovered helper builds both spellings and compares against
/// each, which is why every two-word keyword in the reader goes through here
/// rather than being compared directly.
///
/// The two separator characters are read from data rather than compiled in,
/// so they are the caller's to supply; the recovered call sites always pass
/// the same pair.
#[must_use]
pub fn keyword_matches_pair(
    keyword: &str,
    first: &str,
    second: &str,
    separators: [char; 2],
) -> bool {
    separators
        .iter()
        .any(|separator| matches_with_separator(keyword, first, second, *separator))
}

fn matches_with_separator(keyword: &str, first: &str, second: &str, separator: char) -> bool {
    let Some(rest) = keyword.strip_prefix(first) else {
        return false;
    };
    let Some(rest) = rest.strip_prefix(separator) else {
        return false;
    };
    rest == second
}

/// The separator pair the recovered reader passes for every two-word keyword.
///
/// The characters themselves are data references rather than literals, so
/// these are the conventional spellings rather than recovered values; the
/// recovered fact is that there are exactly two and that either is accepted.
pub const KEYWORD_SEPARATORS: [char; 2] = [' ', '_'];

/// Implements Ghidra function `FUN_01bbdba0` at `0x01BBDBA0`.
///
/// Recognises the keyword that opens one of the four current-voltage tables.
///
/// The keyword is upper-cased before matching, so the file's own casing does
/// not matter. The two clamp keywords are two-word ones and so accept either
/// separator; the two driver keywords are single words.
///
/// Returns `None` for anything else, which is how the reader tells a table
/// keyword from every other keyword it might be looking at.
#[must_use]
pub fn iv_table_for_keyword(keyword: &str) -> Option<IvTable> {
    let upper = keyword.to_uppercase();

    if keyword_matches_pair(&upper, "POWER", "CLAMP", KEYWORD_SEPARATORS) {
        return Some(IvTable::PowerClamp);
    }
    if keyword_matches_pair(&upper, "GND", "CLAMP", KEYWORD_SEPARATORS) {
        return Some(IvTable::GroundClamp);
    }
    match upper.as_str() {
        "PULLUP" => Some(IvTable::Pullup),
        "PULLDOWN" => Some(IvTable::Pulldown),
        _ => None,
    }
}

/// A point of one current-voltage table.
#[derive(Debug, Clone, Copy, PartialEq, Default)]
pub struct IvPoint {
    /// The voltage the currents were measured at.
    pub voltage: f64,
    /// The current at each corner.
    pub current: TypMinMax,
}

/// A point of a rising or falling ramp.
///
/// A ramp is given as a voltage change over a time, both at three corners,
/// rather than as a slew rate, so the reader keeps the two separately.
#[derive(Debug, Clone, Copy, PartialEq, Default)]
pub struct RampPoint {
    /// The voltage change at each corner.
    pub voltage: TypMinMax,
    /// The time it takes at each corner.
    pub time: TypMinMax,
}

/// Which edge a ramp describes.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub enum RampEdge {
    /// The rising edge, `dV/dt_r`.
    Rising,
    /// The falling edge, `dV/dt_f`.
    Falling,
}

impl RampEdge {
    /// Recognises the sub-keyword that opens a ramp.
    ///
    /// Part of Ghidra function `FUN_01bbc650` at `0x01BBC650`.
    #[must_use]
    pub fn from_keyword(keyword: &str) -> Option<Self> {
        match keyword {
            "dV/dt_r" => Some(Self::Rising),
            "dV/dt_f" => Some(Self::Falling),
            _ => None,
        }
    }
}

/// One buffer model.
#[derive(Debug, Clone, Default, PartialEq)]
pub struct Model {
    /// The name the file gives it.
    pub name: String,
    /// What kind of buffer it is — `Model_type`.
    pub model_type: String,
    /// Whether it inverts — `Polarity`.
    pub polarity: String,
    /// The input low threshold, kept as the text the file gave.
    pub input_low: String,
    /// The input high threshold, kept as the text the file gave.
    pub input_high: String,
    /// The die capacitance, `C_comp`.
    pub die_capacitance: Option<TypMinMax>,
    /// The supply range the model was measured over.
    pub voltage_range: Option<TypMinMax>,
    /// The four current-voltage tables, indexed by [`IvTable::index`].
    pub iv_tables: [Vec<IvPoint>; 4],
    /// The rising ramp.
    pub rising_ramp: Vec<RampPoint>,
    /// The falling ramp.
    pub falling_ramp: Vec<RampPoint>,
}

impl Model {
    /// Starts a model with a name and nothing else.
    #[must_use]
    pub fn new(name: impl Into<String>) -> Self {
        Self {
            name: name.into(),
            ..Self::default()
        }
    }

    /// The points of one table.
    #[must_use]
    pub fn table(&self, table: IvTable) -> &[IvPoint] {
        &self.iv_tables[table.index()]
    }

    /// Adds a point to one table.
    pub fn push_point(&mut self, table: IvTable, point: IvPoint) {
        self.iv_tables[table.index()].push(point);
    }

    /// Adds a point to one ramp.
    pub fn push_ramp(&mut self, edge: RampEdge, point: RampPoint) {
        match edge {
            RampEdge::Rising => self.rising_ramp.push(point),
            RampEdge::Falling => self.falling_ramp.push(point),
        }
    }
}

/// A named choice between models, used where one pin can be driven by any of
/// several buffers.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct ModelSelector {
    /// The name the file gives it.
    pub name: String,
    /// Each choice: the model's name and the text describing it.
    pub choices: Vec<(String, String)>,
}

/// One package parasitic, named and measured at three corners.
#[derive(Debug, Clone, PartialEq)]
pub struct PackageParasitic {
    /// Which parasitic it is, as the file names it.
    pub name: String,
    /// Its value at each corner.
    pub value: TypMinMax,
}

/// The parasitics of a component's package.
#[derive(Debug, Clone, Default, PartialEq)]
pub struct Package {
    /// The name the file gives it.
    pub name: String,
    /// Each named parasitic.
    pub parasitics: Vec<PackageParasitic>,
}

/// One pin of a component.
#[derive(Debug, Clone, Default, PartialEq)]
pub struct Pin {
    /// The pin's designator.
    pub name: String,
    /// The signal it carries.
    pub signal: String,
    /// The model that drives it.
    pub model: String,
    /// Its own parasitics, when the file gives the longer form.
    pub parasitics: Option<TypMinMax>,
}

/// One component of a library.
#[derive(Debug, Clone, Default, PartialEq)]
pub struct Component {
    /// The name the file gives it.
    pub name: String,
    /// Its package, if the file declared one.
    pub package: Option<Package>,
    /// Its pins, in file order.
    pub pins: Vec<Pin>,
}

/// Everything one IBIS file describes.
#[derive(Debug, Clone, Default, PartialEq)]
pub struct Library {
    /// The components, in file order.
    pub components: Vec<Component>,
    /// The models, in file order.
    pub models: Vec<Model>,
    /// The model selectors, in file order.
    pub selectors: Vec<ModelSelector>,
}

impl Library {
    /// Implements Ghidra function `FUN_01bbbe00` at `0x01BBBE00`.
    ///
    /// Adds a named component and hands back the index of it.
    ///
    /// The recovered helper appends unconditionally, so a file that names the
    /// same component twice ends up with two of them rather than one being
    /// merged into the other or replacing it.
    pub fn add_component(&mut self, name: impl Into<String>) -> usize {
        self.components.push(Component {
            name: name.into(),
            ..Component::default()
        });
        self.components.len() - 1
    }

    /// Implements Ghidra function `FUN_01bbbe90` at `0x01BBBE90`.
    ///
    /// Finds a component by name.
    ///
    /// The comparison is exact rather than case-folded, unlike the keyword
    /// matching above — a component named in one case cannot be found in
    /// another.
    ///
    /// Because [`Self::add_component`] keeps duplicates, this returns the
    /// first of them.
    #[must_use]
    pub fn find_component(&self, name: &str) -> Option<&Component> {
        self.components
            .iter()
            .find(|component| component.name == name)
    }

    /// Adds a named model and hands back the index of it.
    pub fn add_model(&mut self, name: impl Into<String>) -> usize {
        self.models.push(Model::new(name));
        self.models.len() - 1
    }

    /// Adds a named model selector and hands back the index of it.
    pub fn add_selector(&mut self, name: impl Into<String>) -> usize {
        self.selectors.push(ModelSelector {
            name: name.into(),
            choices: Vec::new(),
        });
        self.selectors.len() - 1
    }
}

/// Why a file could not be read.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum IbisError {
    /// The file named does not exist. The recovered reader reports the path
    /// with it.
    FileNotFound(String),
    /// A section that describes a component was reached before any component
    /// had been declared.
    MissingComponent,
    /// A table keyword was expected and something else was found.
    UnknownTable,
    /// The component has no pin carrying the named signal.
    PinNotFound(String),
    /// Neither candidate model is in the library.
    ModelNotFound(String),
}

impl fmt::Display for IbisError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::FileNotFound(path) => write!(formatter, "File not found: {path}"),
            Self::MissingComponent => formatter.write_str("Missing component"),
            Self::UnknownTable => formatter.write_str("GetClamp"),
            Self::PinNotFound(signal) => write!(formatter, "{signal}: pin not found"),
            Self::ModelNotFound(model) => write!(formatter, "{model}: model not found"),
        }
    }
}

impl std::error::Error for IbisError {}

/// Implements Ghidra function `FUN_01bbc400` at `0x01BBC400`.
///
/// Turns a reader failure into the error the recovered code raises.
///
/// The recovered helper raises rather than collecting, so the first bad line
/// abandons the whole file — a partially built library is never handed back.
/// It also takes the reader as its first argument and never looks at it,
/// which is why this takes only the failure.
#[must_use]
pub const fn parse_error(error: IbisError) -> IbisError {
    error
}

/// The keyword that opens a section.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Keyword {
    /// `[Comment Char]` — changes the character that starts a comment.
    CommentChar,
    /// `[Component]` — starts a component.
    Component,
    /// `[Manufacturer]`.
    Manufacturer,
    /// `[Package]` — the package parasitics of the current component.
    Package,
    /// `[Pin]` — the pin list of the current component.
    Pin,
    /// `[Model]` — starts a buffer model.
    Model,
    /// `[Model Selector]` — starts a choice between models.
    ModelSelector,
    /// `[Voltage Range]` — the supply range of the current model.
    VoltageRange,
    /// `[Ramp]` — the edge rates of the current model.
    Ramp,
    /// One of the four current-voltage tables.
    Table(IvTable),
}

impl Keyword {
    /// Recognises a keyword, which the reader has already upper-cased.
    ///
    /// Part of Ghidra function `FUN_01bbc650` at `0x01BBC650`.
    ///
    /// The recovered reader tests these in order and does not stop at the
    /// first match — each test is a separate `if` — so a keyword is compared
    /// against every spelling even once it has been recognised. Ordering them
    /// here changes nothing, because no two of the spellings overlap.
    #[must_use]
    pub fn classify(keyword: &str) -> Option<Self> {
        if keyword_matches_pair(keyword, "COMMENT", "CHAR", KEYWORD_SEPARATORS) {
            return Some(Self::CommentChar);
        }
        if keyword_matches_pair(keyword, "MODEL", "SELECTOR", KEYWORD_SEPARATORS) {
            return Some(Self::ModelSelector);
        }
        if keyword_matches_pair(keyword, "VOLTAGE", "RANGE", KEYWORD_SEPARATORS) {
            return Some(Self::VoltageRange);
        }
        if let Some(table) = iv_table_for_keyword(keyword) {
            return Some(Self::Table(table));
        }
        match keyword {
            "COMPONENT" => Some(Self::Component),
            "MANUFACTURER" => Some(Self::Manufacturer),
            "PACKAGE" => Some(Self::Package),
            "PIN" => Some(Self::Pin),
            "MODEL" => Some(Self::Model),
            "RAMP" => Some(Self::Ramp),
            _ => None,
        }
    }

    /// Reports whether this keyword's section describes the current
    /// component, so reaching it without one is the failure the recovered
    /// reader raises.
    ///
    /// Part of Ghidra function `FUN_01bbc650` at `0x01BBC650`.
    ///
    /// `[Component]` itself is not one of these, because it is what declares
    /// the component the others need. `[Comment Char]` is not either — it
    /// changes how the file is read rather than describing anything in it.
    #[must_use]
    pub const fn needs_component(&self) -> bool {
        matches!(
            self,
            Self::Manufacturer
                | Self::Package
                | Self::Pin
                | Self::Model
                | Self::ModelSelector
                | Self::VoltageRange
        )
    }
}

/// Implements part of Ghidra function `FUN_01bbc650` at `0x01BBC650`.
///
/// Reads the comment character out of a `[Comment Char]` argument.
///
/// The format spells the argument as the new character followed by a fixed
/// suffix, so the reader cuts the argument at that suffix and takes the first
/// character of what is left. An argument with no suffix, or an empty one,
/// leaves the comment character alone.
///
/// The suffix itself is a data reference rather than a literal, so the caller
/// supplies it; the recovered call site always passes the same one.
#[must_use]
pub fn comment_char(argument: &str, suffix: &str) -> Option<char> {
    argument
        .find(suffix)
        .map_or(argument, |end| &argument[..end])
        .chars()
        .next()
}

/// The suffix the format writes after the comment character.
pub const COMMENT_CHAR_SUFFIX: &str = "_char";

/// The character a file starts with to open a keyword.
pub const KEYWORD_OPEN: char = '[';

/// The comment character a file uses until `[Comment Char]` changes it.
pub const DEFAULT_COMMENT_CHAR: char = '|';

/// How many parasitics a `[Package]` line carries, and how many corners each
/// of the reader's triples takes.
pub const CORNERS: usize = 3;

/// The tokenizer the reader drives.
///
/// The recovered reader does not tokenize the file itself — it borrows the
/// application's shared text parser and calls into it line by line, which is
/// why this is an adapter rather than a parser of its own. Each method stands
/// for one of the recovered parser's entry points.
pub trait IbisSource {
    /// Whether the file exists. The recovered reader asks before opening and
    /// reports the path when it does not.
    fn exists(&mut self, path: &str) -> bool;

    /// Loads the file and reports how many lines it holds.
    fn open(&mut self, path: &str) -> usize;

    /// Positions the tokenizer at the start of one line.
    fn begin_line(&mut self, index: usize);

    /// The first character of the current line, or `None` when it is empty.
    fn first_char(&mut self) -> Option<char>;

    /// Reads the keyword out of a line that opens one, without its brackets.
    fn read_keyword(&mut self) -> String;

    /// Reads one identifier.
    fn read_word(&mut self) -> String;

    /// Reads one quoted or bare string.
    fn read_text(&mut self) -> String;

    /// Reads one number.
    fn read_number(&mut self) -> f64;

    /// Reads a number at each of the three corners.
    fn read_triple(&mut self) -> TypMinMax;

    /// Reads a voltage and a time at each of the three corners.
    fn read_ramp_point(&mut self) -> RampPoint;

    /// Whether the current line has been consumed.
    fn at_end_of_line(&mut self) -> bool;

    /// Whether this keyword is one the reader passes over.
    ///
    /// The recovered predicate is a function of its own and is not part of
    /// this port; the reader calls it before looking at any keyword and skips
    /// the whole section when it answers yes.
    fn ignores_keyword(&mut self, keyword: &str) -> bool;
}

/// Implements Ghidra function `FUN_01bbc650` at `0x01BBC650`.
///
/// Reads an IBIS file into a library.
///
/// The file is a flat list of lines and the reader keeps no stack: a line
/// that opens a keyword replaces whatever section was current, and every
/// other line belongs to that section. What a continuation line means
/// therefore depends entirely on which keyword last appeared, which is why
/// the same three numbers are a package parasitic under one keyword and a
/// die capacitance under another.
///
/// Sections that describe a component require one to have been declared, and
/// reaching them without one abandons the file rather than skipping the
/// section — the recovered reader raises, so a half-built library is never
/// handed back. The same is true of a file that is not there.
///
/// The comment character is itself settable from inside the file, so the
/// reader cannot decide what is a comment until it has read the line that
/// says so.
///
/// # Errors
///
/// Returns [`IbisError::FileNotFound`] when the path does not exist and
/// [`IbisError::MissingComponent`] when a section that describes a component
/// is reached before one has been declared.
pub fn read_library(source: &mut impl IbisSource, path: &str) -> Result<Library, IbisError> {
    if !source.exists(path) {
        return Err(parse_error(IbisError::FileNotFound(path.to_owned())));
    }

    let mut library = Library::default();
    let mut state = ReaderState::default();
    let line_count = source.open(path);

    for index in 0..line_count {
        source.begin_line(index);

        let Some(first) = source.first_char() else {
            continue;
        };
        if first == state.comment_char {
            continue;
        }

        if first == KEYWORD_OPEN {
            read_keyword_line(source, &mut library, &mut state)?;
        } else {
            read_continuation_line(source, &mut library, &state);
        }
    }

    Ok(library)
}

/// What the reader carries from one line to the next.
#[derive(Debug, Clone, PartialEq, Eq)]
struct ReaderState {
    comment_char: char,
    section: Option<Keyword>,
    component: Option<usize>,
    model: Option<usize>,
    selector: Option<usize>,
}

impl Default for ReaderState {
    fn default() -> Self {
        Self {
            comment_char: DEFAULT_COMMENT_CHAR,
            section: None,
            component: None,
            model: None,
            selector: None,
        }
    }
}

fn read_keyword_line(
    source: &mut impl IbisSource,
    library: &mut Library,
    state: &mut ReaderState,
) -> Result<(), IbisError> {
    let keyword = source.read_keyword().to_uppercase();

    if source.ignores_keyword(&keyword) {
        state.section = None;
        return Ok(());
    }

    let Some(section) = Keyword::classify(&keyword) else {
        state.section = None;
        return Ok(());
    };

    if section.needs_component() && state.component.is_none() {
        return Err(parse_error(IbisError::MissingComponent));
    }

    match &section {
        Keyword::CommentChar => {
            let argument = source.read_word();
            if let Some(character) = comment_char(&argument, COMMENT_CHAR_SUFFIX) {
                state.comment_char = character;
            }
        }
        Keyword::Component => {
            let name = source.read_word();
            state.component = Some(library.add_component(name));
        }
        Keyword::Package => {
            if let Some(component) = state
                .component
                .and_then(|index| library.components.get_mut(index))
            {
                component.package = Some(Package::default());
            }
        }
        Keyword::Model => {
            let name = source.read_word();
            state.model = Some(library.add_model(name));
        }
        Keyword::ModelSelector => {
            let name = source.read_word();
            state.selector = Some(library.add_selector(name));
        }
        Keyword::VoltageRange => {
            let range = source.read_triple();
            if let Some(model) = state.model.and_then(|index| library.models.get_mut(index)) {
                model.voltage_range = Some(range);
            }
        }
        Keyword::Manufacturer | Keyword::Pin | Keyword::Ramp | Keyword::Table(_) => {}
    }

    state.section = Some(section);
    Ok(())
}

fn read_continuation_line(
    source: &mut impl IbisSource,
    library: &mut Library,
    state: &ReaderState,
) {
    let Some(section) = state.section else {
        return;
    };

    match section {
        Keyword::Package => {
            let name = source.read_word();
            let value = source.read_triple();
            if let Some(package) = state
                .component
                .and_then(|index| library.components.get_mut(index))
                .and_then(|component| component.package.as_mut())
            {
                package.parasitics.push(PackageParasitic { name, value });
            }
        }
        Keyword::Pin => {
            let pin = Pin {
                name: source.read_word(),
                signal: source.read_word(),
                model: source.read_word(),
                parasitics: if source.at_end_of_line() {
                    None
                } else {
                    Some(source.read_triple())
                },
            };
            if let Some(component) = state
                .component
                .and_then(|index| library.components.get_mut(index))
            {
                component.pins.push(pin);
            }
        }
        Keyword::Model => read_model_property(source, library, state),
        Keyword::ModelSelector => {
            let name = source.read_word();
            let description = source.read_text();
            if let Some(selector) = state
                .selector
                .and_then(|index| library.selectors.get_mut(index))
            {
                selector.choices.push((name, description));
            }
        }
        Keyword::Ramp => {
            let edge_keyword = source.read_word();
            if let Some(edge) = RampEdge::from_keyword(&edge_keyword) {
                let point = source.read_ramp_point();
                if let Some(model) = state.model.and_then(|index| library.models.get_mut(index)) {
                    model.push_ramp(edge, point);
                }
            }
        }
        Keyword::Table(table) => {
            let point = IvPoint {
                voltage: source.read_number(),
                current: source.read_triple(),
            };
            if let Some(model) = state.model.and_then(|index| library.models.get_mut(index)) {
                model.push_point(table, point);
            }
        }
        Keyword::CommentChar
        | Keyword::Component
        | Keyword::Manufacturer
        | Keyword::VoltageRange => {}
    }
}

/// Reads one `keyword = value` line inside a `[Model]` section.
///
/// Part of Ghidra function `FUN_01bbc650` at `0x01BBC650`.
///
/// The two threshold properties are kept as the text the file gave rather
/// than as numbers, because the recovered reader formats the parsed value
/// back into a string through the application's number format before storing
/// it — so what the model carries is a rendering of the value, not the value.
fn read_model_property(source: &mut impl IbisSource, library: &mut Library, state: &ReaderState) {
    let property = source.read_word();
    let Some(model) = state.model.and_then(|index| library.models.get_mut(index)) else {
        return;
    };

    match property.as_str() {
        "Model_type" => model.model_type = source.read_word(),
        "Polarity" => model.polarity = source.read_word(),
        "C_comp" => model.die_capacitance = Some(source.read_triple()),
        "Vinl" => model.input_low = source.read_text(),
        "Vinh" => model.input_high = source.read_text(),
        _ => {}
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn a_two_word_keyword_accepts_either_separator() {
        for keyword in ["MODEL SELECTOR", "MODEL_SELECTOR"] {
            assert!(keyword_matches_pair(
                keyword,
                "MODEL",
                "SELECTOR",
                KEYWORD_SEPARATORS
            ));
        }

        for keyword in ["MODELSELECTOR", "MODEL-SELECTOR", "MODEL SELECT", "MODEL"] {
            assert!(!keyword_matches_pair(
                keyword,
                "MODEL",
                "SELECTOR",
                KEYWORD_SEPARATORS
            ));
        }
    }

    #[test]
    fn a_two_word_keyword_does_not_match_a_longer_one() {
        assert!(!keyword_matches_pair(
            "MODEL SELECTOR EXTRA",
            "MODEL",
            "SELECTOR",
            KEYWORD_SEPARATORS
        ));
    }

    #[test]
    fn the_four_tables_keep_their_recovered_indices() {
        assert_eq!(IvTable::PowerClamp.index(), 0);
        assert_eq!(IvTable::GroundClamp.index(), 1);
        assert_eq!(IvTable::Pullup.index(), 2);
        assert_eq!(IvTable::Pulldown.index(), 3);

        for table in IvTable::ALL {
            assert_eq!(IvTable::from_index(table.index()), Some(table));
        }
        assert_eq!(IvTable::from_index(4), None);
    }

    #[test]
    fn the_clamp_keywords_take_either_separator_and_the_drivers_are_one_word() {
        assert_eq!(
            iv_table_for_keyword("POWER CLAMP"),
            Some(IvTable::PowerClamp)
        );
        assert_eq!(
            iv_table_for_keyword("POWER_Clamp"),
            Some(IvTable::PowerClamp)
        );
        assert_eq!(
            iv_table_for_keyword("GND Clamp"),
            Some(IvTable::GroundClamp)
        );
        assert_eq!(iv_table_for_keyword("Pullup"), Some(IvTable::Pullup));
        assert_eq!(iv_table_for_keyword("PULLDOWN"), Some(IvTable::Pulldown));
    }

    #[test]
    fn the_table_keywords_ignore_the_files_own_casing() {
        assert_eq!(iv_table_for_keyword("pullup"), Some(IvTable::Pullup));
        assert_eq!(
            iv_table_for_keyword("power clamp"),
            Some(IvTable::PowerClamp)
        );
    }

    #[test]
    fn anything_else_is_not_a_table() {
        for keyword in ["MODEL", "RAMP", "PULL", "CLAMP", ""] {
            assert_eq!(iv_table_for_keyword(keyword), None);
        }
    }

    #[test]
    fn the_section_keywords_are_recognised() {
        assert_eq!(Keyword::classify("COMPONENT"), Some(Keyword::Component));
        assert_eq!(
            Keyword::classify("MANUFACTURER"),
            Some(Keyword::Manufacturer)
        );
        assert_eq!(Keyword::classify("PACKAGE"), Some(Keyword::Package));
        assert_eq!(Keyword::classify("PIN"), Some(Keyword::Pin));
        assert_eq!(Keyword::classify("MODEL"), Some(Keyword::Model));
        assert_eq!(Keyword::classify("RAMP"), Some(Keyword::Ramp));
        assert_eq!(
            Keyword::classify("COMMENT CHAR"),
            Some(Keyword::CommentChar)
        );
        assert_eq!(
            Keyword::classify("VOLTAGE_RANGE"),
            Some(Keyword::VoltageRange)
        );
        assert_eq!(
            Keyword::classify("MODEL SELECTOR"),
            Some(Keyword::ModelSelector)
        );
        assert_eq!(
            Keyword::classify("GND CLAMP"),
            Some(Keyword::Table(IvTable::GroundClamp))
        );
        assert_eq!(Keyword::classify("NOT A KEYWORD"), None);
    }

    #[test]
    fn the_one_word_model_keyword_is_not_the_two_word_one() {
        assert_eq!(Keyword::classify("MODEL"), Some(Keyword::Model));
        assert_eq!(
            Keyword::classify("MODEL_SELECTOR"),
            Some(Keyword::ModelSelector)
        );
    }

    #[test]
    fn the_sections_that_describe_a_component_are_the_ones_that_need_one() {
        for keyword in [
            Keyword::Manufacturer,
            Keyword::Package,
            Keyword::Pin,
            Keyword::Model,
            Keyword::ModelSelector,
            Keyword::VoltageRange,
        ] {
            assert!(keyword.needs_component());
        }

        // The keyword that declares one cannot require one, and the keyword
        // that changes how the file is read describes nothing in it.
        assert!(!Keyword::Component.needs_component());
        assert!(!Keyword::CommentChar.needs_component());
        assert!(!Keyword::Ramp.needs_component());
        assert!(!Keyword::Table(IvTable::Pullup).needs_component());
    }

    #[test]
    fn the_comment_character_is_whatever_precedes_the_suffix() {
        assert_eq!(comment_char("|_char", COMMENT_CHAR_SUFFIX), Some('|'));
        assert_eq!(comment_char("#_char", COMMENT_CHAR_SUFFIX), Some('#'));
    }

    #[test]
    fn an_argument_without_the_suffix_is_taken_whole() {
        assert_eq!(comment_char("|", COMMENT_CHAR_SUFFIX), Some('|'));
        assert_eq!(comment_char("", COMMENT_CHAR_SUFFIX), None);
        assert_eq!(comment_char("_char", COMMENT_CHAR_SUFFIX), None);
    }

    #[test]
    fn the_ramp_sub_keywords_name_their_edges() {
        assert_eq!(RampEdge::from_keyword("dV/dt_r"), Some(RampEdge::Rising));
        assert_eq!(RampEdge::from_keyword("dV/dt_f"), Some(RampEdge::Falling));
        assert_eq!(RampEdge::from_keyword("dV/dt"), None);
    }

    #[test]
    fn a_component_can_be_found_by_the_name_it_was_added_under() {
        let mut library = Library::default();
        library.add_component("74LVC244");
        library.add_component("74LVC245");

        assert_eq!(
            library.find_component("74LVC245").map(|c| c.name.as_str()),
            Some("74LVC245")
        );
        assert!(library.find_component("74LVC240").is_none());
    }

    #[test]
    fn finding_a_component_is_case_sensitive() {
        let mut library = Library::default();
        library.add_component("74LVC244");

        assert!(library.find_component("74lvc244").is_none());
    }

    #[test]
    fn a_duplicate_component_is_kept_and_the_first_is_found() {
        let mut library = Library::default();
        let first = library.add_component("PART");
        let second = library.add_component("PART");

        assert_ne!(first, second);
        assert_eq!(library.components.len(), 2);
        assert_eq!(
            library.find_component("PART").map(std::ptr::from_ref),
            Some(std::ptr::from_ref(&library.components[0]))
        );
    }

    #[test]
    fn an_empty_library_finds_nothing() {
        assert!(Library::default().find_component("PART").is_none());
    }

    #[test]
    fn a_model_keeps_each_table_apart() {
        let mut model = Model::new("BUF");
        model.push_point(
            IvTable::Pullup,
            IvPoint {
                voltage: 1.8,
                current: TypMinMax::new(0.02, 0.015, 0.025),
            },
        );

        assert_eq!(model.table(IvTable::Pullup).len(), 1);
        assert!(model.table(IvTable::Pulldown).is_empty());
        assert!(model.table(IvTable::PowerClamp).is_empty());
        assert!(model.table(IvTable::GroundClamp).is_empty());
    }

    #[test]
    fn the_two_ramps_are_kept_apart() {
        let mut model = Model::new("BUF");
        model.push_ramp(RampEdge::Rising, RampPoint::default());

        assert_eq!(model.rising_ramp.len(), 1);
        assert!(model.falling_ramp.is_empty());
    }

    #[test]
    fn the_recovered_failures_report_the_recovered_text() {
        assert_eq!(
            parse_error(IbisError::FileNotFound("part.ibs".to_owned())).to_string(),
            "File not found: part.ibs"
        );
        assert_eq!(
            parse_error(IbisError::MissingComponent).to_string(),
            "Missing component"
        );
        assert_eq!(parse_error(IbisError::UnknownTable).to_string(), "GetClamp");
    }
}

#[cfg(test)]
mod reader_tests {
    use super::*;

    /// A tokenizer over an in-memory file, standing in for the application's
    /// shared text parser that the recovered reader borrows.
    #[derive(Debug, Default)]
    struct Text {
        lines: Vec<String>,
        tokens: Vec<String>,
        cursor: usize,
        missing: bool,
        ignored: Vec<String>,
    }

    impl Text {
        fn new(body: &str) -> Self {
            Self {
                lines: body.lines().map(str::to_owned).collect(),
                ..Self::default()
            }
        }

        fn next(&mut self) -> String {
            let token = self.tokens.get(self.cursor).cloned().unwrap_or_default();
            self.cursor += 1;
            token
        }

        fn next_number(&mut self) -> f64 {
            self.next().parse().unwrap_or_default()
        }
    }

    impl IbisSource for Text {
        fn exists(&mut self, _path: &str) -> bool {
            !self.missing
        }

        fn open(&mut self, _path: &str) -> usize {
            self.lines.len()
        }

        fn begin_line(&mut self, index: usize) {
            self.tokens = self.lines[index]
                .split_whitespace()
                .map(str::to_owned)
                .collect();
            self.cursor = 0;
        }

        fn first_char(&mut self) -> Option<char> {
            self.tokens.first().and_then(|token| token.chars().next())
        }

        fn read_keyword(&mut self) -> String {
            let mut keyword = String::new();
            loop {
                let token = self.next();
                if token.is_empty() {
                    break;
                }
                let closed = token.ends_with(']');
                let trimmed = token.trim_start_matches('[').trim_end_matches(']');
                if !keyword.is_empty() {
                    keyword.push(' ');
                }
                keyword.push_str(trimmed);
                if closed {
                    break;
                }
            }
            keyword
        }

        fn read_word(&mut self) -> String {
            self.next()
        }

        fn read_text(&mut self) -> String {
            self.next()
        }

        fn read_number(&mut self) -> f64 {
            self.next_number()
        }

        fn read_triple(&mut self) -> TypMinMax {
            TypMinMax::new(self.next_number(), self.next_number(), self.next_number())
        }

        fn read_ramp_point(&mut self) -> RampPoint {
            RampPoint {
                voltage: self.read_triple(),
                time: self.read_triple(),
            }
        }

        fn at_end_of_line(&mut self) -> bool {
            self.cursor >= self.tokens.len()
        }

        fn ignores_keyword(&mut self, keyword: &str) -> bool {
            self.ignored.iter().any(|ignored| ignored == keyword)
        }
    }

    const PART: &str = "\
[Component] 74LVC244
[Manufacturer] Example
[Package]
R_pkg 0.1 0.08 0.12
L_pkg 3e-9 2e-9 4e-9
[Pin]
1 A1 IN_MODEL
2 A2 OUT_MODEL 0.1 0.08 0.12
[Model] OUT_MODEL
Model_type Output
Polarity Non-Inverting
C_comp 5e-12 4e-12 6e-12
[Voltage Range] 3.3 3.0 3.6
[Pullup]
-1.0 -0.02 -0.018 -0.022
0.0 0.0 0.0 0.0
[GND Clamp]
-1.0 -0.05 -0.04 -0.06
[Ramp]
dV/dt_r 1.65 1.5 1.8 1e-9 0.8e-9 1.2e-9
dV/dt_f 1.65 1.5 1.8 1e-9 0.8e-9 1.2e-9
";

    #[test]
    fn a_missing_file_reports_its_path_and_builds_nothing() {
        let mut source = Text {
            missing: true,
            ..Text::new("")
        };

        assert_eq!(
            read_library(&mut source, "nowhere.ibs"),
            Err(IbisError::FileNotFound("nowhere.ibs".to_owned()))
        );
    }

    #[test]
    fn a_whole_part_reads_into_one_component_and_one_model() {
        let mut source = Text::new(PART);
        let library = read_library(&mut source, "part.ibs").expect("the file reads");

        assert_eq!(library.components.len(), 1);
        assert_eq!(library.models.len(), 1);
        assert_eq!(library.components[0].name, "74LVC244");
    }

    #[test]
    fn the_package_parasitics_land_under_the_component() {
        let mut source = Text::new(PART);
        let library = read_library(&mut source, "part.ibs").expect("the file reads");

        let package = library.components[0]
            .package
            .as_ref()
            .expect("the package was declared");
        assert_eq!(package.parasitics.len(), 2);
        assert_eq!(package.parasitics[0].name, "R_pkg");
        assert_eq!(package.parasitics[0].value, TypMinMax::new(0.1, 0.08, 0.12));
    }

    #[test]
    fn the_short_and_long_pin_forms_both_read() {
        let mut source = Text::new(PART);
        let library = read_library(&mut source, "part.ibs").expect("the file reads");

        let pins = &library.components[0].pins;
        assert_eq!(pins.len(), 2);
        assert_eq!(pins[0].name, "1");
        assert_eq!(pins[0].signal, "A1");
        assert_eq!(pins[0].model, "IN_MODEL");
        assert_eq!(pins[0].parasitics, None);
        assert_eq!(pins[1].parasitics, Some(TypMinMax::new(0.1, 0.08, 0.12)));
    }

    #[test]
    fn the_model_properties_read_into_the_current_model() {
        let mut source = Text::new(PART);
        let library = read_library(&mut source, "part.ibs").expect("the file reads");

        let model = &library.models[0];
        assert_eq!(model.name, "OUT_MODEL");
        assert_eq!(model.model_type, "Output");
        assert_eq!(model.polarity, "Non-Inverting");
        assert_eq!(
            model.die_capacitance,
            Some(TypMinMax::new(5e-12, 4e-12, 6e-12))
        );
        assert_eq!(model.voltage_range, Some(TypMinMax::new(3.3, 3.0, 3.6)));
    }

    #[test]
    fn each_table_keeps_the_points_that_followed_its_own_keyword() {
        let mut source = Text::new(PART);
        let library = read_library(&mut source, "part.ibs").expect("the file reads");

        let model = &library.models[0];
        assert_eq!(model.table(IvTable::Pullup).len(), 2);
        assert_eq!(model.table(IvTable::GroundClamp).len(), 1);
        assert!(model.table(IvTable::Pulldown).is_empty());
        assert!(model.table(IvTable::PowerClamp).is_empty());

        assert!((model.table(IvTable::Pullup)[0].voltage + 1.0).abs() <= f64::EPSILON);
        assert_eq!(
            model.table(IvTable::Pullup)[0].current,
            TypMinMax::new(-0.02, -0.018, -0.022)
        );
    }

    #[test]
    fn the_two_ramp_edges_read_separately() {
        let mut source = Text::new(PART);
        let library = read_library(&mut source, "part.ibs").expect("the file reads");

        let model = &library.models[0];
        assert_eq!(model.rising_ramp.len(), 1);
        assert_eq!(model.falling_ramp.len(), 1);
        assert_eq!(model.rising_ramp[0].voltage, TypMinMax::new(1.65, 1.5, 1.8));
    }

    #[test]
    fn a_component_section_before_any_component_abandons_the_file() {
        let mut source = Text::new("[Model] ORPHAN\n");

        assert_eq!(
            read_library(&mut source, "part.ibs"),
            Err(IbisError::MissingComponent)
        );
    }

    #[test]
    fn a_comment_char_line_needs_no_component() {
        let mut source = Text::new("[Comment Char] #_char\n[Component] PART\n");
        let library = read_library(&mut source, "part.ibs").expect("the file reads");

        assert_eq!(library.components.len(), 1);
    }

    #[test]
    fn the_file_can_change_the_character_that_hides_a_line() {
        let mut source = Text::new(
            "[Comment Char] #_char\n\
             # [Component] HIDDEN\n\
             | [Component] NOT_HIDDEN_ANY_MORE\n",
        );
        let library = read_library(&mut source, "part.ibs").expect("the file reads");

        // The default character stops hiding anything once the file has
        // renamed it, so the second line is read as an ordinary one.
        assert_eq!(library.components.len(), 0);
    }

    #[test]
    fn the_default_comment_character_hides_a_line_before_any_is_set() {
        let mut source = Text::new("| [Component] HIDDEN\n[Component] REAL\n");
        let library = read_library(&mut source, "part.ibs").expect("the file reads");

        assert_eq!(library.components.len(), 1);
        assert_eq!(library.components[0].name, "REAL");
    }

    #[test]
    fn an_ignored_keyword_takes_its_whole_section_with_it() {
        let mut source = Text {
            ignored: vec!["PIN".to_owned()],
            ..Text::new("[Component] PART\n[Pin]\n1 A1 IN_MODEL\n")
        };
        let library = read_library(&mut source, "part.ibs").expect("the file reads");

        assert!(library.components[0].pins.is_empty());
    }

    #[test]
    fn an_unrecognised_keyword_ends_the_previous_section_rather_than_extending_it() {
        let mut source = Text::new(
            "[Component] PART\n\
             [Pin]\n\
             1 A1 IN_MODEL\n\
             [Something Else]\n\
             2 A2 OUT_MODEL\n",
        );
        let library = read_library(&mut source, "part.ibs").expect("the file reads");

        assert_eq!(library.components[0].pins.len(), 1);
    }

    #[test]
    fn a_second_component_takes_over_from_the_first() {
        let mut source = Text::new(
            "[Component] FIRST\n\
             [Pin]\n\
             1 A1 M\n\
             [Component] SECOND\n\
             [Pin]\n\
             2 A2 M\n",
        );
        let library = read_library(&mut source, "part.ibs").expect("the file reads");

        assert_eq!(library.components.len(), 2);
        assert_eq!(library.components[0].pins.len(), 1);
        assert_eq!(library.components[1].pins.len(), 1);
        assert_eq!(library.components[1].pins[0].name, "2");
    }

    #[test]
    fn a_model_selector_collects_its_choices() {
        let mut source = Text::new(
            "[Component] PART\n\
             [Model Selector] DRIVE\n\
             FAST fast-edge\n\
             SLOW slow-edge\n",
        );
        let library = read_library(&mut source, "part.ibs").expect("the file reads");

        assert_eq!(library.selectors.len(), 1);
        assert_eq!(library.selectors[0].name, "DRIVE");
        assert_eq!(
            library.selectors[0].choices,
            [
                ("FAST".to_owned(), "fast-edge".to_owned()),
                ("SLOW".to_owned(), "slow-edge".to_owned()),
            ]
        );
    }

    #[test]
    fn an_empty_file_reads_into_an_empty_library() {
        let mut source = Text::new("");

        assert_eq!(
            read_library(&mut source, "part.ibs"),
            Ok(Library::default())
        );
    }

    #[test]
    fn a_continuation_line_before_any_keyword_is_dropped() {
        let mut source = Text::new("1 A1 IN_MODEL\n[Component] PART\n");
        let library = read_library(&mut source, "part.ibs").expect("the file reads");

        assert_eq!(library.components.len(), 1);
        assert!(library.components[0].pins.is_empty());
    }

    #[test]
    fn an_unknown_model_property_is_passed_over() {
        let mut source = Text::new(
            "[Component] PART\n\
             [Model] M\n\
             Vmeas 1.5\n\
             Model_type Output\n",
        );
        let library = read_library(&mut source, "part.ibs").expect("the file reads");

        assert_eq!(library.models[0].model_type, "Output");
    }
}
