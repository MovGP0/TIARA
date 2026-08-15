use std::fmt;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct WindowTrace {
    pub screenshot: &'static str,
    pub form_resource: &'static str,
    pub original_function: Option<&'static str>,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum WindowKind {
    #[default]
    SchematicEditor,
    AnalysisResults,
    BillOfMaterials,
    BlockWizard,
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
    FunctionGenerator,
    InteractiveMode,
    Interpreter,
    LogicAnalyzer,
    LogicDesign,
    MapFaultToHardware,
    Multimeter,
    NetworkAnalyzer,
    NumericalFormat,
    Oscilloscope,
    PcbComponentWizard,
    PcbDesign,
    PcbViewer,
    ProtectCircuit,
    SchematicReconciliation,
    SchematicSymbolEditor,
    SerialMonitor,
    SignalAnalyzer,
    SpectrumAnalyzer,
    SymbolTable,
    TestAndMeasurementOptions,
    XyRecorder,
}

impl WindowKind {
    pub const ALL: [Self; 36] = [
        Self::SchematicEditor,
        Self::AnalysisResults,
        Self::BillOfMaterials,
        Self::BlockWizard,
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
        Self::FunctionGenerator,
        Self::InteractiveMode,
        Self::Interpreter,
        Self::LogicAnalyzer,
        Self::LogicDesign,
        Self::MapFaultToHardware,
        Self::Multimeter,
        Self::NetworkAnalyzer,
        Self::NumericalFormat,
        Self::Oscilloscope,
        Self::PcbComponentWizard,
        Self::PcbDesign,
        Self::PcbViewer,
        Self::ProtectCircuit,
        Self::SchematicReconciliation,
        Self::SchematicSymbolEditor,
        Self::SerialMonitor,
        Self::SignalAnalyzer,
        Self::SpectrumAnalyzer,
        Self::SymbolTable,
        Self::TestAndMeasurementOptions,
        Self::XyRecorder,
    ];

    pub const fn title(self) -> &'static str {
        match self {
            Self::SchematicEditor => "Schematic Editor",
            Self::AnalysisResults => crate::analysis_results::TITLE,
            Self::BillOfMaterials => crate::bill_of_materials::TITLE,
            Self::BlockWizard => crate::block_wizard::TITLE,
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
            Self::FunctionGenerator => crate::function_generator::TITLE,
            Self::InteractiveMode => crate::interactive_mode::TITLE,
            Self::Interpreter => crate::interpreter::TITLE,
            Self::LogicAnalyzer => crate::logic_analyzer::TITLE,
            Self::LogicDesign => crate::logic_design::TITLE,
            Self::MapFaultToHardware => crate::map_fault_to_hardware::TITLE,
            Self::Multimeter => crate::multimeter::TITLE,
            Self::NetworkAnalyzer => crate::network_analyzer::TITLE,
            Self::NumericalFormat => crate::numerical_format::TITLE,
            Self::Oscilloscope => crate::oscilloscope::TITLE,
            Self::PcbComponentWizard => crate::pcb_component_wizard::TITLE,
            Self::PcbDesign => crate::pcb_design::TITLE,
            Self::PcbViewer => crate::pcb_viewer::TITLE,
            Self::ProtectCircuit => crate::protect_circuit::TITLE,
            Self::SchematicReconciliation => crate::schematic_reconciliation::TITLE,
            Self::SchematicSymbolEditor => crate::schematic_symbol_editor::TITLE,
            Self::SerialMonitor => crate::serial_monitor::TITLE,
            Self::SignalAnalyzer => crate::signal_analyzer::TITLE,
            Self::SpectrumAnalyzer => crate::spectrum_analyzer::TITLE,
            Self::SymbolTable => crate::symbol_table::TITLE,
            Self::TestAndMeasurementOptions => crate::test_and_measurement_options::TITLE,
            Self::XyRecorder => crate::xy_recorder::TITLE,
        }
    }

    #[allow(clippy::too_many_lines)]
    pub const fn trace(self) -> Option<WindowTrace> {
        let trace = match self {
            Self::SchematicEditor => return None,
            Self::AnalysisResults => trace_for(
                crate::analysis_results::SCREENSHOT,
                crate::analysis_results::FORM_RESOURCE,
                crate::analysis_results::ORIGINAL_FUNCTION,
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
            Self::FunctionGenerator => trace_for(
                crate::function_generator::SCREENSHOT,
                crate::function_generator::FORM_RESOURCE,
                crate::function_generator::ORIGINAL_FUNCTION,
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

        assert_eq!(WindowKind::ALL.len(), 36);
        assert_eq!(titles.len(), WindowKind::ALL.len());
        assert!(titles.iter().all(|title| !title.is_empty()));
    }

    #[test]
    fn every_secondary_window_has_source_trace_metadata() {
        for kind in WindowKind::ALL
            .into_iter()
            .filter(|kind| *kind != WindowKind::SchematicEditor)
        {
            let trace = kind.trace().expect("secondary window trace");

            assert!(trace.screenshot.starts_with("screenshots/"));
            assert!(!trace.form_resource.is_empty());
        }
    }
}
