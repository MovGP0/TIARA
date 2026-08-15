use std::path::PathBuf;

use csv::WriterBuilder;
use iced::widget::{button, column, row, text, text_input};
use iced::{Alignment, Element, Length, Task};
use rfd::AsyncFileDialog;

pub const TITLE: &str = "Clone TestBench";
pub const FORM_RESOURCE: &str = "CloneTestBench";

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct StoredSettings {
    pub source_folder: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CloneTestBenchRequest {
    pub source_folder: String,
    pub circuit_folders: String,
    pub source_prefix: String,
    pub target_prefixes: String,
}

#[derive(Debug, Clone)]
pub enum Message {
    SourceFolderChanged(String),
    CircuitFoldersChanged(String),
    SourcePrefixChanged(String),
    TargetPrefixesChanged(String),
    BrowseSourceFolder,
    BrowseCircuitFolder,
    ImportCircuitFolders,
    SourceFolderSelected(Option<PathBuf>),
    CircuitFolderSelected(Option<PathBuf>),
    CircuitFoldersImported(Result<Option<String>, String>),
    Accept,
    Cancel,
    Help,
}

#[derive(Debug)]
pub struct Window {
    source_folder: String,
    circuit_folders: String,
    source_prefix: String,
    target_prefixes: String,
    accepted_request: Option<CloneTestBenchRequest>,
    settings_loaded: bool,
    last_error: Option<String>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            source_folder: String::new(),
            circuit_folders: String::new(),
            source_prefix: "NJW4142".to_owned(),
            target_prefixes: "NJW4143,NJW4144".to_owned(),
            accepted_request: None,
            settings_loaded: false,
            last_error: None,
        }
    }
}

impl Window {
    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::SourceFolderChanged(value) => self.source_folder = value,
            Message::CircuitFoldersChanged(value) => self.circuit_folders = value,
            Message::SourcePrefixChanged(value) => self.source_prefix = value,
            Message::TargetPrefixesChanged(value) => self.target_prefixes = value,
            Message::BrowseSourceFolder => return self.select_source_folder(),
            Message::BrowseCircuitFolder => return self.select_circuit_folder(),
            Message::ImportCircuitFolders => return self.import_circuit_folders(),
            Message::SourceFolderSelected(selection) => {
                if let Some(path) = selection {
                    self.source_folder = path.to_string_lossy().into_owned();
                }
            }
            Message::CircuitFolderSelected(selection) => {
                if let Some(path) = selection {
                    self.circuit_folders = path.to_string_lossy().into_owned();
                }
            }
            Message::CircuitFoldersImported(result) => match result {
                Ok(Some(folders)) => self.circuit_folders = folders,
                Ok(None) => {}
                Err(error) => self.last_error = Some(error),
            },
            Message::Accept => self.capture_clone_test_bench_inputs(),
            Message::Cancel | Message::Help => {}
        }

        Task::none()
    }

    /// Ports Ghidra function `FUN_012e89c0` at `0x012E89C0`.
    ///
    /// The database maps the original function to
    /// `TCloneTestBench.bOKClick`. It captures the four edits without path,
    /// prefix, count, or file validation and leaves processing to the accepted
    /// modal caller.
    pub fn capture_clone_test_bench_inputs(&mut self) {
        self.accepted_request = Some(CloneTestBenchRequest {
            source_folder: self.source_folder.clone(),
            circuit_folders: self.circuit_folders.clone(),
            source_prefix: self.source_prefix.clone(),
            target_prefixes: self.target_prefixes.clone(),
        });
    }

    /// Ports Ghidra function `FUN_012e8ad0` at `0x012E8AD0`.
    ///
    /// The database maps the original function to
    /// `TCloneTestBench.bSourceFolderClick`. It opens an asynchronous folder
    /// picker seeded from a valid current directory and changes the edit only
    /// after acceptance.
    pub fn select_source_folder(&self) -> Task<Message> {
        Task::perform(
            pick_folder(self.source_folder.clone()),
            Message::SourceFolderSelected,
        )
    }

    /// Ports Ghidra function `FUN_012e8b60` at `0x012E8B60`.
    ///
    /// The database maps the original function to
    /// `TCloneTestBench.bCircuitFolderClick`. It applies the same accepted-only
    /// folder-selection rule to the circuit-folder edit.
    pub fn select_circuit_folder(&self) -> Task<Message> {
        Task::perform(
            pick_folder(self.circuit_folders.clone()),
            Message::CircuitFolderSelected,
        )
    }

    /// Ports Ghidra function `FUN_012e8bf0` at `0x012E8BF0`.
    ///
    /// The database maps the original function to
    /// `TCloneTestBench.bCircuitFoldersClick`. It selects a newline-separated
    /// text file, preserves line order, serializes the lines as one quoted CSV
    /// record, and replaces the circuit-folder edit only after success.
    pub fn import_circuit_folders(&self) -> Task<Message> {
        Task::perform(
            import_folder_lines(self.source_folder.clone()),
            Message::CircuitFoldersImported,
        )
    }

    /// Ports Ghidra function `FUN_012e8e40` at `0x012E8E40`.
    ///
    /// The database maps the original function to
    /// `TCloneTestBench.FormShow`. It loads the `CT_SourceFolder` value from an
    /// injected settings adapter and marks the settings session active.
    pub fn load_clone_test_bench_settings(&mut self, settings: &StoredSettings) {
        self.source_folder.clone_from(&settings.source_folder);
        self.settings_loaded = true;
    }

    /// Ports Ghidra function `FUN_012e8d40` at `0x012E8D40`.
    ///
    /// The database maps the original function to
    /// `TCloneTestBench.FormClose`. It returns the current source folder for
    /// persistence as `ModelTest Settings/CT_SourceFolder` and closes the
    /// injected settings session.
    #[must_use]
    pub fn persist_source_folder_on_close(&mut self) -> StoredSettings {
        self.settings_loaded = false;
        StoredSettings {
            source_folder: self.source_folder.clone(),
        }
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        column![
            folder_row(
                "Source folder:",
                &self.source_folder,
                Message::SourceFolderChanged,
                Message::BrowseSourceFolder,
            ),
            row![
                text("Circuit folder(s):").width(Length::Fixed(120.0)),
                text_input("", &self.circuit_folders)
                    .on_input(Message::CircuitFoldersChanged)
                    .width(Length::Fill),
                button("Select folder").on_press(Message::BrowseCircuitFolder),
                button("T").on_press(Message::ImportCircuitFolders),
            ]
            .spacing(8)
            .align_y(Alignment::Center),
            edit_row(
                "Source prefix:",
                &self.source_prefix,
                Message::SourcePrefixChanged
            ),
            edit_row(
                "Target prefix:",
                &self.target_prefixes,
                Message::TargetPrefixesChanged,
            ),
            row![
                button("OK").on_press(Message::Accept),
                button("Cancel").on_press(Message::Cancel),
                button("Help").on_press(Message::Help),
            ]
            .spacing(12),
        ]
        .padding(16)
        .spacing(12)
        .into()
    }
}

fn folder_row<'a>(
    label: &'a str,
    value: &'a str,
    on_input: fn(String) -> Message,
    browse: Message,
) -> iced::widget::Row<'a, Message> {
    row![
        text(label).width(Length::Fixed(120.0)),
        text_input("", value).on_input(on_input).width(Length::Fill),
        button("Select folder").on_press(browse),
    ]
    .spacing(8)
    .align_y(Alignment::Center)
}

fn edit_row<'a>(
    label: &'a str,
    value: &'a str,
    on_input: fn(String) -> Message,
) -> iced::widget::Row<'a, Message> {
    row![
        text(label).width(Length::Fixed(120.0)),
        text_input("", value)
            .on_input(on_input)
            .width(Length::Fixed(180.0)),
    ]
    .spacing(8)
    .align_y(Alignment::Center)
}

async fn pick_folder(initial_folder: String) -> Option<PathBuf> {
    let initial_folder = PathBuf::from(initial_folder);
    let dialog = if initial_folder.is_dir() {
        AsyncFileDialog::new().set_directory(initial_folder)
    } else {
        AsyncFileDialog::new()
    };

    dialog
        .pick_folder()
        .await
        .map(|handle| handle.path().to_path_buf())
}

async fn import_folder_lines(initial_folder: String) -> Result<Option<String>, String> {
    let initial_folder = PathBuf::from(initial_folder);
    let dialog = if initial_folder.is_dir() {
        AsyncFileDialog::new().set_directory(initial_folder)
    } else {
        AsyncFileDialog::new()
    };
    let Some(handle) = dialog.pick_file().await else {
        return Ok(None);
    };
    let contents = std::fs::read_to_string(handle.path()).map_err(|error| error.to_string())?;
    serialize_comma_text(contents.lines()).map(Some)
}

fn serialize_comma_text<'a>(lines: impl IntoIterator<Item = &'a str>) -> Result<String, String> {
    let mut writer = WriterBuilder::new()
        .has_headers(false)
        .from_writer(Vec::new());
    writer
        .write_record(lines)
        .map_err(|error| error.to_string())?;
    let mut bytes = writer.into_inner().map_err(|error| error.to_string())?;
    while matches!(bytes.last(), Some(b'\r' | b'\n')) {
        bytes.pop();
    }
    String::from_utf8(bytes).map_err(|error| error.to_string())
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn accept_captures_all_four_edits_without_validation() {
        let mut window = Window {
            source_folder: "source".to_owned(),
            circuit_folders: "one,two".to_owned(),
            source_prefix: "old".to_owned(),
            target_prefixes: "new1,new2".to_owned(),
            ..Window::default()
        };

        window.capture_clone_test_bench_inputs();

        assert_eq!(
            window.accepted_request,
            Some(CloneTestBenchRequest {
                source_folder: "source".to_owned(),
                circuit_folders: "one,two".to_owned(),
                source_prefix: "old".to_owned(),
                target_prefixes: "new1,new2".to_owned(),
            })
        );
    }

    #[test]
    fn folder_selection_updates_only_after_acceptance() {
        let mut window = Window {
            source_folder: "source".to_owned(),
            circuit_folders: "circuits".to_owned(),
            ..Window::default()
        };

        let _none = window.update(Message::SourceFolderSelected(None));
        assert_eq!(window.source_folder, "source");
        let _some = window.update(Message::CircuitFolderSelected(Some(PathBuf::from("new"))));
        assert_eq!(window.source_folder, "source");
        assert_eq!(window.circuit_folders, "new");
    }

    #[test]
    fn comma_text_quotes_paths_and_preserves_order() -> Result<(), String> {
        let serialized = serialize_comma_text(["first path", "second,path", "third"])?;

        assert_eq!(serialized, "first path,\"second,path\",third");
        Ok(())
    }

    #[test]
    fn show_and_close_exchange_only_source_folder_settings() {
        let mut window = Window::default();
        window.load_clone_test_bench_settings(&StoredSettings {
            source_folder: "saved".to_owned(),
        });
        window.source_folder = "changed".to_owned();

        let stored = window.persist_source_folder_on_close();

        assert_eq!(stored.source_folder, "changed");
        assert!(!window.settings_loaded);
    }
}
