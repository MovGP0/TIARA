//! Statistic dialog calculations, histogram construction, and UI state.

use std::ops::Range;

use tiara_core::analysis_result_publishing::{
    AnalysisPoint, AnalysisResultManager, AnalysisSeries, AxisLabels,
};

pub const TITLE: &str = "Tolerance Analysis - Statistics";
pub const DEFAULT_COLLAPSED_HEIGHT: u32 = 168;
pub const DEFAULT_RESULT_PANEL_HEIGHT: u32 = 112;
pub const LIBRARY_EVALUATION: &str = "Rust iterators and f64::sqrt supply the recovered statistics, Vec supplies owned samples and counters, and tiara-core supplies typed AnalysisSeries publication. No chart-rendering crate is needed because this dialog only prepares and publishes histogram points.";

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum StatisticOption {
    #[default]
    XMaximum,
    YMaximum,
    Cut,
    XMinimum,
    YMinimum,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum DisplayMode {
    Range,
    #[default]
    Distribution,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum Availability {
    Enabled,
    #[default]
    Disabled,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum Visibility {
    Visible,
    #[default]
    Hidden,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum ResultState {
    Active,
    #[default]
    Inactive,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum CalculationGuard {
    SuppressOnce,
    #[default]
    Clear,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum ModalState {
    #[default]
    Open,
    Accepted,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    OptionSelected(StatisticOption),
    InputChanged,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct Extrema {
    pub minimum: f64,
    pub maximum: f64,
    pub first_value: f64,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct RangeSummary {
    pub minimum: f64,
    pub maximum: f64,
    pub range: f64,
    pub special_value: Option<f64>,
    pub maximum_difference: Option<f64>,
    pub minimum_difference: Option<f64>,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct DistributionSummary {
    pub mean: f64,
    pub population_deviation: Option<f64>,
    pub special_value: Option<f64>,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub enum StatisticSummary {
    Range(RangeSummary),
    Distribution(DistributionSummary),
}

#[derive(Debug, Clone, Default, PartialEq)]
pub struct SampleBuffer {
    values: Vec<f64>,
    selected_start: usize,
}

impl SampleBuffer {
    #[must_use]
    pub fn values(&self) -> &[f64] {
        &self.values
    }

    #[must_use]
    pub const fn selected_start(&self) -> usize {
        self.selected_start
    }

    #[must_use]
    pub fn selected_range(&self) -> Range<usize> {
        self.selected_start..self.values.len()
    }

    #[must_use]
    pub fn match_count(&self) -> usize {
        self.values.len()
    }

    #[must_use]
    pub const fn has_special_value(&self) -> bool {
        self.selected_start == 1
    }
}

pub trait StatisticOutputRecord {
    /// Returns the normalized output name used by the Statistic dialog selector.
    fn statistic_name(&self) -> &str;
    fn is_eligible(&self) -> bool;
    fn has_special_state(&self) -> bool;
    fn statistic_value(&self, option: StatisticOption, cut_input: f64) -> f64;
}

fn matching_record<'a, R: StatisticOutputRecord>(
    record: &'a R,
    selected_output: &str,
) -> Option<&'a R> {
    (record.is_eligible() && record.statistic_name() == selected_output).then_some(record)
}

/// Ports Ghidra `FUN_01ac7590` at `0x01AC7590`.
#[must_use]
pub fn prepare_sample_buffer<R: StatisticOutputRecord>(
    records: &[R],
    selected_output: &str,
) -> SampleBuffer {
    let matching: Vec<_> = records
        .iter()
        .filter_map(|record| matching_record(record, selected_output))
        .collect();
    let selected_start =
        usize::from(matching.len() > 1 && matching.iter().any(|record| record.has_special_state()));
    SampleBuffer {
        values: vec![0.0; matching.len()],
        selected_start,
    }
}

/// Ports Ghidra `FUN_01ac5e20` at `0x01AC5E20`.
pub fn extract_sample_values<R: StatisticOutputRecord>(
    records: &[R],
    selected_output: &str,
    option: StatisticOption,
    cut_input: f64,
    samples: &mut SampleBuffer,
) {
    let mut next_regular = samples.selected_start;
    for record in records
        .iter()
        .filter_map(|record| matching_record(record, selected_output))
    {
        let value = record.statistic_value(option, cut_input);
        if record.has_special_state() {
            if let Some(first) = samples.values.first_mut() {
                *first = value;
            }
        } else if let Some(destination) = samples.values.get_mut(next_regular) {
            *destination = value;
            next_regular += 1;
        }
    }
}

fn selected_samples(samples: &[f64], range: Range<usize>) -> &[f64] {
    samples.get(range).unwrap_or_default()
}

fn count_as_f64(count: usize) -> f64 {
    u32::try_from(count).map_or(f64::INFINITY, f64::from)
}

/// Ports Ghidra `FUN_01ac5d40` at `0x01AC5D40`.
#[must_use]
pub fn arithmetic_mean(samples: &[f64], range: Range<usize>) -> f64 {
    let selected = selected_samples(samples, range);
    selected.iter().sum::<f64>() / count_as_f64(selected.len())
}

/// Ports Ghidra `FUN_01ac5da0` at `0x01AC5DA0`.
#[must_use]
pub fn population_standard_deviation(samples: &[f64], range: Range<usize>, mean: f64) -> f64 {
    let selected = selected_samples(samples, range);
    let squared_error = selected
        .iter()
        .map(|value| {
            let difference = value - mean;
            difference * difference
        })
        .sum::<f64>();
    (squared_error / count_as_f64(selected.len())).sqrt()
}

/// Ports Ghidra `FUN_01ac6150` at `0x01AC6150`.
#[must_use]
pub fn find_extrema(samples: &[f64], range: Range<usize>) -> Option<Extrema> {
    let first_value = samples.first().copied()?;
    let mut selected = selected_samples(samples, range).iter().copied();
    let first_selected = selected.next()?;
    let (minimum, maximum) = selected.fold(
        (first_selected, first_selected),
        |(minimum, maximum), value| (minimum.min(value), maximum.max(value)),
    );
    Some(Extrema {
        minimum,
        maximum,
        first_value,
    })
}

/// Ports Ghidra `FUN_01ac61f0` at `0x01AC61F0`.
#[must_use]
pub fn histogram_counts(
    samples: &[f64],
    range: Range<usize>,
    minimum: f64,
    maximum: f64,
    bar_count: u16,
) -> Option<Vec<u16>> {
    if bar_count == 0 || maximum <= minimum {
        return None;
    }
    let mut counts = vec![0_u16; usize::from(bar_count)];
    let bar_width = (maximum - minimum) / f64::from(bar_count);
    for sample in selected_samples(samples, range) {
        let position = (sample - minimum) / bar_width;
        let mut index = 0_u16;
        while index + 1 < bar_count && position >= f64::from(index + 1) {
            index += 1;
        }
        let counter = &mut counts[usize::from(index)];
        *counter = counter.wrapping_add(1);
    }
    Some(counts)
}

/// Ports Ghidra `FUN_01ac7fd0` at `0x01AC7FD0`.
#[must_use]
pub fn build_histogram_series(
    samples: &[f64],
    range: Range<usize>,
    minimum: f64,
    maximum: f64,
    bar_count: u16,
) -> Option<AnalysisSeries> {
    let counts = histogram_counts(samples, range, minimum, maximum, bar_count)?;
    let bar_width = (maximum - minimum) / f64::from(bar_count);
    let mut points: Vec<_> = counts
        .into_iter()
        .enumerate()
        .map(|(index, count)| {
            let index = u16::try_from(index).unwrap_or(u16::MAX);
            AnalysisPoint::new(
                f64::from(index).mul_add(bar_width, minimum),
                f64::from(count),
            )
        })
        .collect();
    points.push(AnalysisPoint::new(maximum, 0.0));
    Some(AnalysisSeries::new(
        "Histogram",
        AxisLabels::new("Values", "Samples"),
        points,
    ))
}

pub trait StatisticResultPublisher {
    fn publish_statistic_series(&mut self, series: Option<AnalysisSeries>) -> bool;
}

impl StatisticResultPublisher for AnalysisResultManager {
    fn publish_statistic_series(&mut self, series: Option<AnalysisSeries>) -> bool {
        self.publish_statistic(series)
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CalculationOutcome {
    Calculated,
    NoMatchingSamples,
    Suppressed,
}

#[derive(Debug, Clone, PartialEq)]
pub struct Window {
    selected_output: String,
    option: StatisticOption,
    cut_input: f64,
    cut_availability: Availability,
    result_panel: Visibility,
    result_state: ResultState,
    draw_availability: Availability,
    guard: CalculationGuard,
    modal_state: ModalState,
    form_height: u32,
    result_panel_height: u32,
    samples: SampleBuffer,
    extrema: Option<Extrema>,
    summary: Option<StatisticSummary>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            selected_output: String::new(),
            option: StatisticOption::default(),
            cut_input: 0.0,
            cut_availability: Availability::Disabled,
            result_panel: Visibility::Hidden,
            result_state: ResultState::Inactive,
            draw_availability: Availability::Disabled,
            guard: CalculationGuard::Clear,
            modal_state: ModalState::Open,
            form_height: DEFAULT_COLLAPSED_HEIGHT,
            result_panel_height: DEFAULT_RESULT_PANEL_HEIGHT,
            samples: SampleBuffer::default(),
            extrema: None,
            summary: None,
        }
    }
}

impl Window {
    #[must_use]
    pub fn selected_output(&self) -> &str {
        &self.selected_output
    }

    pub fn set_selected_output(&mut self, output: impl Into<String>) {
        self.selected_output = output.into();
    }

    pub const fn set_cut_input(&mut self, cut_input: f64) {
        self.cut_input = cut_input;
    }

    pub const fn set_guard(&mut self, guard: CalculationGuard) {
        self.guard = guard;
    }

    #[must_use]
    pub const fn option(&self) -> StatisticOption {
        self.option
    }

    #[must_use]
    pub const fn cut_availability(&self) -> Availability {
        self.cut_availability
    }

    #[must_use]
    pub const fn result_panel(&self) -> Visibility {
        self.result_panel
    }

    #[must_use]
    pub const fn draw_availability(&self) -> Availability {
        self.draw_availability
    }

    #[must_use]
    pub const fn form_height(&self) -> u32 {
        self.form_height
    }

    #[must_use]
    pub const fn summary(&self) -> Option<StatisticSummary> {
        self.summary
    }

    #[must_use]
    pub const fn modal_state(&self) -> ModalState {
        self.modal_state
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::OptionSelected(option) => self.select_option(option),
            Message::InputChanged => self.invalidate_results(),
        }
    }

    /// Ports Ghidra `FUN_01ac7ed0` at `0x01AC7ED0`.
    pub fn select_option(&mut self, option: StatisticOption) {
        self.option = option;
        self.cut_availability = if option == StatisticOption::Cut {
            Availability::Enabled
        } else {
            Availability::Disabled
        };
        self.invalidate_results();
    }

    /// Ports Ghidra `FUN_01ac7f60` at `0x01AC7F60`.
    pub fn invalidate_results(&mut self) {
        if self.result_panel == Visibility::Visible && self.result_state == ResultState::Active {
            self.form_height = self.form_height.saturating_sub(self.result_panel_height);
        }
        self.result_panel = Visibility::Hidden;
        self.draw_availability = Availability::Disabled;
    }

    /// Ports Ghidra `FUN_01ac7740` at `0x01AC7740`.
    pub fn calculate<R: StatisticOutputRecord>(
        &mut self,
        records: &[R],
        display_mode: DisplayMode,
    ) -> CalculationOutcome {
        if self.guard == CalculationGuard::SuppressOnce {
            self.guard = CalculationGuard::Clear;
            return CalculationOutcome::Suppressed;
        }

        if self.result_panel == Visibility::Hidden {
            self.form_height = self.form_height.saturating_add(self.result_panel_height);
        }
        self.result_panel = Visibility::Visible;
        self.result_state = ResultState::Active;
        self.samples = prepare_sample_buffer(records, &self.selected_output);
        if self.samples.match_count() == 0 {
            self.guard = CalculationGuard::Clear;
            return CalculationOutcome::NoMatchingSamples;
        }

        extract_sample_values(
            records,
            &self.selected_output,
            self.option,
            self.cut_input,
            &mut self.samples,
        );
        self.extrema = find_extrema(self.samples.values(), self.samples.selected_range());
        if let Some(extrema) = self.extrema {
            self.summary = Some(match display_mode {
                DisplayMode::Range => StatisticSummary::Range(range_summary(
                    extrema,
                    self.samples.has_special_value(),
                )),
                DisplayMode::Distribution => StatisticSummary::Distribution(distribution_summary(
                    &self.samples,
                    extrema.first_value,
                )),
            });
        }
        if self.samples.match_count() > 1 {
            self.draw_availability = Availability::Enabled;
        }
        self.guard = CalculationGuard::Clear;
        CalculationOutcome::Calculated
    }

    /// Ports Ghidra `FUN_01ac8190` at `0x01AC8190`.
    #[must_use]
    pub fn draw_histogram(
        &mut self,
        bar_count: u16,
        publisher: &mut impl StatisticResultPublisher,
    ) -> bool {
        let series = self.extrema.and_then(|extrema| {
            build_histogram_series(
                self.samples.values(),
                self.samples.selected_range(),
                extrema.minimum,
                extrema.maximum,
                bar_count,
            )
        });
        let result_published = publisher.publish_statistic_series(series);
        self.modal_state = ModalState::Accepted;
        result_published
    }
}

fn range_summary(extrema: Extrema, has_special_value: bool) -> RangeSummary {
    let special_value = has_special_value.then_some(extrema.first_value);
    RangeSummary {
        minimum: extrema.minimum,
        maximum: extrema.maximum,
        range: extrema.maximum - extrema.minimum,
        special_value,
        maximum_difference: special_value.map(|value| extrema.maximum - value),
        minimum_difference: special_value.map(|value| extrema.minimum - value),
    }
}

fn distribution_summary(samples: &SampleBuffer, first_value: f64) -> DistributionSummary {
    let range = samples.selected_range();
    let average = arithmetic_mean(samples.values(), range.clone());
    let population_deviation = (samples.match_count() >= 2)
        .then(|| population_standard_deviation(samples.values(), range, average));
    DistributionSummary {
        mean: average,
        population_deviation,
        special_value: samples.has_special_value().then_some(first_value),
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Clone)]
    struct Record {
        name: &'static str,
        eligible: bool,
        special: bool,
        base: f64,
    }

    impl StatisticOutputRecord for Record {
        fn statistic_name(&self) -> &str {
            self.name
        }

        fn is_eligible(&self) -> bool {
            self.eligible
        }

        fn has_special_state(&self) -> bool {
            self.special
        }

        fn statistic_value(&self, option: StatisticOption, cut_input: f64) -> f64 {
            self.base
                + match option {
                    StatisticOption::XMaximum => 10.0,
                    StatisticOption::YMaximum => 20.0,
                    StatisticOption::Cut => cut_input,
                    StatisticOption::XMinimum => -10.0,
                    StatisticOption::YMinimum => -20.0,
                }
        }
    }

    #[derive(Debug, Default)]
    struct Publisher {
        series: Vec<Option<AnalysisSeries>>,
    }

    impl StatisticResultPublisher for Publisher {
        fn publish_statistic_series(&mut self, series: Option<AnalysisSeries>) -> bool {
            let published = series.is_some();
            self.series.push(series);
            published
        }
    }

    fn assert_near(actual: f64, expected: f64) {
        assert!((actual - expected).abs() < 1.0e-12);
    }

    fn records() -> Vec<Record> {
        vec![
            Record {
                name: "VOUT",
                eligible: true,
                special: true,
                base: 100.0,
            },
            Record {
                name: "VOUT",
                eligible: true,
                special: false,
                base: 1.0,
            },
            Record {
                name: "VOUT",
                eligible: true,
                special: false,
                base: 3.0,
            },
            Record {
                name: "OTHER",
                eligible: true,
                special: false,
                base: 99.0,
            },
            Record {
                name: "VOUT",
                eligible: false,
                special: false,
                base: 99.0,
            },
        ]
    }

    #[test]
    fn mean_and_population_deviation_use_the_selected_half_open_range() {
        let samples = [100.0, 2.0, 4.0, 6.0];
        let mean = arithmetic_mean(&samples, 1..4);
        let deviation = population_standard_deviation(&samples, 1..4, mean);

        assert_near(mean, 4.0);
        assert_near(deviation, (8.0_f64 / 3.0).sqrt());
    }

    #[test]
    fn sample_collection_reserves_zero_for_a_special_record() {
        let records = records();
        let mut samples = prepare_sample_buffer(&records, "VOUT");

        extract_sample_values(&records, "VOUT", StatisticOption::Cut, 5.0, &mut samples);

        assert_eq!(samples.match_count(), 3);
        assert_eq!(samples.selected_start(), 1);
        assert_near(samples.values()[0], 105.0);
        assert_near(samples.values()[1], 6.0);
        assert_near(samples.values()[2], 8.0);
    }

    #[test]
    fn extrema_include_the_selected_range_and_return_array_element_zero() {
        let extrema = find_extrema(&[90.0, 7.0, 2.0, 11.0], 1..4);

        assert_eq!(
            extrema,
            Some(Extrema {
                minimum: 2.0,
                maximum: 11.0,
                first_value: 90.0,
            })
        );
    }

    #[test]
    fn histogram_clamps_maximum_to_last_bar_and_adds_final_zero_point() {
        let series = build_histogram_series(&[0.0, 1.0, 2.0, 3.0], 0..4, 0.0, 3.0, 3);
        let points = &series.as_ref().unwrap_or_else(|| unreachable!()).points;

        assert_eq!(points.len(), 4);
        assert_near(points[0].independent, 0.0);
        assert_near(points[0].dependent, 1.0);
        assert_near(points[1].dependent, 1.0);
        assert_near(points[2].dependent, 2.0);
        assert_near(points[3].independent, 3.0);
        assert_near(points[3].dependent, 0.0);
    }

    #[test]
    fn option_change_enables_only_cut_and_invalidates_visible_results() {
        let mut window = Window {
            result_panel: Visibility::Visible,
            result_state: ResultState::Active,
            draw_availability: Availability::Enabled,
            form_height: 280,
            ..Window::default()
        };

        window.update(Message::OptionSelected(StatisticOption::Cut));

        assert_eq!(window.cut_availability(), Availability::Enabled);
        assert_eq!(window.result_panel(), Visibility::Hidden);
        assert_eq!(window.draw_availability(), Availability::Disabled);
        assert_eq!(window.form_height(), 168);
    }

    #[test]
    fn calculation_guard_suppresses_once_without_showing_results() {
        let mut window = Window::default();
        window.set_selected_output("VOUT");
        window.set_guard(CalculationGuard::SuppressOnce);

        let outcome = window.calculate(&records(), DisplayMode::Distribution);

        assert_eq!(outcome, CalculationOutcome::Suppressed);
        assert_eq!(window.result_panel(), Visibility::Hidden);
        assert_eq!(window.guard, CalculationGuard::Clear);
    }

    #[test]
    fn no_matches_show_the_panel_without_calculating_or_enabling_draw() {
        let mut window = Window::default();
        window.set_selected_output("MISSING");

        let outcome = window.calculate(&records(), DisplayMode::Distribution);

        assert_eq!(outcome, CalculationOutcome::NoMatchingSamples);
        assert_eq!(window.result_panel(), Visibility::Visible);
        assert_eq!(window.form_height(), 280);
        assert_eq!(window.summary(), None);
        assert_eq!(window.draw_availability(), Availability::Disabled);
    }

    #[test]
    fn distribution_and_range_modes_preserve_special_value_semantics() {
        let mut window = Window::default();
        window.set_selected_output("VOUT");
        window.set_cut_input(5.0);
        window.select_option(StatisticOption::Cut);

        assert_eq!(
            window.calculate(&records(), DisplayMode::Distribution),
            CalculationOutcome::Calculated
        );
        let Some(StatisticSummary::Distribution(distribution)) = window.summary() else {
            unreachable!();
        };
        assert_near(distribution.mean, 7.0);
        assert_near(distribution.population_deviation.unwrap_or(f64::NAN), 1.0);
        assert_near(distribution.special_value.unwrap_or(f64::NAN), 105.0);

        assert_eq!(
            window.calculate(&records(), DisplayMode::Range),
            CalculationOutcome::Calculated
        );
        let Some(StatisticSummary::Range(range)) = window.summary() else {
            unreachable!();
        };
        assert_near(range.minimum, 6.0);
        assert_near(range.maximum, 8.0);
        assert_near(range.range, 2.0);
        assert_eq!(window.draw_availability(), Availability::Enabled);
    }

    #[test]
    fn draw_publishes_typed_series_and_always_accepts_the_dialog() {
        let mut window = Window::default();
        window.set_selected_output("VOUT");
        window.calculate(&records(), DisplayMode::Distribution);
        let mut publisher = Publisher::default();

        let publish_succeeded = window.draw_histogram(2, &mut publisher);

        assert!(publish_succeeded);
        assert_eq!(window.modal_state(), ModalState::Accepted);
        let Some(series) = publisher.series[0].as_ref() else {
            unreachable!();
        };
        assert_eq!(series.axes, AxisLabels::new("Values", "Samples"));
        assert_eq!(series.points.len(), 3);

        let mut uninitialized_dialog = Window::default();
        let publish_succeeded = uninitialized_dialog.draw_histogram(0, &mut publisher);
        assert!(!publish_succeeded);
        assert_eq!(uninitialized_dialog.modal_state(), ModalState::Accepted);
        assert_eq!(publisher.series.last(), Some(&None));
    }
}
