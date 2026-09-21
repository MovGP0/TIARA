//! What the editor keeps between one run and the next.
//!
//! Most of the View menu, the Analysis switches, the interface language, the
//! PCB library and a few of the Tools commands do not act on the schematic at
//! all: they change something that outlives the moment it is chosen. The port
//! had nowhere to keep any of it, so those commands did nothing and the menu
//! drew none of them checked.
//!
//! Every value here starts where the running original starts it. That was not
//! guessed from the resource, which carries the state a form is *built* with
//! and not the state it is *shown* in: it was read off the original's own
//! menus, which say outright which entries are ticked. Two of them are worth
//! naming because they are not what one would assume - the PCB library starts
//! on ALTIUM rather than TINA, and `Auto Wire` starts on.

use std::path::Path;

use serde::{Deserialize, Serialize};

/// What the editor keeps.
#[allow(
    clippy::struct_excessive_bools,
    reason = "each one is a separate switch on the original's menus"
)]
#[derive(Debug, Clone, PartialEq, Eq, Serialize, Deserialize)]
#[serde(default)]
pub struct EditorSettings {
    // What the sheet draws.
    pub grid: bool,
    pub pin_markers: bool,
    pub values: bool,
    pub units: bool,
    pub tolerance: bool,
    pub labels: bool,
    pub wire_ids: bool,
    pub package_numbers: bool,
    pub node_numbers: bool,
    pub digital_node_states: bool,

    // What the window shows around it.
    pub tool_bar: bool,
    pub component_bar: bool,

    /// Whether the sheet is laid out as a page rather than as a plain sheet.
    pub page_layout: bool,

    // How the next analysis is set up.
    pub faults_enabled: bool,
    pub stress_analysis: bool,
    pub power_dissipation: bool,
    pub mcu_debugger: bool,
    pub hdl_debugger: bool,
    pub fast_analytic: bool,

    // How the editor behaves.
    pub schematic_locked: bool,
    pub netlist_editor_docked: bool,
    pub auto_wire: bool,

    /// The interface language, by the name the menu gives it.
    pub language: String,
    /// The PCB library in use, by the name the menu gives it.
    pub pcb_library: String,
}

impl Default for EditorSettings {
    /// What the running original starts with, read off its own menus.
    fn default() -> Self {
        Self {
            grid: true,
            pin_markers: true,
            values: true,
            units: false,
            tolerance: false,
            labels: true,
            wire_ids: false,
            package_numbers: true,
            node_numbers: false,
            digital_node_states: true,

            tool_bar: true,
            component_bar: true,

            page_layout: false,

            faults_enabled: false,
            stress_analysis: false,
            power_dissipation: false,
            mcu_debugger: false,
            hdl_debugger: false,
            fast_analytic: false,

            schematic_locked: true,
            netlist_editor_docked: true,
            auto_wire: true,

            language: "English".to_owned(),
            pcb_library: "ALTIUM".to_owned(),
        }
    }
}

/// How a command reaches the switch it belongs to.
///
/// One accessor per switch rather than a name per switch, so that reading
/// whether a switch is on and writing it use the same route and cannot come
/// to disagree.
type Switch = fn(&mut EditorSettings) -> &mut bool;

/// The command each switch answers to, as the resource names it.
const SWITCHES: [(&str, Switch); 21] = [
    ("mnGrid", |s| &mut s.grid),
    ("mnPinMarkers", |s| &mut s.pin_markers),
    ("mnAppendValueToLabel", |s| &mut s.values),
    ("mnAppendUnitToLabel", |s| &mut s.units),
    ("mnAppendToleranceToLabel", |s| &mut s.tolerance),
    ("mnShowLabels", |s| &mut s.labels),
    ("mnShowWireIDs", |s| &mut s.wire_ids),
    ("mnPackageNumbers", |s| &mut s.package_numbers),
    ("mnNodeNumbers", |s| &mut s.node_numbers),
    ("mnShowDigitalNodeStates", |s| &mut s.digital_node_states),
    ("mnToolBar", |s| &mut s.tool_bar),
    ("mnComponentBar", |s| &mut s.component_bar),
    ("ErrorInsertion1", |s| &mut s.faults_enabled),
    ("StressReportEnabled", |s| &mut s.stress_analysis),
    ("PowerDissipationCalculation", |s| &mut s.power_dissipation),
    ("EnableMCUCodedebugger", |s| &mut s.mcu_debugger),
    ("EnableHDLDebugger", |s| &mut s.hdl_debugger),
    ("mnFastAnalyticSimulation", |s| &mut s.fast_analytic),
    ("FixSchematicEditor", |s| &mut s.schematic_locked),
    ("mnDockNetlistEditor", |s| &mut s.netlist_editor_docked),
    ("mnAutoReWire", |s| &mut s.auto_wire),
];

/// The two commands that say how the sheet is laid out, which are one choice
/// between them rather than two switches.
const LAYOUTS: [(&str, bool); 2] = [("mnNormalView", false), ("mnPageLayoutView", true)];

/// The languages, by the command that chooses each.
pub const LANGUAGES: [(&str, &str); 10] = [
    ("mnNative", "English"),
    ("mnLanguage.zh-Hans", "Chinese, Simplified"),
    ("mnLanguage.zh-Hant", "Chinese, Traditional"),
    ("mnLanguage.fr", "French"),
    ("mnLanguage.de", "German"),
    ("mnLanguage.hu", "Hungarian"),
    ("mnLanguage.ja", "Japanese"),
    ("mnLanguage.pt", "Portuguese"),
    ("mnLanguage.ru", "Russian"),
    ("mnLanguage.es", "Spanish"),
];

/// The PCB libraries, by the command that chooses each.
pub const PCB_LIBRARIES: [(&str, &str); 8] = [
    ("TINAPCB1", "TINA"),
    ("AltiumPCBProject1", "ALTIUM"),
    ("ORCADPCB1", "ORCAD"),
    ("PCADPCB1", "PCAD"),
    ("PROTELPCB1", "PROTEL"),
    ("REDACPCB1", "REDAC"),
    ("TANGOPCB1", "TANGO"),
    ("EDSPCB1", "EDS"),
];

impl EditorSettings {
    /// Applies a menu command, and says whether it was one of these.
    ///
    /// A command that is not a setting is left for whoever else answers it,
    /// which is why this says so rather than quietly doing nothing.
    pub fn apply(&mut self, command: &str) -> bool {
        if let Some((_, field)) = SWITCHES.iter().find(|(name, _)| *name == command) {
            let switch = field(self);
            *switch = !*switch;
            return true;
        }
        if let Some((_, layout)) = LAYOUTS.iter().find(|(name, _)| *name == command) {
            self.page_layout = *layout;
            return true;
        }
        if let Some((_, language)) = LANGUAGES.iter().find(|(name, _)| *name == command) {
            (*language).clone_into(&mut self.language);
            return true;
        }
        if let Some((_, library)) = PCB_LIBRARIES.iter().find(|(name, _)| *name == command) {
            (*library).clone_into(&mut self.pcb_library);
            return true;
        }
        false
    }

    /// Whether the menu should draw a tick beside a command.
    ///
    /// `None` for a command that is not a setting, which is not the same as a
    /// setting that is off.
    #[must_use]
    pub fn is_checked(&self, command: &str) -> Option<bool> {
        if let Some((_, field)) = SWITCHES.iter().find(|(name, _)| *name == command) {
            // Reading through the same accessor the writer uses keeps the two
            // from ever disagreeing about which switch a command means.
            let mut copy = self.clone();
            return Some(*field(&mut copy));
        }
        if let Some((_, layout)) = LAYOUTS.iter().find(|(name, _)| *name == command) {
            return Some(self.page_layout == *layout);
        }
        if let Some((_, language)) = LANGUAGES.iter().find(|(name, _)| *name == command) {
            return Some(self.language == *language);
        }
        if let Some((_, library)) = PCB_LIBRARIES.iter().find(|(name, _)| *name == command) {
            return Some(self.pcb_library == *library);
        }
        None
    }

    /// Every command these settings answer to.
    #[must_use]
    pub fn commands() -> Vec<&'static str> {
        SWITCHES
            .iter()
            .map(|(name, _)| *name)
            .chain(LAYOUTS.iter().map(|(name, _)| *name))
            .chain(LANGUAGES.iter().map(|(name, _)| *name))
            .chain(PCB_LIBRARIES.iter().map(|(name, _)| *name))
            .collect()
    }

    /// Reads the settings kept at a path, or the ones to start with.
    ///
    /// A missing or unreadable file is not a fault: it means the editor has
    /// not been run before, or its settings were thrown away, and either way
    /// the answer is to start where the original starts.
    #[must_use]
    pub fn read(path: &Path) -> Self {
        std::fs::read_to_string(path)
            .ok()
            .and_then(|text| serde_json::from_str(&text).ok())
            .unwrap_or_default()
    }

    /// Writes the settings to a path.
    ///
    /// # Errors
    ///
    /// Returns what went wrong if the directory cannot be made or the file
    /// cannot be written.
    pub fn write(&self, path: &Path) -> std::io::Result<()> {
        if let Some(directory) = path.parent() {
            std::fs::create_dir_all(directory)?;
        }
        let text = serde_json::to_string_pretty(self)
            .map_err(|error| std::io::Error::new(std::io::ErrorKind::InvalidData, error))?;
        std::fs::write(path, text)
    }
}

#[cfg(test)]
mod tests {
    use super::{EditorSettings, LANGUAGES, PCB_LIBRARIES};

    /// What the running original was seen to tick, and nothing else.
    const TICKED_AT_START: [&str; 13] = [
        "mnGrid",
        "mnPinMarkers",
        "mnAppendValueToLabel",
        "mnShowLabels",
        "mnPackageNumbers",
        "mnToolBar",
        "mnComponentBar",
        "mnShowDigitalNodeStates",
        "mnNormalView",
        "mnNative",
        "AltiumPCBProject1",
        "FixSchematicEditor",
        "mnDockNetlistEditor",
    ];

    #[test]
    fn it_starts_where_the_original_starts() {
        let settings = EditorSettings::default();
        for command in TICKED_AT_START {
            assert_eq!(
                settings.is_checked(command),
                Some(true),
                "{command} is ticked in the original"
            );
        }
    }

    #[test]
    fn nothing_else_starts_ticked() {
        let settings = EditorSettings::default();
        for command in EditorSettings::commands() {
            if TICKED_AT_START.contains(&command) || command == "mnAutoReWire" {
                continue;
            }
            assert_eq!(
                settings.is_checked(command),
                Some(false),
                "{command} is not ticked in the original"
            );
        }
    }

    #[test]
    fn auto_wire_starts_on_which_is_not_what_one_would_assume() {
        // Read off the original's Insert menu, where it is ticked.
        assert!(EditorSettings::default().auto_wire);
    }

    #[test]
    fn the_pcb_library_starts_on_altium_rather_than_tina() {
        let settings = EditorSettings::default();
        assert_eq!(settings.pcb_library, "ALTIUM");
        assert_eq!(settings.is_checked("TINAPCB1"), Some(false));
    }

    #[test]
    fn a_switch_goes_off_and_on_again() {
        let mut settings = EditorSettings::default();
        assert!(settings.apply("mnGrid"));
        assert_eq!(settings.is_checked("mnGrid"), Some(false));

        assert!(settings.apply("mnGrid"));
        assert_eq!(settings.is_checked("mnGrid"), Some(true));
    }

    #[test]
    fn the_two_layouts_are_one_choice_rather_than_two_switches() {
        let mut settings = EditorSettings::default();
        assert_eq!(settings.is_checked("mnNormalView"), Some(true));
        assert_eq!(settings.is_checked("mnPageLayoutView"), Some(false));

        settings.apply("mnPageLayoutView");
        assert_eq!(settings.is_checked("mnNormalView"), Some(false));
        assert_eq!(settings.is_checked("mnPageLayoutView"), Some(true));
    }

    #[test]
    fn choosing_a_language_unchooses_the_last_one() {
        let mut settings = EditorSettings::default();
        settings.apply("mnLanguage.de");

        assert_eq!(settings.language, "German");
        assert_eq!(settings.is_checked("mnLanguage.de"), Some(true));
        assert_eq!(settings.is_checked("mnNative"), Some(false));
        assert_eq!(LANGUAGES.len(), 10);
    }

    #[test]
    fn choosing_a_pcb_library_unchooses_the_last_one() {
        let mut settings = EditorSettings::default();
        settings.apply("TINAPCB1");

        assert_eq!(settings.pcb_library, "TINA");
        assert_eq!(settings.is_checked("AltiumPCBProject1"), Some(false));
        assert_eq!(PCB_LIBRARIES.len(), 8);
    }

    #[test]
    fn a_command_that_is_not_a_setting_is_left_alone() {
        let mut settings = EditorSettings::default();
        assert!(!settings.apply("mnNew"));
        assert!(!settings.apply("Cut"));
        assert_eq!(settings.is_checked("mnNew"), None);
        assert_eq!(settings, EditorSettings::default());
    }

    #[test]
    fn every_command_is_answered_and_can_be_ticked() {
        let mut settings = EditorSettings::default();
        for command in EditorSettings::commands() {
            assert!(settings.apply(command), "{command} should be answered");
            assert!(
                settings.is_checked(command).is_some(),
                "{command} should say whether it is ticked"
            );
        }
    }

    #[test]
    fn there_are_as_many_commands_as_the_menus_carry() {
        // 21 switches, 2 layouts, 10 languages, 8 libraries.
        assert_eq!(EditorSettings::commands().len(), 41);
    }

    #[test]
    fn what_is_written_is_what_is_read_back() {
        let directory = std::env::temp_dir().join("tiara-settings-round-trip");
        let path = directory.join("settings.json");
        let _ = std::fs::remove_file(&path);

        let mut settings = EditorSettings::default();
        settings.apply("mnGrid");
        settings.apply("mnLanguage.fr");
        settings.write(&path).expect("the settings are written");

        assert_eq!(EditorSettings::read(&path), settings);
        let _ = std::fs::remove_dir_all(&directory);
    }

    #[test]
    fn settings_that_were_never_written_are_the_ones_to_start_with() {
        let missing = std::path::Path::new("no/such/settings.json");
        assert_eq!(EditorSettings::read(missing), EditorSettings::default());
    }

    #[test]
    fn a_file_that_makes_no_sense_is_not_a_fault() {
        let directory = std::env::temp_dir().join("tiara-settings-nonsense");
        let path = directory.join("settings.json");
        std::fs::create_dir_all(&directory).expect("a directory to write into");
        std::fs::write(&path, "this is not settings").expect("a file to read back");

        assert_eq!(EditorSettings::read(&path), EditorSettings::default());
        let _ = std::fs::remove_dir_all(&directory);
    }

    #[test]
    fn a_file_missing_a_value_keeps_the_one_to_start_with() {
        let directory = std::env::temp_dir().join("tiara-settings-partial");
        let path = directory.join("settings.json");
        std::fs::create_dir_all(&directory).expect("a directory to write into");
        std::fs::write(&path, r#"{"grid": false}"#).expect("a file to read back");

        let settings = EditorSettings::read(&path);
        assert!(!settings.grid);
        assert!(settings.labels, "the rest are left where they start");
        let _ = std::fs::remove_dir_all(&directory);
    }
}
