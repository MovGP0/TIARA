#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum BackendKind {
    #[default]
    Normal,
    Alternate,
}

#[derive(Debug, Clone, PartialEq)]
pub struct RecordedSeries {
    pub event_times: Vec<f64>,
}

impl RecordedSeries {
    #[must_use]
    pub fn bracket(&self, requested_time: f64, sentinel: f64) -> EventInterval {
        let lower = self
            .event_times
            .iter()
            .copied()
            .filter(|time| *time <= requested_time)
            .reduce(f64::max)
            .unwrap_or(-sentinel);
        let upper = self
            .event_times
            .iter()
            .copied()
            .filter(|time| *time >= requested_time)
            .reduce(f64::min)
            .unwrap_or(sentinel);
        EventInterval { lower, upper }
    }
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct EventInterval {
    pub lower: f64,
    pub upper: f64,
}

/// Reimplements Ghidra function `FUN_01522550` at `0x01522550`.
///
/// It intersects the recorded-series brackets around one requested time by
/// retaining the greatest lower bound and the smallest upper bound.
#[must_use]
pub fn common_recorded_interval(
    series: &[RecordedSeries],
    requested_time: f64,
    sentinel: f64,
) -> EventInterval {
    series.iter().fold(
        EventInterval {
            lower: -sentinel,
            upper: sentinel,
        },
        |common, item| {
            let interval = item.bracket(requested_time, sentinel);
            EventInterval {
                lower: common.lower.max(interval.lower),
                upper: common.upper.min(interval.upper),
            }
        },
    )
}

#[derive(Debug, Clone, PartialEq)]
pub struct SimulationScenario {
    pub node_count: usize,
    pub end_time: f64,
    pub event_times: Vec<f64>,
    pub recorded_series: Vec<RecordedSeries>,
}

impl Default for SimulationScenario {
    fn default() -> Self {
        let event_times = vec![0.0, 1.0, 2.0, 4.0];
        Self {
            node_count: 8,
            end_time: 4.0,
            recorded_series: vec![RecordedSeries {
                event_times: event_times.clone(),
            }],
            event_times,
        }
    }
}

#[derive(Debug, Clone, PartialEq)]
pub struct BackendModel {
    pub kind: BackendKind,
    pub ideal_mode: bool,
    pub current_nodes: Vec<bool>,
    pub previous_nodes: Vec<bool>,
    pub scenario: SimulationScenario,
    cursor: usize,
}

impl BackendModel {
    #[must_use]
    pub fn new(kind: BackendKind, ideal_mode: bool, scenario: SimulationScenario) -> Self {
        const ALTERNATE_NODE_BUFFER_SIZE: usize = 0x2711;
        let node_count = match kind {
            BackendKind::Normal => scenario.node_count,
            BackendKind::Alternate => ALTERNATE_NODE_BUFFER_SIZE,
        };
        let nodes = vec![false; node_count];
        Self {
            kind,
            ideal_mode,
            current_nodes: nodes.clone(),
            previous_nodes: nodes,
            scenario,
            cursor: 0,
        }
    }

    pub fn reset(&mut self) {
        self.current_nodes.fill(false);
        self.previous_nodes.fill(false);
        self.cursor = 0;
    }

    #[must_use]
    pub fn advance_after(&mut self, current_time: f64) -> AdvanceResult {
        let Some((index, time)) = self
            .scenario
            .event_times
            .iter()
            .copied()
            .enumerate()
            .find(|(_, time)| *time > current_time)
        else {
            return AdvanceResult::Terminal;
        };
        self.cursor = index;
        self.previous_nodes.clone_from(&self.current_nodes);
        if let Some(node) = self
            .current_nodes
            .get_mut(index % self.scenario.node_count.max(1))
        {
            *node = !*node;
        }
        AdvanceResult::Advanced(time)
    }

    pub fn refresh_at(&mut self, time: f64) {
        self.previous_nodes.clone_from(&self.current_nodes);
        self.cursor = self
            .scenario
            .event_times
            .partition_point(|event_time| *event_time <= time)
            .saturating_sub(1);
    }
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub enum AdvanceResult {
    Advanced(f64),
    Terminal,
}

#[cfg(test)]
mod tests {
    use super::{
        AdvanceResult, BackendKind, BackendModel, RecordedSeries, SimulationScenario,
        common_recorded_interval,
    };

    #[test]
    fn common_interval_uses_greatest_lower_and_smallest_upper_bounds() {
        let series = [
            RecordedSeries {
                event_times: vec![1.0, 4.0, 8.0],
            },
            RecordedSeries {
                event_times: vec![2.0, 5.0, 7.0],
            },
        ];
        let interval = common_recorded_interval(&series, 6.0, 100.0);
        assert!((interval.lower - 5.0).abs() <= f64::EPSILON);
        assert!((interval.upper - 7.0).abs() <= f64::EPSILON);
    }

    #[test]
    fn backend_advances_to_strictly_later_events_then_stops() {
        let mut backend =
            BackendModel::new(BackendKind::Normal, false, SimulationScenario::default());
        assert_eq!(backend.advance_after(0.0), AdvanceResult::Advanced(1.0));
        assert_eq!(backend.advance_after(4.0), AdvanceResult::Terminal);
    }

    #[test]
    fn alternate_backend_uses_recovered_fixed_buffer_size() {
        let backend =
            BackendModel::new(BackendKind::Alternate, false, SimulationScenario::default());
        assert_eq!(backend.current_nodes.len(), 0x2711);
        assert_eq!(backend.previous_nodes.len(), 0x2711);
    }
}
