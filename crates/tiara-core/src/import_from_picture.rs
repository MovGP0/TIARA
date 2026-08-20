//! JSON transformations recovered from the Import From Picture workflow.

use serde_json::{Map, Value};
use std::fmt;
use std::path::Path;

pub const LIBRARY_EVALUATION: &str = "serde_json is the maintained workspace mapping for lossless unknown-field preservation, JSON cloning, schema inspection, and serialization; std::fs supplies the recovered direct file reads and result write. Typed schema errors replace unchecked Delphi JSON casts without changing successful data transformations.";

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
}
