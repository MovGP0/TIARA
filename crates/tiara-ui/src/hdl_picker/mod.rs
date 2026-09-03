use std::fmt::{self, Display, Formatter};

use iced::widget::{button, column, container, pick_list, row, scrollable, text};
use iced::{Element, Length, Task};
use tiara_core::hdl_picker::{
    HdlCatalog, PickerLists, PickerTarget, copy_accepted_entry, position_display,
};

pub const TITLE: &str = "HDL Picker";
pub const LIBRARY_EVALUATION: &str = "iced supplies the HDL Picker lifecycle, messages, and widgets. HdlCatalog and Rust Vec ownership replace the native loader object and four owned string lists without extra dependencies.";

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CategoryChoice {
    index: usize,
    label: String,
}

impl Display for CategoryChoice {
    fn fmt(&self, formatter: &mut Formatter<'_>) -> fmt::Result {
        formatter.write_str(&self.label)
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum ModalResult {
    #[default]
    None,
    Ok,
    Cancel,
}

#[derive(Debug, Clone)]
pub enum Message {
    Created,
    Destroyed,
    Shown,
    CategorySelected(CategoryChoice),
    EntrySelected(usize),
    Ok,
    Cancel,
    HelpRequested,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct HelpEventResult {
    pub handled: bool,
    pub call_default_help: bool,
}

#[derive(Debug)]
pub struct State {
    catalog: HdlCatalog,
    lists: PickerLists,
    all_category_label: String,
    categories: Vec<CategoryChoice>,
    selected_visible_index: Option<usize>,
    position_text: String,
    staged_complete_index: Option<usize>,
    modal_result: ModalResult,
    help_topic: String,
    help_requests: Vec<String>,
    help_context: u32,
    descriptions_enabled: bool,
}

impl State {
    #[must_use]
    pub fn new(
        all_label: impl Into<String>,
        complete_entries: Vec<String>,
        catalog: HdlCatalog,
    ) -> Self {
        let all_category_label = all_label.into();
        let categories = std::iter::once(all_category_label.clone())
            .chain(catalog.categories.iter().cloned())
            .enumerate()
            .map(|(index, label)| CategoryChoice { index, label })
            .collect();
        let mut state = Self {
            catalog,
            lists: PickerLists::new(complete_entries),
            all_category_label,
            categories,
            selected_visible_index: None,
            position_text: String::new(),
            staged_complete_index: None,
            modal_result: ModalResult::None,
            help_topic: String::new(),
            help_requests: Vec::new(),
            help_context: 0,
            descriptions_enabled: false,
        };
        state.on_create();
        state.rebuild_category(0);
        state
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::Created => self.on_create(),
            Message::Destroyed => self.on_destroy(),
            Message::Shown => self.on_show(),
            Message::CategorySelected(category) => {
                self.select_category(category.index);
            }
            Message::EntrySelected(index) => self.select_visible_entry(index),
            Message::Ok => self.click_ok(),
            Message::Cancel => self.modal_result = ModalResult::Cancel,
            Message::HelpRequested => {
                self.on_help();
            }
        }
        Task::none()
    }

    /// Releases the HDL Picker catalog helper and four owned string lists.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01706A30`, symbol `FUN_01706a30` (`THDLPickerForm.FormDestroy`).
    /// `std::mem::take` transfers each allocation to Rust's standard `Drop`
    /// path. Empty resources and repeated destruction are safe no-ops.
    pub fn on_destroy(&mut self) {
        drop(std::mem::take(&mut self.catalog));
        drop(std::mem::take(&mut self.categories));
        drop(std::mem::take(&mut self.lists.complete_entries));
        drop(std::mem::take(&mut self.lists.active_entries));
        drop(std::mem::take(&mut self.lists.display_entries));
    }

    /// Prepares the HDL Picker rows and categories when the form is shown.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x017068A0`, symbol `FUN_017068a0` (`THDLPickerForm.FormShow`). It
    /// first selects visible row zero. When descriptions are enabled, it
    /// rebuilds categories from the localized All label and loader categories,
    /// selects category zero, rebuilds display rows, and refreshes position
    /// text. The alternate mode leaves category and row data unchanged after
    /// selecting row zero.
    pub fn on_show(&mut self) {
        self.selected_visible_index = (!self.lists.display_entries.is_empty()).then_some(0);
        if !self.descriptions_enabled {
            return;
        }

        self.categories = std::iter::once(self.all_category_label.clone())
            .chain(self.catalog.categories.iter().cloned())
            .enumerate()
            .map(|(index, label)| CategoryChoice { index, label })
            .collect();
        self.rebuild_category(0);
    }

    /// Dispatches the stored HDL Picker help topic through the host service.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x017066B0`, symbol `FUN_017066b0` (`THDLPickerForm.FormHelp`). It
    /// always suppresses default help and reports handled. A nonempty topic is
    /// queued unchanged for the shared host dispatcher. An empty topic remains
    /// a handled no-op.
    pub fn on_help(&mut self) -> HelpEventResult {
        if !self.help_topic.is_empty() {
            self.help_requests.push(self.help_topic.clone());
        }
        HelpEventResult {
            handled: true,
            call_default_help: false,
        }
    }

    /// Initializes owned HDL catalog and form lifecycle state.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01706600`, symbol `FUN_01706600` (`THDLPickerForm.FormCreate`). The
    /// owned `HdlCatalog`, category vector, and three `PickerLists` vectors
    /// replace the recovered helper object and four string-list allocations.
    /// The helper's false mode enables descriptions. Creation also clears the
    /// help topic, assigns help context 1, and stores the −1 selection sentinel
    /// as `None`.
    pub fn on_create(&mut self) {
        self.help_topic.clear();
        self.help_context = 1;
        self.descriptions_enabled = true;
        self.selected_visible_index = None;
        self.staged_complete_index = None;
    }

    /// Reimplements Ghidra function `FUN_01706a80` at `0x01706A80`.
    pub fn select_category(&mut self, category_index: usize) {
        self.rebuild_category(category_index);
    }

    /// Reimplements Ghidra function `FUN_01706ab0` at `0x01706AB0`.
    pub fn rebuild_category(&mut self, category_index: usize) {
        self.lists.rebuild(category_index, &self.catalog);
        self.selected_visible_index = None;
        self.position_text = position_display(None, self.lists.display_entries.len());
    }

    /// Reimplements Ghidra function `FUN_017067b0` at `0x017067B0`.
    pub fn select_visible_entry(&mut self, visible_index: usize) {
        self.selected_visible_index = Some(visible_index);
        self.position_text = position_display(
            self.selected_visible_index,
            self.lists.display_entries.len(),
        );
    }

    /// Reimplements Ghidra function `FUN_017066d0` at `0x017066D0`.
    pub fn click_ok(&mut self) {
        if !self.lists.display_entries.is_empty() {
            self.staged_complete_index = self
                .selected_visible_index
                .and_then(|index| self.lists.active_entries.get(index))
                .and_then(|entry| {
                    self.lists
                        .complete_entries
                        .iter()
                        .position(|complete| complete == entry)
                });
        }
        self.modal_result = ModalResult::Ok;
    }

    /// Reimplements Ghidra function `FUN_01709150` at `0x01709150`.
    pub fn copy_back(&self, target: &mut PickerTarget) -> i32 {
        copy_accepted_entry(
            target,
            &self.lists.complete_entries,
            matches!(self.modal_result, ModalResult::Ok),
            self.staged_complete_index,
        )
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let selected_category = self.categories.get(self.lists.category_index).cloned();
        let entries = self.lists.display_entries.iter().enumerate().fold(
            column![].spacing(4),
            |entries, (index, entry)| {
                let label = if self.selected_visible_index == Some(index) {
                    format!("> {entry}")
                } else {
                    entry.clone()
                };
                entries.push(
                    button(text(label))
                        .width(Length::Fill)
                        .on_press(Message::EntrySelected(index)),
                )
            },
        );
        container(
            column![
                text(TITLE).size(24),
                row![
                    text("Category:"),
                    pick_list(
                        self.categories.clone(),
                        selected_category,
                        Message::CategorySelected,
                    ),
                ]
                .spacing(8),
                scrollable(entries).height(Length::FillPortion(1)),
                text(&self.position_text),
                row![
                    button("OK").on_press(Message::Ok),
                    button("Cancel").on_press(Message::Cancel),
                ]
                .spacing(8),
            ]
            .spacing(10),
        )
        .padding(16)
        .width(Length::Fill)
        .height(Length::Fill)
        .into()
    }

    #[must_use]
    pub const fn lists(&self) -> &PickerLists {
        &self.lists
    }

    #[must_use]
    pub fn position_text(&self) -> &str {
        &self.position_text
    }

    #[must_use]
    pub const fn staged_complete_index(&self) -> Option<usize> {
        self.staged_complete_index
    }

    #[must_use]
    pub const fn modal_result(&self) -> ModalResult {
        self.modal_result
    }

    #[must_use]
    pub fn help_topic(&self) -> &str {
        &self.help_topic
    }

    pub fn set_help_topic(&mut self, topic: impl Into<String>) {
        self.help_topic = topic.into();
    }

    #[must_use]
    pub fn help_requests(&self) -> &[String] {
        &self.help_requests
    }

    pub fn take_help_requests(&mut self) -> Vec<String> {
        std::mem::take(&mut self.help_requests)
    }

    #[must_use]
    pub const fn help_context(&self) -> u32 {
        self.help_context
    }

    #[must_use]
    pub const fn descriptions_enabled(&self) -> bool {
        self.descriptions_enabled
    }

    #[must_use]
    pub const fn selected_visible_index(&self) -> Option<usize> {
        self.selected_visible_index
    }

    #[must_use]
    pub fn category_labels(&self) -> Vec<&str> {
        self.categories
            .iter()
            .map(|category| category.label.as_str())
            .collect()
    }
}

#[cfg(test)]
mod tests {
    use iced::Task;
    use tiara_core::hdl_picker::{CatalogDevice, HdlCatalog, PickerTarget};

    use super::{CategoryChoice, HelpEventResult, Message, ModalResult, State};

    fn catalog() -> HdlCatalog {
        HdlCatalog::new(
            vec!["Logic".to_owned(), "Unlisted".to_owned()],
            vec![
                CatalogDevice {
                    name: "and2".to_owned(),
                    category_index: 0,
                },
                CatalogDevice {
                    name: "missing".to_owned(),
                    category_index: 1,
                },
            ],
            [("and2".to_owned(), "Two-input AND".to_owned())],
        )
    }

    fn state() -> State {
        State::new("All", vec!["AND2".to_owned(), "RAM".to_owned()], catalog())
    }

    fn discard(task: Task<Message>) {
        drop(task);
    }

    #[test]
    fn create_initializes_help_description_and_selection_state() {
        let state = state();

        assert_eq!(state.help_topic(), "");
        assert_eq!(state.help_context(), 1);
        assert!(state.descriptions_enabled());
        assert_eq!(state.staged_complete_index(), None);
    }

    #[test]
    fn create_message_clears_stale_lifecycle_values() {
        let mut state = state();
        state.help_topic = "stale topic".to_owned();
        state.help_context = 99;
        state.descriptions_enabled = false;
        state.selected_visible_index = Some(1);
        state.staged_complete_index = Some(1);

        discard(state.update(Message::Created));

        assert_eq!(state.help_topic(), "");
        assert_eq!(state.help_context(), 1);
        assert!(state.descriptions_enabled());
        assert_eq!(state.selected_visible_index, None);
        assert_eq!(state.staged_complete_index(), None);
    }

    #[test]
    fn help_suppresses_default_and_queues_exact_nonempty_topic() {
        let mut state = state();
        state.set_help_topic("HDL picker overview");

        let result = state.on_help();

        assert_eq!(
            result,
            HelpEventResult {
                handled: true,
                call_default_help: false,
            }
        );
        assert_eq!(state.help_requests(), ["HDL picker overview"]);
        assert_eq!(state.take_help_requests(), ["HDL picker overview"]);
        assert!(state.help_requests().is_empty());
    }

    #[test]
    fn empty_help_topic_is_handled_without_host_request() {
        let mut state = state();

        discard(state.update(Message::HelpRequested));

        assert!(state.help_requests().is_empty());
    }

    #[test]
    fn show_rebuilds_description_mode_categories_and_all_rows() {
        let mut state = state();
        state.categories.clear();
        state.select_category(1);
        state.select_visible_entry(0);

        discard(state.update(Message::Shown));

        assert_eq!(state.category_labels(), ["All", "Logic", "Unlisted"]);
        assert_eq!(state.lists().category_index, 0);
        assert_eq!(state.lists().active_entries, ["AND2", "RAM"]);
        assert_eq!(state.selected_visible_index(), None);
        assert_eq!(state.position_text(), "0/2");
    }

    #[test]
    fn show_in_alternate_mode_only_selects_visible_row_zero() {
        let mut state = state();
        state.descriptions_enabled = false;
        state.select_category(1);

        state.on_show();

        assert_eq!(state.lists().category_index, 1);
        assert_eq!(state.lists().active_entries, ["AND2"]);
        assert_eq!(state.selected_visible_index(), Some(0));
    }

    #[test]
    fn destroy_releases_catalog_and_all_four_owned_lists() {
        let mut state = state();

        discard(state.update(Message::Destroyed));

        assert_eq!(state.catalog, HdlCatalog::default());
        assert!(state.categories.is_empty());
        assert!(state.lists.complete_entries.is_empty());
        assert!(state.lists.active_entries.is_empty());
        assert!(state.lists.display_entries.is_empty());

        state.on_destroy();
        assert_eq!(state.catalog, HdlCatalog::default());
        assert!(state.categories.is_empty());
    }

    #[test]
    fn category_rebuild_resets_selection_and_position() {
        let mut state = state();
        discard(state.update(Message::EntrySelected(1)));
        assert_eq!(state.position_text(), "2/2");
        discard(state.update(Message::CategorySelected(CategoryChoice {
            index: 1,
            label: "Logic".to_owned(),
        })));
        assert_eq!(state.lists().active_entries, ["AND2"]);
        assert_eq!(state.position_text(), "0/1");
        assert_eq!(state.staged_complete_index(), None);
    }

    #[test]
    fn ok_maps_unpadded_active_name_to_complete_index() {
        let mut state = state();
        discard(state.update(Message::CategorySelected(CategoryChoice {
            index: 1,
            label: "Logic".to_owned(),
        })));
        assert!(state.lists().display_entries[0].contains("Two-input AND"));
        discard(state.update(Message::EntrySelected(0)));
        discard(state.update(Message::Ok));
        assert_eq!(state.modal_result(), ModalResult::Ok);
        assert_eq!(state.staged_complete_index(), Some(0));
    }

    #[test]
    fn ok_with_no_selection_accepts_modal_but_stages_no_index() {
        let mut state = state();
        discard(state.update(Message::Ok));
        assert_eq!(state.modal_result(), ModalResult::Ok);
        assert_eq!(state.staged_complete_index(), None);
    }

    #[test]
    fn catalog_name_absent_from_complete_list_stages_no_index() {
        let mut state = state();
        discard(state.update(Message::CategorySelected(CategoryChoice {
            index: 2,
            label: "Unlisted".to_owned(),
        })));
        discard(state.update(Message::EntrySelected(0)));
        discard(state.update(Message::Ok));
        assert_eq!(state.staged_complete_index(), None);
    }

    #[test]
    fn copy_back_is_transactional_for_cancel_invalid_and_valid_results() {
        let original = PickerTarget {
            selected_entry: "OLD".to_owned(),
            secondary_text: "keep".to_owned(),
            reset_value: 9,
        };
        let mut state = state();
        let mut target = original.clone();
        assert_eq!(state.copy_back(&mut target), -1);
        assert_eq!(target, original);
        discard(state.update(Message::EntrySelected(1)));
        discard(state.update(Message::Ok));
        assert_eq!(state.copy_back(&mut target), 57);
        assert_eq!(target.selected_entry, "RAM");
        assert!(target.secondary_text.is_empty());
        assert_eq!(target.reset_value, 0);
    }
}
