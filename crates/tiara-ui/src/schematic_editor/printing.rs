//! Putting the circuit on paper.
//!
//! The three File commands that print. The page is chosen in a panel the
//! editor shows, the preview draws the circuit on that page, and `Print`
//! writes that same drawing out and opens it.
//!
//! Opens, not prints, and the difference is worth being plain about. iced
//! has no printing and nothing in this workspace binds a print API, so what
//! the port can do is produce the page and hand it to whatever shows that
//! kind of file - a browser, for a drawing - leaving the printing one press
//! away in there. The original drives the printer. This does not, and the
//! status bar says where the drawing went so nobody is left wondering. See
//! TIARA-28o8057.

use std::path::{Path, PathBuf};
use std::process::Command;

use tiara_core::page_setup::PageSetup;
use tiara_core::schematic_drawing;

use super::SchematicEditor;

/// What a printed circuit is written to before it is handed over.
pub const DRAWING_EXTENSION: &str = "svg";

/// What the file is called where the circuit has no name of its own.
const UNNAMED_DRAWING: &str = "circuit";

/// Which of the printing panels the editor is showing, if either.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum Printing {
    /// Neither.
    #[default]
    Nothing,
    /// The page is being chosen.
    PageSetup,
    /// The circuit is being looked at on its page.
    Preview,
}

impl SchematicEditor {
    /// The page the circuit is printed on.
    #[must_use]
    pub(crate) const fn page(&self) -> &PageSetup {
        &self.settings.page
    }

    /// Which printing panel is showing.
    #[must_use]
    pub(crate) const fn printing(&self) -> Printing {
        self.printing
    }

    /// Shows one of the printing panels, or neither.
    pub(crate) const fn show_printing(&mut self, which: Printing) {
        self.printing = which;
    }

    /// Changes the page, and keeps the change.
    pub(crate) fn set_page(&mut self, page: PageSetup) {
        self.settings.page = page;
        self.remember_the_settings();
    }

    /// The circuit drawn on its page.
    ///
    /// The preview shows this and the printer is given this, which is the
    /// only way the two can agree.
    #[must_use]
    pub(crate) fn drawing(&self) -> String {
        schematic_drawing::to_svg(self.sheet().document(), self.page())
    }

    /// `File > Print...`.
    ///
    /// Writes the drawing beside the circuit, or in the temporary folder
    /// where the circuit has nowhere of its own, and opens it so it can be
    /// printed from there.
    pub(crate) fn print_click(&mut self) {
        let where_to = self.drawing_path();
        match self.write_the_drawing(&where_to) {
            Ok(()) => {
                self.said = Some(match open_for_printing(&where_to) {
                    Ok(()) => format!("{} - print it from there", where_to.display()),
                    Err(error) => format!("{}: {error}", where_to.display()),
                });
            }
            Err(error) => {
                self.said = Some(format!("{}: {error}", where_to.display()));
            }
        }
    }

    /// Writes the drawing to a file.
    ///
    /// # Errors
    ///
    /// Whatever the system said when it was written.
    pub(crate) fn write_the_drawing(&self, path: &Path) -> std::io::Result<()> {
        if let Some(folder) = path.parent().filter(|it| !it.as_os_str().is_empty()) {
            std::fs::create_dir_all(folder)?;
        }
        std::fs::write(path, self.drawing())
    }

    /// Where the drawing goes: beside the circuit, under the circuit's own
    /// name, or in the temporary folder where the circuit has no file yet.
    #[must_use]
    pub(crate) fn drawing_path(&self) -> PathBuf {
        let circuit = self.workspace.active();
        circuit.path().map_or_else(
            || {
                std::env::temp_dir().join(format!(
                    "{}.{DRAWING_EXTENSION}",
                    if circuit.name().is_empty() {
                        UNNAMED_DRAWING
                    } else {
                        circuit.name()
                    }
                ))
            },
            |path| path.with_extension(DRAWING_EXTENSION),
        )
    }
}

/// Opens a file in whatever shows that kind, so it can be printed there.
///
/// # Errors
///
/// Whatever the system said. Printing straight to a printer would need a
/// binding this workspace does not have, so this opens rather than prints,
/// and says as much.
pub fn open_for_printing(path: &Path) -> std::io::Result<()> {
    if !cfg!(target_os = "windows") {
        return Err(std::io::Error::new(
            std::io::ErrorKind::Unsupported,
            "the drawing is handed to the system to open, and only Windows is wired up",
        ));
    }
    // `start` hands the file to whatever opens that kind. The empty title
    // comes first, or it takes the path for one.
    let opened = Command::new("cmd")
        .args(["/C", "start", ""])
        .arg(path)
        .status();
    match opened {
        Ok(status) if status.success() => Ok(()),
        Ok(_) | Err(_) => Err(std::io::Error::other(
            "the system would not open it; it has been written out all the same",
        )),
    }
}

#[cfg(test)]
mod tests {
    use super::{DRAWING_EXTENSION, Printing, open_for_printing};
    use crate::schematic_editor::SchematicEditor;
    use tiara_core::page_setup::{Orientation, PageSetup, Paper};
    use tiara_core::schematic_document::Point;

    #[test]
    fn the_editor_shows_neither_panel_to_begin_with() {
        let editor = SchematicEditor::default();
        assert_eq!(editor.printing(), Printing::Nothing);
        assert_eq!(*editor.page(), PageSetup::default());
    }

    #[test]
    fn choosing_a_page_keeps_it() {
        let mut editor = SchematicEditor::default();
        let page = PageSetup {
            paper: Paper::A3,
            orientation: Orientation::Landscape,
            ..PageSetup::default()
        };

        editor.set_page(page);
        assert_eq!(*editor.page(), page);
        // And the drawing follows it: A3 the other way round is 1191 points
        // across.
        assert!(editor.drawing().contains("width=\"1190."));
    }

    #[test]
    fn the_preview_and_the_printer_are_given_the_same_drawing() {
        let mut editor = SchematicEditor::default();
        editor.sheet_mut().place("R", Point::new(4, 4));

        let shown = editor.drawing();
        let written = editor.drawing();
        assert_eq!(shown, written);
        assert!(shown.contains(">R1<"));
    }

    #[test]
    fn a_circuit_with_no_file_is_printed_from_the_temporary_folder() {
        let editor = SchematicEditor::default();
        let path = editor.drawing_path();

        assert_eq!(
            path.extension().and_then(|it| it.to_str()),
            Some(DRAWING_EXTENSION)
        );
        assert!(path.starts_with(std::env::temp_dir()));
    }

    #[test]
    fn a_circuit_with_a_file_is_printed_beside_it() {
        let folder = std::env::temp_dir().join(format!("tiara-print-{}", std::process::id()));
        let _ = std::fs::remove_dir_all(&folder);
        std::fs::create_dir_all(&folder).unwrap();
        let circuit = folder.join("divider.tsc");

        let mut editor = SchematicEditor::default();
        editor.sheet_mut().place("R", Point::new(4, 4));
        assert!(editor.save_to(Some(&circuit)));

        assert_eq!(editor.drawing_path(), circuit.with_extension("svg"));

        let _ = std::fs::remove_dir_all(&folder);
    }

    #[test]
    fn the_drawing_is_written_where_it_was_asked_for() {
        let folder = std::env::temp_dir().join(format!("tiara-print-out-{}", std::process::id()));
        let _ = std::fs::remove_dir_all(&folder);
        let path = folder.join("deeper").join("circuit.svg");

        let mut editor = SchematicEditor::default();
        editor.sheet_mut().place("R", Point::new(4, 4));
        editor.write_the_drawing(&path).unwrap();

        let written = std::fs::read_to_string(&path).unwrap();
        assert!(written.starts_with("<svg"));
        assert!(written.contains(">R1<"));

        let _ = std::fs::remove_dir_all(&folder);
    }

    #[test]
    fn the_panels_are_shown_one_at_a_time() {
        let mut editor = SchematicEditor::default();
        editor.show_printing(Printing::PageSetup);
        assert_eq!(editor.printing(), Printing::PageSetup);

        editor.show_printing(Printing::Preview);
        assert_eq!(editor.printing(), Printing::Preview);

        editor.show_printing(Printing::Nothing);
        assert_eq!(editor.printing(), Printing::Nothing);
    }

    #[test]
    fn printing_somewhere_that_is_not_windows_says_so_rather_than_failing_oddly() {
        // On Windows this hands the file over and is not run here; anywhere
        // else it says plainly that opening it is not wired up.
        if cfg!(target_os = "windows") {
            return;
        }
        let refused = open_for_printing(std::path::Path::new("nowhere.svg"));
        assert!(refused.is_err());
    }
}
