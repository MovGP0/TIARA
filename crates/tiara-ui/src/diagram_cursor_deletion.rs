//! Selected diagram cursor deletion dispatch.

use iced::Point;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DiagramCursorId {
    A,
    B,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct SelectedDiagramCursor {
    pub is_cursor_a: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct EmptyCursorSelection;

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct DiagramCursorObjectHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct DiagramCursorOwnerHandle(pub u64);

pub trait SelectedCursorDeletionHost {
    fn cursor_exists(&mut self, cursor: DiagramCursorId) -> bool;
    fn release_cursor_button(&mut self, cursor: DiagramCursorId);
    fn invoke_cursor_button(&mut self, cursor: DiagramCursorId);
}

pub trait DiagramCursorRemovalHost {
    fn cursor_object(&mut self, cursor: DiagramCursorId) -> Option<DiagramCursorObjectHandle>;
    fn cursor_owner(
        &mut self,
        cursor: DiagramCursorObjectHandle,
    ) -> Option<DiagramCursorOwnerHandle>;
    fn detach_from_owner(
        &mut self,
        owner: DiagramCursorOwnerHandle,
        cursor: DiagramCursorObjectHandle,
    );
    fn erase_cursor(&mut self, cursor: DiagramCursorObjectHandle);
    fn update_diagram(&mut self, cursor: DiagramCursorObjectHandle, origin: Point);
    fn destroy_cursor(&mut self, cursor: DiagramCursorObjectHandle);
    fn clear_cursor_slot(&mut self, cursor: DiagramCursorId);
}

/// Implements Ghidra function `FUN_01ae28b0` at `0x01AE28B0`.
///
/// Classifies the first selected diagram cursor as A or B. If the matching
/// cursor still exists, this function releases its Iced-facing button state
/// and invokes the shared button action so that the existing deletion branch
/// runs. Additional selections are ignored. An absent matching cursor is a
/// silent no-op. The recovered unchecked empty-list failure is represented by
/// an explicit error.
///
/// # Errors
///
/// Returns [`EmptyCursorSelection`] when no selected object is available for
/// the recovered item-zero classification.
pub fn dispatch_selected_cursor_deletion(
    selection: &[SelectedDiagramCursor],
    host: &mut impl SelectedCursorDeletionHost,
) -> Result<Option<DiagramCursorId>, EmptyCursorSelection> {
    let selected = selection.first().ok_or(EmptyCursorSelection)?;
    let cursor = if selected.is_cursor_a {
        DiagramCursorId::A
    } else {
        DiagramCursorId::B
    };

    if !host.cursor_exists(cursor) {
        return Ok(None);
    }

    host.release_cursor_button(cursor);
    host.invoke_cursor_button(cursor);
    Ok(Some(cursor))
}

/// Implements Ghidra function `FUN_01ae2980` at `0x01AE2980`.
///
/// Removes cursor A or B through the same ordered lifecycle. An associated
/// owner is notified first. The cursor is then erased, updates the diagram at
/// the Iced coordinate origin, is destroyed, and is finally removed from its
/// manager slot. A missing cursor is a silent no-op. Each operation completes
/// before the next one starts; this function does not add rollback behavior.
pub fn remove_diagram_cursor(
    cursor: DiagramCursorId,
    host: &mut impl DiagramCursorRemovalHost,
) -> bool {
    let Some(cursor_object) = host.cursor_object(cursor) else {
        return false;
    };

    if let Some(owner) = host.cursor_owner(cursor_object) {
        host.detach_from_owner(owner, cursor_object);
    }
    host.erase_cursor(cursor_object);
    host.update_diagram(cursor_object, Point::ORIGIN);
    host.destroy_cursor(cursor_object);
    host.clear_cursor_slot(cursor);
    true
}

#[cfg(test)]
mod tests {
    use super::{
        DiagramCursorId, DiagramCursorObjectHandle, DiagramCursorOwnerHandle,
        DiagramCursorRemovalHost, SelectedCursorDeletionHost, SelectedDiagramCursor,
        dispatch_selected_cursor_deletion, remove_diagram_cursor,
    };
    use iced::Point;

    struct Host {
        cursor_a_exists: bool,
        cursor_b_exists: bool,
        events: Vec<String>,
    }

    impl SelectedCursorDeletionHost for Host {
        fn cursor_exists(&mut self, cursor: DiagramCursorId) -> bool {
            self.events.push(format!("exists:{cursor:?}"));
            match cursor {
                DiagramCursorId::A => self.cursor_a_exists,
                DiagramCursorId::B => self.cursor_b_exists,
            }
        }

        fn release_cursor_button(&mut self, cursor: DiagramCursorId) {
            self.events.push(format!("release:{cursor:?}"));
        }

        fn invoke_cursor_button(&mut self, cursor: DiagramCursorId) {
            self.events.push(format!("invoke:{cursor:?}"));
        }
    }

    fn host() -> Host {
        Host {
            cursor_a_exists: true,
            cursor_b_exists: true,
            events: Vec::new(),
        }
    }

    #[test]
    fn first_cursor_a_releases_and_invokes_a_button() {
        let mut host = host();
        let selection = [
            SelectedDiagramCursor { is_cursor_a: true },
            SelectedDiagramCursor { is_cursor_a: false },
        ];

        assert_eq!(
            dispatch_selected_cursor_deletion(&selection, &mut host),
            Ok(Some(DiagramCursorId::A))
        );
        assert_eq!(host.events, ["exists:A", "release:A", "invoke:A"]);
    }

    #[test]
    fn missing_selected_cursor_is_a_silent_noop() {
        let mut host = host();
        host.cursor_b_exists = false;

        assert_eq!(
            dispatch_selected_cursor_deletion(
                &[SelectedDiagramCursor { is_cursor_a: false }],
                &mut host,
            ),
            Ok(None)
        );
        assert_eq!(host.events, ["exists:B"]);
    }

    #[test]
    fn empty_selection_is_an_explicit_error_without_host_calls() {
        let mut host = host();

        assert!(dispatch_selected_cursor_deletion(&[], &mut host).is_err());
        assert!(host.events.is_empty());
    }

    struct RemovalHost {
        cursor: Option<DiagramCursorObjectHandle>,
        owner: Option<DiagramCursorOwnerHandle>,
        events: Vec<String>,
    }

    impl DiagramCursorRemovalHost for RemovalHost {
        fn cursor_object(&mut self, cursor: DiagramCursorId) -> Option<DiagramCursorObjectHandle> {
            self.events.push(format!("cursor:{cursor:?}"));
            self.cursor
        }

        fn cursor_owner(
            &mut self,
            cursor: DiagramCursorObjectHandle,
        ) -> Option<DiagramCursorOwnerHandle> {
            self.events.push(format!("owner:{}", cursor.0));
            self.owner
        }

        fn detach_from_owner(
            &mut self,
            owner: DiagramCursorOwnerHandle,
            cursor: DiagramCursorObjectHandle,
        ) {
            self.events.push(format!("detach:{}:{}", owner.0, cursor.0));
        }

        fn erase_cursor(&mut self, cursor: DiagramCursorObjectHandle) {
            self.events.push(format!("erase:{}", cursor.0));
        }

        fn update_diagram(&mut self, cursor: DiagramCursorObjectHandle, origin: Point) {
            self.events
                .push(format!("update:{}:{}:{}", cursor.0, origin.x, origin.y));
        }

        fn destroy_cursor(&mut self, cursor: DiagramCursorObjectHandle) {
            self.events.push(format!("destroy:{}", cursor.0));
        }

        fn clear_cursor_slot(&mut self, cursor: DiagramCursorId) {
            self.events.push(format!("clear:{cursor:?}"));
        }
    }

    #[test]
    fn removal_detaches_erases_updates_destroys_and_clears_in_order() {
        let mut host = RemovalHost {
            cursor: Some(DiagramCursorObjectHandle(12)),
            owner: Some(DiagramCursorOwnerHandle(7)),
            events: Vec::new(),
        };

        assert!(remove_diagram_cursor(DiagramCursorId::A, &mut host));
        assert_eq!(
            host.events,
            [
                "cursor:A",
                "owner:12",
                "detach:7:12",
                "erase:12",
                "update:12:0:0",
                "destroy:12",
                "clear:A",
            ]
        );
    }

    #[test]
    fn removal_without_owner_skips_detach_but_completes() {
        let mut host = RemovalHost {
            cursor: Some(DiagramCursorObjectHandle(4)),
            owner: None,
            events: Vec::new(),
        };

        assert!(remove_diagram_cursor(DiagramCursorId::B, &mut host));
        assert!(!host.events.iter().any(|event| event.starts_with("detach:")));
        assert_eq!(host.events.last().map(String::as_str), Some("clear:B"));
    }

    #[test]
    fn missing_cursor_is_a_noop() {
        let mut host = RemovalHost {
            cursor: None,
            owner: Some(DiagramCursorOwnerHandle(7)),
            events: Vec::new(),
        };

        assert!(!remove_diagram_cursor(DiagramCursorId::A, &mut host));
        assert_eq!(host.events, ["cursor:A"]);
    }
}
