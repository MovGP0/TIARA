//! Starting a test bench running, and saying so as it goes.
//!
//! The run is announced at each step rather than only at the end, which is
//! what a sequence that can hang in the middle needs: every message names the
//! step that has just finished, so a log that stops tells you where.

/// What one run of the bench is stamped with.
///
/// Part of Ghidra function `FUN_012f3470` at `0x012F3470`.
///
/// Year to second with nothing between, so the stamp sorts as text in the
/// order the runs happened and can be part of a file name.
pub const RUN_STAMP_FORMAT: &str = "yyyymmddhhnnss";

/// What the busy indicator is raised and lowered by.
///
/// Part of Ghidra function `FUN_012f3470` at `0x012F3470`.
///
/// The same number ends it as begins it, which is what lets the two calls sit
/// at opposite ends of the run without either having to know what the other
/// did.
pub const BUSY_TOKEN: u32 = 49000;

/// The two further arguments the busy indicator is raised with.
///
/// Part of Ghidra function `FUN_012f3470` at `0x012F3470`.
///
/// Not recoverable as anything but their values; they are recorded so the
/// call can be reproduced exactly.
pub const BUSY_ARGUMENTS: (u32, u32) = (3, 0x23);

/// Said once the bench has been made ready.
///
/// Part of Ghidra function `FUN_012f3f60` at `0x012F3F60`.
pub const INIT_DONE: &str = "RunTestbench: Init done";

/// Said before the file is read, with the name after it.
///
/// Part of Ghidra function `FUN_012f3f60` at `0x012F3F60`.
pub const FILE_NAME_PREFIX: &str = "RunTestbench: file name: ";

/// Said once the file has been read.
///
/// Part of Ghidra function `FUN_012f3f60` at `0x012F3F60`.
pub const LOAD_DONE: &str = "RunTestbench: Testbench load done";

/// Said either side of the start, so a start that never returns is visible.
///
/// Part of Ghidra function `FUN_012f3f60` at `0x012F3F60`.
pub const BEFORE_START: &str = "RunTestbench: before start testbench";

/// The second half of that pair.
///
/// Part of Ghidra function `FUN_012f3f60` at `0x012F3F60`.
pub const AFTER_START: &str = "RunTestbench: after start testbench";

/// What starting a run needs of the application.
///
/// Part of Ghidra function `FUN_012f3470` at `0x012F3470`.
pub trait TestBenchStartHost {
    /// Raises the busy indicator.
    fn begin_busy(&mut self, token: u32, arguments: (u32, u32));

    /// Lowers it again.
    fn end_busy(&mut self, token: u32);

    /// The time now, in [`RUN_STAMP_FORMAT`].
    fn now_stamp(&self) -> String;

    /// Makes the runner for one file, stamped with one time.
    fn create_run(&mut self, stamp: &str, file_name: &str);

    /// Sets the one flag the runner is told before it starts.
    fn set_run_flag(&mut self, flag: bool);

    /// Sets it going.
    fn start_run(&mut self);
}

/// Implements Ghidra function `FUN_012f3470` at `0x012F3470`.
///
/// Stamps a run with the time and sets it going.
///
/// The runner is put in a global before it is configured or started, so
/// anything that looks there sees it from the moment it exists rather than
/// from the moment it is running — and a run that fails to start leaves the
/// last one that did in place of nothing at all.
///
/// The busy indicator is raised before the stamp is taken and lowered after
/// the run has been set going, not after it has finished; what it covers is
/// the making of the run, not the running.
pub fn start_test_bench<Host: TestBenchStartHost>(host: &mut Host, file_name: &str, flag: bool) {
    host.begin_busy(BUSY_TOKEN, BUSY_ARGUMENTS);
    let stamp = host.now_stamp();
    host.create_run(&stamp, file_name);
    host.set_run_flag(flag);
    host.start_run();
    host.end_busy(BUSY_TOKEN);
}

/// What running a bench needs of the application.
///
/// Part of Ghidra function `FUN_012f3f60` at `0x012F3F60`.
pub trait TestBenchRunHost {
    /// Gets everything ready.
    fn initialise(&mut self);

    /// Says one thing.
    fn log(&mut self, message: &str);

    /// Reads one test bench file.
    fn load(&mut self, file_name: &str);

    /// Settles whatever reading the file left to settle.
    fn after_load(&mut self);

    /// Puts the bench on screen.
    fn show(&mut self);

    /// Starts the run — Ghidra function `FUN_012f3470` at `0x012F3470`.
    fn start(&mut self, file_name: &str, flag: bool);
}

/// Implements Ghidra function `FUN_012f3f60` at `0x012F3F60`.
///
/// Runs one test bench file from beginning to started.
///
/// Every message names the step that has just finished, except the last pair,
/// which brackets the start — so a log ending at `before start testbench` says
/// the start itself is where it stopped, which no single message could.
///
/// Nothing here checks anything: the file name is not tested, the load is not
/// asked whether it worked, and the run is started regardless. The log is the
/// only account of what happened.
pub fn run_test_bench<Host: TestBenchRunHost>(host: &mut Host, file_name: &str, flag: bool) {
    host.initialise();
    host.log(INIT_DONE);
    host.log(&format!("{FILE_NAME_PREFIX}{file_name}"));
    host.load(file_name);
    host.log(LOAD_DONE);
    host.after_load();
    host.show();
    host.log(BEFORE_START);
    host.start(file_name, flag);
    host.log(AFTER_START);
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Default)]
    struct Starter {
        busy: Vec<(u32, Option<(u32, u32)>)>,
        created: Option<(String, String)>,
        flag: Option<bool>,
        started: usize,
        order: Vec<&'static str>,
    }

    impl TestBenchStartHost for Starter {
        fn begin_busy(&mut self, token: u32, arguments: (u32, u32)) {
            self.busy.push((token, Some(arguments)));
            self.order.push("begin");
        }

        fn end_busy(&mut self, token: u32) {
            self.busy.push((token, None));
            self.order.push("end");
        }

        fn now_stamp(&self) -> String {
            "20260918120000".to_owned()
        }

        fn create_run(&mut self, stamp: &str, file_name: &str) {
            self.created = Some((stamp.to_owned(), file_name.to_owned()));
            self.order.push("create");
        }

        fn set_run_flag(&mut self, flag: bool) {
            self.flag = Some(flag);
            self.order.push("flag");
        }

        fn start_run(&mut self) {
            self.started += 1;
            self.order.push("start");
        }
    }

    #[derive(Debug, Default)]
    struct Runner {
        said: Vec<String>,
        loaded: Vec<String>,
        started: Vec<(String, bool)>,
        order: Vec<&'static str>,
    }

    impl TestBenchRunHost for Runner {
        fn initialise(&mut self) {
            self.order.push("initialise");
        }

        fn log(&mut self, message: &str) {
            self.said.push(message.to_owned());
            self.order.push("log");
        }

        fn load(&mut self, file_name: &str) {
            self.loaded.push(file_name.to_owned());
            self.order.push("load");
        }

        fn after_load(&mut self) {
            self.order.push("after_load");
        }

        fn show(&mut self) {
            self.order.push("show");
        }

        fn start(&mut self, file_name: &str, flag: bool) {
            self.started.push((file_name.to_owned(), flag));
            self.order.push("start");
        }
    }

    #[test]
    fn the_run_is_stamped_with_the_time_it_was_made() {
        let mut host = Starter::default();
        start_test_bench(&mut host, "bench.tsc", true);

        assert_eq!(
            host.created,
            Some(("20260918120000".to_owned(), "bench.tsc".to_owned()))
        );
    }

    #[test]
    fn the_stamp_format_sorts_as_text_in_the_order_runs_happened() {
        // Year first and nothing between, so a plain string comparison works.
        assert!(RUN_STAMP_FORMAT.starts_with("yyyy"));
        assert!(!RUN_STAMP_FORMAT.contains('-'));
        assert!(!RUN_STAMP_FORMAT.contains(':'));
    }

    #[test]
    fn the_flag_is_set_after_the_run_is_made_and_before_it_starts() {
        let mut host = Starter::default();
        start_test_bench(&mut host, "bench.tsc", false);

        assert_eq!(host.order, ["begin", "create", "flag", "start", "end"]);
        assert_eq!(host.flag, Some(false));
    }

    #[test]
    fn the_busy_indicator_covers_the_making_rather_than_the_running() {
        let mut host = Starter::default();
        start_test_bench(&mut host, "bench.tsc", true);

        assert_eq!(host.order.first(), Some(&"begin"));
        assert_eq!(host.order.last(), Some(&"end"));
        assert_eq!(host.started, 1);
    }

    #[test]
    fn the_same_token_raises_and_lowers_it() {
        let mut host = Starter::default();
        start_test_bench(&mut host, "bench.tsc", true);

        assert_eq!(host.busy[0].0, host.busy[1].0);
        assert_eq!(host.busy[0].1, Some(BUSY_ARGUMENTS));
        assert_eq!(host.busy[1].1, None);
    }

    #[test]
    fn a_run_goes_through_every_step_in_order() {
        let mut host = Runner::default();
        run_test_bench(&mut host, "bench.tsc", true);

        assert_eq!(
            host.order,
            [
                "initialise",
                "log",
                "log",
                "load",
                "log",
                "after_load",
                "show",
                "log",
                "start",
                "log"
            ]
        );
    }

    #[test]
    fn every_recovered_message_is_said_exactly_once() {
        let mut host = Runner::default();
        run_test_bench(&mut host, "bench.tsc", true);

        for message in [INIT_DONE, LOAD_DONE, BEFORE_START, AFTER_START] {
            assert_eq!(
                host.said.iter().filter(|said| *said == message).count(),
                1,
                "{message}"
            );
        }
    }

    #[test]
    fn the_file_name_is_said_before_it_is_read() {
        let mut host = Runner::default();
        run_test_bench(&mut host, "bench.tsc", true);

        assert_eq!(host.said[1], "RunTestbench: file name: bench.tsc");
        assert_eq!(host.loaded, ["bench.tsc"]);
    }

    #[test]
    fn the_start_is_bracketed_so_a_log_can_stop_inside_it() {
        let mut host = Runner::default();
        run_test_bench(&mut host, "bench.tsc", true);
        let before = host
            .said
            .iter()
            .position(|said| said == BEFORE_START)
            .expect("said before starting");
        let after = host
            .said
            .iter()
            .position(|said| said == AFTER_START)
            .expect("said after starting");

        assert_eq!(after, before + 1);
    }

    #[test]
    fn the_flag_is_carried_through_to_the_start_unchanged() {
        for flag in [true, false] {
            let mut host = Runner::default();
            run_test_bench(&mut host, "bench.tsc", flag);

            assert_eq!(host.started, [("bench.tsc".to_owned(), flag)]);
        }
    }

    #[test]
    fn nothing_is_checked_along_the_way() {
        // An empty name is read and started like any other.
        let mut host = Runner::default();
        run_test_bench(&mut host, "", true);

        assert_eq!(host.loaded, [""]);
        assert_eq!(host.started.len(), 1);
    }
}
