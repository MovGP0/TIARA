use iced::widget::{button, container, horizontal_space, pane_grid, row, text};
use iced::{Alignment, Element, Length};

use tiara_core::global_parameters::Evaluator;

use crate::dock::{Dock, Group};
use crate::schematic_editor::chrome;

use crate::schematic_editor;
use crate::shared::theme::CustomThemeFile;
use crate::window_catalog::WindowKind;

#[derive(Debug, Clone)]
pub enum Message {
    /// Show one window instead of the one on screen.
    ///
    /// The original gives each of these its own window; this shell shows one at
    /// a time, so a menu command that opens a window changes which is shown.
    ShowWindow(WindowKind),
    /// A key was pressed, which may be a menu command's shortcut.
    KeyPressed(iced::keyboard::Key, iced::keyboard::Modifiers),
    SchematicEditor(schematic_editor::Message),
    AboutTina(crate::about_box::Message),
    AcMultisineAnalysis(crate::ac_multisine_analysis::Message),
    AnalysisModeSelection(crate::analysis_mode_selection::Message),
    AnalysisOptions(crate::analysis_options::Message),
    AnalysisParameters(crate::analysis_parameters::Message),
    AnalysisResults(crate::analysis_results::Message),
    BatchSimulation(crate::batch_simulation::Message),
    BillOfMaterials(crate::bill_of_materials::Message),
    BlockWizard(crate::block_wizard::Message),
    ComponentBarEditor(crate::component_bar_editor::Message),
    ComponentExplorer(crate::component_explorer::Message),
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
    GlobalParameterEditor(crate::global_parameter_editor::Message),
    FourierSeries(crate::fourier_series::Message),
    FrequencySpectrum(crate::frequency_spectrum::Message),
    FunctionGenerator(crate::function_generator::Message),
    InsertText(crate::insert_text::Message),
    InteractiveMode(crate::interactive_mode::Message),
    Interpreter(crate::interpreter::Message),
    LogicAnalyzer(crate::logic_analyzer::Message),
    LogicDesign(crate::logic_design::Message),
    LtspiceImport(crate::ltspice_import::Message),
    MacroProperties(crate::macro_properties::Message),
    MacroWizard(crate::macro_wizard::Message),
    MapFaultToHardware(crate::map_fault_to_hardware::Message),
    Multimeter(crate::multimeter::Message),
    NetlistEditor(crate::netlist_editor::Message),
    NetworkAnalyzer(crate::network_analyzer::Message),
    NumericalFormat(crate::numerical_format::Message),
    Oscilloscope(crate::oscilloscope::Message),
    PcbComponentWizard(crate::pcb_component_wizard::Message),
    PcbDesign(crate::pcb_design::Message),
    PcbViewer(crate::pcb_viewer::Message),
    ProtectCircuit(crate::protect_circuit::Message),
    PythonShell(crate::python_shell::Message),
    SchematicReconciliation(crate::schematic_reconciliation::Message),
    SchematicSymbolEditor(crate::schematic_symbol_editor::Message),
    SelectTinaFolder(crate::select_tina_folder::Message),
    SerialMonitor(crate::serial_monitor::Message),
    SignalAnalyzer(crate::signal_analyzer::Message),
    /// A region of the dock was clicked, so it takes the keyboard.
    DockFocused(pane_grid::Pane),
    /// A tab in one region was chosen.
    DockTabSelected(pane_grid::Pane, usize),
    /// A tab in one region was closed.
    DockTabClosed(pane_grid::Pane, usize),
    /// A region was dragged onto another.
    DockDragged(pane_grid::DragEvent),
    /// The divider between two regions was moved.
    DockResized(pane_grid::ResizeEvent),
    SpectrumAnalyzer(crate::spectrum_analyzer::Message),
    SpiceCommandEditor(crate::spice_command_editor::Message),
    SpiceExport(crate::spice_export::Message),
    SymbolTable(crate::symbol_table::Message),
    TestAndMeasurementOptions(crate::test_and_measurement_options::Message),
    TransientAnalysis(crate::transient_analysis::Message),
    XyRecorder(crate::xy_recorder::Message),
}

/// No `Debug`: one of its windows holds a task the runtime has not run yet,
/// and a task cannot be printed.
#[derive(Default)]
pub struct TiaraApplication {
    /// Where the windows sit, and which of them has the keyboard.
    dock: Dock,
    /// Work a window asked for that the runtime has not run yet.
    ///
    /// A dialog that opens a file picker or reads a file hands back a task,
    /// and only the runtime can run one - so it waits here until `update`
    /// hands it over.
    pending: Option<iced::Task<Message>>,
    theme: CustomThemeFile,
    schematic_editor: schematic_editor::SchematicEditor,
    about_box: crate::about_box::Window,
    ac_multisine_analysis: crate::ac_multisine_analysis::Window,
    analysis_mode_selection: crate::analysis_mode_selection::Window,
    analysis_options: crate::analysis_options::Window,
    analysis_parameters: crate::analysis_parameters::Window,
    analysis_results: crate::analysis_results::Window,
    batch_simulation: crate::batch_simulation::Window,
    bill_of_materials: crate::bill_of_materials::Window,
    block_wizard: crate::block_wizard::Window,
    component_bar_editor: crate::component_bar_editor::Window,
    component_explorer: crate::component_explorer::Window,
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
    global_parameter_editor: crate::global_parameter_editor::Window,
    /// What the Global Parameter Editor acts on, which the original keeps in
    /// the document it was opened over.
    parameter_environment: crate::global_parameter_editor::EditorEnvironment,
    fourier_series: crate::fourier_series::Window,
    frequency_spectrum: crate::frequency_spectrum::Window,
    function_generator: crate::function_generator::Window,
    insert_text: crate::insert_text::Window,
    interactive_mode: crate::interactive_mode::Window,
    interpreter: crate::interpreter::Window,
    logic_analyzer: crate::logic_analyzer::Window,
    logic_design: crate::logic_design::Window,
    ltspice_import: crate::ltspice_import::Window<crate::ltspice_import::shell::Services>,
    macro_properties: crate::macro_properties::Window,
    macro_wizard: crate::macro_wizard::Window,
    map_fault_to_hardware: crate::map_fault_to_hardware::Window,
    multimeter: crate::multimeter::Window,
    netlist_editor: crate::netlist_editor::Window,
    network_analyzer: crate::network_analyzer::Window,
    numerical_format: crate::numerical_format::Window,
    oscilloscope: crate::oscilloscope::Window,
    pcb_component_wizard: crate::pcb_component_wizard::Window,
    pcb_design: crate::pcb_design::Window,
    pcb_viewer: crate::pcb_viewer::Window,
    protect_circuit: crate::protect_circuit::Window,
    python_shell: crate::python_shell::Window,
    schematic_reconciliation: crate::schematic_reconciliation::Window,
    schematic_symbol_editor: crate::schematic_symbol_editor::Window,
    select_tina_folder: crate::select_tina_folder::Window,
    serial_monitor: crate::serial_monitor::Window,
    signal_analyzer: crate::signal_analyzer::Window,
    spectrum_analyzer: crate::spectrum_analyzer::Window,
    spice_command_editor: crate::spice_command_editor::Window,
    spice_export: crate::spice_export::Window,
    symbol_table: crate::symbol_table::Window,
    test_and_measurement_options: crate::test_and_measurement_options::Window,
    transient_analysis: crate::transient_analysis::Window,
    ac_transfer_analysis: crate::ac_transfer_analysis::Window,
    temperature_analysis: crate::temperature_analysis::Window,
    steady_state_analysis: crate::steady_state_analysis::SteadyStateAnalysisWindow,
    dc_transfer_analysis: crate::dc_transfer_analysis::Window,
    xy_recorder: crate::xy_recorder::Window,
}

impl TiaraApplication {
    /// The application as the user runs it, with an editor that keeps what it
    /// is told between one run and the next.
    ///
    /// `Default` deliberately keeps nothing, so that a test never writes over
    /// the settings of the copy the user is looking at.
    #[must_use]
    pub fn remembering() -> Self {
        Self {
            schematic_editor: schematic_editor::SchematicEditor::remembering(
                schematic_editor::settings_path(),
            ),
            ..Self::default()
        }
    }

    pub(crate) fn title(&self) -> String {
        // The editor leads with the document it holds; the other windows are
        // named by the resource alone.
        if self.active_window() == WindowKind::SchematicEditor {
            return self.schematic_editor.window_title();
        }

        self.active_window().title().to_owned()
    }

    /// The key presses the editor answers to.
    ///
    /// The press is only carried here; which command it chooses is settled in
    /// `update`, where the editor's state is to hand. `on_key_press` takes a
    /// plain function and so cannot be told the state itself.
    pub(crate) fn subscription() -> iced::Subscription<Message> {
        iced::keyboard::on_key_press(|key, modifiers| Some(Message::KeyPressed(key, modifiers)))
    }

    pub(crate) fn iced_theme(&self) -> iced::Theme {
        self.theme.iced_theme()
    }

    /// Replaces the active theme with a complete Signex-shape theme document.
    ///
    /// # Errors
    ///
    /// Returns a JSON error when the document is malformed or does not contain
    /// the complete `name`, `tokens`, and `canvas` fields.
    pub fn apply_theme_json(&mut self, source: &str) -> Result<(), serde_json::Error> {
        self.theme = CustomThemeFile::from_json(source)?;
        Ok(())
    }

    /// Answers a message, and closes the window if the editor has been told
    /// to leave.
    ///
    /// Leaving is the shell's to do - only it can close the window - but the
    /// question about work that has not been saved is the editor's, so the
    /// editor is asked afterwards whether it settled that question.
    pub(crate) fn update(&mut self, message: Message) -> iced::Task<Message> {
        self.handle(message);
        if self.schematic_editor.is_closing() {
            return iced::exit();
        }
        self.pending.take().unwrap_or_else(iced::Task::none)
    }

    /// Everything that happens when the schematic editor is used.
    ///
    /// A menu command may run an analysis, open a window this shell has, or
    /// simply be the editor's own; and any of them may leave a run to draw.
    fn schematic_editor_message(&mut self, message: schematic_editor::Message) {
        if self.ran_an_analysis(&message) {
            return;
        }
        if let schematic_editor::Message::MenuCommand(name) = message
            && let Some(window) = schematic_editor::menu_targets::window_for(name)
        {
            // The SPICE editor opens on the netlist of the sheet being
            // edited, as the original does: a netlist is a view of a
            // circuit before it is a file of its own.
            if window == WindowKind::NetlistEditor {
                let netlist = self.schematic_editor.netlist_of_the_sheet();
                self.netlist_editor.show_netlist(&netlist);
            }
            self.handle(Message::ShowWindow(window));
        }
        self.schematic_editor.update(message);
        self.show_any_new_run();
    }

    /// Runs whichever analysis a menu command means, over the dialog that
    /// holds its settings.
    ///
    /// Answers whether it ran anything, so the caller knows to stop. Kept
    /// apart from `handle` because each analysis needs its own dialog and
    /// the list will grow.
    fn ran_an_analysis(&mut self, message: &schematic_editor::Message) -> bool {
        // A transient is run over the window the Transient
        // Analysis dialog holds, which ships the values the
        // original shows on a new sheet.
        // The AC and DC transfer characteristics are run over
        // what their own dialogs hold.
        if *message == schematic_editor::Message::MenuCommand("SteadyStateSolver") {
            // Only the transient method is a directive; the two Jacobian
            // ones are the original's own and say so rather than running
            // something that answers a different question.
            match self.steady_state_analysis.asking() {
                Some(asking) => self.schematic_editor.run_asked(asking),
                None => {
                    if let Some(why) = self.steady_state_analysis.why_not() {
                        self.schematic_editor.say(format!("Cannot run: {why}"));
                    }
                }
            }
            return true;
        }
        if *message == schematic_editor::Message::MenuCommand("TemperatureAnalysis1") {
            let asking = self.temperature_analysis.asking();
            self.schematic_editor.run_asked(asking);
            return true;
        }
        if *message == schematic_editor::Message::MenuCommand("ACTransferCharateristic") {
            let asking = self.ac_transfer_analysis.asking();
            self.schematic_editor.run_asked(asking);
            return true;
        }
        if *message == schematic_editor::Message::MenuCommand("DCTransferCharacteristic") {
            self.dc_transfer_analysis
                .offer_sources(self.schematic_editor.sources());
            if self.dc_transfer_analysis.can_ask() {
                let asking = self.dc_transfer_analysis.asking();
                self.schematic_editor.run_asked(asking);
            } else {
                self.schematic_editor
                    .say("Cannot run: the sheet has no source to sweep");
            }
            return true;
        }
        // `Interactive > Start` runs whichever of the five modes the menu
        // is set to. The five themselves only choose the mode - they share
        // one handler in the original that stores the item's Tag.
        if *message == schematic_editor::Message::MenuCommand("mnStartInteractive") {
            self.start_interactive();
            return true;
        }
        // A menu command that names a window this shell has opens it.
        false
    }

    /// `Interactive > Start`: runs whichever mode the menu is set to.
    ///
    /// The original keeps the circuit running and lets switches be thrown
    /// while it does. The port runs the analysis once, which is the part of
    /// it the simulator seam can do: a run is started, finished and drawn.
    /// Staying live is a second thing, and pretending to be live while
    /// running once would be worse than doing one honestly.
    fn start_interactive(&mut self) {
        use crate::schematic_editor::InteractiveMode;

        let mode = self.schematic_editor.interactive_mode();
        let asking = match mode {
            InteractiveMode::Dc => Some(tiara_core::spice_netlist::Analysis::OperatingPoint),
            InteractiveMode::Ac => Some(self.ac_transfer_analysis.asking()),
            InteractiveMode::Transient | InteractiveMode::TransientSingleShot => {
                let start = self.transient_analysis.start_display().to_owned();
                let stop = self.transient_analysis.end_display().to_owned();
                Some(schematic_editor::SchematicEditor::transient_over(
                    &start, &stop,
                ))
            }
            // Digital wants a digital engine, which the seam does not have.
            InteractiveMode::Digital => None,
        };

        match asking {
            Some(asking) => self.schematic_editor.run_asked(asking),
            None => self.schematic_editor.say(format!(
                "Cannot run: {} needs a digital simulator",
                mode.caption()
            )),
        }
    }

    /// Shows a run's curves in the window that draws them.
    ///
    /// Called after every schematic-editor message rather than only after
    /// the analysis ones, because a run can be started from the menu, from
    /// a dialog or by repeating the last one, and this way none of those
    /// has to remember to say so. A run that measured nothing, and a
    /// message that started no run at all, both do nothing here.
    fn show_any_new_run(&mut self) {
        let curves = self.schematic_editor.take_new_curves();
        if self.analysis_results.show_run(&curves) {
            self.dock.show(WindowKind::AnalysisResults);
        }
    }

    #[allow(clippy::too_many_lines)]
    fn handle(&mut self, message: Message) {
        match message {
            Message::ShowWindow(window) => {
                if window == WindowKind::SelectTinaFolder && !self.dock.holds(window) {
                    self.select_tina_folder.open_standard();
                }
                self.dock.show(window);
            }
            Message::DockFocused(pane) => self.dock.focus(pane),
            Message::DockTabSelected(pane, at) => self.dock.select(pane, at),
            Message::DockTabClosed(pane, at) => self.dock.close(pane, at),
            Message::DockDragged(event) => {
                if let pane_grid::DragEvent::Dropped { pane, target } = event {
                    self.dock.drop(pane, target);
                }
            }
            Message::DockResized(event) => self.dock.resize(event),
            Message::KeyPressed(key, modifiers) => {
                if self.active_window() == WindowKind::SelectTinaFolder && modifiers.is_empty() {
                    if matches!(
                        key,
                        iced::keyboard::Key::Named(iced::keyboard::key::Named::Escape)
                    ) {
                        self.handle(Message::SelectTinaFolder(
                            crate::select_tina_folder::Message::CancelPressed,
                        ));
                        return;
                    }
                    if matches!(
                        key,
                        iced::keyboard::Key::Named(iced::keyboard::key::Named::Enter)
                    ) {
                        self.handle(Message::SelectTinaFolder(
                            crate::select_tina_folder::Message::ImportPressed,
                        ));
                        return;
                    }
                }
                // The menu gets the key first: Alt and an underlined letter
                // opens one, and a letter inside an open menu chooses an
                // entry. Anything it does not want falls through to the
                // shortcuts below.
                if self.schematic_editor.menu_is_open() || modifiers.alt() {
                    if let Some(name) = self.schematic_editor.navigate_menu(&key, modifiers) {
                        self.handle(Message::SchematicEditor(
                            schematic_editor::Message::MenuCommand(name),
                        ));
                    }
                    return;
                }
                if matches!(
                    key,
                    iced::keyboard::Key::Named(iced::keyboard::key::Named::Escape)
                ) && modifiers.is_empty()
                {
                    self.handle(Message::SchematicEditor(
                        schematic_editor::Message::CancelTool,
                    ));
                    return;
                }
                // Every shortcut the menu shows is read back out of the menu
                // itself, so the keys that work are the keys the menu
                // advertises, and a greyed command's shortcut is as dead as
                // the command. A press that names no command is left alone.
                if let Some(name) = schematic_editor::shortcuts::command_for(
                    &key,
                    modifiers,
                    self.schematic_editor.state(),
                ) {
                    self.handle(Message::SchematicEditor(
                        schematic_editor::Message::MenuCommand(name),
                    ));
                }
            }
            Message::SchematicEditor(message) => self.schematic_editor_message(message),
            Message::AboutTina(message) => {
                let _ = self.about_box.update(message);
            }
            Message::AcMultisineAnalysis(message) => {
                self.ac_multisine_analysis.update(message);
            }
            Message::AnalysisModeSelection(message) => {
                self.analysis_mode_selection.update(message);
            }
            Message::AnalysisOptions(message) => {
                let _ = self.analysis_options.update(message);
            }
            Message::AnalysisParameters(message) => {
                self.analysis_parameters.update(message);
            }
            Message::AnalysisResults(message) => {
                self.analysis_results.update(message);
            }
            Message::BatchSimulation(message) => {
                self.batch_simulation.update(message);
            }
            Message::BillOfMaterials(message) => {
                self.bill_of_materials.update(message);
            }
            Message::BlockWizard(message) => {
                self.block_wizard.update(message);
            }
            Message::ComponentBarEditor(message) => {
                self.component_bar_editor.update(message);
            }
            Message::ComponentExplorer(message) => {
                // The explorer acts on the sheet through the editor, which
                // answers the navigation the recovered routine asks for.
                // Picking a line out is followed by showing it, which is the
                // two steps that routine expects.
                let reveal = matches!(
                    message,
                    crate::component_explorer::Message::TreeSelectionChanged(Some(_))
                );
                let _ = self
                    .component_explorer
                    .update(message, &mut self.schematic_editor);
                if reveal {
                    let _ = self.component_explorer.update(
                        crate::component_explorer::Message::CircuitTreeClicked,
                        &mut self.schematic_editor,
                    );
                }
            }
            Message::Converters(message) => {
                self.converters.update(message);
            }
            Message::DesignTool(message) => {
                self.design_tool.update(message);
            }
            Message::DigitalSignalGenerator(message) => {
                let _ = self.digital_signal_generator.update(message);
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
            Message::GlobalParameterEditor(message) => {
                // The editor works its expressions out with the port's own
                // evaluator; the task it hands back is the dialog's own
                // bookkeeping, which this shell has nowhere to run.
                let _ = self.global_parameter_editor.update(
                    message,
                    &mut self.parameter_environment,
                    &Evaluator,
                );
            }
            Message::FootprintNameEditor(message) => {
                self.footprint_name_editor.update(message);
            }
            Message::FourierSeries(message) => {
                self.fourier_series.update(message);
            }
            Message::FrequencySpectrum(message) => {
                self.frequency_spectrum.update(message);
            }
            Message::FunctionGenerator(message) => {
                self.function_generator.update(message);
            }
            Message::InsertText(message) => {
                self.insert_text.update(message);
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
            Message::LtspiceImport(message) => {
                // The dialog reads the file through its services, which
                // leave the circuit in a box; the editor takes it from there,
                // because the dialog cannot hold the editor and the editor
                // cannot hold the dialog.
                self.pending = Some(
                    self.ltspice_import
                        .update(message)
                        .map(Message::LtspiceImport),
                );
                let services = self.ltspice_import.services();
                let taken = services
                    .lock()
                    .ok()
                    .and_then(|mut services| services.take_imported());
                if let Some((document, _)) = taken {
                    self.schematic_editor.open_imported(document);
                    self.dock.show(WindowKind::SchematicEditor);
                }
            }
            Message::LogicDesign(message) => {
                self.logic_design.update(message);
            }
            Message::MacroProperties(message) => {
                self.pending = Some(
                    self.macro_properties
                        .update(message)
                        .map(Message::MacroProperties),
                );
            }
            Message::MacroWizard(message) => {
                self.macro_wizard.update(message);
            }
            Message::MapFaultToHardware(message) => {
                self.map_fault_to_hardware.update(message);
            }
            Message::NetlistEditor(message) => {
                self.pending = Some(
                    self.netlist_editor
                        .update(message)
                        .map(Message::NetlistEditor),
                );
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
            Message::PythonShell(message) => {
                let _ = self.python_shell.update(message);
            }
            Message::SchematicReconciliation(message) => {
                self.schematic_reconciliation.update(message);
            }
            Message::SchematicSymbolEditor(message) => {
                self.schematic_symbol_editor.update(message);
            }
            Message::SelectTinaFolder(message) => {
                let _ = self.select_tina_folder.update(message);
                if self.select_tina_folder.take_close_requested() {
                    self.dock.close_window(WindowKind::SelectTinaFolder);
                }
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
            Message::SpiceCommandEditor(message) => {
                self.spice_command_editor.update(message);
            }
            Message::SpiceExport(message) => {
                let _ = self.spice_export.update(message);
            }
            Message::SymbolTable(message) => {
                self.symbol_table.update(message);
            }
            Message::TestAndMeasurementOptions(message) => {
                self.test_and_measurement_options.update(message);
            }
            Message::TransientAnalysis(message) => {
                self.transient_analysis.update(message);
            }
            Message::XyRecorder(message) => {
                self.xy_recorder.update(message);
            }
        }
    }

    /// The window the menus and the title bar act on.
    #[must_use]
    pub(crate) fn active_window(&self) -> WindowKind {
        self.dock.focused_kind()
    }

    pub(crate) fn view(&self) -> Element<'_, Message> {
        debug_assert!(WindowKind::ALL.contains(&self.active_window()));

        if let Some(trace) = self.active_window().trace() {
            // Every window is built from a form; only a window the original
            // will open has a photograph as well.
            debug_assert!(!trace.form_resource.is_empty());
            debug_assert!(
                trace
                    .original_function
                    .is_none_or(|address| !address.is_empty())
            );
        }

        let focused = self.dock.focused();
        let grid = pane_grid(self.dock.panes(), |pane, group, _is_maximized| {
            let showing = group.showing().unwrap_or(WindowKind::SchematicEditor);
            pane_grid::Content::new(self.content_for(showing))
                .title_bar(pane_grid::TitleBar::new(self.tabs_of(pane, group)).padding(0))
        })
        .spacing(4)
        .on_click(Message::DockFocused)
        .on_drag(Message::DockDragged)
        .on_resize(6, Message::DockResized);
        let _ = focused;

        container(grid)
            .padding(4)
            .width(Length::Fill)
            .height(Length::Fill)
            .into()
    }

    /// The tabs along the top of one region.
    ///
    /// The editor's tab has no close button: it is the one window the
    /// application is for, and closing it would leave nothing behind.
    fn tabs_of(&self, pane: pane_grid::Pane, group: &Group) -> Element<'_, Message> {
        let tokens = self.theme.tokens;
        let has_the_keyboard = pane == self.dock.focused();

        let mut strip = row![].spacing(2).align_y(Alignment::Center);
        for (at, kind) in group.tabs().iter().enumerate() {
            let showing = at == group.active();
            let lit = showing && has_the_keyboard;
            strip = strip.push(
                button(text(kind.title().to_owned()).size(12))
                    .padding([3, 10])
                    .on_press(Message::DockTabSelected(pane, at))
                    .style(move |theme, status| {
                        chrome::category_button_style(tokens, lit, theme, status)
                    }),
            );
            if *kind != WindowKind::SchematicEditor {
                strip = strip.push(
                    button(text("\u{00D7}").size(12))
                        .padding([3, 6])
                        .on_press(Message::DockTabClosed(pane, at))
                        .style(move |theme, status| {
                            chrome::toolbar_button_style(tokens, theme, status)
                        }),
                );
            }
        }

        container(strip.push(horizontal_space()))
            .padding([2, 4])
            .width(Length::Fill)
            .style(move |iced_theme| chrome::toolbar_style(tokens, iced_theme))
            .into()
    }

    /// The circuits and their parts, as the Component Explorer shows them.
    ///
    /// One line per open circuit and one under it per part. The explorer
    /// holds no circuit of its own - the editor does - so the tree is built
    /// here and handed over.
    fn circuit_tree(&self) -> Vec<crate::component_explorer::Row> {
        use crate::component_explorer::{Row, TreeNodeId};
        use crate::schematic_editor::navigation::object_of;

        let mut rows = Vec::new();
        let mut next = 0_u64;
        for (page, circuit) in self.schematic_editor.circuits().iter().enumerate() {
            let parent = TreeNodeId(next);
            next += 1;
            rows.push(Row::circuit(parent, circuit.name().to_owned()));

            for part in circuit.sheet().document().parts() {
                let id = TreeNodeId(next);
                next += 1;
                rows.push(Row::part(
                    id,
                    parent,
                    object_of(page, part.id, part.at),
                    format!("{} ({})", part.label, part.kind),
                ));
            }
        }
        rows
    }

    /// What one docked window draws.
    ///
    /// One arm per window, which is why it is long: there is nothing to
    /// factor out of a table of fifty windows that would not just move the
    /// table somewhere else.
    #[allow(clippy::too_many_lines)]
    fn content_for(&self, kind: WindowKind) -> Element<'_, Message> {
        match kind {
            WindowKind::SchematicEditor => self
                .schematic_editor
                .view(&self.theme)
                .map(Message::SchematicEditor),
            WindowKind::AboutTina => self.about_box.view().map(Message::AboutTina),
            WindowKind::AcMultisineAnalysis => self
                .ac_multisine_analysis
                .view()
                .map(Message::AcMultisineAnalysis),
            WindowKind::AnalysisModeSelection => self
                .analysis_mode_selection
                .view()
                .map(Message::AnalysisModeSelection),
            WindowKind::AnalysisOptions => {
                self.analysis_options.view().map(Message::AnalysisOptions)
            }
            WindowKind::AnalysisParameters => self
                .analysis_parameters
                .view()
                .map(Message::AnalysisParameters),
            WindowKind::AnalysisResults => {
                self.analysis_results.view().map(Message::AnalysisResults)
            }
            WindowKind::BatchSimulation => {
                self.batch_simulation.view().map(Message::BatchSimulation)
            }
            WindowKind::BillOfMaterials => {
                self.bill_of_materials.view().map(Message::BillOfMaterials)
            }
            WindowKind::BlockWizard => self.block_wizard.view().map(Message::BlockWizard),
            WindowKind::ComponentBarEditor => self
                .component_bar_editor
                .view()
                .map(Message::ComponentBarEditor),
            WindowKind::ComponentExplorer => self
                .component_explorer
                .view(&self.circuit_tree())
                .map(Message::ComponentExplorer),
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
            WindowKind::GlobalParameterEditor => self
                .global_parameter_editor
                .view()
                .map(Message::GlobalParameterEditor),
            WindowKind::FourierSeries => self.fourier_series.view().map(Message::FourierSeries),
            WindowKind::FrequencySpectrum => self
                .frequency_spectrum
                .view()
                .map(Message::FrequencySpectrum),
            WindowKind::FunctionGenerator => self
                .function_generator
                .view()
                .map(Message::FunctionGenerator),
            WindowKind::InsertText => self.insert_text.view().map(Message::InsertText),
            WindowKind::InteractiveMode => {
                self.interactive_mode.view().map(Message::InteractiveMode)
            }
            WindowKind::Interpreter => self.interpreter.view().map(Message::Interpreter),
            WindowKind::LogicAnalyzer => self.logic_analyzer.view().map(Message::LogicAnalyzer),
            WindowKind::LogicDesign => self.logic_design.view().map(Message::LogicDesign),
            WindowKind::LtspiceImport => self.ltspice_import.view().map(Message::LtspiceImport),
            WindowKind::MacroProperties => {
                self.macro_properties.view().map(Message::MacroProperties)
            }
            WindowKind::MacroWizard => self.macro_wizard.view().map(Message::MacroWizard),
            WindowKind::MapFaultToHardware => self
                .map_fault_to_hardware
                .view()
                .map(Message::MapFaultToHardware),
            WindowKind::Multimeter => self.multimeter.view().map(Message::Multimeter),
            WindowKind::NetlistEditor => self.netlist_editor.view().map(Message::NetlistEditor),
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
            WindowKind::PythonShell => self.python_shell.view().map(Message::PythonShell),
            WindowKind::SchematicReconciliation => self
                .schematic_reconciliation
                .view()
                .map(Message::SchematicReconciliation),
            WindowKind::SchematicSymbolEditor => self
                .schematic_symbol_editor
                .view()
                .map(Message::SchematicSymbolEditor),
            WindowKind::SelectTinaFolder => self
                .select_tina_folder
                .view()
                .map(Message::SelectTinaFolder),
            WindowKind::SerialMonitor => self.serial_monitor.view().map(Message::SerialMonitor),
            WindowKind::SignalAnalyzer => self.signal_analyzer.view().map(Message::SignalAnalyzer),
            WindowKind::SpectrumAnalyzer => {
                self.spectrum_analyzer.view().map(Message::SpectrumAnalyzer)
            }
            WindowKind::SpiceCommandEditor => self
                .spice_command_editor
                .view()
                .map(Message::SpiceCommandEditor),
            WindowKind::SpiceExport => self.spice_export.view().map(Message::SpiceExport),
            WindowKind::SymbolTable => self.symbol_table.view().map(Message::SymbolTable),
            WindowKind::TestAndMeasurementOptions => self
                .test_and_measurement_options
                .view()
                .map(Message::TestAndMeasurementOptions),
            WindowKind::TransientAnalysis => self
                .transient_analysis
                .view()
                .map(Message::TransientAnalysis),
            WindowKind::XyRecorder => self.xy_recorder.view().map(Message::XyRecorder),
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn a_run_is_drawn_once_and_brings_its_window_forward() {
        let mut application = TiaraApplication::default();
        assert_eq!(application.analysis_results.result_count(), 0);

        // Stand in for a run having happened.
        application.schematic_editor.pretend_it_ran(
            tiara_core::simulator::table_of("time,V(1),V(2)\n0,10,5\n1,9,4\n").unwrap(),
        );
        application.show_any_new_run();

        assert!(application.analysis_results.result_count() > 0);
        assert_eq!(application.active_window(), WindowKind::AnalysisResults);

        // Asking again draws nothing more: a run is taken once.
        let before = application.analysis_results.result_count();
        application.show_any_new_run();
        assert_eq!(application.analysis_results.result_count(), before);
    }

    #[test]
    fn a_message_that_started_no_run_draws_nothing() {
        let mut application = TiaraApplication::default();
        application.handle(Message::SchematicEditor(
            schematic_editor::Message::MenuCommand("mnERC"),
        ));
        assert_eq!(application.analysis_results.result_count(), 0);
    }

    #[test]
    fn a_steady_state_run_asks_for_a_transient_when_that_is_the_method() {
        let mut application = TiaraApplication::default();
        application.handle(Message::SchematicEditor(
            schematic_editor::Message::MenuCommand("SteadyStateSolver"),
        ));
        // Transient is the method the dialog starts on, so it asked - and
        // there is no simulator here to answer.
        assert_eq!(
            application.schematic_editor.said(),
            Some("Cannot run: no simulator was found")
        );
    }

    #[test]
    fn the_jacobian_methods_say_they_have_no_netlist_rather_than_running() {
        let mut application = TiaraApplication::default();
        let _ = application.steady_state_analysis.update(
            crate::steady_state_analysis::Message::SteadyStateMethodChanged(
                crate::steady_state_analysis::SteadyStateMethod::BroydenUpdateJacobian,
            ),
        );

        application.handle(Message::SchematicEditor(
            schematic_editor::Message::MenuCommand("SteadyStateSolver"),
        ));
        let said = application.schematic_editor.said().unwrap();
        assert!(said.contains("Broyden update Jacobian"), "{said}");
        assert!(said.contains("no netlist"), "{said}");
    }

    #[test]
    fn an_ac_transfer_is_run_over_what_its_dialog_holds() {
        let mut application = TiaraApplication::default();
        application.handle(Message::SchematicEditor(
            schematic_editor::Message::MenuCommand("ACTransferCharateristic"),
        ));
        // It got as far as asking; there is no simulator here to answer.
        assert_eq!(
            application.schematic_editor.said(),
            Some("Cannot run: no simulator was found")
        );
    }

    #[test]
    fn a_dc_sweep_needs_a_source_on_the_sheet_and_says_so() {
        let mut application = TiaraApplication::default();
        application.handle(Message::SchematicEditor(
            schematic_editor::Message::MenuCommand("DCTransferCharacteristic"),
        ));
        assert_eq!(
            application.schematic_editor.said(),
            Some("Cannot run: the sheet has no source to sweep")
        );
    }

    #[test]
    fn a_dc_sweep_takes_the_sources_the_sheet_offers() {
        let mut application = TiaraApplication::default();
        let sheet = application.schematic_editor.sheet_mut();
        let source = sheet.place("V", tiara_core::schematic_document::Point::new(0, 0));
        sheet.rename(source, "V1".to_owned());

        application.handle(Message::SchematicEditor(
            schematic_editor::Message::MenuCommand("DCTransferCharacteristic"),
        ));
        // The source was found, so the reason is the missing simulator.
        assert_eq!(
            application.schematic_editor.said(),
            Some("Cannot run: no simulator was found")
        );
    }

    #[test]
    fn the_five_interactive_commands_choose_a_mode_and_run_nothing() {
        // All five share one handler in the original, which stores the
        // menu item's Tag and nothing else.
        let mut application = TiaraApplication::default();
        for mode in crate::schematic_editor::InteractiveMode::ALL {
            application.handle(Message::SchematicEditor(
                schematic_editor::Message::MenuCommand(mode.command()),
            ));
            assert_eq!(
                application.schematic_editor.interactive_mode(),
                mode,
                "{} should choose its mode",
                mode.command()
            );
            assert_eq!(
                application.schematic_editor.said(),
                Some(format!("Interactive: {}", mode.caption()).as_str())
            );
        }
    }

    #[test]
    fn interactive_start_runs_whichever_mode_is_chosen() {
        let mut application = TiaraApplication::default();
        // DC is the mode it starts on, and it asks for an operating point.
        application.handle(Message::SchematicEditor(
            schematic_editor::Message::MenuCommand("mnStartInteractive"),
        ));
        assert_eq!(
            application.schematic_editor.said(),
            Some("Cannot run: no simulator was found")
        );
    }

    #[test]
    fn interactive_digital_says_it_needs_an_engine_the_port_has_not_got() {
        let mut application = TiaraApplication::default();
        application.handle(Message::SchematicEditor(
            schematic_editor::Message::MenuCommand("mnIntDigital"),
        ));
        application.handle(Message::SchematicEditor(
            schematic_editor::Message::MenuCommand("mnStartInteractive"),
        ));
        assert_eq!(
            application.schematic_editor.said(),
            Some("Cannot run: Digital needs a digital simulator")
        );
    }

    #[test]
    fn the_spice_editor_opens_on_the_netlist_of_the_sheet() {
        let mut application = TiaraApplication::default();
        let sheet = application.schematic_editor.sheet_mut();
        sheet.draw_wire(
            tiara_core::schematic_document::Point::new(0, 0),
            tiara_core::schematic_document::Point::new(4, 0),
            tiara_core::schematic_document::WireKind::Wire,
        );
        sheet.draw_wire(
            tiara_core::schematic_document::Point::new(0, 8),
            tiara_core::schematic_document::Point::new(4, 8),
            tiara_core::schematic_document::WireKind::Wire,
        );
        let resistor = sheet.place_pinned(
            "R",
            tiara_core::schematic_document::Point::new(0, 0),
            vec![
                tiara_core::schematic_document::Pin::new(
                    "1",
                    tiara_core::schematic_document::Point::new(0, 0),
                ),
                tiara_core::schematic_document::Pin::new(
                    "2",
                    tiara_core::schematic_document::Point::new(0, 8),
                ),
            ],
        );
        sheet.set_value(resistor, "1k");

        application.handle(Message::SchematicEditor(
            schematic_editor::Message::MenuCommand("mnSPiceEditor"),
        ));

        assert_eq!(application.active_window(), WindowKind::NetlistEditor);
        let shown = application.netlist_editor.text();
        assert!(shown.contains("R1 1 2 1k"), "{shown}");
        assert!(shown.contains(".END"), "{shown}");
    }

    #[test]
    fn a_netlist_someone_has_been_typing_into_is_not_overwritten() {
        let mut application = TiaraApplication::default();
        application.netlist_editor.show_netlist("V1 1 0 10");
        application.netlist_editor.mark_modified_for_test();

        application.handle(Message::SchematicEditor(
            schematic_editor::Message::MenuCommand("mnSPiceEditor"),
        ));

        assert_eq!(application.netlist_editor.text(), "V1 1 0 10");
    }

    #[test]
    fn application_opens_the_schematic_editor_without_a_window_switcher() {
        let application = TiaraApplication::default();

        assert_eq!(application.active_window(), WindowKind::SchematicEditor);
    }

    #[test]
    fn the_editor_title_leads_with_the_document() {
        // The original titles the window `Noname - Schematic Editor` until the
        // circuit is saved; naming only the window loses which circuit is open.
        let application = TiaraApplication::default();

        assert_eq!(application.title(), "Noname - Schematic Editor");
    }

    #[test]
    fn another_window_is_titled_by_the_resource_alone() {
        let mut application = TiaraApplication::default();

        application.handle(Message::ShowWindow(WindowKind::Oscilloscope));

        assert_eq!(application.active_window(), WindowKind::Oscilloscope);
        assert_eq!(application.title(), WindowKind::Oscilloscope.title());
    }

    #[test]
    fn a_menu_command_that_names_a_window_opens_it() {
        let mut application = TiaraApplication::default();

        application.handle(Message::SchematicEditor(
            schematic_editor::Message::MenuCommand("Oscilloscope"),
        ));

        assert_eq!(application.active_window(), WindowKind::Oscilloscope);
    }

    #[test]
    fn a_menu_command_that_names_no_window_leaves_the_editor_showing() {
        let mut application = TiaraApplication::default();

        application.handle(Message::SchematicEditor(
            schematic_editor::Message::MenuCommand("mnNew"),
        ));

        assert_eq!(application.active_window(), WindowKind::SchematicEditor);
    }

    #[test]
    fn application_applies_a_signex_shape_custom_theme() {
        let mut application = TiaraApplication::default();
        let default_theme = CustomThemeFile::default();
        let custom_theme = CustomThemeFile {
            name: "TIARA Blue".to_owned(),
            tokens: crate::shared::theme::ThemeTokens {
                accent: crate::shared::theme::ThemeColor::rgb(0x11, 0x66, 0xCC),
                ..default_theme.tokens
            },
            ..default_theme
        };
        let json = serde_json::to_string(&custom_theme).expect("custom theme JSON");

        application
            .apply_theme_json(&json)
            .expect("applied custom theme");

        assert_eq!(application.theme, custom_theme);
    }

    #[test]
    fn invalid_custom_theme_keeps_the_active_theme() {
        let mut application = TiaraApplication::default();
        let original_theme = application.theme.clone();

        assert!(application.apply_theme_json("{}").is_err());
        assert_eq!(application.theme, original_theme);
    }

    #[test]
    fn a_shortcut_reaches_the_command_the_menu_shows_it_against() {
        let mut application = TiaraApplication::default();
        assert_eq!(application.active_window(), WindowKind::SchematicEditor);

        // Shift+Ctrl+D is what the menu shows beside Tools > Diagram Window.
        application.handle(Message::KeyPressed(
            iced::keyboard::Key::Character("d".into()),
            iced::keyboard::Modifiers::CTRL | iced::keyboard::Modifiers::SHIFT,
        ));

        assert_eq!(application.active_window(), WindowKind::AnalysisResults);
    }

    #[test]
    fn a_key_press_that_names_no_command_changes_nothing() {
        let mut application = TiaraApplication::default();

        application.handle(Message::KeyPressed(
            iced::keyboard::Key::Character("q".into()),
            iced::keyboard::Modifiers::empty(),
        ));

        assert_eq!(application.active_window(), WindowKind::SchematicEditor);
    }

    #[test]
    fn a_shortcut_whose_command_is_greyed_does_nothing() {
        // Ctrl+S is shown against Save, which an empty sheet greys.
        let mut application = TiaraApplication::default();

        application.handle(Message::KeyPressed(
            iced::keyboard::Key::Character("s".into()),
            iced::keyboard::Modifiers::CTRL,
        ));

        assert_eq!(application.active_window(), WindowKind::SchematicEditor);
    }

    #[test]
    fn an_instrument_opens_beside_the_circuit_rather_than_over_it() {
        let mut application = TiaraApplication::default();
        application.handle(Message::ShowWindow(WindowKind::Oscilloscope));

        // The instrument has the keyboard, and the circuit is still docked.
        assert_eq!(application.active_window(), WindowKind::Oscilloscope);
        assert_eq!(application.dock.regions(), 2);
        assert!(application.dock.holds(WindowKind::SchematicEditor));
    }

    #[test]
    fn instruments_after_the_first_share_the_region_beside_the_circuit() {
        let mut application = TiaraApplication::default();
        application.handle(Message::ShowWindow(WindowKind::Oscilloscope));
        application.handle(Message::ShowWindow(WindowKind::Multimeter));

        assert_eq!(application.dock.regions(), 2);
        assert_eq!(application.dock.docked().len(), 3);
    }

    #[test]
    fn closing_an_instrument_leaves_the_circuit_with_the_keyboard() {
        let mut application = TiaraApplication::default();
        application.handle(Message::ShowWindow(WindowKind::Oscilloscope));

        let beside = *application
            .dock
            .panes()
            .iter()
            .map(|(pane, _)| pane)
            .find(|pane| **pane != application.dock.editors_region())
            .unwrap();
        application.handle(Message::DockTabClosed(beside, 0));

        assert_eq!(application.dock.regions(), 1);
        assert_eq!(application.active_window(), WindowKind::SchematicEditor);
    }

    #[test]
    fn the_title_follows_whichever_region_has_the_keyboard() {
        let mut application = TiaraApplication::default();
        assert!(application.title().ends_with("Schematic Editor"));

        application.handle(Message::ShowWindow(WindowKind::Oscilloscope));
        assert_eq!(application.title(), WindowKind::Oscilloscope.title());

        application.handle(Message::ShowWindow(WindowKind::SchematicEditor));
        assert!(application.title().ends_with("Schematic Editor"));
    }

    #[test]
    fn the_dock_draws_with_the_circuit_and_an_instrument_in_it() {
        // Builds the whole widget tree, which is what catches a layout the
        // pane grid will not take before anyone opens the window.
        let mut application = TiaraApplication::default();
        let _ = application.view();

        application.handle(Message::ShowWindow(WindowKind::Oscilloscope));
        application.handle(Message::ShowWindow(WindowKind::Multimeter));
        let _ = application.view();
    }

    #[test]
    fn the_global_parameter_editor_opens_from_its_menu_command() {
        // It has had its logic ported for some time and could not be shown,
        // because its update wanted an expression evaluator the shell did
        // not have. It has one now.
        let mut application = TiaraApplication::default();
        application.handle(Message::SchematicEditor(
            schematic_editor::Message::MenuCommand("mnSetGlobalParameters"),
        ));

        assert_eq!(
            application.active_window(),
            WindowKind::GlobalParameterEditor
        );
        let _ = application.view();
    }

    #[test]
    fn the_global_parameter_editor_works_its_expressions_out() {
        let mut application = TiaraApplication::default();
        application.handle(Message::GlobalParameterEditor(
            crate::global_parameter_editor::Message::Shown,
        ));
        // Nothing to work out yet, and nothing broke trying.
        let _ = application.view();
    }

    #[test]
    fn the_ltspice_import_dialog_opens_from_its_menu_command() {
        let mut application = TiaraApplication::default();
        application.handle(Message::SchematicEditor(
            schematic_editor::Message::MenuCommand("mnLTSpiceImport"),
        ));

        assert_eq!(application.active_window(), WindowKind::LtspiceImport);
        let _ = application.view();
    }

    #[test]
    fn a_circuit_the_import_read_reaches_the_editor() {
        let folder =
            std::env::temp_dir().join(format!("tiara-shell-import-{}", std::process::id()));
        let _ = std::fs::remove_dir_all(&folder);
        std::fs::create_dir_all(&folder).unwrap();
        let source = folder.join("divider.asc");
        std::fs::write(
            &source,
            "Version 4
SYMBOL res 0 0 R0
SYMATTR InstName R1
",
        )
        .unwrap();

        let mut application = TiaraApplication::default();
        // What the dialog's own task does once the file has been read.
        {
            use crate::ltspice_import::LtspiceSchematicPort;
            let services = application.ltspice_import.services();
            let mut services = services.lock().unwrap();
            services.create_new_schematic().unwrap();
            services.import_ltspice_source(&source).unwrap();
        }

        // Any message from the dialog makes the shell look for what was read.
        application.handle(Message::LtspiceImport(
            crate::ltspice_import::Message::FileNameChanged(String::new()),
        ));

        assert_eq!(application.active_window(), WindowKind::SchematicEditor);
        assert_eq!(
            application
                .schematic_editor
                .sheet()
                .document()
                .parts()
                .len(),
            1
        );

        let _ = std::fs::remove_dir_all(&folder);
    }

    #[test]
    fn every_repository_ltspice_example_reaches_the_editor() {
        use crate::ltspice_import::LtspiceSchematicPort;

        let examples = std::path::Path::new(env!("CARGO_MANIFEST_DIR")).join("../../examples");
        let mut sources = walkdir::WalkDir::new(&examples)
            .into_iter()
            .filter_map(Result::ok)
            .filter(|entry| entry.file_type().is_file())
            .map(walkdir::DirEntry::into_path)
            .filter(|path| {
                path.extension()
                    .is_some_and(|extension| extension.eq_ignore_ascii_case("asc"))
            })
            .collect::<Vec<_>>();
        sources.sort();
        assert!(
            !sources.is_empty(),
            "{} has no LTspice examples",
            examples.display()
        );

        for source in sources {
            let mut application = TiaraApplication::default();
            {
                let services = application.ltspice_import.services();
                let mut services = services.lock().unwrap();
                services.create_new_schematic().unwrap();
                services
                    .import_ltspice_source(&source)
                    .unwrap_or_else(|error| panic!("{}: {error}", source.display()));
            }

            application.handle(Message::LtspiceImport(
                crate::ltspice_import::Message::FileNameChanged(String::new()),
            ));

            let document = application.schematic_editor.sheet().document();
            assert_eq!(
                application.active_window(),
                WindowKind::SchematicEditor,
                "{} did not reach the schematic editor",
                source.display()
            );
            assert!(
                !document.parts().is_empty() && !document.wires().is_empty(),
                "{} produced no usable circuit",
                source.display()
            );
            assert!(
                !document.is_modified(),
                "{} was marked as an unsaved edit",
                source.display()
            );
        }
    }

    #[test]
    fn the_two_windows_the_original_will_not_open_still_open_here() {
        // Their commands are greyed in the original - one because its
        // handler is a stub, one because the original was never driven into
        // a macro - so neither was ever photographed. They were built from
        // their forms, and they open.
        let mut application = TiaraApplication::default();

        application.handle(Message::SchematicEditor(
            schematic_editor::Message::MenuCommand("mnSPiceEditor"),
        ));
        assert_eq!(application.active_window(), WindowKind::NetlistEditor);
        let _ = application.view();

        application.handle(Message::SchematicEditor(
            schematic_editor::Message::MenuCommand("mnEditMacroProperties"),
        ));
        assert_eq!(application.active_window(), WindowKind::MacroProperties);
        let _ = application.view();
    }

    #[test]
    fn the_component_explorer_shows_the_circuits_and_their_parts() {
        let mut application = TiaraApplication::default();
        application
            .schematic_editor
            .sheet_mut()
            .place("R", tiara_core::schematic_document::Point::new(2, 2));

        let tree = application.circuit_tree();
        assert_eq!(tree.len(), 2, "one circuit and one part in it");
        assert_eq!(tree[0].depth, 0);
        assert_eq!(tree[1].depth, 1);
        assert!(tree[1].label.starts_with("R1 (R)"));
        assert!(tree[0].node.circuit_object.is_none());
        assert!(tree[1].node.circuit_object.is_some());
    }

    #[test]
    fn choosing_a_part_in_the_explorer_picks_it_out_on_the_sheet() {
        let mut application = TiaraApplication::default();
        let id = application
            .schematic_editor
            .sheet_mut()
            .place("R", tiara_core::schematic_document::Point::new(2, 2));
        application.schematic_editor.sheet_mut().clear_selection();

        let tree = application.circuit_tree();
        application.handle(Message::ComponentExplorer(
            crate::component_explorer::Message::TreeSelectionChanged(Some(tree[1].node)),
        ));

        assert!(
            application
                .schematic_editor
                .sheet()
                .document()
                .is_selected(id)
        );
    }

    #[test]
    fn the_component_explorer_opens_from_its_menu_command() {
        let mut application = TiaraApplication::default();
        application.handle(Message::SchematicEditor(
            schematic_editor::Message::MenuCommand("mnComponentExplorer"),
        ));

        assert_eq!(application.active_window(), WindowKind::ComponentExplorer);
        let _ = application.view();
    }

    #[test]
    fn the_component_bar_editor_opens_from_its_menu_command() {
        let mut application = TiaraApplication::default();
        application.handle(Message::SchematicEditor(
            schematic_editor::Message::MenuCommand("mnComponentRackEditor"),
        ));

        assert_eq!(application.active_window(), WindowKind::ComponentBarEditor);
        let _ = application.view();
    }

    #[test]
    fn the_new_macro_wizard_opens_from_its_menu_command() {
        let mut application = TiaraApplication::default();
        application.handle(Message::SchematicEditor(
            schematic_editor::Message::MenuCommand("mnMacroManager"),
        ));

        assert_eq!(application.active_window(), WindowKind::MacroWizard);
        let _ = application.view();
    }

    #[test]
    fn alt_and_a_letter_opens_a_menu_from_the_shell() {
        let mut application = TiaraApplication::default();
        assert!(!application.schematic_editor.menu_is_open());

        application.handle(Message::KeyPressed(
            iced::keyboard::Key::Character("f".into()),
            iced::keyboard::Modifiers::ALT,
        ));
        assert!(application.schematic_editor.menu_is_open());
        let _ = application.view();
    }

    #[test]
    fn a_letter_inside_an_open_menu_runs_its_command() {
        let mut application = TiaraApplication::default();
        application.handle(Message::KeyPressed(
            iced::keyboard::Key::Character("f".into()),
            iced::keyboard::Modifiers::ALT,
        ));
        // New, which starts a second circuit.
        application.handle(Message::KeyPressed(
            iced::keyboard::Key::Character("n".into()),
            iced::keyboard::Modifiers::empty(),
        ));

        assert!(!application.schematic_editor.menu_is_open());
        assert_eq!(application.schematic_editor.circuits().len(), 2);
    }

    #[test]
    fn a_shortcut_still_works_while_no_menu_is_open() {
        // The menu takes the key only when one is open or Alt is held, so
        // the shortcuts the menu advertises are untouched.
        let mut application = TiaraApplication::default();
        application.handle(Message::KeyPressed(
            iced::keyboard::Key::Character("n".into()),
            iced::keyboard::Modifiers::CTRL,
        ));
        assert_eq!(application.schematic_editor.circuits().len(), 2);
    }

    #[test]
    fn undo_and_redo_shortcuts_change_the_active_document() {
        let mut application = TiaraApplication::default();
        application.handle(Message::SchematicEditor(schematic_editor::Message::PickUp(
            "R",
        )));
        application.handle(Message::SchematicEditor(
            schematic_editor::Message::SheetClicked(4, 6),
        ));
        assert_eq!(
            application
                .schematic_editor
                .sheet()
                .document()
                .parts()
                .len(),
            1
        );

        application.handle(Message::KeyPressed(
            iced::keyboard::Key::Character("z".into()),
            iced::keyboard::Modifiers::CTRL,
        ));

        assert!(application.schematic_editor.sheet().document().is_empty());
        assert!(application.schematic_editor.state().can_redo);

        application.handle(Message::KeyPressed(
            iced::keyboard::Key::Character("y".into()),
            iced::keyboard::Modifiers::CTRL,
        ));

        assert_eq!(
            application
                .schematic_editor
                .sheet()
                .document()
                .parts()
                .len(),
            1
        );
        assert!(!application.schematic_editor.state().can_redo);
    }

    #[test]
    fn escape_cancels_active_placement_before_the_next_sheet_press() {
        let mut application = TiaraApplication::default();
        application.handle(Message::SchematicEditor(schematic_editor::Message::PickUp(
            "R",
        )));
        application.handle(Message::SchematicEditor(
            schematic_editor::Message::SheetPressed(2, 2),
        ));
        application.handle(Message::SchematicEditor(
            schematic_editor::Message::SheetReleased(2, 2),
        ));

        application.handle(Message::KeyPressed(
            iced::keyboard::Key::Named(iced::keyboard::key::Named::Escape),
            iced::keyboard::Modifiers::empty(),
        ));
        application.handle(Message::SchematicEditor(
            schematic_editor::Message::SheetPressed(8, 8),
        ));
        application.handle(Message::SchematicEditor(
            schematic_editor::Message::SheetReleased(8, 8),
        ));

        assert_eq!(
            application
                .schematic_editor
                .sheet()
                .document()
                .parts()
                .len(),
            1
        );
        application.handle(Message::SchematicEditor(
            schematic_editor::Message::MenuCommand("mnUndo"),
        ));
        assert!(application.schematic_editor.sheet().document().is_empty());
    }

    #[test]
    fn a_new_edit_clears_redo_without_touching_another_document() {
        let mut application = TiaraApplication::default();
        application.handle(Message::SchematicEditor(schematic_editor::Message::PickUp(
            "R",
        )));
        application.handle(Message::SchematicEditor(
            schematic_editor::Message::SheetClicked(2, 2),
        ));
        application.handle(Message::SchematicEditor(
            schematic_editor::Message::MenuCommand("mnNew"),
        ));
        application.handle(Message::SchematicEditor(schematic_editor::Message::PickUp(
            "C",
        )));
        application.handle(Message::SchematicEditor(
            schematic_editor::Message::SheetClicked(6, 6),
        ));
        application.handle(Message::KeyPressed(
            iced::keyboard::Key::Character("z".into()),
            iced::keyboard::Modifiers::CTRL,
        ));
        assert!(application.schematic_editor.state().can_redo);

        application.handle(Message::SchematicEditor(schematic_editor::Message::PickUp(
            "L",
        )));
        application.handle(Message::SchematicEditor(
            schematic_editor::Message::SheetClicked(8, 8),
        ));

        assert!(!application.schematic_editor.state().can_redo);
        application.handle(Message::SchematicEditor(
            schematic_editor::Message::SelectDocument(0),
        ));
        assert_eq!(
            application.schematic_editor.sheet().document().parts()[0].kind,
            "R"
        );
    }

    fn configure_select_tina_folder(application: &mut TiaraApplication) {
        application.handle(Message::ShowWindow(WindowKind::SelectTinaFolder));
        application.select_tina_folder.open_with_installations(
            vec![crate::select_tina_folder::Installation {
                display_name: "TINA 16".to_owned(),
                install_location: r"C:\TINA16".to_owned(),
                program_folder: "Tina16".to_owned(),
                settings_dir: Some(r"C:\TINA16\Settings".to_owned()),
                catalog_dir: Some(r"C:\TINA16\Catalog".to_owned()),
            }],
            crate::select_tina_folder::ImportDestination {
                folders: crate::select_tina_folder::TinaFolders {
                    tina: std::path::PathBuf::from(r"C:\TIARA"),
                    settings: std::path::PathBuf::from(r"C:\TIARA\Settings"),
                    catalog: std::path::PathBuf::from(r"C:\TIARA\Catalog"),
                },
                temporary: std::path::PathBuf::from(r"C:\TIARA\Temp"),
                ini: std::path::PathBuf::from(r"C:\TIARA\TINA.INI"),
                catalog_database_subfolder: std::path::PathBuf::from("DATABASES"),
            },
        );
        application.handle(Message::SelectTinaFolder(
            crate::select_tina_folder::Message::InstallationSelected(0),
        ));
    }

    #[test]
    fn select_tina_folder_cancel_and_escape_close_the_host_without_document_changes() {
        let mut application = TiaraApplication::default();
        configure_select_tina_folder(&mut application);
        assert!(application.dock.holds(WindowKind::SelectTinaFolder));

        application.handle(Message::SelectTinaFolder(
            crate::select_tina_folder::Message::CancelPressed,
        ));

        assert!(!application.dock.holds(WindowKind::SelectTinaFolder));
        assert!(application.schematic_editor.sheet().document().is_empty());

        configure_select_tina_folder(&mut application);
        application.handle(Message::KeyPressed(
            iced::keyboard::Key::Named(iced::keyboard::key::Named::Escape),
            iced::keyboard::Modifiers::empty(),
        ));

        assert!(!application.dock.holds(WindowKind::SelectTinaFolder));
        assert_eq!(application.active_window(), WindowKind::SchematicEditor);
        assert!(application.schematic_editor.sheet().document().is_empty());
    }

    #[test]
    fn select_tina_folder_enter_uses_the_enabled_go_route() {
        let mut application = TiaraApplication::default();
        configure_select_tina_folder(&mut application);
        assert!(application.select_tina_folder.can_import());

        application.handle(Message::KeyPressed(
            iced::keyboard::Key::Named(iced::keyboard::key::Named::Enter),
            iced::keyboard::Modifiers::empty(),
        ));

        assert_eq!(
            application.select_tina_folder.status(),
            &crate::select_tina_folder::ImportStatus::Copying
        );
        assert!(application.dock.holds(WindowKind::SelectTinaFolder));
    }
}
