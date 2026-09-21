//! The pictures the original draws on its buttons.
//!
//! The glyphs were lifted out of the resource and live beside the repository
//! rather than inside this crate, the same way the component library does:
//! they are the original's artwork, not the port's. So they are looked for at
//! run time and the interface works without them - a button that finds no
//! glyph keeps its text, which is what the port showed before there were any.
//!
//! A file is named for the control it was taken from, form first:
//! `0343_SchematicEditor_SchematicEditor_TopToolBar_EditorTools_ToolEdit_Glyph_Data.png`.
//! The form and the control name together are the key, because a name like
//! `DFCopyBtn` turns up on more than one form.

use std::collections::HashMap;
use std::path::{Path, PathBuf};
use std::sync::OnceLock;

use iced::widget::image;

/// Where to look, in order, for the directory the glyphs are kept in.
///
/// The variable comes first so an installed copy can say where its own are,
/// then the working directory for a run from the repository, then beside the
/// executable for a copy that ships them.
const DIRECTORY_VARIABLE: &str = "TIARA_GLYPHS";
const DIRECTORY_NAME: &str = "glyph";

/// What each file name ends with, after the control it belongs to.
const GLYPH_SUFFIX: &str = "_Glyph_Data";
const PICTURE_SUFFIX: &str = "_Picture_Data";

/// The glyphs found on this machine, looked up by form and control.
#[derive(Debug, Default)]
pub struct Glyphs {
    by_control: HashMap<(String, String), PathBuf>,
}

impl Glyphs {
    /// The glyphs, read once and kept.
    ///
    /// Reading them costs one directory listing, and an interface that finds
    /// none simply draws its text instead, so there is nothing to report and
    /// nothing to fail.
    #[must_use]
    pub fn shared() -> &'static Self {
        static GLYPHS: OnceLock<Glyphs> = OnceLock::new();
        GLYPHS.get_or_init(|| Self::load(&directory()))
    }

    /// Reads whatever is in one directory, and nothing if it is not there.
    #[must_use]
    pub fn load(directory: &Path) -> Self {
        let mut by_control = HashMap::new();
        let Ok(entries) = std::fs::read_dir(directory) else {
            return Self { by_control };
        };

        for entry in entries.flatten() {
            let path = entry.path();
            let Some(stem) = path.file_stem().and_then(|name| name.to_str()) else {
                continue;
            };
            if let Some((form, control)) = split(stem) {
                by_control.insert((form, control), path);
            }
        }
        Self { by_control }
    }

    /// The picture for one control, where the original had one.
    #[must_use]
    pub fn get(&self, form: &str, control: &str) -> Option<image::Handle> {
        self.by_control
            .get(&(form.to_owned(), control.to_owned()))
            .map(image::Handle::from_path)
    }
}

/// Where the glyphs are on this machine.
fn directory() -> PathBuf {
    if let Some(named) = std::env::var_os(DIRECTORY_VARIABLE) {
        return PathBuf::from(named);
    }
    let here = PathBuf::from(DIRECTORY_NAME);
    if here.is_dir() {
        return here;
    }
    std::env::current_exe()
        .ok()
        .and_then(|exe| exe.parent().map(Path::to_path_buf))
        .map_or(here, |beside| beside.join(DIRECTORY_NAME))
}

/// The form and the control a file name was taken from.
///
/// The name runs number, form, then the component's own path with its parts
/// separated the same way, then the suffix. The form is the first part after
/// the number and the control is the last part before the suffix, which is
/// all the lookup needs.
fn split(stem: &str) -> Option<(String, String)> {
    let body = stem
        .strip_suffix(GLYPH_SUFFIX)
        .or_else(|| stem.strip_suffix(PICTURE_SUFFIX))?;
    let (_number, rest) = body.split_once('_')?;
    let (form, rest) = rest.split_once('_')?;
    let control = rest.rsplit('_').next()?;
    if form.is_empty() || control.is_empty() {
        return None;
    }
    Some((form.to_owned(), control.to_owned()))
}

#[cfg(test)]
mod tests {
    use super::{Glyphs, split};

    #[test]
    fn a_file_name_gives_up_its_form_and_control() {
        assert_eq!(
            split(
                "0343_SchematicEditor_SchematicEditor_TopToolBar_EditorTools_ToolEdit_Glyph_Data"
            ),
            Some(("SchematicEditor".to_owned(), "ToolEdit".to_owned()))
        );
        assert_eq!(
            split("0081_DFWindow_DFWindow_DFToolPanel_DFOpenBtn_Glyph_Data"),
            Some(("DFWindow".to_owned(), "DFOpenBtn".to_owned()))
        );
    }

    #[test]
    fn a_picture_is_read_the_same_way_as_a_glyph() {
        assert_eq!(
            split("0326_SchematicEditor_SchematicEditor_ComponentPanel_imgTR_Picture_Data"),
            Some(("SchematicEditor".to_owned(), "imgTR".to_owned()))
        );
    }

    #[test]
    fn a_name_that_is_not_one_of_these_is_left_alone() {
        assert_eq!(split("readme"), None);
        assert_eq!(split("0001_AboutBox_Glyph_Data"), None);
    }

    #[test]
    fn a_directory_that_is_not_there_gives_no_glyphs_and_no_trouble() {
        let glyphs = Glyphs::load(std::path::Path::new("no/such/directory"));
        assert!(glyphs.get("SchematicEditor", "ToolEdit").is_none());
        assert!(glyphs.get("anything", "at all").is_none());
    }

    #[test]
    fn every_toolbar_button_finds_its_glyph() {
        // The glyphs live beside the repository rather than in the crate, so a
        // checkout that has not got them skips this rather than failing: the
        // interface works without them by design.
        let directory = std::path::Path::new("../../glyph");
        if !directory.is_dir() {
            return;
        }

        let glyphs = Glyphs::load(directory);
        let mut without = Vec::new();
        for panel in crate::schematic_editor::toolbars::TOOLBAR {
            for item in panel.items {
                if item.is_divider() || item.picker_width().is_some() {
                    continue;
                }
                if glyphs.get("SchematicEditor", item.name).is_none() {
                    without.push(item.name);
                }
            }
        }

        assert!(
            without.is_empty(),
            "these toolbar buttons have no glyph: {without:?}"
        );
    }
}
