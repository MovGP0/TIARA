use iced::widget::{button, container, horizontal_space, pane_grid, row, text};
use iced::{Alignment, Element, Length};

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
    FourierSeries(crate::fourier_series::Message),
    FrequencySpectrum(crate::frequency_spectrum::Message),
    FunctionGenerator(crate::function_generator::Message),
    InsertText(crate::insert_text::Message),
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

#[derive(Debug, Default)]
pub struct TiaraApplication {
    /// Where the windows sit, and which of them has the keyboard.
    dock: Dock,
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
    fourier_series: crate::fourier_series::Window,
    frequency_spectrum: crate::frequency_spectrum::Window,
    function_generator: crate::function_generator::Window,
    insert_text: crate::insert_text::Window,
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
        iced::Task::none()
    }

    #[allow(clippy::too_many_lines)]
    fn handle(&mut self, message: Message) {
        match message {
            Message::ShowWindow(window) => {
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
            Message::SchematicEditor(message) => {
                // A menu command that names a window this shell has opens it.
                if let schematic_editor::Message::MenuCommand(name) = message
                    && let Some(window) = schematic_editor::menu_targets::window_for(name)
                {
                    self.dock.show(window);
                }
                self.schematic_editor.update(message);
            }
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
            debug_assert!(!trace.screenshot.is_empty());
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
}
