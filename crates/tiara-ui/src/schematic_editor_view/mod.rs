//! Iced state for the recovered Schematic Editor view options.
//!
//! The View menu is mostly flags: each entry flips one application-wide setting
//! and repaints. The rest of this module covers the paired menu entries, the
//! docking panel, and the small handlers that keep the status bar and the
//! editor lock in step.

/// The form the recovered handlers belong to.
pub const FORM_RESOURCE: &str = "SchematicEditor";

/// The width the left dock panel is given while something is docked in it.
pub const DOCKED_PANEL_WIDTH: i32 = 1;

/// The width the left dock panel is given once it is empty.
pub const UNDOCKED_PANEL_WIDTH: i32 = 0;

/// The annotations the View menu switches on and off.
///
/// Each is one application-wide flag rather than a per-document setting, so
/// switching one affects every schematic that is open.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ViewAnnotation {
    /// `View.mnShowLabels` ("&Labels").
    Labels,
    /// `View.mnShowWireIDs` ("Wire IDs").
    WireIds,
    /// `View.mnNodeNumbers` ("No&de Numbers").
    NodeNumbers,
    /// `View.mnAppendUnitToLabel` ("&Units").
    Units,
    /// `View.mnPackageNumbers` ("Package Numbers").
    PackageNumbers,
    /// `View.mnAppendToleranceToLabel` ("Tolerance").
    Tolerance,
}

pub trait ViewAnnotationHost {
    /// Reports whether one annotation is switched on.
    fn annotation_enabled(&mut self, annotation: ViewAnnotation) -> bool;

    /// Switches one annotation on or off.
    fn set_annotation_enabled(&mut self, annotation: ViewAnnotation, enabled: bool);

    /// Repaints the schematic canvas.
    fn repaint_canvas(&mut self);
}

/// Flips one schematic annotation and repaints.
///
/// Implements Ghidra functions `FUN_01c976a0` at `0x01C976A0`, `FUN_01c976e0`
/// at `0x01C976E0`, `FUN_01c98660` at `0x01C98660`, `FUN_01c98920` at
/// `0x01C98920`, `FUN_01c9afe0` at `0x01C9AFE0`, and `FUN_01ca3a90` at
/// `0x01CA3A90`.
///
/// All six entries have the same two lines, so they share one flow. None of
/// them touches its own check mark — the menu reads the flag when it opens —
/// and none marks the document changed, because an annotation is a way of
/// looking at the circuit rather than part of it.
///
/// Returns whether the annotation is now on.
pub fn toggle_annotation(annotation: ViewAnnotation, host: &mut impl ViewAnnotationHost) -> bool {
    let enabled = !host.annotation_enabled(annotation);
    host.set_annotation_enabled(annotation, enabled);
    host.repaint_canvas();
    enabled
}

/// The insert options that appear in both the menu and the canvas popup.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PairedOption {
    /// `Insert.mnAutoRepeat` and `SchPopup.pmAutoRepeat` ("&Auto Repeat").
    AutoRepeat,
    /// `Insert.mnAutoReWire` and `SchPopup.pmAutoReWire` ("Auto Wi&re").
    AutoRewire,
}

pub trait PairedOptionHost {
    /// The check state of the menu entry, which holds the setting.
    fn menu_checked(&mut self, option: PairedOption) -> bool;

    /// Writes the menu entry's check mark.
    fn set_menu_checked(&mut self, option: PairedOption, checked: bool);

    /// Writes the popup entry's check mark.
    fn set_popup_checked(&mut self, option: PairedOption, checked: bool);
}

/// Implements Ghidra functions `FUN_01c83d30` at `0x01C83D30` and
/// `FUN_01c849a0` at `0x01C849A0`.
///
/// Flips one insert option and copies the new state to its popup twin.
///
/// The menu entry's check mark is the setting; the popup entry only mirrors it.
/// That is why both controls share a handler and why clicking either one ends
/// with the same pair of check marks — the popup is never read, only written.
///
/// Returns whether the option is now on.
pub fn toggle_paired_option(option: PairedOption, host: &mut impl PairedOptionHost) -> bool {
    let checked = !host.menu_checked(option);
    host.set_menu_checked(option, checked);
    host.set_popup_checked(option, checked);
    checked
}

pub trait InteractiveRunHost {
    /// Presses or releases the `ToolInteractive` button.
    fn set_interactive_button(&mut self, pressed: bool);

    /// Runs the shared interactive-mode command.
    fn apply_interactive_state(&mut self);
}

/// Implements Ghidra functions `FUN_01c99750` at `0x01C99750` and
/// `FUN_01c99780` at `0x01C99780`.
///
/// Handles `mnInteractive.mnStartInteractive.OnClick` ("Start") and
/// `mnInteractive.mnStopInteractive.OnClick` ("Stop").
///
/// Starts or stops interactive mode by moving the tool-bar button and letting
/// the shared command read it.
///
/// The button is the state: the menu entries do not call separate start and
/// stop routines, they press the button and run the same handler the button
/// itself runs.
pub fn set_interactive_running(running: bool, host: &mut impl InteractiveRunHost) {
    host.set_interactive_button(running);
    host.apply_interactive_state();
}

pub trait ThreeDViewHost {
    /// Presses or releases the `sbEnable3DView` button.
    fn set_three_d_button(&mut self, pressed: bool);

    /// Runs the shared 2D/3D command.
    fn apply_view_dimension(&mut self);
}

/// Implements Ghidra functions `FUN_01c9b010` at `0x01C9B010` and
/// `FUN_01c9b040` at `0x01C9B040`.
///
/// Handles `View.mn3DView.OnClick` and `View.mn2DView.OnClick`.
///
/// Switches between the 2D and 3D views through the tool-bar button, the same
/// way the interactive entries do.
pub fn set_three_d_view(enabled: bool, host: &mut impl ThreeDViewHost) {
    host.set_three_d_button(enabled);
    host.apply_view_dimension();
}

pub trait DockPanelHost {
    /// Writes the recovered slot `+0x118` on the control at `+0x12B8`.
    ///
    /// The recovered symbols do not name the method; `false` accompanies a
    /// drop and `true` an undock.
    fn set_dock_state(&mut self, state: bool);

    /// Sets the dock panel's width.
    fn set_panel_width(&mut self, width: i32);
}

/// Implements Ghidra function `FUN_01c9bfb0` at `0x01C9BFB0`.
///
/// Handles `EditorPanel.pnlLeftDock.OnDockDrop`.
///
/// Makes room for a panel that has just been docked on the left.
///
/// The width is set to one pixel rather than to the panel's own size, so the
/// dock manager is what stretches it — the handler only stops the panel
/// collapsing to nothing.
pub fn dock_panel_dropped(host: &mut impl DockPanelHost) {
    host.set_dock_state(false);
    host.set_panel_width(DOCKED_PANEL_WIDTH);
}

/// Implements Ghidra function `FUN_01c9c0c0` at `0x01C9C0C0`.
///
/// Handles `EditorPanel.pnlLeftDock.OnUnDock`.
///
/// Collapses the dock panel once the last thing in it has been dragged out.
pub fn dock_panel_undocked(host: &mut impl DockPanelHost) {
    host.set_dock_state(true);
    host.set_panel_width(UNDOCKED_PANEL_WIDTH);
}

pub trait SiteInfoHost {
    /// Reports whether the client offering to dock is of the dockable class.
    fn client_is_dockable(&mut self) -> bool;
}

/// Implements Ghidra function `FUN_01c9c100` at `0x01C9C100`.
///
/// Handles `SchematicEditor.OnGetSiteInfo`.
///
/// Decides whether one control may dock into the editor.
///
/// The answer is a class test and nothing else: neither the drop position nor
/// the editor's own state is consulted, so a dockable panel can be dropped
/// anywhere on the form and anything else is refused everywhere.
pub fn can_dock(host: &mut impl SiteInfoHost) -> bool {
    host.client_is_dockable()
}

pub trait EditorLockHost {
    /// Reports whether the schematic editor is locked.
    fn locked(&mut self) -> bool;

    fn set_locked(&mut self, locked: bool);

    /// Presses or releases the `sbEditorLocked` button.
    fn set_lock_button(&mut self, pressed: bool);

    /// The pressed state the button settled on.
    fn lock_button_pressed(&mut self) -> bool;

    /// Brings the editor window forward.
    fn bring_to_front(&mut self);

    /// Writes the matching menu entry's check mark.
    fn set_menu_checked(&mut self, checked: bool);
}

/// Implements Ghidra function `FUN_01ca0c80` at `0x01CA0C80`.
///
/// Handles `StatusPanel.ButtonPanel.EditorLockPanel.sbEditorLocked.OnClick`
/// (hinted "Locks/unlocks the schematic editor at the bottom"), and the shared
/// command the Tools menu's lock entry reaches.
///
/// Locks or unlocks the editor.
///
/// The button shows the *unlocked* state — it is pressed while editing is
/// allowed and pops out when the editor locks — so the flag and the button run
/// opposite each other. The editor is then brought forward, and the menu entry
/// is checked from the button rather than from the flag, so a button that
/// refused to move keeps the menu honest.
///
/// Returns whether the editor is now locked.
pub fn toggle_editor_lock(host: &mut impl EditorLockHost) -> bool {
    let locked = !host.locked();
    host.set_locked(locked);
    host.set_lock_button(!locked);
    host.bring_to_front();

    let settled = host.lock_button_pressed();
    host.set_menu_checked(settled);
    locked
}

/// How far the two Zoom entries zoom out.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ZoomExtent {
    /// `View.Zoom.PageWidth` ("Page Wi&dth"): the page width, one row tall.
    PageWidth,
    /// `View.Zoom.WholePage` ("Whole &Page"): the page width and its height.
    WholePage,
}

pub trait PageWidthHost {
    /// Reports whether a document is open.
    fn document_open(&mut self) -> bool;

    /// The check state of the menu entry the recovered handler guards on.
    fn guard_checked(&mut self) -> bool;

    /// Zooms the canvas to one extent.
    fn zoom_to_extent(&mut self, extent: ZoomExtent);
}

/// Implements Ghidra function `FUN_01c83ef0` at `0x01C83EF0`.
///
/// Handles `MainMenu.View.Zoom.PageWidth.OnClick` ("Page Wi&dth").
///
/// Zooms the canvas to one page width.
///
/// The recovered handler also requires a neighbouring menu entry to be checked
/// before it does anything, so the command is inert while that entry is clear.
/// That guard is preserved rather than dropped, because dropping it would make
/// the entry work in a state the recovered build leaves it dead in.
///
/// Returns whether the zoom ran.
pub fn zoom_to_page_width(host: &mut impl PageWidthHost) -> bool {
    zoom_to(ZoomExtent::PageWidth, host)
}

fn zoom_to(extent: ZoomExtent, host: &mut impl PageWidthHost) -> bool {
    if !host.document_open() || !host.guard_checked() {
        return false;
    }
    host.zoom_to_extent(extent);
    true
}

pub trait PopupMenuHost {
    /// Hides the floating value overlay.
    fn hide_overlay(&mut self);

    /// Reports whether a command currently occupies the editor's command slot.
    fn command_running(&mut self) -> bool;

    /// Enables or disables the popup's cancel entry.
    fn set_cancel_enabled(&mut self, enabled: bool);

    /// Builds the rest of the popup from the object under the pointer.
    fn build_context_entries(&mut self);
}

/// Implements Ghidra function `FUN_01c83550` at `0x01C83550`.
///
/// Handles `SchPopup.OnPopup`.
///
/// Prepares the canvas popup just before it opens.
///
/// The value overlay is dismissed first so it does not sit under the menu, and
/// the Cancel entry is enabled only while a command is actually running — which
/// is what stops the popup offering to cancel nothing.
pub fn popup_opening(host: &mut impl PopupMenuHost) {
    host.hide_overlay();
    let running = host.command_running();
    host.set_cancel_enabled(running);
    host.build_context_entries();
}

pub trait StatusHintHost {
    /// The hint the application is currently showing.
    fn application_hint(&mut self) -> String;

    /// Writes the status bar's hint panel.
    fn set_status_hint(&mut self, text: &str);
}

/// Implements Ghidra function `FUN_01ca12e0` at `0x01CA12E0`.
///
/// Handles `SchematicEditorEvents.OnHint`.
///
/// Copies the application's current hint into the status bar.
///
/// The hint is taken wholesale, so a control with a two-part hint shows its
/// long half here and its short half in the balloon.
pub fn hint_changed(host: &mut impl StatusHintHost) {
    let hint = host.application_hint();
    host.set_status_hint(&hint);
}

pub trait DeactivateHost {
    /// Reports whether the window that watches for deactivation exists.
    fn watcher_exists(&mut self) -> bool;

    /// Raises the watcher's flag.
    fn flag_watcher(&mut self);
}

/// Implements Ghidra function `FUN_01c9c260` at `0x01C9C260`.
///
/// Handles `SchematicEditor.OnDeactivate`.
///
/// Raises a flag on another window when the editor loses focus.
///
/// The flag is only ever set here, never cleared, so whatever reads it is what
/// clears it — the editor simply records that focus left it at least once.
pub fn editor_deactivated(host: &mut impl DeactivateHost) -> bool {
    if !host.watcher_exists() {
        return false;
    }
    host.flag_watcher();
    true
}

pub trait ScrollTimerHost {
    /// Stops the scroll timer.
    fn stop_timer(&mut self);

    /// Reports whether a command currently occupies the editor's command slot.
    fn command_running(&mut self) -> bool;

    /// The pointer position the editor last stored.
    fn stored_pointer(&mut self) -> (i32, i32);

    /// The modifier and button flags currently held.
    fn current_buttons(&mut self) -> u16;

    /// Re-runs the pointer tracking at one position.
    fn track_pointer(&mut self, buttons: u16, x: i32, y: i32);
}

/// Implements Ghidra function `FUN_01c9b070` at `0x01C9B070`.
///
/// Handles `ScrollTimer.OnTimer`.
///
/// Finishes an auto-scroll step.
///
/// The timer stops itself first, so the scroll is a single step rather than a
/// repeat. The tracking is then re-run at the *stored* pointer position rather
/// than the live one, which is what keeps a wire being dragged attached to
/// where the user left the pointer while the canvas scrolled underneath it.
///
/// With no command running there is nothing to re-track, so the timer just
/// stops.
pub fn scroll_timer_fired(host: &mut impl ScrollTimerHost) -> bool {
    host.stop_timer();

    if !host.command_running() {
        return false;
    }

    let buttons = host.current_buttons();
    let (x, y) = host.stored_pointer();
    host.track_pointer(buttons, x, y);
    true
}

#[cfg(test)]
mod tests {
    use super::*;

    const ALL_ANNOTATIONS: [ViewAnnotation; 6] = [
        ViewAnnotation::Labels,
        ViewAnnotation::WireIds,
        ViewAnnotation::NodeNumbers,
        ViewAnnotation::Units,
        ViewAnnotation::PackageNumbers,
        ViewAnnotation::Tolerance,
    ];

    #[derive(Debug, Default)]
    struct Annotations {
        on: Vec<ViewAnnotation>,
        repaints: usize,
    }

    impl ViewAnnotationHost for Annotations {
        fn annotation_enabled(&mut self, annotation: ViewAnnotation) -> bool {
            self.on.contains(&annotation)
        }

        fn set_annotation_enabled(&mut self, annotation: ViewAnnotation, enabled: bool) {
            self.on.retain(|held| *held != annotation);
            if enabled {
                self.on.push(annotation);
            }
        }

        fn repaint_canvas(&mut self) {
            self.repaints += 1;
        }
    }

    #[test]
    fn every_annotation_flips_independently_and_repaints() {
        let mut host = Annotations::default();

        for annotation in ALL_ANNOTATIONS {
            assert!(toggle_annotation(annotation, &mut host));
        }
        assert_eq!(host.on.len(), ALL_ANNOTATIONS.len());
        assert_eq!(host.repaints, ALL_ANNOTATIONS.len());

        assert!(!toggle_annotation(ViewAnnotation::WireIds, &mut host));
        assert!(!host.on.contains(&ViewAnnotation::WireIds));
        assert!(host.on.contains(&ViewAnnotation::Labels));
    }

    #[derive(Debug, Default)]
    struct Paired {
        menu: Vec<PairedOption>,
        popup_writes: Vec<(PairedOption, bool)>,
    }

    impl PairedOptionHost for Paired {
        fn menu_checked(&mut self, option: PairedOption) -> bool {
            self.menu.contains(&option)
        }

        fn set_menu_checked(&mut self, option: PairedOption, checked: bool) {
            self.menu.retain(|held| *held != option);
            if checked {
                self.menu.push(option);
            }
        }

        fn set_popup_checked(&mut self, option: PairedOption, checked: bool) {
            self.popup_writes.push((option, checked));
        }
    }

    #[test]
    fn the_popup_twin_mirrors_the_menu_entry() {
        let mut host = Paired::default();

        assert!(toggle_paired_option(PairedOption::AutoRepeat, &mut host));
        assert!(!toggle_paired_option(PairedOption::AutoRepeat, &mut host));
        assert!(toggle_paired_option(PairedOption::AutoRewire, &mut host));

        assert_eq!(
            host.popup_writes,
            [
                (PairedOption::AutoRepeat, true),
                (PairedOption::AutoRepeat, false),
                (PairedOption::AutoRewire, true),
            ]
        );
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum RunStep {
        Button(bool),
        Apply,
    }

    #[derive(Debug, Default)]
    struct Interactive {
        steps: Vec<RunStep>,
    }

    impl InteractiveRunHost for Interactive {
        fn set_interactive_button(&mut self, pressed: bool) {
            self.steps.push(RunStep::Button(pressed));
        }

        fn apply_interactive_state(&mut self) {
            self.steps.push(RunStep::Apply);
        }
    }

    #[test]
    fn start_and_stop_move_the_button_before_the_shared_command_reads_it() {
        let mut host = Interactive::default();

        set_interactive_running(true, &mut host);
        set_interactive_running(false, &mut host);

        assert_eq!(
            host.steps,
            [
                RunStep::Button(true),
                RunStep::Apply,
                RunStep::Button(false),
                RunStep::Apply,
            ]
        );
    }

    #[derive(Debug, Default)]
    struct Dimension {
        steps: Vec<RunStep>,
    }

    impl ThreeDViewHost for Dimension {
        fn set_three_d_button(&mut self, pressed: bool) {
            self.steps.push(RunStep::Button(pressed));
        }

        fn apply_view_dimension(&mut self) {
            self.steps.push(RunStep::Apply);
        }
    }

    #[test]
    fn the_two_view_entries_move_the_same_button() {
        let mut host = Dimension::default();

        set_three_d_view(true, &mut host);
        set_three_d_view(false, &mut host);

        assert_eq!(
            host.steps,
            [
                RunStep::Button(true),
                RunStep::Apply,
                RunStep::Button(false),
                RunStep::Apply,
            ]
        );
    }

    #[derive(Debug, Default)]
    struct Dock {
        states: Vec<bool>,
        widths: Vec<i32>,
    }

    impl DockPanelHost for Dock {
        fn set_dock_state(&mut self, state: bool) {
            self.states.push(state);
        }

        fn set_panel_width(&mut self, width: i32) {
            self.widths.push(width);
        }
    }

    #[test]
    fn docking_opens_the_panel_and_undocking_collapses_it() {
        let mut host = Dock::default();

        dock_panel_dropped(&mut host);
        dock_panel_undocked(&mut host);

        assert_eq!(host.states, [false, true]);
        assert_eq!(host.widths, [DOCKED_PANEL_WIDTH, UNDOCKED_PANEL_WIDTH]);
    }

    struct Site(bool);

    impl SiteInfoHost for Site {
        fn client_is_dockable(&mut self) -> bool {
            self.0
        }
    }

    #[test]
    fn only_the_dockable_class_may_dock() {
        assert!(can_dock(&mut Site(true)));
        assert!(!can_dock(&mut Site(false)));
    }

    #[derive(Debug, Default)]
    struct Lock {
        locked: bool,
        button: bool,
        fronts: usize,
        checks: Vec<bool>,
    }

    impl EditorLockHost for Lock {
        fn locked(&mut self) -> bool {
            self.locked
        }

        fn set_locked(&mut self, locked: bool) {
            self.locked = locked;
        }

        fn set_lock_button(&mut self, pressed: bool) {
            self.button = pressed;
        }

        fn lock_button_pressed(&mut self) -> bool {
            self.button
        }

        fn bring_to_front(&mut self) {
            self.fronts += 1;
        }

        fn set_menu_checked(&mut self, checked: bool) {
            self.checks.push(checked);
        }
    }

    #[test]
    fn the_lock_button_runs_opposite_the_lock_itself() {
        let mut host = Lock::default();

        assert!(toggle_editor_lock(&mut host));
        assert!(!host.button, "a locked editor pops the button out");
        assert_eq!(host.checks, [false]);

        assert!(!toggle_editor_lock(&mut host));
        assert!(host.button);
        assert_eq!(host.checks, [false, true]);
        assert_eq!(host.fronts, 2);
    }

    #[derive(Debug, Default)]
    struct PageWidth {
        open: bool,
        guard: bool,
        zooms: usize,
    }

    impl PageWidthHost for PageWidth {
        fn document_open(&mut self) -> bool {
            self.open
        }

        fn guard_checked(&mut self) -> bool {
            self.guard
        }

        fn zoom_to_extent(&mut self, _extent: ZoomExtent) {
            self.zooms += 1;
        }
    }

    #[test]
    fn page_width_needs_both_a_document_and_the_recovered_guard() {
        let mut ready = PageWidth {
            open: true,
            guard: true,
            ..PageWidth::default()
        };
        assert!(zoom_to_page_width(&mut ready));
        assert_eq!(ready.zooms, 1);

        for host in [
            &mut PageWidth {
                open: true,
                ..PageWidth::default()
            },
            &mut PageWidth {
                guard: true,
                ..PageWidth::default()
            },
        ] {
            assert!(!zoom_to_page_width(host));
            assert_eq!(host.zooms, 0);
        }
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum PopupStep {
        Overlay,
        Cancel(bool),
        Context,
    }

    #[derive(Debug, Default)]
    struct Popup {
        running: bool,
        steps: Vec<PopupStep>,
    }

    impl PopupMenuHost for Popup {
        fn hide_overlay(&mut self) {
            self.steps.push(PopupStep::Overlay);
        }

        fn command_running(&mut self) -> bool {
            self.running
        }

        fn set_cancel_enabled(&mut self, enabled: bool) {
            self.steps.push(PopupStep::Cancel(enabled));
        }

        fn build_context_entries(&mut self) {
            self.steps.push(PopupStep::Context);
        }
    }

    #[test]
    fn the_popup_offers_cancel_only_while_a_command_runs() {
        let mut idle = Popup::default();
        popup_opening(&mut idle);
        assert_eq!(
            idle.steps,
            [
                PopupStep::Overlay,
                PopupStep::Cancel(false),
                PopupStep::Context
            ]
        );

        let mut busy = Popup {
            running: true,
            ..Popup::default()
        };
        popup_opening(&mut busy);
        assert!(busy.steps.contains(&PopupStep::Cancel(true)));
    }

    #[derive(Debug, Default)]
    struct Hints {
        hint: String,
        written: Vec<String>,
    }

    impl StatusHintHost for Hints {
        fn application_hint(&mut self) -> String {
            self.hint.clone()
        }

        fn set_status_hint(&mut self, text: &str) {
            self.written.push(text.to_owned());
        }
    }

    #[test]
    fn the_hint_is_copied_whole() {
        let mut host = Hints {
            hint: "Zoom|Click: Zoom In".to_owned(),
            ..Hints::default()
        };

        hint_changed(&mut host);

        assert_eq!(host.written, ["Zoom|Click: Zoom In"]);
    }

    #[derive(Debug, Default)]
    struct Deactivate {
        exists: bool,
        flags: usize,
    }

    impl DeactivateHost for Deactivate {
        fn watcher_exists(&mut self) -> bool {
            self.exists
        }

        fn flag_watcher(&mut self) {
            self.flags += 1;
        }
    }

    #[test]
    fn deactivating_flags_the_watcher_when_it_exists() {
        let mut present = Deactivate {
            exists: true,
            ..Deactivate::default()
        };
        assert!(editor_deactivated(&mut present));
        assert_eq!(present.flags, 1);

        let mut absent = Deactivate::default();
        assert!(!editor_deactivated(&mut absent));
        assert_eq!(absent.flags, 0);
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum ScrollStep {
        Stop,
        Track(u16, i32, i32),
    }

    #[derive(Debug, Default)]
    struct Scroll {
        running: bool,
        steps: Vec<ScrollStep>,
    }

    impl ScrollTimerHost for Scroll {
        fn stop_timer(&mut self) {
            self.steps.push(ScrollStep::Stop);
        }

        fn command_running(&mut self) -> bool {
            self.running
        }

        fn stored_pointer(&mut self) -> (i32, i32) {
            (40, 90)
        }

        fn current_buttons(&mut self) -> u16 {
            0x0001
        }

        fn track_pointer(&mut self, buttons: u16, x: i32, y: i32) {
            self.steps.push(ScrollStep::Track(buttons, x, y));
        }
    }

    #[test]
    fn the_scroll_timer_re_tracks_at_the_stored_position() {
        let mut host = Scroll {
            running: true,
            ..Scroll::default()
        };

        assert!(scroll_timer_fired(&mut host));

        assert_eq!(
            host.steps,
            [ScrollStep::Stop, ScrollStep::Track(0x0001, 40, 90)]
        );
    }

    #[test]
    fn with_no_command_the_scroll_timer_only_stops() {
        let mut host = Scroll::default();

        assert!(!scroll_timer_fired(&mut host));

        assert_eq!(host.steps, [ScrollStep::Stop]);
    }
}

/// The settings whose menu entry carries its own check mark.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CheckedOption {
    /// `mnAnalysis.PowerDissipationCalculation`
    /// ("Power Dissipation Analysis Enabled").
    PowerDissipation,
    /// `mnAnalysis.StressReportEnabled` ("S&tress Analysis Enabled").
    StressReport,
    /// `mnAnalysis.EnableMCUCodedebugger` ("&Enable MCU Code debugger").
    McuCodeDebugger,
    /// `mnAnalysis.EnableHDLDebugger` ("Enable HDL Debugger").
    HdlDebugger,
    /// `View.mnShowDigitalNodeStates` ("Show Digital Node States").
    DigitalNodeStates,
}

pub trait CheckedOptionHost {
    /// Reports whether one option is switched on.
    fn option_enabled(&mut self, option: CheckedOption) -> bool;

    /// Switches one option on or off.
    fn set_option_enabled(&mut self, option: CheckedOption, enabled: bool);

    /// Writes the option's menu entry check mark.
    fn set_option_checked(&mut self, option: CheckedOption, checked: bool);
}

/// Implements Ghidra functions `FUN_01c94c60` at `0x01C94C60`, `FUN_01c9bed0`
/// at `0x01C9BED0`, `FUN_01c9c360` at `0x01C9C360`, `FUN_01ca3bd0` at
/// `0x01CA3BD0`, and `FUN_01ca3ae0` at `0x01CA3AE0`.
///
/// Flips one setting and updates its own check mark.
///
/// All five entries have the same three lines, and none of them repaints —
/// unlike the [`ViewAnnotation`] entries, these change what the next analysis
/// or debug session does rather than what the schematic looks like. The digital
/// node states entry sits in the View menu but behaves like the analysis ones.
///
/// Returns whether the option is now on.
pub fn toggle_checked_option(option: CheckedOption, host: &mut impl CheckedOptionHost) -> bool {
    let enabled = !host.option_enabled(option);
    host.set_option_enabled(option, enabled);
    host.set_option_checked(option, enabled);
    enabled
}

pub trait LabelValueHost {
    /// Reports whether component values are shown on labels.
    fn values_shown(&mut self) -> bool;

    fn set_values_shown(&mut self, shown: bool);

    /// Switches one of the two dependent annotations off.
    fn clear_annotation(&mut self, annotation: ViewAnnotation);

    /// Repaints the schematic canvas.
    fn repaint_canvas(&mut self);
}

/// Implements Ghidra function `FUN_01c8e8b0` at `0x01C8E8B0`.
///
/// Handles `MainMenu.View.mnAppendValueToLabel.OnClick` ("&Values").
///
/// Flips the value annotation, and drags the two that depend on it off with it.
///
/// Units and tolerances are appended to the value, so with values hidden there
/// is nothing for them to attach to — switching values off therefore switches
/// both of them off as well. Switching values back on leaves them off, so the
/// user re-enables whichever they want.
///
/// Returns whether values are now shown.
pub fn toggle_label_values(host: &mut impl LabelValueHost) -> bool {
    let shown = !host.values_shown();
    host.set_values_shown(shown);

    if !shown {
        host.clear_annotation(ViewAnnotation::Units);
        host.clear_annotation(ViewAnnotation::Tolerance);
    }

    host.repaint_canvas();
    shown
}

/// Implements Ghidra function `FUN_01c83f50` at `0x01C83F50`.
///
/// Handles `MainMenu.View.Zoom.WholePage.OnClick` ("Whole &Page").
///
/// Zooms so a whole page fits the canvas.
///
/// This is the page-width command with the vertical extent added, and it
/// carries the same recovered guard, so it is inert in exactly the same states.
///
/// Returns whether the zoom ran.
pub fn zoom_to_whole_page(host: &mut impl PageWidthHost) -> bool {
    zoom_to(ZoomExtent::WholePage, host)
}

/// The number of entries in the interactive-mode popup.
pub const INTERACTIVE_MODE_COUNT: u32 = 5;

pub trait InteractivePopupHost {
    /// The interactive mode currently selected.
    fn current_mode(&mut self) -> u32;

    /// Writes one popup entry's check mark.
    fn set_entry_checked(&mut self, index: u32, checked: bool);
}

/// Implements Ghidra function `FUN_01c89850` at `0x01C89850`.
///
/// Handles `PopupInteract.OnPopup`.
///
/// Ticks exactly the interactive mode that is selected.
///
/// Every entry is written on each open rather than only the two that changed,
/// which is what keeps the popup right after the mode was changed from the main
/// menu instead of from here.
pub fn interactive_popup_opening(host: &mut impl InteractivePopupHost) {
    let current = host.current_mode();
    for index in 0..INTERACTIVE_MODE_COUNT {
        host.set_entry_checked(index, index == current);
    }
}

pub trait SymbolDatabaseHost {
    /// Shows or clears the busy cursor.
    fn set_busy_cursor(&mut self, busy: bool);

    /// Discards the symbol database.
    fn release_symbol_database(&mut self);

    /// Reads the symbol database back in.
    fn reload_symbol_database(&mut self);

    /// Repaints the schematic canvas.
    fn repaint_canvas(&mut self);
}

/// Implements Ghidra function `FUN_01c8f290` at `0x01C8F290`.
///
/// Handles `MainMenu.mnTools.mnReReadSymbolDatabase.OnClick`
/// ("&Re-read symbol database").
///
/// Reloads the symbol database from disk.
///
/// The busy cursor is raised around the whole reload and dropped afterwards,
/// and the canvas is repainted last — the symbols the schematic draws with have
/// just been replaced underneath it.
pub fn reread_symbol_database(host: &mut impl SymbolDatabaseHost) {
    host.set_busy_cursor(true);
    host.release_symbol_database();
    host.reload_symbol_database();
    host.set_busy_cursor(false);
    host.repaint_canvas();
}

#[cfg(test)]
mod option_tests {
    use super::*;

    const ALL_OPTIONS: [CheckedOption; 5] = [
        CheckedOption::PowerDissipation,
        CheckedOption::StressReport,
        CheckedOption::McuCodeDebugger,
        CheckedOption::HdlDebugger,
        CheckedOption::DigitalNodeStates,
    ];

    #[derive(Debug, Default)]
    struct Options {
        on: Vec<CheckedOption>,
        checks: Vec<(CheckedOption, bool)>,
    }

    impl CheckedOptionHost for Options {
        fn option_enabled(&mut self, option: CheckedOption) -> bool {
            self.on.contains(&option)
        }

        fn set_option_enabled(&mut self, option: CheckedOption, enabled: bool) {
            self.on.retain(|held| *held != option);
            if enabled {
                self.on.push(option);
            }
        }

        fn set_option_checked(&mut self, option: CheckedOption, checked: bool) {
            self.checks.push((option, checked));
        }
    }

    #[test]
    fn every_option_flips_independently_and_writes_its_check_mark() {
        let mut host = Options::default();

        for option in ALL_OPTIONS {
            assert!(toggle_checked_option(option, &mut host));
        }
        assert_eq!(host.on.len(), ALL_OPTIONS.len());

        assert!(!toggle_checked_option(
            CheckedOption::StressReport,
            &mut host
        ));
        assert!(!host.on.contains(&CheckedOption::StressReport));
        assert!(host.on.contains(&CheckedOption::PowerDissipation));

        assert_eq!(
            host.checks.last(),
            Some(&(CheckedOption::StressReport, false))
        );
    }

    #[derive(Debug, Default)]
    struct Labels {
        shown: bool,
        cleared: Vec<ViewAnnotation>,
        repaints: usize,
    }

    impl LabelValueHost for Labels {
        fn values_shown(&mut self) -> bool {
            self.shown
        }

        fn set_values_shown(&mut self, shown: bool) {
            self.shown = shown;
        }

        fn clear_annotation(&mut self, annotation: ViewAnnotation) {
            self.cleared.push(annotation);
        }

        fn repaint_canvas(&mut self) {
            self.repaints += 1;
        }
    }

    #[test]
    fn switching_values_on_leaves_the_dependent_annotations_alone() {
        let mut host = Labels::default();

        assert!(toggle_label_values(&mut host));

        assert!(host.cleared.is_empty());
        assert_eq!(host.repaints, 1);
    }

    #[test]
    fn switching_values_off_drags_units_and_tolerance_off_with_it() {
        let mut host = Labels {
            shown: true,
            ..Labels::default()
        };

        assert!(!toggle_label_values(&mut host));

        assert_eq!(
            host.cleared,
            [ViewAnnotation::Units, ViewAnnotation::Tolerance]
        );
        assert_eq!(host.repaints, 1);
    }

    #[derive(Debug, Default)]
    struct Zoom {
        open: bool,
        guard: bool,
        extents: Vec<ZoomExtent>,
    }

    impl PageWidthHost for Zoom {
        fn document_open(&mut self) -> bool {
            self.open
        }

        fn guard_checked(&mut self) -> bool {
            self.guard
        }

        fn zoom_to_extent(&mut self, extent: ZoomExtent) {
            self.extents.push(extent);
        }
    }

    #[test]
    fn the_two_zoom_entries_differ_only_in_their_extent() {
        let mut host = Zoom {
            open: true,
            guard: true,
            ..Zoom::default()
        };

        assert!(zoom_to_page_width(&mut host));
        assert!(zoom_to_whole_page(&mut host));

        assert_eq!(host.extents, [ZoomExtent::PageWidth, ZoomExtent::WholePage]);
    }

    #[test]
    fn both_zoom_entries_carry_the_same_recovered_guard() {
        let mut host = Zoom {
            open: true,
            ..Zoom::default()
        };

        assert!(!zoom_to_page_width(&mut host));
        assert!(!zoom_to_whole_page(&mut host));
        assert!(host.extents.is_empty());
    }

    #[derive(Debug, Default)]
    struct Popup {
        mode: u32,
        checks: Vec<(u32, bool)>,
    }

    impl InteractivePopupHost for Popup {
        fn current_mode(&mut self) -> u32 {
            self.mode
        }

        fn set_entry_checked(&mut self, index: u32, checked: bool) {
            self.checks.push((index, checked));
        }
    }

    #[test]
    fn the_interactive_popup_writes_every_entry_each_time() {
        let mut host = Popup {
            mode: 2,
            ..Popup::default()
        };

        interactive_popup_opening(&mut host);

        assert_eq!(
            host.checks,
            [(0, false), (1, false), (2, true), (3, false), (4, false),]
        );
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum SymbolStep {
        Busy(bool),
        Release,
        Reload,
        Repaint,
    }

    #[derive(Debug, Default)]
    struct Symbols {
        steps: Vec<SymbolStep>,
    }

    impl SymbolDatabaseHost for Symbols {
        fn set_busy_cursor(&mut self, busy: bool) {
            self.steps.push(SymbolStep::Busy(busy));
        }

        fn release_symbol_database(&mut self) {
            self.steps.push(SymbolStep::Release);
        }

        fn reload_symbol_database(&mut self) {
            self.steps.push(SymbolStep::Reload);
        }

        fn repaint_canvas(&mut self) {
            self.steps.push(SymbolStep::Repaint);
        }
    }

    #[test]
    fn the_symbol_reload_raises_the_busy_cursor_around_the_whole_step() {
        let mut host = Symbols::default();

        reread_symbol_database(&mut host);

        assert_eq!(
            host.steps,
            [
                SymbolStep::Busy(true),
                SymbolStep::Release,
                SymbolStep::Reload,
                SymbolStep::Busy(false),
                SymbolStep::Repaint,
            ]
        );
    }
}
