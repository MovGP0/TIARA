use iced::widget::{button, column, container, row, scrollable, text, text_input};
use iced::{Element, Length, Task};
use tiara_core::parameter_editor::{
    ParameterEditorError, initialize_extra_attribute_values, replace_extra_attribute_values,
};

pub const TITLE: &str = "Parameters";
pub const FORM_RESOURCE: &str = "ExtraAttrsEditorDlg";

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    ValueChanged { row: usize, value: String },
    Accept,
    Cancel,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ExtraAttributeRow {
    pub name: String,
    pub value: String,
}

#[derive(Debug)]
pub struct Window<'a> {
    caller_entries: &'a mut Vec<String>,
    headers: [String; 2],
    rows: Vec<ExtraAttributeRow>,
    modal_result: Option<u8>,
}

impl<'a> Window<'a> {
    /// Creates the editor with a direct mutable borrow of the caller list.
    ///
    /// Reimplements Ghidra function `FUN_0141d2f0` at `0x0141D2F0`. The
    /// supplied list is not cloned, cleared, copied, or owned by the window.
    /// Cancel therefore leaves it unchanged, while OK mutates this same list.
    ///
    /// # Errors
    ///
    /// Returns a negative-slot error when an existing entry cannot address a
    /// Rust grid row.
    pub fn new(
        caller_entries: &'a mut Vec<String>,
        configured_names: &[String; 4],
    ) -> Result<Self, ParameterEditorError> {
        let mut window = Self {
            caller_entries,
            headers: [String::new(), String::new()],
            rows: Vec::new(),
            modal_result: None,
        };
        window.initialize_grid(configured_names)?;
        Ok(window)
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::ValueChanged { row, value } => {
                if let Some(attribute) = self.rows.get_mut(row) {
                    attribute.value = value;
                }
            }
            Message::Accept => self.accept(),
            Message::Cancel => {}
        }

        Task::none()
    }

    /// Initializes headers, configured names, and caller-owned indexed values.
    ///
    /// Reimplements Ghidra function `FUN_0141d3b0` at `0x0141D3B0`. Four
    /// configured names fill slots zero through three. Empty configured names
    /// receive stable ordinal fallbacks. Existing entries are applied in list
    /// order, so later duplicate slots overwrite earlier cell values. Slot four
    /// is retained without an invented label.
    ///
    /// # Errors
    ///
    /// Returns a negative-slot error for an existing negative numeric key.
    pub fn initialize_grid(
        &mut self,
        configured_names: &[String; 4],
    ) -> Result<(), ParameterEditorError> {
        self.headers = ["Name".to_owned(), "Value".to_owned()];
        let values = initialize_extra_attribute_values(self.caller_entries)?;
        self.rows = values
            .into_iter()
            .enumerate()
            .map(|(slot, value)| ExtraAttributeRow {
                name: configured_names.get(slot).map_or_else(String::new, |name| {
                    if name.is_empty() {
                        format!("Extra attribute {}", slot + 1)
                    } else {
                        name.clone()
                    }
                }),
                value,
            })
            .collect();
        Ok(())
    }

    /// Replaces the borrowed caller list and accepts the modal window.
    ///
    /// Reimplements Ghidra function `FUN_0141d620` at `0x0141D620`. The caller
    /// list is cleared before slots zero through four are read. Nonempty trimmed
    /// values are appended as `slot|value` in ascending order. Unsupported
    /// higher slots are removed. There is no validation, snapshot, or rollback.
    pub fn accept(&mut self) {
        let values = self
            .rows
            .iter()
            .map(|row| row.value.clone())
            .collect::<Vec<_>>();
        replace_extra_attribute_values(self.caller_entries, &values);
        self.modal_result = Some(1);
    }

    #[must_use]
    pub fn caller_entries(&self) -> &[String] {
        self.caller_entries
    }

    #[must_use]
    pub const fn headers(&self) -> &[String; 2] {
        &self.headers
    }

    #[must_use]
    pub fn rows(&self) -> &[ExtraAttributeRow] {
        &self.rows
    }

    #[must_use]
    pub const fn modal_result(&self) -> Option<u8> {
        self.modal_result
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let header = row![text(&self.headers[0]), text(&self.headers[1])].spacing(8);
        let rows = self.rows.iter().enumerate().map(|(row_index, attribute)| {
            row![
                text(&attribute.name).width(Length::FillPortion(2)),
                text_input("Value", &attribute.value)
                    .on_input(move |value| Message::ValueChanged {
                        row: row_index,
                        value,
                    })
                    .width(Length::FillPortion(3)),
            ]
            .spacing(8)
            .into()
        });
        let content = column![
            text(TITLE).size(18),
            header,
            scrollable(column(rows).spacing(8)),
            row![
                button("OK").on_press(Message::Accept),
                button("Cancel").on_press(Message::Cancel),
            ]
            .spacing(8),
        ]
        .spacing(10);

        container(content)
            .padding(16)
            .width(Length::Fill)
            .height(Length::Fill)
            .into()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn configured_names() -> [String; 4] {
        [
            "Model".to_owned(),
            String::new(),
            "Package".to_owned(),
            "Variant".to_owned(),
        ]
    }

    #[test]
    fn initialization_sets_headers_names_fallbacks_and_later_duplicate_values()
    -> Result<(), ParameterEditorError> {
        let mut caller = vec![
            "bad|first".to_owned(),
            "0|second".to_owned(),
            "4|fifth".to_owned(),
        ];

        let window = Window::new(&mut caller, &configured_names())?;

        assert_eq!(window.headers(), &["Name", "Value"]);
        assert_eq!(window.rows()[0].name, "Model");
        assert_eq!(window.rows()[1].name, "Extra attribute 2");
        assert_eq!(window.rows()[0].value, "second");
        assert_eq!(window.rows()[4].name, "");
        assert_eq!(window.rows()[4].value, "fifth");
        Ok(())
    }

    #[test]
    fn accept_mutates_the_same_caller_list_and_normalizes_supported_slots()
    -> Result<(), ParameterEditorError> {
        let mut caller = vec!["0|old".to_owned(), "8|unsupported".to_owned()];
        let caller_address = std::ptr::from_ref(&caller);

        {
            let mut window = Window::new(&mut caller, &configured_names())?;
            assert_eq!(std::ptr::from_ref(&*window.caller_entries), caller_address);
            drop(window.update(Message::ValueChanged {
                row: 0,
                value: " new ".to_owned(),
            }));
            drop(window.update(Message::ValueChanged {
                row: 4,
                value: "fifth".to_owned(),
            }));
            drop(window.update(Message::Accept));

            assert_eq!(window.modal_result(), Some(1));
            assert_eq!(window.caller_entries(), ["0|new", "4|fifth"]);
        }

        assert_eq!(caller, ["0|new", "4|fifth"]);
        Ok(())
    }

    #[test]
    fn blank_values_commit_an_empty_list_and_accept() -> Result<(), ParameterEditorError> {
        let mut caller = vec!["0|old".to_owned()];
        let mut window = Window::new(&mut caller, &configured_names())?;

        drop(window.update(Message::ValueChanged {
            row: 0,
            value: " \t ".to_owned(),
        }));
        window.accept();

        assert!(window.caller_entries().is_empty());
        assert_eq!(window.modal_result(), Some(1));
        Ok(())
    }

    #[test]
    fn cancel_leaves_the_caller_list_unchanged() -> Result<(), ParameterEditorError> {
        let mut caller = vec!["0|old".to_owned()];
        {
            let mut window = Window::new(&mut caller, &configured_names())?;
            drop(window.update(Message::ValueChanged {
                row: 0,
                value: "new".to_owned(),
            }));
            drop(window.update(Message::Cancel));
            assert_eq!(window.modal_result(), None);
        }

        assert_eq!(caller, ["0|old"]);
        Ok(())
    }
}
