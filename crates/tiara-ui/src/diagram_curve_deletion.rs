//! Coordination for selected diagram curve deletion.

use crate::diagram_selection::CURVE_CATEGORY;

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct DeletableCurveHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct CurveOwnerHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CurveDeletionChange {
    pub axis_removed: bool,
    pub coordinate_system_removed: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CurveDeletionStatus {
    NotApplicable,
    Cancelled,
    PartialFailure,
    Completed,
}

pub trait DiagramCurveDeletionHost {
    fn confirm_curve_deletion(&mut self) -> bool;
    fn resolve_curve_owner(&mut self, curve: DeletableCurveHandle) -> Option<CurveOwnerHandle>;
    fn owner_type(&mut self, owner: CurveOwnerHandle) -> u8;
    fn clear_special_curve_selection(&mut self, curve: DeletableCurveHandle);
    fn detach_cursor_references(&mut self, curve: DeletableCurveHandle);
    fn delete_normal_curve(
        &mut self,
        curve: DeletableCurveHandle,
        owner: CurveOwnerHandle,
        remove_empty_containers: bool,
    ) -> CurveDeletionChange;
    fn diagram_is_empty(&mut self) -> bool;
    fn notify_empty_diagram_owner(&mut self);
    fn recalculate_full_layout(&mut self);
    fn recalculate_owner_layout(&mut self, owner: CurveOwnerHandle);
    fn repaint_diagram(&mut self);
    fn refresh_surviving_owner(&mut self, owner: CurveOwnerHandle);
    fn serialize_manual_scale_if_needed(&mut self, context: &str);
}

/// Implements Ghidra function `FUN_01ad6320` at `0x01AD6320`.
///
/// Requires an exact curve-only selection and optional confirmation. It handles
/// selected curves in order, detaches cursor references, deletes normal curves
/// and empty containers through the host, and keeps type-five curves alive by
/// clearing only their selected state. Owner resolution failure stops after any
/// earlier changes without rollback or final refresh. A completed operation
/// selects the recovered empty-diagram or surviving-diagram refresh path.
pub fn delete_selected_diagram_curves(
    selection_category: u8,
    selected: &[DeletableCurveHandle],
    remove_empty_containers: bool,
    confirmation_required: bool,
    serialization_context: &str,
    host: &mut impl DiagramCurveDeletionHost,
) -> CurveDeletionStatus {
    if selection_category != CURVE_CATEGORY || selected.is_empty() {
        return CurveDeletionStatus::NotApplicable;
    }
    if confirmation_required && !host.confirm_curve_deletion() {
        return CurveDeletionStatus::Cancelled;
    }

    let mut axis_removed = false;
    let mut coordinate_system_removed = false;
    let mut last_owner = None;
    for curve in selected {
        let Some(owner) = host.resolve_curve_owner(*curve) else {
            return CurveDeletionStatus::PartialFailure;
        };
        last_owner = Some(owner);
        if host.owner_type(owner) == 5 {
            host.clear_special_curve_selection(*curve);
            continue;
        }

        host.detach_cursor_references(*curve);
        let change = host.delete_normal_curve(*curve, owner, remove_empty_containers);
        axis_removed |= change.axis_removed;
        coordinate_system_removed |= change.coordinate_system_removed;
    }

    if remove_empty_containers && host.diagram_is_empty() {
        host.notify_empty_diagram_owner();
        return CurveDeletionStatus::Completed;
    }

    if axis_removed {
        if coordinate_system_removed {
            host.recalculate_full_layout();
        } else if let Some(owner) = last_owner {
            host.recalculate_owner_layout(owner);
        }
    }
    if coordinate_system_removed {
        host.repaint_diagram();
    } else if let Some(owner) = last_owner {
        host.refresh_surviving_owner(owner);
    }
    host.serialize_manual_scale_if_needed(serialization_context);
    CurveDeletionStatus::Completed
}

#[cfg(test)]
mod tests {
    use std::collections::{HashMap, VecDeque};

    use super::{
        CurveDeletionChange, CurveDeletionStatus, CurveOwnerHandle, DeletableCurveHandle,
        DiagramCurveDeletionHost, delete_selected_diagram_curves,
    };

    struct Host {
        confirmed: bool,
        owners: HashMap<DeletableCurveHandle, CurveOwnerHandle>,
        owner_types: HashMap<CurveOwnerHandle, u8>,
        changes: VecDeque<CurveDeletionChange>,
        empty: bool,
        events: Vec<String>,
    }

    impl DiagramCurveDeletionHost for Host {
        fn confirm_curve_deletion(&mut self) -> bool {
            self.events.push("confirm".to_owned());
            self.confirmed
        }

        fn resolve_curve_owner(&mut self, curve: DeletableCurveHandle) -> Option<CurveOwnerHandle> {
            self.events.push(format!("resolve:{}", curve.0));
            self.owners.get(&curve).copied()
        }

        fn owner_type(&mut self, owner: CurveOwnerHandle) -> u8 {
            self.owner_types[&owner]
        }

        fn clear_special_curve_selection(&mut self, curve: DeletableCurveHandle) {
            self.events.push(format!("clear:{}", curve.0));
        }

        fn detach_cursor_references(&mut self, curve: DeletableCurveHandle) {
            self.events.push(format!("detach:{}", curve.0));
        }

        fn delete_normal_curve(
            &mut self,
            curve: DeletableCurveHandle,
            owner: CurveOwnerHandle,
            remove_empty_containers: bool,
        ) -> CurveDeletionChange {
            self.events.push(format!(
                "delete:{}:{}:{remove_empty_containers}",
                curve.0, owner.0
            ));
            self.changes.pop_front().unwrap_or(CurveDeletionChange {
                axis_removed: false,
                coordinate_system_removed: false,
            })
        }

        fn diagram_is_empty(&mut self) -> bool {
            self.events.push("empty?".to_owned());
            self.empty
        }

        fn notify_empty_diagram_owner(&mut self) {
            self.events.push("empty-owner".to_owned());
        }

        fn recalculate_full_layout(&mut self) {
            self.events.push("full-layout".to_owned());
        }

        fn recalculate_owner_layout(&mut self, owner: CurveOwnerHandle) {
            self.events.push(format!("owner-layout:{}", owner.0));
        }

        fn repaint_diagram(&mut self) {
            self.events.push("repaint".to_owned());
        }

        fn refresh_surviving_owner(&mut self, owner: CurveOwnerHandle) {
            self.events.push(format!("owner-refresh:{}", owner.0));
        }

        fn serialize_manual_scale_if_needed(&mut self, context: &str) {
            self.events.push(format!("manual-scale:{context}"));
        }
    }

    fn host() -> Host {
        Host {
            confirmed: true,
            owners: HashMap::new(),
            owner_types: HashMap::new(),
            changes: VecDeque::new(),
            empty: false,
            events: Vec::new(),
        }
    }

    #[test]
    fn category_mismatch_and_rejected_confirmation_do_not_delete() {
        let mut mismatch_host = host();
        let mut cancelled_host = host();
        cancelled_host.confirmed = false;

        assert_eq!(
            delete_selected_diagram_curves(
                3,
                &[DeletableCurveHandle(1)],
                true,
                true,
                "m",
                &mut mismatch_host,
            ),
            CurveDeletionStatus::NotApplicable
        );
        assert_eq!(
            delete_selected_diagram_curves(
                2,
                &[DeletableCurveHandle(1)],
                true,
                true,
                "m",
                &mut cancelled_host,
            ),
            CurveDeletionStatus::Cancelled
        );
        assert!(mismatch_host.events.is_empty());
        assert_eq!(cancelled_host.events, ["confirm"]);
    }

    #[test]
    fn type_five_clears_selection_without_deleting_the_curve() {
        let mut host = host();
        host.owners
            .insert(DeletableCurveHandle(2), CurveOwnerHandle(20));
        host.owner_types.insert(CurveOwnerHandle(20), 5);

        let status = delete_selected_diagram_curves(
            2,
            &[DeletableCurveHandle(2)],
            false,
            false,
            "context",
            &mut host,
        );

        assert_eq!(status, CurveDeletionStatus::Completed);
        assert_eq!(
            host.events,
            [
                "resolve:2",
                "clear:2",
                "owner-refresh:20",
                "manual-scale:context",
            ]
        );
    }

    #[test]
    fn removed_axes_and_coordinate_systems_use_full_refresh() {
        let mut host = host();
        host.owners
            .insert(DeletableCurveHandle(3), CurveOwnerHandle(30));
        host.owners
            .insert(DeletableCurveHandle(4), CurveOwnerHandle(40));
        host.owner_types.insert(CurveOwnerHandle(30), 0);
        host.owner_types.insert(CurveOwnerHandle(40), 0);
        host.changes.push_back(CurveDeletionChange {
            axis_removed: true,
            coordinate_system_removed: false,
        });
        host.changes.push_back(CurveDeletionChange {
            axis_removed: false,
            coordinate_system_removed: true,
        });

        let status = delete_selected_diagram_curves(
            2,
            &[DeletableCurveHandle(3), DeletableCurveHandle(4)],
            true,
            false,
            "save",
            &mut host,
        );

        assert_eq!(status, CurveDeletionStatus::Completed);
        assert_eq!(
            &host.events[host.events.len() - 4..],
            ["empty?", "full-layout", "repaint", "manual-scale:save"]
        );
    }

    #[test]
    fn empty_diagram_notifies_owner_without_manual_scale_serialization() {
        let mut host = host();
        host.empty = true;
        host.owners
            .insert(DeletableCurveHandle(5), CurveOwnerHandle(50));
        host.owner_types.insert(CurveOwnerHandle(50), 0);
        host.changes.push_back(CurveDeletionChange {
            axis_removed: true,
            coordinate_system_removed: true,
        });

        let status = delete_selected_diagram_curves(
            2,
            &[DeletableCurveHandle(5)],
            true,
            false,
            "save",
            &mut host,
        );

        assert_eq!(status, CurveDeletionStatus::Completed);
        assert!(
            host.events
                .ends_with(&["empty?".to_owned(), "empty-owner".to_owned()])
        );
        assert!(
            !host
                .events
                .iter()
                .any(|event| event.starts_with("manual-scale"))
        );
    }

    #[test]
    fn owner_resolution_failure_keeps_prior_deletion_without_final_refresh() {
        let mut host = host();
        host.owners
            .insert(DeletableCurveHandle(6), CurveOwnerHandle(60));
        host.owner_types.insert(CurveOwnerHandle(60), 0);

        let status = delete_selected_diagram_curves(
            2,
            &[DeletableCurveHandle(6), DeletableCurveHandle(7)],
            false,
            false,
            "save",
            &mut host,
        );

        assert_eq!(status, CurveDeletionStatus::PartialFailure);
        assert_eq!(
            host.events,
            ["resolve:6", "detach:6", "delete:6:60:false", "resolve:7"]
        );
    }
}
