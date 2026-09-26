//! Where a part's pins are, read from the installed symbol libraries.
//!
//! The catalogue says which symbol a part uses - a device in one of the
//! named `.DDB` files, or one in `DEVICES.DDB` named by number - and
//! [`crate::ddb_device`] says where that device's pins sit. This joins the
//! two, so that placing a part on the sheet can give it its pins.
//!
//! A library is read the first time something in it is asked for and kept
//! after that. Reading one is not cheap - `DEVICES.DDB` is twenty-eight
//! megabytes - and a circuit uses the same few libraries over and over, so
//! the first part of a kind pays for it and the rest do not.
//!
//! Nothing here fails loudly. An installation that is not there, a library
//! that is missing, a symbol the catalogue names but the library does not
//! carry: each gives a part with no pins, which joins a net at its own
//! place exactly as parts did before any of this. A missing library must
//! not stop a circuit being drawn.

use std::collections::BTreeMap;
use std::path::{Path, PathBuf};

use crate::ddb_device::{self, Figure, Place};
use crate::device_catalogue::Symbol;
use crate::obss::Container;
use crate::schematic_document::{Pin, Point};

/// What the library holding the numbered devices is called.
pub const DEFAULT_LIBRARY: &str = "DEVICES";

/// The geometry and electrical terminals of one installed symbol.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SymbolDrawing {
    pub figures: Vec<Figure>,
    pub pins: Vec<Pin>,
}

/// The pins of every symbol, read as they are wanted.
#[derive(Debug, Default, Clone)]
pub struct SymbolLibrary {
    /// Where the original is installed, if anywhere.
    installation: Option<PathBuf>,
    /// One table per library file read so far, by the name the catalogue
    /// uses for it, lowercased.
    read: BTreeMap<String, BTreeMap<String, SymbolDrawing>>,
}

impl SymbolLibrary {
    /// A library over an installation.
    #[must_use]
    pub const fn at(installation: Option<PathBuf>) -> Self {
        Self {
            installation,
            read: BTreeMap::new(),
        }
    }

    /// The pins of a symbol, reading its library if that has not happened.
    ///
    /// Empty for a symbol the original draws itself, one whose pinout the
    /// catalogue never resolved, or anything that cannot be found.
    pub fn pins_of(&mut self, symbol: &Symbol) -> Vec<Pin> {
        self.drawing_of(symbol)
            .map_or_else(Vec::new, |drawing| drawing.pins)
    }

    /// The complete drawing of a symbol, reading its library if necessary.
    pub fn drawing_of(&mut self, symbol: &Symbol) -> Option<SymbolDrawing> {
        let (library, device) = match symbol {
            Symbol::Stored { library, device } => (library.clone(), device.clone()),
            Symbol::Default(device) => (DEFAULT_LIBRARY.to_owned(), device.clone()),
            // One the original draws itself, and one the catalogue gave up
            // on. Neither is in a library to be looked up.
            Symbol::Drawn(_) | Symbol::Unresolved => return None,
        };

        self.table(&library).get(&device).cloned()
    }

    /// A drawing that has already been loaded, without file-system work.
    #[must_use]
    pub fn cached_drawing_of(&self, symbol: &Symbol) -> Option<&SymbolDrawing> {
        let (library, device) = match symbol {
            Symbol::Stored { library, device } => (library.as_str(), device.as_str()),
            Symbol::Default(device) => (DEFAULT_LIBRARY, device.as_str()),
            Symbol::Drawn(_) | Symbol::Unresolved => return None,
        };
        self.read
            .get(&library.to_ascii_lowercase())
            .and_then(|table| table.get(device))
    }

    /// Whether a library has been read already.
    #[must_use]
    pub fn has_read(&self, library: &str) -> bool {
        self.read.contains_key(&library.to_ascii_lowercase())
    }

    /// The table for one library, reading it the first time it is wanted.
    fn table(&mut self, library: &str) -> &BTreeMap<String, SymbolDrawing> {
        let key = library.to_ascii_lowercase();
        if !self.read.contains_key(&key) {
            let table = self
                .installation
                .as_deref()
                .and_then(|at| file_for(at, library))
                .map(|file| read_drawings(&file))
                .unwrap_or_default();
            self.read.insert(key.clone(), table);
        }
        &self.read[&key]
    }
}

/// The file a library goes by, whatever case the catalogue wrote it in.
///
/// The installed files disagree with each other - `TEXAS.DDB` beside
/// `Infineon.ddb` - and the catalogue disagrees with both, so the stem is
/// matched without case rather than a name being guessed.
#[must_use]
pub fn file_for(installation: &Path, library: &str) -> Option<PathBuf> {
    let entries = std::fs::read_dir(installation).ok()?;
    for entry in entries.flatten() {
        let path = entry.path();
        if !path
            .extension()
            .is_some_and(|it| it.eq_ignore_ascii_case("ddb"))
        {
            continue;
        }
        let stem = path.file_stem()?.to_string_lossy().to_string();
        if stem.eq_ignore_ascii_case(library) {
            return Some(path);
        }
    }
    None
}

/// Every device in one library, and where its pins are.
#[must_use]
pub fn read_pins(file: &Path) -> BTreeMap<String, Vec<Pin>> {
    read_drawings(file)
        .into_iter()
        .map(|(name, drawing)| (name, drawing.pins))
        .collect()
}

/// Every device in one library, including all drawable primitives.
#[must_use]
pub fn read_drawings(file: &Path) -> BTreeMap<String, SymbolDrawing> {
    let Ok(opened) = std::fs::File::open(file) else {
        return BTreeMap::new();
    };
    let Ok(mut container) = Container::open(std::io::BufReader::new(opened)) else {
        return BTreeMap::new();
    };
    let Ok(devices) = ddb_device::read_all(&mut container) else {
        return BTreeMap::new();
    };

    let mut table = BTreeMap::new();
    for device in devices {
        // A device draws itself once per way round it sits - four elements
        // for a part that turns - and the sheet turns the symbol itself.
        // So the pins come from the first element only; taking them from
        // all of them would give a two-terminal part eight pins.
        let figures = device
            .elements
            .first()
            .map_or_else(Vec::new, crate::ddb_device::Element::figures);
        let pins = figures
            .iter()
            .filter_map(|figure| match figure {
                Figure::Pin { name, at, facing } => {
                    Some(Pin::new(name.clone(), as_offset(*at)).facing(*facing))
                }
                _ => None,
            })
            .collect();
        // The same name may appear more than once; the first wins.
        table
            .entry(device.name)
            .or_insert(SymbolDrawing { figures, pins });
    }
    table
}

/// A pin's place in the device's units, as an offset in grid squares.
fn as_offset(at: Place) -> Point {
    let (x, y) = at.in_squares();
    Point::new(i32::from(x), i32::from(y))
}

#[cfg(test)]
mod tests {
    use super::{DEFAULT_LIBRARY, SymbolLibrary, file_for, read_drawings, read_pins};
    use crate::device_catalogue::Symbol;

    fn installed() -> Option<std::path::PathBuf> {
        std::env::var_os("TIARA_TINA_HOME").map(std::path::PathBuf::from)
    }

    #[test]
    fn without_an_installation_nothing_has_pins_and_nothing_breaks() {
        let mut library = SymbolLibrary::at(None);
        assert!(
            library
                .pins_of(&Symbol::Default("10".to_owned()))
                .is_empty()
        );
        assert!(
            library
                .drawing_of(&Symbol::Default("10".to_owned()))
                .is_none()
        );
        assert!(
            library
                .pins_of(&Symbol::Stored {
                    library: "DAC".to_owned(),
                    device: "DAC8411".to_owned(),
                })
                .is_empty()
        );
    }

    #[test]
    fn a_symbol_the_original_draws_itself_is_never_looked_up() {
        let mut library = SymbolLibrary::at(installed());
        assert!(
            library
                .pins_of(&Symbol::Drawn("<AutoShape>".to_owned()))
                .is_empty()
        );
        // And nothing was read to find that out.
        assert!(!library.has_read(DEFAULT_LIBRARY));
    }

    #[test]
    fn a_library_is_read_once_and_kept() {
        let Some(installation) = installed() else {
            return;
        };
        let mut library = SymbolLibrary::at(Some(installation));
        assert!(!library.has_read(DEFAULT_LIBRARY));

        let first = library.pins_of(&Symbol::Default("10".to_owned()));
        assert!(library.has_read(DEFAULT_LIBRARY));
        let again = library.pins_of(&Symbol::Default("10".to_owned()));
        assert_eq!(first, again);
    }

    #[test]
    fn a_two_terminal_part_has_two_pins_five_squares_apart() {
        let Some(installation) = installed() else {
            return;
        };
        let mut library = SymbolLibrary::at(Some(installation));
        // Device 10 of DEVICES.DDB is a two-terminal part whose pins sit
        // at (0, 0) and (40, 0) in its own units - five squares.
        let pins = library.pins_of(&Symbol::Default("10".to_owned()));
        assert_eq!(pins.len(), 2);
        let across = (pins[0].offset.x - pins[1].offset.x).abs();
        let down = (pins[0].offset.y - pins[1].offset.y).abs();
        assert_eq!(across.max(down), 5);
        assert_eq!(across.min(down), 0);
    }

    #[test]
    fn a_library_is_found_whatever_case_its_name_is_written_in() {
        let Some(installation) = installed() else {
            return;
        };
        // The catalogue writes `TinaICs`, the file is `TINAICS.DDB`.
        let found = file_for(&installation, "tinaics");
        assert!(found.is_some());
        assert_eq!(found, file_for(&installation, "TINAICS"));
        assert_eq!(file_for(&installation, "no such library"), None);
    }

    #[test]
    fn a_named_library_gives_a_chip_its_pins() {
        let Some(installation) = installed() else {
            return;
        };
        let mut library = SymbolLibrary::at(Some(installation));
        // DAC8411 is in `dac.ddb`, and the catalogue would name that
        // library `dac` whatever case the file uses.
        let pins = library.pins_of(&Symbol::Stored {
            library: "DAC".to_owned(),
            device: "DAC8411".to_owned(),
        });
        assert!(!pins.is_empty(), "DAC8411 should carry pins");
        let names: Vec<&str> = pins.iter().map(|pin| pin.name.as_str()).collect();
        assert!(pins.iter().any(|pin| pin.name == "D0"), "{names:?}");
    }

    #[test]
    fn a_device_the_library_does_not_carry_has_no_pins() {
        let Some(installation) = installed() else {
            return;
        };
        let mut library = SymbolLibrary::at(Some(installation));
        assert!(
            library
                .pins_of(&Symbol::Default("no such device".to_owned()))
                .is_empty()
        );
    }

    #[test]
    fn every_device_in_the_default_library_reads_its_pins() {
        let Some(installation) = installed() else {
            return;
        };
        let Some(file) = file_for(&installation, DEFAULT_LIBRARY) else {
            return;
        };
        let table = read_pins(&file);
        assert!(table.len() > 200, "only {} devices", table.len());
        // Most of them have pins; the ones that do not are the pieces of
        // drawing that carry none.
        let with_pins = table.values().filter(|pins| !pins.is_empty()).count();
        assert!(with_pins * 2 > table.len(), "only {with_pins} carry pins");
    }

    #[test]
    fn installed_symbols_keep_non_pin_geometry() {
        let Some(installation) = installed() else {
            return;
        };
        let Some(file) = file_for(&installation, DEFAULT_LIBRARY) else {
            return;
        };
        let drawings = read_drawings(&file);
        let drawing = drawings.get("10").expect("device 10");

        assert!(!drawing.pins.is_empty());
        assert!(
            drawing
                .figures
                .iter()
                .any(|figure| !matches!(figure, crate::ddb_device::Figure::Pin { .. }))
        );
    }
}
