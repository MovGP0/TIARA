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

use std::path::{Path, PathBuf};

use rfd::{FileDialog, MessageButtons, MessageDialog, MessageDialogResult, MessageLevel};
use tiara_core::schematic_file;
use tiara_core::schematic_workspace::Saved;

use super::{SchematicEditor, Tool};

/// Where `File > Open Examples...` starts looking, if it is told.
const EXAMPLES_VARIABLE: &str = "TIARA_EXAMPLES";

/// What that folder is called where it sits beside the program.
const EXAMPLES_FOLDER: &str = "Examples";

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

    /// What went wrong the last time a file was read or written, if anything.
    #[must_use]
    pub(crate) fn trouble(&self) -> Option<&str> {
        self.trouble.as_deref()
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
                self.trouble = None;
                self.take_up(Tool::Select);
            }
            Err(error) => {
                self.trouble = Some(format!("{}: {error}", path.display()));
            }
        }
    }

    /// `File > Save`. A circuit that has never been saved is asked for a name.
    pub(crate) fn save_click(&mut self) {
        match self.workspace.save() {
            Ok(Saved::NeedsAName) => self.save_as_click(),
            Ok(_) => self.trouble = None,
            Err(error) => self.trouble = Some(error.to_string()),
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
                self.trouble = None;
                true
            }
            Err(error) => {
                self.trouble = Some(format!("{}: {error}", path.display()));
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

    /// An editor whose circuit has been written out under a name.
    fn saved_at(path: &Path) -> SchematicEditor {
        let mut editor = drawn_on();
        assert!(editor.save_to(Some(path)));
        editor
    }

    /// How many parts a written circuit holds.
    fn read_back(path: &Path) -> usize {
        tiara_core::schematic_file::read(path)
            .unwrap()
            .parts()
            .len()
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
        let mut editor = saved_at(&path);

        assert_eq!(editor.window_title(), "titled - Schematic Editor");
        assert!(editor.state().has_file);

        editor.update(Message::MenuCommand("mnNew"));
        assert_eq!(editor.window_title(), "Noname1 - Schematic Editor");
        assert!(!editor.state().has_file);

        let _ = std::fs::remove_file(&path);
    }

    #[test]
    fn saving_and_opening_bring_the_same_circuit_back() {
        let path = a_path("round-trip");
        let _ = std::fs::remove_file(&path);
        let _written = saved_at(&path);

        let mut editor = SchematicEditor::default();
        editor.open_from(Some(&path));

        assert_eq!(editor.sheet().document().parts().len(), 1);
        assert_eq!(editor.document_name(), "round-trip");
        assert!(!editor.state().is_modified);
        assert_eq!(editor.trouble(), None);

        let _ = std::fs::remove_file(&path);
    }

    #[test]
    fn a_cancelled_dialog_changes_nothing() {
        let mut editor = drawn_on();
        editor.open_from(None);
        assert!(!editor.save_to(None));

        assert_eq!(editor.workspace.count(), 1);
        assert_eq!(editor.sheet().document().parts().len(), 1);
        assert!(editor.state().is_modified);
        assert_eq!(editor.trouble(), None);
    }

    #[test]
    fn a_circuit_that_cannot_be_read_is_said_so_in_the_status_bar() {
        let path = a_path("unreadable");
        std::fs::write(&path, "bytes from somewhere else").unwrap();

        let mut editor = drawn_on();
        editor.open_from(Some(&path));

        let trouble = editor.trouble().expect("it should say what went wrong");
        assert!(trouble.contains("unreadable"));
        assert_eq!(editor.workspace.count(), 1);
        assert_eq!(editor.sheet().document().parts().len(), 1);

        // Reading one that works clears it again.
        let good = a_path("readable");
        let _ = std::fs::remove_file(&good);
        let _written = saved_at(&good);
        editor.open_from(Some(&good));
        assert_eq!(editor.trouble(), None);

        let _ = std::fs::remove_file(&path);
        let _ = std::fs::remove_file(&good);
    }

    #[test]
    fn saving_again_needs_no_name_and_writes_where_it_went_before() {
        let path = a_path("again");
        let _ = std::fs::remove_file(&path);
        let mut editor = saved_at(&path);
        assert!(!editor.state().is_modified);

        editor.sheet_mut().place("C", Point::new(8, 4));
        // Save on a named circuit writes it without asking anything.
        editor.update(Message::MenuCommand("Save"));

        assert!(!editor.state().is_modified);
        assert_eq!(read_back(&path), 2);

        let _ = std::fs::remove_file(&path);
    }

    #[test]
    fn closing_a_circuit_that_has_nothing_to_save_asks_nothing() {
        let path = a_path("closing");
        let _ = std::fs::remove_file(&path);
        let mut editor = saved_at(&path);
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
        let mut editor = saved_at(&path);
        editor.update(Message::MenuCommand("mnNew"));

        editor.update(Message::MenuCommand("mnCloseAll"));
        assert_eq!(editor.workspace.count(), 1);
        assert_eq!(editor.document_name(), UNNAMED_DOCUMENT);

        let _ = std::fs::remove_file(&path);
    }

    #[test]
    fn save_all_writes_every_named_circuit_and_stays_where_it_was() {
        let first = a_path("all-first");
        let second = a_path("all-second");
        let _ = std::fs::remove_file(&first);
        let _ = std::fs::remove_file(&second);

        let mut editor = saved_at(&first);
        editor.update(Message::MenuCommand("mnNew"));
        editor.sheet_mut().place("C", Point::new(8, 4));
        assert!(editor.save_to(Some(&second)));

        // Change both, then write both at once.
        editor.update(Message::SelectDocument(0));
        editor.sheet_mut().place("L", Point::new(12, 4));
        editor.update(Message::SelectDocument(1));
        editor.sheet_mut().place("L", Point::new(12, 4));

        editor.update(Message::MenuCommand("mnSaveAll"));

        assert_eq!(editor.workspace.active_index(), 1);
        assert!(!editor.workspace.any_modified());
        assert_eq!(read_back(&first), 2);
        assert_eq!(read_back(&second), 2);

        let _ = std::fs::remove_file(&first);
        let _ = std::fs::remove_file(&second);
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
}
