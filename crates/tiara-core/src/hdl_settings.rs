//! Reading the hardware-description settings out of the settings file.
//!
//! One section of one file, read straight through into a run of separate
//! places — thirty-odd flags, numbers and paths, each with the value it falls
//! back to when the file does not say. Nothing here validates anything: a
//! setting is whatever the file said, or the fallback, and the first chance
//! anybody has to object is when something tries to use it.

/// The file the settings come from.
///
/// Part of Ghidra function `FUN_00e04f10` at `0x00E04F10`.
pub const SETTINGS_FILE: &str = "TINA.INI";

/// The section of it they come from.
///
/// Part of Ghidra function `FUN_00e04f10` at `0x00E04F10`.
///
/// One section for all of it, whether the setting is about a hardware
/// description, a microcontroller, a window's size or a toolchain's
/// whereabouts.
pub const SETTINGS_SECTION: &str = "Vhdl";

/// The code page the two toolchain paths are converted to.
///
/// Part of Ghidra function `FUN_00e04f10` at `0x00E04F10`.
///
/// 65001, which is UTF-8. Only those two settings are converted; every other
/// text is kept as the platform gave it. They are the two handed to another
/// program, which is the only reason a setting would need an encoding of its
/// own.
pub const UTF8_CODE_PAGE: u32 = 0xFDE9;

/// What kind of thing one setting is, and what it falls back to.
///
/// Part of Ghidra function `FUN_00e04f10` at `0x00E04F10`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SettingKind {
    /// Read as a flag, with the value it takes when the file is silent.
    Flag(bool),
    /// Read as a number, likewise.
    Number(i32),
    /// Read as text, falling back to nothing.
    Text,
    /// Read as text and then converted to UTF-8.
    Utf8Text,
}

/// One setting, as it is read.
///
/// Part of Ghidra function `FUN_00e04f10` at `0x00E04F10`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct HdlSetting {
    /// What it is called in the file.
    pub key: &'static str,
    /// How it is read.
    pub kind: SettingKind,
    /// Whether the value is read and then thrown away.
    ///
    /// One of them is. The read happens, so a file with the setting in it is
    /// touched exactly as a file without it, and then the value goes nowhere
    /// while a different place is set to nothing instead.
    pub discarded: bool,
}

/// Every setting read, in the order they are read.
///
/// Part of Ghidra function `FUN_00e04f10` at `0x00E04F10`.
pub const HDL_SETTINGS: [HdlSetting; 33] = [
    HdlSetting {
        key: "Enable MC Debug",
        kind: SettingKind::Flag(false),
        discarded: false,
    },
    HdlSetting {
        key: "Enable HDL Debug",
        kind: SettingKind::Flag(false),
        discarded: false,
    },
    HdlSetting {
        key: "Synth1 (generating a/m)",
        kind: SettingKind::Flag(false),
        discarded: false,
    },
    HdlSetting {
        key: "Synth2 (ports only a/m)",
        kind: SettingKind::Flag(false),
        discarded: true,
    },
    HdlSetting {
        key: "Enable VHDL Mixed-mode",
        kind: SettingKind::Flag(true),
        discarded: false,
    },
    HdlSetting {
        key: "Display digital node states",
        kind: SettingKind::Flag(true),
        discarded: false,
    },
    HdlSetting {
        key: "Use HEX file",
        kind: SettingKind::Flag(false),
        discarded: false,
    },
    HdlSetting {
        key: "Use MPASM",
        kind: SettingKind::Flag(false),
        discarded: false,
    },
    HdlSetting {
        key: "Enable UART Terminal",
        kind: SettingKind::Flag(false),
        discarded: false,
    },
    HdlSetting {
        key: "MCUWndWidth",
        kind: SettingKind::Number(0),
        discarded: false,
    },
    HdlSetting {
        key: "MCUWndHeight",
        kind: SettingKind::Number(0),
        discarded: false,
    },
    HdlSetting {
        key: "HDLWndWidth",
        kind: SettingKind::Number(0),
        discarded: false,
    },
    HdlSetting {
        key: "HDLWndHeight",
        kind: SettingKind::Number(0),
        discarded: false,
    },
    HdlSetting {
        key: "HDLWndLeft",
        kind: SettingKind::Number(0),
        discarded: false,
    },
    HdlSetting {
        key: "HDLWndTop",
        kind: SettingKind::Number(0),
        discarded: false,
    },
    HdlSetting {
        key: "HDLWndAreaH",
        kind: SettingKind::Number(0),
        discarded: false,
    },
    HdlSetting {
        key: "VAWndWH",
        kind: SettingKind::Text,
        discarded: false,
    },
    HdlSetting {
        key: "SpiceTiming",
        kind: SettingKind::Number(1),
        discarded: false,
    },
    HdlSetting {
        key: "SpiceInputLevel",
        kind: SettingKind::Number(0),
        discarded: false,
    },
    HdlSetting {
        key: "SpiceOutputLevel",
        kind: SettingKind::Number(0),
        discarded: false,
    },
    HdlSetting {
        key: "XMCMathCordicMode",
        kind: SettingKind::Number(0),
        discarded: false,
    },
    HdlSetting {
        key: "EnableLogging",
        kind: SettingKind::Number(0),
        discarded: false,
    },
    HdlSetting {
        key: "ShowCompileProgress",
        kind: SettingKind::Number(0),
        discarded: false,
    },
    HdlSetting {
        key: "UseRollBack",
        kind: SettingKind::Number(2),
        discarded: false,
    },
    HdlSetting {
        key: "RollBackDiv",
        kind: SettingKind::Number(1),
        discarded: false,
    },
    HdlSetting {
        key: "FastMCU",
        kind: SettingKind::Number(1),
        discarded: false,
    },
    HdlSetting {
        key: "ShowSimulationProgress",
        kind: SettingKind::Flag(false),
        discarded: false,
    },
    HdlSetting {
        key: "VecToWires",
        kind: SettingKind::Flag(false),
        discarded: false,
    },
    HdlSetting {
        key: "OldDigitalEngine",
        kind: SettingKind::Flag(false),
        discarded: false,
    },
    HdlSetting {
        key: "ArduinoPath",
        kind: SettingKind::Utf8Text,
        discarded: false,
    },
    HdlSetting {
        key: "AtmelStudioPath",
        kind: SettingKind::Utf8Text,
        discarded: false,
    },
    HdlSetting {
        key: "EnableSystemc",
        kind: SettingKind::Flag(false),
        discarded: false,
    },
    HdlSetting {
        key: "DisableSchedulerClock",
        kind: SettingKind::Flag(false),
        discarded: false,
    },
];

/// What one setting turned out to be.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum SettingValue {
    /// A flag.
    Flag(bool),
    /// A number.
    Number(i32),
    /// Text, as the platform gave it.
    Text(String),
    /// Text converted to UTF-8.
    Utf8Text(String),
}

/// What reading the settings needs of the file.
///
/// Part of Ghidra function `FUN_00e04f10` at `0x00E04F10`.
pub trait HdlSettingsHost {
    /// One flag, or the fallback.
    fn read_flag(&mut self, section: &str, key: &str, fallback: bool) -> bool;

    /// One number, or the fallback.
    fn read_number(&mut self, section: &str, key: &str, fallback: i32) -> i32;

    /// One text, or nothing.
    fn read_text(&mut self, section: &str, key: &str) -> String;

    /// Converts one text to a code page.
    fn to_code_page(&mut self, text: &str, code_page: u32) -> String;
}

/// Implements Ghidra function `FUN_00e04f10` at `0x00E04F10`.
///
/// Reads every hardware-description setting out of the file.
///
/// Every setting is read whatever the others said — there is no branching in
/// it at all — so the cost of reading them is fixed and a file missing half of
/// them is read exactly as fully as one with all of them.
///
/// Returns each setting paired with what it turned out to be, including the
/// one whose value the original throws away: it is read here too, because the
/// reading is what the file sees.
pub fn load_hdl_settings<Host: HdlSettingsHost>(
    host: &mut Host,
) -> Vec<(&'static str, SettingValue)> {
    let mut read = Vec::with_capacity(HDL_SETTINGS.len());
    for setting in HDL_SETTINGS {
        let value = match setting.kind {
            SettingKind::Flag(fallback) => {
                SettingValue::Flag(host.read_flag(SETTINGS_SECTION, setting.key, fallback))
            }
            SettingKind::Number(fallback) => {
                SettingValue::Number(host.read_number(SETTINGS_SECTION, setting.key, fallback))
            }
            SettingKind::Text => SettingValue::Text(host.read_text(SETTINGS_SECTION, setting.key)),
            SettingKind::Utf8Text => {
                let text = host.read_text(SETTINGS_SECTION, setting.key);
                SettingValue::Utf8Text(host.to_code_page(&text, UTF8_CODE_PAGE))
            }
        };
        read.push((setting.key, value));
    }
    read
}

/// Implements part of Ghidra function `FUN_00e04f10` at `0x00E04F10`.
///
/// The setting one name refers to.
#[must_use]
pub fn setting(key: &str) -> Option<&'static HdlSetting> {
    HDL_SETTINGS.iter().find(|setting| setting.key == key)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Default)]
    struct File {
        asked: Vec<String>,
        converted: Vec<(String, u32)>,
        flags: Vec<(&'static str, bool)>,
        numbers: Vec<(&'static str, i32)>,
        texts: Vec<(&'static str, &'static str)>,
    }

    impl HdlSettingsHost for File {
        fn read_flag(&mut self, section: &str, key: &str, fallback: bool) -> bool {
            assert_eq!(section, SETTINGS_SECTION);
            self.asked.push(key.to_owned());
            self.flags
                .iter()
                .find(|(held, _)| *held == key)
                .map_or(fallback, |(_, value)| *value)
        }

        fn read_number(&mut self, section: &str, key: &str, fallback: i32) -> i32 {
            assert_eq!(section, SETTINGS_SECTION);
            self.asked.push(key.to_owned());
            self.numbers
                .iter()
                .find(|(held, _)| *held == key)
                .map_or(fallback, |(_, value)| *value)
        }

        fn read_text(&mut self, section: &str, key: &str) -> String {
            assert_eq!(section, SETTINGS_SECTION);
            self.asked.push(key.to_owned());
            self.texts
                .iter()
                .find(|(held, _)| *held == key)
                .map_or_else(String::new, |(_, value)| (*value).to_owned())
        }

        fn to_code_page(&mut self, text: &str, code_page: u32) -> String {
            self.converted.push((text.to_owned(), code_page));
            format!("{text}!")
        }
    }

    fn value_of(read: &[(&str, SettingValue)], key: &str) -> SettingValue {
        read.iter()
            .find(|(held, _)| *held == key)
            .map(|(_, value)| value.clone())
            .expect("the setting is read")
    }

    #[test]
    fn every_recovered_setting_is_read_from_the_one_section() {
        let mut file = File::default();
        let read = load_hdl_settings(&mut file);

        assert_eq!(read.len(), HDL_SETTINGS.len());
        assert_eq!(file.asked.len(), HDL_SETTINGS.len());
    }

    #[test]
    fn the_settings_are_read_in_the_recovered_order() {
        let mut file = File::default();
        load_hdl_settings(&mut file);
        let expected: Vec<&str> = HDL_SETTINGS.iter().map(|setting| setting.key).collect();

        assert_eq!(file.asked, expected);
    }

    #[test]
    fn a_silent_file_gives_every_setting_its_fallback() {
        let mut file = File::default();
        let read = load_hdl_settings(&mut file);

        for setting in HDL_SETTINGS {
            let held = value_of(&read, setting.key);
            match setting.kind {
                SettingKind::Flag(fallback) => assert_eq!(held, SettingValue::Flag(fallback)),
                SettingKind::Number(fallback) => assert_eq!(held, SettingValue::Number(fallback)),
                SettingKind::Text => assert_eq!(held, SettingValue::Text(String::new())),
                SettingKind::Utf8Text => {
                    assert_eq!(held, SettingValue::Utf8Text("!".to_owned()));
                }
            }
        }
    }

    #[test]
    fn the_settings_that_are_on_by_default_are_the_recovered_ones() {
        let on: Vec<&str> = HDL_SETTINGS
            .iter()
            .filter(|setting| setting.kind == SettingKind::Flag(true))
            .map(|setting| setting.key)
            .collect();

        assert_eq!(
            on,
            ["Enable VHDL Mixed-mode", "Display digital node states"]
        );
    }

    #[test]
    fn the_numbers_that_fall_back_to_something_are_the_recovered_ones() {
        let nonzero: Vec<(&str, i32)> = HDL_SETTINGS
            .iter()
            .filter_map(|setting| match setting.kind {
                SettingKind::Number(fallback) if fallback != 0 => Some((setting.key, fallback)),
                _ => None,
            })
            .collect();

        assert_eq!(
            nonzero,
            [
                ("SpiceTiming", 1),
                ("UseRollBack", 2),
                ("RollBackDiv", 1),
                ("FastMCU", 1)
            ]
        );
    }

    #[test]
    fn only_the_two_toolchain_paths_are_converted() {
        let mut file = File::default();
        file.texts.push(("ArduinoPath", r"C:\arduino"));
        file.texts.push(("AtmelStudioPath", r"C:\atmel"));
        let read = load_hdl_settings(&mut file);

        assert_eq!(file.converted.len(), 2);
        for (_, code_page) in &file.converted {
            assert_eq!(*code_page, UTF8_CODE_PAGE);
        }
        assert_eq!(
            value_of(&read, "ArduinoPath"),
            SettingValue::Utf8Text(r"C:\arduino!".to_owned())
        );
    }

    #[test]
    fn the_other_text_settings_are_kept_as_the_platform_gave_them() {
        let converted: Vec<&str> = HDL_SETTINGS
            .iter()
            .filter(|setting| setting.kind == SettingKind::Utf8Text)
            .map(|setting| setting.key)
            .collect();

        assert_eq!(converted, ["ArduinoPath", "AtmelStudioPath"]);
    }

    #[test]
    fn exactly_one_setting_is_read_and_thrown_away() {
        let thrown: Vec<&str> = HDL_SETTINGS
            .iter()
            .filter(|setting| setting.discarded)
            .map(|setting| setting.key)
            .collect();

        assert_eq!(thrown, ["Synth2 (ports only a/m)"]);
    }

    #[test]
    fn the_thrown_away_setting_is_still_read_from_the_file() {
        // The reading is what the file sees, so it has to happen.
        let mut file = File::default();
        load_hdl_settings(&mut file);

        assert!(
            file.asked
                .iter()
                .any(|key| key == "Synth2 (ports only a/m)")
        );
    }

    #[test]
    fn a_setting_can_be_found_by_name_and_an_unknown_one_cannot() {
        assert_eq!(
            setting("FastMCU").map(|held| held.kind),
            Some(SettingKind::Number(1))
        );
        assert!(setting("NoSuchSetting").is_none());
    }

    #[test]
    fn what_the_file_says_wins_over_the_fallback() {
        let mut file = File::default();
        file.flags.push(("Enable VHDL Mixed-mode", false));
        file.numbers.push(("UseRollBack", 9));
        let read = load_hdl_settings(&mut file);

        assert_eq!(
            value_of(&read, "Enable VHDL Mixed-mode"),
            SettingValue::Flag(false)
        );
        assert_eq!(value_of(&read, "UseRollBack"), SettingValue::Number(9));
    }

    #[test]
    fn no_setting_is_named_twice() {
        let mut keys: Vec<&str> = HDL_SETTINGS.iter().map(|setting| setting.key).collect();
        let before = keys.len();
        keys.sort_unstable();
        keys.dedup();

        assert_eq!(keys.len(), before);
    }
}
