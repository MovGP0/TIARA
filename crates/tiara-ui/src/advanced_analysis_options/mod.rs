use std::fmt;
use std::path::{Path, PathBuf};

use iced::widget::{button, checkbox, column, container, row, text, text_input};
use iced::{Element, Length, Task};

pub const TITLE: &str = "Advanced Options";
pub const FORM_RESOURCE: &str = "AnaloptVHDLAdvanced";
pub const HELP_CONTEXT: u32 = 0x49c;

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct AdvancedOptions {
    pub rollback_enabled: bool,
    pub rollback_subdivision: u32,
    pub library_search_list: String,
    pub arduino_path: PathBuf,
    pub atmel_studio_path: PathBuf,
}

pub trait ArduinoToolchainValidator {
    fn is_valid_arduino_root(&mut self, path: &Path) -> bool;
}

pub trait AtmelStudioPathAdapter {
    fn detect_atmel_studio_path(&mut self) -> Option<PathBuf>;
    fn remember_atmel_studio_path(&mut self, path: &Path);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ArduinoOptimizationAvailability {
    Available,
    Unavailable,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ValidationError {
    InvalidSubdivision(String),
    InvalidArduinoPath(PathBuf),
    External(String),
}

impl fmt::Display for ValidationError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::InvalidSubdivision(value) => {
                write!(
                    formatter,
                    "Rollback subdivision {value} must be an integer of at least one."
                )
            }
            Self::InvalidArduinoPath(path) => {
                write!(
                    formatter,
                    "{} is not an Arduino AVR toolchain root.",
                    path.display()
                )
            }
            Self::External(message) => formatter.write_str(message),
        }
    }
}

impl std::error::Error for ValidationError {}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    LibrarySearchChanged(String),
    RollbackToggled(bool),
    SubdivisionChanged(String),
    Accept,
    Cancel,
    ManageLibraries,
}

#[derive(Debug)]
pub struct Window {
    original: AdvancedOptions,
    working: AdvancedOptions,
    rollback_subdivision_text: String,
    subdivision_enabled: bool,
    first_error: Option<ValidationError>,
    close_blocked_once: bool,
    modal_result: Option<u8>,
    manager_open: bool,
    manager_generation: u64,
    help_context: u32,
    arduino_optimization_availability: ArduinoOptimizationAvailability,
}

impl Window {
    #[must_use]
    pub fn new(options: AdvancedOptions) -> Self {
        Self {
            rollback_subdivision_text: options.rollback_subdivision.to_string(),
            subdivision_enabled: options.rollback_enabled,
            original: options.clone(),
            working: options,
            first_error: None,
            close_blocked_once: false,
            modal_result: None,
            manager_open: false,
            manager_generation: 0,
            help_context: 0,
            arduino_optimization_availability: ArduinoOptimizationAvailability::Available,
        }
    }

    /// Sets the recovered help context for the advanced-options form.
    ///
    /// Reimplements Ghidra function `FUN_014ef3f0` at `0x014EF3F0`.
    pub const fn form_create(&mut self) {
        self.help_context = HELP_CONTEXT;
    }

    /// Synchronizes staged values before the advanced-options form is shown.
    ///
    /// Reimplements Ghidra function `FUN_014eec50` at `0x014EEC50`. iced reads
    /// most controls directly from `working`; this method synchronizes the one
    /// derived rollback editor, disables the unavailable Arduino optimization,
    /// and detects an Atmel Studio path only when its staged value is empty.
    pub fn form_show(&mut self, host: &mut impl AtmelStudioPathAdapter) {
        self.rollback_subdivision_text = self.working.rollback_subdivision.to_string();
        self.synchronize_rollback_editor();
        self.arduino_optimization_availability = ArduinoOptimizationAvailability::Unavailable;
        if self.working.atmel_studio_path.as_os_str().is_empty()
            && let Some(path) = host
                .detect_atmel_studio_path()
                .filter(|path| !path.as_os_str().is_empty())
        {
            host.remember_atmel_studio_path(&path);
            self.working.atmel_studio_path = path;
        }
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::LibrarySearchChanged(value) => self.working.library_search_list = value,
            Message::RollbackToggled(enabled) => self.rollback_clicked(enabled),
            Message::SubdivisionChanged(value) => self.rollback_subdivision_text = value,
            Message::Accept => self.capture_controls(),
            Message::Cancel => self.cancel(),
            Message::ManageLibraries => self.open_library_manager(),
        }
        Task::none()
    }

    /// Opens a fresh modal library-manager instance.
    ///
    /// Reimplements Ghidra function `FUN_014ef000` at `0x014EF000`. Every
    /// request creates a new manager generation. Closing it discards only the
    /// manager instance; library actions are not rolled back by this dialog.
    pub const fn open_library_manager(&mut self) {
        self.manager_generation = self.manager_generation.saturating_add(1);
        self.manager_open = true;
    }

    pub const fn close_library_manager(&mut self) {
        self.manager_open = false;
    }

    /// Validates controls and copies them to the dialog-local working record.
    ///
    /// Reimplements Ghidra function `FUN_014ef040` at `0x014EF040`. A valid OK
    /// accepts the modal window. An error leaves the caller-owned record and
    /// working subdivision unchanged and activates the first-error close guard.
    pub fn capture_controls(&mut self) {
        let subdivision = match self.rollback_subdivision_text.parse::<u32>() {
            Ok(value) if value >= 1 => value,
            _ => {
                self.report_first_error(ValidationError::InvalidSubdivision(
                    self.rollback_subdivision_text.clone(),
                ));
                return;
            }
        };
        if self.first_error.is_some() {
            return;
        }
        self.working.rollback_subdivision = subdivision;
        self.modal_result = Some(1);
    }

    /// Rejects one close request after a validation error and clears the guard.
    ///
    /// Reimplements Ghidra function `FUN_014ef3d0` at `0x014EF3D0`.
    #[must_use]
    pub fn query_close(&mut self) -> bool {
        let allowed = !self.close_blocked_once;
        self.close_blocked_once = false;
        if !allowed {
            self.first_error = None;
        }
        allowed
    }

    /// Stores only the first validation error and blocks one close request.
    ///
    /// Reimplements Ghidra function `FUN_014ef410` at `0x014EF410`.
    pub fn report_first_error(&mut self, error: ValidationError) {
        if self.first_error.is_none() {
            self.first_error = Some(error);
            self.close_blocked_once = true;
            self.modal_result = None;
        }
    }

    /// Synchronizes the subdivision editor with staged rollback state.
    ///
    /// Reimplements Ghidra function `FUN_014ef470` at `0x014EF470`.
    pub const fn synchronize_rollback_editor(&mut self) {
        self.subdivision_enabled = self.working.rollback_enabled;
    }

    /// Applies a rollback checkbox click without changing the subdivision.
    ///
    /// Reimplements Ghidra function `FUN_014ef4b0` at `0x014EF4B0`.
    pub const fn rollback_clicked(&mut self, enabled: bool) {
        self.working.rollback_enabled = enabled;
        self.synchronize_rollback_editor();
    }

    /// Routes an integer-editor error to the shared first-error guard.
    ///
    /// Reimplements Ghidra function `FUN_014ef4c0` at `0x014EF4C0`.
    pub fn subdivision_error(&mut self, message: String) {
        self.report_first_error(ValidationError::External(message));
    }

    /// Selects and validates an Arduino AVR toolchain root.
    ///
    /// Reimplements Ghidra function `FUN_014ef4e0` at `0x014EF4E0`. Cancel is
    /// a no-op. An invalid selection keeps the prior edit value and reports an
    /// error without setting the form close guard.
    ///
    /// # Errors
    ///
    /// Returns [`ValidationError::InvalidArduinoPath`] when the adapter rejects
    /// the selected folder.
    pub fn select_arduino_path(
        &mut self,
        selected: Option<PathBuf>,
        validator: &mut impl ArduinoToolchainValidator,
    ) -> Result<(), ValidationError> {
        let Some(selected) = selected else {
            return Ok(());
        };
        if !validator.is_valid_arduino_root(&selected) {
            return Err(ValidationError::InvalidArduinoPath(selected));
        }
        self.working.arduino_path = selected;
        Ok(())
    }

    /// Selects an Atmel Studio root without validating its contents.
    ///
    /// Reimplements Ghidra function `FUN_014ef670` at `0x014EF670`. Cancel is
    /// a no-op and an equal selected path leaves the same staged value.
    pub fn select_atmel_studio_path(&mut self, selected: Option<PathBuf>) {
        if let Some(selected) = selected {
            self.working.atmel_studio_path = selected;
        }
    }

    /// Copies accepted dialog-local values to the caller-owned record.
    pub fn commit_to(&self, caller: &mut AdvancedOptions) -> bool {
        if self.modal_result != Some(1) {
            return false;
        }
        caller.clone_from(&self.working);
        true
    }

    pub fn cancel(&mut self) {
        self.working.clone_from(&self.original);
        self.rollback_subdivision_text = self.original.rollback_subdivision.to_string();
        self.synchronize_rollback_editor();
        self.modal_result = None;
        self.first_error = None;
        self.close_blocked_once = false;
    }

    #[must_use]
    pub const fn working(&self) -> &AdvancedOptions {
        &self.working
    }
    #[must_use]
    pub const fn subdivision_enabled(&self) -> bool {
        self.subdivision_enabled
    }
    #[must_use]
    pub const fn first_error(&self) -> Option<&ValidationError> {
        self.first_error.as_ref()
    }
    #[must_use]
    pub const fn modal_result(&self) -> Option<u8> {
        self.modal_result
    }
    #[must_use]
    pub const fn manager_generation(&self) -> u64 {
        self.manager_generation
    }

    #[must_use]
    pub const fn help_context(&self) -> u32 {
        self.help_context
    }

    #[must_use]
    pub const fn arduino_optimization_available(&self) -> bool {
        matches!(
            self.arduino_optimization_availability,
            ArduinoOptimizationAvailability::Available
        )
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let content = column![
            text(TITLE).size(18),
            text_input("Library search list", &self.working.library_search_list)
                .on_input(Message::LibrarySearchChanged),
            checkbox("Enable rollback", self.working.rollback_enabled)
                .on_toggle(Message::RollbackToggled),
            text_input("Subdivision", &self.rollback_subdivision_text)
                .on_input(Message::SubdivisionChanged),
            text(format!("Arduino: {}", self.working.arduino_path.display())),
            text(format!(
                "Atmel Studio: {}",
                self.working.atmel_studio_path.display()
            )),
            row![
                button("Manage Libraries...").on_press(Message::ManageLibraries),
                button("OK").on_press(Message::Accept),
                button("Cancel").on_press(Message::Cancel),
            ]
            .spacing(8),
            text(
                self.first_error
                    .as_ref()
                    .map_or_else(String::new, ToString::to_string)
            ),
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

    struct Validator(bool);
    impl ArduinoToolchainValidator for Validator {
        fn is_valid_arduino_root(&mut self, _path: &Path) -> bool {
            self.0
        }
    }

    #[derive(Default)]
    struct AtmelPaths {
        detected: Option<PathBuf>,
        remembered: Vec<PathBuf>,
    }

    impl AtmelStudioPathAdapter for AtmelPaths {
        fn detect_atmel_studio_path(&mut self) -> Option<PathBuf> {
            self.detected.clone()
        }

        fn remember_atmel_studio_path(&mut self, path: &Path) {
            self.remembered.push(path.to_path_buf());
        }
    }

    fn options() -> AdvancedOptions {
        AdvancedOptions {
            rollback_enabled: true,
            rollback_subdivision: 10,
            library_search_list: "work".to_owned(),
            arduino_path: PathBuf::from("old-arduino"),
            atmel_studio_path: PathBuf::from("old-atmel"),
        }
    }

    #[test]
    fn create_and_show_apply_help_rollback_and_missing_atmel_defaults() {
        let mut source = options();
        source.atmel_studio_path = PathBuf::new();
        let mut window = Window::new(source);
        let mut paths = AtmelPaths {
            detected: Some(PathBuf::from("detected-atmel")),
            remembered: Vec::new(),
        };

        window.form_create();
        window.form_show(&mut paths);

        assert_eq!(window.help_context(), HELP_CONTEXT);
        assert!(window.subdivision_enabled());
        assert!(!window.arduino_optimization_available());
        assert_eq!(
            window.working().atmel_studio_path,
            PathBuf::from("detected-atmel")
        );
        assert_eq!(paths.remembered, [PathBuf::from("detected-atmel")]);
    }

    #[test]
    fn show_preserves_existing_atmel_path_without_detection() {
        let mut window = Window::new(options());
        let mut paths = AtmelPaths {
            detected: Some(PathBuf::from("detected-atmel")),
            remembered: Vec::new(),
        };

        window.form_show(&mut paths);

        assert_eq!(
            window.working().atmel_studio_path,
            PathBuf::from("old-atmel")
        );
        assert!(paths.remembered.is_empty());
    }

    #[test]
    fn rollback_toggle_changes_enabled_state_but_preserves_value() {
        let mut window = Window::new(options());
        window.rollback_clicked(false);
        assert!(!window.subdivision_enabled());
        assert_eq!(window.working().rollback_subdivision, 10);
    }

    #[test]
    fn invalid_subdivision_sets_first_error_and_rejects_one_close() {
        let mut window = Window::new(options());
        window.rollback_subdivision_text = "0".to_owned();
        window.capture_controls();
        window.subdivision_error("later".to_owned());
        assert!(matches!(
            window.first_error(),
            Some(ValidationError::InvalidSubdivision(_))
        ));
        assert!(!window.query_close());
        assert!(window.query_close());
    }

    #[test]
    fn valid_accept_commits_transaction_while_cancel_restores_original() {
        let original = options();
        let mut caller = original.clone();
        let mut window = Window::new(original.clone());
        window.rollback_clicked(false);
        window.rollback_subdivision_text = "25".to_owned();
        window.capture_controls();
        assert!(window.commit_to(&mut caller));
        assert!(!caller.rollback_enabled);
        assert_eq!(caller.rollback_subdivision, 25);
        window.cancel();
        assert_eq!(window.working(), &original);
    }

    #[test]
    fn toolchain_selection_validates_only_arduino_and_cancel_is_noop() -> Result<(), ValidationError>
    {
        let mut window = Window::new(options());
        let mut invalid = Validator(false);
        assert!(
            window
                .select_arduino_path(Some(PathBuf::from("bad")), &mut invalid)
                .is_err()
        );
        assert_eq!(window.working().arduino_path, PathBuf::from("old-arduino"));
        let mut valid = Validator(true);
        window.select_arduino_path(Some(PathBuf::from("new-arduino")), &mut valid)?;
        window.select_atmel_studio_path(Some(PathBuf::from("any-folder")));
        assert_eq!(window.working().arduino_path, PathBuf::from("new-arduino"));
        assert_eq!(
            window.working().atmel_studio_path,
            PathBuf::from("any-folder")
        );
        Ok(())
    }

    #[test]
    fn each_manage_libraries_click_creates_a_fresh_generation() {
        let mut window = Window::new(options());
        window.open_library_manager();
        window.close_library_manager();
        window.open_library_manager();
        assert_eq!(window.manager_generation(), 2);
    }
}
