use std::path::PathBuf;

use iced::widget::{button, checkbox, column, row, text, text_input};
use iced::{Alignment, Element, Length, Task};
use rfd::AsyncFileDialog;

pub const TITLE: &str = "Decrypt Circuits";
pub const FORM_RESOURCE: &str = "DecryptCircuits";

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct StoredSettings {
    pub source_folder: String,
    pub target_folder: String,
    pub target_prefix: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct DecryptCircuitsRequest {
    pub source_folder: String,
    pub target_folder: String,
    pub target_prefix: String,
}

#[derive(Debug, Clone)]
pub enum Message {
    SourceFolderChanged(String),
    TargetFolderChanged(String),
    TargetPrefixChanged(String),
    TargetSameChanged(bool),
    BrowseSourceFolder,
    BrowseTargetFolder,
    SourceFolderSelected(Option<PathBuf>),
    TargetFolderSelected(Option<PathBuf>),
    Accept,
    Cancel,
    Help,
}

#[derive(Debug)]
pub struct Window {
    source_folder: String,
    target_folder: String,
    target_prefix: String,
    target_same: bool,
    settings_loaded: bool,
    accepted_request: Option<DecryptCircuitsRequest>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            source_folder: String::new(),
            target_folder: String::new(),
            target_prefix: "_m".to_owned(),
            target_same: false,
            settings_loaded: false,
            accepted_request: None,
        }
    }
}

impl Window {
    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::SourceFolderChanged(value) => self.source_folder = value,
            Message::TargetFolderChanged(value) => self.target_folder = value,
            Message::TargetPrefixChanged(value) => self.target_prefix = value,
            Message::TargetSameChanged(value) => self.target_same = value,
            Message::BrowseSourceFolder => return self.select_source_folder(),
            Message::BrowseTargetFolder => return self.select_target_folder(),
            Message::SourceFolderSelected(selection) => {
                if let Some(path) = selection {
                    self.source_folder = path.to_string_lossy().into_owned();
                }
            }
            Message::TargetFolderSelected(selection) => {
                if let Some(path) = selection {
                    self.target_folder = path.to_string_lossy().into_owned();
                }
            }
            Message::Accept => self.stage_accepted_settings(),
            Message::Cancel | Message::Help => {}
        }

        Task::none()
    }

    /// Ports Ghidra function `FUN_012e7c80` at `0x012E7C80`.
    ///
    /// The database maps the original function to
    /// `TDecryptCircuits.FormCreate`. It clears the form's settings-loaded
    /// marker without changing the DFM-provided target-prefix default.
    pub const fn initialize_decrypt_circuits_dialog(&mut self) {
        self.settings_loaded = false;
    }

    /// Ports Ghidra function `FUN_012e7c90` at `0x012E7C90`.
    ///
    /// The database maps the original function to
    /// `TDecryptCircuits.FormShow`. The original reads the three `ModelTest`
    /// Settings values from TINA.INI. The Rust port receives those values from
    /// an injected settings adapter and stages them in the visible controls.
    pub fn load_decrypt_circuits_settings(&mut self, settings: &StoredSettings) {
        self.source_folder.clone_from(&settings.source_folder);
        self.target_folder.clone_from(&settings.target_folder);
        self.target_prefix.clone_from(&settings.target_prefix);
        self.settings_loaded = true;
    }

    /// Ports Ghidra function `FUN_012e7b60` at `0x012E7B60`.
    ///
    /// The database maps the original function to
    /// `TDecryptCircuits.bSourceFolderClick`. It seeds an asynchronous folder
    /// picker only when the current edit names an existing directory. A
    /// canceled picker produces `None`, so the visible edit stays unchanged.
    pub fn select_source_folder(&self) -> Task<Message> {
        Task::perform(
            pick_folder(self.source_folder.clone()),
            Message::SourceFolderSelected,
        )
    }

    /// Ports Ghidra function `FUN_012e7bf0` at `0x012E7BF0`.
    ///
    /// The database maps the original function to
    /// `TDecryptCircuits.bTargetFolderClick`. It follows the same accepted-only
    /// update rule as the source picker and leaves the edit unchanged on
    /// cancellation or picker failure.
    pub fn select_target_folder(&self) -> Task<Message> {
        Task::perform(
            pick_folder(self.target_folder.clone()),
            Message::TargetFolderSelected,
        )
    }

    /// Ports Ghidra function `FUN_012e7a40` at `0x012E7A40`.
    ///
    /// The database maps the original function to
    /// `TDecryptCircuits.bOKClick`. It copies all three visible values without
    /// validation and overrides only the staged target folder when the
    /// same-directory option is selected.
    pub fn stage_accepted_settings(&mut self) {
        let target_folder = if self.target_same {
            self.source_folder.clone()
        } else {
            self.target_folder.clone()
        };

        self.accepted_request = Some(DecryptCircuitsRequest {
            source_folder: self.source_folder.clone(),
            target_folder,
            target_prefix: self.target_prefix.clone(),
        });
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        column![
            row![
                text("Source folder:").width(Length::Fixed(110.0)),
                text_input("", &self.source_folder)
                    .on_input(Message::SourceFolderChanged)
                    .width(Length::Fill),
                button("Select folder").on_press(Message::BrowseSourceFolder),
            ]
            .spacing(8)
            .align_y(Alignment::Center),
            row![
                text("Target folder:").width(Length::Fixed(110.0)),
                text_input("", &self.target_folder)
                    .on_input(Message::TargetFolderChanged)
                    .width(Length::Fill),
                button("Select folder").on_press(Message::BrowseTargetFolder),
            ]
            .spacing(8)
            .align_y(Alignment::Center),
            checkbox("Target and source directory same", self.target_same)
                .on_toggle(Message::TargetSameChanged),
            row![
                text("Target file prefix:").width(Length::Fixed(110.0)),
                text_input("", &self.target_prefix)
                    .on_input(Message::TargetPrefixChanged)
                    .width(Length::Fixed(160.0)),
            ]
            .spacing(8)
            .align_y(Alignment::Center),
            row![
                button("OK").on_press(Message::Accept),
                button("Cancel").on_press(Message::Cancel),
                button("Help").on_press(Message::Help),
            ]
            .spacing(12),
        ]
        .padding(16)
        .spacing(14)
        .into()
    }
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

#[cfg(test)]
mod tests {
    use std::path::Path;

    use super::*;

    #[test]
    fn create_clears_only_the_settings_loaded_marker() {
        let mut window = Window {
            settings_loaded: true,
            ..Window::default()
        };

        window.initialize_decrypt_circuits_dialog();

        assert!(!window.settings_loaded);
        assert_eq!(window.target_prefix, "_m");
    }

    #[test]
    fn show_loads_all_three_stored_values() {
        let mut window = Window::default();
        let settings = StoredSettings {
            source_folder: "source".to_owned(),
            target_folder: "target".to_owned(),
            target_prefix: "_decoded".to_owned(),
        };

        window.load_decrypt_circuits_settings(&settings);

        assert_eq!(window.source_folder, "source");
        assert_eq!(window.target_folder, "target");
        assert_eq!(window.target_prefix, "_decoded");
        assert!(window.settings_loaded);
    }

    #[test]
    fn accepted_settings_override_only_the_staged_target() {
        let mut window = Window {
            source_folder: "source".to_owned(),
            target_folder: "visible target".to_owned(),
            target_prefix: "_m".to_owned(),
            target_same: true,
            ..Window::default()
        };

        window.stage_accepted_settings();

        assert_eq!(window.target_folder, "visible target");
        assert_eq!(
            window.accepted_request,
            Some(DecryptCircuitsRequest {
                source_folder: "source".to_owned(),
                target_folder: "source".to_owned(),
                target_prefix: "_m".to_owned(),
            })
        );
    }

    #[test]
    fn canceled_folder_result_keeps_visible_edits() {
        let mut window = Window {
            source_folder: "source".to_owned(),
            target_folder: "target".to_owned(),
            ..Window::default()
        };

        let _source_task = window.update(Message::SourceFolderSelected(None));
        let _target_task = window.update(Message::TargetFolderSelected(None));

        assert_eq!(window.source_folder, "source");
        assert_eq!(window.target_folder, "target");
    }

    #[test]
    fn accepted_folder_results_replace_only_the_matching_edit() {
        let mut window = Window {
            source_folder: "source".to_owned(),
            target_folder: "target".to_owned(),
            ..Window::default()
        };

        let _source_task = window.update(Message::SourceFolderSelected(Some(PathBuf::from(
            "new source",
        ))));
        assert_eq!(
            window.source_folder,
            Path::new("new source").to_string_lossy()
        );
        assert_eq!(window.target_folder, "target");

        let _target_task = window.update(Message::TargetFolderSelected(Some(PathBuf::from(
            "new target",
        ))));
        assert_eq!(
            window.source_folder,
            Path::new("new source").to_string_lossy()
        );
        assert_eq!(
            window.target_folder,
            Path::new("new target").to_string_lossy()
        );
    }
}
