//! A two-button dialog that lays itself out around whatever it is asked to say.
//!
//! Nothing here is positioned when the form is designed. The message, the two
//! buttons and the dialog's own width are all worked out at the moment it is
//! shown, from the text it has been given — which is what lets one dialog ask
//! any question without a designer having to make room for the longest one.

/// How wide one character of the message is taken to be.
///
/// Part of Ghidra function `FUN_012e9e60` at `0x012E9E60`.
///
/// A fixed number rather than a measurement: the message is centred by
/// counting its characters, not by asking the canvas how wide the text is. So
/// a message in a proportional face is centred as though it were not, and the
/// wider its letters are on average the further left of centre it sits.
pub const ASSUMED_CHARACTER_WIDTH: i32 = 6;

/// How much wider than its message the dialog is made.
///
/// Part of Ghidra function `FUN_012e6f00` at `0x012E6F00`.
pub const MESSAGE_MARGIN: i32 = 0x14;

/// Taken off the space the two buttons are spread through.
///
/// Part of Ghidra function `FUN_012e6f00` at `0x012E6F00`.
///
/// The three gaps around and between the buttons are meant to be equal, and
/// this is subtracted before the space is divided by three — so they are not
/// quite, and the row sits a little left of where even spacing would put it.
pub const BUTTON_ROW_SLACK: i32 = 5;

/// The modal result that means the dialog was dismissed rather than answered.
///
/// Part of Ghidra function `FUN_012e6f00` at `0x012E6F00`.
pub const CANCEL_RESULT: i32 = 2;

/// What the dialog says when no reference circuit has been chosen.
///
/// Part of Ghidra function `FUN_012e6f00` at `0x012E6F00`.
pub const NO_REFERENCE_PREFIX: &str = "No reference selected: ";

/// The extension a reference circuit is named with.
///
/// Part of Ghidra function `FUN_012e6f00` at `0x012E6F00`.
pub const REFERENCE_EXTENSION: &str = ".TSC";

/// Which of the dialog's two buttons is meant.
///
/// Part of Ghidra function `FUN_012ea640` at `0x012EA640`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DialogButton {
    /// Recovered value 0: the button at offset `0x6B8`.
    First,
    /// Any other value: the button at offset `0x6C0`.
    Second,
}

impl DialogButton {
    /// Which button a recovered selector means.
    ///
    /// Part of Ghidra function `FUN_012ea640` at `0x012EA640`.
    ///
    /// Only zero picks the first, so every value that is not zero — not just
    /// one — picks the second.
    #[must_use]
    pub const fn from_selector(selector: i32) -> Self {
        if selector == 0 {
            Self::First
        } else {
            Self::Second
        }
    }
}

/// Implements Ghidra function `FUN_012e9e60` at `0x012E9E60`.
///
/// Where the message sits so as to look centred.
///
/// Half of whatever the dialog has left over once the message is assumed to
/// take six pixels a character. A message wider than the dialog gives a
/// negative answer, which is not guarded against — the text simply starts off
/// the left edge.
#[must_use]
pub fn centred_message_left(form_width: i32, message: &str) -> i32 {
    let characters = i32::try_from(message.chars().count()).unwrap_or(i32::MAX);
    (form_width - ASSUMED_CHARACTER_WIDTH.saturating_mul(characters)) / 2
}

/// What has to grow so the message fits.
///
/// Part of Ghidra function `FUN_012e6f00` at `0x012E6F00`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum WidthFit {
    /// The message is narrower than the dialog allows for, so the message is
    /// stretched to that width and the dialog is left alone.
    WidenMessage(i32),
    /// The message is wider, so the dialog is stretched around it.
    WidenDialog(i32),
}

/// Implements part of Ghidra function `FUN_012e6f00` at `0x012E6F00`.
///
/// Makes the message and the dialog fit each other.
///
/// The two branches do not act on the same thing, which is the whole of the
/// behaviour: a short message widens the *message*, and a long one widens the
/// *dialog*. So the dialog never shrinks back, and a long message followed by
/// a short one leaves a wide dialog holding a message stretched to the minimum
/// rather than a dialog returned to its old size.
#[must_use]
pub const fn fit_message(message_width: i32, minimum_width: i32) -> WidthFit {
    if message_width < minimum_width {
        WidthFit::WidenMessage(minimum_width)
    } else {
        WidthFit::WidenDialog(message_width + MESSAGE_MARGIN)
    }
}

/// Rounds the way the run time does.
///
/// Part of Ghidra function `FUN_012e6f00` at `0x012E6F00`.
///
/// Halves go to the even neighbour rather than away from zero, which is what
/// the Delphi run-time helper does and what Rust's own rounding does not.
#[must_use]
pub fn round_half_to_even(value: f64) -> i32 {
    let down = value.floor();
    let fraction = value - down;
    #[allow(clippy::float_cmp)]
    let rounded = if fraction == 0.5 {
        if (down / 2.0).fract() == 0.0 {
            down
        } else {
            down + 1.0
        }
    } else {
        value.round()
    };
    // Bounded on both sides just above, so the cast cannot lose anything.
    #[allow(clippy::cast_possible_truncation)]
    {
        rounded.clamp(f64::from(i32::MIN), f64::from(i32::MAX)) as i32
    }
}

/// Implements part of Ghidra function `FUN_012e6f00` at `0x012E6F00`.
///
/// Where the two buttons go along the bottom of the dialog.
///
/// The space either side of them and between them is shared three ways, so
/// they sit as a pair in the middle however wide the dialog has become. The
/// five pixels taken off first are not accounted for anywhere afterwards, so
/// what is actually shared is five pixels less than the free space and the
/// pair ends up slightly left of centre.
///
/// Returns each button's left edge.
#[must_use]
pub fn button_positions(dialog_width: i32, first_width: i32, second_width: i32) -> (i32, i32) {
    let free = dialog_width - first_width - second_width - BUTTON_ROW_SLACK;
    let gap = round_half_to_even(f64::from(free) / 3.0);
    (gap, gap + first_width + gap)
}

/// Implements part of Ghidra function `FUN_012e6f00` at `0x012E6F00`.
///
/// What the dialog says about a reference circuit that was never chosen.
#[must_use]
pub fn no_reference_message(name: &str) -> String {
    format!("{NO_REFERENCE_PREFIX}{name}{REFERENCE_EXTENSION}")
}

/// Implements part of Ghidra function `FUN_012e6f00` at `0x012E6F00`.
///
/// Whether a modal result counts as an answer.
///
/// Everything that is not the cancel result counts, so a dialog closed by any
/// other means is read as though its question had been answered.
#[must_use]
pub const fn answered(modal_result: i32) -> bool {
    modal_result != CANCEL_RESULT
}

/// What this dialog needs of the window system.
///
/// Part of Ghidra function `FUN_012e6f00` at `0x012E6F00`.
pub trait MessageDialogHost {
    /// Gets the dialog ready to be shown.
    fn prepare(&mut self);

    /// Puts one caption on the message.
    ///
    /// Part of Ghidra function `FUN_012e9e60` at `0x012E9E60`.
    fn set_message(&mut self, text: &str);

    /// Moves the message to one place.
    fn set_message_left(&mut self, left: i32);

    /// How wide the message has turned out to be.
    fn message_width(&self) -> i32;

    /// Stretches the message to one width.
    fn set_message_width(&mut self, width: i32);

    /// The narrowest the message is allowed to be.
    fn minimum_message_width(&self) -> i32;

    /// How wide the dialog is.
    fn dialog_width(&self) -> i32;

    /// Stretches the dialog to one width.
    fn set_dialog_width(&mut self, width: i32);

    /// Puts one caption on one button.
    ///
    /// Part of Ghidra function `FUN_012ea640` at `0x012EA640`.
    fn set_button_caption(&mut self, button: DialogButton, text: &str);

    /// How wide one button is.
    fn button_width(&self, button: DialogButton) -> i32;

    /// Moves one button.
    fn set_button_left(&mut self, button: DialogButton, left: i32);

    /// Shows the dialog and waits for it, answering its result.
    fn show_modal(&mut self) -> i32;

    /// Puts the dialog away again.
    fn finish(&mut self);
}

/// Implements Ghidra function `FUN_012e9e60` at `0x012E9E60`.
///
/// Says something in the middle of the dialog.
///
/// The caption goes on first and the position is worked out second, but from
/// the text rather than from the label — so the two do not have to agree, and
/// when they do not it is the count of characters that wins.
pub fn say<Host: MessageDialogHost>(host: &mut Host, message: &str) {
    host.set_message(message);
    let left = centred_message_left(host.dialog_width(), message);
    host.set_message_left(left);
}

/// Implements Ghidra function `FUN_012ea640` at `0x012EA640`.
///
/// Names one of the two buttons.
pub fn name_button<Host: MessageDialogHost>(host: &mut Host, selector: i32, text: &str) {
    host.set_button_caption(DialogButton::from_selector(selector), text);
}

/// Implements Ghidra function `FUN_012e6f00` at `0x012E6F00`.
///
/// Asks about a reference circuit that was never chosen, and waits.
///
/// Everything is laid out in one order and each step depends on the one
/// before: the message is set, the dialog is made to fit it, and only then are
/// the buttons spread through whatever width that left. So the button row is
/// centred in the dialog the message produced, not in the dialog as designed.
///
/// Returns whether the question was answered rather than dismissed.
pub fn ask_about_missing_reference<Host: MessageDialogHost>(host: &mut Host, name: &str) -> bool {
    host.prepare();
    host.set_message(&no_reference_message(name));

    match fit_message(host.message_width(), host.minimum_message_width()) {
        WidthFit::WidenMessage(width) => host.set_message_width(width),
        WidthFit::WidenDialog(width) => host.set_dialog_width(width),
    }

    let (first, second) = button_positions(
        host.dialog_width(),
        host.button_width(DialogButton::First),
        host.button_width(DialogButton::Second),
    );
    host.set_button_left(DialogButton::First, first);
    host.set_button_left(DialogButton::Second, second);

    let result = host.show_modal();
    host.finish();
    answered(result)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug)]
    struct Dialog {
        message: String,
        message_left: Option<i32>,
        message_width: i32,
        minimum: i32,
        width: i32,
        captions: Vec<(DialogButton, String)>,
        button_widths: (i32, i32),
        lefts: Vec<(DialogButton, i32)>,
        result: i32,
        prepared: usize,
        finished: usize,
    }

    impl Default for Dialog {
        fn default() -> Self {
            Self {
                message: String::new(),
                message_left: None,
                message_width: 100,
                minimum: 200,
                width: 300,
                captions: Vec::new(),
                button_widths: (75, 75),
                lefts: Vec::new(),
                result: 1,
                prepared: 0,
                finished: 0,
            }
        }
    }

    impl MessageDialogHost for Dialog {
        fn prepare(&mut self) {
            self.prepared += 1;
        }

        fn set_message(&mut self, text: &str) {
            text.clone_into(&mut self.message);
        }

        fn set_message_left(&mut self, left: i32) {
            self.message_left = Some(left);
        }

        fn message_width(&self) -> i32 {
            self.message_width
        }

        fn set_message_width(&mut self, width: i32) {
            self.message_width = width;
        }

        fn minimum_message_width(&self) -> i32 {
            self.minimum
        }

        fn dialog_width(&self) -> i32 {
            self.width
        }

        fn set_dialog_width(&mut self, width: i32) {
            self.width = width;
        }

        fn set_button_caption(&mut self, button: DialogButton, text: &str) {
            self.captions.push((button, text.to_owned()));
        }

        fn button_width(&self, button: DialogButton) -> i32 {
            match button {
                DialogButton::First => self.button_widths.0,
                DialogButton::Second => self.button_widths.1,
            }
        }

        fn set_button_left(&mut self, button: DialogButton, left: i32) {
            self.lefts.push((button, left));
        }

        fn show_modal(&mut self) -> i32 {
            self.result
        }

        fn finish(&mut self) {
            self.finished += 1;
        }
    }

    #[test]
    fn the_message_is_centred_by_counting_its_characters() {
        // 10 characters at six pixels each, in a dialog 300 wide.
        assert_eq!(centred_message_left(300, "0123456789"), 120);
    }

    #[test]
    fn an_empty_message_sits_at_the_middle() {
        assert_eq!(centred_message_left(300, ""), 150);
    }

    #[test]
    fn a_message_wider_than_the_dialog_starts_off_the_left_edge() {
        assert!(centred_message_left(20, "a long message indeed") < 0);
    }

    #[test]
    fn saying_something_sets_it_and_then_places_it() {
        let mut dialog = Dialog::default();
        say(&mut dialog, "Ready");

        assert_eq!(dialog.message, "Ready");
        assert_eq!(
            dialog.message_left,
            Some(centred_message_left(300, "Ready"))
        );
    }

    #[test]
    fn a_short_message_is_stretched_and_the_dialog_is_left_alone() {
        assert_eq!(fit_message(100, 200), WidthFit::WidenMessage(200));
    }

    #[test]
    fn a_long_message_stretches_the_dialog_around_it() {
        assert_eq!(fit_message(400, 200), WidthFit::WidenDialog(420));
    }

    #[test]
    fn a_message_exactly_at_the_minimum_stretches_the_dialog() {
        assert_eq!(fit_message(200, 200), WidthFit::WidenDialog(220));
    }

    #[test]
    fn the_buttons_are_spread_through_what_is_left_of_the_dialog() {
        let (first, second) = button_positions(305, 75, 75);

        // 305 - 75 - 75 - 5 leaves 150, shared three ways.
        assert_eq!(first, 50);
        assert_eq!(second, 175);
    }

    #[test]
    fn the_five_pixels_taken_off_leave_the_pair_left_of_centre() {
        let (first, _) = button_positions(300, 75, 75);
        let even = (300 - 75 - 75) / 3;

        assert!(first < even);
    }

    #[test]
    fn halves_round_to_the_even_neighbour() {
        assert_eq!(round_half_to_even(0.5), 0);
        assert_eq!(round_half_to_even(1.5), 2);
        assert_eq!(round_half_to_even(2.5), 2);
        assert_eq!(round_half_to_even(-0.5), 0);
        assert_eq!(round_half_to_even(2.4), 2);
        assert_eq!(round_half_to_even(2.6), 3);
    }

    #[test]
    fn the_reference_message_names_the_circuit_and_its_extension() {
        assert_eq!(
            no_reference_message("Filter"),
            "No reference selected: Filter.TSC"
        );
    }

    #[test]
    fn only_the_cancel_result_counts_as_dismissed() {
        assert!(!answered(CANCEL_RESULT));
        for result in [0, 1, 3, 6] {
            assert!(answered(result), "{result}");
        }
    }

    #[test]
    fn asking_lays_everything_out_before_it_shows_the_dialog() {
        let mut dialog = Dialog::default();

        assert!(ask_about_missing_reference(&mut dialog, "Filter"));
        assert_eq!(dialog.message, "No reference selected: Filter.TSC");
        assert_eq!(dialog.prepared, 1);
        assert_eq!(dialog.finished, 1);
        assert_eq!(dialog.lefts.len(), 2);
    }

    #[test]
    fn the_buttons_are_spread_through_the_width_the_message_produced() {
        let mut dialog = Dialog {
            message_width: 500,
            ..Dialog::default()
        };
        ask_about_missing_reference(&mut dialog, "Filter");

        // The dialog grew to 520, and that is what the buttons were spread in.
        assert_eq!(dialog.width, 520);
        assert_eq!(dialog.lefts[0].1, button_positions(520, 75, 75).0);
    }

    #[test]
    fn a_dismissed_dialog_is_not_an_answer() {
        let mut dialog = Dialog {
            result: CANCEL_RESULT,
            ..Dialog::default()
        };

        assert!(!ask_about_missing_reference(&mut dialog, "Filter"));
    }

    #[test]
    fn only_a_selector_of_zero_names_the_first_button() {
        assert_eq!(DialogButton::from_selector(0), DialogButton::First);
        for selector in [1, 2, -1] {
            assert_eq!(
                DialogButton::from_selector(selector),
                DialogButton::Second,
                "{selector}"
            );
        }
    }

    #[test]
    fn naming_a_button_puts_the_caption_on_the_one_chosen() {
        let mut dialog = Dialog::default();
        name_button(&mut dialog, 0, "Yes");
        name_button(&mut dialog, 1, "No");

        assert_eq!(
            dialog.captions,
            [
                (DialogButton::First, "Yes".to_owned()),
                (DialogButton::Second, "No".to_owned())
            ]
        );
    }
}
