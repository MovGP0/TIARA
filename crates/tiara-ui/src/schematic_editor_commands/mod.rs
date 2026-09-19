//! Iced state for the recovered Schematic Editor menu commands.
//!
//! These are the entries that dispatch rather than decide: the analysis runs,
//! the view toggles, the two modal option dialogs, and the windows the Tools
//! menu brings back to the front.

use crate::schematic_editor_interaction::{SelectionTransform, SelectionTransformHost};

/// The form the recovered handlers belong to.
pub const FORM_RESOURCE: &str = "SchematicEditor";

/// The recovered show command that restores a minimized window.
pub const RESTORE_SHOW_COMMAND: i32 = 9;

/// The caption the symbolic transient result window is given.
pub const TRANSIENT_RESULT_CAPTION: &str = " TR Result : ";

/// The analyses the Analysis menu starts directly.
///
/// Each records its own name so the editor can repeat it, which is what the
/// "Run last simulation" button replays.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AnalysisCommand {
    /// `mnAnalysis.DCAnalysis.CalculateOperatingPoint`.
    OperatingPoint,
    /// `mnAnalysis.ACAnalysis.CalculateNodalVoltages`.
    NodalVoltages,
    /// `mnAnalysis.Symbolic1.SymbolicACtrf1` ("AC transfer").
    SymbolicAcTransfer,
    /// `mnAnalysis.Symbolic1.SemisymbolicACtrf1`.
    SemiSymbolicAcTransfer,
    /// `mnAnalysis.Symbolic1.SACResMnu` ("AC Result").
    SymbolicAcResult,
    /// `mnAnalysis.Symbolic1.SSACResMnu`.
    SemiSymbolicAcResult,
    /// `mnAnalysis.Symbolic1.SymbolicDCResult1` ("DC Result").
    SymbolicDcResult,
    /// `mnAnalysis.Symbolic1.SemisymbolicDCResult1`.
    SemiSymbolicDcResult,
    /// `mnAnalysis.Symbolic1.SymbolicTransient1`.
    SymbolicTransient,
    /// `mnAnalysis.Symbolic1.PolesAndZerosMnu` ("Poles and Zeros").
    PolesAndZeros,
    /// `mnAnalysis.FourierAnalysis.FourierSeries` ("Fourier &Series...").
    FourierSeries,
    /// `mnAnalysis.Optimization.DCOptimization` ("&DC Optimization...").
    DcOptimization,
    /// `mnAnalysis.Optimization.ACOptimizationSingle` ("&AC Optimization...").
    AcOptimization,
    /// `mnAnalysis.Optimization.ACOptimizationTransfer`.
    AcOptimizationTransfer,
    /// `mnAnalysis.Optimization.DCOptimizationTransfer`.
    DcOptimizationTransfer,
    /// `mnAnalysis.Optimization.TemperatureOptimization` ("Temperature...").
    TemperatureOptimization,
    /// `mnAnalysis.DCAnalysis.mnTableofDCresults` ("Table of DC results").
    ///
    /// Reaches the same routine as [`Self::OperatingPoint`] with one extra flag
    /// set, so the table is the operating point shown a different way.
    TableOfDcResults,
    /// `mnAnalysis.ACAnalysis.mnTableofACresults` ("Table of AC results").
    ///
    /// Likewise the same routine as [`Self::NodalVoltages`] with one flag set.
    TableOfAcResults,
}

impl AnalysisCommand {
    /// The handler name the recovered build records as the last command.
    #[must_use]
    pub const fn script_name(self) -> &'static str {
        match self {
            Self::OperatingPoint => "CalculateOperatingPointClick",
            Self::NodalVoltages => "CalculateNodalVoltagesClick",
            Self::SymbolicAcTransfer => "SymbolicACtrf1Click",
            Self::SemiSymbolicAcTransfer => "SemisymbolicACtrf1Click",
            Self::SymbolicAcResult => "SACResMnuClick",
            Self::SemiSymbolicAcResult => "SSACResMnuClick",
            Self::SymbolicDcResult => "SymbolicDCResult1Click",
            Self::SemiSymbolicDcResult => "SemisymbolicDCResult1Click",
            Self::SymbolicTransient => "SymbolicTransient1Click",
            Self::PolesAndZeros => "PolesAndZerosMnuClick",
            Self::FourierSeries => "FourierSeriesClick",
            Self::DcOptimization => "DCOptimizationClick",
            Self::AcOptimization => "ACOptimizationSingleClick",
            Self::AcOptimizationTransfer => "ACOptimizationTransferClick",
            Self::DcOptimizationTransfer => "DCOptimizationTransferClick",
            Self::TemperatureOptimization => "TemperatureOptimizationClick",
            Self::TableOfDcResults => "mnTableofDCresultsClick",
            Self::TableOfAcResults => "mnTableofACresultsClick",
        }
    }

    /// Whether the analysis runs in its semi-symbolic form.
    ///
    /// The recovered build reaches the same routine for each symbolic pair and
    /// passes `0` or `1` here, so the pairs differ only in this flag.
    #[must_use]
    pub const fn semi_symbolic(self) -> bool {
        matches!(
            self,
            Self::SemiSymbolicAcTransfer | Self::SemiSymbolicAcResult | Self::SemiSymbolicDcResult
        )
    }
}

pub trait AnalysisHost {
    /// Starts one analysis on the current document.
    fn run_analysis(&mut self, command: AnalysisCommand);

    /// Records the name of the command just run.
    fn record_last_command(&mut self, name: &str);
}

/// Starts one analysis and records it as the last command.
///
/// Implements Ghidra functions `FUN_01c75720` at `0x01C75720`, `FUN_01c759b0`
/// at `0x01C759B0`, `FUN_01c75e40` at `0x01C75E40`, `FUN_01c75eb0` at
/// `0x01C75EB0`, `FUN_01c75f20` at `0x01C75F20`, `FUN_01c75f80` at
/// `0x01C75F80`, `FUN_01c75fe0` at `0x01C75FE0`, `FUN_01c76050` at
/// `0x01C76050`, `FUN_01c76110` at `0x01C76110`, `FUN_01c87b30` at
/// `0x01C87B30`, `FUN_01c927e0` at `0x01C927E0`, and `FUN_01c96f20` at
/// `0x01C96F20`, `FUN_01c97110` at `0x01C97110`, `FUN_01c97190` at
/// `0x01C97190`, `FUN_01c98f90` at `0x01C98F90`, `FUN_01c99010` at
/// `0x01C99010`, `FUN_01c984d0` at `0x01C984D0`, and `FUN_01c985a0` at
/// `0x01C985A0`.
///
/// Every one of these entries has the same two steps, so they share one flow
/// here. Recording the name is what lets the editor repeat the analysis later
/// without the user going back through the menu, and it happens whether or not
/// the analysis itself succeeded.
pub fn run_analysis(command: AnalysisCommand, host: &mut impl AnalysisHost) {
    host.run_analysis(command);
    host.record_last_command(command.script_name());
}

pub trait EditorCommandHost {
    /// Opens the transient analysis dialog.
    fn open_transient_analysis(&mut self);

    /// Closes the Schematic Editor.
    fn exit_editor(&mut self);

    /// Toggles the background grid.
    fn toggle_grid(&mut self);

    /// Toggles the pin markers.
    fn toggle_pin_markers(&mut self);

    /// Toggles the tool bar.
    fn toggle_tool_bar(&mut self);

    /// Toggles the component bar.
    fn toggle_component_bar(&mut self);

    /// Starts picking the optimization target.
    fn select_optimization_target(&mut self);

    /// Starts picking the control object.
    fn select_control_object(&mut self);

    /// Locks or unlocks the Schematic Editor.
    fn toggle_editor_lock(&mut self);
}

/// Implements Ghidra function `FUN_01c75d80` at `0x01C75D80`.
///
/// Handles `MainMenu.mnAnalysis.Transient.OnClick` ("&Transient...").
///
/// Opens the transient analysis dialog. The recovered handler passes a fixed
/// `0` to the shared dialog, so the menu entry always opens it in its first
/// mode.
pub fn open_transient_analysis(host: &mut impl EditorCommandHost) {
    host.open_transient_analysis();
}

/// Implements Ghidra function `FUN_01c76b90` at `0x01C76B90`.
///
/// Handles `MainMenu.mnFile.mnExit.OnClick` ("E&xit").
///
/// A direct tail call into the shared close, so the menu entry and the window's
/// own close button take the same path — including whatever prompt the close
/// puts up for unsaved work.
pub fn exit_editor(host: &mut impl EditorCommandHost) {
    host.exit_editor();
}

/// Implements Ghidra function `FUN_01c77300` at `0x01C77300`.
///
/// Handles `MainMenu.View.mnGrid.OnClick` ("&Grid").
///
/// A direct tail call into the grid tool button's handler, so the menu entry
/// and the button toggle the same state.
pub fn toggle_grid(host: &mut impl EditorCommandHost) {
    host.toggle_grid();
}

/// Implements Ghidra function `FUN_01c77310` at `0x01C77310`.
///
/// Handles `MainMenu.View.mnPinMarkers.OnClick` ("Pin &Markers").
///
/// A direct tail call into the shared pin-marker toggle.
pub fn toggle_pin_markers(host: &mut impl EditorCommandHost) {
    host.toggle_pin_markers();
}

/// Implements Ghidra function `FUN_01c77320` at `0x01C77320`.
///
/// Handles `MainMenu.View.mnToolBar.OnClick` ("&Tool Bar").
///
/// A direct tail call into the shared tool-bar toggle.
pub fn toggle_tool_bar(host: &mut impl EditorCommandHost) {
    host.toggle_tool_bar();
}

/// Implements Ghidra function `FUN_01c77330` at `0x01C77330`.
///
/// Handles `MainMenu.View.mnComponentBar.OnClick` ("&Component Bar").
///
/// A direct tail call into the shared component-bar toggle.
pub fn toggle_component_bar(host: &mut impl EditorCommandHost) {
    host.toggle_component_bar();
}

/// Implements Ghidra function `FUN_01c77b10` at `0x01C77B10`.
///
/// Handles `MainMenu.mnAnalysis.OptimizationTarget2.OnClick`
/// ("Select &Optimization Target").
///
/// A direct tail call into the `ToolOptTarget` button's handler.
pub fn select_optimization_target(host: &mut impl EditorCommandHost) {
    host.select_optimization_target();
}

/// Implements Ghidra function `FUN_01c77b20` at `0x01C77B20`.
///
/// Handles `MainMenu.mnAnalysis.OptimizationTarget1.OnClick`
/// ("Select &Control Object").
///
/// A direct tail call into the `ToolSelectObj` button's handler. The two
/// neighbouring entries are named the other way round from the buttons they
/// reach, which the recovered bytes make plain.
pub fn select_control_object(host: &mut impl EditorCommandHost) {
    host.select_control_object();
}

/// Implements Ghidra function `FUN_01c805f0` at `0x01C805F0`.
///
/// Handles `MainMenu.mnTools.FixSchematicEditor.OnClick`
/// ("&Lock Schematic Editor").
///
/// A direct tail call into the shared lock toggle.
pub fn toggle_editor_lock(host: &mut impl EditorCommandHost) {
    host.toggle_editor_lock();
}

/// Implements Ghidra function `FUN_01c76ff0` at `0x01C76FF0`.
///
/// Handles `MainMenu.Edit.mnRotateLeft.OnClick` and
/// `SchPopup.pmRotateLeft.OnClick` ("Rotate &Left").
///
/// Both entries are one tail call into the shared rotate command, the same one
/// the `ToolRLeft` button and the numeric-pad `-` reach.
pub fn menu_rotate_left(host: &mut impl SelectionTransformHost) -> bool {
    crate::schematic_editor_interaction::transform_selection(SelectionTransform::RotateLeft, host)
}

/// Implements Ghidra function `FUN_01c77010` at `0x01C77010`.
///
/// Handles `MainMenu.Edit.mnRotateRight.OnClick` and
/// `SchPopup.pmRotateRight.OnClick` ("Rotate Righ&t").
///
/// Both entries are one tail call into the shared rotate command.
pub fn menu_rotate_right(host: &mut impl SelectionTransformHost) -> bool {
    crate::schematic_editor_interaction::transform_selection(SelectionTransform::RotateRight, host)
}

/// Implements Ghidra function `FUN_01c77030` at `0x01C77030`.
///
/// Handles `MainMenu.Edit.mnMirror.OnClick` and `SchPopup.pmMirror.OnClick`
/// ("&Mirror").
///
/// Both entries are one tail call into the shared mirror command.
pub fn menu_mirror(host: &mut impl SelectionTransformHost) -> bool {
    crate::schematic_editor_interaction::transform_selection(SelectionTransform::Mirror, host)
}

/// The modal dialogs the menu opens and throws away again.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ModalDialog {
    /// `MainMenu.mnAnalysis.Mode` ("&Mode..."), the analysis mode dialog.
    AnalysisMode,
    /// `MainMenu.mnTM.MeasOptions` ("&Options..."), the measurement options
    /// dialog.
    MeasurementOptions,
    /// `mnInteractive.mnIntOptions` and `PopupInteract.pmIntOptions`
    /// ("Options..."), the interactive options dialog.
    InteractiveOptions,
    /// `mnFile.Import.ImportUserLibs`
    /// ("Import TINA Libraries and Designs...").
    ImportUserLibraries,
    /// `mnAnalysis.mnSetCompValueLimits` ("Set parameter limits...").
    ///
    /// Built with the document, so it edits the open schematic's limits.
    ComponentValueLimits,
    /// `mnAnalysis.mnSetGlobalParameters` ("Define global parameters...").
    ///
    /// Built with a field of both the view and the document.
    GlobalParameters,
    /// `Edit.Sharing1.mnReconciliate` ("Reconcile...").
    Reconcile,
    /// `Help.About` ("&About").
    ///
    /// The only one stored in a global before it is shown, though it is freed
    /// straight afterwards like the rest.
    About,
    /// `mnFile.ListofMaterials1` ("Bill of Materials...").
    ///
    /// Given the clicked menu entry before it is shown.
    BillOfMaterials,
    /// `mnFile.Export.ExportNetlist` ("Netlist...").
    ///
    /// Built with the editor's current netlist source.
    ExportNetlist,
    /// `mnFile.Import.mnLTSpiceImport` ("`LTSpice` File (*.asc)...").
    LtSpiceImport,
}

pub trait ModalDialogHost {
    /// Creates, shows and destroys one modal dialog.
    fn show_modal(&mut self, dialog: ModalDialog);
}

/// Opens one of the throwaway modal dialogs.
///
/// Implements Ghidra functions `FUN_01c760d0` at `0x01C760D0`, `FUN_01c77350`
/// at `0x01C77350`, `FUN_01c89910` at `0x01C89910`, `FUN_01ca2ac0` at
/// `0x01CA2AC0`, `FUN_01ca3b10` at `0x01CA3B10`, `FUN_01ca3b60` at
/// `0x01CA3B60`, `FUN_01c93b70` at `0x01C93B70`, `FUN_01c806b0` at
/// `0x01C806B0`, `FUN_01c93d20` at `0x01C93D20`, and `FUN_01c81430` at
/// `0x01C81430`, and `FUN_01c937f0` at `0x01C937F0`.
///
/// Each entry builds its form, shows it modally and frees it immediately, so
/// none of these dialogs keeps any state between openings — whatever the user changes
/// is written through before the form goes away. The recovered handlers ignore
/// the modal result entirely.
pub fn show_modal_dialog(dialog: ModalDialog, host: &mut impl ModalDialogHost) {
    host.show_modal(dialog);
}

/// The singleton windows the Tools menu brings back.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ToolWindow {
    /// `MainMenu.mnTools.mnAnalysisResults` ("&Diagram Window").
    DiagramWindow,
    /// `MainMenu.mnTools.mnSymbolicResults` ("&Equation Editor").
    EquationEditor,
}

pub trait ToolWindowHost {
    /// Makes sure the window exists and is up to date.
    fn prepare_window(&mut self, window: ToolWindow);

    /// Shows the window with one recovered show command.
    fn show_window(&mut self, window: ToolWindow, show_command: i32);
}

/// Implements Ghidra functions `FUN_01c805c0` at `0x01C805C0` and
/// `FUN_01c80600` at `0x01C80600`.
///
/// Brings one of the two result windows back to the front.
///
/// Each entry first runs its own preparation step and then restores the
/// window with the recovered show command, so a window the user had minimized
/// comes back rather than staying on the task bar.
pub fn show_tool_window(window: ToolWindow, host: &mut impl ToolWindowHost) {
    host.prepare_window(window);
    host.show_window(window, RESTORE_SHOW_COMMAND);
}

pub trait FaultDisplayHost {
    /// Applies the fault display state.
    fn set_faults_enabled(&mut self, enabled: bool);

    /// The check state of the `ErrorInsertion1` menu entry.
    fn menu_checked(&mut self) -> bool;

    /// The pressed state of the `ToolError` button.
    fn button_pressed(&mut self) -> bool;

    /// Presses or releases the `ToolError` button.
    fn set_button_pressed(&mut self, pressed: bool);
}

/// Implements Ghidra function `FUN_01c77a40` at `0x01C77A40`.
///
/// Handles `MainMenu.mnAnalysis.ErrorInsertion1.OnClick` ("&Faults enabled").
///
/// Flips the fault display.
///
/// The menu entry reads its own check mark to decide which way to flip, so the
/// check mark — not a separate flag — is what the menu treats as the current
/// state.
pub fn toggle_faults_from_menu(host: &mut impl FaultDisplayHost) -> bool {
    let enabled = !host.menu_checked();
    host.set_faults_enabled(enabled);
    enabled
}

/// Implements Ghidra function `FUN_01c77a70` at `0x01C77A70`.
///
/// Handles `TopToolBar.EditorTools.ToolError.OnClick` (hinted "Faults
/// enabled").
///
/// Applies the fault display from the button and then syncs the button back
/// from the menu entry.
///
/// The button has already moved by the time the handler runs, so its new state
/// is what is applied. Copying the menu's check mark back afterwards is what
/// snaps the button out again when the change was refused.
pub fn toggle_faults_from_button(host: &mut impl FaultDisplayHost) -> bool {
    let requested = host.button_pressed();
    host.set_faults_enabled(requested);

    let settled = host.menu_checked();
    host.set_button_pressed(settled);
    settled
}

pub trait NewSchematicHost {
    /// Starts a new schematic in this editor.
    fn new_schematic(&mut self);

    /// Applies the application-wide interactive mode to the new schematic.
    ///
    /// The recovered call reads the same slot the `mnInteractive` entries write
    /// through [`select_interactive_mode`].
    fn apply_default_settings(&mut self);
}

/// Implements Ghidra function `FUN_01c75530` at `0x01C75530`.
///
/// Handles `MainMenu.mnFile.mnNew.OnClick` ("&New").
///
/// Starts a new schematic and puts it into the interactive mode the user last
/// chose, so a new sheet arrives ready for the same kind of simulation rather
/// than in a built-in default.
pub fn new_schematic(host: &mut impl NewSchematicHost) {
    host.new_schematic();
    host.apply_default_settings();
}

pub trait ExceptionHost {
    /// Shows one unhandled exception the way the application would.
    fn show_exception(&mut self, message: &str);
}

/// Implements Ghidra function `FUN_01c80590` at `0x01C80590`.
///
/// Handles `SchematicEditorEvents.OnException`.
///
/// Hands an unhandled exception straight to the application's own display.
///
/// The handler adds nothing — no logging, no editor-specific recovery — so
/// installing it changes nothing about what the user sees; it exists so the
/// editor's exceptions do not escape the form's event object.
pub fn handle_exception(message: &str, host: &mut impl ExceptionHost) {
    host.show_exception(message);
}

pub trait EditorBarHost {
    /// Reports whether the tool bar is showing.
    fn tool_bar_visible(&mut self) -> bool;

    fn set_tool_bar_visible(&mut self, visible: bool);

    /// Reports whether the component bar is showing.
    fn component_bar_visible(&mut self) -> bool;

    fn set_component_bar_visible(&mut self, visible: bool);
}

/// Implements Ghidra function `FUN_01c67dc0` at `0x01C67DC0`.
///
/// Handles `ToolsPopup.ToolBar.OnClick` ("Tool Bar"), and the shared command
/// the View menu's entry reaches.
///
/// Flips the tool bar's own visibility, which is what the menu entry and the
/// popup both read as the current state.
///
/// Returns whether the tool bar is now showing.
pub fn toggle_tool_bar_visibility(host: &mut impl EditorBarHost) -> bool {
    let visible = !host.tool_bar_visible();
    host.set_tool_bar_visible(visible);
    visible
}

/// Implements Ghidra function `FUN_01c67d50` at `0x01C67D50`.
///
/// Handles `ToolsPopup.ComponentBar.OnClick` ("Component Bar"), and the shared
/// command the View menu's entry reaches.
///
/// Flips the component bar's visibility.
///
/// Bringing the component bar back hides the tool bar first and puts it back
/// afterwards. Both bars dock along the top, so re-showing the tool bar last is
/// what lands the component bar underneath it instead of above it.
///
/// A tool bar the user had already hidden stays hidden, because it is only
/// restored when it was showing to begin with.
///
/// Returns whether the component bar is now showing.
pub fn toggle_component_bar_visibility(host: &mut impl EditorBarHost) -> bool {
    let showing = !host.component_bar_visible();

    let restore_tool_bar = if showing {
        let was_visible = host.tool_bar_visible();
        host.set_tool_bar_visible(false);
        was_visible
    } else {
        false
    };

    host.set_component_bar_visible(showing);

    if restore_tool_bar {
        host.set_tool_bar_visible(true);
    }

    showing
}

pub trait EditorLayoutHost {
    /// Reports whether the form is being destroyed.
    fn destroying(&mut self) -> bool;

    /// Re-lays out the editor around the canvas.
    fn relayout(&mut self);
}

/// Implements Ghidra function `FUN_01c691a0` at `0x01C691A0`.
///
/// Handles `EditorPanel.SchEditBox.OnResize`.
///
/// Re-lays out the editor when the canvas changes size.
///
/// The guard is the form's own `csDestroying` state: a window being torn down
/// resizes its canvas on the way out, and re-laying out against controls that
/// are already gone is what the guard avoids.
pub fn editor_resized(host: &mut impl EditorLayoutHost) -> bool {
    if host.destroying() {
        return false;
    }
    host.relayout();
    true
}

#[cfg(test)]
mod tests {
    use super::*;

    const ALL_ANALYSES: [AnalysisCommand; 18] = [
        AnalysisCommand::OperatingPoint,
        AnalysisCommand::NodalVoltages,
        AnalysisCommand::SymbolicAcTransfer,
        AnalysisCommand::SemiSymbolicAcTransfer,
        AnalysisCommand::SymbolicAcResult,
        AnalysisCommand::SemiSymbolicAcResult,
        AnalysisCommand::SymbolicDcResult,
        AnalysisCommand::SemiSymbolicDcResult,
        AnalysisCommand::SymbolicTransient,
        AnalysisCommand::PolesAndZeros,
        AnalysisCommand::FourierSeries,
        AnalysisCommand::DcOptimization,
        AnalysisCommand::AcOptimization,
        AnalysisCommand::AcOptimizationTransfer,
        AnalysisCommand::DcOptimizationTransfer,
        AnalysisCommand::TemperatureOptimization,
        AnalysisCommand::TableOfDcResults,
        AnalysisCommand::TableOfAcResults,
    ];

    #[derive(Debug, Default)]
    struct Analyses {
        run: Vec<AnalysisCommand>,
        recorded: Vec<String>,
    }

    impl AnalysisHost for Analyses {
        fn run_analysis(&mut self, command: AnalysisCommand) {
            self.run.push(command);
        }

        fn record_last_command(&mut self, name: &str) {
            self.recorded.push(name.to_owned());
        }
    }

    #[test]
    fn every_analysis_records_its_own_name() {
        let mut host = Analyses::default();

        for command in ALL_ANALYSES {
            run_analysis(command, &mut host);
        }

        assert_eq!(host.run, ALL_ANALYSES);
        assert_eq!(
            host.recorded,
            [
                "CalculateOperatingPointClick",
                "CalculateNodalVoltagesClick",
                "SymbolicACtrf1Click",
                "SemisymbolicACtrf1Click",
                "SACResMnuClick",
                "SSACResMnuClick",
                "SymbolicDCResult1Click",
                "SemisymbolicDCResult1Click",
                "SymbolicTransient1Click",
                "PolesAndZerosMnuClick",
                "FourierSeriesClick",
                "DCOptimizationClick",
                "ACOptimizationSingleClick",
                "ACOptimizationTransferClick",
                "DCOptimizationTransferClick",
                "TemperatureOptimizationClick",
                "mnTableofDCresultsClick",
                "mnTableofACresultsClick",
            ]
        );
    }

    #[test]
    fn the_names_are_all_distinct() {
        let mut names: Vec<&str> = ALL_ANALYSES.iter().map(|c| c.script_name()).collect();
        names.sort_unstable();
        let count = names.len();
        names.dedup();
        assert_eq!(names.len(), count);
    }

    #[test]
    fn the_symbolic_pairs_differ_only_in_their_flag() {
        for (symbolic, semi) in [
            (
                AnalysisCommand::SymbolicAcTransfer,
                AnalysisCommand::SemiSymbolicAcTransfer,
            ),
            (
                AnalysisCommand::SymbolicAcResult,
                AnalysisCommand::SemiSymbolicAcResult,
            ),
            (
                AnalysisCommand::SymbolicDcResult,
                AnalysisCommand::SemiSymbolicDcResult,
            ),
        ] {
            assert!(!symbolic.semi_symbolic());
            assert!(semi.semi_symbolic());
        }
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum Command {
        Transient,
        Exit,
        Grid,
        PinMarkers,
        ToolBar,
        ComponentBar,
        OptimizationTarget,
        ControlObject,
        Lock,
    }

    #[derive(Debug, Default)]
    struct Commands {
        seen: Vec<Command>,
    }

    impl EditorCommandHost for Commands {
        fn open_transient_analysis(&mut self) {
            self.seen.push(Command::Transient);
        }

        fn exit_editor(&mut self) {
            self.seen.push(Command::Exit);
        }

        fn toggle_grid(&mut self) {
            self.seen.push(Command::Grid);
        }

        fn toggle_pin_markers(&mut self) {
            self.seen.push(Command::PinMarkers);
        }

        fn toggle_tool_bar(&mut self) {
            self.seen.push(Command::ToolBar);
        }

        fn toggle_component_bar(&mut self) {
            self.seen.push(Command::ComponentBar);
        }

        fn select_optimization_target(&mut self) {
            self.seen.push(Command::OptimizationTarget);
        }

        fn select_control_object(&mut self) {
            self.seen.push(Command::ControlObject);
        }

        fn toggle_editor_lock(&mut self) {
            self.seen.push(Command::Lock);
        }
    }

    #[test]
    fn each_delegating_entry_reaches_its_own_shared_command() {
        let mut host = Commands::default();

        open_transient_analysis(&mut host);
        exit_editor(&mut host);
        toggle_grid(&mut host);
        toggle_pin_markers(&mut host);
        toggle_tool_bar(&mut host);
        toggle_component_bar(&mut host);
        select_optimization_target(&mut host);
        select_control_object(&mut host);
        toggle_editor_lock(&mut host);

        assert_eq!(
            host.seen,
            [
                Command::Transient,
                Command::Exit,
                Command::Grid,
                Command::PinMarkers,
                Command::ToolBar,
                Command::ComponentBar,
                Command::OptimizationTarget,
                Command::ControlObject,
                Command::Lock,
            ]
        );
    }

    #[derive(Debug, Default)]
    struct Modals {
        shown: Vec<ModalDialog>,
    }

    impl ModalDialogHost for Modals {
        fn show_modal(&mut self, dialog: ModalDialog) {
            self.shown.push(dialog);
        }
    }

    #[test]
    fn both_modal_entries_open_their_own_dialog() {
        let mut host = Modals::default();

        show_modal_dialog(ModalDialog::AnalysisMode, &mut host);
        show_modal_dialog(ModalDialog::MeasurementOptions, &mut host);
        show_modal_dialog(ModalDialog::InteractiveOptions, &mut host);
        show_modal_dialog(ModalDialog::ImportUserLibraries, &mut host);
        show_modal_dialog(ModalDialog::ComponentValueLimits, &mut host);
        show_modal_dialog(ModalDialog::GlobalParameters, &mut host);
        show_modal_dialog(ModalDialog::Reconcile, &mut host);
        show_modal_dialog(ModalDialog::About, &mut host);
        show_modal_dialog(ModalDialog::BillOfMaterials, &mut host);
        show_modal_dialog(ModalDialog::ExportNetlist, &mut host);
        show_modal_dialog(ModalDialog::LtSpiceImport, &mut host);

        assert_eq!(
            host.shown,
            [
                ModalDialog::AnalysisMode,
                ModalDialog::MeasurementOptions,
                ModalDialog::InteractiveOptions,
                ModalDialog::ImportUserLibraries,
                ModalDialog::ComponentValueLimits,
                ModalDialog::GlobalParameters,
                ModalDialog::Reconcile,
                ModalDialog::About,
                ModalDialog::BillOfMaterials,
                ModalDialog::ExportNetlist,
                ModalDialog::LtSpiceImport,
            ]
        );
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum WindowStep {
        Prepare(ToolWindow),
        Show(ToolWindow, i32),
    }

    #[derive(Debug, Default)]
    struct Windows {
        steps: Vec<WindowStep>,
    }

    impl ToolWindowHost for Windows {
        fn prepare_window(&mut self, window: ToolWindow) {
            self.steps.push(WindowStep::Prepare(window));
        }

        fn show_window(&mut self, window: ToolWindow, show_command: i32) {
            self.steps.push(WindowStep::Show(window, show_command));
        }
    }

    #[test]
    fn both_result_windows_are_prepared_then_restored() {
        let mut host = Windows::default();

        show_tool_window(ToolWindow::DiagramWindow, &mut host);
        show_tool_window(ToolWindow::EquationEditor, &mut host);

        assert_eq!(
            host.steps,
            [
                WindowStep::Prepare(ToolWindow::DiagramWindow),
                WindowStep::Show(ToolWindow::DiagramWindow, RESTORE_SHOW_COMMAND),
                WindowStep::Prepare(ToolWindow::EquationEditor),
                WindowStep::Show(ToolWindow::EquationEditor, RESTORE_SHOW_COMMAND),
            ]
        );
    }

    #[derive(Debug, Default)]
    struct Faults {
        menu: bool,
        button: bool,
        applied: Vec<bool>,
        pressed: Vec<bool>,
    }

    impl FaultDisplayHost for Faults {
        fn set_faults_enabled(&mut self, enabled: bool) {
            self.applied.push(enabled);
            self.menu = enabled;
        }

        fn menu_checked(&mut self) -> bool {
            self.menu
        }

        fn button_pressed(&mut self) -> bool {
            self.button
        }

        fn set_button_pressed(&mut self, pressed: bool) {
            self.pressed.push(pressed);
        }
    }

    #[test]
    fn the_menu_entry_flips_its_own_check_mark() {
        let mut host = Faults::default();

        assert!(toggle_faults_from_menu(&mut host));
        assert!(!toggle_faults_from_menu(&mut host));

        assert_eq!(host.applied, [true, false]);
    }

    #[test]
    fn the_button_applies_its_new_state_and_syncs_back_from_the_menu() {
        let mut host = Faults {
            button: true,
            ..Faults::default()
        };

        assert!(toggle_faults_from_button(&mut host));

        assert_eq!(host.applied, [true]);
        assert_eq!(host.pressed, [true]);
    }

    #[test]
    fn a_refused_change_snaps_the_button_back() {
        #[derive(Debug, Default)]
        struct Refusing {
            pressed: Vec<bool>,
        }

        impl FaultDisplayHost for Refusing {
            fn set_faults_enabled(&mut self, _enabled: bool) {}

            fn menu_checked(&mut self) -> bool {
                false
            }

            fn button_pressed(&mut self) -> bool {
                true
            }

            fn set_button_pressed(&mut self, pressed: bool) {
                self.pressed.push(pressed);
            }
        }

        let mut host = Refusing::default();

        assert!(!toggle_faults_from_button(&mut host));
        assert_eq!(host.pressed, [false]);
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum NewStep {
        New,
        Defaults,
    }

    #[derive(Debug, Default)]
    struct NewSchematic {
        steps: Vec<NewStep>,
    }

    impl NewSchematicHost for NewSchematic {
        fn new_schematic(&mut self) {
            self.steps.push(NewStep::New);
        }

        fn apply_default_settings(&mut self) {
            self.steps.push(NewStep::Defaults);
        }
    }

    #[test]
    fn a_new_sheet_gets_the_configured_defaults() {
        let mut host = NewSchematic::default();

        new_schematic(&mut host);

        assert_eq!(host.steps, [NewStep::New, NewStep::Defaults]);
    }

    #[derive(Debug, Default)]
    struct Exceptions {
        shown: Vec<String>,
    }

    impl ExceptionHost for Exceptions {
        fn show_exception(&mut self, message: &str) {
            self.shown.push(message.to_owned());
        }
    }

    #[test]
    fn an_exception_is_passed_through_unchanged() {
        let mut host = Exceptions::default();

        handle_exception("Division by zero", &mut host);

        assert_eq!(host.shown, ["Division by zero"]);
    }
}

#[cfg(test)]
mod bar_tests {
    use super::*;

    #[derive(Debug, Default)]
    struct Bars {
        tool_bar: bool,
        component_bar: bool,
        tool_bar_writes: Vec<bool>,
    }

    impl EditorBarHost for Bars {
        fn tool_bar_visible(&mut self) -> bool {
            self.tool_bar
        }

        fn set_tool_bar_visible(&mut self, visible: bool) {
            self.tool_bar = visible;
            self.tool_bar_writes.push(visible);
        }

        fn component_bar_visible(&mut self) -> bool {
            self.component_bar
        }

        fn set_component_bar_visible(&mut self, visible: bool) {
            self.component_bar = visible;
        }
    }

    #[test]
    fn the_tool_bar_entry_flips_its_own_visibility() {
        let mut host = Bars::default();

        assert!(toggle_tool_bar_visibility(&mut host));
        assert!(!toggle_tool_bar_visibility(&mut host));

        assert_eq!(host.tool_bar_writes, [true, false]);
    }

    #[test]
    fn showing_the_component_bar_re_docks_the_tool_bar_below_it() {
        let mut host = Bars {
            tool_bar: true,
            ..Bars::default()
        };

        assert!(toggle_component_bar_visibility(&mut host));

        assert!(host.component_bar);
        assert_eq!(host.tool_bar_writes, [false, true]);
    }

    #[test]
    fn a_tool_bar_the_user_hid_stays_hidden() {
        let mut host = Bars::default();

        assert!(toggle_component_bar_visibility(&mut host));

        assert!(host.component_bar);
        assert_eq!(host.tool_bar_writes, [false]);
        assert!(!host.tool_bar);
    }

    #[test]
    fn hiding_the_component_bar_leaves_the_tool_bar_alone() {
        let mut host = Bars {
            tool_bar: true,
            component_bar: true,
            ..Bars::default()
        };

        assert!(!toggle_component_bar_visibility(&mut host));

        assert!(!host.component_bar);
        assert!(host.tool_bar_writes.is_empty());
    }

    #[derive(Debug, Default)]
    struct Layout {
        destroying: bool,
        relayouts: usize,
    }

    impl EditorLayoutHost for Layout {
        fn destroying(&mut self) -> bool {
            self.destroying
        }

        fn relayout(&mut self) {
            self.relayouts += 1;
        }
    }

    #[test]
    fn a_resize_re_lays_out_the_editor() {
        let mut host = Layout::default();

        assert!(editor_resized(&mut host));

        assert_eq!(host.relayouts, 1);
    }

    #[test]
    fn a_form_being_destroyed_does_not_re_lay_itself_out() {
        let mut host = Layout {
            destroying: true,
            ..Layout::default()
        };

        assert!(!editor_resized(&mut host));

        assert_eq!(host.relayouts, 0);
    }
}

pub trait SharedCommandHost {
    /// Repeats the analysis recorded as the last command.
    fn run_last_simulation(&mut self);

    /// Leaves the macro currently being edited.
    fn leave_macro(&mut self);

    /// Opens the component search.
    fn find_component(&mut self);

    /// Opens the bitmap chooser for the selection.
    fn change_bitmap(&mut self);

    /// Starts the PCB designer.
    fn start_pcb_designer(&mut self);

    /// Renumbers the components in the document.
    fn renumber_components(&mut self);

    /// Quits the application.
    fn quit_application(&mut self);

    /// Opens the exam solution the selections list names.
    fn open_exam_selection(&mut self);
}

/// Implements Ghidra function `FUN_01c890f0` at `0x01C890F0`.
///
/// Handles `MainMenu.mnAnalysis.RunLastSimulation.OnClick`
/// ("Run last simulation").
///
/// A direct tail call into the same command the tool bar's button reaches,
/// which replays whichever analysis last recorded its name.
pub fn run_last_simulation(host: &mut impl SharedCommandHost) {
    host.run_last_simulation();
}

/// Implements Ghidra function `FUN_01c8d180` at `0x01C8D180`.
///
/// Handles `MainMenu.mnFile.mnCloseMacro.OnClick` and
/// `SchPopup.pmCloseMacro.OnClick` ("Leave Macro").
///
/// Leaves the macro being edited. The recovered handler passes `-1` to the
/// shared routine rather than a level, so it always steps out of the innermost
/// macro rather than back to a chosen one.
pub fn leave_macro(host: &mut impl SharedCommandHost) {
    host.leave_macro();
}

/// Implements Ghidra function `FUN_01c97ce0` at `0x01C97CE0`.
///
/// Handles `TopToolBar.CompDropDownP.ToolSearchComp.OnClick` (hinted "Find
/// Component").
///
/// A direct tail call into the shared component search.
pub fn find_component(host: &mut impl SharedCommandHost) {
    host.find_component();
}

/// Implements Ghidra function `FUN_01c99730` at `0x01C99730`.
///
/// Handles `MainMenu.Edit.mnChangeBitmap.OnClick` ("Change &Bitmap").
///
/// A direct tail call into the shared bitmap chooser.
pub fn change_bitmap(host: &mut impl SharedCommandHost) {
    host.change_bitmap();
}

/// Implements Ghidra function `FUN_01c99740` at `0x01C99740`.
///
/// Handles `MainMenu.mnTools.mnPCBTools.mnPCBWizard.OnClick` ("PCB Design...").
///
/// A direct tail call into the `sbStartPCBDesigner` button's handler, so the
/// menu entry and the tool-bar button start the same designer.
pub fn start_pcb_designer(host: &mut impl SharedCommandHost) {
    host.start_pcb_designer();
}

/// Implements Ghidra function `FUN_01c9bf10` at `0x01C9BF10`.
///
/// Handles `MainMenu.mnTools.mnPCBTools.mnRenumberComps.OnClick`
/// ("Renumber Components").
///
/// Renumbers the whole document. The recovered handler runs no guard and offers
/// no confirmation, so every reference designator is rewritten as soon as the
/// entry is chosen.
pub fn renumber_components(host: &mut impl SharedCommandHost) {
    host.renumber_components();
}

/// Implements Ghidra function `FUN_01ca0ce0` at `0x01CA0CE0`.
///
/// Handles `StatusPanel.ButtonPanel.ExitPanel.sbQuitApplication.OnClick`
/// ("Exit").
///
/// A direct tail call into the same shared close the File menu's Exit entry
/// reaches, so the status-bar button is not a shortcut around the unsaved-work
/// prompt.
pub fn quit_application(host: &mut impl SharedCommandHost) {
    host.quit_application();
}

/// Implements Ghidra function `FUN_01c81340` at `0x01C81340`.
///
/// Handles `ExamPanel...tsSelect.ResSelections.OnDblClick`.
///
/// Opens the exam solution the double-clicked row names. Unlike the task grid,
/// this handler compares nothing first — double-clicking the row already open
/// reopens it.
pub fn open_exam_selection(host: &mut impl SharedCommandHost) {
    host.open_exam_selection();
}

pub trait DiagramWindowHost {
    /// Shows the diagram window the clicked menu entry carries in its tag.
    fn show_tagged_diagram(&mut self);
}

/// Implements Ghidra function `FUN_01c8ec50` at `0x01C8EC50`.
///
/// Handles `SchPopup.pmDiagram.OnClick` and
/// `SchPopupEdison.pmEdisonDiagram.OnClick` ("Diagram").
///
/// Shows the diagram window the menu entry points at.
///
/// The window is carried in the entry's own tag rather than looked up, which is
/// how one handler serves both popups without knowing which one was opened.
pub fn show_tagged_diagram(host: &mut impl DiagramWindowHost) {
    host.show_tagged_diagram();
}

pub trait InteractiveModeHost {
    /// The mode the clicked menu entry carries in its tag.
    fn tagged_mode(&mut self) -> u8;

    /// Stores the mode as the application-wide default.
    fn store_default_mode(&mut self, mode: u8);

    /// Switches the editor to one interactive mode.
    fn apply_mode(&mut self, mode: u8);
}

/// Implements Ghidra function `FUN_01c89820` at `0x01C89820`.
///
/// Handles the five `MainMenu.mnInteractive` entries and the five matching
/// `PopupInteract` entries.
///
/// Switches the interactive mode to whichever the clicked entry names.
///
/// The mode is stored in the application-wide slot before it is applied, so a
/// new schematic started afterwards opens in the same mode. The entry's own tag
/// is what names the mode, which is how all ten entries share one handler.
///
/// Returns the mode that was applied.
pub fn select_interactive_mode(host: &mut impl InteractiveModeHost) -> u8 {
    let mode = host.tagged_mode();
    host.store_default_mode(mode);
    host.apply_mode(mode);
    mode
}

pub trait LanguageTimerHost {
    /// Stops the language timer.
    fn stop_language_timer(&mut self);

    /// Re-applies the interface language to the editor.
    fn reapply_language(&mut self);
}

/// Implements Ghidra function `FUN_01c8c970` at `0x01C8C970`.
///
/// Handles `LangTimer.OnTimer`.
///
/// Applies a pending language change once.
///
/// The timer stops itself before doing the work, so the change is applied
/// exactly once however long re-applying takes — a timer left running would
/// re-enter this while the editor is still rebuilding its captions.
pub fn language_timer_fired(host: &mut impl LanguageTimerHost) {
    host.stop_language_timer();
    host.reapply_language();
}

#[cfg(test)]
mod shared_command_tests {
    use super::*;

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum Shared {
        RunLast,
        LeaveMacro,
        Find,
        Bitmap,
        Pcb,
        Renumber,
        Quit,
        ExamSelection,
    }

    #[derive(Debug, Default)]
    struct Host {
        seen: Vec<Shared>,
    }

    impl SharedCommandHost for Host {
        fn run_last_simulation(&mut self) {
            self.seen.push(Shared::RunLast);
        }

        fn leave_macro(&mut self) {
            self.seen.push(Shared::LeaveMacro);
        }

        fn find_component(&mut self) {
            self.seen.push(Shared::Find);
        }

        fn change_bitmap(&mut self) {
            self.seen.push(Shared::Bitmap);
        }

        fn start_pcb_designer(&mut self) {
            self.seen.push(Shared::Pcb);
        }

        fn renumber_components(&mut self) {
            self.seen.push(Shared::Renumber);
        }

        fn quit_application(&mut self) {
            self.seen.push(Shared::Quit);
        }

        fn open_exam_selection(&mut self) {
            self.seen.push(Shared::ExamSelection);
        }
    }

    #[test]
    fn each_entry_reaches_its_own_shared_command() {
        let mut host = Host::default();

        run_last_simulation(&mut host);
        leave_macro(&mut host);
        find_component(&mut host);
        change_bitmap(&mut host);
        start_pcb_designer(&mut host);
        renumber_components(&mut host);
        quit_application(&mut host);
        open_exam_selection(&mut host);

        assert_eq!(
            host.seen,
            [
                Shared::RunLast,
                Shared::LeaveMacro,
                Shared::Find,
                Shared::Bitmap,
                Shared::Pcb,
                Shared::Renumber,
                Shared::Quit,
                Shared::ExamSelection,
            ]
        );
    }

    #[derive(Debug, Default)]
    struct Diagrams {
        shown: usize,
    }

    impl DiagramWindowHost for Diagrams {
        fn show_tagged_diagram(&mut self) {
            self.shown += 1;
        }
    }

    #[test]
    fn the_diagram_entry_shows_the_window_it_carries() {
        let mut host = Diagrams::default();

        show_tagged_diagram(&mut host);

        assert_eq!(host.shown, 1);
    }

    #[derive(Debug, Default)]
    struct Modes {
        tag: u8,
        stored: Vec<u8>,
        applied: Vec<u8>,
    }

    impl InteractiveModeHost for Modes {
        fn tagged_mode(&mut self) -> u8 {
            self.tag
        }

        fn store_default_mode(&mut self, mode: u8) {
            self.stored.push(mode);
        }

        fn apply_mode(&mut self, mode: u8) {
            self.applied.push(mode);
        }
    }

    #[test]
    fn the_chosen_mode_becomes_the_default_before_it_is_applied() {
        let mut host = Modes {
            tag: 3,
            ..Modes::default()
        };

        assert_eq!(select_interactive_mode(&mut host), 3);

        assert_eq!(host.stored, [3]);
        assert_eq!(host.applied, [3]);
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum LangStep {
        Stop,
        Reapply,
    }

    #[derive(Debug, Default)]
    struct Language {
        steps: Vec<LangStep>,
    }

    impl LanguageTimerHost for Language {
        fn stop_language_timer(&mut self) {
            self.steps.push(LangStep::Stop);
        }

        fn reapply_language(&mut self) {
            self.steps.push(LangStep::Reapply);
        }
    }

    #[test]
    fn the_language_timer_stops_before_it_does_the_work() {
        let mut host = Language::default();

        language_timer_fired(&mut host);

        assert_eq!(host.steps, [LangStep::Stop, LangStep::Reapply]);
    }
}

/// The analyses whose entry point decides for itself whether to record a
/// replayable name.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum GuardedAnalysis {
    /// `mnAnalysis.SteadyStateSolver` ("&Steady State Solver...").
    ///
    /// The solver runs from inside the guard itself, so this entry has no
    /// second step.
    SteadyStateSolver,
    /// `mnAnalysis.ACAnalysis.ACTimeFunctionMnu` ("&Time Function...").
    AcTimeFunction,
    /// `mnAnalysis.ACAnalysis.ACVectorDiagram` ("&Phasor Diagram").
    AcPhasorDiagram,
    /// `mnAnalysis.ACAnalysis.NetworkAnalysisMnu` ("&Network Analysis...").
    NetworkAnalysis,
    /// `mnAnalysis.DCAnalysis.DCTransferCharacteristic`
    /// ("&DC Transfer Characteristic...").
    DcTransferCharacteristic,
    /// `mnAnalysis.DCAnalysis.TemperatureAnalysis1`
    /// ("&Temperature Analysis...").
    TemperatureAnalysis,
    /// `mnAnalysis.ACAnalysis.ACTransferCharateristic`
    /// ("&AC Transfer Characteristic...").
    ///
    /// The recovered handler name carries the same spelling slip as the
    /// control's, which is preserved so the replay name matches.
    AcTransferCharacteristic,
    /// `mnAnalysis.Noise` ("&Noise Analysis...").
    Noise,
    /// `mnAnalysis.ACAnalysis.ACMultiSine` ("AC Multisine Analysis...").
    AcMultiSine,
}

impl GuardedAnalysis {
    /// The handler name the recovered build records as the last command.
    #[must_use]
    pub const fn script_name(self) -> &'static str {
        match self {
            Self::SteadyStateSolver => "SteadyStateSolverClick",
            Self::AcTimeFunction => "ACTimeFunctionMnuClick",
            Self::AcPhasorDiagram => "ACVectorDiagramClick",
            Self::NetworkAnalysis => "NetworkAnalysisMnuClick",
            Self::DcTransferCharacteristic => "DCTransferCharacteristicClick",
            Self::TemperatureAnalysis => "TemperatureAnalysisClick",
            Self::AcTransferCharacteristic => "ACTransferCharateristicClick",
            Self::Noise => "NoiseClick",
            Self::AcMultiSine => "ACMultiSineClick",
        }
    }
}

pub trait GuardedAnalysisHost {
    /// Runs the analysis's own precondition step.
    ///
    /// The recovered functions return zero to mean "carry on", so this reports
    /// whether the entry was refused.
    fn refused(&mut self, analysis: GuardedAnalysis) -> bool;

    /// Opens the analysis's result window.
    fn show_result(&mut self, analysis: GuardedAnalysis);

    /// Records the name of the command just run.
    fn record_last_command(&mut self, name: &str);
}

/// Runs one analysis that can refuse to start.
///
/// Implements Ghidra functions `FUN_01c997b0` at `0x01C997B0`, `FUN_01c8ef70`
/// at `0x01C8EF70`, `FUN_01c97cf0` at `0x01C97CF0`, `FUN_01c92dd0` at
/// `0x01C92DD0`, `FUN_01c75800` at `0x01C75800`, and `FUN_01c758f0` at
/// `0x01C758F0`, `FUN_01c75a80` at `0x01C75A80`, `FUN_01c75d90` at
/// `0x01C75D90`, and `FUN_01c96f90` at `0x01C96F90`.
///
/// Each of these asks a shared routine first, and only goes on to show
/// its result and record itself for replay when that routine reports it may.
/// That is why a refused entry leaves the previous analysis as the one "Run
/// last simulation" repeats, rather than replacing it with something that never
/// ran.
///
/// The steady-state solver is the exception with no result step: its guard is
/// what runs the solver.
///
/// Returns whether the analysis ran.
pub fn run_guarded_analysis(
    analysis: GuardedAnalysis,
    host: &mut impl GuardedAnalysisHost,
) -> bool {
    if host.refused(analysis) {
        return false;
    }

    if analysis != GuardedAnalysis::SteadyStateSolver {
        host.show_result(analysis);
    }
    host.record_last_command(analysis.script_name());
    true
}

/// The library maintenance commands.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum LibraryTask {
    /// `mnTools.mnReBuildLibrary` ("Re-&build Library"), recovered flag `1`.
    Rebuild,
    /// `mnTools.mnReCompileLibrary` ("Re-c&ompile Library"), recovered flag
    /// `0`.
    Recompile,
}

pub trait LibraryTaskHost {
    /// Runs one library maintenance task.
    ///
    /// The recovered call passes a second literal `3` alongside the task flag;
    /// the symbols do not say what it selects, so it is carried through here.
    fn run_library_task(&mut self, task: LibraryTask, mode: u8);
}

/// The recovered second argument both library commands pass.
pub const LIBRARY_TASK_MODE: u8 = 3;

/// Implements Ghidra functions `FUN_01c9c2c0` at `0x01C9C2C0` and
/// `FUN_01c9c310` at `0x01C9C310`.
///
/// Rebuilds or recompiles the component library.
///
/// The two entries differ only in one flag, and neither asks for confirmation
/// or reports back — the library object decides what to show while it works.
pub fn run_library_task(task: LibraryTask, host: &mut impl LibraryTaskHost) {
    host.run_library_task(task, LIBRARY_TASK_MODE);
}

pub trait CloudSessionHost {
    /// Logs in to the cloud service.
    fn log_in(&mut self);

    /// Logs out of the cloud service.
    fn log_out(&mut self);

    /// Clears whatever the session left behind.
    fn clear_session(&mut self);
}

/// Implements Ghidra function `FUN_01c937a0` at `0x01C937A0`.
///
/// Handles `MainMenu.mnFile.mnCloud.mnLoginToCloud.OnClick` ("Login ...").
///
/// Logs in to the cloud service. The session object is fetched rather than
/// created, so the entry works whether or not one already exists.
pub fn cloud_log_in(host: &mut impl CloudSessionHost) {
    host.log_in();
}

/// Implements Ghidra function `FUN_01c937c0` at `0x01C937C0`.
///
/// Handles `MainMenu.mnFile.mnCloud.mnLogoutFromCloud.OnClick` ("Logout").
///
/// Logs out and then clears the session.
///
/// The session object is fetched twice — once for each step — rather than held,
/// so the clear runs against whatever the log-out left in place.
pub fn cloud_log_out(host: &mut impl CloudSessionHost) {
    host.log_out();
    host.clear_session();
}

pub trait ToolCommandHost {
    /// Opens the Python shell.
    fn open_python_shell(&mut self);

    /// Closes the test card and releases what it held.
    fn close_testcard(&mut self);

    /// The shared guard that blocks editing in some editor states.
    fn editing_blocked(&mut self) -> bool;

    /// Opens the block insertion dialog.
    fn insert_block(&mut self);
}

/// Implements Ghidra function `FUN_01c98090` at `0x01C98090`.
///
/// Handles `MainMenu.mnTools.mnPythonShell.OnClick` ("Python Shell").
///
/// Opens the Python shell. The recovered handler passes two fixed zeroes, so
/// the shell always opens in the same state regardless of the document.
pub fn open_python_shell(host: &mut impl ToolCommandHost) {
    host.open_python_shell();
}

/// Implements Ghidra function `FUN_01c98900` at `0x01C98900`.
///
/// Handles `MainMenu.mnTM.mnCloseTestcard.OnClick` ("&Close Testcard").
///
/// Closes the test card. The editor is passed as both arguments of the
/// recovered call, so the close runs against the editor itself rather than
/// against a separate owner.
pub fn close_testcard(host: &mut impl ToolCommandHost) {
    host.close_testcard();
}

/// Implements Ghidra function `FUN_01c93170` at `0x01C93170`.
///
/// Handles `MainMenu.Insert.mnBlock.OnClick` ("B&lock...").
///
/// Opens the block insertion dialog, unless the shared edit guard refuses.
///
/// Returns whether the dialog opened.
pub fn insert_block(host: &mut impl ToolCommandHost) -> bool {
    if host.editing_blocked() {
        return false;
    }
    host.insert_block();
    true
}

#[cfg(test)]
mod guarded_and_tool_tests {
    use super::*;

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum Step {
        Result(GuardedAnalysis),
        Record(String),
    }

    #[derive(Debug, Default)]
    struct Guarded {
        refuse: bool,
        steps: Vec<Step>,
    }

    impl GuardedAnalysisHost for Guarded {
        fn refused(&mut self, _analysis: GuardedAnalysis) -> bool {
            self.refuse
        }

        fn show_result(&mut self, analysis: GuardedAnalysis) {
            self.steps.push(Step::Result(analysis));
        }

        fn record_last_command(&mut self, name: &str) {
            self.steps.push(Step::Record(name.to_owned()));
        }
    }

    #[test]
    fn a_guarded_analysis_shows_its_result_and_records_itself() {
        let mut host = Guarded::default();

        assert!(run_guarded_analysis(
            GuardedAnalysis::AcPhasorDiagram,
            &mut host
        ));

        assert_eq!(
            host.steps,
            [
                Step::Result(GuardedAnalysis::AcPhasorDiagram),
                Step::Record("ACVectorDiagramClick".to_owned()),
            ]
        );
    }

    #[test]
    fn the_steady_state_solver_has_no_separate_result_step() {
        let mut host = Guarded::default();

        assert!(run_guarded_analysis(
            GuardedAnalysis::SteadyStateSolver,
            &mut host
        ));

        assert_eq!(
            host.steps,
            [Step::Record("SteadyStateSolverClick".to_owned())]
        );
    }

    #[test]
    fn a_refused_analysis_leaves_the_replay_name_alone() {
        let mut host = Guarded {
            refuse: true,
            ..Guarded::default()
        };

        for analysis in [
            GuardedAnalysis::SteadyStateSolver,
            GuardedAnalysis::AcTimeFunction,
            GuardedAnalysis::AcPhasorDiagram,
            GuardedAnalysis::NetworkAnalysis,
            GuardedAnalysis::DcTransferCharacteristic,
            GuardedAnalysis::TemperatureAnalysis,
            GuardedAnalysis::AcTransferCharacteristic,
            GuardedAnalysis::Noise,
            GuardedAnalysis::AcMultiSine,
        ] {
            assert!(!run_guarded_analysis(analysis, &mut host));
        }

        assert!(host.steps.is_empty());
    }

    #[test]
    fn the_guarded_names_are_distinct() {
        let names = [
            GuardedAnalysis::SteadyStateSolver.script_name(),
            GuardedAnalysis::AcTimeFunction.script_name(),
            GuardedAnalysis::AcPhasorDiagram.script_name(),
            GuardedAnalysis::NetworkAnalysis.script_name(),
            GuardedAnalysis::DcTransferCharacteristic.script_name(),
            GuardedAnalysis::TemperatureAnalysis.script_name(),
            GuardedAnalysis::AcTransferCharacteristic.script_name(),
            GuardedAnalysis::Noise.script_name(),
            GuardedAnalysis::AcMultiSine.script_name(),
        ];
        let mut sorted = names;
        sorted.sort_unstable();
        let mut deduped = sorted.to_vec();
        deduped.dedup();
        assert_eq!(deduped.len(), names.len());
    }

    #[derive(Debug, Default)]
    struct Library {
        run: Vec<(LibraryTask, u8)>,
    }

    impl LibraryTaskHost for Library {
        fn run_library_task(&mut self, task: LibraryTask, mode: u8) {
            self.run.push((task, mode));
        }
    }

    #[test]
    fn both_library_entries_pass_the_same_recovered_mode() {
        let mut host = Library::default();

        run_library_task(LibraryTask::Rebuild, &mut host);
        run_library_task(LibraryTask::Recompile, &mut host);

        assert_eq!(
            host.run,
            [
                (LibraryTask::Rebuild, LIBRARY_TASK_MODE),
                (LibraryTask::Recompile, LIBRARY_TASK_MODE),
            ]
        );
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum CloudStep {
        In,
        Out,
        Clear,
    }

    #[derive(Debug, Default)]
    struct Cloud {
        steps: Vec<CloudStep>,
    }

    impl CloudSessionHost for Cloud {
        fn log_in(&mut self) {
            self.steps.push(CloudStep::In);
        }

        fn log_out(&mut self) {
            self.steps.push(CloudStep::Out);
        }

        fn clear_session(&mut self) {
            self.steps.push(CloudStep::Clear);
        }
    }

    #[test]
    fn logging_out_also_clears_the_session() {
        let mut host = Cloud::default();

        cloud_log_in(&mut host);
        cloud_log_out(&mut host);

        assert_eq!(
            host.steps,
            [CloudStep::In, CloudStep::Out, CloudStep::Clear]
        );
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum ToolStep {
        Python,
        Testcard,
        Block,
    }

    #[derive(Debug, Default)]
    struct Tools {
        blocked: bool,
        steps: Vec<ToolStep>,
    }

    impl ToolCommandHost for Tools {
        fn open_python_shell(&mut self) {
            self.steps.push(ToolStep::Python);
        }

        fn close_testcard(&mut self) {
            self.steps.push(ToolStep::Testcard);
        }

        fn editing_blocked(&mut self) -> bool {
            self.blocked
        }

        fn insert_block(&mut self) {
            self.steps.push(ToolStep::Block);
        }
    }

    #[test]
    fn the_tool_entries_reach_their_own_commands() {
        let mut host = Tools::default();

        open_python_shell(&mut host);
        close_testcard(&mut host);
        assert!(insert_block(&mut host));

        assert_eq!(
            host.steps,
            [ToolStep::Python, ToolStep::Testcard, ToolStep::Block]
        );
    }

    #[test]
    fn a_blocked_editor_inserts_no_block() {
        let mut host = Tools {
            blocked: true,
            ..Tools::default()
        };

        assert!(!insert_block(&mut host));
        assert!(host.steps.is_empty());
    }
}

/// The order a selected object can be moved in.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ArrangeStep {
    /// `Edit.mnArrange.mnBringToFront` ("&Bring To Front").
    ToFront,
    /// `Edit.mnArrange.mnSendToBack` ("Send To Back").
    ToBack,
    /// `Edit.mnArrange.mnBringForward` ("Bring &Forward").
    Forward,
    /// `Edit.mnArrange.mnSendBackward` ("Send B&ackward").
    Backward,
}

pub trait ArrangeHost {
    /// The shared guard that blocks editing in some editor states.
    fn editing_blocked(&mut self) -> bool;

    /// Moves the selection in the drawing order.
    fn arrange_selection(&mut self, step: ArrangeStep);

    /// Marks the document changed and refreshes it.
    fn mark_document_changed(&mut self);

    /// Repaints the schematic canvas.
    fn repaint_canvas(&mut self);
}

/// Implements Ghidra functions `FUN_01c97710` at `0x01C97710`, `FUN_01c97760`
/// at `0x01C97760`, `FUN_01c977b0` at `0x01C977B0`, and `FUN_01c97800` at
/// `0x01C97800`.
///
/// Moves the selection through the drawing order.
///
/// All four entries have the same shape and differ only in the routine they
/// call. None of them opens an undo record, so re-ordering is one of the few
/// edits the recovered build does not let the user step back through.
///
/// Returns whether the move ran.
pub fn arrange_selection(step: ArrangeStep, host: &mut impl ArrangeHost) -> bool {
    if host.editing_blocked() {
        return false;
    }

    host.arrange_selection(step);
    host.mark_document_changed();
    host.repaint_canvas();
    true
}

/// The singleton windows the Tools menu keeps alive between openings.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SingletonWindow {
    /// `mnTools.mnUARTTerminalWindow` ("Serial monitor").
    ///
    /// The only one of the three that is not brought forward once it exists —
    /// a second click on an already-open serial monitor does nothing at all.
    SerialMonitor,
    /// `mnTools.mnDesignTool` ("Design Tool").
    DesignTool,
    /// `mnTools.mnComponentExplorer` ("Component Explorer...").
    ///
    /// The only one given the editor and its document when it is created, so
    /// its contents follow whichever schematic was open at that moment.
    ComponentExplorer,
}

pub trait SingletonWindowHost {
    /// Reports whether the window already exists.
    fn window_exists(&mut self, window: SingletonWindow) -> bool;

    /// Creates the window.
    fn create_window(&mut self, window: SingletonWindow);

    /// Hands the new window the editor and its document.
    fn bind_to_editor(&mut self, window: SingletonWindow);

    /// Shows the window.
    fn show_window(&mut self, window: SingletonWindow);

    /// Brings the window forward.
    fn bring_to_front(&mut self, window: SingletonWindow);
}

/// Implements Ghidra functions `FUN_01ca4190` at `0x01CA4190`, `FUN_01ca2a40`
/// at `0x01CA2A40`, and `FUN_01c9bf30` at `0x01C9BF30`.
///
/// Opens one of the singleton tool windows, creating it the first time.
///
/// The three differ in what happens after the first click: the component
/// explorer is bound to the editor while it is being created, and the serial
/// monitor is the odd one out in being shown only on creation — clicking it
/// again while it is already open is a no-op rather than a raise.
///
/// Returns whether the window was created by this call.
pub fn open_singleton_window(window: SingletonWindow, host: &mut impl SingletonWindowHost) -> bool {
    let created = !host.window_exists(window);

    if created {
        host.create_window(window);
        if window == SingletonWindow::ComponentExplorer {
            host.bind_to_editor(window);
        }
    }

    if window == SingletonWindow::SerialMonitor {
        if created {
            host.show_window(window);
        }
        return created;
    }

    host.show_window(window);
    host.bring_to_front(window);
    created
}

pub trait AnalysisOptionsHost {
    /// Runs the analysis options dialog, reporting whether it was accepted.
    fn show_analysis_options(&mut self) -> bool;

    /// Copies the dialog's settings back into the application.
    fn commit_analysis_options(&mut self);
}

/// Implements Ghidra function `FUN_01c77280` at `0x01C77280`.
///
/// Handles `MainMenu.mnAnalysis.AnalOptions.OnClick` ("&Options...").
///
/// Opens the analysis options dialog and keeps what it returns.
///
/// This is the one option dialog in the menu that reads its modal result: the
/// settings are copied back only when the dialog was accepted, so cancelling it
/// really does discard the changes rather than relying on the dialog to.
///
/// Returns whether the settings were kept.
pub fn edit_analysis_options(host: &mut impl AnalysisOptionsHost) -> bool {
    if !host.show_analysis_options() {
        return false;
    }
    host.commit_analysis_options();
    true
}

pub trait CopyHost {
    /// Reports whether the selection is a component backed by editable code.
    fn code_component_selected(&mut self) -> bool;

    /// Reports whether the code editor window exists.
    fn code_editor_open(&mut self) -> bool;

    /// Copies from the code editor.
    fn copy_from_code_editor(&mut self);

    /// Copies the schematic selection.
    fn copy_schematic_selection(&mut self);
}

/// Implements Ghidra function `FUN_01c77bb0` at `0x01C77BB0`.
///
/// Handles `MainMenu.Edit.Copy.OnClick` and
/// `TopToolBar.GeneralTools.DFCopyBtn.OnClick` ("&Copy").
///
/// Copies either the code the user is editing or the schematic selection.
///
/// Which one depends on what is selected: a component with an open code editor
/// routes Copy into that editor, so Ctrl-C inside an MCU's source does not
/// quietly copy the component instead. Everything else copies from the
/// schematic.
///
/// Returns whether the code editor took it.
pub fn copy_selection(host: &mut impl CopyHost) -> bool {
    if host.code_component_selected() && host.code_editor_open() {
        host.copy_from_code_editor();
        return true;
    }

    host.copy_schematic_selection();
    false
}

pub trait ExamClockHost {
    /// The moment the exam started, or `None` when no exam is running.
    fn exam_start(&mut self) -> Option<i32>;

    /// The current tick count.
    fn now(&mut self) -> i32;

    /// Writes the clock display.
    fn set_clock_text(&mut self, text: &str);
}

/// The granularity the recovered exam clock rounds its elapsed time to.
pub const EXAM_CLOCK_STEP: i32 = 10;

/// Implements Ghidra function `FUN_01c7cc40` at `0x01C7CC40`.
///
/// Handles `ExamClockTimer.OnTimer`.
///
/// Updates the exam clock.
///
/// The elapsed time is divided down, rounded, then multiplied back up by ten,
/// so the display steps rather than counting continuously — which is what stops
/// the clock drawing attention to itself during an exam.
///
/// Returns whether the clock was updated.
pub fn exam_clock_tick(host: &mut impl ExamClockHost) -> bool {
    let Some(start) = host.exam_start() else {
        return false;
    };

    let elapsed = host.now() - start;
    let rounded = (f64::from(elapsed) / f64::from(EXAM_CLOCK_STEP)).round();
    // The recovered handler truncates the rounded value the same way, and then
    // multiplies it back up as `* 2 * 5`.
    #[allow(clippy::cast_possible_truncation)]
    let steps = rounded as i32;
    let displayed = steps * EXAM_CLOCK_STEP;

    host.set_clock_text(&displayed.to_string());
    true
}

pub trait EditorTeardownHost {
    /// Detaches the editor from the window list.
    fn detach_window(&mut self);

    /// Hides the floating value overlay, if it still exists.
    fn hide_overlay(&mut self);

    /// Frees the overlay.
    fn free_overlay(&mut self);
}

/// Implements Ghidra function `FUN_01c9c280` at `0x01C9C280`.
///
/// Handles `SchematicEditor.OnDestroy`.
///
/// Tears the editor down.
///
/// The value overlay is hidden before it is freed, and the free itself is the
/// nil-safe one — so an editor closed before the overlay was ever created tears
/// down cleanly.
pub fn destroy_editor(host: &mut impl EditorTeardownHost) {
    host.detach_window();
    host.hide_overlay();
    host.free_overlay();
}

pub trait RestoreHost {
    /// Clears the flag the editor raised when it was minimized.
    fn clear_minimized_flag(&mut self);

    /// The window that should be brought back with the editor, if any.
    fn companion_window(&mut self) -> bool;

    /// Brings the companion window back.
    fn restore_companion(&mut self);

    /// Reports whether the companion should also be re-activated.
    fn reactivate_companion(&mut self) -> bool;

    /// Re-activates the companion window.
    fn activate_companion(&mut self);
}

/// Implements Ghidra function `FUN_01c8e970` at `0x01C8E970`.
///
/// Handles `SchematicEditorEvents.OnRestore`.
///
/// Brings the editor's companion window back when the editor is un-minimized.
///
/// Restoring the application would otherwise leave the companion behind the
/// editor, so it is raised here — and re-activated as well, but only when the
/// editor recorded that it had been the active one.
pub fn editor_restored(host: &mut impl RestoreHost) -> bool {
    host.clear_minimized_flag();

    if !host.companion_window() {
        return false;
    }

    host.restore_companion();

    if host.reactivate_companion() {
        host.activate_companion();
    }
    true
}

#[cfg(test)]
mod arrange_and_window_tests {
    use super::*;

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum Step {
        Arrange(ArrangeStep),
        Changed,
        Repaint,
    }

    #[derive(Debug, Default)]
    struct Arrange {
        blocked: bool,
        steps: Vec<Step>,
    }

    impl ArrangeHost for Arrange {
        fn editing_blocked(&mut self) -> bool {
            self.blocked
        }

        fn arrange_selection(&mut self, step: ArrangeStep) {
            self.steps.push(Step::Arrange(step));
        }

        fn mark_document_changed(&mut self) {
            self.steps.push(Step::Changed);
        }

        fn repaint_canvas(&mut self) {
            self.steps.push(Step::Repaint);
        }
    }

    #[test]
    fn every_arrange_entry_moves_marks_and_repaints() {
        for step in [
            ArrangeStep::ToFront,
            ArrangeStep::ToBack,
            ArrangeStep::Forward,
            ArrangeStep::Backward,
        ] {
            let mut host = Arrange::default();

            assert!(arrange_selection(step, &mut host));

            assert_eq!(
                host.steps,
                [Step::Arrange(step), Step::Changed, Step::Repaint]
            );
        }
    }

    #[test]
    fn a_blocked_editor_arranges_nothing() {
        let mut host = Arrange {
            blocked: true,
            ..Arrange::default()
        };

        assert!(!arrange_selection(ArrangeStep::ToFront, &mut host));
        assert!(host.steps.is_empty());
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum WindowStep {
        Create,
        Bind,
        Show,
        Front,
    }

    #[derive(Debug, Default)]
    struct Windows {
        existing: Vec<SingletonWindow>,
        steps: Vec<WindowStep>,
    }

    impl SingletonWindowHost for Windows {
        fn window_exists(&mut self, window: SingletonWindow) -> bool {
            self.existing.contains(&window)
        }

        fn create_window(&mut self, window: SingletonWindow) {
            self.existing.push(window);
            self.steps.push(WindowStep::Create);
        }

        fn bind_to_editor(&mut self, _window: SingletonWindow) {
            self.steps.push(WindowStep::Bind);
        }

        fn show_window(&mut self, _window: SingletonWindow) {
            self.steps.push(WindowStep::Show);
        }

        fn bring_to_front(&mut self, _window: SingletonWindow) {
            self.steps.push(WindowStep::Front);
        }
    }

    #[test]
    fn the_component_explorer_is_bound_to_the_editor_when_it_is_created() {
        let mut host = Windows::default();

        assert!(open_singleton_window(
            SingletonWindow::ComponentExplorer,
            &mut host
        ));

        assert_eq!(
            host.steps,
            [
                WindowStep::Create,
                WindowStep::Bind,
                WindowStep::Show,
                WindowStep::Front
            ]
        );
    }

    #[test]
    fn the_design_tool_is_raised_on_every_click() {
        let mut host = Windows::default();

        assert!(open_singleton_window(
            SingletonWindow::DesignTool,
            &mut host
        ));
        assert!(!open_singleton_window(
            SingletonWindow::DesignTool,
            &mut host
        ));

        assert_eq!(
            host.steps,
            [
                WindowStep::Create,
                WindowStep::Show,
                WindowStep::Front,
                WindowStep::Show,
                WindowStep::Front,
            ]
        );
    }

    #[test]
    fn a_second_click_on_the_serial_monitor_does_nothing() {
        let mut host = Windows::default();

        assert!(open_singleton_window(
            SingletonWindow::SerialMonitor,
            &mut host
        ));
        assert!(!open_singleton_window(
            SingletonWindow::SerialMonitor,
            &mut host
        ));

        assert_eq!(host.steps, [WindowStep::Create, WindowStep::Show]);
    }

    #[derive(Debug, Default)]
    struct Options {
        accept: bool,
        commits: usize,
    }

    impl AnalysisOptionsHost for Options {
        fn show_analysis_options(&mut self) -> bool {
            self.accept
        }

        fn commit_analysis_options(&mut self) {
            self.commits += 1;
        }
    }

    #[test]
    fn the_analysis_options_are_kept_only_when_the_dialog_is_accepted() {
        let mut accepted = Options {
            accept: true,
            ..Options::default()
        };
        assert!(edit_analysis_options(&mut accepted));
        assert_eq!(accepted.commits, 1);

        let mut cancelled = Options::default();
        assert!(!edit_analysis_options(&mut cancelled));
        assert_eq!(cancelled.commits, 0);
    }

    #[derive(Debug, Default)]
    struct Copying {
        code_component: bool,
        editor_open: bool,
        from_code: usize,
        from_schematic: usize,
    }

    impl CopyHost for Copying {
        fn code_component_selected(&mut self) -> bool {
            self.code_component
        }

        fn code_editor_open(&mut self) -> bool {
            self.editor_open
        }

        fn copy_from_code_editor(&mut self) {
            self.from_code += 1;
        }

        fn copy_schematic_selection(&mut self) {
            self.from_schematic += 1;
        }
    }

    #[test]
    fn copy_follows_the_open_code_editor_when_there_is_one() {
        let mut host = Copying {
            code_component: true,
            editor_open: true,
            ..Copying::default()
        };

        assert!(copy_selection(&mut host));

        assert_eq!(host.from_code, 1);
        assert_eq!(host.from_schematic, 0);
    }

    #[test]
    fn copy_falls_back_to_the_schematic() {
        for (code_component, editor_open) in [(true, false), (false, true), (false, false)] {
            let mut host = Copying {
                code_component,
                editor_open,
                ..Copying::default()
            };

            assert!(!copy_selection(&mut host));

            assert_eq!(host.from_schematic, 1);
            assert_eq!(host.from_code, 0);
        }
    }

    #[derive(Debug, Default)]
    struct Clock {
        start: Option<i32>,
        now: i32,
        text: Vec<String>,
    }

    impl ExamClockHost for Clock {
        fn exam_start(&mut self) -> Option<i32> {
            self.start
        }

        fn now(&mut self) -> i32 {
            self.now
        }

        fn set_clock_text(&mut self, text: &str) {
            self.text.push(text.to_owned());
        }
    }

    #[test]
    fn the_exam_clock_steps_rather_than_counting_continuously() {
        let mut host = Clock {
            start: Some(100),
            now: 143,
            ..Clock::default()
        };

        assert!(exam_clock_tick(&mut host));

        assert_eq!(host.text, ["40"]);
    }

    #[test]
    fn no_exam_leaves_the_clock_alone() {
        let mut host = Clock::default();

        assert!(!exam_clock_tick(&mut host));
        assert!(host.text.is_empty());
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum TeardownStep {
        Detach,
        Hide,
        Free,
    }

    #[derive(Debug, Default)]
    struct Teardown {
        steps: Vec<TeardownStep>,
    }

    impl EditorTeardownHost for Teardown {
        fn detach_window(&mut self) {
            self.steps.push(TeardownStep::Detach);
        }

        fn hide_overlay(&mut self) {
            self.steps.push(TeardownStep::Hide);
        }

        fn free_overlay(&mut self) {
            self.steps.push(TeardownStep::Free);
        }
    }

    #[test]
    fn the_overlay_is_hidden_before_it_is_freed() {
        let mut host = Teardown::default();

        destroy_editor(&mut host);

        assert_eq!(
            host.steps,
            [TeardownStep::Detach, TeardownStep::Hide, TeardownStep::Free]
        );
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum RestoreStep {
        Clear,
        Restore,
        Activate,
    }

    #[derive(Debug, Default)]
    struct Restore {
        companion: bool,
        reactivate: bool,
        steps: Vec<RestoreStep>,
    }

    impl RestoreHost for Restore {
        fn clear_minimized_flag(&mut self) {
            self.steps.push(RestoreStep::Clear);
        }

        fn companion_window(&mut self) -> bool {
            self.companion
        }

        fn restore_companion(&mut self) {
            self.steps.push(RestoreStep::Restore);
        }

        fn reactivate_companion(&mut self) -> bool {
            self.reactivate
        }

        fn activate_companion(&mut self) {
            self.steps.push(RestoreStep::Activate);
        }
    }

    #[test]
    fn restoring_raises_the_companion_and_re_activates_it_when_asked() {
        let mut host = Restore {
            companion: true,
            reactivate: true,
            ..Restore::default()
        };

        assert!(editor_restored(&mut host));

        assert_eq!(
            host.steps,
            [
                RestoreStep::Clear,
                RestoreStep::Restore,
                RestoreStep::Activate
            ]
        );
    }

    #[test]
    fn with_no_companion_only_the_flag_is_cleared() {
        let mut host = Restore::default();

        assert!(!editor_restored(&mut host));

        assert_eq!(host.steps, [RestoreStep::Clear]);
    }
}
