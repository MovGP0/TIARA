//! Catalog editor state and Iced controls.
//!
//! Library evaluation: Iced 0.13.1 supplies the widgets, messages, and timer
//! subscription. Standard-library iterators and `BTreeSet` provide the small,
//! deterministic catalog projections. No additional filtering or validation
//! crate is needed because the rules are application-specific.

use std::collections::BTreeSet;
use std::path::PathBuf;
use std::time::{Duration, Instant};

use iced::widget::{button, checkbox, column, container, pick_list, radio, row, text, text_input};
use iced::{Element, Length, Subscription};
use tiara_core::tlr::{
    CatalogEntry, CatalogInventory, CatalogLibrary, CatalogRecord, ManufacturerParameters,
    ToleranceModel,
};

const TYPE_REFRESH_DELAY: Duration = Duration::from_millis(200);
const TYPE_SEARCH_TIMEOUT: Duration = Duration::from_secs(2);
const TIMER_POLL_INTERVAL: Duration = Duration::from_millis(25);
const MAXIMUM_TYPE_SEARCH_LENGTH: usize = 50;
const PAGE_CONTENT_WIDTH: f32 = 150.0;
const NONE_COLUMN_COUNT: usize = 2;
const GENERAL_COLUMN_COUNT: usize = 10;
const GENERAL_HEIGHT: f32 = 160.0;
const GENERAL_COLUMN_WIDTHS: [f32; 9] = [68.0, 68.0, 72.0, 72.0, 72.0, 72.0, 72.0, 72.0, 72.0];

pub const TITLE: &str = "Catalog Editor";
pub const FORM_RESOURCE: &str = "TlrCatalogEditorDlg";
pub const HELP_CONTEXT: u32 = 0x408;

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum EditorAccess {
    #[default]
    Editable,
    ReadOnly,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum CatalogPage {
    #[default]
    Parameters,
    Memo,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TypeKeyOutcome {
    PassedThrough,
    Consumed,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CatalogCloseCollection {
    Primary,
    Secondary,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum CatalogCloseSession {
    #[default]
    Standard,
    Synchronize {
        collection: CatalogCloseCollection,
        allow_catalog_insert: bool,
    },
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CatalogCloseSnapshot {
    pub collection: CatalogCloseCollection,
    pub row: usize,
    pub column: usize,
    pub selected_value: Option<String>,
    pub allow_catalog_insert: bool,
}

pub trait CatalogCloseAdapter {
    fn persist_selection(&mut self, snapshot: CatalogCloseSnapshot);
}

pub trait HelpAdapter {
    fn resolve_localized_help(&mut self, form_resource: &str) -> PathBuf;

    fn open_help(&mut self, file: PathBuf, context: u32);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum HelpOutcome {
    Handled,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum CatalogEditorMode {
    #[default]
    Normal,
    ExternalGridEdit,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AcceptOutcome {
    Blocked,
    Saved { collection_refreshed: bool },
    ExternalAccepted,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum LayoutChange {
    #[default]
    None,
    SwitchedToNone,
    SwitchedToGeneral,
}

#[derive(Debug, Clone)]
pub enum Message {
    LibrarySelected(CatalogLibrary),
    ModelSelected(String),
    TypeSelected(String),
    ToleranceModelSelected(ToleranceModel),
    OptionChanged(usize, bool),
    MemoChanged(String),
    MemoClicked(usize),
    PageSelected(CatalogPage),
    TimerTick(Instant),
    Accept,
}

#[derive(Debug, Clone, Default)]
struct TypeRefreshTimer {
    deadline: Option<Instant>,
}

#[derive(Debug, Clone, Default)]
struct ControlAvailability {
    model: bool,
    tolerance: bool,
    ok: bool,
}

#[derive(Debug, Clone)]
struct ValidationState {
    grid_commit_valid: bool,
    close_blocked_once: bool,
}

impl Default for ValidationState {
    fn default() -> Self {
        Self {
            grid_commit_valid: true,
            close_blocked_once: false,
        }
    }
}

#[derive(Debug, Clone, Default)]
struct DialogState {
    general_tolerance_supported: bool,
    count_label_visible: bool,
    modal_accepted: bool,
}

#[derive(Debug, Clone)]
pub struct Window {
    inventory: CatalogInventory,
    library_items: Vec<CatalogLibrary>,
    model_items: Vec<String>,
    type_items: Vec<String>,
    selected_library: CatalogLibrary,
    selected_model: Option<String>,
    selected_type: Option<String>,
    tolerance_model: ToleranceModel,
    parameter_column_count: usize,
    parameter_column_widths: Vec<f32>,
    general_tolerance_fields: Option<Vec<String>>,
    parameter_rows: Vec<(String, String)>,
    memo_text: String,
    manufacturer_text: String,
    cursor_position: (usize, usize),
    count_label: String,
    option_flags: [bool; 2],
    controls: ControlAvailability,
    validation: ValidationState,
    dialog: DialogState,
    form_height: f32,
    collection_refresh_generation: u64,
    timer: TypeRefreshTimer,
    mode: CatalogEditorMode,
    record: CatalogRecord,
    access: EditorAccess,
    active_page: CatalogPage,
    page_content_width: f32,
    parameter_selection: (usize, usize),
    type_search_buffer: String,
    last_type_key_at: Option<Instant>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            inventory: CatalogInventory::default(),
            library_items: vec![CatalogLibrary::Tina, CatalogLibrary::AllManufacturers],
            model_items: Vec::new(),
            type_items: Vec::new(),
            selected_library: CatalogLibrary::Tina,
            selected_model: None,
            selected_type: None,
            tolerance_model: ToleranceModel::None,
            parameter_column_count: NONE_COLUMN_COUNT,
            parameter_column_widths: Vec::new(),
            general_tolerance_fields: None,
            parameter_rows: Vec::new(),
            memo_text: String::new(),
            manufacturer_text: String::new(),
            cursor_position: (1, 1),
            count_label: String::new(),
            option_flags: [false; 2],
            controls: ControlAvailability {
                model: true,
                ..ControlAvailability::default()
            },
            validation: ValidationState::default(),
            dialog: DialogState::default(),
            form_height: 520.0,
            collection_refresh_generation: 0,
            timer: TypeRefreshTimer::default(),
            mode: CatalogEditorMode::Normal,
            record: CatalogRecord::default(),
            access: EditorAccess::Editable,
            active_page: CatalogPage::Parameters,
            page_content_width: PAGE_CONTENT_WIDTH,
            parameter_selection: (0, 0),
            type_search_buffer: String::new(),
            last_type_key_at: None,
        }
    }
}

impl Window {
    /// Ports Ghidra function `FUN_013f2270` at `0x013F2270`.
    ///
    /// The catalog inventory supplies the library, model, and type projections.
    /// The current record restores its selections and schedules the first
    /// detail refresh. `iced` owns the form layout and control state.
    #[must_use]
    pub fn new(inventory: CatalogInventory, record: CatalogRecord) -> Self {
        Self::new_at(inventory, record, Instant::now())
    }

    fn new_at(inventory: CatalogInventory, record: CatalogRecord, now: Instant) -> Self {
        let mut window = Self {
            inventory,
            selected_library: record.library.clone(),
            option_flags: record.option_flags,
            record,
            ..Self::default()
        };
        window.rebuild_library_and_model_items();
        if !window.library_items.contains(&window.selected_library) {
            window.selected_library = CatalogLibrary::Tina;
        }
        window.selected_model = window
            .model_items
            .iter()
            .find(|model| **model == window.record.model_name)
            .cloned()
            .or_else(|| window.model_items.first().cloned());
        window.selected_type =
            Some(window.record.type_name.clone()).filter(|value| !value.is_empty());
        window.rebuild_types_at(now);
        window
    }

    fn rebuild_library_and_model_items(&mut self) {
        let manufacturers = self
            .inventory
            .entries
            .iter()
            .filter_map(|entry| {
                (!entry.manufacturer.is_empty()).then_some(entry.manufacturer.clone())
            })
            .collect::<BTreeSet<_>>();
        self.library_items = vec![CatalogLibrary::Tina, CatalogLibrary::AllManufacturers];
        self.library_items
            .extend(manufacturers.into_iter().map(CatalogLibrary::Manufacturer));
        self.model_items = self
            .inventory
            .entries
            .iter()
            .filter_map(|entry| (!entry.model_name.is_empty()).then_some(entry.model_name.clone()))
            .collect::<BTreeSet<_>>()
            .into_iter()
            .collect();
    }

    pub fn update(&mut self, message: Message) {
        let now = Instant::now();
        match message {
            Message::LibrarySelected(library) => {
                if self.access == EditorAccess::Editable {
                    self.select_library_at(library, now);
                }
            }
            Message::ModelSelected(model) => {
                if self.access == EditorAccess::Editable {
                    self.select_model_at(&model, now);
                }
            }
            Message::TypeSelected(type_name) => {
                if self.access == EditorAccess::Editable {
                    self.select_type_at(&type_name, now);
                }
            }
            Message::ToleranceModelSelected(model) => {
                if self.access == EditorAccess::Editable {
                    let _ = self.select_tolerance_model(model);
                }
            }
            Message::OptionChanged(index, value) => {
                if self.access == EditorAccess::Editable
                    && let Some(flag) = self.option_flags.get_mut(index)
                {
                    *flag = value;
                }
            }
            Message::MemoChanged(value) => {
                if self.access == EditorAccess::Editable {
                    self.memo_text = value;
                }
            }
            Message::MemoClicked(selection_start) => self.memo_clicked(selection_start),
            Message::PageSelected(page) => self.page_changed(page),
            Message::TimerTick(tick) => {
                self.timer_tick(tick);
            }
            Message::Accept => {
                if self.access == EditorAccess::Editable {
                    self.accept(self.validation.grid_commit_valid);
                }
            }
        }
    }

    pub fn subscription(&self) -> Subscription<Message> {
        if self.timer.deadline.is_some() {
            iced::time::every(TIMER_POLL_INTERVAL).map(Message::TimerTick)
        } else {
            Subscription::none()
        }
    }

    /// Ports Ghidra function `FUN_013f3230` at `0x013F3230`.
    ///
    /// Read-only presentation disables editor mutations and forces the
    /// tolerance layout to None. Editable presentation retains the current
    /// layout. Iced does not need the recovered synthetic grid mouse messages.
    pub fn show(&mut self, access: EditorAccess) {
        self.access = access;
        if access == EditorAccess::ReadOnly {
            let _ = self.select_tolerance_model(ToleranceModel::None);
        }
    }

    /// Ports Ghidra function `FUN_013f3e70` at `0x013F3E70`.
    pub fn select_library(&mut self, library: CatalogLibrary) {
        self.select_library_at(library, Instant::now());
    }

    fn select_library_at(&mut self, library: CatalogLibrary, now: Instant) {
        if !self.library_items.contains(&library) {
            return;
        }
        self.selected_library = library;
        self.rebuild_types_at(now);
    }

    /// Ports Ghidra function `FUN_013f3ec0` at `0x013F3EC0`.
    pub fn select_model(&mut self, model: &str) {
        self.select_model_at(model, Instant::now());
    }

    fn select_model_at(&mut self, model: &str, now: Instant) {
        if !self.model_items.iter().any(|item| item == model) {
            return;
        }
        self.selected_model = Some(model.to_owned());
        self.rebuild_types_at(now);
    }

    fn rebuild_types_at(&mut self, now: Instant) {
        let previous_type = self.selected_type.clone();
        let type_names = self
            .matching_entries()
            .map(|entry| entry.type_name.clone())
            .collect::<BTreeSet<_>>();
        self.type_items = type_names.into_iter().collect();

        self.dialog.general_tolerance_supported = match &self.selected_library {
            CatalogLibrary::Tina => self.selected_model.as_ref().is_some_and(|model| {
                self.inventory
                    .entries
                    .iter()
                    .any(|entry| entry.model_name == *model && entry.supports_general_tolerance)
            }),
            CatalogLibrary::AllManufacturers | CatalogLibrary::Manufacturer(_) => false,
        };
        if !self.dialog.general_tolerance_supported {
            let _ = self.select_tolerance_model(ToleranceModel::None);
        }

        if self.type_items.is_empty() {
            self.clear_dependent_views();
        } else {
            self.selected_type = previous_type
                .filter(|name| self.type_items.contains(name))
                .or_else(|| self.type_items.first().cloned());
            self.parameter_rows.clear();
            self.memo_text.clear();
            self.manufacturer_text.clear();
            self.dialog.count_label_visible = true;
            self.schedule_type_refresh(now);
        }
        self.refresh_control_state();
    }

    fn matching_entries(&self) -> impl Iterator<Item = &CatalogEntry> {
        self.inventory
            .entries
            .iter()
            .filter(|entry| match &self.selected_library {
                CatalogLibrary::Tina => self
                    .selected_model
                    .as_ref()
                    .is_some_and(|model| entry.model_name == *model),
                CatalogLibrary::AllManufacturers => !entry.manufacturer.is_empty(),
                CatalogLibrary::Manufacturer(manufacturer) => entry.manufacturer == *manufacturer,
            })
    }

    fn clear_dependent_views(&mut self) {
        self.selected_type = None;
        self.parameter_rows.clear();
        self.memo_text.clear();
        self.manufacturer_text.clear();
        self.count_label.clear();
        self.dialog.count_label_visible = false;
        self.timer.deadline = None;
    }

    const fn refresh_control_state(&mut self) {
        self.controls.model = matches!(self.selected_library, CatalogLibrary::Tina);
        self.controls.tolerance = self.controls.model && self.dialog.general_tolerance_supported;
        self.controls.ok = self.selected_type.is_some();
    }

    /// Ports Ghidra function `FUN_013f47e0` at `0x013F47E0`.
    pub fn select_type(&mut self, type_name: &str) {
        self.select_type_at(type_name, Instant::now());
    }

    fn select_type_at(&mut self, type_name: &str, now: Instant) {
        if !self.type_items.iter().any(|item| item == type_name) {
            return;
        }
        self.selected_type = Some(type_name.to_owned());
        self.schedule_type_refresh(now);
    }

    fn schedule_type_refresh(&mut self, now: Instant) {
        self.timer.deadline = Some(now + TYPE_REFRESH_DELAY);
    }

    /// Ports Ghidra function `FUN_013f5770` at `0x013F5770`.
    ///
    /// The expired one-shot timer is disabled before selected type details are
    /// loaded. Early timer polls are no-ops.
    pub fn timer_tick(&mut self, now: Instant) -> bool {
        if self.timer.deadline.is_none_or(|deadline| now < deadline) {
            return false;
        }
        self.timer.deadline = None;
        self.load_selected_type();
        true
    }

    fn load_selected_type(&mut self) {
        let Some(selected_type) = self.selected_type.as_ref() else {
            return;
        };
        let Some(entry) = self
            .matching_entries()
            .find(|entry| entry.type_name == *selected_type)
            .cloned()
        else {
            self.clear_dependent_views();
            self.refresh_control_state();
            return;
        };

        self.parameter_rows = entry.parameter_rows;
        self.memo_text = entry.memo_lines.join("\n");
        self.manufacturer_text = entry.manufacturer;
        if !entry.model_name.is_empty() {
            self.selected_model = Some(entry.model_name);
        }
        let selected_index = self
            .type_items
            .iter()
            .position(|name| name == selected_type)
            .unwrap_or_default();
        self.count_label = format!("{}/{}", selected_index + 1, self.type_items.len());
        self.dialog.count_label_visible = true;
    }

    /// Ports Ghidra function `FUN_013f4960` at `0x013F4960`.
    #[must_use]
    pub fn select_tolerance_model(&mut self, model: ToleranceModel) -> LayoutChange {
        let target_columns = match model {
            ToleranceModel::None => NONE_COLUMN_COUNT,
            ToleranceModel::General => GENERAL_COLUMN_COUNT,
        };
        self.tolerance_model = model;
        if self.parameter_column_count == target_columns {
            return LayoutChange::None;
        }

        match model {
            ToleranceModel::None => {
                self.parameter_column_count = NONE_COLUMN_COUNT;
                self.parameter_column_widths.clear();
                self.general_tolerance_fields = None;
                self.form_height = (self.form_height - GENERAL_HEIGHT).max(360.0);
                LayoutChange::SwitchedToNone
            }
            ToleranceModel::General => {
                self.parameter_column_count = GENERAL_COLUMN_COUNT;
                self.parameter_column_widths = GENERAL_COLUMN_WIDTHS.to_vec();
                self.general_tolerance_fields
                    .get_or_insert_with(|| vec![String::new(); 9]);
                self.form_height += GENERAL_HEIGHT;
                LayoutChange::SwitchedToGeneral
            }
        }
    }

    /// Ports Ghidra function `FUN_013f4d20` at `0x013F4D20`.
    pub fn accept(&mut self, active_grid_commit_succeeded: bool) -> AcceptOutcome {
        if !active_grid_commit_succeeded {
            self.validation.close_blocked_once = true;
            return AcceptOutcome::Blocked;
        }
        if self.mode == CatalogEditorMode::ExternalGridEdit {
            self.dialog.modal_accepted = true;
            return AcceptOutcome::ExternalAccepted;
        }

        let Some(type_name) = self.selected_type.clone() else {
            self.validation.close_blocked_once = true;
            return AcceptOutcome::Blocked;
        };
        let previous_identity = (
            self.record.type_name.clone(),
            self.record.model_name.clone(),
        );
        let model_name = self.selected_model.clone().unwrap_or_default();
        self.record.type_name.clone_from(&type_name);
        self.record.model_name.clone_from(&model_name);
        self.record.library = self.selected_library.clone();
        self.record.option_flags = self.option_flags;
        self.record.manufacturer_parameters = match &self.selected_library {
            CatalogLibrary::Tina => None,
            CatalogLibrary::AllManufacturers => Some(ManufacturerParameters {
                library_filter: None,
                linked_type: type_name,
                memo_lines: self.memo_text.lines().map(str::to_owned).collect(),
            }),
            CatalogLibrary::Manufacturer(manufacturer) => Some(ManufacturerParameters {
                library_filter: Some(manufacturer.clone()),
                linked_type: type_name,
                memo_lines: self.memo_text.lines().map(str::to_owned).collect(),
            }),
        };
        let collection_refreshed = previous_identity
            != (
                self.record.type_name.clone(),
                self.record.model_name.clone(),
            );
        if collection_refreshed {
            self.collection_refresh_generation =
                self.collection_refresh_generation.saturating_add(1);
        }
        self.dialog.modal_accepted = true;
        AcceptOutcome::Saved {
            collection_refreshed,
        }
    }

    /// Ports Ghidra function `FUN_013f5590` at `0x013F5590`.
    ///
    /// One failed active-cell commit rejects one close request and clears the
    /// rejection flag so the next close query can proceed.
    #[must_use]
    pub const fn close_query(&mut self) -> bool {
        let can_close = !self.validation.close_blocked_once;
        self.validation.close_blocked_once = false;
        can_close
    }

    /// Ports Ghidra function `FUN_013f4820` at `0x013F4820`.
    ///
    /// Backspace and Escape clear the incremental search and pass through.
    /// Printable Latin-1 input is consumed, restarts after two idle seconds,
    /// is limited to 50 characters, and selects the first case-insensitive
    /// type prefix match.
    pub fn type_key_press(&mut self, key: char, now: Instant) -> TypeKeyOutcome {
        if matches!(key, '\u{8}' | '\u{1b}') {
            self.type_search_buffer.clear();
            self.last_type_key_at = None;
            return TypeKeyOutcome::PassedThrough;
        }
        if self.access == EditorAccess::ReadOnly || !('\u{20}'..='\u{ff}').contains(&key) {
            return TypeKeyOutcome::PassedThrough;
        }
        if self
            .last_type_key_at
            .is_none_or(|previous| now.saturating_duration_since(previous) > TYPE_SEARCH_TIMEOUT)
        {
            self.type_search_buffer.clear();
        }
        self.last_type_key_at = Some(now);
        if self.type_search_buffer.chars().count() < MAXIMUM_TYPE_SEARCH_LENGTH {
            self.type_search_buffer.push(key);
        }

        let prefix = self.type_search_buffer.to_lowercase();
        if let Some(type_name) = self
            .type_items
            .iter()
            .find(|candidate| candidate.to_lowercase().starts_with(&prefix))
        {
            self.selected_type = Some(type_name.clone());
        }
        TypeKeyOutcome::Consumed
    }

    /// Ports Ghidra function `FUN_013f51b0` at `0x013F51B0`.
    ///
    /// Standard close has no persistence side effect. A synchronization close
    /// sends the active grid location and first-column text to the host-owned
    /// catalog settings adapter.
    pub fn close<A>(&self, session: CatalogCloseSession, adapter: &mut A)
    where
        A: CatalogCloseAdapter + ?Sized,
    {
        let CatalogCloseSession::Synchronize {
            collection,
            allow_catalog_insert,
        } = session
        else {
            return;
        };
        let (row, column) = self.parameter_selection;
        adapter.persist_selection(CatalogCloseSnapshot {
            collection,
            row: row.saturating_add(1),
            column: column.saturating_add(1),
            selected_value: self.parameter_rows.get(row).map(|item| item.0.clone()),
            allow_catalog_insert,
        });
    }

    /// Ports Ghidra function `FUN_013f55b0` at `0x013F55B0`.
    ///
    /// The localized help file is resolved by the application adapter and
    /// opened at the Catalog Editor context. The event is fully handled.
    pub fn open_help<A>(&self, adapter: &mut A) -> HelpOutcome
    where
        A: HelpAdapter + ?Sized,
    {
        let file = adapter.resolve_localized_help(FORM_RESOURCE);
        adapter.open_help(file, HELP_CONTEXT);
        HelpOutcome::Handled
    }

    /// Ports Ghidra function `FUN_013f57a0` at `0x013F57A0`.
    pub fn memo_clicked(&mut self, selection_start: usize) {
        let boundary = selection_start.min(self.memo_text.len());
        let boundary = (0..=boundary)
            .rev()
            .find(|index| self.memo_text.is_char_boundary(*index))
            .unwrap_or_default();
        let prefix = &self.memo_text[..boundary];
        let line = prefix
            .chars()
            .filter(|character| *character == '\n')
            .count()
            + 1;
        let column = prefix.rsplit_once('\n').map_or_else(
            || prefix.chars().count() + 1,
            |(_, tail)| tail.chars().count() + 1,
        );
        self.cursor_position = (line, column);
    }

    /// Ports Ghidra function `FUN_013f57b0` at `0x013F57B0`.
    ///
    /// Key release uses the same one-based caret calculation as Memo click and
    /// does not change the text.
    pub fn memo_key_up(&mut self, selection_start: usize) {
        self.memo_clicked(selection_start);
    }

    /// Ports Ghidra function `FUN_013f5820` at `0x013F5820`.
    ///
    /// A page change selects the requested iced page and reapplies the
    /// recovered 150-pixel active-page width.
    pub const fn page_changed(&mut self, page: CatalogPage) {
        self.active_page = page;
        self.page_content_width = PAGE_CONTENT_WIDTH;
    }

    pub const fn set_parameter_selection(&mut self, row: usize, column: usize) {
        self.parameter_selection = (row, column);
    }

    pub const fn set_grid_commit_valid(&mut self, valid: bool) {
        self.validation.grid_commit_valid = valid;
    }

    pub const fn set_mode(&mut self, mode: CatalogEditorMode) {
        self.mode = mode;
    }

    #[must_use]
    pub const fn record(&self) -> &CatalogRecord {
        &self.record
    }

    #[must_use]
    pub const fn form_height(&self) -> f32 {
        self.form_height
    }

    #[must_use]
    pub const fn model_enabled(&self) -> bool {
        self.controls.model
    }

    #[must_use]
    pub const fn tolerance_enabled(&self) -> bool {
        self.controls.tolerance
    }

    #[must_use]
    pub const fn general_tolerance_supported(&self) -> bool {
        self.dialog.general_tolerance_supported
    }

    #[must_use]
    pub fn parameter_column_widths(&self) -> &[f32] {
        &self.parameter_column_widths
    }

    #[must_use]
    pub const fn collection_refresh_generation(&self) -> u64 {
        self.collection_refresh_generation
    }

    #[must_use]
    pub const fn modal_accepted(&self) -> bool {
        self.dialog.modal_accepted
    }

    #[must_use]
    pub const fn access(&self) -> EditorAccess {
        self.access
    }

    #[must_use]
    pub const fn active_page(&self) -> CatalogPage {
        self.active_page
    }

    #[must_use]
    pub const fn page_content_width(&self) -> f32 {
        self.page_content_width
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let library = pick_list(
            self.library_items.as_slice(),
            Some(self.selected_library.clone()),
            Message::LibrarySelected,
        );
        let model = pick_list(
            self.model_items.as_slice(),
            self.selected_model.clone(),
            Message::ModelSelected,
        );
        let type_list = pick_list(
            self.type_items.as_slice(),
            self.selected_type.clone(),
            Message::TypeSelected,
        );
        let general_controls: Element<'_, Message> =
            self.general_tolerance_fields.as_ref().map_or_else(
                || column![].into(),
                |fields| {
                    column(fields.iter().enumerate().map(|(index, value)| {
                        row![
                            text(format!("General parameter {}", index + 1)),
                            text(value)
                        ]
                        .spacing(8)
                        .into()
                    }))
                    .spacing(4)
                    .into()
                },
            );
        let parameter_rows: Element<'_, Message> = column(
            self.parameter_rows
                .iter()
                .map(|(name, value)| row![text(name), text(value)].spacing(8).into()),
        )
        .spacing(4)
        .into();
        let count_label = if self.dialog.count_label_visible {
            text(&self.count_label)
        } else {
            text("")
        };
        let page_content: Element<'_, Message> = match self.active_page {
            CatalogPage::Parameters => column![
                radio(
                    "None",
                    ToleranceModel::None,
                    Some(self.tolerance_model),
                    Message::ToleranceModelSelected,
                ),
                radio(
                    "General",
                    ToleranceModel::General,
                    Some(self.tolerance_model),
                    Message::ToleranceModelSelected,
                ),
                general_controls,
                parameter_rows,
                checkbox("Option 1", self.option_flags[0])
                    .on_toggle(|value| Message::OptionChanged(0, value)),
                checkbox("Option 2", self.option_flags[1])
                    .on_toggle(|value| Message::OptionChanged(1, value)),
            ]
            .spacing(6)
            .into(),
            CatalogPage::Memo => column![
                text_input("Model parameters", &self.memo_text).on_input(Message::MemoChanged),
                text(format!(
                    "Line: {} Col: {}",
                    self.cursor_position.0, self.cursor_position.1
                )),
                text(&self.manufacturer_text),
            ]
            .spacing(6)
            .into(),
        };
        let body = column![
            row![text("Library"), library].spacing(8),
            row![text("Model"), model].spacing(8),
            row![text("Type"), type_list].spacing(8),
            row![
                button("Parameters").on_press(Message::PageSelected(CatalogPage::Parameters)),
                button("Model parameters").on_press(Message::PageSelected(CatalogPage::Memo)),
            ]
            .spacing(8),
            container(page_content).width(self.page_content_width),
            count_label,
            button("OK").on_press_maybe(
                (self.controls.ok && self.access == EditorAccess::Editable)
                    .then_some(Message::Accept),
            ),
        ]
        .spacing(10);

        container(body)
            .padding(16)
            .width(Length::Fill)
            .height(Length::Fill)
            .into()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn entry(
        type_name: &str,
        model_name: &str,
        manufacturer: &str,
        supports_general_tolerance: bool,
    ) -> CatalogEntry {
        CatalogEntry {
            type_name: type_name.to_owned(),
            model_name: model_name.to_owned(),
            manufacturer: manufacturer.to_owned(),
            supports_general_tolerance,
            parameter_rows: vec![("Value".to_owned(), type_name.to_owned())],
            memo_lines: vec![format!("{type_name} line one"), "line two".to_owned()],
        }
    }

    fn window_at(now: Instant) -> Window {
        let inventory = CatalogInventory {
            entries: vec![
                entry("A", "Model 1", "Maker A", true),
                entry("B", "Model 1", "Maker B", true),
                entry("C", "Model 2", "Maker A", false),
            ],
        };
        Window::new_at(
            inventory,
            CatalogRecord {
                type_name: "A".to_owned(),
                model_name: "Model 1".to_owned(),
                ..CatalogRecord::default()
            },
            now,
        )
    }

    #[test]
    fn library_and_model_selection_rebuild_types_and_control_availability() {
        let now = Instant::now();
        let mut window = window_at(now);

        assert_eq!(window.type_items, ["A", "B"]);
        assert!(window.tolerance_enabled());
        window.select_library_at(CatalogLibrary::Manufacturer("Maker A".to_owned()), now);
        assert_eq!(window.type_items, ["A", "C"]);
        assert!(!window.model_enabled());
        assert!(!window.tolerance_enabled());

        window.select_library_at(CatalogLibrary::Tina, now);
        window.select_model_at("Model 2", now);
        assert_eq!(window.type_items, ["C"]);
        assert_eq!(window.selected_type.as_deref(), Some("C"));
        assert!(!window.general_tolerance_supported());
    }

    #[test]
    fn repeated_type_click_restarts_the_two_hundred_millisecond_delay() {
        let start = Instant::now();
        let mut window = window_at(start);

        window.select_type_at("B", start + Duration::from_millis(100));
        assert!(!window.timer_tick(start + Duration::from_millis(250)));
        assert!(window.parameter_rows.is_empty());
        assert!(window.timer_tick(start + Duration::from_millis(300)));
        assert_eq!(
            window.parameter_rows,
            [("Value".to_owned(), "B".to_owned())]
        );
        assert_eq!(window.count_label, "2/2");
    }

    #[test]
    fn tolerance_layout_changes_once_for_each_required_column_count() {
        let mut window = window_at(Instant::now());

        assert_eq!(
            window.select_tolerance_model(ToleranceModel::General),
            LayoutChange::SwitchedToGeneral
        );
        let expanded_height = window.form_height;
        assert_eq!(window.parameter_column_count, GENERAL_COLUMN_COUNT);
        assert_eq!(
            window.select_tolerance_model(ToleranceModel::General),
            LayoutChange::None
        );
        assert!((window.form_height - expanded_height).abs() < f32::EPSILON);
        assert_eq!(
            window.select_tolerance_model(ToleranceModel::None),
            LayoutChange::SwitchedToNone
        );
        assert!(window.general_tolerance_fields.is_none());
    }

    #[test]
    fn failed_grid_commit_preserves_record_and_blocks_only_one_close_attempt() {
        let mut window = window_at(Instant::now());
        let original = window.record.clone();

        assert_eq!(window.accept(false), AcceptOutcome::Blocked);
        assert_eq!(window.record, original);
        assert!(!window.close_query());
        assert!(window.close_query());
    }

    #[test]
    fn successful_manufacturer_save_copies_memo_and_refreshes_changed_identity() {
        let now = Instant::now();
        let mut window = window_at(now);
        window.select_library_at(CatalogLibrary::Manufacturer("Maker A".to_owned()), now);
        window.select_type_at("C", now);
        assert!(window.timer_tick(now + TYPE_REFRESH_DELAY));
        window.option_flags = [true, false];

        assert_eq!(
            window.accept(true),
            AcceptOutcome::Saved {
                collection_refreshed: true
            }
        );
        assert_eq!(window.record.type_name, "C");
        assert_eq!(window.record.model_name, "Model 2");
        assert_eq!(window.record.option_flags, [true, false]);
        assert_eq!(
            window
                .record
                .manufacturer_parameters
                .as_ref()
                .and_then(|parameters| parameters.library_filter.as_deref()),
            Some("Maker A")
        );
        assert_eq!(
            window
                .record
                .manufacturer_parameters
                .as_ref()
                .map(|parameters| parameters.memo_lines.as_slice()),
            Some(["C line one".to_owned(), "line two".to_owned()].as_slice())
        );
    }

    #[test]
    fn external_editor_accepts_only_a_successful_active_cell_commit() {
        let mut window = window_at(Instant::now());
        window.set_mode(CatalogEditorMode::ExternalGridEdit);

        assert_eq!(window.accept(false), AcceptOutcome::Blocked);
        assert_eq!(window.accept(true), AcceptOutcome::ExternalAccepted);
        assert!(window.modal_accepted());
    }

    #[test]
    fn memo_click_updates_one_based_line_and_column_without_changing_text() {
        let mut window = window_at(Instant::now());
        window.memo_text = "first\nsecond".to_owned();
        let original = window.memo_text.clone();

        window.memo_clicked(9);

        assert_eq!(window.cursor_position, (2, 4));
        assert_eq!(window.memo_text, original);
    }

    #[test]
    fn create_restores_record_selection_and_schedules_detail_refresh() {
        let now = Instant::now();
        let window = window_at(now);

        assert_eq!(window.selected_library, CatalogLibrary::Tina);
        assert_eq!(window.selected_model.as_deref(), Some("Model 1"));
        assert_eq!(window.selected_type.as_deref(), Some("A"));
        assert_eq!(window.timer.deadline, Some(now + TYPE_REFRESH_DELAY));
    }

    #[test]
    fn show_read_only_forces_none_and_ignores_editor_messages() {
        let mut window = window_at(Instant::now());
        assert_eq!(
            window.select_tolerance_model(ToleranceModel::General),
            LayoutChange::SwitchedToGeneral
        );
        let memo = window.memo_text.clone();

        window.show(EditorAccess::ReadOnly);
        window.update(Message::MemoChanged("changed".to_owned()));
        window.update(Message::Accept);

        assert_eq!(window.access(), EditorAccess::ReadOnly);
        assert_eq!(window.tolerance_model, ToleranceModel::None);
        assert_eq!(window.memo_text, memo);
        assert!(!window.modal_accepted());
    }

    #[test]
    fn type_key_press_selects_prefix_resets_after_timeout_and_clears_on_escape() {
        let start = Instant::now();
        let mut window = window_at(start);
        window.select_library_at(CatalogLibrary::Manufacturer("Maker A".to_owned()), start);

        assert_eq!(
            window.type_key_press('c', start + Duration::from_millis(10)),
            TypeKeyOutcome::Consumed
        );
        assert_eq!(window.selected_type.as_deref(), Some("C"));
        assert_eq!(
            window.type_key_press('a', start + Duration::from_millis(2_100)),
            TypeKeyOutcome::Consumed
        );
        assert_eq!(window.selected_type.as_deref(), Some("A"));
        assert_eq!(
            window.type_key_press('\u{1b}', start + Duration::from_millis(2_200)),
            TypeKeyOutcome::PassedThrough
        );
        assert!(window.type_search_buffer.is_empty());
    }

    #[derive(Default)]
    struct Close {
        snapshots: Vec<CatalogCloseSnapshot>,
    }

    impl CatalogCloseAdapter for Close {
        fn persist_selection(&mut self, snapshot: CatalogCloseSnapshot) {
            self.snapshots.push(snapshot);
        }
    }

    #[test]
    fn close_persists_only_synchronized_grid_selection() {
        let start = Instant::now();
        let mut window = window_at(start);
        assert!(window.timer_tick(start + TYPE_REFRESH_DELAY));
        window.set_parameter_selection(0, 1);
        let mut close = Close::default();

        window.close(CatalogCloseSession::Standard, &mut close);
        window.close(
            CatalogCloseSession::Synchronize {
                collection: CatalogCloseCollection::Primary,
                allow_catalog_insert: true,
            },
            &mut close,
        );

        assert_eq!(
            close.snapshots,
            [CatalogCloseSnapshot {
                collection: CatalogCloseCollection::Primary,
                row: 1,
                column: 2,
                selected_value: Some("Value".to_owned()),
                allow_catalog_insert: true,
            }]
        );
    }

    #[derive(Default)]
    struct Help {
        resolved: Vec<String>,
        opened: Vec<(PathBuf, u32)>,
    }

    impl HelpAdapter for Help {
        fn resolve_localized_help(&mut self, form_resource: &str) -> PathBuf {
            self.resolved.push(form_resource.to_owned());
            PathBuf::from("TINA-DE.chm")
        }

        fn open_help(&mut self, file: PathBuf, context: u32) {
            self.opened.push((file, context));
        }
    }

    #[test]
    fn help_is_handled_with_localized_catalog_context() {
        let window = window_at(Instant::now());
        let mut help = Help::default();

        assert_eq!(window.open_help(&mut help), HelpOutcome::Handled);
        assert_eq!(help.resolved, [FORM_RESOURCE]);
        assert_eq!(help.opened, [(PathBuf::from("TINA-DE.chm"), HELP_CONTEXT)]);
    }

    #[test]
    fn memo_key_up_and_page_change_refresh_status_without_editing_text() {
        let mut window = window_at(Instant::now());
        window.memo_text = "first\nsecond".to_owned();

        window.memo_key_up(9);
        window.page_changed(CatalogPage::Memo);

        assert_eq!(window.cursor_position, (2, 4));
        assert_eq!(window.active_page(), CatalogPage::Memo);
        assert!((window.page_content_width() - PAGE_CONTENT_WIDTH).abs() < f32::EPSILON);
        assert_eq!(window.memo_text, "first\nsecond");
    }
}
