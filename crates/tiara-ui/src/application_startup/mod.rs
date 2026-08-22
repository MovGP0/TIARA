use std::path::{Path, PathBuf};

use iced::widget::{button, column, container, row, text};
use iced::{Element, Length};

pub const TINA_INI_FILE: &str = "TINA.INI";
pub const HOTKEYS_INI_FILE: &str = "hotkeys.ini";
pub const DEFAULT_PARAMETERS_FILE: &str = "default.prm";
pub const SET_REAL_DPI_EXECUTABLE: &str = "SetRealDPI.exe";
pub const SPICE_LIBRARY_DIRECTORY: &str = "SPICELIB";
pub const SPICE_INDEX_FILE: &str = "SPMACROS.IND";
const PRODUCT_KEY_PREFIX: &str = r"SOFTWARE\DesignSoft";
const CHECKPOINTS: [&str; 7] = [
    "TSchematicEditor.FormCreate.0",
    "TSchematicEditor.FormCreate.1",
    "TSchematicEditor.FormCreate.2",
    "TSchematicEditor.FormCreate.3",
    "TSchematicEditor.FormCreate.4",
    "TSchematicEditor.FormCreate.5",
    "TSchematicEditor.FormCreate.6",
];

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct StartupConfiguration {
    pub install_directory: PathBuf,
    pub settings_directory: PathBuf,
    pub startup_file: Option<PathBuf>,
    pub default_parameters_permitted: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum FileDialogKind {
    OpenSchematic,
    SaveSchematic,
    OpenMacro,
    SaveMacro,
    ImportBackAnnotation,
    ImportPicture,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct FileDialogConfiguration {
    pub kind: FileDialogKind,
    pub locations: Vec<PathBuf>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum MainFormStep {
    CreateAndConnectSupportObjects,
    OpenTinaIni(PathBuf),
    ConfigureFileDialogs(Vec<FileDialogConfiguration>),
    Checkpoint(&'static str),
    InitializeControlsAndMenus,
    InitializeRuntimeState,
    LoadDefaultParameters(PathBuf),
    ImportBackAnnotation(PathBuf),
    OpenSchematic(PathBuf),
    ApplyProductAndFeatureVisibility,
    RestorePathsAndDialogDefaults,
    ReloadHotkeys(PathBuf),
    FinalizeProductVisibility,
    RegisterCallbacksAndTimers,
    LaunchSetRealDpi(PathBuf),
}

pub trait MainFormStartupHost {
    type Error;

    fn file_exists(&self, path: &Path) -> bool;

    /// Performs one recovered initialization step.
    ///
    /// # Errors
    ///
    /// Returns a host-specific startup error. Completed earlier steps are not
    /// rolled back.
    fn perform(&mut self, step: MainFormStep) -> Result<(), Self::Error>;
}

/// Coordinates the recovered Schematic Editor form creation. This ports
/// Ghidra function `FUN_01c69770` at `0x01C69770`.
///
/// # Errors
///
/// Returns the first host error. The recovered handler has no local retry,
/// transaction, or rollback.
pub fn initialize_main_form<Host: MainFormStartupHost>(
    host: &mut Host,
    configuration: &StartupConfiguration,
) -> Result<(), Host::Error> {
    let tina_ini = configuration.settings_directory.join(TINA_INI_FILE);
    host.perform(MainFormStep::CreateAndConnectSupportObjects)?;
    host.perform(MainFormStep::OpenTinaIni(tina_ini))?;
    host.perform(MainFormStep::ConfigureFileDialogs(file_dialogs(
        configuration,
    )))?;
    host.perform(MainFormStep::Checkpoint(CHECKPOINTS[0]))?;
    host.perform(MainFormStep::InitializeControlsAndMenus)?;
    host.perform(MainFormStep::Checkpoint(CHECKPOINTS[1]))?;
    host.perform(MainFormStep::InitializeRuntimeState)?;
    host.perform(MainFormStep::Checkpoint(CHECKPOINTS[2]))?;

    let default_parameters = configuration
        .install_directory
        .join(DEFAULT_PARAMETERS_FILE);
    if configuration.default_parameters_permitted && host.file_exists(&default_parameters) {
        host.perform(MainFormStep::LoadDefaultParameters(default_parameters))?;
    }
    if let Some(startup_file) = &configuration.startup_file {
        if is_back_annotation(startup_file) {
            host.perform(MainFormStep::ImportBackAnnotation(startup_file.clone()))?;
        } else {
            host.perform(MainFormStep::OpenSchematic(startup_file.clone()))?;
        }
    }

    host.perform(MainFormStep::Checkpoint(CHECKPOINTS[3]))?;
    host.perform(MainFormStep::ApplyProductAndFeatureVisibility)?;
    host.perform(MainFormStep::Checkpoint(CHECKPOINTS[4]))?;
    host.perform(MainFormStep::RestorePathsAndDialogDefaults)?;
    host.perform(MainFormStep::ReloadHotkeys(
        configuration.settings_directory.join(HOTKEYS_INI_FILE),
    ))?;
    host.perform(MainFormStep::Checkpoint(CHECKPOINTS[5]))?;
    host.perform(MainFormStep::FinalizeProductVisibility)?;
    host.perform(MainFormStep::Checkpoint(CHECKPOINTS[6]))?;
    host.perform(MainFormStep::RegisterCallbacksAndTimers)?;
    host.perform(MainFormStep::LaunchSetRealDpi(
        configuration
            .install_directory
            .join(SET_REAL_DPI_EXECUTABLE),
    ))?;
    Ok(())
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum EnvironmentDialogResult {
    Accepted,
    NotAccepted,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum EnvironmentRepairOutcome {
    ExistingConfiguration,
    Repaired,
    TerminationRequested,
}

pub trait EnvironmentRepairHost {
    type Error;

    /// Tests whether the current-user product key can be opened.
    ///
    /// # Errors
    ///
    /// Returns a platform registry error. A missing key is `Ok(false)`.
    fn product_key_exists(&mut self, key: &str) -> Result<bool, Self::Error>;

    /// Shows the environment-directory setup dialog.
    ///
    /// # Errors
    ///
    /// Returns a host dialog error.
    fn show_environment_setup(&mut self) -> Result<EnvironmentDialogResult, Self::Error>;

    /// Requests process termination.
    ///
    /// # Errors
    ///
    /// Returns a host termination error.
    fn request_termination(&mut self) -> Result<(), Self::Error>;
}

/// Repairs missing current-user directory settings. This ports Ghidra
/// function `FUN_01d7d5a0` at `0x01D7D5A0`.
///
/// # Errors
///
/// Returns the first registry, dialog, or termination adapter error.
pub fn repair_environment_directories<Host: EnvironmentRepairHost>(
    host: &mut Host,
    product_registry_suffix: &str,
) -> Result<EnvironmentRepairOutcome, Host::Error> {
    let product_key = format!(r"{PRODUCT_KEY_PREFIX}\{product_registry_suffix}");
    if host.product_key_exists(&product_key)? {
        return Ok(EnvironmentRepairOutcome::ExistingConfiguration);
    }
    if host.show_environment_setup()? == EnvironmentDialogResult::Accepted {
        return Ok(EnvironmentRepairOutcome::Repaired);
    }
    host.request_termination()?;
    Ok(EnvironmentRepairOutcome::TerminationRequested)
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub enum LibraryKind {
    Program,
    CommonCatalog,
    PrivateCatalog,
}

impl LibraryKind {
    const fn label(self) -> &'static str {
        match self {
            Self::Program => "program",
            Self::CommonCatalog => "common catalog",
            Self::PrivateCatalog => "private catalog",
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct LibraryLocation {
    pub kind: LibraryKind,
    pub base_directory: PathBuf,
}

impl LibraryLocation {
    #[must_use]
    pub fn index_directory(&self) -> PathBuf {
        self.base_directory.join(SPICE_LIBRARY_DIRECTORY)
    }

    #[must_use]
    pub fn index_file(&self) -> PathBuf {
        self.index_directory().join(SPICE_INDEX_FILE)
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct LibraryDirectories {
    pub program: PathBuf,
    pub common_catalog: PathBuf,
    pub private_catalog: PathBuf,
    pub settings: PathBuf,
}

impl LibraryDirectories {
    fn unique_locations(&self) -> Vec<LibraryLocation> {
        let mut locations = Vec::new();
        for (kind, directory) in [
            (LibraryKind::Program, &self.program),
            (LibraryKind::CommonCatalog, &self.common_catalog),
            (LibraryKind::PrivateCatalog, &self.private_catalog),
        ] {
            if !locations
                .iter()
                .any(|location: &LibraryLocation| location.base_directory == *directory)
            {
                locations.push(LibraryLocation {
                    kind,
                    base_directory: directory.clone(),
                });
            }
        }
        locations
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum RepairChoice {
    Continue,
    Rebuild,
    Terminate,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum SpiceRepairOutcome {
    Skipped,
    Valid,
    Continued { invalid: Vec<LibraryKind> },
    Rebuilt { failed: Vec<LibraryKind> },
    TerminationRequested,
}

pub trait SpiceIndexRepairHost {
    type Error;

    /// Reads and clears `ForceReBuildLibrary` when it is set.
    ///
    /// # Errors
    ///
    /// Returns an INI adapter error.
    fn take_force_rebuild_flag(&mut self, tina_ini: &Path) -> Result<bool, Self::Error>;

    /// Validates one SPICE index.
    ///
    /// # Errors
    ///
    /// Returns a library adapter error.
    fn index_is_valid(&mut self, location: &LibraryLocation) -> Result<bool, Self::Error>;

    /// Shows the three-result repair prompt.
    ///
    /// # Errors
    ///
    /// Returns a dialog adapter error.
    fn choose_repair(&mut self, invalid: &[LibraryKind]) -> Result<RepairChoice, Self::Error>;

    /// Prepares shared library state before rebuilding indexes.
    ///
    /// # Errors
    ///
    /// Returns a library adapter error.
    fn prepare_rebuild(&mut self) -> Result<(), Self::Error>;

    /// Rebuilds one invalid index. `Ok(false)` is a completed failed rebuild.
    ///
    /// # Errors
    ///
    /// Returns a library adapter error.
    fn rebuild_index(&mut self, location: &LibraryLocation) -> Result<bool, Self::Error>;

    /// Removes the stale index after a completed failed rebuild.
    ///
    /// # Errors
    ///
    /// Returns a file-system adapter error.
    fn remove_stale_index(&mut self, index_file: &Path) -> Result<(), Self::Error>;

    /// Requests process termination.
    ///
    /// # Errors
    ///
    /// Returns a host termination error.
    fn request_termination(&mut self) -> Result<(), Self::Error>;
}

/// Validates and repairs the three startup SPICE library indexes. This ports
/// Ghidra function `FUN_01d7a6c0` at `0x01D7A6C0`.
///
/// # Errors
///
/// Returns the first INI, library, dialog, file-system, or termination adapter
/// error. Earlier changes are not rolled back.
pub fn repair_spice_indexes<Host: SpiceIndexRepairHost>(
    host: &mut Host,
    directories: &LibraryDirectories,
    skip_repair: bool,
) -> Result<SpiceRepairOutcome, Host::Error> {
    if skip_repair {
        return Ok(SpiceRepairOutcome::Skipped);
    }
    let tina_ini = directories.settings.join(TINA_INI_FILE);
    let force_program_rebuild = host.take_force_rebuild_flag(&tina_ini)?;
    let locations = directories.unique_locations();
    let mut invalid_locations = Vec::new();
    for location in locations {
        let valid = host.index_is_valid(&location)?;
        if !valid || (location.kind == LibraryKind::Program && force_program_rebuild) {
            invalid_locations.push(location);
        }
    }
    if invalid_locations.is_empty() {
        return Ok(SpiceRepairOutcome::Valid);
    }
    let invalid_kinds = invalid_locations
        .iter()
        .map(|location| location.kind)
        .collect::<Vec<_>>();
    match host.choose_repair(&invalid_kinds)? {
        RepairChoice::Continue => Ok(SpiceRepairOutcome::Continued {
            invalid: invalid_kinds,
        }),
        RepairChoice::Terminate => {
            host.request_termination()?;
            Ok(SpiceRepairOutcome::TerminationRequested)
        }
        RepairChoice::Rebuild => {
            host.prepare_rebuild()?;
            let mut failed_locations = Vec::new();
            for location in invalid_locations {
                if !host.rebuild_index(&location)? {
                    failed_locations.push(location);
                }
            }
            for location in &failed_locations {
                host.remove_stale_index(&location.index_file())?;
            }
            Ok(SpiceRepairOutcome::Rebuilt {
                failed: failed_locations
                    .into_iter()
                    .map(|location| location.kind)
                    .collect(),
            })
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum RepairPromptMessage {
    Selected(RepairChoice),
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct RepairPrompt {
    invalid: Vec<LibraryKind>,
    pending_choice: Option<RepairChoice>,
}

impl RepairPrompt {
    #[must_use]
    pub const fn new(invalid: Vec<LibraryKind>) -> Self {
        Self {
            invalid,
            pending_choice: None,
        }
    }

    pub const fn update(&mut self, message: RepairPromptMessage) {
        let RepairPromptMessage::Selected(choice) = message;
        self.pending_choice = Some(choice);
    }

    #[must_use]
    pub const fn take_choice(&mut self) -> Option<RepairChoice> {
        self.pending_choice.take()
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, RepairPromptMessage> {
        let invalid = self
            .invalid
            .iter()
            .map(|kind| kind.label())
            .collect::<Vec<_>>()
            .join(", ");
        container(
            column![
                text(format!("SPICE library indexes require repair: {invalid}")),
                row![
                    button("Continue")
                        .on_press(RepairPromptMessage::Selected(RepairChoice::Continue)),
                    button("Rebuild")
                        .on_press(RepairPromptMessage::Selected(RepairChoice::Rebuild)),
                    button("Terminate")
                        .on_press(RepairPromptMessage::Selected(RepairChoice::Terminate)),
                ]
                .spacing(8),
            ]
            .spacing(12),
        )
        .padding(16)
        .width(Length::Fill)
        .into()
    }
}

fn file_dialogs(configuration: &StartupConfiguration) -> Vec<FileDialogConfiguration> {
    let install = &configuration.install_directory;
    let settings = &configuration.settings_directory;
    let user_examples = settings.join("User Examples");
    let product_examples = install.join("Examples");
    let infineon_examples = product_examples.join("Infineon");
    let ti_examples = product_examples.join("Texas Instruments");
    let user_macros = settings.join("Macrolib");
    let product_macros = install.join("Macrolib");
    vec![
        FileDialogConfiguration {
            kind: FileDialogKind::OpenSchematic,
            locations: vec![
                user_examples.clone(),
                infineon_examples.clone(),
                ti_examples.clone(),
                product_examples.clone(),
                user_macros.clone(),
                product_macros.clone(),
            ],
        },
        FileDialogConfiguration {
            kind: FileDialogKind::SaveSchematic,
            locations: vec![
                user_examples.clone(),
                infineon_examples,
                ti_examples,
                product_examples.clone(),
            ],
        },
        FileDialogConfiguration {
            kind: FileDialogKind::OpenMacro,
            locations: vec![user_macros.clone(), product_macros.clone()],
        },
        FileDialogConfiguration {
            kind: FileDialogKind::SaveMacro,
            locations: vec![user_macros, product_macros],
        },
        FileDialogConfiguration {
            kind: FileDialogKind::ImportBackAnnotation,
            locations: vec![user_examples, product_examples],
        },
        FileDialogConfiguration {
            kind: FileDialogKind::ImportPicture,
            locations: Vec::new(),
        },
    ]
}

fn is_back_annotation(path: &Path) -> bool {
    path.extension()
        .and_then(|extension| extension.to_str())
        .is_some_and(|extension| extension.eq_ignore_ascii_case("ban"))
}

#[cfg(test)]
mod tests {
    use std::collections::{HashMap, HashSet, VecDeque};
    use std::convert::Infallible;

    use super::*;

    #[derive(Debug, Default)]
    struct MainHost {
        files: HashSet<PathBuf>,
        steps: Vec<MainFormStep>,
    }

    impl MainFormStartupHost for MainHost {
        type Error = Infallible;

        fn file_exists(&self, path: &Path) -> bool {
            self.files.contains(path)
        }

        fn perform(&mut self, step: MainFormStep) -> Result<(), Self::Error> {
            self.steps.push(step);
            Ok(())
        }
    }

    #[derive(Debug)]
    struct EnvironmentHost {
        key_exists: bool,
        dialog_result: EnvironmentDialogResult,
        shown: usize,
        terminations: usize,
        keys: Vec<String>,
    }

    impl EnvironmentRepairHost for EnvironmentHost {
        type Error = Infallible;

        fn product_key_exists(&mut self, key: &str) -> Result<bool, Self::Error> {
            self.keys.push(key.to_owned());
            Ok(self.key_exists)
        }

        fn show_environment_setup(&mut self) -> Result<EnvironmentDialogResult, Self::Error> {
            self.shown += 1;
            Ok(self.dialog_result)
        }

        fn request_termination(&mut self) -> Result<(), Self::Error> {
            self.terminations += 1;
            Ok(())
        }
    }

    #[derive(Debug)]
    struct SpiceHost {
        force: bool,
        validity: HashMap<LibraryKind, bool>,
        choice: RepairChoice,
        rebuild_results: VecDeque<bool>,
        force_reads: Vec<PathBuf>,
        checked: Vec<LibraryKind>,
        prompts: Vec<Vec<LibraryKind>>,
        prepared: usize,
        rebuilt: Vec<LibraryKind>,
        removed: Vec<PathBuf>,
        terminations: usize,
    }

    impl SpiceIndexRepairHost for SpiceHost {
        type Error = Infallible;

        fn take_force_rebuild_flag(&mut self, tina_ini: &Path) -> Result<bool, Self::Error> {
            self.force_reads.push(tina_ini.to_path_buf());
            Ok(self.force)
        }

        fn index_is_valid(&mut self, location: &LibraryLocation) -> Result<bool, Self::Error> {
            self.checked.push(location.kind);
            Ok(self.validity.get(&location.kind).copied().unwrap_or(true))
        }

        fn choose_repair(&mut self, invalid: &[LibraryKind]) -> Result<RepairChoice, Self::Error> {
            self.prompts.push(invalid.to_vec());
            Ok(self.choice)
        }

        fn prepare_rebuild(&mut self) -> Result<(), Self::Error> {
            self.prepared += 1;
            Ok(())
        }

        fn rebuild_index(&mut self, location: &LibraryLocation) -> Result<bool, Self::Error> {
            self.rebuilt.push(location.kind);
            Ok(self.rebuild_results.pop_front().unwrap_or(true))
        }

        fn remove_stale_index(&mut self, index_file: &Path) -> Result<(), Self::Error> {
            self.removed.push(index_file.to_path_buf());
            Ok(())
        }

        fn request_termination(&mut self) -> Result<(), Self::Error> {
            self.terminations += 1;
            Ok(())
        }
    }

    fn configuration(startup_file: Option<&str>) -> StartupConfiguration {
        StartupConfiguration {
            install_directory: PathBuf::from(r"C:\TINA"),
            settings_directory: PathBuf::from(r"C:\User"),
            startup_file: startup_file.map(PathBuf::from),
            default_parameters_permitted: true,
        }
    }

    fn directories() -> LibraryDirectories {
        LibraryDirectories {
            program: PathBuf::from(r"C:\TINA"),
            common_catalog: PathBuf::from(r"C:\Common"),
            private_catalog: PathBuf::from(r"C:\User\Catalog"),
            settings: PathBuf::from(r"C:\User"),
        }
    }

    fn spice_host(choice: RepairChoice) -> SpiceHost {
        SpiceHost {
            force: false,
            validity: HashMap::new(),
            choice,
            rebuild_results: VecDeque::new(),
            force_reads: Vec::new(),
            checked: Vec::new(),
            prompts: Vec::new(),
            prepared: 0,
            rebuilt: Vec::new(),
            removed: Vec::new(),
            terminations: 0,
        }
    }

    #[test]
    fn main_form_initialization_preserves_recovered_order_and_ban_branch() {
        let configuration = configuration(Some(r"C:\Input\board.BAN"));
        let mut host = MainHost::default();
        host.files.insert(
            configuration
                .install_directory
                .join(DEFAULT_PARAMETERS_FILE),
        );

        assert_eq!(initialize_main_form(&mut host, &configuration), Ok(()));

        assert_eq!(host.steps[0], MainFormStep::CreateAndConnectSupportObjects);
        assert_eq!(
            host.steps[1],
            MainFormStep::OpenTinaIni(PathBuf::from(r"C:\User").join(TINA_INI_FILE))
        );
        let MainFormStep::ConfigureFileDialogs(dialogs) = &host.steps[2] else {
            panic!("six file dialogs must be configured");
        };
        assert_eq!(dialogs.len(), 6);
        assert_eq!(dialogs[0].locations.len(), 6);
        assert!(host.steps.contains(&MainFormStep::LoadDefaultParameters(
            PathBuf::from(r"C:\TINA").join(DEFAULT_PARAMETERS_FILE)
        )));
        assert!(
            host.steps
                .contains(&MainFormStep::ImportBackAnnotation(PathBuf::from(
                    r"C:\Input\board.BAN"
                )))
        );
        assert!(
            !host
                .steps
                .iter()
                .any(|step| matches!(step, MainFormStep::OpenSchematic(_)))
        );
        assert_eq!(
            host.steps.last(),
            Some(&MainFormStep::LaunchSetRealDpi(
                PathBuf::from(r"C:\TINA").join(SET_REAL_DPI_EXECUTABLE)
            ))
        );
        assert_eq!(
            host.steps
                .iter()
                .filter(|step| matches!(step, MainFormStep::Checkpoint(_)))
                .count(),
            7
        );
    }

    #[test]
    fn main_form_skips_disallowed_defaults_and_opens_non_ban_startup_file() {
        let mut configuration = configuration(Some(r"C:\Input\design.tsc"));
        configuration.default_parameters_permitted = false;
        let mut host = MainHost::default();

        assert_eq!(initialize_main_form(&mut host, &configuration), Ok(()));
        assert!(
            !host
                .steps
                .iter()
                .any(|step| matches!(step, MainFormStep::LoadDefaultParameters(_)))
        );
        assert!(
            host.steps
                .contains(&MainFormStep::OpenSchematic(PathBuf::from(
                    r"C:\Input\design.tsc"
                )))
        );
    }

    #[test]
    fn environment_gate_is_noop_for_existing_key_and_accepts_repair() {
        let mut existing = EnvironmentHost {
            key_exists: true,
            dialog_result: EnvironmentDialogResult::NotAccepted,
            shown: 0,
            terminations: 0,
            keys: Vec::new(),
        };
        assert_eq!(
            repair_environment_directories(&mut existing, "TINA 16"),
            Ok(EnvironmentRepairOutcome::ExistingConfiguration)
        );
        assert_eq!(existing.shown, 0);
        assert_eq!(existing.keys, [r"SOFTWARE\DesignSoft\TINA 16"]);

        let mut repaired = EnvironmentHost {
            key_exists: false,
            dialog_result: EnvironmentDialogResult::Accepted,
            shown: 0,
            terminations: 0,
            keys: Vec::new(),
        };
        assert_eq!(
            repair_environment_directories(&mut repaired, "TINA 16"),
            Ok(EnvironmentRepairOutcome::Repaired)
        );
        assert_eq!(repaired.shown, 1);
        assert_eq!(repaired.terminations, 0);
    }

    #[test]
    fn rejected_environment_repair_requests_termination() {
        let mut host = EnvironmentHost {
            key_exists: false,
            dialog_result: EnvironmentDialogResult::NotAccepted,
            shown: 0,
            terminations: 0,
            keys: Vec::new(),
        };
        assert_eq!(
            repair_environment_directories(&mut host, "TINA 16"),
            Ok(EnvironmentRepairOutcome::TerminationRequested)
        );
        assert_eq!(host.shown, 1);
        assert_eq!(host.terminations, 1);
    }

    #[test]
    fn spice_check_skips_special_mode_and_accepts_valid_indexes() {
        let mut skipped = spice_host(RepairChoice::Terminate);
        assert_eq!(
            repair_spice_indexes(&mut skipped, &directories(), true),
            Ok(SpiceRepairOutcome::Skipped)
        );
        assert!(skipped.checked.is_empty());
        assert!(skipped.force_reads.is_empty());

        let mut valid = spice_host(RepairChoice::Terminate);
        assert_eq!(
            repair_spice_indexes(&mut valid, &directories(), false),
            Ok(SpiceRepairOutcome::Valid)
        );
        assert_eq!(valid.checked.len(), 3);
        assert!(valid.prompts.is_empty());
    }

    #[test]
    fn continue_leaves_invalid_spice_indexes_unchanged() {
        let mut host = spice_host(RepairChoice::Continue);
        host.validity.insert(LibraryKind::CommonCatalog, false);

        assert_eq!(
            repair_spice_indexes(&mut host, &directories(), false),
            Ok(SpiceRepairOutcome::Continued {
                invalid: vec![LibraryKind::CommonCatalog]
            })
        );
        assert!(host.rebuilt.is_empty());
        assert!(host.removed.is_empty());
        assert_eq!(host.prepared, 0);
    }

    #[test]
    fn rebuild_repairs_only_invalid_indexes_and_removes_failed_stale_files() {
        let mut host = spice_host(RepairChoice::Rebuild);
        host.force = true;
        host.validity.insert(LibraryKind::CommonCatalog, false);
        host.rebuild_results = VecDeque::from([true, false]);

        assert_eq!(
            repair_spice_indexes(&mut host, &directories(), false),
            Ok(SpiceRepairOutcome::Rebuilt {
                failed: vec![LibraryKind::CommonCatalog]
            })
        );
        assert_eq!(
            host.rebuilt,
            [LibraryKind::Program, LibraryKind::CommonCatalog]
        );
        assert_eq!(host.prepared, 1);
        assert_eq!(
            host.removed,
            [PathBuf::from(r"C:\Common")
                .join(SPICE_LIBRARY_DIRECTORY)
                .join(SPICE_INDEX_FILE)]
        );
        assert_eq!(
            host.force_reads,
            [PathBuf::from(r"C:\User").join(TINA_INI_FILE)]
        );
    }

    #[test]
    fn terminate_choice_requests_process_termination_without_cleanup() {
        let mut host = spice_host(RepairChoice::Terminate);
        host.validity.insert(LibraryKind::PrivateCatalog, false);

        assert_eq!(
            repair_spice_indexes(&mut host, &directories(), false),
            Ok(SpiceRepairOutcome::TerminationRequested)
        );
        assert_eq!(host.terminations, 1);
        assert!(host.rebuilt.is_empty());
        assert!(host.removed.is_empty());
    }

    #[test]
    fn repair_prompt_publishes_each_iced_choice() {
        let mut prompt = RepairPrompt::new(vec![LibraryKind::Program]);
        for choice in [
            RepairChoice::Continue,
            RepairChoice::Rebuild,
            RepairChoice::Terminate,
        ] {
            prompt.update(RepairPromptMessage::Selected(choice));
            assert_eq!(prompt.take_choice(), Some(choice));
        }
    }
}
