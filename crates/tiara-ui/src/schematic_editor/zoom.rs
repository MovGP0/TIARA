//! How far in the sheet is drawn.
//!
//! The toolbar's drop-down is the whole of it: sixteen choices, thirteen of
//! them a percentage and three of them a way of fitting the page. The Zoom
//! commands under `View` move along that same list rather than keeping a
//! ladder of their own, so the drop-down and the menu can never disagree about
//! what `In` means.

use super::toolbars;

/// What the drop-down is called in the resource.
pub const PICKER: &str = "ZoomFactor";

/// What the original shows when nothing has changed it.
pub const NORMAL: &str = "100%";

/// The three choices that fit the page rather than naming a percentage.
pub const FITTED: [&str; 3] = ["All", "P. Width", "Whole P."];

/// Every choice the drop-down offers, in the order it offers them.
///
/// Read out of the recovered toolbar rather than written again here, so there
/// is one list and not two.
#[must_use]
pub fn choices() -> &'static [&'static str] {
    toolbars::find(PICKER).map_or(&[], |item| item.choices)
}

/// Whether a choice fits the page rather than naming a percentage.
#[must_use]
pub fn is_fitted(choice: &str) -> bool {
    FITTED.contains(&choice)
}

/// The percentage a choice names, where it names one.
#[must_use]
pub fn percent(choice: &str) -> Option<u32> {
    choice.strip_suffix('%')?.parse().ok()
}

/// How much larger than the sheet's own units things are drawn.
///
/// A fitted choice has no scale of its own until there is a page to fit to, so
/// it draws at the normal size until there is.
#[must_use]
pub fn scale(choice: &str) -> f32 {
    percent(choice).map_or(1.0, |percent| {
        // A percentage of a hundred is the size the sheet is drawn at.
        #[allow(
            clippy::cast_precision_loss,
            reason = "the largest choice is 500, well inside what f32 holds exactly"
        )]
        let factor = percent as f32 / 100.0;
        factor
    })
}

/// The choice one step closer in, or the same one at the top of the list.
///
/// The list runs from the largest to the smallest, so stepping in is stepping
/// back along it.
#[must_use]
pub fn closer(choice: &str) -> &'static str {
    step(choice, -1)
}

/// The choice one step further out, or the same one at the bottom.
#[must_use]
pub fn further(choice: &str) -> &'static str {
    step(choice, 1)
}

/// One step along the list, stopping at either end.
///
/// A fitted choice has no place on the ladder, so stepping from one starts at
/// the normal size - which is what the original does when a zoom command
/// follows a fit.
fn step(choice: &str, by: isize) -> &'static str {
    let all = choices();
    let at = all
        .iter()
        .position(|candidate| *candidate == choice)
        .filter(|_| !is_fitted(choice))
        .or_else(|| all.iter().position(|candidate| *candidate == NORMAL));

    let Some(at) = at else {
        return NORMAL;
    };
    let last = all.len().saturating_sub(1);
    let to = if by < 0 {
        at.saturating_sub(1)
    } else {
        (at + 1).min(last)
    };
    // Stepping past a fitted choice is stepping off the ladder, so stop before
    // it rather than land on one.
    all.get(to)
        .filter(|candidate| !is_fitted(candidate))
        .copied()
        .unwrap_or_else(|| all.get(at).copied().unwrap_or(NORMAL))
}

/// The choice that brings a dragged-out box up to the size of the sheet.
///
/// `Zoom > Window` is the one zoom the ladder cannot give directly: it takes
/// whatever was dragged out and fills the view with it. The nearest choice on
/// the ladder is used rather than a scale of its own, so the drop-down keeps
/// showing something it offers.
#[must_use]
pub fn for_window(units_across: u32, view_across: u32) -> &'static str {
    if units_across == 0 || view_across == 0 {
        return NORMAL;
    }
    // How much bigger the box has to be drawn to fill the view.
    let wanted = (view_across * 100) / units_across;
    nearest(wanted)
}

/// The choice closest to a percentage, from those the drop-down offers.
#[must_use]
pub fn nearest(wanted: u32) -> &'static str {
    choices()
        .iter()
        .filter_map(|choice| percent(choice).map(|value| (value, *choice)))
        .min_by_key(|(value, _)| value.abs_diff(wanted))
        .map_or(NORMAL, |(_, choice)| choice)
}

/// What a menu command does to the zoom, where it does anything.
#[must_use]
pub fn for_command(name: &str, current: &str) -> Option<&'static str> {
    let choice = match name {
        "ZoomNormal" => NORMAL,
        "ZoomIn" => closer(current),
        "ZoomOut" => further(current),
        "ZoomAll" => FITTED[0],
        "PageWidth" => FITTED[1],
        "WholePage" => FITTED[2],
        _ => return None,
    };
    Some(choice)
}

#[cfg(test)]
mod tests {
    use super::{FITTED, NORMAL, choices, closer, for_command, further, is_fitted, percent, scale};

    #[test]
    fn the_list_is_the_toolbars_own() {
        let all = choices();
        assert_eq!(all.len(), 16);
        assert_eq!(all[0], "500%");
        assert_eq!(all[all.len() - 1], "Whole P.");
        assert!(all.contains(&NORMAL));
    }

    #[test]
    fn a_percentage_is_read_and_a_fit_is_not() {
        assert_eq!(percent("250%"), Some(250));
        assert_eq!(percent(NORMAL), Some(100));
        assert_eq!(percent("All"), None);

        assert!(is_fitted("All"));
        assert!(is_fitted("Whole P."));
        assert!(!is_fitted(NORMAL));
    }

    #[test]
    fn the_normal_size_draws_at_the_sheets_own_scale() {
        assert!((scale(NORMAL) - 1.0).abs() < f32::EPSILON);
        assert!((scale("50%") - 0.5).abs() < f32::EPSILON);
        assert!((scale("200%") - 2.0).abs() < f32::EPSILON);
    }

    #[test]
    fn a_fit_draws_at_the_normal_size_until_there_is_a_page_to_fit_to() {
        for choice in FITTED {
            assert!((scale(choice) - 1.0).abs() < f32::EPSILON);
        }
    }

    #[test]
    fn stepping_in_and_out_walks_the_list() {
        assert_eq!(closer(NORMAL), "150%");
        assert_eq!(further(NORMAL), "75%");
        assert_eq!(closer("150%"), "200%");
        assert_eq!(further("75%"), "50%");
    }

    #[test]
    fn stepping_stops_at_either_end() {
        assert_eq!(closer("500%"), "500%");
        assert_eq!(further("10%"), "10%");
    }

    #[test]
    fn stepping_never_lands_on_a_fit() {
        // `10%` is the last percentage; the three after it fit the page.
        assert_eq!(further("10%"), "10%");
        assert!(!is_fitted(further("25%")));
    }

    #[test]
    fn stepping_from_a_fit_starts_at_the_normal_size() {
        assert_eq!(closer("All"), "150%");
        assert_eq!(further("Whole P."), "75%");
    }

    #[test]
    fn the_nearest_choice_is_one_the_drop_down_offers() {
        assert_eq!(super::nearest(100), NORMAL);
        assert_eq!(super::nearest(210), "200%");
        assert_eq!(super::nearest(9999), "500%");
        assert_eq!(super::nearest(1), "10%");
        assert!(choices().contains(&super::nearest(137)));
    }

    #[test]
    fn a_dragged_box_is_brought_up_to_the_size_of_the_view() {
        // A box a quarter of the view across is drawn four times larger.
        assert_eq!(super::for_window(25, 100), "400%");
        // One the size of the view is drawn as it is.
        assert_eq!(super::for_window(100, 100), NORMAL);
        // A box of nothing is not a box.
        assert_eq!(super::for_window(0, 100), NORMAL);
        assert_eq!(super::for_window(50, 0), NORMAL);
    }

    #[test]
    fn the_commands_reach_the_same_list() {
        assert_eq!(for_command("ZoomNormal", "25%"), Some(NORMAL));
        assert_eq!(for_command("ZoomIn", NORMAL), Some("150%"));
        assert_eq!(for_command("ZoomOut", NORMAL), Some("75%"));
        assert_eq!(for_command("ZoomAll", NORMAL), Some("All"));
        assert_eq!(for_command("PageWidth", NORMAL), Some("P. Width"));
        assert_eq!(for_command("WholePage", NORMAL), Some("Whole P."));
        assert_eq!(for_command("mnZoomWindow", NORMAL), None);
        assert_eq!(for_command("mnNew", NORMAL), None);
    }
}
