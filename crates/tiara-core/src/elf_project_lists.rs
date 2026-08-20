//! Working-list and registry boundaries for the shared ELF list manager.

use std::fmt;

pub const PROJECT_REGISTRY_VALUE: &str = "DAVE_TEST_PRJ";
pub const WORKSPACE_REGISTRY_VALUE: &str = "DAVE_TEST_REPO";
pub const LIBRARY_EVALUATION: &str = "Vec and String from std provide the exact temporary ordered-list, exact duplicate search, comma split/join, and quote removal needed here. Registry access stays behind RegistryListStore because the core crate has no Windows dependency and the recovered application key is host-owned. iced supplies the separate modal UI adapter.";

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum ManagerMode {
    #[default]
    Projects,
    Workspaces,
}

impl ManagerMode {
    #[must_use]
    pub const fn registry_value(self) -> &'static str {
        match self {
            Self::Projects => PROJECT_REGISTRY_VALUE,
            Self::Workspaces => WORKSPACE_REGISTRY_VALUE,
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct StoredLists {
    pub projects: String,
    pub workspaces: String,
}

pub trait RegistryListStore {
    /// Loads both mode-specific list values. The host also initializes any
    /// missing list or saved-index values, matching the recovered loader.
    ///
    /// # Errors
    ///
    /// Returns a host registry error when the application key cannot be read.
    fn load_all(&mut self) -> Result<StoredLists, ListManagerError>;

    /// Writes the serialized list for the selected mode.
    ///
    /// `Ok(false)` preserves the recovered key-open failure: the modal dialog
    /// may still accept and refresh its parent even though persistence failed.
    ///
    /// # Errors
    ///
    /// Returns a host registry error when the adapter raises a write failure.
    fn write_list(&mut self, mode: ManagerMode, serialized: &str)
    -> Result<bool, ListManagerError>;
}

/// Platform-neutral boundary for the recovered current-user application key.
pub trait CurrentUserRegistry {
    /// Opens the host-owned application subkey below `HKEY_CURRENT_USER`.
    ///
    /// # Errors
    ///
    /// Returns a platform registry error. `Ok(false)` is the recovered normal
    /// open-failure path and must not be promoted to an error.
    fn open_application_key(&mut self) -> Result<bool, ListManagerError>;

    /// Writes one string value to the already-open application key.
    ///
    /// # Errors
    ///
    /// Returns a platform registry error, which has no local recovery.
    fn write_string(&mut self, name: &str, value: &str) -> Result<(), ListManagerError>;
}

/// Ports Ghidra `FUN_016056c0` at `0x016056C0`.
///
/// Removes every double quote, opens the application's current-user subkey,
/// and writes the mode-specific value. A normal key-open failure skips the
/// write and returns `Ok(false)` without retry or rollback.
///
/// # Errors
///
/// Returns a platform registry error from key opening or value writing.
pub fn write_managed_list_to_registry(
    registry: &mut impl CurrentUserRegistry,
    serialized: &str,
    mode: ManagerMode,
) -> Result<bool, ListManagerError> {
    let sanitized = serialized.replace('"', "");
    if !registry.open_application_key()? {
        return Ok(false);
    }
    registry.write_string(mode.registry_value(), &sanitized)?;
    Ok(true)
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PersistResult {
    pub serialized: String,
    pub persisted: bool,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct WorkingListManager {
    mode: ManagerMode,
    caption: String,
    items: Vec<String>,
    accepted: bool,
}

impl Default for WorkingListManager {
    fn default() -> Self {
        Self {
            mode: ManagerMode::Projects,
            caption: String::new(),
            items: Vec::new(),
            accepted: false,
        }
    }
}

impl WorkingListManager {
    #[must_use]
    pub const fn mode(&self) -> ManagerMode {
        self.mode
    }

    #[must_use]
    pub fn caption(&self) -> &str {
        &self.caption
    }

    #[must_use]
    pub fn items(&self) -> &[String] {
        &self.items
    }

    #[must_use]
    pub const fn accepted(&self) -> bool {
        self.accepted
    }

    /// Ports Ghidra `FUN_015e5310` at `0x015E5310`.
    pub fn add(&mut self, value: &str) -> bool {
        if value.is_empty() || self.items.iter().any(|item| item == value) {
            return false;
        }
        self.items.push(value.to_owned());
        true
    }

    /// Ports Ghidra `FUN_015e5420` at `0x015E5420`.
    ///
    /// # Errors
    ///
    /// Returns the registry adapter error. A normal `Ok(false)` write still
    /// marks the dialog accepted, as the recovered handler has no success gate.
    pub fn persist_accepted(
        &mut self,
        store: &mut impl RegistryListStore,
    ) -> Result<PersistResult, ListManagerError> {
        let serialized = self.items.join(",");
        let persisted = store.write_list(self.mode, &serialized)?;
        self.accepted = true;
        Ok(PersistResult {
            serialized,
            persisted,
        })
    }

    /// Ports Ghidra `FUN_015e5490` at `0x015E5490`.
    ///
    /// # Errors
    ///
    /// Returns an out-of-sync error when the visible selected row does not
    /// identify a value in the temporary working list.
    pub fn remove_selected(
        &mut self,
        selected_index: Option<usize>,
    ) -> Result<bool, ListManagerError> {
        let Some(selected_index) = selected_index else {
            return Ok(false);
        };
        let selected = self
            .items
            .get(selected_index)
            .ok_or(ListManagerError::SelectionOutOfSync)?
            .clone();
        let index = self
            .items
            .iter()
            .position(|item| item == &selected)
            .ok_or(ListManagerError::SelectionOutOfSync)?;
        self.items.remove(index);
        Ok(true)
    }

    /// Ports Ghidra `FUN_015e55a0` at `0x015E55A0`.
    ///
    /// # Errors
    ///
    /// Returns the registry adapter error without changing the current list.
    pub fn load_on_show(
        &mut self,
        store: &mut impl RegistryListStore,
    ) -> Result<(), ListManagerError> {
        let stored = store.load_all()?;
        let serialized = match self.mode {
            ManagerMode::Projects => stored.projects,
            ManagerMode::Workspaces => stored.workspaces,
        };
        self.items = split_list(&serialized);
        self.accepted = false;
        Ok(())
    }

    /// Ports Ghidra `FUN_015e5710` at `0x015E5710`.
    pub fn configure(&mut self, mode: ManagerMode, caption: &str) {
        self.mode = mode;
        self.caption.clear();
        self.caption.push_str(caption);
    }
}

fn split_list(serialized: &str) -> Vec<String> {
    if serialized.is_empty() {
        Vec::new()
    } else {
        serialized.split(',').map(str::to_owned).collect()
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ListManagerError {
    Storage(String),
    SelectionOutOfSync,
}

impl fmt::Display for ListManagerError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::Storage(message) => formatter.write_str(message),
            Self::SelectionOutOfSync => {
                formatter.write_str("visible ELF list and working list are out of sync")
            }
        }
    }
}

impl std::error::Error for ListManagerError {}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug)]
    struct Store {
        lists: StoredLists,
        writes: Vec<(ManagerMode, String)>,
        write_result: bool,
    }

    #[derive(Debug, Default)]
    struct Registry {
        opens: usize,
        open_result: bool,
        writes: Vec<(String, String)>,
        write_error: bool,
    }

    impl CurrentUserRegistry for Registry {
        fn open_application_key(&mut self) -> Result<bool, ListManagerError> {
            self.opens += 1;
            Ok(self.open_result)
        }

        fn write_string(&mut self, name: &str, value: &str) -> Result<(), ListManagerError> {
            if self.write_error {
                return Err(ListManagerError::Storage("write failed".to_owned()));
            }
            self.writes.push((name.to_owned(), value.to_owned()));
            Ok(())
        }
    }

    impl RegistryListStore for Store {
        fn load_all(&mut self) -> Result<StoredLists, ListManagerError> {
            Ok(self.lists.clone())
        }

        fn write_list(
            &mut self,
            mode: ManagerMode,
            serialized: &str,
        ) -> Result<bool, ListManagerError> {
            self.writes.push((mode, serialized.to_owned()));
            Ok(self.write_result)
        }
    }

    fn store() -> Store {
        Store {
            lists: StoredLists {
                projects: "Alpha,Beta".to_owned(),
                workspaces: "C:/One,C:/Two".to_owned(),
            },
            writes: Vec::new(),
            write_result: true,
        }
    }

    #[test]
    fn add_rejects_only_empty_and_exact_duplicates() {
        let mut manager = WorkingListManager::default();
        assert!(!manager.add(""));
        assert!(manager.add("Alpha"));
        assert!(!manager.add("Alpha"));
        assert!(manager.add("alpha"));
        assert!(manager.add("  spaced  "));
        assert_eq!(manager.items(), ["Alpha", "alpha", "  spaced  "]);
    }

    #[test]
    fn remove_requires_a_selected_synchronized_row() {
        let mut manager = WorkingListManager::default();
        manager.add("Alpha");
        manager.add("Beta");
        assert!(!manager.remove_selected(None).expect("no selection"));
        assert!(manager.remove_selected(Some(0)).expect("remove"));
        assert_eq!(manager.items(), ["Beta"]);
        assert_eq!(
            manager.remove_selected(Some(5)),
            Err(ListManagerError::SelectionOutOfSync)
        );
    }

    #[test]
    fn mode_configuration_and_show_load_the_matching_registry_list() {
        let mut store = store();
        let mut manager = WorkingListManager::default();
        manager.configure(ManagerMode::Projects, "Manage Projects");
        manager.load_on_show(&mut store).expect("projects");
        assert_eq!(manager.caption(), "Manage Projects");
        assert_eq!(manager.items(), ["Alpha", "Beta"]);

        manager.configure(ManagerMode::Workspaces, "Manage Workspaces");
        manager.load_on_show(&mut store).expect("workspaces");
        assert_eq!(manager.items(), ["C:/One", "C:/Two"]);
    }

    #[test]
    fn accepted_persist_serializes_the_full_list_and_writes_even_when_unchanged() {
        let mut store = store();
        let mut manager = WorkingListManager::default();
        manager.configure(ManagerMode::Projects, "Manage Projects");
        manager.load_on_show(&mut store).expect("load");
        manager.add("quoted\"name");
        let outcome = manager.persist_accepted(&mut store).expect("persist");
        assert_eq!(outcome.serialized, "Alpha,Beta,quoted\"name");
        assert!(outcome.persisted);
        assert!(manager.accepted());
        assert_eq!(
            store.writes,
            [(ManagerMode::Projects, "Alpha,Beta,quoted\"name".to_owned())]
        );
    }

    #[test]
    fn registry_writer_removes_all_quotes_and_selects_mode_specific_value() {
        for (mode, expected_name) in [
            (ManagerMode::Projects, PROJECT_REGISTRY_VALUE),
            (ManagerMode::Workspaces, WORKSPACE_REGISTRY_VALUE),
        ] {
            let mut registry = Registry {
                open_result: true,
                ..Registry::default()
            };
            assert!(
                write_managed_list_to_registry(&mut registry, "one,\"two\",quo\"ted", mode,)
                    .expect("registry write")
            );
            assert_eq!(registry.opens, 1);
            assert_eq!(
                registry.writes,
                [(expected_name.to_owned(), "one,two,quoted".to_owned())]
            );
        }
    }

    #[test]
    fn registry_open_failure_skips_the_write_without_an_error() {
        let mut registry = Registry::default();
        assert!(
            !write_managed_list_to_registry(&mut registry, "project", ManagerMode::Projects,)
                .expect("skipped write")
        );
        assert_eq!(registry.opens, 1);
        assert!(registry.writes.is_empty());
    }

    #[test]
    fn registry_write_error_propagates_without_retry() {
        let mut registry = Registry {
            open_result: true,
            write_error: true,
            ..Registry::default()
        };
        assert!(
            write_managed_list_to_registry(&mut registry, "project", ManagerMode::Projects,)
                .is_err()
        );
        assert_eq!(registry.opens, 1);
        assert!(registry.writes.is_empty());
    }

    #[test]
    fn accepted_modal_state_does_not_depend_on_registry_write_success() {
        let mut store = store();
        store.write_result = false;
        let mut manager = WorkingListManager::default();
        let outcome = manager.persist_accepted(&mut store).expect("skipped write");
        assert!(!outcome.persisted);
        assert!(manager.accepted());
    }

    #[test]
    fn empty_stored_value_loads_as_an_empty_list() {
        let mut store = Store {
            lists: StoredLists::default(),
            writes: Vec::new(),
            write_result: true,
        };
        let mut manager = WorkingListManager::default();
        manager.load_on_show(&mut store).expect("empty list");
        assert!(manager.items().is_empty());
    }
}
