//! Iced and modal-host adapters for the shared ELF list manager.

use iced::widget::{button, column, pick_list, row, text_input};
use iced::{Element, Task};
use tiara_core::elf_project_lists::{
    ListManagerError, ManagerMode, RegistryListStore, WorkingListManager,
};

pub const LIBRARY_EVALUATION: &str = "iced supplies the temporary edit controls and message flow. The core model uses std collections and strings. Registry access and modal construction remain narrow host traits because the application-owned HKCU path and window owner are not recoverable library concerns; owned runners map normal modal destruction to Rust RAII.";

#[derive(Debug, Clone)]
pub enum Message {
    NewItemChanged(String),
    SelectionChanged(String),
    Add,
    Remove,
}

#[derive(Debug, Default)]
pub struct Window {
    manager: WorkingListManager,
    new_item: String,
    selection: Option<String>,
    last_error: Option<String>,
}

impl Window {
    #[must_use]
    pub const fn manager(&self) -> &WorkingListManager {
        &self.manager
    }

    pub fn configure(&mut self, mode: ManagerMode, caption: &str) {
        self.manager.configure(mode, caption);
    }

    /// # Errors
    ///
    /// Returns the registry host error without changing the working list.
    pub fn show(&mut self, store: &mut impl RegistryListStore) -> Result<(), ListManagerError> {
        self.manager.load_on_show(store)
    }

    /// # Errors
    ///
    /// Returns the registry host error. A normal skipped write still accepts.
    pub fn accept(&mut self, store: &mut impl RegistryListStore) -> Result<bool, ListManagerError> {
        self.manager.persist_accepted(store).map(|_| true)
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::NewItemChanged(value) => self.new_item = value,
            Message::SelectionChanged(value) => self.selection = Some(value),
            Message::Add => {
                self.manager.add(&self.new_item);
            }
            Message::Remove => {
                let selected = self.selection.as_ref().and_then(|selected| {
                    self.manager
                        .items()
                        .iter()
                        .position(|item| item == selected)
                });
                if let Err(error) = self.manager.remove_selected(selected) {
                    self.last_error = Some(error.to_string());
                }
            }
        }
        Task::none()
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let choices = self.manager.items().to_vec();
        column![
            self.manager.caption(),
            pick_list(choices, self.selection.clone(), Message::SelectionChanged),
            row![
                text_input("New item", &self.new_item).on_input(Message::NewItemChanged),
                button("Add").on_press(Message::Add),
                button("Remove").on_press(Message::Remove),
            ]
            .spacing(8),
        ]
        .spacing(8)
        .into()
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ModalResult {
    pub accepted: bool,
    pub items: Vec<String>,
}

pub trait ManagerDialogRunner {
    fn show_modal(&mut self, mode: ManagerMode) -> ModalResult;
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct ParentLists {
    pub projects: Vec<String>,
    pub workspaces: Vec<String>,
}

/// Ports Ghidra `FUN_015e5f30` at `0x015E5F30`.
#[must_use]
pub fn manage_projects(parent: &mut ParentLists, runner: impl ManagerDialogRunner) -> bool {
    run_manager(parent, ManagerMode::Projects, runner)
}

/// Ports Ghidra `FUN_015e5fa0` at `0x015E5FA0`.
#[must_use]
pub fn manage_workspaces(parent: &mut ParentLists, runner: impl ManagerDialogRunner) -> bool {
    run_manager(parent, ManagerMode::Workspaces, runner)
}

fn run_manager(
    parent: &mut ParentLists,
    mode: ManagerMode,
    mut runner: impl ManagerDialogRunner,
) -> bool {
    let result = runner.show_modal(mode);
    if result.accepted {
        match mode {
            ManagerMode::Projects => parent.projects = result.items,
            ManagerMode::Workspaces => parent.workspaces = result.items,
        }
    }
    result.accepted
}

#[cfg(test)]
mod tests {
    use super::*;
    use std::cell::Cell;
    use std::rc::Rc;
    use tiara_core::elf_project_lists::StoredLists;

    struct Store(StoredLists);

    impl RegistryListStore for Store {
        fn load_all(&mut self) -> Result<StoredLists, ListManagerError> {
            Ok(self.0.clone())
        }

        fn write_list(
            &mut self,
            _mode: ManagerMode,
            _serialized: &str,
        ) -> Result<bool, ListManagerError> {
            Ok(true)
        }
    }

    struct Runner {
        expected_mode: ManagerMode,
        result: ModalResult,
        drops: Rc<Cell<u32>>,
    }

    impl ManagerDialogRunner for Runner {
        fn show_modal(&mut self, mode: ManagerMode) -> ModalResult {
            assert_eq!(mode, self.expected_mode);
            self.result.clone()
        }
    }

    impl Drop for Runner {
        fn drop(&mut self) {
            self.drops.set(self.drops.get() + 1);
        }
    }

    #[test]
    fn iced_update_stages_add_and_remove_without_registry_write() {
        let mut window = Window::default();
        window.configure(ManagerMode::Projects, "Manage Projects");
        window
            .show(&mut Store(StoredLists {
                projects: "One,Two".to_owned(),
                workspaces: String::new(),
            }))
            .expect("show");
        let _ = window.update(Message::NewItemChanged("Three".to_owned()));
        let _ = window.update(Message::Add);
        assert_eq!(window.manager().items(), ["One", "Two", "Three"]);
        let _ = window.update(Message::SelectionChanged("Two".to_owned()));
        let _ = window.update(Message::Remove);
        assert_eq!(window.manager().items(), ["One", "Three"]);
    }

    #[test]
    fn project_launcher_refreshes_only_after_acceptance_and_drops_runner() {
        let drops = Rc::new(Cell::new(0));
        let mut parent = ParentLists {
            projects: vec!["Old project".to_owned()],
            workspaces: vec!["Kept workspace".to_owned()],
        };
        assert!(!manage_projects(
            &mut parent,
            Runner {
                expected_mode: ManagerMode::Projects,
                result: ModalResult {
                    accepted: false,
                    items: vec!["Discarded".to_owned()],
                },
                drops: Rc::clone(&drops),
            },
        ));
        assert_eq!(parent.projects, ["Old project"]);
        assert_eq!(drops.get(), 1);

        assert!(manage_projects(
            &mut parent,
            Runner {
                expected_mode: ManagerMode::Projects,
                result: ModalResult {
                    accepted: true,
                    items: vec!["New project".to_owned()],
                },
                drops: Rc::clone(&drops),
            },
        ));
        assert_eq!(parent.projects, ["New project"]);
        assert_eq!(parent.workspaces, ["Kept workspace"]);
        assert_eq!(drops.get(), 2);
    }

    #[test]
    fn workspace_launcher_refreshes_only_workspace_items() {
        let drops = Rc::new(Cell::new(0));
        let mut parent = ParentLists {
            projects: vec!["Kept project".to_owned()],
            workspaces: vec!["Old workspace".to_owned()],
        };
        assert!(manage_workspaces(
            &mut parent,
            Runner {
                expected_mode: ManagerMode::Workspaces,
                result: ModalResult {
                    accepted: true,
                    items: vec!["New workspace".to_owned()],
                },
                drops,
            },
        ));
        assert_eq!(parent.projects, ["Kept project"]);
        assert_eq!(parent.workspaces, ["New workspace"]);
    }
}
