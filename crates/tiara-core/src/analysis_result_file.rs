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
