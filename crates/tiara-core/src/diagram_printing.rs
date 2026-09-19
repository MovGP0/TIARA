//! Printing a range of a document's pages.
//!
//! Printing borrows the page objects themselves rather than copying them —
//! the same objects the user is looking at are re-targeted at the printer,
//! drawn, and put back. That is what makes the printed page match the screen
//! exactly, and it is also why almost everything here is about saving state
//! and restoring it.

/// The draw mode a page is put into while it is being printed.
///
/// Part of Ghidra function `FUN_01ceca50` at `0x01CECA50`.
pub const PRINTING_DRAW_MODE: u8 = 2;

/// The draw modes for which a printed page is finished the short way.
///
/// Part of Ghidra function `FUN_01ceca50` at `0x01CECA50`.
///
/// Recovered as a bit mask over the page's restored draw mode.
pub const SHORT_FINISH_MODES: u8 = 0x01;

/// The highest draw mode the recovered mask can describe.
pub const DRAW_MODE_LIMIT: u8 = 8;

/// Whether a page in one draw mode is finished the short way.
///
/// Part of Ghidra function `FUN_01ceca50` at `0x01CECA50`.
#[must_use]
pub const fn mode_finishes_short(mode: u8) -> bool {
    mode < DRAW_MODE_LIMIT && (1_u8 << mode) & SHORT_FINISH_MODES != 0
}

/// The state one page has to have put back after it is printed.
///
/// Part of Ghidra function `FUN_01ceca50` at `0x01CECA50`.
///
/// Every field here is something printing overwrites on the live object. The
/// struct exists so the restore cannot quietly fall out of step with the
/// override — anything added to one has to be added to the other.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub struct BorrowedPageState {
    /// The page's layout rectangle on screen.
    pub layout: PageRect,
    /// Its draw mode.
    pub draw_mode: u8,
}

/// A rectangle in the page's own coordinates.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub struct PageRect {
    /// The left edge.
    pub left: i32,
    /// The top edge.
    pub top: i32,
    /// The right edge.
    pub right: i32,
    /// The bottom edge.
    pub bottom: i32,
}

impl PageRect {
    /// A rectangle anchored at the origin with this size.
    #[must_use]
    pub const fn of_size(width: i32, height: i32) -> Self {
        Self {
            left: 0,
            top: 0,
            right: width,
            bottom: height,
        }
    }
}

/// What printing a range of pages needs from the document and the printer.
pub trait PagePrintHost {
    /// The caption of one page, which becomes the printer's document title.
    fn page_title(&mut self, page: usize) -> String;

    /// Sets the printer's document title.
    fn set_printer_title(&mut self, title: &str);

    /// Shows which page is being printed, if there is anywhere to show it.
    fn report_progress(&mut self, page: usize);

    /// Reads the state printing is about to overwrite.
    fn borrow_page(&mut self, page: usize) -> BorrowedPageState;

    /// Points the page at the printer's canvas and marks the application as
    /// printing.
    fn target_printer(&mut self, page: usize);

    /// Puts the page into the printing draw mode.
    fn set_draw_mode(&mut self, page: usize, mode: u8);

    /// The printer's page size.
    fn printer_page_size(&mut self) -> (i32, i32);

    /// Lays the page out into one rectangle.
    fn lay_out(&mut self, page: usize, rect: PageRect);

    /// Draws it.
    fn draw(&mut self, page: usize);

    /// Points the page back at the screen and clears the printing mark.
    fn target_screen(&mut self, page: usize);

    /// Puts the page's scroll offsets back to the origin.
    fn reset_scroll(&mut self, page: usize);

    /// Whether the page wants the short finish.
    fn wants_short_finish(&mut self, page: usize) -> bool;

    /// Finishes the page the short way.
    fn finish_short(&mut self, page: usize);

    /// Starts a new sheet.
    fn new_sheet(&mut self);
}

/// Implements Ghidra function `FUN_01ceca50` at `0x01CECA50`.
///
/// Prints a range of pages.
///
/// Each page is borrowed rather than copied: its layout rectangle and draw
/// mode are read, the page is pointed at the printer, drawn, and then put
/// back exactly as it was. Printing a document therefore leaves the user
/// looking at what they were looking at before, which a copy-based approach
/// would get for free but at the cost of the printed page possibly differing
/// from the screen.
///
/// A new sheet is started between pages but *not* after the last one, so a
/// print run does not end with a blank sheet — the one decision here that is
/// about the printer rather than the document.
///
/// The range is inclusive at both ends and a range that runs backwards prints
/// nothing.
///
/// Returns how many pages were printed.
pub fn print_pages(host: &mut impl PagePrintHost, first: usize, last: usize) -> usize {
    if first > last {
        return 0;
    }

    for page in first..=last {
        let title = host.page_title(page);
        host.set_printer_title(&title);
        host.report_progress(page);

        let borrowed = host.borrow_page(page);

        host.target_printer(page);
        host.set_draw_mode(page, PRINTING_DRAW_MODE);

        let (width, height) = host.printer_page_size();
        host.lay_out(page, PageRect::of_size(width, height));
        host.draw(page);

        host.target_screen(page);
        host.set_draw_mode(page, borrowed.draw_mode);
        host.reset_scroll(page);
        host.lay_out(page, borrowed.layout);

        if host.wants_short_finish(page) && mode_finishes_short(borrowed.draw_mode) {
            host.finish_short(page);
        }

        if page < last {
            host.new_sheet();
        }
    }

    last - first + 1
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn only_one_draw_mode_finishes_the_short_way() {
        assert!(mode_finishes_short(0));

        for mode in [1, 2, 3, 7, 8, 200] {
            assert!(!mode_finishes_short(mode), "mode {mode}");
        }
    }

    #[test]
    fn a_page_rectangle_of_a_size_sits_at_the_origin() {
        assert_eq!(
            PageRect::of_size(2400, 3400),
            PageRect {
                left: 0,
                top: 0,
                right: 2400,
                bottom: 3400,
            }
        );
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum Step {
        Title(String),
        Progress(usize),
        TargetPrinter(usize),
        Mode(usize, u8),
        LayOut(usize, PageRect),
        Draw(usize),
        TargetScreen(usize),
        ResetScroll(usize),
        FinishShort(usize),
        NewSheet,
    }

    #[derive(Debug, Default)]
    struct Document {
        layout: PageRect,
        draw_mode: u8,
        short_finish: bool,
        steps: Vec<Step>,
    }

    impl Document {
        fn ready() -> Self {
            Self {
                layout: PageRect {
                    left: 10,
                    top: 20,
                    right: 810,
                    bottom: 620,
                },
                draw_mode: 5,
                ..Self::default()
            }
        }
    }

    impl PagePrintHost for Document {
        fn page_title(&mut self, page: usize) -> String {
            format!("Page {page}")
        }

        fn set_printer_title(&mut self, title: &str) {
            self.steps.push(Step::Title(title.to_owned()));
        }

        fn report_progress(&mut self, page: usize) {
            self.steps.push(Step::Progress(page));
        }

        fn borrow_page(&mut self, _page: usize) -> BorrowedPageState {
            BorrowedPageState {
                layout: self.layout,
                draw_mode: self.draw_mode,
            }
        }

        fn target_printer(&mut self, page: usize) {
            self.steps.push(Step::TargetPrinter(page));
        }

        fn set_draw_mode(&mut self, page: usize, mode: u8) {
            self.draw_mode = mode;
            self.steps.push(Step::Mode(page, mode));
        }

        fn printer_page_size(&mut self) -> (i32, i32) {
            (2400, 3400)
        }

        fn lay_out(&mut self, page: usize, rect: PageRect) {
            self.layout = rect;
            self.steps.push(Step::LayOut(page, rect));
        }

        fn draw(&mut self, page: usize) {
            self.steps.push(Step::Draw(page));
        }

        fn target_screen(&mut self, page: usize) {
            self.steps.push(Step::TargetScreen(page));
        }

        fn reset_scroll(&mut self, page: usize) {
            self.steps.push(Step::ResetScroll(page));
        }

        fn wants_short_finish(&mut self, _page: usize) -> bool {
            self.short_finish
        }

        fn finish_short(&mut self, page: usize) {
            self.steps.push(Step::FinishShort(page));
        }

        fn new_sheet(&mut self) {
            self.steps.push(Step::NewSheet);
        }
    }

    #[test]
    fn one_page_is_borrowed_drawn_and_put_back() {
        let original = Document::ready();
        let mut host = Document::ready();

        assert_eq!(print_pages(&mut host, 1, 1), 1);

        assert_eq!(host.layout, original.layout);
        assert_eq!(host.draw_mode, original.draw_mode);
    }

    #[test]
    fn the_page_is_laid_out_to_the_printer_then_back_to_the_screen() {
        let mut host = Document::ready();
        print_pages(&mut host, 1, 1);

        let layouts: Vec<_> = host
            .steps
            .iter()
            .filter_map(|step| match step {
                Step::LayOut(_, rect) => Some(*rect),
                _ => None,
            })
            .collect();

        assert_eq!(
            layouts,
            [
                PageRect::of_size(2400, 3400),
                PageRect {
                    left: 10,
                    top: 20,
                    right: 810,
                    bottom: 620,
                },
            ]
        );
    }

    #[test]
    fn the_draw_mode_is_overridden_and_then_restored() {
        let mut host = Document::ready();
        print_pages(&mut host, 1, 1);

        let modes: Vec<_> = host
            .steps
            .iter()
            .filter_map(|step| match step {
                Step::Mode(_, mode) => Some(*mode),
                _ => None,
            })
            .collect();

        assert_eq!(modes, [PRINTING_DRAW_MODE, 5]);
    }

    #[test]
    fn nothing_is_drawn_before_the_page_is_pointed_at_the_printer() {
        let mut host = Document::ready();
        print_pages(&mut host, 1, 1);

        let targeted = host
            .steps
            .iter()
            .position(|step| matches!(step, Step::TargetPrinter(_)))
            .expect("the printer is targeted");
        let drawn = host
            .steps
            .iter()
            .position(|step| matches!(step, Step::Draw(_)))
            .expect("it is drawn");

        assert!(targeted < drawn);
    }

    #[test]
    fn a_new_sheet_is_started_between_pages_but_not_after_the_last() {
        let mut host = Document::ready();

        assert_eq!(print_pages(&mut host, 1, 3), 3);
        assert_eq!(
            host.steps.iter().filter(|s| **s == Step::NewSheet).count(),
            2
        );
        assert_ne!(host.steps.last(), Some(&Step::NewSheet));
    }

    #[test]
    fn a_single_page_run_starts_no_new_sheet_at_all() {
        let mut host = Document::ready();
        print_pages(&mut host, 2, 2);

        assert!(!host.steps.contains(&Step::NewSheet));
    }

    #[test]
    fn a_range_that_runs_backwards_prints_nothing() {
        let mut host = Document::ready();

        assert_eq!(print_pages(&mut host, 3, 1), 0);
        assert!(host.steps.is_empty());
    }

    #[test]
    fn each_page_titles_the_print_job_with_its_own_caption() {
        let mut host = Document::ready();
        print_pages(&mut host, 1, 2);

        assert!(host.steps.contains(&Step::Title("Page 1".to_owned())));
        assert!(host.steps.contains(&Step::Title("Page 2".to_owned())));
    }

    #[test]
    fn the_short_finish_needs_both_the_pages_flag_and_its_restored_mode() {
        let mut neither = Document::ready();
        print_pages(&mut neither, 1, 1);
        assert!(
            !neither
                .steps
                .iter()
                .any(|step| matches!(step, Step::FinishShort(_)))
        );

        // The flag alone is not enough while the mode is outside the mask.
        let mut flag_only = Document {
            short_finish: true,
            ..Document::ready()
        };
        print_pages(&mut flag_only, 1, 1);
        assert!(
            !flag_only
                .steps
                .iter()
                .any(|step| matches!(step, Step::FinishShort(_)))
        );

        let mut both = Document {
            short_finish: true,
            draw_mode: 0,
            ..Document::ready()
        };
        print_pages(&mut both, 1, 1);
        assert!(both.steps.contains(&Step::FinishShort(1)));
    }

    #[test]
    fn the_scroll_offsets_go_back_to_the_origin_rather_than_to_what_they_were() {
        let mut host = Document::ready();
        print_pages(&mut host, 1, 1);

        assert!(host.steps.contains(&Step::ResetScroll(1)));
    }
}
