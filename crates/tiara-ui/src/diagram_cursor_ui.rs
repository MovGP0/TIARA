//! Diagram cursor control and readout reconciliation.

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CursorDisplayKind {
    Generic,
    ConvertedProvider,
    SpecializedProvider,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CursorUiDescriptor {
    pub kind: CursorDisplayKind,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CursorUiInput {
    pub cursor_a: Option<CursorUiDescriptor>,
    pub cursor_b: Option<CursorUiDescriptor>,
    pub default_page: i32,
    pub show_generic_pair_option: bool,
    pub panel_allowed: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CursorPresence {
    None,
    AOnly,
    BOnly,
    Both,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DerivedCursorReadouts {
    Hidden,
    Visible,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CursorControlState {
    pub presence: CursorPresence,
    pub derived_readouts: DerivedCursorReadouts,
    pub panel_visible: bool,
    pub generic_pair_option_visible: bool,
}

pub trait DiagramCursorUiHost {
    fn select_cursor_page(&mut self, page: i32);
    fn apply_cursor_controls(&mut self, state: CursorControlState);
    fn refresh_pair_readouts(&mut self);
    fn rebuild_all_curves_grid(&mut self, cursor_a: bool, cursor_b: bool);
    fn adjust_cursor_panel_layout(&mut self);
    fn adjust_cursor_grid_layout(&mut self);
    fn format_cursor_readouts(&mut self);
    fn layout_and_repaint_diagram(&mut self);
}

/// Implements Ghidra function `FUN_01ae4310` at `0x01AE4310`.
///
/// Reconciles Iced-facing cursor controls with the available A and B cursor
/// objects. With no cursor it hides the panel, releases both buttons, and
/// repaints immediately. Otherwise it selects the page from the first
/// available cursor, applies one-cursor or paired controls, refreshes derived
/// readouts and grid columns, adjusts layouts, formats values, and repaints.
/// Curve samples are not changed.
pub fn reconcile_diagram_cursor_ui(input: CursorUiInput, host: &mut impl DiagramCursorUiHost) {
    let has_a = input.cursor_a.is_some();
    let has_b = input.cursor_b.is_some();
    let first_cursor = input.cursor_a.or(input.cursor_b);

    let Some(first_cursor) = first_cursor else {
        host.apply_cursor_controls(control_state(
            input,
            false,
            false,
            CursorDisplayKind::Generic,
        ));
        host.layout_and_repaint_diagram();
        return;
    };

    host.select_cursor_page(page_for(first_cursor.kind, input.default_page));
    host.apply_cursor_controls(control_state(input, has_a, has_b, first_cursor.kind));
    host.refresh_pair_readouts();
    host.rebuild_all_curves_grid(has_a, has_b);
    host.adjust_cursor_panel_layout();
    host.adjust_cursor_grid_layout();
    host.format_cursor_readouts();
    host.layout_and_repaint_diagram();
}

const fn page_for(kind: CursorDisplayKind, default_page: i32) -> i32 {
    match kind {
        CursorDisplayKind::Generic => default_page,
        CursorDisplayKind::ConvertedProvider => 1,
        CursorDisplayKind::SpecializedProvider => 2,
    }
}

const fn control_state(
    input: CursorUiInput,
    has_a: bool,
    has_b: bool,
    first_kind: CursorDisplayKind,
) -> CursorControlState {
    let paired = has_a && has_b;
    CursorControlState {
        presence: match (has_a, has_b) {
            (false, false) => CursorPresence::None,
            (true, false) => CursorPresence::AOnly,
            (false, true) => CursorPresence::BOnly,
            (true, true) => CursorPresence::Both,
        },
        derived_readouts: if paired {
            DerivedCursorReadouts::Visible
        } else {
            DerivedCursorReadouts::Hidden
        },
        panel_visible: (has_a || has_b) && input.panel_allowed,
        generic_pair_option_visible: paired
            && matches!(first_kind, CursorDisplayKind::Generic)
            && input.show_generic_pair_option,
    }
}

#[cfg(test)]
mod tests {
    use super::{
        CursorControlState, CursorDisplayKind, CursorPresence, CursorUiDescriptor, CursorUiInput,
        DerivedCursorReadouts, DiagramCursorUiHost, reconcile_diagram_cursor_ui,
    };

    #[derive(Default)]
    struct Host {
        states: Vec<CursorControlState>,
        events: Vec<String>,
    }

    impl DiagramCursorUiHost for Host {
        fn select_cursor_page(&mut self, page: i32) {
            self.events.push(format!("page:{page}"));
        }

        fn apply_cursor_controls(&mut self, state: CursorControlState) {
            self.events.push("controls".to_owned());
            self.states.push(state);
        }

        fn refresh_pair_readouts(&mut self) {
            self.events.push("readouts".to_owned());
        }

        fn rebuild_all_curves_grid(&mut self, cursor_a: bool, cursor_b: bool) {
            self.events.push(format!("grid:{cursor_a}:{cursor_b}"));
        }

        fn adjust_cursor_panel_layout(&mut self) {
            self.events.push("panel-layout".to_owned());
        }

        fn adjust_cursor_grid_layout(&mut self) {
            self.events.push("grid-layout".to_owned());
        }

        fn format_cursor_readouts(&mut self) {
            self.events.push("format".to_owned());
        }

        fn layout_and_repaint_diagram(&mut self) {
            self.events.push("repaint".to_owned());
        }
    }

    const fn descriptor(kind: CursorDisplayKind) -> CursorUiDescriptor {
        CursorUiDescriptor { kind }
    }

    const fn input(
        cursor_a: Option<CursorUiDescriptor>,
        cursor_b: Option<CursorUiDescriptor>,
    ) -> CursorUiInput {
        CursorUiInput {
            cursor_a,
            cursor_b,
            default_page: 4,
            show_generic_pair_option: true,
            panel_allowed: true,
        }
    }

    #[test]
    fn no_cursor_hides_controls_and_repaints_without_readout_work() {
        let mut host = Host::default();

        reconcile_diagram_cursor_ui(input(None, None), &mut host);

        assert_eq!(host.events, ["controls", "repaint"]);
        assert_eq!(
            host.states,
            [CursorControlState {
                presence: CursorPresence::None,
                derived_readouts: DerivedCursorReadouts::Hidden,
                panel_visible: false,
                generic_pair_option_visible: false,
            }]
        );
    }

    #[test]
    fn a_only_selects_its_page_and_hides_paired_values() {
        let mut host = Host::default();

        reconcile_diagram_cursor_ui(
            input(Some(descriptor(CursorDisplayKind::ConvertedProvider)), None),
            &mut host,
        );

        assert_eq!(host.events[0], "page:1");
        assert_eq!(host.states[0].presence, CursorPresence::AOnly);
        assert_eq!(
            host.states[0].derived_readouts,
            DerivedCursorReadouts::Hidden
        );
        assert_eq!(host.events.last().map(String::as_str), Some("repaint"));
    }

    #[test]
    fn b_only_uses_b_as_the_first_cursor() {
        let mut host = Host::default();

        reconcile_diagram_cursor_ui(
            input(
                None,
                Some(descriptor(CursorDisplayKind::SpecializedProvider)),
            ),
            &mut host,
        );

        assert_eq!(host.events[0], "page:2");
        assert_eq!(host.states[0].presence, CursorPresence::BOnly);
        assert!(host.events.iter().any(|event| event == "grid:false:true"));
    }

    #[test]
    fn paired_generic_cursors_show_derived_and_optional_controls() {
        let mut host = Host::default();

        reconcile_diagram_cursor_ui(
            input(
                Some(descriptor(CursorDisplayKind::Generic)),
                Some(descriptor(CursorDisplayKind::ConvertedProvider)),
            ),
            &mut host,
        );

        assert_eq!(host.events[0], "page:4");
        assert_eq!(host.states[0].presence, CursorPresence::Both);
        assert_eq!(
            host.states[0].derived_readouts,
            DerivedCursorReadouts::Visible
        );
        assert!(host.states[0].generic_pair_option_visible);
        assert_eq!(
            host.events,
            [
                "page:4",
                "controls",
                "readouts",
                "grid:true:true",
                "panel-layout",
                "grid-layout",
                "format",
                "repaint",
            ]
        );
    }
}
