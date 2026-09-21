//! What the `LTSpice` import dialog needs from the rest of the program.
//!
//! The dialog owns its services, and the editor owns the sheet, so the two
//! cannot hold one another. They share a small box instead: the services read
//! the file and leave the circuit in it, and the shell takes the circuit out
//! and opens it. That keeps the dialog testable, leaves the editor in one
//! place, and means the reading happens where the reading belongs.

use std::path::{Path, PathBuf};

use tiara_core::schematic_document::Document;
use tiara_core::user_settings::UserSettings as NamedSettings;
use tiara_core::{ltspice_schematic, user_settings};

use super::{ImportError, LtspiceSchematicPort, UserSettings};

/// What an import leaves behind for the shell to pick up.
#[derive(Debug, Default)]
pub struct Imported {
    /// The circuit that was read, until someone takes it.
    pub document: Option<Document>,
    /// Where it came from.
    pub path: Option<PathBuf>,
}

impl Imported {
    /// Takes the circuit, if one is waiting.
    pub fn take(&mut self) -> Option<(Document, Option<PathBuf>)> {
        let document = self.document.take()?;
        Some((document, self.path.take()))
    }
}

/// The services the dialog is given.
#[derive(Debug, Default)]
pub struct Services {
    settings: NamedSettings,
    imported: Imported,
}

impl Services {
    /// Services that keep their settings beside the editor's.
    #[must_use]
    pub fn new(settings_folder: Option<&Path>) -> Self {
        let settings = settings_folder.map_or_else(NamedSettings::in_memory, |folder| {
            NamedSettings::read(&folder.join(user_settings::FILE))
        });
        Self {
            settings,
            imported: Imported::default(),
        }
    }

    /// Takes whatever the last import read, if it read anything.
    ///
    /// This is how the circuit reaches the editor: the dialog cannot hold
    /// the editor and the editor cannot hold the dialog, so the shell asks
    /// the services after every message the dialog answers.
    pub fn take_imported(&mut self) -> Option<(Document, Option<PathBuf>)> {
        self.imported.take()
    }
}

impl UserSettings for Services {
    fn read_user_setting(&mut self, name: &str) -> Result<Option<String>, ImportError> {
        Ok(self.settings.get(name).map(ToOwned::to_owned))
    }

    fn write_user_setting_best_effort(&mut self, name: &str, value: &str) {
        self.settings.set(name, value);
    }
}

impl LtspiceSchematicPort for Services {
    fn is_accessible_file(&self, path: &Path) -> bool {
        path.is_file()
    }

    fn create_new_schematic(&mut self) -> Result<(), ImportError> {
        // Whatever was read before has been dealt with or given up on.
        self.imported.document = None;
        self.imported.path = None;
        Ok(())
    }

    fn import_ltspice_source(&mut self, source: &Path) -> Result<(), ImportError> {
        let document = ltspice_schematic::read_file(source)
            .map_err(|error| ImportError::Schematic(error.to_string()))?;
        self.imported.document = Some(document);
        Ok(())
    }

    fn set_current_document_path(&mut self, path: &Path) -> Result<(), ImportError> {
        self.imported.path = Some(path.to_path_buf());
        Ok(())
    }

    fn assign_active_document_path(&mut self, path: &Path) -> Result<(), ImportError> {
        self.set_current_document_path(path)
    }

    fn invalidate_schematic_view(&mut self) -> Result<(), ImportError> {
        // The shell redraws every time it answers a message, so there is
        // nothing to ask for.
        Ok(())
    }
}

#[cfg(test)]
mod tests {
    use super::Services;
    use crate::ltspice_import::{ImportError, LtspiceSchematicPort, UserSettings};

    fn a_folder(name: &str) -> std::path::PathBuf {
        let folder =
            std::env::temp_dir().join(format!("tiara-ltspice-shell-{}-{name}", std::process::id()));
        let _ = std::fs::remove_dir_all(&folder);
        std::fs::create_dir_all(&folder).unwrap();
        folder
    }

    #[test]
    fn what_is_read_is_left_for_the_shell_to_take() {
        let folder = a_folder("read");
        let source = folder.join("divider.asc");
        std::fs::write(
            &source,
            "Version 4\nSYMBOL res 0 0 R0\nSYMATTR InstName R1\n",
        )
        .unwrap();

        let mut services = Services::new(Some(&folder));

        services.create_new_schematic().unwrap();
        services.import_ltspice_source(&source).unwrap();
        services.set_current_document_path(&source).unwrap();

        let taken = services.take_imported().unwrap();
        assert_eq!(taken.0.parts().len(), 1);
        assert_eq!(taken.1.as_deref(), Some(source.as_path()));
        // And once taken, nothing is left behind.
        assert!(services.take_imported().is_none());

        let _ = std::fs::remove_dir_all(&folder);
    }

    #[test]
    fn a_source_that_cannot_be_read_says_so_and_leaves_nothing() {
        let folder = a_folder("bad");
        let source = folder.join("other.asc");
        std::fs::write(&source, "not an LTspice schematic").unwrap();

        let mut services = Services::new(Some(&folder));

        let refused = services.import_ltspice_source(&source);
        assert!(matches!(refused, Err(ImportError::Schematic(_))));
        assert!(services.take_imported().is_none());

        let _ = std::fs::remove_dir_all(&folder);
    }

    #[test]
    fn a_new_schematic_clears_whatever_was_read_before() {
        let folder = a_folder("clear");
        let source = folder.join("divider.asc");
        std::fs::write(&source, "Version 4\nSYMBOL res 0 0 R0\n").unwrap();

        let mut services = Services::new(Some(&folder));
        services.import_ltspice_source(&source).unwrap();

        services.create_new_schematic().unwrap();
        assert!(services.take_imported().is_none());

        let _ = std::fs::remove_dir_all(&folder);
    }

    #[test]
    fn the_folder_last_used_is_remembered_between_runs() {
        let folder = a_folder("settings");

        let mut services = Services::new(Some(&folder));
        assert_eq!(services.read_user_setting("LT_ImportDir").unwrap(), None);
        services.write_user_setting_best_effort("LT_ImportDir", r"C:\circuits");

        let mut again = Services::new(Some(&folder));
        assert_eq!(
            again.read_user_setting("LT_ImportDir").unwrap().as_deref(),
            Some(r"C:\circuits")
        );

        let _ = std::fs::remove_dir_all(&folder);
    }

    #[test]
    fn services_with_nowhere_to_keep_settings_still_work() {
        let mut services = Services::new(None);

        services.write_user_setting_best_effort("LT_ImportDir", "somewhere");
        assert_eq!(
            services
                .read_user_setting("LT_ImportDir")
                .unwrap()
                .as_deref(),
            Some("somewhere")
        );
        assert!(!services.is_accessible_file(std::path::Path::new("no-such-file")));
    }
}
