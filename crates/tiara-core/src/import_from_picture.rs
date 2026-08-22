//! JSON transformations recovered from the Import From Picture workflow.

use serde_json::{Map, Value};
use std::fmt;
use std::path::{Path, PathBuf};

pub const LIBRARY_EVALUATION: &str = "serde_json is the maintained workspace mapping for lossless unknown-field preservation, JSON cloning, schema inspection, and serialization; std::fs supplies the recovered direct file reads and result write. Typed schema errors replace unchecked Delphi JSON casts without changing successful data transformations.";

pub const TRAINING_SYMBOL_DIRECTORY: &str =
    r"C:\Attila\Devel Files\Projects\Python\tesstrain\Symbols JPG";

pub const TRAINING_SYMBOLS: &[(u8, &str)] = &[
    (5, "voltmet"),
    (6, "ampmet"),
    (7, "wattmet"),
    (8, "resmet"),
    (9, "res"),
    (10, "cap"),
    (11, "ind"),
    (13, "csource"),
    (14, "vsource"),
    (15, "cgen"),
    (16, "vgen"),
    (21, "opamp"),
    (23, "diode"),
    (24, "btnpn"),
    (25, "btpnp"),
    (26, "enmos"),
    (27, "epmos"),
    (28, "dnmos"),
    (29, "dpmos"),
    (30, "njfet"),
    (31, "pjfet"),
];

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum WorkflowStage {
    #[default]
    Loaded,
    WiresRemoved,
    AutoRouted,
    Scaled,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PreparedCircuit {
    pub adjusted_json_path: PathBuf,
    pub referenced_circuit_path: PathBuf,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct WorkspaceLogs {
    pub importer: Vec<String>,
    pub router: Vec<String>,
}

pub trait ImportBackend {
    /// Creates the adjusted JSON copy and resolves its referenced circuit.
    ///
    /// # Errors
    ///
    /// Returns an error when the selected JSON cannot be prepared.
    fn prepare_json(&mut self, selected_path: &Path) -> Result<PreparedCircuit, String>;

    /// Writes the active circuit JSON and the internal graph JSON.
    ///
    /// # Errors
    ///
    /// Returns an error when the active circuit cannot be enumerated or written.
    fn export_active_circuit(
        &mut self,
        target_path: &Path,
        graph_path: &Path,
    ) -> Result<(), String>;

    /// Replaces the working circuit and routing objects from JSON.
    ///
    /// # Errors
    ///
    /// Returns an error when conversion or routing fails.
    fn rebuild_workspace(
        &mut self,
        json_path: &Path,
        converted_circuit_path: &Path,
    ) -> Result<WorkspaceLogs, String>;

    /// Unlinks the `AutoRouter` wire set from the active circuit.
    ///
    /// # Errors
    ///
    /// Returns an error when no routing workspace exists or removal fails.
    fn remove_router_wires(&mut self) -> Result<(), String>;

    /// Refreshes the main design surface after workspace replacement.
    ///
    /// # Errors
    ///
    /// Returns an error when the application cannot refresh the design surface.
    fn refresh_design(&mut self) -> Result<(), String>;
}

pub trait TrainingSymbolRenderer {
    /// Creates one initialized training symbol schematic and writes its JPEG.
    ///
    /// # Errors
    ///
    /// Returns an error when the symbol cannot be constructed or rendered.
    fn render_symbol(&mut self, component_code: u8, target_path: &Path) -> Result<(), String>;
}

pub trait SettingStore {
    fn read_string(&self, section: &str, name: &str) -> Option<String>;
    fn read_integer(&self, section: &str, name: &str, default: i32) -> i32;

    /// Persists one string setting.
    ///
    /// # Errors
    ///
    /// Returns an error when the setting cannot be written.
    fn write_string(&mut self, section: &str, name: &str, value: &str) -> Result<(), String>;

    /// Persists one integer setting.
    ///
    /// # Errors
    ///
    /// Returns an error when the setting cannot be written.
    fn write_integer(&mut self, section: &str, name: &str, value: i32) -> Result<(), String>;
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct FileDialogConfiguration {
    pub initial_directory: Option<PathBuf>,
    pub filter: &'static str,
    pub default_extension: &'static str,
    pub filter_index: i32,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct FileDialogSelection {
    pub path: PathBuf,
    pub initial_directory: PathBuf,
    pub filter_index: i32,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct ExternalImportSelection {
    pub picture_path: Option<PathBuf>,
    pub picture_display_name: String,
    pub netlist_path: Option<PathBuf>,
    pub netlist_display_name: String,
}

impl ExternalImportSelection {
    /// Ports Ghidra `FUN_01a2cbe0` at `0x01A2CBE0`.
    ///
    /// Returns the recovered CIR dialog configuration. A canceled selection
    /// preserves all prior state. An accepted selection stores the full path,
    /// displays its final component, and immediately persists `CIRFileName`.
    ///
    /// # Errors
    ///
    /// Returns an error when the accepted path cannot be persisted.
    pub fn select_netlist(
        &mut self,
        selection: Option<FileDialogSelection>,
        settings: &mut impl SettingStore,
    ) -> Result<FileDialogConfiguration, String> {
        let configuration = FileDialogConfiguration {
            initial_directory: settings
                .read_string("ImportPicExt", "InitialDir")
                .map(PathBuf::from),
            filter: "Spice netlist file (cir)|*.cir",
            default_extension: "cir",
            filter_index: 1,
        };

        if let Some(selection) = selection {
            self.netlist_display_name = display_name(&selection.path);
            self.netlist_path = Some(selection.path.clone());
            settings.write_string(
                "ImportPicExt",
                "CIRFileName",
                &selection.path.to_string_lossy(),
            )?;
        }

        Ok(configuration)
    }

    /// Ports Ghidra `FUN_01a2ce30` at `0x01A2CE30`.
    ///
    /// Returns the recovered PNG/JPEG dialog configuration. A canceled
    /// selection preserves prior state and writes no setting. An accepted
    /// selection stores the full path, displays its final component, and
    /// immediately persists the chooser state and `PicFileName`.
    ///
    /// # Errors
    ///
    /// Returns an error when an accepted chooser setting cannot be persisted.
    pub fn select_picture(
        &mut self,
        selection: Option<FileDialogSelection>,
        settings: &mut impl SettingStore,
    ) -> Result<FileDialogConfiguration, String> {
        let configuration = FileDialogConfiguration {
            initial_directory: settings
                .read_string("ImportPicExt", "InitialDir")
                .map(PathBuf::from),
            filter: "PNG file (png)|*.png|JPEG file (jpg)|*.jpg",
            default_extension: "png",
            filter_index: settings.read_integer("ImportPicExt", "FilterIndex", 1),
        };

        if let Some(selection) = selection {
            self.picture_display_name = display_name(&selection.path);
            self.picture_path = Some(selection.path.clone());
            settings.write_string(
                "ImportPicExt",
                "InitialDir",
                &selection.initial_directory.to_string_lossy(),
            )?;
            settings.write_integer("ImportPicExt", "FilterIndex", selection.filter_index)?;
            settings.write_string(
                "ImportPicExt",
                "PicFileName",
                &selection.path.to_string_lossy(),
            )?;
        }

        Ok(configuration)
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ImportFromPictureWorkflow {
    session_root: PathBuf,
    current_circuit_path: PathBuf,
    selected_json_path: Option<PathBuf>,
    status_lines: Vec<String>,
    stage: WorkflowStage,
    conversion_sequence: u32,
}

impl ImportFromPictureWorkflow {
    #[must_use]
    pub const fn new(session_root: PathBuf, current_circuit_path: PathBuf) -> Self {
        Self {
            session_root,
            current_circuit_path,
            selected_json_path: None,
            status_lines: Vec::new(),
            stage: WorkflowStage::Loaded,
            conversion_sequence: 0,
        }
    }

    #[must_use]
    pub const fn stage(&self) -> WorkflowStage {
        self.stage
    }

    #[must_use]
    pub fn status_lines(&self) -> &[String] {
        &self.status_lines
    }

    #[must_use]
    pub fn selected_json_path(&self) -> Option<&Path> {
        self.selected_json_path.as_deref()
    }

    #[must_use]
    pub fn current_circuit_path(&self) -> &Path {
        &self.current_circuit_path
    }

    /// Ports Ghidra `FUN_01a2a8d0` at `0x01A2A8D0`.
    pub fn append_status_lines(&mut self, lines: impl IntoIterator<Item = String>) {
        self.status_lines.extend(lines);
    }

    /// Ports Ghidra `FUN_01a2a900` at `0x01A2A900`.
    pub fn append_status_line(&mut self, line: impl Into<String>) {
        self.status_lines.push(line.into());
    }

    /// Ports Ghidra `FUN_01a2a1c0` at `0x01A2A1C0`.
    ///
    /// Clears the status transcript and remembered JSON path before the
    /// selection result. Cancel therefore keeps the old backend workspace but
    /// leaves these two fields clear. An accepted path is remembered before
    /// preparation and validation.
    ///
    /// # Errors
    ///
    /// Returns an error from JSON preparation, workspace conversion, routing,
    /// or design refresh. State already applied before an error is retained.
    pub fn load_json(
        &mut self,
        selected_path: Option<PathBuf>,
        backend: &mut impl ImportBackend,
    ) -> Result<bool, ImportWorkflowError> {
        self.status_lines.clear();
        self.selected_json_path = None;
        let Some(selected_path) = selected_path else {
            return Ok(false);
        };

        self.selected_json_path = Some(selected_path.clone());
        let prepared = backend
            .prepare_json(&selected_path)
            .map_err(ImportWorkflowError::Backend)?;
        let logs = self.rebuild_workspace(
            &prepared.adjusted_json_path,
            Some(&prepared.referenced_circuit_path),
            backend,
        )?;
        self.append_status_lines(logs.importer);
        self.append_status_lines(logs.router);
        self.append_status_line("");
        Ok(true)
    }

    /// Ports Ghidra `FUN_01a2abe0` at `0x01A2ABE0`.
    ///
    /// Assigns a numbered converted circuit path before backend conversion and
    /// keeps that assignment if conversion fails. An empty JSON path skips
    /// replacement but still refreshes the design.
    ///
    /// # Errors
    ///
    /// Returns an error from workspace replacement or design refresh.
    pub fn rebuild_workspace(
        &mut self,
        json_path: &Path,
        referenced_circuit_path: Option<&Path>,
        backend: &mut impl ImportBackend,
    ) -> Result<WorkspaceLogs, ImportWorkflowError> {
        if json_path.as_os_str().is_empty() {
            backend
                .refresh_design()
                .map_err(ImportWorkflowError::Backend)?;
            return Ok(WorkspaceLogs::default());
        }

        self.conversion_sequence = self.conversion_sequence.saturating_add(1);
        let source_name = referenced_circuit_path
            .and_then(Path::file_stem)
            .or_else(|| self.current_circuit_path.file_stem())
            .and_then(|name| name.to_str())
            .unwrap_or("temp");
        let base = referenced_circuit_path
            .and_then(Path::parent)
            .filter(|path| !path.as_os_str().is_empty())
            .unwrap_or(&self.session_root);
        let converted = base.join(format!(
            "{source_name}_conv_{}.tsc",
            self.conversion_sequence
        ));
        self.current_circuit_path.clone_from(&converted);
        let logs = backend
            .rebuild_workspace(json_path, &converted)
            .map_err(ImportWorkflowError::Backend)?;
        backend
            .refresh_design()
            .map_err(ImportWorkflowError::Backend)?;
        Ok(logs)
    }

    /// Ports Ghidra `FUN_01a2b4d0` at `0x01A2B4D0` and delegates the shared
    /// exporter recovered at `FUN_01a2b2d0` (`0x01A2B2D0`).
    ///
    /// # Errors
    ///
    /// Returns an error when circuit enumeration or either JSON write fails.
    pub fn save_active_circuit(
        &self,
        backend: &mut impl ImportBackend,
    ) -> Result<PathBuf, ImportWorkflowError> {
        let target = self.session_temp_path("%s-json-saved.json");
        self.export_active_circuit_to(&target, backend)?;
        Ok(target)
    }

    /// Ports Ghidra `FUN_01a2b5d0` at `0x01A2B5D0`.
    ///
    /// Saves the pre-removal snapshot unless stage 1 is already active. A
    /// backend removal error leaves the stage unchanged.
    ///
    /// # Errors
    ///
    /// Returns an error when snapshot export or `AutoRouter` removal fails.
    pub fn remove_wires(
        &mut self,
        backend: &mut impl ImportBackend,
    ) -> Result<(), ImportWorkflowError> {
        if self.stage != WorkflowStage::WiresRemoved {
            let backup = self.session_temp_path("%s-json-wires-save.json");
            self.export_active_circuit_to(&backup, backend)?;
        }
        backend
            .remove_router_wires()
            .map_err(ImportWorkflowError::Backend)?;
        self.stage = WorkflowStage::WiresRemoved;
        backend
            .refresh_design()
            .map_err(ImportWorkflowError::Backend)
    }

    /// Ports Ghidra `FUN_01a2b7d0` at `0x01A2B7D0`.
    ///
    /// Exports the current circuit, restores the saved wires and graph when
    /// stage 1 is active, rebuilds the workspace, appends conversion logs and
    /// a separator, then records stage 2.
    ///
    /// # Errors
    ///
    /// Returns an error from export, JSON merge, conversion, routing, or
    /// design refresh. Earlier file and path changes are not rolled back.
    pub fn autoroute(
        &mut self,
        backend: &mut impl ImportBackend,
    ) -> Result<PathBuf, ImportWorkflowError> {
        let current = self.session_temp_path("%s-json-saved.json");
        self.export_active_circuit_to(&current, backend)?;
        let selected = if self.stage == WorkflowStage::WiresRemoved {
            let backup = self.session_temp_path("%s-json-wires-save.json");
            let result = self.session_temp_path("%s-json-res.json");
            merge_backup_components(&current, &backup, &result)?;
            result
        } else {
            current.clone()
        };
        let logs = self.rebuild_workspace(&selected, None, backend)?;
        self.append_status_lines(logs.importer);
        self.append_status_lines(logs.router);
        self.append_status_line("");
        self.stage = WorkflowStage::AutoRouted;
        Ok(selected)
    }

    /// Ports Ghidra `FUN_01a2ba80` at `0x01A2BA80`.
    ///
    /// Returns `Ok(None)` when Load JSON has not supplied a source path. On a
    /// loaded source, prepares a normalized copy, scales its circuit, writes
    /// `scaled_circuit.json`, rebuilds the workspace, replaces the status with
    /// route output and a separator, and records stage 3.
    ///
    /// # Errors
    ///
    /// Returns an error from JSON preparation, parsing, scaling, writing,
    /// conversion, routing, or design refresh.
    pub fn scale_loaded_circuit(
        &mut self,
        factor: f64,
        backend: &mut impl ImportBackend,
    ) -> Result<Option<PathBuf>, ImportWorkflowError> {
        let Some(selected) = self.selected_json_path.clone() else {
            return Ok(None);
        };
        let prepared = backend
            .prepare_json(&selected)
            .map_err(ImportWorkflowError::Backend)?;
        let mut root: Value =
            serde_json::from_slice(&std::fs::read(&prepared.adjusted_json_path)?)?;
        let circuit = root
            .get_mut("circuit")
            .ok_or_else(|| JsonTransformError::schema("circuit"))?;
        scale_circuit_coordinates(circuit, factor)?;
        let scaled = self
            .session_root
            .join("VhdlSession0")
            .join("Temp")
            .join("scaled_circuit.json");
        std::fs::write(&scaled, serde_json::to_vec(&root)?)?;
        let logs =
            self.rebuild_workspace(&scaled, Some(&prepared.referenced_circuit_path), backend)?;
        self.status_lines.clear();
        self.append_status_lines(logs.router);
        self.append_status_line("");
        self.stage = WorkflowStage::Scaled;
        Ok(Some(scaled))
    }

    /// Ports Ghidra `FUN_01a2bd30` at `0x01A2BD30` and invokes the fixed
    /// exporter recovered at `FUN_01a2c180` (`0x01A2C180`).
    ///
    /// # Errors
    ///
    /// Returns an error when any symbol schematic cannot be rendered.
    pub fn run_training_export(
        &self,
        renderer: &mut impl TrainingSymbolRenderer,
    ) -> Result<&'static str, ImportWorkflowError> {
        export_training_symbols(Path::new(TRAINING_SYMBOL_DIRECTORY), renderer)?;
        Ok("Symbols saved")
    }

    /// Ports Ghidra `FUN_01a2a060` at `0x01A2A060`.
    #[must_use]
    pub fn session_temp_path(&self, template: &str) -> PathBuf {
        build_session_temp_path(&self.session_root, &self.current_circuit_path, template)
    }

    /// Ports the circuit JSON coordinator at Ghidra `FUN_01a2b2d0`
    /// (`0x01A2B2D0`).
    fn export_active_circuit_to(
        &self,
        target: &Path,
        backend: &mut impl ImportBackend,
    ) -> Result<(), ImportWorkflowError> {
        let graph = self.session_root.join("VhdlSession0").join("graph.json");
        backend
            .export_active_circuit(target, &graph)
            .map_err(ImportWorkflowError::Backend)
    }
}

/// Ports Ghidra `FUN_01a2a060` at `0x01A2A060`.
#[must_use]
pub fn build_session_temp_path(
    session_root: &Path,
    current_circuit_path: &Path,
    template: &str,
) -> PathBuf {
    let stem = current_circuit_path
        .file_stem()
        .and_then(|stem| stem.to_str())
        .unwrap_or_default();
    session_root
        .join("VhdlSession0")
        .join("Temp")
        .join(template.replace("%s", stem))
}

/// Ports Ghidra `FUN_01a2c180` at `0x01A2C180`.
///
/// Does not create the target directory or roll back JPEG files when a later
/// symbol fails.
///
/// # Errors
///
/// Returns the first renderer error and leaves earlier files in place.
pub fn export_training_symbols(
    directory: &Path,
    renderer: &mut impl TrainingSymbolRenderer,
) -> Result<(), ImportWorkflowError> {
    for &(component_code, name) in TRAINING_SYMBOLS {
        renderer
            .render_symbol(component_code, &directory.join(format!("{name}.jpg")))
            .map_err(ImportWorkflowError::Backend)?;
    }
    Ok(())
}

fn display_name(path: &Path) -> String {
    path.file_name()
        .map(|name| name.to_string_lossy().into_owned())
        .unwrap_or_default()
}

/// Ports Ghidra `FUN_01480530` at `0x01480530`.
///
/// Rebuilds `components`, scales component positions and eligible pin
/// coordinates, and leaves `graph`, `wires`, and unknown fields unchanged.
/// A missing or non-array `components` member is the recovered no-op path.
///
/// # Errors
///
/// Returns a schema error when a component position or an eligible pin does
/// not contain integer `x` and `y` coordinates.
pub fn scale_circuit_coordinates(
    circuit: &mut Value,
    factor: f64,
) -> Result<(), JsonTransformError> {
    let Some(components) = circuit.get("components").and_then(Value::as_array) else {
        return Ok(());
    };

    let mut scaled_components = components.clone();
    for (component_index, component) in scaled_components.iter_mut().enumerate() {
        let component = component
            .as_object_mut()
            .ok_or_else(|| JsonTransformError::schema(format!("components[{component_index}]")))?;
        let position_path = format!("components[{component_index}].position");
        let position = object_member_mut(component, "position", &position_path)?;
        scale_pair(position, factor, &position_path)?;

        let Some(pins) = component.get_mut("pins") else {
            continue;
        };
        let pins = pins.as_array_mut().ok_or_else(|| {
            JsonTransformError::schema(format!("components[{component_index}].pins"))
        })?;
        for (pin_index, pin) in pins.iter_mut().enumerate() {
            let Some(pin) = pin.as_object_mut() else {
                return Err(JsonTransformError::schema(format!(
                    "components[{component_index}].pins[{pin_index}]"
                )));
            };
            if !pin.contains_key("x") {
                continue;
            }
            let pin_path = format!("components[{component_index}].pins[{pin_index}]");
            scale_pair(pin, factor, &pin_path)?;
        }
    }

    let circuit = circuit
        .as_object_mut()
        .ok_or_else(|| JsonTransformError::schema("circuit"))?;
    circuit.insert("components".to_owned(), Value::Array(scaled_components));
    if let Some(graph) = circuit.remove("graph") {
        circuit.insert("graph".to_owned(), graph);
    }
    Ok(())
}

/// Ports Ghidra `FUN_01480910` at `0x01480910`.
///
/// Uses the backup document as the result base, replaces only its
/// `circuit.components` with a clone from the current export, and reattaches
/// the backup's own optional graph. Wires and all unknown fields stay sourced
/// from the backup.
///
/// # Errors
///
/// Returns an I/O, JSON parse/serialization, or required-schema error. The
/// result file is not opened until both inputs parse and merge successfully.
pub fn merge_backup_components(
    current_export_path: &Path,
    backup_path: &Path,
    result_path: &Path,
) -> Result<(), JsonTransformError> {
    let current_bytes = std::fs::read(current_export_path)?;
    let backup_bytes = std::fs::read(backup_path)?;
    let current: Value = serde_json::from_slice(&current_bytes)?;
    let mut backup: Value = serde_json::from_slice(&backup_bytes)?;
    merge_backup_components_value(&current, &mut backup)?;
    let result = serde_json::to_vec(&backup)?;
    std::fs::write(result_path, result)?;
    Ok(())
}

fn merge_backup_components_value(
    current: &Value,
    backup: &mut Value,
) -> Result<(), JsonTransformError> {
    let components = current
        .get("circuit")
        .and_then(|circuit| circuit.get("components"))
        .and_then(Value::as_array)
        .ok_or_else(|| JsonTransformError::schema("current.circuit.components"))?
        .clone();
    let backup_circuit = backup
        .get_mut("circuit")
        .and_then(Value::as_object_mut)
        .ok_or_else(|| JsonTransformError::schema("backup.circuit"))?;
    backup_circuit.insert("components".to_owned(), Value::Array(components));
    if let Some(graph) = backup_circuit.remove("graph") {
        backup_circuit.insert("graph".to_owned(), graph);
    }
    Ok(())
}

fn object_member_mut<'a>(
    object: &'a mut Map<String, Value>,
    member: &str,
    path: &str,
) -> Result<&'a mut Map<String, Value>, JsonTransformError> {
    object
        .get_mut(member)
        .and_then(Value::as_object_mut)
        .ok_or_else(|| JsonTransformError::schema(path))
}

fn scale_pair(
    coordinates: &mut Map<String, Value>,
    factor: f64,
    path: &str,
) -> Result<(), JsonTransformError> {
    let x = coordinate(coordinates, "x", path)?;
    let y = coordinate(coordinates, "y", path)?;
    coordinates.insert("x".to_owned(), Value::from(scale_integer(x, factor)));
    coordinates.insert("y".to_owned(), Value::from(scale_integer(y, factor)));
    Ok(())
}

fn coordinate(
    coordinates: &Map<String, Value>,
    member: &str,
    path: &str,
) -> Result<i32, JsonTransformError> {
    let value = coordinates
        .get(member)
        .and_then(Value::as_i64)
        .and_then(|value| i32::try_from(value).ok())
        .ok_or_else(|| JsonTransformError::schema(format!("{path}.{member}")))?;
    Ok(value)
}

fn scale_integer(value: i32, factor: f64) -> i32 {
    let scaled = f64::from(value) * factor;
    if scaled.is_nan() {
        0
    } else if scaled >= f64::from(i32::MAX) {
        i32::MAX
    } else if scaled <= f64::from(i32::MIN) {
        i32::MIN
    } else {
        scaled.trunc().to_string().parse::<i32>().unwrap_or(0)
    }
}

#[derive(Debug)]
pub enum ImportWorkflowError {
    Backend(String),
    Transform(JsonTransformError),
}

impl fmt::Display for ImportWorkflowError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::Backend(error) => formatter.write_str(error),
            Self::Transform(error) => error.fmt(formatter),
        }
    }
}

impl std::error::Error for ImportWorkflowError {}

impl From<JsonTransformError> for ImportWorkflowError {
    fn from(value: JsonTransformError) -> Self {
        Self::Transform(value)
    }
}

impl From<std::io::Error> for ImportWorkflowError {
    fn from(value: std::io::Error) -> Self {
        Self::Transform(JsonTransformError::Io(value))
    }
}

impl From<serde_json::Error> for ImportWorkflowError {
    fn from(value: serde_json::Error) -> Self {
        Self::Transform(JsonTransformError::Json(value))
    }
}

#[derive(Debug)]
pub enum JsonTransformError {
    Io(std::io::Error),
    Json(serde_json::Error),
    Schema(String),
}

impl JsonTransformError {
    fn schema(path: impl Into<String>) -> Self {
        Self::Schema(path.into())
    }
}

impl fmt::Display for JsonTransformError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::Io(error) => error.fmt(formatter),
            Self::Json(error) => error.fmt(formatter),
            Self::Schema(path) => write!(formatter, "invalid circuit JSON at {path}"),
        }
    }
}

impl std::error::Error for JsonTransformError {}

impl From<std::io::Error> for JsonTransformError {
    fn from(value: std::io::Error) -> Self {
        Self::Io(value)
    }
}

impl From<serde_json::Error> for JsonTransformError {
    fn from(value: serde_json::Error) -> Self {
        Self::Json(value)
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use serde_json::json;
    use std::collections::HashMap;

    #[test]
    fn scaler_changes_positions_and_only_pins_that_contain_x() {
        let graph = json!({"nodes": [{"x": 90, "y": 80}]});
        let wires = json!([{"x": 70, "y": 60}]);
        let mut circuit = json!({
            "components": [{
                "label": "R1",
                "position": {"x": 10, "y": -5, "angle": 90},
                "pins": [
                    {"x": 2, "y": 3, "name": "1"},
                    {"y": 8, "name": "unplaced"}
                ]
            }],
            "graph": graph,
            "wires": wires,
            "custom": true
        });

        scale_circuit_coordinates(&mut circuit, 1.5).expect("scale");

        assert_eq!(circuit["components"][0]["position"]["x"], 15);
        assert_eq!(circuit["components"][0]["position"]["y"], -7);
        assert_eq!(circuit["components"][0]["position"]["angle"], 90);
        assert_eq!(circuit["components"][0]["pins"][0]["x"], 3);
        assert_eq!(circuit["components"][0]["pins"][0]["y"], 4);
        assert_eq!(circuit["components"][0]["pins"][1]["y"], 8);
        assert_eq!(circuit["graph"], graph);
        assert_eq!(circuit["wires"], wires);
        assert_eq!(circuit["custom"], true);
    }

    #[test]
    fn scaler_accepts_zero_and_negative_factors_and_truncates_toward_zero() {
        let mut negative = json!({
            "components": [{"position": {"x": 3, "y": -3}}]
        });
        scale_circuit_coordinates(&mut negative, -0.5).expect("negative scale");
        assert_eq!(
            negative["components"][0]["position"],
            json!({"x": -1, "y": 1})
        );

        let mut zero = json!({
            "components": [{"position": {"x": 3, "y": -3}}]
        });
        scale_circuit_coordinates(&mut zero, 0.0).expect("zero scale");
        assert_eq!(zero["components"][0]["position"], json!({"x": 0, "y": 0}));
    }

    #[test]
    fn missing_or_non_array_components_is_a_noop() {
        for mut circuit in [json!({"graph": {"kept": true}}), json!({"components": {}})] {
            let before = circuit.clone();
            scale_circuit_coordinates(&mut circuit, 2.0).expect("no-op");
            assert_eq!(circuit, before);
        }
    }

    #[test]
    fn scaler_reports_eligible_pin_schema_error_without_replacing_components() {
        let mut circuit = json!({
            "components": [{
                "position": {"x": 1, "y": 2},
                "pins": [{"x": 3}]
            }]
        });
        let before = circuit.clone();
        let error = scale_circuit_coordinates(&mut circuit, 2.0).expect_err("missing pin y");
        assert!(error.to_string().contains("pins[0].y"));
        assert_eq!(circuit, before);
    }

    #[test]
    fn merge_uses_backup_as_base_and_replaces_only_components() {
        let current = json!({
            "fresh": true,
            "circuit": {
                "components": [{"label": "new"}],
                "graph": {"source": "current"},
                "wires": ["current"]
            }
        });
        let mut backup = json!({
            "backup": true,
            "circuit": {
                "components": [{"label": "old"}],
                "graph": {"source": "backup"},
                "wires": ["backup"],
                "other": 7
            }
        });

        merge_backup_components_value(&current, &mut backup).expect("merge");

        assert_eq!(backup["backup"], true);
        assert_eq!(backup["circuit"]["components"], json!([{"label": "new"}]));
        assert_eq!(backup["circuit"]["graph"], json!({"source": "backup"}));
        assert_eq!(backup["circuit"]["wires"], json!(["backup"]));
        assert_eq!(backup["circuit"]["other"], 7);
        assert!(backup.get("fresh").is_none());
    }

    #[test]
    fn merge_accepts_backup_without_graph() {
        let current = json!({"circuit": {"components": [1, 2]}});
        let mut backup = json!({"circuit": {"components": [], "wires": [3]}});
        merge_backup_components_value(&current, &mut backup).expect("merge without graph");
        assert_eq!(
            backup,
            json!({"circuit": {"components": [1, 2], "wires": [3]}})
        );
    }

    #[test]
    fn file_merge_writes_result_only_after_both_inputs_are_valid() {
        let folder = std::env::current_dir()
            .expect("current directory")
            .join(".temp")
            .join(format!("import_picture_{}", std::process::id()));
        std::fs::create_dir_all(&folder).expect("temporary directory");
        let current_path = folder.join("current.json");
        let backup_path = folder.join("backup.json");
        let result_path = folder.join("result.json");
        std::fs::write(&current_path, r#"{"circuit":{"components":[{"id":2}]}}"#)
            .expect("current JSON");
        std::fs::write(
            &backup_path,
            r#"{"circuit":{"components":[{"id":1}],"wires":[9]}}"#,
        )
        .expect("backup JSON");

        merge_backup_components(&current_path, &backup_path, &result_path).expect("file merge");
        let result: Value =
            serde_json::from_slice(&std::fs::read(&result_path).expect("result JSON bytes"))
                .expect("result JSON");
        assert_eq!(result["circuit"]["components"][0]["id"], 2);
        assert_eq!(result["circuit"]["wires"], json!([9]));

        std::fs::write(&backup_path, "invalid").expect("invalid backup");
        std::fs::write(&result_path, "sentinel").expect("sentinel result");
        assert!(merge_backup_components(&current_path, &backup_path, &result_path).is_err());
        assert_eq!(
            std::fs::read_to_string(&result_path).expect("sentinel"),
            "sentinel"
        );
        std::fs::remove_dir_all(&folder).expect("temporary cleanup");
    }

    #[test]
    fn session_path_uses_current_circuit_stem_and_status_append_preserves_order() {
        let mut workflow = ImportFromPictureWorkflow::new(
            PathBuf::from(r"C:\session"),
            PathBuf::from(r"C:\circuits\example.tsc"),
        );

        assert_eq!(
            workflow.session_temp_path("%s-json-saved.json"),
            PathBuf::from(r"C:\session")
                .join("VhdlSession0")
                .join("Temp")
                .join("example-json-saved.json")
        );
        workflow.append_status_lines(["one".to_owned(), "two".to_owned()]);
        workflow.append_status_line("");
        assert_eq!(workflow.status_lines(), ["one", "two", ""]);
    }

    #[test]
    fn load_cancel_clears_path_and_status_but_does_not_call_backend() {
        let mut workflow =
            ImportFromPictureWorkflow::new(PathBuf::from("session"), PathBuf::from("circuit.tsc"));
        workflow.selected_json_path = Some(PathBuf::from("old.json"));
        workflow.status_lines.push("old".to_owned());
        let mut backend = Backend::default();

        assert!(!workflow.load_json(None, &mut backend).expect("cancel"));
        assert!(workflow.selected_json_path().is_none());
        assert!(workflow.status_lines().is_empty());
        assert!(backend.prepared.is_empty());
        assert!(backend.rebuilt.is_empty());
    }

    #[test]
    fn load_remembers_path_before_conversion_and_appends_both_log_sets() {
        let folder = temporary_folder("load");
        let input = folder.join("input.json");
        std::fs::write(&input, r#"{"circuit":{"components":[]}}"#).expect("input");
        let mut workflow =
            ImportFromPictureWorkflow::new(folder.clone(), folder.join("original.tsc"));
        let mut backend = Backend::default();

        assert!(
            workflow
                .load_json(Some(input.clone()), &mut backend)
                .expect("load")
        );
        assert_eq!(workflow.selected_json_path(), Some(input.as_path()));
        assert_eq!(workflow.status_lines(), ["imported", "routed", ""]);
        assert!(
            workflow
                .current_circuit_path()
                .ends_with("source_conv_1.tsc")
        );
        assert_eq!(backend.refreshed, 1);
        std::fs::remove_dir_all(folder).expect("temporary cleanup");
    }

    #[test]
    fn remove_then_autoroute_merges_current_components_with_saved_wires() {
        let folder = temporary_folder("autoroute");
        let mut workflow =
            ImportFromPictureWorkflow::new(folder.clone(), folder.join("example.tsc"));
        let mut backend = Backend::default();

        workflow.remove_wires(&mut backend).expect("remove wires");
        assert_eq!(workflow.stage(), WorkflowStage::WiresRemoved);
        assert_eq!(backend.removed, 1);

        let result_path = workflow.autoroute(&mut backend).expect("autoroute");
        let result: Value =
            serde_json::from_slice(&std::fs::read(&result_path).expect("merged result bytes"))
                .expect("merged result JSON");
        assert_eq!(result["circuit"]["components"][0]["id"], 2);
        assert_eq!(result["circuit"]["wires"], json!([1]));
        assert_eq!(result["circuit"]["graph"], json!({"saved": 1}));
        assert_eq!(workflow.stage(), WorkflowStage::AutoRouted);
        assert_eq!(workflow.status_lines(), ["imported", "routed", ""]);
        std::fs::remove_dir_all(folder).expect("temporary cleanup");
    }

    #[test]
    fn scale_requires_a_loaded_path_then_writes_scaled_json_and_stage_three() {
        let folder = temporary_folder("scale");
        let input = folder.join("input.json");
        std::fs::write(
            &input,
            r#"{"circuit":{"components":[{"position":{"x":3,"y":-3}}]}}"#,
        )
        .expect("input");
        let mut workflow =
            ImportFromPictureWorkflow::new(folder.clone(), folder.join("example.tsc"));
        let mut backend = Backend::default();
        std::fs::create_dir_all(folder.join("VhdlSession0").join("Temp"))
            .expect("session temporary folder");
        assert!(
            workflow
                .scale_loaded_circuit(2.0, &mut backend)
                .expect("missing input")
                .is_none()
        );

        workflow.selected_json_path = Some(input);
        let scaled = workflow
            .scale_loaded_circuit(0.5, &mut backend)
            .expect("scale")
            .expect("scaled path");
        let root: Value = serde_json::from_slice(&std::fs::read(scaled).expect("scaled bytes"))
            .expect("scaled JSON");
        assert_eq!(
            root["circuit"]["components"][0]["position"],
            json!({"x": 1, "y": -1})
        );
        assert_eq!(workflow.stage(), WorkflowStage::Scaled);
        assert_eq!(workflow.status_lines(), ["routed", ""]);
        std::fs::remove_dir_all(folder).expect("temporary cleanup");
    }

    #[test]
    fn training_export_uses_all_recovered_codes_and_names() {
        let mut renderer = Renderer::default();
        export_training_symbols(Path::new("symbols"), &mut renderer).expect("render symbols");

        assert_eq!(renderer.outputs.len(), 21);
        assert_eq!(
            renderer.outputs[0],
            (5, PathBuf::from("symbols/voltmet.jpg"))
        );
        assert_eq!(
            renderer.outputs[20],
            (31, PathBuf::from("symbols/pjfet.jpg"))
        );
    }

    #[test]
    fn external_picker_cancel_preserves_state_and_accept_persists_recovered_values() {
        let mut settings = Settings::default();
        settings.strings.insert(
            ("ImportPicExt".to_owned(), "InitialDir".to_owned()),
            r"C:\images".to_owned(),
        );
        settings
            .integers
            .insert(("ImportPicExt".to_owned(), "FilterIndex".to_owned()), 2);
        let mut selection = ExternalImportSelection::default();

        let picture_config = selection
            .select_picture(None, &mut settings)
            .expect("picture cancel");
        assert_eq!(picture_config.filter_index, 2);
        assert!(selection.picture_path.is_none());
        assert!(settings.writes.is_empty());

        selection
            .select_picture(
                Some(FileDialogSelection {
                    path: PathBuf::from(r"C:\images\board.png"),
                    initial_directory: PathBuf::from(r"C:\images"),
                    filter_index: 1,
                }),
                &mut settings,
            )
            .expect("picture selection");
        selection
            .select_netlist(
                Some(FileDialogSelection {
                    path: PathBuf::from(r"C:\circuits\board.cir"),
                    initial_directory: PathBuf::from(r"C:\circuits"),
                    filter_index: 1,
                }),
                &mut settings,
            )
            .expect("netlist selection");

        assert_eq!(selection.picture_display_name, "board.png");
        assert_eq!(selection.netlist_display_name, "board.cir");
        assert!(settings.writes.iter().any(|write| write == "PicFileName"));
        assert!(settings.writes.iter().any(|write| write == "CIRFileName"));
    }

    #[derive(Default)]
    struct Backend {
        prepared: Vec<PathBuf>,
        exported: usize,
        rebuilt: Vec<PathBuf>,
        removed: usize,
        refreshed: usize,
    }

    impl ImportBackend for Backend {
        fn prepare_json(&mut self, selected_path: &Path) -> Result<PreparedCircuit, String> {
            self.prepared.push(selected_path.to_path_buf());
            Ok(PreparedCircuit {
                adjusted_json_path: selected_path.to_path_buf(),
                referenced_circuit_path: selected_path.with_file_name("source.tsc"),
            })
        }

        fn export_active_circuit(
            &mut self,
            target_path: &Path,
            graph_path: &Path,
        ) -> Result<(), String> {
            self.exported += 1;
            if let Some(parent) = target_path.parent() {
                std::fs::create_dir_all(parent).map_err(|error| error.to_string())?;
            }
            if let Some(parent) = graph_path.parent() {
                std::fs::create_dir_all(parent).map_err(|error| error.to_string())?;
            }
            let document = json!({
                "circuit": {
                    "components": [{"id": self.exported}],
                    "graph": {"saved": self.exported},
                    "wires": [self.exported]
                }
            });
            std::fs::write(
                target_path,
                serde_json::to_vec(&document).expect("target JSON"),
            )
            .map_err(|error| error.to_string())?;
            std::fs::write(graph_path, b"{}").map_err(|error| error.to_string())?;
            Ok(())
        }

        fn rebuild_workspace(
            &mut self,
            json_path: &Path,
            converted_circuit_path: &Path,
        ) -> Result<WorkspaceLogs, String> {
            self.rebuilt.push(json_path.to_path_buf());
            self.rebuilt.push(converted_circuit_path.to_path_buf());
            Ok(WorkspaceLogs {
                importer: vec!["imported".to_owned()],
                router: vec!["routed".to_owned()],
            })
        }

        fn remove_router_wires(&mut self) -> Result<(), String> {
            self.removed += 1;
            Ok(())
        }

        fn refresh_design(&mut self) -> Result<(), String> {
            self.refreshed += 1;
            Ok(())
        }
    }

    #[derive(Default)]
    struct Renderer {
        outputs: Vec<(u8, PathBuf)>,
    }

    impl TrainingSymbolRenderer for Renderer {
        fn render_symbol(&mut self, component_code: u8, target_path: &Path) -> Result<(), String> {
            self.outputs
                .push((component_code, target_path.to_path_buf()));
            Ok(())
        }
    }

    #[derive(Default)]
    struct Settings {
        strings: HashMap<(String, String), String>,
        integers: HashMap<(String, String), i32>,
        writes: Vec<String>,
    }

    impl SettingStore for Settings {
        fn read_string(&self, section: &str, name: &str) -> Option<String> {
            self.strings
                .get(&(section.to_owned(), name.to_owned()))
                .cloned()
        }

        fn read_integer(&self, section: &str, name: &str, default: i32) -> i32 {
            self.integers
                .get(&(section.to_owned(), name.to_owned()))
                .copied()
                .unwrap_or(default)
        }

        fn write_string(&mut self, section: &str, name: &str, value: &str) -> Result<(), String> {
            self.strings
                .insert((section.to_owned(), name.to_owned()), value.to_owned());
            self.writes.push(name.to_owned());
            Ok(())
        }

        fn write_integer(&mut self, section: &str, name: &str, value: i32) -> Result<(), String> {
            self.integers
                .insert((section.to_owned(), name.to_owned()), value);
            self.writes.push(name.to_owned());
            Ok(())
        }
    }

    fn temporary_folder(name: &str) -> PathBuf {
        let folder = std::env::current_dir()
            .expect("current directory")
            .join(".temp")
            .join(format!("import_picture_{name}_{}", std::process::id()));
        if folder.exists() {
            std::fs::remove_dir_all(&folder).expect("remove previous temporary folder");
        }
        std::fs::create_dir_all(&folder).expect("temporary folder");
        folder
    }
}
