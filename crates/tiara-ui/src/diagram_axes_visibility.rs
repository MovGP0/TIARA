//! Coordinate-system axis visibility updates.

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct CoordinateSystemHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CoordinateSystemCandidate {
    pub handle: CoordinateSystemHandle,
    pub is_standard: bool,
}

pub trait DiagramAxesVisibilityHost {
    fn set_axes_visible(&mut self, system: CoordinateSystemHandle, visible: bool);
    fn recalculate_diagram(&mut self);
    fn redraw_complete_diagram(&mut self);
}

pub trait DiagramAxesVisibilityQueryHost {
    fn axes_visible(&mut self, system: CoordinateSystemHandle) -> bool;
}

/// Implements Ghidra function `FUN_01ae9060` at `0x01AE9060`.
///
/// Applies one axis-display state to every recovered standard coordinate
/// system. Each matching update is followed immediately by a complete diagram
/// recalculation and redraw. An empty collection or a collection with no class
/// match is a no-op.
pub fn apply_axes_visibility_to_standard_systems(
    systems: &[CoordinateSystemCandidate],
    visible: bool,
    host: &mut impl DiagramAxesVisibilityHost,
) -> usize {
    let mut updated = 0;
    for system in systems.iter().filter(|system| system.is_standard) {
        host.set_axes_visible(system.handle, visible);
        host.recalculate_diagram();
        host.redraw_complete_diagram();
        updated += 1;
    }
    updated
}

/// Implements Ghidra function `FUN_01ae9120` at `0x01AE9120`.
///
/// Finds the first recovered standard coordinate system and returns the axis
/// display state from its first display object through the host adapter. Later
/// matches are not read. When no matching coordinate system exists, the menu
/// state defaults to visible.
pub fn first_standard_system_axes_visible(
    systems: &[CoordinateSystemCandidate],
    host: &mut impl DiagramAxesVisibilityQueryHost,
) -> bool {
    systems
        .iter()
        .find(|system| system.is_standard)
        .is_none_or(|system| host.axes_visible(system.handle))
}

#[cfg(test)]
mod tests {
    use super::{
        CoordinateSystemCandidate, CoordinateSystemHandle, DiagramAxesVisibilityHost,
        DiagramAxesVisibilityQueryHost, apply_axes_visibility_to_standard_systems,
        first_standard_system_axes_visible,
    };

    #[derive(Default)]
    struct Host(Vec<String>);

    impl DiagramAxesVisibilityHost for Host {
        fn set_axes_visible(&mut self, system: CoordinateSystemHandle, visible: bool) {
            self.0.push(format!("set:{}:{visible}", system.0));
        }

        fn recalculate_diagram(&mut self) {
            self.0.push("recalculate".to_owned());
        }

        fn redraw_complete_diagram(&mut self) {
            self.0.push("redraw-complete".to_owned());
        }
    }

    impl DiagramAxesVisibilityQueryHost for Host {
        fn axes_visible(&mut self, system: CoordinateSystemHandle) -> bool {
            self.0.push(format!("visible:{}", system.0));
            system.0 == 3
        }
    }

    #[test]
    fn each_standard_system_is_updated_recalculated_and_redrawn_in_order() {
        let mut host = Host::default();
        let systems = [
            CoordinateSystemCandidate {
                handle: CoordinateSystemHandle(3),
                is_standard: true,
            },
            CoordinateSystemCandidate {
                handle: CoordinateSystemHandle(5),
                is_standard: false,
            },
            CoordinateSystemCandidate {
                handle: CoordinateSystemHandle(7),
                is_standard: true,
            },
        ];

        assert_eq!(
            apply_axes_visibility_to_standard_systems(&systems, false, &mut host),
            2
        );
        assert_eq!(
            host.0,
            [
                "set:3:false",
                "recalculate",
                "redraw-complete",
                "set:7:false",
                "recalculate",
                "redraw-complete",
            ]
        );
    }

    #[test]
    fn empty_or_nonmatching_collection_is_a_no_op() {
        let mut empty_host = Host::default();
        let mut unmatched_host = Host::default();

        assert_eq!(
            apply_axes_visibility_to_standard_systems(&[], true, &mut empty_host),
            0
        );
        assert_eq!(
            apply_axes_visibility_to_standard_systems(
                &[CoordinateSystemCandidate {
                    handle: CoordinateSystemHandle(5),
                    is_standard: false,
                }],
                true,
                &mut unmatched_host,
            ),
            0
        );
        assert!(empty_host.0.is_empty());
        assert!(unmatched_host.0.is_empty());
    }

    #[test]
    fn visibility_query_reads_only_the_first_standard_system() {
        let mut host = Host::default();
        let systems = [
            CoordinateSystemCandidate {
                handle: CoordinateSystemHandle(8),
                is_standard: false,
            },
            CoordinateSystemCandidate {
                handle: CoordinateSystemHandle(3),
                is_standard: true,
            },
            CoordinateSystemCandidate {
                handle: CoordinateSystemHandle(7),
                is_standard: true,
            },
        ];

        assert!(first_standard_system_axes_visible(&systems, &mut host));
        assert_eq!(host.0, ["visible:3"]);
    }

    #[test]
    fn visibility_query_defaults_to_true_without_a_standard_system() {
        let mut host = Host::default();

        assert!(first_standard_system_axes_visible(
            &[CoordinateSystemCandidate {
                handle: CoordinateSystemHandle(8),
                is_standard: false,
            }],
            &mut host,
        ));
        assert!(host.0.is_empty());
    }
}
