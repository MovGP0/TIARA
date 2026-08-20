use std::fmt;
use std::path::{Path, PathBuf};

pub const MPLAB_WOW6432_KEY: &str = r"\Software\Wow6432Node\Microchip\MPLAB X";
pub const MPLAB_NATIVE_KEY: &str = r"\Software\Microchip\MPLAB X";
pub const MPLAB_INSTALL_VALUE: &str = "InstallDir";
pub const PIC18_CLOCK_HZ: f64 = 48_000_000.0;
pub const PIC18_SELECTOR: u32 = 8;
pub const PIC18_HEX_FILE_NAME: &str = "flash_rom.hex";

const EXTENDED_ADDRESS_TRAILER: &str = ":020000040001F9";
const CONFIGURATION_TRAILER: &str = ":06FFF800A4F705FFF8F775";
const EOF_TRAILER: &str = ":00000001FF";
const COMPONENT_CATEGORY: u8 = 4;
const HIERARCHY_TYPE: u16 = 0x39;

pub trait RegistryView {
    #[must_use]
    fn key_exists(&self, path: &str) -> bool;

    #[must_use]
    fn string_value(&self, path: &str, name: &str) -> Option<String>;
}

/// Ports Ghidra function `FUN_015fecc0` at `0x015FECC0`.
///
/// The 32-bit registry key wins when it exists. The native key is the
/// unconditional fallback and is not tested by this selector.
#[must_use]
pub fn select_mplab_registry_path(registry: &dyn RegistryView) -> &'static str {
    if registry.key_exists(MPLAB_WOW6432_KEY) {
        MPLAB_WOW6432_KEY
    } else {
        MPLAB_NATIVE_KEY
    }
}

/// Ports Ghidra function `FUN_015fede0` at `0x015FEDE0`.
///
/// Returns `InstallDir` only when the selected key and value are present.
#[must_use]
pub fn resolve_mplab_install_dir(registry: &dyn RegistryView) -> Option<String> {
    let path = select_mplab_registry_path(registry);
    registry
        .key_exists(path)
        .then(|| registry.string_value(path, MPLAB_INSTALL_VALUE))
        .flatten()
}

/// Ports Ghidra function `FUN_015ff5b0` at `0x015FF5B0`.
///
/// External assembly mode is `1` only when the global option is configured and
/// MPLAB X is installed. A disabled option does not query the registry.
#[must_use]
pub fn select_mplab_compiler_mode(configured: bool, registry: &dyn RegistryView) -> u8 {
    u8::from(configured && resolve_mplab_install_dir(registry).is_some())
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Pic18Backend {
    Compiler,
    BackendImageWithTrailer,
    SimulatorCompiler,
    BackendImage,
    Unsupported(i32),
}

#[derive(Debug, Clone, PartialEq)]
pub struct Pic18ProgramConfig {
    pub clock_hz: f64,
    pub backend: Pic18Backend,
    pub simulator_preparation_required: bool,
}

#[derive(Debug, Clone, PartialEq)]
pub struct CircuitComponent {
    pub id: u64,
    pub category: u8,
    pub component_type: u16,
    pub hierarchy_enabled: bool,
    pub child_circuit: Option<Box<Circuit>>,
    pub pic18_program: Option<Pic18ProgramConfig>,
}

#[derive(Debug, Clone, PartialEq, Default)]
pub struct Circuit {
    pub components: Vec<CircuitComponent>,
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct ProjectContext {
    pub path: PathBuf,
}

pub trait ComponentCompatibility {
    #[must_use]
    fn is_compatible(
        &self,
        circuit: &Circuit,
        component: &CircuitComponent,
        selector: u32,
        project: &ProjectContext,
    ) -> bool;
}

/// Ports Ghidra function `FUN_016009b0` at `0x016009B0`.
///
/// The search keeps circuit order and filters recovered category 4. Eligible
/// type `0x39` hierarchy parts recurse into their child with the same project
/// data. When a descendant matches, the current container is returned because
/// the recovered outer call overwrites the output pointer with that container.
#[must_use]
pub fn find_compatible_component<'a>(
    circuit: &'a Circuit,
    selector: u32,
    project: &ProjectContext,
    compatibility: &dyn ComponentCompatibility,
) -> Option<&'a CircuitComponent> {
    for component in &circuit.components {
        if component.category != COMPONENT_CATEGORY {
            continue;
        }
        let direct_match = compatibility.is_compatible(circuit, component, selector, project);
        let hierarchy = (component.component_type == HIERARCHY_TYPE
            && component.hierarchy_enabled
            && component.child_circuit.is_some())
        .then_some(component.child_circuit.as_deref())
        .flatten();
        let matched = hierarchy.map_or(direct_match, |child| {
            find_compatible_component(child, selector, project, compatibility).is_some()
        });
        if matched {
            return Some(component);
        }
    }
    None
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Pic18HostEvent {
    ImageReady(PathBuf),
    Complete,
}

pub trait Pic18DownloadAdapter {
    /// Prepares recovered simulator mode 2.
    ///
    /// # Errors
    /// Returns backend error text.
    fn prepare_simulator(&mut self, component: &CircuitComponent) -> Result<(), String>;

    /// Builds the compiler-owned HEX image.
    ///
    /// # Errors
    /// Returns compiler or file error text.
    fn build_compiler_image(
        &mut self,
        component: &CircuitComponent,
        path: &Path,
    ) -> Result<(), String>;

    /// Exports the backend-owned HEX image.
    ///
    /// # Errors
    /// Returns backend or file error text.
    fn export_backend_image(
        &mut self,
        component: &CircuitComponent,
        path: &Path,
    ) -> Result<(), String>;

    /// Loads ordered HEX lines without normalization.
    ///
    /// # Errors
    /// Returns file or decoding error text.
    fn load_hex_lines(&mut self, path: &Path) -> Result<Vec<String>, String>;

    /// Replaces the image with ordered HEX lines.
    ///
    /// # Errors
    /// Returns file error text.
    fn save_hex_lines(&mut self, path: &Path, lines: &[String]) -> Result<(), String>;

    fn clear_compiler_state(&mut self);
    fn report_host_event(&mut self, event: Pic18HostEvent);
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Pic18DownloadError {
    MissingProgramSettings,
    ClockMustBe48Mhz,
    UnsupportedBackend(i32),
    EmptyHexImage,
    Adapter(String),
}

impl fmt::Display for Pic18DownloadError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::MissingProgramSettings => {
                formatter.write_str("PIC18 program settings are missing.")
            }
            Self::ClockMustBe48Mhz => formatter.write_str("The PIC18 clock must be 48 MHz."),
            Self::UnsupportedBackend(mode) => {
                write!(formatter, "Unsupported PIC18 backend: {mode}")
            }
            Self::EmptyHexImage => formatter.write_str("The PIC18 Intel HEX image is empty."),
            Self::Adapter(message) => formatter.write_str(message),
        }
    }
}

impl std::error::Error for Pic18DownloadError {}

#[derive(Debug, Clone, Copy)]
pub struct Pic18DownloadRequest<'a> {
    pub component: &'a CircuitComponent,
    pub application_root: &'a Path,
}

/// Ports Ghidra function `FUN_01600b60` at `0x01600B60`.
///
/// Requires exactly 48 MHz and targets `Temp/flash_rom.hex`. Recovered modes 0
/// and 2 build with the compiler; modes 1 and 3 export from the backend. Mode 2
/// can prepare a simulator first. Every mode except recovered mode 1 removes
/// the current final HEX line and appends the exact three recovered trailers.
/// It then clears compiler state and reports `ImageReady` and `Complete` in
/// order. Errors stop later actions without rollback.
///
/// The maintained `h3xy` 1.1.3, `intelhex-rs` 0.1.1, `ihex` 3.0, and
/// `intelhex` 0.2.1 crates were evaluated and rejected. This operation is exact
/// ordered line surgery; parsing and regenerating could normalize records and
/// obscure its partial-write boundary.
///
/// # Errors
/// Returns the first settings, clock, backend, image, or adapter error.
pub fn download_pic18_program(
    request: Pic18DownloadRequest<'_>,
    adapter: &mut dyn Pic18DownloadAdapter,
) -> Result<(), Pic18DownloadError> {
    let settings = request
        .component
        .pic18_program
        .as_ref()
        .ok_or(Pic18DownloadError::MissingProgramSettings)?;
    if settings.clock_hz != PIC18_CLOCK_HZ {
        return Err(Pic18DownloadError::ClockMustBe48Mhz);
    }
    let image_path = request
        .application_root
        .join("Temp")
        .join(PIC18_HEX_FILE_NAME);
    if settings.backend == Pic18Backend::SimulatorCompiler
        && settings.simulator_preparation_required
    {
        adapter
            .prepare_simulator(request.component)
            .map_err(Pic18DownloadError::Adapter)?;
    }
    match settings.backend {
        Pic18Backend::Compiler | Pic18Backend::SimulatorCompiler => adapter
            .build_compiler_image(request.component, &image_path)
            .map_err(Pic18DownloadError::Adapter)?,
        Pic18Backend::BackendImageWithTrailer | Pic18Backend::BackendImage => adapter
            .export_backend_image(request.component, &image_path)
            .map_err(Pic18DownloadError::Adapter)?,
        Pic18Backend::Unsupported(mode) => {
            return Err(Pic18DownloadError::UnsupportedBackend(mode));
        }
    }
    if settings.backend != Pic18Backend::BackendImageWithTrailer {
        let mut lines = adapter
            .load_hex_lines(&image_path)
            .map_err(Pic18DownloadError::Adapter)?;
        append_pic18_hex_trailer(&mut lines)?;
        adapter
            .save_hex_lines(&image_path, &lines)
            .map_err(Pic18DownloadError::Adapter)?;
    }
    adapter.clear_compiler_state();
    adapter.report_host_event(Pic18HostEvent::ImageReady(image_path));
    adapter.report_host_event(Pic18HostEvent::Complete);
    Ok(())
}

/// Replaces the unchecked final HEX line with the recovered PIC18 trailers.
///
/// # Errors
/// Returns [`Pic18DownloadError::EmptyHexImage`] without changing an empty list.
pub fn append_pic18_hex_trailer(lines: &mut Vec<String>) -> Result<(), Pic18DownloadError> {
    if lines.pop().is_none() {
        return Err(Pic18DownloadError::EmptyHexImage);
    }
    lines.extend([
        EXTENDED_ADDRESS_TRAILER.to_owned(),
        CONFIGURATION_TRAILER.to_owned(),
        EOF_TRAILER.to_owned(),
    ]);
    Ok(())
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Pic18GateOutcome {
    NoCircuit,
    MissingComponent,
    Downloaded,
}

pub trait Pic18MessageSink {
    fn report_missing_pic18(&mut self);
}

#[derive(Debug, Clone, Copy)]
pub struct Pic18DownloadGate<'a> {
    pub supplied_circuit: Option<&'a Circuit>,
    pub current_circuit: Option<&'a Circuit>,
    pub project: &'a ProjectContext,
    pub suppress_missing_message: bool,
    pub application_root: &'a Path,
}

/// Ports Ghidra function `FUN_016012b0` at `0x016012B0`.
///
/// The supplied circuit wins over the current circuit. No circuit is a quiet
/// no-op. Selector 8 searches with current project data. A miss optionally
/// reports No PIC18; a match starts the image workflow.
///
/// # Errors
/// Returns the first downloader error. Search misses are normal outcomes.
pub fn start_pic18_download(
    gate: Pic18DownloadGate<'_>,
    compatibility: &dyn ComponentCompatibility,
    adapter: &mut dyn Pic18DownloadAdapter,
    messages: &mut dyn Pic18MessageSink,
) -> Result<Pic18GateOutcome, Pic18DownloadError> {
    let Some(circuit) = gate.supplied_circuit.or(gate.current_circuit) else {
        return Ok(Pic18GateOutcome::NoCircuit);
    };
    let Some(component) =
        find_compatible_component(circuit, PIC18_SELECTOR, gate.project, compatibility)
    else {
        if !gate.suppress_missing_message {
            messages.report_missing_pic18();
        }
        return Ok(Pic18GateOutcome::MissingComponent);
    };
    download_pic18_program(
        Pic18DownloadRequest {
            component,
            application_root: gate.application_root,
        },
        adapter,
    )?;
    Ok(Pic18GateOutcome::Downloaded)
}

#[cfg(test)]
mod tests {
    use std::cell::{Cell, RefCell};
    use std::collections::{HashMap, HashSet};

    use super::*;

    #[derive(Default)]
    struct TestRegistry {
        keys: HashSet<String>,
        values: HashMap<(String, String), String>,
        queries: RefCell<Vec<String>>,
    }

    impl RegistryView for TestRegistry {
        fn key_exists(&self, path: &str) -> bool {
            self.queries.borrow_mut().push(path.to_owned());
            self.keys.contains(path)
        }

        fn string_value(&self, path: &str, name: &str) -> Option<String> {
            self.values
                .get(&(path.to_owned(), name.to_owned()))
                .cloned()
        }
    }

    #[test]
    fn registry_selection_install_and_configured_gate_preserve_order() {
        let mut registry = TestRegistry::default();
        registry.keys.insert(MPLAB_WOW6432_KEY.to_owned());
        registry.values.insert(
            (MPLAB_WOW6432_KEY.to_owned(), MPLAB_INSTALL_VALUE.to_owned()),
            "MPLAB".to_owned(),
        );
        assert_eq!(select_mplab_registry_path(&registry), MPLAB_WOW6432_KEY);
        assert_eq!(
            resolve_mplab_install_dir(&registry).as_deref(),
            Some("MPLAB")
        );
        registry.queries.borrow_mut().clear();
        assert_eq!(select_mplab_compiler_mode(false, &registry), 0);
        assert!(registry.queries.borrow().is_empty());
        assert_eq!(select_mplab_compiler_mode(true, &registry), 1);

        let fallback = TestRegistry::default();
        assert_eq!(select_mplab_registry_path(&fallback), MPLAB_NATIVE_KEY);
        assert_eq!(&*fallback.queries.borrow(), &[MPLAB_WOW6432_KEY]);
    }

    struct Matcher {
        ids: Vec<u64>,
        calls: RefCell<Vec<u64>>,
    }

    impl ComponentCompatibility for Matcher {
        fn is_compatible(
            &self,
            _circuit: &Circuit,
            component: &CircuitComponent,
            selector: u32,
            project: &ProjectContext,
        ) -> bool {
            assert_eq!(selector, PIC18_SELECTOR);
            assert_eq!(project.path, PathBuf::from("project"));
            self.calls.borrow_mut().push(component.id);
            self.ids.contains(&component.id)
        }
    }

    #[test]
    fn hierarchy_search_skips_categories_and_returns_outer_container() {
        let circuit = Circuit {
            components: vec![
                component(1, 2, None),
                component(
                    2,
                    COMPONENT_CATEGORY,
                    Some(Circuit {
                        components: vec![component(3, COMPONENT_CATEGORY, None)],
                    }),
                ),
            ],
        };
        let matcher = Matcher {
            ids: vec![1, 3],
            calls: RefCell::new(Vec::new()),
        };
        let found = find_compatible_component(
            &circuit,
            PIC18_SELECTOR,
            &ProjectContext {
                path: "project".into(),
            },
            &matcher,
        )
        .unwrap_or_else(|| panic!("component missing"));
        assert_eq!(found.id, 2);
        assert_eq!(&*matcher.calls.borrow(), &[2, 3]);
    }

    #[test]
    fn trailer_replaces_unchecked_final_line_exactly() {
        let mut lines = vec!["data".to_owned(), "unchecked".to_owned()];
        append_pic18_hex_trailer(&mut lines)
            .unwrap_or_else(|error| panic!("trailer failed: {error}"));
        assert_eq!(
            lines,
            [
                "data",
                EXTENDED_ADDRESS_TRAILER,
                CONFIGURATION_TRAILER,
                EOF_TRAILER
            ]
        );
    }

    #[derive(Default)]
    struct TestAdapter {
        calls: Vec<String>,
        lines: Vec<String>,
    }

    impl Pic18DownloadAdapter for TestAdapter {
        fn prepare_simulator(&mut self, _: &CircuitComponent) -> Result<(), String> {
            self.calls.push("prepare".into());
            Ok(())
        }
        fn build_compiler_image(
            &mut self,
            _: &CircuitComponent,
            path: &Path,
        ) -> Result<(), String> {
            self.calls.push(format!("build:{}", path.display()));
            Ok(())
        }
        fn export_backend_image(
            &mut self,
            _: &CircuitComponent,
            path: &Path,
        ) -> Result<(), String> {
            self.calls.push(format!("export:{}", path.display()));
            Ok(())
        }
        fn load_hex_lines(&mut self, path: &Path) -> Result<Vec<String>, String> {
            self.calls.push(format!("load:{}", path.display()));
            Ok(self.lines.clone())
        }
        fn save_hex_lines(&mut self, path: &Path, lines: &[String]) -> Result<(), String> {
            self.calls.push(format!("save:{}", path.display()));
            self.lines = lines.to_vec();
            Ok(())
        }
        fn clear_compiler_state(&mut self) {
            self.calls.push("clear".into());
        }
        fn report_host_event(&mut self, event: Pic18HostEvent) {
            self.calls.push(format!("event:{event:?}"));
        }
    }

    #[test]
    fn simulator_workflow_preserves_build_trailer_cleanup_and_event_order() {
        let component = pic18(Pic18Backend::SimulatorCompiler, true, PIC18_CLOCK_HZ);
        let mut adapter = TestAdapter {
            lines: vec!["data".into(), EOF_TRAILER.into()],
            ..TestAdapter::default()
        };
        download_pic18_program(
            Pic18DownloadRequest {
                component: &component,
                application_root: Path::new("root"),
            },
            &mut adapter,
        )
        .unwrap_or_else(|error| panic!("download failed: {error}"));
        assert_eq!(adapter.calls[0], "prepare");
        assert!(adapter.calls[1].starts_with("build:"));
        assert!(adapter.calls[2].starts_with("load:"));
        assert!(adapter.calls[3].starts_with("save:"));
        assert_eq!(adapter.calls[4], "clear");
        assert!(adapter.calls[5].starts_with("event:ImageReady"));
        assert_eq!(adapter.calls[6], "event:Complete");
        assert_eq!(adapter.lines.last().map(String::as_str), Some(EOF_TRAILER));
    }

    #[test]
    fn mode_one_skips_rewrite_and_errors_stop_later_actions() {
        let mode_one = pic18(Pic18Backend::BackendImageWithTrailer, false, PIC18_CLOCK_HZ);
        let mut adapter = TestAdapter::default();
        download_pic18_program(
            Pic18DownloadRequest {
                component: &mode_one,
                application_root: Path::new("root"),
            },
            &mut adapter,
        )
        .unwrap_or_else(|error| panic!("download failed: {error}"));
        assert!(adapter.calls[0].starts_with("export:"));
        assert_eq!(adapter.calls[1], "clear");
        assert!(!adapter.calls.iter().any(|call| call.starts_with("load:")));

        adapter.calls.clear();
        let wrong_clock = pic18(Pic18Backend::Compiler, false, 1.0);
        assert_eq!(
            download_pic18_program(
                Pic18DownloadRequest {
                    component: &wrong_clock,
                    application_root: Path::new("root"),
                },
                &mut adapter,
            ),
            Err(Pic18DownloadError::ClockMustBe48Mhz)
        );
        assert!(adapter.calls.is_empty());

        let unsupported = pic18(Pic18Backend::Unsupported(9), false, PIC18_CLOCK_HZ);
        assert_eq!(
            download_pic18_program(
                Pic18DownloadRequest {
                    component: &unsupported,
                    application_root: Path::new("root"),
                },
                &mut adapter,
            ),
            Err(Pic18DownloadError::UnsupportedBackend(9))
        );

        let compiler = pic18(Pic18Backend::Compiler, false, PIC18_CLOCK_HZ);
        assert_eq!(
            download_pic18_program(
                Pic18DownloadRequest {
                    component: &compiler,
                    application_root: Path::new("root"),
                },
                &mut adapter,
            ),
            Err(Pic18DownloadError::EmptyHexImage)
        );
        assert!(!adapter.calls.iter().any(|call| call == "clear"));
    }

    #[derive(Default)]
    struct Messages(Cell<usize>);
    impl Pic18MessageSink for Messages {
        fn report_missing_pic18(&mut self) {
            self.0.set(self.0.get() + 1);
        }
    }

    #[test]
    fn gate_keeps_no_circuit_and_missing_component_as_no_ops() {
        let project = ProjectContext {
            path: "project".into(),
        };
        let matcher = Matcher {
            ids: Vec::new(),
            calls: RefCell::new(Vec::new()),
        };
        let mut adapter = TestAdapter::default();
        let mut messages = Messages::default();
        let gate = Pic18DownloadGate {
            supplied_circuit: None,
            current_circuit: None,
            project: &project,
            suppress_missing_message: false,
            application_root: Path::new("root"),
        };
        assert_eq!(
            start_pic18_download(gate, &matcher, &mut adapter, &mut messages),
            Ok(Pic18GateOutcome::NoCircuit)
        );
        let circuit = Circuit {
            components: vec![component(1, COMPONENT_CATEGORY, None)],
        };
        let gate = Pic18DownloadGate {
            supplied_circuit: Some(&circuit),
            current_circuit: None,
            project: &project,
            suppress_missing_message: false,
            application_root: Path::new("root"),
        };
        assert_eq!(
            start_pic18_download(gate, &matcher, &mut adapter, &mut messages),
            Ok(Pic18GateOutcome::MissingComponent)
        );
        assert_eq!(messages.0.get(), 1);

        let gate = Pic18DownloadGate {
            supplied_circuit: Some(&circuit),
            current_circuit: None,
            project: &project,
            suppress_missing_message: true,
            application_root: Path::new("root"),
        };
        assert_eq!(
            start_pic18_download(gate, &matcher, &mut adapter, &mut messages),
            Ok(Pic18GateOutcome::MissingComponent)
        );
        assert_eq!(messages.0.get(), 1);
    }

    fn component(id: u64, category: u8, child: Option<Circuit>) -> CircuitComponent {
        CircuitComponent {
            id,
            category,
            component_type: if child.is_some() { HIERARCHY_TYPE } else { 0 },
            hierarchy_enabled: child.is_some(),
            child_circuit: child.map(Box::new),
            pic18_program: None,
        }
    }

    fn pic18(backend: Pic18Backend, prepare: bool, clock_hz: f64) -> CircuitComponent {
        CircuitComponent {
            id: 1,
            category: COMPONENT_CATEGORY,
            component_type: 0,
            hierarchy_enabled: false,
            child_circuit: None,
            pic18_program: Some(Pic18ProgramConfig {
                clock_hz,
                backend,
                simulator_preparation_required: prepare,
            }),
        }
    }
}
