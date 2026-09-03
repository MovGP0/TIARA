//! Language-specific application help-file resolution.

use std::ffi::OsString;
use std::path::{Path, PathBuf};

/// Implements Ghidra function `FUN_01b1def0` at `0x01B1DEF0`.
///
/// Inserts an underscore and the current language marker before the explicit
/// help path's extension. The localized candidate is returned only when it
/// exists. A missing candidate or a path without a file name silently falls
/// back to the original path.
#[must_use]
pub fn resolve_localized_help_file(path: &Path, language: &str) -> PathBuf {
    resolve_localized_help_file_with(path, language, Path::exists)
}

fn resolve_localized_help_file_with(
    path: &Path,
    language: &str,
    exists: impl FnOnce(&Path) -> bool,
) -> PathBuf {
    let Some(stem) = path.file_stem() else {
        return path.to_path_buf();
    };
    let mut file_name = OsString::from(stem);
    file_name.push("_");
    file_name.push(language);
    if let Some(extension) = path.extension() {
        file_name.push(".");
        file_name.push(extension);
    }
    let candidate = path.with_file_name(file_name);
    if exists(&candidate) {
        candidate
    } else {
        path.to_path_buf()
    }
}

#[cfg(test)]
mod tests {
    use std::path::{Path, PathBuf};

    use super::resolve_localized_help_file_with;

    #[test]
    fn existing_language_candidate_is_selected_before_extension() {
        let path = Path::new("help/archive/TINA.CHM");
        let resolved = resolve_localized_help_file_with(path, "de", |candidate| {
            candidate == Path::new("help/archive/TINA_de.CHM")
        });

        assert_eq!(resolved, PathBuf::from("help/archive/TINA_de.CHM"));
    }

    #[test]
    fn missing_language_candidate_falls_back_to_original_path() {
        let path = Path::new("help/filterhelp.chm");

        assert_eq!(
            resolve_localized_help_file_with(path, "hu", |_| false),
            path
        );
    }

    #[test]
    fn extensionless_help_path_appends_language_marker() {
        let path = Path::new("help/manual");
        let resolved = resolve_localized_help_file_with(path, "fr", |candidate| {
            candidate == Path::new("help/manual_fr")
        });

        assert_eq!(resolved, PathBuf::from("help/manual_fr"));
    }
}
