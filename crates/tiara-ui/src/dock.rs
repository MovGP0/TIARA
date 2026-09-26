//! Where the windows sit.
//!
//! The original opens an instrument in a window of its own, beside the
//! circuit, so the circuit can be edited while the instrument is watched. The
//! port had one window and swapped what was in it, which loses exactly the
//! thing the arrangement is for.
//!
//! This is the answer chosen for it: a dock rather than separate windows. The
//! editor holds one region, instruments share another beside it as tabs, and
//! the divider between them can be dragged. A region can be dragged onto
//! another to rearrange them. Nothing here draws anything - the layout is
//! decided here and drawn by the shell - so all of it can be tested without a
//! renderer.
//!
//! Why a dock and not real windows: one window that can be arranged keeps the
//! circuit and its instruments together on the screen, survives being moved
//! between monitors as one thing, and needs no window manager to cooperate.
//! It is also the shape the project asked for.

use iced::widget::pane_grid::{self, Axis, Pane, ResizeEvent, Target};

use crate::window_catalog::WindowKind;

/// The windows sharing one region, and which of them is on top.
#[derive(Debug, Clone)]
pub struct Group {
    /// The windows docked here, in the order their tabs are drawn.
    tabs: Vec<WindowKind>,
    /// Which tab is showing.
    active: usize,
}

impl Group {
    /// One window on its own.
    fn holding(kind: WindowKind) -> Self {
        Self {
            tabs: vec![kind],
            active: 0,
        }
    }

    /// The tabs, in the order they are drawn.
    #[must_use]
    pub fn tabs(&self) -> &[WindowKind] {
        &self.tabs
    }

    /// Which tab is showing.
    #[must_use]
    pub const fn active(&self) -> usize {
        self.active
    }

    /// The window on top.
    #[must_use]
    pub fn showing(&self) -> Option<WindowKind> {
        self.tabs.get(self.active).copied()
    }

    /// Whether this group holds the editor, which can never be closed.
    #[must_use]
    pub fn holds_the_editor(&self) -> bool {
        self.tabs.contains(&WindowKind::SchematicEditor)
    }
}

/// The regions the shell draws, and what is in each.
#[derive(Debug)]
pub struct Dock {
    panes: pane_grid::State<Group>,
    /// The region the editor is in. It is never closed and never empty.
    editor: Pane,
    /// The region that has the keyboard, and whose window the menus act on.
    focused: Pane,
}

impl Default for Dock {
    fn default() -> Self {
        let (panes, editor) = pane_grid::State::new(Group::holding(WindowKind::SchematicEditor));
        Self {
            panes,
            editor,
            focused: editor,
        }
    }
}

impl Dock {
    /// The regions, for the shell to draw.
    #[must_use]
    pub const fn panes(&self) -> &pane_grid::State<Group> {
        &self.panes
    }

    /// The region with the keyboard.
    #[must_use]
    pub const fn focused(&self) -> Pane {
        self.focused
    }

    /// The region the editor is in, which is never closed.
    #[must_use]
    pub const fn editors_region(&self) -> Pane {
        self.editor
    }

    /// The window the menus and the title bar act on.
    ///
    /// The editor is the answer when nothing else is focused, because the
    /// editor is the one window that is always docked.
    #[must_use]
    pub fn focused_kind(&self) -> WindowKind {
        self.panes
            .get(self.focused)
            .and_then(Group::showing)
            .unwrap_or(WindowKind::SchematicEditor)
    }

    /// What is in one region.
    #[must_use]
    pub fn group(&self, pane: Pane) -> Option<&Group> {
        self.panes.get(pane)
    }

    /// How many regions there are.
    #[must_use]
    pub fn regions(&self) -> usize {
        self.panes.len()
    }

    /// Every window docked anywhere, in no particular order.
    #[must_use]
    pub fn docked(&self) -> Vec<WindowKind> {
        self.panes
            .iter()
            .flat_map(|(_, group)| group.tabs.iter().copied())
            .collect()
    }

    /// Whether a window is docked anywhere.
    #[must_use]
    pub fn holds(&self, kind: WindowKind) -> bool {
        self.find(kind).is_some()
    }

    /// Shows a window, docking it if it is not docked already.
    ///
    /// A window that is already docked is brought to the front of whatever
    /// region it is in rather than opened twice. The first instrument splits
    /// the editor's region, so the circuit stays in view beside it; every
    /// instrument after that joins the same region as another tab, which is
    /// what keeps the circuit from being squeezed out by the tenth one.
    pub fn show(&mut self, kind: WindowKind) {
        if let Some((pane, at)) = self.find(kind) {
            if let Some(group) = self.panes.get_mut(pane) {
                group.active = at;
            }
            self.focused = pane;
            return;
        }

        // Somewhere other than the editor's region, so the circuit stays
        // visible. The first one makes that region.
        if let Some(beside) = self.beside_the_editor() {
            if let Some(group) = self.panes.get_mut(beside) {
                group.tabs.push(kind);
                group.active = group.tabs.len() - 1;
            }
            self.focused = beside;
            return;
        }

        if let Some((made, _)) = self
            .panes
            .split(Axis::Vertical, self.editor, Group::holding(kind))
        {
            self.focused = made;
            return;
        }

        // The split was refused, which leaves nowhere else to put it. Better
        // a tab beside the editor than a window that does not open.
        if let Some(group) = self.panes.get_mut(self.editor) {
            group.tabs.push(kind);
            group.active = group.tabs.len() - 1;
        }
        self.focused = self.editor;
    }

    /// Brings one of a region's tabs to the front, and gives it the keyboard.
    pub fn select(&mut self, pane: Pane, at: usize) {
        if let Some(group) = self.panes.get_mut(pane)
            && at < group.tabs.len()
        {
            group.active = at;
            self.focused = pane;
        }
    }

    /// Gives a region the keyboard.
    pub fn focus(&mut self, pane: Pane) {
        if self.panes.get(pane).is_some() {
            self.focused = pane;
        }
    }

    /// Closes one of a region's tabs.
    ///
    /// The editor is never closed - it is the one window the application is
    /// for. A region left with no tabs goes away, and the editor's region
    /// takes the keyboard.
    pub fn close(&mut self, pane: Pane, at: usize) {
        let Some(group) = self.panes.get_mut(pane) else {
            return;
        };
        if group.tabs.get(at) == Some(&WindowKind::SchematicEditor) {
            return;
        }
        if at >= group.tabs.len() {
            return;
        }
        group.tabs.remove(at);
        group.active = group.active.min(group.tabs.len().saturating_sub(1));

        if group.tabs.is_empty() && pane != self.editor {
            self.panes.close(pane);
        }
        if self.panes.get(self.focused).is_none() {
            self.focused = self.editor;
        }
    }

    /// Closes a window regardless of the region and tab that currently hold it.
    ///
    /// Dialog-like windows use this after their content accepts or cancels.
    /// The schematic editor remains protected by [`Self::close`].
    pub fn close_window(&mut self, kind: WindowKind) {
        if let Some((pane, at)) = self.find(kind) {
            self.close(pane, at);
        }
    }

    /// Moves a region onto another, as a drag does.
    pub fn drop(&mut self, pane: Pane, target: Target) {
        self.panes.drop(pane, target);
        self.focused = pane;
    }

    /// Moves the divider between two regions.
    pub fn resize(&mut self, event: ResizeEvent) {
        self.panes.resize(event.split, event.ratio);
    }

    /// Which region a window is in, and which tab of it.
    fn find(&self, kind: WindowKind) -> Option<(Pane, usize)> {
        self.panes.iter().find_map(|(pane, group)| {
            group
                .tabs
                .iter()
                .position(|docked| *docked == kind)
                .map(|at| (*pane, at))
        })
    }

    /// The region instruments share, if one has been made.
    fn beside_the_editor(&self) -> Option<Pane> {
        self.panes
            .iter()
            .find(|(pane, group)| **pane != self.editor && !group.holds_the_editor())
            .map(|(pane, _)| *pane)
    }
}

#[cfg(test)]
mod tests {
    use super::Dock;
    use crate::window_catalog::WindowKind;

    #[test]
    fn the_editor_is_docked_from_the_start_and_on_its_own() {
        let dock = Dock::default();
        assert_eq!(dock.regions(), 1);
        assert_eq!(dock.focused_kind(), WindowKind::SchematicEditor);
        assert_eq!(dock.docked(), [WindowKind::SchematicEditor]);
    }

    #[test]
    fn the_first_instrument_opens_beside_the_circuit_rather_than_over_it() {
        let mut dock = Dock::default();
        dock.show(WindowKind::Oscilloscope);

        assert_eq!(dock.regions(), 2);
        assert_eq!(dock.focused_kind(), WindowKind::Oscilloscope);
        // The circuit is still there, which is the whole point.
        assert!(dock.holds(WindowKind::SchematicEditor));
    }

    #[test]
    fn the_next_instrument_joins_the_first_as_a_tab() {
        let mut dock = Dock::default();
        dock.show(WindowKind::Oscilloscope);
        dock.show(WindowKind::Multimeter);

        // Still two regions: the circuit, and the instruments beside it.
        assert_eq!(dock.regions(), 2);
        assert_eq!(dock.focused_kind(), WindowKind::Multimeter);

        let beside = dock.beside_the_editor().unwrap();
        let group = dock.group(beside).unwrap();
        assert_eq!(
            group.tabs(),
            [WindowKind::Oscilloscope, WindowKind::Multimeter]
        );
        assert_eq!(group.active(), 1);
    }

    #[test]
    fn a_window_already_docked_is_brought_forward_rather_than_opened_twice() {
        let mut dock = Dock::default();
        dock.show(WindowKind::Oscilloscope);
        dock.show(WindowKind::Multimeter);
        dock.show(WindowKind::Oscilloscope);

        assert_eq!(dock.focused_kind(), WindowKind::Oscilloscope);
        assert_eq!(dock.docked().len(), 3);
        let beside = dock.beside_the_editor().unwrap();
        assert_eq!(dock.group(beside).unwrap().active(), 0);
    }

    #[test]
    fn showing_the_editor_gives_the_circuit_the_keyboard_again() {
        let mut dock = Dock::default();
        dock.show(WindowKind::Oscilloscope);
        assert_ne!(dock.focused(), dock.editor);

        dock.show(WindowKind::SchematicEditor);
        assert_eq!(dock.focused(), dock.editor);
        assert_eq!(dock.focused_kind(), WindowKind::SchematicEditor);
    }

    #[test]
    fn a_tab_can_be_brought_forward_by_hand() {
        let mut dock = Dock::default();
        dock.show(WindowKind::Oscilloscope);
        dock.show(WindowKind::Multimeter);
        let beside = dock.beside_the_editor().unwrap();

        dock.select(beside, 0);
        assert_eq!(dock.focused_kind(), WindowKind::Oscilloscope);

        // A tab that is not there is ignored.
        dock.select(beside, 9);
        assert_eq!(dock.focused_kind(), WindowKind::Oscilloscope);
    }

    #[test]
    fn closing_a_tab_leaves_the_others() {
        let mut dock = Dock::default();
        dock.show(WindowKind::Oscilloscope);
        dock.show(WindowKind::Multimeter);
        let beside = dock.beside_the_editor().unwrap();

        dock.close(beside, 0);
        assert_eq!(dock.regions(), 2);
        assert_eq!(dock.group(beside).unwrap().tabs(), [WindowKind::Multimeter]);
        assert_eq!(dock.focused_kind(), WindowKind::Multimeter);
    }

    #[test]
    fn closing_the_last_tab_of_a_region_takes_the_region_away() {
        let mut dock = Dock::default();
        dock.show(WindowKind::Oscilloscope);
        let beside = dock.beside_the_editor().unwrap();

        dock.close(beside, 0);
        assert_eq!(dock.regions(), 1);
        assert_eq!(dock.focused_kind(), WindowKind::SchematicEditor);
        assert_eq!(dock.docked(), [WindowKind::SchematicEditor]);
    }

    #[test]
    fn the_editor_cannot_be_closed() {
        let mut dock = Dock::default();
        let editor = dock.editor;

        dock.close(editor, 0);
        assert_eq!(dock.regions(), 1);
        assert!(dock.holds(WindowKind::SchematicEditor));
    }

    #[test]
    fn closing_a_tab_that_is_not_there_changes_nothing() {
        let mut dock = Dock::default();
        dock.show(WindowKind::Oscilloscope);
        let beside = dock.beside_the_editor().unwrap();

        dock.close(beside, 7);
        assert_eq!(dock.docked().len(), 2);
    }

    #[test]
    fn an_instrument_opens_beside_the_circuit_again_after_being_closed() {
        let mut dock = Dock::default();
        dock.show(WindowKind::Oscilloscope);
        let beside = dock.beside_the_editor().unwrap();
        dock.close(beside, 0);

        dock.show(WindowKind::Multimeter);
        assert_eq!(dock.regions(), 2);
        assert_eq!(dock.focused_kind(), WindowKind::Multimeter);
    }

    #[test]
    fn the_keyboard_follows_the_region_it_is_given_to() {
        let mut dock = Dock::default();
        dock.show(WindowKind::Oscilloscope);
        let editor = dock.editor;

        dock.focus(editor);
        assert_eq!(dock.focused_kind(), WindowKind::SchematicEditor);
    }

    #[test]
    fn a_dialog_can_close_itself_by_kind() {
        let mut dock = Dock::default();
        dock.show(WindowKind::SelectTinaFolder);
        dock.show(WindowKind::Oscilloscope);

        dock.close_window(WindowKind::SelectTinaFolder);

        assert!(!dock.holds(WindowKind::SelectTinaFolder));
        assert!(dock.holds(WindowKind::Oscilloscope));
    }
}
