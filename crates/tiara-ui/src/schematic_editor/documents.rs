//! Opening, saving and closing circuits.
//!
//! The File menu's own commands. Each comes in two halves: a `_click` that
//! puts up whatever dialog the command needs, and a method taking the answer
//! it came back with. The halves are split so the deciding can be tested
//! without a dialog on the screen - only the thin half that calls `rfd` is
//! untested, and it does nothing but ask.
//!
//! Nothing here decides what happens to unsaved work on its own. A circuit
//! that has changed is asked about, once per circuit, and a `Cancel` anywhere
//! stops what was being done - closing, closing everything, or leaving.

use std::fmt::Write as _;
use std::path::{Path, PathBuf};

use rfd::{FileDialog, MessageButtons, MessageDialog, MessageDialogResult, MessageLevel};
use tiara_core::back_annotation::{self, BackAnnotation};
use tiara_core::macro_file::{self, Macro};
use tiara_core::schematic_document::{Document, Sheet};
use tiara_core::schematic_file;
use tiara_core::schematic_workspace::Saved;

use super::{SchematicEditor, Tool};

/// Where `File > Open Examples...` starts looking, if it is told.
const EXAMPLES_VARIABLE: &str = "TIARA_EXAMPLES";

/// What that folder is called where it sits beside the program.
const EXAMPLES_FOLDER: &str = "Examples";

/// What a back-annotation file is called.
const BACK_ANNOTATION_EXTENSION: &str = "ban";

/// What the file picker calls that kind.
const BACK_ANNOTATION_FILTER: &str = "Back-annotation file";

/// What someone said when asked about work that has not been saved.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Answer {
    /// Save it first.
    Save,
    /// Throw it away.
    Discard,
    /// Do not do the thing that asked.
    Cancel,
}

/// The examples the original ships, if this copy has been told where they are.
///
/// The originals live under the install folder, which the port does not read
/// yet; a folder named beside the program, or one named outright, is what
/// there is to go on.
#[must_use]
pub fn examples_folder() -> Option<PathBuf> {
    if let Some(named) = std::env::var_os(EXAMPLES_VARIABLE) {
        let named = PathBuf::from(named);
        return named.is_dir().then_some(named);
    }
    let beside = std::env::current_exe()
        .ok()?
        .parent()?
        .join(EXAMPLES_FOLDER);
    beside.is_dir().then_some(beside)
}

impl SchematicEditor {
    /// Whether the editor has been told to leave and has nothing holding it.
    #[must_use]
    pub(crate) const fn is_closing(&self) -> bool {
        self.closing
    }

    /// What the status bar has to say, if anything.
    #[must_use]
    pub(crate) fn said(&self) -> Option<&str> {
        self.said.as_deref()
    }

    /// `File > Open...`, and `File > Open Examples...` with a folder to start
    /// in.
    pub(crate) fn open_click(&mut self, starting_in: Option<&Path>) {
        let mut dialog =
            FileDialog::new().add_filter(schematic_file::FILTER_NAME, &[schematic_file::EXTENSION]);
        if let Some(folder) = starting_in {
            dialog = dialog.set_directory(folder);
        }
        let chosen = dialog.pick_file();
        self.open_from(chosen.as_deref());
    }

    /// Opens what the dialog came back with. Nothing means it was cancelled,
    /// and a cancelled dialog changes nothing at all.
    pub(crate) fn open_from(&mut self, path: Option<&Path>) {
        let Some(path) = path else {
            return;
        };
        match self.workspace.open(path) {
            Ok(()) => {
                self.said = None;
                self.take_up(Tool::Select);
            }
            Err(error) => {
                self.said = Some(format!("{}: {error}", path.display()));
            }
        }
    }

    /// Opens a circuit that came from somewhere else.
    ///
    /// It opens beside whatever is already open rather than over it: an
    /// import is a new circuit, not a change to the one being worked on, and
    /// it has no file of its own until it is saved.
    pub(crate) fn open_imported(&mut self, document: Document) {
        self.workspace.start_a_new_one();
        *self.workspace.active_mut().sheet_mut() = Sheet::holding(document);
        self.said = None;
        self.take_up(Tool::Select);
    }

    /// `Tools > PCB Tools > Backannotate...`.
    pub(crate) fn back_annotate_click(&mut self) {
        let chosen = FileDialog::new()
            .add_filter(BACK_ANNOTATION_FILTER, &[BACK_ANNOTATION_EXTENSION])
            .pick_file();
        self.back_annotate_from(chosen.as_deref());
    }

    /// Brings back what a board layout changed.
    ///
    /// A part the board renamed is renamed here. A footprint, a pin swap or
    /// a gate swap is read and counted but not applied: a part on the sheet
    /// carries a label and not yet a footprint or a pin map, and saying so
    /// is better than dropping them quietly.
    pub(crate) fn back_annotate_from(&mut self, path: Option<&Path>) {
        let Some(path) = path else {
            return;
        };
        let read = match back_annotation::read(path) {
            Ok(read) => read,
            Err(error) => {
                self.said = Some(format!("{}: {error}", path.display()));
                return;
            }
        };
        self.said = Some(self.apply_back_annotation(&read));
    }

    /// Applies what was read, and says what came of it.
    fn apply_back_annotation(&mut self, read: &BackAnnotation) -> String {
        let mut renamed = 0_usize;
        let mut missing = 0_usize;
        let mut waiting = 0_usize;

        for change in &read.changes {
            if change.waits_for_more() {
                waiting += 1;
            }
            let Some(reference) = change.reference.as_deref() else {
                continue;
            };
            match self.sheet().part_called(&change.part) {
                Some(id) => {
                    self.sheet_mut().rename(id, reference);
                    renamed += 1;
                }
                None => missing += 1,
            }
        }

        let mut said = format!("{} renamed from {}", renamed, read.circuit);
        if missing > 0 {
            let _ = write!(said, ", {missing} not on this sheet");
        }
        if waiting > 0 {
            let _ = write!(
                said,
                ", {waiting} carrying a package or a swap the sheet cannot hold yet"
            );
        }
        said
    }

    /// `Tools > Export Macro...`.
    ///
    /// Only offered inside a macro, which is where there is a macro to
    /// export: the sheet being edited is the macro's own circuit.
    pub(crate) fn export_macro_click(&mut self) {
        let chosen = FileDialog::new()
            .add_filter(macro_file::FILTER_NAME, &[macro_file::EXTENSION])
            .set_file_name(self.document_name())
            .save_file();
        self.export_macro_to(chosen.as_deref());
    }

    /// Writes the macro being edited to the name the dialog came back with.
    ///
    /// Nothing means the dialog was cancelled, and nothing is written.
    pub(crate) fn export_macro_to(&mut self, path: Option<&Path>) -> bool {
        let Some(path) = path else {
            return false;
        };
        let path = macro_file::with_extension(path);
        let what = Macro {
            name: self.document_name().to_owned(),
            // What a macro's instances are labelled with, and what
            // parameters it takes, are the macro properties dialog's to
            // hold; until it keeps them for the sheet being edited, a
            // macro is written out with the circuit and its name.
            label: String::new(),
            parameters: String::new(),
            circuit: self.sheet().document().clone(),
        };

        match macro_file::write(&path, &what) {
            Ok(()) => {
                self.said = Some(format!("{}", path.display()));
                true
            }
            Err(error) => {
                self.said = Some(format!("{}: {error}", path.display()));
                false
            }
        }
    }

    /// `File > Save`. A circuit that has never been saved is asked for a name.
    pub(crate) fn save_click(&mut self) {
        match self.workspace.save() {
            Ok(Saved::NeedsAName) => self.save_as_click(),
            Ok(_) => self.said = None,
            Err(error) => self.said = Some(error.to_string()),
        }
    }

    /// `File > Save As...`.
    pub(crate) fn save_as_click(&mut self) {
        let mut dialog = FileDialog::new()
            .add_filter(schematic_file::FILTER_NAME, &[schematic_file::EXTENSION])
            .set_file_name(self.document_name());
        if let Some(folder) = self.workspace.active().path().and_then(Path::parent) {
            dialog = dialog.set_directory(folder);
        }
        let chosen = dialog.save_file();
        self.save_to(chosen.as_deref());
    }

    /// Saves under the name the dialog came back with, and says whether it was
    /// saved. Nothing means it was cancelled, and nothing is written.
    pub(crate) fn save_to(&mut self, path: Option<&Path>) -> bool {
        let Some(path) = path else {
            return false;
        };
        match self.workspace.save_as(path) {
            Ok(()) => {
                self.said = None;
                true
            }
            Err(error) => {
                self.said = Some(format!("{}: {error}", path.display()));
                false
            }
        }
    }

    /// `File > Save All`.
    ///
    /// Each circuit is saved as `Save` would save it, which means each one
    /// that has never been saved is asked for a name in turn. The circuit
    /// being worked on is still the one being worked on afterwards.
    pub(crate) fn save_all_click(&mut self) {
        let there = self.workspace.active_index();
        for at in 0..self.workspace.count() {
            self.workspace.activate(at);
            self.save_click();
        }
        self.workspace.activate(there);
    }

    /// `File > Close`.
    pub(crate) fn close_click(&mut self) {
        let answer = self.ask_about_unsaved_work();
        self.close_answering(answer);
    }

    /// Closes the circuit being worked on, having been given an answer about
    /// work that has not been saved.
    pub(crate) fn close_answering(&mut self, answer: Answer) {
        if answer == Answer::Cancel {
            return;
        }
        self.workspace.close();
        self.take_up(Tool::Select);
    }

    /// `File > Close All`. A `Cancel` on any one of them stops the whole thing
    /// and closes none of them, which is what the original's own wording -
    /// cancel, not skip - promises.
    pub(crate) fn close_all_click(&mut self) {
        if self.settle_every_circuit() {
            self.workspace.close_all();
            self.take_up(Tool::Select);
        }
    }

    /// `File > Exit`. The shell reads `is_closing` and leaves.
    pub(crate) fn exit_click(&mut self) {
        if self.settle_every_circuit() {
            self.closing = true;
        }
    }

    /// Asks about every circuit that has changed, and says whether to carry
    /// on. Going through them leaves the one that was being worked on being
    /// worked on.
    fn settle_every_circuit(&mut self) -> bool {
        let there = self.workspace.active_index();
        for at in 0..self.workspace.count() {
            self.workspace.activate(at);
            if self.ask_about_unsaved_work() == Answer::Cancel {
                self.workspace.activate(there);
                return false;
            }
        }
        self.workspace.activate(there);
        true
    }

    /// Asks what to do about the circuit being worked on, where it has
    /// changed, and saves it if that is the answer.
    ///
    /// A circuit with nothing to save is not worth asking about, so nothing is
    /// put on the screen and the answer is to carry on.
    fn ask_about_unsaved_work(&mut self) -> Answer {
        if !self.workspace.active().is_modified() {
            return Answer::Discard;
        }
        let answer = ask_about(self.document_name());
        if answer == Answer::Save {
            self.save_click();
            // A save that was itself cancelled leaves the circuit unsaved, and
            // going on would throw away what the answer said to keep.
            if self.workspace.active().is_modified() {
                return Answer::Cancel;
            }
        }
        answer
    }
}

/// Puts the question about unsaved work on the screen.
fn ask_about(name: &str) -> Answer {
    let result = MessageDialog::new()
        .set_level(MessageLevel::Warning)
        .set_title("Schematic Editor")
        .set_description(format!("{name} has changed. Save it?"))
        .set_buttons(MessageButtons::YesNoCancel)
        .show();
    match result {
        MessageDialogResult::Yes => Answer::Save,
        MessageDialogResult::No => Answer::Discard,
        _ => Answer::Cancel,
    }
}

#[cfg(test)]
mod tests {
    use super::{Answer, examples_folder};
    use crate::schematic_editor::{Message, SchematicEditor};
    use std::path::{Path, PathBuf};
    use tiara_core::schematic_document::Point;
    use tiara_core::schematic_file;
    use tiara_core::schematic_workspace::UNNAMED as UNNAMED_DOCUMENT;

    fn a_path(name: &str) -> PathBuf {
        let folder = std::env::temp_dir().join(format!("tiara-editor-{}", std::process::id()));
        std::fs::create_dir_all(&folder).unwrap();
        folder.join(format!("{name}.tsc"))
    }

    /// An editor with one part on its sheet, which makes it modified.
    fn drawn_on() -> SchematicEditor {
        let mut editor = SchematicEditor::default();
        editor.sheet_mut().place("R", Point::new(4, 4));
        editor
    }

    /// An editor with a native example open under the requested test name.
    fn opened_at(path: &Path) -> SchematicEditor {
        let source =
            Path::new(env!("CARGO_MANIFEST_DIR")).join("../../examples/4011 Oscillator.TSC");
        std::fs::copy(source, path).unwrap();
        let mut editor = SchematicEditor::default();
        editor.open_from(Some(path));
        assert_eq!(editor.said(), None);
        editor
    }

    #[test]
    fn a_new_circuit_opens_beside_the_one_being_worked_on() {
        let mut editor = drawn_on();
        editor.update(Message::MenuCommand("mnNew"));

        assert_eq!(editor.workspace.count(), 2);
        assert!(editor.sheet().document().is_empty());
        assert_eq!(editor.document_name(), "Noname1");

        // The first is still there, with what was drawn on it.
        editor.update(Message::SelectDocument(0));
        assert_eq!(editor.sheet().document().parts().len(), 1);
        assert_eq!(editor.document_name(), UNNAMED_DOCUMENT);
    }

    #[test]
    fn the_title_follows_the_circuit_being_worked_on() {
        let path = a_path("titled");
        let _ = std::fs::remove_file(&path);
        let mut editor = opened_at(&path);

        assert_eq!(editor.window_title(), "titled - Schematic Editor");
        assert!(editor.state().has_file);

        editor.update(Message::MenuCommand("mnNew"));
        assert_eq!(editor.window_title(), "Noname1 - Schematic Editor");
        assert!(!editor.state().has_file);

        let _ = std::fs::remove_file(&path);
    }

    #[test]
    fn opening_a_native_circuit_brings_it_into_the_editor() {
        let path = a_path("round-trip");
        let _ = std::fs::remove_file(&path);
        let source =
            Path::new(env!("CARGO_MANIFEST_DIR")).join("../../examples/4011 Oscillator.TSC");
        std::fs::copy(source, &path).unwrap();

        let mut editor = SchematicEditor::default();
        editor.open_from(Some(&path));

        assert!(!editor.sheet().document().parts().is_empty());
        assert_eq!(editor.document_name(), "round-trip");
        assert!(!editor.state().is_modified);
        assert_eq!(editor.said(), None);

        let _ = std::fs::remove_file(&path);
    }

    #[test]
    fn compressed_and_uncompressed_examples_reach_the_editor() {
        let examples = Path::new(env!("CARGO_MANIFEST_DIR")).join("../../examples");
        for relative in ["4011 Oscillator.TSC", "ACPOWER.TSC"] {
            let path = examples.join(relative);
            let mut editor = SchematicEditor::default();
            editor.open_from(Some(&path));

            assert_eq!(editor.said(), None, "{} did not open", path.display());
            assert!(
                !editor.sheet().document().parts().is_empty(),
                "{} produced no parts",
                path.display()
            );
            assert!(
                !editor.state().is_modified,
                "{} was marked as edited",
                path.display()
            );
        }
    }

    #[test]
    fn a_cancelled_dialog_changes_nothing() {
        let mut editor = drawn_on();
        editor.open_from(None);
        assert!(!editor.save_to(None));

        assert_eq!(editor.workspace.count(), 1);
        assert_eq!(editor.sheet().document().parts().len(), 1);
        assert!(editor.state().is_modified);
        assert_eq!(editor.said(), None);
    }

    #[test]
    fn a_circuit_that_cannot_be_read_is_said_so_in_the_status_bar() {
        let path = a_path("unreadable");
        std::fs::write(&path, "bytes from somewhere else").unwrap();

        let mut editor = drawn_on();
        editor.open_from(Some(&path));

        let trouble = editor.said().expect("it should say what went wrong");
        assert!(trouble.contains("unreadable"));
        assert_eq!(editor.workspace.count(), 1);
        assert_eq!(editor.sheet().document().parts().len(), 1);

        // Reading one that works clears it again.
        let good = a_path("readable");
        let _ = std::fs::remove_file(&good);
        let source =
            Path::new(env!("CARGO_MANIFEST_DIR")).join("../../examples/4011 Oscillator.TSC");
        std::fs::copy(source, &good).unwrap();
        editor.open_from(Some(&good));
        assert_eq!(editor.said(), None);

        let _ = std::fs::remove_file(&path);
        let _ = std::fs::remove_file(&good);
    }

    #[test]
    fn saving_again_updates_the_native_source() {
        let path = a_path("again");
        let _ = std::fs::remove_file(&path);
        let mut editor = opened_at(&path);
        let before = std::fs::read(&path).unwrap();
        assert!(!editor.state().is_modified);

        editor.sheet_mut().place("C", Point::new(8, 4));
        editor.update(Message::MenuCommand("Save"));

        assert!(!editor.state().is_modified);
        assert_eq!(editor.said(), None);
        assert_ne!(std::fs::read(&path).unwrap(), before);
        assert!(
            schematic_file::read(&path)
                .unwrap()
                .parts()
                .iter()
                .any(|part| part.kind == "C" && part.at == Point::new(8, 4))
        );

        let _ = std::fs::remove_file(&path);
    }

    #[test]
    fn closing_a_circuit_that_has_nothing_to_save_asks_nothing() {
        let path = a_path("closing");
        let _ = std::fs::remove_file(&path);
        let mut editor = opened_at(&path);
        editor.update(Message::MenuCommand("mnNew"));
        assert_eq!(editor.workspace.count(), 2);

        // Nothing has been drawn on the new one, so there is nothing to ask
        // about and no dialog is raised.
        editor.update(Message::MenuCommand("mnClose"));
        assert_eq!(editor.workspace.count(), 1);
        assert_eq!(editor.document_name(), "closing");

        let _ = std::fs::remove_file(&path);
    }

    #[test]
    fn cancelling_the_question_about_unsaved_work_closes_nothing() {
        let mut editor = drawn_on();
        editor.update(Message::MenuCommand("mnNew"));
        editor.close_answering(Answer::Cancel);

        assert_eq!(editor.workspace.count(), 2);
    }

    #[test]
    fn throwing_away_unsaved_work_closes_it() {
        let mut editor = drawn_on();
        editor.update(Message::MenuCommand("mnNew"));
        editor.close_answering(Answer::Discard);

        assert_eq!(editor.workspace.count(), 1);
        assert_eq!(editor.sheet().document().parts().len(), 1);
    }

    #[test]
    fn closing_the_last_circuit_leaves_a_fresh_sheet() {
        let mut editor = SchematicEditor::default();
        editor.update(Message::MenuCommand("mnClose"));

        assert_eq!(editor.workspace.count(), 1);
        assert!(editor.sheet().document().is_empty());
        assert_eq!(editor.document_name(), UNNAMED_DOCUMENT);
    }

    #[test]
    fn closing_everything_leaves_a_fresh_sheet() {
        let path = a_path("close-all");
        let _ = std::fs::remove_file(&path);
        let mut editor = opened_at(&path);
        editor.update(Message::MenuCommand("mnNew"));

        editor.update(Message::MenuCommand("mnCloseAll"));
        assert_eq!(editor.workspace.count(), 1);
        assert_eq!(editor.document_name(), UNNAMED_DOCUMENT);

        let _ = std::fs::remove_file(&path);
    }

    #[test]
    fn save_all_updates_a_native_source() {
        let first = a_path("all-first");
        let _ = std::fs::remove_file(&first);
        let mut editor = opened_at(&first);
        let before = std::fs::read(&first).unwrap();

        editor.sheet_mut().place("L", Point::new(12, 4));
        editor.update(Message::MenuCommand("mnSaveAll"));

        assert_eq!(editor.workspace.active_index(), 0);
        assert!(!editor.workspace.any_modified());
        assert_eq!(editor.said(), None);
        assert_ne!(std::fs::read(&first).unwrap(), before);
        assert!(
            schematic_file::read(&first)
                .unwrap()
                .parts()
                .iter()
                .any(|part| part.kind == "L" && part.at == Point::new(12, 4))
        );

        let _ = std::fs::remove_file(&first);
    }

    #[test]
    fn leaving_is_settled_by_the_editor_and_done_by_the_shell() {
        let mut editor = SchematicEditor::default();
        assert!(!editor.is_closing());

        // Nothing has been drawn, so there is nothing to ask about.
        editor.update(Message::MenuCommand("mnExit"));
        assert!(editor.is_closing());
    }

    #[test]
    fn the_examples_folder_is_only_offered_where_there_is_one() {
        // The test runner shares one environment, so this reads whatever is
        // set rather than setting it: either it names a folder that is there,
        // or there is nothing to offer and the picker starts where it likes.
        if let Some(folder) = examples_folder() {
            assert!(folder.is_dir());
        }
    }

    #[test]
    fn a_circuit_from_somewhere_else_opens_beside_what_is_already_open() {
        let mut editor = drawn_on();
        let mut brought = tiara_core::schematic_document::Sheet::default();
        brought.place("R", Point::new(4, 4));
        brought.place("C", Point::new(8, 4));

        editor.open_imported(brought.document().clone());

        assert_eq!(editor.workspace.count(), 2);
        assert_eq!(editor.sheet().document().parts().len(), 2);
        // The one that was being worked on is untouched.
        editor.update(Message::SelectDocument(0));
        assert_eq!(editor.sheet().document().parts().len(), 1);
    }

    #[test]
    fn a_macro_is_written_out_with_the_circuit_inside_it() {
        let folder = std::env::temp_dir().join(format!("tiara-macro-out-{}", std::process::id()));
        let _ = std::fs::remove_dir_all(&folder);
        let path = folder.join("divider.tsm");

        let mut editor = drawn_on();
        editor.sheet_mut().select_all();
        editor.update(Message::MenuCommand("mnOpenMacro"));
        assert!(editor.sheet().inside_macro(), "it should be inside a macro");

        assert!(editor.export_macro_to(Some(&path)));

        let read_back = tiara_core::macro_file::read(&path).unwrap();
        assert_eq!(read_back.circuit.parts().len(), 1);
        assert_eq!(read_back.name, editor.document_name());

        let _ = std::fs::remove_dir_all(&folder);
    }

    #[test]
    fn a_cancelled_export_writes_nothing() {
        let mut editor = drawn_on();
        assert!(!editor.export_macro_to(None));
        assert_eq!(editor.said(), None);
    }

    #[test]
    fn a_macro_written_where_it_cannot_go_says_so() {
        let mut editor = drawn_on();
        // A name no filesystem will take.
        let refused = editor.export_macro_to(Some(std::path::Path::new("")));
        assert!(!refused);
        assert!(editor.said().is_some());
    }

    #[test]
    fn a_board_that_renamed_a_part_renames_it_here() {
        let folder = std::env::temp_dir().join(format!("tiara-ban-in-{}", std::process::id()));
        let _ = std::fs::remove_dir_all(&folder);
        std::fs::create_dir_all(&folder).unwrap();
        let path = folder.join("divider.ban");
        std::fs::write(
            &path,
            "[Circuit]
Name=Divider
[Components]
R1=
[R1]
Reference=R7
",
        )
        .unwrap();

        let mut editor = drawn_on();
        assert_eq!(editor.sheet().document().parts()[0].label, "R1");

        editor.back_annotate_from(Some(&path));
        assert_eq!(editor.sheet().document().parts()[0].label, "R7");
        assert!(
            editor
                .said()
                .is_some_and(|said| said.starts_with("1 renamed"))
        );

        let _ = std::fs::remove_dir_all(&folder);
    }

    #[test]
    fn what_the_sheet_cannot_hold_yet_is_counted_rather_than_dropped() {
        let folder = std::env::temp_dir().join(format!("tiara-ban-wait-{}", std::process::id()));
        let _ = std::fs::remove_dir_all(&folder);
        std::fs::create_dir_all(&folder).unwrap();
        let path = folder.join("divider.ban");
        std::fs::write(
            &path,
            "[Circuit]
Name=Divider
[Components]
R1=
Q9=
             [R1]
Package=R0805
[Q9]
Reference=Q1
",
        )
        .unwrap();

        let mut editor = drawn_on();
        editor.back_annotate_from(Some(&path));

        let said = editor.said().expect("it should say what came of it");
        assert!(said.starts_with("0 renamed"), "{said}");
        assert!(said.contains("1 not on this sheet"), "{said}");
        assert!(said.contains("cannot hold yet"), "{said}");

        let _ = std::fs::remove_dir_all(&folder);
    }

    #[test]
    fn a_file_that_is_not_a_back_annotation_says_so_and_changes_nothing() {
        let folder = std::env::temp_dir().join(format!("tiara-ban-bad-{}", std::process::id()));
        let _ = std::fs::remove_dir_all(&folder);
        std::fs::create_dir_all(&folder).unwrap();
        let path = folder.join("other.ban");
        std::fs::write(&path, "something else entirely").unwrap();

        let mut editor = drawn_on();
        editor.back_annotate_from(Some(&path));

        assert_eq!(editor.sheet().document().parts()[0].label, "R1");
        assert!(editor.said().is_some());

        // And a cancelled dialog says nothing at all.
        let mut cancelled = drawn_on();
        cancelled.back_annotate_from(None);
        assert_eq!(cancelled.said(), None);

        let _ = std::fs::remove_dir_all(&folder);
    }
}
