//! What the component bar holds.
//!
//! The bar's fifteen tabs and every button on them are in a plain text file
//! the installation ships, `compregy.tcr`, which the recovered Edit
//! Component Bar writes back. It reads like this:
//!
//! ```text
//! ; TINA Component Registry V2.0
//! %infineon.tcr
//! [!id_group_basic]:{basic}
//! id_component_ground,2,TGnd,AnaComps.dll,0,basic/ground
//! id_component_resistor,9,TResistor,AnaComps.dll,2,basic/resistor
//! [!id_group_spice_macros]:{manufacturers_models}
//! id_component_operational_amplifiers,-1100,TSpiceMacroCompHandler,[OpAmp],119,…
//! ```
//!
//! A line beginning with `%` names another registry to read in, one
//! beginning with `[` starts a group, and everything else is a button. The
//! marker after the bracket says whether the group is shown: `!` for the
//! ones on the bar, `$` for one that is not.
//!
//! A button's fourth field is either the library that draws it or a
//! bracketed category - the same categories [`crate::device_catalogue`]
//! reads - which is how a button stands for a whole family of parts rather
//! than one.
//!
//! Nothing here is committed. The registry is read from the installation at
//! run time, and the tests read files they write themselves.

use std::collections::BTreeSet;
use std::path::{Path, PathBuf};

/// What the registry is called in the installation.
pub const REGISTRY_FILE: &str = "compregy.tcr";

/// What a line that reads in another registry starts with.
const INCLUDE_MARKER: char = '%';

/// What a line that starts a group starts with.
const GROUP_OPEN: char = '[';

/// The marker that says a group is shown on the bar.
const SHOWN_MARKER: char = '!';

/// What a comment starts with.
const COMMENT_MARKER: char = ';';

/// Where a button's parts come from.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Source {
    /// The library that draws it, such as `AnaComps.dll`.
    Library(String),
    /// A whole category of the catalogue, in brackets, such as `[OpAmp]`.
    Category(String),
}

/// One button on the bar.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Entry {
    /// What the registry calls it, such as `id_component_resistor`.
    pub id: String,
    /// The number the original knows the component by. Some are negative.
    pub code: i32,
    /// The class that handles it, such as `TResistor`.
    pub handler: String,
    /// Where its parts come from.
    pub source: Source,
    /// Which icon it draws.
    pub icon: u32,
    /// Where that icon lives, such as `basic/resistor`.
    pub icon_path: String,
}

impl Entry {
    /// What the button is called, in words.
    ///
    /// The registry holds no caption - the original looks one up - so the
    /// name comes from the end of the icon path, which is the same word,
    /// and from the id where there is no path.
    #[must_use]
    pub fn caption(&self) -> String {
        let stem = self
            .icon_path
            .rsplit('/')
            .next()
            .filter(|last| !last.is_empty())
            .unwrap_or_else(|| self.id.trim_start_matches("id_component_"));
        in_words(stem)
    }
}

/// One tab of the bar.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Group {
    /// What the registry calls it, such as `id_group_basic`.
    pub id: String,
    /// Whether the bar shows it.
    pub shown: bool,
    /// Where its own icon lives, where it names one.
    pub icon_path: Option<String>,
    /// The buttons on it, in the order the bar draws them.
    pub entries: Vec<Entry>,
}

impl Group {
    /// What the tab is called, from its id.
    ///
    /// The bar's own captions are looked up by the original and are not in
    /// the file, so this is the id in words - which is right for most of
    /// them and close for the rest.
    #[must_use]
    pub fn caption(&self) -> String {
        in_words(self.id.trim_start_matches("id_group_"))
    }
}

/// The whole bar.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct Registry {
    groups: Vec<Group>,
}

impl Registry {
    /// Reads a registry, and every registry it reads in.
    ///
    /// A file that cannot be read gives nothing rather than failing: a bar
    /// with no buttons is what an installation that is not there looks
    /// like.
    #[must_use]
    pub fn read(path: &Path) -> Self {
        let mut groups = Vec::new();
        let mut seen = BTreeSet::new();
        read_into(path, &mut groups, &mut seen);
        Self { groups }
    }

    /// A registry made of groups already read, which is what a test uses.
    #[must_use]
    pub const fn holding(groups: Vec<Group>) -> Self {
        Self { groups }
    }

    /// Whether anything was found.
    #[must_use]
    pub fn is_loaded(&self) -> bool {
        !self.groups.is_empty()
    }

    /// Every group, shown or not.
    #[must_use]
    pub fn groups(&self) -> &[Group] {
        &self.groups
    }

    /// The tabs the bar shows, in order.
    #[must_use]
    pub fn tabs(&self) -> Vec<&Group> {
        self.groups.iter().filter(|group| group.shown).collect()
    }

    /// How many buttons there are altogether.
    #[must_use]
    pub fn buttons(&self) -> usize {
        self.groups.iter().map(|group| group.entries.len()).sum()
    }
}

/// The registry inside an installation.
#[must_use]
pub fn file_in(installation: &Path) -> PathBuf {
    installation.join(REGISTRY_FILE)
}

/// Reads one file into the groups, following what it reads in.
///
/// A file already read is not read again, so a registry that names itself -
/// directly or round a circle - stops rather than going on for ever.
fn read_into(path: &Path, groups: &mut Vec<Group>, seen: &mut BTreeSet<PathBuf>) {
    let full = path.canonicalize().unwrap_or_else(|_| path.to_path_buf());
    if !seen.insert(full) {
        return;
    }
    let Ok(bytes) = std::fs::read(path) else {
        return;
    };
    // The installed file is single-byte text, and Latin-1 cannot fail.
    let text: String = bytes.iter().map(|byte| char::from(*byte)).collect();

    for line in text.lines() {
        let line = line.trim();
        if line.is_empty() || line.starts_with(COMMENT_MARKER) {
            continue;
        }
        if let Some(named) = line.strip_prefix(INCLUDE_MARKER) {
            let beside = path
                .parent()
                .unwrap_or_else(|| Path::new("."))
                .join(named.trim());
            read_into(&beside, groups, seen);
            continue;
        }
        if line.starts_with(GROUP_OPEN) {
            if let Some(group) = read_group(line) {
                groups.push(group);
            }
            continue;
        }
        if let Some(entry) = read_entry(line)
            && let Some(group) = groups.last_mut()
        {
            group.entries.push(entry);
        }
    }
}

/// One group header.
fn read_group(line: &str) -> Option<Group> {
    let closed = line.find(']')?;
    let inside = line.get(1..closed)?;
    let marker = inside.chars().next()?;
    let id = inside.get(1..)?.trim().to_owned();
    if id.is_empty() {
        return None;
    }

    let icon_path = line
        .get(closed + 1..)
        .and_then(|rest| rest.split_once('{'))
        .and_then(|(_, rest)| rest.split_once('}'))
        .map(|(inside, _)| inside.to_owned());

    Some(Group {
        id,
        shown: marker == SHOWN_MARKER,
        icon_path,
        entries: Vec::new(),
    })
}

/// One button.
fn read_entry(line: &str) -> Option<Entry> {
    let fields: Vec<&str> = line.split(',').map(str::trim).collect();
    // Six fields, or five where the button names no icon path.
    if fields.len() < 5 {
        return None;
    }
    let id = fields[0].to_owned();
    if id.is_empty() {
        return None;
    }
    let code = fields[1].parse().ok()?;
    let handler = fields[2].to_owned();
    let fourth = fields[3];
    let source = if fourth.starts_with('[') && fourth.ends_with(']') {
        Source::Category(fourth.to_owned())
    } else {
        Source::Library(fourth.to_owned())
    };
    let icon = fields[4].parse().unwrap_or_default();
    let icon_path = fields.get(5).copied().unwrap_or_default().to_owned();

    Some(Entry {
        id,
        code,
        handler,
        source,
        icon,
        icon_path,
    })
}

/// An identifier as words: underscores become spaces and each word is
/// capitalised.
fn in_words(id: &str) -> String {
    let mut out = String::with_capacity(id.len());
    let mut starting = true;
    for letter in id.chars() {
        if letter == '_' {
            out.push(' ');
            starting = true;
            continue;
        }
        if starting {
            out.extend(letter.to_uppercase());
            starting = false;
        } else {
            out.push(letter);
        }
    }
    out
}

#[cfg(test)]
mod tests {
    use super::{Entry, Group, REGISTRY_FILE, Registry, Source, in_words, read_entry, read_group};
    use std::path::PathBuf;

    fn a_folder(name: &str) -> PathBuf {
        let folder =
            std::env::temp_dir().join(format!("tiara-registry-{}-{name}", std::process::id()));
        let _ = std::fs::remove_dir_all(&folder);
        std::fs::create_dir_all(&folder).unwrap();
        folder
    }

    #[test]
    fn a_group_header_says_what_it_is_and_whether_it_is_shown() {
        let shown = read_group("[!id_group_basic]:{basic}").unwrap();
        assert_eq!(shown.id, "id_group_basic");
        assert!(shown.shown);
        assert_eq!(shown.icon_path.as_deref(), Some("basic"));
        assert_eq!(shown.caption(), "Basic");

        // The one the bar does not show carries a different marker.
        let hidden = read_group("[$id_group_train_exam]:{train_exam}").unwrap();
        assert!(!hidden.shown);
        assert_eq!(hidden.caption(), "Train Exam");

        // And one with no icon of its own.
        let plain = read_group("[!id_group_rf]").unwrap();
        assert_eq!(plain.icon_path, None);
        assert_eq!(plain.caption(), "Rf");

        assert_eq!(read_group("[]"), None);
    }

    #[test]
    fn a_button_says_what_draws_it() {
        let entry =
            read_entry("id_component_resistor,9,TResistor,AnaComps.dll,2,basic/resistor").unwrap();

        assert_eq!(entry.id, "id_component_resistor");
        assert_eq!(entry.code, 9);
        assert_eq!(entry.handler, "TResistor");
        assert_eq!(entry.source, Source::Library("AnaComps.dll".to_owned()));
        assert_eq!(entry.icon, 2);
        assert_eq!(entry.caption(), "Resistor");
    }

    #[test]
    fn a_button_may_stand_for_a_whole_category_instead_of_a_library() {
        let entry = read_entry(
            "id_component_operational_amplifiers,-1100,TSpiceMacroCompHandler,[OpAmp],119,manufacturers_models/operational_amplifiers",
        )
        .unwrap();

        assert_eq!(entry.code, -1100);
        assert_eq!(entry.source, Source::Category("[OpAmp]".to_owned()));
        assert_eq!(entry.caption(), "Operational Amplifiers");
    }

    #[test]
    fn a_button_with_no_icon_path_is_named_by_its_own_id() {
        let entry = read_entry("id_component_jumper,3,TJumper,AnaComps.dll,1").unwrap();
        assert_eq!(entry.caption(), "Jumper");
    }

    #[test]
    fn a_line_that_is_not_a_button_is_passed_over() {
        assert_eq!(read_entry(""), None);
        assert_eq!(read_entry("one,two"), None);
        // A code that is not a number is not a button.
        assert_eq!(read_entry("id,notanumber,T,AnaComps.dll,0,a/b"), None);
    }

    #[test]
    fn a_registry_reads_its_groups_and_their_buttons_in_order() {
        let folder = a_folder("whole");
        let path = folder.join(REGISTRY_FILE);
        std::fs::write(
            &path,
            "; TINA Component Registry V2.0\n\
             \n\
             [!id_group_basic]:{basic}\n\
             id_component_ground,2,TGnd,AnaComps.dll,0,basic/ground\n\
             id_component_resistor,9,TResistor,AnaComps.dll,2,basic/resistor\n\
             \n\
             [!id_group_switches]:{switches}\n\
             id_component_switch,52,TSwitch,AnaComps.dll,9,switches/switch\n",
        )
        .unwrap();

        let registry = Registry::read(&path);
        assert!(registry.is_loaded());
        assert_eq!(registry.groups().len(), 2);
        assert_eq!(registry.tabs().len(), 2);
        assert_eq!(registry.buttons(), 3);
        assert_eq!(registry.groups()[0].entries[1].caption(), "Resistor");

        let _ = std::fs::remove_dir_all(&folder);
    }

    #[test]
    fn a_registry_reads_in_the_ones_it_names() {
        let folder = a_folder("included");
        std::fs::write(
            folder.join("extra.tcr"),
            "[!id_group_extra]:{extra}\nid_component_thing,1,TThing,AnaComps.dll,0,extra/thing\n",
        )
        .unwrap();
        let path = folder.join(REGISTRY_FILE);
        std::fs::write(
            &path,
            "%extra.tcr\n[!id_group_basic]:{basic}\nid_component_ground,2,TGnd,AnaComps.dll,0,basic/ground\n",
        )
        .unwrap();

        let registry = Registry::read(&path);
        assert_eq!(registry.groups().len(), 2);
        // What is read in comes first, because it is named first.
        assert_eq!(registry.groups()[0].id, "id_group_extra");

        let _ = std::fs::remove_dir_all(&folder);
    }

    #[test]
    fn a_registry_that_names_itself_stops() {
        let folder = a_folder("circular");
        let path = folder.join(REGISTRY_FILE);
        std::fs::write(
            &path,
            format!("%{REGISTRY_FILE}\n[!id_group_basic]:{{basic}}\n"),
        )
        .unwrap();

        let registry = Registry::read(&path);
        assert_eq!(registry.groups().len(), 1);

        let _ = std::fs::remove_dir_all(&folder);
    }

    #[test]
    fn a_registry_that_is_not_there_gives_an_empty_bar() {
        let missing = std::env::temp_dir().join("tiara-no-such-registry.tcr");
        let _ = std::fs::remove_file(&missing);

        let registry = Registry::read(&missing);
        assert!(!registry.is_loaded());
        assert!(registry.tabs().is_empty());
    }

    #[test]
    fn a_hidden_group_is_read_and_not_shown() {
        let registry = Registry::holding(vec![
            Group {
                id: "id_group_basic".to_owned(),
                shown: true,
                icon_path: None,
                entries: vec![Entry {
                    id: "id_component_ground".to_owned(),
                    code: 2,
                    handler: "TGnd".to_owned(),
                    source: Source::Library("AnaComps.dll".to_owned()),
                    icon: 0,
                    icon_path: "basic/ground".to_owned(),
                }],
            },
            Group {
                id: "id_group_train_exam".to_owned(),
                shown: false,
                icon_path: None,
                entries: Vec::new(),
            },
        ]);

        assert_eq!(registry.groups().len(), 2);
        assert_eq!(registry.tabs().len(), 1);
    }

    #[test]
    fn an_identifier_reads_as_words() {
        assert_eq!(in_words("basic"), "Basic");
        assert_eq!(in_words("analog_control"), "Analog Control");
        assert_eq!(in_words("flip-flops"), "Flip-flops");
        assert_eq!(in_words(""), "");
    }

    #[test]
    fn the_installed_registry_holds_the_bar_the_port_draws() {
        // Read from the installation at run time and never committed.
        let Some(installation) = std::env::var_os("TIARA_TINA_HOME").map(PathBuf::from) else {
            return;
        };
        let path = super::file_in(&installation);
        if !path.is_file() {
            return;
        }

        let registry = Registry::read(&path);
        assert!(registry.is_loaded());
        // Fifteen tabs, which is what the editor's own strip shows.
        assert_eq!(registry.tabs().len(), 15);
        assert!(registry.buttons() > 200);
        assert_eq!(registry.tabs()[0].id, "id_group_basic");
    }
}
