//! The recovered COM automation idioms.
//!
//! Several of the application's outboard tools are driven over COM rather
//! than linked in, and the recovered code reaches them through the same three
//! habits everywhere: a result code that is checked rather than returned, an
//! interface created the first time it is wanted, and a command that is one
//! call on a vtable slot with nothing to say back.
//!
//! Those habits are what this module carries. The interface itself is not
//! named by the symbols, but the shapes of its first slots are distinctive:
//! two methods taking nothing at slots `0x38` and `0x40`, and one at `0x58`
//! taking an address followed by four optional arguments the caller always
//! leaves empty. That is the shape of a web browser control's `GoBack`,
//! `GoForward` and `Navigate`, and the commands are named for it — with the
//! slot kept alongside, since the naming is inference from shape and not a
//! recovered symbol.

use std::fmt;

/// A COM result code.
///
/// Negative values are failures; everything else, including values other than
/// zero, is a success. That is why the recovered check tests the sign rather
/// than comparing against zero: a call that succeeds with something to report
/// must not be treated as an error.
pub type HResult = i32;

/// The result code for an unremarkable success.
pub const S_OK: HResult = 0;

/// A COM call that failed.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ComError {
    /// The result code the call returned.
    pub code: HResult,
}

impl fmt::Display for ComError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(formatter, "COM call failed with result {:#010x}", self.code)
    }
}

impl std::error::Error for ComError {}

/// Implements Ghidra function `FUN_0041d630` at `0x0041D630`.
///
/// Turns a COM result code into a failure, or passes it through.
///
/// The recovered helper raises rather than returning, which is why the call
/// sites read as though COM calls cannot fail — every one of them is written
/// as a plain statement with the check wrapped around it. A negative code
/// also goes first to a globally installed reporter, when one has been
/// installed, so the failure is recorded before it is raised.
///
/// The check is on the sign alone. A positive code is a success that has
/// something to say, and passing it back rather than swallowing it is what
/// lets a caller tell `S_OK` from the other successes.
///
/// # Errors
///
/// Returns [`ComError`] when the code is negative.
pub const fn ole_check(code: HResult) -> Result<HResult, ComError> {
    if code < 0 {
        return Err(ComError { code });
    }
    Ok(code)
}

/// Reports whether a result code is a success.
///
/// Part of Ghidra function `FUN_0041d630` at `0x0041D630`.
#[must_use]
pub const fn succeeded(code: HResult) -> bool {
    code >= 0
}

/// The vtable slot one automation command occupies.
///
/// A dual interface's own methods start after `IUnknown`'s three and
/// `IDispatch`'s four, so the first of them sits at `0x38`, the second at
/// `0x40`, and the fifth at `0x58`.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub enum AutomationSlot {
    /// The interface's first own method, at `0x38`: go back.
    GoBack,
    /// Its second, at `0x40`: go forward.
    GoForward,
    /// Its fifth, at `0x58`: navigate to an address.
    Navigate,
}

impl AutomationSlot {
    /// The byte offset into the vtable.
    #[must_use]
    pub const fn offset(self) -> usize {
        match self {
            Self::GoBack => 0x38,
            Self::GoForward => 0x40,
            Self::Navigate => 0x58,
        }
    }

    /// How many arguments the call takes.
    ///
    /// Part of Ghidra function `FUN_01bcce90` at `0x01BCCE90`.
    ///
    /// The navigating call takes an address and four more the recovered
    /// caller always leaves empty — flags, a target frame, post data and
    /// headers — so every navigation this code makes is a plain one.
    #[must_use]
    pub const fn argument_count(self) -> usize {
        match self {
            Self::GoBack | Self::GoForward => 0,
            Self::Navigate => 5,
        }
    }

    /// Which of the interface's own methods this is, counting from zero.
    ///
    /// Three `IUnknown` entries and four `IDispatch` ones come first, so the
    /// interface's own methods begin at slot seven.
    #[must_use]
    pub const fn method_index(self) -> usize {
        (self.offset() / 8) - DUAL_INTERFACE_HEADER_METHODS
    }
}

/// How many vtable entries a dual interface inherits before its own.
pub const DUAL_INTERFACE_HEADER_METHODS: usize = 7;

/// An automation object that is created the first time it is wanted.
pub trait AutomationHost {
    /// Whether the interface has been created yet.
    fn created(&mut self) -> bool;

    /// Creates it.
    fn create(&mut self);

    /// Calls one of the interface's own no-argument methods, handing back its
    /// result code.
    fn call(&mut self, slot: AutomationSlot) -> HResult;

    /// Drops the reference taken for one call.
    fn release(&mut self);
}

/// Implements Ghidra functions `FUN_01bccb00` at `0x01BCCB00` and
/// `FUN_01bccc20` at `0x01BCCC20`.
///
/// Makes sure the automation interface exists and takes a reference to it.
///
/// Creating it on first use rather than when the owner is built is what keeps
/// the outboard tool from being started for a session that never asks for it.
/// The check is for the interface being absent, not for a previous attempt
/// having failed, so a creation that does not produce one is retried on the
/// next call rather than remembered as broken.
pub fn acquire(host: &mut impl AutomationHost) {
    if !host.created() {
        host.create();
    }
}

/// Implements Ghidra functions `FUN_01bcccd0` at `0x01BCCCD0` and
/// `FUN_01bccd40` at `0x01BCCD40`.
///
/// Runs one of the automation interface's no-argument commands.
///
/// The two recovered commands differ only in which slot they call, so they
/// are one function here taking the slot. Each acquires the interface,
/// makes the call, checks the result and releases — and the release happens
/// whether or not the call succeeded.
///
/// # Errors
///
/// Returns [`ComError`] when the call reports a negative result code.
pub fn run_command(
    host: &mut impl AutomationHost,
    slot: AutomationSlot,
) -> Result<HResult, ComError> {
    acquire(host);
    let code = host.call(slot);
    host.release();
    ole_check(code)
}

/// Implements Ghidra function `FUN_01bcce90` at `0x01BCCE90`.
///
/// Sends the automation interface to one address.
///
/// The recovered call passes the address and then the same empty value four
/// times over, for the four arguments it never uses — so every navigation
/// made this way is a plain one, with no flags, no target frame, no post data
/// and no headers.
///
/// # Errors
///
/// Returns [`ComError`] when the call reports a negative result code.
pub fn navigate(host: &mut impl NavigatingHost, address: &str) -> Result<HResult, ComError> {
    acquire(host);
    let code = host.navigate_to(address);
    host.release();
    ole_check(code)
}

/// An automation object that can be sent to an address.
pub trait NavigatingHost: AutomationHost {
    /// Calls the navigating slot with the address and four empty arguments.
    fn navigate_to(&mut self, address: &str) -> HResult;
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn only_a_negative_code_is_a_failure() {
        assert_eq!(ole_check(S_OK), Ok(0));
        assert_eq!(ole_check(1), Ok(1));
        assert_eq!(ole_check(i32::MAX), Ok(i32::MAX));

        assert_eq!(
            ole_check(-2_147_024_891),
            Err(ComError {
                code: -2_147_024_891
            })
        );
        assert_eq!(ole_check(-1), Err(ComError { code: -1 }));
    }

    #[test]
    fn a_success_with_something_to_say_is_passed_through_rather_than_flattened() {
        // S_FALSE is a success; a check that compared against zero would
        // wrongly treat it as a failure.
        assert_eq!(ole_check(1), Ok(1));
        assert!(succeeded(1));
        assert!(succeeded(S_OK));
        assert!(!succeeded(-1));
    }

    #[test]
    fn the_failure_names_the_code_it_carried() {
        assert_eq!(
            ComError {
                code: -2_147_024_891
            }
            .to_string(),
            "COM call failed with result 0x80070005"
        );
    }

    #[test]
    fn the_two_slots_are_the_interfaces_first_two_own_methods() {
        assert_eq!(AutomationSlot::GoBack.offset(), 0x38);
        assert_eq!(AutomationSlot::GoForward.offset(), 0x40);
        assert_eq!(AutomationSlot::Navigate.offset(), 0x58);
        assert_eq!(AutomationSlot::GoBack.method_index(), 0);
        assert_eq!(AutomationSlot::GoForward.method_index(), 1);
        assert_eq!(AutomationSlot::Navigate.method_index(), 4);
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum Step {
        Create,
        Call(AutomationSlot),
        Release,
    }

    #[derive(Debug, Default)]
    struct Tool {
        exists: bool,
        code: HResult,
        creation_fails: bool,
        steps: Vec<Step>,
    }

    impl AutomationHost for Tool {
        fn created(&mut self) -> bool {
            self.exists
        }

        fn create(&mut self) {
            self.steps.push(Step::Create);
            self.exists = !self.creation_fails;
        }

        fn call(&mut self, slot: AutomationSlot) -> HResult {
            self.steps.push(Step::Call(slot));
            self.code
        }

        fn release(&mut self) {
            self.steps.push(Step::Release);
        }
    }

    #[test]
    fn the_interface_is_created_the_first_time_it_is_wanted() {
        let mut host = Tool::default();

        assert_eq!(run_command(&mut host, AutomationSlot::GoBack), Ok(0));
        assert_eq!(
            host.steps,
            [
                Step::Create,
                Step::Call(AutomationSlot::GoBack),
                Step::Release,
            ]
        );
    }

    #[test]
    fn a_second_command_reuses_the_interface() {
        let mut host = Tool::default();
        run_command(&mut host, AutomationSlot::GoBack).expect("it runs");
        host.steps.clear();

        run_command(&mut host, AutomationSlot::GoForward).expect("it runs");

        assert_eq!(
            host.steps,
            [Step::Call(AutomationSlot::GoForward), Step::Release]
        );
    }

    #[test]
    fn a_creation_that_produces_nothing_is_retried_rather_than_remembered() {
        let mut host = Tool {
            creation_fails: true,
            ..Tool::default()
        };

        run_command(&mut host, AutomationSlot::GoBack).expect("it runs");
        run_command(&mut host, AutomationSlot::GoBack).expect("it runs");

        assert_eq!(
            host.steps
                .iter()
                .filter(|step| **step == Step::Create)
                .count(),
            2
        );
    }

    #[test]
    fn the_reference_is_released_even_when_the_call_fails() {
        let mut host = Tool {
            code: -1,
            ..Tool::default()
        };

        assert_eq!(
            run_command(&mut host, AutomationSlot::GoBack),
            Err(ComError { code: -1 })
        );
        assert_eq!(host.steps.last(), Some(&Step::Release));
    }

    #[test]
    fn the_release_happens_before_the_result_is_judged() {
        let mut host = Tool {
            code: -1,
            ..Tool::default()
        };

        let _ = run_command(&mut host, AutomationSlot::GoBack);

        let release = host
            .steps
            .iter()
            .position(|step| *step == Step::Release)
            .expect("it releases");
        let call = host
            .steps
            .iter()
            .position(|step| matches!(step, Step::Call(_)))
            .expect("it calls");
        assert!(release > call);
    }

    impl NavigatingHost for Tool {
        fn navigate_to(&mut self, _address: &str) -> HResult {
            self.steps.push(Step::Call(AutomationSlot::Navigate));
            self.code
        }
    }

    #[test]
    fn navigating_acquires_calls_and_releases_like_the_other_commands() {
        let mut host = Tool::default();

        assert_eq!(navigate(&mut host, "http://example.com/"), Ok(0));
        assert_eq!(
            host.steps,
            [
                Step::Create,
                Step::Call(AutomationSlot::Navigate),
                Step::Release,
            ]
        );
    }

    #[test]
    fn a_failed_navigation_still_releases() {
        let mut host = Tool {
            code: -1,
            ..Tool::default()
        };

        assert_eq!(
            navigate(&mut host, "http://example.com/"),
            Err(ComError { code: -1 })
        );
        assert_eq!(host.steps.last(), Some(&Step::Release));
    }

    #[test]
    fn only_the_navigating_slot_takes_arguments() {
        assert_eq!(AutomationSlot::GoBack.argument_count(), 0);
        assert_eq!(AutomationSlot::GoForward.argument_count(), 0);
        assert_eq!(AutomationSlot::Navigate.argument_count(), 5);
    }
}
