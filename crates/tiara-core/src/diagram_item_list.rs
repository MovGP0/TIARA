//! The recovered diagram item list: the window it shows, the order it keeps,
//! and how it reaches its items.
//!
//! A diagram carries more items than it has room for, so the list shows a
//! window onto them and scrolls. Everything here works on indices rather than
//! on the items themselves, which is what lets the same operations serve a
//! list whose items are of several different kinds.

/// The window one list shows onto its items.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub struct ItemWindow {
    /// The index of the first item shown.
    pub first: usize,
    /// How many are shown at once.
    pub visible: usize,
}

impl ItemWindow {
    /// Builds a window.
    #[must_use]
    pub const fn new(first: usize, visible: usize) -> Self {
        Self { first, visible }
    }

    /// The index one past the last item shown.
    ///
    /// This can run past the end of the list, which is exactly what happens
    /// on the last page when the items do not divide evenly.
    #[must_use]
    pub const fn end(self) -> usize {
        self.first + self.visible
    }

    /// Implements Ghidra function `FUN_01ce6390` at `0x01CE6390`.
    ///
    /// Scrolls the window one item towards the start.
    ///
    /// Returns whether it moved. A window already at the start does not move
    /// and reports so, which is what lets the caller leave the display alone
    /// rather than redrawing it identically.
    #[must_use]
    pub const fn scroll_back(self) -> Option<Self> {
        if self.first == 0 {
            return None;
        }
        Some(Self {
            first: self.first - 1,
            visible: self.visible,
        })
    }

    /// Implements Ghidra function `FUN_01ce63e0` at `0x01CE63E0`.
    ///
    /// Scrolls the window one item towards the end.
    ///
    /// The stop is where the window's *end* reaches the list's, not where its
    /// start does — so the last item can be scrolled to the bottom of the
    /// window and no further, and the window is never left showing nothing.
    ///
    /// A window larger than the list therefore cannot scroll at all, which is
    /// the right answer: everything is already shown.
    #[must_use]
    pub const fn scroll_forward(self, total: usize) -> Option<Self> {
        if self.end() >= total {
            return None;
        }
        Some(Self {
            first: self.first + 1,
            visible: self.visible,
        })
    }

    /// The indices the window shows, clipped to the list.
    #[must_use]
    pub fn shown(self, total: usize) -> std::ops::Range<usize> {
        self.first.min(total)..self.end().min(total)
    }
}

/// Implements Ghidra function `FUN_01ce8740` at `0x01CE8740`.
///
/// Puts the list in order by repeatedly exchanging neighbours that are the
/// wrong way round.
///
/// Sorting by exchanging *adjacent* items is what lets the list be reordered
/// through the same operation the user's drag uses — nothing is moved further
/// than one place at a time, so every intermediate state is one the list
/// could have been in anyway.
///
/// `out_of_order` is asked about a neighbouring pair by index and `exchange`
/// swaps them. The comparison is asked afresh on every pass rather than
/// cached, so a comparison that depends on the list's own state stays
/// correct as the list changes under it.
///
/// Returns whether anything moved.
pub fn sort_by_exchange(
    total: usize,
    out_of_order: &mut impl FnMut(usize, usize) -> bool,
    exchange: &mut impl FnMut(usize, usize),
) -> bool {
    let mut moved = false;

    for pass in (0..total.saturating_sub(1)).rev() {
        for left in 0..=pass {
            if out_of_order(left, left + 1) {
                exchange(left, left + 1);
                moved = true;
            }
        }
    }

    moved
}

/// Implements Ghidra function `FUN_01ce2b70` at `0x01CE2B70`.
///
/// Passes one thing to the list's own handler and then to every item in it.
///
/// The list is told first and the items after, so the list can set up
/// whatever its items will read — the order is the point, not an accident of
/// iteration.
///
/// Items are reached by index rather than held, so an item that the list
/// hands back differently on each call still receives exactly one visit.
pub fn broadcast<T: Copy>(
    total: usize,
    subject: T,
    deliver_to_list: &mut impl FnMut(T),
    deliver_to_item: &mut impl FnMut(usize, T),
) {
    deliver_to_list(subject);
    for index in 0..total {
        deliver_to_item(index, subject);
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn a_window_at_the_start_cannot_scroll_back() {
        assert_eq!(ItemWindow::new(0, 5).scroll_back(), None);
    }

    #[test]
    fn scrolling_back_moves_one_item() {
        assert_eq!(
            ItemWindow::new(3, 5).scroll_back(),
            Some(ItemWindow::new(2, 5))
        );
    }

    #[test]
    fn scrolling_forward_stops_where_the_windows_end_meets_the_lists() {
        let window = ItemWindow::new(5, 5);

        assert_eq!(window.scroll_forward(11), Some(ItemWindow::new(6, 5)));
        assert_eq!(window.scroll_forward(10), None);
    }

    #[test]
    fn the_last_item_can_reach_the_bottom_of_the_window_and_no_further() {
        let mut window = ItemWindow::new(0, 4);
        while let Some(next) = window.scroll_forward(10) {
            window = next;
        }

        assert_eq!(window.first, 6);
        assert_eq!(window.end(), 10);
    }

    #[test]
    fn a_window_larger_than_the_list_cannot_scroll_at_all() {
        let window = ItemWindow::new(0, 20);

        assert_eq!(window.scroll_forward(5), None);
        assert_eq!(window.scroll_back(), None);
    }

    #[test]
    fn the_shown_indices_are_clipped_to_the_list() {
        assert_eq!(ItemWindow::new(2, 3).shown(10), 2..5);
        assert_eq!(ItemWindow::new(8, 5).shown(10), 8..10);
        assert_eq!(ItemWindow::new(20, 5).shown(10), 10..10);
    }

    fn sorted(values: &mut Vec<i32>) -> bool {
        let snapshot = std::cell::RefCell::new(std::mem::take(values));
        let total = snapshot.borrow().len();

        let moved = sort_by_exchange(
            total,
            &mut |left, right| snapshot.borrow()[left] > snapshot.borrow()[right],
            &mut |left, right| snapshot.borrow_mut().swap(left, right),
        );

        *values = snapshot.into_inner();
        moved
    }

    #[test]
    fn exchanging_neighbours_puts_the_list_in_order() {
        let mut values = vec![5, 3, 9, 1, 7];

        assert!(sorted(&mut values));
        assert_eq!(values, [1, 3, 5, 7, 9]);
    }

    #[test]
    fn an_ordered_list_is_left_alone_and_says_so() {
        let mut values = vec![1, 2, 3];

        assert!(!sorted(&mut values));
        assert_eq!(values, [1, 2, 3]);
    }

    #[test]
    fn a_reversed_list_is_still_put_in_order() {
        let mut values = vec![5, 4, 3, 2, 1];

        assert!(sorted(&mut values));
        assert_eq!(values, [1, 2, 3, 4, 5]);
    }

    #[test]
    fn lists_too_short_to_have_a_pair_are_untouched() {
        for mut values in [vec![], vec![7]] {
            assert!(!sorted(&mut values));
        }
    }

    #[test]
    fn equal_neighbours_keep_the_order_they_were_in() {
        let order = std::cell::RefCell::new(vec![(1, 'a'), (1, 'b'), (0, 'c')]);

        sort_by_exchange(
            3,
            &mut |left, right| order.borrow()[left].0 > order.borrow()[right].0,
            &mut |left, right| order.borrow_mut().swap(left, right),
        );

        assert_eq!(order.into_inner(), [(0, 'c'), (1, 'a'), (1, 'b')]);
    }

    #[test]
    fn only_neighbouring_pairs_are_ever_compared() {
        let pairs = std::cell::RefCell::new(Vec::new());

        sort_by_exchange(
            5,
            &mut |left, right| {
                pairs.borrow_mut().push((left, right));
                false
            },
            &mut |_, _| unreachable!("nothing is out of order"),
        );

        assert!(
            pairs
                .borrow()
                .iter()
                .all(|(left, right)| *right == left + 1)
        );
    }

    #[test]
    fn the_list_is_told_before_any_of_its_items() {
        let order = std::cell::RefCell::new(Vec::new());

        broadcast(
            3,
            7_u8,
            &mut |subject| order.borrow_mut().push(format!("list:{subject}")),
            &mut |index, subject| order.borrow_mut().push(format!("item{index}:{subject}")),
        );

        assert_eq!(
            order.into_inner(),
            ["list:7", "item0:7", "item1:7", "item2:7"]
        );
    }

    #[test]
    fn an_empty_list_still_hears_it() {
        let order = std::cell::RefCell::new(Vec::new());

        broadcast(
            0,
            (),
            &mut |()| order.borrow_mut().push("list"),
            &mut |_, ()| order.borrow_mut().push("item"),
        );

        assert_eq!(order.into_inner(), ["list"]);
    }
}
