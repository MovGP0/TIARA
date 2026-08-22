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
}
