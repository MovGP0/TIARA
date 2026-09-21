use std::fmt;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct WindowTrace {
    /// A photograph of the window taken from the running original.
    ///
    /// Empty for a window the original will not open. Two of its commands
    /// are greyed in the only build there is - their handlers are stubs, see
    /// TIARA-rfa0uy5 - and a window that cannot be opened cannot be
    /// photographed. Those are built from the form instead, which is
    /// evidence of the same kind and rather more exact.
    pub screenshot: &'static str,
    /// The form the window was built from, which every one of them has.
    pub form_resource: &'static str,
    /// The address of the handler the original runs to make it.
    pub original_function: Option<&'static str>,
}

impl WindowTrace {
    /// Whether there is a photograph of this one.
    #[must_use]
    pub const fn has_a_picture(&self) -> bool {
        !self.screenshot.is_empty()
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum WindowKind {
    #[default]
    SchematicEditor,
    AboutTina,
    AcMultisineAnalysis,
    AnalysisModeSelection,
    AnalysisOptions,
    AnalysisParameters,
    AnalysisResults,
    BatchSimulation,
    BillOfMaterials,
    BlockWizard,
    ComponentBarEditor,
    ComponentExplorer,
    Converters,
    DesignTool,
    DigitalSignalGenerator,
    DrawingPreferences,
    EquationEditor,
    ExamManager,
    FilterDesign,
    FindComponent,
    FlowchartEditor,
    FootprintNameEditor,
    GlobalParameterEditor,
    FourierSeries,
    FrequencySpectrum,
    FunctionGenerator,
    InsertText,
    InteractiveMode,
    Interpreter,
    LogicAnalyzer,
    LogicDesign,
    LtspiceImport,
    MacroProperties,
    MacroWizard,
    MapFaultToHardware,
    Multimeter,
    NetlistEditor,
    NetworkAnalyzer,
    NumericalFormat,
    Oscilloscope,
    PcbComponentWizard,
    PcbDesign,
    PcbViewer,
    ProtectCircuit,
    PythonShell,
    SchematicReconciliation,
    SchematicSymbolEditor,
    SelectTinaFolder,
    SerialMonitor,
    SignalAnalyzer,
    SpectrumAnalyzer,
    SpiceCommandEditor,
    SpiceExport,
    SymbolTable,
    TestAndMeasurementOptions,
    TransientAnalysis,
    XyRecorder,
}

impl WindowKind {
    pub const ALL: [Self; 57] = [
        Self::SchematicEditor,
        Self::AboutTina,
        Self::AcMultisineAnalysis,
        Self::AnalysisModeSelection,
        Self::AnalysisOptions,
        Self::AnalysisParameters,
        Self::AnalysisResults,
        Self::BatchSimulation,
        Self::BillOfMaterials,
        Self::BlockWizard,
        Self::ComponentBarEditor,
        Self::ComponentExplorer,
        Self::Converters,
        Self::DesignTool,
        Self::DigitalSignalGenerator,
        Self::DrawingPreferences,
        Self::EquationEditor,
        Self::ExamManager,
        Self::FilterDesign,
        Self::FindComponent,
        Self::FlowchartEditor,
        Self::FootprintNameEditor,
        Self::GlobalParameterEditor,
        Self::FourierSeries,
        Self::FrequencySpectrum,
        Self::FunctionGenerator,
        Self::InsertText,
        Self::InteractiveMode,
        Self::Interpreter,
        Self::LogicAnalyzer,
        Self::LogicDesign,
        Self::LtspiceImport,
        Self::MacroProperties,
        Self::MacroWizard,
        Self::MapFaultToHardware,
        Self::Multimeter,
        Self::NetlistEditor,
        Self::NetworkAnalyzer,
        Self::NumericalFormat,
        Self::Oscilloscope,
        Self::PcbComponentWizard,
        Self::PcbDesign,
        Self::PcbViewer,
        Self::ProtectCircuit,
        Self::PythonShell,
        Self::SchematicReconciliation,
        Self::SchematicSymbolEditor,
        Self::SelectTinaFolder,
        Self::SerialMonitor,
        Self::SignalAnalyzer,
        Self::SpectrumAnalyzer,
        Self::SpiceCommandEditor,
        Self::SpiceExport,
        Self::SymbolTable,
        Self::TestAndMeasurementOptions,
        Self::TransientAnalysis,
        Self::XyRecorder,
    ];

    pub const fn title(self) -> &'static str {
        match self {
            Self::SchematicEditor => "Schematic Editor",
            Self::AboutTina => crate::about_box::TITLE,
            Self::AcMultisineAnalysis => crate::ac_multisine_analysis::TITLE,
            Self::AnalysisModeSelection => crate::analysis_mode_selection::TITLE,
            Self::AnalysisOptions => crate::analysis_options::TITLE,
            Self::AnalysisParameters => crate::analysis_parameters::TITLE,
            Self::AnalysisResults => crate::analysis_results::TITLE,
            Self::BatchSimulation => crate::batch_simulation::TITLE,
            Self::BillOfMaterials => crate::bill_of_materials::TITLE,
            Self::BlockWizard => crate::block_wizard::TITLE,
            Self::ComponentBarEditor => crate::component_bar_editor::TITLE,
            Self::ComponentExplorer => crate::component_explorer::TITLE,
            Self::Converters => crate::converters::TITLE,
            Self::DesignTool => crate::design_tool::TITLE,
            Self::DigitalSignalGenerator => crate::digital_signal_generator::TITLE,
            Self::DrawingPreferences => crate::drawing_preferences::TITLE,
            Self::EquationEditor => crate::equation_editor::TITLE,
            Self::ExamManager => crate::exam_manager::TITLE,
            Self::FilterDesign => crate::filter_design::TITLE,
            Self::FindComponent => crate::find_component::TITLE,
            Self::FlowchartEditor => crate::flowchart_editor::TITLE,
            Self::FootprintNameEditor => crate::footprint_name_editor::TITLE,
            Self::GlobalParameterEditor => crate::global_parameter_editor::TITLE,
            Self::FourierSeries => crate::fourier_series::TITLE,
            Self::FrequencySpectrum => crate::frequency_spectrum::TITLE,
            Self::FunctionGenerator => crate::function_generator::TITLE,
            Self::InsertText => crate::insert_text::TITLE,
            Self::InteractiveMode => crate::interactive_mode::TITLE,
            Self::Interpreter => crate::interpreter::TITLE,
            Self::LogicAnalyzer => crate::logic_analyzer::TITLE,
            Self::LogicDesign => crate::logic_design::TITLE,
            Self::LtspiceImport => crate::ltspice_import::TITLE,
            Self::MacroProperties => crate::macro_properties::TITLE,
            Self::MacroWizard => crate::macro_wizard::TITLE,
            Self::MapFaultToHardware => crate::map_fault_to_hardware::TITLE,
            Self::Multimeter => crate::multimeter::TITLE,
            Self::NetlistEditor => crate::netlist_editor::TITLE,
            Self::NetworkAnalyzer => crate::network_analyzer::TITLE,
            Self::NumericalFormat => crate::numerical_format::TITLE,
            Self::Oscilloscope => crate::oscilloscope::TITLE,
            Self::PcbComponentWizard => crate::pcb_component_wizard::TITLE,
            Self::PcbDesign => crate::pcb_design::TITLE,
            Self::PcbViewer => crate::pcb_viewer::TITLE,
            Self::ProtectCircuit => crate::protect_circuit::TITLE,
            Self::PythonShell => crate::python_shell::TITLE,
            Self::SchematicReconciliation => crate::schematic_reconciliation::TITLE,
            Self::SchematicSymbolEditor => crate::schematic_symbol_editor::TITLE,
            Self::SelectTinaFolder => crate::select_tina_folder::TITLE,
            Self::SerialMonitor => crate::serial_monitor::TITLE,
            Self::SignalAnalyzer => crate::signal_analyzer::TITLE,
            Self::SpectrumAnalyzer => crate::spectrum_analyzer::TITLE,
            Self::SpiceCommandEditor => crate::spice_command_editor::TITLE,
            Self::SpiceExport => crate::spice_export::TITLE,
            Self::SymbolTable => crate::symbol_table::TITLE,
            Self::TestAndMeasurementOptions => crate::test_and_measurement_options::TITLE,
            Self::TransientAnalysis => crate::transient_analysis::TITLE,
            Self::XyRecorder => crate::xy_recorder::TITLE,
        }
    }

    #[allow(clippy::too_many_lines)]
    pub const fn trace(self) -> Option<WindowTrace> {
        let trace = match self {
            Self::SchematicEditor => return None,
            Self::AboutTina => trace_for(
                crate::about_box::SCREENSHOT,
                crate::about_box::FORM_RESOURCE,
                crate::about_box::ORIGINAL_FUNCTION,
            ),
            Self::AcMultisineAnalysis => trace_for(
                crate::ac_multisine_analysis::SCREENSHOT,
                crate::ac_multisine_analysis::FORM_RESOURCE,
                crate::ac_multisine_analysis::ORIGINAL_FUNCTION,
            ),
            Self::AnalysisModeSelection => trace_for(
                crate::analysis_mode_selection::SCREENSHOT,
                crate::analysis_mode_selection::FORM_RESOURCE,
                crate::analysis_mode_selection::ORIGINAL_FUNCTION,
            ),
            Self::AnalysisOptions => trace_for(
                crate::analysis_options::SCREENSHOT,
                crate::analysis_options::FORM_RESOURCE,
                crate::analysis_options::ORIGINAL_FUNCTION,
            ),
            Self::AnalysisParameters => trace_for(
                crate::analysis_parameters::SCREENSHOT,
                crate::analysis_parameters::FORM_RESOURCE,
                crate::analysis_parameters::ORIGINAL_FUNCTION,
            ),
            Self::AnalysisResults => trace_for(
                crate::analysis_results::SCREENSHOT,
                crate::analysis_results::FORM_RESOURCE,
                crate::analysis_results::ORIGINAL_FUNCTION,
            ),
            Self::BatchSimulation => trace_for(
                crate::batch_simulation::SCREENSHOT,
                crate::batch_simulation::FORM_RESOURCE,
                crate::batch_simulation::ORIGINAL_FUNCTION,
            ),
            Self::BillOfMaterials => trace_for(
                crate::bill_of_materials::SCREENSHOT,
                crate::bill_of_materials::FORM_RESOURCE,
                crate::bill_of_materials::ORIGINAL_FUNCTION,
            ),
            Self::BlockWizard => trace_for(
                crate::block_wizard::SCREENSHOT,
                crate::block_wizard::FORM_RESOURCE,
                crate::block_wizard::ORIGINAL_FUNCTION,
            ),
            Self::ComponentBarEditor => trace_for(
                crate::component_bar_editor::SCREENSHOT,
                crate::component_bar_editor::FORM_RESOURCE,
                crate::component_bar_editor::ORIGINAL_FUNCTION,
            ),
            Self::ComponentExplorer => trace_for(
                crate::component_explorer::SCREENSHOT,
                crate::component_explorer::FORM_RESOURCE,
                crate::component_explorer::ORIGINAL_FUNCTION,
            ),
            Self::Converters => trace_for(
                crate::converters::SCREENSHOT,
                crate::converters::FORM_RESOURCE,
                crate::converters::ORIGINAL_FUNCTION,
            ),
            Self::DesignTool => trace_for(
                crate::design_tool::SCREENSHOT,
                crate::design_tool::FORM_RESOURCE,
                crate::design_tool::ORIGINAL_FUNCTION,
            ),
            Self::DigitalSignalGenerator => trace_for(
                crate::digital_signal_generator::SCREENSHOT,
                crate::digital_signal_generator::FORM_RESOURCE,
                crate::digital_signal_generator::ORIGINAL_FUNCTION,
            ),
            Self::DrawingPreferences => trace_for(
                crate::drawing_preferences::SCREENSHOT,
                crate::drawing_preferences::FORM_RESOURCE,
                crate::drawing_preferences::ORIGINAL_FUNCTION,
            ),
            Self::EquationEditor => trace_for(
                crate::equation_editor::SCREENSHOT,
                crate::equation_editor::FORM_RESOURCE,
                crate::equation_editor::ORIGINAL_FUNCTION,
            ),
            Self::ExamManager => trace_for(
                crate::exam_manager::SCREENSHOT,
                crate::exam_manager::FORM_RESOURCE,
                crate::exam_manager::ORIGINAL_FUNCTION,
            ),
            Self::FilterDesign => trace_for(
                crate::filter_design::SCREENSHOT,
                crate::filter_design::FORM_RESOURCE,
                crate::filter_design::ORIGINAL_FUNCTION,
            ),
            Self::FindComponent => trace_for(
                crate::find_component::SCREENSHOT,
                crate::find_component::FORM_RESOURCE,
                crate::find_component::ORIGINAL_FUNCTION,
            ),
            Self::FlowchartEditor => trace_for(
                crate::flowchart_editor::SCREENSHOT,
                crate::flowchart_editor::FORM_RESOURCE,
                crate::flowchart_editor::ORIGINAL_FUNCTION,
            ),
            Self::FootprintNameEditor => trace_for(
                crate::footprint_name_editor::SCREENSHOT,
                crate::footprint_name_editor::FORM_RESOURCE,
                crate::footprint_name_editor::ORIGINAL_FUNCTION,
            ),
            Self::GlobalParameterEditor => trace_for(
                crate::global_parameter_editor::SCREENSHOT,
                crate::global_parameter_editor::FORM_RESOURCE,
                crate::global_parameter_editor::ORIGINAL_FUNCTION,
            ),
            Self::FourierSeries => trace_for(
                crate::fourier_series::SCREENSHOT,
                crate::fourier_series::FORM_RESOURCE,
                crate::fourier_series::ORIGINAL_FUNCTION,
            ),
            Self::FrequencySpectrum => trace_for(
                crate::frequency_spectrum::SCREENSHOT,
                crate::frequency_spectrum::FORM_RESOURCE,
                crate::frequency_spectrum::ORIGINAL_FUNCTION,
            ),
            Self::FunctionGenerator => trace_for(
                crate::function_generator::SCREENSHOT,
                crate::function_generator::FORM_RESOURCE,
                crate::function_generator::ORIGINAL_FUNCTION,
            ),
            Self::InsertText => trace_for(
                crate::insert_text::SCREENSHOT,
                crate::insert_text::FORM_RESOURCE,
                crate::insert_text::ORIGINAL_FUNCTION,
            ),
            Self::InteractiveMode => trace_for(
                crate::interactive_mode::SCREENSHOT,
                crate::interactive_mode::FORM_RESOURCE,
                crate::interactive_mode::ORIGINAL_FUNCTION,
            ),
            Self::Interpreter => trace_for(
                crate::interpreter::SCREENSHOT,
                crate::interpreter::FORM_RESOURCE,
                crate::interpreter::ORIGINAL_FUNCTION,
            ),
            Self::LogicAnalyzer => trace_for(
                crate::logic_analyzer::SCREENSHOT,
                crate::logic_analyzer::FORM_RESOURCE,
                crate::logic_analyzer::ORIGINAL_FUNCTION,
            ),
            Self::LogicDesign => trace_for(
                crate::logic_design::SCREENSHOT,
                crate::logic_design::FORM_RESOURCE,
                crate::logic_design::ORIGINAL_FUNCTION,
            ),
            Self::LtspiceImport => trace_for(
                crate::ltspice_import::SCREENSHOT,
                crate::ltspice_import::FORM_RESOURCE,
                crate::ltspice_import::ORIGINAL_FUNCTION,
            ),
            Self::MacroProperties => trace_for(
                crate::macro_properties::SCREENSHOT,
                crate::macro_properties::FORM_RESOURCE,
                crate::macro_properties::ORIGINAL_FUNCTION,
            ),
            Self::MacroWizard => trace_for(
                crate::macro_wizard::SCREENSHOT,
                crate::macro_wizard::FORM_RESOURCE,
                crate::macro_wizard::ORIGINAL_FUNCTION,
            ),
            Self::MapFaultToHardware => trace_for(
                crate::map_fault_to_hardware::SCREENSHOT,
                crate::map_fault_to_hardware::FORM_RESOURCE,
                crate::map_fault_to_hardware::ORIGINAL_FUNCTION,
            ),
            Self::Multimeter => trace_for(
                crate::multimeter::SCREENSHOT,
                crate::multimeter::FORM_RESOURCE,
                crate::multimeter::ORIGINAL_FUNCTION,
            ),
            Self::NetlistEditor => trace_for(
                crate::netlist_editor::SCREENSHOT,
                crate::netlist_editor::FORM_RESOURCE,
                crate::netlist_editor::ORIGINAL_FUNCTION,
            ),
            Self::NetworkAnalyzer => trace_for(
                crate::network_analyzer::SCREENSHOT,
                crate::network_analyzer::FORM_RESOURCE,
                crate::network_analyzer::ORIGINAL_FUNCTION,
            ),
            Self::NumericalFormat => trace_for(
                crate::numerical_format::SCREENSHOT,
                crate::numerical_format::FORM_RESOURCE,
                crate::numerical_format::ORIGINAL_FUNCTION,
            ),
            Self::Oscilloscope => trace_for(
                crate::oscilloscope::SCREENSHOT,
                crate::oscilloscope::FORM_RESOURCE,
                crate::oscilloscope::ORIGINAL_FUNCTION,
            ),
            Self::PcbComponentWizard => trace_for(
                crate::pcb_component_wizard::SCREENSHOT,
                crate::pcb_component_wizard::FORM_RESOURCE,
                crate::pcb_component_wizard::ORIGINAL_FUNCTION,
            ),
            Self::PcbDesign => trace_for(
                crate::pcb_design::SCREENSHOT,
                crate::pcb_design::FORM_RESOURCE,
                crate::pcb_design::ORIGINAL_FUNCTION,
            ),
            Self::PcbViewer => trace_for(
                crate::pcb_viewer::SCREENSHOT,
                crate::pcb_viewer::FORM_RESOURCE,
                crate::pcb_viewer::ORIGINAL_FUNCTION,
            ),
            Self::ProtectCircuit => trace_for(
                crate::protect_circuit::SCREENSHOT,
                crate::protect_circuit::FORM_RESOURCE,
                crate::protect_circuit::ORIGINAL_FUNCTION,
            ),
            Self::PythonShell => trace_for(
                crate::python_shell::SCREENSHOT,
                crate::python_shell::FORM_RESOURCE,
                crate::python_shell::ORIGINAL_FUNCTION,
            ),
            Self::SchematicReconciliation => trace_for(
                crate::schematic_reconciliation::SCREENSHOT,
                crate::schematic_reconciliation::FORM_RESOURCE,
                crate::schematic_reconciliation::ORIGINAL_FUNCTION,
            ),
            Self::SchematicSymbolEditor => trace_for(
                crate::schematic_symbol_editor::SCREENSHOT,
                crate::schematic_symbol_editor::FORM_RESOURCE,
                crate::schematic_symbol_editor::ORIGINAL_FUNCTION,
            ),
            Self::SelectTinaFolder => trace_for(
                crate::select_tina_folder::SCREENSHOT,
                crate::select_tina_folder::FORM_RESOURCE,
                crate::select_tina_folder::ORIGINAL_FUNCTION,
            ),
            Self::SerialMonitor => trace_for(
                crate::serial_monitor::SCREENSHOT,
                crate::serial_monitor::FORM_RESOURCE,
                crate::serial_monitor::ORIGINAL_FUNCTION,
            ),
            Self::SignalAnalyzer => trace_for(
                crate::signal_analyzer::SCREENSHOT,
                crate::signal_analyzer::FORM_RESOURCE,
                crate::signal_analyzer::ORIGINAL_FUNCTION,
            ),
            Self::SpectrumAnalyzer => trace_for(
                crate::spectrum_analyzer::SCREENSHOT,
                crate::spectrum_analyzer::FORM_RESOURCE,
                crate::spectrum_analyzer::ORIGINAL_FUNCTION,
            ),
            Self::SpiceCommandEditor => trace_for(
                crate::spice_command_editor::SCREENSHOT,
                crate::spice_command_editor::FORM_RESOURCE,
                crate::spice_command_editor::ORIGINAL_FUNCTION,
            ),
            Self::SpiceExport => trace_for(
                crate::spice_export::SCREENSHOT,
                crate::spice_export::FORM_RESOURCE,
                crate::spice_export::ORIGINAL_FUNCTION,
            ),
            Self::SymbolTable => trace_for(
                crate::symbol_table::SCREENSHOT,
                crate::symbol_table::FORM_RESOURCE,
                crate::symbol_table::ORIGINAL_FUNCTION,
            ),
            Self::TestAndMeasurementOptions => trace_for(
                crate::test_and_measurement_options::SCREENSHOT,
                crate::test_and_measurement_options::FORM_RESOURCE,
                crate::test_and_measurement_options::ORIGINAL_FUNCTION,
            ),
            Self::TransientAnalysis => trace_for(
                crate::transient_analysis::SCREENSHOT,
                crate::transient_analysis::FORM_RESOURCE,
                crate::transient_analysis::ORIGINAL_FUNCTION,
            ),
            Self::XyRecorder => trace_for(
                crate::xy_recorder::SCREENSHOT,
                crate::xy_recorder::FORM_RESOURCE,
                crate::xy_recorder::ORIGINAL_FUNCTION,
            ),
        };

        Some(trace)
    }
}

const fn trace_for(
    screenshot: &'static str,
    form_resource: &'static str,
    original_function: Option<&'static str>,
) -> WindowTrace {
    WindowTrace {
        screenshot,
        form_resource,
        original_function,
    }
}

impl fmt::Display for WindowKind {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(self.title())
    }
}

#[cfg(test)]
mod tests {
    use std::collections::HashSet;

    use super::WindowKind;

    #[test]
    fn every_window_kind_has_a_unique_nonempty_title() {
        let titles = WindowKind::ALL
            .iter()
            .map(|kind| kind.title())
            .collect::<HashSet<_>>();

        assert_eq!(WindowKind::ALL.len(), 57);
        assert_eq!(titles.len(), WindowKind::ALL.len());
        assert!(titles.iter().all(|title| !title.is_empty()));
    }

    #[test]
    fn the_pcb_windows_name_the_form_each_is_actually_built_from() {
        // These two were built from the wrong form once. The wizard has a form
        // of its own; the PCB Design window is the one called `PCBWizard`; and
        // no viewer form was recovered at all, so that window says so rather
        // than borrowing the editor's.
        let wizard = WindowKind::PcbComponentWizard
            .trace()
            .expect("the wizard has a trace");
        let design = WindowKind::PcbDesign
            .trace()
            .expect("PCB Design has a trace");
        let viewer = WindowKind::PcbViewer
            .trace()
            .expect("the viewer has a trace");

        assert_eq!(wizard.form_resource, "frmPCBOnlyCompWizard");
        assert_eq!(design.form_resource, "PCBWizard");
        assert_ne!(wizard.form_resource, design.form_resource);
        assert!(viewer.form_resource.starts_with("(no recovered form"));
        assert_ne!(viewer.form_resource, "SchematicEditor");
    }

    #[test]
    fn the_three_analysers_share_one_form_because_the_original_does() {
        // Choosing any of the three on the running original opens
        // TSignalAnalyzerWin; only the caption differs. Three windows naming
        // one form is right here, not a copy-paste fault.
        let signal = WindowKind::SignalAnalyzer.trace().expect("a trace");
        let spectrum = WindowKind::SpectrumAnalyzer.trace().expect("a trace");
        let network = WindowKind::NetworkAnalyzer.trace().expect("a trace");

        assert_eq!(signal.form_resource, spectrum.form_resource);
        assert_eq!(signal.form_resource, network.form_resource);
        assert_ne!(
            WindowKind::SignalAnalyzer.title(),
            WindowKind::SpectrumAnalyzer.title()
        );
        assert_ne!(
            WindowKind::SignalAnalyzer.title(),
            WindowKind::NetworkAnalyzer.title()
        );
    }

    #[test]
    fn every_secondary_window_says_where_it_came_from() {
        for kind in WindowKind::ALL
            .into_iter()
            .filter(|kind| *kind != WindowKind::SchematicEditor)
        {
            let trace = kind.trace().expect("secondary window trace");

            // The form is the one thing every window has.
            assert!(!trace.form_resource.is_empty(), "{kind} names no form");
            // A photograph, where there is one, is one of ours.
            assert!(
                !trace.has_a_picture() || trace.screenshot.starts_with("screenshots/"),
                "{kind} names a picture from somewhere else"
            );
        }
    }

    #[test]
    fn only_a_window_the_original_will_not_open_goes_without_a_picture() {
        // Every window was photographed from the running original except
        // those whose command the original greys, which cannot be opened to
        // be photographed. Keeping the list here means a window that quietly
        // loses its picture is caught.
        let unphotographed: Vec<WindowKind> = WindowKind::ALL
            .into_iter()
            .filter(|kind| kind.trace().is_some_and(|trace| !trace.has_a_picture()))
            .collect();

        assert_eq!(
            unphotographed,
            [WindowKind::MacroProperties, WindowKind::NetlistEditor]
        );
    }
}
