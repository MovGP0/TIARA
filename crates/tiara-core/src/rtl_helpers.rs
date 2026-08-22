//! Clean-room adapters for recovered Delphi RTL helper behavior.

use std::fs;
use std::io::{self, Read, Seek, SeekFrom, Write};
use std::path::Path;

const STREAM_BUFFER_LIMIT: usize = 0xf000;
const STREAM_BUFFER_LIMIT_U64: u64 = 0xf000;

/// Copies bytes between streams with Delphi `TStream.CopyFrom` semantics.
///
/// This ports Ghidra function `FUN_004b8ba0` at `0x004B8BA0`. A positive
/// `count` copies exactly that many bytes from the source's current position.
/// A zero or negative count resets the source to position zero and copies its
/// complete size. Transfers use at most `0xF000` bytes per buffer. Rust's
/// [`Read::read_exact`] and [`Write::write_all`] supply the recovered buffered
/// read/write error behavior.
///
/// # Errors
///
/// Returns the first seek, read, or write error. Completed earlier chunks are
/// not rolled back.
pub fn copy_stream<Source, Destination>(
    destination: &mut Destination,
    source: &mut Source,
    count: i64,
) -> io::Result<u64>
where
    Source: Read + Seek + ?Sized,
    Destination: Write + ?Sized,
{
    let copy_count = if count < 1 {
        source.seek(SeekFrom::Start(0))?;
        let size = source.seek(SeekFrom::End(0))?;
        source.seek(SeekFrom::Start(0))?;
        size
    } else {
        count.unsigned_abs()
    };
    if copy_count == 0 {
        return Ok(0);
    }

    let buffer_size =
        usize::try_from(copy_count.min(STREAM_BUFFER_LIMIT_U64)).unwrap_or(STREAM_BUFFER_LIMIT);
    let mut buffer = vec![0_u8; buffer_size];
    let mut remaining = copy_count;
    while remaining != 0 {
        let chunk_size = usize::try_from(
            remaining.min(u64::try_from(buffer_size).unwrap_or(STREAM_BUFFER_LIMIT_U64)),
        )
        .unwrap_or(buffer_size);
        source.read_exact(&mut buffer[..chunk_size])?;
        destination.write_all(&buffer[..chunk_size])?;
        remaining -= u64::try_from(chunk_size).unwrap_or(remaining);
    }
    Ok(copy_count)
}

/// Packs two signed 32-bit coordinates into their recovered 64-bit point.
///
/// This ports Ghidra function `FUN_00498310` at `0x00498310`. The first
/// coordinate keeps its complete bit pattern in bits 0 through 31. The second
/// coordinate keeps its complete bit pattern in bits 32 through 63.
#[must_use]
// `From<u32>` is not stable in const contexts on the workspace toolchain.
#[allow(clippy::cast_lossless)]
pub const fn pack_coordinate_pair(first: i32, second: i32) -> u64 {
    let first_bits = u32::from_ne_bytes(first.to_ne_bytes());
    let second_bits = u32::from_ne_bytes(second.to_ne_bytes());
    (first_bits as u64) | ((second_bits as u64) << 32)
}

/// Tests whether a path identifies a file under recovered Delphi link rules.
///
/// This ports Ghidra function `FUN_00440a20` at `0x00440A20`, likely Delphi
/// `System.SysUtils.FileExists`. Directories and missing paths return `false`.
/// When `follow_links` is `false`, any filesystem link or Windows reparse point
/// returns `true`, including a broken link or a link to a directory. When it is
/// `true`, metadata lookup follows the link and returns `true` only for a file.
/// Regular files do not require a second metadata lookup.
#[must_use]
pub fn file_exists(path: impl AsRef<Path>, follow_links: bool) -> bool {
    let path = path.as_ref();
    let Ok(link_metadata) = fs::symlink_metadata(path) else {
        return false;
    };
    if is_link_or_reparse_point(&link_metadata) {
        if !follow_links {
            return true;
        }
        return fs::metadata(path).is_ok_and(|metadata| metadata.is_file());
    }
    link_metadata.is_file()
}

#[cfg(windows)]
fn is_link_or_reparse_point(metadata: &fs::Metadata) -> bool {
    use std::os::windows::fs::MetadataExt;

    const FILE_ATTRIBUTE_REPARSE_POINT: u32 = 0x400;
    metadata.file_attributes() & FILE_ATTRIBUTE_REPARSE_POINT != 0
}

#[cfg(not(windows))]
fn is_link_or_reparse_point(metadata: &fs::Metadata) -> bool {
    metadata.file_type().is_symlink()
}

/// Formats a signed 32-bit integer as a decimal string.
///
/// This ports Ghidra function `FUN_0043f750` at `0x0043F750`, likely Delphi
/// `System.SysUtils.IntToStr`. [`i32::to_string`] preserves the recovered
/// leading-minus behavior and handles `i32::MIN` without overflowing while
/// obtaining its magnitude.
#[must_use]
pub fn int_to_string(value: i32) -> String {
    value.to_string()
}

#[cfg(test)]
mod tests {
    use super::*;
    use std::fs::File;
    use std::io::{Cursor, ErrorKind};
    use std::path::PathBuf;

    struct TestDirectory {
        path: PathBuf,
    }

    impl TestDirectory {
        fn new(name: &str) -> io::Result<Self> {
            let path = PathBuf::from(env!("CARGO_MANIFEST_DIR"))
                .join("../..")
                .join(".temp")
                .join(format!("rtl-helpers-{}-{name}", std::process::id()));
            if path.exists() {
                fs::remove_dir_all(&path)?;
            }
            fs::create_dir_all(&path)?;
            Ok(Self { path })
        }
    }

    impl Drop for TestDirectory {
        fn drop(&mut self) {
            let _ = fs::remove_dir_all(&self.path);
        }
    }

    #[test]
    fn fun_004b8ba0_positive_count_copies_from_current_position() -> io::Result<()> {
        let mut source = Cursor::new(b"prefix-payload-tail".to_vec());
        source.set_position(7);
        let mut destination = Vec::new();

        let copied = copy_stream(&mut destination, &mut source, 7)?;

        assert_eq!(copied, 7);
        assert_eq!(destination, b"payload");
        assert_eq!(source.position(), 14);
        Ok(())
    }

    #[test]
    fn fun_004b8ba0_nonpositive_count_resets_and_copies_the_complete_stream() -> io::Result<()> {
        for count in [0, -1] {
            let bytes = (0_u32..100_000)
                .map(|value| value.to_le_bytes()[0])
                .collect::<Vec<_>>();
            let mut source = Cursor::new(bytes.clone());
            source.set_position(50_000);
            let mut destination = Vec::new();

            let copied = copy_stream(&mut destination, &mut source, count)?;

            assert_eq!(copied, 100_000);
            assert_eq!(destination, bytes);
        }
        Ok(())
    }

    #[test]
    fn fun_004b8ba0_short_source_returns_error_without_writing_partial_chunk() {
        let mut source = Cursor::new(b"short".to_vec());
        let mut destination = b"existing".to_vec();

        let error = copy_stream(&mut destination, &mut source, 8)
            .expect_err("the requested count exceeds the source");

        assert_eq!(error.kind(), ErrorKind::UnexpectedEof);
        assert_eq!(destination, b"existing");
    }

    #[test]
    fn fun_00498310_preserves_both_coordinate_bit_patterns() {
        assert_eq!(pack_coordinate_pair(12, 34), 0x0000_0022_0000_000c);
        assert_eq!(pack_coordinate_pair(-1, i32::MIN), 0x8000_0000_ffff_ffff);
        let packed = pack_coordinate_pair(i32::MIN, i32::MAX);
        let bytes = packed.to_le_bytes();
        assert_eq!(
            i32::from_le_bytes([bytes[0], bytes[1], bytes[2], bytes[3]]),
            i32::MIN
        );
        assert_eq!(
            i32::from_le_bytes([bytes[4], bytes[5], bytes[6], bytes[7]]),
            i32::MAX
        );
    }

    #[test]
    fn fun_00440a20_accepts_files_and_rejects_directories_and_missing_paths() -> io::Result<()> {
        let directory = TestDirectory::new("file-kinds")?;
        let file = directory.path.join("value.txt");
        File::create(&file)?;

        assert!(file_exists(&file, false));
        assert!(file_exists(&file, true));
        assert!(!file_exists(&directory.path, false));
        assert!(!file_exists(&directory.path, true));
        assert!(!file_exists(directory.path.join("missing.txt"), false));
        Ok(())
    }

    #[test]
    fn fun_00440a20_link_following_distinguishes_broken_and_directory_targets() -> io::Result<()> {
        let directory = TestDirectory::new("links")?;
        let file = directory.path.join("target.txt");
        File::create(&file)?;
        let file_link = directory.path.join("file-link");
        let broken_link = directory.path.join("broken-link");
        let directory_link = directory.path.join("directory-link");
        if create_file_link(&file, &file_link).is_err()
            || create_file_link(&directory.path.join("missing"), &broken_link).is_err()
            || create_directory_link(&directory.path, &directory_link).is_err()
        {
            return Ok(());
        }

        assert!(file_exists(&file_link, false));
        assert!(file_exists(&file_link, true));
        assert!(file_exists(&broken_link, false));
        assert!(!file_exists(&broken_link, true));
        assert!(file_exists(&directory_link, false));
        assert!(!file_exists(&directory_link, true));
        Ok(())
    }

    #[cfg(windows)]
    fn create_file_link(original: &Path, link: &Path) -> io::Result<()> {
        std::os::windows::fs::symlink_file(original, link)
    }

    #[cfg(windows)]
    fn create_directory_link(original: &Path, link: &Path) -> io::Result<()> {
        std::os::windows::fs::symlink_dir(original, link)
    }

    #[cfg(unix)]
    fn create_file_link(original: &Path, link: &Path) -> io::Result<()> {
        std::os::unix::fs::symlink(original, link)
    }

    #[cfg(unix)]
    fn create_directory_link(original: &Path, link: &Path) -> io::Result<()> {
        std::os::unix::fs::symlink(original, link)
    }

    #[test]
    fn fun_0043f750_formats_the_complete_signed_range() {
        assert_eq!(int_to_string(0), "0");
        assert_eq!(int_to_string(42), "42");
        assert_eq!(int_to_string(-42), "-42");
        assert_eq!(int_to_string(i32::MAX), "2147483647");
        assert_eq!(int_to_string(i32::MIN), "-2147483648");
    }
}
