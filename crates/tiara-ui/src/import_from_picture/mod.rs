//! Iced state and command surface for Import From Picture.

use iced::widget::{button, column, row, scrollable, text, text_input};
use iced::{Element, Task};
use std::path::{Path, PathBuf};
use tiara_core::import_from_picture::WorkflowStage;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CloseAction {
    Hide,
    Free,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum TrainingExportPresentation {
    VisibleEnabled,
    HiddenDisabled,
}

pub trait ScaleSettingsStore {
    type Error;

    /// Writes one string to the application settings store.
    ///
    /// # Errors
    ///
    /// Returns the application-specific persistence error.
    fn write_string(&mut self, name: &str, section: &str, value: &str) -> Result<(), Self::Error>;
}

pub trait ScaleSettingsReader {
    fn read_string(&self, name: &str, section: &str) -> Option<String>;
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    Shown,
    LoadJsonRequested,
    SaveJsonRequested,
    RemoveWiresRequested,
    AutoRouteRequested,
    ScaleRequested,
    TrainingExportRequested,
    OpenPictureRequested,
    OpenNetlistRequested,
    ScaleValueChanged(String),
    WorkflowChanged {
        selected_json_path: Option<PathBuf>,
        stage: WorkflowStage,
        status_lines: Vec<String>,
    },
    PictureSelectionChanged(Option<PathBuf>),
    NetlistSelectionChanged(Option<PathBuf>),
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct State {
    scale_value: String,
    selected_json_path: Option<PathBuf>,
    picture_path: Option<PathBuf>,
    netlist_path: Option<PathBuf>,
    stage: WorkflowStage,
    status_lines: Vec<String>,
    training_export_presentation: TrainingExportPresentation,
}

impl Default for State {
    fn default() -> Self {
        Self {
            scale_value: "1".to_owned(),
            selected_json_path: None,
            picture_path: None,
            netlist_path: None,
            stage: WorkflowStage::Loaded,
            status_lines: Vec::new(),
            training_export_presentation: TrainingExportPresentation::VisibleEnabled,
        }
    }
}

impl State {
    /// Resets working state and restores the scale edit.
    ///
    /// Implements Ghidra function `FUN_01a2a720` at `0x01A2A720`
    /// (`TImportFromPicture.FormCreate`). It clears reconstructed paths,
    /// working objects, flags, and status lines, then reads
    /// `LLMLocalv3/ScaleComps`. A missing value uses the neutral scale text
    /// `1`; a present value is copied without validation or normalization.
    pub fn on_create(&mut self, settings: &impl ScaleSettingsReader) {
        self.selected_json_path = None;
        self.picture_path = None;
        self.netlist_path = None;
        self.stage = WorkflowStage::Loaded;
        self.status_lines.clear();
        self.training_export_presentation = TrainingExportPresentation::VisibleEnabled;
        self.scale_value = settings
            .read_string("ScaleComps", "LLMLocalv3")
            .unwrap_or_else(|| "1".to_owned());
    }

    /// Releases the form-owned status string list.
    ///
    /// Implements Ghidra function `FUN_01a2a870` at `0x01A2A870`
    /// (`TImportFromPicture.FormDestroy`). Rust ownership replaces the
    /// explicit Delphi object destruction. Taking and dropping the vector
    /// releases its allocation without changing other form state.
    pub fn on_destroy(&mut self) {
        drop(std::mem::take(&mut self.status_lines));
    }

    /// Hides and disables the developer training-export control.
    ///
    /// Implements Ghidra function `FUN_01a2a890` at `0x01A2A890`
    /// (`TImportFromPicture.FormShow`). The recovered handler applies both
    /// properties to the same form control and changes no workflow data.
    pub const fn on_show(&mut self) {
        self.training_export_presentation = TrainingExportPresentation::HiddenDisabled;
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::Shown => self.on_show(),
            Message::ScaleValueChanged(value) => self.scale_value = value,
            Message::WorkflowChanged {
                selected_json_path,
                stage,
                status_lines,
            } => {
                self.selected_json_path = selected_json_path;
                self.stage = stage;
                self.status_lines = status_lines;
            }
            Message::PictureSelectionChanged(path) => self.picture_path = path,
            Message::NetlistSelectionChanged(path) => self.netlist_path = path,
            Message::LoadJsonRequested
            | Message::SaveJsonRequested
            | Message::RemoveWiresRequested
            | Message::AutoRouteRequested
            | Message::ScaleRequested
            | Message::TrainingExportRequested
            | Message::OpenPictureRequested
            | Message::OpenNetlistRequested => {}
        }
        Task::none()
    }

    /// Parses the staged scale value for the core workflow adapter.
    ///
    /// # Errors
    ///
    /// Returns an error when the edit does not contain a floating-point value.
    pub fn scale_factor(&self) -> Result<f64, std::num::ParseFloatError> {
        self.scale_value.parse()
    }

    /// Selects free-on-close and persists the exact scale edit.
    ///
    /// Implements Ghidra function `FUN_01a2a660` at `0x01A2A660`
    /// (`TImportFromPicture.FormClose`). The close action changes before the
    /// application store writes `LLMLocalv3/ScaleComps`. The text is not
    /// parsed, validated, or normalized.
    ///
    /// # Errors
    ///
    /// Returns the settings-store error. The close action remains
    /// [`CloseAction::Free`] when persistence fails.
    pub fn on_close<Store>(
        &self,
        action: &mut CloseAction,
        store: &mut Store,
    ) -> Result<(), Store::Error>
    where
        Store: ScaleSettingsStore,
    {
        *action = CloseAction::Free;
        store.write_string("ScaleComps", "LLMLocalv3", &self.scale_value)
    }

    #[must_use]
    pub fn selected_json_path(&self) -> Option<&Path> {
        self.selected_json_path.as_deref()
    }

    #[must_use]
    pub const fn stage(&self) -> WorkflowStage {
        self.stage
    }

    #[must_use]
    pub fn status_lines(&self) -> &[String] {
        &self.status_lines
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let status = self.status_lines.join("\n");
        let mut workflow_controls = row![
            button("Remove Wires").on_press(Message::RemoveWiresRequested),
            button("AutoRoute").on_press(Message::AutoRouteRequested),
            text_input("Scale", &self.scale_value).on_input(Message::ScaleValueChanged),
            button("Scale circuit...").on_press(Message::ScaleRequested),
        ]
        .spacing(8);
        if self.training_export_presentation == TrainingExportPresentation::VisibleEnabled {
            workflow_controls = workflow_controls
                .push(button("Test...").on_press(Message::TrainingExportRequested));
        }
        column![
            row![
                button("Load Circuit from JSON...").on_press(Message::LoadJsonRequested),
                button("Save Circuit to JSON...").on_press(Message::SaveJsonRequested),
            ]
            .spacing(8),
            workflow_controls,
            row![
                button("Open Picture...").on_press(Message::OpenPictureRequested),
                text(
                    self.picture_path
                        .as_ref()
                        .and_then(|path| path.file_name())
                        .map_or_else(String::new, |name| name.to_string_lossy().into_owned())
                ),
                button("Open Netlist...").on_press(Message::OpenNetlistRequested),
                text(
                    self.netlist_path
                        .as_ref()
                        .and_then(|path| path.file_name())
                        .map_or_else(String::new, |name| name.to_string_lossy().into_owned())
                ),
            ]
            .spacing(8),
            scrollable(text(status)),
        ]
        .spacing(10)
        .into()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Default, PartialEq, Eq)]
    struct RecordingScaleStore {
        writes: Vec<(String, String, String)>,
        fail: bool,
    }

    #[derive(Debug, Default)]
    struct ScaleReader {
        value: Option<String>,
    }

    impl ScaleSettingsReader for ScaleReader {
        fn read_string(&self, name: &str, section: &str) -> Option<String> {
            assert_eq!(name, "ScaleComps");
            assert_eq!(section, "LLMLocalv3");
            self.value.clone()
        }
    }

    impl ScaleSettingsStore for RecordingScaleStore {
        type Error = &'static str;

        fn write_string(
            &mut self,
            name: &str,
            section: &str,
            value: &str,
        ) -> Result<(), Self::Error> {
            self.writes
                .push((name.to_owned(), section.to_owned(), value.to_owned()));
            if self.fail {
                Err("write failed")
            } else {
                Ok(())
            }
        }
    }

    #[test]
    fn workflow_result_replaces_visible_stage_path_and_status() {
        let mut state = State::default();
        drop(state.update(Message::WorkflowChanged {
            selected_json_path: Some(PathBuf::from("input.json")),
            stage: WorkflowStage::AutoRouted,
            status_lines: vec!["converted".to_owned(), String::new()],
        }));

        assert_eq!(
            state.selected_json_path(),
            Some(PathBuf::from("input.json").as_path())
        );
        assert_eq!(state.stage(), WorkflowStage::AutoRouted);
        assert_eq!(state.status_lines(), ["converted", ""]);
    }

    #[test]
    fn scale_input_is_parsed_only_when_the_command_adapter_requests_it() {
        let mut state = State::default();
        drop(state.update(Message::ScaleValueChanged("1.25".to_owned())));
        assert!((state.scale_factor().expect("scale") - 1.25).abs() <= f64::EPSILON);

        drop(state.update(Message::ScaleValueChanged("invalid".to_owned())));
        assert!(state.scale_factor().is_err());
    }

    #[test]
    fn canceled_external_picker_preserves_no_selected_path() {
        let mut state = State::default();
        drop(state.update(Message::PictureSelectionChanged(None)));
        drop(state.update(Message::NetlistSelectionChanged(None)));
        assert!(state.picture_path.is_none());
        assert!(state.netlist_path.is_none());
    }

    #[test]
    fn form_close_frees_window_and_persists_exact_scale_text() {
        let mut state = State::default();
        drop(state.update(Message::ScaleValueChanged(" invalid scale ".to_owned())));
        let mut action = CloseAction::Hide;
        let mut store = RecordingScaleStore::default();

        state
            .on_close(&mut action, &mut store)
            .expect("persist scale value");

        assert_eq!(action, CloseAction::Free);
        assert_eq!(
            store.writes,
            [(
                "ScaleComps".to_owned(),
                "LLMLocalv3".to_owned(),
                " invalid scale ".to_owned(),
            )]
        );
    }

    #[test]
    fn form_close_keeps_free_action_when_scale_persistence_fails() {
        let state = State::default();
        let mut action = CloseAction::Hide;
        let mut store = RecordingScaleStore {
            fail: true,
            ..RecordingScaleStore::default()
        };

        assert_eq!(state.on_close(&mut action, &mut store), Err("write failed"));
        assert_eq!(action, CloseAction::Free);
    }

    #[test]
    fn form_create_resets_working_state_and_restores_exact_scale_text() {
        let mut state = State {
            scale_value: "old".to_owned(),
            selected_json_path: Some(PathBuf::from("circuit.json")),
            picture_path: Some(PathBuf::from("picture.png")),
            netlist_path: Some(PathBuf::from("circuit.net")),
            stage: WorkflowStage::Scaled,
            status_lines: vec!["old status".to_owned()],
            training_export_presentation: TrainingExportPresentation::VisibleEnabled,
        };
        let reader = ScaleReader {
            value: Some(" invalid stored scale ".to_owned()),
        };

        state.on_create(&reader);

        assert_eq!(state.scale_value, " invalid stored scale ");
        assert!(state.selected_json_path.is_none());
        assert!(state.picture_path.is_none());
        assert!(state.netlist_path.is_none());
        assert_eq!(state.stage, WorkflowStage::Loaded);
        assert!(state.status_lines.is_empty());
    }

    #[test]
    fn form_create_uses_neutral_scale_when_setting_is_missing() {
        let mut state = State {
            scale_value: "old".to_owned(),
            ..State::default()
        };

        state.on_create(&ScaleReader::default());

        assert_eq!(state.scale_value, "1");
    }

    #[test]
    fn form_destroy_releases_status_list_only() {
        let mut state = State {
            scale_value: "2".to_owned(),
            selected_json_path: Some(PathBuf::from("circuit.json")),
            stage: WorkflowStage::AutoRouted,
            status_lines: vec!["one".to_owned(), "two".to_owned()],
            ..State::default()
        };

        state.on_destroy();

        assert!(state.status_lines.is_empty());
        assert_eq!(state.status_lines.capacity(), 0);
        assert_eq!(state.scale_value, "2");
        assert_eq!(
            state.selected_json_path(),
            Some(PathBuf::from("circuit.json").as_path())
        );
        assert_eq!(state.stage(), WorkflowStage::AutoRouted);
    }

    #[test]
    fn form_show_hides_and_disables_training_export_only() {
        let mut state = State {
            scale_value: "2".to_owned(),
            selected_json_path: Some(PathBuf::from("circuit.json")),
            training_export_presentation: TrainingExportPresentation::VisibleEnabled,
            ..State::default()
        };

        drop(state.update(Message::Shown));

        assert_eq!(
            state.training_export_presentation,
            TrainingExportPresentation::HiddenDisabled
        );
        assert_eq!(state.scale_value, "2");
        assert_eq!(
            state.selected_json_path(),
            Some(PathBuf::from("circuit.json").as_path())
        );
    }
}
