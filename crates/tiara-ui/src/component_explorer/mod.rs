use std::cmp::Ordering;

use iced::{Point, Rectangle, Task};

const VIEWPORT_MARGIN: f32 = 50.0;
const TREE_HIT_ON_BUTTON: u16 = 0x10;
const TREE_COLOR_NORMAL: u32 = 0xff00_0005;
const TREE_COLOR_SEARCH_SELECTION: u32 = 0x0000_8000;
const SEARCH_COLOR_ACTIVE: u32 = 0xff00_0008;
const SEARCH_COLOR_INACTIVE: u32 = 0xff00_0010;
const SEARCH_PLACEHOLDER: &str = "<Search>";

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct TreeNodeId(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct PageId(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct CircuitObjectId(pub u64);

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct CircuitObject {
    pub id: CircuitObjectId,
    pub selection_identity: u64,
    pub owning_page: PageId,
    pub bounds: Rectangle,
}

impl CircuitObject {
    /// Returns the owning schematic page stored by a circuit object.
    ///
    /// This is the typed Rust mapping for Ghidra function `0x017FF620`,
    /// symbol `FUN_017ff620`. Rust field access replaces the recovered pointer
    /// load from object offset `+0x68`.
    #[must_use]
    pub const fn owning_page(&self) -> PageId {
        self.owning_page
    }
}

/// Supplies the recovered identity and selection operations of a schematic
/// object.
pub trait SchematicSelectionObject {
    type Identity: Clone + Eq;

    fn selection_identity(&self) -> Option<Self::Identity>;

    fn is_selected(&self) -> bool;

    fn select(&mut self, selection_mode: u8);

    fn clear_selection(&mut self);
}

/// Applies one selection state to a target and collection objects with the
/// same recovered identity.
///
/// This ports Ghidra function `0x01993F30`, symbol `FUN_01993f30`. The target
/// always receives the requested operation. Identity propagation occurs only
/// when the target supplies an identity. The recovered selection-mode byte is
/// forwarded only for selection, as in the original virtual calls.
pub fn apply_selection_state<T: SchematicSelectionObject>(
    collection: &mut [T],
    target: &mut T,
    selected: bool,
    selection_mode: u8,
) {
    let identity = target.selection_identity();
    set_selection_state(target, selected, selection_mode);

    let Some(identity) = identity else {
        return;
    };
    for object in collection {
        if object.selection_identity().as_ref() == Some(&identity) {
            set_selection_state(object, selected, selection_mode);
        }
    }
}

/// Clears every selected object in a schematic selection collection.
///
/// This ports Ghidra function `0x01994230`, symbol `FUN_01994230`, and its
/// per-object selected-state guard in `FUN_01994100`. Empty collections and
/// objects that are already clear cause no update.
pub fn clear_schematic_selection<T: SchematicSelectionObject>(collection: &mut [T]) {
    for object in collection {
        if object.is_selected() {
            object.clear_selection();
        }
    }
}

fn set_selection_state<T: SchematicSelectionObject>(
    object: &mut T,
    selected: bool,
    selection_mode: u8,
) {
    if selected {
        object.select(selection_mode);
    } else {
        object.clear_selection();
    }
}

/// Supplies the main editor callback that owns the active selection
/// collection.
pub trait ActiveSelectionProvider {
    type Collection;

    fn active_selection_collection(&mut self) -> Option<&mut Self::Collection>;
}

/// Gets the active schematic selection collection when the main editor exists.
///
/// This ports Ghidra function `0x019A45D0`, symbol `FUN_019a45d0`. `None`
/// represents either an absent main editor or a callback that has no active
/// collection.
pub fn active_schematic_selection<P: ActiveSelectionProvider>(
    editor: Option<&mut P>,
) -> Option<&mut P::Collection> {
    editor.and_then(ActiveSelectionProvider::active_selection_collection)
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct SecondaryContextId(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct OpenPageRecord {
    pub owning_page: PageId,
    pub secondary_context: Option<SecondaryContextId>,
    pub tab_index: usize,
}

/// Finds the last matching open-page record.
///
/// This ports Ghidra function `0x01C8A290`, symbol `FUN_01c8a290`. A missing
/// secondary context is a wildcard. The reverse-position search preserves the
/// recovered last-match result when duplicate records exist.
#[must_use]
pub fn find_open_page_index(
    records: &[OpenPageRecord],
    owning_page: PageId,
    secondary_context: Option<SecondaryContextId>,
) -> Option<usize> {
    records.iter().rposition(|record| {
        record.owning_page == owning_page
            && secondary_context.is_none_or(|context| record.secondary_context == Some(context))
    })
}

/// Adapter for the editor-specific branches of schematic page activation.
///
/// Record creation owns the recovered lock, encrypted-macro, and modified-
/// macro decisions. The remaining callbacks preserve the observable switch,
/// active-record, tab-selection, and dependent-window refresh sequence without
/// inventing unrecovered Delphi record types.
pub trait SchematicPageActivation {
    type Error;

    fn current_secondary_context(&self) -> Option<SecondaryContextId>;

    /// Creates an open-page record for a page that is not open yet.
    ///
    /// `Ok(None)` represents a cancelled or unavailable page, including the
    /// recovered locked or encrypted branches that do not create a record.
    ///
    /// # Errors
    ///
    /// Returns an editor-specific creation or policy error.
    fn create_page_record(
        &mut self,
        owning_page: PageId,
        secondary_context: Option<SecondaryContextId>,
    ) -> Result<Option<OpenPageRecord>, Self::Error>;

    fn store_current_context(&mut self);

    fn set_active_record(&mut self, record: OpenPageRecord);

    fn select_schematic_tab(&mut self, tab_index: usize);

    fn refresh_dependent_editors(&mut self, record: OpenPageRecord);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ActivationSource {
    Existing,
    Created,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ActivationOutcome {
    ReentrantNoOp,
    Unavailable,
    Activated {
        record_index: usize,
        source: ActivationSource,
    },
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct PageActivationState {
    open_pages: Vec<OpenPageRecord>,
    active_record_index: Option<usize>,
    activation_in_progress: bool,
}

impl PageActivationState {
    #[must_use]
    pub const fn new(open_pages: Vec<OpenPageRecord>) -> Self {
        Self {
            open_pages,
            active_record_index: None,
            activation_in_progress: false,
        }
    }

    /// Opens or activates a schematic editor context for an owning page.
    ///
    /// This is the Component Explorer adapter for Ghidra function
    /// `0x01C8AB30`, symbol `FUN_01c8ab30`. Re-entry is a no-op. A missing
    /// explicit context uses the active editor context. The function reuses the
    /// last matching record or delegates record creation, stores the outgoing
    /// context, applies the active record, selects its tab, refreshes dependent
    /// editors, and clears the guard on every result.
    ///
    /// # Errors
    ///
    /// Returns the editor-specific page-record creation error after clearing
    /// the re-entry guard.
    pub fn activate_page<A: SchematicPageActivation>(
        &mut self,
        adapter: &mut A,
        owning_page: PageId,
        requested_context: Option<SecondaryContextId>,
    ) -> Result<ActivationOutcome, A::Error> {
        if self.activation_in_progress {
            return Ok(ActivationOutcome::ReentrantNoOp);
        }

        self.activation_in_progress = true;
        let result = self.activate_page_inner(adapter, owning_page, requested_context);
        self.activation_in_progress = false;
        result
    }

    #[must_use]
    pub fn open_pages(&self) -> &[OpenPageRecord] {
        &self.open_pages
    }

    #[must_use]
    pub const fn active_record_index(&self) -> Option<usize> {
        self.active_record_index
    }

    #[must_use]
    pub const fn activation_in_progress(&self) -> bool {
        self.activation_in_progress
    }

    fn activate_page_inner<A: SchematicPageActivation>(
        &mut self,
        adapter: &mut A,
        owning_page: PageId,
        requested_context: Option<SecondaryContextId>,
    ) -> Result<ActivationOutcome, A::Error> {
        let secondary_context = requested_context.or_else(|| adapter.current_secondary_context());
        let (record_index, source) = if let Some(index) =
            find_open_page_index(&self.open_pages, owning_page, secondary_context)
        {
            (index, ActivationSource::Existing)
        } else {
            let Some(record) = adapter.create_page_record(owning_page, secondary_context)? else {
                return Ok(ActivationOutcome::Unavailable);
            };
            self.open_pages.push(record);
            (self.open_pages.len() - 1, ActivationSource::Created)
        };

        let record = self.open_pages[record_index];
        adapter.store_current_context();
        adapter.set_active_record(record);
        self.active_record_index = Some(record_index);
        adapter.select_schematic_tab(record.tab_index);
        adapter.refresh_dependent_editors(record);

        Ok(ActivationOutcome::Activated {
            record_index,
            source,
        })
    }
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct TreeNode {
    pub id: TreeNodeId,
    pub parent: Option<TreeNodeId>,
    pub circuit_object: Option<CircuitObject>,
}

impl TreeNode {
    #[must_use]
    pub const fn root(id: TreeNodeId) -> Self {
        Self {
            id,
            parent: None,
            circuit_object: None,
        }
    }

    #[must_use]
    pub const fn child(
        id: TreeNodeId,
        parent: TreeNodeId,
        circuit_object: Option<CircuitObject>,
    ) -> Self {
        Self {
            id,
            parent: Some(parent),
            circuit_object,
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SearchKey {
    F3,
    Other,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum SearchTextTone {
    #[default]
    Inherited,
    Active,
    Inactive,
}

impl SearchTextTone {
    #[must_use]
    pub const fn recovered_color(self) -> Option<u32> {
        match self {
            Self::Inherited => None,
            Self::Active => Some(SEARCH_COLOR_ACTIVE),
            Self::Inactive => Some(SEARCH_COLOR_INACTIVE),
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SearchRequest {
    pub query: String,
    pub start_index: usize,
}

#[derive(Debug, Clone, PartialEq)]
pub enum Message {
    TreeSelectionChanged(Option<TreeNode>),
    CircuitTreeClicked,
    SearchChanged(String),
    SearchEntered,
    SearchExited,
    SearchKeyDown(SearchKey),
}

/// Narrow integration boundary from the Component Explorer to the active
/// Schematic Editor document.
pub trait SchematicNavigation {
    fn clear_active_selection(&mut self);

    fn open_page_index(&self, page: PageId) -> Option<usize>;

    fn active_page_index(&self) -> Option<usize>;

    fn activate_page(&mut self, page: PageId);

    fn has_active_selection_collection(&self) -> bool;

    fn select_target_and_identity_matches(&mut self, target: CircuitObject);

    fn visible_rectangle(&self) -> Rectangle;

    fn pan_to_reveal(&mut self, target: CircuitObject, margin: f32);
}

/// Supplies the category of the payload attached to a tree node's parent.
pub trait DockRefreshNode {
    fn parent_payload_category(&self) -> Option<u16>;
}

/// Supplies the recovered fields used to order two Component Explorer rows.
pub trait ComparableTreeNode {
    fn payload_category(&self) -> Option<u16>;

    fn label(&self) -> &str;
}

/// Clears the host's singleton reference when the explorer is destroyed.
pub trait ComponentExplorerRegistry {
    fn clear_component_explorer(&mut self);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CloseDisposition {
    Free,
}

impl CloseDisposition {
    #[must_use]
    pub const fn recovered_code(self) -> u8 {
        match self {
            Self::Free => 2,
        }
    }
}

#[derive(Debug)]
pub struct Window {
    selected_node: Option<TreeNode>,
    docking_active: bool,
    search_focus_active: bool,
    search_text: String,
    search_text_tone: SearchTextTone,
    next_search_index: usize,
    pending_search: Option<SearchRequest>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            selected_node: None,
            docking_active: false,
            search_focus_active: false,
            search_text: SEARCH_PLACEHOLDER.to_owned(),
            search_text_tone: SearchTextTone::Inherited,
            next_search_index: 0,
            pending_search: None,
        }
    }
}

impl Window {
    pub fn update(
        &mut self,
        message: Message,
        schematic: &mut impl SchematicNavigation,
    ) -> Task<Message> {
        match message {
            Message::TreeSelectionChanged(node) => self.selected_node = node,
            Message::CircuitTreeClicked => self.synchronize_tree_selection(schematic),
            Message::SearchChanged(value) => self.on_search_changed(value),
            Message::SearchEntered => self.on_search_enter(),
            Message::SearchExited => self.on_search_exit(),
            Message::SearchKeyDown(key) => self.on_search_key_down(key),
        }

        Task::none()
    }

    /// Synchronizes a Component Explorer click with the active schematic.
    ///
    /// This is an original Rust implementation traced to Ghidra function
    /// `0x013AB400`, symbol `FUN_013ab400`. A root, missing node, or child
    /// without a circuit object clears the current selection. A valid object
    /// activates its owning page when needed, replaces the active selection,
    /// and requests a pan with a 50-unit margin only when the object is outside
    /// the visible rectangle.
    pub fn synchronize_tree_selection(&self, schematic: &mut impl SchematicNavigation) {
        let Some(node) = self.selected_node else {
            schematic.clear_active_selection();
            return;
        };

        if node.parent.is_none() {
            schematic.clear_active_selection();
            return;
        }

        let Some(target) = node.circuit_object else {
            schematic.clear_active_selection();
            return;
        };

        if schematic.open_page_index(target.owning_page()) != schematic.active_page_index() {
            schematic.activate_page(target.owning_page());
        }

        if !schematic.has_active_selection_collection() {
            return;
        }

        schematic.clear_active_selection();
        schematic.select_target_and_identity_matches(target);

        if !rectangle_contains(schematic.visible_rectangle(), target.bounds) {
            schematic.pan_to_reveal(target, VIEWPORT_MARGIN);
        }
    }

    /// Maps `frmComponentExplorer.OnClose` to the recovered free-on-close
    /// result (Ghidra `0x013AB310`, symbol `FUN_013ab310`).
    #[must_use]
    pub const fn close_disposition(&self) -> CloseDisposition {
        CloseDisposition::Free
    }

    /// Clears the singleton form reference for `frmComponentExplorer.OnDestroy`
    /// (Ghidra `0x013AB320`, symbol `FUN_013ab320`).
    pub fn on_destroy(registry: &mut impl ComponentExplorerRegistry) {
        registry.clear_component_explorer();
    }

    /// Translates `frmComponentExplorer.OnStartDock` (Ghidra `0x013AB330`,
    /// symbol `FUN_013ab330`) and marks the recovered docking flag as active.
    pub const fn on_start_dock(&mut self) {
        self.docking_active = true;
    }

    #[must_use]
    pub const fn is_docking_active(&self) -> bool {
        self.docking_active
    }

    /// Supplies the search-focus state used by the recovered draw and expansion
    /// handlers. The corresponding focus callbacks are separate porting tasks.
    pub const fn set_search_focus_active(&mut self, active: bool) {
        self.search_focus_active = active;
    }

    /// Queues a circuit-tree search after an iced text-input edit.
    ///
    /// This ports `edSearch.OnChange`, Ghidra function `0x013AB7C0`, symbol
    /// `FUN_013ab7c0`. The recovered handler calls `FUN_013ac520` only when the
    /// edit reports user modification. Iced emits [`Message::SearchChanged`]
    /// for user input, while [`Self::set_search_text_programmatically`] changes
    /// display state without queuing a request. A changed query always starts
    /// the shared search helper at index zero.
    pub fn on_search_changed(&mut self, value: String) {
        self.search_text = value;
        self.pending_search = Some(SearchRequest {
            query: self.search_text.clone(),
            start_index: 0,
        });
    }

    /// Applies the search edit's focused state and active text color.
    ///
    /// This ports `edSearch.OnEnter`, Ghidra function `0x013AB840`, symbol
    /// `FUN_013ab840`.
    pub const fn on_search_enter(&mut self) {
        self.search_focus_active = true;
        self.search_text_tone = SearchTextTone::Active;
    }

    /// Applies the search edit's unfocused state and inactive text color.
    ///
    /// This ports `edSearch.OnExit`, Ghidra function `0x013AB870`, symbol
    /// `FUN_013ab870`.
    pub const fn on_search_exit(&mut self) {
        self.search_text_tone = SearchTextTone::Inactive;
        self.search_focus_active = false;
    }

    /// Queues the next circuit-tree search only for F3.
    ///
    /// This ports `edSearch.OnKeyDown`, Ghidra function `0x013AB8A0`, symbol
    /// `FUN_013ab8a0`. Other keys are no-ops. F3 passes the next index stored
    /// after the prior shared-search result.
    pub fn on_search_key_down(&mut self, key: SearchKey) {
        if key == SearchKey::F3 {
            self.pending_search = Some(SearchRequest {
                query: self.search_text.clone(),
                start_index: self.next_search_index,
            });
        }
    }

    /// Changes the edit text without representing a user modification.
    pub fn set_search_text_programmatically(&mut self, value: String) {
        self.search_text = value;
    }

    /// Stores the next index produced by the separate shared-search helper.
    pub const fn record_search_match(&mut self, selected_index: usize) {
        self.next_search_index = selected_index + 1;
    }

    #[must_use]
    pub fn search_text(&self) -> &str {
        &self.search_text
    }

    #[must_use]
    pub const fn search_text_tone(&self) -> SearchTextTone {
        self.search_text_tone
    }

    #[must_use]
    pub const fn next_search_index(&self) -> usize {
        self.next_search_index
    }

    pub const fn take_search_request(&mut self) -> Option<SearchRequest> {
        self.pending_search.take()
    }

    /// Translates `frmComponentExplorer.OnEndDock` (Ghidra `0x013AB340`,
    /// symbol `FUN_013ab340`). Refreshes each row whose parent payload has
    /// category `0x39`, then clears the docking flag.
    pub fn on_end_dock<T: DockRefreshNode>(&mut self, nodes: &[T], mut refresh_39: impl FnMut(&T)) {
        for node in nodes {
            if node.parent_payload_category() == Some(0x39) {
                refresh_39(node);
            }
        }

        self.docking_active = false;
    }

    /// Allows `frmComponentExplorer.pnlHome.tvCircuit.OnCollapsing` when a dock
    /// interaction is active or the cursor is on the tree expansion button
    /// (Ghidra `0x013AB500`, symbol `FUN_013ab500`).
    #[must_use]
    pub const fn can_collapse(&self, hit_test: u16) -> bool {
        self.docking_active || hit_test == TREE_HIT_ON_BUTTON
    }

    /// Allows `frmComponentExplorer.pnlHome.tvCircuit.OnExpanding` when docking,
    /// search focus, or an expansion-button hit is active (Ghidra `0x013AB740`,
    /// symbol `FUN_013ab740`).
    #[must_use]
    pub const fn can_expand(&self, hit_test: u16) -> bool {
        self.docking_active || self.search_focus_active || hit_test == TREE_HIT_ON_BUTTON
    }

    /// Translates `frmComponentExplorer.OnDblClick` (Ghidra `0x013AB6E0`,
    /// symbol `FUN_013ab6e0`). An available payload must pass the recovered
    /// eligibility check before the Schematic Editor properties command runs.
    pub fn on_dbl_click<T>(
        &self,
        selected_payload: Option<&T>,
        is_eligible: impl FnOnce(&T) -> bool,
        edit_properties: impl FnOnce(),
    ) -> bool {
        let Some(payload) = selected_payload else {
            return false;
        };

        if !is_eligible(payload) {
            return false;
        }

        edit_properties();
        true
    }

    /// Returns the recovered brush color for
    /// `frmComponentExplorer.pnlHome.tvCircuit.OnCustomDrawItem` while search
    /// focus is active (Ghidra `0x013AB670`, symbol `FUN_013ab670`).
    #[must_use]
    pub const fn custom_draw_color(&self, selected: bool) -> Option<u32> {
        if self.search_focus_active {
            if selected {
                Some(TREE_COLOR_SEARCH_SELECTION)
            } else {
                Some(TREE_COLOR_NORMAL)
            }
        } else {
            None
        }
    }

    /// Translates `frmComponentExplorer` comparator helper at
    /// `0x013AB570` (`FUN_013ab570`): category `0x39` entries precede other
    /// payloads. Rows with missing or excluded payloads compare equal. All
    /// remaining rows use the host's locale-aware label comparison.
    pub fn compare_circuit_node<T: ComparableTreeNode>(
        &self,
        left: Option<&T>,
        right: Option<&T>,
        compare_labels: impl FnOnce(&str, &str) -> Ordering,
    ) -> Ordering {
        let (Some(left), Some(right)) = (left, right) else {
            return Ordering::Equal;
        };

        let (Some(left_category), Some(right_category)) =
            (left.payload_category(), right.payload_category())
        else {
            return Ordering::Equal;
        };

        if left_category == 0x39 && right_category != 0x39 {
            return Ordering::Less;
        }

        if left_category != 0x39 && right_category == 0x39 {
            return Ordering::Greater;
        }

        compare_labels(left.label(), right.label())
    }
}

fn rectangle_contains(outer: Rectangle, inner: Rectangle) -> bool {
    let bottom_right = Point::new(inner.x + inner.width, inner.y + inner.height);
    outer.contains(inner.position()) && outer.contains(bottom_right)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Clone, Copy, PartialEq)]
    enum NavigationCall {
        ClearSelection,
        ActivatePage(PageId),
        SelectTarget(CircuitObjectId, u64),
        PanToReveal(CircuitObjectId, f32),
    }

    struct NavigationRecorder {
        open_page_index: Option<usize>,
        active_page_index: Option<usize>,
        has_active_selection_collection: bool,
        visible_rectangle: Rectangle,
        calls: Vec<NavigationCall>,
    }

    impl Default for NavigationRecorder {
        fn default() -> Self {
            Self {
                open_page_index: Some(0),
                active_page_index: Some(0),
                has_active_selection_collection: true,
                visible_rectangle: Rectangle::new(Point::ORIGIN, iced::Size::new(100.0, 100.0)),
                calls: Vec::new(),
            }
        }
    }

    impl SchematicNavigation for NavigationRecorder {
        fn clear_active_selection(&mut self) {
            self.calls.push(NavigationCall::ClearSelection);
        }

        fn open_page_index(&self, _page: PageId) -> Option<usize> {
            self.open_page_index
        }

        fn active_page_index(&self) -> Option<usize> {
            self.active_page_index
        }

        fn activate_page(&mut self, page: PageId) {
            self.calls.push(NavigationCall::ActivatePage(page));
        }

        fn has_active_selection_collection(&self) -> bool {
            self.has_active_selection_collection
        }

        fn select_target_and_identity_matches(&mut self, target: CircuitObject) {
            self.calls.push(NavigationCall::SelectTarget(
                target.id,
                target.selection_identity,
            ));
        }

        fn visible_rectangle(&self) -> Rectangle {
            self.visible_rectangle
        }

        fn pan_to_reveal(&mut self, target: CircuitObject, margin: f32) {
            self.calls
                .push(NavigationCall::PanToReveal(target.id, margin));
        }
    }

    fn target(bounds: Rectangle) -> CircuitObject {
        CircuitObject {
            id: CircuitObjectId(7),
            selection_identity: 23,
            owning_page: PageId(3),
            bounds,
        }
    }

    fn selected_child(target: Option<CircuitObject>) -> TreeNode {
        TreeNode::child(TreeNodeId(2), TreeNodeId(1), target)
    }

    #[test]
    fn click_without_a_node_clears_the_active_selection() {
        let mut window = Window::default();
        let mut schematic = NavigationRecorder::default();

        let _task = window.update(Message::CircuitTreeClicked, &mut schematic);

        assert_eq!(schematic.calls, vec![NavigationCall::ClearSelection]);
    }

    #[test]
    fn root_and_child_without_an_object_clear_the_active_selection() {
        let mut window = Window::default();
        let mut schematic = NavigationRecorder::default();
        let _task = window.update(
            Message::TreeSelectionChanged(Some(TreeNode::root(TreeNodeId(1)))),
            &mut schematic,
        );
        let _task = window.update(Message::CircuitTreeClicked, &mut schematic);
        let _task = window.update(
            Message::TreeSelectionChanged(Some(selected_child(None))),
            &mut schematic,
        );
        let _task = window.update(Message::CircuitTreeClicked, &mut schematic);

        assert_eq!(
            schematic.calls,
            vec![
                NavigationCall::ClearSelection,
                NavigationCall::ClearSelection
            ]
        );
    }

    #[test]
    fn target_on_the_active_page_replaces_selection_without_panning_when_visible() {
        let visible_target = target(Rectangle::new(
            Point::new(20.0, 30.0),
            iced::Size::new(10.0, 15.0),
        ));
        let mut window = Window::default();
        let mut schematic = NavigationRecorder::default();
        let _task = window.update(
            Message::TreeSelectionChanged(Some(selected_child(Some(visible_target)))),
            &mut schematic,
        );

        let _task = window.update(Message::CircuitTreeClicked, &mut schematic);

        assert_eq!(
            schematic.calls,
            vec![
                NavigationCall::ClearSelection,
                NavigationCall::SelectTarget(CircuitObjectId(7), 23)
            ]
        );
    }

    #[test]
    fn target_on_another_page_activates_selects_and_pans_when_outside_viewport() {
        let hidden_target = target(Rectangle::new(
            Point::new(120.0, 40.0),
            iced::Size::new(10.0, 10.0),
        ));
        let mut window = Window::default();
        let mut schematic = NavigationRecorder {
            open_page_index: Some(2),
            active_page_index: Some(0),
            ..NavigationRecorder::default()
        };
        let _task = window.update(
            Message::TreeSelectionChanged(Some(selected_child(Some(hidden_target)))),
            &mut schematic,
        );

        let _task = window.update(Message::CircuitTreeClicked, &mut schematic);

        assert_eq!(
            schematic.calls,
            vec![
                NavigationCall::ActivatePage(PageId(3)),
                NavigationCall::ClearSelection,
                NavigationCall::SelectTarget(CircuitObjectId(7), 23),
                NavigationCall::PanToReveal(CircuitObjectId(7), 50.0)
            ]
        );
    }

    #[test]
    fn missing_active_selection_stops_after_page_activation_without_message() {
        let mut window = Window::default();
        let mut schematic = NavigationRecorder {
            open_page_index: Some(2),
            active_page_index: Some(0),
            has_active_selection_collection: false,
            ..NavigationRecorder::default()
        };
        let _task = window.update(
            Message::TreeSelectionChanged(Some(selected_child(Some(target(Rectangle::new(
                Point::new(120.0, 40.0),
                iced::Size::new(10.0, 10.0),
            )))))),
            &mut schematic,
        );

        let _task = window.update(Message::CircuitTreeClicked, &mut schematic);

        assert_eq!(
            schematic.calls,
            vec![NavigationCall::ActivatePage(PageId(3))]
        );
    }

    #[test]
    fn close_disposition_frees_the_form() {
        let window = Window::default();

        let disposition = window.close_disposition();

        assert_eq!(disposition, CloseDisposition::Free);
        assert_eq!(disposition.recovered_code(), 2);
    }

    #[derive(Default)]
    struct RegistryRecorder {
        clear_count: usize,
    }

    impl ComponentExplorerRegistry for RegistryRecorder {
        fn clear_component_explorer(&mut self) {
            self.clear_count += 1;
        }
    }

    #[test]
    fn destroy_clears_the_singleton_form_reference() {
        let mut registry = RegistryRecorder::default();

        Window::on_destroy(&mut registry);

        assert_eq!(registry.clear_count, 1);
    }

    #[derive(Debug, Clone, Copy)]
    struct RefreshNode {
        id: u8,
        parent_category: Option<u16>,
    }

    impl DockRefreshNode for RefreshNode {
        fn parent_payload_category(&self) -> Option<u16> {
            self.parent_category
        }
    }

    #[test]
    fn docking_start_marks_and_end_refreshes_rows_with_category_39_parents() {
        let mut window = Window::default();
        let mut refreshed = Vec::<u8>::new();
        let nodes = [
            RefreshNode {
                id: 1,
                parent_category: None,
            },
            RefreshNode {
                id: 2,
                parent_category: Some(0x39),
            },
            RefreshNode {
                id: 3,
                parent_category: Some(0x10),
            },
            RefreshNode {
                id: 4,
                parent_category: Some(0x39),
            },
        ];

        window.on_start_dock();
        assert!(window.is_docking_active());

        window.on_end_dock(&nodes, |node| refreshed.push(node.id));

        assert_eq!(refreshed, vec![2, 4]);
        assert!(!window.is_docking_active());
    }

    #[test]
    fn collapse_requires_docking_or_an_expansion_button_hit() {
        let mut window = Window::default();
        assert!(!window.can_collapse(0x20));
        assert!(window.can_collapse(TREE_HIT_ON_BUTTON));

        window.on_start_dock();
        assert!(window.can_collapse(0x20));
    }

    #[test]
    fn expand_accepts_docking_search_focus_or_an_expansion_button_hit() {
        let mut window = Window::default();
        assert!(!window.can_expand(0x20));
        assert!(window.can_expand(TREE_HIT_ON_BUTTON));

        window.on_start_dock();
        assert!(window.can_expand(0x20));

        let mut window = Window::default();
        window.set_search_focus_active(true);
        assert!(window.can_expand(0x20));
    }

    #[test]
    fn user_search_change_queues_a_search_from_the_first_tree_row() {
        let mut window = Window::default();
        let mut schematic = NavigationRecorder::default();
        assert_eq!(window.search_text(), SEARCH_PLACEHOLDER);

        let _task = window.update(
            Message::SearchChanged("resistor".to_owned()),
            &mut schematic,
        );

        assert_eq!(window.search_text(), "resistor");
        assert_eq!(
            window.take_search_request(),
            Some(SearchRequest {
                query: "resistor".to_owned(),
                start_index: 0,
            })
        );
    }

    #[test]
    fn programmatic_search_text_change_does_not_queue_user_search() {
        let mut window = Window::default();

        window.set_search_text_programmatically("restored".to_owned());

        assert_eq!(window.search_text(), "restored");
        assert_eq!(window.take_search_request(), None);
    }

    #[test]
    fn search_enter_and_exit_update_focus_and_recovered_text_color() {
        let mut window = Window::default();
        let mut schematic = NavigationRecorder::default();
        assert_eq!(window.search_text_tone().recovered_color(), None);

        let _task = window.update(Message::SearchEntered, &mut schematic);

        assert!(window.can_expand(0x20));
        assert_eq!(
            window.search_text_tone().recovered_color(),
            Some(SEARCH_COLOR_ACTIVE)
        );

        let _task = window.update(Message::SearchExited, &mut schematic);

        assert!(!window.can_expand(0x20));
        assert_eq!(
            window.search_text_tone().recovered_color(),
            Some(SEARCH_COLOR_INACTIVE)
        );
    }

    #[test]
    fn only_f3_repeats_search_from_the_stored_next_index() {
        let mut window = Window::default();
        let mut schematic = NavigationRecorder::default();
        window.set_search_text_programmatically("capacitor".to_owned());
        window.record_search_match(4);
        assert_eq!(window.next_search_index(), 5);

        let _task = window.update(Message::SearchKeyDown(SearchKey::Other), &mut schematic);
        assert_eq!(window.take_search_request(), None);

        let _task = window.update(Message::SearchKeyDown(SearchKey::F3), &mut schematic);
        assert_eq!(
            window.take_search_request(),
            Some(SearchRequest {
                query: "capacitor".to_owned(),
                start_index: 5,
            })
        );

        let _task = window.update(Message::SearchChanged("diode".to_owned()), &mut schematic);
        assert_eq!(
            window.take_search_request(),
            Some(SearchRequest {
                query: "diode".to_owned(),
                start_index: 0,
            })
        );
    }

    #[derive(Debug, Clone, Copy)]
    struct TestNode {
        category: Option<u16>,
        label: &'static str,
    }

    impl ComparableTreeNode for TestNode {
        fn payload_category(&self) -> Option<u16> {
            self.category
        }

        fn label(&self) -> &str {
            self.label
        }
    }

    #[test]
    fn comparator_orders_category_39_before_other_payloads() {
        let window = Window::default();
        let prioritized = TestNode {
            category: Some(0x39),
            label: "Zeta",
        };
        let ordinary = TestNode {
            category: Some(0x10),
            label: "Alpha",
        };

        assert_eq!(
            window.compare_circuit_node(Some(&prioritized), Some(&ordinary), |_, _| {
                panic!("label comparison is not used for mixed categories")
            }),
            Ordering::Less
        );
        assert_eq!(
            window.compare_circuit_node(Some(&ordinary), Some(&prioritized), |_, _| {
                panic!("label comparison is not used for mixed categories")
            }),
            Ordering::Greater
        );
    }

    #[test]
    fn comparator_delegates_other_rows_to_label_ordering() {
        let window = Window::default();
        let left = TestNode {
            category: Some(0x10),
            label: "Alpha",
        };
        let right = TestNode {
            category: Some(0x22),
            label: "Beta",
        };

        let ordering = window.compare_circuit_node(Some(&left), Some(&right), Ord::cmp);

        assert_eq!(ordering, Ordering::Less);
    }

    #[test]
    fn comparator_treats_missing_or_excluded_payloads_as_equal() {
        let window = Window::default();
        let excluded = TestNode {
            category: None,
            label: "Excluded",
        };
        let ordinary = TestNode {
            category: Some(0x10),
            label: "Ordinary",
        };

        assert_eq!(
            window.compare_circuit_node(Some(&excluded), Some(&ordinary), |_, _| {
                panic!("label comparison is not used for excluded payloads")
            }),
            Ordering::Equal
        );
        assert_eq!(
            window.compare_circuit_node::<TestNode>(None, Some(&ordinary), |_, _| {
                panic!("label comparison is not used for missing rows")
            }),
            Ordering::Equal
        );
    }

    #[test]
    fn custom_draw_color_is_active_only_during_search_focus() {
        let mut window = Window::default();
        assert_eq!(window.custom_draw_color(false), None);

        window.set_search_focus_active(true);
        assert_eq!(window.custom_draw_color(false), Some(TREE_COLOR_NORMAL));
        assert_eq!(
            window.custom_draw_color(true),
            Some(TREE_COLOR_SEARCH_SELECTION)
        );
    }

    #[test]
    fn double_click_edits_only_an_eligible_selected_payload() {
        let window = Window::default();
        let payload = 7_u8;
        let mut opened = false;
        assert!(window.on_dbl_click(
            Some(&payload),
            |value| *value == 7,
            || {
                opened = true;
            }
        ));
        assert!(opened);

        let mut opened = false;
        assert!(!window.on_dbl_click(
            Some(&payload),
            |_| false,
            || {
                opened = true;
            }
        ));
        assert!(!opened);

        assert!(!window.on_dbl_click::<u8>(
            None,
            |_| panic!("eligibility is not checked without a payload"),
            || {
                opened = true;
            }
        ));
        assert!(!opened);
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    struct SelectionObject {
        identity: Option<u64>,
        selected: bool,
        select_modes: Vec<u8>,
        clear_count: usize,
    }

    impl SelectionObject {
        const fn new(identity: Option<u64>, selected: bool) -> Self {
            Self {
                identity,
                selected,
                select_modes: Vec::new(),
                clear_count: 0,
            }
        }
    }

    impl SchematicSelectionObject for SelectionObject {
        type Identity = u64;

        fn selection_identity(&self) -> Option<Self::Identity> {
            self.identity
        }

        fn is_selected(&self) -> bool {
            self.selected
        }

        fn select(&mut self, selection_mode: u8) {
            self.selected = true;
            self.select_modes.push(selection_mode);
        }

        fn clear_selection(&mut self) {
            self.selected = false;
            self.clear_count += 1;
        }
    }

    #[test]
    fn circuit_object_returns_its_owning_schematic_page() {
        let object = target(Rectangle::default());

        assert_eq!(object.owning_page(), PageId(3));
    }

    #[test]
    fn selection_state_applies_to_target_and_every_identity_match() {
        let mut target = SelectionObject::new(Some(23), false);
        let mut collection = [
            SelectionObject::new(Some(23), false),
            SelectionObject::new(Some(99), false),
            SelectionObject::new(Some(23), false),
        ];

        apply_selection_state(&mut collection, &mut target, true, 7);

        assert_eq!(target.select_modes, [7]);
        assert_eq!(collection[0].select_modes, [7]);
        assert!(collection[1].select_modes.is_empty());
        assert_eq!(collection[2].select_modes, [7]);

        apply_selection_state(&mut collection, &mut target, false, 99);

        assert_eq!(target.clear_count, 1);
        assert_eq!(collection[0].clear_count, 1);
        assert_eq!(collection[1].clear_count, 0);
        assert_eq!(collection[2].clear_count, 1);
    }

    #[test]
    fn missing_target_identity_does_not_propagate_selection() {
        let mut target = SelectionObject::new(None, false);
        let mut collection = [SelectionObject::new(None, false)];

        apply_selection_state(&mut collection, &mut target, true, 3);

        assert_eq!(target.select_modes, [3]);
        assert!(collection[0].select_modes.is_empty());
    }

    #[test]
    fn clear_selection_updates_only_objects_that_are_selected() {
        let mut collection = [
            SelectionObject::new(Some(1), true),
            SelectionObject::new(Some(2), false),
        ];

        clear_schematic_selection(&mut collection);

        assert_eq!(collection[0].clear_count, 1);
        assert_eq!(collection[1].clear_count, 0);
    }

    struct SelectionProvider {
        collection: Vec<SelectionObject>,
        available: bool,
    }

    impl ActiveSelectionProvider for SelectionProvider {
        type Collection = Vec<SelectionObject>;

        fn active_selection_collection(&mut self) -> Option<&mut Self::Collection> {
            self.available.then_some(&mut self.collection)
        }
    }

    #[test]
    fn active_selection_requires_an_editor_and_an_available_callback_result() {
        assert!(active_schematic_selection::<SelectionProvider>(None).is_none());

        let mut provider = SelectionProvider {
            collection: vec![SelectionObject::new(Some(1), false)],
            available: false,
        };
        assert!(active_schematic_selection(Some(&mut provider)).is_none());

        provider.available = true;
        assert_eq!(
            active_schematic_selection(Some(&mut provider)).map(|values| values.len()),
            Some(1)
        );
    }

    #[test]
    fn open_page_lookup_uses_a_context_wildcard_and_returns_the_last_match() {
        let context = SecondaryContextId(4);
        let records = [
            OpenPageRecord {
                owning_page: PageId(3),
                secondary_context: Some(context),
                tab_index: 2,
            },
            OpenPageRecord {
                owning_page: PageId(8),
                secondary_context: None,
                tab_index: 3,
            },
            OpenPageRecord {
                owning_page: PageId(3),
                secondary_context: Some(SecondaryContextId(9)),
                tab_index: 4,
            },
            OpenPageRecord {
                owning_page: PageId(3),
                secondary_context: Some(context),
                tab_index: 5,
            },
        ];

        assert_eq!(find_open_page_index(&records, PageId(3), None), Some(3));
        assert_eq!(
            find_open_page_index(&records, PageId(3), Some(context)),
            Some(3)
        );
        assert_eq!(
            find_open_page_index(&records, PageId(8), Some(context)),
            None
        );
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum ActivationCall {
        Create(PageId, Option<SecondaryContextId>),
        StoreCurrent,
        SetActive(OpenPageRecord),
        SelectTab(usize),
        Refresh(OpenPageRecord),
    }

    struct ActivationRecorder {
        current_context: Option<SecondaryContextId>,
        create_result: Result<Option<OpenPageRecord>, &'static str>,
        calls: Vec<ActivationCall>,
    }

    impl SchematicPageActivation for ActivationRecorder {
        type Error = &'static str;

        fn current_secondary_context(&self) -> Option<SecondaryContextId> {
            self.current_context
        }

        fn create_page_record(
            &mut self,
            owning_page: PageId,
            secondary_context: Option<SecondaryContextId>,
        ) -> Result<Option<OpenPageRecord>, Self::Error> {
            self.calls
                .push(ActivationCall::Create(owning_page, secondary_context));
            self.create_result
        }

        fn store_current_context(&mut self) {
            self.calls.push(ActivationCall::StoreCurrent);
        }

        fn set_active_record(&mut self, record: OpenPageRecord) {
            self.calls.push(ActivationCall::SetActive(record));
        }

        fn select_schematic_tab(&mut self, tab_index: usize) {
            self.calls.push(ActivationCall::SelectTab(tab_index));
        }

        fn refresh_dependent_editors(&mut self, record: OpenPageRecord) {
            self.calls.push(ActivationCall::Refresh(record));
        }
    }

    const fn activation_recorder(
        current_context: Option<SecondaryContextId>,
        create_result: Result<Option<OpenPageRecord>, &'static str>,
    ) -> ActivationRecorder {
        ActivationRecorder {
            current_context,
            create_result,
            calls: Vec::new(),
        }
    }

    #[test]
    fn page_activation_reuses_last_record_and_runs_the_switch_sequence() {
        let context = SecondaryContextId(5);
        let first = OpenPageRecord {
            owning_page: PageId(3),
            secondary_context: Some(context),
            tab_index: 1,
        };
        let last = OpenPageRecord {
            tab_index: 4,
            ..first
        };
        let mut state = PageActivationState::new(vec![first, last]);
        let mut adapter = activation_recorder(Some(context), Ok(None));

        let outcome = state.activate_page(&mut adapter, PageId(3), None);

        assert_eq!(
            outcome,
            Ok(ActivationOutcome::Activated {
                record_index: 1,
                source: ActivationSource::Existing,
            })
        );
        assert_eq!(
            adapter.calls,
            [
                ActivationCall::StoreCurrent,
                ActivationCall::SetActive(last),
                ActivationCall::SelectTab(4),
                ActivationCall::Refresh(last),
            ]
        );
        assert_eq!(state.active_record_index(), Some(1));
        assert!(!state.activation_in_progress());
    }

    #[test]
    fn page_activation_creates_a_missing_record_and_selects_its_tab() {
        let context = SecondaryContextId(7);
        let created = OpenPageRecord {
            owning_page: PageId(8),
            secondary_context: Some(context),
            tab_index: 6,
        };
        let mut state = PageActivationState::default();
        let mut adapter = activation_recorder(None, Ok(Some(created)));

        let outcome = state.activate_page(&mut adapter, PageId(8), Some(context));

        assert_eq!(
            outcome,
            Ok(ActivationOutcome::Activated {
                record_index: 0,
                source: ActivationSource::Created,
            })
        );
        assert_eq!(state.open_pages(), [created]);
        assert_eq!(
            adapter.calls[0],
            ActivationCall::Create(PageId(8), Some(context))
        );
        assert_eq!(
            adapter.calls.last(),
            Some(&ActivationCall::Refresh(created))
        );
    }

    #[test]
    fn unavailable_error_and_reentrant_activation_do_not_leave_the_guard_set() {
        let mut state = PageActivationState::default();
        let mut unavailable = activation_recorder(None, Ok(None));
        assert_eq!(
            state.activate_page(&mut unavailable, PageId(2), None),
            Ok(ActivationOutcome::Unavailable)
        );
        assert!(!state.activation_in_progress());

        let mut failing = activation_recorder(None, Err("creation failed"));
        assert_eq!(
            state.activate_page(&mut failing, PageId(2), None),
            Err("creation failed")
        );
        assert!(!state.activation_in_progress());

        state.activation_in_progress = true;
        let call_count = failing.calls.len();
        assert_eq!(
            state.activate_page(&mut failing, PageId(2), None),
            Ok(ActivationOutcome::ReentrantNoOp)
        );
        assert_eq!(failing.calls.len(), call_count);
    }
}
