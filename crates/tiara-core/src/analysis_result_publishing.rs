//! Analysis-result construction and publication.
//!
//! The Rust standard library is selected for filtering, numbering, and state
//! ownership. The existing `iced` dependency remains the UI adapter in
//! `tiara-ui`. The maintained `plotters` crate was evaluated and rejected:
//! these recovered functions publish prepared series and choose a view, but do
//! not render chart pixels.

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct AnalysisPoint {
    pub independent: f64,
    pub dependent: f64,
}

impl AnalysisPoint {
    #[must_use]
    pub const fn new(independent: f64, dependent: f64) -> Self {
        Self {
            independent,
            dependent,
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct AxisLabels {
    pub horizontal: String,
    pub vertical: String,
}

impl AxisLabels {
    #[must_use]
    pub fn new(horizontal: impl Into<String>, vertical: impl Into<String>) -> Self {
        Self {
            horizontal: horizontal.into(),
            vertical: vertical.into(),
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum PlotDestination {
    #[default]
    Standard,
    Xy,
}

#[derive(Debug, Clone, PartialEq)]
pub struct AnalysisSeries {
    pub name: String,
    pub analysis_type: u8,
    pub secondary_state: u8,
    pub axes: AxisLabels,
    pub points: Vec<AnalysisPoint>,
    pub plot_destination: PlotDestination,
    pub presentation_code: Option<u32>,
}

impl AnalysisSeries {
    #[must_use]
    pub fn new(
        name: impl Into<String>,
        axes: AxisLabels,
        points: impl IntoIterator<Item = AnalysisPoint>,
    ) -> Self {
        Self {
            name: name.into(),
            analysis_type: 0,
            secondary_state: 0,
            axes,
            points: points.into_iter().collect(),
            plot_destination: PlotDestination::Standard,
            presentation_code: None,
        }
    }

    #[must_use]
    pub const fn with_routing(
        mut self,
        analysis_type: u8,
        secondary_state: u8,
        destination: PlotDestination,
    ) -> Self {
        self.analysis_type = analysis_type;
        self.secondary_state = secondary_state;
        self.plot_destination = destination;
        self
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AnalysisResultKind {
    Plot,
    XyPlot,
    Transient,
    MixedTransient,
    DcTransfer,
    Statistic,
    TargetSetting,
}

#[derive(Debug, Clone, PartialEq)]
pub struct PublishedAnalysisResult {
    pub title: String,
    pub kind: AnalysisResultKind,
    pub series: Vec<AnalysisSeries>,
    pub comparison_enabled: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ResultViewRequest {
    XyPlot,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum ApplicationAnalysisState {
    #[default]
    Idle,
    DcTransfer,
    Other(u8),
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TargetSettingResultMode {
    Cartesian,
    FrequencyMagnitude,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub struct PlotPublication {
    pub standard_series: usize,
    pub xy_series: usize,
}

pub trait DiagramInsertionAdapter {
    /// Tries the stored-diagram route. A `true` result means that it accepted
    /// the complete curve list.
    fn add_to_stored_diagram(&mut self, target_id: u64, curve_ids: &[u64]) -> bool;

    /// Tries direct insertion into a compatible coordinate system.
    fn add_to_coordinate_system(&mut self, target_id: u64, curve_ids: &[u64]) -> bool;
}

#[derive(Debug)]
pub struct AnalysisResultManager {
    results: Vec<PublishedAnalysisResult>,
    view_requests: Vec<ResultViewRequest>,
    active_result: Option<usize>,
    refresh_generation: u64,
    analysis_state: ApplicationAnalysisState,
    transient_number: u32,
    mixed_transient_number: u32,
    dc_number: u32,
    statistic_number: u32,
    target_setting_number: u32,
}

impl Default for AnalysisResultManager {
    fn default() -> Self {
        Self {
            results: Vec::new(),
            view_requests: Vec::new(),
            active_result: None,
            refresh_generation: 0,
            analysis_state: ApplicationAnalysisState::Idle,
            transient_number: 1,
            mixed_transient_number: 1,
            dc_number: 1,
            statistic_number: 1,
            target_setting_number: 1,
        }
    }
}

impl AnalysisResultManager {
    #[must_use]
    pub fn results(&self) -> &[PublishedAnalysisResult] {
        &self.results
    }

    #[must_use]
    pub fn view_requests(&self) -> &[ResultViewRequest] {
        &self.view_requests
    }

    #[must_use]
    pub fn active_result(&self) -> Option<&PublishedAnalysisResult> {
        self.active_result.and_then(|index| self.results.get(index))
    }

    #[must_use]
    pub const fn refresh_generation(&self) -> u64 {
        self.refresh_generation
    }

    #[must_use]
    pub const fn analysis_state(&self) -> ApplicationAnalysisState {
        self.analysis_state
    }

    pub const fn set_analysis_state(&mut self, state: ApplicationAnalysisState) {
        self.analysis_state = state;
    }

    /// Ports Ghidra function `FUN_013c7550` at `0x013C7550`.
    pub fn publish_matching_plots(
        &mut self,
        entries: &[AnalysisSeries],
        analysis_type: u8,
    ) -> PlotPublication {
        let mut standard = Vec::new();
        let mut xy = Vec::new();

        for entry in entries
            .iter()
            .filter(|entry| entry.analysis_type == analysis_type && entry.secondary_state == 0)
        {
            match entry.plot_destination {
                PlotDestination::Standard => standard.push(entry.clone()),
                PlotDestination::Xy => xy.push(entry.clone()),
            }
        }

        let publication = PlotPublication {
            standard_series: standard.len(),
            xy_series: xy.len(),
        };
        let mut published = Vec::new();
        if !standard.is_empty() {
            published.push(Self::result(
                "Plot",
                AnalysisResultKind::Plot,
                standard,
                false,
            ));
        }
        if !xy.is_empty() {
            self.view_requests.push(ResultViewRequest::XyPlot);
            published.push(Self::result(
                "XY Plot",
                AnalysisResultKind::XyPlot,
                xy,
                false,
            ));
        }
        if published.is_empty() && !entries.is_empty() {
            self.refresh_generation = self.refresh_generation.saturating_add(1);
        } else {
            self.register_batch(published);
        }
        publication
    }

    /// Ports Ghidra function `FUN_013d2f60` at `0x013D2F60`.
    pub fn publish_transient(&mut self, series: Option<AnalysisSeries>) -> bool {
        let Some(mut series) = series else {
            return false;
        };
        series.name = String::from("Analysis Result 1");
        let title = numbered_title("Transient", self.transient_number);
        self.transient_number = self.transient_number.saturating_add(1);
        self.register_batch(vec![Self::result(
            title,
            AnalysisResultKind::Transient,
            vec![series],
            false,
        )]);
        true
    }

    /// Ports Ghidra function `FUN_013d3ef0` at `0x013D3EF0`.
    ///
    /// The prior application analysis state is restored before this method
    /// returns, including when the calculation reports an error.
    ///
    /// # Errors
    ///
    /// Returns the calculation error supplied by `calculate`.
    pub fn publish_dc_transfer<T, E, F>(
        &mut self,
        circuit: Option<&T>,
        calculate: F,
    ) -> Result<bool, E>
    where
        F: FnOnce(&T) -> Result<AnalysisSeries, E>,
    {
        let Some(circuit) = circuit else {
            return Ok(false);
        };
        let previous_state = self.analysis_state;
        self.analysis_state = ApplicationAnalysisState::DcTransfer;
        let calculation = calculate(circuit);
        self.analysis_state = previous_state;
        let mut series = calculation?;
        series.name = String::from("Analysis Result 1");
        let title = numbered_title("DC result", self.dc_number);
        self.dc_number = self.dc_number.saturating_add(1);
        self.register_batch(vec![Self::result(
            title,
            AnalysisResultKind::DcTransfer,
            vec![series],
            false,
        )]);
        Ok(true)
    }

    /// Ports Ghidra function `FUN_013e0ed0` at `0x013E0ED0`.
    pub fn publish_statistic(&mut self, series: Option<AnalysisSeries>) -> bool {
        let Some(mut series) = series else {
            return false;
        };
        series.name = String::from("Analysis Result 1");
        series.axes = AxisLabels::new("Values", "Samples");
        let title = numbered_title("STATISTIC", self.statistic_number);
        self.statistic_number = self.statistic_number.saturating_add(1);
        self.register_batch(vec![Self::result(
            title,
            AnalysisResultKind::Statistic,
            vec![series],
            false,
        )]);
        true
    }

    /// Ports Ghidra function `FUN_013e1f90` at `0x013E1F90`.
    pub fn publish_target_setting(
        &mut self,
        series: Option<AnalysisSeries>,
        mode: TargetSettingResultMode,
    ) -> bool {
        let Some(mut series) = series else {
            return false;
        };
        series.name = String::from("Target setting result");
        series.axes = match mode {
            TargetSettingResultMode::Cartesian => AxisLabels::new("X", "Y"),
            TargetSettingResultMode::FrequencyMagnitude => {
                AxisLabels::new("Frequency", "Magnitude")
            }
        };
        let title = numbered_title("Target setting result", self.target_setting_number);
        self.target_setting_number = self.target_setting_number.saturating_add(1);
        self.register_batch(vec![Self::result(
            title,
            AnalysisResultKind::TargetSetting,
            vec![series],
            false,
        )]);
        true
    }

    /// Ports Ghidra function `FUN_013e2500` at `0x013E2500`.
    #[must_use]
    pub fn add_curves_to_diagram(
        manager: Option<&mut dyn DiagramInsertionAdapter>,
        target_id: u64,
        curve_ids: &[u64],
    ) -> bool {
        let Some(manager) = manager else {
            return false;
        };
        if manager.add_to_stored_diagram(target_id, curve_ids) {
            return true;
        }
        manager.add_to_coordinate_system(target_id, curve_ids)
    }

    /// Ports Ghidra function `FUN_013e5a30` at `0x013E5A30`.
    pub fn publish_mixed_transient(
        &mut self,
        primary: Option<AnalysisSeries>,
        secondary: Option<AnalysisSeries>,
    ) -> bool {
        if primary.is_none() && secondary.is_none() {
            return false;
        }
        let has_primary = primary.is_some();
        let has_secondary = secondary.is_some();
        let mut series: Vec<_> = primary.into_iter().chain(secondary).collect();
        for item in &mut series {
            item.name = String::from("Analysis Result 1");
            if has_secondary {
                item.presentation_code = Some(8);
            }
        }
        let title = numbered_title("Mixed Transient", self.mixed_transient_number);
        self.mixed_transient_number = self.mixed_transient_number.saturating_add(1);
        self.register_batch(vec![Self::result(
            title,
            AnalysisResultKind::MixedTransient,
            series,
            has_primary && has_secondary,
        )]);
        true
    }

    fn result(
        title: impl Into<String>,
        kind: AnalysisResultKind,
        series: Vec<AnalysisSeries>,
        comparison_enabled: bool,
    ) -> PublishedAnalysisResult {
        PublishedAnalysisResult {
            title: title.into(),
            kind,
            series,
            comparison_enabled,
        }
    }

    fn register_batch(&mut self, results: Vec<PublishedAnalysisResult>) {
        if results.is_empty() {
            return;
        }
        self.results.extend(results);
        self.active_result = self.results.len().checked_sub(1);
        self.refresh_generation = self.refresh_generation.saturating_add(1);
    }
}

fn numbered_title(stem: &str, number: u32) -> String {
    format!("{stem} {number}")
}

#[cfg(test)]
mod tests {
    use super::{
        AnalysisPoint, AnalysisResultKind, AnalysisResultManager, AnalysisSeries,
        ApplicationAnalysisState, AxisLabels, DiagramInsertionAdapter, PlotDestination,
        ResultViewRequest, TargetSettingResultMode,
    };

    fn series(name: &str) -> AnalysisSeries {
        AnalysisSeries::new(
            name,
            AxisLabels::new("input", "output"),
            [AnalysisPoint::new(1.0, 2.0)],
        )
    }

    #[test]
    fn matching_plot_publication_filters_type_and_secondary_state() {
        let entries = [
            series("standard").with_routing(4, 0, PlotDestination::Standard),
            series("xy").with_routing(4, 0, PlotDestination::Xy),
            series("other type").with_routing(5, 0, PlotDestination::Standard),
            series("secondary").with_routing(4, 1, PlotDestination::Standard),
        ];
        let mut manager = AnalysisResultManager::default();

        let publication = manager.publish_matching_plots(&entries, 4);

        assert_eq!(publication.standard_series, 1);
        assert_eq!(publication.xy_series, 1);
        assert_eq!(manager.results().len(), 2);
        assert_eq!(manager.view_requests(), [ResultViewRequest::XyPlot]);
        assert_eq!(manager.refresh_generation(), 1);
    }

    #[test]
    fn matching_plot_publication_does_not_request_empty_xy_view() {
        let entries = [series("standard").with_routing(2, 0, PlotDestination::Standard)];
        let mut manager = AnalysisResultManager::default();

        manager.publish_matching_plots(&entries, 2);

        assert!(manager.view_requests().is_empty());
    }

    #[test]
    fn active_plot_entries_refresh_the_manager_even_without_a_match() {
        let entries = [series("different type").with_routing(3, 0, PlotDestination::Standard)];
        let mut manager = AnalysisResultManager::default();

        let publication = manager.publish_matching_plots(&entries, 2);

        assert_eq!(publication.standard_series, 0);
        assert_eq!(publication.xy_series, 0);
        assert!(manager.results().is_empty());
        assert_eq!(manager.refresh_generation(), 1);
    }

    #[test]
    fn transient_null_input_is_a_noop_and_titles_are_unique() {
        let mut manager = AnalysisResultManager::default();
        assert!(!manager.publish_transient(None));
        assert!(manager.publish_transient(Some(series("first"))));
        assert!(manager.publish_transient(Some(series("second"))));

        assert_eq!(manager.results()[0].title, "Transient 1");
        assert_eq!(manager.results()[1].title, "Transient 2");
        assert_eq!(manager.results()[0].series[0].name, "Analysis Result 1");
    }

    #[test]
    fn dc_transfer_restores_state_after_success_and_error() {
        let mut manager = AnalysisResultManager::default();
        manager.set_analysis_state(ApplicationAnalysisState::Other(7));

        let success = manager.publish_dc_transfer(Some(&3_u8), |_| Ok::<_, &str>(series("dc")));
        assert_eq!(success, Ok(true));
        assert_eq!(manager.analysis_state(), ApplicationAnalysisState::Other(7));
        assert_eq!(manager.results()[0].kind, AnalysisResultKind::DcTransfer);

        let failure = manager.publish_dc_transfer(Some(&3_u8), |_| Err::<AnalysisSeries, _>("bad"));
        assert_eq!(failure, Err("bad"));
        assert_eq!(manager.analysis_state(), ApplicationAnalysisState::Other(7));
        assert_eq!(manager.results().len(), 1);
    }

    #[test]
    fn dc_transfer_null_input_does_not_run_calculation() {
        let mut manager = AnalysisResultManager::default();
        let result = manager.publish_dc_transfer(None::<&u8>, |_| {
            panic!("calculation must not run");
            #[allow(unreachable_code)]
            Ok::<_, ()>(series("unused"))
        });

        assert_eq!(result, Ok(false));
    }

    #[test]
    fn statistic_sets_recovered_axis_labels() {
        let mut manager = AnalysisResultManager::default();
        assert!(manager.publish_statistic(Some(series("histogram"))));

        let result = manager.active_result().expect("published statistic");
        assert_eq!(result.title, "STATISTIC 1");
        assert_eq!(result.series[0].axes, AxisLabels::new("Values", "Samples"));
    }

    #[test]
    fn target_setting_selects_mode_labels_and_unique_titles() {
        let mut manager = AnalysisResultManager::default();
        manager.publish_target_setting(Some(series("dc")), TargetSettingResultMode::Cartesian);
        manager.publish_target_setting(
            Some(series("ac")),
            TargetSettingResultMode::FrequencyMagnitude,
        );

        assert_eq!(manager.results()[0].title, "Target setting result 1");
        assert_eq!(
            manager.results()[0].series[0].axes,
            AxisLabels::new("X", "Y")
        );
        assert_eq!(manager.results()[1].title, "Target setting result 2");
        assert_eq!(
            manager.results()[1].series[0].axes,
            AxisLabels::new("Frequency", "Magnitude")
        );
    }

    #[test]
    fn mixed_transient_marks_all_records_when_secondary_exists() {
        let mut manager = AnalysisResultManager::default();
        assert!(
            manager.publish_mixed_transient(Some(series("primary")), Some(series("secondary")))
        );

        let result = manager.active_result().expect("published mixed result");
        assert_eq!(result.title, "Mixed Transient 1");
        assert!(result.comparison_enabled);
        assert_eq!(result.series.len(), 2);
        assert!(
            result
                .series
                .iter()
                .all(|item| item.presentation_code == Some(8))
        );
        assert!(!manager.publish_mixed_transient(None, None));
    }

    #[derive(Debug, Default)]
    struct DiagramAdapter {
        stored_accepts: bool,
        coordinate_accepts: bool,
        stored_calls: usize,
        coordinate_calls: usize,
    }

    impl DiagramInsertionAdapter for DiagramAdapter {
        fn add_to_stored_diagram(&mut self, _target_id: u64, _curve_ids: &[u64]) -> bool {
            self.stored_calls += 1;
            self.stored_accepts
        }

        fn add_to_coordinate_system(&mut self, _target_id: u64, _curve_ids: &[u64]) -> bool {
            self.coordinate_calls += 1;
            self.coordinate_accepts
        }
    }

    #[test]
    fn diagram_insertion_prefers_stored_path_then_uses_direct_fallback() {
        assert!(!AnalysisResultManager::add_curves_to_diagram(
            None,
            5,
            &[1, 2]
        ));

        let mut stored = DiagramAdapter {
            stored_accepts: true,
            ..DiagramAdapter::default()
        };
        assert!(AnalysisResultManager::add_curves_to_diagram(
            Some(&mut stored),
            5,
            &[1, 2]
        ));
        assert_eq!(stored.stored_calls, 1);
        assert_eq!(stored.coordinate_calls, 0);

        let mut fallback = DiagramAdapter {
            coordinate_accepts: false,
            ..DiagramAdapter::default()
        };
        assert!(!AnalysisResultManager::add_curves_to_diagram(
            Some(&mut fallback),
            5,
            &[1, 2]
        ));
        assert_eq!(fallback.stored_calls, 1);
        assert_eq!(fallback.coordinate_calls, 1);
    }
}
