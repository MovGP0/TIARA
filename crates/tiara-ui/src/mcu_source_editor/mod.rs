use std::path::{Path, PathBuf};

use iced::Task;

pub const TITLE: &str = "MCU Source Code Editor";
const COMPILE_SUCCESS: &str = "Successfully compiled";
const TEMPORARY_ASSEMBLY_FILE: &str = "flash_rom.asm";

pub trait SourceTextStore {
    /// Loads source lines without selecting an encoding in the editor layer.
    ///
    /// # Errors
    ///
    /// Returns a caller-defined file, decoding, or format error.
    fn load_lines(&mut self, path: &Path) -> Result<Vec<String>, String>;

    /// Saves source lines with the encoding policy owned by the adapter.
    ///
    /// # Errors
    ///
    /// Returns a caller-defined file, encoding, or format error.
    fn save_lines(&mut self, path: &Path, lines: &[String]) -> Result<(), String>;
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct AssemblyCompileRequest {
    pub use_external_toolchain: bool,
    pub mcu_identifier: String,
    pub source_path: PathBuf,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum AssemblyCompileReport {
    Success,
    Failure { message: String, line: i32 },
}

pub trait AssemblyCompiler {
    /// Compiles one staged assembly source.
    ///
    /// # Errors
    ///
    /// Returns a native-library, toolchain, or invocation error.
    fn compile(
        &mut self,
        request: &AssemblyCompileRequest,
    ) -> Result<AssemblyCompileReport, String>;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum RequestedAction {
    Compile,
    Export,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    EditorChanged(Vec<String>),
    SaveToMacro,
    CompileRequested,
    ExportRequested,
    CloseRequested,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Window {
    editor_lines: Vec<String>,
    target_lines: Vec<String>,
    mcu_identifier: String,
    temporary_directory: PathBuf,
    messages: Vec<String>,
    accepted: bool,
    closed: bool,
    error_line: Option<i32>,
    centered_error_line: Option<i32>,
    editor_focused: bool,
    requested_action: Option<RequestedAction>,
}

impl Window {
    #[must_use]
    pub fn new(
        editor_lines: Vec<String>,
        target_lines: Vec<String>,
        mcu_identifier: impl Into<String>,
        temporary_directory: impl Into<PathBuf>,
    ) -> Self {
        Self {
            editor_lines,
            target_lines,
            mcu_identifier: mcu_identifier.into(),
            temporary_directory: temporary_directory.into(),
            messages: Vec::new(),
            accepted: false,
            closed: false,
            error_line: None,
            centered_error_line: None,
            editor_focused: false,
            requested_action: None,
        }
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::EditorChanged(lines) => self.editor_lines = lines,
            Message::SaveToMacro => self.save_to_macro(),
            Message::CompileRequested => self.requested_action = Some(RequestedAction::Compile),
            Message::ExportRequested => self.requested_action = Some(RequestedAction::Export),
            Message::CloseRequested => self.closed = true,
        }

        Task::none()
    }

    /// Ports Ghidra function `FUN_014131e0` at `0x014131E0`.
    ///
    /// Replaces the macro staging list with every editor line, marks the
    /// private result as accepted, and closes the modal editor. This operation
    /// performs no file output and does not require a successful compile.
    pub fn save_to_macro(&mut self) {
        self.target_lines.clear();
        self.target_lines.clone_from(&self.editor_lines);
        self.accepted = true;
        self.closed = true;
    }

    /// Ports Ghidra function `FUN_01413470` at `0x01413470`.
    ///
    /// Saves the current source to `flash_rom.asm`, invokes the injected
    /// compiler, and replaces the diagnostic message after a normal compiler
    /// return. Compile failure focuses and centers the reported source line.
    /// It does not accept or close the editor.
    ///
    /// # Errors
    ///
    /// Returns a source-store or compiler-adapter error. A store error occurs
    /// after the previous error line was reset. A compiler-adapter error keeps
    /// the previous message list because the recovered handler clears it only
    /// after the native call returns.
    pub fn compile_current_source(
        &mut self,
        store: &mut impl SourceTextStore,
        compiler: &mut impl AssemblyCompiler,
        use_external_toolchain: bool,
    ) -> Result<AssemblyCompileReport, String> {
        self.error_line = None;
        let source_path = self.temporary_directory.join(TEMPORARY_ASSEMBLY_FILE);
        store.save_lines(&source_path, &self.editor_lines)?;
        let report = compiler.compile(&AssemblyCompileRequest {
            use_external_toolchain,
            mcu_identifier: self.mcu_identifier.clone(),
            source_path,
        })?;

        self.messages.clear();
        match &report {
            AssemblyCompileReport::Success => {
                self.messages.push(COMPILE_SUCCESS.to_owned());
            }
            AssemblyCompileReport::Failure { message, line } => {
                self.error_line = Some(*line);
                self.centered_error_line = Some(*line);
                self.editor_focused = true;
                self.messages
                    .push(format!("Error: {message} in line {line}"));
            }
        }
        self.requested_action = None;
        Ok(report)
    }

    /// Ports Ghidra function `FUN_014137c0` at `0x014137C0`.
    ///
    /// Writes every editor line only when the caller supplies a path accepted
    /// by the save dialog. It does not remember the path, compile, update the
    /// macro staging list, accept the edit, or close the editor.
    ///
    /// # Errors
    ///
    /// Returns the source-store error from an accepted export. Dialog cancel
    /// performs no adapter call and succeeds.
    pub fn export_current_source(
        &mut self,
        selected_path: Option<&Path>,
        store: &mut impl SourceTextStore,
    ) -> Result<(), String> {
        let Some(path) = selected_path else {
            self.requested_action = None;
            return Ok(());
        };
        store.save_lines(path, &self.editor_lines)?;
        self.requested_action = None;
        Ok(())
    }

    #[must_use]
    pub fn editor_lines(&self) -> &[String] {
        &self.editor_lines
    }

    #[must_use]
    pub fn target_lines(&self) -> &[String] {
        &self.target_lines
    }

    #[must_use]
    pub fn messages(&self) -> &[String] {
        &self.messages
    }

    #[must_use]
    pub const fn accepted(&self) -> bool {
        self.accepted
    }

    #[must_use]
    pub const fn closed(&self) -> bool {
        self.closed
    }

    #[must_use]
    pub const fn error_line(&self) -> Option<i32> {
        self.error_line
    }

    #[must_use]
    pub const fn centered_error_line(&self) -> Option<i32> {
        self.centered_error_line
    }

    #[must_use]
    pub const fn editor_focused(&self) -> bool {
        self.editor_focused
    }

    #[must_use]
    pub const fn requested_action(&self) -> Option<RequestedAction> {
        self.requested_action
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Default)]
    struct TestStore {
        writes: Vec<(PathBuf, Vec<String>)>,
        failure: Option<String>,
    }

    impl SourceTextStore for TestStore {
        fn load_lines(&mut self, _path: &Path) -> Result<Vec<String>, String> {
            Ok(Vec::new())
        }

        fn save_lines(&mut self, path: &Path, lines: &[String]) -> Result<(), String> {
            if let Some(failure) = &self.failure {
                return Err(failure.clone());
            }
            self.writes.push((path.to_owned(), lines.to_vec()));
            Ok(())
        }
    }

    #[derive(Debug)]
    struct TestCompiler {
        report: Result<AssemblyCompileReport, String>,
        requests: Vec<AssemblyCompileRequest>,
    }

    impl AssemblyCompiler for TestCompiler {
        fn compile(
            &mut self,
            request: &AssemblyCompileRequest,
        ) -> Result<AssemblyCompileReport, String> {
            self.requests.push(request.clone());
            self.report.clone()
        }
    }

    #[test]
    fn save_replaces_macro_staging_and_accepts_without_file_output() {
        let mut window = test_window();

        drop(window.update(Message::SaveToMacro));

        assert_eq!(window.target_lines(), ["MOV A, B", "END"]);
        assert!(window.accepted());
        assert!(window.closed());
        assert!(window.messages().is_empty());
    }

    #[test]
    fn compile_writes_temporary_source_and_reports_success() {
        let mut window = test_window();
        let mut store = TestStore::default();
        let mut compiler = TestCompiler {
            report: Ok(AssemblyCompileReport::Success),
            requests: Vec::new(),
        };

        let report = window.compile_current_source(&mut store, &mut compiler, true);

        assert_eq!(report, Ok(AssemblyCompileReport::Success));
        assert_eq!(store.writes[0].0, PathBuf::from("temp/flash_rom.asm"));
        assert_eq!(compiler.requests[0].mcu_identifier, "PIC16F84");
        assert!(compiler.requests[0].use_external_toolchain);
        assert_eq!(window.messages(), [COMPILE_SUCCESS]);
        assert!(!window.accepted());
        assert!(!window.closed());
    }

    #[test]
    fn compile_failure_replaces_messages_and_centers_the_error_line() {
        let mut window = test_window();
        let mut store = TestStore::default();
        let mut compiler = TestCompiler {
            report: Ok(AssemblyCompileReport::Failure {
                message: "unknown opcode".to_owned(),
                line: 7,
            }),
            requests: Vec::new(),
        };

        let report = window.compile_current_source(&mut store, &mut compiler, false);

        assert!(matches!(
            report,
            Ok(AssemblyCompileReport::Failure { line: 7, .. })
        ));
        assert_eq!(window.messages(), ["Error: unknown opcode in line 7"]);
        assert_eq!(window.error_line(), Some(7));
        assert_eq!(window.centered_error_line(), Some(7));
        assert!(window.editor_focused());
    }

    #[test]
    fn compiler_exception_keeps_old_messages_after_source_write() {
        let mut window = test_window();
        window.messages.push("old message".to_owned());
        window.error_line = Some(3);
        let mut store = TestStore::default();
        let mut compiler = TestCompiler {
            report: Err("DLL unavailable".to_owned()),
            requests: Vec::new(),
        };

        let error = window
            .compile_current_source(&mut store, &mut compiler, false)
            .expect_err("the compiler error must propagate");

        assert_eq!(error, "DLL unavailable");
        assert_eq!(store.writes.len(), 1);
        assert_eq!(window.messages(), ["old message"]);
        assert_eq!(window.error_line(), None);
    }

    #[test]
    fn export_cancel_is_noop_and_acceptance_writes_without_committing() {
        let mut window = test_window();
        let mut store = TestStore::default();

        window
            .export_current_source(None, &mut store)
            .expect("cancel must succeed");
        assert!(store.writes.is_empty());

        window
            .export_current_source(Some(Path::new("output.asm")), &mut store)
            .expect("export must succeed");

        assert_eq!(store.writes[0].0, PathBuf::from("output.asm"));
        assert!(!window.accepted());
        assert!(!window.closed());
    }

    fn test_window() -> Window {
        Window::new(
            vec!["MOV A, B".to_owned(), "END".to_owned()],
            vec!["old".to_owned()],
            "PIC16F84",
            "temp",
        )
    }
}
