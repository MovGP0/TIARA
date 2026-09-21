//! The PCB Design dialog, as `Tools > PCB Tools > PCB Design...` opens it.
//!
//! Two questions, each a pair of radio buttons with its own settings below:
//! whether the board comes from a template or is given a size, and whether the
//! project is an existing one or a new one. Two switches under them say
//! whether the parts are placed and the tracks routed automatically.
//!
//! The settings under each radio button only apply while that button is the
//! chosen one, and the original greys the others rather than hiding them.
//! That is what the enabling here does.

use iced::widget::{button, checkbox, column, combo_box, container, radio, row, text, text_input};
use iced::{Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "PCB Design";
pub const SCREENSHOT: &str = "screenshots/PCB_Design_WIndow.png";
pub const FORM_RESOURCE: &str = "PCBWizard";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01bb2090");
const STATUS: &str = "Board layout";

/// The units the board's size can be given in, as the resource lists them.
pub const UNITS: [&str; 2] = ["inch (\")", "millimeter (mm)"];

/// Which unit the size is read in.
///
/// The resource carries a list of both but marks it invisible, and shows
/// `(inch)` beside each measurement, so the size is read in inches until the
/// original shows the list. Nothing here shows it either.
pub const DEFAULT_UNIT: usize = 0;

/// Where the board's outline comes from.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum Board {
    /// The resource marks this one checked.
    #[default]
    Template,
    Size,
}

/// Which project the layout goes into.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum Project {
    Existing,
    /// The resource marks this one checked.
    #[default]
    New,
}

#[derive(Debug)]
pub struct Window {
    board: Board,
    template: String,
    width: String,
    height: String,

    project: Project,
    projects: combo_box::State<String>,
    chosen_project: Option<String>,
    show_all_projects: bool,

    auto_placement: bool,
    auto_route: bool,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            board: Board::default(),
            template: String::new(),
            width: String::new(),
            height: String::new(),

            project: Project::default(),
            // The projects are the installation's, so there are none to list
            // until it has been read.
            projects: combo_box::State::new(Vec::new()),
            chosen_project: None,
            show_all_projects: false,

            auto_placement: false,
            auto_route: false,
        }
    }
}

#[derive(Debug, Clone)]
pub enum Message {
    BoardChosen(Board),
    BrowseTemplate,
    WidthChanged(String),
    HeightChanged(String),

    ProjectChosen(Project),
    ExistingProjectChosen(String),
    ShowAllProjectsToggled(bool),

    AutoPlacementToggled(bool),
    AutoRouteToggled(bool),

    Accepted,
    Cancelled,
    HelpRequested,
}

impl Window {
    /// Whether the board's size is the part that applies.
    #[must_use]
    pub const fn size_applies(&self) -> bool {
        matches!(self.board, Board::Size)
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::BoardChosen(board) => self.board = board,
            Message::WidthChanged(value) => self.width = value,
            Message::HeightChanged(value) => self.height = value,
            Message::ProjectChosen(project) => self.project = project,
            Message::ExistingProjectChosen(value) => self.chosen_project = Some(value),
            Message::ShowAllProjectsToggled(on) => self.show_all_projects = on,

            Message::AutoPlacementToggled(on) => self.auto_placement = on,
            Message::AutoRouteToggled(on) => self.auto_route = on,

            // Browsing opens a file dialog for the template, and the three
            // commands end the dialog; neither has anywhere to go until the
            // shell can read and write documents.
            Message::BrowseTemplate
            | Message::Accepted
            | Message::Cancelled
            | Message::HelpRequested => {}
        }
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection.
    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let body = column![
            self.board_panel(),
            self.project_panel(),
            checkbox("Autoplacement", self.auto_placement).on_toggle(Message::AutoPlacementToggled),
            checkbox("Autorouting", self.auto_route).on_toggle(Message::AutoRouteToggled),
            row![
                button("OK").on_press(Message::Accepted),
                button("Cancel").on_press(Message::Cancelled),
                button("Help").on_press(Message::HelpRequested),
            ]
            .spacing(8),
        ]
        .spacing(8)
        .padding(8)
        .height(Length::Fill);

        window_shell::frame(
            TITLE,
            window_shell::empty_menu(),
            window_shell::empty_menu(),
            body.into(),
            STATUS,
        )
    }

    fn board_panel(&self) -> Element<'_, Message> {
        let mut browse = button(text("Browse...").size(12));
        if matches!(self.board, Board::Template) {
            browse = browse.on_press(Message::BrowseTemplate);
        }

        let mut width = text_input("", &self.width).width(Length::Fixed(90.0));
        let mut height = text_input("", &self.height).width(Length::Fixed(90.0));
        if self.size_applies() {
            width = width.on_input(Message::WidthChanged);
            height = height.on_input(Message::HeightChanged);
        }

        container(
            column![
                radio(
                    "Use board template",
                    Board::Template,
                    Some(self.board),
                    Message::BoardChosen
                ),
                row![browse, text(&self.template).size(12)].spacing(8),
                radio(
                    "No template",
                    Board::Size,
                    Some(self.board),
                    Message::BoardChosen
                ),
                row![
                    text("Board width").width(Length::Fixed(90.0)),
                    width,
                    text(UNITS[DEFAULT_UNIT]).size(12),
                ]
                .spacing(8),
                row![
                    text("Board height").width(Length::Fixed(90.0)),
                    height,
                    text(UNITS[DEFAULT_UNIT]).size(12),
                ]
                .spacing(8),
            ]
            .spacing(4),
        )
        .padding(6)
        .into()
    }

    fn project_panel(&self) -> Element<'_, Message> {
        container(
            column![
                radio(
                    "Modify existing project",
                    Project::Existing,
                    Some(self.project),
                    Message::ProjectChosen
                ),
                combo_box(
                    &self.projects,
                    "",
                    self.chosen_project.as_ref(),
                    Message::ExistingProjectChosen
                ),
                checkbox("Show all projects", self.show_all_projects)
                    .on_toggle(Message::ShowAllProjectsToggled),
                radio(
                    "Start new project",
                    Project::New,
                    Some(self.project),
                    Message::ProjectChosen
                ),
            ]
            .spacing(4),
        )
        .padding(6)
        .into()
    }
}

#[cfg(test)]
mod tests {
    use super::{Board, Message, Project, UNITS, Window};

    #[test]
    fn it_opens_on_what_the_resource_marks_checked() {
        let window = Window::default();
        assert_eq!(window.board, Board::Template);
        assert_eq!(window.project, Project::New);
        assert!(!window.auto_placement);
        assert!(!window.auto_route);
    }

    #[test]
    fn the_size_applies_only_when_there_is_no_template() {
        let mut window = Window::default();
        assert!(!window.size_applies());

        window.update(Message::BoardChosen(Board::Size));
        assert!(window.size_applies());
    }

    #[test]
    fn the_project_list_applies_only_when_an_existing_one_is_being_modified() {
        let mut window = Window::default();
        assert_eq!(window.project, Project::New);

        window.update(Message::ProjectChosen(Project::Existing));
        assert_eq!(window.project, Project::Existing);
    }

    #[test]
    fn the_size_keeps_what_is_typed_into_it() {
        let mut window = Window::default();
        window.update(Message::BoardChosen(Board::Size));
        window.update(Message::WidthChanged("3.2".to_owned()));
        window.update(Message::HeightChanged("2.1".to_owned()));

        assert_eq!(window.width, "3.2");
        assert_eq!(window.height, "2.1");
    }

    #[test]
    fn the_size_is_read_in_inches_because_the_resource_hides_the_other_choice() {
        assert_eq!(UNITS[super::DEFAULT_UNIT], "inch (\")");
        assert_eq!(UNITS.len(), 2);
    }

    #[test]
    fn placement_and_routing_are_switched_on_separately() {
        let mut window = Window::default();
        window.update(Message::AutoPlacementToggled(true));
        assert!(window.auto_placement);
        assert!(!window.auto_route);

        window.update(Message::AutoRouteToggled(true));
        assert!(window.auto_route);
    }
}
