use std::collections::BTreeSet;
use std::path::{Path, PathBuf};

use iced::widget::{button, column, container, row, scrollable, text, text_input};
use iced::{Alignment, Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "Menu shortcut editor";
pub const FORM_RESOURCE: &str = "HotkeyEditor";
pub const HOTKEYS_FILE: &str = "hotkeys.ini";

/// The recovered fixed list of menu roots that the shortcut editor never
/// offers.
///
/// The recovered create path qualifies each name with the target menu, exactly
/// like an INI section name, before it tests a root against this list. The
/// order below is the recovered insertion order; the lookup itself is sorted,
/// so the order does not change which roots are accepted.
pub const EXCLUDED_MENU_ROOTS: [&str; 32] = [
    "mnInteractive",
    "mnTM",
    "mnTIUtilities",
    "Help",
    "ORCADPCB1",
    "PCADPCB1",
    "PROTELPCB1",
    "REDACPCB1",
    "TANGOPCB1",
    "EDSPCB1",
    "TINAPCB1",
    "ORCAD1",
    "PCAD1",
    "PROTEL1",
    "REDAC1",
    "TANGO1",
    "EDS1",
    "TINA1",
    "ImportXML",
    "ImportUserLibs",
    "ImportTINA",
    "ImportPalmtopCircuit",
    "ImportPSpice",
    "ImportEDIF",
    "ImportDigit",
    "mnNative",
    "mn3DView",
    "mn2DView",
    "mnTransientStatistics",
    "mnNewton",
    "mnAutoTest",
    "mnThreadTest",
];

pub trait HotkeyIni {
    type Error;

    /// Tests whether a section contains a stable menu-item key.
    ///
    /// # Errors
    ///
    /// Returns an adapter-specific read error.
    fn contains_key(&mut self, path: &Path, section: &str, key: &str) -> Result<bool, Self::Error>;

    /// Reads one shortcut value or returns the supplied fallback.
    ///
    /// # Errors
    ///
    /// Returns an adapter-specific read error.
    fn read(
        &mut self,
        path: &Path,
        section: &str,
        key: &str,
        default: &str,
    ) -> Result<String, Self::Error>;

    /// Writes one shortcut value.
    ///
    /// # Errors
    ///
    /// Returns an adapter-specific write error.
    fn write(
        &mut self,
        path: &Path,
        section: &str,
        key: &str,
        value: &str,
    ) -> Result<(), Self::Error>;
}

pub trait SectionNames {
    fn current(&self, target_name: &str, root_name: &str) -> String;

    fn defaults(&self, target_name: &str, root_name: &str) -> String {
        format!("{}_default", self.current(target_name, root_name))
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct DelimitedSectionNames {
    separator: String,
}

impl DelimitedSectionNames {
    #[must_use]
    pub const fn new(separator: String) -> Self {
        Self { separator }
    }
}

impl SectionNames for DelimitedSectionNames {
    fn current(&self, target_name: &str, root_name: &str) -> String {
        format!("{target_name}{}{root_name}", self.separator)
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct MenuItem {
    pub stable_name: String,
    pub shortcut: String,
    pub children: Vec<Self>,
}

impl MenuItem {
    #[must_use]
    pub const fn new(stable_name: String, shortcut: String, children: Vec<Self>) -> Self {
        Self {
            stable_name,
            shortcut,
            children,
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct MenuTarget {
    pub stable_name: String,
    pub roots: Vec<MenuItem>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ShortcutRow {
    pub caption_path: String,
    pub stable_name: String,
    pub shortcut: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct MenuTab {
    pub root_name: String,
    pub rows: Vec<ShortcutRow>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ShortcutMapping {
    pub stable_name: String,
    pub shortcut: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ActiveEditor {
    pub visible: bool,
    pub tab_index: usize,
    /// One-based grid row. Row zero is the recovered header row.
    pub grid_row: usize,
    pub original_shortcut: String,
    pub shortcut: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct DuplicateShortcut {
    pub shortcut: String,
}

impl DuplicateShortcut {
    #[must_use]
    pub fn message(&self) -> String {
        format!("The shortcut '{}' is already assigned.", self.shortcut)
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum FlushOutcome {
    Unchanged,
    Accepted,
    RejectedDuplicate,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CommitOutcome {
    pub active_editor: FlushOutcome,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ExternalAction {
    Reset,
    Commit,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    ActiveShortcutChanged(String),
    ResetRequested,
    OkRequested,
}

#[derive(Debug)]
pub struct Window {
    base_directory: PathBuf,
    target: MenuTarget,
    tabs: Vec<MenuTab>,
    mappings: Vec<ShortcutMapping>,
    excluded_roots: BTreeSet<String>,
    active_editor: Option<ActiveEditor>,
    duplicate_warning: Option<DuplicateShortcut>,
    pending_action: Option<ExternalAction>,
}

impl Window {
    #[must_use]
    pub const fn new(
        base_directory: PathBuf,
        target: MenuTarget,
        tabs: Vec<MenuTab>,
        mappings: Vec<ShortcutMapping>,
    ) -> Self {
        Self {
            base_directory,
            target,
            tabs,
            mappings,
            excluded_roots: BTreeSet::new(),
            active_editor: None,
            duplicate_warning: None,
            pending_action: None,
        }
    }

    /// Implements Ghidra function `FUN_01b77240` at `0x01B77240`.
    ///
    /// Builds the dialog from the owner-supplied menu target and the base
    /// directory that locates `hotkeys.ini`. The recovered constructor stores
    /// only those two inputs: it enumerates no commands, builds no tab or grid
    /// row, reads no mapping, detects no conflict, shows nothing, and writes no
    /// file. Tab and row construction belongs to the create handler, and
    /// persistence to the OK handler.
    #[must_use]
    pub const fn create(base_directory: PathBuf, target: MenuTarget) -> Self {
        Self::new(base_directory, target, Vec::new(), Vec::new())
    }

    #[must_use]
    pub const fn target(&self) -> &MenuTarget {
        &self.target
    }

    #[must_use]
    pub const fn excluded_roots(&self) -> &BTreeSet<String> {
        &self.excluded_roots
    }

    #[must_use]
    pub const fn base_directory(&self) -> &PathBuf {
        &self.base_directory
    }

    #[must_use]
    pub fn tabs(&self) -> &[MenuTab] {
        &self.tabs
    }

    #[must_use]
    pub fn mappings(&self) -> &[ShortcutMapping] {
        &self.mappings
    }

    #[must_use]
    pub const fn duplicate_warning(&self) -> Option<&DuplicateShortcut> {
        self.duplicate_warning.as_ref()
    }

    pub fn set_active_editor(&mut self, editor: Option<ActiveEditor>) {
        self.active_editor = editor;
    }

    /// Implements Ghidra function `FUN_01b778f0` at `0x01B778F0`.
    ///
    /// Starts the staged shortcut mapping empty, builds the sorted excluded
    /// lookup from [`EXCLUDED_MENU_ROOTS`] qualified with the target menu name,
    /// and adds one tab per target menu root that the lookup does not exclude.
    /// Root order follows the target menu. The handler reads no INI file, adds
    /// no grid row, assigns no shortcut, and changes no live menu item; row
    /// construction runs per accepted root afterwards.
    ///
    /// [`BTreeSet`] supplies the recovered sorted-lookup list, so no external
    /// container crate is required.
    pub fn create_menu_tabs(&mut self, sections: &impl SectionNames) {
        self.mappings.clear();
        self.excluded_roots = EXCLUDED_MENU_ROOTS
            .iter()
            .map(|name| sections.current(&self.target.stable_name, name))
            .collect();
        self.tabs = self
            .target
            .roots
            .iter()
            .filter(|root| {
                !self
                    .excluded_roots
                    .contains(&sections.current(&self.target.stable_name, &root.stable_name))
            })
            .map(|root| MenuTab {
                root_name: root.stable_name.clone(),
                rows: Vec::new(),
            })
            .collect();
    }

    /// Implements Ghidra function `FUN_01b78960` at `0x01B78960`.
    ///
    /// Releases the private excluded-root lookup and the staged shortcut
    /// mapping when the dialog closes. The recovered handler frees both lists
    /// and does nothing else: it writes no file, applies no shortcut, and
    /// leaves the target menu untouched. Cancel therefore discards every staged
    /// change, and an already accepted OK stays committed.
    pub fn discard_staged_state(&mut self) {
        self.excluded_roots.clear();
        self.mappings.clear();
        self.tabs.clear();
        self.active_editor = None;
        self.duplicate_warning = None;
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::ActiveShortcutChanged(shortcut) => {
                if let Some(editor) = &mut self.active_editor {
                    editor.shortcut = shortcut;
                }
            }
            Message::ResetRequested => self.pending_action = Some(ExternalAction::Reset),
            Message::OkRequested => self.pending_action = Some(ExternalAction::Commit),
        }
    }

    #[must_use]
    pub const fn take_action(&mut self) -> Option<ExternalAction> {
        self.pending_action.take()
    }

    /// Flushes the active shortcut editor into staged state. This ports
    /// Ghidra function `FUN_01b79440` at `0x01B79440`.
    pub fn flush_active_editor(&mut self) -> FlushOutcome {
        let Some(editor) = self.active_editor.as_ref() else {
            return FlushOutcome::Unchanged;
        };
        if !editor.visible || editor.grid_row == 0 || editor.shortcut == editor.original_shortcut {
            return FlushOutcome::Unchanged;
        }

        if let Err(duplicate) = validate_unique_shortcut(&editor.shortcut, &self.mappings) {
            self.duplicate_warning = Some(duplicate);
            return FlushOutcome::RejectedDuplicate;
        }

        let tab_index = editor.tab_index;
        let row_index = editor.grid_row - 1;
        let shortcut = editor.shortcut.clone();
        let Some(row) = self
            .tabs
            .get_mut(tab_index)
            .and_then(|tab| tab.rows.get_mut(row_index))
        else {
            return FlushOutcome::Unchanged;
        };
        row.shortcut.clear();
        row.shortcut.push_str(&shortcut);
        if let Some(mapping) = self
            .mappings
            .iter_mut()
            .find(|mapping| mapping.stable_name == row.stable_name)
        {
            mapping.shortcut.clear();
            mapping.shortcut.push_str(&shortcut);
        }
        self.duplicate_warning = None;
        FlushOutcome::Accepted
    }

    /// Stages every recovered default shortcut without writing the INI file or
    /// changing the live menu. This ports Ghidra function `FUN_01b775c0` at
    /// `0x01B775C0`.
    ///
    /// # Errors
    ///
    /// Returns the INI adapter error. Earlier rows stay reset when a later read
    /// fails, matching the recovered absence of rollback.
    pub fn reset_to_defaults<Store: HotkeyIni>(
        &mut self,
        store: &mut Store,
        sections: &impl SectionNames,
    ) -> Result<(), Store::Error> {
        self.mappings.clear();
        let path = self.base_directory.join(HOTKEYS_FILE);
        for tab in &mut self.tabs {
            let section = sections.defaults(&self.target.stable_name, &tab.root_name);
            for row in &mut tab.rows {
                let shortcut = store.read(&path, &section, &row.stable_name, "")?;
                shortcut.clone_into(&mut row.shortcut);
                if !shortcut.is_empty() {
                    self.mappings.push(ShortcutMapping {
                        stable_name: row.stable_name.clone(),
                        shortcut,
                    });
                }
            }
        }
        Ok(())
    }

    /// Saves all staged rows and then reloads the live target menu. This ports
    /// Ghidra function `FUN_01b77350` at `0x01B77350`.
    ///
    /// # Errors
    ///
    /// Returns the first INI adapter error. Completed writes and live menu
    /// assignments are not rolled back.
    pub fn commit<Store: HotkeyIni>(
        &mut self,
        store: &mut Store,
        sections: &impl SectionNames,
    ) -> Result<CommitOutcome, Store::Error> {
        let active_editor = self.flush_active_editor();
        let path = self.base_directory.join(HOTKEYS_FILE);
        for tab in &self.tabs {
            let section = sections.current(&self.target.stable_name, &tab.root_name);
            for row in &tab.rows {
                store.write(&path, &section, &row.stable_name, &row.shortcut)?;
            }
        }
        reload_hotkeys(&mut self.target, &self.base_directory, store, sections)?;
        Ok(CommitOutcome { active_editor })
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let menu = window_shell::empty_menu();
        let toolbar = window_shell::toolbar(&["Reset"], Message::ResetRequested);
        let rows = self.tabs.iter().flat_map(|tab| {
            tab.rows.iter().map(move |item| {
                row![
                    text(format!("{}: {}", tab.root_name, item.caption_path))
                        .width(Length::FillPortion(3)),
                    text(&item.shortcut).width(Length::FillPortion(2)),
                ]
                .spacing(8)
                .align_y(Alignment::Center)
                .into()
            })
        });
        let warning = self
            .duplicate_warning
            .as_ref()
            .map_or_else(String::new, DuplicateShortcut::message);
        let active_editor: Element<'_, Message> = self.active_editor.as_ref().map_or_else(
            || container(text("Select a command to edit")).into(),
            |editor| {
                text_input("Shortcut", &editor.shortcut)
                    .on_input(Message::ActiveShortcutChanged)
                    .into()
            },
        );
        let body: Element<'_, Message> = container(
            column![
                scrollable(column(rows).spacing(6)).height(Length::Fill),
                active_editor,
                text(warning),
                button("OK").on_press(Message::OkRequested),
            ]
            .spacing(10),
        )
        .padding(16)
        .width(Length::Fill)
        .height(Length::Fill)
        .into();
        window_shell::frame(TITLE, menu, toolbar, body, "Shortcut configuration")
    }
}

/// The recovered modal outcome of the shortcut editor.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ModalResult {
    Ok,
    Cancel,
}

pub trait HotkeyEditorModalHost {
    /// Shows the shortcut editor and reports how the user closed it.
    fn show_hotkey_editor(&mut self, dialog: &mut Window) -> ModalResult;
}

/// Implements Ghidra function `FUN_01b7c5a0` at `0x01B7C5A0`.
///
/// Builds one shortcut editor for the Editor Options target menu and the
/// application base directory, shows it modally, and discards its modal result.
/// The launcher has no running-state, null-target, or re-entry guard, so every
/// click opens a new dialog.
///
/// Editor Options copies nothing back: the shortcut editor owns its own commit
/// boundary. Accepting it writes `hotkeys.ini` and updates the live menu even
/// when Editor Options is cancelled afterwards, and cancelling it stages
/// nothing that a later Editor Options accept could save.
pub fn show_hotkey_editor_modally(
    base_directory: PathBuf,
    target: MenuTarget,
    host: &mut impl HotkeyEditorModalHost,
) {
    let mut dialog = Window::create(base_directory, target);
    let _ = host.show_hotkey_editor(&mut dialog);
}

/// Rejects an exact duplicate non-empty shortcut. This ports Ghidra function
/// `FUN_01b795f0` at `0x01B795F0`.
///
/// # Errors
///
/// Returns the conflicting shortcut for presentation in a modal warning.
pub fn validate_unique_shortcut(
    proposed: &str,
    mappings: &[ShortcutMapping],
) -> Result<(), DuplicateShortcut> {
    if !proposed.is_empty() && mappings.iter().any(|mapping| mapping.shortcut == proposed) {
        return Err(DuplicateShortcut {
            shortcut: proposed.to_owned(),
        });
    }
    Ok(())
}

/// Recursively applies existing shortcut keys to menu descendants. This ports
/// Ghidra function `FUN_01b76f80` at `0x01B76F80`.
///
/// # Errors
///
/// Returns the first INI adapter error. Earlier assignments are not rolled
/// back.
pub fn apply_existing_shortcuts<Store: HotkeyIni>(
    store: &mut Store,
    path: &Path,
    section: &str,
    root: &mut MenuItem,
) -> Result<(), Store::Error> {
    for child in &mut root.children {
        if store.contains_key(path, section, &child.stable_name)? {
            child.shortcut = store.read(path, section, &child.stable_name, "")?;
        }
        apply_existing_shortcuts(store, path, section, child)?;
    }
    Ok(())
}

/// Opens the base-directory hotkey file and applies it to each menu root. This
/// ports Ghidra function `FUN_01b770b0` at `0x01B770B0`.
///
/// # Errors
///
/// Returns the first INI adapter error. Earlier menu assignments are not
/// rolled back.
pub fn reload_hotkeys<Store: HotkeyIni>(
    target: &mut MenuTarget,
    base_directory: &Path,
    store: &mut Store,
    sections: &impl SectionNames,
) -> Result<(), Store::Error> {
    let path = base_directory.join(HOTKEYS_FILE);
    for root in &mut target.roots {
        let section = sections.current(&target.stable_name, &root.stable_name);
        apply_existing_shortcuts(store, &path, &section, root)?;
    }
    Ok(())
}

#[cfg(test)]
mod tests {
    use std::collections::HashMap;
    use std::convert::Infallible;

    use super::*;

    #[derive(Debug, Default)]
    struct Ini {
        values: HashMap<(PathBuf, String, String), String>,
        writes: Vec<(PathBuf, String, String, String)>,
        reads: Vec<(PathBuf, String, String, String)>,
    }

    impl Ini {
        fn insert(&mut self, path: &Path, section: &str, key: &str, value: &str) {
            self.values.insert(
                (path.to_path_buf(), section.to_owned(), key.to_owned()),
                value.to_owned(),
            );
        }
    }

    impl HotkeyIni for Ini {
        type Error = Infallible;

        fn contains_key(
            &mut self,
            path: &Path,
            section: &str,
            key: &str,
        ) -> Result<bool, Self::Error> {
            Ok(self
                .values
                .contains_key(&(path.to_path_buf(), section.to_owned(), key.to_owned())))
        }

        fn read(
            &mut self,
            path: &Path,
            section: &str,
            key: &str,
            default: &str,
        ) -> Result<String, Self::Error> {
            self.reads.push((
                path.to_path_buf(),
                section.to_owned(),
                key.to_owned(),
                default.to_owned(),
            ));
            Ok(self
                .values
                .get(&(path.to_path_buf(), section.to_owned(), key.to_owned()))
                .cloned()
                .unwrap_or_else(|| default.to_owned()))
        }

        fn write(
            &mut self,
            path: &Path,
            section: &str,
            key: &str,
            value: &str,
        ) -> Result<(), Self::Error> {
            self.writes.push((
                path.to_path_buf(),
                section.to_owned(),
                key.to_owned(),
                value.to_owned(),
            ));
            self.insert(path, section, key, value);
            Ok(())
        }
    }

    fn sections() -> DelimitedSectionNames {
        DelimitedSectionNames::new("/".to_owned())
    }

    fn item(name: &str, shortcut: &str, children: Vec<MenuItem>) -> MenuItem {
        MenuItem::new(name.to_owned(), shortcut.to_owned(), children)
    }

    fn target() -> MenuTarget {
        MenuTarget {
            stable_name: "MainForm".to_owned(),
            roots: vec![item(
                "File",
                "ROOT",
                vec![
                    item("Open", "OldOpen", Vec::new()),
                    item(
                        "Recent",
                        "OldRecent",
                        vec![item("RecentOne", "OldRecentOne", Vec::new())],
                    ),
                ],
            )],
        }
    }

    fn editor() -> Window {
        Window::new(
            PathBuf::from(r"C:\TINA"),
            target(),
            vec![MenuTab {
                root_name: "File".to_owned(),
                rows: vec![
                    ShortcutRow {
                        caption_path: "Open".to_owned(),
                        stable_name: "Open".to_owned(),
                        shortcut: "Ctrl+O".to_owned(),
                    },
                    ShortcutRow {
                        caption_path: "Save".to_owned(),
                        stable_name: "Save".to_owned(),
                        shortcut: "Ctrl+S".to_owned(),
                    },
                ],
            }],
            vec![
                ShortcutMapping {
                    stable_name: "Open".to_owned(),
                    shortcut: "Ctrl+O".to_owned(),
                },
                ShortcutMapping {
                    stable_name: "Save".to_owned(),
                    shortcut: "Ctrl+S".to_owned(),
                },
            ],
        )
    }

    #[test]
    fn recursive_apply_changes_only_descendants_with_existing_keys() {
        let path = PathBuf::from(r"C:\TINA").join(HOTKEYS_FILE);
        let mut ini = Ini::default();
        ini.insert(&path, "MainForm/File", "Open", "Ctrl+Shift+O");
        ini.insert(&path, "MainForm/File", "RecentOne", "Alt+1");
        let mut target = target();

        assert_eq!(
            reload_hotkeys(&mut target, Path::new(r"C:\TINA"), &mut ini, &sections()),
            Ok(())
        );

        assert_eq!(target.roots[0].shortcut, "ROOT");
        assert_eq!(target.roots[0].children[0].shortcut, "Ctrl+Shift+O");
        assert_eq!(target.roots[0].children[1].shortcut, "OldRecent");
        assert_eq!(target.roots[0].children[1].children[0].shortcut, "Alt+1");
    }

    #[test]
    fn duplicate_validation_accepts_empty_and_uses_exact_equality() {
        let mappings = editor().mappings;
        assert!(validate_unique_shortcut("", &mappings).is_ok());
        assert!(validate_unique_shortcut("ctrl+o", &mappings).is_ok());
        let Err(duplicate) = validate_unique_shortcut("Ctrl+O", &mappings) else {
            panic!("exact duplicate must be rejected");
        };
        assert!(duplicate.message().contains("Ctrl+O"));
    }

    #[test]
    fn active_flush_requires_visible_changed_data_row() {
        let mut window = editor();
        window.set_active_editor(Some(ActiveEditor {
            visible: false,
            tab_index: 0,
            grid_row: 1,
            original_shortcut: "Ctrl+O".to_owned(),
            shortcut: "Alt+O".to_owned(),
        }));
        assert_eq!(window.flush_active_editor(), FlushOutcome::Unchanged);
        window.set_active_editor(Some(ActiveEditor {
            visible: true,
            tab_index: 0,
            grid_row: 0,
            original_shortcut: "Ctrl+O".to_owned(),
            shortcut: "Alt+O".to_owned(),
        }));
        assert_eq!(window.flush_active_editor(), FlushOutcome::Unchanged);
        window.set_active_editor(Some(ActiveEditor {
            visible: true,
            tab_index: 0,
            grid_row: 1,
            original_shortcut: "Ctrl+O".to_owned(),
            shortcut: "Alt+O".to_owned(),
        }));
        assert_eq!(window.flush_active_editor(), FlushOutcome::Accepted);
        assert_eq!(window.tabs[0].rows[0].shortcut, "Alt+O");
        assert_eq!(window.mappings[0].shortcut, "Alt+O");
    }

    #[test]
    fn duplicate_flush_keeps_the_previous_accepted_row_and_mapping() {
        let mut window = editor();
        window.set_active_editor(Some(ActiveEditor {
            visible: true,
            tab_index: 0,
            grid_row: 1,
            original_shortcut: "Ctrl+O".to_owned(),
            shortcut: "Ctrl+S".to_owned(),
        }));

        assert_eq!(
            window.flush_active_editor(),
            FlushOutcome::RejectedDuplicate
        );
        assert_eq!(window.tabs[0].rows[0].shortcut, "Ctrl+O");
        assert_eq!(window.mappings[0].shortcut, "Ctrl+O");
        assert_eq!(
            window
                .duplicate_warning()
                .map(|warning| warning.shortcut.as_str()),
            Some("Ctrl+S")
        );
    }

    #[test]
    fn commit_saves_every_row_after_rejection_and_then_reloads_the_menu() {
        let mut window = editor();
        window.set_active_editor(Some(ActiveEditor {
            visible: true,
            tab_index: 0,
            grid_row: 1,
            original_shortcut: "Ctrl+O".to_owned(),
            shortcut: "Ctrl+S".to_owned(),
        }));
        let mut ini = Ini::default();

        let outcome = match window.commit(&mut ini, &sections()) {
            Ok(outcome) => outcome,
            Err(error) => match error {},
        };

        assert_eq!(outcome.active_editor, FlushOutcome::RejectedDuplicate);
        assert_eq!(ini.writes.len(), 2);
        assert_eq!(ini.writes[0].2, "Open");
        assert_eq!(ini.writes[0].3, "Ctrl+O");
        assert_eq!(ini.writes[1].2, "Save");
        assert_eq!(window.target.roots[0].children[0].shortcut, "Ctrl+O");
    }

    #[test]
    fn reset_clears_missing_defaults_and_rebuilds_nonempty_mappings() {
        let mut window = editor();
        let path = PathBuf::from(r"C:\TINA").join(HOTKEYS_FILE);
        let mut ini = Ini::default();
        ini.insert(&path, "MainForm/File_default", "Open", "Ctrl+Shift+O");

        assert_eq!(window.reset_to_defaults(&mut ini, &sections()), Ok(()));

        assert_eq!(window.tabs[0].rows[0].shortcut, "Ctrl+Shift+O");
        assert_eq!(window.tabs[0].rows[1].shortcut, "");
        assert_eq!(
            window.mappings,
            [ShortcutMapping {
                stable_name: "Open".to_owned(),
                shortcut: "Ctrl+Shift+O".to_owned()
            }]
        );
        assert!(ini.writes.is_empty());
        assert_eq!(window.target.roots[0].children[0].shortcut, "OldOpen");
    }

    #[test]
    fn iced_messages_edit_active_state_and_publish_external_actions() {
        let mut window = editor();
        window.set_active_editor(Some(ActiveEditor {
            visible: true,
            tab_index: 0,
            grid_row: 1,
            original_shortcut: "Ctrl+O".to_owned(),
            shortcut: "Ctrl+O".to_owned(),
        }));
        window.update(Message::ActiveShortcutChanged("Alt+O".to_owned()));
        assert_eq!(
            window
                .active_editor
                .as_ref()
                .map(|editor| editor.shortcut.as_str()),
            Some("Alt+O")
        );
        window.update(Message::ResetRequested);
        assert_eq!(window.take_action(), Some(ExternalAction::Reset));
        window.update(Message::OkRequested);
        assert_eq!(window.take_action(), Some(ExternalAction::Commit));
    }

    #[derive(Default)]
    struct ModalHost {
        seen: Vec<(PathBuf, String, usize)>,
        result: Option<ModalResult>,
    }

    impl HotkeyEditorModalHost for ModalHost {
        fn show_hotkey_editor(&mut self, dialog: &mut Window) -> ModalResult {
            self.seen.push((
                dialog.base_directory().clone(),
                dialog.target().stable_name.clone(),
                dialog.tabs().len(),
            ));
            self.result.take().unwrap_or(ModalResult::Cancel)
        }
    }

    #[test]
    fn the_constructor_stores_only_the_target_and_base_directory() {
        let window = Window::create(PathBuf::from(r"C:\TINA"), target());

        assert_eq!(window.base_directory(), &PathBuf::from(r"C:\TINA"));
        assert_eq!(window.target().stable_name, "MainForm");
        assert!(window.tabs().is_empty());
        assert!(window.mappings().is_empty());
        assert!(window.excluded_roots().is_empty());
        assert!(window.duplicate_warning().is_none());
    }

    #[test]
    fn create_adds_one_tab_per_accepted_root_and_skips_excluded_roots() {
        let mut window = Window::create(
            PathBuf::from(r"C:\TINA"),
            MenuTarget {
                stable_name: "MainForm".to_owned(),
                roots: vec![
                    item("File", "", Vec::new()),
                    item("Help", "", Vec::new()),
                    item("mn3DView", "", Vec::new()),
                    item("View", "", Vec::new()),
                ],
            },
        );

        window.create_menu_tabs(&sections());

        let roots: Vec<&str> = window
            .tabs()
            .iter()
            .map(|tab| tab.root_name.as_str())
            .collect();
        assert_eq!(roots, ["File", "View"]);
        assert!(window.tabs().iter().all(|tab| tab.rows.is_empty()));
        assert!(window.mappings().is_empty());
    }

    #[test]
    fn create_qualifies_every_excluded_root_with_the_target_menu_name() {
        let mut window = Window::create(PathBuf::from(r"C:\TINA"), target());

        window.create_menu_tabs(&sections());

        assert_eq!(window.excluded_roots().len(), EXCLUDED_MENU_ROOTS.len());
        assert!(window.excluded_roots().contains("MainForm/mnThreadTest"));
        assert!(!window.excluded_roots().contains("mnThreadTest"));
    }

    #[test]
    fn create_replaces_previously_staged_tabs_and_mappings() {
        let mut window = editor();

        window.create_menu_tabs(&sections());

        assert_eq!(window.tabs().len(), 1);
        assert!(window.tabs()[0].rows.is_empty());
        assert!(window.mappings().is_empty());
    }

    #[test]
    fn destroy_discards_staged_state_without_writing_or_applying_anything() {
        let mut window = editor();
        let ini = Ini::default();
        window.set_active_editor(Some(ActiveEditor {
            visible: true,
            tab_index: 0,
            grid_row: 1,
            original_shortcut: "Ctrl+O".to_owned(),
            shortcut: "Ctrl+S".to_owned(),
        }));
        assert_eq!(
            window.flush_active_editor(),
            FlushOutcome::RejectedDuplicate
        );
        assert!(window.duplicate_warning().is_some());

        window.discard_staged_state();

        assert!(window.tabs().is_empty());
        assert!(window.mappings().is_empty());
        assert!(window.excluded_roots().is_empty());
        assert!(window.duplicate_warning().is_none());
        assert!(ini.writes.is_empty());
        assert_eq!(window.target().roots[0].children[0].shortcut, "OldOpen");
        assert!(ini.reads.is_empty());
    }

    #[test]
    fn the_launcher_opens_an_unstaged_dialog_modally_and_ignores_the_result() {
        let mut host = ModalHost {
            result: Some(ModalResult::Ok),
            ..ModalHost::default()
        };

        show_hotkey_editor_modally(PathBuf::from(r"C:\TINA"), target(), &mut host);
        show_hotkey_editor_modally(PathBuf::from(r"C:\TINA"), target(), &mut host);

        assert_eq!(
            host.seen,
            [
                (PathBuf::from(r"C:\TINA"), "MainForm".to_owned(), 0),
                (PathBuf::from(r"C:\TINA"), "MainForm".to_owned(), 0),
            ]
        );
    }
}
