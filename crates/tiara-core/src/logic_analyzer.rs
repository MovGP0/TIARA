//! Logic Analyzer curve, channel, group, pattern, and acquisition state.

pub const DIGITAL_CURVE_TYPE: u8 = 10;
pub const MAX_PATTERN_ROWS: usize = 16;

#[derive(Debug, Clone, PartialEq)]
pub struct DigitalTrace {
    pub active: bool,
    pub name: String,
    pub color: u32,
    pub lower_bound: f64,
    pub upper_bound: f64,
}

#[derive(Debug, Clone, PartialEq)]
pub struct DigitalCurve {
    pub curve_type: u8,
    pub traces: Vec<DigitalTrace>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct AnalyzerChannel {
    pub enabled: bool,
    pub name: String,
    pub color: u32,
    pub active_index: usize,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TriggerPattern {
    pub markers: Vec<char>,
}

impl TriggerPattern {
    #[must_use]
    pub fn default_for_width(width: usize) -> Self {
        Self {
            markers: vec!['X'; width],
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ChannelGroup {
    pub label: String,
    pub first_channel: usize,
    pub last_channel: usize,
    pub enabled: bool,
    pub patterns: Vec<TriggerPattern>,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct HorizontalBounds {
    pub left: f64,
    pub right: f64,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum AcquisitionLifecycle {
    #[default]
    Idle,
    Active,
    StopRequested,
}

#[derive(Debug, Clone, PartialEq)]
pub struct AnalyzerModel {
    baseline_channel_count: usize,
    channels: Vec<AnalyzerChannel>,
    groups: Vec<ChannelGroup>,
    selected_channel: Option<usize>,
    selected_group: Option<usize>,
    selected_pattern_group: Option<usize>,
    selected_pattern: Option<usize>,
    buffered_curve: Option<DigitalCurve>,
    bounds: HorizontalBounds,
    lifecycle: AcquisitionLifecycle,
    status: i32,
}

impl AnalyzerModel {
    #[must_use]
    pub const fn new(
        baseline_channel_count: usize,
        channels: Vec<AnalyzerChannel>,
        groups: Vec<ChannelGroup>,
        bounds: HorizontalBounds,
    ) -> Self {
        Self {
            baseline_channel_count,
            channels,
            groups,
            selected_channel: None,
            selected_group: None,
            selected_pattern_group: None,
            selected_pattern: None,
            buffered_curve: None,
            bounds,
            lifecycle: AcquisitionLifecycle::Idle,
            status: 0,
        }
    }

    #[must_use]
    pub fn load_compatible_curve(&mut self, curve: Option<DigitalCurve>) -> bool {
        let Some(curve) = curve else {
            return false;
        };
        if curve.curve_type != DIGITAL_CURVE_TYPE {
            return false;
        }
        self.channels.truncate(self.baseline_channel_count);
        let mut active_bounds: Option<HorizontalBounds> = None;
        for trace in curve.traces.iter().filter(|trace| trace.active) {
            self.channels.push(AnalyzerChannel {
                enabled: true,
                name: trace.name.clone(),
                color: trace.color,
                active_index: 0,
            });
            active_bounds = Some(active_bounds.map_or_else(
                || HorizontalBounds {
                    left: trace.lower_bound,
                    right: trace.upper_bound,
                },
                |bounds| HorizontalBounds {
                    left: bounds.left.min(trace.lower_bound),
                    right: bounds.right.max(trace.upper_bound),
                },
            ));
        }
        if let Some(bounds) = active_bounds {
            self.bounds = bounds;
        }
        self.buffered_curve = Some(curve);
        self.recompute_active_indexes();
        true
    }

    #[must_use]
    pub fn numbered_curve_for_publish(&self) -> Option<DigitalCurve> {
        let mut curve = self.buffered_curve.clone()?;
        if curve.curve_type != DIGITAL_CURVE_TYPE {
            return None;
        }
        for (active_number, trace) in curve
            .traces
            .iter_mut()
            .filter(|trace| trace.active)
            .enumerate()
        {
            let active_number = active_number + 1;
            trace.name = format!("{active_number}.{}", trace.name);
        }
        Some(curve)
    }

    pub const fn select_channel(&mut self, index: Option<usize>) {
        self.selected_channel = index;
        self.selected_group = None;
    }

    pub const fn select_group(&mut self, index: Option<usize>) {
        self.selected_group = index;
    }

    pub const fn select_pattern_group(&mut self, index: Option<usize>) {
        self.selected_pattern_group = index;
    }

    pub const fn select_pattern(&mut self, index: Option<usize>) {
        self.selected_pattern = index;
    }

    #[must_use]
    pub fn apply_selected_enabled(&mut self, enabled: bool) -> bool {
        if let Some(group_index) = self.selected_group {
            let Some(group) = self.groups.get(group_index) else {
                return false;
            };
            let (first, last) = (group.first_channel, group.last_channel);
            if first > last || last >= self.channels.len() {
                return false;
            }
            for channel in &mut self.channels[first..=last] {
                channel.enabled = enabled;
            }
            self.groups[group_index].enabled = enabled;
        } else {
            let Some(index) = self.selected_channel else {
                return false;
            };
            let Some(channel) = self.channels.get_mut(index) else {
                return false;
            };
            channel.enabled = enabled;
        }
        self.recompute_active_indexes();
        true
    }

    #[must_use]
    pub fn delete_selected_group(&mut self) -> bool {
        let Some(index) = self.selected_group else {
            return false;
        };
        if index >= self.groups.len() {
            return false;
        }
        self.groups.remove(index);
        self.selected_group = None;
        if self.selected_pattern_group == Some(index) {
            self.selected_pattern_group = None;
            self.selected_pattern = None;
        }
        true
    }

    #[must_use]
    pub fn insert_default_pattern(&mut self) -> Option<String> {
        let group_index = self.selected_pattern_group?;
        let pattern_index = self.selected_pattern?;
        let group = self.groups.get_mut(group_index)?;
        if pattern_index >= group.patterns.len() || group.patterns.len() >= MAX_PATTERN_ROWS {
            return None;
        }
        let width = group
            .last_channel
            .checked_sub(group.first_channel)
            .map_or(0, |difference| difference + 1);
        group
            .patterns
            .insert(pattern_index, TriggerPattern::default_for_width(width));
        Some(Self::format_pattern(group, pattern_index))
    }

    #[must_use]
    pub fn delete_selected_pattern(&mut self) -> Option<String> {
        let group_index = self.selected_pattern_group?;
        let pattern_index = self.selected_pattern?;
        let group = self.groups.get_mut(group_index)?;
        if pattern_index + 1 >= group.patterns.len() {
            return None;
        }
        group.patterns.remove(pattern_index);
        Some(Self::format_pattern(group, pattern_index))
    }

    #[must_use]
    pub fn selected_group_endpoint(&self, upper: bool) -> Option<usize> {
        let group = self.groups.get(self.selected_group?)?;
        Some(if upper {
            group.last_channel
        } else {
            group.first_channel
        })
    }

    #[must_use]
    pub fn has_patterns(&self) -> bool {
        self.groups.iter().any(|group| !group.patterns.is_empty())
    }

    pub fn set_acquired_curve(&mut self, curve: DigitalCurve) {
        self.buffered_curve = Some(curve);
    }

    #[must_use]
    pub const fn begin_acquisition(&mut self) -> bool {
        if !matches!(self.lifecycle, AcquisitionLifecycle::Idle) {
            return false;
        }
        self.lifecycle = AcquisitionLifecycle::Active;
        true
    }

    pub const fn finish_acquisition(&mut self, status: i32) {
        self.lifecycle = AcquisitionLifecycle::Idle;
        self.status = status;
    }

    #[must_use]
    pub const fn request_stop(&mut self) -> bool {
        let was_active = matches!(self.lifecycle, AcquisitionLifecycle::Active);
        self.lifecycle = AcquisitionLifecycle::StopRequested;
        self.status = 2;
        was_active
    }

    #[must_use]
    pub fn channels(&self) -> &[AnalyzerChannel] {
        &self.channels
    }

    #[must_use]
    pub fn groups(&self) -> &[ChannelGroup] {
        &self.groups
    }

    #[must_use]
    pub const fn buffered_curve(&self) -> Option<&DigitalCurve> {
        self.buffered_curve.as_ref()
    }

    #[must_use]
    pub const fn bounds(&self) -> HorizontalBounds {
        self.bounds
    }

    #[must_use]
    pub const fn lifecycle(&self) -> AcquisitionLifecycle {
        self.lifecycle
    }

    #[must_use]
    pub const fn status(&self) -> i32 {
        self.status
    }

    fn recompute_active_indexes(&mut self) {
        let mut active_index = 0;
        for channel in &mut self.channels {
            channel.active_index = active_index;
            if channel.enabled {
                active_index += 1;
            }
        }
    }

    fn format_pattern(group: &ChannelGroup, index: usize) -> String {
        let markers = group.patterns[index].markers.iter().collect::<String>();
        format!("{}.[ {markers}]", index + 1)
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum VerticalDirection {
    Up,
    Down,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct AxisWindow {
    pub start: usize,
    pub visible_count: usize,
    pub active_axis_count: usize,
}

impl AxisWindow {
    #[must_use]
    pub const fn scroll(&mut self, direction: VerticalDirection) -> bool {
        match direction {
            VerticalDirection::Up if self.start > 0 => {
                self.start -= 1;
                true
            }
            VerticalDirection::Down
                if self.start.saturating_add(self.visible_count) < self.active_axis_count =>
            {
                self.start += 1;
                true
            }
            _ => false,
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn channel(name: &str) -> AnalyzerChannel {
        AnalyzerChannel {
            enabled: true,
            name: name.to_owned(),
            color: 0,
            active_index: 0,
        }
    }

    fn model() -> AnalyzerModel {
        AnalyzerModel::new(
            1,
            vec![channel("baseline")],
            vec![ChannelGroup {
                label: "bus".to_owned(),
                first_channel: 0,
                last_channel: 1,
                enabled: true,
                patterns: vec![
                    TriggerPattern::default_for_width(2),
                    TriggerPattern::default_for_width(2),
                ],
            }],
            HorizontalBounds {
                left: 0.0,
                right: 1.0,
            },
        )
    }

    #[test]
    fn load_curve_trims_channels_and_combines_bounds() {
        let mut model = model();
        let curve = DigitalCurve {
            curve_type: DIGITAL_CURVE_TYPE,
            traces: vec![
                DigitalTrace {
                    active: true,
                    name: "a".to_owned(),
                    color: 1,
                    lower_bound: -2.0,
                    upper_bound: 4.0,
                },
                DigitalTrace {
                    active: true,
                    name: "b".to_owned(),
                    color: 2,
                    lower_bound: -1.0,
                    upper_bound: 8.0,
                },
            ],
        };
        assert!(model.load_compatible_curve(Some(curve)));
        assert_eq!(model.channels().len(), 3);
        assert!((model.bounds().left + 2.0).abs() <= f64::EPSILON);
        assert!((model.bounds().right - 8.0).abs() <= f64::EPSILON);
    }

    #[test]
    fn incompatible_curve_is_a_noop() {
        let mut model = model();
        assert!(!model.load_compatible_curve(Some(DigitalCurve {
            curve_type: 9,
            traces: Vec::new()
        })));
        assert_eq!(model.channels().len(), 1);
    }

    #[test]
    fn pattern_mutations_protect_the_final_row() {
        let mut model = model();
        model.select_pattern_group(Some(0));
        model.select_pattern(Some(0));
        assert_eq!(model.insert_default_pattern().as_deref(), Some("1.[ XX]"));
        assert_eq!(model.delete_selected_pattern().as_deref(), Some("1.[ XX]"));
        model.select_pattern(Some(1));
        assert!(model.delete_selected_pattern().is_none());
    }

    #[test]
    fn axis_window_steps_only_inside_bounds() {
        let mut window = AxisWindow {
            start: 0,
            visible_count: 2,
            active_axis_count: 3,
        };
        assert!(!window.scroll(VerticalDirection::Up));
        assert!(window.scroll(VerticalDirection::Down));
        assert!(!window.scroll(VerticalDirection::Down));
    }
}
