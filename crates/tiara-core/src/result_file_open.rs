//! Opening the result file that belongs to one test case.
//!
//! Which file that is follows entirely from what is on screen: the analysis
//! chosen, whether corners are being run, whether the reference or the run's
//! own results are wanted, and where the case sits. Nothing is looked up and
//! nothing is remembered — the name is rebuilt from those four every time, so
//! changing any of them changes which file is opened with no further step.

use crate::range_axis_units::AxisUnit;
use crate::test_bench::{BenchAnalysis, ResultRole, result_file_suffix};

/// Implements part of Ghidra function `FUN_01301c40` at `0x01301C40`.
///
/// Where one case's result file sits.
///
/// A case whose folder is nothing but the separator sits directly under the
/// root and is joined without one of its own — the same idiom the bench's
/// case paths are built with, and for the same reason.
#[must_use]
pub fn result_file_path(
    root: &str,
    folder: &str,
    case_name: &str,
    separator: &str,
    suffix: &str,
) -> String {
    if folder == separator {
        format!("{root}{separator}{case_name}{suffix}")
    } else {
        format!("{root}{separator}{folder}{separator}{case_name}{suffix}")
    }
}

/// What opening a result file needs of the window around it.
///
/// Part of Ghidra function `FUN_01301c40` at `0x01301C40`.
pub trait ResultFileHost {
    /// Which analysis the window is set to, as a recovered mode.
    fn analysis_mode(&mut self) -> i32;

    /// Whether corners are being run.
    fn corner_test(&mut self) -> bool;

    /// Where results are kept.
    fn result_root(&mut self) -> String;

    /// The folder the case sits in.
    fn case_folder(&mut self) -> String;

    /// The case's own name.
    fn case_name(&mut self) -> String;

    /// Opens one file, told which analysis it holds.
    fn open(&mut self, path: &str, kind: u8);
}

/// Implements Ghidra function `FUN_01301c40` at `0x01301C40`.
///
/// Opens the result file for one case, reference or test.
///
/// An analysis mode that is none of the three leaves the name without an
/// analysis of its own and the kind number unset — the recovered code never
/// assigns either, and passes whatever was on the stack to the open. Here
/// nothing is opened at all, which is the nearest defined thing to it.
///
/// Returns whether a file was opened.
pub fn open_result_file<Host: ResultFileHost>(
    host: &mut Host,
    separator: &str,
    test: bool,
) -> bool {
    let Some(unit) = AxisUnit::from_mode(host.analysis_mode()) else {
        return false;
    };

    let analysis = BenchAnalysis::from_axis_unit(unit);
    let role = if test {
        ResultRole::Test
    } else {
        ResultRole::Reference
    };
    let suffix = result_file_suffix(analysis, role, host.corner_test());

    let root = host.result_root();
    let folder = host.case_folder();
    let case = host.case_name();
    let path = result_file_path(&root, &folder, &case, separator, &suffix);

    host.open(&path, analysis.kind_code());
    true
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Default)]
    struct Window {
        mode: i32,
        corners: bool,
        root: String,
        folder: String,
        case: String,
        opened: Vec<(String, u8)>,
    }

    fn window(mode: i32) -> Window {
        Window {
            mode,
            root: r"D:\results".to_owned(),
            folder: "filters".to_owned(),
            case: "lowpass".to_owned(),
            ..Window::default()
        }
    }

    impl ResultFileHost for Window {
        fn analysis_mode(&mut self) -> i32 {
            self.mode
        }

        fn corner_test(&mut self) -> bool {
            self.corners
        }

        fn result_root(&mut self) -> String {
            self.root.clone()
        }

        fn case_folder(&mut self) -> String {
            self.folder.clone()
        }

        fn case_name(&mut self) -> String {
            self.case.clone()
        }

        fn open(&mut self, path: &str, kind: u8) {
            self.opened.push((path.to_owned(), kind));
        }
    }

    #[test]
    fn a_case_in_a_folder_sits_under_both() {
        assert_eq!(
            result_file_path(r"D:\r", "filters", "lowpass", r"\", ".refresult.tr"),
            r"D:\r\filters\lowpass.refresult.tr"
        );
    }

    #[test]
    fn a_case_whose_folder_is_the_separator_sits_directly_under_the_root() {
        assert_eq!(
            result_file_path(r"D:\r", r"\", "lowpass", r"\", ".refresult.tr"),
            r"D:\r\lowpass.refresult.tr"
        );
    }

    #[test]
    fn each_analysis_names_its_own_file() {
        let expected = [(0, ".tr"), (1, ".dc"), (2, ".ac")];
        for (mode, tail) in expected {
            let mut host = window(mode);
            open_result_file(&mut host, r"\", false);

            assert!(host.opened[0].0.ends_with(tail), "{mode}");
        }
    }

    #[test]
    fn each_analysis_is_opened_with_its_own_kind_number() {
        let expected = [(0, 6), (1, 1), (2, 8)];
        for (mode, kind) in expected {
            let mut host = window(mode);
            open_result_file(&mut host, r"\", false);

            assert_eq!(host.opened[0].1, kind, "{mode}");
        }
    }

    #[test]
    fn the_reference_and_the_run_differ_in_exactly_one_word() {
        let mut reference = window(0);
        open_result_file(&mut reference, r"\", false);
        let mut test = window(0);
        open_result_file(&mut test, r"\", true);

        assert_eq!(
            reference.opened[0].0.replace(".refresult", ".testresult"),
            test.opened[0].0
        );
    }

    #[test]
    fn a_corner_run_marks_its_file_and_nothing_else_changes() {
        let mut plain = window(2);
        open_result_file(&mut plain, r"\", false);
        let mut corner = Window {
            corners: true,
            ..window(2)
        };
        open_result_file(&mut corner, r"\", false);

        assert_eq!(
            plain.opened[0].0.replace(".refresult", ".corner.refresult"),
            corner.opened[0].0
        );
        assert_eq!(plain.opened[0].1, corner.opened[0].1);
    }

    #[test]
    fn an_analysis_the_window_does_not_know_opens_nothing() {
        let mut host = window(7);

        assert!(!open_result_file(&mut host, r"\", false));
        assert!(host.opened.is_empty());
    }

    #[test]
    fn the_whole_name_follows_from_what_is_on_screen() {
        let mut host = window(0);
        open_result_file(&mut host, r"\", true);

        assert_eq!(
            host.opened[0].0,
            r"D:\results\filters\lowpass.testresult.tr"
        );
    }

    #[test]
    fn the_kinds_agree_with_the_ones_recovered_from_the_bench_settings() {
        assert_eq!(BenchAnalysis::from_kind(6), BenchAnalysis::Transient);
        assert_eq!(BenchAnalysis::Transient.kind_code(), 6);
        assert_eq!(
            BenchAnalysis::from_kind(8),
            BenchAnalysis::AlternatingCurrent
        );
        assert_eq!(BenchAnalysis::AlternatingCurrent.kind_code(), 8);
        assert_eq!(BenchAnalysis::DirectCurrent.kind_code(), 1);
    }
}
