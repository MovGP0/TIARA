//! Reading the settings back in.
//!
//! The counterpart of writing them, and not quite its mirror. Two things make
//! it not: the reader knows four settings the writer never writes, and one of
//! those it writes itself while it is reading — so loading the settings
//! changes the file.

/// How one setting is read.
///
/// Part of Ghidra function `FUN_01c849f0` at `0x01C849F0`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ReadAs {
    /// Read as text.
    Text,
    /// Read as a number, with the value it falls back to where one is given.
    Number,
    /// Read as a flag, likewise.
    Flag,
    /// Not read at all: written, in the middle of reading.
    ///
    /// The one setting the reader puts back. Reading the settings therefore
    /// leaves the file different from how it was found, which is why nothing
    /// else writes this one.
    WrittenBack,
}

/// One setting, as it is read.
///
/// Part of Ghidra function `FUN_01c849f0` at `0x01C849F0`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ReadSetting {
    /// The section it comes from.
    pub section: &'static str,
    /// What it is called.
    pub key: &'static str,
    /// How it is read.
    pub read_as: ReadAs,
    /// The value it falls back to, where the call gives one.
    pub fallback: Option<i32>,
}

/// Every setting read, in the order they are read.
///
/// Part of Ghidra function `FUN_01c849f0` at `0x01C849F0`.
pub const READ_SETTINGS: [ReadSetting; 31] = [
    ReadSetting {
        section: "Schematic Editor",
        key: "AutoRepeat",
        read_as: ReadAs::Text,
        fallback: None,
    },
    ReadSetting {
        section: "Schematic Editor",
        key: "AutoReWire",
        read_as: ReadAs::Text,
        fallback: None,
    },
    ReadSetting {
        section: "Schematic Editor",
        key: "AppendValueToLabel",
        read_as: ReadAs::Text,
        fallback: None,
    },
    ReadSetting {
        section: "Schematic Editor",
        key: "AppendUnitToLabel",
        read_as: ReadAs::Text,
        fallback: None,
    },
    ReadSetting {
        section: "Schematic Editor",
        key: "AppendToleranceToLabel",
        read_as: ReadAs::Text,
        fallback: None,
    },
    ReadSetting {
        section: "Schematic Editor",
        key: "ShowPCBPinNumbers",
        read_as: ReadAs::Text,
        fallback: None,
    },
    ReadSetting {
        section: "Schematic Editor",
        key: "AutoSaveInterval",
        read_as: ReadAs::Number,
        fallback: None,
    },
    ReadSetting {
        section: "Schematic Editor",
        key: "AutoSaveHistoryDepth",
        read_as: ReadAs::Number,
        fallback: None,
    },
    ReadSetting {
        section: "Schematic Editor",
        key: "StartAsNew",
        read_as: ReadAs::Flag,
        fallback: Some(1),
    },
    ReadSetting {
        section: "Schematic Editor",
        key: "RenumberOnPaste",
        read_as: ReadAs::Text,
        fallback: None,
    },
    ReadSetting {
        section: "Schematic Editor",
        key: "SaveReferenceOnly",
        read_as: ReadAs::Text,
        fallback: None,
    },
    ReadSetting {
        section: "Schematic Editor",
        key: "ShowLabels",
        read_as: ReadAs::Text,
        fallback: None,
    },
    ReadSetting {
        section: "Schematic Editor",
        key: "ShowGraphNumbers",
        read_as: ReadAs::Text,
        fallback: None,
    },
    ReadSetting {
        section: "Schematic Editor",
        key: "Enable3DShapes",
        read_as: ReadAs::Flag,
        fallback: Some(0),
    },
    ReadSetting {
        section: "Schematic Editor",
        key: "WireWidth",
        read_as: ReadAs::Flag,
        fallback: Some(0),
    },
    ReadSetting {
        section: "Schematic Editor",
        key: "Param1",
        read_as: ReadAs::Text,
        fallback: None,
    },
    ReadSetting {
        section: "Schematic Editor",
        key: "Param2",
        read_as: ReadAs::Text,
        fallback: None,
    },
    ReadSetting {
        section: "Schematic Editor",
        key: "Param3",
        read_as: ReadAs::Text,
        fallback: None,
    },
    ReadSetting {
        section: "Schematic Editor",
        key: "Param4",
        read_as: ReadAs::Text,
        fallback: None,
    },
    ReadSetting {
        section: "Schematic Editor",
        key: "ColorScheme",
        read_as: ReadAs::Text,
        fallback: None,
    },
    ReadSetting {
        section: "Schematic Editor",
        key: "InitDir",
        read_as: ReadAs::Text,
        fallback: None,
    },
    ReadSetting {
        section: "Schematic Editor",
        key: "DockNetlist",
        read_as: ReadAs::Text,
        fallback: None,
    },
    ReadSetting {
        section: "Schematic Editor",
        key: "Default Precision",
        read_as: ReadAs::Number,
        fallback: None,
    },
    ReadSetting {
        section: "Schematic Editor",
        key: "LanguageCode",
        read_as: ReadAs::Text,
        fallback: None,
    },
    ReadSetting {
        section: "Schematic Editor",
        key: "MouseWheelZooming",
        read_as: ReadAs::Flag,
        fallback: Some(0),
    },
    ReadSetting {
        section: "Schematic Editor",
        key: "CompressedTSCFormat",
        read_as: ReadAs::Flag,
        fallback: Some(1),
    },
    ReadSetting {
        section: "Schematic Editor",
        key: "SavePictureAsGIF",
        read_as: ReadAs::Flag,
        fallback: Some(0),
    },
    ReadSetting {
        section: "Schematic Editor",
        key: "LastUpdated",
        read_as: ReadAs::Number,
        fallback: Some(0),
    },
    ReadSetting {
        section: "Schematic Editor",
        key: "LastUpdated",
        read_as: ReadAs::WrittenBack,
        fallback: None,
    },
    ReadSetting {
        section: "Schematic Editor",
        key: "PCBRootDir",
        read_as: ReadAs::Text,
        fallback: None,
    },
    ReadSetting {
        section: "EvalOptions",
        key: "EvalOKLimit",
        read_as: ReadAs::Text,
        fallback: None,
    },
];

/// Implements part of Ghidra function `FUN_01c849f0` at `0x01C849F0`.
///
/// The settings this reader knows that the writer never writes.
///
/// Four of them, and they have to come from somewhere: something else writes
/// them, or an installer does, or a person does. The one that would otherwise
/// look like a fifth is accounted for — the reader puts that one back itself,
/// which is presumably why the writer leaves it alone.
#[must_use]
pub fn read_but_never_written() -> Vec<&'static str> {
    let put_back: Vec<&'static str> = READ_SETTINGS
        .iter()
        .filter(|setting| setting.read_as == ReadAs::WrittenBack)
        .map(|setting| setting.key)
        .collect();
    let mut orphans: Vec<&'static str> = READ_SETTINGS
        .iter()
        .filter(|setting| !put_back.contains(&setting.key))
        .filter(|setting| {
            !crate::settings_writer::WRITTEN_SETTINGS
                .iter()
                .any(|written| written.key == setting.key)
        })
        .map(|setting| setting.key)
        .collect();
    orphans.sort_unstable();
    orphans.dedup();
    orphans
}

/// What reading the settings needs of the file.
///
/// Part of Ghidra function `FUN_01c849f0` at `0x01C849F0`.
pub trait SettingsReaderHost {
    /// One setting, as the file has it.
    fn read(&mut self, setting: &ReadSetting) -> String;

    /// Puts one setting back, in the middle of reading.
    fn write_back(&mut self, setting: &ReadSetting, value: &str);
}

/// Implements Ghidra function `FUN_01c849f0` at `0x01C849F0`.
///
/// Reads every setting back in, and writes one of them out again.
///
/// Every setting is read whatever the others said, in the order recovered. The
/// one that is written back is written where it sits in that order, not at the
/// end — so a reader interrupted half way through has already changed the
/// file.
///
/// Returns how many settings were read, not counting the one put back.
pub fn read_settings<Host: SettingsReaderHost>(host: &mut Host, have_file: bool) -> usize {
    if !have_file {
        return 0;
    }
    let mut count = 0;
    for setting in &READ_SETTINGS {
        if setting.read_as == ReadAs::WrittenBack {
            let value = host.read(setting);
            host.write_back(setting, &value);
            continue;
        }
        host.read(setting);
        count += 1;
    }
    count
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Default)]
    struct Settings {
        read: Vec<&'static str>,
        put_back: Vec<&'static str>,
    }

    impl SettingsReaderHost for Settings {
        fn read(&mut self, setting: &ReadSetting) -> String {
            self.read.push(setting.key);
            setting.key.to_owned()
        }

        fn write_back(&mut self, setting: &ReadSetting, _value: &str) {
            self.put_back.push(setting.key);
        }
    }

    #[test]
    fn every_setting_is_read_in_the_recovered_order() {
        let mut settings = Settings::default();
        read_settings(&mut settings, true);
        let expected: Vec<&str> = READ_SETTINGS.iter().map(|setting| setting.key).collect();

        assert_eq!(settings.read, expected);
    }

    #[test]
    fn nothing_is_read_without_a_file() {
        let mut settings = Settings::default();

        assert_eq!(read_settings(&mut settings, false), 0);
        assert!(settings.read.is_empty());
        assert!(settings.put_back.is_empty());
    }

    #[test]
    fn reading_the_settings_changes_the_file() {
        let mut settings = Settings::default();
        read_settings(&mut settings, true);

        assert_eq!(settings.put_back, ["LastUpdated"]);
    }

    #[test]
    fn the_one_put_back_is_written_where_it_sits_rather_than_at_the_end() {
        let at = READ_SETTINGS
            .iter()
            .position(|setting| setting.read_as == ReadAs::WrittenBack)
            .expect("one is put back");

        assert!(at < READ_SETTINGS.len() - 1);
    }

    #[test]
    fn the_count_leaves_out_the_one_that_is_only_put_back() {
        let mut settings = Settings::default();
        let count = read_settings(&mut settings, true);

        assert_eq!(count, READ_SETTINGS.len() - 1);
    }

    #[test]
    fn four_settings_are_read_that_the_writer_never_writes() {
        assert_eq!(
            read_but_never_written(),
            ["ColorScheme", "Enable3DShapes", "EvalOKLimit", "PCBRootDir"]
        );
    }

    #[test]
    fn the_one_the_reader_puts_back_is_not_counted_among_them() {
        // It is written, just not by the writer.
        assert!(!read_but_never_written().contains(&"LastUpdated"));
        assert!(
            READ_SETTINGS
                .iter()
                .any(|setting| setting.read_as == ReadAs::WrittenBack
                    && setting.key == "LastUpdated")
        );
    }

    #[test]
    fn everything_the_writer_writes_for_the_editor_is_read_back() {
        let unread: Vec<&str> = crate::settings_writer::in_section("Schematic Editor")
            .into_iter()
            .filter(|written| {
                !READ_SETTINGS
                    .iter()
                    .any(|setting| setting.key == written.key)
            })
            .map(|written| written.key)
            .collect();

        assert!(unread.is_empty(), "{unread:?}");
    }

    #[test]
    fn the_reader_covers_the_editor_and_one_setting_of_another_section() {
        let mut sections: Vec<&str> = READ_SETTINGS
            .iter()
            .map(|setting| setting.section)
            .collect();
        sections.sort_unstable();
        sections.dedup();

        assert_eq!(sections, ["EvalOptions", "Schematic Editor"]);
    }

    #[test]
    fn the_hardware_description_settings_are_read_by_the_other_reader() {
        // Nothing here touches the Vhdl section, which the writer writes
        // thirty-six of.
        assert!(
            !READ_SETTINGS
                .iter()
                .any(|setting| setting.section == "Vhdl")
        );
        assert!(!crate::settings_writer::in_section("Vhdl").is_empty());
    }
}
