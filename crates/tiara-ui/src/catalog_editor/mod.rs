//! Catalog Editor dialog state and iced adapters.
//!
//! Library evaluation: [`std::rc::Rc`] and [`std::cell::RefCell`] provide the
//! caller-owned, single-threaded catalog identity that a modal iced window
//! needs. `Vec` and `String` provide the working lists and bounded text.
//! `iced` 0.13 supplies messages, widgets, tasks, and a Tokio-backed time
//! subscription. No extra catalog or debounce crate was selected because the
//! catalog rules are application-specific and iced already owns timer
//! lifetimes through subscriptions.

use std::cell::{Ref, RefCell};
use std::fmt;
use std::rc::Rc;
use std::time::Duration;

use iced::widget::{button, column, container, pick_list, row, scrollable, text, text_input};
use iced::{Alignment, Element, Length, Subscription, Task};

pub const TITLE: &str = "Catalog Editor";
pub const FORM_RESOURCE: &str = "CatalogEditorDlg";
pub const TYPE_REFRESH_DELAY: Duration = Duration::from_millis(200);
pub const LIBRARY_EVALUATION: &str = "std Rc<RefCell<_>>, Vec, and String preserve caller identity and working data; iced 0.13 supplies the GUI and Tokio-backed timer subscription; no additional crate is required.";

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CatalogType {
    pub name: String,
    pub parameter_values: Vec<String>,
}

impl CatalogType {
    #[must_use]
    pub fn new(
        name: impl Into<String>,
        parameter_values: impl IntoIterator<Item = impl Into<String>>,
    ) -> Self {
        Self {
            name: name.into(),
            parameter_values: parameter_values.into_iter().map(Into::into).collect(),
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CatalogModel {
    pub name: String,
    pub parameter_names: Vec<String>,
    pub types: Vec<CatalogType>,
}

impl CatalogModel {
    #[must_use]
    pub fn new(
        name: impl Into<String>,
        parameter_names: impl IntoIterator<Item = impl Into<String>>,
        types: impl IntoIterator<Item = CatalogType>,
    ) -> Self {
        Self {
            name: name.into(),
            parameter_names: parameter_names.into_iter().map(Into::into).collect(),
            types: types.into_iter().collect(),
        }
    }
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct CatalogData {
    pub models: Vec<CatalogModel>,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct CatalogEntry {
    pub type_name: String,
    pub model_name: String,
    pub grid_state: u8,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ManagerInvalidation {
    pub one_based_entry_index: usize,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct CatalogCollection {
    pub entries: Vec<CatalogEntry>,
    pub data: Rc<CatalogData>,
    pub derived_identity_revision: u64,
    pub manager_invalidations: Vec<ManagerInvalidation>,
}

impl CatalogCollection {
    #[must_use]
    pub fn new(entries: Vec<CatalogEntry>, data: CatalogData) -> Self {
        Self {
            entries,
            data: Rc::new(data),
            derived_identity_revision: 0,
            manager_invalidations: Vec::new(),
        }
    }
}

pub type SharedCatalogCollection = Rc<RefCell<CatalogCollection>>;

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum EditMode {
    #[default]
    Normal,
    Alternate,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum GridCommitStatus {
    #[default]
    Valid,
    Invalid,
    AlternateCommitted,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DialogResult {
    Accepted,
    Cancelled,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AcceptOutcome {
    Committed { catalog_identity_changed: bool },
    ValidationFailed,
    AlternateEditorCommitted,
    AlternateEditorRejected,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ParameterRow {
    pub name: String,
    pub value: String,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
struct RefreshTimer {
    generation: u64,
    enabled: bool,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    ModelSelected(String),
    TypeSelected(usize),
    ParameterChanged { row: usize, value: String },
    GridCommitStatusChanged(GridCommitStatus),
    TypeRefreshElapsed(u64),
    AcceptPressed,
    CancelPressed,
}

#[derive(Debug)]
pub struct Window {
    collection: SharedCatalogCollection,
    catalog_data: Rc<CatalogData>,
    selected_entry_index: usize,
    model_names: Vec<String>,
    parameter_names: Vec<String>,
    type_names: Vec<String>,
    selected_model_index: usize,
    selected_type_index: usize,
    staged_type_index: usize,
    model_type_base: usize,
    parameter_rows: Vec<ParameterRow>,
    position_label: String,
    grid_state: u8,
    grid_commit_status: GridCommitStatus,
    close_veto_pending: bool,
    refresh_timer: RefreshTimer,
    edit_mode: EditMode,
    dialog_result: Option<DialogResult>,
    last_accept_outcome: Option<AcceptOutcome>,
}

impl Window {
    /// Ports Ghidra function `FUN_013ef440` at `0x013EF440`.
    ///
    /// The dialog keeps the supplied collection and selected entry, obtains
    /// its related catalog data, and creates separate model-name and parameter-
    /// name working lists. The modal dialog therefore commits to the selected
    /// caller-owned entry instead of returning a detached record.
    ///
    /// # Panics
    ///
    /// Panics when the selected entry, its model, or its type is absent. The
    /// recovered dialog also relies on its caller and form initialization to
    /// establish valid selections.
    #[must_use]
    pub fn new(
        collection: SharedCatalogCollection,
        selected_entry_index: usize,
        edit_mode: EditMode,
    ) -> Self {
        let (catalog_data, entry) = {
            let collection_ref = collection.borrow();
            (
                Rc::clone(&collection_ref.data),
                collection_ref.entries[selected_entry_index].clone(),
            )
        };
        let model_names = catalog_data
            .models
            .iter()
            .map(|model| model.name.clone())
            .collect::<Vec<_>>();
        let selected_model_index = model_names
            .iter()
            .position(|name| name == &entry.model_name)
            .unwrap_or(0);
        let selected_model = &catalog_data.models[selected_model_index];
        let type_names = selected_model
            .types
            .iter()
            .map(|catalog_type| catalog_type.name.clone())
            .collect::<Vec<_>>();
        let selected_type_index = type_names
            .iter()
            .position(|name| name == &entry.type_name)
            .unwrap_or(0);
        let model_type_base = catalog_data.models[..selected_model_index]
            .iter()
            .map(|model| model.types.len())
            .sum();
        let parameter_names = selected_model.parameter_names.clone();
        let parameter_rows = build_parameter_rows(
            &parameter_names,
            &selected_model.types[selected_type_index].parameter_values,
        );
        let type_count = selected_model.types.len();

        Self {
            collection,
            catalog_data,
            selected_entry_index,
            model_names,
            parameter_names,
            type_names,
            selected_model_index,
            selected_type_index,
            staged_type_index: selected_type_index,
            model_type_base,
            parameter_rows,
            position_label: format_position_label(selected_type_index, type_count),
            grid_state: entry.grid_state,
            grid_commit_status: GridCommitStatus::Valid,
            close_veto_pending: false,
            refresh_timer: RefreshTimer::default(),
            edit_mode,
            dialog_result: None,
            last_accept_outcome: None,
        }
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::ModelSelected(model_name) => {
                let Some(model_index) =
                    self.model_names.iter().position(|name| name == &model_name)
                else {
                    return Task::none();
                };
                self.select_model(model_index);
            }
            Message::TypeSelected(type_index) => {
                self.selected_type_index = type_index;
                self.restart_type_refresh();
            }
            Message::ParameterChanged { row, value } => {
                self.parameter_rows[row].value = value;
            }
            Message::GridCommitStatusChanged(status) => self.grid_commit_status = status,
            Message::TypeRefreshElapsed(generation) => {
                self.run_deferred_type_refresh(generation);
            }
            Message::AcceptPressed => {
                let outcome = self.accept();
                let can_close = self.can_close_after_validation();
                if matches!(
                    outcome,
                    AcceptOutcome::Committed { .. } | AcceptOutcome::AlternateEditorCommitted
                ) && can_close
                {
                    self.dialog_result = Some(DialogResult::Accepted);
                }
                self.last_accept_outcome = Some(outcome);
            }
            Message::CancelPressed => self.dialog_result = Some(DialogResult::Cancelled),
        }

        Task::none()
    }

    /// Ports Ghidra function `FUN_013f0060` at `0x013F0060`.
    ///
    /// The model selection keeps the prior type by displayed text when the new
    /// model contains it, otherwise selects item zero. It rebuilds model-
    /// dependent type and parameter state and restarts the deferred refresh.
    /// Selecting the current model again performs the same full rebuild.
    ///
    /// # Panics
    ///
    /// Panics for an invalid model index or an empty type list, matching the
    /// recovered handler's reliance on initialized list selections.
    pub fn select_model(&mut self, model_index: usize) {
        let previous_type_name = self.type_names[self.staged_type_index].clone();
        let selected_model = &self.catalog_data.models[model_index];

        self.selected_model_index = model_index;
        self.model_type_base = self.catalog_data.models[..model_index]
            .iter()
            .map(|model| model.types.len())
            .sum();
        self.type_names = selected_model
            .types
            .iter()
            .map(|catalog_type| catalog_type.name.clone())
            .collect();
        self.selected_type_index = self
            .type_names
            .iter()
            .position(|name| name == &previous_type_name)
            .unwrap_or(0);
        self.parameter_names
            .clone_from(&selected_model.parameter_names);
        self.parameter_rows = build_parameter_rows(
            &self.parameter_names,
            &selected_model.types[self.selected_type_index].parameter_values,
        );
        self.position_label =
            format_position_label(self.selected_type_index, self.type_names.len());
        self.restart_type_refresh();
    }

    /// Ports Ghidra function `FUN_013f0230` at `0x013F0230`.
    ///
    /// The refresh stages the current type index, combines it with the current
    /// model's base index, loads the selected type values into the working
    /// parameter grid, and updates the one-based position/count label. It does
    /// not validate the index or write the caller-owned catalog entry.
    ///
    /// # Panics
    ///
    /// Panics for an invalid selection. The recovered function has no bounds
    /// guard and receives selections established by the dialog controls.
    pub fn refresh_selected_type(&mut self) {
        self.staged_type_index = self.selected_type_index;
        let global_type_index = self.model_type_base + self.staged_type_index;
        let catalog_type = self.catalog_type_at_global_index(global_type_index);
        let values = catalog_type.parameter_values.clone();
        self.parameter_rows = build_parameter_rows(&self.parameter_names, &values);
        self.position_label =
            format_position_label(self.selected_type_index, self.type_names.len());
    }

    /// Ports Ghidra function `FUN_013f0440` at `0x013F0440`.
    ///
    /// The Type-list click disables any prior timer instance, uses a 200 ms
    /// interval, and enables a new generation. The generation is part of the
    /// iced subscription identity, so another click restarts the delay and a
    /// late tick from the prior generation is ignored.
    pub const fn restart_type_refresh(&mut self) {
        self.refresh_timer.enabled = false;
        self.refresh_timer.generation = self.refresh_timer.generation.wrapping_add(1);
        self.refresh_timer.enabled = true;
    }

    /// Ports Ghidra function `FUN_013f05c0` at `0x013F05C0`.
    ///
    /// Normal mode commits the active grid editor first. A validation failure
    /// sets the one-use close veto and writes no catalog fields. Success writes
    /// the staged Type text, Model text, and grid state to the selected caller-
    /// owned entry. Type text is limited to 20 UTF-8 bytes and Model text to 16
    /// UTF-8 bytes. Changed identity fields rebuild the collection identity and
    /// record the matching one-based manager invalidation. Alternate mode does
    /// not copy these fields and accepts only its separate committed status.
    pub fn accept(&mut self) -> AcceptOutcome {
        if self.edit_mode == EditMode::Alternate {
            return if self.grid_commit_status == GridCommitStatus::AlternateCommitted {
                AcceptOutcome::AlternateEditorCommitted
            } else {
                AcceptOutcome::AlternateEditorRejected
            };
        }

        if self.grid_commit_status == GridCommitStatus::Invalid {
            self.close_veto_pending = true;
            return AcceptOutcome::ValidationFailed;
        }

        let selected_type = bounded_utf8(&self.type_names[self.staged_type_index], 20);
        let selected_model = bounded_utf8(&self.model_names[self.selected_model_index], 16);
        let mut collection = self.collection.borrow_mut();
        let entry = &mut collection.entries[self.selected_entry_index];
        let catalog_identity_changed =
            entry.type_name != selected_type || entry.model_name != selected_model;

        entry.type_name = selected_type;
        entry.model_name = selected_model;
        entry.grid_state = self.grid_state;

        if catalog_identity_changed {
            collection.derived_identity_revision =
                collection.derived_identity_revision.wrapping_add(1);
            collection.manager_invalidations.push(ManagerInvalidation {
                one_based_entry_index: self.selected_entry_index + 1,
            });
        }

        AcceptOutcome::Committed {
            catalog_identity_changed,
        }
    }

    /// Ports Ghidra function `FUN_013f0cd0` at `0x013F0CD0`.
    ///
    /// A failed normal grid commit vetoes one close request. This method always
    /// clears the flag, so a correction or later retry can close the dialog.
    #[must_use]
    pub const fn can_close_after_validation(&mut self) -> bool {
        let can_close = !self.close_veto_pending;
        self.close_veto_pending = false;
        can_close
    }

    /// Ports Ghidra function `FUN_013f0da0` at `0x013F0DA0`.
    ///
    /// The current timer generation is disabled before it runs the selected-
    /// type refresh. It is a one-shot callback with no retry branch. Stale iced
    /// ticks are ignored because their subscription generation no longer owns
    /// the timer.
    pub fn run_deferred_type_refresh(&mut self, generation: u64) {
        if !self.refresh_timer.enabled || generation != self.refresh_timer.generation {
            return;
        }

        self.refresh_timer.enabled = false;
        self.refresh_selected_type();
    }

    pub fn subscription(&self) -> Subscription<Message> {
        if !self.refresh_timer.enabled {
            return Subscription::none();
        }

        iced::time::every(TYPE_REFRESH_DELAY)
            .with(self.refresh_timer.generation)
            .map(|(generation, _)| Message::TypeRefreshElapsed(generation))
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let selected_model = self.model_names.get(self.selected_model_index).cloned();
        let model_selector = pick_list(
            self.model_names.clone(),
            selected_model,
            Message::ModelSelected,
        );
        let type_list = self.type_names.iter().enumerate().fold(
            column![].spacing(4),
            |types, (index, type_name)| {
                let label = if index == self.selected_type_index {
                    format!("> {type_name}")
                } else {
                    type_name.clone()
                };
                types.push(
                    button(text(label).width(Length::Fill))
                        .width(Length::Fill)
                        .on_press(Message::TypeSelected(index)),
                )
            },
        );
        let parameter_grid = self.parameter_rows.iter().enumerate().fold(
            column![].spacing(6),
            |parameters, (index, parameter)| {
                parameters.push(
                    row![
                        text(&parameter.name).width(Length::FillPortion(2)),
                        text_input("", &parameter.value)
                            .on_input(move |value| Message::ParameterChanged { row: index, value })
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                )
            },
        );

        container(
            column![
                row![text("Model"), model_selector]
                    .spacing(8)
                    .align_y(Alignment::Center),
                row![
                    column![
                        text("Type"),
                        scrollable(type_list).height(Length::Fill),
                        text(&self.position_label),
                    ]
                    .spacing(6)
                    .width(Length::FillPortion(2)),
                    column![text("Model Parameters"), scrollable(parameter_grid)]
                        .spacing(6)
                        .width(Length::FillPortion(3)),
                ]
                .spacing(12)
                .height(Length::Fill),
                row![
                    button("OK").on_press(Message::AcceptPressed),
                    button("Cancel").on_press(Message::CancelPressed),
                ]
                .spacing(8),
            ]
            .spacing(12),
        )
        .padding(12)
        .width(Length::Fill)
        .height(Length::Fill)
        .into()
    }

    #[must_use]
    pub fn collection(&self) -> Ref<'_, CatalogCollection> {
        self.collection.borrow()
    }

    #[must_use]
    pub const fn selected_model_index(&self) -> usize {
        self.selected_model_index
    }

    #[must_use]
    pub const fn selected_type_index(&self) -> usize {
        self.selected_type_index
    }

    #[must_use]
    pub const fn staged_type_index(&self) -> usize {
        self.staged_type_index
    }

    #[must_use]
    pub fn parameter_rows(&self) -> &[ParameterRow] {
        &self.parameter_rows
    }

    #[must_use]
    pub fn position_label(&self) -> &str {
        &self.position_label
    }

    #[must_use]
    pub const fn timer_generation(&self) -> u64 {
        self.refresh_timer.generation
    }

    #[must_use]
    pub const fn timer_enabled(&self) -> bool {
        self.refresh_timer.enabled
    }

    #[must_use]
    pub const fn dialog_result(&self) -> Option<DialogResult> {
        self.dialog_result
    }

    #[must_use]
    pub const fn last_accept_outcome(&self) -> Option<AcceptOutcome> {
        self.last_accept_outcome
    }

    pub const fn set_grid_state(&mut self, grid_state: u8) {
        self.grid_state = grid_state;
    }

    fn catalog_type_at_global_index(&self, global_type_index: usize) -> &CatalogType {
        self.catalog_data
            .models
            .iter()
            .flat_map(|model| &model.types)
            .nth(global_type_index)
            .unwrap_or_else(|| panic!("type selection must come from the iced type list"))
    }
}

fn build_parameter_rows(names: &[String], values: &[String]) -> Vec<ParameterRow> {
    names
        .iter()
        .enumerate()
        .map(|(index, name)| ParameterRow {
            name: name.clone(),
            value: values.get(index).cloned().unwrap_or_default(),
        })
        .collect()
}

fn bounded_utf8(value: &str, maximum_bytes: usize) -> String {
    let mut boundary = value.len().min(maximum_bytes);
    while !value.is_char_boundary(boundary) {
        boundary -= 1;
    }
    value[..boundary].to_owned()
}

fn format_position_label(index: usize, count: usize) -> String {
    format!("{:05}/{count:05}", index + 1)
}

impl fmt::Display for DialogResult {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::Accepted => formatter.write_str("Accepted"),
            Self::Cancelled => formatter.write_str("Cancelled"),
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn catalog() -> SharedCatalogCollection {
        Rc::new(RefCell::new(CatalogCollection::new(
            vec![CatalogEntry {
                type_name: "Common".to_owned(),
                model_name: "Model A".to_owned(),
                grid_state: 3,
            }],
            CatalogData {
                models: vec![
                    CatalogModel::new(
                        "Model A",
                        ["Resistance", "Tolerance"],
                        [
                            CatalogType::new("Common", ["10k", "5%"]),
                            CatalogType::new("A-only", ["20k", "1%"]),
                        ],
                    ),
                    CatalogModel::new(
                        "Model B",
                        ["Resistance", "Power"],
                        [
                            CatalogType::new("Common", ["30k", "0.5W"]),
                            CatalogType::new("B-only", ["40k", "1W"]),
                        ],
                    ),
                    CatalogModel::new(
                        "A model name longer than sixteen bytes",
                        ["Value"],
                        [CatalogType::new(
                            "A type name longer than twenty bytes",
                            ["value"],
                        )],
                    ),
                ],
            },
        )))
    }

    #[test]
    fn constructor_keeps_the_caller_collection_and_builds_working_lists() {
        let collection = catalog();
        let window = Window::new(Rc::clone(&collection), 0, EditMode::Normal);

        assert!(Rc::ptr_eq(&window.collection, &collection));
        assert!(Rc::ptr_eq(&window.catalog_data, &collection.borrow().data));
        assert_eq!(window.model_names.len(), 3);
        assert_eq!(window.parameter_names, ["Resistance", "Tolerance"]);
        assert_eq!(window.selected_model_index(), 0);
        assert_eq!(window.selected_type_index(), 0);
    }

    #[test]
    fn model_change_preserves_type_text_and_rebuilds_parameters() {
        let mut window = Window::new(catalog(), 0, EditMode::Normal);

        window.select_model(1);

        assert_eq!(window.selected_model_index(), 1);
        assert_eq!(window.selected_type_index(), 0);
        assert_eq!(window.parameter_names, ["Resistance", "Power"]);
        assert_eq!(window.parameter_rows[1].value, "0.5W");
        assert!(window.timer_enabled());
    }

    #[test]
    fn model_change_falls_back_to_first_type_and_restarts_even_when_repeated() {
        let mut window = Window::new(catalog(), 0, EditMode::Normal);
        window.selected_type_index = 1;
        window.staged_type_index = 1;

        window.select_model(1);
        assert_eq!(window.selected_type_index(), 0);
        let first_generation = window.timer_generation();
        window.select_model(1);

        assert_eq!(window.selected_type_index(), 1);
        assert!(window.timer_generation() > first_generation);
    }

    #[test]
    fn selected_type_refresh_stages_index_and_updates_grid_without_committing() {
        let collection = catalog();
        let mut window = Window::new(Rc::clone(&collection), 0, EditMode::Normal);
        window.selected_type_index = 1;

        window.refresh_selected_type();

        assert_eq!(window.staged_type_index(), 1);
        assert_eq!(window.parameter_rows[0].value, "20k");
        assert_eq!(window.position_label(), "00002/00002");
        assert_eq!(collection.borrow().entries[0].type_name, "Common");
    }

    #[test]
    fn type_click_restarts_the_generation_and_stale_ticks_do_nothing() {
        let mut window = Window::new(catalog(), 0, EditMode::Normal);
        window.restart_type_refresh();
        let stale_generation = window.timer_generation();
        window.selected_type_index = 1;
        window.restart_type_refresh();

        window.run_deferred_type_refresh(stale_generation);

        assert_eq!(window.staged_type_index(), 0);
        assert!(window.timer_enabled());
    }

    #[test]
    fn timer_tick_is_one_shot_and_refreshes_the_latest_selection() {
        let mut window = Window::new(catalog(), 0, EditMode::Normal);
        window.selected_type_index = 1;
        window.restart_type_refresh();
        let generation = window.timer_generation();

        window.run_deferred_type_refresh(generation);

        assert!(!window.timer_enabled());
        assert_eq!(window.staged_type_index(), 1);
        assert_eq!(window.parameter_rows[0].value, "20k");
    }

    #[test]
    fn validation_failure_writes_nothing_and_vetoes_one_close() {
        let collection = catalog();
        let original_entry = collection.borrow().entries[0].clone();
        let mut window = Window::new(Rc::clone(&collection), 0, EditMode::Normal);
        window.grid_commit_status = GridCommitStatus::Invalid;

        assert_eq!(window.accept(), AcceptOutcome::ValidationFailed);
        assert_eq!(collection.borrow().entries[0], original_entry);
        assert!(!window.can_close_after_validation());
        assert!(window.can_close_after_validation());
    }

    #[test]
    fn accepted_commit_uses_staged_type_and_invalidates_changed_identity() {
        let collection = catalog();
        let mut window = Window::new(Rc::clone(&collection), 0, EditMode::Normal);
        window.selected_type_index = 1;
        window.set_grid_state(9);

        let outcome = window.accept();

        assert_eq!(
            outcome,
            AcceptOutcome::Committed {
                catalog_identity_changed: false,
            }
        );
        assert_eq!(collection.borrow().entries[0].type_name, "Common");
        assert_eq!(collection.borrow().entries[0].grid_state, 9);
        assert!(collection.borrow().manager_invalidations.is_empty());

        window.refresh_selected_type();
        let outcome = window.accept();
        assert_eq!(
            outcome,
            AcceptOutcome::Committed {
                catalog_identity_changed: true,
            }
        );
        assert_eq!(collection.borrow().entries[0].type_name, "A-only");
        assert_eq!(collection.borrow().derived_identity_revision, 1);
        assert_eq!(
            collection.borrow().manager_invalidations,
            [ManagerInvalidation {
                one_based_entry_index: 1,
            }]
        );
    }

    #[test]
    fn accepted_strings_are_bounded_by_utf8_bytes() {
        let collection = catalog();
        let mut window = Window::new(Rc::clone(&collection), 0, EditMode::Normal);
        window.select_model(2);
        window.refresh_selected_type();

        let _outcome = window.accept();
        let collection_ref = collection.borrow();
        let entry = &collection_ref.entries[0];

        assert!(entry.type_name.len() <= 20);
        assert!(entry.model_name.len() <= 16);
        assert_eq!(entry.type_name, "A type name longer t");
        assert_eq!(entry.model_name, "A model name lon");
    }

    #[test]
    fn alternate_mode_never_copies_the_normal_catalog_fields() {
        let collection = catalog();
        let original_entry = collection.borrow().entries[0].clone();
        let mut window = Window::new(Rc::clone(&collection), 0, EditMode::Alternate);

        assert_eq!(window.accept(), AcceptOutcome::AlternateEditorRejected);
        window.grid_commit_status = GridCommitStatus::AlternateCommitted;
        assert_eq!(window.accept(), AcceptOutcome::AlternateEditorCommitted);
        assert_eq!(collection.borrow().entries[0], original_entry);
    }

    #[test]
    fn iced_update_routes_accept_and_cancel_without_a_live_window() {
        let mut valid = Window::new(catalog(), 0, EditMode::Normal);
        let _task = valid.update(Message::AcceptPressed);
        assert_eq!(valid.dialog_result(), Some(DialogResult::Accepted));

        let mut invalid = Window::new(catalog(), 0, EditMode::Normal);
        let _task = invalid.update(Message::GridCommitStatusChanged(GridCommitStatus::Invalid));
        let _task = invalid.update(Message::AcceptPressed);
        assert_eq!(invalid.dialog_result(), None);
        assert_eq!(
            invalid.last_accept_outcome(),
            Some(AcceptOutcome::ValidationFailed)
        );

        let _task = invalid.update(Message::GridCommitStatusChanged(GridCommitStatus::Valid));
        let _task = invalid.update(Message::AcceptPressed);
        assert_eq!(invalid.dialog_result(), Some(DialogResult::Accepted));

        let _task = invalid.update(Message::CancelPressed);
        assert_eq!(invalid.dialog_result(), Some(DialogResult::Cancelled));
    }
}
