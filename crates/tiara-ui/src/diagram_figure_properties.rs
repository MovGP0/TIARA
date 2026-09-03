//! Circle and line pen-property editing.

use crate::coordinate_system_pen_dialog::PenValue;
use crate::diagram_figure_deletion::{DiagramFigureHandle, DiagramFigureKind};

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct EmptyFigureSelection;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PenPropertiesDialogResult {
    Cancelled,
    Accepted(PenValue),
}

pub trait DiagramFigurePenHost {
    fn figure_kind(&mut self, figure: DiagramFigureHandle) -> DiagramFigureKind;
    fn current_pen(&mut self, figure: DiagramFigureHandle) -> PenValue;
    fn show_pen_properties(&mut self, staged: PenValue) -> PenPropertiesDialogResult;
    fn apply_pen(&mut self, figure: DiagramFigureHandle, pen: PenValue);
    fn redraw_figure(&mut self, figure: DiagramFigureHandle);
    fn store_pen_defaults(&mut self, kind: DiagramFigureKind, pen: PenValue);
}

/// Implements Ghidra function `FUN_01ae4cc0` at `0x01AE4CC0`.
///
/// Recollects selection item zero and opens the existing Iced pen editor only
/// for a circle or line. Cancellation leaves the live figure and defaults
/// unchanged. Acceptance copies the staged pen to the figure, redraws it, and
/// stores the matching circle or line width, color, and style defaults.
///
/// # Errors
///
/// Returns [`EmptyFigureSelection`] when selection item zero is unavailable.
pub fn edit_first_selected_figure_pen(
    selected: &[DiagramFigureHandle],
    host: &mut impl DiagramFigurePenHost,
) -> Result<bool, EmptyFigureSelection> {
    let figure = selected.first().copied().ok_or(EmptyFigureSelection)?;
    let kind = host.figure_kind(figure);
    if !matches!(kind, DiagramFigureKind::Circle | DiagramFigureKind::Line) {
        return Ok(false);
    }

    let staged = host.current_pen(figure);
    let PenPropertiesDialogResult::Accepted(staged) = host.show_pen_properties(staged) else {
        return Ok(false);
    };
    host.apply_pen(figure, staged);
    host.redraw_figure(figure);
    host.store_pen_defaults(kind, staged);
    Ok(true)
}

#[cfg(test)]
mod tests {
    use super::{
        DiagramFigurePenHost, EmptyFigureSelection, PenPropertiesDialogResult,
        edit_first_selected_figure_pen,
    };
    use crate::coordinate_system_pen_dialog::{PenStyle, PenValue};
    use crate::diagram_figure_deletion::{DiagramFigureHandle, DiagramFigureKind};

    struct Host {
        kind: DiagramFigureKind,
        result: PenPropertiesDialogResult,
        events: Vec<String>,
    }

    impl DiagramFigurePenHost for Host {
        fn figure_kind(&mut self, figure: DiagramFigureHandle) -> DiagramFigureKind {
            self.events.push(format!("kind:{}", figure.0));
            self.kind
        }

        fn current_pen(&mut self, figure: DiagramFigureHandle) -> PenValue {
            self.events.push(format!("load:{}", figure.0));
            PenValue::default()
        }

        fn show_pen_properties(&mut self, staged: PenValue) -> PenPropertiesDialogResult {
            self.events.push(format!("show:{}", staged.width));
            self.result
        }

        fn apply_pen(&mut self, figure: DiagramFigureHandle, pen: PenValue) {
            self.events
                .push(format!("apply:{}:{}", figure.0, pen.width));
        }

        fn redraw_figure(&mut self, figure: DiagramFigureHandle) {
            self.events.push(format!("redraw:{}", figure.0));
        }

        fn store_pen_defaults(&mut self, kind: DiagramFigureKind, pen: PenValue) {
            self.events.push(format!(
                "defaults:{kind:?}:{}:{}:{:?}",
                pen.width, pen.color, pen.style
            ));
        }
    }

    const UPDATED_PEN: PenValue = PenValue {
        color: 0x80,
        width: 3,
        style: PenStyle::Dash,
    };

    #[test]
    fn accepted_circle_pen_is_applied_redrawn_and_stored_as_circle_defaults() {
        let mut host = Host {
            kind: DiagramFigureKind::Circle,
            result: PenPropertiesDialogResult::Accepted(UPDATED_PEN),
            events: Vec::new(),
        };

        assert_eq!(
            edit_first_selected_figure_pen(
                &[DiagramFigureHandle(4), DiagramFigureHandle(5)],
                &mut host,
            ),
            Ok(true)
        );
        assert_eq!(
            host.events,
            [
                "kind:4",
                "load:4",
                "show:1",
                "apply:4:3",
                "redraw:4",
                "defaults:Circle:3:128:Dash",
            ]
        );
    }

    #[test]
    fn cancelled_line_dialog_does_not_change_figure_or_defaults() {
        let mut host = Host {
            kind: DiagramFigureKind::Line,
            result: PenPropertiesDialogResult::Cancelled,
            events: Vec::new(),
        };

        assert_eq!(
            edit_first_selected_figure_pen(&[DiagramFigureHandle(2)], &mut host),
            Ok(false)
        );
        assert_eq!(host.events, ["kind:2", "load:2", "show:1"]);
    }

    #[test]
    fn unsupported_figure_returns_without_opening_dialog() {
        let mut host = Host {
            kind: DiagramFigureKind::Text,
            result: PenPropertiesDialogResult::Accepted(UPDATED_PEN),
            events: Vec::new(),
        };

        assert_eq!(
            edit_first_selected_figure_pen(&[DiagramFigureHandle(2)], &mut host),
            Ok(false)
        );
        assert_eq!(host.events, ["kind:2"]);
    }

    #[test]
    fn empty_selection_is_an_explicit_error() {
        let mut host = Host {
            kind: DiagramFigureKind::Line,
            result: PenPropertiesDialogResult::Cancelled,
            events: Vec::new(),
        };

        assert_eq!(
            edit_first_selected_figure_pen(&[], &mut host),
            Err(EmptyFigureSelection)
        );
        assert!(host.events.is_empty());
    }
}
