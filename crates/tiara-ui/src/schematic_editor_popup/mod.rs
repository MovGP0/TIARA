//! Iced state for the recovered Schematic Editor popup-menu commands.
//!
//! These are the entries the canvas popup shows for the object under the
//! pointer: opening an MCU's code editor, activating the interactive
//! components, and pointing a `SystemC` block at its DLL.

/// The form the recovered handlers belong to.
pub const FORM_RESOURCE: &str = "SchematicEditor";

/// The confirmation shown after a `SystemC` DLL is assigned.
pub const SYSTEMC_ASSIGNED_MESSAGE: &str = "SystemC DLL assigned";

/// The notification kind the `SystemC` confirmation uses.
///
/// The recovered call passes the literal `2`; the symbols do not say what the
/// kinds are, so it is carried through unchanged.
pub const NOTIFICATION_KIND: u16 = 2;

/// The notification duration the `SystemC` confirmation uses.
///
/// The recovered call passes the literal `4`. Its unit is not recovered.
pub const NOTIFICATION_DURATION: u16 = 4;

/// The flags the recovered build passes when preparing an MCU's sources.
///
/// The recovered call passes the literal `0xFFFF`; the symbols do not say what
/// the individual bits select.
pub const MCU_PREPARE_FLAGS: u32 = 0xFFFF;

/// An opaque handle to a recovered schematic object.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct ObjectHandle(pub u64);

pub trait McuEditorHost {
    /// The object the popup menu was opened over.
    fn popup_target(&mut self) -> ObjectHandle;

    /// The directory the MCU tool chain works in.
    fn working_directory(&mut self) -> String;

    /// Prepares the MCU's sources and reports which one to open.
    fn prepare_sources(
        &mut self,
        working_directory: &str,
        component: ObjectHandle,
        flags: u32,
    ) -> i32;

    /// Opens the MCU code editor on one prepared source.
    fn open_code_editor(&mut self, component: ObjectHandle, source: i32);
}

/// Implements Ghidra function `FUN_01c71e40` at `0x01C71E40`.
///
/// Handles `SchPopup.pmGotoMCUIDE.OnClick` ("Open MCU code editor...").
///
/// Opens the code editor on the MCU under the pointer, preparing its sources
/// first so the editor opens on real files rather than on whatever the last
/// build left behind.
///
/// Unlike the editing commands this one runs no guard: the code editor is a
/// separate window that reads the MCU rather than changing the schematic, so a
/// locked or busy editor does not block it.
///
/// The recovered preparation step also returns a second flag that the handler
/// ignores, so it is not surfaced here.
pub fn open_mcu_code_editor(host: &mut impl McuEditorHost) {
    let component = host.popup_target();
    let working_directory = host.working_directory();
    let source = host.prepare_sources(&working_directory, component, MCU_PREPARE_FLAGS);
    host.open_code_editor(component, source);
}

/// An opaque handle to a recovered undo record.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct UndoRecord(pub u64);

pub trait ActivateComponentsHost {
    /// The shared guard that blocks editing in some editor states.
    fn editing_blocked(&mut self) -> bool;

    /// Opens an undo record covering the activation.
    fn begin_undo_record(&mut self) -> Option<UndoRecord>;

    /// Activates every component in the document.
    fn activate_components(&mut self);

    /// Reports whether any component ended up activated.
    fn any_component_activated(&mut self) -> bool;

    /// Rolls the undo record back, leaving the history untouched.
    fn discard_undo_record(&mut self, record: UndoRecord);

    /// Commits the undo record so the step can be undone.
    fn commit_undo_record(&mut self, record: UndoRecord);

    /// Marks the document changed and refreshes it.
    fn mark_document_changed(&mut self);

    /// Invalidates the schematic canvas.
    fn invalidate_canvas(&mut self);
}

/// Implements Ghidra function `FUN_01c71ed0` at `0x01C71ED0`.
///
/// Handles `SchPopup.pmActivateComps.OnClick` ("Activate components").
///
/// Activates the interactive components in the circuit.
///
/// The undo record is opened before the work and thrown away again when nothing
/// turned out to be activatable, so a circuit with no interactive parts does not
/// leave an empty step in the undo history for the user to step back through.
///
/// Returns whether anything was activated.
pub fn activate_components(host: &mut impl ActivateComponentsHost) -> bool {
    if host.editing_blocked() {
        return false;
    }

    let record = host.begin_undo_record();
    host.activate_components();

    if !host.any_component_activated() {
        if let Some(record) = record {
            host.discard_undo_record(record);
        }
        return false;
    }

    host.mark_document_changed();
    if let Some(record) = record {
        host.commit_undo_record(record);
    }
    host.invalidate_canvas();
    true
}

pub trait SystemCDllHost {
    /// The object the popup menu was opened over.
    fn popup_target(&mut self) -> ObjectHandle;

    /// The directory the chooser starts in.
    fn default_directory(&mut self) -> String;

    /// Runs the DLL chooser, returning the chosen path.
    fn choose_dll(&mut self, initial_directory: &str) -> Option<String>;

    /// Reports whether this component carries a code-backed model.
    fn has_code_model(&mut self, component: ObjectHandle) -> bool;

    /// Points the component's model at a DLL.
    fn assign_dll(&mut self, component: ObjectHandle, path: &str);

    /// Shows a transient confirmation.
    fn notify(&mut self, message: &str, kind: u16, duration: u16);
}

/// Implements Ghidra function `FUN_01c71fe0` at `0x01C71FE0`.
///
/// Handles `SchPopup.pmAssignSystemCDLL.OnClick` ("Assign `SystemC` DLL...").
///
/// Points a `SystemC` block at the DLL that implements it.
///
/// The chooser opens before the component is checked, so a component that turns
/// out to carry no code model still shows the dialog and then silently does
/// nothing — the recovered order is preserved rather than moving the check
/// first.
///
/// Returns whether a DLL was assigned.
pub fn assign_systemc_dll(host: &mut impl SystemCDllHost) -> bool {
    let component = host.popup_target();
    let initial_directory = host.default_directory();

    let Some(path) = host.choose_dll(&initial_directory) else {
        return false;
    };

    if !host.has_code_model(component) {
        return false;
    }

    host.assign_dll(component, &path);
    host.notify(
        SYSTEMC_ASSIGNED_MESSAGE,
        NOTIFICATION_KIND,
        NOTIFICATION_DURATION,
    );
    true
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Default)]
    struct McuHost {
        prepared: Vec<(String, ObjectHandle, u32)>,
        opened: Vec<(ObjectHandle, i32)>,
    }

    impl McuEditorHost for McuHost {
        fn popup_target(&mut self) -> ObjectHandle {
            ObjectHandle(11)
        }

        fn working_directory(&mut self) -> String {
            r"C:\TINA\Work".to_owned()
        }

        fn prepare_sources(
            &mut self,
            working_directory: &str,
            component: ObjectHandle,
            flags: u32,
        ) -> i32 {
            self.prepared
                .push((working_directory.to_owned(), component, flags));
            3
        }

        fn open_code_editor(&mut self, component: ObjectHandle, source: i32) {
            self.opened.push((component, source));
        }
    }

    #[test]
    fn the_mcu_editor_prepares_the_sources_before_opening_them() {
        let mut host = McuHost::default();

        open_mcu_code_editor(&mut host);

        assert_eq!(
            host.prepared,
            [(r"C:\TINA\Work".to_owned(), ObjectHandle(11), 0xFFFF)]
        );
        assert_eq!(host.opened, [(ObjectHandle(11), 3)]);
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum ActivateStep {
        Begin,
        Activate,
        Discard,
        Commit,
        Changed,
        Invalidate,
    }

    #[derive(Debug, Default)]
    struct ActivateHost {
        blocked: bool,
        activated: bool,
        steps: Vec<ActivateStep>,
    }

    impl ActivateComponentsHost for ActivateHost {
        fn editing_blocked(&mut self) -> bool {
            self.blocked
        }

        fn begin_undo_record(&mut self) -> Option<UndoRecord> {
            self.steps.push(ActivateStep::Begin);
            Some(UndoRecord(1))
        }

        fn activate_components(&mut self) {
            self.steps.push(ActivateStep::Activate);
        }

        fn any_component_activated(&mut self) -> bool {
            self.activated
        }

        fn discard_undo_record(&mut self, _record: UndoRecord) {
            self.steps.push(ActivateStep::Discard);
        }

        fn commit_undo_record(&mut self, _record: UndoRecord) {
            self.steps.push(ActivateStep::Commit);
        }

        fn mark_document_changed(&mut self) {
            self.steps.push(ActivateStep::Changed);
        }

        fn invalidate_canvas(&mut self) {
            self.steps.push(ActivateStep::Invalidate);
        }
    }

    #[test]
    fn activating_components_commits_one_undo_step_and_repaints() {
        let mut host = ActivateHost {
            activated: true,
            ..ActivateHost::default()
        };

        assert!(activate_components(&mut host));

        assert_eq!(
            host.steps,
            [
                ActivateStep::Begin,
                ActivateStep::Activate,
                ActivateStep::Changed,
                ActivateStep::Commit,
                ActivateStep::Invalidate,
            ]
        );
    }

    #[test]
    fn a_circuit_with_nothing_to_activate_leaves_no_undo_step_behind() {
        let mut host = ActivateHost::default();

        assert!(!activate_components(&mut host));

        assert_eq!(
            host.steps,
            [
                ActivateStep::Begin,
                ActivateStep::Activate,
                ActivateStep::Discard,
            ]
        );
    }

    #[test]
    fn a_blocked_editor_activates_nothing() {
        let mut host = ActivateHost {
            blocked: true,
            activated: true,
            ..ActivateHost::default()
        };

        assert!(!activate_components(&mut host));
        assert!(host.steps.is_empty());
    }

    #[derive(Debug, Default)]
    struct SystemCHost {
        chosen: Option<String>,
        code_model: bool,
        prompts: Vec<String>,
        assigned: Vec<(ObjectHandle, String)>,
        notices: Vec<(String, u16, u16)>,
    }

    impl SystemCDllHost for SystemCHost {
        fn popup_target(&mut self) -> ObjectHandle {
            ObjectHandle(4)
        }

        fn default_directory(&mut self) -> String {
            r"C:\TINA\Temp\conv".to_owned()
        }

        fn choose_dll(&mut self, initial_directory: &str) -> Option<String> {
            self.prompts.push(initial_directory.to_owned());
            self.chosen.clone()
        }

        fn has_code_model(&mut self, _component: ObjectHandle) -> bool {
            self.code_model
        }

        fn assign_dll(&mut self, component: ObjectHandle, path: &str) {
            self.assigned.push((component, path.to_owned()));
        }

        fn notify(&mut self, message: &str, kind: u16, duration: u16) {
            self.notices.push((message.to_owned(), kind, duration));
        }
    }

    #[test]
    fn assigning_a_dll_confirms_it() {
        let mut host = SystemCHost {
            chosen: Some(r"C:\libs\block.dll".to_owned()),
            code_model: true,
            ..SystemCHost::default()
        };

        assert!(assign_systemc_dll(&mut host));

        assert_eq!(host.prompts, [r"C:\TINA\Temp\conv".to_owned()]);
        assert_eq!(
            host.assigned,
            [(ObjectHandle(4), r"C:\libs\block.dll".to_owned())]
        );
        assert_eq!(
            host.notices,
            [(
                SYSTEMC_ASSIGNED_MESSAGE.to_owned(),
                NOTIFICATION_KIND,
                NOTIFICATION_DURATION
            )]
        );
    }

    #[test]
    fn a_cancelled_chooser_changes_nothing() {
        let mut host = SystemCHost {
            code_model: true,
            ..SystemCHost::default()
        };

        assert!(!assign_systemc_dll(&mut host));

        assert_eq!(host.prompts.len(), 1);
        assert!(host.assigned.is_empty());
        assert!(host.notices.is_empty());
    }

    #[test]
    fn a_component_with_no_code_model_is_still_asked_for_a_dll_first() {
        // Pins the recovered order: the chooser runs before the component is
        // checked, so the dialog appears and then nothing happens.
        let mut host = SystemCHost {
            chosen: Some(r"C:\libs\block.dll".to_owned()),
            ..SystemCHost::default()
        };

        assert!(!assign_systemc_dll(&mut host));

        assert_eq!(host.prompts.len(), 1);
        assert!(host.assigned.is_empty());
        assert!(host.notices.is_empty());
    }
}
