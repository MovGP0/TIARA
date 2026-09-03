//! Metafile size and style property editing.

use crate::diagram_figure_deletion::DiagramFigureHandle;
use crate::diagram_figure_properties::EmptyFigureSelection;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct MetafileBounds {
    pub left: i32,
    pub top: i32,
    pub right: i32,
    pub bottom: i32,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct MetafileStyle {
    pub border_color: u32,
    pub fill_color: u32,
    pub border_thickness: u8,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct MetafilePropertiesDraft {
    pub width_percent: f64,
    pub height_percent: f64,
    pub style: MetafileStyle,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub enum MetafilePropertiesDialogResult {
    Cancelled,
    Accepted(MetafilePropertiesDraft),
}

pub trait DiagramMetafilePropertiesHost {
    fn bounds(&mut self, figure: DiagramFigureHandle) -> MetafileBounds;
    fn style(&mut self, figure: DiagramFigureHandle) -> MetafileStyle;
    fn show_properties(
        &mut self,
        staged: MetafilePropertiesDraft,
    ) -> MetafilePropertiesDialogResult;
    fn erase(&mut self, figure: DiagramFigureHandle);
    fn apply(&mut self, figure: DiagramFigureHandle, bounds: MetafileBounds, style: MetafileStyle);
    fn draw(&mut self, figure: DiagramFigureHandle);
}

/// Implements Ghidra function `FUN_01ae7100` at `0x01AE7100`.
///
/// Recollects item zero, stages its border and fill style with 100-percent
/// width and height, and opens the existing Iced property editor. Only an
/// accepted result commits. Acceptance scales the right and bottom coordinates
/// from the existing left and top coordinates, erases the old drawing, copies
/// the new bounds and style, and draws the metafile again. Cancellation leaves
/// the live object unchanged.
///
/// # Errors
///
/// Returns [`EmptyFigureSelection`] when selection item zero is unavailable.
pub fn edit_first_selected_metafile(
    selected: &[DiagramFigureHandle],
    host: &mut impl DiagramMetafilePropertiesHost,
) -> Result<bool, EmptyFigureSelection> {
    let figure = selected.first().copied().ok_or(EmptyFigureSelection)?;
    let original_bounds = host.bounds(figure);
    let staged = MetafilePropertiesDraft {
        width_percent: 100.0,
        height_percent: 100.0,
        style: host.style(figure),
    };
    let MetafilePropertiesDialogResult::Accepted(accepted) = host.show_properties(staged) else {
        return Ok(false);
    };

    let bounds = MetafileBounds {
        left: original_bounds.left,
        top: original_bounds.top,
        right: scaled_end(
            original_bounds.left,
            original_bounds.right,
            accepted.width_percent,
        ),
        bottom: scaled_end(
            original_bounds.top,
            original_bounds.bottom,
            accepted.height_percent,
        ),
    };
    host.erase(figure);
    host.apply(figure, bounds, accepted.style);
    host.draw(figure);
    Ok(true)
}

#[allow(clippy::cast_possible_truncation)]
fn scaled_end(start: i32, end: i32, percent: f64) -> i32 {
    let scaled_length = ((f64::from(end) - f64::from(start)) * percent / 100.0).round();
    start + scaled_length as i32
}

#[cfg(test)]
mod tests {
    use super::{
        DiagramMetafilePropertiesHost, MetafileBounds, MetafilePropertiesDialogResult,
        MetafilePropertiesDraft, MetafileStyle, edit_first_selected_metafile,
    };
    use crate::diagram_figure_deletion::DiagramFigureHandle;
    use crate::diagram_figure_properties::EmptyFigureSelection;

    const ORIGINAL_STYLE: MetafileStyle = MetafileStyle {
        border_color: 1,
        fill_color: 2,
        border_thickness: 3,
    };
    const UPDATED_STYLE: MetafileStyle = MetafileStyle {
        border_color: 4,
        fill_color: 5,
        border_thickness: 6,
    };

    struct Host {
        result: MetafilePropertiesDialogResult,
        events: Vec<String>,
    }

    impl DiagramMetafilePropertiesHost for Host {
        fn bounds(&mut self, figure: DiagramFigureHandle) -> MetafileBounds {
            self.events.push(format!("bounds:{}", figure.0));
            MetafileBounds {
                left: 10,
                top: 20,
                right: 110,
                bottom: 220,
            }
        }

        fn style(&mut self, figure: DiagramFigureHandle) -> MetafileStyle {
            self.events.push(format!("style:{}", figure.0));
            ORIGINAL_STYLE
        }

        fn show_properties(
            &mut self,
            staged: MetafilePropertiesDraft,
        ) -> MetafilePropertiesDialogResult {
            self.events.push(format!(
                "show:{}:{}:{:?}",
                staged.width_percent, staged.height_percent, staged.style
            ));
            self.result
        }

        fn erase(&mut self, figure: DiagramFigureHandle) {
            self.events.push(format!("erase:{}", figure.0));
        }

        fn apply(
            &mut self,
            figure: DiagramFigureHandle,
            bounds: MetafileBounds,
            style: MetafileStyle,
        ) {
            self.events
                .push(format!("apply:{}:{bounds:?}:{style:?}", figure.0));
        }

        fn draw(&mut self, figure: DiagramFigureHandle) {
            self.events.push(format!("draw:{}", figure.0));
        }
    }

    #[test]
    fn accepted_properties_scale_from_origin_and_redraw_item_zero() {
        let mut host = Host {
            result: MetafilePropertiesDialogResult::Accepted(MetafilePropertiesDraft {
                width_percent: 150.0,
                height_percent: 25.0,
                style: UPDATED_STYLE,
            }),
            events: Vec::new(),
        };

        assert_eq!(
            edit_first_selected_metafile(
                &[DiagramFigureHandle(7), DiagramFigureHandle(9)],
                &mut host,
            ),
            Ok(true)
        );
        assert_eq!(
            host.events,
            [
                "bounds:7",
                "style:7",
                "show:100:100:MetafileStyle { border_color: 1, fill_color: 2, border_thickness: 3 }",
                "erase:7",
                "apply:7:MetafileBounds { left: 10, top: 20, right: 160, bottom: 70 }:MetafileStyle { border_color: 4, fill_color: 5, border_thickness: 6 }",
                "draw:7",
            ]
        );
    }

    #[test]
    fn cancelled_properties_leave_the_live_metafile_unchanged() {
        let mut host = Host {
            result: MetafilePropertiesDialogResult::Cancelled,
            events: Vec::new(),
        };

        assert_eq!(
            edit_first_selected_metafile(&[DiagramFigureHandle(7)], &mut host),
            Ok(false)
        );
        assert_eq!(
            host.events,
            [
                "bounds:7",
                "style:7",
                "show:100:100:MetafileStyle { border_color: 1, fill_color: 2, border_thickness: 3 }",
            ]
        );
    }

    #[test]
    fn empty_selection_is_an_explicit_error() {
        let mut host = Host {
            result: MetafilePropertiesDialogResult::Cancelled,
            events: Vec::new(),
        };

        assert_eq!(
            edit_first_selected_metafile(&[], &mut host),
            Err(EmptyFigureSelection)
        );
        assert!(host.events.is_empty());
    }
}
