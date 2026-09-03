//! Diagram figure removal and subtype cleanup.

const FIGURE_SELECTION: u8 = 8;

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct DiagramFigureHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DiagramFigureKind {
    Text,
    Circle,
    Line,
    Metafile,
    Other,
}

pub trait DiagramFigureDeletionHost {
    fn contains_figure(&mut self, figure: DiagramFigureHandle) -> bool;
    fn remove_figure(&mut self, figure: DiagramFigureHandle);
    fn figure_kind(&mut self, figure: DiagramFigureHandle) -> DiagramFigureKind;
    fn clear_text_references(&mut self, text: DiagramFigureHandle);
    fn invalidate_figure_bounds(&mut self, figure: DiagramFigureHandle);
    fn detach_figure_association(&mut self, figure: DiagramFigureHandle);
    fn destroy_figure(&mut self, figure: DiagramFigureHandle);
}

/// Implements Ghidra function `FUN_01ae3e90` at `0x01AE3E90`.
///
/// Deletes the selected-figure snapshot only when its complete category is
/// exactly the figure category. Each figure that is still live is removed from
/// the collection before subtype cleanup. Text, circle, line, and metafile
/// figures invalidate their Iced-facing drawing bounds as recovered. Text
/// references and optional text or shape associations are detached before the
/// object is destroyed. Stale snapshot entries are skipped, and mixed or empty
/// selections are unchanged.
pub fn delete_selected_diagram_figures(
    selection_category: u8,
    selected: &[DiagramFigureHandle],
    host: &mut impl DiagramFigureDeletionHost,
) -> usize {
    if selection_category != FIGURE_SELECTION {
        return 0;
    }

    let mut deleted = 0;
    for figure in selected {
        if !host.contains_figure(*figure) {
            continue;
        }

        host.remove_figure(*figure);
        match host.figure_kind(*figure) {
            DiagramFigureKind::Text => {
                host.clear_text_references(*figure);
                host.invalidate_figure_bounds(*figure);
                host.detach_figure_association(*figure);
            }
            DiagramFigureKind::Circle | DiagramFigureKind::Line => {
                host.invalidate_figure_bounds(*figure);
                host.detach_figure_association(*figure);
            }
            DiagramFigureKind::Metafile => host.invalidate_figure_bounds(*figure),
            DiagramFigureKind::Other => {}
        }
        host.destroy_figure(*figure);
        deleted += 1;
    }
    deleted
}

#[cfg(test)]
mod tests {
    use super::{
        DiagramFigureDeletionHost, DiagramFigureHandle, DiagramFigureKind,
        delete_selected_diagram_figures,
    };
    use std::collections::{HashMap, HashSet};

    struct Host {
        live: HashSet<DiagramFigureHandle>,
        kinds: HashMap<DiagramFigureHandle, DiagramFigureKind>,
        events: Vec<String>,
    }

    impl DiagramFigureDeletionHost for Host {
        fn contains_figure(&mut self, figure: DiagramFigureHandle) -> bool {
            self.events.push(format!("contains:{}", figure.0));
            self.live.contains(&figure)
        }

        fn remove_figure(&mut self, figure: DiagramFigureHandle) {
            self.events.push(format!("remove:{}", figure.0));
            self.live.remove(&figure);
        }

        fn figure_kind(&mut self, figure: DiagramFigureHandle) -> DiagramFigureKind {
            self.events.push(format!("kind:{}", figure.0));
            self.kinds[&figure]
        }

        fn clear_text_references(&mut self, text: DiagramFigureHandle) {
            self.events.push(format!("clear-text:{}", text.0));
        }

        fn invalidate_figure_bounds(&mut self, figure: DiagramFigureHandle) {
            self.events.push(format!("invalidate:{}", figure.0));
        }

        fn detach_figure_association(&mut self, figure: DiagramFigureHandle) {
            self.events.push(format!("detach:{}", figure.0));
        }

        fn destroy_figure(&mut self, figure: DiagramFigureHandle) {
            self.events.push(format!("destroy:{}", figure.0));
        }
    }

    fn host(kinds: &[(u64, DiagramFigureKind)]) -> Host {
        Host {
            live: kinds
                .iter()
                .map(|(handle, _)| DiagramFigureHandle(*handle))
                .collect(),
            kinds: kinds
                .iter()
                .map(|(handle, kind)| (DiagramFigureHandle(*handle), *kind))
                .collect(),
            events: Vec::new(),
        }
    }

    #[test]
    fn text_is_removed_then_references_bounds_and_association_are_cleaned() {
        let mut host = host(&[(1, DiagramFigureKind::Text)]);

        assert_eq!(
            delete_selected_diagram_figures(8, &[DiagramFigureHandle(1)], &mut host),
            1
        );
        assert_eq!(
            host.events,
            [
                "contains:1",
                "remove:1",
                "kind:1",
                "clear-text:1",
                "invalidate:1",
                "detach:1",
                "destroy:1",
            ]
        );
    }

    #[test]
    fn each_recognized_shape_gets_only_its_recovered_cleanup() {
        let mut host = host(&[
            (2, DiagramFigureKind::Circle),
            (3, DiagramFigureKind::Line),
            (4, DiagramFigureKind::Metafile),
            (5, DiagramFigureKind::Other),
        ]);
        let selected = [
            DiagramFigureHandle(2),
            DiagramFigureHandle(3),
            DiagramFigureHandle(4),
            DiagramFigureHandle(5),
        ];

        assert_eq!(delete_selected_diagram_figures(8, &selected, &mut host), 4);
        assert!(host.events.iter().any(|event| event == "detach:2"));
        assert!(host.events.iter().any(|event| event == "detach:3"));
        assert!(host.events.iter().any(|event| event == "invalidate:4"));
        assert!(!host.events.iter().any(|event| event == "detach:4"));
        assert!(!host.events.iter().any(|event| event == "invalidate:5"));
        assert!(host.events.iter().any(|event| event == "destroy:5"));
    }

    #[test]
    fn stale_entries_are_skipped_while_later_live_entries_are_deleted() {
        let mut host = host(&[(2, DiagramFigureKind::Circle)]);

        assert_eq!(
            delete_selected_diagram_figures(
                8,
                &[DiagramFigureHandle(1), DiagramFigureHandle(2)],
                &mut host,
            ),
            1
        );
        assert_eq!(host.events[0], "contains:1");
        assert!(!host.events.iter().any(|event| event == "destroy:1"));
        assert!(host.events.iter().any(|event| event == "destroy:2"));
    }

    #[test]
    fn mixed_selection_is_unchanged() {
        let mut host = host(&[(1, DiagramFigureKind::Text)]);

        assert_eq!(
            delete_selected_diagram_figures(10, &[DiagramFigureHandle(1)], &mut host),
            0
        );
        assert!(host.events.is_empty());
    }
}
