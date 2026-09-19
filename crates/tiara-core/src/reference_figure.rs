//! Showing the reference figure that goes with a test case.
//!
//! A test case may have a picture beside it — a schematic or a screenshot of
//! what the result is supposed to look like — and this is what puts it on
//! screen. The picture is not recorded anywhere: it is found by building its
//! name out of the test case's own, so a case either has one or does not, and
//! nothing has to be kept in step.

/// What a figure's file name ends with.
///
/// Part of Ghidra function `FUN_012f8050` at `0x012F8050`.
///
/// The leading space is part of it: the name is the test case's own with this
/// appended, so a case called `Filter` looks for `Filter Figure.jpg`.
pub const FIGURE_SUFFIX: &str = " Figure.jpg";

/// Reported when a test case has no figure beside it.
///
/// Part of Ghidra function `FUN_012f8050` at `0x012F8050`.
///
/// It says nothing about which figure or where it was looked for, so a case
/// whose figure is misnamed and one that never had a figure at all read the
/// same to whoever is looking at it.
pub const MISSING_FIGURE_MESSAGE: &str = "Figure does not exist.";

/// Implements part of Ghidra function `FUN_012f8050` at `0x012F8050`.
///
/// Where the figure for one test case would be.
///
/// The folder is built in two parts because the recovered code concatenates
/// four: a folder, a separator that did not survive as a typed constant, the
/// case's name and the suffix.
#[must_use]
pub fn figure_path(folder: &str, separator: &str, case_name: &str) -> String {
    format!("{folder}{separator}{case_name}{FIGURE_SUFFIX}")
}

/// Implements part of Ghidra function `FUN_012f8050` at `0x012F8050`.
///
/// What the figure window is titled.
#[must_use]
pub fn figure_caption(case_name: &str) -> String {
    format!("Reference figure - {case_name}")
}

/// What showing a figure needs of the application around it.
///
/// Part of Ghidra function `FUN_012f8050` at `0x012F8050`.
pub trait ReferenceFigureHost {
    /// Whether a file is there to be shown.
    fn file_exists(&self, path: &str) -> bool;

    /// Tells whoever is looking that there is nothing to show.
    fn report(&mut self, message: &str);

    /// Titles the figure window.
    fn set_caption(&mut self, caption: &str);

    /// Implements Ghidra function `FUN_012e2da0` at `0x012E2DA0`.
    ///
    /// Reads the picture at one path into the figure window's image.
    ///
    /// One line in the original, and the whole of what the figure window does
    /// with a file: the path goes straight to the picture, which decides for
    /// itself what kind of file it is. Nothing is checked here, because the
    /// caller has already found the file; a file that exists but is not a
    /// picture fails inside the picture rather than here.
    fn load_picture(&mut self, path: &str);

    /// Puts the figure window on screen.
    fn show(&mut self);
}

/// Implements Ghidra function `FUN_012f8050` at `0x012F8050`.
///
/// Shows the reference figure for one test case, or says there is none.
///
/// The window is made before anything is known about the file, so a case with
/// no figure still leaves one behind — the recovered code assigns the new
/// window to the application and only then looks, and the branch that reports
/// the failure neither shows nor releases it. Each attempt makes another.
///
/// Nothing is loaded and nothing is shown when the file is missing, so the
/// window that was made stays as it was: on a second attempt after a first one
/// succeeded, the previous figure is what is still there to be seen.
///
/// Returns whether the figure was shown.
pub fn show_reference_figure<Host: ReferenceFigureHost>(
    host: &mut Host,
    folder: &str,
    separator: &str,
    case_name: &str,
) -> bool {
    let path = figure_path(folder, separator, case_name);
    if !host.file_exists(&path) {
        host.report(MISSING_FIGURE_MESSAGE);
        return false;
    }

    host.set_caption(&figure_caption(case_name));
    host.load_picture(&path);
    host.show();
    true
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Default)]
    struct Viewer {
        present: Vec<String>,
        reported: Vec<String>,
        caption: Option<String>,
        loaded: Vec<String>,
        shown: usize,
    }

    impl ReferenceFigureHost for Viewer {
        fn file_exists(&self, path: &str) -> bool {
            self.present.iter().any(|held| held == path)
        }

        fn report(&mut self, message: &str) {
            self.reported.push(message.to_owned());
        }

        fn set_caption(&mut self, caption: &str) {
            self.caption = Some(caption.to_owned());
        }

        fn load_picture(&mut self, path: &str) {
            self.loaded.push(path.to_owned());
        }

        fn show(&mut self) {
            self.shown += 1;
        }
    }

    #[test]
    fn a_figure_is_named_after_the_case_it_belongs_to() {
        assert_eq!(
            figure_path(r"D:\cases", r"\", "Filter"),
            r"D:\cases\Filter Figure.jpg"
        );
    }

    #[test]
    fn the_suffix_carries_its_own_leading_space() {
        assert!(FIGURE_SUFFIX.starts_with(' '));
        assert!(figure_path("", "", "Filter").starts_with("Filter "));
    }

    #[test]
    fn the_window_is_titled_after_the_case() {
        assert_eq!(figure_caption("Filter"), "Reference figure - Filter");
    }

    #[test]
    fn a_case_with_a_figure_has_it_titled_loaded_and_shown() {
        let path = r"D:\cases\Filter Figure.jpg";
        let mut viewer = Viewer {
            present: vec![path.to_owned()],
            ..Viewer::default()
        };

        assert!(show_reference_figure(
            &mut viewer,
            r"D:\cases",
            r"\",
            "Filter"
        ));
        assert_eq!(viewer.caption.as_deref(), Some("Reference figure - Filter"));
        assert_eq!(viewer.loaded, [path]);
        assert_eq!(viewer.shown, 1);
    }

    #[test]
    fn the_title_is_set_before_the_picture_is_read() {
        // So a large picture is read into a window that already says what it
        // is showing.
        let path = r"D:\cases\Filter Figure.jpg";
        let mut viewer = Viewer {
            present: vec![path.to_owned()],
            ..Viewer::default()
        };
        show_reference_figure(&mut viewer, r"D:\cases", r"\", "Filter");

        assert!(viewer.caption.is_some());
        assert_eq!(viewer.loaded.len(), 1);
    }

    #[test]
    fn a_case_without_one_is_reported_and_nothing_is_shown() {
        let mut viewer = Viewer::default();

        assert!(!show_reference_figure(
            &mut viewer,
            r"D:\cases",
            r"\",
            "Filter"
        ));
        assert_eq!(viewer.reported, [MISSING_FIGURE_MESSAGE]);
        assert!(viewer.loaded.is_empty());
        assert_eq!(viewer.shown, 0);
    }

    #[test]
    fn the_message_does_not_say_which_figure_was_looked_for() {
        assert!(!MISSING_FIGURE_MESSAGE.contains("Filter"));
        assert!(!MISSING_FIGURE_MESSAGE.contains(FIGURE_SUFFIX));
    }

    #[test]
    fn a_failed_attempt_leaves_the_previous_figure_where_it_was() {
        let path = r"D:\cases\Filter Figure.jpg";
        let mut viewer = Viewer {
            present: vec![path.to_owned()],
            ..Viewer::default()
        };
        show_reference_figure(&mut viewer, r"D:\cases", r"\", "Filter");
        show_reference_figure(&mut viewer, r"D:\cases", r"\", "Missing");

        assert_eq!(viewer.caption.as_deref(), Some("Reference figure - Filter"));
        assert_eq!(viewer.loaded, [path]);
    }
}
