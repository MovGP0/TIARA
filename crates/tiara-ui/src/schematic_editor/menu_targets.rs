//! Which window a Schematic Editor menu command opens.
//!
//! The original opens a separate window for each of these; this shell shows one
//! window at a time, so choosing the command changes which one is shown. Only
//! commands whose window exists here are listed — the rest are recorded by the
//! status bar and do nothing yet, which is the honest state of them.
//!
//! Commands are matched on the name the resource gives them, not the caption:
//! the instrument menus carry the same caption twice, once for the submenu that
//! offers simulated and real-time and once for the command itself.

use crate::window_catalog::WindowKind;

/// The window one menu command opens, if this shell has it.
#[must_use]
pub fn window_for(name: &str) -> Option<WindowKind> {
    let window = match name {
        // File
        "ListofMaterials1" => WindowKind::BillOfMaterials,
        "ConvertersMnu" => WindowKind::Converters,
        "ExportNetlist" => WindowKind::SpiceExport,
        "ImportUserLibs" => WindowKind::SelectTinaFolder,

        // View
        //
        // `mnFaultManager` is not here on purpose: the Exam Manager is a panel
        // inside the editor rather than a window, so the editor shows and
        // hides it in place. Choosing it on the running original raises no
        // window at all.
        "mnEditorOptions" => WindowKind::DrawingPreferences,

        // Interactive
        //
        // The window is the options dialog, which `Interactive > Options...`
        // opens. `Start` runs the simulation rather than showing anything, so
        // it no longer claims this window.
        "mnIntOptions" => WindowKind::InteractiveMode,

        // Test and measurement: the instrument itself, and both of the
        // simulated and real-time entries its submenu offers.
        "FunctionGenerator" | "mnFGVirtual" | "mnFGReal" => WindowKind::FunctionGenerator,
        "Voltmeter" | "mnDMMVirtual" | "mnDMMReal" => WindowKind::Multimeter,
        "XYRecorder" | "mnXYRecVirtual" | "mnXYRecReal" => WindowKind::XyRecorder,
        "Oscilloscope" | "mnSCPVirtual" | "mnSCPReal" => WindowKind::Oscilloscope,
        "SignalAnalyzer" | "mnSAVirtual" | "mnSAReal" => WindowKind::SignalAnalyzer,
        "SpectrumAnalyzer" | "mnSPAVirtual" | "mnSPAReal" => WindowKind::SpectrumAnalyzer,
        "NetworkAnalyzer" | "Virtual1" | "Real1" => WindowKind::NetworkAnalyzer,
        "LogicAnalyzer" | "mnLAVirtual" | "mnLAReal" => WindowKind::LogicAnalyzer,
        "DigitalSignalGenerator" | "mnDSGVirtual" | "mnDSGReal" => {
            WindowKind::DigitalSignalGenerator
        }
        "MeasOptions" => WindowKind::TestAndMeasurementOptions,

        // Edit
        "mnReconciliate" => WindowKind::SchematicReconciliation,

        // Insert
        //
        // The Block Wizard hangs off `Insert > Block...`. It used to hang off
        // `mnCreateMacroBox`, which the resource hides and leaves without a
        // handler, so it could never have been reached.
        "mnBlock" => WindowKind::BlockWizard,

        // Analysis
        "AnalOptions" => WindowKind::AnalysisOptions,
        "mnBatchSimulation" => WindowKind::BatchSimulation,
        "mnSpiceCommands" => WindowKind::SpiceCommandEditor,

        // Tools
        "mnAnalysisResults" => WindowKind::AnalysisResults,
        "mnPythonShell" => WindowKind::PythonShell,
        // `mnSymbolicResults` is `Tools > Equation Editor`; working the DC
        // result out symbolically shows it in the same window.
        "mnSymbolicResults" | "SymbolicDCResult1" => WindowKind::EquationEditor,
        "mnInterpreter" => WindowKind::Interpreter,
        "LogicConverter1" => WindowKind::LogicDesign,
        "FilterDesign1" | "mnFilterDesignNew" => WindowKind::FilterDesign,
        "mnFlowchartEditor" => WindowKind::FlowchartEditor,
        "mnUARTTerminalWindow" => WindowKind::SerialMonitor,
        "FindComponent" => WindowKind::FindComponent,
        "mnDesignTool" => WindowKind::DesignTool,
        "mnPCBWizard" => WindowKind::PcbDesign,
        "mnPCBOnlyCompWizard" => WindowKind::PcbComponentWizard,
        "mnCompReport" => WindowKind::FootprintNameEditor,
        "mnProtect" | "mnUnProtect" => WindowKind::ProtectCircuit,

        // Help
        "About" => WindowKind::AboutTina,

        "Mode" => WindowKind::AnalysisModeSelection,
        "mnSetGlobalParameters" => WindowKind::GlobalParameterEditor,
        "mnLTSpiceImport" => WindowKind::LtspiceImport,
        "mnSPiceEditor" => WindowKind::NetlistEditor,
        "mnEditMacroProperties" => WindowKind::MacroProperties,
        // `Edit > Symbol...` opens the symbol editor on what is selected.
        // It is the only command that names that window, and the window is
        // already here.
        "mnEditSymbol" => WindowKind::SchematicSymbolEditor,
        "mnComponentExplorer" => WindowKind::ComponentExplorer,
        "mnComponentRackEditor" => WindowKind::ComponentBarEditor,
        "mnMacroManager" => WindowKind::MacroWizard,

        "Transient" => WindowKind::TransientAnalysis,

        "SetParameters" => WindowKind::AnalysisParameters,

        "FourierSeries" => WindowKind::FourierSeries,

        "FourierSpectrum" => WindowKind::FrequencySpectrum,

        "ACMultiSine" => WindowKind::AcMultisineAnalysis,

        "mnText" => WindowKind::InsertText,

        _ => return None,
    };

    Some(window)
}

#[cfg(test)]
mod tests {
    use super::window_for;
    use crate::schematic_editor::menu_tree::{MAIN_MENU, MenuEntry};
    use crate::window_catalog::WindowKind;

    fn walk<'a>(entries: &'a [MenuEntry], found: &mut Vec<&'a MenuEntry>) {
        for entry in entries {
            found.push(entry);
            walk(entry.children, found);
        }
    }

    fn every_entry() -> Vec<&'static MenuEntry> {
        let mut found = Vec::new();
        walk(MAIN_MENU, &mut found);
        found
    }

    #[test]
    fn every_command_that_opens_a_window_is_a_command_the_menu_has() {
        // A mapping for a name the resource does not use would never fire.
        let named: Vec<&str> = every_entry().into_iter().map(|entry| entry.name).collect();
        for entry in every_entry() {
            if window_for(entry.name).is_some() {
                assert!(named.contains(&entry.name));
            }
        }
    }

    #[test]
    fn the_instruments_open_their_own_window() {
        assert_eq!(window_for("Oscilloscope"), Some(WindowKind::Oscilloscope));
        assert_eq!(window_for("Voltmeter"), Some(WindowKind::Multimeter));
        assert_eq!(window_for("LogicAnalyzer"), Some(WindowKind::LogicAnalyzer));
    }

    #[test]
    fn both_halves_of_an_instrument_submenu_reach_the_same_window() {
        for (simulated, real, expected) in [
            ("mnSCPVirtual", "mnSCPReal", WindowKind::Oscilloscope),
            ("mnFGVirtual", "mnFGReal", WindowKind::FunctionGenerator),
            ("Virtual1", "Real1", WindowKind::NetworkAnalyzer),
        ] {
            assert_eq!(window_for(simulated), Some(expected));
            assert_eq!(window_for(real), Some(expected));
        }
    }

    #[test]
    fn a_command_with_no_window_here_opens_nothing() {
        assert_eq!(window_for("mnNew"), None);
        assert_eq!(window_for("mnReadTheNews"), None);
        assert_eq!(window_for(""), None);
    }

    #[test]
    fn the_editor_is_never_opened_as_if_it_were_another_window() {
        for entry in every_entry() {
            assert_ne!(window_for(entry.name), Some(WindowKind::SchematicEditor));
        }
    }

    #[test]
    fn a_good_share_of_the_windows_can_be_reached_from_the_menu() {
        let mut reached: Vec<WindowKind> = every_entry()
            .into_iter()
            .filter_map(|entry| window_for(entry.name))
            .collect();
        reached.sort_unstable_by_key(|window| format!("{window:?}"));
        reached.dedup();

        assert!(reached.len() > 20, "{} of 36", reached.len());
    }
}
