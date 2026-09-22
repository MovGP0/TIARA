//! TIARA-owned command vectors shared by toolbars and menus.
//! Edit glyph/commands/*.svg and restart to override packaged defaults.

use std::collections::HashMap;
use std::sync::OnceLock;

use iced::widget::svg;
use serde::Deserialize;

use super::{icon_catalog, vector_icons};

#[derive(Debug, Default, Deserialize)]
struct Manifest {
    controls: HashMap<String, String>,
}

#[derive(Debug)]
pub struct Glyphs {
    drawings: vector_icons::Drawings,
    controls: HashMap<String, String>,
}

impl Glyphs {
    #[must_use]
    pub fn shared() -> &'static Self {
        static GLYPHS: OnceLock<Glyphs> = OnceLock::new();
        GLYPHS.get_or_init(|| Self {
            drawings: vector_icons::installed("commands", icon_catalog::COMMANDS),
            controls: serde_json::from_str::<Manifest>(include_str!(
                "../../../../glyph/commands/manifest.json"
            ))
            .unwrap_or_default()
            .controls,
        })
    }

    /// A stable command key, shared across equivalent menu and toolbar routes.
    #[must_use]
    pub fn get(&self, control: &str) -> Option<svg::Handle> {
        self.named(self.controls.get(control)?)
    }

    #[must_use]
    pub fn named(&self, name: &str) -> Option<svg::Handle> {
        self.drawings.get(name).cloned()
    }

    /// Common labels used by the shared secondary-window toolbar/menu builder.
    #[must_use]
    pub fn for_label(&self, label: &str) -> Option<svg::Handle> {
        let label = label.trim().trim_end_matches("...").to_ascii_lowercase();
        let key = match label.as_str() {
            "new" | "add" => "new",
            "open" | "load" => "open",
            "save" => "save",
            "save as" => "save-as",
            "save all" => "save-all",
            "close" | "exit" | "cancel" => "close",
            "copy" => "copy",
            "paste" => "paste",
            "cut" => "cut",
            "undo" => "undo",
            "redo" => "redo",
            "delete" | "remove" | "erase" => "delete",
            "run" | "start" | "execute" => "run",
            "stop" => "stop",
            "print" => "print",
            "help" => "help",
            "about" => "info",
            "options" | "settings" | "properties" | "setup" => "settings",
            "zoom" => "zoom",
            "zoom in" => "zoom-in",
            "zoom out" => "zoom-out",
            "refresh" | "reload" => "refresh",
            "ok" | "apply" => "check",
            "import" => "import",
            "export" => "export",
            "select all" => "select-all",
            _ => return None,
        };
        self.named(key)
    }
}

#[cfg(test)]
mod tests {
    use super::{Glyphs, Manifest};

    // SE-VISUAL-SVG-ONLY-001: cover the actual data-driven UI controls.
    #[test]
    fn every_toolbar_button_and_menu_entry_has_a_vector() {
        let icons = Glyphs::shared();
        for panel in crate::schematic_editor::toolbars::TOOLBAR {
            for item in panel.items {
                if !item.is_divider() && item.picker_width().is_none() {
                    assert!(
                        icons.get(item.name).is_some(),
                        "missing toolbar icon: {}",
                        item.name
                    );
                }
            }
        }
        check(crate::schematic_editor::menu_tree::MAIN_MENU);
    }

    fn check(entries: &[crate::schematic_editor::menu_tree::MenuEntry]) {
        for entry in entries {
            if !entry.is_separator() {
                assert!(
                    Glyphs::shared().get(entry.name).is_some(),
                    "missing menu icon: {}",
                    entry.name
                );
            }
            check(entry.children);
        }
    }

    #[test]
    fn manifest_is_valid_and_all_aliases_have_packaged_defaults() {
        let manifest: Manifest =
            serde_json::from_str(include_str!("../../../../glyph/commands/manifest.json")).unwrap();
        for name in manifest.controls.values() {
            assert!(
                super::icon_catalog::COMMANDS
                    .iter()
                    .any(|(key, _)| key == name),
                "missing {name}"
            );
        }
        for (toolbar, menu) in [
            ("DFSaveBtn", "Save"),
            ("DFCopyBtn", "Copy"),
            ("ToolWire", "mnWire"),
            ("ToolDelete", "mnDelete"),
        ] {
            assert_eq!(manifest.controls[toolbar], manifest.controls[menu]);
        }
    }
}
