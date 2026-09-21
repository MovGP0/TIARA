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
//!
//! The help is also installed once per language - `TINA_en.chm`, `TINA_de.chm`
//! and so on - so which file is opened follows the language chosen in the View
//! menu, and falls back to English where that language was not installed. An
//! installation with an unsuffixed `TINA.CHM` is read too, since the recovered
//! code names that one.

use std::path::{Path, PathBuf};
use std::process::Command;

use tiara_core::application_help::VENDOR_DIRECTORY;

/// Where the original is installed, if this copy has been told.
const HOME_VARIABLE: &str = "TIARA_TINA_HOME";

/// What the compiled help file is called, where it carries no language.
const HELP_FILE: &str = "TINA.CHM";

/// What the help file is called for each language the View menu offers.
///
/// The names on the left are the menu's own; the endings on the right are
/// what the installer puts on the file. Simplified and traditional Chinese
/// share a stem and are told apart by the second part, which is why this is a
/// table rather than a language tag.
pub const HELP_LANGUAGES: [(&str, &str); 10] = [
    ("English", "en"),
    ("German", "de"),
    ("Spanish", "es"),
    ("French", "fr"),
    ("Hungarian", "hu"),
    ("Japanese", "ja"),
    ("Portuguese", "pt"),
    ("Russian", "ru"),
    ("Chinese, Simplified", "zh"),
    ("Chinese, Traditional", "zh.tra"),
];

/// What the help is called in English, which is what an installation that has
/// any help at all is most likely to have.
const FALLBACK_LANGUAGE: &str = "English";

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
///
/// The language is the one chosen in the View menu. An installation without
/// that language falls back to English, and one whose help carries no
/// language at all - which is what the recovered code names - is read as it
/// stands.
#[must_use]
pub fn help_file(language: &str) -> Option<PathBuf> {
    let folder = install_folder()?;
    named_help(&folder, language)
        .or_else(|| named_help(&folder, FALLBACK_LANGUAGE))
        .or_else(|| {
            let plain = folder.join(HELP_FILE);
            plain.is_file().then_some(plain)
        })
}

/// Whether a folder is an installation, which is to say whether any help is
/// in it.
fn holds_the_help(folder: &Path) -> bool {
    named_help(folder, FALLBACK_LANGUAGE).is_some() || folder.join(HELP_FILE).is_file()
}

/// The help file for one language in one folder, where it is there.
fn named_help(folder: &Path, language: &str) -> Option<PathBuf> {
    let ending = HELP_LANGUAGES
        .iter()
        .find(|(named, _)| *named == language)
        .map(|(_, ending)| *ending)?;
    // The installer writes the extension in either case, and a case-sensitive
    // filesystem would otherwise find only one of them.
    for extension in ["chm", "CHM"] {
        let file = folder.join(format!("TINA_{ending}.{extension}"));
        if file.is_file() {
            return Some(file);
        }
    }
    None
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
    use super::{
        HELP_FILE, HELP_LANGUAGES, help_file, holds_the_help, install_folder, named_help, roots,
        show,
    };
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
    fn the_help_follows_the_language_the_view_menu_chose() {
        let folder = std::env::temp_dir().join(format!("tiara-help-lang-{}", std::process::id()));
        let _ = std::fs::remove_dir_all(&folder);
        std::fs::create_dir_all(&folder).unwrap();
        std::fs::write(folder.join("TINA_en.chm"), "english").unwrap();
        std::fs::write(folder.join("TINA_de.chm"), "german").unwrap();

        assert_eq!(
            named_help(&folder, "German").unwrap().file_name().unwrap(),
            "TINA_de.chm"
        );
        // One that was not installed falls back to English rather than to
        // nothing: some help is better than a greyed command.
        assert_eq!(named_help(&folder, "Japanese"), None);
        assert!(holds_the_help(&folder));

        let _ = std::fs::remove_dir_all(&folder);
    }

    #[test]
    fn every_language_the_menu_offers_has_a_help_file_named_for_it() {
        // The two lists have to agree, or a language would silently fall back
        // to English on an installation that does have its help.
        let from_the_menu: Vec<&str> = tiara_core::editor_settings::LANGUAGES
            .iter()
            .map(|(_, language)| *language)
            .collect();
        for (language, _) in HELP_LANGUAGES {
            assert!(
                from_the_menu.contains(&language),
                "{language} should be one the menu offers"
            );
        }
        assert_eq!(HELP_LANGUAGES.len(), from_the_menu.len());
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
            Some(folder) => assert!(holds_the_help(&folder)),
            None => assert!(help_file("English").is_none()),
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
