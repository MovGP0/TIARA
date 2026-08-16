use std::path::{Path, PathBuf};

use iced::widget::{button, checkbox, column, row, text, text_input};
use iced::{Alignment, Element, Length, Task};
use rfd::AsyncFileDialog;
use tiara_core::circuit_files::{count_matching_files, matching_files, stem_before_first_dot};

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

pub trait CircuitTransformer {
    /// Loads the source circuit and writes a fresh target circuit.
    ///
    /// A false result means that the source did not produce a circuit and the
    /// caller must skip the output without stopping the batch.
    ///
    /// # Errors
    ///
    /// Returns a text error when the circuit cannot be loaded or serialized.
    fn rewrite(&mut self, source: &Path, target: &Path) -> Result<bool, String>;
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct BatchProgress {
    pub current: usize,
    pub total: usize,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct DecryptBatchResult {
    pub discovered: usize,
    pub processed: usize,
    pub written: usize,
    pub cancelled: bool,
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

    /// Ports Ghidra function `FUN_012f5900` at `0x012F5900`.
    ///
    /// The recovered coordinator runs only after the Decrypt Circuits dialog
    /// is accepted. It counts and enumerates direct `*.tsc` matches, rewrites
    /// each successfully loaded circuit to `target/stem + prefix + .tsc`,
    /// updates progress, and checks cancellation between files. Completed
    /// outputs are retained. The accepted settings are persisted after normal
    /// completion or cancellation, but not after a propagated transformer or
    /// enumeration error.
    ///
    /// # Errors
    ///
    /// Returns a text error when file discovery, circuit loading, or circuit
    /// serialization fails.
    pub fn run_accepted_batch<T, C, P>(
        &mut self,
        transformer: &mut T,
        is_cancelled: C,
        update_progress: P,
    ) -> Result<DecryptBatchResult, String>
    where
        T: CircuitTransformer,
        C: FnMut() -> bool,
        P: FnMut(BatchProgress),
    {
        let Some(request) = self.accepted_request.clone() else {
            return Ok(DecryptBatchResult::default());
        };

        let source_folder = Path::new(&request.source_folder);
        let total =
            count_matching_files(source_folder, "*.tsc").map_err(|error| error.to_string())?;
        let sources = matching_files(source_folder, "*.tsc").map_err(|error| error.to_string())?;
        let result = process_circuit_paths(
            &request,
            &sources,
            total,
            transformer,
            is_cancelled,
            update_progress,
        )?;
        self.load_decrypt_circuits_settings(&StoredSettings {
            source_folder: request.source_folder,
            target_folder: request.target_folder,
            target_prefix: request.target_prefix,
        });
        Ok(result)
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

fn process_circuit_paths<T, C, P>(
    request: &DecryptCircuitsRequest,
    sources: &[PathBuf],
    total: usize,
    transformer: &mut T,
    mut is_cancelled: C,
    mut update_progress: P,
) -> Result<DecryptBatchResult, String>
where
    T: CircuitTransformer,
    C: FnMut() -> bool,
    P: FnMut(BatchProgress),
{
    let mut result = DecryptBatchResult {
        discovered: total,
        ..DecryptBatchResult::default()
    };
    update_progress(BatchProgress {
        current: 0,
        total: result.discovered,
    });

    for source in sources {
        let file_name = source
            .file_name()
            .and_then(|name| name.to_str())
            .ok_or_else(|| format!("source path has no Unicode filename: {}", source.display()))?;
        let output_name = format!(
            "{}{}.tsc",
            stem_before_first_dot(file_name),
            request.target_prefix
        );
        let target = Path::new(&request.target_folder).join(output_name);
        if transformer.rewrite(source, &target)? {
            result.written += 1;
        }
        result.processed += 1;
        update_progress(BatchProgress {
            current: result.processed,
            total: result.discovered,
        });

        if is_cancelled() {
            result.cancelled = true;
            break;
        }
    }

    Ok(result)
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

    #[derive(Default)]
    struct Transformer {
        paths: Vec<(PathBuf, PathBuf)>,
        skip_first: bool,
    }

    impl CircuitTransformer for Transformer {
        fn rewrite(&mut self, source: &Path, target: &Path) -> Result<bool, String> {
            self.paths
                .push((source.to_path_buf(), target.to_path_buf()));
            let write = !self.skip_first || self.paths.len() > 1;
            Ok(write)
        }
    }

    #[test]
    fn batch_uses_first_dot_stem_skips_failed_load_and_cancels_between_files() {
        let request = DecryptCircuitsRequest {
            source_folder: "source".to_owned(),
            target_folder: "target".to_owned(),
            target_prefix: "_m".to_owned(),
        };
        let sources = vec![
            PathBuf::from("source/filter.old.tsc"),
            PathBuf::from("source/amplifier.tsc"),
        ];
        let mut transformer = Transformer {
            skip_first: true,
            ..Transformer::default()
        };
        let mut progress = Vec::new();
        let mut cancellation_checks = 0;

        let result = process_circuit_paths(
            &request,
            &sources,
            2,
            &mut transformer,
            || {
                cancellation_checks += 1;
                cancellation_checks == 1
            },
            |value| progress.push(value),
        )
        .expect("batch");

        assert_eq!(
            result,
            DecryptBatchResult {
                discovered: 2,
                processed: 1,
                written: 0,
                cancelled: true,
            }
        );
        assert_eq!(
            transformer.paths,
            [(
                PathBuf::from("source/filter.old.tsc"),
                PathBuf::from("target/filter_m.tsc")
            )]
        );
        assert_eq!(
            progress,
            [
                BatchProgress {
                    current: 0,
                    total: 2,
                },
                BatchProgress {
                    current: 1,
                    total: 2,
                },
            ]
        );
    }

    #[test]
    fn accepted_empty_source_persists_settings_and_reports_zero_progress() {
        let mut window = Window {
            accepted_request: Some(DecryptCircuitsRequest {
                source_folder: "missing-tiara-decrypt-source".to_owned(),
                target_folder: "target".to_owned(),
                target_prefix: "_decoded".to_owned(),
            }),
            ..Window::default()
        };
        let mut transformer = Transformer::default();
        let mut progress = Vec::new();

        let result = window
            .run_accepted_batch(&mut transformer, || false, |value| progress.push(value))
            .expect("batch");

        assert_eq!(result, DecryptBatchResult::default());
        assert_eq!(progress, [BatchProgress::default()]);
        assert_eq!(window.source_folder, "missing-tiara-decrypt-source");
        assert_eq!(window.target_folder, "target");
        assert_eq!(window.target_prefix, "_decoded");
    }
}
