//! Showing the original's help.
//!
//! `Help > Contents` and `Help > Component Help` open `TINA.CHM`, the
//! compiled help file the original installs beside itself, in the system's
//! help viewer. The port does not ship a copy - the file is the vendor's,
//! not ours - so it opens the installed one where there is an installation, and
//! the two commands are greyed where there is not.
//!
//! Finding the installation is the awkward part. The original knows where it
//! put itself; the port has to look. `TIARA_TINA_HOME` says outright, and
//! failing that the usual places are tried, one folder deep under the vendor
//! directory so that any version is found rather than one named here.

use std::path::{Path, PathBuf};
use std::process::Command;

use tiara_core::application_help::VENDOR_DIRECTORY;

/// Where the original is installed, if this copy has been told.
const HOME_VARIABLE: &str = "TIARA_TINA_HOME";

/// What the compiled help file is called.
const HELP_FILE: &str = "TINA.CHM";

/// The program Windows opens a compiled help file with.
const HELP_VIEWER: &str = "hh.exe";

/// The installation the port will read the help out of, if there is one.
///
/// The variable is asked first, so a machine with two installations - or one
/// in a place nobody would guess - can say which. Otherwise the vendor
/// directory under each of the usual roots is looked through, one folder
/// deep: the installation names itself after its version, and naming versions
/// here would date badly.
#[must_use]
pub fn install_folder() -> Option<PathBuf> {
    if let Some(named) = std::env::var_os(HOME_VARIABLE) {
        let named = PathBuf::from(named);
        return holds_the_help(&named).then_some(named);
    }

    for root in roots() {
        let vendor = root.join(VENDOR_DIRECTORY.trim_end_matches('\\'));
        if holds_the_help(&vendor) {
            return Some(vendor);
        }
        let Ok(inside) = std::fs::read_dir(&vendor) else {
            continue;
        };
        for entry in inside.flatten() {
            let folder = entry.path();
            if holds_the_help(&folder) {
                return Some(folder);
            }
        }
    }
    None
}

/// The help file itself, where there is an installation holding one.
#[must_use]
pub fn help_file() -> Option<PathBuf> {
    let file = install_folder()?.join(HELP_FILE);
    file.is_file().then_some(file)
}

/// Whether a folder is an installation, which is to say whether the help is
/// in it.
fn holds_the_help(folder: &Path) -> bool {
    folder.join(HELP_FILE).is_file()
}

/// The places an installation is looked for, most likely first.
///
/// `C:\Tina` is on the list because the recovered code's own example uses it:
/// older installations put themselves straight under the drive.
fn roots() -> Vec<PathBuf> {
    let mut roots = Vec::new();
    for variable in ["ProgramFiles(x86)", "ProgramFiles", "ProgramW6432"] {
        if let Some(root) = std::env::var_os(variable) {
            roots.push(PathBuf::from(root));
        }
    }
    roots.push(PathBuf::from(r"C:\"));
    roots
}

/// Opens a help file in the system's help viewer.
///
/// # Errors
///
/// Whatever the system said when it was asked, and an error naming the file
/// where it is not there at all. Compiled help is a Windows thing, so
/// anywhere else this says so rather than pretending.
pub fn show(file: &Path) -> std::io::Result<()> {
    if !file.is_file() {
        return Err(std::io::Error::new(
            std::io::ErrorKind::NotFound,
            format!("{} is not there", file.display()),
        ));
    }
    if !cfg!(target_os = "windows") {
        return Err(std::io::Error::new(
            std::io::ErrorKind::Unsupported,
            "compiled help needs the Windows help viewer",
        ));
    }
    Command::new(HELP_VIEWER).arg(file).status().map(|_| ())
}

#[cfg(test)]
mod tests {
    use super::{HELP_FILE, help_file, holds_the_help, install_folder, roots, show};
    use std::path::PathBuf;

    #[test]
    fn a_folder_is_an_installation_when_the_help_is_in_it() {
        let folder = std::env::temp_dir().join(format!("tiara-help-{}", std::process::id()));
        let _ = std::fs::remove_dir_all(&folder);
        std::fs::create_dir_all(&folder).unwrap();

        assert!(!holds_the_help(&folder));
        std::fs::write(folder.join(HELP_FILE), "not really a help file").unwrap();
        assert!(holds_the_help(&folder));

        let _ = std::fs::remove_dir_all(&folder);
    }

    #[test]
    fn the_usual_places_are_looked_through_in_order() {
        let roots = roots();
        assert!(!roots.is_empty());
        // The last is the bare drive, which is where the recovered code's own
        // example put it.
        assert_eq!(roots[roots.len() - 1], PathBuf::from(r"C:\"));
    }

    #[test]
    fn the_help_is_only_offered_where_there_is_an_installation() {
        // The test runner shares one environment, so this reads what is there
        // rather than setting it: either an installation was found and it
        // holds the file, or there is none and nothing is offered.
        match install_folder() {
            Some(folder) => assert!(folder.join(HELP_FILE).is_file()),
            None => assert!(help_file().is_none()),
        }
    }

    #[test]
    fn a_file_that_is_not_there_is_refused_before_anything_starts() {
        let missing = std::env::temp_dir().join("tiara-no-such-help.chm");
        let _ = std::fs::remove_file(&missing);

        let refused = show(&missing);
        assert!(refused.is_err());
        assert_eq!(refused.unwrap_err().kind(), std::io::ErrorKind::NotFound);
    }
}
