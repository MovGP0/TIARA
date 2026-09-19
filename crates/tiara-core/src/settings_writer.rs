//! Writing the settings back out.
//!
//! Every setting the application keeps is written here, one call each, with no
//! test of whether it has changed — so saving is a fixed cost and the file is
//! rewritten whole however little was touched.
//!
//! The section a setting belongs to has little to do with what it is about:
//! the schematic editor, the hardware-description tools and the design tool
//! all keep things in a section of their own, but the boundaries between them
//! follow the history of the program rather than any division a reader would
//! draw.

/// How one setting is written.
///
/// Part of Ghidra function `FUN_01c85f70` at `0x01C85F70`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum WriteAs {
    /// Through the string writer, as itself.
    Text,
    /// Through the number writer.
    Number,
    /// Through the flag writer, which decides its own spelling.
    Flag,
    /// Through the **string** writer, with one of two constants standing for
    /// true and false.
    ///
    /// The odd one out, and the reason a reader of these files cannot assume
    /// one convention: a flag written this way is a string in the file and a
    /// flag written the other way is whatever the platform writes a flag as.
    ///
    /// The two constants standing for true and false did not survive as typed
    /// strings, so what they say is not recoverable — only that there are
    /// exactly two of them and that an ordinary test chooses between them.
    FlagAsText,
}

/// One setting, as it is written out.
///
/// Part of Ghidra function `FUN_01c85f70` at `0x01C85F70`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct WrittenSetting {
    /// The section it is written under.
    pub section: &'static str,
    /// What it is called.
    pub key: &'static str,
    /// How it goes out.
    pub write_as: WriteAs,
}

/// Every setting written, in the order they are written.
///
/// Part of Ghidra function `FUN_01c85f70` at `0x01C85F70`.
pub const WRITTEN_SETTINGS: [WrittenSetting; 62] = [
    WrittenSetting {
        section: "Schematic Editor",
        key: "AutoRepeat",
        write_as: WriteAs::FlagAsText,
    },
    WrittenSetting {
        section: "Schematic Editor",
        key: "AutoReWire",
        write_as: WriteAs::FlagAsText,
    },
    WrittenSetting {
        section: "Schematic Editor",
        key: "AppendValueToLabel",
        write_as: WriteAs::FlagAsText,
    },
    WrittenSetting {
        section: "Schematic Editor",
        key: "AppendUnitToLabel",
        write_as: WriteAs::FlagAsText,
    },
    WrittenSetting {
        section: "Schematic Editor",
        key: "AppendToleranceToLabel",
        write_as: WriteAs::FlagAsText,
    },
    WrittenSetting {
        section: "Schematic Editor",
        key: "ShowPCBPinNumbers",
        write_as: WriteAs::FlagAsText,
    },
    WrittenSetting {
        section: "Schematic Editor",
        key: "AutoSaveInterval",
        write_as: WriteAs::Number,
    },
    WrittenSetting {
        section: "Schematic Editor",
        key: "AutoSaveHistoryDepth",
        write_as: WriteAs::Number,
    },
    WrittenSetting {
        section: "Schematic Editor",
        key: "StartAsNew",
        write_as: WriteAs::Flag,
    },
    WrittenSetting {
        section: "Schematic Editor",
        key: "RenumberOnPaste",
        write_as: WriteAs::FlagAsText,
    },
    WrittenSetting {
        section: "Schematic Editor",
        key: "SaveReferenceOnly",
        write_as: WriteAs::FlagAsText,
    },
    WrittenSetting {
        section: "Schematic Editor",
        key: "ShowLabels",
        write_as: WriteAs::FlagAsText,
    },
    WrittenSetting {
        section: "Schematic Editor",
        key: "ShowGraphNumbers",
        write_as: WriteAs::FlagAsText,
    },
    WrittenSetting {
        section: "Schematic Editor",
        key: "WireWidth",
        write_as: WriteAs::Flag,
    },
    WrittenSetting {
        section: "Schematic Editor",
        key: "Param1",
        write_as: WriteAs::FlagAsText,
    },
    WrittenSetting {
        section: "Schematic Editor",
        key: "Param2",
        write_as: WriteAs::Text,
    },
    WrittenSetting {
        section: "Schematic Editor",
        key: "Param3",
        write_as: WriteAs::Text,
    },
    WrittenSetting {
        section: "Schematic Editor",
        key: "Param4",
        write_as: WriteAs::Text,
    },
    WrittenSetting {
        section: "Schematic Editor",
        key: "InitDir",
        write_as: WriteAs::Text,
    },
    WrittenSetting {
        section: "Schematic Editor",
        key: "DockNetlist",
        write_as: WriteAs::FlagAsText,
    },
    WrittenSetting {
        section: "Schematic Editor",
        key: "Default Precision",
        write_as: WriteAs::Number,
    },
    WrittenSetting {
        section: "Schematic Editor",
        key: "LanguageCode",
        write_as: WriteAs::FlagAsText,
    },
    WrittenSetting {
        section: "Schematic Editor",
        key: "MouseWheelZooming",
        write_as: WriteAs::Flag,
    },
    WrittenSetting {
        section: "Schematic Editor",
        key: "CompressedTSCFormat",
        write_as: WriteAs::Flag,
    },
    WrittenSetting {
        section: "Schematic Editor",
        key: "SavePictureAsGIF",
        write_as: WriteAs::Flag,
    },
    WrittenSetting {
        section: "Vhdl",
        key: "Enable MC Debug",
        write_as: WriteAs::Flag,
    },
    WrittenSetting {
        section: "Vhdl",
        key: "Enable HDL Debug",
        write_as: WriteAs::Flag,
    },
    WrittenSetting {
        section: "Vhdl",
        key: "Synth1 (generating a/m)",
        write_as: WriteAs::Flag,
    },
    WrittenSetting {
        section: "Vhdl",
        key: "Synth2 (ports only a/m)",
        write_as: WriteAs::Flag,
    },
    WrittenSetting {
        section: "Vhdl",
        key: "Compiling (compile at startup)",
        write_as: WriteAs::Flag,
    },
    WrittenSetting {
        section: "Vhdl",
        key: "Enable VHDL Mixed-mode",
        write_as: WriteAs::Flag,
    },
    WrittenSetting {
        section: "Vhdl",
        key: "Default model for VHDL macros",
        write_as: WriteAs::Number,
    },
    WrittenSetting {
        section: "Vhdl",
        key: "Display digital node states",
        write_as: WriteAs::Flag,
    },
    WrittenSetting {
        section: "Vhdl",
        key: "Use HEX file",
        write_as: WriteAs::Flag,
    },
    WrittenSetting {
        section: "Vhdl",
        key: "Use MPASM",
        write_as: WriteAs::Flag,
    },
    WrittenSetting {
        section: "Vhdl",
        key: "Enable UART Terminal",
        write_as: WriteAs::Flag,
    },
    WrittenSetting {
        section: "Vhdl",
        key: "MCUWndWidth",
        write_as: WriteAs::Number,
    },
    WrittenSetting {
        section: "Vhdl",
        key: "MCUWndHeight",
        write_as: WriteAs::Number,
    },
    WrittenSetting {
        section: "Vhdl",
        key: "HDLWndWidth",
        write_as: WriteAs::Number,
    },
    WrittenSetting {
        section: "Vhdl",
        key: "HDLWndHeight",
        write_as: WriteAs::Number,
    },
    WrittenSetting {
        section: "Vhdl",
        key: "HDLWndLeft",
        write_as: WriteAs::Number,
    },
    WrittenSetting {
        section: "Vhdl",
        key: "HDLWndTop",
        write_as: WriteAs::Number,
    },
    WrittenSetting {
        section: "Vhdl",
        key: "HDLWndAreaH",
        write_as: WriteAs::Number,
    },
    WrittenSetting {
        section: "Vhdl",
        key: "VAWndWH",
        write_as: WriteAs::Text,
    },
    WrittenSetting {
        section: "Vhdl",
        key: "SpiceTiming",
        write_as: WriteAs::Number,
    },
    WrittenSetting {
        section: "Vhdl",
        key: "SpiceInputLevel",
        write_as: WriteAs::Number,
    },
    WrittenSetting {
        section: "Vhdl",
        key: "SpiceOutputLevel",
        write_as: WriteAs::Number,
    },
    WrittenSetting {
        section: "Vhdl",
        key: "XMCMathCordicMode",
        write_as: WriteAs::Number,
    },
    WrittenSetting {
        section: "Vhdl",
        key: "EnableLogging",
        write_as: WriteAs::Number,
    },
    WrittenSetting {
        section: "Vhdl",
        key: "ShowCompileProgress",
        write_as: WriteAs::Number,
    },
    WrittenSetting {
        section: "Vhdl",
        key: "UseRollBack",
        write_as: WriteAs::Number,
    },
    WrittenSetting {
        section: "Vhdl",
        key: "RollBackDiv",
        write_as: WriteAs::Number,
    },
    WrittenSetting {
        section: "Vhdl",
        key: "FastMCU",
        write_as: WriteAs::Number,
    },
    WrittenSetting {
        section: "Vhdl",
        key: "ArduinoOpt",
        write_as: WriteAs::Flag,
    },
    WrittenSetting {
        section: "Vhdl",
        key: "ShowSimulationProgress",
        write_as: WriteAs::Flag,
    },
    WrittenSetting {
        section: "Vhdl",
        key: "VecToWires",
        write_as: WriteAs::Flag,
    },
    WrittenSetting {
        section: "Vhdl",
        key: "OldDigitalEngine",
        write_as: WriteAs::Flag,
    },
    WrittenSetting {
        section: "Vhdl",
        key: "ArduinoPath",
        write_as: WriteAs::Text,
    },
    WrittenSetting {
        section: "Vhdl",
        key: "AtmelStudioPath",
        write_as: WriteAs::Text,
    },
    WrittenSetting {
        section: "Vhdl",
        key: "EnableSystemC",
        write_as: WriteAs::Flag,
    },
    WrittenSetting {
        section: "Vhdl",
        key: "DisableSchedulerClock",
        write_as: WriteAs::Flag,
    },
    WrittenSetting {
        section: "DesignTool",
        key: "Keep cursor pos after run",
        write_as: WriteAs::Flag,
    },
];

/// Implements part of Ghidra function `FUN_01c85f70` at `0x01C85F70`.
///
/// Every section anything is written under.
#[must_use]
pub fn sections() -> Vec<&'static str> {
    let mut found: Vec<&'static str> = Vec::new();
    for setting in WRITTEN_SETTINGS {
        if !found.contains(&setting.section) {
            found.push(setting.section);
        }
    }
    found
}

/// Implements part of Ghidra function `FUN_01c85f70` at `0x01C85F70`.
///
/// Every setting written under one section.
#[must_use]
pub fn in_section(section: &str) -> Vec<&'static WrittenSetting> {
    WRITTEN_SETTINGS
        .iter()
        .filter(|setting| setting.section == section)
        .collect()
}

/// What writing the settings needs of the file.
///
/// Part of Ghidra function `FUN_01c85f70` at `0x01C85F70`.
pub trait SettingsWriterHost {
    /// The value of one setting, as the application currently holds it.
    fn value(&mut self, setting: &WrittenSetting) -> String;

    /// Writes one setting out, told how it is to go.
    fn write(&mut self, setting: &WrittenSetting, value: &str);
}

/// Implements Ghidra function `FUN_01c85f70` at `0x01C85F70`.
///
/// Writes every setting back out.
///
/// Guarded by the file existing at all: when there is none, nothing is written
/// and nothing is said. Otherwise every setting goes out, in order, whether or
/// not it differs from what is already there — nothing is compared, so a save
/// touches the whole file.
///
/// Returns how many settings were written.
pub fn write_settings<Host: SettingsWriterHost>(host: &mut Host, have_file: bool) -> usize {
    if !have_file {
        return 0;
    }
    for setting in &WRITTEN_SETTINGS {
        let value = host.value(setting);
        host.write(setting, &value);
    }
    WRITTEN_SETTINGS.len()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Default)]
    struct Settings {
        written: Vec<(&'static str, &'static str, WriteAs)>,
    }

    impl SettingsWriterHost for Settings {
        fn value(&mut self, setting: &WrittenSetting) -> String {
            setting.key.to_owned()
        }

        fn write(&mut self, setting: &WrittenSetting, _value: &str) {
            self.written
                .push((setting.section, setting.key, setting.write_as));
        }
    }

    #[test]
    fn every_setting_is_written_once_and_in_order() {
        let mut settings = Settings::default();
        let count = write_settings(&mut settings, true);

        assert_eq!(count, WRITTEN_SETTINGS.len());
        let expected: Vec<(&str, &str, WriteAs)> = WRITTEN_SETTINGS
            .iter()
            .map(|setting| (setting.section, setting.key, setting.write_as))
            .collect();
        assert_eq!(settings.written, expected);
    }

    #[test]
    fn nothing_is_written_without_a_file_and_nothing_is_said() {
        let mut settings = Settings::default();

        assert_eq!(write_settings(&mut settings, false), 0);
        assert!(settings.written.is_empty());
    }

    #[test]
    fn the_recovered_sections_are_the_three() {
        assert_eq!(sections(), ["Schematic Editor", "Vhdl", "DesignTool"]);
    }

    #[test]
    fn each_section_holds_the_settings_recovered_under_it() {
        let counted: usize = sections()
            .into_iter()
            .map(|section| in_section(section).len())
            .sum();

        assert_eq!(counted, WRITTEN_SETTINGS.len());
        assert!(in_section("No Such Section").is_empty());
    }

    #[test]
    fn flags_go_out_two_different_ways() {
        // Which is the reason a reader of these files cannot assume one
        // convention.
        let as_flag = WRITTEN_SETTINGS
            .iter()
            .filter(|setting| setting.write_as == WriteAs::Flag)
            .count();
        let as_text = WRITTEN_SETTINGS
            .iter()
            .filter(|setting| setting.write_as == WriteAs::FlagAsText)
            .count();

        assert!(as_flag > 0);
        assert!(as_text > 0);
    }

    #[test]
    fn the_two_conventions_are_used_within_one_section() {
        // So it is not a matter of one section being older than another.
        let editor = in_section("Schematic Editor");
        assert!(
            editor
                .iter()
                .any(|setting| setting.write_as == WriteAs::Flag)
        );
        assert!(
            editor
                .iter()
                .any(|setting| setting.write_as == WriteAs::FlagAsText)
        );
    }

    #[test]
    fn no_setting_is_written_twice_under_one_section() {
        for section in sections() {
            let mut keys: Vec<&str> = in_section(section)
                .into_iter()
                .map(|setting| setting.key)
                .collect();
            let before = keys.len();
            keys.sort_unstable();
            keys.dedup();

            assert_eq!(keys.len(), before, "{section}");
        }
    }

    #[test]
    fn the_two_toolchain_paths_go_out_as_themselves() {
        for key in ["ArduinoPath", "AtmelStudioPath"] {
            let setting = WRITTEN_SETTINGS
                .iter()
                .find(|setting| setting.key == key)
                .expect("the path is written");

            assert_eq!(setting.write_as, WriteAs::Text);
        }
    }
}
