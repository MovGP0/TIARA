use std::collections::BTreeMap;
use std::ffi::OsString;
use std::fs;
use std::path::{Path, PathBuf};

use iced::widget::{button, column, container, mouse_area, row, scrollable, text, text_input};
use iced::{Element, Length, Task};

pub const TITLE: &str = "Help";
pub const FORM_RESOURCE: &str = "FormHelp";

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum NavigationPage {
    #[default]
    Contents,
    Index,
    Search,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CloseDisposition {
    Release,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum HotSpotDisposition {
    ViewerHandlesAnchor,
    ViewerFollowsFile,
    Cancelled,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
enum Availability {
    #[default]
    Disabled,
    Enabled,
}

impl Availability {
    const fn from_bool(value: bool) -> Self {
        if value { Self::Enabled } else { Self::Disabled }
    }

    const fn is_enabled(self) -> bool {
        matches!(self, Self::Enabled)
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
enum Visibility {
    Hidden,
    #[default]
    Visible,
}

impl Visibility {
    const fn from_bool(value: bool) -> Self {
        if value { Self::Visible } else { Self::Hidden }
    }

    const fn is_visible(self) -> bool {
        matches!(self, Self::Visible)
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
enum InitializationState {
    #[default]
    Pending,
    Complete,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
enum FocusState {
    #[default]
    OtherControl,
    Viewer,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct HelpTopic {
    pub name: String,
    pub local_path: PathBuf,
    pub children: Vec<Self>,
}

impl HelpTopic {
    #[must_use]
    pub fn leaf(name: impl Into<String>, local_path: impl Into<PathBuf>) -> Self {
        Self {
            name: name.into(),
            local_path: local_path.into(),
            children: Vec::new(),
        }
    }

    #[must_use]
    pub fn group(name: impl Into<String>, children: Vec<Self>) -> Self {
        Self {
            name: name.into(),
            local_path: PathBuf::new(),
            children,
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct HelpIndexMatch {
    pub name: String,
    pub local_path: PathBuf,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct HelpIndexEntry {
    pub keyword: String,
    pub matches: Vec<HelpIndexMatch>,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct HelpPackage {
    pub base_directory: PathBuf,
    pub default_topic: String,
    pub contents: Vec<HelpTopic>,
    pub index: Vec<HelpIndexEntry>,
    pub pages: BTreeMap<PathBuf, String>,
}

impl HelpPackage {
    fn contains_path(&self, path: &Path) -> bool {
        self.pages.contains_key(path) || path.is_file()
    }

    fn read_page(&self, path: &Path) -> std::io::Result<String> {
        if let Some(source) = self.pages.get(path) {
            return Ok(source.clone());
        }

        fs::read_to_string(path)
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct IndexChoice {
    pub name: String,
    pub match_index: usize,
}

#[derive(Debug, Clone)]
pub enum Message {
    Back,
    Forward,
    Home,
    ToggleNavigation,
    NavigationPageSelected(NavigationPage),
    ContentsSelected(Vec<usize>),
    IndexSelected(usize),
    IndexChoiceSelected(usize),
    SearchChanged(String),
    SearchFocused,
    HotSpotSelected(String),
    Close,
}

#[derive(Debug)]
pub struct Window {
    package: Option<HelpPackage>,
    back_history: Vec<PathBuf>,
    forward_history: Vec<PathBuf>,
    current_path: Option<PathBuf>,
    displayed_document: String,
    navigation_page: NavigationPage,
    navigation_visibility: Visibility,
    navigation_availability: Availability,
    contents_availability: Availability,
    index_availability: Availability,
    back_availability: Availability,
    forward_availability: Availability,
    selected_index: Option<usize>,
    index_choices: Vec<IndexChoice>,
    search_text: String,
    search_initialization: InitializationState,
    focus: FocusState,
    close_disposition: Option<CloseDisposition>,
    last_error: Option<String>,
    width_fraction: f32,
    height_fraction: f32,
    screen_margin: u16,
}

impl Default for Window {
    fn default() -> Self {
        Self::new(HelpPackage::default())
    }
}

impl Window {
    #[must_use]
    pub fn new(package: HelpPackage) -> Self {
        let mut window = Self {
            package: Some(package),
            back_history: Vec::new(),
            forward_history: Vec::new(),
            current_path: None,
            displayed_document: String::new(),
            navigation_page: NavigationPage::Contents,
            navigation_visibility: Visibility::Visible,
            navigation_availability: Availability::Disabled,
            contents_availability: Availability::Disabled,
            index_availability: Availability::Disabled,
            back_availability: Availability::Disabled,
            forward_availability: Availability::Disabled,
            selected_index: None,
            index_choices: Vec::new(),
            search_text: "Search...".to_owned(),
            search_initialization: InitializationState::Pending,
            focus: FocusState::OtherControl,
            close_disposition: None,
            last_error: None,
            width_fraction: 0.5,
            height_fraction: 2.0 / 3.0,
            screen_margin: 50,
        };
        window.create_form();
        window.show_form();
        window
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::Back => {
                self.navigate_back();
            }
            Message::Forward => {
                self.navigate_forward();
            }
            Message::Home => {
                self.navigate_home();
            }
            Message::ToggleNavigation => {
                self.show_or_hide_navigation(!self.navigation_visibility.is_visible());
            }
            Message::NavigationPageSelected(page) => self.navigation_page = page,
            Message::ContentsSelected(path) => {
                self.open_contents_topic(&path);
            }
            Message::IndexSelected(index) => {
                self.open_index_entry(index);
            }
            Message::IndexChoiceSelected(index) => {
                self.open_index_choice(index);
            }
            Message::SearchChanged(value) => self.search_text = value,
            Message::SearchFocused => self.initialize_search_edit(),
            Message::HotSpotSelected(target) => {
                self.follow_hot_spot(&target);
            }
            Message::Close => self.close_form(),
        }

        Task::none()
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let back = button(text("Back"))
            .on_press_maybe(self.back_availability.is_enabled().then_some(Message::Back));
        let forward = button(text("Forward")).on_press_maybe(
            self.forward_availability
                .is_enabled()
                .then_some(Message::Forward),
        );
        let home = button(text("Home")).on_press(Message::Home);
        let toggle_caption = if self.navigation_visibility.is_visible() {
            "Hide navigation"
        } else {
            "Show navigation"
        };
        let toggle = button(text(toggle_caption)).on_press_maybe(
            self.navigation_availability
                .is_enabled()
                .then_some(Message::ToggleNavigation),
        );
        let toolbar = row![back, forward, home, toggle].spacing(8);

        let document = scrollable(
            column![
                text(self.current_path.as_ref().map_or_else(
                    || "No topic loaded".to_owned(),
                    |path| path.display().to_string()
                ))
                .size(14),
                text(&self.displayed_document),
                self.last_error.as_ref().map_or_else(
                    || text(""),
                    |message| text(message).style(iced::widget::text::danger)
                ),
            ]
            .spacing(12),
        )
        .width(Length::Fill)
        .height(Length::Fill);

        let content: Element<'_, Message> = if self.navigation_visibility.is_visible()
            && self.navigation_availability.is_enabled()
        {
            row![self.navigation_view(), document]
                .spacing(12)
                .height(Length::Fill)
                .into()
        } else {
            document.into()
        };

        container(column![toolbar, content].spacing(12))
            .padding(16)
            .width(Length::Fill)
            .height(Length::Fill)
            .into()
    }

    fn navigation_view(&self) -> Element<'_, Message> {
        let tabs = row![
            button(text("Contents")).on_press_maybe(
                self.contents_availability
                    .is_enabled()
                    .then_some(Message::NavigationPageSelected(NavigationPage::Contents))
            ),
            button(text("Index")).on_press_maybe(
                self.index_availability
                    .is_enabled()
                    .then_some(Message::NavigationPageSelected(NavigationPage::Index))
            ),
            button(text("Search"))
                .on_press(Message::NavigationPageSelected(NavigationPage::Search)),
        ]
        .spacing(4);

        let page = match self.navigation_page {
            NavigationPage::Contents => self.contents_view(),
            NavigationPage::Index => self.index_view(),
            NavigationPage::Search => self.search_view(),
        };

        container(column![tabs, page].spacing(8))
            .width(Length::Fixed(280.0))
            .height(Length::Fill)
            .into()
    }

    fn contents_view(&self) -> Element<'_, Message> {
        let mut topics = column![].spacing(2);
        if let Some(package) = &self.package {
            let mut flattened = Vec::new();
            flatten_topics(&package.contents, &mut Vec::new(), 0, &mut flattened);
            for topic in flattened {
                let label = format!("{}{}", "  ".repeat(topic.depth), topic.name);
                topics = topics
                    .push(button(text(label)).on_press(Message::ContentsSelected(topic.path)));
            }
        }

        scrollable(topics).height(Length::Fill).into()
    }

    fn index_view(&self) -> Element<'_, Message> {
        let mut entries = column![].spacing(2);
        if let Some(package) = &self.package {
            for (index, entry) in package.index.iter().enumerate() {
                entries = entries.push(
                    button(text(&entry.keyword)).on_press_maybe(
                        self.index_availability
                            .is_enabled()
                            .then_some(Message::IndexSelected(index)),
                    ),
                );
            }
        }
        for choice in &self.index_choices {
            entries = entries.push(
                button(text(format!("Topic: {}", choice.name)))
                    .on_press(Message::IndexChoiceSelected(choice.match_index)),
            );
        }

        scrollable(entries).height(Length::Fill).into()
    }

    fn search_view(&self) -> Element<'_, Message> {
        mouse_area(
            text_input("Search...", &self.search_text)
                .on_input(Message::SearchChanged)
                .width(Length::Fill),
        )
        .on_press(Message::SearchFocused)
        .into()
    }

    /// Ports Ghidra function `FUN_00b00cc0` at `0x00B00CC0`.
    ///
    /// The database maps the original event to `TFormHelp.eSearchEnter`.
    /// The first focus clears the recovered `Search...` placeholder and marks
    /// the edit as initialized. Later focus events keep the entered text.
    pub fn initialize_search_edit(&mut self) {
        if self.search_initialization == InitializationState::Complete {
            return;
        }

        self.search_text.clear();
        self.search_initialization = InitializationState::Complete;
    }

    /// Ports Ghidra function `FUN_00b00d00` at `0x00B00D00`.
    ///
    /// The database maps the original event to `TFormHelp.FormClose`. It asks
    /// the modeless form to release itself and releases its help-data object.
    pub fn close_form(&mut self) {
        self.close_disposition = Some(CloseDisposition::Release);
        self.package = None;
    }

    /// Ports Ghidra function `FUN_00b00d40` at `0x00B00D40`.
    ///
    /// The database maps the original event to `TFormHelp.FormCreate`. Rust
    /// vectors replace the two Delphi string-list history objects.
    pub fn create_form(&mut self) {
        self.back_history = Vec::new();
        self.forward_history = Vec::new();
    }

    /// Ports Ghidra function `FUN_00b00d80` at `0x00B00D80`.
    ///
    /// The database maps the original event to `TFormHelp.FormDestroy`. It
    /// releases both in-memory history lists.
    pub fn destroy_form(&mut self) {
        self.back_history.clear();
        self.forward_history.clear();
    }

    /// Ports Ghidra function `FUN_00b00ef0` at `0x00B00EF0`.
    ///
    /// The database maps the original event to `TFormHelp.FormShow`. It sizes
    /// the form to one half by two thirds of the display with 50-pixel screen
    /// margins, exposes parsed Contents and Index data, then opens Home.
    pub fn show_form(&mut self) {
        self.width_fraction = 0.5;
        self.height_fraction = 2.0 / 3.0;
        self.screen_margin = 50;
        self.refresh_navigation_state();
        self.navigate_home();
    }

    /// Ports Ghidra function `FUN_00b01180` at `0x00B01180`.
    ///
    /// The database maps the original event to
    /// `TFormHelp.htmlMainHotSpotClick`. In-page anchors stay with the viewer.
    /// A valid relative local page clears Forward history and becomes the new
    /// current Back entry. An unknown location is cancelled and reported.
    pub fn follow_hot_spot(&mut self, target: &str) -> HotSpotDisposition {
        if target.starts_with('#') {
            return HotSpotDisposition::ViewerHandlesAnchor;
        }

        let Some(current_path) = self.current_path.clone() else {
            self.last_error = Some(format!("Unknown location: {target}"));
            return HotSpotDisposition::Cancelled;
        };
        let candidate = current_path
            .parent()
            .unwrap_or_else(|| Path::new(""))
            .join(target);
        let Some(resolved) = self.resolve_page_path(&candidate) else {
            self.last_error = Some(format!("Unknown location: {target}"));
            self.refresh_navigation_state();
            return HotSpotDisposition::Cancelled;
        };

        self.forward_history.clear();
        if let Err(error) = self.read_resolved_page(&resolved) {
            self.last_error = Some(error.to_string());
            self.refresh_navigation_state();
            return HotSpotDisposition::Cancelled;
        }
        self.back_history.push(resolved);
        self.refresh_navigation_state();
        HotSpotDisposition::ViewerFollowsFile
    }

    /// Ports Ghidra function `FUN_00b01320` at `0x00B01320`.
    ///
    /// It rechecks the selected Index row, maps the chosen popup item to that
    /// keyword's match, and loads the stored local topic with history enabled.
    pub fn open_index_choice(&mut self, match_index: usize) -> bool {
        let Some(selected_index) = self.selected_index else {
            return false;
        };
        let Some(path) = self
            .package
            .as_ref()
            .and_then(|package| package.index.get(selected_index))
            .and_then(|entry| entry.matches.get(match_index))
            .map(|entry| entry.local_path.clone())
        else {
            return false;
        };

        self.index_choices.clear();
        self.load_page(&path, true)
    }

    /// Ports Ghidra function `FUN_00b01390` at `0x00B01390`.
    ///
    /// The database maps the original function to `TFormHelp.lbIndexClick`.
    /// One match opens at once. Multiple matches become visible Iced choice
    /// buttons whose indexes preserve the original menu-item `Tag` values.
    pub fn open_index_entry(&mut self, selected_index: usize) -> bool {
        let Some(entry) = self
            .package
            .as_ref()
            .and_then(|package| package.index.get(selected_index))
            .cloned()
        else {
            return false;
        };

        self.selected_index = Some(selected_index);
        if entry.matches.len() == 1 {
            self.index_choices.clear();
            return self.load_page(&entry.matches[0].local_path, true);
        }

        self.index_choices = entry
            .matches
            .iter()
            .enumerate()
            .map(|(match_index, entry)| IndexChoice {
                name: entry.name.clone(),
                match_index,
            })
            .collect();
        false
    }

    /// Ports Ghidra function `FUN_00b01560` at `0x00B01560`.
    ///
    /// It resolves a direct or help-base-relative local page, loads it, and
    /// optionally appends a nonduplicate Back entry. Missing pages are silent.
    /// Navigation state and viewer focus are refreshed for every attempt.
    pub fn load_page(&mut self, path: &Path, add_history: bool) -> bool {
        let Some(resolved) = self.resolve_page_path(path) else {
            self.refresh_navigation_state();
            self.focus = FocusState::Viewer;
            return false;
        };

        if let Err(error) = self.read_resolved_page(&resolved) {
            self.last_error = Some(error.to_string());
            self.refresh_navigation_state();
            self.focus = FocusState::Viewer;
            return false;
        }

        if add_history && self.back_history.last() != Some(&resolved) {
            self.back_history.push(resolved);
        }
        self.refresh_navigation_state();
        self.focus = FocusState::Viewer;
        true
    }

    /// Ports Ghidra function `FUN_00b016f0` at `0x00B016F0`.
    ///
    /// The database maps the original function to `TFormHelp.sbBackClick`.
    /// The normal UI guard requires two Back entries before this adapter moves
    /// the current entry to Forward and reloads the preceding page.
    pub fn navigate_back(&mut self) -> bool {
        if self.back_history.len() <= 1 {
            return false;
        }

        let Some(current) = self.back_history.pop() else {
            return false;
        };
        self.forward_history.push(current);
        let Some(previous) = self.back_history.last().cloned() else {
            return false;
        };
        self.load_page(&previous, false)
    }

    /// Ports Ghidra function `FUN_00b017f0` at `0x00B017F0`.
    ///
    /// The database maps the original function to `TFormHelp.sbForwardClick`.
    /// It moves the Forward tail to the Back list, then reloads that page.
    pub fn navigate_forward(&mut self) -> bool {
        let Some(next) = self.forward_history.pop() else {
            return false;
        };

        self.back_history.push(next.clone());
        self.load_page(&next, false)
    }

    /// Ports Ghidra function `FUN_00b018f0` at `0x00B018F0`.
    ///
    /// The database maps the original function to `TFormHelp.sbHomeClick`. It
    /// clears Forward history and opens the package default topic with Back
    /// history insertion enabled.
    pub fn navigate_home(&mut self) -> bool {
        let Some(package) = self.package.as_ref() else {
            return false;
        };
        let home = build_default_topic_path(&package.base_directory, &package.default_topic);
        self.forward_history.clear();
        self.load_page(&home, true)
    }

    /// Ports Ghidra function `FUN_00b01980` at `0x00B01980`.
    ///
    /// The database maps the original function to
    /// `TFormHelp.sbShowHideIndexClick`. The supplied value is the Iced toggle
    /// state and controls the complete Contents, Index, and Search pane.
    pub const fn show_or_hide_navigation(&mut self, is_visible: bool) {
        if self.navigation_availability.is_enabled() {
            self.navigation_visibility = Visibility::from_bool(is_visible);
        }
    }

    /// Ports Ghidra function `FUN_00b01aa0` at `0x00B01AA0`.
    ///
    /// The database maps the original function to `TFormHelp.tvContentsClick`.
    /// It ignores group nodes and loads only a selected leaf's stored path.
    pub fn open_contents_topic(&mut self, tree_path: &[usize]) -> bool {
        let Some(topic) = self
            .package
            .as_ref()
            .and_then(|package| topic_at_path(&package.contents, tree_path))
        else {
            return false;
        };
        if !topic.children.is_empty() {
            return false;
        }
        let local_path = topic.local_path.clone();
        self.load_page(&local_path, true)
    }

    /// Ports Ghidra function `FUN_00b01b00` at `0x00B01B00`.
    ///
    /// It derives Back and Forward button state from history and reconciles
    /// Contents, Index, navigation-pane, and toggle availability with the
    /// loaded help package.
    pub fn refresh_navigation_state(&mut self) {
        let (has_contents, has_index) = self.package.as_ref().map_or((false, false), |package| {
            (!package.contents.is_empty(), !package.index.is_empty())
        });
        self.contents_availability = Availability::from_bool(has_contents);
        self.index_availability = Availability::from_bool(has_index);
        self.navigation_availability = Availability::from_bool(has_contents || has_index);
        if !self.navigation_availability.is_enabled() {
            self.navigation_visibility = Visibility::Hidden;
        }
        self.back_availability = Availability::from_bool(self.back_history.len() > 1);
        self.forward_availability = Availability::from_bool(!self.forward_history.is_empty());
    }

    fn resolve_page_path(&self, path: &Path) -> Option<PathBuf> {
        let package = self.package.as_ref()?;
        if package.contains_path(path) {
            return Some(normalize_page_path(path));
        }

        let combined = concatenate_paths(&package.base_directory, path);
        package
            .contains_path(&combined)
            .then(|| normalize_page_path(&combined))
    }

    fn read_resolved_page(&mut self, path: &Path) -> std::io::Result<()> {
        self.current_path = Some(normalize_page_path(path));
        let Some(package) = self.package.as_ref() else {
            return Err(std::io::Error::other("help package is not available"));
        };
        let document = package.read_page(path)?;
        self.displayed_document = document;
        self.last_error = None;
        Ok(())
    }

    #[must_use]
    pub fn current_path(&self) -> Option<&Path> {
        self.current_path.as_deref()
    }

    #[must_use]
    pub fn displayed_document(&self) -> &str {
        &self.displayed_document
    }

    #[must_use]
    pub fn back_history(&self) -> &[PathBuf] {
        &self.back_history
    }

    #[must_use]
    pub fn forward_history(&self) -> &[PathBuf] {
        &self.forward_history
    }

    #[must_use]
    pub const fn navigation_visible(&self) -> bool {
        self.navigation_visibility.is_visible()
    }

    #[must_use]
    pub const fn close_disposition(&self) -> Option<CloseDisposition> {
        self.close_disposition
    }
}

/// Ports Ghidra function `FUN_00b04450` at `0x00B04450`.
///
/// The helper concatenates the extracted help base directory and the default
/// topic exactly as stored. It does not add a path separator or validate the
/// result.
#[must_use]
pub fn build_default_topic_path(base_directory: &Path, default_topic: &str) -> PathBuf {
    concatenate_paths(base_directory, Path::new(default_topic))
}

fn concatenate_paths(left: &Path, right: &Path) -> PathBuf {
    let mut value = OsString::from(left.as_os_str());
    value.push(right.as_os_str());
    PathBuf::from(value)
}

fn normalize_page_path(path: &Path) -> PathBuf {
    PathBuf::from(path.to_string_lossy().replace('/', "\\"))
}

fn topic_at_path<'a>(topics: &'a [HelpTopic], path: &[usize]) -> Option<&'a HelpTopic> {
    let (first, rest) = path.split_first()?;
    let topic = topics.get(*first)?;
    if rest.is_empty() {
        return Some(topic);
    }
    topic_at_path(&topic.children, rest)
}

struct FlatTopic {
    name: String,
    path: Vec<usize>,
    depth: usize,
}

fn flatten_topics(
    topics: &[HelpTopic],
    parent_path: &mut Vec<usize>,
    depth: usize,
    output: &mut Vec<FlatTopic>,
) {
    for (index, topic) in topics.iter().enumerate() {
        parent_path.push(index);
        output.push(FlatTopic {
            name: topic.name.clone(),
            path: parent_path.clone(),
            depth,
        });
        flatten_topics(&topic.children, parent_path, depth + 1, output);
        parent_path.pop();
    }
}

#[cfg(test)]
mod tests {
    use super::{
        CloseDisposition, HelpIndexEntry, HelpIndexMatch, HelpPackage, HelpTopic,
        HotSpotDisposition, Window, build_default_topic_path,
    };
    use std::collections::BTreeMap;
    use std::path::{Path, PathBuf};

    fn package() -> HelpPackage {
        HelpPackage {
            base_directory: PathBuf::from("help\\"),
            default_topic: "home.html".to_owned(),
            contents: vec![HelpTopic::group(
                "Guide",
                vec![HelpTopic::leaf("Start", "start.html")],
            )],
            index: vec![
                HelpIndexEntry {
                    keyword: "home".to_owned(),
                    matches: vec![HelpIndexMatch {
                        name: "Home".to_owned(),
                        local_path: PathBuf::from("home.html"),
                    }],
                },
                HelpIndexEntry {
                    keyword: "topic".to_owned(),
                    matches: vec![
                        HelpIndexMatch {
                            name: "Start".to_owned(),
                            local_path: PathBuf::from("start.html"),
                        },
                        HelpIndexMatch {
                            name: "Other".to_owned(),
                            local_path: PathBuf::from("other.html"),
                        },
                    ],
                },
            ],
            pages: BTreeMap::from([
                (PathBuf::from("help\\home.html"), "Home".to_owned()),
                (PathBuf::from("help\\start.html"), "Start".to_owned()),
                (PathBuf::from("help\\other.html"), "Other".to_owned()),
            ]),
        }
    }

    #[test]
    fn first_search_focus_clears_only_the_placeholder() {
        let mut window = Window::new(package());

        window.initialize_search_edit();
        assert_eq!(window.search_text, "");
        window.search_text = "resistor".to_owned();
        window.initialize_search_edit();

        assert_eq!(window.search_text, "resistor");
    }

    #[test]
    fn show_opens_home_and_sets_navigation_state() {
        let window = Window::new(package());

        assert_eq!(window.current_path(), Some(Path::new("help\\home.html")));
        assert_eq!(window.displayed_document(), "Home");
        assert!(window.navigation_visible());
        assert_eq!(window.back_history().len(), 1);
        assert!(!window.back_availability.is_enabled());
    }

    #[test]
    fn contents_groups_are_no_ops_and_leaves_open_topics() {
        let mut window = Window::new(package());

        assert!(!window.open_contents_topic(&[0]));
        assert!(window.open_contents_topic(&[0, 0]));

        assert_eq!(window.displayed_document(), "Start");
        assert_eq!(window.back_history().len(), 2);
    }

    #[test]
    fn index_with_one_match_opens_and_multiple_matches_stage_choices() {
        let mut window = Window::new(package());

        assert!(window.open_index_entry(0));
        assert!(!window.open_index_entry(1));
        assert_eq!(window.index_choices.len(), 2);
        assert!(window.open_index_choice(1));

        assert_eq!(window.displayed_document(), "Other");
        assert!(window.index_choices.is_empty());
    }

    #[test]
    fn back_and_forward_move_between_local_history_stacks() {
        let mut window = Window::new(package());
        assert!(window.open_contents_topic(&[0, 0]));

        assert!(window.navigate_back());
        assert_eq!(window.displayed_document(), "Home");
        assert_eq!(
            window.forward_history(),
            &[PathBuf::from("help\\start.html")]
        );
        assert!(window.navigate_forward());
        assert_eq!(window.displayed_document(), "Start");
        assert!(window.forward_history().is_empty());
    }

    #[test]
    fn home_clears_forward_without_duplicating_the_back_tail() {
        let mut window = Window::new(package());
        assert!(window.open_contents_topic(&[0, 0]));
        assert!(window.navigate_back());

        assert!(window.navigate_home());

        assert!(window.forward_history().is_empty());
        assert_eq!(window.back_history(), &[PathBuf::from("help\\home.html")]);
    }

    #[test]
    fn hot_spot_anchors_stay_with_viewer_and_local_files_update_history() {
        let mut window = Window::new(package());

        assert_eq!(
            window.follow_hot_spot("#details"),
            HotSpotDisposition::ViewerHandlesAnchor
        );
        assert_eq!(
            window.follow_hot_spot("start.html"),
            HotSpotDisposition::ViewerFollowsFile
        );
        assert_eq!(window.displayed_document(), "Start");
        assert_eq!(
            window.follow_hot_spot("missing.html"),
            HotSpotDisposition::Cancelled
        );
    }

    #[test]
    fn navigation_toggle_preserves_the_active_page() {
        let mut window = Window::new(package());
        assert!(window.open_contents_topic(&[0, 0]));

        window.show_or_hide_navigation(false);

        assert!(!window.navigation_visible());
        assert_eq!(window.displayed_document(), "Start");
    }

    #[test]
    fn close_releases_package_and_destroy_clears_history() {
        let mut window = Window::new(package());
        assert!(window.open_contents_topic(&[0, 0]));

        window.close_form();
        window.destroy_form();

        assert_eq!(window.close_disposition(), Some(CloseDisposition::Release));
        assert!(window.back_history().is_empty());
        assert!(window.forward_history().is_empty());
    }

    #[test]
    fn default_topic_builder_does_not_add_a_separator() {
        assert_eq!(
            build_default_topic_path(Path::new("help\\"), "home.html"),
            PathBuf::from("help\\home.html")
        );
        assert_eq!(
            build_default_topic_path(Path::new("help"), "home.html"),
            PathBuf::from("helphome.html")
        );
    }
}
