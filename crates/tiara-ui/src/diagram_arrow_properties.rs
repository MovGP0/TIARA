//! Diagram arrow property and attachment editing.

use crate::coordinate_system_pen_dialog::PenValue;

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct DiagramArrowHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct EmptyArrowSelection;

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ArrowProperties {
    pub text: String,
    pub pen: PenValue,
    pub arrow_option: u8,
    pub target: Option<DiagramArrowHandle>,
    pub attachment_enabled: bool,
    pub numeric_option: i32,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ArrowPropertiesDialogResult {
    Cancelled,
    Accepted(ArrowProperties),
}

pub trait DiagramArrowPropertiesHost {
    fn is_arrow(&mut self, object: DiagramArrowHandle) -> bool;
    fn current_arrow_properties(&mut self, arrow: DiagramArrowHandle) -> ArrowProperties;
    fn arrow_objects(&mut self) -> Vec<DiagramArrowHandle>;
    fn show_arrow_properties(
        &mut self,
        staged: ArrowProperties,
        targets: &[DiagramArrowHandle],
    ) -> ArrowPropertiesDialogResult;
    fn apply_arrow_properties(&mut self, arrow: DiagramArrowHandle, staged: ArrowProperties);
    fn recalculate_attached_object(&mut self, arrow: DiagramArrowHandle);
    fn redraw_arrow(&mut self, arrow: DiagramArrowHandle);
}

/// Implements Ghidra function `FUN_01ae5040` at `0x01AE5040`.
///
/// Recollects selection item zero, verifies that it is an arrow, and stages
/// its text, pen, arrow option, attachment state, target, and numeric option in
/// an Iced-facing dialog. Other arrows are offered as targets. Cancellation
/// leaves the live arrow unchanged. Acceptance applies or clears attachment
/// state, recalculates an attached object when present, and redraws the arrow.
///
/// # Errors
///
/// Returns [`EmptyArrowSelection`] when selection item zero is unavailable.
pub fn edit_first_selected_arrow(
    selected: &[DiagramArrowHandle],
    host: &mut impl DiagramArrowPropertiesHost,
) -> Result<bool, EmptyArrowSelection> {
    let arrow = selected.first().copied().ok_or(EmptyArrowSelection)?;
    if !host.is_arrow(arrow) {
        return Ok(false);
    }

    let staged = host.current_arrow_properties(arrow);
    let targets: Vec<_> = host
        .arrow_objects()
        .into_iter()
        .filter(|candidate| *candidate != arrow)
        .collect();
    let ArrowPropertiesDialogResult::Accepted(staged) =
        host.show_arrow_properties(staged, &targets)
    else {
        return Ok(false);
    };
    let has_target = staged.target.is_some();
    host.apply_arrow_properties(arrow, staged);
    if has_target {
        host.recalculate_attached_object(arrow);
    }
    host.redraw_arrow(arrow);
    Ok(true)
}

#[cfg(test)]
mod tests {
    use super::{
        ArrowProperties, ArrowPropertiesDialogResult, DiagramArrowHandle,
        DiagramArrowPropertiesHost, edit_first_selected_arrow,
    };
    use crate::coordinate_system_pen_dialog::PenValue;

    struct Host {
        is_arrow: bool,
        result: ArrowPropertiesDialogResult,
        events: Vec<String>,
    }

    impl DiagramArrowPropertiesHost for Host {
        fn is_arrow(&mut self, object: DiagramArrowHandle) -> bool {
            self.events.push(format!("is-arrow:{}", object.0));
            self.is_arrow
        }

        fn current_arrow_properties(&mut self, arrow: DiagramArrowHandle) -> ArrowProperties {
            self.events.push(format!("load:{}", arrow.0));
            properties(None)
        }

        fn arrow_objects(&mut self) -> Vec<DiagramArrowHandle> {
            self.events.push("targets".to_owned());
            vec![DiagramArrowHandle(4), DiagramArrowHandle(5)]
        }

        fn show_arrow_properties(
            &mut self,
            staged: ArrowProperties,
            targets: &[DiagramArrowHandle],
        ) -> ArrowPropertiesDialogResult {
            self.events.push(format!(
                "show:{}:{}",
                staged.text,
                targets
                    .iter()
                    .map(|target| target.0.to_string())
                    .collect::<Vec<_>>()
                    .join(",")
            ));
            self.result.clone()
        }

        fn apply_arrow_properties(&mut self, arrow: DiagramArrowHandle, staged: ArrowProperties) {
            self.events.push(format!(
                "apply:{}:{}",
                arrow.0,
                staged.target.map_or(0, |target| target.0)
            ));
        }

        fn recalculate_attached_object(&mut self, arrow: DiagramArrowHandle) {
            self.events.push(format!("recalculate:{}", arrow.0));
        }

        fn redraw_arrow(&mut self, arrow: DiagramArrowHandle) {
            self.events.push(format!("redraw:{}", arrow.0));
        }
    }

    fn properties(target: Option<DiagramArrowHandle>) -> ArrowProperties {
        ArrowProperties {
            text: "note".to_owned(),
            pen: PenValue::default(),
            arrow_option: 2,
            target,
            attachment_enabled: target.is_some(),
            numeric_option: 12,
        }
    }

    #[test]
    fn accepted_attachment_excludes_self_then_recalculates_and_redraws() {
        let mut host = Host {
            is_arrow: true,
            result: ArrowPropertiesDialogResult::Accepted(properties(Some(DiagramArrowHandle(5)))),
            events: Vec::new(),
        };

        assert_eq!(
            edit_first_selected_arrow(&[DiagramArrowHandle(4), DiagramArrowHandle(9)], &mut host,),
            Ok(true)
        );
        assert_eq!(
            host.events,
            [
                "is-arrow:4",
                "load:4",
                "targets",
                "show:note:5",
                "apply:4:5",
                "recalculate:4",
                "redraw:4",
            ]
        );
    }

    #[test]
    fn accepted_cleared_attachment_skips_recalculation() {
        let mut host = Host {
            is_arrow: true,
            result: ArrowPropertiesDialogResult::Accepted(properties(None)),
            events: Vec::new(),
        };

        assert_eq!(
            edit_first_selected_arrow(&[DiagramArrowHandle(4)], &mut host),
            Ok(true)
        );
        assert!(
            !host
                .events
                .iter()
                .any(|event| event.starts_with("recalculate:"))
        );
        assert_eq!(host.events.last().map(String::as_str), Some("redraw:4"));
    }

    #[test]
    fn cancellation_and_non_arrow_leave_live_object_unchanged() {
        let mut cancelled = Host {
            is_arrow: true,
            result: ArrowPropertiesDialogResult::Cancelled,
            events: Vec::new(),
        };
        let mut unsupported = Host {
            is_arrow: false,
            result: ArrowPropertiesDialogResult::Cancelled,
            events: Vec::new(),
        };

        assert_eq!(
            edit_first_selected_arrow(&[DiagramArrowHandle(4)], &mut cancelled),
            Ok(false)
        );
        assert!(
            !cancelled
                .events
                .iter()
                .any(|event| event.starts_with("apply:"))
        );

        assert_eq!(
            edit_first_selected_arrow(&[DiagramArrowHandle(4)], &mut unsupported),
            Ok(false)
        );
        assert_eq!(unsupported.events, ["is-arrow:4"]);
    }

    #[test]
    fn empty_selection_is_an_explicit_error() {
        let mut host = Host {
            is_arrow: true,
            result: ArrowPropertiesDialogResult::Cancelled,
            events: Vec::new(),
        };

        assert!(edit_first_selected_arrow(&[], &mut host).is_err());
        assert!(host.events.is_empty());
    }
}
