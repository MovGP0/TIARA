use std::fmt;
use std::path::{Path, PathBuf};
use std::sync::Arc;
use std::sync::atomic::{AtomicBool, Ordering};

use iced::widget::{button, column, container, row, text, text_input};
use iced::{Element, Length, Task};

pub const TITLE: &str = "Manage Libraries";
pub const FORM_RESOURCE: &str = "CompilePackage";

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CompilerRequest {
    pub source: PathBuf,
    pub target_library: String,
    pub search_libraries: Vec<String>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CompilerReport {
    pub success: bool,
    pub message: String,
}

pub trait VhdlDll2 {
    /// Returns the current VHDL library names.
    ///
    /// # Errors
    ///
    /// Returns [`ManagerError`] when the VHDL service cannot read its catalog.
    fn library_list(&mut self) -> Result<Vec<String>, ManagerError>;

    /// Creates a named VHDL library.
    ///
    /// # Errors
    ///
    /// Returns [`ManagerError`] when the VHDL service cannot create the library.
    fn create_library(&mut self, name: &str) -> Result<(), ManagerError>;

    /// Deletes a named VHDL library.
    ///
    /// # Errors
    ///
    /// Returns [`ManagerError`] when the VHDL service cannot delete the library.
    fn delete_library(&mut self, name: &str) -> Result<(), ManagerError>;

    /// Compiles one VHDL package.
    ///
    /// # Errors
    ///
    /// Returns [`ManagerError`] when the compiler service cannot complete the
    /// request.
    fn compile_package(
        &mut self,
        request: &CompilerRequest,
    ) -> Result<CompilerReport, ManagerError>;
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PrimitiveGenerationRequest {
    pub source_root: PathBuf,
    pub small_libraries: bool,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct GeneratedPrimitiveSources {
    pub packages: Vec<PathBuf>,
    pub ignored_components: Vec<String>,
}

pub trait PrimitiveGenerator {
    /// Generates the primitive-package source files.
    ///
    /// # Errors
    ///
    /// Returns [`ManagerError`] when source discovery, parsing, or generation
    /// fails.
    fn generate(
        &mut self,
        request: &PrimitiveGenerationRequest,
        cancellation: &AtomicBool,
        progress: &mut dyn FnMut(u8),
    ) -> Result<GeneratedPrimitiveSources, ManagerError>;
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum SourceSelection {
    Source(PathBuf),
    SourceList {
        list_path: PathBuf,
        lines: Vec<String>,
    },
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum OperationStatus {
    #[default]
    Idle,
    Running,
    Completed,
    Cancelled,
    Failed,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ManagerError {
    NoTargetLibrary,
    EmptyLibraryName,
    DuplicateLibrary(String),
    Service(String),
}

impl fmt::Display for ManagerError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::NoTargetLibrary => formatter.write_str("Select a target VHDL library."),
            Self::EmptyLibraryName => formatter.write_str("Enter a VHDL library name."),
            Self::DuplicateLibrary(name) => {
                write!(formatter, "VHDL library {name} already exists.")
            }
            Self::Service(message) => formatter.write_str(message),
        }
    }
}

impl std::error::Error for ManagerError {}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    LibrarySelected(String),
    SearchListChanged(String),
    ClearOutput,
    ToggleExpanded,
    Abort,
}

#[derive(Debug)]
pub struct Window {
    libraries: Vec<String>,
    selected_library: Option<String>,
    search_list: String,
    output: Vec<String>,
    expanded: bool,
    source_root: PathBuf,
    small_libraries: bool,
    cancellation: Arc<AtomicBool>,
    status: OperationStatus,
    progress: u8,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            libraries: Vec::new(),
            selected_library: None,
            search_list: String::new(),
            output: Vec::new(),
            expanded: false,
            source_root: PathBuf::new(),
            small_libraries: false,
            cancellation: Arc::new(AtomicBool::new(false)),
            status: OperationStatus::Idle,
            progress: 0,
        }
    }
}

impl Window {
    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::LibrarySelected(library) => self.selected_library = Some(library),
            Message::SearchListChanged(value) => self.search_list = value,
            Message::ClearOutput => self.clear_output(),
            Message::ToggleExpanded => self.toggle_expanded(),
            Message::Abort => self.request_cancellation(),
        }
        Task::none()
    }

    /// Generates VHDL primitive sources through a typed clean-room adapter.
    ///
    /// Reimplements Ghidra function `FUN_014e94d0` at `0x014E94D0`. Path
    /// validation, ordered source parsing, filtering, generated-file writes,
    /// ignored-component output, and package ordering belong to the adapter.
    ///
    /// # Errors
    ///
    /// Returns [`ManagerError`] when the primitive generator cannot complete
    /// the request.
    pub fn generate_primitive_sources(
        &mut self,
        generator: &mut impl PrimitiveGenerator,
    ) -> Result<GeneratedPrimitiveSources, ManagerError> {
        let request = PrimitiveGenerationRequest {
            source_root: self.source_root.clone(),
            small_libraries: self.small_libraries,
        };
        let mut latest_progress = self.progress;
        let result = generator.generate(&request, &self.cancellation, &mut |progress| {
            latest_progress = progress.min(100);
        });
        self.progress = latest_progress;
        result
    }

    /// Clears only the current compiler-output lines.
    ///
    /// Reimplements Ghidra function `FUN_014ec040` at `0x014EC040`.
    pub fn clear_output(&mut self) {
        self.output.clear();
    }

    /// Replaces the target-library list and selects its final item.
    ///
    /// Reimplements Ghidra function `FUN_014ec0d0` at `0x014EC0D0`.
    ///
    /// # Errors
    ///
    /// Returns [`ManagerError`] when the VHDL service cannot read its catalog.
    pub fn initialize(&mut self, service: &mut impl VhdlDll2) -> Result<(), ManagerError> {
        self.refresh_libraries(service)
    }

    /// Compiles one source into the selected library and records the result.
    ///
    /// Reimplements Ghidra function `FUN_014ec1f0` at `0x014EC1F0`.
    ///
    /// # Errors
    ///
    /// Returns [`ManagerError::NoTargetLibrary`] when no library is selected,
    /// or forwards a compiler-service error.
    pub fn compile_one(
        &mut self,
        service: &mut impl VhdlDll2,
        source: &Path,
    ) -> Result<bool, ManagerError> {
        if self.cancellation.load(Ordering::Acquire) {
            self.status = OperationStatus::Cancelled;
            return Ok(false);
        }
        let target_library = self
            .selected_library
            .clone()
            .ok_or(ManagerError::NoTargetLibrary)?;
        let mut search_libraries = self
            .search_list
            .split(';')
            .map(str::trim)
            .filter(|item| !item.is_empty())
            .map(str::to_owned)
            .collect::<Vec<_>>();
        if !search_libraries.contains(&target_library) {
            search_libraries.push(target_library.clone());
        }
        let report = service.compile_package(&CompilerRequest {
            source: source.to_owned(),
            target_library,
            search_libraries,
        })?;
        self.output
            .push(format!("{}: {}", source.display(), report.message));
        self.status = if report.success {
            OperationStatus::Completed
        } else {
            OperationStatus::Failed
        };
        Ok(report.success)
    }

    /// Compiles one selected source or the nonempty entries of a source list.
    ///
    /// Reimplements Ghidra function `FUN_014ec510` at `0x014EC510`. List
    /// entries are resolved relative to the list file and stop at the first
    /// failure or cooperative cancellation request.
    ///
    /// # Errors
    ///
    /// Returns [`ManagerError`] when no target is selected or a compiler call
    /// fails.
    pub fn compile_selection(
        &mut self,
        service: &mut impl VhdlDll2,
        selection: SourceSelection,
    ) -> Result<(), ManagerError> {
        self.cancellation.store(false, Ordering::Release);
        self.status = OperationStatus::Running;
        let sources = match selection {
            SourceSelection::Source(source) => vec![source],
            SourceSelection::SourceList { list_path, lines } => {
                let parent = list_path.parent().unwrap_or_else(|| Path::new(""));
                lines
                    .into_iter()
                    .filter(|line| !line.is_empty())
                    .map(|line| parent.join(line))
                    .collect()
            }
        };
        for source in sources {
            if !self.compile_one(service, &source)? {
                break;
            }
        }
        Ok(())
    }

    /// Toggles simple and expanded library-manager layout.
    ///
    /// Reimplements Ghidra function `FUN_014ec7a0` at `0x014EC7A0`.
    pub const fn toggle_expanded(&mut self) {
        self.expanded = !self.expanded;
    }

    /// Requests cooperative cancellation without terminating a worker.
    ///
    /// Reimplements Ghidra function `FUN_014ec7c0` at `0x014EC7C0`.
    pub fn request_cancellation(&self) {
        self.cancellation.store(true, Ordering::Release);
    }

    /// Deletes the selected library after caller confirmation and refreshes.
    ///
    /// Reimplements Ghidra function `FUN_014ec7d0` at `0x014EC7D0`.
    ///
    /// # Errors
    ///
    /// Returns [`ManagerError::NoTargetLibrary`] when no library is selected,
    /// or forwards a delete or refresh service error.
    pub fn delete_selected_library(
        &mut self,
        service: &mut impl VhdlDll2,
        confirmed: bool,
    ) -> Result<(), ManagerError> {
        if !confirmed {
            return Ok(());
        }
        let selected = self
            .selected_library
            .clone()
            .ok_or(ManagerError::NoTargetLibrary)?;
        service.delete_library(&selected)?;
        self.refresh_libraries(service)
    }

    /// Validates, creates, and refreshes a VHDL library.
    ///
    /// Reimplements Ghidra function `FUN_014ec9a0` at `0x014EC9A0`.
    ///
    /// # Errors
    ///
    /// Returns an error for an empty or duplicate name, or when the service
    /// cannot create or refresh the library.
    pub fn create_library(
        &mut self,
        service: &mut impl VhdlDll2,
        name: &str,
    ) -> Result<(), ManagerError> {
        let name = name.trim();
        if name.is_empty() {
            return Err(ManagerError::EmptyLibraryName);
        }
        if self.libraries.iter().any(|item| item == name) {
            return Err(ManagerError::DuplicateLibrary(name.to_owned()));
        }
        service.create_library(name)?;
        self.refresh_libraries(service)
    }

    /// Generates and compiles Xilinx primitive packages.
    ///
    /// Reimplements Ghidra function `FUN_014ecbc0` at `0x014ECBC0`.
    ///
    /// # Errors
    ///
    /// Returns [`ManagerError`] when generation or compilation fails.
    pub fn generate_and_compile_primitives(
        &mut self,
        service: &mut impl VhdlDll2,
        generator: &mut impl PrimitiveGenerator,
    ) -> Result<(), ManagerError> {
        self.cancellation.store(false, Ordering::Release);
        self.status = OperationStatus::Running;
        let generated = self.generate_primitive_sources(generator)?;
        self.compile_generated_sources(service, &generated.packages)
    }

    /// Stages a selected Xilinx source root and leaves it unchanged on cancel.
    ///
    /// Reimplements Ghidra function `FUN_014ece80` at `0x014ECE80`.
    pub fn select_source_root(&mut self, selected: Option<PathBuf>) {
        if let Some(selected) = selected {
            self.source_root = selected;
        }
    }

    /// Compiles generated packages in order until failure or cancellation.
    ///
    /// Reimplements Ghidra function `FUN_014ecfb0` at `0x014ECFB0`.
    ///
    /// # Errors
    ///
    /// Returns [`ManagerError`] when no target is selected or a compiler call
    /// fails.
    pub fn compile_generated_sources(
        &mut self,
        service: &mut impl VhdlDll2,
        packages: &[PathBuf],
    ) -> Result<(), ManagerError> {
        for package in packages {
            if !self.compile_one(service, package)? {
                break;
            }
        }
        Ok(())
    }

    /// Applies the recovered collapsed or expanded layout state.
    ///
    /// Reimplements Ghidra function `FUN_014ed4b0` at `0x014ED4B0`.
    pub const fn apply_expanded_layout(&mut self, expanded: bool) {
        self.expanded = expanded;
    }

    fn refresh_libraries(&mut self, service: &mut impl VhdlDll2) -> Result<(), ManagerError> {
        self.libraries = service.library_list()?;
        self.selected_library = self.libraries.last().cloned();
        Ok(())
    }

    #[must_use]
    pub fn libraries(&self) -> &[String] {
        &self.libraries
    }
    #[must_use]
    pub const fn selected_library(&self) -> Option<&String> {
        self.selected_library.as_ref()
    }
    #[must_use]
    pub fn output(&self) -> &[String] {
        &self.output
    }
    #[must_use]
    pub const fn expanded(&self) -> bool {
        self.expanded
    }
    #[must_use]
    pub const fn status(&self) -> OperationStatus {
        self.status
    }
    #[must_use]
    pub const fn progress(&self) -> u8 {
        self.progress
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let content = column![
            text(TITLE).size(18),
            text(format!(
                "Target: {}",
                self.selected_library.as_deref().unwrap_or("")
            )),
            text_input("Library search list", &self.search_list)
                .on_input(Message::SearchListChanged),
            text(format!("Progress: {}%", self.progress)),
            row![
                button(if self.expanded { "Less..." } else { "More..." })
                    .on_press(Message::ToggleExpanded),
                button("Abort Compiling").on_press(Message::Abort),
                button("Clear output").on_press(Message::ClearOutput),
            ]
            .spacing(8),
            text(self.output.join("\n")),
        ]
        .spacing(10);
        container(content)
            .padding(16)
            .width(Length::Fill)
            .height(Length::Fill)
            .into()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Default)]
    struct Service {
        libraries: Vec<String>,
        compiled: Vec<PathBuf>,
        fail_on: Option<PathBuf>,
    }
    impl VhdlDll2 for Service {
        fn library_list(&mut self) -> Result<Vec<String>, ManagerError> {
            Ok(self.libraries.clone())
        }
        fn create_library(&mut self, name: &str) -> Result<(), ManagerError> {
            self.libraries.push(name.to_owned());
            Ok(())
        }
        fn delete_library(&mut self, name: &str) -> Result<(), ManagerError> {
            self.libraries.retain(|item| item != name);
            Ok(())
        }
        fn compile_package(
            &mut self,
            request: &CompilerRequest,
        ) -> Result<CompilerReport, ManagerError> {
            self.compiled.push(request.source.clone());
            let success = self.fail_on.as_ref() != Some(&request.source);
            Ok(CompilerReport {
                success,
                message: if success { "ok" } else { "failed" }.to_owned(),
            })
        }
    }
    struct Generator;
    impl PrimitiveGenerator for Generator {
        fn generate(
            &mut self,
            _request: &PrimitiveGenerationRequest,
            cancellation: &AtomicBool,
            progress: &mut dyn FnMut(u8),
        ) -> Result<GeneratedPrimitiveSources, ManagerError> {
            progress(50);
            if cancellation.load(Ordering::Acquire) {
                return Ok(GeneratedPrimitiveSources::default());
            }
            progress(100);
            Ok(GeneratedPrimitiveSources {
                packages: vec![PathBuf::from("a.vhd"), PathBuf::from("b.vhd")],
                ignored_components: vec!["unsupported".to_owned()],
            })
        }
    }

    #[test]
    fn initialize_create_delete_and_refresh_select_the_last_library() -> Result<(), ManagerError> {
        let mut service = Service {
            libraries: vec!["work".to_owned()],
            ..Service::default()
        };
        let mut window = Window::default();
        window.initialize(&mut service)?;
        window.create_library(&mut service, "vendor")?;
        assert_eq!(
            window.selected_library().map(String::as_str),
            Some("vendor")
        );
        window.delete_selected_library(&mut service, true)?;
        assert_eq!(window.libraries(), ["work"]);
        Ok(())
    }

    #[test]
    fn source_list_compilation_stops_at_first_failure() -> Result<(), ManagerError> {
        let mut service = Service {
            libraries: vec!["work".to_owned()],
            fail_on: Some(PathBuf::from("src/b.vhd")),
            ..Service::default()
        };
        let mut window = Window::default();
        window.initialize(&mut service)?;
        window.compile_selection(
            &mut service,
            SourceSelection::SourceList {
                list_path: PathBuf::from("src/files.do"),
                lines: vec![
                    "a.vhd".to_owned(),
                    String::new(),
                    "b.vhd".to_owned(),
                    "c.vhd".to_owned(),
                ],
            },
        )?;
        assert_eq!(
            service.compiled,
            [PathBuf::from("src/a.vhd"), PathBuf::from("src/b.vhd")]
        );
        assert_eq!(window.status(), OperationStatus::Failed);
        Ok(())
    }

    #[test]
    fn abort_is_cooperative_and_does_not_clear_output() {
        let mut window = Window::default();
        window.output.push("existing".to_owned());
        window.request_cancellation();
        assert!(window.cancellation.load(Ordering::Acquire));
        assert_eq!(window.output(), ["existing"]);
        window.clear_output();
        assert!(window.output().is_empty());
    }

    #[test]
    fn primitive_generation_reports_progress_and_compiles_in_order() -> Result<(), ManagerError> {
        let mut service = Service {
            libraries: vec!["work".to_owned()],
            ..Service::default()
        };
        let mut window = Window::default();
        let mut generator = Generator;
        window.initialize(&mut service)?;
        window.generate_and_compile_primitives(&mut service, &mut generator)?;
        assert_eq!(window.progress(), 100);
        assert_eq!(
            service.compiled,
            [PathBuf::from("a.vhd"), PathBuf::from("b.vhd")]
        );
        Ok(())
    }
}
