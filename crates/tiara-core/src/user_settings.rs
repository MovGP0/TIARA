//! The odd named settings a window keeps between runs.
//!
//! The original keeps these in the registry, one name and one string at a
//! time - the folder the `LTSpice` import last looked in, the file it last
//! read. There are too few of them to give each a field of its own and they
//! belong to no one window's shape, so they live here as a map.
//!
//! Writing is deliberately best-effort, which is what the recovered writer
//! does: it ignores a registry branch it cannot open, because failing to
//! remember which folder someone last used is not worth interrupting them
//! over.

use std::collections::BTreeMap;
use std::path::{Path, PathBuf};

/// What the file is called.
pub const FILE: &str = "user-settings.json";

/// The named settings, and where they are kept.
#[derive(Debug, Clone, Default)]
pub struct UserSettings {
    path: Option<PathBuf>,
    values: BTreeMap<String, String>,
}

impl UserSettings {
    /// The settings kept in a file, or empty ones where there is no file yet.
    ///
    /// A file that cannot be read or makes no sense is not a fault: it means
    /// nothing has been kept yet.
    #[must_use]
    pub fn read(path: &Path) -> Self {
        let values = std::fs::read_to_string(path)
            .ok()
            .and_then(|text| serde_json::from_str(&text).ok())
            .unwrap_or_default();
        Self {
            path: Some(path.to_path_buf()),
            values,
        }
    }

    /// Settings kept nowhere, which is what a test uses.
    #[must_use]
    pub fn in_memory() -> Self {
        Self::default()
    }

    /// What a name was last set to.
    #[must_use]
    pub fn get(&self, name: &str) -> Option<&str> {
        self.values.get(name).map(String::as_str)
    }

    /// Sets a name and writes the file, where there is one to write.
    ///
    /// Says nothing about whether the write worked, because nothing should
    /// act differently if it did not.
    pub fn set(&mut self, name: &str, value: &str) {
        self.values.insert(name.to_owned(), value.to_owned());
        self.write();
    }

    /// Writes the settings back, quietly.
    fn write(&self) {
        let Some(path) = &self.path else {
            return;
        };
        if let Some(directory) = path.parent() {
            let _ = std::fs::create_dir_all(directory);
        }
        if let Ok(text) = serde_json::to_string_pretty(&self.values) {
            let _ = std::fs::write(path, text);
        }
    }

    /// Where these settings are kept, if anywhere.
    #[must_use]
    pub fn path(&self) -> Option<&Path> {
        self.path.as_deref()
    }
}

#[cfg(test)]
mod tests {
    use super::{FILE, UserSettings};
    use std::path::PathBuf;

    fn a_path(name: &str) -> PathBuf {
        std::env::temp_dir().join(format!("tiara-user-settings-{}-{name}", std::process::id()))
    }

    #[test]
    fn settings_kept_nowhere_still_answer() {
        let mut settings = UserSettings::in_memory();
        assert_eq!(settings.get("LT_ImportDir"), None);

        settings.set("LT_ImportDir", r"C:\circuits");
        assert_eq!(settings.get("LT_ImportDir"), Some(r"C:\circuits"));
        assert_eq!(settings.path(), None);
    }

    #[test]
    fn what_was_set_comes_back_the_next_time() {
        let folder = a_path("kept");
        let _ = std::fs::remove_dir_all(&folder);
        let path = folder.join(FILE);

        let mut settings = UserSettings::read(&path);
        settings.set("LT_ImportFileName", "divider.asc");
        assert!(path.exists());

        let again = UserSettings::read(&path);
        assert_eq!(again.get("LT_ImportFileName"), Some("divider.asc"));

        let _ = std::fs::remove_dir_all(&folder);
    }

    #[test]
    fn a_file_that_is_not_settings_leaves_them_empty() {
        let folder = a_path("bad");
        let _ = std::fs::remove_dir_all(&folder);
        std::fs::create_dir_all(&folder).unwrap();
        let path = folder.join(FILE);
        std::fs::write(&path, "not what was written there").unwrap();

        let settings = UserSettings::read(&path);
        assert_eq!(settings.get("anything"), None);

        let _ = std::fs::remove_dir_all(&folder);
    }
}
