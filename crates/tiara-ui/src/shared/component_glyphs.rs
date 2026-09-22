//! The port's own drawings of the component bar's buttons.
//!
//! TIARA SVG defaults are packaged with the application. Valid editable SVG
//! files override them one at a time. Unknown components keep their text;
//! bitmap icons are never loaded.
//!
//! A file is named for the registry entry it belongs to, which is what the
//! bar already knows a button by:
//!
//! ```text
//!   glyph/components/id_component_resistor.svg
//!   glyph/components/id_component_voltage_source.svg
//! ```
//!
//! The original drawings and their source are in `glyph/components` and
//! `analysis/Generate-ComponentGlyphs.py` (see `TIARA-cty14gz`). Filename
//! characters outside ASCII letters, digits, spaces, `-`, `_`, and `.` are
//! percent-encoded: `EEPROM/ROM` uses `EEPROM%2FROM.svg`.

use std::sync::OnceLock;

use iced::widget::svg;

use super::{icon_catalog, vector_icons};

/// And the folder inside that for the component bar's own.
const COMPONENTS: &str = "components";

/// The drawings found on this machine, by the registry id they belong to.
#[derive(Debug, Default)]
pub struct ComponentGlyphs {
    by_id: vector_icons::Drawings,
}

impl ComponentGlyphs {
    /// The drawings, read once and kept.
    ///
    /// Missing or invalid overrides keep the packaged SVG defaults.
    #[must_use]
    pub fn shared() -> &'static Self {
        static FOUND: OnceLock<ComponentGlyphs> = OnceLock::new();
        FOUND.get_or_init(|| Self {
            by_id: vector_icons::installed(COMPONENTS, icon_catalog::COMPONENTS),
        })
    }

    /// The drawings in a folder.
    #[cfg(test)]
    #[must_use]
    pub fn load(directory: &std::path::Path) -> Self {
        Self {
            by_id: vector_icons::load(directory),
        }
    }

    /// The drawing for a registry entry, where there is one.
    #[must_use]
    pub fn get(&self, id: &str) -> Option<svg::Handle> {
        // Keep existing custom glyph names working; encode only for lookup
        // when the exact registry ID has no file of its own.
        self.by_id
            .get(id)
            .or_else(|| self.by_id.get(&file_stem(id)))
            .cloned()
    }

    /// How many there are.
    #[must_use]
    pub fn count(&self) -> usize {
        self.by_id.len()
    }
}

/// Encode registry IDs that cannot be used as one portable filename.
fn file_stem(id: &str) -> String {
    use std::fmt::Write;

    let mut encoded = String::with_capacity(id.len());
    for byte in id.bytes() {
        if byte.is_ascii_alphanumeric() || matches!(byte, b'-' | b'_' | b'.' | b' ') {
            encoded.push(char::from(byte));
        } else {
            // Writing into a String cannot fail.
            let _ = write!(encoded, "%{byte:02X}");
        }
    }
    encoded
}

#[cfg(test)]
mod tests {
    use super::{COMPONENTS, ComponentGlyphs, file_stem};

    fn a_folder(which: &str) -> std::path::PathBuf {
        let at = std::env::temp_dir().join(format!("tiara-glyphs-{}-{which}", std::process::id()));
        let _ = std::fs::remove_dir_all(&at);
        std::fs::create_dir_all(&at).unwrap();
        at
    }

    #[test]
    fn a_drawing_is_found_by_the_registry_id_it_is_named_for() {
        let at = a_folder("named");
        std::fs::write(at.join("id_component_resistor.svg"), "<svg/>").unwrap();

        let found = ComponentGlyphs::load(&at);
        assert!(found.get("id_component_resistor").is_some());
        assert!(found.get("id_component_resistor").is_some());
        assert_eq!(found.count(), 1);

        let _ = std::fs::remove_dir_all(&at);
    }

    #[test]
    fn a_button_with_no_drawing_of_its_own_has_none() {
        let at = a_folder("missing");
        let found = ComponentGlyphs::load(&at);
        assert!(found.get("id_component_resistor").is_none());
        assert_eq!(found.get("id_component_resistor"), None);
        let _ = std::fs::remove_dir_all(&at);
    }

    #[test]
    fn anything_that_is_not_a_drawing_is_passed_over() {
        let at = a_folder("mixed");
        std::fs::write(at.join("id_component_resistor.svg"), "<svg/>").unwrap();
        std::fs::write(at.join("notes.txt"), "not a drawing").unwrap();
        std::fs::write(at.join("old.png"), "nor this").unwrap();

        let found = ComponentGlyphs::load(&at);
        assert_eq!(found.count(), 1);
        assert!(found.get("notes").is_none());
        assert!(found.get("old").is_none());

        let _ = std::fs::remove_dir_all(&at);
    }

    #[test]
    fn a_folder_that_is_not_there_gives_no_drawings_and_does_not_fail() {
        let missing = std::env::temp_dir().join("tiara-no-such-glyph-folder");
        let _ = std::fs::remove_dir_all(&missing);
        assert_eq!(ComponentGlyphs::load(&missing).count(), 0);
    }

    #[test]
    fn the_drawings_come_a_few_at_a_time_rather_than_all_at_once() {
        // The point of the fallback: one drawing present and the rest
        // absent is a working state, not a half-broken one.
        let at = a_folder("partial");
        std::fs::write(at.join("id_component_resistor.svg"), "<svg/>").unwrap();

        let found = ComponentGlyphs::load(&at);
        assert!(found.get("id_component_resistor").is_some());
        assert!(found.get("id_component_capacitor").is_none());

        let _ = std::fs::remove_dir_all(&at);
    }

    #[test]
    fn the_folder_and_the_ending_are_where_the_bead_says() {
        assert_eq!(COMPONENTS, "components");
    }

    #[test]
    fn registry_ids_with_path_separators_resolve_to_one_file() {
        let at = a_folder("encoded");
        std::fs::write(at.join("EEPROM%2FROM.svg"), "<svg/>").unwrap();
        let found = ComponentGlyphs::load(&at);
        assert!(found.get("EEPROM/ROM").is_some());
        assert!(found.get("../EEPROM/ROM").is_none());
        assert_eq!(file_stem("A%/B\\C"), "A%25%2FB%5CC");
        let _ = std::fs::remove_dir_all(&at);
    }

    #[test]
    fn shipped_drawings_cover_the_manifest_and_are_self_contained_vectors() {
        let at = std::path::Path::new(env!("CARGO_MANIFEST_DIR")).join("../../glyph/components");
        let manifest: serde_json::Value =
            serde_json::from_slice(&std::fs::read(at.join("manifest.json")).unwrap()).unwrap();
        let icons = manifest["icons"].as_array().unwrap();
        let found = ComponentGlyphs::load(&at);
        assert_eq!(found.count(), icons.len());
        assert_eq!(icons.len(), 253);
        for entry in icons {
            let id = entry["id"].as_str().unwrap();
            let file = entry["file"].as_str().unwrap();
            assert_eq!(file, format!("{}.svg", file_stem(id)));
            assert!(found.get(id).is_some(), "missing drawing for {id}");
            let bytes = std::fs::read(at.join(file)).unwrap();
            let root = xmltree::Element::parse(bytes.as_slice()).unwrap();
            assert_eq!(root.name, "svg");
            assert_eq!(root.attributes["viewBox"], "0 0 32 32");
            assert!(root.get_child("title").is_some());
            assert_vector_elements(&root);
        }
    }

    fn assert_vector_elements(element: &xmltree::Element) {
        assert!(matches!(
            element.name.as_str(),
            "svg" | "title" | "g" | "path" | "circle" | "rect"
        ));
        assert!(!element.attributes.keys().any(|key| key.contains("href")));
        for child in &element.children {
            if let xmltree::XMLNode::Element(child) = child {
                assert_vector_elements(child);
            }
        }
    }

    #[test]
    fn shipped_drawings_cover_every_installed_registry_entry() {
        let Some(installation) = std::env::var_os("TIARA_TINA_HOME") else {
            return;
        };
        let registry = tiara_core::component_registry::Registry::read(
            &std::path::PathBuf::from(installation).join("compregy.tcr"),
        );
        let at = std::path::Path::new(env!("CARGO_MANIFEST_DIR")).join("../../glyph/components");
        let found = ComponentGlyphs::load(&at);
        for entry in registry.groups().iter().flat_map(|group| &group.entries) {
            assert!(
                found.get(&entry.id).is_some(),
                "missing drawing for {}",
                entry.id
            );
        }
    }
}
