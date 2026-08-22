//! Iced state and testable adapters for target-specific SPICE netlist export.
//!
//! `iced` owns the option-dialog state and messages. `rfd` supplies the native
//! save dialog. The standard library supplies path and file operations. The
//! application supplies circuit validation and conversion through
//! [`NetlistBackend`], because the recovered proprietary device converters do
//! not define a reusable public contract.

use std::error::Error;
use std::fmt;
use std::path::{Path, PathBuf};

use iced::widget::{button, checkbox, column, pick_list, radio, row, text};
use iced::{Element, Task};
use rfd::FileDialog;

pub const TITLE: &str = "SPICE Export";
pub const FORM_RESOURCE: &str = "frmSpiceExportDlg";
pub const LIBRARY_EVALUATION: &str = "iced supplies state, messages, and widgets; rfd supplies the native save dialog; std supplies paths and final file writes; a TIARA NetlistBackend adapter owns circuit validation and device conversion.";

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum SpiceTarget {
    #[default]
    Tina,
    PSpice,
    LtSpice,
    Simetrix,
    Simplis,
    Xyce,
}

impl SpiceTarget {
    pub const ALL: [Self; 6] = [
        Self::Tina,
        Self::PSpice,
        Self::LtSpice,
        Self::Simetrix,
        Self::Simplis,
        Self::Xyce,
    ];

    #[must_use]
    pub const fn filename_infix(self) -> &'static str {
        match self {
            Self::Tina => ".tina.",
            Self::PSpice => ".pspice.",
            Self::LtSpice => ".ltspice.",
            Self::Simetrix => ".simetrix.",
            Self::Simplis => ".simplis.",
            Self::Xyce => ".xyce.",
        }
    }

    #[must_use]
    pub const fn header_suffix(self) -> &'static str {
        match self {
            Self::Tina => " (TINA Netlist Editor format)",
            Self::PSpice => " (PSpice format)",
            Self::LtSpice => " (LTSpice format)",
            Self::Simetrix => " (SIMetrix format)",
            Self::Simplis => " (Simplis format)",
            Self::Xyce => " (Xyce format)",
        }
    }

    #[must_use]
    pub const fn library_directive(self) -> &'static str {
        if matches!(self, Self::Xyce) {
            ".INC"
        } else {
            ".LIB"
        }
    }
}

impl fmt::Display for SpiceTarget {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::Tina => "Tina",
            Self::PSpice => "PSpice",
            Self::LtSpice => "LTSpice",
            Self::Simetrix => "SIMetrix",
            Self::Simplis => "SIMPLIS",
            Self::Xyce => "Xyce",
        })
    }
}

impl TryFrom<usize> for SpiceTarget {
    type Error = ();

    fn try_from(value: usize) -> Result<Self, Self::Error> {
        Self::ALL.get(value).copied().ok_or(())
    }
}

/// Ports Ghidra function `FUN_01bae0d0` at `0x01BAE0D0`.
///
/// An unsupported index leaves the destination unchanged.
pub fn map_target_filename_infix(destination: &mut String, target_index: usize) {
    if let Ok(target) = SpiceTarget::try_from(target_index) {
        target.filename_infix().clone_into(destination);
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AnalysisKind {
    Transient,
    DcTransfer,
    AcTransfer,
}

impl AnalysisKind {
    const fn mask(self) -> u8 {
        match self {
            Self::Transient => 1,
            Self::DcTransfer => 4,
            Self::AcTransfer => 2,
        }
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct AnalysisSelection {
    mask: u8,
}

impl AnalysisSelection {
    #[must_use]
    pub const fn transient_default() -> Self {
        Self { mask: 1 }
    }

    pub const fn set(&mut self, kind: AnalysisKind, selected: bool) {
        if selected {
            self.mask |= kind.mask();
        } else {
            self.mask &= !kind.mask();
        }
    }

    #[must_use]
    pub const fn contains(self, kind: AnalysisKind) -> bool {
        self.mask & kind.mask() != 0
    }

    #[must_use]
    pub const fn mask(self) -> u8 {
        self.mask
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum MacroMode {
    #[default]
    Reference,
    Content,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum ExportScope {
    #[default]
    Circuit,
    MacroNeedsEnd,
    MacroHasEnd,
}

impl ExportScope {
    const fn termination(self) -> Option<&'static str> {
        match self {
            Self::Circuit => Some(".END"),
            Self::MacroNeedsEnd => Some(".ENDS"),
            Self::MacroHasEnd => None,
        }
    }
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct AnalysisDirectives {
    pub transient: Option<String>,
    pub dc_transfer: Option<String>,
    pub ac_transfer: Option<String>,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct GeneratedNetlist {
    pub title: String,
    pub statements: Vec<String>,
    pub libraries: Vec<String>,
    pub analysis: AnalysisDirectives,
    pub scope: ExportScope,
}

pub trait NetlistBackend {
    type Graph;
    type AnalysisState;
    type ExportObject;

    /// # Errors
    ///
    /// Returns a graph diagnostic when export cannot start.
    fn validate(&mut self, graph: &Self::Graph) -> Result<(), String>;

    /// # Errors
    ///
    /// Returns a conversion diagnostic and no partial netlist.
    fn generate(
        &mut self,
        target: SpiceTarget,
        macro_mode: MacroMode,
        graph: &Self::Graph,
        analysis_state: &Self::AnalysisState,
        export_object: &Self::ExportObject,
    ) -> Result<GeneratedNetlist, String>;
}

pub trait FileWriter {
    /// # Errors
    ///
    /// Returns the final file-system write error.
    fn write(&mut self, path: &Path, contents: &str) -> Result<(), String>;
}

pub trait ProgressReporter {
    fn show(&mut self, caption: &str);
    fn close(&mut self);
}

pub trait PathProbe {
    fn directory_exists(&self, path: &Path) -> bool;
}

pub trait SaveDialogAdapter {
    /// # Errors
    ///
    /// Returns a native dialog failure. User cancellation returns `Ok(None)`.
    fn select_path(&mut self, request: &SaveDialogRequest) -> Result<Option<PathBuf>, String>;
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SaveDialogRequest {
    pub suggested_file_name: String,
    pub initial_directory: PathBuf,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ExportContext<'a, Graph, AnalysisState, ExportObject> {
    pub graph: &'a Graph,
    pub analysis_state: &'a AnalysisState,
    pub export_object: &'a ExportObject,
}

#[derive(Debug)]
pub struct ExportJob<'a, Graph, AnalysisState, ExportObject> {
    pub output_path: &'a Path,
    pub target: SpiceTarget,
    pub analyses: AnalysisSelection,
    pub macro_mode: MacroMode,
    pub context: ExportContext<'a, Graph, AnalysisState, ExportObject>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum SpiceExportError {
    Dialog(String),
    Validation(String),
    Generation(String),
    Write(String),
}

impl fmt::Display for SpiceExportError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        let (stage, message) = match self {
            Self::Dialog(message) => ("save dialog", message),
            Self::Validation(message) => ("graph validation", message),
            Self::Generation(message) => ("netlist generation", message),
            Self::Write(message) => ("file write", message),
        };
        write!(formatter, "{stage} failed: {message}")
    }
}

impl Error for SpiceExportError {}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ExportClickOutcome {
    Cancelled,
    Written(PathBuf),
}

#[derive(Debug, Default)]
pub struct SpiceExporter;

impl SpiceExporter {
    /// Ports Ghidra function `FUN_01a1f1b0` at `0x01A1F1B0`.
    ///
    /// Validation runs before progress display. Generation failure stops before
    /// the final write. The progress reporter closes after generation or write.
    ///
    /// # Errors
    ///
    /// Returns the exact failed stage without writing partial output.
    pub fn export<Backend, Writer, Progress>(
        job: &ExportJob<'_, Backend::Graph, Backend::AnalysisState, Backend::ExportObject>,
        backend: &mut Backend,
        writer: &mut Writer,
        progress: &mut Progress,
    ) -> Result<(), SpiceExportError>
    where
        Backend: NetlistBackend,
        Writer: FileWriter,
        Progress: ProgressReporter,
    {
        backend
            .validate(job.context.graph)
            .map_err(SpiceExportError::Validation)?;
        progress.show("Exporting...");
        let result = backend
            .generate(
                job.target,
                job.macro_mode,
                job.context.graph,
                job.context.analysis_state,
                job.context.export_object,
            )
            .map_err(SpiceExportError::Generation)
            .map(|generated| assemble_netlist(job.target, job.analyses, &generated))
            .and_then(|contents| {
                writer
                    .write(job.output_path, &contents)
                    .map_err(SpiceExportError::Write)
            });
        progress.close();
        result
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
enum ExportIntent {
    #[default]
    Idle,
    Requested,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    TargetSelected(SpiceTarget),
    MacroModeSelected(MacroMode),
    AnalysisChanged(AnalysisKind, bool),
    ExportPressed,
    CancelPressed,
}

#[derive(Debug)]
pub struct Window {
    source_path: PathBuf,
    user_examples_directory: PathBuf,
    export_extension: String,
    target: SpiceTarget,
    macro_mode: MacroMode,
    analyses: AnalysisSelection,
    export_intent: ExportIntent,
}

impl Window {
    #[must_use]
    pub fn new(
        source_path: PathBuf,
        user_examples_directory: PathBuf,
        export_extension: impl Into<String>,
    ) -> Self {
        Self {
            source_path,
            user_examples_directory,
            export_extension: export_extension.into(),
            target: SpiceTarget::default(),
            macro_mode: MacroMode::default(),
            analyses: AnalysisSelection::transient_default(),
            export_intent: ExportIntent::Idle,
        }
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::TargetSelected(target) => self.target = target,
            Message::MacroModeSelected(mode) => self.macro_mode = mode,
            Message::AnalysisChanged(kind, selected) => self.analyses.set(kind, selected),
            Message::ExportPressed => self.export_intent = ExportIntent::Requested,
            Message::CancelPressed => self.export_intent = ExportIntent::Idle,
        }
        Task::none()
    }

    #[must_use]
    pub fn take_export_request(&mut self) -> bool {
        std::mem::take(&mut self.export_intent) == ExportIntent::Requested
    }

    /// Ports Ghidra function `FUN_01bae230` at `0x01BAE230`.
    ///
    /// Save-dialog cancellation returns before validation, conversion, progress,
    /// or file output. Acceptance forwards the exact target, analysis mask, and
    /// macro mode to the exporter.
    ///
    /// # Errors
    ///
    /// Returns save-dialog, validation, generation, or final-write failures.
    pub fn export<Dialog, Probe, Backend, Writer, Progress>(
        &self,
        dialog: &mut Dialog,
        probe: &Probe,
        backend: &mut Backend,
        writer: &mut Writer,
        progress: &mut Progress,
        context: ExportContext<'_, Backend::Graph, Backend::AnalysisState, Backend::ExportObject>,
    ) -> Result<ExportClickOutcome, SpiceExportError>
    where
        Dialog: SaveDialogAdapter,
        Probe: PathProbe,
        Backend: NetlistBackend,
        Writer: FileWriter,
        Progress: ProgressReporter,
    {
        let request = self.save_dialog_request(probe);
        let Some(output_path) = dialog
            .select_path(&request)
            .map_err(SpiceExportError::Dialog)?
        else {
            return Ok(ExportClickOutcome::Cancelled);
        };
        SpiceExporter::export(
            &ExportJob {
                output_path: &output_path,
                target: self.target,
                analyses: self.analyses,
                macro_mode: self.macro_mode,
                context,
            },
            backend,
            writer,
            progress,
        )?;
        Ok(ExportClickOutcome::Written(output_path))
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        column![
            row![
                text("Target"),
                pick_list(SpiceTarget::ALL, Some(self.target), Message::TargetSelected)
            ],
            row![
                text("Spice macros exported by"),
                radio(
                    "reference",
                    MacroMode::Reference,
                    Some(self.macro_mode),
                    Message::MacroModeSelected
                ),
                radio(
                    "content",
                    MacroMode::Content,
                    Some(self.macro_mode),
                    Message::MacroModeSelected
                )
            ],
            checkbox("Transient", self.analyses.contains(AnalysisKind::Transient))
                .on_toggle(|selected| Message::AnalysisChanged(AnalysisKind::Transient, selected)),
            checkbox(
                "DC Transfer",
                self.analyses.contains(AnalysisKind::DcTransfer)
            )
            .on_toggle(|selected| Message::AnalysisChanged(AnalysisKind::DcTransfer, selected)),
            checkbox(
                "AC Transfer",
                self.analyses.contains(AnalysisKind::AcTransfer)
            )
            .on_toggle(|selected| Message::AnalysisChanged(AnalysisKind::AcTransfer, selected)),
            row![
                button("Export").on_press(Message::ExportPressed),
                button("Cancel").on_press(Message::CancelPressed)
            ]
        ]
        .spacing(10)
        .into()
    }

    fn save_dialog_request(&self, probe: &impl PathProbe) -> SaveDialogRequest {
        let source_directory = self.source_path.parent().unwrap_or_else(|| Path::new(""));
        let initial_directory = if probe.directory_exists(source_directory) {
            source_directory.to_path_buf()
        } else {
            self.user_examples_directory.clone()
        };
        SaveDialogRequest {
            suggested_file_name: proposed_file_name(
                &self.source_path,
                self.target,
                &self.export_extension,
            ),
            initial_directory,
        }
    }
}

#[derive(Debug, Default)]
pub struct StdFileWriter;

impl FileWriter for StdFileWriter {
    fn write(&mut self, path: &Path, contents: &str) -> Result<(), String> {
        std::fs::write(path, contents).map_err(|error| error.to_string())
    }
}

#[derive(Debug, Default)]
pub struct StdPathProbe;

impl PathProbe for StdPathProbe {
    fn directory_exists(&self, path: &Path) -> bool {
        path.is_dir()
    }
}

#[derive(Debug, Default)]
pub struct RfdSaveDialog;

impl SaveDialogAdapter for RfdSaveDialog {
    fn select_path(&mut self, request: &SaveDialogRequest) -> Result<Option<PathBuf>, String> {
        Ok(FileDialog::new()
            .set_directory(&request.initial_directory)
            .set_file_name(&request.suggested_file_name)
            .save_file())
    }
}

fn proposed_file_name(source: &Path, target: SpiceTarget, extension: &str) -> String {
    let stem = source
        .file_stem()
        .and_then(|value| value.to_str())
        .unwrap_or_default();
    format!(
        "{stem}{}{extension}",
        target.filename_infix(),
        extension = extension.trim_start_matches('.')
    )
}

fn assemble_netlist(
    target: SpiceTarget,
    analyses: AnalysisSelection,
    generated: &GeneratedNetlist,
) -> String {
    let mut lines = vec![format!("{}{}", generated.title, target.header_suffix())];
    append_analysis_directives(&mut lines, analyses, &generated.analysis);
    lines.extend(generated.statements.iter().cloned());
    lines.extend(
        generated
            .libraries
            .iter()
            .map(|path| format!("{} \"{path}\"", target.library_directive())),
    );
    if matches!(target, SpiceTarget::PSpice) {
        lines.push(".LIB".to_owned());
    }
    lines.push(String::new());
    if let Some(termination) = generated.scope.termination() {
        lines.push(termination.to_owned());
    }
    let mut output = lines.join("\n");
    output.push('\n');
    output
}

fn append_analysis_directives(
    lines: &mut Vec<String>,
    selection: AnalysisSelection,
    directives: &AnalysisDirectives,
) {
    for (kind, directive) in [
        (AnalysisKind::DcTransfer, &directives.dc_transfer),
        (AnalysisKind::AcTransfer, &directives.ac_transfer),
        (AnalysisKind::Transient, &directives.transient),
    ] {
        if selection.contains(kind)
            && let Some(directive) = directive
        {
            lines.push(directive.clone());
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Default)]
    struct FakeDialog {
        selected: Option<PathBuf>,
        requests: Vec<SaveDialogRequest>,
    }

    impl SaveDialogAdapter for FakeDialog {
        fn select_path(&mut self, request: &SaveDialogRequest) -> Result<Option<PathBuf>, String> {
            self.requests.push(request.clone());
            Ok(self.selected.clone())
        }
    }

    #[derive(Debug, Default)]
    struct FakeProbe {
        source_exists: bool,
    }

    impl PathProbe for FakeProbe {
        fn directory_exists(&self, _path: &Path) -> bool {
            self.source_exists
        }
    }

    #[derive(Debug, Default)]
    struct FakeWriter {
        writes: Vec<(PathBuf, String)>,
    }

    impl FileWriter for FakeWriter {
        fn write(&mut self, path: &Path, contents: &str) -> Result<(), String> {
            self.writes.push((path.to_path_buf(), contents.to_owned()));
            Ok(())
        }
    }

    #[derive(Debug, Default)]
    struct FakeProgress {
        events: Vec<String>,
    }

    impl ProgressReporter for FakeProgress {
        fn show(&mut self, caption: &str) {
            self.events.push(format!("show:{caption}"));
        }

        fn close(&mut self) {
            self.events.push("close".to_owned());
        }
    }

    #[derive(Debug, Default)]
    struct FakeBackend {
        validate_error: Option<String>,
        generate_error: Option<String>,
        calls: Vec<String>,
    }

    impl NetlistBackend for FakeBackend {
        type Graph = String;
        type AnalysisState = String;
        type ExportObject = String;

        fn validate(&mut self, graph: &Self::Graph) -> Result<(), String> {
            self.calls.push(format!("validate:{graph}"));
            self.validate_error
                .as_ref()
                .map_or(Ok(()), |error| Err(error.clone()))
        }

        fn generate(
            &mut self,
            target: SpiceTarget,
            macro_mode: MacroMode,
            graph: &Self::Graph,
            analysis_state: &Self::AnalysisState,
            export_object: &Self::ExportObject,
        ) -> Result<GeneratedNetlist, String> {
            self.calls.push(format!(
                "generate:{target}:{macro_mode:?}:{graph}:{analysis_state}:{export_object}"
            ));
            if let Some(error) = &self.generate_error {
                return Err(error.clone());
            }
            Ok(GeneratedNetlist {
                title: "Circuit".to_owned(),
                statements: vec!["R1 1 0 1k".to_owned()],
                libraries: vec!["models.lib".to_owned()],
                analysis: AnalysisDirectives {
                    transient: Some(".TRAN 1n 10n".to_owned()),
                    dc_transfer: Some(".DC V1 0 5 1".to_owned()),
                    ac_transfer: Some(".AC DEC 10 1 1Meg".to_owned()),
                },
                scope: ExportScope::Circuit,
            })
        }
    }

    fn context() -> ExportContext<'static, String, String, String> {
        static GRAPH: std::sync::LazyLock<String> = std::sync::LazyLock::new(|| "graph".to_owned());
        static ANALYSIS: std::sync::LazyLock<String> =
            std::sync::LazyLock::new(|| "analysis".to_owned());
        static EXPORT: std::sync::LazyLock<String> =
            std::sync::LazyLock::new(|| "caller".to_owned());
        ExportContext {
            graph: &GRAPH,
            analysis_state: &ANALYSIS,
            export_object: &EXPORT,
        }
    }

    #[test]
    fn target_index_mapping_preserves_unsupported_destination() {
        let mut value = "unchanged".to_owned();
        map_target_filename_infix(&mut value, 99);
        assert_eq!(value, "unchanged");
        for (index, expected) in [
            ".tina.",
            ".pspice.",
            ".ltspice.",
            ".simetrix.",
            ".simplis.",
            ".xyce.",
        ]
        .into_iter()
        .enumerate()
        {
            map_target_filename_infix(&mut value, index);
            assert_eq!(value, expected);
        }
    }

    #[test]
    fn save_dialog_cancel_stops_before_backend_and_write() {
        let window = Window::new(
            PathBuf::from("C:/design/main.tsc"),
            PathBuf::from("C:/User Examples"),
            "cir",
        );
        let mut dialog = FakeDialog::default();
        let mut backend = FakeBackend::default();
        let mut writer = FakeWriter::default();
        let mut progress = FakeProgress::default();
        let outcome = window.export(
            &mut dialog,
            &FakeProbe {
                source_exists: true,
            },
            &mut backend,
            &mut writer,
            &mut progress,
            context(),
        );
        assert_eq!(outcome, Ok(ExportClickOutcome::Cancelled));
        assert_eq!(dialog.requests[0].suggested_file_name, "main.tina.cir");
        assert_eq!(dialog.requests[0].initial_directory, Path::new("C:/design"));
        assert!(backend.calls.is_empty());
        assert!(writer.writes.is_empty());
        assert!(progress.events.is_empty());
    }

    #[test]
    fn accepted_export_routes_options_and_writes_after_generation() {
        let mut window = Window::new(
            PathBuf::from("C:/missing/main.tsc"),
            PathBuf::from("C:/User Examples"),
            ".cir",
        );
        drop(window.update(Message::TargetSelected(SpiceTarget::Xyce)));
        drop(window.update(Message::MacroModeSelected(MacroMode::Content)));
        drop(window.update(Message::AnalysisChanged(AnalysisKind::DcTransfer, true)));
        let output = PathBuf::from("C:/out/main.xyce.cir");
        let mut dialog = FakeDialog {
            selected: Some(output.clone()),
            requests: Vec::new(),
        };
        let mut backend = FakeBackend::default();
        let mut writer = FakeWriter::default();
        let mut progress = FakeProgress::default();
        let outcome = window.export(
            &mut dialog,
            &FakeProbe::default(),
            &mut backend,
            &mut writer,
            &mut progress,
            context(),
        );
        assert_eq!(outcome, Ok(ExportClickOutcome::Written(output.clone())));
        assert_eq!(
            dialog.requests[0].initial_directory,
            Path::new("C:/User Examples")
        );
        assert!(backend.calls[1].contains("generate:Xyce:Content"));
        assert_eq!(progress.events, ["show:Exporting...", "close"]);
        assert_eq!(writer.writes[0].0, output);
        assert!(writer.writes[0].1.contains("Circuit (Xyce format)"));
        assert!(writer.writes[0].1.contains(".DC V1 0 5 1"));
        assert!(writer.writes[0].1.contains(".TRAN 1n 10n"));
        assert!(!writer.writes[0].1.contains(".AC DEC"));
        assert!(writer.writes[0].1.contains(".INC \"models.lib\""));
        assert!(writer.writes[0].1.ends_with(".END\n"));
    }

    #[test]
    fn validation_and_generation_failures_do_not_write_partial_files() {
        let window = Window::new(PathBuf::from("main.tsc"), PathBuf::from("examples"), "cir");
        let output = PathBuf::from("out.cir");
        let mut dialog = FakeDialog {
            selected: Some(output),
            requests: Vec::new(),
        };
        let mut backend = FakeBackend {
            validate_error: Some("invalid graph".to_owned()),
            ..FakeBackend::default()
        };
        let mut writer = FakeWriter::default();
        let mut progress = FakeProgress::default();
        let validation = window.export(
            &mut dialog,
            &FakeProbe::default(),
            &mut backend,
            &mut writer,
            &mut progress,
            context(),
        );
        assert_eq!(
            validation,
            Err(SpiceExportError::Validation("invalid graph".to_owned()))
        );
        assert!(progress.events.is_empty());
        assert!(writer.writes.is_empty());

        backend.validate_error = None;
        backend.generate_error = Some("unsupported device".to_owned());
        let generation = window.export(
            &mut dialog,
            &FakeProbe::default(),
            &mut backend,
            &mut writer,
            &mut progress,
            context(),
        );
        assert_eq!(
            generation,
            Err(SpiceExportError::Generation(
                "unsupported device".to_owned()
            ))
        );
        assert_eq!(progress.events, ["show:Exporting...", "close"]);
        assert!(writer.writes.is_empty());
    }
}
