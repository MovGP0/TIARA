//! Domain state and file discovery for the PCB project wizard.

use std::cmp::Reverse;
use std::fs::{self, File};
use std::io::{self, Read};
use std::path::{Path, PathBuf};
use std::time::{SystemTime, UNIX_EPOCH};

const MILS_PER_INCH: f64 = 1_000.0;
const MILS_PER_MILLIMETER: f64 = 39.370_078_740_157_48;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DisplayUnit {
    Inch,
    Millimeter,
}

impl DisplayUnit {
    #[must_use]
    pub const fn launch_option(self) -> &'static str {
        match self {
            Self::Inch => "/Umil",
            Self::Millimeter => "/Umm",
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct BoardDimensions {
    pub width: f64,
    pub height: f64,
}

#[derive(Debug, Clone, PartialEq)]
pub struct PcbSetup {
    pub auto_placement: bool,
    pub auto_route: bool,
    pub use_template: bool,
    pub template: Option<PathBuf>,
    pub board_dimensions_mils: BoardDimensions,
}

#[derive(Debug, Clone, PartialEq)]
pub enum PcbLaunchRequest {
    ExistingProject {
        project: PathBuf,
        unit: DisplayUnit,
    },
    NewProject {
        active_input: PathBuf,
        auto_placement: bool,
        auto_route: bool,
        template: Option<PathBuf>,
        board_dimensions_mils: BoardDimensions,
        unit: DisplayUnit,
    },
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ProjectEntry {
    pub file_name: String,
    pub path: PathBuf,
    pub modified: SystemTime,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ProjectCandidate {
    pub file_name: String,
    pub path: PathBuf,
    pub stored_document_name: String,
    pub modified: SystemTime,
}

/// Filters and orders PCB project files for the wizard.
///
/// Reimplements Ghidra function `FUN_01bb1cf0` at `0x01BB1CF0`. The standard
/// library supplies directory enumeration, file metadata, and path handling.
#[must_use]
pub fn filter_project_candidates(
    candidates: impl IntoIterator<Item = ProjectCandidate>,
    active_document_name: &str,
    show_all: bool,
) -> Vec<ProjectEntry> {
    let mut projects = candidates
        .into_iter()
        .filter(|candidate| {
            !candidate
                .file_name
                .to_ascii_lowercase()
                .contains("autosave")
                && (show_all
                    || candidate
                        .stored_document_name
                        .eq_ignore_ascii_case(active_document_name))
        })
        .map(|candidate| ProjectEntry {
            file_name: candidate.file_name,
            path: candidate.path,
            modified: candidate.modified,
        })
        .collect::<Vec<_>>();
    projects.sort_by_key(|project| Reverse(project.modified));
    projects
}

/// Enumerates `.tpc` files next to the active document.
///
/// This is the file-system adapter for `FUN_01bb1cf0` at `0x01BB1CF0`.
/// Files that cannot provide the recovered leading short text are skipped.
///
/// # Errors
///
/// Returns an I/O error when the active document directory cannot be read.
pub fn discover_projects(active_document: &Path, show_all: bool) -> io::Result<Vec<ProjectEntry>> {
    let Some(directory) = active_document.parent() else {
        return Ok(Vec::new());
    };
    let active_document_name = active_document
        .file_stem()
        .and_then(|name| name.to_str())
        .unwrap_or_default();
    let mut candidates = Vec::new();
    for entry in fs::read_dir(directory)? {
        let Ok(entry) = entry else {
            continue;
        };
        let path = entry.path();
        let is_project = path
            .extension()
            .and_then(|extension| extension.to_str())
            .is_some_and(|extension| extension.eq_ignore_ascii_case("tpc"));
        if !is_project {
            continue;
        }
        let Some(file_name) = path
            .file_name()
            .and_then(|name| name.to_str())
            .map(str::to_owned)
        else {
            continue;
        };
        let Ok(stored_document_name) = read_leading_short_text(&path) else {
            continue;
        };
        let modified = entry
            .metadata()
            .and_then(|metadata| metadata.modified())
            .unwrap_or(UNIX_EPOCH);
        candidates.push(ProjectCandidate {
            file_name,
            path,
            stored_document_name,
            modified,
        });
    }
    Ok(filter_project_candidates(
        candidates,
        active_document_name,
        show_all,
    ))
}

fn read_leading_short_text(path: &Path) -> io::Result<String> {
    let mut file = File::open(path)?;
    let mut length = [0_u8; 1];
    file.read_exact(&mut length)?;
    let mut text = vec![0_u8; usize::from(length[0])];
    file.read_exact(&mut text)?;
    Ok(String::from_utf8_lossy(&text).into_owned())
}

/// Converts displayed board dimensions to internal mil values.
///
/// Reimplements Ghidra function `FUN_01bb3de0` at `0x01BB3DE0`.
#[must_use]
pub const fn dimensions_to_mils(dimensions: BoardDimensions, unit: DisplayUnit) -> BoardDimensions {
    let factor = match unit {
        DisplayUnit::Inch => MILS_PER_INCH,
        DisplayUnit::Millimeter => MILS_PER_MILLIMETER,
    };
    BoardDimensions {
        width: dimensions.width * factor,
        height: dimensions.height * factor,
    }
}

/// Converts internal mil values to displayed board dimensions.
///
/// Reimplements Ghidra function `FUN_01bb3e80` at `0x01BB3E80`.
#[must_use]
pub const fn dimensions_from_mils(
    dimensions: BoardDimensions,
    unit: DisplayUnit,
) -> BoardDimensions {
    let factor = match unit {
        DisplayUnit::Inch => MILS_PER_INCH,
        DisplayUnit::Millimeter => MILS_PER_MILLIMETER,
    };
    BoardDimensions {
        width: dimensions.width / factor,
        height: dimensions.height / factor,
    }
}

/// Supplies file checks and decoded board records for PCB templates.
///
/// This adapter owns the recovered binary format boundary. Distributable Rust
/// code does not copy the proprietary parser.
pub trait TemplateAccess {
    fn is_file(&self, path: &Path) -> bool;
    fn read_board_dimensions(&self, path: &Path) -> Option<BoardDimensions>;
}

/// Reads board extents from a template while preserving caller fallbacks.
///
/// Reimplements Ghidra function `FUN_01bb3f00` at `0x01BB3F00`. A missing
/// file, a malformed file, or a file without the expected board record leaves
/// the supplied dimensions unchanged.
#[must_use]
pub fn read_template_dimensions(
    access: &impl TemplateAccess,
    path: &Path,
    fallback: BoardDimensions,
) -> BoardDimensions {
    if access.is_file(path) {
        access.read_board_dimensions(path).unwrap_or(fallback)
    } else {
        fallback
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use std::time::Duration;

    struct Templates {
        exists: bool,
        dimensions: Option<BoardDimensions>,
    }

    impl TemplateAccess for Templates {
        fn is_file(&self, _path: &Path) -> bool {
            self.exists
        }

        fn read_board_dimensions(&self, _path: &Path) -> Option<BoardDimensions> {
            self.dimensions
        }
    }

    #[test]
    fn project_filter_excludes_autosaves_matches_names_and_orders_newest_first() {
        let base = UNIX_EPOCH + Duration::from_secs(10);
        let candidates = [
            ProjectCandidate {
                file_name: "older.tpc".to_owned(),
                path: PathBuf::from("older.tpc"),
                stored_document_name: "active".to_owned(),
                modified: base,
            },
            ProjectCandidate {
                file_name: "newer.tpc".to_owned(),
                path: PathBuf::from("newer.tpc"),
                stored_document_name: "ACTIVE".to_owned(),
                modified: base + Duration::from_secs(1),
            },
            ProjectCandidate {
                file_name: "active-autosave.tpc".to_owned(),
                path: PathBuf::from("active-autosave.tpc"),
                stored_document_name: "active".to_owned(),
                modified: base + Duration::from_secs(2),
            },
            ProjectCandidate {
                file_name: "other.tpc".to_owned(),
                path: PathBuf::from("other.tpc"),
                stored_document_name: "other".to_owned(),
                modified: base + Duration::from_secs(3),
            },
        ];
        let filtered = filter_project_candidates(candidates.clone(), "active", false);
        assert_eq!(
            filtered
                .iter()
                .map(|project| project.file_name.as_str())
                .collect::<Vec<_>>(),
            ["newer.tpc", "older.tpc"]
        );
        let all = filter_project_candidates(candidates, "active", true);
        assert_eq!(
            all.iter()
                .map(|project| project.file_name.as_str())
                .collect::<Vec<_>>(),
            ["other.tpc", "newer.tpc", "older.tpc"]
        );
    }

    #[test]
    fn dimension_conversion_round_trips_both_display_units() {
        let input = BoardDimensions {
            width: 2.5,
            height: 1.25,
        };
        for unit in [DisplayUnit::Inch, DisplayUnit::Millimeter] {
            let result = dimensions_from_mils(dimensions_to_mils(input, unit), unit);
            assert!((result.width - input.width).abs() < f64::EPSILON);
            assert!((result.height - input.height).abs() < f64::EPSILON);
        }
    }

    #[test]
    fn template_reader_preserves_fallback_until_a_board_record_is_available() {
        let fallback = BoardDimensions {
            width: 100.0,
            height: 50.0,
        };
        let missing = Templates {
            exists: false,
            dimensions: Some(BoardDimensions {
                width: 200.0,
                height: 80.0,
            }),
        };
        assert_eq!(
            read_template_dimensions(&missing, Path::new("missing.tpt"), fallback),
            fallback
        );
        let parsed = Templates {
            exists: true,
            dimensions: Some(BoardDimensions {
                width: 200.0,
                height: 80.0,
            }),
        };
        assert_eq!(
            read_template_dimensions(&parsed, Path::new("board.tpt"), fallback),
            BoardDimensions {
                width: 200.0,
                height: 80.0,
            }
        );
    }
}
