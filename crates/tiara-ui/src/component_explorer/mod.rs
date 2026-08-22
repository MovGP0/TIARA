use std::cmp::Ordering;

use iced::{Point, Rectangle, Task};

const VIEWPORT_MARGIN: f32 = 50.0;
const TREE_HIT_ON_BUTTON: u16 = 0x10;
const TREE_COLOR_NORMAL: u32 = 0xff00_0005;
const TREE_COLOR_SEARCH_SELECTION: u32 = 0x0000_8000;

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

#[derive(Debug, Clone, Copy, PartialEq)]
pub enum Message {
    TreeSelectionChanged(Option<TreeNode>),
    CircuitTreeClicked,
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

#[derive(Debug, Default)]
pub struct Window {
    selected_node: Option<TreeNode>,
    docking_active: bool,
    search_focus_active: bool,
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

        if schematic.open_page_index(target.owning_page) != schematic.active_page_index() {
            schematic.activate_page(target.owning_page);
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
}
