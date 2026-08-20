//! Project-owned settings that do not depend on a user-interface family.
//!
//! Library evaluation: the Rust standard library supplies the required owned
//! `String` values and ordered `Vec` replacement. No external crate or custom
//! string-list infrastructure is needed for this two-value project setting.

pub const LIBRARY_EVALUATION: &str = "Rust String supplies independent owned copies and Vec preserves the recovered standard-library then user-library order. No external crate or custom string-list infrastructure is needed.";

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct AcceptedArduinoLibraries {
    pub standard_library: String,
    pub user_library: String,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct ProjectArduinoLibraries {
    selections: Vec<String>,
}

impl ProjectArduinoLibraries {
    #[must_use]
    pub const fn new(selections: Vec<String>) -> Self {
        Self { selections }
    }

    #[must_use]
    pub fn selections(&self) -> &[String] {
        &self.selections
    }

    /// Ports Ghidra `FUN_0160e060` at `0x0160E060`.
    ///
    /// The accepted standard-library string is first and the accepted user-
    /// library string is second. Empty strings remain entries. The caller owns
    /// the outer accepted-dialog and changed-state guards.
    pub fn replace_from_accepted(&mut self, accepted: &AcceptedArduinoLibraries) {
        self.selections.clear();
        self.selections.extend([
            accepted.standard_library.clone(),
            accepted.user_library.clone(),
        ]);
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn accepted_libraries_replace_all_old_entries_in_recovered_order() {
        let mut project = ProjectArduinoLibraries::new(vec![
            "old-standard".to_owned(),
            "old-user".to_owned(),
            "unexpected-third".to_owned(),
        ]);
        let accepted = AcceptedArduinoLibraries {
            standard_library: "standard-a".to_owned(),
            user_library: "user-b".to_owned(),
        };

        project.replace_from_accepted(&accepted);

        assert_eq!(project.selections(), ["standard-a", "user-b"]);
    }

    #[test]
    fn accepted_strings_are_copied_into_project_owned_state() {
        let mut project = ProjectArduinoLibraries::default();
        let mut accepted = AcceptedArduinoLibraries {
            standard_library: "standard".to_owned(),
            user_library: "user".to_owned(),
        };

        project.replace_from_accepted(&accepted);
        accepted.standard_library.clear();
        accepted.user_library.clear();

        assert_eq!(project.selections(), ["standard", "user"]);
    }

    #[test]
    fn empty_and_unchanged_values_keep_two_exact_entries() {
        let accepted = AcceptedArduinoLibraries::default();
        let mut project = ProjectArduinoLibraries::new(vec![String::new(), String::new()]);

        project.replace_from_accepted(&accepted);

        assert_eq!(project.selections(), ["", ""]);
        assert_eq!(project.selections().len(), 2);
    }
}
