//! Saying how long something took.
//!
//! One duration, four ways of writing it. Which one is used depends only on
//! how long the duration is, so a report never says "0 hour(s)" and never
//! leaves a reader dividing seconds in their head.

/// How many seconds are in a minute.
pub const SECONDS_PER_MINUTE: i64 = 60;

/// How many minutes are in an hour.
pub const MINUTES_PER_HOUR: i64 = 60;

/// How many hours are in a day.
pub const HOURS_PER_DAY: i64 = 24;

/// The template used when the duration reaches a day.
pub const DAYS_TEMPLATE: &str = "%d day(s) %d hour(s) %d minute(s) %d second(s)";

/// When it reaches an hour.
pub const HOURS_TEMPLATE: &str = "%d hour(s) %d minute(s) %d second(s)";

/// When it reaches a minute.
pub const MINUTES_TEMPLATE: &str = "%d minute(s) %d second(s)";

/// When it does not.
pub const SECONDS_TEMPLATE: &str = "%d second(s)";

/// Which of the four forms one duration is written in.
///
/// Part of Ghidra function `FUN_012d9330` at `0x012D9330`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ElapsedForm {
    /// A day or more.
    Days,
    /// An hour or more.
    Hours,
    /// A minute or more.
    Minutes,
    /// Less than a minute.
    Seconds,
}

impl ElapsedForm {
    /// Which form a duration of this many seconds takes.
    ///
    /// Part of Ghidra function `FUN_012d9330` at `0x012D9330`.
    ///
    /// The coarsest unit that reaches one leads, so the leading number is
    /// never zero — a duration is never written as "0 hour(s) 5 minute(s)".
    #[must_use]
    pub const fn for_seconds(seconds: i64) -> Self {
        let minutes = seconds / SECONDS_PER_MINUTE;
        let hours = minutes / MINUTES_PER_HOUR;
        let days = hours / HOURS_PER_DAY;

        if days >= 1 {
            return Self::Days;
        }
        if hours >= 1 {
            return Self::Hours;
        }
        if minutes >= 1 {
            return Self::Minutes;
        }
        Self::Seconds
    }

    /// The template this form uses.
    #[must_use]
    pub const fn template(self) -> &'static str {
        match self {
            Self::Days => DAYS_TEMPLATE,
            Self::Hours => HOURS_TEMPLATE,
            Self::Minutes => MINUTES_TEMPLATE,
            Self::Seconds => SECONDS_TEMPLATE,
        }
    }

    /// How many numbers the template takes.
    #[must_use]
    pub const fn field_count(self) -> usize {
        match self {
            Self::Days => 4,
            Self::Hours => 3,
            Self::Minutes => 2,
            Self::Seconds => 1,
        }
    }
}

/// Implements Ghidra function `FUN_012d9330` at `0x012D9330`.
///
/// The binary carries a second, independent copy of this at `0x01319F60`
/// (`FUN_01319f60`), with the same four templates and the same order of
/// tests. Two copies is not two behaviours: whichever one a caller reaches,
/// the answer is the same, so both map here.
///
/// Writes how long something took.
///
/// The leading number is the *total* in its unit and every number after it is
/// a remainder, so a duration adds up to itself rather than double-counting:
/// two and a half hours is "2 hour(s) 30 minute(s) 0 second(s)", not
/// "2 hour(s) 150 minute(s)".
///
/// The recovered code asks for each total separately — days between, hours
/// between, and so on, all from the same pair of times — rather than dividing
/// one number down. For a duration the two agree, and dividing is what this
/// port does.
///
/// Plurals are not made to agree: the templates carry `(s)` whatever the
/// number, so one second is written "1 second(s)". That is the recovered
/// wording and it is kept, because the report is read by eye and a tool that
/// parses it would be thrown by the alternative.
#[must_use]
pub fn format_elapsed(seconds: i64) -> String {
    let seconds = seconds.max(0);
    let total_minutes = seconds / SECONDS_PER_MINUTE;
    let total_hours = total_minutes / MINUTES_PER_HOUR;
    let total_days = total_hours / HOURS_PER_DAY;

    match ElapsedForm::for_seconds(seconds) {
        ElapsedForm::Days => format!(
            "{total_days} day(s) {} hour(s) {} minute(s) {} second(s)",
            total_hours % HOURS_PER_DAY,
            total_minutes % MINUTES_PER_HOUR,
            seconds % SECONDS_PER_MINUTE
        ),
        ElapsedForm::Hours => format!(
            "{total_hours} hour(s) {} minute(s) {} second(s)",
            total_minutes % MINUTES_PER_HOUR,
            seconds % SECONDS_PER_MINUTE
        ),
        ElapsedForm::Minutes => format!(
            "{total_minutes} minute(s) {} second(s)",
            seconds % SECONDS_PER_MINUTE
        ),
        ElapsedForm::Seconds => format!("{seconds} second(s)"),
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn the_coarsest_unit_that_reaches_one_leads() {
        assert_eq!(ElapsedForm::for_seconds(0), ElapsedForm::Seconds);
        assert_eq!(ElapsedForm::for_seconds(59), ElapsedForm::Seconds);
        assert_eq!(ElapsedForm::for_seconds(60), ElapsedForm::Minutes);
        assert_eq!(ElapsedForm::for_seconds(3599), ElapsedForm::Minutes);
        assert_eq!(ElapsedForm::for_seconds(3600), ElapsedForm::Hours);
        assert_eq!(ElapsedForm::for_seconds(86_399), ElapsedForm::Hours);
        assert_eq!(ElapsedForm::for_seconds(86_400), ElapsedForm::Days);
    }

    #[test]
    fn the_leading_number_is_never_zero() {
        for seconds in [0, 1, 59, 60, 3600, 86_400, 200_000] {
            let written = format_elapsed(seconds);
            assert!(
                !written.starts_with('0') || seconds == 0,
                "{seconds}: {written}"
            );
        }
    }

    #[test]
    fn a_duration_adds_up_to_itself_rather_than_double_counting() {
        assert_eq!(format_elapsed(9_000), "2 hour(s) 30 minute(s) 0 second(s)");
    }

    #[test]
    fn each_form_writes_what_its_template_asks_for() {
        assert_eq!(format_elapsed(5), "5 second(s)");
        assert_eq!(format_elapsed(65), "1 minute(s) 5 second(s)");
        assert_eq!(format_elapsed(3_665), "1 hour(s) 1 minute(s) 5 second(s)");
        assert_eq!(
            format_elapsed(90_065),
            "1 day(s) 1 hour(s) 1 minute(s) 5 second(s)"
        );
    }

    #[test]
    fn plurals_are_not_made_to_agree() {
        assert_eq!(format_elapsed(1), "1 second(s)");
        assert_eq!(format_elapsed(60), "1 minute(s) 0 second(s)");
    }

    #[test]
    fn every_template_has_as_many_placeholders_as_its_form_has_fields() {
        for form in [
            ElapsedForm::Days,
            ElapsedForm::Hours,
            ElapsedForm::Minutes,
            ElapsedForm::Seconds,
        ] {
            assert_eq!(
                form.template().matches("%d").count(),
                form.field_count(),
                "{form:?}"
            );
        }
    }

    #[test]
    fn each_form_writes_as_many_numbers_as_its_template_takes() {
        for (seconds, form) in [
            (5, ElapsedForm::Seconds),
            (65, ElapsedForm::Minutes),
            (3_665, ElapsedForm::Hours),
            (90_065, ElapsedForm::Days),
        ] {
            let written = format_elapsed(seconds);
            let numbers = written
                .split_whitespace()
                .filter(|word| word.parse::<i64>().is_ok())
                .count();
            assert_eq!(numbers, form.field_count(), "{written}");
        }
    }

    #[test]
    fn a_boundary_reads_as_the_larger_unit_with_nothing_left_over() {
        assert_eq!(format_elapsed(3_600), "1 hour(s) 0 minute(s) 0 second(s)");
        assert_eq!(
            format_elapsed(86_400),
            "1 day(s) 0 hour(s) 0 minute(s) 0 second(s)"
        );
    }

    #[test]
    fn a_negative_duration_reads_as_none_at_all() {
        assert_eq!(format_elapsed(-1), "0 second(s)");
    }

    #[test]
    fn a_long_run_still_leads_with_its_days() {
        // Ten days and a bit.
        assert_eq!(
            format_elapsed(10 * 86_400 + 3_661),
            "10 day(s) 1 hour(s) 1 minute(s) 1 second(s)"
        );
    }
}
