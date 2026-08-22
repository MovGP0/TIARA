use std::fmt;
use std::io;
use std::path::{Path, PathBuf};

use iced::widget::{
    button, checkbox, column, container, horizontal_space, pick_list, radio, row, scrollable, text,
    text_input,
};
use iced::{Alignment, Element, Length};
use tiara_core::pcb_component_wizard::{
    BoardDimensions, DisplayUnit, PcbLaunchRequest, PcbSetup, ProjectEntry, TemplateAccess,
    dimensions_from_mils, dimensions_to_mils, discover_projects, read_template_dimensions,
};

use crate::shared::window_shell;

pub const TITLE: &str = "PCB Component Wizard";
pub const SCREENSHOT: &str = "screenshots/PCB_Component_Wizard.png";
pub const FORM_RESOURCE: &str = "PCBWizard";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01bb2d60");
const STATUS: &str = "Prepare a PCB project";
const TOOLBAR: &[&str] = &[];

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ProjectMode {
    Existing,
    New,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TemplateMode {
    Template,
    ManualSize,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
#[allow(clippy::struct_excessive_bools)]
pub struct ControlState {
    pub project_inputs: bool,
    pub new_project_inputs: bool,
    pub template_inputs: bool,
    pub dimension_inputs: bool,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ValidationError {
    InvalidBoardDimensions,
    MissingExistingProject,
}

impl fmt::Display for ValidationError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::InvalidBoardDimensions => formatter.write_str("Enter valid board dimensions."),
            Self::MissingExistingProject => {
                formatter.write_str("No existing PCB project is available.")
            }
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum WizardError {
    Persistence(String),
}

impl fmt::Display for WizardError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::Persistence(message) => formatter.write_str(message),
        }
    }
}

impl std::error::Error for WizardError {}

/// Persists the six recovered values in the PCB Setup section.
pub trait SettingsStore {
    /// Persists the current wizard setup.
    ///
    /// # Errors
    ///
    /// Returns [`WizardError`] when the settings sink cannot write the values.
    fn persist(&mut self, setup: &PcbSetup) -> Result<(), WizardError>;
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TemplateSelection {
    pub full_path: PathBuf,
    pub display_text: String,
}

pub trait TemplateDialog {
    fn select_template(&mut self, initial_directory: &Path) -> Option<TemplateSelection>;
}

#[derive(Debug, Clone, PartialEq)]
pub enum AcceptOutcome {
    Blocked(ValidationError),
    Prepared(PcbLaunchRequest),
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Action {
    ReloadProjects,
    RefreshTemplate,
    BrowseTemplate,
    Accept,
    Cancel,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    ProjectModeSelected(ProjectMode),
    ShowAllChanged(bool),
    ProjectSelected(String),
    AutoPlacementChanged(bool),
    AutoRouteChanged(bool),
    TemplateModeSelected(TemplateMode),
    BoardWidthChanged(String),
    BoardHeightChanged(String),
    BrowseTemplate,
    Accept,
    Cancel,
    NoOp,
}

#[derive(Debug)]
pub struct Window {
    active_input: PathBuf,
    unit: DisplayUnit,
    project_mode: ProjectMode,
    template_mode: TemplateMode,
    controls: ControlState,
    show_all_projects: bool,
    projects: Vec<ProjectEntry>,
    selected_project: Option<String>,
    auto_placement: bool,
    auto_route: bool,
    template_path: Option<PathBuf>,
    template_label: String,
    board_width: String,
    board_height: String,
    validation_error: Option<ValidationError>,
    launch_request: Option<PcbLaunchRequest>,
    pending_action: Option<Action>,
}

impl Default for Window {
    fn default() -> Self {
        Self::new(PathBuf::new(), DisplayUnit::Inch)
    }
}

impl Window {
    #[must_use]
    pub const fn new(active_input: PathBuf, unit: DisplayUnit) -> Self {
        Self {
            active_input,
            unit,
            project_mode: ProjectMode::New,
            template_mode: TemplateMode::Template,
            controls: ControlState {
                project_inputs: false,
                new_project_inputs: true,
                template_inputs: true,
                dimension_inputs: true,
            },
            show_all_projects: false,
            projects: Vec::new(),
            selected_project: None,
            auto_placement: false,
            auto_route: false,
            template_path: None,
            template_label: String::new(),
            board_width: String::new(),
            board_height: String::new(),
            validation_error: None,
            launch_request: None,
            pending_action: None,
        }
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::ProjectModeSelected(ProjectMode::Existing) => {
                self.select_existing_project_mode();
            }
            Message::ProjectModeSelected(ProjectMode::New) => self.select_new_project_mode(),
            Message::ShowAllChanged(show_all) if self.controls.project_inputs => {
                self.show_all_projects = show_all;
                self.pending_action = Some(Action::ReloadProjects);
            }
            Message::ProjectSelected(project) if self.controls.project_inputs => {
                self.selected_project = Some(project);
            }
            Message::AutoPlacementChanged(selected) if self.controls.new_project_inputs => {
                self.auto_placement = selected;
            }
            Message::AutoRouteChanged(selected) if self.controls.new_project_inputs => {
                self.auto_route = selected;
            }
            Message::TemplateModeSelected(TemplateMode::Template)
                if self.controls.new_project_inputs =>
            {
                self.template_mode = TemplateMode::Template;
                self.controls.template_inputs = true;
                self.pending_action = Some(Action::RefreshTemplate);
            }
            Message::TemplateModeSelected(TemplateMode::ManualSize)
                if self.controls.new_project_inputs =>
            {
                self.select_manual_size_mode();
            }
            Message::BoardWidthChanged(value) if self.controls.dimension_inputs => {
                self.board_width = value;
            }
            Message::BoardHeightChanged(value) if self.controls.dimension_inputs => {
                self.board_height = value;
            }
            Message::BrowseTemplate if self.controls.template_inputs => {
                self.pending_action = Some(Action::BrowseTemplate);
            }
            Message::Accept => self.pending_action = Some(Action::Accept),
            Message::Cancel => self.pending_action = Some(Action::Cancel),
            Message::ShowAllChanged(_)
            | Message::ProjectSelected(_)
            | Message::AutoPlacementChanged(_)
            | Message::AutoRouteChanged(_)
            | Message::TemplateModeSelected(_)
            | Message::BoardWidthChanged(_)
            | Message::BoardHeightChanged(_)
            | Message::BrowseTemplate
            | Message::NoOp => {}
        }
    }

    #[must_use]
    pub const fn take_action(&mut self) -> Option<Action> {
        self.pending_action.take()
    }

    /// Enables only the controls used to modify an existing project.
    ///
    /// Reimplements Ghidra function `FUN_01bb2840` at `0x01BB2840`.
    pub const fn select_existing_project_mode(&mut self) {
        self.project_mode = ProjectMode::Existing;
        self.controls = ControlState {
            project_inputs: true,
            new_project_inputs: false,
            template_inputs: false,
            dimension_inputs: false,
        };
    }

    /// Enables the new-project, template, and dimension controls.
    ///
    /// Reimplements Ghidra function `FUN_01bb29d0` at `0x01BB29D0`. The
    /// handler retains all current values and enables template input without
    /// inspecting the retained template radio state.
    pub const fn select_new_project_mode(&mut self) {
        self.project_mode = ProjectMode::New;
        self.controls = ControlState {
            project_inputs: false,
            new_project_inputs: true,
            template_inputs: true,
            dimension_inputs: true,
        };
    }

    /// Rebuilds the existing-project list and selects the first entry.
    ///
    /// Reimplements Ghidra function `FUN_01bb2980` at `0x01BB2980` and uses
    /// the standard-library project enumerator for `FUN_01bb1cf0`.
    ///
    /// # Errors
    ///
    /// Returns an I/O error when the active document directory cannot be read.
    pub fn rebuild_projects(&mut self) -> io::Result<()> {
        let projects = discover_projects(&self.active_input, self.show_all_projects)?;
        self.replace_projects(projects);
        Ok(())
    }

    fn replace_projects(&mut self, projects: Vec<ProjectEntry>) {
        self.selected_project = projects.first().map(|project| project.file_name.clone());
        self.projects = projects;
    }

    /// Enables template input and refreshes the dimensions from the stored path.
    ///
    /// Reimplements Ghidra function `FUN_01bb2b10` at `0x01BB2B10`.
    ///
    /// # Errors
    ///
    /// Returns [`ValidationError`] when either dimension edit is not numeric.
    pub fn select_template_mode(
        &mut self,
        templates: &impl TemplateAccess,
    ) -> Result<(), ValidationError> {
        self.template_mode = TemplateMode::Template;
        self.controls.template_inputs = true;
        self.refresh_dimensions_from_template(templates)
    }

    /// Selects a template file and refreshes the displayed dimensions.
    ///
    /// Reimplements Ghidra function `FUN_01bb2b90` at `0x01BB2B90`. Cancel
    /// leaves the path, label, and dimensions unchanged.
    ///
    /// # Errors
    ///
    /// Returns [`ValidationError`] when an accepted selection finds nonnumeric
    /// fallback dimensions.
    pub fn browse_template(
        &mut self,
        application_directory: &Path,
        dialog: &mut impl TemplateDialog,
        templates: &impl TemplateAccess,
    ) -> Result<(), ValidationError> {
        let Some(selection) = dialog.select_template(&application_directory.join("Templates"))
        else {
            return Ok(());
        };
        self.template_label = selection.display_text;
        self.template_path = Some(selection.full_path);
        self.refresh_dimensions_from_template(templates)
    }

    /// Disables template-file input and retains its path and dimensions.
    ///
    /// Reimplements Ghidra function `FUN_01bb2d20` at `0x01BB2D20`.
    pub const fn select_manual_size_mode(&mut self) {
        self.template_mode = TemplateMode::ManualSize;
        self.controls.template_inputs = false;
    }

    fn refresh_dimensions_from_template(
        &mut self,
        templates: &impl TemplateAccess,
    ) -> Result<(), ValidationError> {
        let fallback = dimensions_to_mils(self.read_display_dimensions()?, self.unit);
        let dimensions = self.template_path.as_deref().map_or(fallback, |path| {
            read_template_dimensions(templates, path, fallback)
        });
        self.write_dimensions_from_mils(dimensions);
        Ok(())
    }

    /// Clears numeric error state and evaluates both dimension edits.
    ///
    /// Reimplements Ghidra function `FUN_01bb3cc0` at `0x01BB3CC0`.
    pub fn reset_and_validate_dimensions(&mut self) {
        self.validation_error = self
            .read_display_dimensions()
            .err()
            .map(|_| ValidationError::InvalidBoardDimensions);
    }

    /// Tests whether the current wizard input can be accepted.
    ///
    /// Reimplements Ghidra function `FUN_01bb3d90` at `0x01BB3D90`.
    #[must_use]
    pub fn can_accept(&self) -> bool {
        self.validation_error.is_none()
            && (self.project_mode != ProjectMode::Existing || !self.projects.is_empty())
    }

    /// Applies the recovered OK-only close-query gate.
    ///
    /// Reimplements Ghidra function `FUN_01bb2810` at `0x01BB2810`.
    #[must_use]
    pub fn can_close(&self, accepting: bool) -> bool {
        !accepting || self.can_accept()
    }

    /// Validates input, persists setup, and prepares a structured launch request.
    ///
    /// Reimplements Ghidra function `FUN_01bb2d60` at `0x01BB2D60`. A
    /// structured request replaces the recovered opaque command string. The
    /// launcher adapter can encode supported command-line options without
    /// inventing names that the recovered evidence does not expose.
    ///
    /// # Errors
    ///
    /// Returns [`WizardError`] when the settings sink cannot persist the setup.
    pub fn accept(
        &mut self,
        store: &mut impl SettingsStore,
        templates: &impl TemplateAccess,
    ) -> Result<AcceptOutcome, WizardError> {
        self.reset_and_validate_dimensions();
        if !self.can_accept() {
            let error = self.validation_error.clone().unwrap_or_else(|| {
                self.validation_error = Some(ValidationError::MissingExistingProject);
                ValidationError::MissingExistingProject
            });
            return Ok(AcceptOutcome::Blocked(error));
        }

        let display_dimensions = self
            .read_display_dimensions()
            .map_err(|error| WizardError::Persistence(error.to_string()))?;
        let board_dimensions_mils = dimensions_to_mils(display_dimensions, self.unit);
        let setup = PcbSetup {
            auto_placement: self.auto_placement,
            auto_route: self.auto_route,
            use_template: self.template_mode == TemplateMode::Template,
            template: self.template_path.clone(),
            board_dimensions_mils,
        };
        store.persist(&setup)?;

        let request = match self.project_mode {
            ProjectMode::Existing => {
                let project = self
                    .selected_project_entry()
                    .or_else(|| self.projects.first())
                    .map(|entry| entry.path.clone())
                    .ok_or_else(|| {
                        WizardError::Persistence("existing project is unavailable".to_owned())
                    })?;
                PcbLaunchRequest::ExistingProject {
                    project,
                    unit: self.unit,
                }
            }
            ProjectMode::New => {
                let template = self
                    .template_path
                    .as_ref()
                    .filter(|path| {
                        self.template_mode == TemplateMode::Template
                            && templates.is_file(path.as_path())
                    })
                    .cloned();
                PcbLaunchRequest::NewProject {
                    active_input: self.active_input.clone(),
                    auto_placement: self.controls.new_project_inputs && self.auto_placement,
                    auto_route: self.controls.new_project_inputs && self.auto_route,
                    template,
                    board_dimensions_mils,
                    unit: self.unit,
                }
            }
        };
        self.launch_request = Some(request.clone());
        Ok(AcceptOutcome::Prepared(request))
    }

    fn selected_project_entry(&self) -> Option<&ProjectEntry> {
        let selected = self.selected_project.as_deref()?;
        self.projects
            .iter()
            .find(|project| project.file_name == selected)
    }

    fn read_display_dimensions(&self) -> Result<BoardDimensions, ValidationError> {
        let width = self
            .board_width
            .parse::<f64>()
            .map_err(|_| ValidationError::InvalidBoardDimensions)?;
        let height = self
            .board_height
            .parse::<f64>()
            .map_err(|_| ValidationError::InvalidBoardDimensions)?;
        Ok(BoardDimensions { width, height })
    }

    fn write_dimensions_from_mils(&mut self, dimensions: BoardDimensions) {
        let display = dimensions_from_mils(dimensions, self.unit);
        self.board_width = display.width.to_string();
        self.board_height = display.height.to_string();
    }

    #[must_use]
    pub const fn controls(&self) -> ControlState {
        self.controls
    }

    #[must_use]
    pub fn projects(&self) -> &[ProjectEntry] {
        &self.projects
    }

    #[must_use]
    pub fn template_path(&self) -> Option<&Path> {
        self.template_path.as_deref()
    }

    #[must_use]
    pub fn template_label(&self) -> &str {
        &self.template_label
    }

    #[must_use]
    pub fn board_dimensions_text(&self) -> (&str, &str) {
        (&self.board_width, &self.board_height)
    }

    #[must_use]
    pub const fn validation_error(&self) -> Option<&ValidationError> {
        self.validation_error.as_ref()
    }

    #[must_use]
    pub const fn launch_request(&self) -> Option<&PcbLaunchRequest> {
        self.launch_request.as_ref()
    }

    #[must_use]
    #[allow(clippy::too_many_lines)]
    pub fn view(&self) -> Element<'_, Message> {
        let menu = window_shell::empty_menu();
        let toolbar = window_shell::toolbar(TOOLBAR, Message::NoOp);
        let project_names = self
            .projects
            .iter()
            .map(|project| project.file_name.clone())
            .collect::<Vec<_>>();
        let status = self
            .validation_error
            .as_ref()
            .map_or(STATUS, |error| match error {
                ValidationError::InvalidBoardDimensions => "Enter valid board dimensions",
                ValidationError::MissingExistingProject => "No existing PCB project is available",
            });
        let body: Element<'_, Message> = container(
            column![
                scrollable(
                    column![
                        text("Project").size(18),
                        radio(
                            "Modify existing project",
                            ProjectMode::Existing,
                            Some(self.project_mode),
                            Message::ProjectModeSelected,
                        ),
                        row![
                            pick_list(
                                project_names,
                                self.selected_project.clone(),
                                Message::ProjectSelected,
                            )
                            .width(Length::FillPortion(3)),
                            checkbox("Show all projects", self.show_all_projects).on_toggle_maybe(
                                self.controls
                                    .project_inputs
                                    .then_some(Message::ShowAllChanged),
                            ),
                        ]
                        .spacing(8)
                        .align_y(Alignment::Center),
                        radio(
                            "Start new project",
                            ProjectMode::New,
                            Some(self.project_mode),
                            Message::ProjectModeSelected,
                        ),
                        checkbox("Autoplacement", self.auto_placement).on_toggle_maybe(
                            self.controls
                                .new_project_inputs
                                .then_some(Message::AutoPlacementChanged),
                        ),
                        checkbox("Autorouting", self.auto_route).on_toggle_maybe(
                            self.controls
                                .new_project_inputs
                                .then_some(Message::AutoRouteChanged),
                        ),
                        text("Board setup").size(18),
                        radio(
                            "Use board template",
                            TemplateMode::Template,
                            Some(self.template_mode),
                            Message::TemplateModeSelected,
                        ),
                        row![
                            text(self.template_label.as_str()).width(Length::Fill),
                            button("Browse...").on_press_maybe(
                                self.controls
                                    .template_inputs
                                    .then_some(Message::BrowseTemplate),
                            ),
                        ]
                        .spacing(8)
                        .align_y(Alignment::Center),
                        radio(
                            "No template",
                            TemplateMode::ManualSize,
                            Some(self.template_mode),
                            Message::TemplateModeSelected,
                        ),
                        row![
                            text("Board width").width(Length::FillPortion(2)),
                            text_input("", &self.board_width)
                                .on_input_maybe(
                                    self.controls
                                        .dimension_inputs
                                        .then_some(Message::BoardWidthChanged),
                                )
                                .width(Length::FillPortion(3)),
                        ]
                        .spacing(8)
                        .align_y(Alignment::Center),
                        row![
                            text("Board height").width(Length::FillPortion(2)),
                            text_input("", &self.board_height)
                                .on_input_maybe(
                                    self.controls
                                        .dimension_inputs
                                        .then_some(Message::BoardHeightChanged),
                                )
                                .width(Length::FillPortion(3)),
                        ]
                        .spacing(8)
                        .align_y(Alignment::Center),
                        text(match self.unit {
                            DisplayUnit::Inch => "Unit: inch",
                            DisplayUnit::Millimeter => "Unit: mm",
                        }),
                    ]
                    .spacing(8),
                ),
                row![
                    horizontal_space(),
                    button("OK").on_press(Message::Accept),
                    button("Cancel").on_press(Message::Cancel),
                ]
                .spacing(6),
            ]
            .spacing(10),
        )
        .padding(18)
        .width(Length::Fill)
        .height(Length::Fill)
        .into();

        window_shell::frame(TITLE, menu, toolbar, body, status)
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use std::time::SystemTime;

    #[derive(Default)]
    struct Store(Vec<PcbSetup>);

    impl SettingsStore for Store {
        fn persist(&mut self, setup: &PcbSetup) -> Result<(), WizardError> {
            self.0.push(setup.clone());
            Ok(())
        }
    }

    struct Templates {
        existing_path: Option<PathBuf>,
        dimensions: Option<BoardDimensions>,
    }

    impl TemplateAccess for Templates {
        fn is_file(&self, path: &Path) -> bool {
            self.existing_path.as_deref() == Some(path)
        }

        fn read_board_dimensions(&self, path: &Path) -> Option<BoardDimensions> {
            self.is_file(path).then_some(self.dimensions).flatten()
        }
    }

    struct Dialog {
        selection: Option<TemplateSelection>,
        initial_directory: Option<PathBuf>,
    }

    impl TemplateDialog for Dialog {
        fn select_template(&mut self, initial_directory: &Path) -> Option<TemplateSelection> {
            self.initial_directory = Some(initial_directory.to_owned());
            self.selection.take()
        }
    }

    fn project(name: &str) -> ProjectEntry {
        ProjectEntry {
            file_name: name.to_owned(),
            path: PathBuf::from(name),
            modified: SystemTime::UNIX_EPOCH,
        }
    }

    fn valid_window() -> Window {
        let mut window = Window::new(PathBuf::from("circuit.tsc"), DisplayUnit::Inch);
        window.board_width = "2.5".to_owned();
        window.board_height = "1.25".to_owned();
        window
    }

    #[test]
    fn project_mode_handlers_change_enablement_without_clearing_values() {
        let mut window = valid_window();
        window.auto_placement = true;
        window.template_path = Some(PathBuf::from("board.tpt"));
        window.select_existing_project_mode();
        assert_eq!(
            window.controls(),
            ControlState {
                project_inputs: true,
                new_project_inputs: false,
                template_inputs: false,
                dimension_inputs: false,
            }
        );
        window.select_new_project_mode();
        assert_eq!(
            window.controls(),
            ControlState {
                project_inputs: false,
                new_project_inputs: true,
                template_inputs: true,
                dimension_inputs: true,
            }
        );
        assert!(window.auto_placement);
        assert_eq!(window.template_path(), Some(Path::new("board.tpt")));
    }

    #[test]
    fn rebuilt_project_list_selects_the_newest_first_entry() {
        let mut window = valid_window();
        window.replace_projects(vec![project("newest.tpc"), project("older.tpc")]);
        assert_eq!(window.selected_project.as_deref(), Some("newest.tpc"));
    }

    #[test]
    fn template_mode_uses_fallback_or_recovered_dimensions() -> Result<(), ValidationError> {
        let mut window = valid_window();
        window.template_path = Some(PathBuf::from("board.tpt"));
        let missing = Templates {
            existing_path: None,
            dimensions: None,
        };
        window.select_template_mode(&missing)?;
        assert_eq!(window.board_dimensions_text(), ("2.5", "1.25"));

        let parsed = Templates {
            existing_path: Some(PathBuf::from("board.tpt")),
            dimensions: Some(BoardDimensions {
                width: 4_000.0,
                height: 2_000.0,
            }),
        };
        window.select_template_mode(&parsed)?;
        assert_eq!(window.board_dimensions_text(), ("4", "2"));
        Ok(())
    }

    #[test]
    fn browse_cancel_is_noop_and_accept_stores_full_and_display_paths()
    -> Result<(), ValidationError> {
        let mut window = valid_window();
        let templates = Templates {
            existing_path: Some(PathBuf::from("full/board.tpt")),
            dimensions: Some(BoardDimensions {
                width: 3_000.0,
                height: 2_000.0,
            }),
        };
        let mut cancelled = Dialog {
            selection: None,
            initial_directory: None,
        };
        window.browse_template(Path::new("app"), &mut cancelled, &templates)?;
        assert!(window.template_path().is_none());

        let mut accepted = Dialog {
            selection: Some(TemplateSelection {
                full_path: PathBuf::from("full/board.tpt"),
                display_text: ".../board.tpt".to_owned(),
            }),
            initial_directory: None,
        };
        window.browse_template(Path::new("app"), &mut accepted, &templates)?;
        assert_eq!(
            accepted.initial_directory,
            Some(PathBuf::from("app/Templates"))
        );
        assert_eq!(window.template_path(), Some(Path::new("full/board.tpt")));
        assert_eq!(window.template_label(), ".../board.tpt");
        assert_eq!(window.board_dimensions_text(), ("3", "2"));
        Ok(())
    }

    #[test]
    fn manual_size_mode_disables_template_input_and_retains_values() {
        let mut window = valid_window();
        window.template_path = Some(PathBuf::from("board.tpt"));
        window.select_manual_size_mode();
        assert!(!window.controls().template_inputs);
        assert_eq!(window.template_path(), Some(Path::new("board.tpt")));
        assert_eq!(window.board_dimensions_text(), ("2.5", "1.25"));
    }

    #[test]
    fn numeric_and_existing_project_validation_gate_only_accept_close() {
        let mut window = valid_window();
        window.board_width = "invalid".to_owned();
        window.reset_and_validate_dimensions();
        assert!(!window.can_accept());
        assert!(!window.can_close(true));
        assert!(window.can_close(false));

        window.board_width = "2.5".to_owned();
        window.reset_and_validate_dimensions();
        window.select_existing_project_mode();
        assert!(!window.can_accept());
        window.replace_projects(vec![project("board.tpc")]);
        assert!(window.can_accept());
    }

    #[test]
    fn blocked_accept_does_not_persist_or_prepare_a_request() -> Result<(), WizardError> {
        let mut window = valid_window();
        window.select_existing_project_mode();
        let mut store = Store::default();
        let templates = Templates {
            existing_path: None,
            dimensions: None,
        };
        assert_eq!(
            window.accept(&mut store, &templates)?,
            AcceptOutcome::Blocked(ValidationError::MissingExistingProject)
        );
        assert!(store.0.is_empty());
        assert!(window.launch_request.is_none());
        Ok(())
    }

    #[test]
    fn existing_project_accept_persists_setup_and_prepares_selected_project()
    -> Result<(), WizardError> {
        let mut window = valid_window();
        window.select_existing_project_mode();
        window.replace_projects(vec![project("board.tpc")]);
        let mut store = Store::default();
        let templates = Templates {
            existing_path: None,
            dimensions: None,
        };
        assert_eq!(
            window.accept(&mut store, &templates)?,
            AcceptOutcome::Prepared(PcbLaunchRequest::ExistingProject {
                project: PathBuf::from("board.tpc"),
                unit: DisplayUnit::Inch,
            })
        );
        assert_eq!(store.0.len(), 1);
        assert_eq!(
            store.0[0].board_dimensions_mils,
            BoardDimensions {
                width: 2_500.0,
                height: 1_250.0,
            }
        );
        Ok(())
    }

    #[test]
    fn new_project_accept_omits_missing_template_but_keeps_dimensions() -> Result<(), WizardError> {
        let mut window = valid_window();
        window.auto_placement = true;
        window.auto_route = true;
        window.template_path = Some(PathBuf::from("missing.tpt"));
        let mut store = Store::default();
        let templates = Templates {
            existing_path: None,
            dimensions: None,
        };
        assert_eq!(
            window.accept(&mut store, &templates)?,
            AcceptOutcome::Prepared(PcbLaunchRequest::NewProject {
                active_input: PathBuf::from("circuit.tsc"),
                auto_placement: true,
                auto_route: true,
                template: None,
                board_dimensions_mils: BoardDimensions {
                    width: 2_500.0,
                    height: 1_250.0,
                },
                unit: DisplayUnit::Inch,
            })
        );
        assert_eq!(store.0[0].template, Some(PathBuf::from("missing.tpt")));
        assert!(store.0[0].use_template);
        Ok(())
    }
}
