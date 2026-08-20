use std::fmt::{self, Display, Formatter};

use iced::widget::{button, column, container, pick_list, row, scrollable, text};
use iced::{Element, Length, Task};
use tiara_core::hdl_picker::{
    HdlCatalog, PickerLists, PickerTarget, copy_accepted_entry, position_display,
};

pub const TITLE: &str = "HDL Picker";

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CategoryChoice {
    index: usize,
    label: String,
}

impl Display for CategoryChoice {
    fn fmt(&self, formatter: &mut Formatter<'_>) -> fmt::Result {
        formatter.write_str(&self.label)
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum ModalResult {
    #[default]
    None,
    Ok,
    Cancel,
}

#[derive(Debug, Clone)]
pub enum Message {
    CategorySelected(CategoryChoice),
    EntrySelected(usize),
    Ok,
    Cancel,
}

#[derive(Debug)]
pub struct State {
    catalog: HdlCatalog,
    lists: PickerLists,
    categories: Vec<CategoryChoice>,
    selected_visible_index: Option<usize>,
    position_text: String,
    staged_complete_index: Option<usize>,
    modal_result: ModalResult,
}

impl State {
    #[must_use]
    pub fn new(
        all_label: impl Into<String>,
        complete_entries: Vec<String>,
        catalog: HdlCatalog,
    ) -> Self {
        let categories = std::iter::once(all_label.into())
            .chain(catalog.categories.iter().cloned())
            .enumerate()
            .map(|(index, label)| CategoryChoice { index, label })
            .collect();
        let mut state = Self {
            catalog,
            lists: PickerLists::new(complete_entries),
            categories,
            selected_visible_index: None,
            position_text: String::new(),
            staged_complete_index: None,
            modal_result: ModalResult::None,
        };
        state.rebuild_category(0);
        state
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::CategorySelected(category) => {
                self.select_category(category.index);
            }
            Message::EntrySelected(index) => self.select_visible_entry(index),
            Message::Ok => self.click_ok(),
            Message::Cancel => self.modal_result = ModalResult::Cancel,
        }
        Task::none()
    }

    /// Reimplements Ghidra function `FUN_01706a80` at `0x01706A80`.
    pub fn select_category(&mut self, category_index: usize) {
        self.rebuild_category(category_index);
    }

    /// Reimplements Ghidra function `FUN_01706ab0` at `0x01706AB0`.
    pub fn rebuild_category(&mut self, category_index: usize) {
        self.lists.rebuild(category_index, &self.catalog);
        self.selected_visible_index = None;
        self.position_text = position_display(None, self.lists.display_entries.len());
    }

    /// Reimplements Ghidra function `FUN_017067b0` at `0x017067B0`.
    pub fn select_visible_entry(&mut self, visible_index: usize) {
        self.selected_visible_index = Some(visible_index);
        self.position_text = position_display(
            self.selected_visible_index,
            self.lists.display_entries.len(),
        );
    }

    /// Reimplements Ghidra function `FUN_017066d0` at `0x017066D0`.
    pub fn click_ok(&mut self) {
        if !self.lists.display_entries.is_empty() {
            self.staged_complete_index = self
                .selected_visible_index
                .and_then(|index| self.lists.active_entries.get(index))
                .and_then(|entry| {
                    self.lists
                        .complete_entries
                        .iter()
                        .position(|complete| complete == entry)
                });
        }
        self.modal_result = ModalResult::Ok;
    }

    /// Reimplements Ghidra function `FUN_01709150` at `0x01709150`.
    pub fn copy_back(&self, target: &mut PickerTarget) -> i32 {
        copy_accepted_entry(
            target,
            &self.lists.complete_entries,
            matches!(self.modal_result, ModalResult::Ok),
            self.staged_complete_index,
        )
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let selected_category = self.categories.get(self.lists.category_index).cloned();
        let entries = self.lists.display_entries.iter().enumerate().fold(
            column![].spacing(4),
            |entries, (index, entry)| {
                let label = if self.selected_visible_index == Some(index) {
                    format!("> {entry}")
                } else {
                    entry.clone()
                };
                entries.push(
                    button(text(label))
                        .width(Length::Fill)
                        .on_press(Message::EntrySelected(index)),
                )
            },
        );
        container(
            column![
                text(TITLE).size(24),
                row![
                    text("Category:"),
                    pick_list(
                        self.categories.clone(),
                        selected_category,
                        Message::CategorySelected,
                    ),
                ]
                .spacing(8),
                scrollable(entries).height(Length::FillPortion(1)),
                text(&self.position_text),
                row![
                    button("OK").on_press(Message::Ok),
                    button("Cancel").on_press(Message::Cancel),
                ]
                .spacing(8),
            ]
            .spacing(10),
        )
        .padding(16)
        .width(Length::Fill)
        .height(Length::Fill)
        .into()
    }

    #[must_use]
    pub const fn lists(&self) -> &PickerLists {
        &self.lists
    }

    #[must_use]
    pub fn position_text(&self) -> &str {
        &self.position_text
    }

    #[must_use]
    pub const fn staged_complete_index(&self) -> Option<usize> {
        self.staged_complete_index
    }

    #[must_use]
    pub const fn modal_result(&self) -> ModalResult {
        self.modal_result
    }
}

#[cfg(test)]
mod tests {
    use iced::Task;
    use tiara_core::hdl_picker::{CatalogDevice, HdlCatalog, PickerTarget};

    use super::{CategoryChoice, Message, ModalResult, State};

    fn catalog() -> HdlCatalog {
        HdlCatalog::new(
            vec!["Logic".to_owned(), "Unlisted".to_owned()],
            vec![
                CatalogDevice {
                    name: "and2".to_owned(),
                    category_index: 0,
                },
                CatalogDevice {
                    name: "missing".to_owned(),
                    category_index: 1,
                },
            ],
            [("and2".to_owned(), "Two-input AND".to_owned())],
        )
    }

    fn state() -> State {
        State::new("All", vec!["AND2".to_owned(), "RAM".to_owned()], catalog())
    }

    fn discard(task: Task<Message>) {
        drop(task);
    }

    #[test]
    fn category_rebuild_resets_selection_and_position() {
        let mut state = state();
        discard(state.update(Message::EntrySelected(1)));
        assert_eq!(state.position_text(), "2/2");
        discard(state.update(Message::CategorySelected(CategoryChoice {
            index: 1,
            label: "Logic".to_owned(),
        })));
        assert_eq!(state.lists().active_entries, ["AND2"]);
        assert_eq!(state.position_text(), "0/1");
        assert_eq!(state.staged_complete_index(), None);
    }

    #[test]
    fn ok_maps_unpadded_active_name_to_complete_index() {
        let mut state = state();
        discard(state.update(Message::CategorySelected(CategoryChoice {
            index: 1,
            label: "Logic".to_owned(),
        })));
        assert!(state.lists().display_entries[0].contains("Two-input AND"));
        discard(state.update(Message::EntrySelected(0)));
        discard(state.update(Message::Ok));
        assert_eq!(state.modal_result(), ModalResult::Ok);
        assert_eq!(state.staged_complete_index(), Some(0));
    }

    #[test]
    fn ok_with_no_selection_accepts_modal_but_stages_no_index() {
        let mut state = state();
        discard(state.update(Message::Ok));
        assert_eq!(state.modal_result(), ModalResult::Ok);
        assert_eq!(state.staged_complete_index(), None);
    }

    #[test]
    fn catalog_name_absent_from_complete_list_stages_no_index() {
        let mut state = state();
        discard(state.update(Message::CategorySelected(CategoryChoice {
            index: 2,
            label: "Unlisted".to_owned(),
        })));
        discard(state.update(Message::EntrySelected(0)));
        discard(state.update(Message::Ok));
        assert_eq!(state.staged_complete_index(), None);
    }

    #[test]
    fn copy_back_is_transactional_for_cancel_invalid_and_valid_results() {
        let original = PickerTarget {
            selected_entry: "OLD".to_owned(),
            secondary_text: "keep".to_owned(),
            reset_value: 9,
        };
        let mut state = state();
        let mut target = original.clone();
        assert_eq!(state.copy_back(&mut target), -1);
        assert_eq!(target, original);
        discard(state.update(Message::EntrySelected(1)));
        discard(state.update(Message::Ok));
        assert_eq!(state.copy_back(&mut target), 57);
        assert_eq!(target.selected_entry, "RAM");
        assert!(target.secondary_text.is_empty());
        assert_eq!(target.reset_value, 0);
    }
}
