//! Typed external boundaries for `ShapeEdit`.

use std::path::{Path, PathBuf};

use super::core::{Device, NativeColor, ObjectId, ShapeObject};

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum UnsavedDecision {
    Proceed,
    Cancel,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum DuplicateDecision {
    Overwrite,
    Alternate(String),
    Stop,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct FontChoice {
    pub family: String,
    pub size_points: u16,
    pub bold: bool,
    pub italic: bool,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ColorChoice {
    pub color: NativeColor,
    pub custom_colors: Vec<NativeColor>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ClipboardPayload {
    pub application_format: Vec<u8>,
    pub secondary_format: Vec<u8>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SynchronizationValues(pub [i32; 4]);

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PinPropertyUpdate {
    pub id: ObjectId,
    pub name: String,
    pub attributes: Vec<(String, String)>,
}

pub trait ShapeFilePort {
    /// Selects a `ShapeEdit` file to open.
    ///
    /// # Errors
    ///
    /// Returns an error when the file picker cannot complete.
    fn choose_open(&mut self) -> Result<Option<PathBuf>, String>;

    /// Selects a `ShapeEdit` file to save.
    ///
    /// # Errors
    ///
    /// Returns an error when the file picker cannot complete.
    fn choose_save(&mut self, current: &Path) -> Result<Option<PathBuf>, String>;

    /// Reads opaque file bytes.
    ///
    /// # Errors
    ///
    /// Returns an error when the selected file cannot be read completely.
    fn read(&mut self, path: &Path) -> Result<Vec<u8>, String>;

    /// Writes opaque file bytes.
    ///
    /// # Errors
    ///
    /// Returns an error when the selected file cannot be written completely.
    fn write(&mut self, path: &Path, bytes: &[u8]) -> Result<(), String>;
}

pub trait ShapeCodec {
    /// Decodes a `ShapeEdit` library from opaque bytes.
    ///
    /// # Errors
    ///
    /// Returns an error when the bytes are malformed or unsupported.
    fn decode(&self, bytes: &[u8]) -> Result<Vec<Device>, String>;

    /// Encodes a `ShapeEdit` library to opaque bytes.
    ///
    /// # Errors
    ///
    /// Returns an error when the library cannot be represented.
    fn encode(&self, devices: &[Device]) -> Result<Vec<u8>, String>;
}

pub trait ShapeClipboardPort {
    /// Publishes both recovered `ShapeEdit` clipboard formats.
    ///
    /// # Errors
    ///
    /// Returns an error when the clipboard cannot accept the complete payload.
    fn write(&mut self, payload: ClipboardPayload) -> Result<(), String>;

    /// Reads the supported application clipboard format when available.
    ///
    /// # Errors
    ///
    /// Returns an error when clipboard access or handle acquisition fails.
    fn read(&mut self) -> Result<Option<Vec<u8>>, String>;
}

pub trait ShapeImportPort {
    /// Selects and loads source-library devices for import.
    ///
    /// # Errors
    ///
    /// Returns an error when selection or source loading fails.
    fn select_source(&mut self) -> Result<Option<Vec<Device>>, String>;

    /// Selects the source device indexes to import.
    ///
    /// # Errors
    ///
    /// Returns an error when the import dialog cannot complete.
    fn select_devices(&mut self, devices: &[Device]) -> Result<Option<Vec<usize>>, String>;

    /// Resolves a duplicate device name.
    ///
    /// # Errors
    ///
    /// Returns an error when the duplicate prompt cannot complete.
    fn resolve_duplicate(&mut self, name: &str) -> Result<DuplicateDecision, String>;
}

pub trait ShapeHelpPort {
    /// Opens the `ShapeEdit` About dialog modally.
    ///
    /// # Errors
    ///
    /// Returns an error when the dialog cannot be opened.
    fn open_about(&mut self) -> Result<(), String>;

    /// Opens the `ShapeEdit` help contents.
    ///
    /// # Errors
    ///
    /// Returns an error when the help system cannot open the path and command.
    fn open_contents(&mut self, relative_path: &Path, command: u32) -> Result<(), String>;
}

pub trait ShapeColorPort {
    /// Selects a native color and returns the updated custom-color set.
    ///
    /// # Errors
    ///
    /// Returns an error when the color dialog cannot complete.
    fn choose_color(
        &mut self,
        current: NativeColor,
        custom_colors: &[NativeColor],
    ) -> Result<Option<ColorChoice>, String>;
}

pub trait ShapeFontPort {
    /// Selects a font from the current `ShapeEdit` font.
    ///
    /// # Errors
    ///
    /// Returns an error when the font dialog cannot complete.
    fn choose_font(&mut self, current: &FontChoice) -> Result<Option<FontChoice>, String>;
}

pub trait ShapeWizardPort {
    /// Produces IC body and pin objects after wizard acceptance.
    ///
    /// # Errors
    ///
    /// Returns an error when the IC Wizard cannot complete.
    fn create_ic_objects(&mut self) -> Result<Option<Vec<ShapeObject>>, String>;

    /// Edits selected pin properties and returns accepted updates.
    ///
    /// # Errors
    ///
    /// Returns an error when the pin-properties dialog cannot complete.
    fn edit_pin_properties(
        &mut self,
        pins: &[ShapeObject],
    ) -> Result<Option<Vec<PinPropertyUpdate>>, String>;

    /// Edits the order of the supplied pins.
    ///
    /// # Errors
    ///
    /// Returns an error when the pin-order dialog cannot complete.
    fn edit_pin_order(&mut self, pins: &[ShapeObject]) -> Result<Option<Vec<ObjectId>>, String>;

    /// Edits the recovered four synchronization values.
    ///
    /// # Errors
    ///
    /// Returns an error when the synchronization dialog cannot complete.
    fn synchronize(&mut self, device: &Device) -> Result<Option<SynchronizationValues>, String>;
}

pub trait ShapeHostPort {
    /// Applies the unsaved-change guard for a destructive session command.
    ///
    /// # Errors
    ///
    /// Returns an error when the guard cannot resolve a decision.
    fn guard_unsaved(&mut self) -> Result<UnsavedDecision, String>;

    /// Validates the current `ShapeEdit` device.
    ///
    /// # Errors
    ///
    /// Returns the recovered validation failure without committing state.
    fn validate_device(&mut self, device: Option<&Device>) -> Result<(), String>;

    /// Requests the host window close workflow.
    ///
    /// # Errors
    ///
    /// Returns an error when the host cannot request the close.
    fn request_close(&mut self) -> Result<(), String>;

    /// Commits the accepted embedded device.
    ///
    /// # Errors
    ///
    /// Returns an error when the host cannot update the owning library.
    fn commit_embedded(&mut self, device: Option<&Device>) -> Result<(), String>;

    /// Edits one selected object's class-specific attributes.
    ///
    /// # Errors
    ///
    /// Returns an error when the object's attribute editor cannot complete.
    fn edit_attributes(&mut self, object: &ShapeObject) -> Result<Option<ShapeObject>, String>;

    /// Applies the recovered synchronization values to a device.
    ///
    /// # Errors
    ///
    /// Returns an error when the synchronization update cannot complete.
    fn apply_synchronization(
        &mut self,
        device_index: usize,
        values: &SynchronizationValues,
    ) -> Result<(), String>;
}
