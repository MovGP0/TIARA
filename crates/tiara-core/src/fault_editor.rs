use std::fmt;

pub const RESET_SELECTOR_CODE: i32 = 4;

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct FaultMetadata {
    pub group_one_names: Vec<String>,
    pub group_two_names: Vec<String>,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct FaultChoices {
    pub group_one: Vec<i32>,
    pub group_two: Vec<i32>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct FaultEditorState {
    metadata: FaultMetadata,
    staged_choices: FaultChoices,
    row_names: Vec<String>,
}

impl FaultEditorState {
    /// Creates dialog-local fault choices from the caller-owned values.
    ///
    /// # Errors
    ///
    /// Returns [`FaultEditorError::ChoiceCountMismatch`] when either value
    /// group does not match the corresponding metadata-name group.
    pub fn new(
        metadata: FaultMetadata,
        caller_choices: &FaultChoices,
    ) -> Result<Self, FaultEditorError> {
        if metadata.group_one_names.len() != caller_choices.group_one.len()
            || metadata.group_two_names.len() != caller_choices.group_two.len()
        {
            return Err(FaultEditorError::ChoiceCountMismatch);
        }

        let mut state = Self {
            metadata,
            staged_choices: caller_choices.clone(),
            row_names: Vec::new(),
        };
        state.rebuild_row_names();
        Ok(state)
    }

    #[must_use]
    pub const fn staged_choices(&self) -> &FaultChoices {
        &self.staged_choices
    }

    #[must_use]
    pub fn row_names(&self) -> &[String] {
        &self.row_names
    }

    /// Reimplements Ghidra function `FUN_013f9a20` at `0x013F9A20`.
    ///
    /// The recovered helper clears the row-name list, then appends all names
    /// from metadata group 1 followed by all names from metadata group 2. It
    /// does not read or change staged choices or caller-owned values.
    pub fn rebuild_row_names(&mut self) {
        self.row_names.clear();
        self.row_names
            .extend(self.metadata.group_one_names.iter().cloned());
        self.row_names
            .extend(self.metadata.group_two_names.iter().cloned());
    }

    /// Reimplements the list-state part of Ghidra function `FUN_013fa0f0` at
    /// `0x013FA0F0`.
    ///
    /// The recovered Reset handler replaces both dialog-owned lists with one
    /// selector code `4` for each metadata name. It does not change the
    /// caller-owned lists.
    pub fn reset_staged_choices(&mut self) {
        self.staged_choices = FaultChoices {
            group_one: vec![RESET_SELECTOR_CODE; self.metadata.group_one_names.len()],
            group_two: vec![RESET_SELECTOR_CODE; self.metadata.group_two_names.len()],
        };
        self.rebuild_row_names();
    }

    /// Changes one staged row without changing caller-owned values.
    ///
    /// # Errors
    ///
    /// Returns [`FaultEditorError::RowOutOfRange`] when `row` is not an active
    /// metadata row.
    pub fn set_staged_choice(
        &mut self,
        row: usize,
        selector_code: i32,
    ) -> Result<(), FaultEditorError> {
        if row < self.staged_choices.group_one.len() {
            self.staged_choices.group_one[row] = selector_code;
            return Ok(());
        }

        let group_two_row = row.saturating_sub(self.staged_choices.group_one.len());
        let Some(choice) = self.staged_choices.group_two.get_mut(group_two_row) else {
            return Err(FaultEditorError::RowOutOfRange);
        };
        *choice = selector_code;
        Ok(())
    }

    #[must_use]
    pub fn staged_choice(&self, row: usize) -> Option<i32> {
        self.staged_choices
            .group_one
            .get(row)
            .or_else(|| {
                self.staged_choices
                    .group_two
                    .get(row.saturating_sub(self.staged_choices.group_one.len()))
            })
            .copied()
    }

    /// Replaces caller-owned values with value copies of both staged groups.
    ///
    /// This is the standard-library `Vec::clone_from` mapping for the two
    /// recovered clear-and-copy operations in `FUN_013fa050` at `0x013FA050`.
    /// Group 1 is replaced before group 2, as in the recovered function.
    pub fn commit_to(&self, caller_choices: &mut FaultChoices) {
        caller_choices
            .group_one
            .clone_from(&self.staged_choices.group_one);
        caller_choices
            .group_two
            .clone_from(&self.staged_choices.group_two);
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum FaultEditorError {
    ChoiceCountMismatch,
    RowOutOfRange,
}

impl fmt::Display for FaultEditorError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::ChoiceCountMismatch => {
                "Each fault metadata name must have one caller-owned selector value."
            }
            Self::RowOutOfRange => "The selected fault row does not exist.",
        })
    }
}

impl std::error::Error for FaultEditorError {}

#[cfg(test)]
mod tests {
    use super::*;

    fn state() -> Result<FaultEditorState, FaultEditorError> {
        FaultEditorState::new(
            FaultMetadata {
                group_one_names: vec!["G1 A".to_owned(), "G1 B".to_owned()],
                group_two_names: vec!["G2 A".to_owned()],
            },
            &FaultChoices {
                group_one: vec![0, 1],
                group_two: vec![2],
            },
        )
    }

    #[test]
    fn row_names_are_rebuilt_in_group_order_without_changing_choices()
    -> Result<(), FaultEditorError> {
        let mut state = state()?;
        let choices = state.staged_choices().clone();

        state.rebuild_row_names();

        assert_eq!(state.row_names(), ["G1 A", "G1 B", "G2 A"]);
        assert_eq!(state.staged_choices(), &choices);
        Ok(())
    }

    #[test]
    fn reset_replaces_only_staged_values_with_code_four() -> Result<(), FaultEditorError> {
        let caller_choices = FaultChoices {
            group_one: vec![0, 1],
            group_two: vec![2],
        };
        let mut state = FaultEditorState::new(
            FaultMetadata {
                group_one_names: vec!["G1 A".to_owned(), "G1 B".to_owned()],
                group_two_names: vec!["G2 A".to_owned()],
            },
            &caller_choices,
        )?;

        state.reset_staged_choices();

        assert_eq!(
            state.staged_choices(),
            &FaultChoices {
                group_one: vec![RESET_SELECTOR_CODE, RESET_SELECTOR_CODE],
                group_two: vec![RESET_SELECTOR_CODE],
            }
        );
        assert_eq!(caller_choices.group_one, [0, 1]);
        assert_eq!(caller_choices.group_two, [2]);
        Ok(())
    }

    #[test]
    fn staged_row_index_crosses_the_group_boundary() -> Result<(), FaultEditorError> {
        let mut state = state()?;

        state.set_staged_choice(2, 3)?;

        assert_eq!(state.staged_choice(2), Some(3));
        assert_eq!(state.staged_choices().group_one, [0, 1]);
        Ok(())
    }

    #[test]
    fn commit_replaces_both_caller_groups() -> Result<(), FaultEditorError> {
        let mut state = state()?;
        state.set_staged_choice(0, 4)?;
        let mut caller_choices = FaultChoices {
            group_one: vec![9, 9, 9],
            group_two: vec![8, 8],
        };

        state.commit_to(&mut caller_choices);

        assert_eq!(caller_choices.group_one, [4, 1]);
        assert_eq!(caller_choices.group_two, [2]);
        Ok(())
    }

    #[test]
    fn mismatched_metadata_and_values_are_rejected() {
        let result = FaultEditorState::new(
            FaultMetadata {
                group_one_names: vec!["G1 A".to_owned()],
                group_two_names: Vec::new(),
            },
            &FaultChoices::default(),
        );

        assert_eq!(result, Err(FaultEditorError::ChoiceCountMismatch));
    }
}
