use iced::widget::{checkbox, column, text, text_input};
use iced::{Element, Length, Task};

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SearchableText {
    pub text: String,
    pub horizontal: i64,
    pub vertical: i64,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct ReportPage {
    pub content: Vec<SearchableText>,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord)]
pub struct MatchLocation {
    pub page_index: usize,
    pub content_index: usize,
    pub match_offset: usize,
    pub horizontal: i64,
    pub vertical: i64,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct MatchRecord {
    pub location: MatchLocation,
    pub label: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum SearchResultNode {
    PageHeading { page_index: usize, label: String },
    Match(MatchRecord),
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum SearchOutcome {
    EmptyQuery,
    RepeatedAllMatchNoOp,
    SingleMatch(MatchLocation),
    AllMatches(usize),
    NotFound,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Navigation {
    NoOp,
    Page(usize),
    Match(MatchLocation),
}

#[derive(Debug, Clone, PartialEq, Eq)]
struct AllMatchSignature {
    query: String,
    case_sensitive: bool,
    find_all: bool,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    QueryChanged(String),
    CaseSensitiveChanged(bool),
    FindAllChanged(bool),
    FromBeginningChanged(bool),
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
#[allow(clippy::struct_excessive_bools)]
pub struct SearchDialog {
    pub query: String,
    pub case_sensitive: bool,
    pub find_all: bool,
    pub from_beginning: bool,
    pub results_enabled: bool,
    pub results: Vec<SearchResultNode>,
    pub highlighted: Option<MatchLocation>,
    pub current_page: usize,
    pub groups_expanded: bool,
    pub not_found_visible: bool,
    last_all_match: Option<AllMatchSignature>,
}

impl SearchDialog {
    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::QueryChanged(query) => self.query = query,
            Message::CaseSensitiveChanged(case_sensitive) => {
                self.case_sensitive = case_sensitive;
            }
            Message::FindAllChanged(find_all) => self.set_find_all(find_all),
            Message::FromBeginningChanged(from_beginning) => {
                self.from_beginning = from_beginning;
            }
        }
        Task::none()
    }

    /// Enables the result tree exactly when Find All is checked.
    ///
    /// Reimplements Ghidra function `FUN_018946b0` at `0x018946B0`.
    /// This state change does not search or clear existing result nodes.
    pub const fn set_find_all(&mut self, find_all: bool) {
        self.find_all = find_all;
        self.results_enabled = find_all;
    }

    /// Removes result headings and their owned match records.
    ///
    /// Reimplements Ghidra function `FUN_01894a70` at `0x01894A70`.
    pub fn clear_results(&mut self) {
        self.results.clear();
        self.groups_expanded = false;
    }

    /// Matches searchable report text and records the accepted locations.
    ///
    /// Reimplements Ghidra function `FUN_018a4a60` at `0x018A4A60`.
    /// Single-match mode accepts only the first location. Find All mode adds
    /// match records below a page heading and continues traversal.
    pub fn match_report_text(
        &mut self,
        page_index: usize,
        content_index: usize,
        content: &SearchableText,
        after: Option<MatchLocation>,
    ) -> bool {
        let offsets = find_offsets(&content.text, &self.query, self.case_sensitive);
        for match_offset in offsets {
            let location = MatchLocation {
                page_index,
                content_index,
                match_offset,
                horizontal: content.horizontal,
                vertical: content.vertical,
            };
            if after.is_some_and(|previous| location <= previous) {
                continue;
            }
            if self.find_all {
                self.add_all_match(location, &content.text);
            } else {
                self.highlighted = Some(location);
                self.current_page = page_index;
                return true;
            }
        }
        false
    }

    /// Scans report pages in order for the current query.
    ///
    /// Reimplements Ghidra function `FUN_018a6c20` at `0x018A6C20`.
    /// Single-match scans stop at the first accepted location. Find All scans
    /// continue through the remaining pages and retain grouped result records.
    pub fn scan_report_pages(
        &mut self,
        pages: &[ReportPage],
        start_page: usize,
        after: Option<MatchLocation>,
    ) -> SearchOutcome {
        self.clear_results();
        self.not_found_visible = false;
        for (page_index, page) in pages.iter().enumerate().skip(start_page) {
            for (content_index, content) in page.content.iter().enumerate() {
                if self.match_report_text(page_index, content_index, content, after) {
                    let location = self.highlighted.unwrap_or(MatchLocation {
                        page_index,
                        content_index,
                        match_offset: 0,
                        horizontal: content.horizontal,
                        vertical: content.vertical,
                    });
                    return SearchOutcome::SingleMatch(location);
                }
            }
        }
        if self.find_all {
            SearchOutcome::AllMatches(self.match_count())
        } else {
            self.not_found_visible = true;
            SearchOutcome::NotFound
        }
    }

    /// Navigates to a page heading or to a stored match record.
    ///
    /// Reimplements Ghidra function `FUN_018ac0e0` at `0x018AC0E0`.
    /// Activating no node is a no-op.
    pub fn activate_result(&mut self, node_index: Option<usize>) -> Navigation {
        let Some(node) = node_index
            .and_then(|index| self.results.get(index))
            .cloned()
        else {
            return Navigation::NoOp;
        };
        match node {
            SearchResultNode::PageHeading { page_index, .. } => {
                self.current_page = page_index;
                Navigation::Page(page_index)
            }
            SearchResultNode::Match(record) => {
                self.current_page = record.location.page_index;
                self.highlighted = Some(record.location);
                Navigation::Match(record.location)
            }
        }
    }

    /// Coordinates single-match and all-match `FastReport` searches.
    ///
    /// Reimplements Ghidra function `FUN_018ac200` at `0x018AC200`.
    /// Repeating an unchanged successful Find All request is a no-op. Other
    /// requests clear stale results and select the source-proven start state.
    pub fn find(&mut self, pages: &[ReportPage]) -> SearchOutcome {
        if self.query.is_empty() {
            return SearchOutcome::EmptyQuery;
        }
        let signature = AllMatchSignature {
            query: self.query.clone(),
            case_sensitive: self.case_sensitive,
            find_all: self.find_all,
        };
        if self.find_all && self.last_all_match.as_ref() == Some(&signature) {
            return SearchOutcome::RepeatedAllMatchNoOp;
        }

        let previous = self.highlighted;
        let (start_page, after) = if self.find_all || self.from_beginning {
            (0, None)
        } else {
            previous.map_or((0, None), |location| (location.page_index, Some(location)))
        };
        self.last_all_match = self.find_all.then_some(signature);
        let outcome = self.scan_report_pages(pages, start_page, after);
        if self.find_all {
            self.groups_expanded = true;
        }
        outcome
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        column![
            text("FastReport Search"),
            text_input("Text to find", &self.query).on_input(Message::QueryChanged),
            checkbox("Case sensitive", self.case_sensitive)
                .on_toggle(Message::CaseSensitiveChanged),
            checkbox("Find All", self.find_all).on_toggle(Message::FindAllChanged),
            checkbox("Search from beginning", self.from_beginning)
                .on_toggle(Message::FromBeginningChanged),
            text(format!("{} result nodes", self.results.len())),
        ]
        .spacing(8)
        .width(Length::Fill)
        .into()
    }

    fn add_all_match(&mut self, location: MatchLocation, text: &str) {
        let has_page_heading = self.results.iter().any(|node| {
            matches!(
                node,
                SearchResultNode::PageHeading { page_index, .. }
                    if *page_index == location.page_index
            )
        });
        if !has_page_heading {
            self.results.push(SearchResultNode::PageHeading {
                page_index: location.page_index,
                label: format!("Page {}", location.page_index + 1),
            });
        }
        self.results.push(SearchResultNode::Match(MatchRecord {
            location,
            label: text.to_owned(),
        }));
    }

    fn match_count(&self) -> usize {
        self.results
            .iter()
            .filter(|node| matches!(node, SearchResultNode::Match(_)))
            .count()
    }
}

fn find_offsets(candidate: &str, query: &str, case_sensitive: bool) -> Vec<usize> {
    if case_sensitive {
        candidate
            .match_indices(query)
            .map(|(index, _)| index)
            .collect()
    } else {
        candidate
            .to_lowercase()
            .match_indices(&query.to_lowercase())
            .map(|(index, _)| index)
            .collect()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn pages() -> Vec<ReportPage> {
        vec![
            ReportPage {
                content: vec![SearchableText {
                    text: "Alpha alpha".to_owned(),
                    horizontal: 10,
                    vertical: 20,
                }],
            },
            ReportPage {
                content: vec![SearchableText {
                    text: "alpha beta".to_owned(),
                    horizontal: 30,
                    vertical: 40,
                }],
            },
        ]
    }

    #[test]
    fn find_all_checkbox_only_changes_mode_and_result_control_state() {
        let mut dialog = SearchDialog {
            results: vec![SearchResultNode::PageHeading {
                page_index: 0,
                label: "Page 1".to_owned(),
            }],
            ..SearchDialog::default()
        };
        dialog.set_find_all(true);
        assert!(dialog.find_all);
        assert!(dialog.results_enabled);
        assert_eq!(dialog.results.len(), 1);
    }

    #[test]
    fn clear_results_removes_headings_and_owned_match_records() {
        let mut dialog = SearchDialog {
            query: "alpha".to_owned(),
            ..SearchDialog::default()
        };
        dialog.set_find_all(true);
        assert_eq!(dialog.find(&pages()), SearchOutcome::AllMatches(3));
        assert_eq!(dialog.results.len(), 5);
        dialog.clear_results();
        assert!(dialog.results.is_empty());
        assert!(!dialog.groups_expanded);
    }

    #[test]
    fn all_match_search_groups_matches_by_page_and_repeated_request_is_noop() {
        let mut dialog = SearchDialog {
            query: "alpha".to_owned(),
            ..SearchDialog::default()
        };
        dialog.set_find_all(true);
        assert_eq!(dialog.find(&pages()), SearchOutcome::AllMatches(3));
        assert!(dialog.groups_expanded);
        assert_eq!(dialog.find(&pages()), SearchOutcome::RepeatedAllMatchNoOp);
        assert_eq!(dialog.results.len(), 5);
    }

    #[test]
    fn case_option_controls_matching_and_single_search_advances() {
        let mut dialog = SearchDialog {
            query: "Alpha".to_owned(),
            case_sensitive: true,
            from_beginning: true,
            ..SearchDialog::default()
        };
        assert_eq!(
            dialog.find(&pages()),
            SearchOutcome::SingleMatch(MatchLocation {
                page_index: 0,
                content_index: 0,
                match_offset: 0,
                horizontal: 10,
                vertical: 20,
            })
        );
        dialog.from_beginning = false;
        dialog.case_sensitive = false;
        assert_eq!(
            dialog.find(&pages()),
            SearchOutcome::SingleMatch(MatchLocation {
                page_index: 0,
                content_index: 0,
                match_offset: 6,
                horizontal: 10,
                vertical: 20,
            })
        );
    }

    #[test]
    fn result_activation_handles_heading_match_and_null_nodes() {
        let mut dialog = SearchDialog {
            query: "alpha".to_owned(),
            ..SearchDialog::default()
        };
        dialog.set_find_all(true);
        assert_eq!(dialog.find(&pages()), SearchOutcome::AllMatches(3));
        assert_eq!(dialog.activate_result(Some(0)), Navigation::Page(0));
        assert!(matches!(
            dialog.activate_result(Some(1)),
            Navigation::Match(MatchLocation { page_index: 0, .. })
        ));
        assert_eq!(dialog.activate_result(None), Navigation::NoOp);
        assert_eq!(dialog.activate_result(Some(999)), Navigation::NoOp);
    }

    #[test]
    fn missing_single_match_sets_not_found_while_empty_query_is_noop() {
        let mut dialog = SearchDialog {
            query: "missing".to_owned(),
            ..SearchDialog::default()
        };
        assert_eq!(dialog.find(&pages()), SearchOutcome::NotFound);
        assert!(dialog.not_found_visible);

        dialog.query.clear();
        assert_eq!(dialog.find(&pages()), SearchOutcome::EmptyQuery);
    }
}
