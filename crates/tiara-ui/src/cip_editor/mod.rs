use iced::widget::{button, checkbox, column, container, row, text};
use iced::{Element, Length, Task};

const INDUCTOR_CATEGORY: u8 = 4;
const SUPPORTED_TYPE_CODES: [u8; 5] = [0x0B, 0x6E, 0xCC, 0xD6, 0xE0];

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CandidateObject {
    pub category: u8,
    pub type_code: u8,
    pub display_name: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    PopulateCandidates(Vec<CandidateObject>),
    CandidateSelectionChanged { index: usize, selected: bool },
    ApplicationIdle,
    Accept,
    Cancel,
}

#[derive(Debug, Default)]
pub struct Window {
    candidate_names: Vec<String>,
    selected: Vec<bool>,
    ok_enabled: bool,
    accepted: bool,
    cancelled: bool,
}

impl Window {
    pub fn update(
        &mut self,
        message: Message,
        caller_selection: &mut Vec<String>,
    ) -> Task<Message> {
        match message {
            Message::PopulateCandidates(objects) => {
                self.populate_candidates(objects, caller_selection);
            }
            Message::CandidateSelectionChanged { index, selected } => {
                if let Some(value) = self.selected.get_mut(index) {
                    *value = selected;
                }
            }
            Message::ApplicationIdle => self.refresh_ok_enabled(),
            Message::Accept => {
                self.replace_caller_selection(caller_selection);
                self.accepted = true;
                self.cancelled = false;
            }
            Message::Cancel => {
                self.cancelled = true;
                self.accepted = false;
            }
        }

        Task::none()
    }

    /// Populates the eligible inductor candidates and restores matching rows.
    ///
    /// This is an original Rust implementation traced to Ghidra function
    /// `0x013FABA0`, symbol `FUN_013faba0`. It preserves recovered object order,
    /// accepts only category 4 and the five supported type codes, ignores empty
    /// display names, and selects the first candidate that matches each caller
    /// list entry.
    pub fn populate_candidates(
        &mut self,
        objects: impl IntoIterator<Item = CandidateObject>,
        caller_selection: &[String],
    ) {
        self.candidate_names = objects
            .into_iter()
            .filter(|object| {
                object.category == INDUCTOR_CATEGORY
                    && SUPPORTED_TYPE_CODES.contains(&object.type_code)
                    && !object.display_name.is_empty()
            })
            .map(|object| object.display_name)
            .collect();
        self.selected = vec![false; self.candidate_names.len()];

        for previous_name in caller_selection {
            if let Some(index) = self
                .candidate_names
                .iter()
                .position(|candidate| candidate == previous_name)
            {
                self.selected[index] = true;
            }
        }

        self.ok_enabled = false;
        self.accepted = false;
        self.cancelled = false;
    }

    /// Replaces the caller-owned list with selected rows in candidate order.
    ///
    /// This is an original Rust implementation traced to Ghidra function
    /// `0x013FAD30`, symbol `FUN_013fad30`. The method clears the supplied list
    /// before it visits rows, keeps no rollback copy, and does not repeat the
    /// greater-than-one selection gate.
    pub fn replace_caller_selection(&self, caller_selection: &mut Vec<String>) {
        caller_selection.clear();
        for (candidate, selected) in self.candidate_names.iter().zip(&self.selected) {
            if *selected {
                caller_selection.push(candidate.clone());
            }
        }
    }

    /// Enables OK only when more than one candidate row is selected.
    ///
    /// This is an original Rust implementation traced to Ghidra function
    /// `0x013FAE20`, symbol `FUN_013fae20`. The iced update path calls it only
    /// for the application-idle message.
    pub fn refresh_ok_enabled(&mut self) {
        self.ok_enabled = self.selected.iter().filter(|selected| **selected).count() > 1;
    }

    #[must_use]
    pub fn candidate_names(&self) -> &[String] {
        &self.candidate_names
    }

    #[must_use]
    pub fn selected_rows(&self) -> &[bool] {
        &self.selected
    }

    #[must_use]
    pub const fn ok_enabled(&self) -> bool {
        self.ok_enabled
    }

    #[must_use]
    pub const fn accepted(&self) -> bool {
        self.accepted
    }

    #[must_use]
    pub const fn cancelled(&self) -> bool {
        self.cancelled
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let candidates = column(self.candidate_names.iter().enumerate().map(
            |(index, candidate)| {
                checkbox(candidate, self.selected[index])
                    .on_toggle(move |selected| Message::CandidateSelectionChanged {
                        index,
                        selected,
                    })
                    .into()
            },
        ))
        .spacing(6);
        let actions = row![
            button("OK").on_press_maybe(self.ok_enabled.then_some(Message::Accept)),
            button("Cancel").on_press(Message::Cancel),
        ]
        .spacing(8);

        container(column![text("Select inductors"), candidates, actions].spacing(12))
            .padding(16)
            .width(Length::Fill)
            .height(Length::Fill)
            .into()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn object(category: u8, type_code: u8, display_name: &str) -> CandidateObject {
        CandidateObject {
            category,
            type_code,
            display_name: display_name.to_owned(),
        }
    }

    fn populate(window: &mut Window, caller_selection: &mut Vec<String>) {
        let _task = window.update(
            Message::PopulateCandidates(vec![
                object(4, 0x0B, "L1"),
                object(3, 0x6E, "wrong category"),
                object(4, 0x01, "wrong type"),
                object(4, 0x6E, "L2"),
                object(4, 0xCC, ""),
                object(4, 0xD6, "L3"),
                object(4, 0xE0, "L4"),
            ]),
            caller_selection,
        );
    }

    #[test]
    fn population_filters_candidates_and_restores_matching_rows() {
        let mut window = Window::default();
        let mut caller_selection = vec!["missing".to_owned(), "L3".to_owned(), "L1".to_owned()];

        populate(&mut window, &mut caller_selection);

        assert_eq!(window.candidate_names(), ["L1", "L2", "L3", "L4"]);
        assert_eq!(window.selected_rows(), [true, false, true, false]);
        assert!(!window.ok_enabled());
        assert_eq!(
            caller_selection,
            ["missing".to_owned(), "L3".to_owned(), "L1".to_owned()]
        );
    }

    #[test]
    fn idle_enables_ok_only_after_more_than_one_row_is_selected() {
        let mut window = Window::default();
        let mut caller_selection = Vec::new();
        populate(&mut window, &mut caller_selection);

        let _task = window.update(
            Message::CandidateSelectionChanged {
                index: 0,
                selected: true,
            },
            &mut caller_selection,
        );
        assert!(!window.ok_enabled());
        let _task = window.update(Message::ApplicationIdle, &mut caller_selection);
        assert!(!window.ok_enabled());
        let _task = window.update(
            Message::CandidateSelectionChanged {
                index: 3,
                selected: true,
            },
            &mut caller_selection,
        );
        assert!(!window.ok_enabled());
        let _task = window.update(Message::ApplicationIdle, &mut caller_selection);

        assert!(window.ok_enabled());
    }

    #[test]
    fn accept_replaces_the_caller_list_in_candidate_order() {
        let mut window = Window::default();
        let mut caller_selection = vec!["old".to_owned()];
        populate(&mut window, &mut caller_selection);
        let _task = window.update(
            Message::CandidateSelectionChanged {
                index: 3,
                selected: true,
            },
            &mut caller_selection,
        );
        let _task = window.update(
            Message::CandidateSelectionChanged {
                index: 1,
                selected: true,
            },
            &mut caller_selection,
        );

        let _task = window.update(Message::Accept, &mut caller_selection);

        assert_eq!(caller_selection, ["L2".to_owned(), "L4".to_owned()]);
        assert!(window.accepted());
        assert!(!window.cancelled());
    }

    #[test]
    fn direct_accept_does_not_repeat_the_idle_selection_gate() {
        let mut window = Window::default();
        let mut caller_selection = vec!["old".to_owned()];
        populate(&mut window, &mut caller_selection);
        let _task = window.update(
            Message::CandidateSelectionChanged {
                index: 2,
                selected: true,
            },
            &mut caller_selection,
        );
        assert!(!window.ok_enabled());

        let _task = window.update(Message::Accept, &mut caller_selection);

        assert_eq!(caller_selection, ["L3".to_owned()]);
        assert!(window.accepted());
    }

    #[test]
    fn cancel_keeps_the_caller_owned_list_unchanged() {
        let mut window = Window::default();
        let mut caller_selection = vec!["L2".to_owned(), "legacy".to_owned()];
        populate(&mut window, &mut caller_selection);
        let original = caller_selection.clone();
        let _task = window.update(
            Message::CandidateSelectionChanged {
                index: 0,
                selected: true,
            },
            &mut caller_selection,
        );

        let _task = window.update(Message::Cancel, &mut caller_selection);

        assert_eq!(caller_selection, original);
        assert!(window.cancelled());
        assert!(!window.accepted());
    }
}
