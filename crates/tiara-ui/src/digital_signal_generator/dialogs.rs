//! Iced modal state for Digital Signal Generator load and save choices.
//!
//! The existing `rfd` dependency is the maintained native file-picker mapping.
//! This module returns typed picker requests and completion actions so update
//! tests do not require a live window or filesystem.

use std::path::{Path, PathBuf};

const LEGACY_PATH_BYTES: usize = 0x50;

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct LegacyDialogPath(String);

impl LegacyDialogPath {
    #[must_use]
    pub fn from_path(path: &Path) -> Self {
        let lowercase = path.to_string_lossy().to_ascii_lowercase();
        let mut end = lowercase.len().min(LEGACY_PATH_BYTES);
        while !lowercase.is_char_boundary(end) {
            end -= 1;
        }
        Self(lowercase[..end].to_owned())
    }

    #[must_use]
    pub fn is_empty(&self) -> bool {
        self.0.is_empty()
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PickerKind {
    SaveDefinition,
    SaveSamples,
    LoadDefinition,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum DialogAction {
    OpenSave,
    OpenLoad,
    RequestPicker(PickerKind),
    SaveDefinition(LegacyDialogPath),
    SaveSamples(LegacyDialogPath),
    TransferToTina,
    LoadDefinition(LegacyDialogPath),
    ReloadFromTina,
    CloseSave,
    CloseLoadAndRefresh,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct SaveDialogState {
    pub selected_index: i32,
    pending_picker: Option<PickerKind>,
    remembered_path: Option<LegacyDialogPath>,
}

impl SaveDialogState {
    /// Reimplements Ghidra function `FUN_01509840` at `0x01509840`.
    ///
    /// Index zero requests a `.dsg` path, index one requests a `.dgb` path,
    /// and every other index transfers to Tina generators immediately.
    #[must_use]
    pub const fn accept(&mut self) -> DialogAction {
        let picker = match self.selected_index {
            0 => PickerKind::SaveDefinition,
            1 => PickerKind::SaveSamples,
            _ => return DialogAction::TransferToTina,
        };
        self.pending_picker = Some(picker);
        DialogAction::RequestPicker(picker)
    }

    #[must_use]
    pub fn picker_completed(&mut self, path: Option<PathBuf>) -> DialogAction {
        let Some(picker) = self.pending_picker.take() else {
            return DialogAction::CloseSave;
        };
        let Some(path) = path else {
            return DialogAction::CloseSave;
        };
        let path = LegacyDialogPath::from_path(&path);
        self.remembered_path = Some(path.clone());
        match picker {
            PickerKind::SaveDefinition => DialogAction::SaveDefinition(path),
            PickerKind::SaveSamples => DialogAction::SaveSamples(path),
            PickerKind::LoadDefinition => DialogAction::CloseSave,
        }
    }

    /// Reimplements Ghidra function `FUN_01509c40` at `0x01509C40`.
    ///
    /// Cancel closes the modal state without inspecting or executing a target.
    #[must_use]
    pub const fn cancel() -> DialogAction {
        DialogAction::CloseSave
    }
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct LoadDialogState {
    pub selected_index: i32,
    pending_picker: bool,
    remembered_path: Option<LegacyDialogPath>,
}

impl LoadDialogState {
    /// Reimplements Ghidra function `FUN_0150a2c0` at `0x0150A2C0`.
    ///
    /// Exact index zero requests a `.dsg` file. Every nonzero index reloads the
    /// borrowed target from its current Tina generator immediately.
    #[must_use]
    pub const fn accept(&mut self) -> DialogAction {
        if self.selected_index != 0 {
            return DialogAction::ReloadFromTina;
        }
        self.pending_picker = true;
        DialogAction::RequestPicker(PickerKind::LoadDefinition)
    }

    #[must_use]
    pub fn picker_completed(&mut self, path: Option<PathBuf>) -> DialogAction {
        if !self.pending_picker {
            return DialogAction::CloseLoadAndRefresh;
        }
        self.pending_picker = false;
        let Some(path) = path else {
            return DialogAction::CloseLoadAndRefresh;
        };
        let path = LegacyDialogPath::from_path(&path);
        self.remembered_path = Some(path.clone());
        if path.is_empty() {
            DialogAction::CloseLoadAndRefresh
        } else {
            DialogAction::LoadDefinition(path)
        }
    }

    /// Reimplements Ghidra function `FUN_0150a4d0` at `0x0150A4D0`.
    ///
    /// The dialog itself performs no load on Cancel. Its parent still rebuilds
    /// derived data after this normal modal return.
    #[must_use]
    pub const fn cancel() -> DialogAction {
        DialogAction::CloseLoadAndRefresh
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn save_dispatches_two_picker_targets_and_all_other_indices_to_tina() {
        let mut dialog = SaveDialogState::default();
        assert_eq!(
            dialog.accept(),
            DialogAction::RequestPicker(PickerKind::SaveDefinition)
        );
        dialog.selected_index = 1;
        assert_eq!(
            dialog.accept(),
            DialogAction::RequestPicker(PickerKind::SaveSamples)
        );
        dialog.selected_index = -1;
        assert_eq!(dialog.accept(), DialogAction::TransferToTina);
    }

    #[test]
    fn accepted_path_is_lowercased_bounded_and_stored_before_save_action() {
        let mut dialog = SaveDialogState::default();
        let _ = dialog.accept();
        let path = PathBuf::from(format!("C:/UPPER/{}.DSG", "A".repeat(100)));

        let action = dialog.picker_completed(Some(path));

        let DialogAction::SaveDefinition(path) = action else {
            panic!("expected definition save action");
        };
        assert!(path.0.len() <= LEGACY_PATH_BYTES);
        assert_eq!(path.0, path.0.to_ascii_lowercase());
        assert_eq!(dialog.remembered_path.as_ref(), Some(&path));
    }

    #[test]
    fn nested_picker_cancel_closes_without_a_file_action() {
        let mut dialog = SaveDialogState::default();
        let _ = dialog.accept();

        assert_eq!(dialog.picker_completed(None), DialogAction::CloseSave);
        assert_eq!(dialog.remembered_path, None);
    }

    #[test]
    fn load_uses_only_exact_zero_for_file_and_cancel_still_requests_refresh() {
        let mut dialog = LoadDialogState::default();
        assert_eq!(
            dialog.accept(),
            DialogAction::RequestPicker(PickerKind::LoadDefinition)
        );
        assert_eq!(LoadDialogState::cancel(), DialogAction::CloseLoadAndRefresh);
        dialog.selected_index = -1;
        assert_eq!(dialog.accept(), DialogAction::ReloadFromTina);
    }
}
