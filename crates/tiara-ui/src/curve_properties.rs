//! Typed staging and commit flow for diagram curve properties.

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct CurveHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CurveDialogGroup {
    SharedSelection,
    SingleCurve,
}

#[derive(Debug, Clone, PartialEq)]
pub struct CurveProperties {
    pub title: String,
    pub color: u32,
    pub line_style: u8,
    pub line_width: u8,
    pub visible: bool,
    pub range_offset: Option<f64>,
    pub selected_channels: Vec<String>,
}

#[derive(Debug, Clone, PartialEq)]
pub struct DiagramCurve {
    pub handle: CurveHandle,
    pub owner_type: Option<u8>,
    pub properties: CurveProperties,
}

#[derive(Debug, Clone, PartialEq)]
pub enum CurveDialogResult {
    Cancelled,
    Accepted(CurveProperties),
}

pub trait CurvePropertiesDialogHost {
    fn show_curve_properties(
        &mut self,
        group: CurveDialogGroup,
        staged: CurveProperties,
    ) -> CurveDialogResult;
    fn recalculate_curve(&mut self, curve: CurveHandle);
    fn render_diagram(&mut self);
}

/// Implements Ghidra function `FUN_01ad5480` at `0x01AD5480`.
///
/// Finds the owner of the first selected curve and stages that curve in the
/// matching dialog group. A missing owner and cancellation are silent no-ops.
/// For owner types 0, 5, and 6, acceptance applies the staged display settings
/// to all selected curves. Other owner types update only the first curve. The
/// accepted path recalculates each changed curve and redraws the diagram.
pub fn edit_selected_curve_properties(
    curves: &mut [DiagramCurve],
    selected: &[CurveHandle],
    host: &mut impl CurvePropertiesDialogHost,
) -> bool {
    let Some(first_handle) = selected.first().copied() else {
        return false;
    };
    let Some(first_curve) = curves.iter().find(|curve| curve.handle == first_handle) else {
        return false;
    };
    let Some(owner_type) = first_curve.owner_type else {
        return false;
    };
    let group = dialog_group(owner_type);
    let staged = first_curve.properties.clone();
    let CurveDialogResult::Accepted(accepted) = host.show_curve_properties(group, staged) else {
        return false;
    };

    let targets = if group == CurveDialogGroup::SharedSelection {
        selected
    } else {
        std::slice::from_ref(&first_handle)
    };
    for handle in targets {
        if let Some(curve) = curves.iter_mut().find(|curve| curve.handle == *handle) {
            curve.properties = accepted.clone();
            host.recalculate_curve(*handle);
        }
    }
    host.render_diagram();
    true
}

#[must_use]
pub const fn dialog_group(owner_type: u8) -> CurveDialogGroup {
    match owner_type {
        0 | 5 | 6 => CurveDialogGroup::SharedSelection,
        _ => CurveDialogGroup::SingleCurve,
    }
}

#[cfg(test)]
mod tests {
    use super::{
        CurveDialogGroup, CurveDialogResult, CurveHandle, CurveProperties,
        CurvePropertiesDialogHost, DiagramCurve, edit_selected_curve_properties,
    };

    struct Host {
        result: CurveDialogResult,
        shown: Option<(CurveDialogGroup, CurveProperties)>,
        events: Vec<String>,
    }

    impl CurvePropertiesDialogHost for Host {
        fn show_curve_properties(
            &mut self,
            group: CurveDialogGroup,
            staged: CurveProperties,
        ) -> CurveDialogResult {
            self.shown = Some((group, staged));
            self.result.clone()
        }

        fn recalculate_curve(&mut self, curve: CurveHandle) {
            self.events.push(format!("curve:{}", curve.0));
        }

        fn render_diagram(&mut self) {
            self.events.push("render".to_owned());
        }
    }

    fn properties(title: &str) -> CurveProperties {
        CurveProperties {
            title: title.to_owned(),
            color: 0x0010_2030,
            line_style: 1,
            line_width: 2,
            visible: true,
            range_offset: Some(0.5),
            selected_channels: vec!["A".to_owned()],
        }
    }

    fn curve(handle: u64, owner_type: Option<u8>, title: &str) -> DiagramCurve {
        DiagramCurve {
            handle: CurveHandle(handle),
            owner_type,
            properties: properties(title),
        }
    }

    #[test]
    fn missing_owner_returns_without_a_dialog_or_message() {
        let mut curves = [curve(1, None, "First")];
        let original = curves.clone();
        let mut host = Host {
            result: CurveDialogResult::Accepted(properties("Edited")),
            shown: None,
            events: Vec::new(),
        };

        let accepted = edit_selected_curve_properties(&mut curves, &[CurveHandle(1)], &mut host);

        assert!(!accepted);
        assert_eq!(curves, original);
        assert!(host.shown.is_none());
        assert!(host.events.is_empty());
    }

    #[test]
    fn cancellation_keeps_all_selected_curves_unchanged() {
        let mut curves = [curve(1, Some(5), "First"), curve(2, Some(5), "Second")];
        let original = curves.clone();
        let mut host = Host {
            result: CurveDialogResult::Cancelled,
            shown: None,
            events: Vec::new(),
        };

        let accepted = edit_selected_curve_properties(
            &mut curves,
            &[CurveHandle(1), CurveHandle(2)],
            &mut host,
        );

        assert!(!accepted);
        assert_eq!(curves, original);
        assert_eq!(
            host.shown.map(|shown| shown.0),
            Some(CurveDialogGroup::SharedSelection)
        );
        assert!(host.events.is_empty());
    }

    #[test]
    fn shared_group_applies_to_all_selected_curves_in_selection_order() {
        let mut curves = [
            curve(1, Some(0), "First"),
            curve(2, Some(0), "Second"),
            curve(3, Some(0), "Unselected"),
        ];
        let edited = properties("Edited");
        let mut host = Host {
            result: CurveDialogResult::Accepted(edited.clone()),
            shown: None,
            events: Vec::new(),
        };

        let accepted = edit_selected_curve_properties(
            &mut curves,
            &[CurveHandle(2), CurveHandle(1)],
            &mut host,
        );

        assert!(accepted);
        assert_eq!(curves[0].properties, edited);
        assert_eq!(curves[1].properties, edited);
        assert_eq!(curves[2].properties.title, "Unselected");
        assert_eq!(host.events, ["curve:2", "curve:1", "render"]);
    }

    #[test]
    fn single_curve_group_updates_only_selection_item_zero() {
        let mut curves = [curve(1, Some(3), "First"), curve(2, Some(3), "Second")];
        let edited = properties("Edited");
        let mut host = Host {
            result: CurveDialogResult::Accepted(edited.clone()),
            shown: None,
            events: Vec::new(),
        };

        let accepted = edit_selected_curve_properties(
            &mut curves,
            &[CurveHandle(1), CurveHandle(2)],
            &mut host,
        );

        assert!(accepted);
        assert_eq!(curves[0].properties, edited);
        assert_eq!(curves[1].properties.title, "Second");
        assert_eq!(host.events, ["curve:1", "render"]);
    }
}
