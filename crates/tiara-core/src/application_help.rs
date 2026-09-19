//! Showing help, and deciding where the application keeps its data.
//!
//! Both of these are about locating something outside the program: a help
//! topic in a compiled file, or a folder the application may write to. They
//! sit together because both answer the same shape of question — where does
//! this live, and who owns the window or the directory once it is found.

/// The vendor directory every installation keeps its data under.
pub const VENDOR_DIRECTORY: &str = r"DesignSoft\";

/// The help command the recovered code sends.
///
/// Part of Ghidra function `FUN_01d46890` at `0x01D46890`.
///
/// It asks for a numbered topic rather than a keyword, so the caller and the
/// help file have to agree on numbers — which is why the topics are constants
/// throughout the application rather than strings.
pub const HELP_CONTEXT_COMMAND: u32 = 0x0f;

/// Which way one help request is answered.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum HelpRoute {
    /// Handed to the system help viewer for a compiled help file.
    SystemViewer,
    /// Shown in the application's own window.
    OwnWindow,
}

/// Which route a help request takes.
///
/// Part of Ghidra function `FUN_01d46890` at `0x01D46890`.
///
/// One global setting decides, and it decides for the whole application
/// rather than per request — so help is consistently one or the other and a
/// user never sees both kinds in one session.
#[must_use]
pub const fn help_route(use_own_window: bool) -> HelpRoute {
    if use_own_window {
        HelpRoute::OwnWindow
    } else {
        HelpRoute::SystemViewer
    }
}

/// What showing help needs from the application.
pub trait HelpHost {
    /// Whether help is shown in the application's own window.
    fn uses_own_window(&mut self) -> bool;

    /// Makes sure the help file's location is known.
    fn resolve_help_file(&mut self);

    /// The help file one topic belongs to.
    fn help_file_for(&mut self, topic: &str) -> String;

    /// Hands a numbered topic to the system viewer.
    fn show_in_system_viewer(&mut self, file: &str, command: u32, topic: i32);

    /// The file the application's own help window currently holds, if it has
    /// one open.
    fn own_window_file(&mut self) -> Option<String>;

    /// Opens the application's own help window on one file, replacing any
    /// window already open.
    fn open_own_window(&mut self, file: &str);

    /// Shows one numbered topic in the window already open.
    fn show_in_own_window(&mut self, topic: i32);
}

/// Implements Ghidra function `FUN_01d46890` at `0x01D46890`.
///
/// Shows one numbered help topic.
///
/// The application's own help window is kept between requests and only
/// rebuilt when the *file* changes, so asking for several topics of one file
/// reuses one window — which is what lets the user keep their place in it.
/// A request for a different file replaces the window rather than opening a
/// second one.
///
/// The system-viewer route builds the file's path afresh every time instead,
/// because the viewer is not the application's to keep.
///
/// Returns which route was taken.
pub fn show_help_topic(host: &mut impl HelpHost, topic: i32, help_file: &str) -> HelpRoute {
    if !host.uses_own_window() {
        host.resolve_help_file();
        let file = host.help_file_for(help_file);
        host.show_in_system_viewer(&file, HELP_CONTEXT_COMMAND, topic);
        return HelpRoute::SystemViewer;
    }

    if host.own_window_file().as_deref() != Some(help_file) {
        host.open_own_window(help_file);
    }
    host.show_in_own_window(topic);
    HelpRoute::OwnWindow
}

/// Where the application keeps its per-user data.
///
/// Part of Ghidra function `FUN_01d7c570` at `0x01D7C570`.
///
/// Built under the user's documents folder rather than beside the
/// installation, so it survives a reinstall and works without write access to
/// the program directory.
#[must_use]
pub fn user_data_directory(documents: &str, application: &str, separator: &str) -> String {
    format!("{documents}{separator}{VENDOR_DIRECTORY}{application}")
}

/// Where a shared copy of the same data lives.
///
/// Part of Ghidra function `FUN_01d7c570` at `0x01D7C570`.
///
/// Under the Windows directory, which every user can read — the counterpart
/// to the per-user one, and the reason the two are offered together.
#[must_use]
pub fn shared_data_directory(windows: &str, application: &str) -> String {
    format!("{windows}{VENDOR_DIRECTORY}{application}")
}

/// What filling in the folder fields needs from the system.
pub trait DataFolderHost {
    /// The name the vendor directory is qualified by.
    fn application_name(&mut self) -> String;

    /// The user's documents folder, when the system will say.
    fn documents_folder(&mut self) -> Option<String>;

    /// The separator joining a folder to what is under it.
    fn path_separator(&mut self) -> String;

    /// The Windows directory, when the system will say.
    fn windows_folder(&mut self) -> Option<String>;

    /// Fills in the primary folder field.
    fn set_primary_folder(&mut self, path: &str);

    /// The primary folder field's current text.
    fn primary_folder(&mut self) -> String;

    /// Fills in the field that mirrors the primary one.
    fn set_mirror_folder(&mut self, path: &str);

    /// Fills in the shared folder field.
    fn set_shared_folder(&mut self, path: &str);
}

/// Implements Ghidra function `FUN_01d7c570` at `0x01D7C570`.
///
/// Fills in the folders the application will keep its data in.
///
/// The mirror field is filled from the primary field's *text* rather than
/// from the path just computed, so a primary folder the system refused to
/// name leaves both blank together instead of leaving them disagreeing. That
/// is why the read-back is not redundant.
///
/// Either folder can be missing independently: a system that will not name
/// the documents folder still yields a shared one, and the reverse.
pub fn fill_data_folders(host: &mut impl DataFolderHost) {
    let application = host.application_name();

    if let Some(documents) = host.documents_folder() {
        let separator = host.path_separator();
        let path = user_data_directory(&documents, &application, &separator);
        host.set_primary_folder(&path);
    }

    let mirrored = host.primary_folder();
    host.set_mirror_folder(&mirrored);

    if let Some(windows) = host.windows_folder() {
        let path = shared_data_directory(&windows, &application);
        host.set_shared_folder(&path);
    }
}

#[cfg(test)]
mod help_and_folder_tests {
    use super::*;

    #[test]
    fn the_route_is_decided_by_one_setting_for_the_whole_application() {
        assert_eq!(help_route(false), HelpRoute::SystemViewer);
        assert_eq!(help_route(true), HelpRoute::OwnWindow);
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum Step {
        Resolve,
        SystemViewer(String, u32, i32),
        OpenWindow(String),
        ShowTopic(i32),
    }

    #[derive(Debug, Default)]
    struct Application {
        own_window: bool,
        open_file: Option<String>,
        steps: Vec<Step>,
    }

    impl HelpHost for Application {
        fn uses_own_window(&mut self) -> bool {
            self.own_window
        }

        fn resolve_help_file(&mut self) {
            self.steps.push(Step::Resolve);
        }

        fn help_file_for(&mut self, topic: &str) -> String {
            format!(r"C:\Tina\{topic}")
        }

        fn show_in_system_viewer(&mut self, file: &str, command: u32, topic: i32) {
            self.steps
                .push(Step::SystemViewer(file.to_owned(), command, topic));
        }

        fn own_window_file(&mut self) -> Option<String> {
            self.open_file.clone()
        }

        fn open_own_window(&mut self, file: &str) {
            self.open_file = Some(file.to_owned());
            self.steps.push(Step::OpenWindow(file.to_owned()));
        }

        fn show_in_own_window(&mut self, topic: i32) {
            self.steps.push(Step::ShowTopic(topic));
        }
    }

    #[test]
    fn the_system_viewer_is_asked_for_a_numbered_topic() {
        let mut host = Application::default();

        assert_eq!(
            show_help_topic(&mut host, 0x469, "TINA.CHM"),
            HelpRoute::SystemViewer
        );
        assert_eq!(
            host.steps,
            [
                Step::Resolve,
                Step::SystemViewer(r"C:\Tina\TINA.CHM".to_owned(), 0x0f, 0x469),
            ]
        );
    }

    #[test]
    fn the_own_window_is_reused_for_further_topics_of_the_same_file() {
        let mut host = Application {
            own_window: true,
            ..Application::default()
        };

        show_help_topic(&mut host, 1, "TINA.CHM");
        host.steps.clear();
        show_help_topic(&mut host, 2, "TINA.CHM");

        assert_eq!(host.steps, [Step::ShowTopic(2)]);
    }

    #[test]
    fn a_different_file_replaces_the_window_rather_than_opening_a_second() {
        let mut host = Application {
            own_window: true,
            open_file: Some("OLD.CHM".to_owned()),
            ..Application::default()
        };

        show_help_topic(&mut host, 5, "TINA.CHM");

        assert_eq!(
            host.steps,
            [Step::OpenWindow("TINA.CHM".to_owned()), Step::ShowTopic(5),]
        );
    }

    #[test]
    fn the_own_window_route_never_resolves_a_file_path() {
        let mut host = Application {
            own_window: true,
            ..Application::default()
        };
        show_help_topic(&mut host, 1, "TINA.CHM");

        assert!(!host.steps.contains(&Step::Resolve));
    }

    #[test]
    fn the_user_folder_sits_under_documents_rather_than_the_installation() {
        assert_eq!(
            user_data_directory(r"C:\Users\Me\Documents", "TINA", "\\"),
            r"C:\Users\Me\Documents\DesignSoft\TINA"
        );
    }

    #[test]
    fn the_shared_folder_sits_under_the_windows_directory() {
        assert_eq!(
            shared_data_directory(r"C:\Windows\", "TINA"),
            r"C:\Windows\DesignSoft\TINA"
        );
    }

    #[derive(Debug, Default)]
    struct Folders {
        documents: Option<String>,
        windows: Option<String>,
        primary: String,
        mirror: Option<String>,
        shared: Option<String>,
    }

    impl DataFolderHost for Folders {
        fn application_name(&mut self) -> String {
            "TINA".to_owned()
        }

        fn documents_folder(&mut self) -> Option<String> {
            self.documents.clone()
        }

        fn path_separator(&mut self) -> String {
            "\\".to_owned()
        }

        fn windows_folder(&mut self) -> Option<String> {
            self.windows.clone()
        }

        fn set_primary_folder(&mut self, path: &str) {
            self.primary = path.to_owned();
        }

        fn primary_folder(&mut self) -> String {
            self.primary.clone()
        }

        fn set_mirror_folder(&mut self, path: &str) {
            self.mirror = Some(path.to_owned());
        }

        fn set_shared_folder(&mut self, path: &str) {
            self.shared = Some(path.to_owned());
        }
    }

    #[test]
    fn both_folders_are_filled_in_when_the_system_names_them() {
        let mut host = Folders {
            documents: Some(r"C:\Users\Me\Documents".to_owned()),
            windows: Some(r"C:\Windows\".to_owned()),
            ..Folders::default()
        };

        fill_data_folders(&mut host);

        assert_eq!(host.primary, r"C:\Users\Me\Documents\DesignSoft\TINA");
        assert_eq!(host.shared.as_deref(), Some(r"C:\Windows\DesignSoft\TINA"));
    }

    #[test]
    fn the_mirror_follows_the_field_rather_than_the_computed_path() {
        // The system refuses the documents folder, so the primary field keeps
        // whatever it had — and the mirror matches it rather than disagreeing.
        let mut host = Folders {
            documents: None,
            primary: "left over".to_owned(),
            ..Folders::default()
        };

        fill_data_folders(&mut host);

        assert_eq!(host.mirror.as_deref(), Some("left over"));
    }

    #[test]
    fn either_folder_can_be_missing_without_the_other() {
        let mut no_documents = Folders {
            windows: Some(r"C:\Windows\".to_owned()),
            ..Folders::default()
        };
        fill_data_folders(&mut no_documents);
        assert!(no_documents.primary.is_empty());
        assert!(no_documents.shared.is_some());

        let mut no_windows = Folders {
            documents: Some(r"C:\Docs".to_owned()),
            ..Folders::default()
        };
        fill_data_folders(&mut no_windows);
        assert!(!no_windows.primary.is_empty());
        assert!(no_windows.shared.is_none());
    }
}
