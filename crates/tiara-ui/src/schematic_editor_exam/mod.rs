//! Iced state for the recovered Schematic Editor exam and fault manager.
//!
//! The exam panel and the fault manager sit inside the editor rather than in
//! their own window: the advisor steps through a list of hints, the task grid
//! opens one task at a time, and the fault tools arm the same command slot the
//! drawing tools use.

/// The form the recovered handlers belong to.
pub const FORM_RESOURCE: &str = "SchematicEditor";

/// The recovered "no version" value of the fault manager's version field.
pub const NO_VERSION: i32 = 0;

/// An opaque handle to a recovered editor interaction command.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct CommandHandle(pub u64);

/// The fault tools that arm a command instead of acting immediately.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum FaultTool {
    /// `ExamPanel...tsFault.sbERFaulty`, hinted "Select Faulty".
    ///
    /// Built from the exam command class with the recovered flag `1`.
    MarkFaulty,
    /// `ExamPanel...tsFault.sbERReplace`, hinted "Replace".
    ///
    /// The same class with the flag `0`.
    Replace,
    /// `FaultManager...FaultPanel.sbInsertFault`, hinted "Insert Fault".
    ///
    /// Built from the fault command class with the recovered flag `1`.
    InsertFault,
    /// `FaultManager...FaultPanel.sbRevert`, hinted "Revert to Original".
    ///
    /// The same class with the flag `0`.
    RevertToOriginal,
}

pub trait FaultToolHost {
    /// Cancels the running command and returns to the editing tool.
    fn cancel_active_command(&mut self);

    /// Constructs the command belonging to one fault tool.
    fn construct_command(&mut self, tool: FaultTool) -> CommandHandle;

    /// Installs a command in the editor's command slot.
    fn install_command(&mut self, command: CommandHandle);
}

/// Implements Ghidra functions `FUN_01c7ccf0` at `0x01C7CCF0`, `FUN_01c7cd30`
/// at `0x01C7CD30`, `FUN_01c7daa0` at `0x01C7DAA0`, and `FUN_01c7db50` at
/// `0x01C7DB50`.
///
/// Arms one of the four fault tools.
///
/// All four have the same shape and differ only in the command they build, so
/// they share one flow. Each cancels whatever was running first — unlike the
/// drawing tools, which let the install do the cancelling — so the tool bar
/// shows the editing tool while a fault tool is armed.
///
/// None of them runs the editor's edit guard, because marking a component
/// faulty is part of the exam rather than an edit to the circuit.
pub fn arm_fault_tool(tool: FaultTool, host: &mut impl FaultToolHost) {
    host.cancel_active_command();
    let command = host.construct_command(tool);
    host.install_command(command);
}

/// The two advisor lists that step through their hints.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Advisor {
    /// `ExamPanel.ExamMainPages.tsAdvisor`, whose Previous button also checks
    /// that the advisor is switched on.
    ExamPanel,
    /// `FaultManager.nbExMan.tsExManAdvisor`, whose buttons do not.
    FaultManager,
}

pub trait AdvisorHost {
    /// Reports whether the exam panel's advisor is switched on.
    fn advisor_enabled(&mut self) -> bool;

    /// The index of the advice currently shown.
    fn advice_index(&mut self) -> i32;

    /// The number of pieces of advice.
    fn advice_count(&mut self) -> i32;

    /// Moves to one piece of advice and shows it.
    fn show_advice(&mut self, advisor: Advisor, index: i32);
}

/// Implements Ghidra functions `FUN_01c7cad0` at `0x01C7CAD0` and
/// `FUN_01c7de60` at `0x01C7DE60`.
///
/// Steps one advisor back by one piece of advice.
///
/// Both buttons share the same index, so stepping back in one list moves the
/// other too. They differ only in their guard: the exam panel's button also
/// requires the advisor to be switched on, while the fault manager's does not.
///
/// Neither wraps around, so the first piece of advice is where stepping back
/// stops.
///
/// Returns whether the advisor moved.
pub fn previous_advice(advisor: Advisor, host: &mut impl AdvisorHost) -> bool {
    if advisor == Advisor::ExamPanel && !host.advisor_enabled() {
        return false;
    }

    let index = host.advice_index();
    if index <= 0 {
        return false;
    }

    host.show_advice(advisor, index - 1);
    true
}

/// Implements Ghidra function `FUN_01c7e260` at `0x01C7E260`.
///
/// Handles `FaultManager.nbExMan.tsExManAdvisor.GroupBox6.sbEMAdvNext.OnClick`
/// (hinted "Move to next advice").
///
/// Steps the fault manager's advisor forward by one.
///
/// The stop is the last piece of advice rather than one past it, and the count
/// is read fresh each time, so advice added while the panel is open becomes
/// reachable without reopening it.
///
/// Returns whether the advisor moved.
pub fn next_advice(host: &mut impl AdvisorHost) -> bool {
    let index = host.advice_index();
    if index >= host.advice_count() - 1 {
        return false;
    }

    host.show_advice(Advisor::FaultManager, index + 1);
    true
}

pub trait ExamManagerHost {
    /// The check state of the `mnFaultManager` menu entry.
    fn menu_checked(&mut self) -> bool;

    /// Writes the menu entry's check mark.
    fn set_menu_checked(&mut self, checked: bool);

    /// Shows or hides the exam manager panel.
    fn set_panel_visible(&mut self, visible: bool);
}

/// Implements Ghidra function `FUN_01c7cef0` at `0x01C7CEF0`.
///
/// Handles `MainMenu.View.mnFaultManager.OnClick` ("&Exam Manager").
///
/// Shows or hides the exam manager panel.
///
/// The menu entry's own check mark is the state: it is flipped first and the
/// panel then follows it, so the two can never disagree.
///
/// Returns whether the panel is now shown.
pub fn toggle_exam_manager(host: &mut impl ExamManagerHost) -> bool {
    let visible = !host.menu_checked();
    host.set_menu_checked(visible);
    host.set_panel_visible(visible);
    visible
}

pub trait TaskGridHost {
    /// The row the grid has selected.
    fn selected_row(&mut self) -> i32;

    /// The task the panel is currently showing.
    fn open_task(&mut self) -> i32;

    /// Opens one task.
    fn open(&mut self, row: i32);
}

/// Implements Ghidra function `FUN_01c7c850` at `0x01C7C850`.
///
/// Handles `ExamPanel.gbTasks.TasksGrid.OnDblClick` and
/// `FaultManager...SelGrid.OnDblClick`.
///
/// Opens the task the user double-clicked.
///
/// Double-clicking the task that is already open does nothing, which is what
/// keeps a half-answered task from being reset by a stray double-click.
///
/// Returns whether a different task was opened.
pub fn task_grid_double_clicked(host: &mut impl TaskGridHost) -> bool {
    let row = host.selected_row();
    if row == host.open_task() {
        return false;
    }

    host.open(row);
    true
}

pub trait CircuitVersionHost {
    /// The version the combo box has selected.
    fn selected_version(&mut self) -> i32;

    /// The version the fault manager is working on.
    fn current_version(&mut self) -> i32;

    /// Shows one version of the circuit.
    fn show_version(&mut self, version: i32);

    /// Deletes one version of the circuit.
    fn delete_version(&mut self, version: i32);
}

/// Implements Ghidra function `FUN_01c7da30` at `0x01C7DA30`.
///
/// Handles `FaultManager.GroupBox4.cbCircuit.OnChange` (hinted "Select the
/// circuit version you want to insert faults into").
///
/// Shows whichever circuit version the combo box now names.
pub fn circuit_version_changed(host: &mut impl CircuitVersionHost) {
    let version = host.selected_version();
    host.show_version(version);
}

/// Implements Ghidra function `FUN_01c7da60` at `0x01C7DA60`.
///
/// Handles `FaultManager.GroupBox4.FaultPanel.sbDelVersion.OnClick` (hinted
/// "Deletes the current version of the circuit").
///
/// Deletes the circuit version currently being worked on and falls back to the
/// original.
///
/// The original itself cannot be deleted: version zero is the guard, so the
/// button is inert while the original is showing rather than destroying the
/// circuit it was derived from.
///
/// Returns whether a version was deleted.
pub fn delete_circuit_version(host: &mut impl CircuitVersionHost) -> bool {
    let version = host.current_version();
    if version == NO_VERSION {
        return false;
    }

    host.delete_version(version);
    host.show_version(NO_VERSION);
    true
}

/// The width the recovered handlers give a newly selected page.
pub const ACTIVE_PAGE_WIDTH: i32 = 0x96;

/// The three page controls inside the exam and fault manager panels.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ExamPageControl {
    /// `ExamPanel.ExamMainPages`.
    ExamMain,
    /// `ExamPanel...GroupBox2.SolPages`.
    Solution,
    /// `FaultManager.nbExMan`.
    FaultManager,
}

pub trait ExamPageHost {
    /// Sets the width of the page that has just become active.
    fn set_active_page_width(&mut self, control: ExamPageControl, width: i32);
}

/// Implements Ghidra functions `FUN_01ca2090` at `0x01CA2090`, `FUN_01ca20c0`
/// at `0x01CA20C0`, and `FUN_01ca20f0` at `0x01CA20F0`.
///
/// Gives the newly selected page its fixed width.
///
/// All three page controls do the same one thing on a page change, and the
/// width is a literal rather than a measurement — the panels are sized for this
/// number regardless of what the page holds.
pub fn exam_page_changed(control: ExamPageControl, host: &mut impl ExamPageHost) {
    host.set_active_page_width(control, ACTIVE_PAGE_WIDTH);
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum ToolStep {
        Cancel,
        Construct(FaultTool),
        Install(CommandHandle),
    }

    #[derive(Debug, Default)]
    struct Tools {
        steps: Vec<ToolStep>,
    }

    impl FaultToolHost for Tools {
        fn cancel_active_command(&mut self) {
            self.steps.push(ToolStep::Cancel);
        }

        fn construct_command(&mut self, tool: FaultTool) -> CommandHandle {
            self.steps.push(ToolStep::Construct(tool));
            CommandHandle(1)
        }

        fn install_command(&mut self, command: CommandHandle) {
            self.steps.push(ToolStep::Install(command));
        }
    }

    #[test]
    fn every_fault_tool_cancels_first_then_arms_its_own_command() {
        for tool in [
            FaultTool::MarkFaulty,
            FaultTool::Replace,
            FaultTool::InsertFault,
            FaultTool::RevertToOriginal,
        ] {
            let mut host = Tools::default();

            arm_fault_tool(tool, &mut host);

            assert_eq!(
                host.steps,
                [
                    ToolStep::Cancel,
                    ToolStep::Construct(tool),
                    ToolStep::Install(CommandHandle(1)),
                ]
            );
        }
    }

    #[derive(Debug, Default)]
    struct Advice {
        enabled: bool,
        index: i32,
        count: i32,
        shown: Vec<(Advisor, i32)>,
    }

    impl AdvisorHost for Advice {
        fn advisor_enabled(&mut self) -> bool {
            self.enabled
        }

        fn advice_index(&mut self) -> i32 {
            self.index
        }

        fn advice_count(&mut self) -> i32 {
            self.count
        }

        fn show_advice(&mut self, advisor: Advisor, index: i32) {
            self.index = index;
            self.shown.push((advisor, index));
        }
    }

    #[test]
    fn stepping_back_stops_at_the_first_piece_of_advice() {
        let mut host = Advice {
            enabled: true,
            index: 1,
            count: 4,
            ..Advice::default()
        };

        assert!(previous_advice(Advisor::FaultManager, &mut host));
        assert!(!previous_advice(Advisor::FaultManager, &mut host));

        assert_eq!(host.shown, [(Advisor::FaultManager, 0)]);
    }

    #[test]
    fn the_exam_panel_button_also_needs_the_advisor_switched_on() {
        let mut off = Advice {
            index: 2,
            count: 4,
            ..Advice::default()
        };
        assert!(!previous_advice(Advisor::ExamPanel, &mut off));
        assert!(off.shown.is_empty());

        let mut on = Advice {
            enabled: true,
            index: 2,
            count: 4,
            ..Advice::default()
        };
        assert!(previous_advice(Advisor::ExamPanel, &mut on));
        assert_eq!(on.shown, [(Advisor::ExamPanel, 1)]);
    }

    #[test]
    fn the_fault_manager_button_ignores_the_advisor_switch() {
        let mut host = Advice {
            index: 2,
            count: 4,
            ..Advice::default()
        };

        assert!(previous_advice(Advisor::FaultManager, &mut host));
    }

    #[test]
    fn stepping_forward_stops_on_the_last_piece_of_advice() {
        let mut host = Advice {
            index: 2,
            count: 4,
            ..Advice::default()
        };

        assert!(next_advice(&mut host));
        assert!(!next_advice(&mut host));

        assert_eq!(host.shown, [(Advisor::FaultManager, 3)]);
    }

    #[test]
    fn an_empty_advisor_never_moves() {
        let mut host = Advice::default();

        assert!(!next_advice(&mut host));
        assert!(!previous_advice(Advisor::FaultManager, &mut host));
    }

    #[derive(Debug, Default)]
    struct ExamManager {
        checked: bool,
        visible: Vec<bool>,
    }

    impl ExamManagerHost for ExamManager {
        fn menu_checked(&mut self) -> bool {
            self.checked
        }

        fn set_menu_checked(&mut self, checked: bool) {
            self.checked = checked;
        }

        fn set_panel_visible(&mut self, visible: bool) {
            self.visible.push(visible);
        }
    }

    #[test]
    fn the_panel_follows_the_menu_check_mark() {
        let mut host = ExamManager::default();

        assert!(toggle_exam_manager(&mut host));
        assert!(!toggle_exam_manager(&mut host));

        assert_eq!(host.visible, [true, false]);
        assert!(!host.checked);
    }

    #[derive(Debug, Default)]
    struct Tasks {
        selected: i32,
        open: i32,
        opened: Vec<i32>,
    }

    impl TaskGridHost for Tasks {
        fn selected_row(&mut self) -> i32 {
            self.selected
        }

        fn open_task(&mut self) -> i32 {
            self.open
        }

        fn open(&mut self, row: i32) {
            self.open = row;
            self.opened.push(row);
        }
    }

    #[test]
    fn double_clicking_a_different_task_opens_it() {
        let mut host = Tasks {
            selected: 3,
            ..Tasks::default()
        };

        assert!(task_grid_double_clicked(&mut host));

        assert_eq!(host.opened, [3]);
    }

    #[test]
    fn double_clicking_the_open_task_leaves_it_alone() {
        let mut host = Tasks {
            selected: 3,
            open: 3,
            ..Tasks::default()
        };

        assert!(!task_grid_double_clicked(&mut host));

        assert!(host.opened.is_empty());
    }

    #[derive(Debug, Default)]
    struct Versions {
        selected: i32,
        current: i32,
        shown: Vec<i32>,
        deleted: Vec<i32>,
    }

    impl CircuitVersionHost for Versions {
        fn selected_version(&mut self) -> i32 {
            self.selected
        }

        fn current_version(&mut self) -> i32 {
            self.current
        }

        fn show_version(&mut self, version: i32) {
            self.current = version;
            self.shown.push(version);
        }

        fn delete_version(&mut self, version: i32) {
            self.deleted.push(version);
        }
    }

    #[test]
    fn choosing_a_version_shows_it() {
        let mut host = Versions {
            selected: 2,
            ..Versions::default()
        };

        circuit_version_changed(&mut host);

        assert_eq!(host.shown, [2]);
    }

    #[test]
    fn deleting_a_version_falls_back_to_the_original() {
        let mut host = Versions {
            current: 2,
            ..Versions::default()
        };

        assert!(delete_circuit_version(&mut host));

        assert_eq!(host.deleted, [2]);
        assert_eq!(host.shown, [NO_VERSION]);
    }

    #[test]
    fn the_original_cannot_be_deleted() {
        let mut host = Versions::default();

        assert!(!delete_circuit_version(&mut host));

        assert!(host.deleted.is_empty());
        assert!(host.shown.is_empty());
    }
}

#[cfg(test)]
mod page_tests {
    use super::*;

    #[derive(Debug, Default)]
    struct Pages {
        widths: Vec<(ExamPageControl, i32)>,
    }

    impl ExamPageHost for Pages {
        fn set_active_page_width(&mut self, control: ExamPageControl, width: i32) {
            self.widths.push((control, width));
        }
    }

    #[test]
    fn every_page_control_sets_the_same_fixed_width() {
        let mut host = Pages::default();

        for control in [
            ExamPageControl::ExamMain,
            ExamPageControl::Solution,
            ExamPageControl::FaultManager,
        ] {
            exam_page_changed(control, &mut host);
        }

        assert_eq!(
            host.widths,
            [
                (ExamPageControl::ExamMain, ACTIVE_PAGE_WIDTH),
                (ExamPageControl::Solution, ACTIVE_PAGE_WIDTH),
                (ExamPageControl::FaultManager, ACTIVE_PAGE_WIDTH),
            ]
        );
        assert_eq!(ACTIVE_PAGE_WIDTH, 150);
    }
}

pub trait ExamListHost {
    /// The row the selection list has selected, or `None` when it has none.
    fn selected_row(&mut self) -> Option<i32>;

    /// The number of rows in the list.
    fn row_count(&mut self) -> i32;

    /// Removes one row.
    fn remove_row(&mut self, row: i32);
}

/// Implements Ghidra function `FUN_01c7d440` at `0x01C7D440`.
///
/// Handles `FaultManager.nbExMan.tsExManSelection.GroupBox5.SelDelBtn.OnClick`
/// ("Delete").
///
/// Removes the selected entry from the exam's selection list.
///
/// The row index is checked against the list's current length rather than
/// trusted, so a stale selection left over from a shorter list deletes nothing
/// instead of the wrong entry.
///
/// Returns whether a row was removed.
pub fn delete_exam_selection(host: &mut impl ExamListHost) -> bool {
    let Some(row) = host.selected_row() else {
        return false;
    };
    if row < 0 || row >= host.row_count() {
        return false;
    }

    host.remove_row(row);
    true
}

pub trait AdviceListHost {
    /// The index of the advice currently shown.
    fn advice_index(&mut self) -> i32;

    /// The number of pieces of advice.
    fn advice_count(&mut self) -> i32;

    /// Removes one piece of advice.
    fn remove_advice(&mut self, index: i32);

    /// Moves to one piece of advice and shows it.
    fn show_advice(&mut self, index: i32);
}

/// Implements Ghidra function `FUN_01c7e1f0` at `0x01C7E1F0`.
///
/// Handles `FaultManager.nbExMan.tsExManAdvisor.GroupBox6.sbEMAdvDelete.OnClick`
/// (hinted "Delete current advice").
///
/// Removes the advice currently shown and stays on a valid one.
///
/// Deleting the last piece would otherwise leave the index pointing past the
/// end, so it is clamped back — which is why deleting from the end walks
/// backwards through the list rather than stopping.
///
/// Returns whether a piece of advice was removed.
pub fn delete_advice(host: &mut impl AdviceListHost) -> bool {
    let index = host.advice_index();
    if index < 0 || index >= host.advice_count() {
        return false;
    }

    host.remove_advice(index);

    let last = host.advice_count() - 1;
    let shown = if last < index { last } else { index };
    host.show_advice(shown);
    true
}

pub trait RevertAllHost {
    /// The number of objects in the document.
    fn object_count(&mut self) -> i32;

    /// Reverts one object to its original.
    fn revert_object(&mut self, index: i32);
}

/// Implements Ghidra function `FUN_01c7de00` at `0x01C7DE00`.
///
/// Handles `FaultManager.GroupBox4.FaultPanel.sbRevertAll.OnClick` (hinted
/// "Reverts all faults").
///
/// Reverts every object in the document to its original.
///
/// The recovered handler walks the whole document rather than a list of faulty
/// parts, and asks for no confirmation — every object is visited whether or not
/// it carries a fault.
///
/// Returns how many objects were visited.
pub fn revert_all_faults(host: &mut impl RevertAllHost) -> i32 {
    let count = host.object_count();
    for index in 0..count {
        host.revert_object(index);
    }
    count
}

#[cfg(test)]
mod list_tests {
    use super::*;

    #[derive(Debug, Default)]
    struct Selections {
        selected: Option<i32>,
        rows: i32,
        removed: Vec<i32>,
    }

    impl ExamListHost for Selections {
        fn selected_row(&mut self) -> Option<i32> {
            self.selected
        }

        fn row_count(&mut self) -> i32 {
            self.rows
        }

        fn remove_row(&mut self, row: i32) {
            self.rows -= 1;
            self.removed.push(row);
        }
    }

    #[test]
    fn deleting_removes_the_selected_row() {
        let mut host = Selections {
            selected: Some(1),
            rows: 3,
            ..Selections::default()
        };

        assert!(delete_exam_selection(&mut host));

        assert_eq!(host.removed, [1]);
    }

    #[test]
    fn a_stale_selection_deletes_nothing() {
        let mut host = Selections {
            selected: Some(7),
            rows: 3,
            ..Selections::default()
        };

        assert!(!delete_exam_selection(&mut host));
        assert!(host.removed.is_empty());
    }

    #[test]
    fn an_empty_selection_deletes_nothing() {
        let mut host = Selections {
            rows: 3,
            ..Selections::default()
        };

        assert!(!delete_exam_selection(&mut host));
        assert!(host.removed.is_empty());
    }

    #[derive(Debug, Default)]
    struct Advice {
        index: i32,
        count: i32,
        removed: Vec<i32>,
        shown: Vec<i32>,
    }

    impl AdviceListHost for Advice {
        fn advice_index(&mut self) -> i32 {
            self.index
        }

        fn advice_count(&mut self) -> i32 {
            self.count
        }

        fn remove_advice(&mut self, index: i32) {
            self.count -= 1;
            self.removed.push(index);
        }

        fn show_advice(&mut self, index: i32) {
            self.index = index;
            self.shown.push(index);
        }
    }

    #[test]
    fn deleting_from_the_middle_stays_on_the_same_index() {
        let mut host = Advice {
            index: 1,
            count: 4,
            ..Advice::default()
        };

        assert!(delete_advice(&mut host));

        assert_eq!(host.removed, [1]);
        assert_eq!(host.shown, [1]);
    }

    #[test]
    fn deleting_the_last_piece_walks_backwards() {
        let mut host = Advice {
            index: 3,
            count: 4,
            ..Advice::default()
        };

        assert!(delete_advice(&mut host));

        assert_eq!(host.shown, [2]);
    }

    #[test]
    fn deleting_the_only_piece_leaves_an_empty_list() {
        let mut host = Advice {
            count: 1,
            ..Advice::default()
        };

        assert!(delete_advice(&mut host));

        assert_eq!(host.shown, [-1]);
    }

    #[test]
    fn an_empty_advisor_deletes_nothing() {
        let mut host = Advice::default();

        assert!(!delete_advice(&mut host));
        assert!(host.removed.is_empty());
    }

    #[derive(Debug, Default)]
    struct Revert {
        count: i32,
        reverted: Vec<i32>,
    }

    impl RevertAllHost for Revert {
        fn object_count(&mut self) -> i32 {
            self.count
        }

        fn revert_object(&mut self, index: i32) {
            self.reverted.push(index);
        }
    }

    #[test]
    fn reverting_all_visits_every_object() {
        let mut host = Revert {
            count: 3,
            ..Revert::default()
        };

        assert_eq!(revert_all_faults(&mut host), 3);

        assert_eq!(host.reverted, [0, 1, 2]);
    }

    #[test]
    fn reverting_an_empty_document_visits_nothing() {
        let mut host = Revert::default();

        assert_eq!(revert_all_faults(&mut host), 0);
        assert!(host.reverted.is_empty());
    }
}

pub trait SelectionDialogHost {
    /// Runs the add-selection dialog with its fields cleared, returning the
    /// kind and text the user entered.
    fn show_add_dialog(&mut self) -> Option<(i32, String)>;

    /// Adds one selection entry.
    fn add_entry(&mut self, kind: i32, text: &str);

    /// Refreshes the selection panel.
    fn refresh(&mut self);
}

/// Implements Ghidra function `FUN_01c7d310` at `0x01C7D310`.
///
/// Handles `FaultManager.nbExMan.tsExManSelection.GroupBox5.SelAddBtn.OnClick`
/// ("Add...").
///
/// Adds an entry to the exam's selection list.
///
/// The dialog's combo box and edit field are cleared before it opens rather
/// than left as the last entry left them, so every entry is typed fresh.
///
/// Returns whether an entry was added.
pub fn add_exam_selection(host: &mut impl SelectionDialogHost) -> bool {
    let Some((kind, text)) = host.show_add_dialog() else {
        return false;
    };

    host.add_entry(kind, &text);
    host.refresh();
    true
}

pub trait FaultMappingHost {
    /// The hardware mapping the fault currently carries.
    fn current_mapping(&mut self) -> i32;

    /// Runs the mapping dialog seeded with one value, returning the new one.
    fn show_mapping_dialog(&mut self, current: i32) -> Option<i32>;

    /// Writes the new mapping.
    fn set_mapping(&mut self, mapping: i32);

    /// Refreshes the fault panel.
    fn refresh(&mut self);
}

/// Implements Ghidra function `FUN_01c7d670` at `0x01C7D670`.
///
/// Handles `FaultManager.GroupBox4.FaultPanel.MapFaultBtn.OnClick`
/// ("Map to hardware...").
///
/// Points the current fault at a hardware channel.
///
/// The dialog is seeded with the mapping already in place, so reopening it
/// shows what is configured rather than starting blank.
///
/// Returns whether the mapping changed.
pub fn map_fault_to_hardware(host: &mut impl FaultMappingHost) -> bool {
    let current = host.current_mapping();

    let Some(mapping) = host.show_mapping_dialog(current) else {
        return false;
    };

    host.set_mapping(mapping);
    host.refresh();
    true
}

/// What the advice editor is opened for.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AdviceEdit {
    /// `sbEMAdvEdit` (hinted "Edit this advice").
    Edit,
    /// `sbEMAdvInsert` (hinted "Insert a new advice before the current
    /// advice").
    InsertBefore,
    /// `sbEMAdvAdd` (hinted "Add a new advice to the end").
    Append,
}

/// An opaque handle to a recovered advice record.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct AdviceHandle(pub u64);

pub trait AdviceEditHost {
    /// The index of the advice currently shown.
    fn advice_index(&mut self) -> i32;

    /// The number of pieces of advice.
    fn advice_count(&mut self) -> i32;

    /// The advice at one index.
    fn advice_at(&mut self, index: i32) -> AdviceHandle;

    /// Creates an empty advice record.
    fn create_advice(&mut self) -> AdviceHandle;

    /// Runs the editor on one record, numbered from one.
    fn show_editor(&mut self, number: i32, advice: AdviceHandle) -> bool;

    /// Writes the editor's contents back into the record.
    fn commit_editor(&mut self, advice: AdviceHandle);

    /// Inserts a record before one index.
    fn insert_advice(&mut self, index: i32, advice: AdviceHandle);

    /// Appends a record and returns its index.
    fn append_advice(&mut self, advice: AdviceHandle) -> i32;

    /// Destroys a record the editor rejected.
    fn destroy_advice(&mut self, advice: AdviceHandle);

    /// Moves to one piece of advice and shows it.
    fn show_advice(&mut self, index: i32);

    /// Refreshes the advisor panel.
    fn refresh(&mut self);
}

/// Implements Ghidra functions `FUN_01c7de90` at `0x01C7DE90`, `FUN_01c7df90`
/// at `0x01C7DF90`, and `FUN_01c7e0d0` at `0x01C7E0D0`.
///
/// Opens the advice editor to change, insert, or append one piece of advice.
///
/// All three show the same editor with a one-based number in its caption, and
/// differ only in what they hand it and what they do with the result.
///
/// The two that create a record destroy it again when the editor is cancelled,
/// so a cancelled insert leaves no orphan behind — unlike the edit case, which
/// has nothing of its own to clean up.
///
/// Editing and inserting both require a valid current index; appending does
/// not, which is how the first piece of advice gets written.
///
/// Returns whether the list changed.
pub fn edit_advice(edit: AdviceEdit, host: &mut impl AdviceEditHost) -> bool {
    let index = host.advice_index();

    if edit != AdviceEdit::Append && (index < 0 || index >= host.advice_count()) {
        return false;
    }

    let advice = match edit {
        AdviceEdit::Edit => host.advice_at(index),
        AdviceEdit::InsertBefore | AdviceEdit::Append => host.create_advice(),
    };

    let number = match edit {
        AdviceEdit::Edit | AdviceEdit::InsertBefore => index + 1,
        AdviceEdit::Append => host.advice_count() + 1,
    };

    if !host.show_editor(number, advice) {
        if edit != AdviceEdit::Edit {
            host.destroy_advice(advice);
        }
        return false;
    }

    host.commit_editor(advice);

    match edit {
        AdviceEdit::Edit => {}
        AdviceEdit::InsertBefore => host.insert_advice(index, advice),
        AdviceEdit::Append => {
            let appended = host.append_advice(advice);
            host.show_advice(appended);
        }
    }

    host.refresh();
    true
}

#[cfg(test)]
mod dialog_tests {
    use super::*;

    #[derive(Debug, Default)]
    struct Selections {
        entered: Option<(i32, String)>,
        added: Vec<(i32, String)>,
        refreshes: usize,
    }

    impl SelectionDialogHost for Selections {
        fn show_add_dialog(&mut self) -> Option<(i32, String)> {
            self.entered.clone()
        }

        fn add_entry(&mut self, kind: i32, text: &str) {
            self.added.push((kind, text.to_owned()));
        }

        fn refresh(&mut self) {
            self.refreshes += 1;
        }
    }

    #[test]
    fn an_accepted_dialog_adds_its_entry() {
        let mut host = Selections {
            entered: Some((2, "R1".to_owned())),
            ..Selections::default()
        };

        assert!(add_exam_selection(&mut host));

        assert_eq!(host.added, [(2, "R1".to_owned())]);
        assert_eq!(host.refreshes, 1);
    }

    #[test]
    fn a_cancelled_dialog_adds_nothing() {
        let mut host = Selections::default();

        assert!(!add_exam_selection(&mut host));
        assert!(host.added.is_empty());
    }

    #[derive(Debug, Default)]
    struct Mapping {
        current: i32,
        chosen: Option<i32>,
        seeds: Vec<i32>,
        written: Vec<i32>,
    }

    impl FaultMappingHost for Mapping {
        fn current_mapping(&mut self) -> i32 {
            self.current
        }

        fn show_mapping_dialog(&mut self, current: i32) -> Option<i32> {
            self.seeds.push(current);
            self.chosen
        }

        fn set_mapping(&mut self, mapping: i32) {
            self.written.push(mapping);
        }

        fn refresh(&mut self) {}
    }

    #[test]
    fn the_mapping_dialog_is_seeded_with_what_is_configured() {
        let mut host = Mapping {
            current: 3,
            chosen: Some(5),
            ..Mapping::default()
        };

        assert!(map_fault_to_hardware(&mut host));

        assert_eq!(host.seeds, [3]);
        assert_eq!(host.written, [5]);
    }

    #[test]
    fn a_cancelled_mapping_dialog_changes_nothing() {
        let mut host = Mapping {
            current: 3,
            ..Mapping::default()
        };

        assert!(!map_fault_to_hardware(&mut host));
        assert!(host.written.is_empty());
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum AdviceStep {
        Create,
        Editor(i32),
        Commit,
        Insert(i32),
        Append,
        Show(i32),
        Destroy,
        Refresh,
    }

    #[derive(Debug, Default)]
    struct Editor {
        index: i32,
        count: i32,
        accept: bool,
        steps: Vec<AdviceStep>,
    }

    impl AdviceEditHost for Editor {
        fn advice_index(&mut self) -> i32 {
            self.index
        }

        fn advice_count(&mut self) -> i32 {
            self.count
        }

        fn advice_at(&mut self, index: i32) -> AdviceHandle {
            AdviceHandle(u64::try_from(index).unwrap_or_default())
        }

        fn create_advice(&mut self) -> AdviceHandle {
            self.steps.push(AdviceStep::Create);
            AdviceHandle(99)
        }

        fn show_editor(&mut self, number: i32, _advice: AdviceHandle) -> bool {
            self.steps.push(AdviceStep::Editor(number));
            self.accept
        }

        fn commit_editor(&mut self, _advice: AdviceHandle) {
            self.steps.push(AdviceStep::Commit);
        }

        fn insert_advice(&mut self, index: i32, _advice: AdviceHandle) {
            self.steps.push(AdviceStep::Insert(index));
        }

        fn append_advice(&mut self, _advice: AdviceHandle) -> i32 {
            self.steps.push(AdviceStep::Append);
            self.count
        }

        fn destroy_advice(&mut self, _advice: AdviceHandle) {
            self.steps.push(AdviceStep::Destroy);
        }

        fn show_advice(&mut self, index: i32) {
            self.steps.push(AdviceStep::Show(index));
        }

        fn refresh(&mut self) {
            self.steps.push(AdviceStep::Refresh);
        }
    }

    #[test]
    fn editing_numbers_the_advice_from_one() {
        let mut host = Editor {
            index: 2,
            count: 4,
            accept: true,
            ..Editor::default()
        };

        assert!(edit_advice(AdviceEdit::Edit, &mut host));

        assert_eq!(
            host.steps,
            [
                AdviceStep::Editor(3),
                AdviceStep::Commit,
                AdviceStep::Refresh
            ]
        );
    }

    #[test]
    fn a_cancelled_insert_destroys_the_record_it_made() {
        let mut host = Editor {
            index: 1,
            count: 4,
            ..Editor::default()
        };

        assert!(!edit_advice(AdviceEdit::InsertBefore, &mut host));

        assert_eq!(
            host.steps,
            [
                AdviceStep::Create,
                AdviceStep::Editor(2),
                AdviceStep::Destroy
            ]
        );
    }

    #[test]
    fn a_cancelled_edit_has_nothing_to_clean_up() {
        let mut host = Editor {
            index: 1,
            count: 4,
            ..Editor::default()
        };

        assert!(!edit_advice(AdviceEdit::Edit, &mut host));

        assert_eq!(host.steps, [AdviceStep::Editor(2)]);
    }

    #[test]
    fn inserting_puts_the_new_record_at_the_current_index() {
        let mut host = Editor {
            index: 1,
            count: 4,
            accept: true,
            ..Editor::default()
        };

        assert!(edit_advice(AdviceEdit::InsertBefore, &mut host));

        assert_eq!(
            host.steps,
            [
                AdviceStep::Create,
                AdviceStep::Editor(2),
                AdviceStep::Commit,
                AdviceStep::Insert(1),
                AdviceStep::Refresh,
            ]
        );
    }

    #[test]
    fn appending_numbers_one_past_the_end_and_moves_to_it() {
        let mut host = Editor {
            index: 1,
            count: 4,
            accept: true,
            ..Editor::default()
        };

        assert!(edit_advice(AdviceEdit::Append, &mut host));

        assert_eq!(
            host.steps,
            [
                AdviceStep::Create,
                AdviceStep::Editor(5),
                AdviceStep::Commit,
                AdviceStep::Append,
                AdviceStep::Show(4),
                AdviceStep::Refresh,
            ]
        );
    }

    #[test]
    fn appending_is_the_one_that_works_on_an_empty_list() {
        let mut empty = Editor {
            accept: true,
            ..Editor::default()
        };
        assert!(edit_advice(AdviceEdit::Append, &mut empty));

        let mut edit = Editor {
            accept: true,
            ..Editor::default()
        };
        assert!(!edit_advice(AdviceEdit::Edit, &mut edit));
        assert!(edit.steps.is_empty());

        let mut insert = Editor {
            accept: true,
            ..Editor::default()
        };
        assert!(!edit_advice(AdviceEdit::InsertBefore, &mut insert));
        assert!(insert.steps.is_empty());
    }
}

/// The task kinds whose answer is typed rather than chosen.
///
/// The recovered handler tests `1 << kind` against this mask.
pub const TYPED_ANSWER_KINDS: u32 = 0x26;

/// The subset of those that take a single answer rather than a pair.
pub const SINGLE_ANSWER_KINDS: u32 = 0x22;

/// The task kind that reports nothing at all when it is submitted.
pub const SILENT_TASK_KIND: u8 = 3;

/// The result code the recovered handler uses when no choice was made.
pub const NO_CHOICE_RESULT: u8 = 9;

/// The resource string a successful submission reports.
///
/// A failure reports this plus the result code.
pub const SUBMIT_MESSAGE_BASE: u32 = 0x0410;

/// The analysis a task's kind demands before its answer can be judged.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TaskAnalysis {
    /// Kind 1: the DC operating point.
    OperatingPoint,
    /// Kind 2: the AC nodal voltages.
    NodalVoltages,
    /// Kind 5: the DC optimization.
    DcOptimization,
}

impl TaskAnalysis {
    /// The analysis one task kind demands, if it demands one.
    #[must_use]
    pub const fn for_kind(kind: u8) -> Option<Self> {
        match kind {
            1 => Some(Self::OperatingPoint),
            2 => Some(Self::NodalVoltages),
            5 => Some(Self::DcOptimization),
            _ => None,
        }
    }
}

/// Reports whether a task kind takes a typed answer.
///
/// Part of Ghidra function `FUN_01c7b040` at `0x01C7B040`.
///
/// Kinds of 8 and above are outside the recovered mask entirely and take
/// neither form.
#[must_use]
pub const fn kind_takes_typed_answer(kind: u8) -> bool {
    kind < 8 && (1_u32 << kind) & TYPED_ANSWER_KINDS != 0
}

/// Reports whether a typed-answer kind takes one answer rather than a pair.
///
/// Part of Ghidra function `FUN_01c7b040` at `0x01C7B040`.
#[must_use]
pub const fn kind_takes_single_answer(kind: u8) -> bool {
    kind < 8 && (1_u32 << kind) & SINGLE_ANSWER_KINDS != 0
}

/// How a submission turned out.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SubmitOutcome {
    /// The answer was accepted.
    Accepted,
    /// Nothing was chosen from the answer list.
    NoChoice,
    /// The answer was judged wrong, with the recovered result code.
    Rejected(u8),
    /// There was no task to submit.
    NoTask,
}

pub trait SubmitAnswerHost {
    /// The kind of the task being submitted, if there is one.
    fn task_kind(&mut self) -> Option<u8>;

    /// Runs the analysis a task kind demands.
    fn run_analysis(&mut self, analysis: TaskAnalysis);

    /// Reports whether the answer is chosen from a list rather than typed.
    fn multiple_choice(&mut self) -> bool;

    /// The text of the chosen answer, or `None` when nothing is chosen.
    fn chosen_answer(&mut self) -> Option<String>;

    /// Reports whether the chosen answer is the right one.
    fn chosen_is_correct(&mut self) -> bool;

    /// Writes one answer into the task's single answer field.
    fn set_single_answer(&mut self, text: &str);

    /// Splits one answer at the recovered separator and writes both halves.
    fn set_answer_pair(&mut self, text: &str);

    /// Reports whether the exam scores wrong answers rather than accepting
    /// them.
    fn scored_exam(&mut self) -> bool;

    /// Builds the checker the typed answers are evaluated against.
    fn create_checker(&mut self);

    /// Evaluates the first typed answer, returning a non-zero result code on
    /// failure.
    fn check_first_answer(&mut self) -> u8;

    /// Evaluates the second typed answer.
    fn check_second_answer(&mut self) -> u8;

    /// Moves the focus to whichever answer field the failure belongs to.
    fn focus_failed_field(&mut self, second: bool, code: u8);

    /// Shows the message one result code names.
    fn report(&mut self, message_index: u32);

    /// Records the typed answers and scores them.
    fn score_typed_answers(&mut self, single: bool);

    /// Scores a chosen answer.
    fn score_chosen_answer(&mut self, correct: bool);

    /// Scores every object in the document.
    fn score_objects(&mut self);

    /// Rebuilds the score display.
    fn refresh_score(&mut self);
}

/// Implements Ghidra function `FUN_01c7b040` at `0x01C7B040`.
///
/// Handles `ExamPanel.ExamMainPages.tsCurTask.GroupBox2.SubmitBtn.OnClick`
/// ("Submit").
///
/// Judges the answer to the current exam task.
///
/// The task's own kind drives everything. Three kinds run an analysis first, so
/// submitting is what computes the values the answer is checked against rather
/// than the user having run the analysis themselves.
///
/// Answers come two ways. A chosen answer is read from the list and written
/// into the task — as one field for the kinds in the single-answer mask, or
/// split at the recovered separator into two for the rest — and is judged right
/// there. A typed answer is evaluated against a checker instead, one expression
/// or two by the same mask, and a failure moves the focus to the field that
/// failed so the user can see which half was wrong.
///
/// One kind reports nothing at all, which is how a task can be submitted
/// silently.
///
/// Scoring runs only on acceptance, and takes a different path again: typed
/// answers are recorded and scored, a chosen answer sets the counters directly,
/// and everything else walks every object in the document.
pub fn submit_answer(host: &mut impl SubmitAnswerHost) -> SubmitOutcome {
    let Some(kind) = host.task_kind() else {
        return SubmitOutcome::NoTask;
    };

    if let Some(analysis) = TaskAnalysis::for_kind(kind) {
        host.run_analysis(analysis);
    }

    let typed = kind_takes_typed_answer(kind);
    let single = kind_takes_single_answer(kind);

    let mut result = 0_u8;
    let mut chosen_correct = false;
    let mut chose_nothing = false;

    if host.multiple_choice() {
        match host.chosen_answer() {
            None => {
                result = NO_CHOICE_RESULT;
                chose_nothing = true;
            }
            Some(text) => {
                chosen_correct = host.chosen_is_correct();

                if typed {
                    if single {
                        host.set_single_answer(&text);
                    } else {
                        host.set_answer_pair(&text);
                    }
                }

                if host.scored_exam() && !chosen_correct {
                    result = NO_CHOICE_RESULT;
                }
            }
        }
    }

    if result == 0 && typed {
        host.create_checker();

        result = host.check_first_answer();

        let second = result == 0 && !single;
        if second {
            result = host.check_second_answer();
        }

        if result != 0 && !host.multiple_choice() {
            host.focus_failed_field(second, result);
        }
    }

    if kind != SILENT_TASK_KIND {
        host.report(SUBMIT_MESSAGE_BASE + u32::from(result));
    }

    if result != 0 {
        return if chose_nothing {
            SubmitOutcome::NoChoice
        } else {
            SubmitOutcome::Rejected(result)
        };
    }

    if typed {
        host.score_typed_answers(single);
    } else if host.multiple_choice() {
        host.score_chosen_answer(chosen_correct);
    } else {
        host.score_objects();
    }

    host.refresh_score();
    SubmitOutcome::Accepted
}

#[cfg(test)]
mod submit_tests {
    use super::*;

    #[test]
    fn the_recovered_masks_pick_out_the_answer_kinds() {
        // 0x26 = kinds 1, 2 and 5; 0x22 = kinds 1 and 5.
        assert!(kind_takes_typed_answer(1));
        assert!(kind_takes_typed_answer(2));
        assert!(kind_takes_typed_answer(5));
        assert!(!kind_takes_typed_answer(0));
        assert!(!kind_takes_typed_answer(3));
        assert!(!kind_takes_typed_answer(9));

        assert!(kind_takes_single_answer(1));
        assert!(kind_takes_single_answer(5));
        assert!(!kind_takes_single_answer(2));
    }

    #[test]
    fn three_kinds_demand_an_analysis_first() {
        assert_eq!(
            TaskAnalysis::for_kind(1),
            Some(TaskAnalysis::OperatingPoint)
        );
        assert_eq!(TaskAnalysis::for_kind(2), Some(TaskAnalysis::NodalVoltages));
        assert_eq!(
            TaskAnalysis::for_kind(5),
            Some(TaskAnalysis::DcOptimization)
        );
        assert_eq!(TaskAnalysis::for_kind(3), None);
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum Step {
        Analysis(TaskAnalysis),
        Single(String),
        Pair(String),
        Checker,
        Focus(bool),
        Report(u32),
        ScoreTyped(bool),
        ScoreChosen(bool),
        ScoreObjects,
        Refresh,
    }

    #[derive(Debug, Default)]
    #[allow(clippy::struct_excessive_bools)]
    struct Submit {
        kind: Option<u8>,
        choice: bool,
        chosen: Option<String>,
        correct: bool,
        scored: bool,
        first_code: u8,
        second_code: u8,
        steps: Vec<Step>,
    }

    impl SubmitAnswerHost for Submit {
        fn task_kind(&mut self) -> Option<u8> {
            self.kind
        }

        fn run_analysis(&mut self, analysis: TaskAnalysis) {
            self.steps.push(Step::Analysis(analysis));
        }

        fn multiple_choice(&mut self) -> bool {
            self.choice
        }

        fn chosen_answer(&mut self) -> Option<String> {
            self.chosen.clone()
        }

        fn chosen_is_correct(&mut self) -> bool {
            self.correct
        }

        fn set_single_answer(&mut self, text: &str) {
            self.steps.push(Step::Single(text.to_owned()));
        }

        fn set_answer_pair(&mut self, text: &str) {
            self.steps.push(Step::Pair(text.to_owned()));
        }

        fn scored_exam(&mut self) -> bool {
            self.scored
        }

        fn create_checker(&mut self) {
            self.steps.push(Step::Checker);
        }

        fn check_first_answer(&mut self) -> u8 {
            self.first_code
        }

        fn check_second_answer(&mut self) -> u8 {
            self.second_code
        }

        fn focus_failed_field(&mut self, second: bool, _code: u8) {
            self.steps.push(Step::Focus(second));
        }

        fn report(&mut self, message_index: u32) {
            self.steps.push(Step::Report(message_index));
        }

        fn score_typed_answers(&mut self, single: bool) {
            self.steps.push(Step::ScoreTyped(single));
        }

        fn score_chosen_answer(&mut self, correct: bool) {
            self.steps.push(Step::ScoreChosen(correct));
        }

        fn score_objects(&mut self) {
            self.steps.push(Step::ScoreObjects);
        }

        fn refresh_score(&mut self) {
            self.steps.push(Step::Refresh);
        }
    }

    #[test]
    fn no_task_submits_nothing() {
        let mut host = Submit::default();

        assert_eq!(submit_answer(&mut host), SubmitOutcome::NoTask);
        assert!(host.steps.is_empty());
    }

    #[test]
    fn a_typed_single_answer_runs_its_analysis_then_checks_one_expression() {
        let mut host = Submit {
            kind: Some(1),
            ..Submit::default()
        };

        assert_eq!(submit_answer(&mut host), SubmitOutcome::Accepted);

        assert_eq!(
            host.steps,
            [
                Step::Analysis(TaskAnalysis::OperatingPoint),
                Step::Checker,
                Step::Report(SUBMIT_MESSAGE_BASE),
                Step::ScoreTyped(true),
                Step::Refresh,
            ]
        );
    }

    #[test]
    fn a_paired_answer_checks_the_second_expression_too() {
        let mut host = Submit {
            kind: Some(2),
            second_code: 4,
            ..Submit::default()
        };

        assert_eq!(submit_answer(&mut host), SubmitOutcome::Rejected(4));

        assert!(host.steps.contains(&Step::Focus(true)));
        assert!(host.steps.contains(&Step::Report(SUBMIT_MESSAGE_BASE + 4)));
    }

    #[test]
    fn a_first_answer_failure_stops_before_the_second() {
        let mut host = Submit {
            kind: Some(2),
            first_code: 2,
            second_code: 4,
            ..Submit::default()
        };

        assert_eq!(submit_answer(&mut host), SubmitOutcome::Rejected(2));

        assert!(host.steps.contains(&Step::Focus(false)));
    }

    #[test]
    fn the_silent_kind_reports_nothing() {
        let mut host = Submit {
            kind: Some(SILENT_TASK_KIND),
            ..Submit::default()
        };

        assert_eq!(submit_answer(&mut host), SubmitOutcome::Accepted);

        assert!(
            !host
                .steps
                .iter()
                .any(|step| matches!(step, Step::Report(_)))
        );
        assert!(host.steps.contains(&Step::ScoreObjects));
    }

    #[test]
    fn a_chosen_answer_is_written_into_the_task_by_its_kind() {
        let mut single = Submit {
            kind: Some(1),
            choice: true,
            chosen: Some("1.5V".to_owned()),
            correct: true,
            ..Submit::default()
        };
        assert_eq!(submit_answer(&mut single), SubmitOutcome::Accepted);
        assert!(single.steps.contains(&Step::Single("1.5V".to_owned())));

        let mut pair = Submit {
            kind: Some(2),
            choice: true,
            chosen: Some("1.5V;30deg".to_owned()),
            correct: true,
            ..Submit::default()
        };
        assert_eq!(submit_answer(&mut pair), SubmitOutcome::Accepted);
        assert!(pair.steps.contains(&Step::Pair("1.5V;30deg".to_owned())));
    }

    #[test]
    fn choosing_nothing_is_its_own_outcome() {
        let mut host = Submit {
            kind: Some(1),
            choice: true,
            ..Submit::default()
        };

        assert_eq!(submit_answer(&mut host), SubmitOutcome::NoChoice);
        assert!(host.steps.contains(&Step::Report(
            SUBMIT_MESSAGE_BASE + u32::from(NO_CHOICE_RESULT)
        )));
    }

    #[test]
    fn a_wrong_choice_is_only_rejected_on_a_scored_exam() {
        let mut unscored = Submit {
            kind: Some(0),
            choice: true,
            chosen: Some("wrong".to_owned()),
            ..Submit::default()
        };
        assert_eq!(submit_answer(&mut unscored), SubmitOutcome::Accepted);
        assert!(unscored.steps.contains(&Step::ScoreChosen(false)));

        let mut scored = Submit {
            kind: Some(0),
            choice: true,
            chosen: Some("wrong".to_owned()),
            scored: true,
            ..Submit::default()
        };
        assert_eq!(
            submit_answer(&mut scored),
            SubmitOutcome::Rejected(NO_CHOICE_RESULT)
        );
    }

    #[test]
    fn a_failed_typed_answer_does_not_move_the_focus_in_choice_mode() {
        let mut host = Submit {
            kind: Some(1),
            choice: true,
            chosen: Some("1.5V".to_owned()),
            correct: true,
            first_code: 3,
            ..Submit::default()
        };

        assert_eq!(submit_answer(&mut host), SubmitOutcome::Rejected(3));

        assert!(!host.steps.iter().any(|step| matches!(step, Step::Focus(_))));
    }
}
