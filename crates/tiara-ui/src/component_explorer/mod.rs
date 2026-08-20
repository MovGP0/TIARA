use iced::{Point, Rectangle, Task};

const VIEWPORT_MARGIN: f32 = 50.0;

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

/// A minimal node contract used by the recovered `ComponentExplorer` callbacks.
pub trait CategorizedNode {
    /// Returns the Delphi category code for this node.
    fn category(&self) -> u16;
}

impl CategorizedNode for CircuitObject {
    fn category(&self) -> u16 {
        self.selection_identity as u16
    }
}

#[derive(Debug, Default)]
pub struct Window {
    selected_node: Option<TreeNode>,
    dock_requested: bool,
    home_panel_active: bool,
    destroyed: bool,
    close_code: Option<u8>,
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
            Message::CloseRequested => {
                let code = self.on_close();
                self.close_code = Some(code);
            }
            Message::WindowDestroyed => self.on_destroy(),
            Message::StartDock => self.on_start_dock(),
            Message::HomePanelStateChanged(active) => self.set_home_panel_active(active),
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

    /// Translates `frmComponentExplorer.OnClose` (Ghidra `0x013AB310`,
    /// symbol `FUN_013ab310`) and returns the close result expected by the
    /// original Delphi event.
    pub fn on_close(&mut self) -> u8 {
        self.close_code = Some(2);
        2
    }

    /// Translates `frmComponentExplorer.OnDestroy` (Ghidra `0x013AB320`,
    /// symbol `FUN_013ab320`) and clears internal form state.
    pub fn on_destroy(&mut self) {
        self.destroyed = true;
        self.dock_requested = false;
        self.home_panel_active = false;
    }

    /// Returns whether the host form was marked destroyed.
    #[must_use]
    pub const fn is_destroyed(&self) -> bool {
        self.destroyed
    }

    /// Translates `frmComponentExplorer.OnStartDock` (Ghidra `0x013AB330`,
    /// symbol `FUN_013ab330`) and marks a dock operation as active.
    pub fn on_start_dock(&mut self) {
        self.dock_requested = true;
    }

    /// Indicates whether the host is currently handling a dock interaction.
    #[must_use]
    pub const fn is_dock_requested(&self) -> bool {
        self.dock_requested
    }

    /// Updates the cached form-host state equivalent to the Delphi docking panel
    /// tracking used by `frmComponentExplorer.OnStartDock`/`OnEndDock`.
    pub const fn set_home_panel_active(&mut self, active: bool) {
        self.home_panel_active = active;
    }

    /// Translates `frmComponentExplorer.OnEndDock` (Ghidra `0x013AB340`,
    /// symbol `FUN_013ab340`). Drops the dock state, then refreshes nodes that
    /// belong to category `0x39` through the supplied callback.
    pub fn on_end_dock<T: CategorizedNode>(
        &mut self,
        nodes: &[T],
        mut refresh_39: impl FnMut(&T),
    ) {
        for node in nodes {
            if node.category() == 0x39 {
                refresh_39(node);
            }
        }

        self.dock_requested = false;
    }

    /// Translates `frmComponentExplorer.OnExpanding` (Ghidra `0x013AB740`,
    /// symbol `FUN_013ab740`) using recovered semantics:
    /// allow the operation unless not docking, no home panel, and helper state
    /// reports any code except `0x10`.
    pub fn can_expand(&self, current_state: impl FnOnce() -> u16) -> bool {
        let state = current_state();
        self.dock_requested || self.home_panel_active || state == 0x10
    }

    /// Translates `frmComponentExplorer.OnClose`-adjacent gating check
    /// recovered at `0x013AB500`/`FUN_013ab500`.
    pub fn can_close(&self, current_state: impl FnOnce() -> u16) -> bool {
        self.dock_requested || current_state() == 0x10
    }

    /// Translates `frmComponentExplorer.OnDblClick` (Ghidra `0x013AB6E0`,
    /// symbol `FUN_013ab6e0`) by delegating to caller-provided gating/opening.
    pub fn on_dbl_click(&self, can_open: bool, open_selected: impl FnOnce()) -> bool {
        if can_open {
            open_selected();
            return true;
        }
        false
    }

    /// Returns the expected custom-draw color for `frmComponentExplorer.pnlHome.tvCircuit`
    /// draw callbacks (`0x013AB670`, `FUN_013ab670`) when home-panel behavior is active.
    pub const fn custom_draw_style(&self, selected: bool) -> Option<u32> {
        if self.home_panel_active {
            if selected {
                Some(0x8000)
            } else {
                Some(0xff000005)
            }
        } else {
            None
        }
    }

    /// Translates `frmComponentExplorer` comparator helper at
    /// `0x013AB570` (`FUN_013ab570`): category `0x39` entries are ordered before
    /// non-`0x39` items; all other comparisons are delegated to a caller-supplied
    /// comparator.
    pub fn compare_circuit_node<T: CategorizedNode>(
        &self,
        left: Option<&T>,
        right: Option<&T>,
        fallback_cmp: impl FnOnce(u16, u16) -> i32,
    ) -> i32 {
        let (Some(left), Some(right)) = (left, right) else {
            return 0;
        };

        let left_category = left.category();
        let right_category = right.category();

        if left_category == 0x39 && right_category != 0x39 {
            return -1;
        }

        if left_category != 0x39 && right_category == 0x39 {
            return 1;
        }

        fallback_cmp(left_category, right_category)
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
    fn close_request_records_original_form_result() {
        let mut window = Window::default();
        assert_eq!(window.update(Message::CloseRequested, &mut NavigationRecorder::default()), Task::none());
        assert!(window.is_destroyed());
    }

    #[test]
    fn on_destroy_clears_dock_and_home_state() {
        let mut window = Window::default();
        let mut recorder = NavigationRecorder::default();
        let _ = window.update(Message::StartDock, &mut recorder);
        window.set_home_panel_active(true);
        window.on_destroy();

        assert!(!window.is_dock_requested());
        assert!(!window.is_destroyed() == false);
        assert!(window.is_destroyed());
    }

    #[test]
    fn docking_start_marks_and_end_refreshes_category_39_nodes() {
        let mut window = Window::default();
        let mut refreshed = Vec::<u16>::new();
        let nodes = [1_u16, 0x39, 0x10, 0x39];

        window.on_start_dock();
        assert!(window.is_dock_requested());

        window.on_end_dock(&nodes, |category| refreshed.push(*category));

        assert_eq!(refreshed, vec![0x39, 0x39]);
        assert!(!window.is_dock_requested());
    }

    #[test]
    fn can_expand_checks_dock_or_home_and_state_override() {
        let mut window = Window::default();
        window.on_start_dock();
        window.set_home_panel_active(false);
        assert!(window.can_expand(|| 0x20));

        let mut window = Window::default();
        assert!(!window.can_expand(|| 0x11));
        window.set_home_panel_active(true);
        assert!(window.can_expand(|| 0x11));
        window.set_home_panel_active(false);
        assert!(window.can_expand(|| 0x10));
    }

    #[test]
    fn can_close_checks_dock_or_special_state() {
        let mut window = Window::default();
        assert!(!window.can_close(|| 0x11));
        window.on_start_dock();
        assert!(window.can_close(|| 0x11));
        window.on_destroy();
        assert!(!window.can_close(|| 0x10));
    }

    #[derive(Debug, Clone, Copy)]
    struct TestNode {
        category: u16,
    }

    impl CategorizedNode for TestNode {
        fn category(&self) -> u16 {
            self.category
        }
    }

    #[test]
    fn comparator_orders_category_39_before_non_39() {
        let mut window = Window::default();
        let left = TestNode { category: 0x39 };
        let right = TestNode { category: 0x10 };
        let other = TestNode { category: 0x22 };

        assert_eq!(
            window.compare_circuit_node(Some(&left), Some(&right), |_, _| {
                panic!("fallback not used for 39-vs-non-39")
            }),
            -1
        );
        assert_eq!(window.compare_circuit_node(Some(&right), Some(&left), |_, _| 0), 1);
        assert_eq!(
            window.compare_circuit_node(Some(&other), Some(&left), |_, _| 0),
            1
        );
        assert_eq!(
            window.compare_circuit_node(Some(&left), Some(&other), |_, _| 0),
            -1
        );
    }

    #[test]
    fn custom_draw_style_uses_home_state_gate() {
        let mut window = Window::default();
        assert_eq!(window.custom_draw_style(false), None);

        let mut window = Window::default();
        window.set_home_panel_active(true);
        assert_eq!(window.custom_draw_style(false), Some(0xff000005));
        assert_eq!(window.custom_draw_style(true), Some(0x8000));
    }

    #[test]
    fn dbl_click_opens_only_when_allowed() {
        let window = Window::default();
        let mut opened = false;
        assert!(window.on_dbl_click(true, || {
            opened = true;
        }));
        assert!(opened);

        let mut opened = false;
        assert!(!window.on_dbl_click(false, || {
            opened = true;
        }));
        assert!(!opened);
    }
}
