use std::fs::File;
use std::io::{self, BufWriter, Write};
use std::path::Path;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct AnalysisResultContext {
    pub owner_id: u64,
    pub analysis_kind: u32,
    pub analysis_variant: u32,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct AnalysisResultMetadata<'a> {
    pub container_name: &'a str,
    pub format_version: &'a str,
    pub format_timestamp: &'a str,
    pub description: &'a str,
    pub application_version: &'a str,
    pub copyright_notice: &'a str,
}

pub trait AnalysisResultContainerFormat {
    /// Writes the format-specific metadata block.
    ///
    /// # Errors
    ///
    /// Returns the first output or format error.
    fn write_metadata(
        &self,
        output: &mut dyn Write,
        metadata: &AnalysisResultMetadata<'_>,
    ) -> io::Result<()>;

    /// Writes the format-specific 16-byte analysis context block.
    ///
    /// # Errors
    ///
    /// Returns the first output or format error.
    fn write_context(
        &self,
        output: &mut dyn Write,
        context: AnalysisResultContext,
    ) -> io::Result<()>;
}

pub trait AnalysisResultPayload {
    /// Writes the analysis-result object after the container header.
    ///
    /// # Errors
    ///
    /// Returns the first output or serialization error.
    fn write_payload(&self, output: &mut dyn Write) -> io::Result<()>;
}

/// Shared storage boundary for a named curve inside an analysis-result file.
///
/// The clean-room UI can validate and route a curve rename without knowing the
/// unrecovered binary container encoding. A format implementation owns the
/// read-modify-write operation.
pub trait AnalysisResultCurveStore {
    /// Replaces one curve name and persists the changed result file.
    ///
    /// # Errors
    ///
    /// Returns the first result-file read, format, index, write, or flush
    /// error.
    fn rename_curve(&mut self, path: &Path, curve_index: usize, new_name: &str) -> io::Result<()>;
}

/// Ports Ghidra function `FUN_012d19f0` at `0x012D19F0`.
///
/// The database identifies the original responsibility as the shared writer
/// for a TINA Analysis result V1.00 container. This clean-room adapter keeps
/// the recovered operation order while leaving the unrecovered proprietary
/// field encoding behind [`AnalysisResultContainerFormat`]. Standard Rust file
/// creation truncates an existing destination. A returned [`io::Error`]
/// replaces the original process-global writer-status latch.
///
/// # Errors
///
/// Returns the first file creation, metadata, context, payload, flush, or
/// format error. The destination can contain partial output after an error,
/// which matches the recovered writer's lack of rollback.
pub fn write_analysis_result_file(
    path: impl AsRef<Path>,
    format: &dyn AnalysisResultContainerFormat,
    metadata: &AnalysisResultMetadata<'_>,
    context: AnalysisResultContext,
    payload: &dyn AnalysisResultPayload,
) -> io::Result<()> {
    let file = File::create(path)?;
    let mut output = BufWriter::new(file);

    format.write_metadata(&mut output, metadata)?;
    format.write_context(&mut output, context)?;
    payload.write_payload(&mut output)?;
    output.flush()
}

/// What the container calls itself.
///
/// Part of Ghidra function `FUN_0130d680` at `0x0130D680`.
pub const CONTAINER_NAME: &str = "Analysis result";

/// Which version of the container format this is.
///
/// Part of Ghidra function `FUN_0130d680` at `0x0130D680`.
pub const FORMAT_VERSION: &str = "V1.00";

/// When the format was settled.
///
/// Part of Ghidra function `FUN_0130d680` at `0x0130D680`.
///
/// Compiled in rather than taken from the clock, so every file ever written by
/// this build carries the same one: it dates the format, not the file.
pub const FORMAT_TIMESTAMP: &str = "08/08/01 17:00 CET";

/// What the application's own version is written after.
///
/// Part of Ghidra function `FUN_0130d680` at `0x0130D680`.
pub const APPLICATION_PREFIX: &str = "TINA ";

/// The notice every container carries.
///
/// Part of Ghidra function `FUN_0130d680` at `0x0130D680`.
///
/// The line ending inside it is a newline followed by a carriage return —
/// the two the other way round from the convention the rest of the platform
/// uses. Kept as it is, because a reader that splits on the usual pair finds
/// nothing to split on and one that splits on either finds an empty line
/// between the two sentences, and both of those are what the original
/// produces.
pub const COPYRIGHT_NOTICE: &str =
    "(c) Copyright 1993,94,95,96 DesignSoft Inc.\n\rAll rights reserved.";

/// How large the section holding the context is declared to be.
///
/// Part of Ghidra function `FUN_0130d680` at `0x0130D680`.
///
/// Sixteen bytes, which is what the context takes: eight for the owner and
/// four each for the two numbers after it.
pub const CONTEXT_SECTION_SIZE: u32 = 0x10;

/// How the file underneath is opened.
///
/// Part of Ghidra function `FUN_0130d680` at `0x0130D680`.
pub const STREAM_MODE: u32 = 0xff00;

/// Implements part of Ghidra function `FUN_0130d680` at `0x0130D680`.
///
/// What goes in the application field.
#[must_use]
pub fn application_field(application_version: &str) -> String {
    format!("{APPLICATION_PREFIX}{application_version}")
}

/// Implements part of Ghidra function `FUN_0130d680` at `0x0130D680`.
///
/// The metadata every analysis-result container is written with.
///
/// Five of the six fields are the same in every file this build writes; only
/// the application's own version comes from anywhere else. The container's
/// name and its description are the same words — the field that might have
/// said what the file holds says again what kind of file it is.
#[must_use]
pub const fn recovered_metadata(application_field: &str) -> AnalysisResultMetadata<'_> {
    AnalysisResultMetadata {
        container_name: CONTAINER_NAME,
        format_version: FORMAT_VERSION,
        format_timestamp: FORMAT_TIMESTAMP,
        description: CONTAINER_NAME,
        application_version: application_field,
        copyright_notice: COPYRIGHT_NOTICE,
    }
}

#[cfg(test)]
mod tests {
    use std::fs;
    use std::sync::atomic::{AtomicU64, Ordering};

    use super::*;

    static NEXT_FILE_ID: AtomicU64 = AtomicU64::new(0);

    struct TestContainerFormat;

    impl AnalysisResultContainerFormat for TestContainerFormat {
        fn write_metadata(
            &self,
            output: &mut dyn Write,
            metadata: &AnalysisResultMetadata<'_>,
        ) -> io::Result<()> {
            output.write_all(metadata.container_name.as_bytes())?;
            output.write_all(b"|")?;
            output.write_all(metadata.format_version.as_bytes())?;
            output.write_all(b"|")
        }

        fn write_context(
            &self,
            output: &mut dyn Write,
            context: AnalysisResultContext,
        ) -> io::Result<()> {
            output.write_all(&context.owner_id.to_le_bytes())?;
            output.write_all(&context.analysis_kind.to_le_bytes())?;
            output.write_all(&context.analysis_variant.to_le_bytes())
        }
    }

    struct TestPayload(&'static [u8]);

    impl AnalysisResultPayload for TestPayload {
        fn write_payload(&self, output: &mut dyn Write) -> io::Result<()> {
            output.write_all(self.0)
        }
    }

    struct FailingPayload;

    impl AnalysisResultPayload for FailingPayload {
        fn write_payload(&self, _output: &mut dyn Write) -> io::Result<()> {
            Err(io::Error::other("payload failed"))
        }
    }

    #[test]
    fn writer_truncates_destination_and_preserves_container_order() -> io::Result<()> {
        let path = unique_test_path();
        fs::write(&path, b"old data that must be truncated")?;
        let metadata = test_metadata();
        let context = AnalysisResultContext {
            owner_id: 0x0102_0304_0506_0708,
            analysis_kind: 0x1112_1314,
            analysis_variant: 0x2122_2324,
        };

        let result = write_analysis_result_file(
            &path,
            &TestContainerFormat,
            &metadata,
            context,
            &TestPayload(b"payload"),
        );
        let bytes = fs::read(&path)?;
        fs::remove_file(&path)?;

        result?;
        let mut expected = b"Analysis result|V1.00|".to_vec();
        expected.extend_from_slice(&context.owner_id.to_le_bytes());
        expected.extend_from_slice(&context.analysis_kind.to_le_bytes());
        expected.extend_from_slice(&context.analysis_variant.to_le_bytes());
        expected.extend_from_slice(b"payload");
        assert_eq!(bytes, expected);
        Ok(())
    }

    #[test]
    fn writer_returns_payload_error_and_keeps_partial_file() -> io::Result<()> {
        let path = unique_test_path();

        let error = write_analysis_result_file(
            &path,
            &TestContainerFormat,
            &test_metadata(),
            AnalysisResultContext {
                owner_id: 0,
                analysis_kind: 0,
                analysis_variant: 0,
            },
            &FailingPayload,
        )
        .expect_err("the test payload must fail");
        let metadata = fs::metadata(&path)?;
        fs::remove_file(&path)?;

        assert_eq!(error.kind(), io::ErrorKind::Other);
        assert!(metadata.len() > 0);
        Ok(())
    }

    fn test_metadata() -> AnalysisResultMetadata<'static> {
        AnalysisResultMetadata {
            container_name: "Analysis result",
            format_version: "V1.00",
            format_timestamp: "format timestamp",
            description: "Analysis result",
            application_version: "TIARA test",
            copyright_notice: "test",
        }
    }

    fn unique_test_path() -> std::path::PathBuf {
        let id = NEXT_FILE_ID.fetch_add(1, Ordering::Relaxed);
        std::env::temp_dir().join(format!(
            "tiara-analysis-result-{}-{id}.bin",
            std::process::id()
        ))
    }
}

#[cfg(test)]
mod metadata_tests {
    use super::*;

    #[test]
    fn the_container_names_itself_after_what_it_holds() {
        assert_eq!(CONTAINER_NAME, "Analysis result");
    }

    #[test]
    fn the_description_says_the_same_thing_as_the_name() {
        let metadata = recovered_metadata("16");

        assert_eq!(metadata.description, metadata.container_name);
    }

    #[test]
    fn the_application_field_is_the_product_and_its_version() {
        assert_eq!(application_field("16"), "TINA 16");
        assert_eq!(application_field(""), "TINA ");
    }

    #[test]
    fn only_the_application_field_varies_between_files() {
        let first = recovered_metadata("16");
        let second = recovered_metadata("17");

        assert_eq!(first.container_name, second.container_name);
        assert_eq!(first.format_version, second.format_version);
        assert_eq!(first.format_timestamp, second.format_timestamp);
        assert_eq!(first.copyright_notice, second.copyright_notice);
        assert_ne!(first.application_version, second.application_version);
    }

    #[test]
    fn the_format_timestamp_dates_the_format_rather_than_the_file() {
        // Compiled in, so two files written years apart carry the same one.
        assert_eq!(FORMAT_TIMESTAMP, "08/08/01 17:00 CET");
        assert_eq!(
            recovered_metadata("16").format_timestamp,
            recovered_metadata("99").format_timestamp
        );
    }

    #[test]
    fn the_notice_ends_its_first_line_the_wrong_way_round() {
        assert!(COPYRIGHT_NOTICE.contains("\n\r"));
        assert!(!COPYRIGHT_NOTICE.contains("\r\n"));
    }

    #[test]
    fn a_reader_splitting_on_the_usual_pair_finds_one_line() {
        assert_eq!(COPYRIGHT_NOTICE.split("\r\n").count(), 1);
    }

    #[test]
    fn the_notice_names_the_years_and_reserves_the_rest() {
        assert!(COPYRIGHT_NOTICE.contains("1993,94,95,96"));
        assert!(COPYRIGHT_NOTICE.ends_with("All rights reserved."));
    }

    #[test]
    fn the_context_section_is_as_large_as_the_context() {
        let context = std::mem::size_of::<u64>() + 2 * std::mem::size_of::<u32>();

        assert_eq!(CONTEXT_SECTION_SIZE as usize, context);
    }
}
