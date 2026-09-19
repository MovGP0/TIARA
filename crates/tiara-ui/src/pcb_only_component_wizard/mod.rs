use std::fmt;
use std::path::{Path, PathBuf};

use iced::widget::{
    button, column, container, horizontal_space, pick_list, radio, row, text, text_input,
};
use iced::{Alignment, Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "PCB-only Component Wizard";
pub const FORM_RESOURCE: &str = "frmPCBOnlyCompWizard";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01bc3c00");
const STATUS: &str = "Create a PCB-only component macro";
const TOOLBAR: &[&str] = &[];
const PCB_MACRO_TYPE: u8 = 0x39;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum GroupMode {
    Existing,
    New,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct GroupControlState {
    pub existing_group_enabled: bool,
    pub new_group_enabled: bool,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ShapeSelection {
    pub display_value: String,
    pub associated_identity: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ShapeDialogResult {
    Cancelled,
    Accepted(Option<ShapeSelection>),
}

pub trait ShapeDialog {
    fn select_shape(&mut self) -> ShapeDialogResult;
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum GroupTarget {
    Existing(String),
    New(String),
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct MacroRecord {
    pub component_name: String,
    pub macro_type: u8,
    pub file_name: PathBuf,
    pub component_identifier: String,
}

pub trait MacroSaveAdapter {
    type PreparedShape;

    /// Resolves and copies the selected catalog shape for macro construction.
    ///
    /// # Errors
    ///
    /// Returns [`WizardError`] when the catalog shape cannot be prepared.
    fn prepare_shape(
        &mut self,
        display_value: &str,
        associated_identity: &str,
    ) -> Result<Self::PreparedShape, WizardError>;

    fn choose_output_path(&mut self, proposed_path: &Path) -> Option<PathBuf>;

    /// Builds and saves the macro at the accepted file name.
    ///
    /// # Errors
    ///
    /// Returns [`WizardError`] when macro construction or saving fails.
    fn save_macro(
        &mut self,
        component_name: &str,
        shape: &Self::PreparedShape,
        output_path: &Path,
    ) -> Result<String, WizardError>;

    /// Inserts or replaces the macro record and saves the component file.
    ///
    /// # Errors
    ///
    /// Returns [`WizardError`] when the component file cannot be updated.
    fn update_component_file(
        &mut self,
        group: &GroupTarget,
        record: &MacroRecord,
    ) -> Result<(), WizardError>;
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum WizardError {
    InvalidInput,
    Adapter(String),
}

impl fmt::Display for WizardError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::InvalidInput => formatter.write_str("Complete the required component fields."),
            Self::Adapter(message) => formatter.write_str(message),
        }
    }
}

impl std::error::Error for WizardError {}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum SaveOutcome {
    Cancelled,
    Saved(PathBuf),
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Action {
    BrowseShape,
    Accept,
    Cancel,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    ComponentNameChanged(String),
    BrowseShape,
    GroupModeSelected(GroupMode),
    ExistingGroupSelected(String),
    NewGroupChanged(String),
    Accept,
    Cancel,
    NoOp,
}

#[derive(Debug)]
pub struct Window {
    component_name: String,
    shape_display: String,
    shape_identity: String,
    group_mode: GroupMode,
    group_controls: GroupControlState,
    groups: Vec<String>,
    selected_group: Option<String>,
    new_group: String,
    accepted: bool,
    saved_path: Option<PathBuf>,
    pending_action: Option<Action>,
}

impl Default for Window {
    fn default() -> Self {
        Self::new(Vec::new())
    }
}

impl Window {
    #[must_use]
    pub fn new(groups: Vec<String>) -> Self {
        let selected_group = groups.first().cloned();
        Self {
            component_name: String::new(),
            shape_display: String::new(),
            shape_identity: String::new(),
            group_mode: GroupMode::Existing,
            group_controls: GroupControlState {
                existing_group_enabled: true,
                new_group_enabled: false,
            },
            groups,
            selected_group,
            new_group: String::new(),
            accepted: false,
            saved_path: None,
            pending_action: None,
        }
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::ComponentNameChanged(name) => self.component_name = name,
            Message::BrowseShape => self.pending_action = Some(Action::BrowseShape),
            Message::GroupModeSelected(GroupMode::Existing) => {
                self.select_existing_group_mode();
            }
            Message::GroupModeSelected(GroupMode::New) => self.select_new_group_mode(),
            Message::ExistingGroupSelected(group) if self.group_controls.existing_group_enabled => {
                self.selected_group = Some(group);
            }
            Message::NewGroupChanged(group) if self.group_controls.new_group_enabled => {
                self.new_group = group;
            }
            Message::Accept => self.pending_action = Some(Action::Accept),
            Message::Cancel => self.pending_action = Some(Action::Cancel),
            Message::ExistingGroupSelected(_) | Message::NewGroupChanged(_) | Message::NoOp => {}
        }
    }

    #[must_use]
    pub const fn take_action(&mut self) -> Option<Action> {
        self.pending_action.take()
    }

    /// Applies one result from the shape-selection dialog.
    ///
    /// Reimplements Ghidra function `FUN_01bc2650` at `0x01BC2650`. Cancel and
    /// an accepted dialog without a selected row leave both stored values
    /// unchanged.
    pub fn browse_shape(&mut self, dialog: &mut impl ShapeDialog) {
        let ShapeDialogResult::Accepted(Some(selection)) = dialog.select_shape() else {
            return;
        };
        self.shape_display = selection.display_value;
        self.shape_identity = selection.associated_identity;
    }

    /// Enables existing-group selection and disables new-group input.
    ///
    /// Reimplements Ghidra function `FUN_01bc4190` at `0x01BC4190`.
    pub const fn select_existing_group_mode(&mut self) {
        self.group_mode = GroupMode::Existing;
        self.group_controls = GroupControlState {
            existing_group_enabled: true,
            new_group_enabled: false,
        };
    }

    /// Disables existing-group selection and enables new-group input.
    ///
    /// Reimplements Ghidra function `FUN_01bc41e0` at `0x01BC41E0`.
    pub const fn select_new_group_mode(&mut self) {
        self.group_mode = GroupMode::New;
        self.group_controls = GroupControlState {
            existing_group_enabled: false,
            new_group_enabled: true,
        };
    }

    /// Builds and saves the PCB component macro after a save-dialog acceptance.
    ///
    /// Reimplements Ghidra function `FUN_01bc3c00` at `0x01BC3C00`. Catalog
    /// preparation occurs before the dialog. Cancel drops that temporary state
    /// without setting success or updating the component file. After a save,
    /// success is set before the component-file update, as in the recovered
    /// path.
    ///
    /// # Errors
    ///
    /// Returns [`WizardError`] when required input is missing or an adapter
    /// cannot prepare, save, or register the macro.
    pub fn save_macro(
        &mut self,
        user_macro_directory: &Path,
        adapter: &mut impl MacroSaveAdapter,
    ) -> Result<SaveOutcome, WizardError> {
        let group = self.group_target().ok_or(WizardError::InvalidInput)?;
        if self.component_name.is_empty()
            || self.shape_display.is_empty()
            || self.shape_identity.is_empty()
        {
            return Err(WizardError::InvalidInput);
        }

        let prepared_shape = adapter.prepare_shape(&self.shape_display, &self.shape_identity)?;
        let proposed_path = user_macro_directory
            .join("MacroLib")
            .join(format!("{}.tsm", self.component_name));
        let Some(output_path) = adapter.choose_output_path(&proposed_path) else {
            return Ok(SaveOutcome::Cancelled);
        };

        let component_identifier =
            adapter.save_macro(&self.component_name, &prepared_shape, &output_path)?;
        self.accepted = true;
        self.saved_path = Some(output_path.clone());
        let record = MacroRecord {
            component_name: self.component_name.clone(),
            macro_type: PCB_MACRO_TYPE,
            file_name: output_path.clone(),
            component_identifier,
        };
        adapter.update_component_file(&group, &record)?;
        Ok(SaveOutcome::Saved(output_path))
    }

    fn group_target(&self) -> Option<GroupTarget> {
        match self.group_mode {
            GroupMode::Existing => self
                .selected_group
                .as_ref()
                .filter(|group| !group.is_empty())
                .cloned()
                .map(GroupTarget::Existing),
            GroupMode::New => {
                (!self.new_group.is_empty()).then(|| GroupTarget::New(self.new_group.clone()))
            }
        }
    }

    #[must_use]
    pub fn can_accept(&self) -> bool {
        !self.component_name.is_empty()
            && !self.shape_display.is_empty()
            && !self.shape_identity.is_empty()
            && self.group_target().is_some()
    }

    #[must_use]
    pub const fn group_controls(&self) -> GroupControlState {
        self.group_controls
    }

    #[must_use]
    pub fn shape_values(&self) -> (&str, &str) {
        (&self.shape_display, &self.shape_identity)
    }

    #[must_use]
    pub const fn accepted(&self) -> bool {
        self.accepted
    }

    #[must_use]
    pub fn saved_path(&self) -> Option<&Path> {
        self.saved_path.as_deref()
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let menu = window_shell::empty_menu();
        let toolbar = window_shell::toolbar(TOOLBAR, Message::NoOp);
        let body: Element<'_, Message> = container(
            column![
                text("Component").size(18),
                row![
                    text("Name").width(Length::FillPortion(2)),
                    text_input("", &self.component_name)
                        .on_input(Message::ComponentNameChanged)
                        .width(Length::FillPortion(3)),
                ]
                .spacing(8)
                .align_y(Alignment::Center),
                row![
                    text("Shape").width(Length::FillPortion(2)),
                    text_input("", &self.shape_display).width(Length::FillPortion(3)),
                    button("Browse...").on_press(Message::BrowseShape),
                ]
                .spacing(8)
                .align_y(Alignment::Center),
                text("Component group").size(18),
                radio(
                    "Select an existing group ...",
                    GroupMode::Existing,
                    Some(self.group_mode),
                    Message::GroupModeSelected,
                ),
                pick_list(
                    self.groups.clone(),
                    self.selected_group.clone(),
                    Message::ExistingGroupSelected,
                )
                .width(Length::Fill),
                radio(
                    "... or define a new group",
                    GroupMode::New,
                    Some(self.group_mode),
                    Message::GroupModeSelected,
                ),
                row![
                    text("New group").width(Length::FillPortion(2)),
                    text_input("", &self.new_group)
                        .on_input_maybe(
                            self.group_controls
                                .new_group_enabled
                                .then_some(Message::NewGroupChanged),
                        )
                        .width(Length::FillPortion(3)),
                ]
                .spacing(8)
                .align_y(Alignment::Center),
                row![
                    horizontal_space(),
                    button("OK").on_press_maybe(self.can_accept().then_some(Message::Accept)),
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
        window_shell::frame(TITLE, menu, toolbar, body, STATUS)
    }
}

/// The colour the group edit takes when its text names no existing group.
pub const NEW_GROUP_COLOR: u32 = 0xff00_0008;

/// The colour the group edit takes when its text names an existing group.
pub const EXISTING_GROUP_COLOR: u32 = 0xff00_0010;

/// The literal character list the invalid-name balloon appends to its message.
pub const INVALID_NAME_CHARACTER_LIST: &str = " \\ / ? \" < > |";

/// A rectangle the icon combo paints one row into.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct IconRowRect {
    pub left: i32,
    pub top: i32,
    pub right: i32,
    pub bottom: i32,
}

pub trait IconRowPainter {
    /// Paints the row background.
    fn fill_background(&mut self, rect: IconRowRect);

    /// Draws one image-list entry at a position.
    fn draw_icon(&mut self, index: i32, x: i32, y: i32, transparent: bool);
}

/// Reimplements Ghidra function `FUN_01bc2780` at `0x01BC2780`.
///
/// Paints one icon-combo row: the background first, then the image-list entry
/// inset by one pixel from the row's top-left corner and drawn transparently.
/// The recovered handler draws no text, so a row shows only its icon.
pub fn draw_icon_row(index: i32, rect: IconRowRect, painter: &mut impl IconRowPainter) {
    painter.fill_background(rect);
    painter.draw_icon(index, rect.left + 1, rect.top + 1, true);
}

pub trait WizardTeardownHost {
    fn hide_hint_window(&mut self);

    fn release_hint_window(&mut self);

    /// Releases the three remaining private objects the wizard owns.
    fn release_private_objects(&mut self);
}

/// Reimplements Ghidra function `FUN_01bc4140` at `0x01BC4140`.
///
/// Hides and releases the balloon hint window and then releases the wizard's
/// three remaining private objects. The recovered handler saves nothing, so
/// closing without accepting discards every staged value.
pub fn destroy_wizard(host: &mut impl WizardTeardownHost) {
    host.hide_hint_window();
    host.release_hint_window();
    host.release_private_objects();
}

/// Reimplements Ghidra function `FUN_01bc4230` at `0x01BC4230`.
///
/// Recolours the group edit on every keystroke so the user can see whether the
/// name they are typing would create a group or reuse one. A name the group
/// list does not hold takes the new-group colour and a known name takes the
/// existing-group colour.
///
/// The recovered handler only recolours: it creates no group, selects nothing,
/// and shows no message.
#[must_use]
pub fn group_name_color(group_name: &str, known_groups: &[String]) -> u32 {
    if known_groups.iter().any(|known| known == group_name) {
        EXISTING_GROUP_COLOR
    } else {
        NEW_GROUP_COLOR
    }
}

pub trait RegistryFileChoiceHost {
    /// The registry-file entry at one index.
    fn registry_file_path(&mut self, index: usize) -> String;

    /// Rebuilds the group list for the newly selected registry file.
    fn rebuild_groups(&mut self);

    fn select_group(&mut self, index: i32);
}

/// Reimplements Ghidra function `FUN_01bc42f0` at `0x01BC42F0`.
///
/// Adopts the newly selected registry file: its stored path becomes the
/// wizard's target, the group list is rebuilt from that file, and the group
/// combo returns to its first entry.
///
/// Resetting the selection matters because the previous group name almost
/// certainly does not exist in the new file, and the recovered handler does not
/// try to carry it over.
pub fn choose_registry_file(
    selected_index: usize,
    host: &mut impl RegistryFileChoiceHost,
) -> String {
    let path = host.registry_file_path(selected_index);
    host.rebuild_groups();
    host.select_group(0);
    path
}

pub trait NameHintHost {
    /// Hides the invalid-character balloon.
    fn hide_name_hint(&mut self);

    /// The localized message the balloon shows before the character list.
    fn invalid_name_message(&mut self) -> String;

    /// Shows the balloon beside the name edit.
    fn show_name_hint(&mut self, message: &str);
}

/// Reimplements Ghidra function `FUN_01bc43b0` at `0x01BC43B0`.
///
/// Hides the invalid-character balloon on the next key down in the name edit.
/// The recovered handler inspects no key, so any further typing clears the
/// balloon whether or not the new key is valid.
pub fn hide_invalid_name_hint(host: &mut impl NameHintHost) {
    host.hide_name_hint();
}

/// Reimplements Ghidra function `FUN_01bc43D0` at `0x01BC43D0`.
///
/// Rejects a character that cannot appear in a component name: the key is
/// swallowed so the edit never receives it, and a balloon naming the forbidden
/// characters appears beside the edit. An accepted character passes through and
/// shows nothing.
///
/// The recovered test reads a lookup table the decompiler did not recover as
/// literals, so the rejected set is supplied by the caller. The message is a
/// stored sentence followed by the recovered
/// [`INVALID_NAME_CHARACTER_LIST`].
pub fn reject_invalid_name_key(typed: char, rejected: &str, host: &mut impl NameHintHost) -> bool {
    if !rejected.contains(typed) {
        return false;
    }
    let mut message = host.invalid_name_message();
    message.push_str(INVALID_NAME_CHARACTER_LIST);
    host.show_name_hint(&message);
    true
}

#[cfg(test)]
mod wizard_handler_tests {
    use super::*;

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum PaintStep {
        Background(IconRowRect),
        Icon(i32, i32, i32, bool),
    }

    #[derive(Debug, Default)]
    struct Painter {
        steps: Vec<PaintStep>,
    }

    impl IconRowPainter for Painter {
        fn fill_background(&mut self, rect: IconRowRect) {
            self.steps.push(PaintStep::Background(rect));
        }

        fn draw_icon(&mut self, index: i32, x: i32, y: i32, transparent: bool) {
            self.steps.push(PaintStep::Icon(index, x, y, transparent));
        }
    }

    #[test]
    fn an_icon_row_paints_the_background_then_the_inset_icon() {
        let mut painter = Painter::default();
        let rect = IconRowRect {
            left: 6,
            top: 12,
            right: 40,
            bottom: 28,
        };

        draw_icon_row(3, rect, &mut painter);

        assert_eq!(
            painter.steps,
            [PaintStep::Background(rect), PaintStep::Icon(3, 7, 13, true)]
        );
    }

    #[derive(Debug, Default)]
    struct TeardownHost {
        steps: Vec<&'static str>,
    }

    impl WizardTeardownHost for TeardownHost {
        fn hide_hint_window(&mut self) {
            self.steps.push("hide");
        }

        fn release_hint_window(&mut self) {
            self.steps.push("release-hint");
        }

        fn release_private_objects(&mut self) {
            self.steps.push("release-objects");
        }
    }

    #[test]
    fn destroy_hides_the_balloon_before_it_releases_anything() {
        let mut host = TeardownHost::default();

        destroy_wizard(&mut host);

        assert_eq!(host.steps, ["hide", "release-hint", "release-objects"]);
    }

    #[test]
    fn the_group_edit_colour_shows_whether_the_name_already_exists() {
        let known = vec!["Passives".to_owned(), "Sources".to_owned()];

        assert_eq!(group_name_color("Passives", &known), EXISTING_GROUP_COLOR);
        assert_eq!(group_name_color("Brand New", &known), NEW_GROUP_COLOR);
        assert_eq!(group_name_color("", &known), NEW_GROUP_COLOR);
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum ChoiceStep {
        Rebuild,
        Select(i32),
    }

    #[derive(Debug, Default)]
    struct ChoiceHost {
        paths: Vec<String>,
        steps: Vec<ChoiceStep>,
    }

    impl RegistryFileChoiceHost for ChoiceHost {
        fn registry_file_path(&mut self, index: usize) -> String {
            self.paths.get(index).cloned().unwrap_or_default()
        }

        fn rebuild_groups(&mut self) {
            self.steps.push(ChoiceStep::Rebuild);
        }

        fn select_group(&mut self, index: i32) {
            self.steps.push(ChoiceStep::Select(index));
        }
    }

    #[test]
    fn choosing_a_registry_file_rebuilds_the_groups_and_resets_the_selection() {
        let mut host = ChoiceHost {
            paths: vec!["core.tcr".to_owned(), "mine.tcr".to_owned()],
            steps: Vec::new(),
        };

        assert_eq!(choose_registry_file(1, &mut host), "mine.tcr");

        assert_eq!(host.steps, [ChoiceStep::Rebuild, ChoiceStep::Select(0)]);
    }

    #[derive(Debug, Default)]
    struct HintHost {
        hides: usize,
        shown: Vec<String>,
    }

    impl NameHintHost for HintHost {
        fn hide_name_hint(&mut self) {
            self.hides += 1;
        }

        fn invalid_name_message(&mut self) -> String {
            "A name cannot contain:".to_owned()
        }

        fn show_name_hint(&mut self, message: &str) {
            self.shown.push(message.to_owned());
        }
    }

    #[test]
    fn a_rejected_name_character_is_swallowed_and_named_in_the_balloon() {
        let mut host = HintHost::default();

        assert!(reject_invalid_name_key('|', r#"\/?"<>|"#, &mut host));

        assert_eq!(
            host.shown,
            [format!(
                "A name cannot contain:{INVALID_NAME_CHARACTER_LIST}"
            )]
        );
    }

    #[test]
    fn an_accepted_character_passes_through_and_any_key_down_clears_the_balloon() {
        let mut host = HintHost::default();

        assert!(!reject_invalid_name_key('a', r#"\/?"<>|"#, &mut host));
        assert!(host.shown.is_empty());

        hide_invalid_name_hint(&mut host);
        hide_invalid_name_hint(&mut host);
        assert_eq!(host.hides, 2);
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    struct Dialog(ShapeDialogResult);

    impl ShapeDialog for Dialog {
        fn select_shape(&mut self) -> ShapeDialogResult {
            self.0.clone()
        }
    }

    #[derive(Default)]
    struct Adapter {
        choose_path: Option<PathBuf>,
        prepared: Vec<(String, String)>,
        proposed_path: Option<PathBuf>,
        saved: Vec<(String, PathBuf)>,
        updates: Vec<(GroupTarget, MacroRecord)>,
    }

    impl MacroSaveAdapter for Adapter {
        type PreparedShape = String;

        fn prepare_shape(
            &mut self,
            display_value: &str,
            associated_identity: &str,
        ) -> Result<Self::PreparedShape, WizardError> {
            self.prepared
                .push((display_value.to_owned(), associated_identity.to_owned()));
            Ok(associated_identity.to_owned())
        }

        fn choose_output_path(&mut self, proposed_path: &Path) -> Option<PathBuf> {
            self.proposed_path = Some(proposed_path.to_owned());
            self.choose_path.clone()
        }

        fn save_macro(
            &mut self,
            component_name: &str,
            _shape: &Self::PreparedShape,
            output_path: &Path,
        ) -> Result<String, WizardError> {
            self.saved
                .push((component_name.to_owned(), output_path.to_owned()));
            Ok("component-id".to_owned())
        }

        fn update_component_file(
            &mut self,
            group: &GroupTarget,
            record: &MacroRecord,
        ) -> Result<(), WizardError> {
            self.updates.push((group.clone(), record.clone()));
            Ok(())
        }
    }

    fn complete_window() -> Window {
        let mut window = Window::new(vec!["Existing".to_owned()]);
        window.component_name = "Part".to_owned();
        window.shape_display = "DIP-8".to_owned();
        window.shape_identity = "catalog/dip8".to_owned();
        window
    }

    #[test]
    fn browse_cancel_and_empty_acceptance_leave_shape_unchanged() {
        let mut window = complete_window();
        let before = (window.shape_display.clone(), window.shape_identity.clone());
        window.browse_shape(&mut Dialog(ShapeDialogResult::Cancelled));
        assert_eq!(
            (window.shape_display.clone(), window.shape_identity.clone()),
            before
        );
        window.browse_shape(&mut Dialog(ShapeDialogResult::Accepted(None)));
        assert_eq!(
            (window.shape_display.clone(), window.shape_identity.clone()),
            before
        );
    }

    #[test]
    fn browse_selection_copies_display_and_associated_values() {
        let mut window = complete_window();
        window.browse_shape(&mut Dialog(ShapeDialogResult::Accepted(Some(
            ShapeSelection {
                display_value: "SOIC-8".to_owned(),
                associated_identity: "catalog/soic8".to_owned(),
            },
        ))));
        assert_eq!(window.shape_values(), ("SOIC-8", "catalog/soic8"));
    }

    #[test]
    fn group_mode_handlers_change_only_enablement() {
        let mut window = complete_window();
        window.new_group = "Retained".to_owned();
        window.select_new_group_mode();
        assert_eq!(
            window.group_controls(),
            GroupControlState {
                existing_group_enabled: false,
                new_group_enabled: true,
            }
        );
        window.select_existing_group_mode();
        assert_eq!(
            window.group_controls(),
            GroupControlState {
                existing_group_enabled: true,
                new_group_enabled: false,
            }
        );
        assert_eq!(window.new_group, "Retained");
        assert_eq!(window.selected_group.as_deref(), Some("Existing"));
    }

    #[test]
    fn save_cancel_prepares_shape_but_does_not_set_success_or_update() -> Result<(), WizardError> {
        let mut window = complete_window();
        let mut adapter = Adapter::default();
        assert_eq!(
            window.save_macro(Path::new("user"), &mut adapter)?,
            SaveOutcome::Cancelled
        );
        assert_eq!(
            adapter.proposed_path,
            Some(PathBuf::from("user/MacroLib/Part.tsm"))
        );
        assert_eq!(adapter.prepared.len(), 1);
        assert!(adapter.saved.is_empty());
        assert!(adapter.updates.is_empty());
        assert!(!window.accepted());
        Ok(())
    }

    #[test]
    fn accepted_save_registers_macro_in_existing_group() -> Result<(), WizardError> {
        let mut window = complete_window();
        let output = PathBuf::from("chosen/Part.tsm");
        let mut adapter = Adapter {
            choose_path: Some(output.clone()),
            ..Adapter::default()
        };
        assert_eq!(
            window.save_macro(Path::new("user"), &mut adapter)?,
            SaveOutcome::Saved(output.clone())
        );
        assert!(window.accepted());
        assert_eq!(window.saved_path(), Some(output.as_path()));
        assert_eq!(adapter.saved, [("Part".to_owned(), output.clone())]);
        assert_eq!(adapter.updates.len(), 1);
        assert_eq!(
            adapter.updates[0].0,
            GroupTarget::Existing("Existing".to_owned())
        );
        assert_eq!(adapter.updates[0].1.macro_type, 0x39);
        assert_eq!(adapter.updates[0].1.file_name, output);
        Ok(())
    }

    #[test]
    fn accepted_save_uses_retained_new_group_text() -> Result<(), WizardError> {
        let mut window = complete_window();
        window.select_new_group_mode();
        window.new_group = "New group".to_owned();
        let mut adapter = Adapter {
            choose_path: Some(PathBuf::from("Part.tsm")),
            ..Adapter::default()
        };
        let _ = window.save_macro(Path::new("user"), &mut adapter)?;
        assert_eq!(
            adapter.updates[0].0,
            GroupTarget::New("New group".to_owned())
        );
        Ok(())
    }
}

impl Window {
    /// Implements Ghidra function `FUN_01bc3a40` at `0x01BC3A40`.
    ///
    /// Handles `PCBOnlyCompWizardEvents.OnIdle`.
    ///
    /// Decides whether the accept button is enabled, which the wizard
    /// re-decides on every idle turn rather than when a field changes.
    ///
    /// The two modes ask different questions of the group. Choosing an
    /// existing group only requires that there be one to choose — the
    /// selection itself is never checked, because a non-empty list always has
    /// one. Naming a new group instead requires the name to be one the list
    /// does not already hold, so the button goes grey the moment the user
    /// types a name that already exists rather than letting them find out on
    /// save.
    ///
    /// Two fields are required in both modes: the component's name and the
    /// shape's displayed value. The shape's identity is *not* among them, so
    /// the button can be enabled for a shape that has a display value and no
    /// identity behind it — [`Self::save_macro`] is what refuses that, with
    /// [`WizardError::InvalidInput`]. The two gates therefore disagree by
    /// design, and this one is the button's.
    #[must_use]
    pub fn accept_enabled(&self) -> bool {
        if self.component_name.is_empty() || self.shape_display.is_empty() {
            return false;
        }

        match self.group_mode {
            GroupMode::Existing => !self.groups.is_empty(),
            GroupMode::New => !self.new_group.is_empty() && !self.groups.contains(&self.new_group),
        }
    }
}

#[cfg(test)]
mod accept_enabled_tests {
    use super::*;

    fn filled(groups: &[&str]) -> Window {
        let mut window = Window::new(groups.iter().map(|group| (*group).to_owned()).collect());
        window.update(Message::ComponentNameChanged("R0805".to_owned()));
        window.shape_display = "RES0805".to_owned();
        window.shape_identity = "shape-1".to_owned();
        window
    }

    #[test]
    fn an_existing_group_only_needs_the_list_to_have_one() {
        let window = filled(&["Passives"]);

        assert!(window.accept_enabled());
    }

    #[test]
    fn an_empty_group_list_leaves_the_existing_mode_with_nothing_to_choose() {
        let window = filled(&[]);

        assert!(!window.accept_enabled());
    }

    #[test]
    fn the_chosen_group_itself_is_never_checked() {
        let mut window = filled(&["Passives"]);
        window.selected_group = None;

        assert!(window.accept_enabled());
    }

    #[test]
    fn a_new_group_needs_a_name() {
        let mut window = filled(&["Passives"]);
        window.select_new_group_mode();

        assert!(!window.accept_enabled());

        window.update(Message::NewGroupChanged("Resistors".to_owned()));
        assert!(window.accept_enabled());
    }

    #[test]
    fn a_new_group_that_already_exists_greys_the_button() {
        let mut window = filled(&["Passives"]);
        window.select_new_group_mode();
        window.update(Message::NewGroupChanged("Passives".to_owned()));

        assert!(!window.accept_enabled());
    }

    #[test]
    fn a_new_group_needs_no_list_at_all() {
        let mut window = filled(&[]);
        window.select_new_group_mode();
        window.update(Message::NewGroupChanged("Resistors".to_owned()));

        assert!(window.accept_enabled());
    }

    #[test]
    fn both_modes_need_the_component_name_and_the_shape() {
        for mode in [GroupMode::Existing, GroupMode::New] {
            let mut window = filled(&["Passives"]);
            if mode == GroupMode::New {
                window.select_new_group_mode();
                window.update(Message::NewGroupChanged("Resistors".to_owned()));
            }
            assert!(window.accept_enabled());

            let name = std::mem::take(&mut window.component_name);
            assert!(!window.accept_enabled());
            window.component_name = name;

            window.shape_display = String::new();
            assert!(!window.accept_enabled());
        }
    }

    #[test]
    fn the_button_ignores_the_shape_identity_that_saving_insists_on() {
        let mut window = filled(&["Passives"]);
        window.shape_identity = String::new();

        assert!(window.accept_enabled());
        assert!(!window.can_accept());
    }
}

/// The name the recovered form gives its save dialog.
pub const SAVE_DIALOG_NAME: &str = "SaveTSMDlg";

/// The save dialog's caption.
pub const SAVE_DIALOG_TITLE: &str = "Save Macro";

/// The single filter the save dialog offers.
pub const SAVE_DIALOG_FILTER: &str = "Schematics Macro (*.TSM)|*.TSM";

/// The directory, under each macro root, that holds the macro library.
///
/// Spelled as the recovered literal spells it, which differs in case from the
/// name used elsewhere in this module; Windows does not distinguish them.
pub const MACRO_LIBRARY_DIRECTORY: &str = r"\Macrolib";

/// The label the user's own macro directory appears under in the dialog's
/// shortcut bar.
pub const USER_MACROS_LABEL: &str = "User Macros|";

/// The label the shipped macro directory appears under.
pub const TINA_MACROS_LABEL: &str = "Tina Macros|";

/// The help topic the form registers for itself.
pub const HELP_CONTEXT: u32 = 0x0492;

/// The save dialog's option word, as the recovered handler writes it.
pub const SAVE_DIALOG_OPTIONS: u32 = 0x0008_0116;

/// The options the recovered word turns on.
///
/// Part of Ghidra function `FUN_01bc2800` at `0x01BC2800`.
///
/// Read out of the word, the choices are deliberate: the dialog warns before
/// replacing a file, hides the read-only box, offers help, refuses a path
/// that does not exist, and can be resized. Nothing asks the file itself to
/// exist, which is what makes it a save dialog rather than an open one.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
#[allow(clippy::struct_excessive_bools)]
pub struct SaveDialogOptions {
    /// Warn before overwriting an existing file.
    pub overwrite_prompt: bool,
    /// Hide the read-only checkbox.
    pub hide_read_only: bool,
    /// Show the help button.
    pub show_help: bool,
    /// Refuse a directory that does not exist.
    pub path_must_exist: bool,
    /// Let the user resize the dialog.
    pub enable_sizing: bool,
}

impl SaveDialogOptions {
    /// The bit each option sits at in the recovered word.
    const OVERWRITE_PROMPT: u32 = 1 << 1;
    const HIDE_READ_ONLY: u32 = 1 << 2;
    const SHOW_HELP: u32 = 1 << 4;
    const PATH_MUST_EXIST: u32 = 1 << 8;
    const ENABLE_SIZING: u32 = 1 << 19;

    /// Reads the options out of the word the recovered handler writes.
    #[must_use]
    pub const fn from_word(word: u32) -> Self {
        Self {
            overwrite_prompt: word & Self::OVERWRITE_PROMPT != 0,
            hide_read_only: word & Self::HIDE_READ_ONLY != 0,
            show_help: word & Self::SHOW_HELP != 0,
            path_must_exist: word & Self::PATH_MUST_EXIST != 0,
            enable_sizing: word & Self::ENABLE_SIZING != 0,
        }
    }

    /// The word these options make.
    #[must_use]
    pub const fn to_word(self) -> u32 {
        let mut word = 0;
        if self.overwrite_prompt {
            word |= Self::OVERWRITE_PROMPT;
        }
        if self.hide_read_only {
            word |= Self::HIDE_READ_ONLY;
        }
        if self.show_help {
            word |= Self::SHOW_HELP;
        }
        if self.path_must_exist {
            word |= Self::PATH_MUST_EXIST;
        }
        if self.enable_sizing {
            word |= Self::ENABLE_SIZING;
        }
        word
    }
}

/// How the recovered form sets its save dialog up.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SaveDialogSetup {
    /// The dialog's own name.
    pub name: String,
    /// Its caption.
    pub title: String,
    /// Its filter.
    pub filter: String,
    /// Its options.
    pub options: SaveDialogOptions,
    /// The directory it opens in.
    pub initial_directory: PathBuf,
    /// The two labelled shortcuts it offers, in the recovered order.
    pub shortcuts: [String; 2],
}

/// Implements part of Ghidra function `FUN_01bc2800` at `0x01BC2800`.
///
/// Describes the save dialog the form builds when it is created.
///
/// Both macro roots get a labelled shortcut — the user's own first and the
/// shipped one second — but only the user's is opened into, because that is
/// the only one a macro can be saved to.
#[must_use]
pub fn save_dialog_setup(user_macro_root: &Path, shipped_macro_root: &Path) -> SaveDialogSetup {
    let user_library = macro_library(user_macro_root);

    SaveDialogSetup {
        name: SAVE_DIALOG_NAME.to_owned(),
        title: SAVE_DIALOG_TITLE.to_owned(),
        filter: SAVE_DIALOG_FILTER.to_owned(),
        options: SaveDialogOptions::from_word(SAVE_DIALOG_OPTIONS),
        initial_directory: user_library.clone(),
        shortcuts: [
            format!("{USER_MACROS_LABEL}{}", user_library.display()),
            format!(
                "{TINA_MACROS_LABEL}{}",
                macro_library(shipped_macro_root).display()
            ),
        ],
    }
}

fn macro_library(root: &Path) -> PathBuf {
    PathBuf::from(format!("{}{MACRO_LIBRARY_DIRECTORY}", root.display()))
}

/// Implements part of Ghidra function `FUN_01bc2800` at `0x01BC2800`.
///
/// Turns the macro library's file names into the group names the wizard
/// offers.
///
/// Each file becomes one group named after it with its directory and
/// extension taken off, so the groups are the library's files and nothing
/// records them separately.
#[must_use]
pub fn group_names(macro_files: &[String]) -> Vec<String> {
    macro_files
        .iter()
        .map(|file| {
            Path::new(file)
                .file_stem()
                .map_or_else(String::new, |stem| stem.to_string_lossy().into_owned())
        })
        .collect()
}

impl Window {
    /// Implements Ghidra function `FUN_01bc2800` at `0x01BC2800`.
    ///
    /// Handles `frmPCBOnlyCompWizard.OnCreate`.
    ///
    /// Builds the wizard from the two lists it offers and sets its save
    /// dialog up.
    ///
    /// The group list is the macro library's own files, so adding a file to
    /// that directory adds a group without anything else being told. Both
    /// lists select their first row, and the group list does so only when it
    /// has one — an empty library leaves the wizard with nothing selected
    /// rather than an out-of-range row, which is why
    /// [`Self::accept_enabled`] can ask whether the list is empty at all.
    ///
    /// Returns the save dialog's description for the caller to apply.
    #[must_use]
    pub fn create(
        macro_files: &[String],
        user_macro_root: &Path,
        shipped_macro_root: &Path,
    ) -> (Self, SaveDialogSetup) {
        let mut window = Self::new(group_names(macro_files));
        window.select_existing_group_mode();

        (
            window,
            save_dialog_setup(user_macro_root, shipped_macro_root),
        )
    }

    /// The help topic the form registers for itself.
    #[must_use]
    pub const fn help_context() -> u32 {
        HELP_CONTEXT
    }
}

#[cfg(test)]
mod create_tests {
    use super::*;

    #[test]
    fn the_recovered_option_word_reads_back_as_the_five_choices() {
        let options = SaveDialogOptions::from_word(SAVE_DIALOG_OPTIONS);

        assert!(options.overwrite_prompt);
        assert!(options.hide_read_only);
        assert!(options.show_help);
        assert!(options.path_must_exist);
        assert!(options.enable_sizing);
    }

    #[test]
    fn the_options_make_the_word_back_again() {
        assert_eq!(
            SaveDialogOptions::from_word(SAVE_DIALOG_OPTIONS).to_word(),
            SAVE_DIALOG_OPTIONS
        );
        assert_eq!(SaveDialogOptions::default().to_word(), 0);
    }

    #[test]
    fn nothing_in_the_word_asks_the_file_to_already_exist() {
        // A save dialog that insisted on an existing file could never create
        // one; the recovered word only insists on the directory.
        let options = SaveDialogOptions::from_word(SAVE_DIALOG_OPTIONS);
        assert!(options.path_must_exist);
    }

    #[test]
    fn both_macro_roots_get_a_labelled_shortcut() {
        let setup = save_dialog_setup(Path::new(r"C:\Users\Me\Tina"), Path::new(r"C:\Tina"));

        assert_eq!(
            setup.shortcuts,
            [
                r"User Macros|C:\Users\Me\Tina\Macrolib".to_owned(),
                r"Tina Macros|C:\Tina\Macrolib".to_owned(),
            ]
        );
    }

    #[test]
    fn only_the_users_own_library_is_opened_into() {
        let setup = save_dialog_setup(Path::new(r"C:\Users\Me\Tina"), Path::new(r"C:\Tina"));

        assert_eq!(
            setup.initial_directory,
            PathBuf::from(r"C:\Users\Me\Tina\Macrolib")
        );
    }

    #[test]
    fn the_dialog_carries_the_recovered_name_title_and_filter() {
        let setup = save_dialog_setup(Path::new("u"), Path::new("t"));

        assert_eq!(setup.name, "SaveTSMDlg");
        assert_eq!(setup.title, "Save Macro");
        assert_eq!(setup.filter, "Schematics Macro (*.TSM)|*.TSM");
    }

    #[test]
    fn a_group_is_a_library_file_with_its_path_and_extension_taken_off() {
        assert_eq!(
            group_names(&[
                r"C:\Tina\Macrolib\Passives.tsm".to_owned(),
                "Actives.TSM".to_owned(),
            ]),
            ["Passives", "Actives"]
        );
    }

    #[test]
    fn an_empty_library_offers_no_groups() {
        assert!(group_names(&[]).is_empty());
    }

    #[test]
    fn the_wizard_starts_on_the_existing_group_mode_with_the_first_group() {
        let (window, _) = Window::create(
            &["Passives.tsm".to_owned(), "Actives.tsm".to_owned()],
            Path::new("u"),
            Path::new("t"),
        );

        assert_eq!(
            window.group_controls(),
            GroupControlState {
                existing_group_enabled: true,
                new_group_enabled: false,
            }
        );
        assert_eq!(window.selected_group.as_deref(), Some("Passives"));
    }

    #[test]
    fn an_empty_library_leaves_nothing_selected_rather_than_a_bad_row() {
        let (window, _) = Window::create(&[], Path::new("u"), Path::new("t"));

        assert_eq!(window.selected_group, None);
        assert!(!window.accept_enabled());
    }

    #[test]
    fn the_form_registers_its_own_help_topic() {
        assert_eq!(Window::help_context(), 0x0492);
    }
}
