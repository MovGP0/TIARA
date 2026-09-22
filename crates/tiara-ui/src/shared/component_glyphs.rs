//! The port's own drawings of the component bar's buttons.
//!
//! The bar's pictures come from `COMPREGE.BMP` in the installation - 252
//! tiles of 29 by 29, four bits a pixel - which [`tiara_core::icon_strip`]
//! reads. They are the original's artwork and they look soft at any size
//! but their own.
//!
//! So the port draws its own instead, as SVG, and this finds them. A button
//! with a drawing of its own uses it; one without falls back on the tile
//! from the installation, and a copy with neither still shows its text. The
//! three work together, so the drawings can arrive a few at a time rather
//! than all at once.
//!
//! A file is named for the registry entry it belongs to, which is what the
//! bar already knows a button by:
//!
//! ```text
//!   glyph/components/id_component_resistor.svg
//!   glyph/components/id_component_voltage_source.svg
//! ```
//!
//! See `TIARA-cty14gz`, which is the drawing of them.

use std::collections::HashMap;
use std::path::{Path, PathBuf};
use std::sync::OnceLock;

use iced::widget::svg;

/// Where to look, in order, for the folder the drawings are kept in.
///
/// The same three places [`super::glyphs`] looks, and for the same reasons:
/// a variable so an installed copy can say where its own are, the working
/// directory for a run from the repository, and beside the executable for a
/// copy that ships them.
const DIRECTORY_VARIABLE: &str = "TIARA_GLYPHS";

/// The folder the glyphs live in, under whichever of those is found.
const DIRECTORY_NAME: &str = "glyph";

/// And the folder inside that for the component bar's own.
const COMPONENTS: &str = "components";

/// What a drawing is called.
pub const EXTENSION: &str = "svg";

/// The drawings found on this machine, by the registry id they belong to.
#[derive(Debug, Default)]
pub struct ComponentGlyphs {
    by_id: HashMap<String, PathBuf>,
}

impl ComponentGlyphs {
    /// The drawings, read once and kept.
    ///
    /// One directory listing, and a copy that finds none simply uses the
    /// installation's tiles, so there is nothing to report and nothing to
    /// fail.
    #[must_use]
    pub fn shared() -> &'static Self {
        static FOUND: OnceLock<ComponentGlyphs> = OnceLock::new();
        FOUND.get_or_init(|| folder().map_or_else(Self::default, |at| Self::load(&at)))
    }

    /// The drawings in a folder.
    #[must_use]
    pub fn load(directory: &Path) -> Self {
        let Ok(entries) = std::fs::read_dir(directory) else {
            return Self::default();
        };
        let by_id = entries
            .flatten()
            .map(|entry| entry.path())
            .filter(|path| {
                path.extension()
                    .is_some_and(|it| it.eq_ignore_ascii_case(EXTENSION))
            })
            .filter_map(|path| {
                let stem = path.file_stem()?.to_string_lossy().to_string();
                Some((stem, path))
            })
            .collect();
        Self { by_id }
    }

    /// The drawing for a registry entry, where there is one.
    #[must_use]
    pub fn get(&self, id: &str) -> Option<svg::Handle> {
        let path = self.by_id.get(id)?;
        Some(svg::Handle::from_path(path))
    }

    /// How many there are.
    #[must_use]
    pub fn count(&self) -> usize {
        self.by_id.len()
    }
}

/// Where the drawings are, if anywhere.
#[must_use]
pub fn folder() -> Option<PathBuf> {
    let mut looked = Vec::new();
    if let Some(named) = std::env::var_os(DIRECTORY_VARIABLE) {
        looked.push(PathBuf::from(named));
    }
    if let Ok(here) = std::env::current_dir() {
        looked.push(here.join(DIRECTORY_NAME));
    }
    if let Ok(application) = std::env::current_exe() {
        if let Some(beside) = application.parent() {
            looked.push(beside.join(DIRECTORY_NAME));
        }
    }

    looked
        .into_iter()
        .map(|at| at.join(COMPONENTS))
        .find(|at| at.is_dir())
}

#[cfg(test)]
mod tests {
    use super::{COMPONENTS, ComponentGlyphs, EXTENSION};

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
        assert_eq!(EXTENSION, "svg");
    }
}
