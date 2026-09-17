//! Iced state for the recovered Mixed Mode Options dialog.

pub const TITLE: &str = "Mixed Mode Options";
pub const FORM_RESOURCE: &str = "MixedOptions2";
pub const GROUP_CAPTION: &str = "Transient Analysis";
pub const END_TIME_CAPTION: &str = "&Simulation end time: ";
pub const HELP_CONTEXT: u32 = 0x0456;

/// The localized message the accept handler reports for a non-positive end
/// time.
pub const NON_POSITIVE_END_TIME_MESSAGE_ID: u16 = 0x0134;

/// The recovered radio group has three entries, and the dialog rotates between
/// the stored mode and the visible index.
pub const CONTROL_MODE_COUNT: u8 = 3;

/// The process-wide mixed-mode record the dialog reads and writes.
#[derive(Debug, Clone, Copy, Default, PartialEq)]
pub struct MixedModeSettings {
    /// The stored simulation end time.
    pub end_time: f64,
    /// The stored transient control mode.
    pub control_mode: u8,
}

/// The staged control values of one open dialog.
#[derive(Debug, Clone, Copy, Default, PartialEq)]
pub struct MixedOptionsControls {
    /// The float edit value.
    pub end_time: f64,
    /// `rgTRControls.ItemIndex`.
    pub control_index: i32,
}

/// The three values the accept handler stores on the form.
#[derive(Debug, Clone, Copy, PartialEq)]
pub struct AcceptedMixedOptions {
    /// The recovered reset marker the accept handler always stores.
    pub marker: i32,
    pub end_time: f64,
    pub control_mode: u8,
}

/// The recovered reset marker value.
pub const ACCEPTED_MARKER: i32 = -1;

/// The one-shot latch the error reporter sets and the close query consumes.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct ErrorLatch {
    pub raised: bool,
    /// The last message the reporter published, kept for the dialog view.
    pub message: String,
}

pub trait MixedOptionsHost {
    /// Shows one error message. The recovered reporter shows the message and
    /// raises the latch through the same shared helper.
    fn show_error(&mut self, message: &str);

    fn localize(&mut self, message_id: u16) -> String;

    fn set_help_context(&mut self, context: u32);
}

/// Converts the stored control mode into the visible radio index.
#[must_use]
pub const fn control_index_for_mode(mode: u8) -> i32 {
    ((mode + 2) % CONTROL_MODE_COUNT) as i32
}

/// Converts the visible radio index back into the stored control mode.
///
/// This is the exact inverse of [`control_index_for_mode`] for the three
/// recovered entries.
#[must_use]
pub const fn control_mode_for_index(index: i32) -> u8 {
    // The remainder of a non-negative divisor is always in `0..3`, so the
    // narrowing conversion cannot lose a bit.
    #[allow(clippy::cast_possible_truncation, clippy::cast_sign_loss)]
    {
        (index + 1).rem_euclid(CONTROL_MODE_COUNT as i32) as u8
    }
}

/// Implements Ghidra function `FUN_01ba02e0` at `0x01BA02E0`.
///
/// Publishes one error message and raises the dialog's close latch through the
/// same shared helper, so every reported error both shows text and blocks the
/// next close attempt. The reporter validates nothing itself and clears no
/// previous message.
pub fn report_mixed_options_error(
    latch: &mut ErrorLatch,
    message: &str,
    host: &mut impl MixedOptionsHost,
) {
    host.show_error(message);
    latch.raised = true;
    message.clone_into(&mut latch.message);
}

/// Implements Ghidra function `FUN_01ba0340` at `0x01BA0340`.
///
/// Forwards the float edit's own error text to the shared reporter when the
/// control rejects what the user typed. The handler inspects no value, supplies
/// no replacement text, and does not restore the previous value, so a malformed
/// entry blocks the next close exactly like a failed range check.
pub fn report_end_time_edit_error(
    latch: &mut ErrorLatch,
    control_error_text: &str,
    host: &mut impl MixedOptionsHost,
) {
    report_mixed_options_error(latch, control_error_text, host);
}

/// Implements Ghidra function `FUN_01ba0360` at `0x01BA0360`.
///
/// Seeds the end-time edit and the transient-control radio group from the
/// process-wide record and assigns the form help context. The stored control
/// mode is rotated into its visible index. The handler validates nothing and
/// writes nothing back.
pub fn create_mixed_options_controls(
    settings: MixedModeSettings,
    host: &mut impl MixedOptionsHost,
) -> MixedOptionsControls {
    host.set_help_context(HELP_CONTEXT);
    MixedOptionsControls {
        end_time: settings.end_time,
        control_index: control_index_for_mode(settings.control_mode),
    }
}

/// Implements Ghidra function `FUN_01ba03c0` at `0x01BA03C0`.
///
/// Allows the close only while the error latch is clear, then clears the latch
/// so one reported error blocks exactly one close attempt. The handler shows no
/// message of its own.
pub const fn query_mixed_options_close(latch: &mut ErrorLatch) -> bool {
    let can_close = !latch.raised;
    latch.raised = false;
    can_close
}

/// Implements Ghidra function `FUN_01ba03e0` at `0x01BA03E0`.
///
/// Snapshots the process-wide record, rejects a non-positive end time through
/// the shared reporter, and stores the accepted values only while the latch is
/// clear.
///
/// The recovered handler does not return early after reporting the error: it
/// continues and lets the latch decide, which is why a rejected value both
/// shows a message and blocks the close. On acceptance it stores the reset
/// marker, the edit value, and the rotated control mode on the form, and writes
/// the entry snapshot back to the process-wide record, so this path leaves that
/// record's contents unchanged.
///
/// There is no cross-field validation, no confirmation, no rollback of an
/// already published message, and no caller refresh.
pub fn accept_mixed_options(
    controls: MixedOptionsControls,
    settings: &mut MixedModeSettings,
    latch: &mut ErrorLatch,
    host: &mut impl MixedOptionsHost,
) -> Option<AcceptedMixedOptions> {
    let snapshot = *settings;

    if controls.end_time <= 0.0 {
        let message = host.localize(NON_POSITIVE_END_TIME_MESSAGE_ID);
        report_mixed_options_error(latch, &message, host);
    }

    if latch.raised {
        return None;
    }

    *settings = snapshot;
    Some(AcceptedMixedOptions {
        marker: ACCEPTED_MARKER,
        end_time: controls.end_time,
        control_mode: control_mode_for_index(controls.control_index),
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Default)]
    struct Host {
        errors: Vec<String>,
        lookups: Vec<u16>,
        help_contexts: Vec<u32>,
    }

    impl MixedOptionsHost for Host {
        fn show_error(&mut self, message: &str) {
            self.errors.push(message.to_owned());
        }

        fn localize(&mut self, message_id: u16) -> String {
            self.lookups.push(message_id);
            format!("message:{message_id:#06x}")
        }

        fn set_help_context(&mut self, context: u32) {
            self.help_contexts.push(context);
        }
    }

    #[test]
    fn the_two_mode_rotations_are_exact_inverses_for_every_entry() {
        for mode in 0..CONTROL_MODE_COUNT {
            let index = control_index_for_mode(mode);
            assert!((0..3).contains(&index));
            assert_eq!(control_mode_for_index(index), mode);
        }
        assert_eq!(control_index_for_mode(0), 2);
        assert_eq!(control_index_for_mode(1), 0);
        assert_eq!(control_index_for_mode(2), 1);
    }

    #[test]
    fn create_seeds_both_controls_and_sets_the_help_context() {
        let mut host = Host::default();

        let controls = create_mixed_options_controls(
            MixedModeSettings {
                end_time: 2.5,
                control_mode: 1,
            },
            &mut host,
        );

        assert!((controls.end_time - 2.5).abs() < f64::EPSILON);
        assert_eq!(controls.control_index, 0);
        assert_eq!(host.help_contexts, [HELP_CONTEXT]);
    }

    #[test]
    fn an_edit_error_publishes_the_control_text_and_raises_the_latch() {
        let mut host = Host::default();
        let mut latch = ErrorLatch::default();

        report_end_time_edit_error(&mut latch, "Invalid number", &mut host);

        assert!(latch.raised);
        assert_eq!(latch.message, "Invalid number");
        assert_eq!(host.errors, ["Invalid number".to_owned()]);
        assert!(host.lookups.is_empty());
    }

    #[test]
    fn the_close_query_consumes_one_raised_latch() {
        let mut latch = ErrorLatch {
            raised: true,
            message: "boom".to_owned(),
        };

        assert!(!query_mixed_options_close(&mut latch));
        assert!(query_mixed_options_close(&mut latch));
        assert!(query_mixed_options_close(&mut latch));
    }

    #[test]
    fn accept_stores_the_marker_value_and_rotated_mode_for_a_positive_end_time() {
        let mut host = Host::default();
        let mut latch = ErrorLatch::default();
        let mut settings = MixedModeSettings {
            end_time: 1.0,
            control_mode: 0,
        };

        let accepted = accept_mixed_options(
            MixedOptionsControls {
                end_time: 4.0,
                control_index: 1,
            },
            &mut settings,
            &mut latch,
            &mut host,
        );

        assert_eq!(
            accepted,
            Some(AcceptedMixedOptions {
                marker: ACCEPTED_MARKER,
                end_time: 4.0,
                control_mode: 2,
            })
        );
        assert!(host.errors.is_empty());
        assert!(!latch.raised);
        assert_eq!(
            settings,
            MixedModeSettings {
                end_time: 1.0,
                control_mode: 0,
            }
        );
    }

    #[test]
    fn a_non_positive_end_time_reports_the_localized_message_and_blocks_the_close() {
        for end_time in [0.0, -1.0] {
            let mut host = Host::default();
            let mut latch = ErrorLatch::default();
            let mut settings = MixedModeSettings::default();

            let accepted = accept_mixed_options(
                MixedOptionsControls {
                    end_time,
                    control_index: 0,
                },
                &mut settings,
                &mut latch,
                &mut host,
            );

            assert_eq!(accepted, None);
            assert_eq!(host.lookups, [NON_POSITIVE_END_TIME_MESSAGE_ID]);
            assert_eq!(
                host.errors,
                [format!("message:{NON_POSITIVE_END_TIME_MESSAGE_ID:#06x}")]
            );
            assert!(latch.raised);
            assert!(!query_mixed_options_close(&mut latch));
        }
    }

    #[test]
    fn accept_is_skipped_while_an_earlier_edit_error_is_still_latched() {
        let mut host = Host::default();
        let mut latch = ErrorLatch::default();
        report_end_time_edit_error(&mut latch, "Invalid number", &mut host);

        let accepted = accept_mixed_options(
            MixedOptionsControls {
                end_time: 9.0,
                control_index: 2,
            },
            &mut MixedModeSettings::default(),
            &mut latch,
            &mut host,
        );

        assert_eq!(accepted, None);
        assert!(host.lookups.is_empty());
    }
}
