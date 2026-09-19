//! A list of named tasks, each with its own progress bar.
//!
//! The list is kept as two parallel sequences — the names and whatever each
//! task is carrying — alongside one panel per task in a scrolling container.
//! Everything is addressed by name and resolved to a position, so the three
//! sequences have to stay the same length; that is the invariant the
//! operations here exist to hold.

/// The form's construction and teardown are Ghidra functions `FUN_012cc640`
/// at `0x012CC640` and `FUN_012ce850` at `0x012CE850`.
///
/// The first is the Delphi class-construction wrapper — allocate, store the
/// caller's argument, run the inherited constructor, finalise — and the
/// second releases the four fields it owned. Neither has a counterpart here:
/// this port owns its state through Rust's own lifetimes, so there is nothing
/// left for either to do.
///
/// What the task list needs from the window around it.
pub trait TaskListHost {
    /// Stops the container re-laying itself out while several things change.
    fn begin_update(&mut self);

    /// Lets it lay out again.
    fn end_update(&mut self);

    /// Where one name sits, or `None` when the list does not hold it.
    fn position_of(&mut self, name: &str) -> Option<usize>;

    /// Appends a name.
    fn push_name(&mut self, name: &str);

    /// Appends an empty entry to the parallel data sequence.
    fn push_empty_data(&mut self);

    /// Removes the name at one position.
    fn remove_name(&mut self, position: usize);

    /// Removes the parallel data entry at one position.
    fn remove_data(&mut self, position: usize);

    /// Adds a panel captioned with this text and gives it a progress bar.
    fn add_panel(&mut self, caption: &str);

    /// Frees the panel at one position, along with its progress bar.
    fn remove_panel(&mut self, position: usize);

    /// How many panels there are.
    fn panel_count(&mut self) -> usize;

    /// The height one panel occupied.
    fn panel_height(&mut self, position: usize) -> i32;

    /// Moves one panel up by this many units.
    fn move_panel_up(&mut self, position: usize, amount: i32);

    /// Sets the progress bar at one position.
    fn set_progress(&mut self, position: usize, value: u8);

    /// Sets the parallel data entry at one position.
    fn set_data(&mut self, position: usize, data: TaskData);

    /// Writes the three summary labels from their own format strings.
    fn set_summary(&mut self, totals: SummaryTotals);
}

/// Whatever one task carries alongside its name.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub struct TaskData(pub usize);

/// The three numbers the summary labels are built from.
///
/// Part of Ghidra function `FUN_012cd110` at `0x012CD110`.
///
/// Each has a format string of its own and its own label, so the three are
/// independent — a caller that knows only one of them still has to supply all
/// three, which is why they travel together.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub struct SummaryTotals {
    /// The first total.
    pub first: i32,
    /// The second.
    pub second: i32,
    /// The third.
    pub third: i32,
}

/// The caption one task's panel shows.
///
/// Part of Ghidra function `FUN_012cca00` at `0x012CCA00`.
///
/// The list holds each task's full name but the panel shows only the last
/// part of it, so two tasks from different directories look alike on screen
/// while still being distinct to every operation here — which is why lookup
/// is by the full name and never by what the user can read.
#[must_use]
pub fn panel_caption(name: &str) -> String {
    name.rsplit(['\\', '/']).next().unwrap_or(name).to_owned()
}

/// Implements Ghidra function `FUN_012cca00` at `0x012CCA00`.
///
/// Adds a task to the list.
///
/// The name, the parallel data entry and the panel are added together, in
/// that order, so the three sequences never differ in length even for the
/// moment between two of the three calls.
///
/// The whole addition happens with the container's layout held, so the user
/// sees one change rather than a panel appearing and then the summary
/// catching up.
pub fn add_task(host: &mut impl TaskListHost, name: &str, totals: SummaryTotals) {
    host.begin_update();

    host.push_name(name);
    host.push_empty_data();
    host.add_panel(&panel_caption(name));

    host.set_summary(totals);
    host.end_update();
}

/// Implements Ghidra function `FUN_012ccc10` at `0x012CCC10`.
///
/// Removes a task from the list.
///
/// A name the list does not hold changes nothing at all — not even the
/// layout is held — so asking to remove a task twice is harmless.
///
/// The panels below the removed one are moved up by exactly the height it
/// occupied rather than the container being laid out again. That keeps the
/// ones above it exactly where they were, which matters because the user may
/// be watching one of them.
///
/// Returns whether anything was removed.
pub fn remove_task(host: &mut impl TaskListHost, name: &str, totals: SummaryTotals) -> bool {
    let Some(position) = host.position_of(name) else {
        return false;
    };

    host.begin_update();

    host.remove_name(position);
    host.remove_data(position);

    let height = host.panel_height(position);
    host.remove_panel(position);

    let remaining = host.panel_count();
    for below in position..remaining {
        host.move_panel_up(below, height);
    }

    host.set_summary(totals);
    host.end_update();
    true
}

/// Implements Ghidra function `FUN_012cce60` at `0x012CCE60`.
///
/// Sets one task's progress by name.
///
/// A name the list does not hold is passed over silently, so a task that has
/// already finished and been removed can still report progress without the
/// caller having to check first.
///
/// Returns whether the task was found.
pub fn set_task_progress(host: &mut impl TaskListHost, name: &str, value: u8) -> bool {
    let Some(position) = host.position_of(name) else {
        return false;
    };
    host.set_progress(position, value);
    true
}

/// Implements Ghidra function `FUN_012cd080` at `0x012CD080`.
///
/// Sets what one task carries, by name.
///
/// Passes over an unknown name for the same reason [`set_task_progress`]
/// does.
///
/// Returns whether the task was found.
pub fn set_task_data(host: &mut impl TaskListHost, name: &str, data: TaskData) -> bool {
    let Some(position) = host.position_of(name) else {
        return false;
    };
    host.set_data(position, data);
    true
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn a_panel_is_captioned_with_the_last_part_of_the_name() {
        assert_eq!(panel_caption(r"C:\work\amp.tsc"), "amp.tsc");
        assert_eq!(panel_caption("amp.tsc"), "amp.tsc");
        assert_eq!(panel_caption("a/b/c.tsc"), "c.tsc");
        assert_eq!(panel_caption(""), "");
    }

    #[test]
    fn two_tasks_from_different_directories_share_a_caption_but_not_a_name() {
        assert_eq!(
            panel_caption(r"C:\one\amp.tsc"),
            panel_caption(r"C:\two\amp.tsc")
        );
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum Step {
        Begin,
        End,
        PushName(String),
        PushData,
        RemoveName(usize),
        RemoveData(usize),
        AddPanel(String),
        RemovePanel(usize),
        MoveUp(usize, i32),
        Progress(usize, u8),
        Data(usize, TaskData),
        Summary(SummaryTotals),
    }

    #[derive(Debug, Default)]
    struct Window {
        names: Vec<String>,
        panels: usize,
        height: i32,
        steps: Vec<Step>,
    }

    impl Window {
        fn with(names: &[&str]) -> Self {
            Self {
                names: names.iter().map(|name| (*name).to_owned()).collect(),
                panels: names.len(),
                height: 24,
                steps: Vec::new(),
            }
        }
    }

    impl TaskListHost for Window {
        fn begin_update(&mut self) {
            self.steps.push(Step::Begin);
        }

        fn end_update(&mut self) {
            self.steps.push(Step::End);
        }

        fn position_of(&mut self, name: &str) -> Option<usize> {
            self.names.iter().position(|held| held == name)
        }

        fn push_name(&mut self, name: &str) {
            self.names.push(name.to_owned());
            self.steps.push(Step::PushName(name.to_owned()));
        }

        fn push_empty_data(&mut self) {
            self.steps.push(Step::PushData);
        }

        fn remove_name(&mut self, position: usize) {
            self.names.remove(position);
            self.steps.push(Step::RemoveName(position));
        }

        fn remove_data(&mut self, position: usize) {
            self.steps.push(Step::RemoveData(position));
        }

        fn add_panel(&mut self, caption: &str) {
            self.panels += 1;
            self.steps.push(Step::AddPanel(caption.to_owned()));
        }

        fn remove_panel(&mut self, position: usize) {
            self.panels -= 1;
            self.steps.push(Step::RemovePanel(position));
        }

        fn panel_count(&mut self) -> usize {
            self.panels
        }

        fn panel_height(&mut self, _position: usize) -> i32 {
            self.height
        }

        fn move_panel_up(&mut self, position: usize, amount: i32) {
            self.steps.push(Step::MoveUp(position, amount));
        }

        fn set_progress(&mut self, position: usize, value: u8) {
            self.steps.push(Step::Progress(position, value));
        }

        fn set_data(&mut self, position: usize, data: TaskData) {
            self.steps.push(Step::Data(position, data));
        }

        fn set_summary(&mut self, totals: SummaryTotals) {
            self.steps.push(Step::Summary(totals));
        }
    }

    fn totals() -> SummaryTotals {
        SummaryTotals {
            first: 1,
            second: 2,
            third: 3,
        }
    }

    #[test]
    fn adding_a_task_adds_a_name_a_data_entry_and_a_panel_in_that_order() {
        let mut host = Window::default();

        add_task(&mut host, r"C:\work\amp.tsc", totals());

        assert_eq!(
            host.steps,
            [
                Step::Begin,
                Step::PushName(r"C:\work\amp.tsc".to_owned()),
                Step::PushData,
                Step::AddPanel("amp.tsc".to_owned()),
                Step::Summary(totals()),
                Step::End,
            ]
        );
    }

    #[test]
    fn the_whole_addition_happens_with_the_layout_held() {
        let mut host = Window::default();
        add_task(&mut host, "one", totals());

        assert_eq!(host.steps.first(), Some(&Step::Begin));
        assert_eq!(host.steps.last(), Some(&Step::End));
    }

    #[test]
    fn removing_a_task_takes_it_out_of_both_sequences() {
        let mut host = Window::with(&["one", "two", "three"]);

        assert!(remove_task(&mut host, "two", totals()));
        assert!(host.steps.contains(&Step::RemoveName(1)));
        assert!(host.steps.contains(&Step::RemoveData(1)));
        assert_eq!(host.names, ["one", "three"]);
    }

    #[test]
    fn the_panels_below_move_up_by_exactly_the_height_that_went() {
        let mut host = Window::with(&["one", "two", "three", "four"]);

        remove_task(&mut host, "two", totals());

        // Three panels left; the two that were below move up.
        assert!(host.steps.contains(&Step::MoveUp(1, 24)));
        assert!(host.steps.contains(&Step::MoveUp(2, 24)));
        assert!(!host.steps.contains(&Step::MoveUp(0, 24)));
    }

    #[test]
    fn removing_the_last_task_moves_nothing() {
        let mut host = Window::with(&["one", "two"]);

        remove_task(&mut host, "two", totals());

        assert!(
            !host
                .steps
                .iter()
                .any(|step| matches!(step, Step::MoveUp(..)))
        );
    }

    #[test]
    fn removing_a_name_the_list_does_not_hold_changes_nothing_at_all() {
        let mut host = Window::with(&["one"]);

        assert!(!remove_task(&mut host, "other", totals()));
        assert!(host.steps.is_empty());
    }

    #[test]
    fn removing_the_same_task_twice_is_harmless() {
        let mut host = Window::with(&["one", "two"]);

        assert!(remove_task(&mut host, "one", totals()));
        host.steps.clear();
        assert!(!remove_task(&mut host, "one", totals()));
        assert!(host.steps.is_empty());
    }

    #[test]
    fn both_add_and_remove_end_by_writing_the_summary() {
        let mut adding = Window::default();
        add_task(&mut adding, "one", totals());
        assert!(adding.steps.contains(&Step::Summary(totals())));

        let mut removing = Window::with(&["one"]);
        remove_task(&mut removing, "one", totals());
        assert!(removing.steps.contains(&Step::Summary(totals())));
    }

    #[test]
    fn progress_is_set_by_name_at_the_position_the_name_holds() {
        let mut host = Window::with(&["one", "two", "three"]);

        assert!(set_task_progress(&mut host, "three", 75));
        assert_eq!(host.steps, [Step::Progress(2, 75)]);
    }

    #[test]
    fn progress_for_a_task_that_is_gone_is_passed_over_silently() {
        let mut host = Window::with(&["one"]);

        assert!(!set_task_progress(&mut host, "gone", 50));
        assert!(host.steps.is_empty());
    }

    #[test]
    fn data_is_set_by_name_the_same_way() {
        let mut host = Window::with(&["one", "two"]);

        assert!(set_task_data(&mut host, "two", TaskData(9)));
        assert_eq!(host.steps, [Step::Data(1, TaskData(9))]);

        assert!(!set_task_data(&mut host, "gone", TaskData(1)));
    }

    #[test]
    fn the_name_and_the_caption_are_looked_up_differently() {
        let mut host = Window::default();
        add_task(&mut host, r"C:\a\amp.tsc", totals());

        // Addressed by the full name, shown by the caption.
        assert!(set_task_progress(&mut host, r"C:\a\amp.tsc", 10));
        assert!(!set_task_progress(&mut host, "amp.tsc", 10));
    }
}
