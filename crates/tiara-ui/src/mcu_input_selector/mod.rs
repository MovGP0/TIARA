use std::path::{Path, PathBuf};

use iced::Task;

use crate::mcu_source_editor::{
    AssemblyCompileReport, AssemblyCompileRequest, AssemblyCompiler, SourceTextStore,
};

pub const TITLE: &str = "Select MCU Input";
const NEW_ASSEMBLY_NAME: &str = "noname.asm";
const NEW_FLOWCHART_NAME: &str = "noname.tfc";

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum McuFamily {
    Pic10,
    Pic12,
    Pic14,
    Other,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum InputMode {
    Assembly,
    HexAndList,
    Flowchart,
    CProject,
    KernelImage,
}

impl InputMode {
    const fn from_radio_index(index: usize) -> Option<Self> {
        match index {
            0 => Some(Self::Assembly),
            1 => Some(Self::HexAndList),
            2 => Some(Self::Flowchart),
            3 => Some(Self::CProject),
            4 => Some(Self::KernelImage),
            _ => None,
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ClosePermission {
    Blocked,
    Permitted,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SourceKind {
    Existing,
    New,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ModalResult<T> {
    Accepted(T),
    Cancelled,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SourceEditorRequest {
    pub kind: SourceKind,
    pub file_name: String,
    pub previous_file_name: Option<String>,
    pub lines: Vec<String>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SourceEditorResult {
    pub lines: Vec<String>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct FlowchartRequest {
    pub file_name: String,
    pub previous_file_name: String,
    pub mcu_identifier: String,
    pub working_directory: PathBuf,
    pub source_lines: Vec<String>,
    pub session_data: Vec<u8>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct FlowchartResult {
    pub file_name: String,
    pub source_lines: Vec<String>,
    pub session_data: Vec<u8>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CProjectRequest {
    pub mcu_identifier: String,
    pub working_directory: PathBuf,
    pub project_data: Vec<u8>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CProjectResult {
    pub status_bytes: [u8; 2],
    pub copy_back_status: u8,
    pub hex_outputs: Vec<String>,
    pub listing_outputs: Vec<String>,
    pub project_data: Vec<u8>,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct KernelImageCapabilities {
    pub can_select_boot_image: bool,
    pub can_select_data_image: bool,
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct KernelImageFields {
    pub values: [String; 6],
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct KernelImageRequest {
    pub capabilities: KernelImageCapabilities,
    pub fields: KernelImageFields,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ChildRequest {
    SourceEditor(SourceEditorRequest),
    Flowchart(FlowchartRequest),
    CProject(CProjectRequest),
    KernelImage(KernelImageRequest),
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SelectorContext {
    pub family: McuFamily,
    pub mcu_identifier: String,
    pub working_directory: PathBuf,
    pub temporary_directory: PathBuf,
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct McuInputModel {
    pub mode: Option<InputMode>,
    pub assembly_name: String,
    pub listing_name: String,
    pub hex_name: String,
    pub assembly_sources: Vec<String>,
    pub listing_files: Vec<String>,
    pub hex_files: Vec<String>,
    pub flowchart_session: Vec<u8>,
    pub c_project_data: Vec<u8>,
    pub kernel_image: KernelImageFields,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AcceptError {
    AssemblyNameRequired,
    HexOrListRequired,
    HexRequired,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    ModeSelected(usize),
    EditSource,
    NewSource,
    SourceEditorClosed(ModalResult<SourceEditorResult>),
    FlowchartClosed(ModalResult<FlowchartResult>),
    CProjectClosed(ModalResult<CProjectResult>),
    KernelImageClosed(ModalResult<KernelImageFields>),
    Cancel,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Window {
    context: SelectorContext,
    mode: InputMode,
    mode_snapshot: InputMode,
    action_group: InputMode,
    current_name: String,
    assembly_name: String,
    listing_name: String,
    hex_name: String,
    assembly_sources: Vec<String>,
    listing_files: Vec<String>,
    hex_files: Vec<String>,
    flowchart_session: Vec<u8>,
    c_project_data: Vec<u8>,
    c_project_status: [u8; 2],
    kernel_image: KernelImageFields,
    source_kind: SourceKind,
    close_permission: ClosePermission,
    child_request: Option<ChildRequest>,
    last_error: Option<String>,
}

impl Window {
    #[must_use]
    pub fn new(context: SelectorContext, model: McuInputModel) -> Self {
        let mode = model.mode.unwrap_or(InputMode::Assembly);
        let current_name = match mode {
            InputMode::HexAndList => model.hex_name.clone(),
            InputMode::Assembly | InputMode::Flowchart => model.assembly_name.clone(),
            InputMode::CProject | InputMode::KernelImage => String::new(),
        };
        Self {
            context,
            mode,
            mode_snapshot: mode,
            action_group: mode,
            current_name,
            assembly_name: model.assembly_name,
            listing_name: model.listing_name,
            hex_name: model.hex_name,
            assembly_sources: model.assembly_sources,
            listing_files: model.listing_files,
            hex_files: model.hex_files,
            flowchart_session: model.flowchart_session,
            c_project_data: model.c_project_data,
            c_project_status: [0; 2],
            kernel_image: model.kernel_image,
            source_kind: SourceKind::Existing,
            close_permission: ClosePermission::Blocked,
            child_request: None,
            last_error: None,
        }
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::ModeSelected(index) => {
                self.select_input_mode(index);
            }
            Message::EditSource => self.open_existing_source_editor(),
            Message::NewSource => self.start_new_source_editor(),
            Message::SourceEditorClosed(result) => self.finish_source_editor(result),
            Message::FlowchartClosed(result) => self.finish_flowchart_editor(result),
            Message::CProjectClosed(result) => self.finish_c_project_editor(result),
            Message::KernelImageClosed(result) => self.finish_kernel_image_editor(result),
            Message::Cancel => self.cancel(),
        }
        Task::none()
    }

    /// Ports Ghidra function `FUN_01418290` at `0x01418290`.
    ///
    /// Saves the previous mode, maps the radio selection, applies the compact
    /// PIC-family remapping for radio index 2, and activates only the selected
    /// action group. A mode change resets the displayed source name.
    pub fn select_input_mode(&mut self, radio_index: usize) {
        self.mode_snapshot = self.mode;
        let remapped_index = if radio_index == 2
            && matches!(
                self.context.family,
                McuFamily::Pic10 | McuFamily::Pic12 | McuFamily::Pic14
            ) {
            3
        } else {
            radio_index
        };
        let Some(mode) = InputMode::from_radio_index(remapped_index) else {
            return;
        };
        if self.mode != mode {
            NEW_ASSEMBLY_NAME.clone_into(&mut self.current_name);
        }
        self.mode = mode;
        self.action_group = mode;
    }

    /// Ports Ghidra function `FUN_01418330` at `0x01418330`.
    ///
    /// A cancelled file selection is a no-op. An accepted selection clears
    /// existing staging. With precompile disabled it stages the ASM path. With
    /// precompile enabled it stages `flash_rom.asm`, invokes the compiler, and
    /// switches to temporary HEX/LST outputs only after successful compilation.
    ///
    /// # Errors
    ///
    /// Returns source-store and compiler-adapter errors. A normal compile
    /// failure is stored in `last_error` and returned as a successful adapter
    /// call because the recovered modal stays open.
    pub fn select_asm_file(
        &mut self,
        selected_path: Option<&Path>,
        precompile: bool,
        use_external_toolchain: bool,
        store: &mut impl SourceTextStore,
        compiler: &mut impl AssemblyCompiler,
    ) -> Result<Option<AssemblyCompileReport>, String> {
        let Some(selected_path) = selected_path else {
            return Ok(None);
        };
        let selected = selected_path.to_string_lossy().into_owned();
        self.assembly_sources.clear();
        self.hex_files.clear();
        self.listing_files.clear();
        self.assembly_name.clone_from(&selected);
        self.current_name.clone_from(&selected);
        self.assembly_sources.push(selected);
        self.last_error = None;

        if !precompile {
            self.mode_snapshot = self.mode;
            return Ok(None);
        }

        let lines = store.load_lines(selected_path)?;
        let staged_source = self.context.temporary_directory.join("flash_rom.asm");
        store.save_lines(&staged_source, &lines)?;
        let report = compiler.compile(&AssemblyCompileRequest {
            use_external_toolchain,
            mcu_identifier: self.context.mcu_identifier.clone(),
            source_path: staged_source,
        })?;
        match &report {
            AssemblyCompileReport::Success => {
                let hex_path = self.context.temporary_directory.join("flash_rom.hex");
                let listing_path = self.context.temporary_directory.join("flash_rom.lst");
                self.hex_name = hex_path.to_string_lossy().into_owned();
                self.listing_name = listing_path.to_string_lossy().into_owned();
                self.hex_files.push(self.hex_name.clone());
                self.listing_files.push(self.listing_name.clone());
                self.mode = InputMode::HexAndList;
                self.action_group = InputMode::HexAndList;
            }
            AssemblyCompileReport::Failure { message, line } => {
                self.last_error = Some(format!("Error: {message} in line {line}"));
            }
        }
        self.mode_snapshot = self.mode;
        Ok(Some(report))
    }

    /// Ports Ghidra function `FUN_014187d0` at `0x014187D0`.
    ///
    /// Stages one accepted HEX or S19 path. If the current input mode differs
    /// from the saved snapshot, it first removes incompatible staged files.
    pub fn select_hex_file(&mut self, selected_path: Option<&Path>) {
        let Some(selected_path) = selected_path else {
            return;
        };
        self.clear_incompatible_files_if_mode_changed();
        self.hex_files.clear();
        self.hex_name = selected_path.to_string_lossy().into_owned();
        self.hex_files.push(self.hex_name.clone());
    }

    /// Ports Ghidra function `FUN_01418920` at `0x01418920`.
    ///
    /// Stages one accepted listing path. A cancelled selection is a no-op. A
    /// mode change removes incompatible files before the listing is replaced.
    pub fn select_listing_file(&mut self, selected_path: Option<&Path>) {
        let Some(selected_path) = selected_path else {
            return;
        };
        self.clear_incompatible_files_if_mode_changed();
        self.listing_files.clear();
        self.listing_name = selected_path.to_string_lossy().into_owned();
        self.listing_files.push(self.listing_name.clone());
    }

    /// Ports Ghidra function `FUN_01418ba0` at `0x01418BA0`.
    ///
    /// Opens the source editor with the existing staged ASM lines. Only an
    /// accepted child result is copied back by [`Self::finish_source_editor`].
    pub fn open_existing_source_editor(&mut self) {
        self.source_kind = SourceKind::Existing;
        self.child_request = Some(ChildRequest::SourceEditor(SourceEditorRequest {
            kind: SourceKind::Existing,
            file_name: self.assembly_name.clone(),
            previous_file_name: None,
            lines: self.assembly_sources.clone(),
        }));
    }

    /// Ports Ghidra function `FUN_01418c30` at `0x01418C30`.
    ///
    /// Stages the recovered `noname.asm` name and opens an empty source editor.
    /// Child cancellation restores the previous name and discards temporary
    /// lines. Acceptance appends the returned source lines to ASM staging.
    pub fn start_new_source_editor(&mut self) {
        self.source_kind = SourceKind::New;
        let previous_name = self.assembly_name.clone();
        NEW_ASSEMBLY_NAME.clone_into(&mut self.assembly_name);
        self.current_name.clone_from(&self.assembly_name);
        self.action_group = self.mode;
        self.child_request = Some(ChildRequest::SourceEditor(SourceEditorRequest {
            kind: SourceKind::New,
            file_name: NEW_ASSEMBLY_NAME.to_owned(),
            previous_file_name: Some(previous_name),
            lines: Vec::new(),
        }));
    }

    pub fn finish_source_editor(&mut self, result: ModalResult<SourceEditorResult>) {
        let request = self.child_request.take();
        let previous_name = match request {
            Some(ChildRequest::SourceEditor(request)) => request
                .previous_file_name
                .unwrap_or_else(|| request.file_name.clone()),
            _ => self.assembly_name.clone(),
        };
        match result {
            ModalResult::Accepted(result) => {
                if self.source_kind == SourceKind::Existing {
                    self.assembly_sources = result.lines;
                } else {
                    self.assembly_sources.extend(result.lines);
                }
            }
            ModalResult::Cancelled if self.source_kind == SourceKind::New => {
                self.assembly_name = previous_name;
                self.current_name.clone_from(&self.assembly_name);
            }
            ModalResult::Cancelled => {}
        }
    }

    /// Ports Ghidra function `FUN_01418c90` at `0x01418C90`.
    ///
    /// Permits closure, validates the active mode, and copies staged input to
    /// the parent model. HEX/LST mode requires HEX data and inserts the
    /// recovered blank listing placeholder when the listing is omitted.
    /// Inactive flowchart, C-project, and kernel state is reset.
    ///
    /// # Errors
    ///
    /// Returns the precise missing-input condition and does not update the
    /// parent model when validation fails.
    pub fn validate_and_commit(&mut self, parent: &mut McuInputModel) -> Result<(), AcceptError> {
        self.close_permission = ClosePermission::Permitted;
        match self.mode {
            InputMode::Assembly if self.assembly_name.trim().is_empty() => {
                self.close_permission = ClosePermission::Blocked;
                return Err(AcceptError::AssemblyNameRequired);
            }
            InputMode::HexAndList if self.hex_files.is_empty() && self.listing_files.is_empty() => {
                self.close_permission = ClosePermission::Blocked;
                return Err(AcceptError::HexOrListRequired);
            }
            InputMode::HexAndList if self.hex_files.is_empty() => {
                self.close_permission = ClosePermission::Blocked;
                return Err(AcceptError::HexRequired);
            }
            InputMode::HexAndList if self.listing_files.is_empty() => {
                self.listing_files.push(String::new());
            }
            _ => {}
        }

        parent.mode = Some(self.mode);
        parent.assembly_name.clone_from(&self.assembly_name);
        parent.listing_name.clone_from(&self.listing_name);
        parent.hex_name.clone_from(&self.hex_name);
        if self.c_project_status[0] == 0 {
            parent.assembly_sources.clone_from(&self.assembly_sources);
            parent.listing_files.clone_from(&self.listing_files);
            parent.hex_files.clone_from(&self.hex_files);
        } else if self.c_project_status[1] != 0 {
            parent.hex_files.clone_from(&self.hex_files);
        }
        parent.flowchart_session = if self.mode == InputMode::Flowchart {
            self.flowchart_session.clone()
        } else {
            Vec::new()
        };
        parent.c_project_data = if self.mode == InputMode::CProject {
            self.c_project_data.clone()
        } else {
            Vec::new()
        };
        parent.kernel_image = if self.mode == InputMode::KernelImage {
            self.kernel_image.clone()
        } else {
            KernelImageFields::default()
        };
        Ok(())
    }

    /// Ports Ghidra function `FUN_01419500` at `0x01419500`.
    ///
    /// Cancel only permits the modal to close. It does not roll back staging.
    pub const fn cancel(&mut self) {
        self.close_permission = ClosePermission::Permitted;
    }

    /// Ports Ghidra function `FUN_01419510` at `0x01419510`.
    ///
    /// Opens the flowchart child with MCU and working-directory context. A new
    /// flowchart uses `noname.tfc`; an existing flowchart keeps its file name.
    pub fn open_flowchart_editor(&mut self) {
        let previous_file_name = self.assembly_name.clone();
        if self.mode != InputMode::Flowchart {
            NEW_FLOWCHART_NAME.clone_into(&mut self.assembly_name);
            self.current_name.clone_from(&self.assembly_name);
        }
        self.child_request = Some(ChildRequest::Flowchart(FlowchartRequest {
            file_name: self.assembly_name.clone(),
            previous_file_name,
            mcu_identifier: self.context.mcu_identifier.clone(),
            working_directory: self.context.working_directory.clone(),
            source_lines: self.assembly_sources.clone(),
            session_data: self.flowchart_session.clone(),
        }));
    }

    pub fn finish_flowchart_editor(&mut self, result: ModalResult<FlowchartResult>) {
        let prior_name = match self.child_request.take() {
            Some(ChildRequest::Flowchart(request)) => request.previous_file_name,
            _ => self.assembly_name.clone(),
        };
        if let ModalResult::Accepted(result) = result {
            self.assembly_name = result.file_name;
            self.current_name.clone_from(&self.assembly_name);
            self.assembly_sources = result.source_lines;
            self.flowchart_session = result.session_data;
            self.mode = InputMode::Flowchart;
            self.action_group = self.mode;
            self.mode_snapshot = self.mode;
        } else {
            self.assembly_name = prior_name;
        }
    }

    /// Ports Ghidra function `FUN_01419990` at `0x01419990`.
    ///
    /// Opens the C-project child with two-way project data. Accepted copy-back
    /// copies both child status bytes. It replaces both staged output lists
    /// only when the separate copy-back status is zero.
    pub fn open_c_project_editor(&mut self) {
        self.child_request = Some(ChildRequest::CProject(CProjectRequest {
            mcu_identifier: self.context.mcu_identifier.clone(),
            working_directory: self.context.working_directory.clone(),
            project_data: self.c_project_data.clone(),
        }));
    }

    pub fn finish_c_project_editor(&mut self, result: ModalResult<CProjectResult>) {
        self.child_request = None;
        let ModalResult::Accepted(result) = result else {
            return;
        };
        self.c_project_data = result.project_data;
        self.c_project_status = result.status_bytes;
        if result.copy_back_status != 0 {
            return;
        }
        self.hex_files = result.hex_outputs;
        self.listing_files = result.listing_outputs;
        self.mode_snapshot = self.mode;
    }

    /// Ports Ghidra function `FUN_01419c00` at `0x01419C00`.
    ///
    /// Opens the kernel-image child with both recovered capability flags. Only
    /// accepted results are applied, and empty returned fields do not replace
    /// existing model values.
    pub fn open_kernel_image_editor(&mut self, capabilities: KernelImageCapabilities) {
        self.child_request = Some(ChildRequest::KernelImage(KernelImageRequest {
            capabilities,
            fields: self.kernel_image.clone(),
        }));
    }

    pub fn finish_kernel_image_editor(&mut self, result: ModalResult<KernelImageFields>) {
        self.child_request = None;
        let ModalResult::Accepted(result) = result else {
            return;
        };
        for (target, source) in self.kernel_image.values.iter_mut().zip(result.values) {
            if !source.is_empty() {
                *target = source;
            }
        }
    }

    fn clear_incompatible_files_if_mode_changed(&mut self) {
        if self.mode_snapshot == self.mode {
            return;
        }
        self.assembly_sources.clear();
        self.assembly_name.clear();
        self.hex_files.clear();
        self.hex_name.clear();
        self.listing_files.clear();
        self.listing_name.clear();
        self.mode_snapshot = self.mode;
    }

    #[must_use]
    pub const fn mode(&self) -> InputMode {
        self.mode
    }

    #[must_use]
    pub const fn action_group(&self) -> InputMode {
        self.action_group
    }

    #[must_use]
    pub fn current_name(&self) -> &str {
        &self.current_name
    }

    #[must_use]
    pub fn assembly_sources(&self) -> &[String] {
        &self.assembly_sources
    }

    #[must_use]
    pub fn hex_files(&self) -> &[String] {
        &self.hex_files
    }

    #[must_use]
    pub fn listing_files(&self) -> &[String] {
        &self.listing_files
    }

    #[must_use]
    pub const fn close_permission(&self) -> ClosePermission {
        self.close_permission
    }

    #[must_use]
    pub const fn child_request(&self) -> Option<&ChildRequest> {
        self.child_request.as_ref()
    }

    #[must_use]
    pub fn last_error(&self) -> Option<&str> {
        self.last_error.as_deref()
    }

    #[must_use]
    pub const fn c_project_status(&self) -> [u8; 2] {
        self.c_project_status
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Default)]
    struct TestStore {
        lines: Vec<String>,
        writes: Vec<(PathBuf, Vec<String>)>,
    }

    impl SourceTextStore for TestStore {
        fn load_lines(&mut self, _path: &Path) -> Result<Vec<String>, String> {
            Ok(self.lines.clone())
        }

        fn save_lines(&mut self, path: &Path, lines: &[String]) -> Result<(), String> {
            self.writes.push((path.to_owned(), lines.to_vec()));
            Ok(())
        }
    }

    #[derive(Debug)]
    struct TestCompiler(AssemblyCompileReport);

    impl AssemblyCompiler for TestCompiler {
        fn compile(
            &mut self,
            _request: &AssemblyCompileRequest,
        ) -> Result<AssemblyCompileReport, String> {
            Ok(self.0.clone())
        }
    }

    #[test]
    fn compact_pic_family_remaps_flowchart_radio_to_c_project() {
        let mut window = window(McuFamily::Pic12);

        window.select_input_mode(2);

        assert_eq!(window.mode(), InputMode::CProject);
        assert_eq!(window.action_group(), InputMode::CProject);
        assert_eq!(window.current_name(), NEW_ASSEMBLY_NAME);
    }

    #[test]
    fn assembly_selection_cancel_is_noop_and_plain_selection_stages_path() {
        let mut window = window(McuFamily::Other);
        let before = window.clone();
        let mut store = TestStore::default();
        let mut compiler = TestCompiler(AssemblyCompileReport::Success);

        window
            .select_asm_file(None, false, false, &mut store, &mut compiler)
            .expect("cancel must succeed");
        assert_eq!(window, before);

        window
            .select_asm_file(
                Some(Path::new("source.asm")),
                false,
                false,
                &mut store,
                &mut compiler,
            )
            .expect("selection must succeed");
        assert_eq!(window.assembly_sources(), ["source.asm"]);
        assert!(store.writes.is_empty());
    }

    #[test]
    fn precompile_failure_retains_assembly_and_reports_line() {
        let mut window = window(McuFamily::Other);
        let mut store = TestStore {
            lines: vec!["bad".to_owned()],
            writes: Vec::new(),
        };
        let mut compiler = TestCompiler(AssemblyCompileReport::Failure {
            message: "syntax".to_owned(),
            line: 4,
        });

        window
            .select_asm_file(
                Some(Path::new("source.asm")),
                true,
                true,
                &mut store,
                &mut compiler,
            )
            .expect("normal failure must remain in the modal");

        assert_eq!(window.assembly_sources(), ["source.asm"]);
        assert_eq!(window.last_error(), Some("Error: syntax in line 4"));
        assert_eq!(window.mode(), InputMode::Assembly);
    }

    #[test]
    fn successful_precompile_switches_to_temporary_hex_and_listing() {
        let mut window = window(McuFamily::Other);
        let mut store = TestStore {
            lines: vec!["END".to_owned()],
            writes: Vec::new(),
        };
        let mut compiler = TestCompiler(AssemblyCompileReport::Success);

        window
            .select_asm_file(
                Some(Path::new("source.asm")),
                true,
                false,
                &mut store,
                &mut compiler,
            )
            .expect("compile must succeed");

        assert_eq!(window.mode(), InputMode::HexAndList);
        assert_eq!(
            PathBuf::from(&window.hex_files()[0]),
            PathBuf::from("temp/flash_rom.hex")
        );
        assert_eq!(
            PathBuf::from(&window.listing_files()[0]),
            PathBuf::from("temp/flash_rom.lst")
        );
        assert_eq!(store.writes[0].0, PathBuf::from("temp/flash_rom.asm"));
    }

    #[test]
    fn file_selection_after_mode_change_clears_incompatible_staging() {
        let mut window = window(McuFamily::Other);
        window.select_input_mode(1);

        window.select_hex_file(Some(Path::new("firmware.hex")));
        window.select_listing_file(Some(Path::new("firmware.lst")));

        assert!(window.assembly_sources().is_empty());
        assert_eq!(window.hex_files(), ["firmware.hex"]);
        assert_eq!(window.listing_files(), ["firmware.lst"]);
    }

    #[test]
    fn source_editor_accepts_existing_lines_and_new_cancel_restores_name() {
        let mut window = window(McuFamily::Other);
        window.open_existing_source_editor();
        window.finish_source_editor(ModalResult::Accepted(SourceEditorResult {
            lines: vec!["NEW".to_owned()],
        }));
        assert_eq!(window.assembly_sources(), ["NEW"]);

        window.start_new_source_editor();
        window.finish_source_editor(ModalResult::Cancelled);
        assert_eq!(window.current_name(), "existing.asm");
        assert_eq!(window.assembly_sources(), ["NEW"]);
    }

    #[test]
    fn accept_validates_hex_and_inserts_blank_listing_placeholder() {
        let mut window = window(McuFamily::Other);
        window.select_input_mode(1);
        window.select_hex_file(Some(Path::new("firmware.hex")));
        let mut parent = McuInputModel::default();

        window
            .validate_and_commit(&mut parent)
            .expect("HEX input must be valid");

        assert_eq!(parent.mode, Some(InputMode::HexAndList));
        assert_eq!(parent.hex_files, ["firmware.hex"]);
        assert_eq!(parent.listing_files, [""]);
        assert_eq!(window.close_permission(), ClosePermission::Permitted);
        assert!(parent.c_project_data.is_empty());
    }

    #[test]
    fn validation_failure_blocks_close_and_does_not_update_parent() {
        let mut window = window(McuFamily::Other);
        window.assembly_name.clear();
        let mut parent = McuInputModel {
            assembly_name: "parent.asm".to_owned(),
            ..McuInputModel::default()
        };

        let result = window.validate_and_commit(&mut parent);

        assert_eq!(result, Err(AcceptError::AssemblyNameRequired));
        assert_eq!(window.close_permission(), ClosePermission::Blocked);
        assert_eq!(parent.assembly_name, "parent.asm");
    }

    #[test]
    fn cancel_permits_close_without_rolling_back_staging() {
        let mut window = window(McuFamily::Other);
        window.select_hex_file(Some(Path::new("draft.hex")));

        window.cancel();

        assert_eq!(window.close_permission(), ClosePermission::Permitted);
        assert_eq!(window.hex_files(), ["draft.hex"]);
    }

    #[test]
    fn flowchart_and_c_project_results_copy_only_accepted_outputs() {
        let mut window = window(McuFamily::Other);
        window.open_flowchart_editor();
        assert_eq!(window.current_name(), NEW_FLOWCHART_NAME);
        window.finish_flowchart_editor(ModalResult::Accepted(FlowchartResult {
            file_name: "diagram.tfc".to_owned(),
            source_lines: vec!["generated".to_owned()],
            session_data: vec![1, 2],
        }));
        assert_eq!(window.mode(), InputMode::Flowchart);
        assert_eq!(window.assembly_sources(), ["generated"]);

        window.open_c_project_editor();
        window.finish_c_project_editor(ModalResult::Accepted(CProjectResult {
            status_bytes: [4, 5],
            copy_back_status: 0,
            hex_outputs: vec!["ide.hex".to_owned()],
            listing_outputs: vec!["ide.lst".to_owned()],
            project_data: vec![3],
        }));
        assert_eq!(window.hex_files(), ["ide.hex"]);
        assert_eq!(window.listing_files(), ["ide.lst"]);
        assert_eq!(window.c_project_status(), [4, 5]);

        window.finish_c_project_editor(ModalResult::Accepted(CProjectResult {
            status_bytes: [6, 7],
            copy_back_status: 1,
            hex_outputs: vec!["ignored.hex".to_owned()],
            listing_outputs: vec!["ignored.lst".to_owned()],
            project_data: vec![8],
        }));
        assert_eq!(window.hex_files(), ["ide.hex"]);
        assert_eq!(window.listing_files(), ["ide.lst"]);
        assert_eq!(window.c_project_status(), [6, 7]);
    }

    #[test]
    fn c_project_status_bytes_control_parent_list_copy_policy() {
        let mut window = window(McuFamily::Other);
        window.c_project_status = [1, 0];
        window.hex_files = vec!["new.hex".to_owned()];
        let mut parent = McuInputModel {
            assembly_sources: vec!["parent asm".to_owned()],
            hex_files: vec!["parent.hex".to_owned()],
            listing_files: vec!["parent.lst".to_owned()],
            ..McuInputModel::default()
        };

        window
            .validate_and_commit(&mut parent)
            .expect("assembly mode has a name");
        assert_eq!(parent.hex_files, ["parent.hex"]);

        window.c_project_status = [1, 1];
        window
            .validate_and_commit(&mut parent)
            .expect("assembly mode has a name");
        assert_eq!(parent.assembly_sources, ["parent asm"]);
        assert_eq!(parent.listing_files, ["parent.lst"]);
        assert_eq!(parent.hex_files, ["new.hex"]);
    }

    #[test]
    fn kernel_image_applies_only_nonempty_fields_after_acceptance() {
        let mut window = window(McuFamily::Other);
        window.kernel_image.values[0] = "keep.bin".to_owned();
        window.finish_kernel_image_editor(ModalResult::Accepted(KernelImageFields {
            values: [
                String::new(),
                "replace.bin".to_owned(),
                String::new(),
                String::new(),
                String::new(),
                String::new(),
            ],
        }));

        assert_eq!(window.kernel_image.values[0], "keep.bin");
        assert_eq!(window.kernel_image.values[1], "replace.bin");
    }

    fn window(family: McuFamily) -> Window {
        Window::new(
            SelectorContext {
                family,
                mcu_identifier: "PIC16F84".to_owned(),
                working_directory: PathBuf::from("work"),
                temporary_directory: PathBuf::from("temp"),
            },
            McuInputModel {
                mode: Some(InputMode::Assembly),
                assembly_name: "existing.asm".to_owned(),
                assembly_sources: vec!["OLD".to_owned()],
                ..McuInputModel::default()
            },
        )
    }
}
