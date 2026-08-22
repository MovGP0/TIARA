//! Iced state and command surface for Import From Picture.

use iced::widget::{button, column, row, scrollable, text, text_input};
use iced::{Element, Task};
use std::path::{Path, PathBuf};
use tiara_core::import_from_picture::WorkflowStage;

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
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
        }
    }
}

impl State {
    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
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
        column![
            row![
                button("Load Circuit from JSON...").on_press(Message::LoadJsonRequested),
                button("Save Circuit to JSON...").on_press(Message::SaveJsonRequested),
            ]
            .spacing(8),
            row![
                button("Remove Wires").on_press(Message::RemoveWiresRequested),
                button("AutoRoute").on_press(Message::AutoRouteRequested),
                text_input("Scale", &self.scale_value).on_input(Message::ScaleValueChanged),
                button("Scale circuit...").on_press(Message::ScaleRequested),
                button("Test...").on_press(Message::TrainingExportRequested),
            ]
            .spacing(8),
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
}
