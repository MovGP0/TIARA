use std::fs;
use std::io;
use std::path::Path;

use iced::widget::{button, column, container, pick_list, row, scrollable, text, text_input};
use iced::{Alignment, Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "Find Component";
pub const SCREENSHOT: &str = "screenshots/Find_Component_Window.png";
pub const FORM_RESOURCE: &str = "ComponentFinder";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01bacc80");
const STATUS: &str = "Component catalogue search";
const MAX_PATTERN_CHARACTERS: usize = 255;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum MatchPosition {
    Start,
    Anywhere,
    End,
}

impl MatchPosition {
    const ALL: [Self; 3] = [Self::Start, Self::Anywhere, Self::End];
}

impl std::fmt::Display for MatchPosition {
    fn fmt(&self, formatter: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        formatter.write_str(match self {
            Self::Start => "start",
            Self::Anywhere => "anywhere",
            Self::End => "end",
        })
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CatalogPass {
    Tina,
    Shared,
    AllMacros,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CatalogEntry {
    pub component_id: u32,
    pub name: String,
    pub category: String,
    pub pass: CatalogPass,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SearchResult {
    pub component_id: u32,
    pub name: String,
    pub category: String,
}

pub trait CatalogueInventorySource {
    fn append_tina_models(&self, lines: &mut Vec<String>) -> usize;
    fn append_shared_catalogue(&self, lines: &mut Vec<String>) -> usize;
}

struct EmptyInventorySource;

impl CatalogueInventorySource for EmptyInventorySource {
    fn append_tina_models(&self, _lines: &mut Vec<String>) -> usize {
        0
    }

    fn append_shared_catalogue(&self, _lines: &mut Vec<String>) -> usize {
        0
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    QueryChanged(String),
    MatchPositionChanged(MatchPosition),
    Search,
    SelectResult(usize),
    Insert,
    SaveList,
}

#[derive(Debug)]
pub struct Window {
    query: String,
    match_position: Option<MatchPosition>,
    catalogue: Vec<CatalogEntry>,
    backing_results: Vec<SearchResult>,
    visible_results: Vec<SearchResult>,
    selected_result: Option<usize>,
    insertion_blocked: bool,
    insert_enabled: bool,
    position_label: String,
    position_label_visible: bool,
    visible_capacity: usize,
    query_history: Vec<String>,
    no_match_message: Option<String>,
}

impl Default for Window {
    fn default() -> Self {
        Self::new(Vec::new())
    }
}

impl Window {
    #[must_use]
    pub fn new(catalogue: Vec<CatalogEntry>) -> Self {
        Self {
            query: String::new(),
            match_position: None,
            catalogue,
            backing_results: Vec::new(),
            visible_results: Vec::new(),
            selected_result: None,
            insertion_blocked: false,
            insert_enabled: false,
            position_label: "0/0".to_owned(),
            position_label_visible: false,
            visible_capacity: 8,
            query_history: Vec::new(),
            no_match_message: None,
        }
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::QueryChanged(query) => {
                self.query = query;
                self.invalidate_visible_results();
            }
            Message::MatchPositionChanged(position) => {
                self.match_position = Some(position);
                self.invalidate_visible_results();
            }
            Message::Search => self.search_catalogues(),
            Message::SelectResult(index) => {
                self.selected_result = (index < self.visible_results.len()).then_some(index);
                self.update_position_label();
            }
            Message::Insert => {
                let _ = self.insert_selected_result();
            }
            Message::SaveList => {
                // The application shell has not supplied a file-dialog path.
                // Preserve the recovered cancel behavior until it does.
                let _ = Self::save_catalogue_inventory(None, &EmptyInventorySource);
            }
        }
    }

    /// Searches the three ordered catalogue passes and rebuilds the visible
    /// results. This ports Ghidra function `FUN_01bac450` at `0x01BAC450`.
    pub fn search_catalogues(&mut self) {
        self.backing_results.clear();
        self.visible_results.clear();
        self.selected_result = None;
        self.no_match_message = None;

        let pattern: String = self
            .query
            .to_ascii_uppercase()
            .chars()
            .take(MAX_PATTERN_CHARACTERS)
            .collect();
        if let Some(position) = self.match_position {
            for pass in [
                CatalogPass::Tina,
                CatalogPass::Shared,
                CatalogPass::AllMacros,
            ] {
                self.backing_results.extend(
                    self.catalogue
                        .iter()
                        .filter(|entry| entry.pass == pass)
                        .filter(|entry| component_name_matches(&entry.name, &pattern, position))
                        .map(|entry| SearchResult {
                            component_id: entry.component_id,
                            name: entry.name.clone(),
                            category: entry.category.clone(),
                        }),
                );
            }
        }

        self.visible_results.clone_from(&self.backing_results);
        self.insert_enabled = !self.visible_results.is_empty() && !self.insertion_blocked;
        self.selected_result = (!self.visible_results.is_empty()).then_some(0);
        self.position_label_visible = self.visible_results.len() > self.visible_capacity;
        self.update_position_label();

        if self.visible_results.is_empty() {
            self.no_match_message = Some(format!("No component matches '{}'.", self.query));
        } else if !self
            .query_history
            .iter()
            .any(|query| query.eq_ignore_ascii_case(&self.query))
        {
            self.query_history.insert(0, self.query.clone());
        }
    }

    /// Clears only the visible result state and restores Search as the default
    /// action. This ports Ghidra function `FUN_01bacf50` at `0x01BACF50`.
    pub fn invalidate_visible_results(&mut self) {
        self.visible_results.clear();
        self.selected_result = None;
        self.insert_enabled = false;
    }

    /// Publishes the selected result identifier unless insertion is blocked.
    /// This ports Ghidra function `FUN_01bacfd0` at `0x01BACFD0`.
    #[must_use]
    pub fn publish_selected_result(&self) -> Option<u32> {
        if self.insertion_blocked {
            return None;
        }
        self.selected_result
            .and_then(|selected| self.visible_results.get(selected))
            .map(|result| result.component_id)
    }

    /// Delegates Insert to the shared selected-result transfer. This ports
    /// Ghidra function `FUN_01bad1e0` at `0x01BAD1E0`.
    #[must_use]
    pub fn insert_selected_result(&self) -> Option<u32> {
        self.publish_selected_result()
    }

    /// Updates the one-based selected-position label. This ports Ghidra
    /// function `FUN_01bad1f0` at `0x01BAD1F0`.
    pub fn update_position_label(&mut self) {
        let position = self.selected_result.map_or(0, |index| index + 1);
        self.position_label = format!("{position}/{}", self.visible_results.len());
    }

    /// Saves a complete catalogue inventory after a file choice is accepted.
    /// This ports Ghidra function `FUN_01bad2e0` at `0x01BAD2E0`.
    ///
    /// Rust's standard file API supplies the create, truncate, and complete
    /// write behavior, so no additional file crate is required.
    ///
    /// # Errors
    ///
    /// Returns an I/O error when the accepted target cannot be written.
    pub fn save_catalogue_inventory(
        path: Option<&Path>,
        source: &impl CatalogueInventorySource,
    ) -> io::Result<bool> {
        let Some(path) = path else {
            return Ok(false);
        };
        let text = build_catalogue_inventory(source);
        fs::write(path, text)?;
        Ok(true)
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let menu = window_shell::empty_menu();
        let insert_button = button("Insert...");
        let insert_button = if self.insert_enabled {
            insert_button.on_press(Message::Insert)
        } else {
            insert_button
        };
        let toolbar: Element<'_, Message> = container(
            row![
                button("Search...").on_press(Message::Search),
                insert_button,
                button("Save List...").on_press(Message::SaveList),
            ]
            .spacing(4),
        )
        .padding([3, 6])
        .width(Length::Fill)
        .into();

        let result_rows = self
            .visible_results
            .iter()
            .enumerate()
            .map(|(index, result)| {
                Element::from(
                    button(text(format!("{}    {}", result.name, result.category)))
                        .width(Length::Fill)
                        .on_press(Message::SelectResult(index)),
                )
            })
            .collect::<Vec<_>>();

        let body: Element<'_, Message> = container(scrollable(
            column![
                row![
                    text("Component to find").width(Length::FillPortion(2)),
                    text_input("", &self.query)
                        .on_input(Message::QueryChanged)
                        .width(Length::FillPortion(3)),
                ]
                .spacing(8)
                .align_y(Alignment::Center),
                row![
                    text("Match at").width(Length::FillPortion(2)),
                    pick_list(
                        MatchPosition::ALL,
                        self.match_position,
                        Message::MatchPositionChanged
                    )
                    .width(Length::FillPortion(3)),
                ]
                .spacing(8)
                .align_y(Alignment::Center),
                text(if self.position_label_visible {
                    &self.position_label
                } else {
                    ""
                }),
                column(result_rows).spacing(4),
                text(self.no_match_message.as_deref().unwrap_or_default()),
            ]
            .spacing(8),
        ))
        .padding(18)
        .width(Length::Fill)
        .height(Length::Fill)
        .into();

        window_shell::frame(TITLE, menu, toolbar, body, STATUS)
    }
}

fn component_name_matches(candidate: &str, pattern: &str, position: MatchPosition) -> bool {
    if pattern.is_empty() {
        return false;
    }
    let candidate = candidate.to_ascii_uppercase();
    let Some(first_position) = candidate.find(pattern) else {
        return false;
    };
    match position {
        MatchPosition::Start => first_position == 0,
        MatchPosition::Anywhere => true,
        MatchPosition::End => {
            pattern.len() < candidate.len()
                && first_position == candidate.len().saturating_sub(pattern.len())
        }
    }
}

fn build_catalogue_inventory(source: &impl CatalogueInventorySource) -> String {
    let mut lines = vec![
        String::new(),
        "****************************************************".to_owned(),
        "********** Components in TINA catalogue ************".to_owned(),
        "****************************************************".to_owned(),
    ];
    let tina_count = source.append_tina_models(&mut lines);
    let shared_count = source.append_shared_catalogue(&mut lines);
    lines.push(String::new());
    lines.push(String::new());
    lines.push(format!(
        "#Total number of components: {}",
        tina_count + shared_count
    ));
    let mut text = lines.join("\r\n");
    text.push_str("\r\n");
    text
}

pub const HELP_CONTEXT: u32 = 0x0468;

/// The recovered separator the private result list stores.
pub const RESULT_LIST_SEPARATOR: char = '|';

/// How long the incremental search keeps typed characters before it starts
/// over.
pub const INCREMENTAL_SEARCH_TIMEOUT_MS: i32 = 2000;

/// The longest prefix the incremental search accumulates.
pub const INCREMENTAL_SEARCH_MAX_LENGTH: usize = 0x32;

/// The caption and status the double-click search window shows.
pub const SEARCH_WINDOW_TITLE: &str = "Searching...";
pub const SEARCH_WINDOW_STATUS: &str = "Searching in the library...";

pub trait ComponentFinderCreateHost {
    /// Saves the tree's current notification handler and installs the dialog's.
    fn install_tree_handler(&mut self);

    /// Blends the three designed form colours.
    fn blend_form_colors(&mut self);

    /// Attaches the shared image list to the parts list.
    fn attach_shared_images(&mut self);

    /// Creates the private result list with its separator.
    fn create_result_list(&mut self, separator: char);

    /// The file name the open dialog currently shows.
    fn current_dialog_file_name(&mut self) -> String;

    /// Writes the rebuilt file name back to the open dialog.
    fn set_dialog_file_name(&mut self, name: &str);

    fn set_help_context(&mut self, context: u32);

    /// Creates the catalog reader the search uses.
    fn create_catalog_reader(&mut self);
}

/// Implements Ghidra function `FUN_01BACC80` at `0x01BACC80`.
///
/// Prepares one Find Component session: it takes over the tree's notification
/// handler after saving the previous one, blends the three designed form
/// colours, attaches the shared image list to the parts list, creates the
/// private result list with its recovered separator, rebuilds the open dialog's
/// file name against the settings directory, assigns the help context, and
/// creates the catalog reader.
///
/// The handler searches nothing and reads no catalog; the first search happens
/// only when the user asks for one.
pub fn create_component_finder(host: &mut impl ComponentFinderCreateHost) -> String {
    host.install_tree_handler();
    host.blend_form_colors();
    host.attach_shared_images();
    host.create_result_list(RESULT_LIST_SEPARATOR);

    let name = host.current_dialog_file_name();
    host.set_dialog_file_name(&name);
    host.set_help_context(HELP_CONTEXT);
    host.create_catalog_reader();
    name
}

pub trait ComponentFinderTeardownHost {
    /// Releases every result object and then the private list itself.
    fn release_result_list(&mut self);

    /// Clears the shared image list and reattaches it from the parts list.
    fn reset_shared_images(&mut self);

    /// Puts the saved tree notification handler back.
    fn restore_tree_handler(&mut self);
}

/// Implements Ghidra function `FUN_01BACE90` at `0x01BACE90`.
///
/// Tears the session down in the reverse of the create order: the private
/// result list and everything in it is released, the shared image list is
/// cleared and reattached from the parts list, and the tree's original
/// notification handler is restored.
///
/// Restoring the handler last matters, because the other two steps still run
/// through the dialog's own handler. Nothing is saved.
pub fn destroy_component_finder(host: &mut impl ComponentFinderTeardownHost) {
    host.release_result_list();
    host.reset_shared_images();
    host.restore_tree_handler();
}

/// One row of the parts list and the record its info tip reads.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct PartsListRow {
    pub name: String,
    /// The description stored on the row's own record.
    pub description: String,
}

/// Implements Ghidra function `FUN_01BAD040` at `0x01BAD040`.
///
/// Answers the parts list's info-tip request with the description stored on the
/// hovered row's own record. The recovered handler formats nothing, truncates
/// nothing, and consults no catalog, so a row without a description shows an
/// empty tip.
#[must_use]
pub fn parts_info_tip(row: &PartsListRow) -> String {
    row.description.clone()
}

/// The incremental type-ahead search of the parts list.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct IncrementalSearch {
    prefix: String,
    last_keystroke_ms: i32,
}

/// What one key does to the incremental search.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum IncrementalSearchOutcome {
    /// The key is not handled and reaches the list unchanged.
    Ignored,
    /// The prefix was discarded; the key still reaches the list.
    Cleared,
    /// Select the first entry starting with this prefix and swallow the key.
    Search(String),
}

impl IncrementalSearch {
    #[must_use]
    pub fn prefix(&self) -> &str {
        &self.prefix
    }

    /// Implements Ghidra function `FUN_01BAD060` at `0x01BAD060`.
    ///
    /// Accumulates typed characters into a search prefix and reports what the
    /// parts list should do.
    ///
    /// Backspace and Escape discard the prefix but are still passed on, so the
    /// list keeps its own handling of them. A printable character starts a new
    /// prefix when more than the recovered timeout has passed since the last
    /// keystroke, is appended only while the prefix is shorter than the
    /// recovered limit, and is always swallowed so the list never sees it. Once
    /// the limit is reached further characters are dropped but the search still
    /// runs on the prefix collected so far.
    pub fn apply_key(&mut self, key: char, now_ms: i32) -> IncrementalSearchOutcome {
        if key == '\u{8}' || key == '\u{1b}' {
            self.prefix.clear();
            return IncrementalSearchOutcome::Cleared;
        }

        if !(' '..='\u{ff}').contains(&key) {
            return IncrementalSearchOutcome::Ignored;
        }

        if now_ms.wrapping_sub(self.last_keystroke_ms) > INCREMENTAL_SEARCH_TIMEOUT_MS {
            self.prefix.clear();
        }
        self.last_keystroke_ms = now_ms;

        if self.prefix.chars().count() < INCREMENTAL_SEARCH_MAX_LENGTH {
            self.prefix.push(key);
        }
        IncrementalSearchOutcome::Search(self.prefix.clone())
    }
}

pub trait LibrarySearchHost {
    /// The file the open dialog has selected. `None` is the recovered
    /// no-selection branch.
    fn selected_library_file(&mut self) -> Option<String>;

    /// Shows the modal progress window with its recovered caption and status.
    fn show_search_window(&mut self, title: &str, status: &str);

    /// Lets the application process pending messages so the window paints.
    fn process_application_messages(&mut self);

    /// Runs the catalog search for one library file.
    fn search_library(&mut self, file: &str);

    fn close_search_window(&mut self);
}

/// Implements Ghidra function `FUN_01BAD590` at `0x01BAD590`.
///
/// Searches the selected library when the dialog is double-clicked.
///
/// With nothing selected the handler does nothing at all: no window appears and
/// no search runs. Otherwise the progress window is shown with its recovered
/// caption and status, the application is given a chance to paint it, the
/// search runs, and the window is destroyed afterwards.
///
/// The recovered handler has no local error handler around the search, so a
/// failure there leaves the progress window destroyed only by the normal path.
pub fn search_selected_library(host: &mut impl LibrarySearchHost) -> bool {
    let Some(file) = host.selected_library_file() else {
        return false;
    };

    host.show_search_window(SEARCH_WINDOW_TITLE, SEARCH_WINDOW_STATUS);
    host.process_application_messages();
    host.search_library(&file);
    host.close_search_window();
    true
}

impl Window {
    /// Implements Ghidra function `FUN_01BAD1D0` at `0x01BAD1D0`.
    ///
    /// The catalogue combo's change handler delegates straight to the shared
    /// result refresh. It reads no combo text of its own and starts no search,
    /// so switching catalogues only repaints what is already known.
    pub fn catalogue_selection_changed(&mut self) {
        self.invalidate_visible_results();
    }
}

#[cfg(test)]
mod tests {
    use std::cell::Cell;

    use super::*;

    fn catalogue() -> Vec<CatalogEntry> {
        vec![
            CatalogEntry {
                component_id: 10,
                name: "OPAMP".to_owned(),
                category: "Tina Macro".to_owned(),
                pass: CatalogPass::AllMacros,
            },
            CatalogEntry {
                component_id: 20,
                name: "OPAMP MODEL".to_owned(),
                category: "Spice Model".to_owned(),
                pass: CatalogPass::Shared,
            },
            CatalogEntry {
                component_id: 30,
                name: "FAST OPAMP".to_owned(),
                category: "Tina Macro".to_owned(),
                pass: CatalogPass::Tina,
            },
        ]
    }

    #[test]
    fn match_modes_preserve_the_recovered_end_limits() {
        assert!(component_name_matches("OPAMP", "OP", MatchPosition::Start));
        assert!(component_name_matches(
            "FAST OPAMP",
            "OP",
            MatchPosition::Anywhere
        ));
        assert!(component_name_matches(
            "FAST OPAMP",
            "OPAMP",
            MatchPosition::End
        ));
        assert!(!component_name_matches(
            "OPAMP",
            "OPAMP",
            MatchPosition::End
        ));
        assert!(!component_name_matches(
            "OPAMP OPAMP",
            "OPAMP",
            MatchPosition::End
        ));
        assert!(!component_name_matches(
            "OPAMP",
            "",
            MatchPosition::Anywhere
        ));
    }

    #[test]
    fn search_uses_pass_order_selects_first_and_records_successful_query() {
        let mut window = Window::new(catalogue());
        window.query = "opamp".to_owned();
        window.match_position = Some(MatchPosition::Anywhere);
        window.search_catalogues();

        assert_eq!(
            window
                .visible_results
                .iter()
                .map(|result| result.component_id)
                .collect::<Vec<_>>(),
            vec![30, 20, 10]
        );
        assert_eq!(window.selected_result, Some(0));
        assert_eq!(window.position_label, "1/3");
        assert!(window.insert_enabled);
        assert_eq!(window.query_history, vec!["opamp"]);

        window.search_catalogues();
        assert_eq!(window.query_history, vec!["opamp"]);
    }

    #[test]
    fn no_match_replaces_results_without_recording_history() {
        let mut window = Window::new(catalogue());
        window.query = "missing".to_owned();
        window.match_position = Some(MatchPosition::Anywhere);
        window.search_catalogues();

        assert!(window.visible_results.is_empty());
        assert_eq!(window.position_label, "0/0");
        assert!(!window.insert_enabled);
        assert!(window.query_history.is_empty());
        assert_eq!(
            window.no_match_message.as_deref(),
            Some("No component matches 'missing'.")
        );
    }

    #[test]
    fn input_change_invalidates_only_visible_result_state() {
        let mut window = Window::new(catalogue());
        window.query = "opamp".to_owned();
        window.match_position = Some(MatchPosition::Anywhere);
        window.search_catalogues();
        let backing = window.backing_results.clone();
        let old_position = window.position_label.clone();
        window.invalidate_visible_results();

        assert!(window.visible_results.is_empty());
        assert_eq!(window.backing_results, backing);
        assert_eq!(window.position_label, old_position);
        assert!(!window.insert_enabled);
    }

    #[test]
    fn insert_and_double_click_share_the_guarded_result_transfer() {
        let mut window = Window::new(catalogue());
        window.query = "opamp".to_owned();
        window.match_position = Some(MatchPosition::Anywhere);
        window.search_catalogues();
        assert_eq!(window.insert_selected_result(), Some(30));

        window.insertion_blocked = true;
        assert_eq!(window.publish_selected_result(), None);

        window.insertion_blocked = false;
        window.selected_result = None;
        assert_eq!(window.publish_selected_result(), None);
    }

    #[test]
    fn list_selection_updates_one_based_position() {
        let mut window = Window::new(catalogue());
        window.query = "opamp".to_owned();
        window.match_position = Some(MatchPosition::Anywhere);
        window.search_catalogues();
        window.update(Message::SelectResult(2));
        assert_eq!(window.position_label, "3/3");
    }

    struct Inventory {
        calls: Cell<usize>,
    }

    impl CatalogueInventorySource for Inventory {
        fn append_tina_models(&self, lines: &mut Vec<String>) -> usize {
            self.calls.set(self.calls.get() + 1);
            lines.extend(["TINA Models".to_owned(), "Model A".to_owned()]);
            1
        }

        fn append_shared_catalogue(&self, lines: &mut Vec<String>) -> usize {
            self.calls.set(self.calls.get() + 1);
            lines.extend(["%SPICE Subcircuits".to_owned(), "Macro B".to_owned()]);
            1
        }
    }

    #[test]
    fn save_inventory_cancel_is_a_noop_and_accept_writes_the_complete_list() -> io::Result<()> {
        let inventory = Inventory {
            calls: Cell::new(0),
        };
        assert!(!Window::save_catalogue_inventory(None, &inventory)?);
        assert_eq!(inventory.calls.get(), 0);

        let directory = Path::new(env!("CARGO_MANIFEST_DIR")).join("../../.temp");
        fs::create_dir_all(&directory)?;
        let path = directory.join(format!(
            "find-component-inventory-{}.txt",
            std::process::id()
        ));
        assert!(Window::save_catalogue_inventory(Some(&path), &inventory)?);
        let output = fs::read_to_string(&path)?;
        fs::remove_file(path)?;

        assert_eq!(inventory.calls.get(), 2);
        assert!(output.contains("Components in TINA catalogue"));
        assert!(output.contains("TINA Models\r\nModel A"));
        assert!(output.contains("%SPICE Subcircuits\r\nMacro B"));
        assert!(output.ends_with("#Total number of components: 2\r\n"));
        Ok(())
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum CreateStep {
        TreeHandler,
        Colors,
        Images,
        ResultList(char),
        ReadName,
        WriteName(String),
        Help(u32),
        CatalogReader,
    }

    #[derive(Debug, Default)]
    struct CreateHost {
        name: String,
        steps: Vec<CreateStep>,
    }

    impl ComponentFinderCreateHost for CreateHost {
        fn install_tree_handler(&mut self) {
            self.steps.push(CreateStep::TreeHandler);
        }

        fn blend_form_colors(&mut self) {
            self.steps.push(CreateStep::Colors);
        }

        fn attach_shared_images(&mut self) {
            self.steps.push(CreateStep::Images);
        }

        fn create_result_list(&mut self, separator: char) {
            self.steps.push(CreateStep::ResultList(separator));
        }

        fn current_dialog_file_name(&mut self) -> String {
            self.steps.push(CreateStep::ReadName);
            self.name.clone()
        }

        fn set_dialog_file_name(&mut self, name: &str) {
            self.steps.push(CreateStep::WriteName(name.to_owned()));
        }

        fn set_help_context(&mut self, context: u32) {
            self.steps.push(CreateStep::Help(context));
        }

        fn create_catalog_reader(&mut self) {
            self.steps.push(CreateStep::CatalogReader);
        }
    }

    #[test]
    fn create_prepares_the_session_in_the_recovered_order() {
        let mut host = CreateHost {
            name: "parts.tcp".to_owned(),
            steps: Vec::new(),
        };

        assert_eq!(create_component_finder(&mut host), "parts.tcp");

        assert_eq!(
            host.steps,
            [
                CreateStep::TreeHandler,
                CreateStep::Colors,
                CreateStep::Images,
                CreateStep::ResultList(RESULT_LIST_SEPARATOR),
                CreateStep::ReadName,
                CreateStep::WriteName("parts.tcp".to_owned()),
                CreateStep::Help(HELP_CONTEXT),
                CreateStep::CatalogReader,
            ]
        );
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum TeardownStep {
        ResultList,
        Images,
        TreeHandler,
    }

    #[derive(Debug, Default)]
    struct TeardownHost {
        steps: Vec<TeardownStep>,
    }

    impl ComponentFinderTeardownHost for TeardownHost {
        fn release_result_list(&mut self) {
            self.steps.push(TeardownStep::ResultList);
        }

        fn reset_shared_images(&mut self) {
            self.steps.push(TeardownStep::Images);
        }

        fn restore_tree_handler(&mut self) {
            self.steps.push(TeardownStep::TreeHandler);
        }
    }

    #[test]
    fn destroy_restores_the_tree_handler_last() {
        let mut host = TeardownHost::default();

        destroy_component_finder(&mut host);

        assert_eq!(
            host.steps,
            [
                TeardownStep::ResultList,
                TeardownStep::Images,
                TeardownStep::TreeHandler,
            ]
        );
    }

    #[test]
    fn the_info_tip_shows_only_the_rows_own_description() {
        assert_eq!(
            parts_info_tip(&PartsListRow {
                name: "R1".to_owned(),
                description: "Resistor".to_owned(),
            }),
            "Resistor"
        );
        assert_eq!(parts_info_tip(&PartsListRow::default()), "");
    }

    #[test]
    fn backspace_and_escape_discard_the_prefix_but_reach_the_list() {
        let mut search = IncrementalSearch::default();
        assert_eq!(
            search.apply_key('r', 0),
            IncrementalSearchOutcome::Search("r".to_owned())
        );

        assert_eq!(
            search.apply_key('\u{8}', 10),
            IncrementalSearchOutcome::Cleared
        );
        assert_eq!(search.prefix(), "");

        assert_eq!(
            search.apply_key('x', 20),
            IncrementalSearchOutcome::Search("x".to_owned())
        );
        assert_eq!(
            search.apply_key('\u{1b}', 30),
            IncrementalSearchOutcome::Cleared
        );
        assert_eq!(search.prefix(), "");
    }

    #[test]
    fn typing_accumulates_a_prefix_until_the_recovered_timeout_elapses() {
        let mut search = IncrementalSearch::default();

        assert_eq!(
            search.apply_key('r', 1_000),
            IncrementalSearchOutcome::Search("r".to_owned())
        );
        assert_eq!(
            search.apply_key('e', 1_500),
            IncrementalSearchOutcome::Search("re".to_owned())
        );
        assert_eq!(
            search.apply_key('s', 1_500 + INCREMENTAL_SEARCH_TIMEOUT_MS + 1),
            IncrementalSearchOutcome::Search("s".to_owned())
        );
    }

    #[test]
    fn the_prefix_stops_growing_at_the_recovered_limit_but_still_searches() {
        let mut search = IncrementalSearch::default();
        for index in 0..INCREMENTAL_SEARCH_MAX_LENGTH {
            let outcome = search.apply_key('a', i32::try_from(index).unwrap_or(0));
            assert!(matches!(outcome, IncrementalSearchOutcome::Search(_)));
        }
        assert_eq!(search.prefix().len(), INCREMENTAL_SEARCH_MAX_LENGTH);

        let outcome = search.apply_key('b', 60);

        assert_eq!(search.prefix().len(), INCREMENTAL_SEARCH_MAX_LENGTH);
        assert_eq!(
            outcome,
            IncrementalSearchOutcome::Search(search.prefix().to_owned())
        );
    }

    #[test]
    fn control_characters_outside_the_recovered_range_are_ignored() {
        let mut search = IncrementalSearch::default();

        assert_eq!(search.apply_key('\t', 0), IncrementalSearchOutcome::Ignored);
        assert_eq!(search.apply_key('\r', 0), IncrementalSearchOutcome::Ignored);
        assert_eq!(search.prefix(), "");
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum SearchStep {
        Window(String, String),
        Pump,
        Search(String),
        Close,
    }

    #[derive(Debug, Default)]
    struct SearchHost {
        selected: Option<String>,
        steps: Vec<SearchStep>,
    }

    impl LibrarySearchHost for SearchHost {
        fn selected_library_file(&mut self) -> Option<String> {
            self.selected.clone()
        }

        fn show_search_window(&mut self, title: &str, status: &str) {
            self.steps
                .push(SearchStep::Window(title.to_owned(), status.to_owned()));
        }

        fn process_application_messages(&mut self) {
            self.steps.push(SearchStep::Pump);
        }

        fn search_library(&mut self, file: &str) {
            self.steps.push(SearchStep::Search(file.to_owned()));
        }

        fn close_search_window(&mut self) {
            self.steps.push(SearchStep::Close);
        }
    }

    #[test]
    fn a_double_click_with_a_selection_shows_the_window_then_searches() {
        let mut host = SearchHost {
            selected: Some("lib.tlb".to_owned()),
            steps: Vec::new(),
        };

        assert!(search_selected_library(&mut host));

        assert_eq!(
            host.steps,
            [
                SearchStep::Window(
                    SEARCH_WINDOW_TITLE.to_owned(),
                    SEARCH_WINDOW_STATUS.to_owned()
                ),
                SearchStep::Pump,
                SearchStep::Search("lib.tlb".to_owned()),
                SearchStep::Close,
            ]
        );
    }

    #[test]
    fn a_double_click_without_a_selection_shows_no_window_at_all() {
        let mut host = SearchHost::default();

        assert!(!search_selected_library(&mut host));

        assert!(host.steps.is_empty());
    }

    #[test]
    fn the_catalogue_combo_only_invalidates_the_visible_results() {
        let mut window = Window::new(catalogue());
        window.update(Message::MatchPositionChanged(MatchPosition::Start));
        window.update(Message::QueryChanged("opamp".to_owned()));
        window.search_catalogues();
        assert!(!window.visible_results.is_empty());

        window.catalogue_selection_changed();

        assert!(window.visible_results.is_empty());
        assert_eq!(window.selected_result, None);
        assert!(!window.insert_enabled);
        assert!(!window.backing_results.is_empty());
    }
}
