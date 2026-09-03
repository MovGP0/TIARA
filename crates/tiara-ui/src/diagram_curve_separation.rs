//! Whole-diagram curve separation coordination.

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct SeparationCoordinateSystemHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CurveSeparationMode {
    ByCurve,
    ByOutput,
}

pub trait DiagramCurveSeparationHost {
    fn prepare_diagram(&mut self);
    fn coordinate_systems(&mut self) -> Vec<SeparationCoordinateSystemHandle>;
    fn separate_coordinate_system(
        &mut self,
        coordinate_system: SeparationCoordinateSystemHandle,
        mode: CurveSeparationMode,
    );
    fn serialize_diagram(&mut self);
    fn recalculate_geometry(&mut self);
    fn recalculate_axes(&mut self);
    fn render_diagram(&mut self);
}

pub trait DiagramCurveCollectionHost {
    fn prepare_diagram(&mut self);
    fn coordinate_systems(&mut self) -> Vec<SeparationCoordinateSystemHandle>;
    fn collect_separated_y_axes(&mut self, coordinate_system: SeparationCoordinateSystemHandle);
    fn serialize_diagram(&mut self);
    fn refresh_axis_state(&mut self);
    fn recalculate_geometry(&mut self);
    fn refresh_layout_associations(&mut self);
    fn render_diagram(&mut self);
}

/// Implements Ghidra function `FUN_01ae6250` at `0x01AE6250`, likely
/// `TDiagram.SeparateCurves`.
///
/// Prepares the diagram, visits every coordinate system in list order, applies
/// the requested curve or output grouping, and serializes the complete diagram
/// after every system. It then recalculates geometry and axes and renders the
/// Iced-facing result. No per-system result, rollback, page traversal, or undo
/// snapshot is added.
pub fn separate_all_coordinate_system_curves(
    mode: CurveSeparationMode,
    host: &mut impl DiagramCurveSeparationHost,
) -> usize {
    host.prepare_diagram();
    let coordinate_systems = host.coordinate_systems();
    for coordinate_system in &coordinate_systems {
        host.separate_coordinate_system(*coordinate_system, mode);
        host.serialize_diagram();
    }
    host.recalculate_geometry();
    host.recalculate_axes();
    host.render_diagram();
    coordinate_systems.len()
}

/// Implements Ghidra function `FUN_01ae6350` at `0x01AE6350`, likely
/// `TDiagram.CollectCurves`.
///
/// Prepares the diagram, visits every coordinate system in list order,
/// collects its separated Y axes, and serializes the complete diagram after
/// each system. It then refreshes axis state, geometry, layout and render
/// associations, and the Iced-facing output. It does not filter by selection
/// or move curves between coordinate systems.
pub fn collect_all_coordinate_system_curves(host: &mut impl DiagramCurveCollectionHost) -> usize {
    host.prepare_diagram();
    let coordinate_systems = host.coordinate_systems();
    for coordinate_system in &coordinate_systems {
        host.collect_separated_y_axes(*coordinate_system);
        host.serialize_diagram();
    }
    host.refresh_axis_state();
    host.recalculate_geometry();
    host.refresh_layout_associations();
    host.render_diagram();
    coordinate_systems.len()
}

#[cfg(test)]
mod tests {
    use super::{
        CurveSeparationMode, DiagramCurveCollectionHost, DiagramCurveSeparationHost,
        SeparationCoordinateSystemHandle, collect_all_coordinate_system_curves,
        separate_all_coordinate_system_curves,
    };

    struct Host {
        systems: Vec<SeparationCoordinateSystemHandle>,
        events: Vec<String>,
    }

    impl DiagramCurveSeparationHost for Host {
        fn prepare_diagram(&mut self) {
            self.events.push("prepare".to_owned());
        }

        fn coordinate_systems(&mut self) -> Vec<SeparationCoordinateSystemHandle> {
            self.events.push("systems".to_owned());
            self.systems.clone()
        }

        fn separate_coordinate_system(
            &mut self,
            coordinate_system: SeparationCoordinateSystemHandle,
            mode: CurveSeparationMode,
        ) {
            self.events
                .push(format!("separate:{}:{mode:?}", coordinate_system.0));
        }

        fn serialize_diagram(&mut self) {
            self.events.push("serialize".to_owned());
        }

        fn recalculate_geometry(&mut self) {
            self.events.push("geometry".to_owned());
        }

        fn recalculate_axes(&mut self) {
            self.events.push("axes".to_owned());
        }

        fn render_diagram(&mut self) {
            self.events.push("render".to_owned());
        }
    }

    #[test]
    fn each_system_is_separated_and_serialized_before_final_render() {
        let mut host = Host {
            systems: vec![
                SeparationCoordinateSystemHandle(2),
                SeparationCoordinateSystemHandle(4),
            ],
            events: Vec::new(),
        };

        assert_eq!(
            separate_all_coordinate_system_curves(CurveSeparationMode::ByOutput, &mut host),
            2
        );
        assert_eq!(
            host.events,
            [
                "prepare",
                "systems",
                "separate:2:ByOutput",
                "serialize",
                "separate:4:ByOutput",
                "serialize",
                "geometry",
                "axes",
                "render",
            ]
        );
    }

    #[test]
    fn empty_diagram_still_runs_final_recalculation_and_render() {
        let mut host = Host {
            systems: Vec::new(),
            events: Vec::new(),
        };

        assert_eq!(
            separate_all_coordinate_system_curves(CurveSeparationMode::ByCurve, &mut host),
            0
        );
        assert_eq!(
            host.events,
            ["prepare", "systems", "geometry", "axes", "render"]
        );
    }

    struct CollectionHost {
        systems: Vec<SeparationCoordinateSystemHandle>,
        events: Vec<String>,
    }

    impl DiagramCurveCollectionHost for CollectionHost {
        fn prepare_diagram(&mut self) {
            self.events.push("prepare".to_owned());
        }

        fn coordinate_systems(&mut self) -> Vec<SeparationCoordinateSystemHandle> {
            self.events.push("systems".to_owned());
            self.systems.clone()
        }

        fn collect_separated_y_axes(
            &mut self,
            coordinate_system: SeparationCoordinateSystemHandle,
        ) {
            self.events.push(format!("collect:{}", coordinate_system.0));
        }

        fn serialize_diagram(&mut self) {
            self.events.push("serialize".to_owned());
        }

        fn refresh_axis_state(&mut self) {
            self.events.push("axis-state".to_owned());
        }

        fn recalculate_geometry(&mut self) {
            self.events.push("geometry".to_owned());
        }

        fn refresh_layout_associations(&mut self) {
            self.events.push("associations".to_owned());
        }

        fn render_diagram(&mut self) {
            self.events.push("render".to_owned());
        }
    }

    #[test]
    fn collection_serializes_after_each_system_then_runs_complete_refresh() {
        let mut host = CollectionHost {
            systems: vec![
                SeparationCoordinateSystemHandle(3),
                SeparationCoordinateSystemHandle(5),
            ],
            events: Vec::new(),
        };

        assert_eq!(collect_all_coordinate_system_curves(&mut host), 2);
        assert_eq!(
            host.events,
            [
                "prepare",
                "systems",
                "collect:3",
                "serialize",
                "collect:5",
                "serialize",
                "axis-state",
                "geometry",
                "associations",
                "render",
            ]
        );
    }

    #[test]
    fn empty_collection_still_refreshes_axis_state_through_render() {
        let mut host = CollectionHost {
            systems: Vec::new(),
            events: Vec::new(),
        };

        assert_eq!(collect_all_coordinate_system_curves(&mut host), 0);
        assert_eq!(
            host.events,
            [
                "prepare",
                "systems",
                "axis-state",
                "geometry",
                "associations",
                "render",
            ]
        );
    }
}
