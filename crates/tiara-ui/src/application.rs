use iced::widget::{column, container};
use iced::{Element, Length};

use crate::schematic_editor;
use crate::shared::window_shell;
use crate::window_catalog::WindowKind;

#[derive(Debug, Clone)]
pub enum Message {
    SelectWindow(WindowKind),
    SchematicEditor(schematic_editor::Message),
    AnalysisResults(crate::analysis_results::Message),
    BillOfMaterials(crate::bill_of_materials::Message),
    BlockWizard(crate::block_wizard::Message),
    Converters(crate::converters::Message),
    DesignTool(crate::design_tool::Message),
    DigitalSignalGenerator(crate::digital_signal_generator::Message),
    DrawingPreferences(crate::drawing_preferences::Message),
    EquationEditor(crate::equation_editor::Message),
    ExamManager(crate::exam_manager::Message),
    FilterDesign(crate::filter_design::Message),
    FindComponent(crate::find_component::Message),
    FlowchartEditor(crate::flowchart_editor::Message),
    FootprintNameEditor(crate::footprint_name_editor::Message),
    FunctionGenerator(crate::function_generator::Message),
    InteractiveMode(crate::interactive_mode::Message),
    Interpreter(crate::interpreter::Message),
    LogicAnalyzer(crate::logic_analyzer::Message),
    LogicDesign(crate::logic_design::Message),
    MapFaultToHardware(crate::map_fault_to_hardware::Message),
    Multimeter(crate::multimeter::Message),
    NetworkAnalyzer(crate::network_analyzer::Message),
    NumericalFormat(crate::numerical_format::Message),
    Oscilloscope(crate::oscilloscope::Message),
    PcbComponentWizard(crate::pcb_component_wizard::Message),
    PcbDesign(crate::pcb_design::Message),
    PcbViewer(crate::pcb_viewer::Message),
    ProtectCircuit(crate::protect_circuit::Message),
    SchematicReconciliation(crate::schematic_reconciliation::Message),
    SchematicSymbolEditor(crate::schematic_symbol_editor::Message),
    SerialMonitor(crate::serial_monitor::Message),
    SignalAnalyzer(crate::signal_analyzer::Message),
    SpectrumAnalyzer(crate::spectrum_analyzer::Message),
    SymbolTable(crate::symbol_table::Message),
    TestAndMeasurementOptions(crate::test_and_measurement_options::Message),
    XyRecorder(crate::xy_recorder::Message),
}

#[derive(Debug, Default)]
pub struct TiaraApplication {
    active_window: WindowKind,
    schematic_editor: schematic_editor::SchematicEditor,
    analysis_results: crate::analysis_results::Window,
    bill_of_materials: crate::bill_of_materials::Window,
    block_wizard: crate::block_wizard::Window,
    converters: crate::converters::Window,
    design_tool: crate::design_tool::Window,
    digital_signal_generator: crate::digital_signal_generator::Window,
    drawing_preferences: crate::drawing_preferences::Window,
    equation_editor: crate::equation_editor::Window,
    exam_manager: crate::exam_manager::Window,
    filter_design: crate::filter_design::Window,
    find_component: crate::find_component::Window,
    flowchart_editor: crate::flowchart_editor::Window,
    footprint_name_editor: crate::footprint_name_editor::Window,
    function_generator: crate::function_generator::Window,
    interactive_mode: crate::interactive_mode::Window,
    interpreter: crate::interpreter::Window,
    logic_analyzer: crate::logic_analyzer::Window,
    logic_design: crate::logic_design::Window,
    map_fault_to_hardware: crate::map_fault_to_hardware::Window,
    multimeter: crate::multimeter::Window,
    network_analyzer: crate::network_analyzer::Window,
    numerical_format: crate::numerical_format::Window,
    oscilloscope: crate::oscilloscope::Window,
    pcb_component_wizard: crate::pcb_component_wizard::Window,
    pcb_design: crate::pcb_design::Window,
    pcb_viewer: crate::pcb_viewer::Window,
    protect_circuit: crate::protect_circuit::Window,
    schematic_reconciliation: crate::schematic_reconciliation::Window,
    schematic_symbol_editor: crate::schematic_symbol_editor::Window,
    serial_monitor: crate::serial_monitor::Window,
    signal_analyzer: crate::signal_analyzer::Window,
    spectrum_analyzer: crate::spectrum_analyzer::Window,
    symbol_table: crate::symbol_table::Window,
    test_and_measurement_options: crate::test_and_measurement_options::Window,
    xy_recorder: crate::xy_recorder::Window,
}

impl TiaraApplication {
    pub(crate) fn title(&self) -> String {
        self.active_window.title().to_owned()
    }

    #[allow(clippy::too_many_lines)]
    pub(crate) fn update(&mut self, message: Message) {
        match message {
            Message::SelectWindow(window) => {
                self.active_window = window;
            }
            Message::SchematicEditor(message) => {
                self.schematic_editor.update(message);
            }
            Message::AnalysisResults(message) => {
                self.analysis_results.update(message);
            }
            Message::BillOfMaterials(message) => {
                self.bill_of_materials.update(message);
            }
            Message::BlockWizard(message) => {
                self.block_wizard.update(message);
            }
            Message::Converters(message) => {
                self.converters.update(message);
            }
            Message::DesignTool(message) => {
                self.design_tool.update(message);
            }
            Message::DigitalSignalGenerator(message) => {
                self.digital_signal_generator.update(message);
            }
            Message::DrawingPreferences(message) => {
                self.drawing_preferences.update(message);
            }
            Message::EquationEditor(message) => {
                self.equation_editor.update(message);
            }
            Message::ExamManager(message) => {
                self.exam_manager.update(message);
            }
            Message::FilterDesign(message) => {
                self.filter_design.update(message);
            }
            Message::FindComponent(message) => {
                self.find_component.update(message);
            }
            Message::FlowchartEditor(message) => {
                self.flowchart_editor.update(message);
            }
            Message::FootprintNameEditor(message) => {
                self.footprint_name_editor.update(message);
            }
            Message::FunctionGenerator(message) => {
                self.function_generator.update(message);
            }
            Message::InteractiveMode(message) => {
                self.interactive_mode.update(message);
            }
            Message::Interpreter(message) => {
                self.interpreter.update(message);
            }
            Message::LogicAnalyzer(message) => {
                self.logic_analyzer.update(message);
            }
            Message::LogicDesign(message) => {
                self.logic_design.update(message);
            }
            Message::MapFaultToHardware(message) => {
                self.map_fault_to_hardware.update(message);
            }
            Message::Multimeter(message) => {
                self.multimeter.update(message);
            }
            Message::NetworkAnalyzer(message) => {
                self.network_analyzer.update(message);
            }
            Message::NumericalFormat(message) => {
                self.numerical_format.update(message);
            }
            Message::Oscilloscope(message) => {
                self.oscilloscope.update(message);
            }
            Message::PcbComponentWizard(message) => {
                self.pcb_component_wizard.update(message);
            }
            Message::PcbDesign(message) => {
                self.pcb_design.update(message);
            }
            Message::PcbViewer(message) => {
                self.pcb_viewer.update(message);
            }
            Message::ProtectCircuit(message) => {
                self.protect_circuit.update(message);
            }
            Message::SchematicReconciliation(message) => {
                self.schematic_reconciliation.update(message);
            }
            Message::SchematicSymbolEditor(message) => {
                self.schematic_symbol_editor.update(message);
            }
            Message::SerialMonitor(message) => {
                self.serial_monitor.update(message);
            }
            Message::SignalAnalyzer(message) => {
                self.signal_analyzer.update(message);
            }
            Message::SpectrumAnalyzer(message) => {
                self.spectrum_analyzer.update(message);
            }
            Message::SymbolTable(message) => {
                self.symbol_table.update(message);
            }
            Message::TestAndMeasurementOptions(message) => {
                self.test_and_measurement_options.update(message);
            }
            Message::XyRecorder(message) => {
                self.xy_recorder.update(message);
            }
        }
    }

    pub(crate) fn view(&self) -> Element<'_, Message> {
        if let Some(trace) = self.active_window.trace() {
            debug_assert!(!trace.screenshot.is_empty());
            debug_assert!(!trace.form_resource.is_empty());
            debug_assert!(
                trace
                    .original_function
                    .is_none_or(|address| !address.is_empty())
            );
        }

        let content = match self.active_window {
            WindowKind::SchematicEditor => {
                self.schematic_editor.view().map(Message::SchematicEditor)
            }
            WindowKind::AnalysisResults => {
                self.analysis_results.view().map(Message::AnalysisResults)
            }
            WindowKind::BillOfMaterials => {
                self.bill_of_materials.view().map(Message::BillOfMaterials)
            }
            WindowKind::BlockWizard => self.block_wizard.view().map(Message::BlockWizard),
            WindowKind::Converters => self.converters.view().map(Message::Converters),
            WindowKind::DesignTool => self.design_tool.view().map(Message::DesignTool),
            WindowKind::DigitalSignalGenerator => self
                .digital_signal_generator
                .view()
                .map(Message::DigitalSignalGenerator),
            WindowKind::DrawingPreferences => self
                .drawing_preferences
                .view()
                .map(Message::DrawingPreferences),
            WindowKind::EquationEditor => self.equation_editor.view().map(Message::EquationEditor),
            WindowKind::ExamManager => self.exam_manager.view().map(Message::ExamManager),
            WindowKind::FilterDesign => self.filter_design.view().map(Message::FilterDesign),
            WindowKind::FindComponent => self.find_component.view().map(Message::FindComponent),
            WindowKind::FlowchartEditor => {
                self.flowchart_editor.view().map(Message::FlowchartEditor)
            }
            WindowKind::FootprintNameEditor => self
                .footprint_name_editor
                .view()
                .map(Message::FootprintNameEditor),
            WindowKind::FunctionGenerator => self
                .function_generator
                .view()
                .map(Message::FunctionGenerator),
            WindowKind::InteractiveMode => {
                self.interactive_mode.view().map(Message::InteractiveMode)
            }
            WindowKind::Interpreter => self.interpreter.view().map(Message::Interpreter),
            WindowKind::LogicAnalyzer => self.logic_analyzer.view().map(Message::LogicAnalyzer),
            WindowKind::LogicDesign => self.logic_design.view().map(Message::LogicDesign),
            WindowKind::MapFaultToHardware => self
                .map_fault_to_hardware
                .view()
                .map(Message::MapFaultToHardware),
            WindowKind::Multimeter => self.multimeter.view().map(Message::Multimeter),
            WindowKind::NetworkAnalyzer => {
                self.network_analyzer.view().map(Message::NetworkAnalyzer)
            }
            WindowKind::NumericalFormat => {
                self.numerical_format.view().map(Message::NumericalFormat)
            }
            WindowKind::Oscilloscope => self.oscilloscope.view().map(Message::Oscilloscope),
            WindowKind::PcbComponentWizard => self
                .pcb_component_wizard
                .view()
                .map(Message::PcbComponentWizard),
            WindowKind::PcbDesign => self.pcb_design.view().map(Message::PcbDesign),
            WindowKind::PcbViewer => self.pcb_viewer.view().map(Message::PcbViewer),
            WindowKind::ProtectCircuit => self.protect_circuit.view().map(Message::ProtectCircuit),
            WindowKind::SchematicReconciliation => self
                .schematic_reconciliation
                .view()
                .map(Message::SchematicReconciliation),
            WindowKind::SchematicSymbolEditor => self
                .schematic_symbol_editor
                .view()
                .map(Message::SchematicSymbolEditor),
            WindowKind::SerialMonitor => self.serial_monitor.view().map(Message::SerialMonitor),
            WindowKind::SignalAnalyzer => self.signal_analyzer.view().map(Message::SignalAnalyzer),
            WindowKind::SpectrumAnalyzer => {
                self.spectrum_analyzer.view().map(Message::SpectrumAnalyzer)
            }
            WindowKind::SymbolTable => self.symbol_table.view().map(Message::SymbolTable),
            WindowKind::TestAndMeasurementOptions => self
                .test_and_measurement_options
                .view()
                .map(Message::TestAndMeasurementOptions),
            WindowKind::XyRecorder => self.xy_recorder.view().map(Message::XyRecorder),
        };

        container(
            column![window_shell::selector(self.active_window), content]
                .width(Length::Fill)
                .height(Length::Fill),
        )
        .width(Length::Fill)
        .height(Length::Fill)
        .into()
    }
}
