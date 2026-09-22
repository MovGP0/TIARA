//! SVG-only asset loading. Raster documents are unrelated to application icons.

use std::collections::HashMap;
use std::path::{Path, PathBuf};

use iced::widget::svg;

pub type Drawings = HashMap<String, svg::Handle>;

pub fn packaged(defaults: &[(&str, &[u8])]) -> Drawings {
    defaults
        .iter()
        .map(|(name, bytes)| ((*name).to_owned(), svg::Handle::from_memory(bytes.to_vec())))
        .collect()
}

pub fn load(directory: &Path) -> Drawings {
    let mut drawings = Drawings::new();
    let Ok(entries) = std::fs::read_dir(directory) else {
        return drawings;
    };
    for entry in entries.flatten() {
        let path = entry.path();
        if !path.is_file()
            || !path
                .extension()
                .is_some_and(|extension| extension.eq_ignore_ascii_case("svg"))
        {
            continue;
        }
        let Some(name) = path.file_stem().and_then(|name| name.to_str()) else {
            continue;
        };
        let Ok(bytes) = std::fs::read(&path) else {
            continue;
        };
        if is_vector(&bytes) {
            drawings.insert(name.to_owned(), svg::Handle::from_memory(bytes));
        }
    }
    drawings
}

/// Low-to-high precedence: packaged data, executable folder, working folder,
/// then the optional user override. Missing files never mask packaged vectors.
pub fn installed(folder: &str, defaults: &[(&str, &[u8])]) -> Drawings {
    let mut drawings = packaged(defaults);
    for root in roots() {
        drawings.extend(load(&root.join(folder)));
    }
    drawings
}

fn roots() -> Vec<PathBuf> {
    let mut roots = Vec::new();
    if let Ok(executable) = std::env::current_exe() {
        if let Some(parent) = executable.parent() {
            roots.push(parent.join("glyph"));
        }
    }
    if let Ok(directory) = std::env::current_dir() {
        roots.push(directory.join("glyph"));
    }
    if let Some(directory) = std::env::var_os("TIARA_GLYPHS") {
        roots.push(PathBuf::from(directory));
    }
    roots
}

/// An SVG wrapper around a raster image is still a bitmap and is rejected.
pub fn is_vector(bytes: &[u8]) -> bool {
    xmltree::Element::parse(bytes).is_ok_and(|root| root.name == "svg" && vector_element(&root))
}

fn vector_element(element: &xmltree::Element) -> bool {
    matches!(
        element.name.as_str(),
        "svg"
            | "title"
            | "desc"
            | "g"
            | "path"
            | "circle"
            | "rect"
            | "ellipse"
            | "line"
            | "polyline"
            | "polygon"
    ) && element.attributes.iter().all(|(key, value)| {
        !key.to_ascii_lowercase().starts_with("on")
            && !key.contains("href")
            && !value.to_ascii_lowercase().contains("url(")
    }) && element.children.iter().all(|child| {
        if let xmltree::XMLNode::Element(child) = child {
            vector_element(child)
        } else {
            true
        }
    })
}

#[cfg(test)]
mod tests {
    use super::{is_vector, load, packaged};

    // SE-VISUAL-SVG-ONLY-001: bitmap wrappers are not vector icons.
    #[test]
    fn rejects_raster_and_active_content() {
        for bytes in [
            "not an SVG",
            "<svg><image href='x.png'/></svg>",
            "<svg><image href='data:image/png;base64,AAAA'/></svg>",
            "<svg><script/></svg>",
            "<svg onload='run()'/>",
            "<svg><use href='external.svg#icon'/></svg>",
            "<svg><path fill='url(https://example.com/image)'/></svg>",
        ] {
            assert!(!is_vector(bytes.as_bytes()), "accepted {bytes}");
        }
        assert!(is_vector(b"<svg><path d='M0 0L1 1'/></svg>"));
    }

    #[test]
    fn every_packaged_icon_is_a_self_contained_vector() {
        for (name, bytes) in super::super::icon_catalog::COMMANDS
            .iter()
            .chain(super::super::icon_catalog::COMPONENTS)
        {
            assert!(is_vector(bytes), "not a vector: {name}");
            let source = std::str::from_utf8(bytes).unwrap();
            assert!(source.contains("SPDX-License-Identifier: MIT"), "{name}");
            assert!(
                source
                    .contains("dct:license=\"https://github.com/MovGP0/TIARA/blob/main/LICENSE\""),
                "{name}"
            );
            let root = xmltree::Element::parse(*bytes).unwrap();
            assert_eq!(
                root.namespaces.as_ref().unwrap().get("dct"),
                Some("http://purl.org/dc/terms/")
            );
            assert_eq!(
                root.attributes["license"],
                "https://github.com/MovGP0/TIARA/blob/main/LICENSE"
            );
        }
    }

    #[test]
    fn overrides_are_per_icon_and_invalid_overrides_keep_defaults() {
        let folder = std::path::Path::new(env!("CARGO_MANIFEST_DIR"))
            .join("../../.temp")
            .join(format!("tiara-vector-overrides-{}", std::process::id()));
        std::fs::create_dir_all(&folder).unwrap();
        std::fs::write(folder.join("save.svg"), "<svg><path d='M1 1L2 2'/></svg>").unwrap();
        std::fs::write(
            folder.join("open.svg"),
            "<svg><image href='old.png'/></svg>",
        )
        .unwrap();
        std::fs::write(folder.join("close.png"), "raster").unwrap();
        let mut icons = packaged(super::super::icon_catalog::COMMANDS);
        let open = icons["open"].clone();
        let save = icons["save"].clone();
        let count = icons.len();
        icons.extend(load(&folder));
        assert_eq!(icons.len(), count);
        assert_eq!(icons["open"], open);
        assert_ne!(icons["save"], save);
        std::fs::remove_dir_all(folder).unwrap();
    }
}
