//! The circuits the editor has open at once.
//!
//! `Save All` and `Close All` only mean anything where more than one circuit
//! can be open, and the editor draws a strip of tabs along the bottom, so one
//! sheet was never enough. This holds them: a list of open circuits, which of
//! them is being worked on, and where each came from.
//!
//! Each open circuit keeps its own sheet, and therefore its own undo: going
//! back on one must not go back on another.
//!
//! What is decided here is the bookkeeping - which circuit is open, what it is
//! called, whether it has changed, where it goes when it is written. Asking
//! the user anything is not decided here: a circuit that has never been saved
//! says so and stops, and the shell puts up the dialog.

use std::path::{Path, PathBuf};

use crate::schematic_document::Sheet;
use crate::schematic_file::{self, Error};

/// What the original calls a circuit that has not been saved yet.
pub const UNNAMED: &str = "Noname";

/// One open circuit.
#[derive(Debug, Clone)]
pub struct OpenCircuit {
    sheet: Sheet,
    /// Where it was read from or last written to, if anywhere.
    path: Option<PathBuf>,
    /// What the tab and the title bar call it.
    name: String,
}

impl OpenCircuit {
    /// The sheet, to read.
    #[must_use]
    pub const fn sheet(&self) -> &Sheet {
        &self.sheet
    }

    /// The sheet, to draw on.
    pub const fn sheet_mut(&mut self) -> &mut Sheet {
        &mut self.sheet
    }

    /// What it is called.
    #[must_use]
    pub fn name(&self) -> &str {
        &self.name
    }

    /// Where it lives, if it has been saved anywhere.
    #[must_use]
    pub fn path(&self) -> Option<&Path> {
        self.path.as_deref()
    }

    /// Whether it has changed since it was last written.
    #[must_use]
    pub const fn is_modified(&self) -> bool {
        self.sheet.document().is_modified()
    }

    /// Whether it has never been saved and has never been drawn on.
    ///
    /// A sheet like this is the one the editor starts with, and opening a
    /// circuit takes its place rather than leaving an empty tab behind.
    #[must_use]
    pub fn is_untouched(&self) -> bool {
        self.path.is_none() && self.sheet.document().is_empty() && !self.is_modified()
    }
}

/// What came of asking for something to be saved.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Saved {
    /// It was written out.
    Written,
    /// It had not changed, so there was nothing to write.
    NothingToDo,
    /// It has never been saved, so it needs a name before it can be.
    NeedsAName,
}

/// The circuits the editor has open.
#[derive(Debug, Clone)]
pub struct Workspace {
    open: Vec<OpenCircuit>,
    active: usize,
    /// How many unnamed circuits have been started, so each gets its own name.
    started: u32,
}

impl Default for Workspace {
    fn default() -> Self {
        // The editor always shows a sheet, so there is one from the start.
        Self {
            open: vec![OpenCircuit {
                sheet: Sheet::default(),
                path: None,
                name: UNNAMED.to_owned(),
            }],
            active: 0,
            started: 1,
        }
    }
}

impl Workspace {
    /// How many circuits are open. Never none.
    #[must_use]
    pub fn count(&self) -> usize {
        self.open.len()
    }

    /// Which of them is being worked on.
    #[must_use]
    pub const fn active_index(&self) -> usize {
        self.active
    }

    /// The one being worked on.
    #[must_use]
    pub fn active(&self) -> &OpenCircuit {
        // The list is never empty and `active` is only ever set to a place in
        // it, so this cannot miss; the fallback keeps the promise anyway.
        self.open.get(self.active).unwrap_or(&self.open[0])
    }

    /// The one being worked on, to change.
    pub fn active_mut(&mut self) -> &mut OpenCircuit {
        let at = self.active.min(self.open.len() - 1);
        &mut self.open[at]
    }

    /// Every open circuit, in the order the tabs show them.
    #[must_use]
    pub fn all(&self) -> &[OpenCircuit] {
        &self.open
    }

    /// What the tabs say.
    #[must_use]
    pub fn names(&self) -> Vec<&str> {
        self.open.iter().map(OpenCircuit::name).collect()
    }

    /// Whether any open circuit has changed since it was last written.
    #[must_use]
    pub fn any_modified(&self) -> bool {
        self.open.iter().any(OpenCircuit::is_modified)
    }

    /// Works on the circuit at a place in the list. A place that is not there
    /// is ignored rather than throwing the editor at an empty sheet.
    pub fn activate(&mut self, index: usize) {
        if index < self.open.len() {
            self.active = index;
        }
    }

    /// Starts a new circuit and works on it, as `File > New` does.
    ///
    /// Each one is named after how many have been started, so two new
    /// circuits are told apart on the tabs.
    pub fn start_a_new_one(&mut self) {
        let name = if self.started == 0 {
            UNNAMED.to_owned()
        } else {
            format!("{UNNAMED}{}", self.started)
        };
        self.started += 1;
        self.open.push(OpenCircuit {
            sheet: Sheet::default(),
            path: None,
            name,
        });
        self.active = self.open.len() - 1;
    }

    /// Opens a circuit from a file and works on it.
    ///
    /// A circuit that is already open is brought forward rather than opened
    /// twice, so that two tabs can never disagree about one file. An empty
    /// unnamed sheet that has not been drawn on gives up its place, so opening
    /// a circuit on a freshly started editor does not leave a blank tab.
    ///
    /// # Errors
    ///
    /// Whatever [`schematic_file::read`] says went wrong. Nothing is opened
    /// and nothing already open is disturbed.
    pub fn open(&mut self, path: &Path) -> Result<(), Error> {
        if let Some(already) = self
            .open
            .iter()
            .position(|circuit| circuit.path.as_deref() == Some(path))
        {
            self.active = already;
            return Ok(());
        }

        let document = schematic_file::read(path)?;
        let circuit = OpenCircuit {
            sheet: Sheet::holding(document),
            name: name_of(path),
            path: Some(path.to_path_buf()),
        };

        if let Some(blank) = self
            .open
            .iter()
            .position(OpenCircuit::is_untouched)
            .filter(|_| self.open.len() == 1)
        {
            self.open[blank] = circuit;
            self.active = blank;
            return Ok(());
        }

        self.open.push(circuit);
        self.active = self.open.len() - 1;
        Ok(())
    }

    /// Writes the circuit being worked on back where it came from.
    ///
    /// # Errors
    ///
    /// Whatever [`schematic_file::write`] says went wrong.
    pub fn save(&mut self) -> Result<Saved, Error> {
        self.save_at(self.active)
    }

    /// Writes the circuit being worked on to a name it has not had before.
    ///
    /// The name becomes the circuit's, so the tab and the title follow it.
    ///
    /// # Errors
    ///
    /// Whatever [`schematic_file::write`] says went wrong. The circuit keeps
    /// its old name if the write fails.
    pub fn save_as(&mut self, path: &Path) -> Result<(), Error> {
        let path = schematic_file::with_extension(path);
        let at = self.active;
        schematic_file::write(&path, &mut self.open[at].sheet)?;
        self.open[at].name = name_of(&path);
        self.open[at].path = Some(path);
        Ok(())
    }

    /// Writes out every circuit that has somewhere to go, as `Save All` does.
    ///
    /// # Errors
    ///
    /// Whatever [`schematic_file::write`] says went wrong on the first one
    /// that failed. The ones before it are written.
    ///
    /// Returns the names of those that have never been saved, in the order
    /// the tabs show them: the shell has to ask a name for each in turn.
    pub fn save_all(&mut self) -> Result<Vec<String>, Error> {
        let mut unnamed = Vec::new();
        for at in 0..self.open.len() {
            if self.save_at(at)? == Saved::NeedsAName {
                unnamed.push(self.open[at].name.clone());
            }
        }
        Ok(unnamed)
    }

    /// Closes the circuit being worked on, as `File > Close` does.
    ///
    /// Whether to save it first is the shell's to ask; by here the answer has
    /// been given. Closing the last one starts a fresh sheet, because the
    /// editor always has one.
    pub fn close(&mut self) {
        self.open.remove(self.active);
        if self.open.is_empty() {
            *self = Self::default();
            return;
        }
        self.active = self.active.min(self.open.len() - 1);
    }

    /// Closes all of them and starts again with one fresh sheet.
    pub fn close_all(&mut self) {
        *self = Self::default();
    }

    /// Writes out one circuit, where it has somewhere to go and something to
    /// write.
    fn save_at(&mut self, at: usize) -> Result<Saved, Error> {
        let Some(circuit) = self.open.get_mut(at) else {
            return Ok(Saved::NothingToDo);
        };
        let Some(path) = circuit.path.clone() else {
            return Ok(Saved::NeedsAName);
        };
        if !circuit.is_modified() {
            return Ok(Saved::NothingToDo);
        }
        schematic_file::write(&path, &mut circuit.sheet)?;
        Ok(Saved::Written)
    }
}

/// What a file is called on a tab: its name without the folder or the dot.
fn name_of(path: &Path) -> String {
    path.file_stem()
        .map_or_else(|| UNNAMED.to_owned(), |stem| stem.to_string_lossy().into())
}

#[cfg(test)]
mod tests {
    use super::{Saved, UNNAMED, Workspace};
    use crate::schematic_document::Point;
    use crate::schematic_file;
    use std::path::PathBuf;

    fn a_path(name: &str) -> PathBuf {
        let folder = std::env::temp_dir().join(format!("tiara-workspace-{}", std::process::id()));
        std::fs::create_dir_all(&folder).unwrap();
        folder.join(format!("{name}.tsc"))
    }

    fn copy_native_example(path: &std::path::Path) {
        let source = std::path::Path::new(env!("CARGO_MANIFEST_DIR"))
            .join("../../examples/4011 Oscillator.TSC");
        std::fs::copy(source, path).unwrap();
    }

    fn drawn_on(workspace: &mut Workspace) {
        workspace
            .active_mut()
            .sheet_mut()
            .place("R", Point::new(4, 4));
    }

    #[test]
    fn the_editor_starts_with_one_unnamed_sheet() {
        let workspace = Workspace::default();
        assert_eq!(workspace.count(), 1);
        assert_eq!(workspace.active().name(), UNNAMED);
        assert_eq!(workspace.active().path(), None);
        assert!(workspace.active().is_untouched());
    }

    #[test]
    fn a_new_circuit_is_told_apart_from_the_one_before_it() {
        let mut workspace = Workspace::default();
        workspace.start_a_new_one();

        assert_eq!(workspace.count(), 2);
        assert_eq!(workspace.active_index(), 1);
        assert_eq!(workspace.names(), [UNNAMED, "Noname1"]);
    }

    #[test]
    fn each_circuit_has_its_own_undo() {
        let mut workspace = Workspace::default();
        drawn_on(&mut workspace);
        workspace.start_a_new_one();

        // Nothing has been done on the new sheet, so there is nothing to undo.
        assert!(!workspace.active().sheet().can_undo());

        workspace.activate(0);
        assert!(workspace.active().sheet().can_undo());
    }

    #[test]
    fn a_place_that_is_not_there_is_ignored() {
        let mut workspace = Workspace::default();
        workspace.activate(7);
        assert_eq!(workspace.active_index(), 0);
    }

    #[test]
    fn saving_an_unnamed_circuit_asks_for_a_name_rather_than_guessing_one() {
        let mut workspace = Workspace::default();
        drawn_on(&mut workspace);
        assert_eq!(workspace.save().unwrap(), Saved::NeedsAName);
    }

    #[test]
    fn saving_under_a_name_writes_a_native_circuit() {
        let path = a_path("named");
        let _ = std::fs::remove_file(&path);
        let mut workspace = Workspace::default();
        drawn_on(&mut workspace);

        workspace.save_as(&path).unwrap();
        assert_eq!(workspace.active().name(), "named");
        assert_eq!(workspace.active().path(), Some(path.as_path()));
        assert!(!workspace.active().is_modified());
        assert_eq!(schematic_file::read(&path).unwrap().parts().len(), 1);

        let _ = std::fs::remove_file(path);
    }

    #[test]
    fn a_name_without_an_extension_is_given_the_circuit_one() {
        let folder = std::env::temp_dir().join(format!("tiara-workspace-{}", std::process::id()));
        std::fs::create_dir_all(&folder).unwrap();
        let typed = folder.join("no-extension");
        let _ = std::fs::remove_file(typed.with_extension("tsc"));

        let mut workspace = Workspace::default();
        drawn_on(&mut workspace);
        workspace.save_as(&typed).unwrap();
        assert!(typed.with_extension("tsc").exists());
        assert_eq!(
            workspace.active().path(),
            Some(typed.with_extension("tsc").as_path())
        );
        let _ = std::fs::remove_file(typed.with_extension("tsc"));
    }

    #[test]
    fn saving_again_keeps_the_last_native_source() {
        let path = a_path("again");
        copy_native_example(&path);
        let before = std::fs::read(&path).unwrap();
        let mut workspace = Workspace::default();
        workspace.open(&path).unwrap();

        // Nothing has changed since, so there is nothing to write.
        assert_eq!(workspace.save().unwrap(), Saved::NothingToDo);

        workspace
            .active_mut()
            .sheet_mut()
            .place("C", Point::new(8, 4));
        assert_eq!(workspace.save().unwrap(), Saved::Written);
        let after = std::fs::read(&path).unwrap();
        assert_ne!(after, before);
        assert!(!workspace.active().is_modified());
        assert_eq!(workspace.save().unwrap(), Saved::NothingToDo);
        assert_eq!(std::fs::read(&path).unwrap(), after);
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
    fn opening_a_circuit_takes_the_place_of_the_blank_sheet() {
        let path = a_path("opened");
        copy_native_example(&path);

        let mut workspace = Workspace::default();
        workspace.open(&path).unwrap();

        assert_eq!(workspace.count(), 1);
        assert_eq!(workspace.active().name(), "opened");
        assert!(!workspace.active().sheet().document().parts().is_empty());
        assert!(!workspace.active().is_modified());

        let _ = std::fs::remove_file(&path);
    }

    #[test]
    fn opening_a_circuit_beside_one_being_worked_on_keeps_both() {
        let path = a_path("beside");
        copy_native_example(&path);

        let mut workspace = Workspace::default();
        drawn_on(&mut workspace);
        workspace.open(&path).unwrap();

        assert_eq!(workspace.count(), 2);
        assert_eq!(workspace.active_index(), 1);
        assert_eq!(workspace.active().name(), "beside");

        let _ = std::fs::remove_file(&path);
    }

    #[test]
    fn a_circuit_already_open_is_brought_forward_rather_than_opened_twice() {
        let path = a_path("twice");
        copy_native_example(&path);
        let mut workspace = Workspace::default();
        workspace.open(&path).unwrap();
        workspace.start_a_new_one();
        assert_eq!(workspace.active_index(), 1);

        workspace.open(&path).unwrap();
        assert_eq!(workspace.count(), 2);
        assert_eq!(workspace.active_index(), 0);

        let _ = std::fs::remove_file(&path);
    }

    #[test]
    fn a_circuit_that_cannot_be_read_disturbs_nothing() {
        let path = a_path("unreadable");
        std::fs::write(&path, "not a circuit at all").unwrap();

        let mut workspace = Workspace::default();
        drawn_on(&mut workspace);
        assert!(workspace.open(&path).is_err());

        assert_eq!(workspace.count(), 1);
        assert_eq!(workspace.active().name(), UNNAMED);
        assert_eq!(workspace.active().sheet().document().parts().len(), 1);

        let _ = std::fs::remove_file(&path);
    }

    #[test]
    fn save_all_writes_named_native_circuits_and_lists_unnamed_ones() {
        let first = a_path("all-first");
        copy_native_example(&first);
        let before = std::fs::read(&first).unwrap();
        let mut workspace = Workspace::default();
        workspace.open(&first).unwrap();
        workspace
            .active_mut()
            .sheet_mut()
            .place("C", Point::new(8, 4));

        workspace.start_a_new_one();
        drawn_on(&mut workspace);

        assert_eq!(workspace.save_all().unwrap(), ["Noname1"]);
        assert_ne!(std::fs::read(&first).unwrap(), before);
        assert!(!workspace.all()[0].is_modified());

        let _ = std::fs::remove_file(&first);
    }

    #[test]
    fn closing_the_last_circuit_leaves_a_fresh_sheet() {
        let mut workspace = Workspace::default();
        drawn_on(&mut workspace);
        workspace.close();

        assert_eq!(workspace.count(), 1);
        assert_eq!(workspace.active().name(), UNNAMED);
        assert!(workspace.active().is_untouched());
    }

    #[test]
    fn closing_one_of_several_works_on_what_is_left() {
        let mut workspace = Workspace::default();
        workspace.start_a_new_one();
        workspace.start_a_new_one();
        assert_eq!(workspace.active_index(), 2);

        workspace.close();
        assert_eq!(workspace.count(), 2);
        assert_eq!(workspace.active_index(), 1);
        assert_eq!(workspace.active().name(), "Noname1");
    }

    #[test]
    fn closing_all_of_them_leaves_one_fresh_sheet() {
        let mut workspace = Workspace::default();
        drawn_on(&mut workspace);
        workspace.start_a_new_one();
        drawn_on(&mut workspace);

        workspace.close_all();
        assert_eq!(workspace.count(), 1);
        assert!(workspace.active().is_untouched());
    }

    #[test]
    fn whether_anything_is_unsaved_is_asked_of_all_of_them() {
        let mut workspace = Workspace::default();
        assert!(!workspace.any_modified());

        workspace.start_a_new_one();
        workspace.activate(0);
        drawn_on(&mut workspace);

        // The one drawn on is not the one being worked on, and it still counts.
        workspace.activate(1);
        assert!(!workspace.active().is_modified());
        assert!(workspace.any_modified());
    }
}
