//! Axis removal and curve migration for the diagram Collect Curves command.

use crate::diagram_selection::AXIS_CATEGORY;

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct CollectAxisHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct CollectCoordinateSystemHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AxisOrientation {
    X,
    Y,
}

pub trait DiagramAxisCollectionHost {
    fn resolve_selected_axis(
        &mut self,
        selected_axis: CollectAxisHandle,
    ) -> Option<(CollectCoordinateSystemHandle, AxisOrientation)>;
    fn remove_axis_and_get_primary(
        &mut self,
        coordinate_system: CollectCoordinateSystemHandle,
        selected_axis: CollectAxisHandle,
        orientation: AxisOrientation,
    ) -> Option<CollectAxisHandle>;
    fn migrate_curves(
        &mut self,
        removed_axis: CollectAxisHandle,
        primary_axis: CollectAxisHandle,
        orientation: AxisOrientation,
    );
    fn linked_axis(&mut self, removed_axis: CollectAxisHandle) -> Option<CollectAxisHandle>;
    fn migrate_linked_curves(
        &mut self,
        linked_axis: CollectAxisHandle,
        primary_axis: CollectAxisHandle,
        orientation: AxisOrientation,
    );
    fn repair_or_remove_grids(
        &mut self,
        coordinate_system: CollectCoordinateSystemHandle,
        removed_axis: CollectAxisHandle,
        primary_axis: CollectAxisHandle,
        orientation: AxisOrientation,
    );
    fn destroy_removed_axes(
        &mut self,
        removed_axis: CollectAxisHandle,
        linked_axis: Option<CollectAxisHandle>,
    );
    fn recalculate_coordinate_system(&mut self, coordinate_system: CollectCoordinateSystemHandle);
    fn refresh_coordinate_system(&mut self, coordinate_system: CollectCoordinateSystemHandle);
    fn flush_diagram_refresh(&mut self);
}

/// Implements Ghidra function `FUN_01ad6c70` at `0x01AD6C70`.
///
/// Removes the selected axis from its orientation collection, migrates its
/// curves and any linked twin curves to the first surviving axis, repairs grid
/// links, and destroys the removed axis objects. A non-axis selection, failed
/// owner lookup, or missing survivor is a silent no-op. The optional refresh
/// runs only after a completed migration.
pub fn collect_selected_axis_curves(
    selection_category: u8,
    selected_axis: Option<CollectAxisHandle>,
    refresh: bool,
    host: &mut impl DiagramAxisCollectionHost,
) -> bool {
    if selection_category != AXIS_CATEGORY {
        return false;
    }
    let Some(selected_axis) = selected_axis else {
        return false;
    };
    let Some((coordinate_system, orientation)) = host.resolve_selected_axis(selected_axis) else {
        return false;
    };
    let Some(primary_axis) =
        host.remove_axis_and_get_primary(coordinate_system, selected_axis, orientation)
    else {
        return false;
    };

    host.migrate_curves(selected_axis, primary_axis, orientation);
    let linked_axis = host.linked_axis(selected_axis);
    if let Some(linked_axis) = linked_axis {
        host.migrate_linked_curves(linked_axis, primary_axis, orientation);
    }
    host.repair_or_remove_grids(coordinate_system, selected_axis, primary_axis, orientation);
    host.destroy_removed_axes(selected_axis, linked_axis);

    if refresh {
        host.recalculate_coordinate_system(coordinate_system);
        host.refresh_coordinate_system(coordinate_system);
        host.flush_diagram_refresh();
    }
    true
}

#[cfg(test)]
mod tests {
    use super::{
        AxisOrientation, CollectAxisHandle, CollectCoordinateSystemHandle,
        DiagramAxisCollectionHost, collect_selected_axis_curves,
    };

    struct Host {
        resolution: Option<(CollectCoordinateSystemHandle, AxisOrientation)>,
        primary: Option<CollectAxisHandle>,
        linked: Option<CollectAxisHandle>,
        events: Vec<String>,
    }

    impl DiagramAxisCollectionHost for Host {
        fn resolve_selected_axis(
            &mut self,
            selected_axis: CollectAxisHandle,
        ) -> Option<(CollectCoordinateSystemHandle, AxisOrientation)> {
            self.events.push(format!("resolve:{}", selected_axis.0));
            self.resolution
        }

        fn remove_axis_and_get_primary(
            &mut self,
            coordinate_system: CollectCoordinateSystemHandle,
            selected_axis: CollectAxisHandle,
            orientation: AxisOrientation,
        ) -> Option<CollectAxisHandle> {
            self.events.push(format!(
                "remove:{}:{}:{orientation:?}",
                coordinate_system.0, selected_axis.0
            ));
            self.primary
        }

        fn migrate_curves(
            &mut self,
            removed_axis: CollectAxisHandle,
            primary_axis: CollectAxisHandle,
            orientation: AxisOrientation,
        ) {
            self.events.push(format!(
                "migrate:{}:{}:{orientation:?}",
                removed_axis.0, primary_axis.0
            ));
        }

        fn linked_axis(&mut self, removed_axis: CollectAxisHandle) -> Option<CollectAxisHandle> {
            self.events.push(format!("linked:{}", removed_axis.0));
            self.linked
        }

        fn migrate_linked_curves(
            &mut self,
            linked_axis: CollectAxisHandle,
            primary_axis: CollectAxisHandle,
            orientation: AxisOrientation,
        ) {
            self.events.push(format!(
                "linked-migrate:{}:{}:{orientation:?}",
                linked_axis.0, primary_axis.0
            ));
        }

        fn repair_or_remove_grids(
            &mut self,
            coordinate_system: CollectCoordinateSystemHandle,
            removed_axis: CollectAxisHandle,
            primary_axis: CollectAxisHandle,
            orientation: AxisOrientation,
        ) {
            self.events.push(format!(
                "grids:{}:{}:{}:{orientation:?}",
                coordinate_system.0, removed_axis.0, primary_axis.0
            ));
        }

        fn destroy_removed_axes(
            &mut self,
            removed_axis: CollectAxisHandle,
            linked_axis: Option<CollectAxisHandle>,
        ) {
            self.events.push(format!(
                "destroy:{}:{}",
                removed_axis.0,
                linked_axis.map_or(0, |axis| axis.0)
            ));
        }

        fn recalculate_coordinate_system(
            &mut self,
            coordinate_system: CollectCoordinateSystemHandle,
        ) {
            self.events.push(format!("layout:{}", coordinate_system.0));
        }

        fn refresh_coordinate_system(&mut self, coordinate_system: CollectCoordinateSystemHandle) {
            self.events.push(format!("refresh:{}", coordinate_system.0));
        }

        fn flush_diagram_refresh(&mut self) {
            self.events.push("flush".to_owned());
        }
    }

    fn host() -> Host {
        Host {
            resolution: Some((CollectCoordinateSystemHandle(10), AxisOrientation::Y)),
            primary: Some(CollectAxisHandle(2)),
            linked: None,
            events: Vec::new(),
        }
    }

    #[test]
    fn invalid_selection_and_missing_owner_are_silent_noops() {
        let mut invalid_host = host();
        let mut missing_host = host();
        missing_host.resolution = None;

        assert!(!collect_selected_axis_curves(
            2,
            Some(CollectAxisHandle(1)),
            true,
            &mut invalid_host,
        ));
        assert!(!collect_selected_axis_curves(
            1,
            Some(CollectAxisHandle(1)),
            true,
            &mut missing_host,
        ));

        assert!(invalid_host.events.is_empty());
        assert_eq!(missing_host.events, ["resolve:1"]);
    }

    #[test]
    fn missing_surviving_axis_stops_after_removal_attempt() {
        let mut host = host();
        host.primary = None;

        assert!(!collect_selected_axis_curves(
            1,
            Some(CollectAxisHandle(1)),
            true,
            &mut host,
        ));

        assert_eq!(host.events, ["resolve:1", "remove:10:1:Y"]);
    }

    #[test]
    fn migration_moves_primary_and_linked_curves_then_refreshes() {
        let mut host = host();
        host.linked = Some(CollectAxisHandle(3));

        assert!(collect_selected_axis_curves(
            1,
            Some(CollectAxisHandle(1)),
            true,
            &mut host,
        ));

        assert_eq!(
            host.events,
            [
                "resolve:1",
                "remove:10:1:Y",
                "migrate:1:2:Y",
                "linked:1",
                "linked-migrate:3:2:Y",
                "grids:10:1:2:Y",
                "destroy:1:3",
                "layout:10",
                "refresh:10",
                "flush",
            ]
        );
    }

    #[test]
    fn disabled_refresh_stops_after_destroying_removed_axes() {
        let mut host = host();

        assert!(collect_selected_axis_curves(
            1,
            Some(CollectAxisHandle(1)),
            false,
            &mut host,
        ));

        assert_eq!(host.events.last().map(String::as_str), Some("destroy:1:0"));
        assert!(!host.events.iter().any(|event| event == "layout:10"));
    }
}
