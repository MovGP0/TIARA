#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ActiveCellEditor {
    pub column: Option<usize>,
    pub row: Option<usize>,
    pub text: String,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum FinalizeOutcome {
    NoActiveEditor,
    ClosedWithoutWrite,
    Committed,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct GridEditSession {
    edit_mode: bool,
    active_editor: Option<ActiveCellEditor>,
    repaint_on_close: bool,
    repaint_requested: bool,
}

impl GridEditSession {
    pub fn begin(&mut self, editor: ActiveCellEditor, repaint_on_close: bool) {
        self.edit_mode = true;
        self.active_editor = Some(editor);
        self.repaint_on_close = repaint_on_close;
        self.repaint_requested = false;
    }

    pub fn set_text(&mut self, text: String) {
        if let Some(editor) = &mut self.active_editor {
            editor.text = text;
        }
    }

    /// Reimplements Ghidra function `FUN_01788970` at `0x01788970`.
    ///
    /// Edit mode clears before the cell setter runs. A setter error leaves the
    /// editor and coordinates available and prevents modal acceptance. Missing
    /// coordinates close the editor without a cell write.
    ///
    /// # Errors
    ///
    /// Returns the cell setter error without closing the active editor.
    pub fn finalize<E>(
        &mut self,
        mut set_cell_text: impl FnMut(usize, usize, &str) -> Result<(), E>,
    ) -> Result<FinalizeOutcome, E> {
        self.edit_mode = false;
        let Some(editor) = self.active_editor.as_ref() else {
            return Ok(FinalizeOutcome::NoActiveEditor);
        };
        let outcome = if let (Some(column), Some(row)) = (editor.column, editor.row) {
            set_cell_text(column, row, &editor.text)?;
            FinalizeOutcome::Committed
        } else {
            FinalizeOutcome::ClosedWithoutWrite
        };
        self.active_editor = None;
        self.repaint_requested = self.repaint_on_close;
        Ok(outcome)
    }

    #[must_use]
    pub const fn edit_mode(&self) -> bool {
        self.edit_mode
    }

    #[must_use]
    pub const fn active_editor(&self) -> Option<&ActiveCellEditor> {
        self.active_editor.as_ref()
    }

    #[must_use]
    pub const fn repaint_requested(&self) -> bool {
        self.repaint_requested
    }
}

#[cfg(test)]
mod tests {
    use super::{ActiveCellEditor, FinalizeOutcome, GridEditSession};

    #[test]
    fn active_positioned_editor_commits_and_closes() {
        let mut session = GridEditSession::default();
        session.begin(
            ActiveCellEditor {
                column: Some(2),
                row: Some(3),
                text: "PIN".to_owned(),
            },
            true,
        );
        let mut committed = None;
        let outcome = session
            .finalize::<()>(|column, row, text| {
                committed = Some((column, row, text.to_owned()));
                Ok(())
            })
            .expect("cell setter");
        assert_eq!(outcome, FinalizeOutcome::Committed);
        assert_eq!(committed, Some((2, 3, "PIN".to_owned())));
        assert!(!session.edit_mode());
        assert!(session.active_editor().is_none());
        assert!(session.repaint_requested());
    }

    #[test]
    fn no_editor_only_clears_edit_mode() {
        let mut session = GridEditSession::default();
        let outcome = session
            .finalize::<()>(|_, _, _| unreachable!("no setter call"))
            .expect("no editor");
        assert_eq!(outcome, FinalizeOutcome::NoActiveEditor);
        assert!(!session.repaint_requested());
    }

    #[test]
    fn setter_error_keeps_editor_but_leaves_edit_mode_clear() {
        let mut session = GridEditSession::default();
        session.begin(
            ActiveCellEditor {
                column: Some(0),
                row: Some(0),
                text: "invalid".to_owned(),
            },
            false,
        );
        let result = session.finalize(|_, _, _| Err("validation"));
        assert_eq!(result, Err("validation"));
        assert!(!session.edit_mode());
        assert!(session.active_editor().is_some());
    }

    #[test]
    fn invalid_coordinates_close_without_writing() {
        let mut session = GridEditSession::default();
        session.begin(
            ActiveCellEditor {
                column: None,
                row: Some(0),
                text: "PIN".to_owned(),
            },
            false,
        );
        let outcome = session
            .finalize::<()>(|_, _, _| unreachable!("invalid coordinates"))
            .expect("close editor");
        assert_eq!(outcome, FinalizeOutcome::ClosedWithoutWrite);
        assert!(session.active_editor().is_none());
    }
}
