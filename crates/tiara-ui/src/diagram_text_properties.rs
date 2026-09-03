//! Staged diagram text-property editing.

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct DiagramTextHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct EmptyTextSelection;

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum TextPropertiesDialogResult<T> {
    Cancelled,
    Accepted(T),
}

pub trait DiagramTextPropertiesHost {
    type StagedText;

    fn stage_text_properties(&mut self, text: DiagramTextHandle) -> Self::StagedText;
    fn show_text_properties(
        &mut self,
        staged: Self::StagedText,
    ) -> TextPropertiesDialogResult<Self::StagedText>;
    fn erase_text(&mut self, text: DiagramTextHandle);
    fn clear_text_selection(&mut self, text: DiagramTextHandle);
    fn apply_text_properties(&mut self, text: DiagramTextHandle, staged: Self::StagedText);
    fn finalize_text(&mut self, text: DiagramTextHandle);
    fn draw_text(&mut self, text: DiagramTextHandle);
}

/// Implements Ghidra function `FUN_01ae3c10` at `0x01AE3C10` for the
/// recovered text Properties command path.
///
/// Copies selection item zero into an Iced-facing dialog draft. Cancellation
/// leaves the live text object unchanged. Acceptance erases the old drawing,
/// clears selection, applies and finalizes the draft, and draws the updated
/// object. Additional selected objects are ignored.
///
/// # Errors
///
/// Returns [`EmptyTextSelection`] when selection item zero is not available.
pub fn edit_first_selected_diagram_text(
    selected: &[DiagramTextHandle],
    host: &mut impl DiagramTextPropertiesHost,
) -> Result<bool, EmptyTextSelection> {
    let text = selected.first().copied().ok_or(EmptyTextSelection)?;
    let staged = host.stage_text_properties(text);
    let TextPropertiesDialogResult::Accepted(staged) = host.show_text_properties(staged) else {
        return Ok(false);
    };

    host.erase_text(text);
    host.clear_text_selection(text);
    host.apply_text_properties(text, staged);
    host.finalize_text(text);
    host.draw_text(text);
    Ok(true)
}

#[cfg(test)]
mod tests {
    use super::{
        DiagramTextHandle, DiagramTextPropertiesHost, TextPropertiesDialogResult,
        edit_first_selected_diagram_text,
    };

    struct Host {
        result: TextPropertiesDialogResult<String>,
        events: Vec<String>,
    }

    impl DiagramTextPropertiesHost for Host {
        type StagedText = String;

        fn stage_text_properties(&mut self, text: DiagramTextHandle) -> Self::StagedText {
            self.events.push(format!("stage:{}", text.0));
            "original".to_owned()
        }

        fn show_text_properties(
            &mut self,
            staged: Self::StagedText,
        ) -> TextPropertiesDialogResult<Self::StagedText> {
            self.events.push(format!("show:{staged}"));
            self.result.clone()
        }

        fn erase_text(&mut self, text: DiagramTextHandle) {
            self.events.push(format!("erase:{}", text.0));
        }

        fn clear_text_selection(&mut self, text: DiagramTextHandle) {
            self.events.push(format!("deselect:{}", text.0));
        }

        fn apply_text_properties(&mut self, text: DiagramTextHandle, staged: Self::StagedText) {
            self.events.push(format!("apply:{}:{staged}", text.0));
        }

        fn finalize_text(&mut self, text: DiagramTextHandle) {
            self.events.push(format!("finalize:{}", text.0));
        }

        fn draw_text(&mut self, text: DiagramTextHandle) {
            self.events.push(format!("draw:{}", text.0));
        }
    }

    #[test]
    fn accepted_draft_replaces_and_redraws_first_text_in_order() {
        let mut host = Host {
            result: TextPropertiesDialogResult::Accepted("updated".to_owned()),
            events: Vec::new(),
        };

        assert_eq!(
            edit_first_selected_diagram_text(
                &[DiagramTextHandle(4), DiagramTextHandle(9)],
                &mut host,
            ),
            Ok(true)
        );
        assert_eq!(
            host.events,
            [
                "stage:4",
                "show:original",
                "erase:4",
                "deselect:4",
                "apply:4:updated",
                "finalize:4",
                "draw:4",
            ]
        );
    }

    #[test]
    fn cancellation_leaves_live_text_unchanged() {
        let mut host = Host {
            result: TextPropertiesDialogResult::Cancelled,
            events: Vec::new(),
        };

        assert_eq!(
            edit_first_selected_diagram_text(&[DiagramTextHandle(4)], &mut host),
            Ok(false)
        );
        assert_eq!(host.events, ["stage:4", "show:original"]);
    }

    #[test]
    fn empty_selection_is_an_explicit_error_before_staging() {
        let mut host = Host {
            result: TextPropertiesDialogResult::Cancelled,
            events: Vec::new(),
        };

        assert!(edit_first_selected_diagram_text(&[], &mut host).is_err());
        assert!(host.events.is_empty());
    }
}
