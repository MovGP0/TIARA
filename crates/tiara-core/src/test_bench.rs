//! Running a circuit test bench and writing down what happened.
//!
//! A test bench is an XML file listing test cases, each naming a folder and a
//! circuit. Running one produces a second XML file per case. Everything here
//! is about locating those three things — the circuit a case names, the
//! folder results go in, and the name a report is filed under.

/// The extension a test case's circuit file carries.
pub const CIRCUIT_EXTENSION: &str = ".TSC";

/// The element each test case is written as.
pub const TEST_CASE_ELEMENT: &str = "testcase";

/// The path to the test cases inside a test bench.
pub const TEST_CASE_PATH: &str = "/testbench/testcase";

/// The attribute naming a case's folder.
pub const FOLDER_ATTRIBUTE: &str = "folder";
/// The attribute naming its circuit.
pub const CIRCUIT_ATTRIBUTE: &str = "circuit";
/// The attribute naming the bench's own root.
pub const ROOT_FOLDER_ATTRIBUTE: &str = "rootfolder";
/// The attribute naming where results go.
pub const RESULT_FOLDER_ATTRIBUTE: &str = "resultfolder";
/// The attribute saying whether good results are filtered out of the report.
pub const FILTER_GOOD_ATTRIBUTE: &str = "filtergood";

/// What a report file is named before its own details.
pub const REPORT_PREFIX: &str = r"\report_";

/// The extension a report carries.
pub const REPORT_EXTENSION: &str = ".xml";

/// Builds the circuit path one test case names.
///
/// Part of Ghidra function `FUN_012ce890` at `0x012CE890`.
///
/// A folder attribute that is nothing but the separator means the bench's own
/// root, so it is joined without adding separators of its own; anything else
/// is wrapped in them. That is what lets a bench keep its circuits beside
/// itself without writing an empty folder attribute.
#[must_use]
pub fn test_case_path(root: &str, folder: &str, circuit: &str, separator: &str) -> String {
    let base = if folder == separator {
        format!("{root}{folder}")
    } else {
        format!("{root}{separator}{folder}{separator}")
    };
    format!("{base}{circuit}{CIRCUIT_EXTENSION}")
}

/// What one test case names.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TestCase {
    /// The folder attribute.
    pub folder: String,
    /// The circuit attribute.
    pub circuit: String,
}

/// Finds which test case names one circuit.
///
/// Implements Ghidra function `FUN_012ce890` at `0x012CE890`.
///
/// Walks the cases in order and stops at the first whose circuit path matches,
/// returning its position counted from one.
///
/// The recovered function returns that count and nothing else, which makes its
/// answer ambiguous: a bench of five cases returns five both when the fifth
/// matched and when none did. This port returns the count alongside whether it
/// matched, so a caller cannot make that mistake — but the count itself is
/// the recovered value and is reported unchanged.
///
/// The binary carries a second copy of this at `0x01308D60`
/// (`FUN_01308d60`), which takes the same steps in the same order and shares
/// the same ambiguity. It is the copy that shows where the cases come from:
/// the elements selected by `/testbench/testcase`, each carrying a `folder`
/// and a `circuit` attribute, with the paths compared without regard to
/// case.
#[must_use]
pub fn find_test_case(
    cases: &[TestCase],
    root: &str,
    separator: &str,
    circuit_path: &str,
) -> (usize, bool) {
    let mut examined = 0;

    for case in cases {
        examined += 1;
        let path = test_case_path(root, &case.folder, &case.circuit, separator);
        if path.eq_ignore_ascii_case(circuit_path) {
            return (examined, true);
        }
    }

    (examined, false)
}

/// How one test case turned out.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TestStatus {
    /// Recovered code 2: the circuit file was not there.
    NotFound,
    /// Recovered code 3: it was there but would not load.
    CannotLoad,
    /// Any other code, which writes no status at all.
    Other,
}

impl TestStatus {
    /// Recovers a status from the code the caller passes.
    #[must_use]
    pub const fn from_code(code: u8) -> Self {
        match code {
            2 => Self::NotFound,
            3 => Self::CannotLoad,
            _ => Self::Other,
        }
    }

    /// What the report says about this status.
    ///
    /// Part of Ghidra function `FUN_012cec90` at `0x012CEC90`.
    ///
    /// Each failure has two spellings and the bench's own filter setting
    /// chooses. An unfiltered report marks its failures with a run of stars,
    /// because the reader is scanning a file that also holds every success;
    /// a filtered one holds nothing but failures, so the marker would be on
    /// every line and says nothing.
    #[must_use]
    pub const fn message(self, filtered: bool) -> Option<&'static str> {
        match (self, filtered) {
            (Self::NotFound, false) => Some("*** NOT FOUND file"),
            (Self::NotFound, true) => Some("Not found file"),
            (Self::CannotLoad, false) => Some("*** CAN'T LOAD file"),
            (Self::CannotLoad, true) => Some("Can't load file"),
            (Self::Other, _) => None,
        }
    }
}

/// Where results are written.
///
/// Part of Ghidra function `FUN_012cec90` at `0x012CEC90`.
///
/// The bench may name a result folder of its own; when it does not, results
/// go beside the circuits. A caller may override both, and when it does not
/// the bench's answer stands — so the three are tried in order and the first
/// that says anything wins.
#[must_use]
pub fn result_folder(root: &str, bench_result: &str, requested: &str) -> String {
    if !requested.is_empty() {
        return requested.to_owned();
    }
    if bench_result.is_empty() {
        return root.to_owned();
    }
    bench_result.to_owned()
}

/// The file one test case's report is written to.
///
/// Part of Ghidra function `FUN_012cec90` at `0x012CEC90`.
///
/// The index goes in the name, so two cases of one bench cannot overwrite
/// each other's report even when they name the same circuit.
#[must_use]
pub fn report_path(folder: &str, name: &str, separator: &str, index: usize) -> String {
    format!("{folder}{REPORT_PREFIX}{name}{separator}{index}{REPORT_EXTENSION}")
}

/// The attributes one test case's record carries.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TestRecord {
    /// Its position in the bench, counted from one.
    pub index: usize,
    /// The mode, which the recovered writer always records as zero.
    pub mode: u8,
    /// What happened.
    pub status: String,
    /// The circuit it ran.
    pub circuit: String,
    /// Whether a picture of the result was attached.
    pub add_picture: bool,
    /// Whether a picture of the reference was.
    pub add_reference_picture: bool,
    /// Whether the case passed.
    pub success: bool,
}

/// What writing a test result needs from the bench around it.
///
/// The bench context's teardown is Ghidra function `FUN_012cf400` at
/// `0x012CF400`, which releases the sixteen fields it held — strings, two
/// document interfaces and several lists. This port owns its state through
/// Rust's own lifetimes, so nothing corresponds to it.
pub trait TestBenchHost {
    /// The bench's own root folder.
    fn root_folder(&mut self) -> String;

    /// The result folder the bench names, if it names one.
    fn bench_result_folder(&mut self) -> String;

    /// Whether the report keeps only failures.
    fn filters_good_results(&mut self) -> bool;

    /// The test cases the bench lists.
    fn test_cases(&mut self) -> Vec<TestCase>;

    /// The separator paths are built with.
    fn separator(&mut self) -> String;

    /// Writes one record into the result document.
    fn write_record(&mut self, record: &TestRecord);

    /// Whether a folder exists.
    fn folder_exists(&mut self, folder: &str) -> bool;

    /// Saves the result document.
    fn save_report(&mut self, path: &str);
}

/// Implements Ghidra function `FUN_012cec90` at `0x012CEC90`.
///
/// Records what happened to one circuit of a test bench.
///
/// Only the two failure codes write a record at all — anything else leaves
/// the document untouched, so a successful run adds nothing and the report
/// is a list of what went wrong rather than a log of everything.
///
/// The report is saved only when its folder exists. It is not created, and a
/// missing one is passed over silently: a bench pointed at a folder that is
/// not there runs to completion and writes nothing, rather than stopping part
/// way through with some cases recorded and some not.
///
/// Returns the report's path when one was written.
pub fn record_test_result(
    host: &mut impl TestBenchHost,
    status: TestStatus,
    circuit_path: &str,
    report_name: &str,
    requested_folder: &str,
) -> Option<String> {
    let root = host.root_folder();
    let bench_result = host.bench_result_folder();
    let folder = result_folder(&root, &bench_result, requested_folder);
    let filtered = host.filters_good_results();

    let separator = host.separator();
    let cases = host.test_cases();
    let (index, _) = find_test_case(&cases, &root, &separator, circuit_path);

    let message = status.message(filtered)?;

    host.write_record(&TestRecord {
        index,
        mode: 0,
        status: message.to_owned(),
        circuit: circuit_path.to_owned(),
        add_picture: false,
        add_reference_picture: false,
        success: false,
    });

    if !host.folder_exists(&folder) {
        return None;
    }

    let path = report_path(&folder, report_name, &separator, index);
    host.save_report(&path);
    Some(path)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn a_folder_that_is_only_a_separator_means_the_bench_root() {
        assert_eq!(
            test_case_path(r"C:\bench", "\\", "amp", "\\"),
            r"C:\bench\amp.TSC"
        );
    }

    #[test]
    fn any_other_folder_is_wrapped_in_separators() {
        assert_eq!(
            test_case_path(r"C:\bench", "filters", "amp", "\\"),
            r"C:\bench\filters\amp.TSC"
        );
    }

    #[test]
    fn the_first_matching_case_is_found_and_counted_from_one() {
        let cases = vec![
            TestCase {
                folder: "a".to_owned(),
                circuit: "one".to_owned(),
            },
            TestCase {
                folder: "b".to_owned(),
                circuit: "two".to_owned(),
            },
        ];

        assert_eq!(
            find_test_case(&cases, r"C:\b", "\\", r"C:\b\b\two.TSC"),
            (2, true)
        );
        assert_eq!(
            find_test_case(&cases, r"C:\b", "\\", r"C:\b\a\one.TSC"),
            (1, true)
        );
    }

    #[test]
    fn the_recovered_count_cannot_tell_a_last_match_from_no_match() {
        let cases = vec![
            TestCase {
                folder: "a".to_owned(),
                circuit: "one".to_owned(),
            },
            TestCase {
                folder: "b".to_owned(),
                circuit: "two".to_owned(),
            },
        ];

        let (matched_last, found) = find_test_case(&cases, r"C:\b", "\\", r"C:\b\b\two.TSC");
        let (no_match, missing) = find_test_case(&cases, r"C:\b", "\\", r"C:\b\c\three.TSC");

        // The counts are identical; only the flag this port adds separates
        // them.
        assert_eq!(matched_last, no_match);
        assert!(found);
        assert!(!missing);
    }

    #[test]
    fn an_empty_bench_examines_nothing() {
        assert_eq!(find_test_case(&[], "root", "\\", "any"), (0, false));
    }

    #[test]
    fn the_two_failure_codes_are_the_recovered_ones() {
        assert_eq!(TestStatus::from_code(2), TestStatus::NotFound);
        assert_eq!(TestStatus::from_code(3), TestStatus::CannotLoad);

        for code in [0, 1, 4, 255] {
            assert_eq!(TestStatus::from_code(code), TestStatus::Other);
        }
    }

    #[test]
    fn an_unfiltered_report_marks_its_failures_with_stars() {
        assert_eq!(
            TestStatus::NotFound.message(false),
            Some("*** NOT FOUND file")
        );
        assert_eq!(
            TestStatus::CannotLoad.message(false),
            Some("*** CAN'T LOAD file")
        );
    }

    #[test]
    fn a_filtered_report_drops_the_marker_because_every_line_would_have_it() {
        assert_eq!(TestStatus::NotFound.message(true), Some("Not found file"));
        assert_eq!(
            TestStatus::CannotLoad.message(true),
            Some("Can't load file")
        );
    }

    #[test]
    fn a_status_that_is_not_a_failure_says_nothing_either_way() {
        assert_eq!(TestStatus::Other.message(true), None);
        assert_eq!(TestStatus::Other.message(false), None);
    }

    #[test]
    fn the_result_folder_falls_back_from_the_caller_to_the_bench_to_the_root() {
        assert_eq!(result_folder("root", "bench", "asked"), "asked");
        assert_eq!(result_folder("root", "bench", ""), "bench");
        assert_eq!(result_folder("root", "", ""), "root");
    }

    #[test]
    fn a_report_is_named_for_its_index_so_two_cases_cannot_collide() {
        assert_eq!(
            report_path(r"C:\out", "run", "_", 3),
            r"C:\out\report_run_3.xml"
        );
        assert_ne!(
            report_path(r"C:\out", "run", "_", 3),
            report_path(r"C:\out", "run", "_", 4)
        );
    }

    #[derive(Debug, Default)]
    #[allow(clippy::struct_field_names)]
    struct Bench {
        root: String,
        bench_result: String,
        filtered: bool,
        cases: Vec<TestCase>,
        folder_there: bool,
        written: Option<TestRecord>,
        saved: Option<String>,
    }

    impl Bench {
        fn ready() -> Self {
            Self {
                root: r"C:\bench".to_owned(),
                bench_result: r"C:\out".to_owned(),
                folder_there: true,
                cases: vec![TestCase {
                    folder: "a".to_owned(),
                    circuit: "one".to_owned(),
                }],
                ..Self::default()
            }
        }
    }

    impl TestBenchHost for Bench {
        fn root_folder(&mut self) -> String {
            self.root.clone()
        }

        fn bench_result_folder(&mut self) -> String {
            self.bench_result.clone()
        }

        fn filters_good_results(&mut self) -> bool {
            self.filtered
        }

        fn test_cases(&mut self) -> Vec<TestCase> {
            self.cases.clone()
        }

        fn separator(&mut self) -> String {
            "\\".to_owned()
        }

        fn write_record(&mut self, record: &TestRecord) {
            self.written = Some(record.clone());
        }

        fn folder_exists(&mut self, _folder: &str) -> bool {
            self.folder_there
        }

        fn save_report(&mut self, path: &str) {
            self.saved = Some(path.to_owned());
        }
    }

    #[test]
    fn a_failure_writes_a_record_and_saves_a_report() {
        let mut host = Bench::ready();

        let path = record_test_result(
            &mut host,
            TestStatus::NotFound,
            r"C:\bench\a\one.TSC",
            "run",
            "",
        );

        assert_eq!(path.as_deref(), Some(r"C:\out\report_run\1.xml"));
        let record = host.written.expect("a record was written");
        assert_eq!(record.index, 1);
        assert_eq!(record.status, "*** NOT FOUND file");
        assert!(!record.success);
    }

    #[test]
    fn a_status_that_is_not_a_failure_leaves_the_document_untouched() {
        let mut host = Bench::ready();

        assert_eq!(
            record_test_result(&mut host, TestStatus::Other, "any", "run", ""),
            None
        );
        assert!(host.written.is_none());
        assert!(host.saved.is_none());
    }

    #[test]
    fn a_missing_result_folder_is_passed_over_rather_than_created() {
        let mut host = Bench {
            folder_there: false,
            ..Bench::ready()
        };

        assert_eq!(
            record_test_result(&mut host, TestStatus::CannotLoad, "any", "run", ""),
            None
        );
        // The record is still written; only the file is not saved.
        assert!(host.written.is_some());
        assert!(host.saved.is_none());
    }

    #[test]
    fn the_caller_can_override_the_folder_the_bench_names() {
        let mut host = Bench::ready();

        let path = record_test_result(
            &mut host,
            TestStatus::NotFound,
            "any",
            "run",
            r"D:\elsewhere",
        );

        assert!(path.expect("a report").starts_with(r"D:\elsewhere"));
    }

    #[test]
    fn every_record_is_written_as_a_failure_with_no_pictures() {
        let mut host = Bench::ready();
        record_test_result(&mut host, TestStatus::CannotLoad, "any", "run", "");

        let record = host.written.expect("a record");
        assert_eq!(record.mode, 0);
        assert!(!record.add_picture);
        assert!(!record.add_reference_picture);
        assert!(!record.success);
    }

    #[test]
    fn the_recorded_index_is_the_one_the_search_returned() {
        let mut host = Bench {
            cases: vec![
                TestCase {
                    folder: "a".to_owned(),
                    circuit: "one".to_owned(),
                },
                TestCase {
                    folder: "b".to_owned(),
                    circuit: "two".to_owned(),
                },
            ],
            ..Bench::ready()
        };

        record_test_result(
            &mut host,
            TestStatus::NotFound,
            r"C:\bench\b\two.TSC",
            "run",
            "",
        );

        assert_eq!(host.written.expect("a record").index, 2);
    }
}

/// Reported when a case's result is not even the same kind as the
/// reference's.
pub const DIFFERENT_TYPES_MESSAGE: &str = "Result types are different";

/// Reported when the reference file holds no curve for this output.
pub const REFERENCE_MISSING_MESSAGE: &str = "Reference curve not found";

/// Reported when the run produced none.
pub const TEST_MISSING_MESSAGE: &str = "Test curve not found";

/// Reported when both exist but describe different things.
pub const NO_MATCHING_OUTPUT_MESSAGE: &str = "No matching output in the reference file";

/// Reported when two curves differ by more than the tolerance allows.
pub const COMPARISON_FAILED_MESSAGE: &str = "Comparison failed";

/// Reported when only the extremes are compared and they disagree.
pub const DIFFERENT_EXTREMES_MESSAGE: &str = "Min & max values are different";

/// Reported when two frequency sweeps do not even have the same number of
/// points.
pub const DIFFERENT_POINT_COUNT_MESSAGE: &str = "Number of frequency points is different";

/// The smallest denominator the real comparison will divide by.
///
/// Part of Ghidra function `FUN_012d0f30` at `0x012D0F30`.
///
/// A floor rather than an added term: two values that are both essentially
/// zero divide by this and come out as a small difference rather than as
/// anything enormous.
pub const REAL_MAGNITUDE_FLOOR: f64 = 1e-15;

/// What the complex comparison adds to its denominator instead.
///
/// Part of Ghidra function `FUN_012d0f30` at `0x012D0F30`.
///
/// Added rather than floored, and nine orders of magnitude larger — so the
/// complex comparison is far more forgiving near zero than the real one, and
/// deliberately so: a frequency response passing through zero would otherwise
/// fail on rounding alone.
pub const COMPLEX_MAGNITUDE_EPSILON: f64 = 1e-6;

/// How two curves are compared.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ComparisonMode {
    /// Recovered code 3: only the extremes are checked before the values.
    Extremes,
    /// Recovered code 4: a complex sweep, compared part by part.
    Complex,
    /// Anything else: a plain run of real values.
    Real,
}

impl ComparisonMode {
    /// Recovers a mode from the code the caller passes.
    #[must_use]
    pub const fn from_code(code: u8) -> Self {
        match code {
            3 => Self::Extremes,
            4 => Self::Complex,
            _ => Self::Real,
        }
    }
}

/// The error between one pair of value runs, as a percentage.
///
/// Part of Ghidra function `FUN_012d0f30` at `0x012D0F30`.
///
/// Each point's difference is divided by the larger of the two magnitudes
/// before being squared, so the error is *relative* — a millivolt out of a
/// volt counts the same as a volt out of a kilovolt, which is what lets one
/// tolerance serve every analysis.
///
/// `floor` raises the denominator to at least that value and `epsilon` is
/// added to it; the two modes use one each rather than both.
#[must_use]
pub fn relative_rms_percent(reference: &[f64], test: &[f64], floor: f64, epsilon: f64) -> f64 {
    if reference.is_empty() || reference.len() != test.len() {
        return 0.0;
    }

    let mut sum = 0.0;
    for (left, right) in reference.iter().zip(test.iter()) {
        let magnitude = left.abs().max(right.abs()).max(floor) + epsilon;
        let relative = (right - left) / magnitude;
        sum = relative.mul_add(relative, sum);
    }

    #[allow(clippy::cast_precision_loss)]
    let count = reference.len() as f64;
    (sum / count).sqrt() * 100.0
}

/// What one curve comparison produced.
#[derive(Debug, Clone, PartialEq)]
pub enum CurveComparison {
    /// The two curves agree within the tolerance, with this error.
    Passed {
        /// The error of the first part.
        error: f64,
        /// The second part's error, for a complex comparison that reports
        /// both.
        second_error: Option<f64>,
    },
    /// They do not, with the message saying why.
    Failed {
        /// What the report will say.
        message: &'static str,
        /// The error that was measured, when one was.
        error: Option<f64>,
    },
}

/// A complex curve's two runs of values.
#[derive(Debug, Clone, Default, PartialEq)]
pub struct ComplexCurve {
    /// The real parts.
    pub real: Vec<f64>,
    /// The imaginary parts.
    pub imaginary: Vec<f64>,
}

/// Implements Ghidra function `FUN_012d0f30` at `0x012D0F30`.
///
/// Compares one curve against its reference.
///
/// The three modes differ in what they check before the values and in how
/// they forgive small numbers. The extremes mode refuses outright when the
/// minima or maxima disagree, because two curves whose ranges differ are not
/// worth comparing point by point. The complex mode refuses when the sweeps
/// have different numbers of points, for the same reason.
///
/// A complex comparison measures the real and imaginary parts separately and
/// then has a choice: report them apart, or report only the worse of the two.
/// Reporting the worse is what lets a single tolerance cover a complex result
/// as if it were real.
///
/// Returns what the report will say.
#[must_use]
pub fn compare_curve(
    mode: ComparisonMode,
    reference: &ComplexCurve,
    test: &ComplexCurve,
    tolerance: f64,
    report_parts_separately: bool,
) -> CurveComparison {
    match mode {
        ComparisonMode::Extremes => {
            if !extremes_agree(&reference.real, &test.real) {
                return CurveComparison::Failed {
                    message: DIFFERENT_EXTREMES_MESSAGE,
                    error: None,
                };
            }
            judge(
                relative_rms_percent(&reference.real, &test.real, REAL_MAGNITUDE_FLOOR, 0.0),
                None,
                tolerance,
            )
        }
        ComparisonMode::Real => {
            if reference.real.len() != test.real.len() {
                return CurveComparison::Failed {
                    message: DIFFERENT_POINT_COUNT_MESSAGE,
                    error: None,
                };
            }
            judge(
                relative_rms_percent(&reference.real, &test.real, REAL_MAGNITUDE_FLOOR, 0.0),
                None,
                tolerance,
            )
        }
        ComparisonMode::Complex => {
            if reference.real.len() != test.real.len() {
                return CurveComparison::Failed {
                    message: DIFFERENT_POINT_COUNT_MESSAGE,
                    error: None,
                };
            }

            let real =
                relative_rms_percent(&reference.real, &test.real, 0.0, COMPLEX_MAGNITUDE_EPSILON);
            let imaginary = relative_rms_percent(
                &reference.imaginary,
                &test.imaginary,
                0.0,
                COMPLEX_MAGNITUDE_EPSILON,
            );

            if report_parts_separately {
                judge(real, Some(imaginary), tolerance)
            } else {
                judge(real.max(imaginary), None, tolerance)
            }
        }
    }
}

fn extremes_agree(reference: &[f64], test: &[f64]) -> bool {
    let bounds = |values: &[f64]| {
        values
            .iter()
            .copied()
            .fold(None::<(f64, f64)>, |bounds, value| {
                Some(bounds.map_or((value, value), |(low, high)| {
                    (low.min(value), high.max(value))
                }))
            })
    };

    match (bounds(reference), bounds(test)) {
        (Some(left), Some(right)) => {
            (left.0 - right.0).abs() <= f64::EPSILON && (left.1 - right.1).abs() <= f64::EPSILON
        }
        (None, None) => true,
        _ => false,
    }
}

fn judge(error: f64, second_error: Option<f64>, tolerance: f64) -> CurveComparison {
    let worst = second_error.map_or(error, |second| error.max(second));
    if worst > tolerance {
        return CurveComparison::Failed {
            message: COMPARISON_FAILED_MESSAGE,
            error: Some(worst),
        };
    }
    CurveComparison::Passed {
        error,
        second_error,
    }
}

/// Which of a comparison's two curves could not be found.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum MissingCurve {
    /// The reference file has none.
    Reference,
    /// The run produced none.
    Test,
    /// Both exist but do not describe the same thing.
    Mismatched,
}

impl MissingCurve {
    /// What the report says.
    ///
    /// Part of Ghidra function `FUN_012d0890` at `0x012D0890`.
    ///
    /// The three are distinguished because they mean quite different things
    /// to whoever reads the report: a missing reference is a bench that has
    /// not been set up, a missing test is a run that failed, and a mismatch
    /// is a bench that no longer matches the circuit.
    #[must_use]
    pub const fn message(self) -> &'static str {
        match self {
            Self::Reference => REFERENCE_MISSING_MESSAGE,
            Self::Test => TEST_MISSING_MESSAGE,
            Self::Mismatched => NO_MATCHING_OUTPUT_MESSAGE,
        }
    }
}

/// Which curve of a pair is missing, if either.
///
/// Part of Ghidra function `FUN_012d0890` at `0x012D0890`.
///
/// The reference is tested first, so a comparison with neither curve present
/// is reported as a missing reference — the bench being unset is the more
/// useful thing to say.
#[must_use]
pub const fn missing_curve(
    reference_found: bool,
    test_found: bool,
    kinds_agree: bool,
) -> Option<MissingCurve> {
    if !reference_found {
        return Some(MissingCurve::Reference);
    }
    if !test_found {
        return Some(MissingCurve::Test);
    }
    if !kinds_agree {
        return Some(MissingCurve::Mismatched);
    }
    None
}

#[cfg(test)]
mod comparison_tests {
    use super::*;

    fn real(values: &[f64]) -> ComplexCurve {
        ComplexCurve {
            real: values.to_vec(),
            imaginary: Vec::new(),
        }
    }

    #[test]
    fn the_three_modes_come_from_their_recovered_codes() {
        assert_eq!(ComparisonMode::from_code(3), ComparisonMode::Extremes);
        assert_eq!(ComparisonMode::from_code(4), ComparisonMode::Complex);

        for code in [0, 1, 2, 5, 255] {
            assert_eq!(ComparisonMode::from_code(code), ComparisonMode::Real);
        }
    }

    #[test]
    fn identical_curves_have_no_error_at_all() {
        let values = [1.0, 2.0, 3.0];

        assert!(relative_rms_percent(&values, &values, REAL_MAGNITUDE_FLOOR, 0.0).abs() < 1e-12);
    }

    #[test]
    fn the_error_is_relative_so_scale_does_not_matter() {
        let small = relative_rms_percent(&[1.0], &[1.1], REAL_MAGNITUDE_FLOOR, 0.0);
        let large = relative_rms_percent(&[1000.0], &[1100.0], REAL_MAGNITUDE_FLOOR, 0.0);

        assert!((small - large).abs() < 1e-9, "{small} vs {large}");
    }

    #[test]
    fn a_ten_percent_difference_reads_as_about_ten_percent() {
        let error = relative_rms_percent(&[1.0], &[1.1], REAL_MAGNITUDE_FLOOR, 0.0);

        // Divided by the larger magnitude, so 0.1 / 1.1.
        assert!((error - 9.0909).abs() < 0.001, "{error}");
    }

    #[test]
    fn two_essentially_zero_values_do_not_produce_an_enormous_error() {
        let error = relative_rms_percent(&[0.0], &[0.0], REAL_MAGNITUDE_FLOOR, 0.0);

        assert!(error.is_finite());
        assert!(error.abs() < 1e-9);
    }

    #[test]
    fn the_complex_epsilon_is_far_more_forgiving_than_the_real_floor() {
        let strict = relative_rms_percent(&[0.0], &[1e-12], REAL_MAGNITUDE_FLOOR, 0.0);
        let lenient = relative_rms_percent(&[0.0], &[1e-12], 0.0, COMPLEX_MAGNITUDE_EPSILON);

        assert!(lenient < strict, "{lenient} should be below {strict}");
    }

    #[test]
    fn runs_of_different_lengths_measure_nothing() {
        assert!(relative_rms_percent(&[1.0, 2.0], &[1.0], 1.0, 0.0).abs() < f64::EPSILON);
        assert!(relative_rms_percent(&[], &[], 1.0, 0.0).abs() < f64::EPSILON);
    }

    #[test]
    fn curves_whose_extremes_disagree_are_refused_before_their_values() {
        let outcome = compare_curve(
            ComparisonMode::Extremes,
            &real(&[0.0, 1.0]),
            &real(&[0.0, 2.0]),
            100.0,
            false,
        );

        assert_eq!(
            outcome,
            CurveComparison::Failed {
                message: DIFFERENT_EXTREMES_MESSAGE,
                error: None,
            }
        );
    }

    #[test]
    fn matching_extremes_go_on_to_the_values() {
        let outcome = compare_curve(
            ComparisonMode::Extremes,
            &real(&[0.0, 1.0]),
            &real(&[0.0, 1.0]),
            1.0,
            false,
        );

        assert!(matches!(outcome, CurveComparison::Passed { .. }));
    }

    #[test]
    fn sweeps_of_different_lengths_are_refused_with_their_own_message() {
        for mode in [ComparisonMode::Complex, ComparisonMode::Real] {
            let outcome = compare_curve(mode, &real(&[1.0, 2.0]), &real(&[1.0]), 100.0, false);

            assert_eq!(
                outcome,
                CurveComparison::Failed {
                    message: DIFFERENT_POINT_COUNT_MESSAGE,
                    error: None,
                }
            );
        }
    }

    #[test]
    fn a_curve_outside_the_tolerance_fails_and_reports_its_error() {
        let outcome = compare_curve(
            ComparisonMode::Real,
            &real(&[1.0, 1.0]),
            &real(&[2.0, 2.0]),
            1.0,
            false,
        );

        let CurveComparison::Failed { message, error } = outcome else {
            panic!("a large difference should fail")
        };
        assert_eq!(message, COMPARISON_FAILED_MESSAGE);
        assert!(error.expect("an error was measured") > 1.0);
    }

    #[test]
    fn a_complex_comparison_can_report_its_two_parts_apart() {
        let reference = ComplexCurve {
            real: vec![1.0],
            imaginary: vec![1.0],
        };
        let test = ComplexCurve {
            real: vec![1.0],
            imaginary: vec![1.5],
        };

        let outcome = compare_curve(ComparisonMode::Complex, &reference, &test, 100.0, true);

        let CurveComparison::Passed {
            error,
            second_error,
        } = outcome
        else {
            panic!("within tolerance")
        };
        assert!(error.abs() < 1e-6);
        assert!(second_error.expect("both parts reported") > 1.0);
    }

    #[test]
    fn reporting_together_keeps_only_the_worse_of_the_two_parts() {
        let reference = ComplexCurve {
            real: vec![1.0],
            imaginary: vec![1.0],
        };
        let test = ComplexCurve {
            real: vec![1.0],
            imaginary: vec![1.5],
        };

        let apart = compare_curve(ComparisonMode::Complex, &reference, &test, 100.0, true);
        let together = compare_curve(ComparisonMode::Complex, &reference, &test, 100.0, false);

        let CurveComparison::Passed {
            second_error: Some(imaginary),
            ..
        } = apart
        else {
            panic!("both parts reported")
        };
        let CurveComparison::Passed {
            error,
            second_error,
        } = together
        else {
            panic!("within tolerance")
        };

        assert_eq!(second_error, None);
        assert!((error - imaginary).abs() < 1e-9);
    }

    #[test]
    fn one_tolerance_covers_a_complex_result_when_the_parts_are_reported_together() {
        let reference = ComplexCurve {
            real: vec![1.0],
            imaginary: vec![1.0],
        };
        let test = ComplexCurve {
            real: vec![1.0],
            imaginary: vec![10.0],
        };

        // The real part is perfect; the imaginary one is not, and the worse
        // of the two is what the tolerance sees.
        assert!(matches!(
            compare_curve(ComparisonMode::Complex, &reference, &test, 5.0, false),
            CurveComparison::Failed { .. }
        ));
    }

    #[test]
    fn a_missing_reference_is_reported_ahead_of_a_missing_test() {
        assert_eq!(
            missing_curve(false, false, true),
            Some(MissingCurve::Reference)
        );
        assert_eq!(missing_curve(true, false, true), Some(MissingCurve::Test));
    }

    #[test]
    fn two_curves_that_do_not_describe_the_same_thing_are_a_mismatch() {
        assert_eq!(
            missing_curve(true, true, false),
            Some(MissingCurve::Mismatched)
        );
        assert_eq!(missing_curve(true, true, true), None);
    }

    #[test]
    fn each_kind_of_absence_says_something_different_to_the_reader() {
        let messages = [
            MissingCurve::Reference.message(),
            MissingCurve::Test.message(),
            MissingCurve::Mismatched.message(),
        ];

        let mut seen = messages.to_vec();
        seen.sort_unstable();
        seen.dedup();
        assert_eq!(seen.len(), 3);
    }
}

/// The path to one numbered test case inside a test bench.
///
/// Part of Ghidra function `FUN_012cf740` at `0x012CF740`.
///
/// Numbered from one, as the document's own indexing is.
#[must_use]
pub fn test_case_query(index: usize) -> String {
    format!("{TEST_CASE_PATH}[{index}]")
}

/// Whether a report keeps only failures when the bench does not say.
///
/// Part of Ghidra function `FUN_012cf740` at `0x012CF740`.
///
/// The only one of the four settings that defaults to on — so a bench that
/// says nothing produces a report of what went wrong rather than a log of
/// everything, and the three saving options each have to be asked for.
pub const FILTER_GOOD_DEFAULT: bool = true;

/// Whether the run's own result files are kept when the bench does not say.
pub const SAVE_TEST_DEFAULT: bool = false;
/// Whether a picture of each result is written when the bench does not say.
pub const SAVE_AS_IMAGE_DEFAULT: bool = false;
/// Whether a text form of each result is written when the bench does not say.
pub const SAVE_AS_TEXT_DEFAULT: bool = false;

/// The attribute naming whether results are kept.
pub const SAVE_TEST_ATTRIBUTE: &str = "savetest";
/// The attribute naming whether pictures are written.
pub const SAVE_AS_IMAGE_ATTRIBUTE: &str = "saveasimage";
/// The attribute naming whether text is written.
pub const SAVE_AS_TEXT_ATTRIBUTE: &str = "saveastext";

/// What one test case's settings say.
///
/// The bench context's two other teardown paths are Ghidra functions
/// `FUN_012cfde0` at `0x012CFDE0` and `FUN_012cffe0` at `0x012CFFE0` — one
/// releasing the eleven fields the settings context held, the other the
/// Delphi destructor wrapper that frees the object itself. Neither has a
/// counterpart here.
#[derive(Debug, Clone, PartialEq, Eq)]
#[allow(clippy::struct_excessive_bools)]
pub struct BenchSettings {
    /// Where the bench's circuits live.
    pub root_folder: String,
    /// Where its results go.
    pub result_folder: String,
    /// Whether the report keeps only failures.
    pub filter_good: bool,
    /// Whether the run's result files are kept.
    pub save_test: bool,
    /// Whether a picture of each result is written.
    pub save_as_image: bool,
    /// Whether a text form of each result is written.
    pub save_as_text: bool,
}

/// What reading one test case's settings needs from the document.
pub trait BenchSettingsHost {
    /// One attribute of the case at this query, if it has one.
    fn attribute(&mut self, query: &str, name: &str) -> Option<String>;
}

/// Implements Ghidra function `FUN_012cf740` at `0x012CF740`.
///
/// Reads one test case's settings.
///
/// The result folder falls back to the root, so a bench that names only one
/// folder puts its results beside its circuits. The three saving options
/// default to off and the filter defaults to on, which together mean a bench
/// that says nothing at all runs quietly and reports only failures — every
/// output beyond that has to be asked for.
///
/// An attribute the case does not carry takes its default rather than making
/// the read fail, so an older bench file still runs under a newer build.
pub fn read_bench_settings(host: &mut impl BenchSettingsHost, index: usize) -> BenchSettings {
    let query = test_case_query(index);

    let root_folder = host
        .attribute(&query, ROOT_FOLDER_ATTRIBUTE)
        .unwrap_or_default();
    let named_result = host
        .attribute(&query, RESULT_FOLDER_ATTRIBUTE)
        .unwrap_or_default();

    let boolean = |host: &mut dyn BenchSettingsHost, name: &str, default: bool| {
        host.attribute(&query, name)
            .map_or(default, |value| parse_bench_bool(&value, default))
    };

    BenchSettings {
        result_folder: result_folder(&root_folder, &named_result, ""),
        filter_good: boolean(host, FILTER_GOOD_ATTRIBUTE, FILTER_GOOD_DEFAULT),
        save_test: boolean(host, SAVE_TEST_ATTRIBUTE, SAVE_TEST_DEFAULT),
        save_as_image: boolean(host, SAVE_AS_IMAGE_ATTRIBUTE, SAVE_AS_IMAGE_DEFAULT),
        save_as_text: boolean(host, SAVE_AS_TEXT_ATTRIBUTE, SAVE_AS_TEXT_DEFAULT),
        root_folder,
    }
}

/// Reads one of the bench's boolean attributes.
///
/// Part of Ghidra function `FUN_012cf740` at `0x012CF740`.
///
/// Text that is not recognisably a boolean takes the default rather than
/// counting as false, so a typo in a bench file leaves the setting as it
/// would have been rather than quietly turning it off.
#[must_use]
pub fn parse_bench_bool(value: &str, default: bool) -> bool {
    match value.trim().to_ascii_lowercase().as_str() {
        "1" | "true" | "yes" => true,
        "0" | "false" | "no" => false,
        _ => default,
    }
}

/// Implements Ghidra function `FUN_012d06b0` at `0x012D06B0`.
///
/// Takes a path's extension off.
///
/// The cut is made at the *last* separator the recovered delimiter set names,
/// so a directory carrying a dot does not confuse it.
///
/// A name that begins with the separator loses everything, because the cut
/// keeps what is before it and there is nothing there. That is the recovered
/// behaviour and this port keeps it.
#[must_use]
pub fn strip_extension(path: &str) -> String {
    path.rfind('.')
        .map_or_else(|| path.to_owned(), |position| path[..position].to_owned())
}

/// How wide a rendered result picture is.
///
/// Part of Ghidra function `FUN_012d1e50` at `0x012D1E50`.
pub const RESULT_IMAGE_WIDTH: i32 = 800;

/// How tall it is.
pub const RESULT_IMAGE_HEIGHT: i32 = 600;

/// The colour depth the canvas is built at.
///
/// Part of Ghidra function `FUN_012d1e50` at `0x012D1E50`.
///
/// Eight bits — 256 colours — chosen because the picture is written as a GIF,
/// which cannot hold more. Setting it before drawing rather than reducing
/// afterwards means the drawing itself picks colours the format can keep.
pub const RESULT_IMAGE_PIXEL_FORMAT: u8 = 3;

/// The extension a rendered result carries.
pub const RESULT_IMAGE_EXTENSION: &str = ".gif";

/// Which plotter draws one analysis's result.
///
/// Part of Ghidra function `FUN_012d1e50` at `0x012D1E50`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ResultPlotter {
    /// Recovered analysis kind 6.
    Sixth,
    /// Recovered analysis kind 8.
    Eighth,
    /// Every other kind.
    Other,
}

impl ResultPlotter {
    /// Which plotter one analysis kind uses.
    #[must_use]
    pub const fn for_kind(kind: u8) -> Self {
        match kind {
            6 => Self::Sixth,
            8 => Self::Eighth,
            _ => Self::Other,
        }
    }
}

/// What rendering a result picture needs.
pub trait ResultImageHost {
    /// Builds a drawing surface of this size and colour depth.
    fn create_canvas(&mut self, width: i32, height: i32, pixel_format: u8);

    /// Prepares the document for drawing away from the screen.
    fn begin_offscreen(&mut self);

    /// Draws the result with one plotter.
    fn plot(&mut self, plotter: ResultPlotter);

    /// Writes the canvas out.
    fn save(&mut self, path: &str);

    /// Puts the document back as it was.
    fn end_offscreen(&mut self);
}

/// Implements Ghidra function `FUN_012d1e50` at `0x012D1E50`.
///
/// Renders one analysis result as a picture.
///
/// The canvas is a fixed size rather than the window's, so a picture written
/// on one machine is the same as one written on another — which is the whole
/// point when the pictures are going into a report that will be compared.
///
/// The document is put into an off-screen state before drawing and back
/// afterwards, the same borrow-and-restore discipline printing uses.
///
/// Returns where the picture went.
pub fn render_result_image(host: &mut impl ResultImageHost, base_path: &str, kind: u8) -> String {
    host.begin_offscreen();
    host.create_canvas(
        RESULT_IMAGE_WIDTH,
        RESULT_IMAGE_HEIGHT,
        RESULT_IMAGE_PIXEL_FORMAT,
    );

    host.plot(ResultPlotter::for_kind(kind));

    let path = format!("{base_path}{RESULT_IMAGE_EXTENSION}");
    host.save(&path);
    host.end_offscreen();
    path
}

#[cfg(test)]
mod bench_settings_tests {
    use super::*;
    use std::collections::HashMap;

    #[test]
    fn a_case_is_queried_by_its_position_counted_from_one() {
        assert_eq!(test_case_query(1), "/testbench/testcase[1]");
        assert_eq!(test_case_query(12), "/testbench/testcase[12]");
    }

    #[test]
    fn only_the_filter_defaults_to_on() {
        let defaults = [
            FILTER_GOOD_DEFAULT,
            SAVE_TEST_DEFAULT,
            SAVE_AS_IMAGE_DEFAULT,
            SAVE_AS_TEXT_DEFAULT,
        ];

        assert_eq!(defaults.iter().filter(|on| **on).count(), 1);
        assert!(defaults[0]);
    }

    #[test]
    fn a_boolean_that_is_not_recognisable_keeps_its_default() {
        assert!(parse_bench_bool("nonsense", true));
        assert!(!parse_bench_bool("nonsense", false));
        assert!(parse_bench_bool("", true));
    }

    #[test]
    fn the_recognised_spellings_are_read_either_way_round() {
        for text in ["1", "true", "TRUE", " yes "] {
            assert!(parse_bench_bool(text, false), "{text}");
        }
        for text in ["0", "false", "NO"] {
            assert!(!parse_bench_bool(text, true), "{text}");
        }
    }

    #[derive(Debug, Default)]
    struct Bench {
        attributes: HashMap<String, String>,
    }

    impl Bench {
        fn with(pairs: &[(&str, &str)]) -> Self {
            Self {
                attributes: pairs
                    .iter()
                    .map(|(name, value)| ((*name).to_owned(), (*value).to_owned()))
                    .collect(),
            }
        }
    }

    impl BenchSettingsHost for Bench {
        fn attribute(&mut self, _query: &str, name: &str) -> Option<String> {
            self.attributes.get(name).cloned()
        }
    }

    #[test]
    fn a_bench_that_says_nothing_runs_quietly_and_reports_only_failures() {
        let mut host = Bench::default();
        let settings = read_bench_settings(&mut host, 1);

        assert!(settings.filter_good);
        assert!(!settings.save_test);
        assert!(!settings.save_as_image);
        assert!(!settings.save_as_text);
    }

    #[test]
    fn the_result_folder_falls_back_to_the_root() {
        let mut host = Bench::with(&[("rootfolder", r"C:\bench")]);
        let settings = read_bench_settings(&mut host, 1);

        assert_eq!(settings.result_folder, r"C:\bench");
    }

    #[test]
    fn a_named_result_folder_is_kept() {
        let mut host = Bench::with(&[("rootfolder", r"C:\bench"), ("resultfolder", r"C:\out")]);
        let settings = read_bench_settings(&mut host, 1);

        assert_eq!(settings.result_folder, r"C:\out");
        assert_eq!(settings.root_folder, r"C:\bench");
    }

    #[test]
    fn every_saving_option_can_be_asked_for() {
        let mut host = Bench::with(&[
            ("savetest", "1"),
            ("saveasimage", "1"),
            ("saveastext", "1"),
            ("filtergood", "0"),
        ]);
        let settings = read_bench_settings(&mut host, 1);

        assert!(settings.save_test);
        assert!(settings.save_as_image);
        assert!(settings.save_as_text);
        assert!(!settings.filter_good);
    }

    #[test]
    fn an_older_bench_missing_an_attribute_still_reads() {
        let mut host = Bench::with(&[("rootfolder", "r"), ("savetest", "1")]);
        let settings = read_bench_settings(&mut host, 1);

        assert!(settings.save_test);
        assert!(settings.filter_good);
    }

    #[test]
    fn an_extension_is_cut_at_the_last_separator() {
        assert_eq!(strip_extension("report.xml"), "report");
        assert_eq!(strip_extension(r"C:\a.b\report.xml"), r"C:\a.b\report");
    }

    #[test]
    fn a_name_with_no_separator_is_left_whole() {
        assert_eq!(strip_extension("report"), "report");
        assert_eq!(strip_extension(""), "");
    }

    #[test]
    fn a_name_that_begins_with_the_separator_loses_everything() {
        assert_eq!(strip_extension(".hidden"), "");
    }

    #[test]
    fn the_picture_is_a_fixed_size_so_two_machines_agree() {
        assert_eq!(RESULT_IMAGE_WIDTH, 800);
        assert_eq!(RESULT_IMAGE_HEIGHT, 600);
    }

    #[test]
    fn the_canvas_is_built_at_the_depth_the_format_can_hold() {
        // Eight bits, because a GIF cannot carry more.
        assert_eq!(RESULT_IMAGE_PIXEL_FORMAT, 3_u8);
        assert_eq!(RESULT_IMAGE_EXTENSION, ".gif");
    }

    #[test]
    fn the_analysis_kind_chooses_the_plotter() {
        assert_eq!(ResultPlotter::for_kind(6), ResultPlotter::Sixth);
        assert_eq!(ResultPlotter::for_kind(8), ResultPlotter::Eighth);

        for kind in [0, 1, 7, 9, 255] {
            assert_eq!(ResultPlotter::for_kind(kind), ResultPlotter::Other);
        }
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum Step {
        Begin,
        Canvas(i32, i32, u8),
        Plot(ResultPlotter),
        Save(String),
        End,
    }

    #[derive(Debug, Default)]
    struct Renderer {
        steps: Vec<Step>,
    }

    impl ResultImageHost for Renderer {
        fn create_canvas(&mut self, width: i32, height: i32, pixel_format: u8) {
            self.steps.push(Step::Canvas(width, height, pixel_format));
        }

        fn begin_offscreen(&mut self) {
            self.steps.push(Step::Begin);
        }

        fn plot(&mut self, plotter: ResultPlotter) {
            self.steps.push(Step::Plot(plotter));
        }

        fn save(&mut self, path: &str) {
            self.steps.push(Step::Save(path.to_owned()));
        }

        fn end_offscreen(&mut self) {
            self.steps.push(Step::End);
        }
    }

    #[test]
    fn a_picture_is_drawn_off_screen_and_saved_under_its_own_extension() {
        let mut host = Renderer::default();

        assert_eq!(
            render_result_image(&mut host, r"C:\out\case1", 6),
            r"C:\out\case1.gif"
        );
        assert_eq!(
            host.steps,
            [
                Step::Begin,
                Step::Canvas(800, 600, 3),
                Step::Plot(ResultPlotter::Sixth),
                Step::Save(r"C:\out\case1.gif".to_owned()),
                Step::End,
            ]
        );
    }

    #[test]
    fn the_document_is_put_back_however_it_was_drawn() {
        for kind in [6, 8, 0] {
            let mut host = Renderer::default();
            render_result_image(&mut host, "case", kind);

            assert_eq!(host.steps.first(), Some(&Step::Begin));
            assert_eq!(host.steps.last(), Some(&Step::End));
        }
    }
}

/// Cuts a curve name down to the part that takes part in matching.
///
/// Part of Ghidra function `FUN_012d0030` at `0x012D0030`.
///
/// The cut is at the *first* separator, not the last — the opposite end from
/// [`strip_extension`], which the same module uses on file names. A curve
/// name is qualified from the left and a file name from the right, so the two
/// keep opposite halves.
///
/// What is left is trimmed, so a name written with spaces around its
/// qualifier still matches one written without.
#[must_use]
pub fn matchable_name(name: &str, separator: char) -> String {
    name.find(separator).map_or_else(
        || name.to_owned(),
        |position| name[..position].trim().to_owned(),
    )
}

/// Implements Ghidra function `FUN_012d0030` at `0x012D0030`.
///
/// Reports whether two curve names name the same output.
///
/// Both names lose their qualifier before anything is compared, so the
/// qualifier never takes part in matching whichever way the comparison is
/// made — the case-sensitivity flag only reaches the part that is left.
///
/// That flag is what lets one bench insist on exact names while another
/// tolerates a reference file written in a different case.
#[must_use]
pub fn names_match(left: &str, right: &str, match_case: bool, separator: char) -> bool {
    let left = matchable_name(left, separator);
    let right = matchable_name(right, separator);

    if match_case {
        left == right
    } else {
        left.eq_ignore_ascii_case(&right)
    }
}

/// What one of a document's curves looks like to the matcher.
///
/// Ghidra function `FUN_012ce750` at `0x012CE750` reaches the document these
/// come from: it obtains the application's own interface, asks whether it
/// holds one, and only then asks that one for the document — three vtable
/// calls each guarded by the last, so a session with no application, or one
/// with no document open, yields nothing rather than faulting.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct DocumentCurve {
    /// Its name.
    pub name: String,
    /// How many points it holds.
    pub point_count: i32,
    /// Whether it is a derived curve rather than one of the run's own.
    pub derived: bool,
    /// The output it belongs to, which two curves must share to match.
    pub output_id: i32,
}

/// Implements Ghidra function `FUN_012d0750` at `0x012D0750`.
///
/// Collects every curve of a document that answers to one reference curve.
///
/// Two filters come before the name is even looked at: a curve with no points
/// has nothing to compare, and a derived curve is one the program made rather
/// than one the run produced, so neither is a candidate.
///
/// Matching then needs *both* the names to agree once their extensions are
/// off and the output identifiers to be equal. The identifier is what stops
/// two unrelated analyses whose curves happen to share a name from being
/// compared against each other.
///
/// Returns the positions of the curves that matched, in document order.
#[must_use]
pub fn matching_curves(curves: &[DocumentCurve], reference: &DocumentCurve) -> Vec<usize> {
    let wanted = strip_extension(&reference.name);

    curves
        .iter()
        .enumerate()
        .filter(|(_, curve)| curve.point_count > 0 && !curve.derived)
        .filter(|(_, curve)| {
            strip_extension(&curve.name) == wanted && curve.output_id == reference.output_id
        })
        .map(|(index, _)| index)
        .collect()
}

/// Where a text export reads its shape from.
///
/// Part of Ghidra function `FUN_012d1d90` at `0x012D1D90`.
///
/// Each analysis keeps the count and the kind of its results in a different
/// place, so the exporter has to know which analysis it is looking at before
/// it can read either — there is no shared header.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TextExportSource {
    /// Recovered analysis kind 6, which keeps both in one place of its own.
    Sixth,
    /// Recovered analysis kind 8.
    Eighth,
    /// Every other kind, which shares the eighth's count but not its kind.
    Other,
}

impl TextExportSource {
    /// Which source one analysis kind reads from.
    #[must_use]
    pub const fn for_kind(kind: u8) -> Self {
        match kind {
            6 => Self::Sixth,
            8 => Self::Eighth,
            _ => Self::Other,
        }
    }

    /// Whether this source shares its count with the eighth kind's.
    ///
    /// Part of Ghidra function `FUN_012d1d90` at `0x012D1D90`.
    ///
    /// Two of the three read the same field for the count and differ only in
    /// where they read the kind, which is why they cannot simply be one
    /// branch.
    #[must_use]
    pub const fn shares_count_with_eighth(self) -> bool {
        matches!(self, Self::Eighth | Self::Other)
    }
}

/// What writing a result out as text needs.
pub trait TextExportHost {
    /// How many results there are, and what kind they are, for one source.
    fn result_shape(&mut self, source: TextExportSource) -> (i32, u32);

    /// Writes the results out under one name.
    fn write(&mut self, name: &str, count: i32, kind: u32);
}

/// Implements Ghidra function `FUN_012d1d90` at `0x012D1D90`.
///
/// Writes one analysis's results out as text.
///
/// The count and the kind are read from wherever the analysis keeps them and
/// handed to one writer, so the writer itself does not need to know which
/// analysis produced what it is given.
pub fn write_result_text(host: &mut impl TextExportHost, name: &str, kind: u8) {
    let source = TextExportSource::for_kind(kind);
    let (count, result_kind) = host.result_shape(source);
    host.write(name, count, result_kind);
}

#[cfg(test)]
mod bench_matching_tests {
    use super::*;

    #[test]
    fn a_curve_name_is_cut_at_its_first_separator() {
        assert_eq!(matchable_name("V(out):AC", ':'), "V(out)");
        assert_eq!(matchable_name("a:b:c", ':'), "a");
    }

    #[test]
    fn the_two_name_operations_cut_at_opposite_ends() {
        // A curve name keeps its left half; a file name keeps its left half
        // too, but measured from the *last* separator rather than the first.
        assert_eq!(matchable_name("a.b.c", '.'), "a");
        assert_eq!(strip_extension("a.b.c"), "a.b");
    }

    #[test]
    fn what_is_left_is_trimmed_so_spacing_does_not_matter() {
        assert_eq!(matchable_name("V(out) : AC", ':'), "V(out)");
        assert!(names_match("V(out) :AC", "V(out):DC", true, ':'));
    }

    #[test]
    fn a_name_with_no_separator_is_kept_whole() {
        assert_eq!(matchable_name("V(out)", ':'), "V(out)");
    }

    #[test]
    fn the_qualifier_never_takes_part_in_matching_either_way() {
        assert!(names_match("V(out):AC", "V(out):TRAN", true, ':'));
        assert!(names_match("V(out):AC", "V(out):TRAN", false, ':'));
    }

    #[test]
    fn the_flag_decides_only_what_is_left_after_the_cut() {
        assert!(names_match("V(OUT):AC", "v(out):AC", false, ':'));
        assert!(!names_match("V(OUT):AC", "v(out):AC", true, ':'));
    }

    #[test]
    fn different_names_do_not_match_however_the_flag_is_set() {
        assert!(!names_match("V(out)", "V(in)", false, ':'));
        assert!(!names_match("V(out)", "V(in)", true, ':'));
    }

    fn curve(name: &str, points: i32, derived: bool, output: i32) -> DocumentCurve {
        DocumentCurve {
            name: name.to_owned(),
            point_count: points,
            derived,
            output_id: output,
        }
    }

    #[test]
    fn a_curve_with_no_points_is_not_a_candidate() {
        let curves = [curve("V(out).1", 0, false, 1)];
        let reference = curve("V(out).2", 10, false, 1);

        assert!(matching_curves(&curves, &reference).is_empty());
    }

    #[test]
    fn a_derived_curve_is_not_a_candidate_either() {
        let curves = [curve("V(out).1", 10, true, 1)];
        let reference = curve("V(out).2", 10, false, 1);

        assert!(matching_curves(&curves, &reference).is_empty());
    }

    #[test]
    fn matching_needs_the_name_and_the_output_to_agree() {
        let curves = [
            curve("V(out).1", 10, false, 1),
            curve("V(out).1", 10, false, 2),
            curve("V(in).1", 10, false, 1),
        ];
        let reference = curve("V(out).9", 10, false, 1);

        assert_eq!(matching_curves(&curves, &reference), [0]);
    }

    #[test]
    fn the_output_identifier_keeps_unrelated_analyses_apart() {
        // Two curves with the very same name, from different analyses.
        let curves = [
            curve("V(out).1", 10, false, 7),
            curve("V(out).1", 10, false, 8),
        ];

        assert_eq!(
            matching_curves(&curves, &curve("V(out).1", 10, false, 8)),
            [1]
        );
    }

    #[test]
    fn several_matches_are_returned_in_document_order() {
        let curves = [
            curve("V(out).a", 10, false, 1),
            curve("V(in).a", 10, false, 1),
            curve("V(out).b", 10, false, 1),
        ];

        assert_eq!(
            matching_curves(&curves, &curve("V(out).z", 10, false, 1)),
            [0, 2]
        );
    }

    #[test]
    fn a_document_with_no_curves_matches_nothing() {
        assert!(matching_curves(&[], &curve("V(out)", 10, false, 1)).is_empty());
    }

    #[test]
    fn the_export_source_comes_from_the_analysis_kind() {
        assert_eq!(TextExportSource::for_kind(6), TextExportSource::Sixth);
        assert_eq!(TextExportSource::for_kind(8), TextExportSource::Eighth);

        for kind in [0, 1, 7, 9, 255] {
            assert_eq!(TextExportSource::for_kind(kind), TextExportSource::Other);
        }
    }

    #[test]
    fn two_of_the_three_sources_share_a_count_and_differ_only_in_the_kind() {
        assert!(TextExportSource::Eighth.shares_count_with_eighth());
        assert!(TextExportSource::Other.shares_count_with_eighth());
        assert!(!TextExportSource::Sixth.shares_count_with_eighth());
    }

    #[derive(Debug, Default)]
    struct Exporter {
        asked: Option<TextExportSource>,
        written: Option<(String, i32, u32)>,
    }

    impl TextExportHost for Exporter {
        fn result_shape(&mut self, source: TextExportSource) -> (i32, u32) {
            self.asked = Some(source);
            (128, 4)
        }

        fn write(&mut self, name: &str, count: i32, kind: u32) {
            self.written = Some((name.to_owned(), count, kind));
        }
    }

    #[test]
    fn the_shape_is_read_from_the_source_the_kind_names() {
        let mut host = Exporter::default();
        write_result_text(&mut host, "case1", 6);

        assert_eq!(host.asked, Some(TextExportSource::Sixth));
        assert_eq!(host.written, Some(("case1".to_owned(), 128, 4)));
    }

    #[test]
    fn the_writer_is_told_the_shape_rather_than_the_analysis() {
        let mut sixth = Exporter::default();
        write_result_text(&mut sixth, "case", 6);

        let mut other = Exporter::default();
        write_result_text(&mut other, "case", 1);

        // Different sources, identical calls to the writer.
        assert_ne!(sixth.asked, other.asked);
        assert_eq!(sixth.written, other.written);
    }
}

/// Which analysis a result belongs to.
///
/// Part of Ghidra function `FUN_012d5130` at `0x012D5130`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum BenchAnalysis {
    /// Recovered kind 6.
    Transient,
    /// Recovered kind 8.
    AlternatingCurrent,
    /// Every other kind.
    DirectCurrent,
}

impl BenchAnalysis {
    /// Which analysis one kind names.
    #[must_use]
    pub const fn from_kind(kind: u8) -> Self {
        match kind {
            6 => Self::Transient,
            8 => Self::AlternatingCurrent,
            _ => Self::DirectCurrent,
        }
    }

    /// The two letters naming it in a file name.
    #[must_use]
    pub const fn suffix(self) -> &'static str {
        match self {
            Self::Transient => ".tr",
            Self::AlternatingCurrent => ".ac",
            Self::DirectCurrent => ".dc",
        }
    }

    /// The kind number that names it.
    ///
    /// Part of Ghidra function `FUN_01301c40` at `0x01301C40`.
    ///
    /// Direct current is one. [`BenchAnalysis::from_kind`] reads every kind
    /// that is neither of the other two as direct current, so the number
    /// itself is not recoverable from that side; the result-file opener names
    /// all three outright, and this is the one it names.
    #[must_use]
    pub const fn kind_code(self) -> u8 {
        match self {
            Self::Transient => 6,
            Self::AlternatingCurrent => 8,
            Self::DirectCurrent => 1,
        }
    }

    /// Which analysis a curve of one kind is.
    ///
    /// Part of Ghidra function `FUN_01301c40` at `0x01301C40`.
    ///
    /// The third independent confirmation that the three curve kinds mean
    /// what the range labels and the measurement lists say they mean: what is
    /// measured against time is the transient analysis, against frequency the
    /// alternating-current one, and against a swept level the direct-current
    /// one.
    #[must_use]
    pub const fn from_axis_unit(unit: crate::range_axis_units::AxisUnit) -> Self {
        match unit {
            crate::range_axis_units::AxisUnit::Time => Self::Transient,
            crate::range_axis_units::AxisUnit::Level => Self::DirectCurrent,
            crate::range_axis_units::AxisUnit::Frequency => Self::AlternatingCurrent,
        }
    }

    /// Where the bench's settings block keeps this analysis's enable flag.
    ///
    /// Part of Ghidra function `FUN_012d6bf0` at `0x012D6BF0`.
    #[must_use]
    pub const fn enabled_slot(self) -> usize {
        match self {
            Self::Transient => 0,
            Self::AlternatingCurrent => 1,
            Self::DirectCurrent => 2,
        }
    }

    /// Where it keeps this analysis's corner-test flag.
    ///
    /// Part of Ghidra functions `FUN_012d5130` at `0x012D5130` and
    /// `FUN_012d6bf0` at `0x012D6BF0`.
    ///
    /// Nine slots on from the enable flag, so the block is three runs of
    /// three rather than three groups of one — which is why an analysis can
    /// be switched off without disturbing its corner setting.
    #[must_use]
    pub const fn corner_slot(self) -> usize {
        self.enabled_slot() + CORNER_SLOT_OFFSET
    }
}

/// How far the corner flags sit from the enable flags.
pub const CORNER_SLOT_OFFSET: usize = 9;

/// Whether a result file is the reference or the run's own.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ResultRole {
    /// The file a run is compared against.
    Reference,
    /// The file a run produced.
    Test,
}

impl ResultRole {
    /// What names it in a file name.
    #[must_use]
    pub const fn suffix(self) -> &'static str {
        match self {
            Self::Reference => ".refresult",
            Self::Test => ".testresult",
        }
    }
}

/// The marker a corner test adds to a file name.
pub const CORNER_MARKER: &str = ".corner";

/// The suffix one result file carries.
///
/// Part of Ghidra function `FUN_012d5130` at `0x012D5130`.
///
/// Three parts, each chosen independently: the corner marker when this
/// analysis is running corners, the role, and the analysis. Keeping them
/// orthogonal means a reference and the run it is compared against differ in
/// exactly one place, so the pair can be found by substituting one word.
#[must_use]
pub fn result_file_suffix(analysis: BenchAnalysis, role: ResultRole, corner_test: bool) -> String {
    let corner = if corner_test { CORNER_MARKER } else { "" };
    format!("{corner}{}{}", role.suffix(), analysis.suffix())
}

/// The suffix a corner run's own report carries.
///
/// Part of Ghidra function `FUN_012d6bf0` at `0x012D6BF0`.
///
/// A different shape from [`result_file_suffix`] — the marker leads and the
/// file is XML rather than a result — so a corner report cannot be mistaken
/// for a corner result even though both carry the same marker.
#[must_use]
pub fn corner_report_suffix(analysis: BenchAnalysis) -> String {
    format!("{CORNER_MARKER}{}{REPORT_EXTENSION}", analysis.suffix())
}

/// Whether one analysis runs at all, and whether it runs corners.
///
/// Part of Ghidra function `FUN_012d6bf0` at `0x012D6BF0`.
///
/// A corner run needs both: the analysis has to be on *and* its corner flag
/// set, so switching an analysis off silences its corner run too without the
/// corner flag being touched.
#[must_use]
pub fn runs_corner_test(flags: &[bool], analysis: BenchAnalysis) -> bool {
    let enabled = flags.get(analysis.enabled_slot()).copied().unwrap_or(false);
    let corner = flags.get(analysis.corner_slot()).copied().unwrap_or(false);
    enabled && corner
}

/// What a result is exported as.
///
/// Part of Ghidra functions `FUN_012d1e50` at `0x012D1E50` and `FUN_012d2130`
/// at `0x012D2130`.
///
/// The two exports are the same function twice over — same three plotters,
/// same off-screen borrow — differing only in the mode they pass the plotter
/// and what they hand it to write into. So the plotters themselves know how
/// to render to either, and neither export has to know how the other works.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ResultExport {
    /// Mode 1: drawn onto a bitmap and saved as a picture.
    Picture,
    /// Mode 2: written into a list of lines and saved as text.
    Text,
}

impl ResultExport {
    /// The mode the plotter is given.
    #[must_use]
    pub const fn mode(self) -> u8 {
        match self {
            Self::Picture => 1,
            Self::Text => 2,
        }
    }

    /// The extension the file carries.
    #[must_use]
    pub const fn extension(self) -> &'static str {
        match self {
            Self::Picture => RESULT_IMAGE_EXTENSION,
            Self::Text => ".txt",
        }
    }
}

/// The scheme a local path is turned into a link under.
pub const FILE_URL_SCHEME: &str = "file://";

/// Implements Ghidra function `FUN_012d2450` at `0x012D2450`.
///
/// Turns a local path into a link a report can carry.
///
/// The separator is swapped before the scheme goes on, so the result is a
/// link rather than a path with a prefix — a report opened in a browser can
/// follow it.
///
/// Both separator characters are data references in the recovered code rather
/// than literals, so the caller supplies them.
#[must_use]
pub fn file_url(path: &str, from: char, to: char) -> String {
    format!("{FILE_URL_SCHEME}{}", path.replace(from, &to.to_string()))
}

#[cfg(test)]
mod bench_naming_tests {
    use super::*;

    #[test]
    fn the_three_analyses_come_from_their_recovered_kinds() {
        assert_eq!(BenchAnalysis::from_kind(6), BenchAnalysis::Transient);
        assert_eq!(
            BenchAnalysis::from_kind(8),
            BenchAnalysis::AlternatingCurrent
        );

        for kind in [0, 1, 7, 9, 255] {
            assert_eq!(BenchAnalysis::from_kind(kind), BenchAnalysis::DirectCurrent);
        }
    }

    #[test]
    fn a_reference_and_its_test_differ_in_exactly_one_word() {
        let reference = result_file_suffix(BenchAnalysis::Transient, ResultRole::Reference, false);
        let test = result_file_suffix(BenchAnalysis::Transient, ResultRole::Test, false);

        assert_eq!(reference, ".refresult.tr");
        assert_eq!(test, ".testresult.tr");
        assert_eq!(reference.replace(".refresult", ".testresult"), test);
    }

    #[test]
    fn the_corner_marker_leads_the_rest_of_the_suffix() {
        assert_eq!(
            result_file_suffix(
                BenchAnalysis::AlternatingCurrent,
                ResultRole::Reference,
                true
            ),
            ".corner.refresult.ac"
        );
    }

    #[test]
    fn every_combination_of_the_three_parts_is_distinct() {
        let mut seen = Vec::new();
        for analysis in [
            BenchAnalysis::Transient,
            BenchAnalysis::AlternatingCurrent,
            BenchAnalysis::DirectCurrent,
        ] {
            for role in [ResultRole::Reference, ResultRole::Test] {
                for corner in [false, true] {
                    seen.push(result_file_suffix(analysis, role, corner));
                }
            }
        }

        let total = seen.len();
        seen.sort();
        seen.dedup();
        assert_eq!(seen.len(), total);
        assert_eq!(total, 12);
    }

    #[test]
    fn a_corner_report_cannot_be_mistaken_for_a_corner_result() {
        let report = corner_report_suffix(BenchAnalysis::DirectCurrent);
        let result = result_file_suffix(BenchAnalysis::DirectCurrent, ResultRole::Test, true);

        assert_eq!(report, ".corner.dc.xml");
        assert_ne!(report, result);
        assert!(report.starts_with(CORNER_MARKER));
        assert!(result.starts_with(CORNER_MARKER));
    }

    #[test]
    fn the_settings_block_is_three_runs_of_three_rather_than_three_groups() {
        for analysis in [
            BenchAnalysis::Transient,
            BenchAnalysis::AlternatingCurrent,
            BenchAnalysis::DirectCurrent,
        ] {
            assert_eq!(
                analysis.corner_slot() - analysis.enabled_slot(),
                CORNER_SLOT_OFFSET
            );
        }
    }

    #[test]
    fn a_corner_run_needs_the_analysis_on_as_well_as_the_corner_flag() {
        let mut flags = vec![false; 12];
        flags[BenchAnalysis::Transient.corner_slot()] = true;

        // The corner flag alone is not enough.
        assert!(!runs_corner_test(&flags, BenchAnalysis::Transient));

        flags[BenchAnalysis::Transient.enabled_slot()] = true;
        assert!(runs_corner_test(&flags, BenchAnalysis::Transient));
    }

    #[test]
    fn switching_an_analysis_off_silences_its_corner_run_without_touching_the_flag() {
        let mut flags = vec![false; 12];
        flags[BenchAnalysis::AlternatingCurrent.enabled_slot()] = true;
        flags[BenchAnalysis::AlternatingCurrent.corner_slot()] = true;
        assert!(runs_corner_test(&flags, BenchAnalysis::AlternatingCurrent));

        flags[BenchAnalysis::AlternatingCurrent.enabled_slot()] = false;
        assert!(!runs_corner_test(&flags, BenchAnalysis::AlternatingCurrent));
        // The corner flag is still set.
        assert!(flags[BenchAnalysis::AlternatingCurrent.corner_slot()]);
    }

    #[test]
    fn a_settings_block_too_short_to_answer_says_no() {
        assert!(!runs_corner_test(&[], BenchAnalysis::Transient));
        assert!(!runs_corner_test(&[true], BenchAnalysis::Transient));
    }

    #[test]
    fn the_two_exports_differ_only_in_their_mode_and_extension() {
        assert_eq!(ResultExport::Picture.mode(), 1);
        assert_eq!(ResultExport::Text.mode(), 2);
        assert_eq!(ResultExport::Picture.extension(), ".gif");
        assert_eq!(ResultExport::Text.extension(), ".txt");
    }

    #[test]
    fn a_local_path_becomes_a_link_rather_than_a_path_with_a_prefix() {
        assert_eq!(
            file_url(r"C:\out\report_1.xml", '\\', '/'),
            "file://C:/out/report_1.xml"
        );
    }

    #[test]
    fn a_path_with_nothing_to_swap_still_gets_its_scheme() {
        assert_eq!(file_url("report.xml", '\\', '/'), "file://report.xml");
    }
}

/// What a circuit's name is suffixed with when it holds only analogue parts.
pub const ANALOG_CIRCUIT_SUFFIX: &str = " (analog)";

/// And when it holds digital ones too.
pub const MIXED_CIRCUIT_SUFFIX: &str = " (mixed)";

/// What an analysis's name is suffixed with when it is running corners.
pub const CORNER_MODE_SUFFIX: &str = " - corner test";

/// The transient analysis's display name.
///
/// The other two are read from data rather than compiled in, so only this one
/// is recovered.
pub const TRANSIENT_MODE_NAME: &str = "Transient";

/// How one test case turned out, across every way it can.
///
/// Part of Ghidra function `FUN_012d2550` at `0x012D2550`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum BenchOutcome {
    /// Code 0: the run finished and there was nothing to compare it against.
    Ran,
    /// Code 1: it finished and matched its reference.
    Matched,
    /// Code 4: it was stopped part way through, at a known point.
    TimedOut,
    /// Code 5: it was stopped, with no useful progress to report.
    Cancelled,
    /// Code 6: the simulation itself failed.
    SimulationError,
    /// Codes 7, 8 and 9: the comparison failed. The three differ only in what
    /// they are able to record alongside, not in what they say.
    ComparisonError,
}

impl BenchOutcome {
    /// Recovers an outcome from its code.
    ///
    /// Part of Ghidra function `FUN_012d2550` at `0x012D2550`.
    ///
    /// Codes 2 and 3 belong to the earlier reporter and write nothing here,
    /// so the two writers divide the space between them rather than
    /// overlapping.
    #[must_use]
    pub const fn from_code(code: u8) -> Option<Self> {
        match code {
            0 => Some(Self::Ran),
            1 => Some(Self::Matched),
            4 => Some(Self::TimedOut),
            5 => Some(Self::Cancelled),
            6 => Some(Self::SimulationError),
            7..=9 => Some(Self::ComparisonError),
            _ => None,
        }
    }

    /// Whether this outcome is something to look at.
    ///
    /// Part of Ghidra function `FUN_012d2550` at `0x012D2550`.
    #[must_use]
    pub const fn is_failure(self) -> bool {
        !matches!(self, Self::Ran | Self::Matched)
    }

    /// What the report says, as a template the caller fills in.
    ///
    /// Part of Ghidra function `FUN_012d2550` at `0x012D2550`.
    ///
    /// Every failure has a starred spelling and a plain one, chosen by
    /// whether the report also holds successes — but *neither success has a
    /// starred form at all*, which settles what the stars are for: they mark
    /// the lines worth looking at in a report that holds everything, so
    /// putting them on a success would defeat them.
    #[must_use]
    pub const fn message_template(self, filtered: bool) -> &'static str {
        match (self, filtered) {
            (Self::Ran, _) => "Success",
            (Self::Matched, _) => "Success (comparison ok)",
            (Self::TimedOut, false) => "*** CANCELLED (timeout at %d%%)",
            (Self::TimedOut, true) => "Cancelled (timeout at %d%%)",
            (Self::Cancelled, false) => "*** CANCELLED",
            (Self::Cancelled, true) => "Cancelled",
            (Self::SimulationError, false) => "*** SIMULATION ERROR %s in circuit",
            (Self::SimulationError, true) => "Simulation error %s in circuit",
            (Self::ComparisonError, false) => "*** COMPARISON ERROR %s for circuit",
            (Self::ComparisonError, true) => "Comparison error %s for circuit",
        }
    }
}

/// The name a circuit is recorded under.
///
/// Part of Ghidra function `FUN_012d2550` at `0x012D2550`.
///
/// Whether the circuit holds digital parts is written into its name rather
/// than into a field of its own, so a report read as plain text still says
/// which kind of simulation produced each line.
#[must_use]
pub fn circuit_label(name: &str, mixed: bool) -> String {
    let suffix = if mixed {
        MIXED_CIRCUIT_SUFFIX
    } else {
        ANALOG_CIRCUIT_SUFFIX
    };
    format!("{name}{suffix}")
}

/// The name an analysis is recorded under.
///
/// Part of Ghidra function `FUN_012d2550` at `0x012D2550`.
///
/// The corner marker goes on the *mode* rather than the circuit, so one
/// circuit's ordinary and corner runs share a circuit name and differ in
/// their mode — which is what lets a report be grouped either way.
#[must_use]
pub fn mode_label(analysis_name: &str, corner_test: bool) -> String {
    let suffix = if corner_test { CORNER_MODE_SUFFIX } else { "" };
    format!("{analysis_name}{suffix}")
}

/// The fields a full result record can carry.
///
/// Part of Ghidra function `FUN_012d2550` at `0x012D2550`.
///
/// Every measurement is paired with the reference's own, which is what makes
/// the report answer "how did this differ" rather than only "did it pass".
/// A failure that never got far enough to measure something simply leaves
/// that pair out, so the fields present are themselves evidence of how far
/// the run reached.
pub const RECORD_FIELDS: [&str; 17] = [
    "index",
    "mode",
    "status",
    "circuit",
    "success",
    "addpicture",
    "picture",
    "addrefpicture",
    "refpicture",
    "points",
    "refpoints",
    "exectime",
    "refexectime",
    "itercount",
    "refitercount",
    "refversion",
    "tolerror",
];

/// The measurements a record pairs with the reference's own.
///
/// Part of Ghidra function `FUN_012d2550` at `0x012D2550`.
#[must_use]
pub fn paired_fields() -> Vec<(&'static str, &'static str)> {
    vec![
        ("picture", "refpicture"),
        ("points", "refpoints"),
        ("exectime", "refexectime"),
        ("itercount", "refitercount"),
    ]
}

#[cfg(test)]
mod bench_outcome_tests {
    use super::*;

    #[test]
    fn the_recovered_codes_map_to_their_outcomes() {
        assert_eq!(BenchOutcome::from_code(0), Some(BenchOutcome::Ran));
        assert_eq!(BenchOutcome::from_code(1), Some(BenchOutcome::Matched));
        assert_eq!(BenchOutcome::from_code(4), Some(BenchOutcome::TimedOut));
        assert_eq!(BenchOutcome::from_code(5), Some(BenchOutcome::Cancelled));
        assert_eq!(
            BenchOutcome::from_code(6),
            Some(BenchOutcome::SimulationError)
        );
        for code in [7, 8, 9] {
            assert_eq!(
                BenchOutcome::from_code(code),
                Some(BenchOutcome::ComparisonError)
            );
        }
    }

    #[test]
    fn the_two_writers_divide_the_codes_between_them() {
        // 2 and 3 belong to the earlier reporter.
        assert_eq!(BenchOutcome::from_code(2), None);
        assert_eq!(BenchOutcome::from_code(3), None);
        assert_eq!(TestStatus::from_code(2), TestStatus::NotFound);
        assert_eq!(TestStatus::from_code(3), TestStatus::CannotLoad);
    }

    #[test]
    fn a_code_neither_writer_claims_yields_nothing() {
        for code in [10, 11, 255] {
            assert_eq!(BenchOutcome::from_code(code), None);
        }
    }

    #[test]
    fn only_the_two_successes_are_not_failures() {
        assert!(!BenchOutcome::Ran.is_failure());
        assert!(!BenchOutcome::Matched.is_failure());

        for outcome in [
            BenchOutcome::TimedOut,
            BenchOutcome::Cancelled,
            BenchOutcome::SimulationError,
            BenchOutcome::ComparisonError,
        ] {
            assert!(outcome.is_failure(), "{outcome:?}");
        }
    }

    #[test]
    fn every_failure_has_a_starred_spelling_and_a_plain_one() {
        for outcome in [
            BenchOutcome::TimedOut,
            BenchOutcome::Cancelled,
            BenchOutcome::SimulationError,
            BenchOutcome::ComparisonError,
        ] {
            let starred = outcome.message_template(false);
            let plain = outcome.message_template(true);

            assert!(starred.starts_with("*** "), "{outcome:?}: {starred}");
            assert!(!plain.starts_with('*'), "{outcome:?}: {plain}");
            assert_ne!(starred, plain);
        }
    }

    #[test]
    fn neither_success_has_a_starred_form_at_all() {
        // Which settles what the stars are for.
        for outcome in [BenchOutcome::Ran, BenchOutcome::Matched] {
            assert_eq!(
                outcome.message_template(false),
                outcome.message_template(true)
            );
            assert!(!outcome.message_template(false).contains('*'));
        }
    }

    #[test]
    fn the_two_cancellations_differ_in_whether_they_can_say_how_far_it_got() {
        assert!(BenchOutcome::TimedOut.message_template(true).contains("%d"));
        assert!(
            !BenchOutcome::Cancelled
                .message_template(true)
                .contains("%d")
        );
    }

    #[test]
    fn the_two_error_kinds_read_differently_to_a_human() {
        assert!(
            BenchOutcome::SimulationError
                .message_template(true)
                .contains("in circuit")
        );
        assert!(
            BenchOutcome::ComparisonError
                .message_template(true)
                .contains("for circuit")
        );
    }

    #[test]
    fn a_circuits_kind_is_written_into_its_name() {
        assert_eq!(circuit_label("amp", false), "amp (analog)");
        assert_eq!(circuit_label("cpu", true), "cpu (mixed)");
    }

    #[test]
    fn the_corner_marker_goes_on_the_mode_not_the_circuit() {
        let ordinary = mode_label(TRANSIENT_MODE_NAME, false);
        let corner = mode_label(TRANSIENT_MODE_NAME, true);

        assert_eq!(ordinary, "Transient");
        assert_eq!(corner, "Transient - corner test");

        // One circuit's two runs share a circuit name.
        assert_eq!(circuit_label("amp", false), circuit_label("amp", false));
        assert_ne!(ordinary, corner);
    }

    #[test]
    fn every_measurement_is_paired_with_the_references_own() {
        for (measured, reference) in paired_fields() {
            assert!(RECORD_FIELDS.contains(&measured), "{measured}");
            assert!(RECORD_FIELDS.contains(&reference), "{reference}");
            assert_eq!(reference, format!("ref{measured}"));
        }
    }

    #[test]
    fn the_record_fields_are_all_distinct() {
        let mut seen = RECORD_FIELDS.to_vec();
        seen.sort_unstable();
        seen.dedup();
        assert_eq!(seen.len(), RECORD_FIELDS.len());
    }

    #[test]
    fn the_fields_every_record_carries_come_first() {
        assert_eq!(
            &RECORD_FIELDS[..4],
            ["index", "mode", "status", "circuit"].as_slice()
        );
    }
}

/// How many analyses must be running before a result's name needs
/// qualifying.
///
/// Two further contexts of this subsystem have destructors of their own —
/// Ghidra functions `FUN_012d4990` at `0x012D4990`, releasing a run context's
/// nine field groups including two runs of 0x29 and 0x14 strings, and
/// `FUN_012d7bb0` at `0x012D7BB0`, releasing a report context's eighteen.
/// Neither has a counterpart here.
///
/// Part of Ghidra function `FUN_012d6af0` at `0x012D6AF0`.
pub const QUALIFY_NAME_THRESHOLD: u32 = 2;

/// Names one result within its test case.
///
/// Implements Ghidra function `FUN_012d6af0` at `0x012D6AF0`.
///
/// The index alone names the result when only one analysis is running,
/// because there is then nothing to tell apart. Two or more and the analysis
/// is added, so a name is only as long as it needs to be — and a bench that
/// runs one analysis produces the same names it always did when a second is
/// switched on for the others.
///
/// The count is of the three *enable* flags, not of the analyses that
/// actually produced anything, so switching an analysis on and having it
/// produce nothing still lengthens every name.
#[must_use]
pub fn result_name(index: i32, qualifier: &str, separator: &str, enabled: &[bool]) -> String {
    let running: u32 = enabled.iter().take(3).map(|on| u32::from(*on)).sum();

    if running < QUALIFY_NAME_THRESHOLD {
        return index.to_string();
    }
    format!("{index}{separator}{qualifier}")
}

/// Which of the three analyses one run performs.
///
/// Part of Ghidra function `FUN_012d7e60` at `0x012D7E60`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AnalysisRunner {
    /// The one the first flag selects, whatever the second says.
    First,
    /// The one the second selects when the first is clear.
    Second,
    /// The one neither selects.
    Default,
}

/// Which analysis a pair of flags selects.
///
/// Part of Ghidra function `FUN_012d7e60` at `0x012D7E60`.
///
/// The first flag wins outright rather than the two being combined, so a
/// caller that sets both gets the first — which means a new flag could be
/// added in front without disturbing what the existing ones mean.
#[must_use]
pub const fn analysis_runner(first: bool, second: bool) -> AnalysisRunner {
    if first {
        return AnalysisRunner::First;
    }
    if second {
        return AnalysisRunner::Second;
    }
    AnalysisRunner::Default
}

#[cfg(test)]
mod bench_naming_economy_tests {
    use super::*;

    #[test]
    fn one_analysis_needs_no_qualifier_because_nothing_needs_telling_apart() {
        assert_eq!(result_name(3, "ac", ".", &[true, false, false]), "3");
        assert_eq!(result_name(3, "ac", ".", &[false, false, false]), "3");
    }

    #[test]
    fn two_or_more_analyses_qualify_every_name() {
        assert_eq!(result_name(3, "ac", ".", &[true, true, false]), "3.ac");
        assert_eq!(result_name(3, "dc", ".", &[true, true, true]), "3.dc");
    }

    #[test]
    fn switching_a_second_analysis_on_lengthens_the_first_ones_names_too() {
        let alone = result_name(1, "tr", ".", &[true, false, false]);
        let together = result_name(1, "tr", ".", &[true, true, false]);

        assert_ne!(alone, together);
        assert!(together.starts_with(&alone));
    }

    #[test]
    fn the_count_is_of_the_enables_not_of_what_produced_anything() {
        // Three enabled, so every name is qualified whether or not each
        // analysis actually yielded a result.
        assert_eq!(result_name(7, "ac", ".", &[true, true, true]), "7.ac");
    }

    #[test]
    fn only_the_three_analysis_slots_are_counted() {
        // Later slots of the settings block must not affect the name.
        let flags = [true, false, false, true, true, true, true, true, true];
        assert_eq!(result_name(2, "tr", ".", &flags), "2");
    }

    #[test]
    fn a_settings_block_too_short_to_answer_counts_what_it_has() {
        assert_eq!(result_name(1, "tr", ".", &[]), "1");
        assert_eq!(result_name(1, "tr", ".", &[true, true]), "1.tr");
    }

    #[test]
    fn the_first_flag_wins_outright_rather_than_the_two_combining() {
        assert_eq!(analysis_runner(true, false), AnalysisRunner::First);
        assert_eq!(analysis_runner(true, true), AnalysisRunner::First);
    }

    #[test]
    fn the_second_is_reached_only_when_the_first_is_clear() {
        assert_eq!(analysis_runner(false, true), AnalysisRunner::Second);
        assert_eq!(analysis_runner(false, false), AnalysisRunner::Default);
    }
}

/// What the collating search appends to a report's name stem.
///
/// Part of Ghidra function `FUN_012d74a0` at `0x012D74A0`.
///
/// The wildcard stands where the per-case index goes, so the search finds
/// exactly the files [`report_path`] wrote and nothing else that happens to
/// be in the folder.
pub const REPORT_SEARCH_SUFFIX: &str = "_*.xml";

/// Whether a record with no success attribute counts as a pass.
///
/// Part of Ghidra function `FUN_012d74a0` at `0x012D74A0`.
///
/// It does — a record the collator cannot read is treated as having passed
/// rather than failed, so a malformed report does not turn into a false
/// alarm. The cost is that it can hide a real failure, which is why the
/// writer always writes the attribute explicitly.
pub const SUCCESS_DEFAULT: bool = true;

/// The pattern the collator searches a result folder with.
///
/// Part of Ghidra function `FUN_012d74a0` at `0x012D74A0`.
#[must_use]
pub fn report_search_pattern(folder: &str, name: &str) -> String {
    format!("{folder}{REPORT_PREFIX}{name}{REPORT_SEARCH_SUFFIX}")
}

/// One line of the collated summary.
///
/// Part of Ghidra function `FUN_012d74a0` at `0x012D74A0`.
///
/// The circuit is named relative to the bench's own folder rather than in
/// full, so a summary stays readable however deep the bench sits.
#[must_use]
pub fn summary_line(relative_circuit: &str, status: &str, separator: &str) -> String {
    format!("{relative_circuit}{separator}{status}")
}

/// One record read back out of a per-case report.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CollatedRecord {
    /// The circuit it ran, as the report recorded it.
    pub circuit: String,
    /// What the report said happened.
    pub status: String,
    /// Whether the record says it passed.
    pub success: bool,
}

/// What collating the per-case reports needs.
pub trait ReportCollationHost {
    /// Whether the result folder exists.
    fn folder_exists(&mut self, folder: &str) -> bool;

    /// The files matching one pattern, in the order the folder yields them.
    fn find_reports(&mut self, pattern: &str) -> Vec<String>;

    /// The records one report holds.
    fn records(&mut self, path: &str) -> Vec<CollatedRecord>;

    /// Cuts a circuit path down to its place under the bench's folder.
    fn relative_circuit(&mut self, circuit: &str) -> String;
}

/// Implements Ghidra function `FUN_012d74a0` at `0x012D74A0`.
///
/// Gathers the per-case reports into one summary.
///
/// The collator finds the reports by pattern rather than by remembering what
/// it wrote, so a run that was interrupted still summarises the cases that
/// did finish — and a report left over from an earlier run of the same bench
/// is picked up too, which is why the folder is meant to be a fresh one.
///
/// `failures_only` decides what reaches the summary. Both settings read every
/// record; the flag chooses only what is written down, so the collator costs
/// the same either way.
///
/// Returns the summary's lines.
pub fn collate_reports(
    host: &mut impl ReportCollationHost,
    folder: &str,
    name: &str,
    separator: &str,
    failures_only: bool,
) -> Vec<String> {
    if !host.folder_exists(folder) {
        return Vec::new();
    }

    let pattern = report_search_pattern(folder, name);
    let mut lines = Vec::new();

    for report in host.find_reports(&pattern) {
        for record in host.records(&report) {
            if failures_only && record.success {
                continue;
            }
            let circuit = host.relative_circuit(&record.circuit);
            lines.push(summary_line(&circuit, &record.status, separator));
        }
    }

    lines
}

#[cfg(test)]
mod collation_tests {
    use super::*;

    #[test]
    fn the_search_finds_exactly_what_the_writer_wrote() {
        let pattern = report_search_pattern(r"C:\out", "run");
        assert_eq!(pattern, r"C:\out\report_run_*.xml");

        let written = report_path(r"C:\out", "run", "_", 3);
        assert_eq!(written, r"C:\out\report_run_3.xml");
        assert!(written.starts_with(r"C:\out\report_run_"));
        assert_eq!(
            std::path::Path::new(&written)
                .extension()
                .and_then(std::ffi::OsStr::to_str),
            Some("xml")
        );
    }

    #[test]
    fn an_unreadable_record_counts_as_a_pass_rather_than_an_alarm() {
        // A record whose success attribute is missing takes this value, so a
        // malformed report cannot raise a false alarm.
        let missing_attribute = SUCCESS_DEFAULT;
        assert!(missing_attribute);
    }

    #[test]
    fn a_summary_line_names_the_circuit_relative_to_the_bench() {
        assert_eq!(
            summary_line(r"filters\amp.TSC", "Comparison error", " : "),
            r"filters\amp.TSC : Comparison error"
        );
    }

    #[derive(Debug, Default)]
    struct Folder {
        exists: bool,
        reports: Vec<(String, Vec<CollatedRecord>)>,
    }

    impl Folder {
        fn with(records: Vec<CollatedRecord>) -> Self {
            Self {
                exists: true,
                reports: vec![("report_run_1.xml".to_owned(), records)],
            }
        }
    }

    impl ReportCollationHost for Folder {
        fn folder_exists(&mut self, _folder: &str) -> bool {
            self.exists
        }

        fn find_reports(&mut self, _pattern: &str) -> Vec<String> {
            self.reports.iter().map(|(name, _)| name.clone()).collect()
        }

        fn records(&mut self, path: &str) -> Vec<CollatedRecord> {
            self.reports
                .iter()
                .find(|(name, _)| name == path)
                .map(|(_, records)| records.clone())
                .unwrap_or_default()
        }

        fn relative_circuit(&mut self, circuit: &str) -> String {
            circuit.trim_start_matches(r"C:\bench\").to_owned()
        }
    }

    fn record(circuit: &str, status: &str, success: bool) -> CollatedRecord {
        CollatedRecord {
            circuit: circuit.to_owned(),
            status: status.to_owned(),
            success,
        }
    }

    #[test]
    fn a_missing_folder_summarises_nothing() {
        let mut host = Folder::default();

        assert!(collate_reports(&mut host, "nowhere", "run", " : ", false).is_empty());
    }

    #[test]
    fn every_record_reaches_the_summary_when_failures_are_not_filtered() {
        let mut host = Folder::with(vec![
            record(r"C:\bench\a.TSC", "Success", true),
            record(r"C:\bench\b.TSC", "Comparison error", false),
        ]);

        let lines = collate_reports(&mut host, "out", "run", " : ", false);

        assert_eq!(lines, ["a.TSC : Success", "b.TSC : Comparison error"]);
    }

    #[test]
    fn filtering_keeps_only_the_failures() {
        let mut host = Folder::with(vec![
            record(r"C:\bench\a.TSC", "Success", true),
            record(r"C:\bench\b.TSC", "Comparison error", false),
        ]);

        let lines = collate_reports(&mut host, "out", "run", " : ", true);

        assert_eq!(lines, ["b.TSC : Comparison error"]);
    }

    #[test]
    fn several_reports_are_gathered_in_the_order_the_folder_yields_them() {
        let mut host = Folder {
            exists: true,
            reports: vec![
                (
                    "report_run_1.xml".to_owned(),
                    vec![record("one", "a", false)],
                ),
                (
                    "report_run_2.xml".to_owned(),
                    vec![record("two", "b", false)],
                ),
            ],
        };

        assert_eq!(
            collate_reports(&mut host, "out", "run", "|", true),
            ["one|a", "two|b"]
        );
    }

    #[test]
    fn an_interrupted_run_still_summarises_the_cases_that_finished() {
        let mut host = Folder::with(vec![record("one", "Success", true)]);

        assert_eq!(
            collate_reports(&mut host, "out", "run", "|", false).len(),
            1
        );
    }

    #[test]
    fn a_report_holding_nothing_contributes_nothing() {
        let mut host = Folder::with(Vec::new());

        assert!(collate_reports(&mut host, "out", "run", "|", false).is_empty());
    }
}

/// Why one curve was chosen as the one to compare.
///
/// Part of Ghidra function `FUN_012d0200` at `0x012D0200`.
///
/// The four are tried in order and the first that answers wins, so a bench
/// that configures a name always gets it and one that configures nothing
/// still gets something.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CurveChoice {
    /// It carries the name this analysis was configured with.
    Configured(usize),
    /// It carries the name the program uses when nothing is configured.
    Conventional(usize),
    /// Its name is the shortest of those that are qualified at all.
    Shortest(usize),
    /// Nothing matched, so the first curve stands in.
    First,
}

impl CurveChoice {
    /// Which curve it names.
    #[must_use]
    pub const fn index(self) -> usize {
        match self {
            Self::Configured(index) | Self::Conventional(index) | Self::Shortest(index) => index,
            Self::First => 0,
        }
    }
}

/// The part of a qualified name the shortest-name rule measures.
///
/// Part of Ghidra function `FUN_012d0200` at `0x012D0200`.
///
/// Only a name carrying the first marker is measured at all — an unqualified
/// name is not a candidate, however short it is. What is measured is what
/// follows that marker, trimmed again at the second, so two curves of one
/// node are compared on the part that differs rather than on the prefix they
/// share.
#[must_use]
pub fn measurable_tail(name: &str, marker: char, trim_at: char) -> Option<String> {
    let position = name.find(marker)?;
    let tail = &name[position + marker.len_utf8()..];

    Some(
        tail.find(trim_at)
            .map_or_else(|| tail.to_owned(), |end| tail[..end].to_owned()),
    )
}

/// One curve as the chooser sees it.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CandidateCurve {
    /// Its name.
    pub name: String,
    /// Whether it is of the kind the chooser considers at all.
    pub eligible: bool,
}

/// Implements Ghidra function `FUN_012d0200` at `0x012D0200`.
///
/// Chooses which curve of a document is the one to compare.
///
/// Four rules in strict order. The configured name wins outright, so a bench
/// that names its output always gets that one. Failing that, the name the
/// program itself uses. Failing that, the shortest qualified name — on the
/// reasoning that the plainest name is the principal output and the longer
/// ones are derived from it. Failing everything, the first curve, so the
/// comparison always has something rather than refusing.
///
/// The two name tests differ in case sensitivity on purpose: the configured
/// name is matched exactly because a person typed it and meant it, while the
/// conventional one is matched loosely because the program owns it and its
/// spelling is not the user's concern.
///
/// Ties on the shortest name keep the earlier curve, since a later one has to
/// be strictly shorter to displace it.
#[must_use]
pub fn choose_main_curve(
    curves: &[CandidateCurve],
    configured: Option<&str>,
    conventional: &str,
    separator: char,
    marker: char,
    trim_at: char,
) -> CurveChoice {
    let mut first_configured = None;
    let mut first_conventional = None;
    let mut shortest: Option<(usize, usize)> = None;

    for (index, curve) in curves.iter().enumerate() {
        if !curve.eligible {
            continue;
        }

        if let Some(wanted) = configured {
            if first_configured.is_none() && names_match(&curve.name, wanted, true, separator) {
                first_configured = Some(index);
            }
        }

        if first_conventional.is_none() && names_match(&curve.name, conventional, false, separator)
        {
            first_conventional = Some(index);
        }

        if let Some(tail) = measurable_tail(&curve.name, marker, trim_at) {
            let length = tail.chars().count();
            if shortest.is_none_or(|(_, best)| length < best) {
                shortest = Some((index, length));
            }
        }
    }

    if let Some(index) = first_configured {
        return CurveChoice::Configured(index);
    }
    if let Some(index) = first_conventional {
        return CurveChoice::Conventional(index);
    }
    if let Some((index, _)) = shortest {
        return CurveChoice::Shortest(index);
    }
    CurveChoice::First
}

#[cfg(test)]
mod curve_choice_tests {
    use super::*;

    fn curve(name: &str) -> CandidateCurve {
        CandidateCurve {
            name: name.to_owned(),
            eligible: true,
        }
    }

    #[test]
    fn only_a_qualified_name_is_measured_at_all() {
        assert_eq!(measurable_tail("V(out)", '(', ')'), Some("out".to_owned()));
        assert_eq!(measurable_tail("plain", '(', ')'), None);
    }

    #[test]
    fn what_is_measured_is_what_follows_the_marker() {
        // Two curves of one node differ only after the marker.
        assert_eq!(
            measurable_tail("Voltage(node1)", '(', ')'),
            Some("node1".to_owned())
        );
        assert_eq!(
            measurable_tail("Current(node1)", '(', ')'),
            Some("node1".to_owned())
        );
    }

    #[test]
    fn a_tail_with_nothing_to_trim_is_taken_whole() {
        assert_eq!(measurable_tail("V(out", '(', ')'), Some("out".to_owned()));
    }

    #[test]
    fn the_configured_name_wins_outright() {
        let curves = [curve("V(a)"), curve("V(b)"), curve("V(c)")];

        assert_eq!(
            choose_main_curve(&curves, Some("V(b)"), "V(a)", ':', '(', ')'),
            CurveChoice::Configured(1)
        );
    }

    #[test]
    fn the_conventional_name_is_next() {
        let curves = [curve("V(a)"), curve("V(b)")];

        assert_eq!(
            choose_main_curve(&curves, Some("V(z)"), "V(b)", ':', '(', ')'),
            CurveChoice::Conventional(1)
        );
    }

    #[test]
    fn the_configured_name_is_matched_exactly_and_the_conventional_one_loosely() {
        let curves = [curve("V(OUT)")];

        // The configured name must match case; the conventional one need not.
        assert_eq!(
            choose_main_curve(&curves, Some("v(out)"), "v(out)", ':', '(', ')'),
            CurveChoice::Conventional(0)
        );
        assert_eq!(
            choose_main_curve(&curves, Some("V(OUT)"), "nothing", ':', '(', ')'),
            CurveChoice::Configured(0)
        );
    }

    #[test]
    fn the_shortest_qualified_name_is_the_third_rule() {
        let curves = [
            curve("Voltage(a_long_node)"),
            curve("Voltage(n1)"),
            curve("Voltage(medium)"),
        ];

        assert_eq!(
            choose_main_curve(&curves, None, "nothing", ':', '(', ')'),
            CurveChoice::Shortest(1)
        );
    }

    #[test]
    fn an_unqualified_name_cannot_win_the_shortest_rule_however_short() {
        let curves = [curve("x"), curve("Voltage(node)")];

        assert_eq!(
            choose_main_curve(&curves, None, "nothing", ':', '(', ')'),
            CurveChoice::Shortest(1)
        );
    }

    #[test]
    fn a_tie_on_length_keeps_the_earlier_curve() {
        let curves = [curve("V(aa)"), curve("V(bb)")];

        assert_eq!(
            choose_main_curve(&curves, None, "nothing", ':', '(', ')'),
            CurveChoice::Shortest(0)
        );
    }

    #[test]
    fn nothing_matching_still_yields_the_first_curve() {
        let curves = [curve("plain"), curve("also plain")];

        let choice = choose_main_curve(&curves, None, "nothing", ':', '(', ')');
        assert_eq!(choice, CurveChoice::First);
        assert_eq!(choice.index(), 0);
    }

    #[test]
    fn an_empty_document_still_answers() {
        assert_eq!(
            choose_main_curve(&[], Some("V(out)"), "V(out)", ':', '(', ')'),
            CurveChoice::First
        );
    }

    #[test]
    fn an_ineligible_curve_is_passed_over_by_every_rule() {
        let curves = [
            CandidateCurve {
                name: "V(out)".to_owned(),
                eligible: false,
            },
            curve("V(in)"),
        ];

        assert_eq!(
            choose_main_curve(&curves, Some("V(out)"), "V(out)", ':', '(', ')'),
            CurveChoice::Shortest(1)
        );
    }

    #[test]
    fn the_first_match_of_each_rule_is_the_one_kept() {
        let curves = [curve("V(a)"), curve("V(a)"), curve("V(a)")];

        assert_eq!(
            choose_main_curve(&curves, Some("V(a)"), "V(a)", ':', '(', ')'),
            CurveChoice::Configured(0)
        );
    }
}

/// How a bench run treats the two result files.
///
/// Part of Ghidra function `FUN_012d5850` at `0x012D5850`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum BenchRunMode {
    /// Recovered value 0: only the reference is opened, because the run's own
    /// result is still in memory and does not need reading back.
    AgainstMemory,
    /// Recovered value 1: both files are opened and compared, which is what a
    /// bench does when it is checking results it did not produce itself.
    AgainstFile,
    /// Any other value, which opens neither as a pair.
    Neither,
}

impl BenchRunMode {
    /// Recovers a mode from its stored value.
    #[must_use]
    pub const fn from_value(value: u8) -> Self {
        match value {
            0 => Self::AgainstMemory,
            1 => Self::AgainstFile,
            _ => Self::Neither,
        }
    }

    /// Whether this mode reads the run's own result back from a file.
    ///
    /// Part of Ghidra function `FUN_012d5850` at `0x012D5850`.
    #[must_use]
    pub const fn reads_test_file(self) -> bool {
        matches!(self, Self::AgainstFile)
    }
}

/// Reported when neither result file is there.
pub const BOTH_RESULTS_MISSING_MESSAGE: &str = "Reference and test results not found";

/// Reported when only the reference is missing.
pub const REFERENCE_RESULT_MISSING_MESSAGE: &str = "Reference result not found";

/// Reported when only the run's own result is.
pub const TEST_RESULT_MISSING_MESSAGE: &str = "Test result not found";

/// Which result file could not be found, if either.
///
/// Part of Ghidra function `FUN_012d5850` at `0x012D5850`.
///
/// A mode that never opens the test file cannot miss it, so it reports only
/// the reference however much else is absent — the message names what was
/// actually looked for rather than everything that could have been.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum MissingResultFile {
    /// Neither was there.
    Both,
    /// The reference was not.
    Reference,
    /// The run's own result was not.
    Test,
}

impl MissingResultFile {
    /// What the report says.
    #[must_use]
    pub const fn message(self) -> &'static str {
        match self {
            Self::Both => BOTH_RESULTS_MISSING_MESSAGE,
            Self::Reference => REFERENCE_RESULT_MISSING_MESSAGE,
            Self::Test => TEST_RESULT_MISSING_MESSAGE,
        }
    }

    /// The status code the report is recorded under.
    ///
    /// Part of Ghidra function `FUN_012d5850` at `0x012D5850`.
    ///
    /// All three share one code, because to the reader they are the same
    /// failure — the comparison did not happen — and the message says which
    /// half was missing.
    #[must_use]
    pub const fn status_code(self) -> u8 {
        MISSING_RESULT_STATUS_CODE
    }
}

/// The status every missing-result failure is recorded under.
pub const MISSING_RESULT_STATUS_CODE: u8 = 7;

/// Which result file a run is missing.
///
/// Part of Ghidra function `FUN_012d5850` at `0x012D5850`.
///
/// The three-way answer mirrors the one the curve matcher gives, one level
/// down: the same instinct that a reader needs to know *which* half was
/// absent, applied to files rather than to curves.
#[must_use]
pub const fn missing_result_file(
    mode: BenchRunMode,
    reference_found: bool,
    test_found: bool,
) -> Option<MissingResultFile> {
    if reference_found && (!mode.reads_test_file() || test_found) {
        return None;
    }

    if !mode.reads_test_file() {
        return Some(MissingResultFile::Reference);
    }

    match (reference_found, test_found) {
        (false, false) => Some(MissingResultFile::Both),
        (false, true) => Some(MissingResultFile::Reference),
        (true, false) => Some(MissingResultFile::Test),
        (true, true) => None,
    }
}

#[cfg(test)]
mod run_mode_tests {
    use super::*;

    #[test]
    fn the_modes_come_from_their_recovered_values() {
        assert_eq!(BenchRunMode::from_value(0), BenchRunMode::AgainstMemory);
        assert_eq!(BenchRunMode::from_value(1), BenchRunMode::AgainstFile);

        for value in [2, 3, 255] {
            assert_eq!(BenchRunMode::from_value(value), BenchRunMode::Neither);
        }
    }

    #[test]
    fn only_one_mode_reads_the_runs_own_result_back() {
        assert!(BenchRunMode::AgainstFile.reads_test_file());
        assert!(!BenchRunMode::AgainstMemory.reads_test_file());
        assert!(!BenchRunMode::Neither.reads_test_file());
    }

    #[test]
    fn a_run_with_both_files_present_is_missing_nothing() {
        assert_eq!(
            missing_result_file(BenchRunMode::AgainstFile, true, true),
            None
        );
        assert_eq!(
            missing_result_file(BenchRunMode::AgainstMemory, true, false),
            None
        );
    }

    #[test]
    fn a_paired_run_distinguishes_all_three_absences() {
        assert_eq!(
            missing_result_file(BenchRunMode::AgainstFile, false, false),
            Some(MissingResultFile::Both)
        );
        assert_eq!(
            missing_result_file(BenchRunMode::AgainstFile, false, true),
            Some(MissingResultFile::Reference)
        );
        assert_eq!(
            missing_result_file(BenchRunMode::AgainstFile, true, false),
            Some(MissingResultFile::Test)
        );
    }

    #[test]
    fn a_mode_that_never_opens_the_test_file_cannot_miss_it() {
        // Both absent, but only the reference was ever looked for.
        assert_eq!(
            missing_result_file(BenchRunMode::AgainstMemory, false, false),
            Some(MissingResultFile::Reference)
        );
    }

    #[test]
    fn each_absence_says_something_different() {
        let messages = [
            MissingResultFile::Both.message(),
            MissingResultFile::Reference.message(),
            MissingResultFile::Test.message(),
        ];

        let mut seen = messages.to_vec();
        seen.sort_unstable();
        seen.dedup();
        assert_eq!(seen.len(), 3);
    }

    #[test]
    fn all_three_are_recorded_under_one_status_because_they_are_one_failure() {
        for missing in [
            MissingResultFile::Both,
            MissingResultFile::Reference,
            MissingResultFile::Test,
        ] {
            assert_eq!(missing.status_code(), MISSING_RESULT_STATUS_CODE);
        }

        // And that code is one of the comparison errors.
        assert_eq!(
            BenchOutcome::from_code(MISSING_RESULT_STATUS_CODE),
            Some(BenchOutcome::ComparisonError)
        );
    }

    #[test]
    fn the_file_level_answer_mirrors_the_curve_level_one() {
        // Same three-way shape, one level down.
        assert_eq!(
            missing_curve(false, true, true).map(MissingCurve::message),
            Some(REFERENCE_MISSING_MESSAGE)
        );
        assert_eq!(
            missing_result_file(BenchRunMode::AgainstFile, false, true)
                .map(MissingResultFile::message),
            Some(REFERENCE_RESULT_MISSING_MESSAGE)
        );
    }
}

/// The element a run's report opens with.
pub const HEADER_ELEMENT: &str = "header";

/// The element it closes with.
pub const FOOTER_ELEMENT: &str = "footer";

/// The element listing what went wrong.
pub const BUG_LIST_ELEMENT: &str = "buglist";

/// The attribute recording when the run began.
pub const START_TIME_ATTRIBUTE: &str = "delphistarttime";
/// The attribute recording when it ended.
pub const END_TIME_ATTRIBUTE: &str = "endtime";
/// The attribute recording how long it took.
pub const DURATION_ATTRIBUTE: &str = "duration";

/// The attribute each bug-list entry names its circuit with.
pub const BUG_CIRCUIT_ATTRIBUTE: &str = "circuit";
/// The attribute carrying what went wrong with it.
pub const BUG_MESSAGE_ATTRIBUTE: &str = "message";

/// The extension of the plain-text report.
pub const LOG_EXTENSION: &str = ".log";

/// The extension of the formatted one.
pub const HTML_EXTENSION: &str = ".html";

/// What the plain-text report is opened with.
///
/// Part of Ghidra function `FUN_012d9730` at `0x012D9730`.
///
/// Named outright rather than left to the system, because a `.log` has no
/// association worth relying on — the formatted report is opened by
/// association instead, since an `.html` always has one.
pub const LOG_VIEWER: &str = "notepad.exe";

/// One entry of a run's bug list.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct BugListEntry {
    /// The circuit that went wrong.
    pub circuit: String,
    /// What went wrong with it.
    pub message: String,
}

/// What a run's report was opened as.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ReportOpened {
    /// Neither was opened.
    Neither,
    /// Both were, each by its own opener.
    Both {
        /// Where the plain-text one is.
        log: String,
        /// Where the formatted one is.
        html: String,
    },
}

/// What finishing a run's report needs.
pub trait ReportFinishHost {
    /// When the run began.
    fn start_time(&mut self) -> String;

    /// When it ended.
    fn end_time(&mut self) -> String;

    /// How long it took, already written out.
    fn duration(&mut self) -> String;

    /// Whether every case passed.
    fn all_passed(&mut self) -> bool;

    /// Writes the header.
    fn write_header(&mut self, start_time: &str);

    /// Writes the footer.
    fn write_footer(&mut self, success: bool, end_time: &str, duration: &str);

    /// The failures this run collected.
    fn failures(&mut self) -> Vec<BugListEntry>;

    /// Writes the bug list.
    fn write_bug_list(&mut self, entries: &[BugListEntry]);

    /// Whether a file exists.
    fn file_exists(&mut self, path: &str) -> bool;

    /// Opens a file with a named program.
    fn open_with(&mut self, program: &str, path: &str);

    /// Opens a file with whatever the system associates with it.
    fn open_by_association(&mut self, path: &str);
}

/// Implements Ghidra function `FUN_012d9730` at `0x012D9730`.
///
/// Closes off a run's report and, if asked, puts it in front of the user.
///
/// The bug list is written only when the report is not already filtered down
/// to failures — otherwise every line of the report would be a bug and the
/// list would repeat it. So the two ways of reading a report are exclusive by
/// construction rather than by the reader remembering which they asked for.
///
/// Both reports are opened or neither, and each by its own opener: the plain
/// one by a named program because a `.log` has no dependable association, the
/// formatted one by association because an `.html` always has one. Both must
/// already exist — nothing is created here.
///
/// Returns what was opened.
pub fn finish_report(
    host: &mut impl ReportFinishHost,
    base_path: &str,
    failures_only: bool,
    open_afterwards: bool,
) -> ReportOpened {
    let start = host.start_time();
    host.write_header(&start);

    let success = host.all_passed();
    let end = host.end_time();
    let duration = host.duration();
    host.write_footer(success, &end, &duration);

    if !failures_only {
        let failures = host.failures();
        host.write_bug_list(&failures);
    }

    if !open_afterwards {
        return ReportOpened::Neither;
    }

    let log = format!("{base_path}{LOG_EXTENSION}");
    let html = format!("{base_path}{HTML_EXTENSION}");

    if !host.file_exists(&log) || !host.file_exists(&html) {
        return ReportOpened::Neither;
    }

    host.open_with(LOG_VIEWER, &log);
    host.open_by_association(&html);
    ReportOpened::Both { log, html }
}

#[cfg(test)]
mod report_finish_tests {
    use super::*;

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum Step {
        Header(String),
        Footer(bool, String, String),
        BugList(usize),
        OpenWith(String, String),
        OpenAssociated(String),
    }

    #[derive(Debug, Default)]
    struct Run {
        passed: bool,
        failures: Vec<BugListEntry>,
        missing: Vec<String>,
        steps: Vec<Step>,
    }

    impl Run {
        fn ready() -> Self {
            Self {
                failures: vec![BugListEntry {
                    circuit: "amp.TSC".to_owned(),
                    message: "Comparison failed".to_owned(),
                }],
                ..Self::default()
            }
        }
    }

    impl ReportFinishHost for Run {
        fn start_time(&mut self) -> String {
            "09:00".to_owned()
        }

        fn end_time(&mut self) -> String {
            "09:05".to_owned()
        }

        fn duration(&mut self) -> String {
            "5 minute(s) 0 second(s)".to_owned()
        }

        fn all_passed(&mut self) -> bool {
            self.passed
        }

        fn write_header(&mut self, start_time: &str) {
            self.steps.push(Step::Header(start_time.to_owned()));
        }

        fn write_footer(&mut self, success: bool, end_time: &str, duration: &str) {
            self.steps.push(Step::Footer(
                success,
                end_time.to_owned(),
                duration.to_owned(),
            ));
        }

        fn failures(&mut self) -> Vec<BugListEntry> {
            self.failures.clone()
        }

        fn write_bug_list(&mut self, entries: &[BugListEntry]) {
            self.steps.push(Step::BugList(entries.len()));
        }

        fn file_exists(&mut self, path: &str) -> bool {
            !self.missing.iter().any(|name| path.ends_with(name))
        }

        fn open_with(&mut self, program: &str, path: &str) {
            self.steps
                .push(Step::OpenWith(program.to_owned(), path.to_owned()));
        }

        fn open_by_association(&mut self, path: &str) {
            self.steps.push(Step::OpenAssociated(path.to_owned()));
        }
    }

    #[test]
    fn the_header_and_footer_are_always_written() {
        let mut host = Run::ready();
        finish_report(&mut host, "run", true, false);

        assert!(host.steps.contains(&Step::Header("09:00".to_owned())));
        assert!(host.steps.contains(&Step::Footer(
            false,
            "09:05".to_owned(),
            "5 minute(s) 0 second(s)".to_owned()
        )));
    }

    #[test]
    fn a_filtered_report_writes_no_bug_list_because_it_would_repeat_itself() {
        let mut host = Run::ready();
        finish_report(&mut host, "run", true, false);

        assert!(
            !host
                .steps
                .iter()
                .any(|step| matches!(step, Step::BugList(_)))
        );
    }

    #[test]
    fn an_unfiltered_report_carries_one() {
        let mut host = Run::ready();
        finish_report(&mut host, "run", false, false);

        assert!(host.steps.contains(&Step::BugList(1)));
    }

    #[test]
    fn a_run_with_no_failures_still_writes_an_empty_bug_list() {
        let mut host = Run {
            failures: Vec::new(),
            passed: true,
            ..Run::ready()
        };
        finish_report(&mut host, "run", false, false);

        assert!(host.steps.contains(&Step::BugList(0)));
    }

    #[test]
    fn each_report_is_opened_by_its_own_opener() {
        let mut host = Run::ready();

        assert_eq!(
            finish_report(&mut host, "run", true, true),
            ReportOpened::Both {
                log: "run.log".to_owned(),
                html: "run.html".to_owned(),
            }
        );
        assert!(host.steps.contains(&Step::OpenWith(
            "notepad.exe".to_owned(),
            "run.log".to_owned()
        )));
        assert!(
            host.steps
                .contains(&Step::OpenAssociated("run.html".to_owned()))
        );
    }

    #[test]
    fn both_are_opened_or_neither() {
        for missing in [".log", ".html"] {
            let mut host = Run {
                missing: vec![missing.to_owned()],
                ..Run::ready()
            };

            assert_eq!(
                finish_report(&mut host, "run", true, true),
                ReportOpened::Neither
            );
            assert!(
                !host
                    .steps
                    .iter()
                    .any(|step| matches!(step, Step::OpenWith(..) | Step::OpenAssociated(_)))
            );
        }
    }

    #[test]
    fn a_run_that_was_not_asked_to_open_anything_still_writes_its_report() {
        let mut host = Run::ready();

        assert_eq!(
            finish_report(&mut host, "run", false, false),
            ReportOpened::Neither
        );
        assert!(host.steps.contains(&Step::BugList(1)));
    }

    #[test]
    fn nothing_is_created_only_opened() {
        let mut host = Run {
            missing: vec![".log".to_owned(), ".html".to_owned()],
            ..Run::ready()
        };
        finish_report(&mut host, "run", true, true);

        assert!(
            !host
                .steps
                .iter()
                .any(|step| matches!(step, Step::OpenWith(..)))
        );
    }
}

/// The settings file the machine's own configuration is read from.
pub const MACHINE_SETTINGS_FILE: &str = "TINA.INI";

/// The section holding the analysis settings.
pub const ANALYSIS_SETUP_SECTION: &str = "Analysis Setup";

/// The section holding the test-mode settings.
pub const TEST_MODE_SECTION: &str = "TestMode Settings";

/// The key naming the thread limit.
pub const MAX_THREADS_KEY: &str = "MaxNumberOfThreads";

/// The key naming whether matrix compilation is on.
pub const MATRIX_COMPILATION_KEY: &str = "MatrixCompilationEnabled";

/// The key naming how long one case may run.
pub const MAX_SIMULATION_TIME_KEY: &str = "MaxAutoTestSimulationTime";

/// The thread limit when the settings file says nothing.
pub const MAX_THREADS_DEFAULT: i32 = 0;

/// Whether matrix compilation is on when it says nothing.
///
/// On — so a run made without configuring anything is a run with the faster
/// engine, which is what most references were made with.
pub const MATRIX_COMPILATION_DEFAULT: i32 = 1;

/// How long one case may run when it says nothing, in seconds.
///
/// An hour. Long enough that a real analysis finishes and short enough that a
/// bench left running overnight does not spend all of it on one case.
pub const MAX_SIMULATION_TIME_DEFAULT: i32 = 0x0e10;

/// What the core count reads as when the thread limit is unset.
///
/// Part of Ghidra function `FUN_012d7f20` at `0x012D7F20`.
///
/// A word rather than a number, because an unset limit does not mean one
/// thread — it means the program chooses, and a reference made that way
/// cannot be assumed to have used any particular count.
pub const DYNAMIC_CORE_COUNT: &str = "Dynamic";

/// The test mode that measures rather than compares.
pub const MEASUREMENT_TEST_MODE: &str = "measurement";

/// The declaration the report opens with.
pub const REPORT_XML_DECLARATION: &str = "version=\"1.0\" encoding=\"UTF-8\"";

/// The element the whole report sits inside.
pub const REPORT_ROOT_ELEMENT: &str = "report";

/// The element naming the bench that was run.
pub const TEST_BENCH_ELEMENT: &str = "testbench";

/// How the core count is written into the header.
///
/// Part of Ghidra function `FUN_012d7f20` at `0x012D7F20`.
#[must_use]
pub fn core_setting(max_threads: i32) -> String {
    if max_threads <= MAX_THREADS_DEFAULT {
        return DYNAMIC_CORE_COUNT.to_owned();
    }
    max_threads.to_string()
}

/// Whether a bench is in the measuring mode rather than the comparing one.
///
/// Part of Ghidra function `FUN_012d7f20` at `0x012D7F20`.
///
/// Compared without regard to case, because the mode is written by hand into
/// the bench file.
#[must_use]
pub fn is_measurement_mode(test_mode: &str) -> bool {
    test_mode.eq_ignore_ascii_case(MEASUREMENT_TEST_MODE)
}

/// How long one case may run.
///
/// Part of Ghidra function `FUN_012d7f20` at `0x012D7F20`.
///
/// The bench's own value wins when it names one; otherwise the machine's
/// setting; otherwise an hour. So a bench can be stricter than the machine
/// without the machine having to be reconfigured for it.
#[must_use]
pub fn case_timeout(bench_timeout: Option<i32>, machine_timeout: Option<i32>) -> i32 {
    bench_timeout
        .or(machine_timeout)
        .unwrap_or(MAX_SIMULATION_TIME_DEFAULT)
}

/// What the report's header records about the run.
///
/// Part of Ghidra function `FUN_012d7f20` at `0x012D7F20`.
///
/// Half of this is not about the bench at all but about the *machine* — how
/// much memory it had, how many cores it used, whether the faster engine was
/// on, how long a case was allowed. A result is only comparable to a
/// reference made under the same conditions, so the header is what lets a
/// reader tell whether a difference is the circuit's or the machine's.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct RunHeader {
    /// The product version that made the run.
    pub version: String,
    /// The day it was made.
    pub date: String,
    /// The time it began, as the report writes it.
    pub start_time: String,
    /// The same time in the form the tooling reads back.
    pub raw_start_time: String,
    /// Where the bench's circuits live.
    pub root_folder: String,
    /// Where its results went.
    pub result_folder: String,
    /// How much memory the machine had.
    pub memory: String,
    /// How many cores were used, or that the program chose.
    pub core: String,
    /// Whether matrix compilation was on.
    pub matrix: String,
    /// How long one case was allowed.
    pub timeout: String,
}

/// The attributes a run header carries, in the order it writes them.
pub const RUN_HEADER_ATTRIBUTES: [&str; 10] = [
    "version",
    "date",
    "starttime",
    "delphistarttime",
    "rootfolder",
    "resultfolder",
    "memory",
    "core",
    "matrix",
    "timeout",
];

/// Which of those describe the machine rather than the bench.
///
/// Part of Ghidra function `FUN_012d7f20` at `0x012D7F20`.
pub const MACHINE_ATTRIBUTES: [&str; 4] = ["memory", "core", "matrix", "timeout"];

#[cfg(test)]
mod run_header_tests {
    use super::*;

    #[test]
    fn an_unset_thread_limit_reads_as_a_word_rather_than_a_number() {
        assert_eq!(core_setting(0), "Dynamic");
        assert_eq!(core_setting(-1), "Dynamic");
    }

    #[test]
    fn a_set_limit_reads_as_itself() {
        assert_eq!(core_setting(1), "1");
        assert_eq!(core_setting(16), "16");
    }

    #[test]
    fn an_unset_limit_is_not_the_same_as_one_thread() {
        assert_ne!(core_setting(0), core_setting(1));
    }

    #[test]
    fn the_test_mode_is_read_without_regard_to_case() {
        for written in ["measurement", "Measurement", "MEASUREMENT"] {
            assert!(is_measurement_mode(written), "{written}");
        }
        assert!(!is_measurement_mode("comparison"));
        assert!(!is_measurement_mode(""));
    }

    #[test]
    fn a_bench_can_be_stricter_than_the_machine() {
        assert_eq!(case_timeout(Some(60), Some(3_600)), 60);
    }

    #[test]
    fn the_machine_answers_when_the_bench_does_not() {
        assert_eq!(case_timeout(None, Some(120)), 120);
    }

    #[test]
    fn an_hour_stands_when_neither_says_anything() {
        assert_eq!(case_timeout(None, None), 3_600);
        assert_eq!(MAX_SIMULATION_TIME_DEFAULT, 3_600);
    }

    #[test]
    fn the_faster_engine_is_on_by_default() {
        // A run made without configuring anything matches most references.
        assert_eq!(MATRIX_COMPILATION_DEFAULT, 1);
    }

    #[test]
    fn nearly_half_the_header_is_about_the_machine_not_the_bench() {
        for attribute in MACHINE_ATTRIBUTES {
            assert!(
                RUN_HEADER_ATTRIBUTES.contains(&attribute),
                "{attribute} should be in the header"
            );
        }
        assert!(MACHINE_ATTRIBUTES.len() * 2 <= RUN_HEADER_ATTRIBUTES.len() + 2);
    }

    #[test]
    fn the_header_attributes_are_all_distinct() {
        let mut seen = RUN_HEADER_ATTRIBUTES.to_vec();
        seen.sort_unstable();
        seen.dedup();
        assert_eq!(seen.len(), RUN_HEADER_ATTRIBUTES.len());
    }

    #[test]
    fn the_start_time_is_recorded_twice_in_two_forms() {
        assert!(RUN_HEADER_ATTRIBUTES.contains(&"starttime"));
        assert!(RUN_HEADER_ATTRIBUTES.contains(&"delphistarttime"));
    }

    #[test]
    fn the_report_declares_its_encoding() {
        assert!(REPORT_XML_DECLARATION.contains("UTF-8"));
        assert!(REPORT_XML_DECLARATION.contains("1.0"));
    }
}

/// How a bench runs its cases.
///
/// Part of Ghidra function `FUN_012da080` at `0x012DA080`.
///
/// The two contexts this loop builds have destructors of their own — Ghidra
/// functions `FUN_012d9de0` at `0x012D9DE0`, releasing the eight field groups
/// a report context holds, and `FUN_012dabe0` at `0x012DABE0`, releasing the
/// fourteen a run context holds. Neither has a counterpart here, because this
/// port owns its state through Rust's own lifetimes.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum BenchExecution {
    /// One after another in the calling thread, with no progress list — a
    /// run nobody is watching does not need one.
    Serial,
    /// Several at once in workers, with a progress list showing what each is
    /// doing.
    Parallel,
}

impl BenchExecution {
    /// Which way a bench runs, from its flag.
    #[must_use]
    pub const fn from_flag(parallel: bool) -> Self {
        if parallel {
            Self::Parallel
        } else {
            Self::Serial
        }
    }

    /// Whether this way of running shows a progress list.
    #[must_use]
    pub const fn shows_progress(self) -> bool {
        matches!(self, Self::Parallel)
    }
}

/// Why one case will not be run.
///
/// Part of Ghidra function `FUN_012da080` at `0x012DA080`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CaseRejection {
    /// The folder it names is not there.
    FolderMissing,
    /// The folder is, but the circuit is not.
    CircuitMissing,
}

impl CaseRejection {
    /// The status this rejection is recorded under.
    ///
    /// Part of Ghidra function `FUN_012da080` at `0x012DA080`.
    ///
    /// Both are recorded as the file not being found, because to a reader
    /// they are the same thing — the bench named something that is not
    /// there — and the folder's own absence is not more informative than the
    /// circuit's.
    #[must_use]
    pub const fn status(self) -> TestStatus {
        TestStatus::NotFound
    }
}

/// Whether one case can be run, and why not if it cannot.
///
/// Part of Ghidra function `FUN_012da080` at `0x012DA080`.
///
/// The folder is checked before the circuit, so a bench pointed at a folder
/// that does not exist reports that rather than reporting every circuit in it
/// as missing one by one.
#[must_use]
pub const fn case_rejection(folder_exists: bool, circuit_exists: bool) -> Option<CaseRejection> {
    if !folder_exists {
        return Some(CaseRejection::FolderMissing);
    }
    if !circuit_exists {
        return Some(CaseRejection::CircuitMissing);
    }
    None
}

/// What running a whole bench needs.
pub trait BenchDriverHost {
    /// The cases the bench lists.
    fn cases(&mut self) -> Vec<TestCase>;

    /// Whether one case's folder is there.
    fn folder_exists(&mut self, case: &TestCase) -> bool;

    /// Whether its circuit is.
    fn circuit_exists(&mut self, case: &TestCase) -> bool;

    /// Records that a case will not be run.
    fn reject(&mut self, index: usize, rejection: CaseRejection);

    /// Whether the run has been asked to stop.
    fn cancelled(&mut self) -> bool;

    /// Runs one case here and now.
    fn run_here(&mut self, index: usize);

    /// Starts one case in a worker, answering whether it started.
    fn start_worker(&mut self, index: usize) -> bool;

    /// How many workers may run at once.
    fn worker_limit(&mut self) -> usize;

    /// How many are running.
    fn workers_running(&mut self) -> usize;

    /// Waits for at least one worker to finish.
    fn wait_for_a_worker(&mut self);

    /// Builds the progress list.
    fn open_progress_list(&mut self);

    /// Finishes the report.
    fn finish(&mut self);
}

/// Implements part of Ghidra function `FUN_012da080` at `0x012DA080`.
///
/// Checks every case before any of them is run.
///
/// Validating the whole bench first is what lets a missing file be reported
/// straight away rather than after an hour of simulating the cases before it.
/// Nothing is run in this pass, so the report a user sees within seconds
/// already names everything that cannot possibly work.
///
/// Returns the cases that can be run, in bench order.
pub fn validate_cases(host: &mut impl BenchDriverHost) -> Vec<usize> {
    let cases = host.cases();
    let mut runnable = Vec::new();

    for (index, case) in cases.iter().enumerate() {
        let folder = host.folder_exists(case);
        let circuit = folder && host.circuit_exists(case);

        match case_rejection(folder, circuit) {
            Some(rejection) => host.reject(index, rejection),
            None => runnable.push(index),
        }
    }

    runnable
}

/// Implements Ghidra function `FUN_012da080` at `0x012DA080`.
///
/// Runs a whole test bench.
///
/// Two passes: every case is checked, and only then is anything run. The
/// second pass takes one of two shapes, and the difference is not only
/// speed — a parallel run opens a progress list because several things are
/// happening that a user cannot otherwise follow, while a serial run does
/// not, because there is only ever one thing to say.
///
/// Both passes honour the cancel flag, and the serial one checks it between
/// every case rather than only at the start, so stopping a long bench takes
/// effect at the next case rather than at the end.
///
/// The report is finished whatever happened — including a cancelled run, so
/// a bench stopped half way still leaves a readable report of what it did
/// get through.
///
/// Returns how many cases were run.
pub fn run_bench(host: &mut impl BenchDriverHost, execution: BenchExecution) -> usize {
    let runnable = validate_cases(host);

    if execution.shows_progress() {
        host.open_progress_list();
    }

    let mut started = 0;
    for index in runnable {
        if host.cancelled() {
            break;
        }

        match execution {
            BenchExecution::Serial => {
                host.run_here(index);
                started += 1;
            }
            BenchExecution::Parallel => {
                let limit = host.worker_limit();
                while limit > 0 && host.workers_running() >= limit {
                    host.wait_for_a_worker();
                    if host.cancelled() {
                        break;
                    }
                }
                if host.cancelled() {
                    break;
                }
                if host.start_worker(index) {
                    started += 1;
                }
            }
        }
    }

    host.finish();
    started
}

#[cfg(test)]
mod bench_driver_tests {
    use super::*;

    #[test]
    fn only_a_parallel_run_shows_a_progress_list() {
        assert!(BenchExecution::Parallel.shows_progress());
        assert!(!BenchExecution::Serial.shows_progress());
        assert_eq!(BenchExecution::from_flag(true), BenchExecution::Parallel);
        assert_eq!(BenchExecution::from_flag(false), BenchExecution::Serial);
    }

    #[test]
    fn the_folder_is_checked_before_the_circuit() {
        assert_eq!(
            case_rejection(false, false),
            Some(CaseRejection::FolderMissing)
        );
        assert_eq!(
            case_rejection(true, false),
            Some(CaseRejection::CircuitMissing)
        );
        assert_eq!(case_rejection(true, true), None);
    }

    #[test]
    fn both_rejections_are_recorded_as_the_same_failure() {
        assert_eq!(
            CaseRejection::FolderMissing.status(),
            CaseRejection::CircuitMissing.status()
        );
        assert_eq!(CaseRejection::FolderMissing.status(), TestStatus::NotFound);
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum Step {
        Reject(usize, CaseRejection),
        ProgressList,
        RunHere(usize),
        StartWorker(usize),
        Wait,
        Finish,
    }

    #[derive(Debug, Default)]
    struct Bench {
        cases: Vec<TestCase>,
        missing_folders: Vec<usize>,
        missing_circuits: Vec<usize>,
        cancel_after: Option<usize>,
        limit: usize,
        running: usize,
        checks: usize,
        steps: Vec<Step>,
    }

    impl Bench {
        fn with(count: usize) -> Self {
            Self {
                cases: (0..count)
                    .map(|index| TestCase {
                        folder: format!("f{index}"),
                        circuit: format!("c{index}"),
                    })
                    .collect(),
                ..Self::default()
            }
        }

        fn index_of(&self, case: &TestCase) -> usize {
            self.cases.iter().position(|held| held == case).unwrap_or(0)
        }
    }

    impl BenchDriverHost for Bench {
        fn cases(&mut self) -> Vec<TestCase> {
            self.cases.clone()
        }

        fn folder_exists(&mut self, case: &TestCase) -> bool {
            !self.missing_folders.contains(&self.index_of(case))
        }

        fn circuit_exists(&mut self, case: &TestCase) -> bool {
            !self.missing_circuits.contains(&self.index_of(case))
        }

        fn reject(&mut self, index: usize, rejection: CaseRejection) {
            self.steps.push(Step::Reject(index, rejection));
        }

        fn cancelled(&mut self) -> bool {
            self.checks += 1;
            self.cancel_after.is_some_and(|after| self.checks > after)
        }

        fn run_here(&mut self, index: usize) {
            self.steps.push(Step::RunHere(index));
        }

        fn start_worker(&mut self, index: usize) -> bool {
            self.running += 1;
            self.steps.push(Step::StartWorker(index));
            true
        }

        fn worker_limit(&mut self) -> usize {
            self.limit
        }

        fn workers_running(&mut self) -> usize {
            self.running
        }

        fn wait_for_a_worker(&mut self) {
            self.running = self.running.saturating_sub(1);
            self.steps.push(Step::Wait);
        }

        fn open_progress_list(&mut self) {
            self.steps.push(Step::ProgressList);
        }

        fn finish(&mut self) {
            self.steps.push(Step::Finish);
        }
    }

    #[test]
    fn every_case_is_checked_before_any_is_run() {
        let mut host = Bench {
            missing_circuits: vec![1],
            ..Bench::with(3)
        };

        run_bench(&mut host, BenchExecution::Serial);

        let rejected = host
            .steps
            .iter()
            .position(|step| matches!(step, Step::Reject(..)))
            .expect("one case is rejected");
        let first_run = host
            .steps
            .iter()
            .position(|step| matches!(step, Step::RunHere(_)))
            .expect("cases run");

        assert!(rejected < first_run);
    }

    #[test]
    fn a_rejected_case_is_not_run() {
        let mut host = Bench {
            missing_folders: vec![0],
            ..Bench::with(2)
        };

        assert_eq!(run_bench(&mut host, BenchExecution::Serial), 1);
        assert!(host.steps.contains(&Step::RunHere(1)));
        assert!(!host.steps.contains(&Step::RunHere(0)));
    }

    #[test]
    fn a_serial_run_opens_no_progress_list() {
        let mut host = Bench::with(1);
        run_bench(&mut host, BenchExecution::Serial);

        assert!(!host.steps.contains(&Step::ProgressList));
    }

    #[test]
    fn a_parallel_run_opens_one_before_starting_anything() {
        let mut host = Bench {
            limit: 4,
            ..Bench::with(2)
        };
        run_bench(&mut host, BenchExecution::Parallel);

        let list = host
            .steps
            .iter()
            .position(|step| *step == Step::ProgressList)
            .expect("a progress list opens");
        let first = host
            .steps
            .iter()
            .position(|step| matches!(step, Step::StartWorker(_)))
            .expect("workers start");
        assert!(list < first);
    }

    #[test]
    fn a_serial_run_checks_for_cancellation_between_every_case() {
        let mut host = Bench {
            cancel_after: Some(2),
            ..Bench::with(5)
        };

        let run = run_bench(&mut host, BenchExecution::Serial);

        assert!(run < 5, "the run should stop early, ran {run}");
        assert!(run >= 2);
    }

    #[test]
    fn the_report_is_finished_even_when_the_run_is_cancelled() {
        let mut host = Bench {
            cancel_after: Some(0),
            ..Bench::with(3)
        };

        run_bench(&mut host, BenchExecution::Serial);

        assert_eq!(host.steps.last(), Some(&Step::Finish));
    }

    #[test]
    fn a_parallel_run_waits_rather_than_exceeding_its_limit() {
        let mut host = Bench {
            limit: 2,
            ..Bench::with(4)
        };

        run_bench(&mut host, BenchExecution::Parallel);

        assert!(host.steps.contains(&Step::Wait));
        assert_eq!(
            host.steps
                .iter()
                .filter(|step| matches!(step, Step::StartWorker(_)))
                .count(),
            4
        );
    }

    #[test]
    fn a_limit_of_none_starts_everything_without_waiting() {
        let mut host = Bench {
            limit: 0,
            ..Bench::with(3)
        };

        run_bench(&mut host, BenchExecution::Parallel);

        assert!(!host.steps.contains(&Step::Wait));
    }

    #[test]
    fn a_bench_whose_cases_all_fail_validation_runs_nothing_but_still_reports() {
        let mut host = Bench {
            missing_folders: vec![0, 1],
            ..Bench::with(2)
        };

        assert_eq!(run_bench(&mut host, BenchExecution::Serial), 0);
        assert_eq!(
            host.steps,
            [
                Step::Reject(0, CaseRejection::FolderMissing),
                Step::Reject(1, CaseRejection::FolderMissing),
                Step::Finish,
            ]
        );
    }

    #[test]
    fn an_empty_bench_still_finishes_its_report() {
        let mut host = Bench::default();

        assert_eq!(run_bench(&mut host, BenchExecution::Parallel), 0);
        assert_eq!(host.steps.last(), Some(&Step::Finish));
    }
}
