//! The background worker that runs one test case.
//!
//! The work happens off the interface thread and everything the user sees has
//! to be handed back to it. That hand-off is what most of this is about — and
//! the one place it is deliberately *not* done is the interesting part.

/// Which of the worker's two progress fields an update is for.
///
/// Part of Ghidra functions `FUN_012db250` at `0x012DB250` and `FUN_012db2f0`
/// at `0x012DB2F0`.
///
/// Two fields rather than one, each with its own handler, so an update to one
/// never disturbs what the other is showing — a worker can report what it is
/// doing and what it is doing it to independently.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ProgressField {
    /// The first field.
    First,
    /// The second.
    Second,
}

/// One progress update.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ProgressUpdate {
    /// Which field it is for.
    pub field: ProgressField,
    /// The text to show.
    pub text: String,
    /// The flag that travels with every update.
    pub leading_flag: bool,
    /// The second flag, likewise.
    pub trailing_flag: bool,
}

/// How the worker's completion reaches whoever is waiting.
///
/// Part of Ghidra function `FUN_012daf60` at `0x012DAF60`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CompletionRoute {
    /// Handed to the interface thread, as every other update is.
    ThroughInterfaceThread,
    /// Called straight out, without waiting for the interface thread.
    Directly,
}

/// How a finishing worker should report itself.
///
/// Part of Ghidra function `FUN_012daf60` at `0x012DAF60`.
///
/// Every other message the worker sends goes through the interface thread,
/// and this one does too — *unless* the owner is already closing. Then it is
/// called straight out, because an owner that is shutting down is waiting for
/// this very worker to finish: handing the message to it would leave each
/// side waiting for the other.
///
/// So the exception is not an optimisation. It is the difference between
/// closing and hanging.
#[must_use]
pub const fn completion_route(owner_closing: bool) -> CompletionRoute {
    if owner_closing {
        CompletionRoute::Directly
    } else {
        CompletionRoute::ThroughInterfaceThread
    }
}

/// What one worker was given to do.
///
/// Filled in by Ghidra function `FUN_012db0a0` at `0x012DB0A0`, which takes
/// the owner, five strings and three settings in one call rather than through
/// separate properties — so a worker is never half-configured, and there is
/// no order in which its fields have to be set.
///
/// The worker's own teardown is `FUN_012d8d80` at `0x012D8D80`, releasing the
/// fourteen field groups it held. Neither has a counterpart here.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct WorkerAssignment {
    /// The circuit to run.
    pub circuit: String,
    /// The four further paths the run needs, in the order they were given.
    pub paths: [String; 4],
    /// The flag chosen for this run.
    pub flag: bool,
    /// The numeric setting chosen for it.
    pub setting: u32,
    /// The second flag.
    pub second_flag: bool,
}

/// What running one test case needs.
pub trait BenchWorkerHost {
    /// Runs the analysis, answering whether it produced anything.
    fn run_analysis(&mut self, assignment: &WorkerAssignment) -> bool;

    /// Writes the corner reports for what it produced.
    fn write_corner_reports(&mut self, assignment: &WorkerAssignment);

    /// Releases what the run produced.
    fn release_result(&mut self);

    /// Whether the owner is already closing.
    fn owner_closing(&mut self) -> bool;

    /// Hands a message to the interface thread and waits for it.
    fn through_interface_thread(&mut self);

    /// Calls it straight out.
    fn directly(&mut self);

    /// Shows one progress update, always through the interface thread.
    fn show_progress(&mut self, update: &ProgressUpdate);
}

/// Implements Ghidra function `FUN_012dafe0` at `0x012DAFE0`.
///
/// Runs one test case.
///
/// The reports are written only when the analysis produced something, and the
/// result is released either way — so a run that yields nothing leaves no
/// reports and no leak, rather than empty reports that would have to be told
/// apart from real ones later.
///
/// Returns whether anything was produced.
pub fn run_test_case(host: &mut impl BenchWorkerHost, assignment: &WorkerAssignment) -> bool {
    if !host.run_analysis(assignment) {
        return false;
    }

    host.write_corner_reports(assignment);
    host.release_result();
    true
}

/// Implements Ghidra function `FUN_012daf60` at `0x012DAF60`.
///
/// Reports that the worker has finished.
///
/// Returns which way the message went.
pub fn report_completion(host: &mut impl BenchWorkerHost) -> CompletionRoute {
    let route = completion_route(host.owner_closing());
    match route {
        CompletionRoute::ThroughInterfaceThread => host.through_interface_thread(),
        CompletionRoute::Directly => host.directly(),
    }
    route
}

/// Implements Ghidra functions `FUN_012db250` at `0x012DB250` and
/// `FUN_012db2f0` at `0x012DB2F0`.
///
/// Shows one progress update.
///
/// Both fields take the same two flags alongside their text, and both go
/// through the interface thread — progress is never urgent enough to be worth
/// the exception completion makes.
pub fn post_progress(
    host: &mut impl BenchWorkerHost,
    field: ProgressField,
    text: &str,
    leading_flag: bool,
    trailing_flag: bool,
) {
    host.show_progress(&ProgressUpdate {
        field,
        text: text.to_owned(),
        leading_flag,
        trailing_flag,
    });
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum Step {
        Run,
        Reports,
        Release,
        ThroughThread,
        Direct,
        Progress(ProgressUpdate),
    }

    #[derive(Debug, Default)]
    struct Worker {
        produced: bool,
        closing: bool,
        steps: Vec<Step>,
    }

    impl BenchWorkerHost for Worker {
        fn run_analysis(&mut self, _assignment: &WorkerAssignment) -> bool {
            self.steps.push(Step::Run);
            self.produced
        }

        fn write_corner_reports(&mut self, _assignment: &WorkerAssignment) {
            self.steps.push(Step::Reports);
        }

        fn release_result(&mut self) {
            self.steps.push(Step::Release);
        }

        fn owner_closing(&mut self) -> bool {
            self.closing
        }

        fn through_interface_thread(&mut self) {
            self.steps.push(Step::ThroughThread);
        }

        fn directly(&mut self) {
            self.steps.push(Step::Direct);
        }

        fn show_progress(&mut self, update: &ProgressUpdate) {
            self.steps.push(Step::Progress(update.clone()));
        }
    }

    #[test]
    fn a_run_that_produces_something_writes_its_reports_and_releases() {
        let mut host = Worker {
            produced: true,
            ..Worker::default()
        };

        assert!(run_test_case(&mut host, &WorkerAssignment::default()));
        assert_eq!(host.steps, [Step::Run, Step::Reports, Step::Release]);
    }

    #[test]
    fn a_run_that_produces_nothing_writes_no_reports() {
        let mut host = Worker::default();

        assert!(!run_test_case(&mut host, &WorkerAssignment::default()));
        assert_eq!(host.steps, [Step::Run]);
    }

    #[test]
    fn an_ordinary_completion_goes_through_the_interface_thread() {
        let mut host = Worker::default();

        assert_eq!(
            report_completion(&mut host),
            CompletionRoute::ThroughInterfaceThread
        );
        assert_eq!(host.steps, [Step::ThroughThread]);
    }

    #[test]
    fn a_closing_owner_is_told_directly_because_it_is_waiting_for_this_worker() {
        let mut host = Worker {
            closing: true,
            ..Worker::default()
        };

        assert_eq!(report_completion(&mut host), CompletionRoute::Directly);
        assert_eq!(host.steps, [Step::Direct]);
    }

    #[test]
    fn the_route_is_decided_by_one_thing_only() {
        assert_eq!(
            completion_route(false),
            CompletionRoute::ThroughInterfaceThread
        );
        assert_eq!(completion_route(true), CompletionRoute::Directly);
    }

    #[test]
    fn progress_always_goes_through_the_interface_thread() {
        // Even while the owner is closing, which completion would not.
        let mut host = Worker {
            closing: true,
            ..Worker::default()
        };

        post_progress(&mut host, ProgressField::First, "step 1", true, false);

        assert_eq!(
            host.steps,
            [Step::Progress(ProgressUpdate {
                field: ProgressField::First,
                text: "step 1".to_owned(),
                leading_flag: true,
                trailing_flag: false,
            })]
        );
    }

    #[test]
    fn the_two_fields_are_updated_independently() {
        let mut host = Worker::default();

        post_progress(&mut host, ProgressField::First, "a", false, false);
        post_progress(&mut host, ProgressField::Second, "b", false, false);

        let fields: Vec<_> = host
            .steps
            .iter()
            .filter_map(|step| match step {
                Step::Progress(update) => Some(update.field),
                _ => None,
            })
            .collect();
        assert_eq!(fields, [ProgressField::First, ProgressField::Second]);
    }

    #[test]
    fn both_fields_carry_the_same_pair_of_flags() {
        let mut host = Worker::default();

        for field in [ProgressField::First, ProgressField::Second] {
            post_progress(&mut host, field, "x", true, true);
        }

        for step in &host.steps {
            let Step::Progress(update) = step else {
                continue;
            };
            assert!(update.leading_flag);
            assert!(update.trailing_flag);
        }
    }
}
