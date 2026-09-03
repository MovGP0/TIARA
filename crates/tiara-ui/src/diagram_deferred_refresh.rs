//! Deferred processing for queued diagram refresh elements.

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct DeferredRefreshHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DeferredRefreshKind {
    Figure,
    Cursor,
    SpecializedAxis,
    General,
}

pub trait DiagramDeferredRefreshHost {
    fn begin_refresh_pass(&mut self);
    fn refresh_kind(&mut self, element: DeferredRefreshHandle) -> DeferredRefreshKind;
    fn invalidate_figure_bounds(&mut self, figure: DeferredRefreshHandle);
    fn refresh_cursor_position(&mut self, cursor: DeferredRefreshHandle);
    fn recalculate_specialized_axis(&mut self, axis: DeferredRefreshHandle);
    fn refresh_general_element(&mut self, element: DeferredRefreshHandle);
    fn invalidate_owner(&mut self);
    fn clear_refresh_queue(&mut self);
}

pub trait DiagramDeferredCallbackHost {
    fn disable_scroll_timer(&mut self);
    fn process_refresh_queue(&mut self);
}

/// Implements Ghidra function `FUN_01ae5650` at `0x01AE5650`.
///
/// Processes queued diagram elements in snapshot order. Figure types
/// invalidate their bounds, cursors rebuild their mapped display state,
/// specialized axes use their recalculation path, and remaining elements use
/// the general Iced-facing drawing path. Cursor and general work also
/// invalidate the diagram owner when available. The queue is cleared after
/// the pass, including an empty pass.
pub fn process_deferred_diagram_refresh(
    queued: &[DeferredRefreshHandle],
    host: &mut impl DiagramDeferredRefreshHost,
) -> usize {
    host.begin_refresh_pass();
    for element in queued {
        match host.refresh_kind(*element) {
            DeferredRefreshKind::Figure => host.invalidate_figure_bounds(*element),
            DeferredRefreshKind::Cursor => {
                host.refresh_cursor_position(*element);
                host.invalidate_owner();
            }
            DeferredRefreshKind::SpecializedAxis => {
                host.recalculate_specialized_axis(*element);
            }
            DeferredRefreshKind::General => {
                host.refresh_general_element(*element);
                host.invalidate_owner();
            }
        }
    }
    host.clear_refresh_queue();
    queued.len()
}

/// Implements Ghidra function `FUN_01ae5d60` at `0x01AE5D60`.
///
/// Handles the Iced-facing post-scroll delay by disabling the one-shot timer
/// before it starts the queued diagram refresh pass. The callback does not
/// re-enable the timer.
pub fn handle_deferred_scroll_refresh(host: &mut impl DiagramDeferredCallbackHost) {
    host.disable_scroll_timer();
    host.process_refresh_queue();
}

#[cfg(test)]
mod tests {
    use super::{
        DeferredRefreshHandle, DeferredRefreshKind, DiagramDeferredCallbackHost,
        DiagramDeferredRefreshHost, handle_deferred_scroll_refresh,
        process_deferred_diagram_refresh,
    };
    use std::collections::HashMap;

    struct Host {
        kinds: HashMap<DeferredRefreshHandle, DeferredRefreshKind>,
        events: Vec<String>,
    }

    impl DiagramDeferredRefreshHost for Host {
        fn begin_refresh_pass(&mut self) {
            self.events.push("begin".to_owned());
        }

        fn refresh_kind(&mut self, element: DeferredRefreshHandle) -> DeferredRefreshKind {
            self.events.push(format!("kind:{}", element.0));
            self.kinds[&element]
        }

        fn invalidate_figure_bounds(&mut self, figure: DeferredRefreshHandle) {
            self.events.push(format!("figure:{}", figure.0));
        }

        fn refresh_cursor_position(&mut self, cursor: DeferredRefreshHandle) {
            self.events.push(format!("cursor:{}", cursor.0));
        }

        fn recalculate_specialized_axis(&mut self, axis: DeferredRefreshHandle) {
            self.events.push(format!("axis:{}", axis.0));
        }

        fn refresh_general_element(&mut self, element: DeferredRefreshHandle) {
            self.events.push(format!("general:{}", element.0));
        }

        fn invalidate_owner(&mut self) {
            self.events.push("owner".to_owned());
        }

        fn clear_refresh_queue(&mut self) {
            self.events.push("clear".to_owned());
        }
    }

    #[test]
    fn queued_elements_use_type_specific_paths_in_order_then_clear() {
        let queued = [
            DeferredRefreshHandle(1),
            DeferredRefreshHandle(2),
            DeferredRefreshHandle(3),
            DeferredRefreshHandle(4),
        ];
        let mut host = Host {
            kinds: [
                (queued[0], DeferredRefreshKind::Figure),
                (queued[1], DeferredRefreshKind::Cursor),
                (queued[2], DeferredRefreshKind::SpecializedAxis),
                (queued[3], DeferredRefreshKind::General),
            ]
            .into_iter()
            .collect(),
            events: Vec::new(),
        };

        assert_eq!(process_deferred_diagram_refresh(&queued, &mut host), 4);
        assert_eq!(
            host.events,
            [
                "begin",
                "kind:1",
                "figure:1",
                "kind:2",
                "cursor:2",
                "owner",
                "kind:3",
                "axis:3",
                "kind:4",
                "general:4",
                "owner",
                "clear",
            ]
        );
    }

    #[test]
    fn empty_pass_still_prepares_and_clears_queue() {
        let mut host = Host {
            kinds: HashMap::new(),
            events: Vec::new(),
        };

        assert_eq!(process_deferred_diagram_refresh(&[], &mut host), 0);
        assert_eq!(host.events, ["begin", "clear"]);
    }

    #[test]
    fn delayed_callback_disables_timer_before_processing_queue() {
        #[derive(Default)]
        struct CallbackHost {
            events: Vec<&'static str>,
        }

        impl DiagramDeferredCallbackHost for CallbackHost {
            fn disable_scroll_timer(&mut self) {
                self.events.push("disable");
            }

            fn process_refresh_queue(&mut self) {
                self.events.push("process");
            }
        }

        let mut host = CallbackHost::default();
        handle_deferred_scroll_refresh(&mut host);

        assert_eq!(host.events, ["disable", "process"]);
    }
}
