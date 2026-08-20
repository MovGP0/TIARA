//! Lifecycle coordination for the modeless Ask Voltages picker.
//!
//! Library evaluation: Iced 0.13.1 supplies the deferred release task and
//! typed lifecycle message. Plain Rust ownership models the drawing-list and
//! Schematic Editor coordination. No additional lifecycle crate is needed.

use iced::Task;

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum DialogLifecycle {
    #[default]
    Visible,
    ReleasePending,
    Released,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    CompleteDeferredRelease,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct DrawingList {
    pub id: u64,
    pub refresh_generation: u64,
    pub selected_object: Option<u64>,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct SchematicEditorOwner {
    pub current_drawing_list_id: Option<u64>,
    pub active_controller_id: Option<u64>,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum CleanupEffect {
    #[default]
    Skipped,
    Applied,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct DestructionSummary {
    pub drawing_list_refreshed: CleanupEffect,
    pub selection_cleared: CleanupEffect,
    pub release_scheduled: CleanupEffect,
    pub owner_registration_removed: CleanupEffect,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Controller {
    id: u64,
    tracked_drawing_list_id: u64,
    destroyed: bool,
    dialog_lifecycle: DialogLifecycle,
}

impl Controller {
    #[must_use]
    pub const fn new(id: u64, tracked_drawing_list_id: u64) -> Self {
        Self {
            id,
            tracked_drawing_list_id,
            destroyed: false,
            dialog_lifecycle: DialogLifecycle::Visible,
        }
    }

    /// Ports Ghidra function `FUN_0136ad30` at `0x0136AD30`.
    pub fn destroy(
        &mut self,
        owner: &mut SchematicEditorOwner,
        drawing_list: &mut DrawingList,
    ) -> (DestructionSummary, Task<Message>) {
        if self.destroyed {
            return (DestructionSummary::default(), Task::none());
        }

        let is_current_list = owner.current_drawing_list_id == Some(self.tracked_drawing_list_id)
            && drawing_list.id == self.tracked_drawing_list_id;
        let mut summary = DestructionSummary::default();
        if is_current_list {
            drawing_list.refresh_generation = drawing_list.refresh_generation.saturating_add(1);
            summary.drawing_list_refreshed = CleanupEffect::Applied;
            if drawing_list.selected_object.take().is_some() {
                summary.selection_cleared = CleanupEffect::Applied;
            }
        }

        self.dialog_lifecycle = DialogLifecycle::ReleasePending;
        summary.release_scheduled = CleanupEffect::Applied;
        if owner.active_controller_id == Some(self.id) {
            owner.active_controller_id = None;
            summary.owner_registration_removed = CleanupEffect::Applied;
        }
        self.destroyed = true;

        (summary, Task::done(Message::CompleteDeferredRelease))
    }

    pub const fn update(&mut self, message: Message) {
        match message {
            Message::CompleteDeferredRelease => {
                if matches!(self.dialog_lifecycle, DialogLifecycle::ReleasePending) {
                    self.dialog_lifecycle = DialogLifecycle::Released;
                }
            }
        }
    }

    #[must_use]
    pub const fn dialog_lifecycle(&self) -> DialogLifecycle {
        self.dialog_lifecycle
    }

    #[must_use]
    pub const fn is_destroyed(&self) -> bool {
        self.destroyed
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn destroy_refreshes_current_list_clears_selection_and_schedules_release() {
        let mut controller = Controller::new(7, 42);
        let mut owner = SchematicEditorOwner {
            current_drawing_list_id: Some(42),
            active_controller_id: Some(7),
        };
        let mut list = DrawingList {
            id: 42,
            refresh_generation: 3,
            selected_object: Some(99),
        };

        let (summary, _release_task) = controller.destroy(&mut owner, &mut list);

        assert_eq!(
            summary,
            DestructionSummary {
                drawing_list_refreshed: CleanupEffect::Applied,
                selection_cleared: CleanupEffect::Applied,
                release_scheduled: CleanupEffect::Applied,
                owner_registration_removed: CleanupEffect::Applied,
            }
        );
        assert_eq!(list.refresh_generation, 4);
        assert!(list.selected_object.is_none());
        assert!(owner.active_controller_id.is_none());
        assert_eq!(
            controller.dialog_lifecycle(),
            DialogLifecycle::ReleasePending
        );
    }

    #[test]
    fn destroy_does_not_touch_a_stale_or_replaced_drawing_list() {
        let mut controller = Controller::new(7, 42);
        let mut owner = SchematicEditorOwner {
            current_drawing_list_id: Some(43),
            active_controller_id: Some(7),
        };
        let mut list = DrawingList {
            id: 42,
            refresh_generation: 3,
            selected_object: Some(99),
        };

        let (summary, _release_task) = controller.destroy(&mut owner, &mut list);

        assert_eq!(summary.drawing_list_refreshed, CleanupEffect::Skipped);
        assert_eq!(summary.selection_cleared, CleanupEffect::Skipped);
        assert_eq!(list.refresh_generation, 3);
        assert_eq!(list.selected_object, Some(99));
        assert_eq!(summary.release_scheduled, CleanupEffect::Applied);
        assert_eq!(summary.owner_registration_removed, CleanupEffect::Applied);
    }

    #[test]
    fn base_cleanup_does_not_remove_a_newer_controller() {
        let mut controller = Controller::new(7, 42);
        let mut owner = SchematicEditorOwner {
            current_drawing_list_id: Some(42),
            active_controller_id: Some(8),
        };
        let mut list = DrawingList {
            id: 42,
            selected_object: None,
            ..DrawingList::default()
        };

        let (summary, _release_task) = controller.destroy(&mut owner, &mut list);

        assert_eq!(summary.owner_registration_removed, CleanupEffect::Skipped);
        assert_eq!(owner.active_controller_id, Some(8));
    }

    #[test]
    fn deferred_message_finishes_release_and_repeated_destroy_is_a_noop() {
        let mut controller = Controller::new(7, 42);
        let mut owner = SchematicEditorOwner::default();
        let mut list = DrawingList::default();
        let (_summary, _release_task) = controller.destroy(&mut owner, &mut list);

        controller.update(Message::CompleteDeferredRelease);
        assert_eq!(controller.dialog_lifecycle(), DialogLifecycle::Released);
        let (summary, _task) = controller.destroy(&mut owner, &mut list);
        assert_eq!(summary, DestructionSummary::default());
        assert_eq!(controller.dialog_lifecycle(), DialogLifecycle::Released);
    }
}
