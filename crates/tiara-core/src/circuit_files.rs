use std::path::{Path, PathBuf};

use glob::{MatchOptions, PatternError, glob_with};

#[derive(Debug)]
pub enum FileDiscoveryError {
    InvalidMask(PatternError),
    Read(std::io::Error),
}

impl std::fmt::Display for FileDiscoveryError {
    fn fmt(&self, formatter: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            Self::InvalidMask(error) => write!(formatter, "invalid file mask: {error}"),
            Self::Read(error) => write!(formatter, "cannot enumerate matching files: {error}"),
        }
    }
}

impl std::error::Error for FileDiscoveryError {}

/// Finds direct files that match a shell-style mask.
///
/// The `glob` crate supplies the maintained pattern and enumeration behavior.
/// Matching is ASCII case-insensitive to retain the observed Windows behavior.
///
/// # Errors
///
/// Returns [`FileDiscoveryError`] when the mask is invalid or an enumerated
/// path cannot be read.
pub fn matching_files(folder: &Path, mask: &str) -> Result<Vec<PathBuf>, FileDiscoveryError> {
    let pattern = folder.join(mask).to_string_lossy().into_owned();
    let options = MatchOptions {
        case_sensitive: false,
        require_literal_separator: true,
        require_literal_leading_dot: false,
    };
    let entries = glob_with(&pattern, options).map_err(FileDiscoveryError::InvalidMask)?;

    entries
        .map(|entry| entry.map_err(|error| FileDiscoveryError::Read(error.into())))
        .filter_map(|entry| match entry {
            Ok(path) if path.is_file() => Some(Ok(path)),
            Ok(_) => None,
            Err(error) => Some(Err(error)),
        })
        .collect()
}

/// Ports Ghidra function `FUN_012f4ad0` at `0x012F4AD0`.
///
/// The recovered function joins a folder and supplied file mask and counts
/// each direct file-system match. A missing folder or an empty match returns
/// zero.
///
/// # Errors
///
/// Returns [`FileDiscoveryError`] when the mask is invalid or an enumerated
/// path cannot be read.
pub fn count_matching_files(folder: &Path, mask: &str) -> Result<usize, FileDiscoveryError> {
    matching_files(folder, mask).map(|files| files.len())
}

/// Ports Ghidra function `FUN_012f5840` at `0x012F5840`.
///
/// The recovered helper keeps the filename text before its first dot. The
/// input paths used by Decrypt Circuits always have a `.tsc` suffix. For a
/// caller without a dot, the Rust adapter preserves the complete name.
#[must_use]
pub fn stem_before_first_dot(file_name: &str) -> &str {
    file_name
        .split_once('.')
        .map_or(file_name, |(stem, _suffix)| stem)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn first_dot_stem_discards_every_suffix_segment() {
        assert_eq!(stem_before_first_dot("filter.backup.tsc"), "filter");
        assert_eq!(stem_before_first_dot("filter"), "filter");
    }

    #[test]
    fn missing_folder_has_no_matches() {
        let folder = Path::new("path-that-does-not-exist-for-tiara-tests");

        assert_eq!(
            matching_files(folder, "*.tsc").expect("valid mask"),
            Vec::<PathBuf>::new()
        );
        assert_eq!(
            count_matching_files(folder, "*.tsc").expect("valid mask"),
            0
        );
    }
}
