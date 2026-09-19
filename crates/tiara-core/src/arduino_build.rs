//! Working out how to build for one Arduino board.
//!
//! The board has already been chosen; this settles what the compiler, the
//! linker and the object copier are told, and which preprocessor defines the
//! sketch is built with. Four families are recognised and the fourth is
//! whatever is left — so a family the program does not know is built as a plain
//! AVR rather than refused.
//!
//! Two things in it are worth knowing before trusting a build. The defines that
//! describe the USB device are added for every board of one family and for
//! exactly two boards by name in another, so a board with a USB port that is not
//! one of those two is built without them. And the two name tests a few lines
//! apart do not match the same way: one is an exact comparison and the other is
//! a test for how the name begins.

/// Which family of board is being built for.
///
/// Implements Ghidra function `FUN_0105aba0` at `0x0105ABA0`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Family {
    /// A Cortex-M0+ part, with the pin layout of the smaller boards.
    Samd21,
    /// The newer AVR parts.
    MegaAvr,
    /// A Cortex-M0 part with a radio stack beneath it.
    Nrf51,
    /// The classic AVR parts, and anything the program does not recognise.
    ClassicAvr,
}

/// The number each family is chosen by.
///
/// Part of Ghidra function `FUN_0105aba0` at `0x0105ABA0`.
///
/// Only three are tested for. Everything else falls through to the classic
/// parts, so an unknown number does not fail — it builds something.
pub const FAMILY_CODES: [(i32, Family); 3] = [
    (1, Family::Samd21),
    (2, Family::MegaAvr),
    (3, Family::Nrf51),
];

/// Implements part of Ghidra function `FUN_0105aba0` at `0x0105ABA0`.
///
/// Which family a number chooses.
#[must_use]
pub fn family_for(code: i32) -> Family {
    FAMILY_CODES
        .iter()
        .find(|(held, _)| *held == code)
        .map_or(Family::ClassicAvr, |(_, family)| *family)
}

/// What one family is built with.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct Toolchain {
    /// Which family.
    pub family: Family,
    /// What the C++ compiler is told.
    pub cxx: &'static str,
    /// What the C compiler is told.
    pub c: &'static str,
    /// What the linker is told.
    pub link: &'static str,
    /// What the object copier is told to make a raw image.
    pub to_binary: &'static str,
    /// What it is told to make a hex image.
    pub to_hex: &'static str,
    /// Whether the compiler flags end with the part name rather than naming a
    /// processor outright.
    pub names_the_part: bool,
}

/// What each family is built with.
///
/// Implements Ghidra function `FUN_0105aba0` at `0x0105ABA0`.
///
/// The two Cortex families name their processor in the flags. The two AVR
/// families end their flags with `mmcu=` and have the part appended, so their
/// flags are not complete until the board is known.
pub const TOOLCHAINS: [Toolchain; 4] = [
    Toolchain {
        family: Family::Samd21,
        cxx: "mcpu=cortex-m0plus,mthumb,c,g,Os,w,std=gnu++11,ffunction-sections,fdata-sections,fno-threadsafe-statics,nostdlib,-param max-inline-insns-single=500,fno-rtti,fno-exceptions,MMD",
        c: "mcpu=cortex-m0plus,mthumb,c,g,Os,w,std=gnu11,ffunction-sections,fdata-sections,nostdlib,-param max-inline-insns-single=500,MMD",
        link: "-w;-Os;-Wl,--gc-sections;--specs=nano.specs;--specs=nosys.specs;-mcpu=cortex-m0plus;-mthumb;-lm;-larm_cortexM0l_math",
        to_binary: "-O;binary",
        to_hex: "-O;ihex;-R;.eeprom",
        names_the_part: false,
    },
    Toolchain {
        family: Family::MegaAvr,
        cxx: "c,g,Os,w,std=gnu++11,fno-exceptions,ffunction-sections,fdata-sections,fno-threadsafe-statics,MMD,mmcu=",
        c: "c,g,Os,w,std=gnu11,ffunction-sections,fdata-sections,MMD,mmcu=",
        link: "-w;-Os;-Wl,--section-start=.text=0x0,--gc-sections;-mmcu=",
        to_binary: "-O;ihex;-j;.eeprom;--set-section-flags=.eeprom=alloc,load;--no-change-warnings;--change-section-lma;.eeprom=0",
        to_hex: "-O;ihex;-R;.eeprom",
        names_the_part: true,
    },
    Toolchain {
        family: Family::Nrf51,
        cxx: "mcpu=cortex-m0,mthumb,c,g,Os,w,std=gnu++11,ffunction-sections,fdata-sections,fno-threadsafe-statics,nostdlib,-param max-inline-insns-single=500,fno-rtti,fno-exceptions,MMD",
        c: "mcpu=cortex-m0,mthumb,c,g,Os,w,std=gnu11,ffunction-sections,fdata-sections,nostdlib,-param max-inline-insns-single=500,MMD",
        link: "-w;-Os;-Wl,--gc-sections;--specs=nano.specs;--specs=nosys.specs;-mcpu=cortex-m0;-mthumb;-lm",
        to_binary: "-O;binary",
        to_hex: "-O;ihex;-R;.eeprom",
        names_the_part: false,
    },
    Toolchain {
        family: Family::ClassicAvr,
        cxx: "c,g,Os,w,std=gnu++11,fno-exceptions,ffunction-sections,fdata-sections,fno-threadsafe-statics,MMD,mmcu=",
        c: "c,g,Os,w,std=gnu11,ffunction-sections,fdata-sections,MMD,mmcu=",
        link: "-w;-Os;-Wl,--gc-sections;-mmcu=",
        to_binary: "-O;ihex;-j;.eeprom;--set-section-flags=.eeprom=alloc,load;--no-change-warnings;--change-section-lma;.eeprom=0",
        to_hex: "-O;ihex;-R;.eeprom",
        names_the_part: true,
    },
];

/// Implements part of Ghidra function `FUN_0105aba0` at `0x0105ABA0`.
///
/// What one family is built with.
#[must_use]
pub fn toolchain_for(family: Family) -> &'static Toolchain {
    TOOLCHAINS
        .iter()
        .find(|held| held.family == family)
        .unwrap_or(&TOOLCHAINS[3])
}

/// The part that is linked differently from every other.
///
/// Part of Ghidra function `FUN_0105aba0` at `0x0105ABA0`.
pub const RELAXED_PART: &str = "atmega2560";

/// What is added to the linker flags for it.
///
/// Part of Ghidra function `FUN_0105aba0` at `0x0105ABA0`.
///
/// It lets the linker rewrite long jumps as short ones, which the largest of
/// the classic parts needs because its program memory does not fit in the
/// shorter form. The test is on the part name, not on the family, so it is a
/// list of one.
pub const RELAXED_LINK: &str = "-w;-Os;-Wl,--gc-sections,--relax;-mmcu=";

/// Implements part of Ghidra function `FUN_0105aba0` at `0x0105ABA0`.
///
/// What the linker is told for one classic part.
#[must_use]
pub fn classic_link_for(part: &str) -> &'static str {
    if part == RELAXED_PART {
        RELAXED_LINK
    } else {
        toolchain_for(Family::ClassicAvr).link
    }
}

/// What is always appended to the classic linker flags.
///
/// Part of Ghidra function `FUN_0105aba0` at `0x0105ABA0`.
///
/// A map file, into a folder named outright with a backslash — so the place it
/// is written is fixed, is named in the way one platform writes paths, and is
/// asked for whether or not anyone wants it.
pub const ALWAYS_A_MAP_FILE: &str = ";-Wl,-Map=Debug\\output.map";

/// The boards whose USB device is described in the defines.
///
/// Part of Ghidra function `FUN_0105aba0` at `0x0105ABA0`.
///
/// Two, matched by name exactly. A classic board with a USB port that is not
/// one of these two is built without the defines that describe it.
pub const USB_BOARDS: [&str; 2] = ["Arduino Micro", "Arduino Leonardo"];

/// The board that gets the defines for a radio shield.
///
/// Part of Ghidra function `FUN_0105aba0` at `0x0105ABA0`.
pub const RADIO_SHIELD_BOARD: &str = "Arduino Mega";

/// What that board is given.
///
/// Part of Ghidra function `FUN_0105aba0` at `0x0105ABA0`.
pub const RADIO_SHIELD_DEFINES: &str = ",WINC1501_SPI_CS_PIN=53,WINC1501_INTN_PIN=3";

/// Implements part of Ghidra function `FUN_0105aba0` at `0x0105ABA0`.
///
/// Whether a classic board is given the defines describing its USB device.
///
/// Matched by an exact comparison, so a longer name holding one of the two does
/// not count.
#[must_use]
pub fn describes_its_usb(board: &str) -> bool {
    USB_BOARDS.contains(&board)
}

/// Implements part of Ghidra function `FUN_0105aba0` at `0x0105ABA0`.
///
/// Whether a board is given the radio-shield defines.
///
/// Matched by how the name **begins**, not by what it is — so every board whose
/// name starts with it counts, however it goes on. The two tests sit a few lines
/// apart and do not agree about what matching a board name means.
#[must_use]
pub fn takes_the_radio_shield(board: &str) -> bool {
    board.starts_with(RADIO_SHIELD_BOARD)
}

/// What stands in for the maker of the USB device.
///
/// Part of Ghidra function `FUN_0105aba0` at `0x0105ABA0`.
///
/// Written outright rather than taken from anywhere, so every board built this
/// way reports the same maker.
pub const USB_MAKER: &str = "Unknown";

/// The defines every family builds up, in the order they are put together.
///
/// Part of Ghidra function `FUN_0105aba0` at `0x0105ABA0`.
pub const COMMON_DEFINES: [&str; 4] = ["F_CPU=", ",ARDUINO=", ",ARDUINO_", ",ARDUINO_ARCH_"];

/// What each family adds after those.
///
/// Part of Ghidra function `FUN_0105aba0` at `0x0105ABA0`.
///
/// The four split the same way they split over the processor: the two Cortex
/// families leave the architecture open and have it filled in from a field,
/// while the two AVR families name it outright in the same string as everything
/// else they add. So an AVR architecture cannot be varied the way a Cortex one
/// can, and the split is the same one that decides whether the compiler flags
/// are complete without the board.
pub const FAMILY_DEFINES: [(Family, &str); 4] = [
    (Family::Samd21, ",USE_ARDUINO_MKR_PIN_LAYOUT,__SAMD21G18A__"),
    (
        Family::MegaAvr,
        ",ARDUINO_ARCH_MEGAAVR,MILLIS_USE_TIMERB3,NO_EXTERNAL_I2C_PULLUP",
    ),
    (Family::Nrf51, ",NRF51,S110,NRF51_S110,USE_LFRC,NRF5"),
    (Family::ClassicAvr, ",ARDUINO_ARCH_AVR"),
];

/// Implements part of Ghidra function `FUN_0105aba0` at `0x0105ABA0`.
///
/// Whether a family describes its USB device for every board of the family.
///
/// One does. The classic family does it for two boards by name, and the other
/// two not at all.
#[must_use]
pub const fn always_describes_usb(family: Family) -> bool {
    matches!(family, Family::Samd21)
}

#[cfg(test)]
mod tests {
    use super::*;

    const EVERY_FAMILY: [Family; 4] = [
        Family::Samd21,
        Family::MegaAvr,
        Family::Nrf51,
        Family::ClassicAvr,
    ];

    #[test]
    fn three_families_are_tested_for_and_the_fourth_is_what_is_left() {
        assert_eq!(FAMILY_CODES.len(), 3);
        assert!(!FAMILY_CODES.iter().any(|(_, f)| *f == Family::ClassicAvr));
    }

    #[test]
    fn a_number_the_program_does_not_know_builds_something_rather_than_failing() {
        for code in [0, 4, -1, 99] {
            assert_eq!(family_for(code), Family::ClassicAvr, "{code}");
        }
    }

    #[test]
    fn each_of_the_three_numbers_chooses_its_own_family() {
        assert_eq!(family_for(1), Family::Samd21);
        assert_eq!(family_for(2), Family::MegaAvr);
        assert_eq!(family_for(3), Family::Nrf51);
    }

    #[test]
    fn every_family_has_a_toolchain_and_no_two_share_one() {
        for family in EVERY_FAMILY {
            assert_eq!(toolchain_for(family).family, family);
        }
        assert_eq!(TOOLCHAINS.len(), EVERY_FAMILY.len());
    }

    #[test]
    fn the_two_processor_families_name_their_processor_in_the_flags() {
        for family in [Family::Samd21, Family::Nrf51] {
            let held = toolchain_for(family);
            assert!(!held.names_the_part, "{family:?}");
            assert!(held.cxx.contains("mcpu=cortex-m0"), "{family:?}");
        }
    }

    #[test]
    fn the_two_avr_families_leave_the_part_to_be_appended() {
        for family in [Family::MegaAvr, Family::ClassicAvr] {
            let held = toolchain_for(family);
            assert!(held.names_the_part, "{family:?}");
            assert!(held.cxx.ends_with("mmcu="), "{family:?}");
            assert!(held.c.ends_with("mmcu="), "{family:?}");
        }
    }

    #[test]
    fn so_their_flags_are_not_complete_until_the_board_is_known() {
        let held = toolchain_for(Family::ClassicAvr);

        assert!(held.link.ends_with("mmcu="));
    }

    #[test]
    fn the_two_avr_families_share_their_compiler_flags_but_not_their_linking() {
        let newer = toolchain_for(Family::MegaAvr);
        let classic = toolchain_for(Family::ClassicAvr);

        assert_eq!(newer.cxx, classic.cxx);
        assert_eq!(newer.c, classic.c);
        assert_ne!(newer.link, classic.link);
    }

    #[test]
    fn the_processor_families_make_a_raw_image_and_the_avr_ones_do_not() {
        assert_eq!(toolchain_for(Family::Samd21).to_binary, "-O;binary");
        assert_eq!(toolchain_for(Family::Nrf51).to_binary, "-O;binary");
        assert!(
            toolchain_for(Family::ClassicAvr)
                .to_binary
                .contains(".eeprom")
        );
    }

    #[test]
    fn every_family_makes_a_hex_image_the_same_way() {
        for family in EVERY_FAMILY {
            assert_eq!(toolchain_for(family).to_hex, "-O;ihex;-R;.eeprom");
        }
    }

    #[test]
    fn one_part_is_linked_differently_from_every_other() {
        // It lets the linker shorten long jumps, which the largest classic part
        // needs because its program memory does not fit the short form.
        assert_eq!(classic_link_for(RELAXED_PART), RELAXED_LINK);
        assert!(RELAXED_LINK.contains("--relax"));
    }

    #[test]
    fn and_every_other_part_is_linked_the_ordinary_way() {
        for part in ["atmega328p", "atmega32u4", "atmega1280", ""] {
            assert_eq!(
                classic_link_for(part),
                toolchain_for(Family::ClassicAvr).link,
                "{part}"
            );
        }
    }

    #[test]
    fn the_test_is_on_the_part_and_not_on_the_family_so_it_is_a_list_of_one() {
        assert_ne!(
            classic_link_for(RELAXED_PART),
            classic_link_for("atmega2561")
        );
    }

    #[test]
    fn a_map_file_is_asked_for_whether_or_not_anyone_wants_it() {
        assert!(ALWAYS_A_MAP_FILE.contains("-Map="));
    }

    #[test]
    fn and_it_goes_to_a_place_named_outright_in_one_platform_s_way() {
        assert!(ALWAYS_A_MAP_FILE.contains("Debug"));
        assert!(ALWAYS_A_MAP_FILE.contains('\\'));
        assert!(!ALWAYS_A_MAP_FILE.contains('/'));
    }

    #[test]
    fn exactly_two_classic_boards_describe_their_usb_device() {
        assert!(describes_its_usb("Arduino Micro"));
        assert!(describes_its_usb("Arduino Leonardo"));
        assert!(!describes_its_usb("Arduino Uno"));
    }

    #[test]
    fn and_the_match_is_exact_so_a_longer_name_does_not_count() {
        assert!(!describes_its_usb("Arduino Micro Pro"));
        assert!(!describes_its_usb("My Arduino Micro"));
    }

    #[test]
    fn but_the_radio_shield_is_matched_by_how_the_name_begins() {
        // The two tests sit a few lines apart and do not agree about what
        // matching a board name means.
        assert!(takes_the_radio_shield("Arduino Mega"));
        assert!(takes_the_radio_shield("Arduino Mega 2560"));
        assert!(!takes_the_radio_shield("The Arduino Mega"));
    }

    #[test]
    fn so_one_test_would_accept_what_the_other_refuses() {
        let name = "Arduino Mega 2560";

        assert!(takes_the_radio_shield(name));
        assert!(!describes_its_usb("Arduino Micro Pro"));
    }

    #[test]
    fn one_family_describes_its_usb_for_every_board_of_the_family() {
        assert!(always_describes_usb(Family::Samd21));
        for family in [Family::MegaAvr, Family::Nrf51, Family::ClassicAvr] {
            assert!(!always_describes_usb(family), "{family:?}");
        }
    }

    #[test]
    fn the_maker_of_the_usb_device_is_the_same_whatever_the_board() {
        assert_eq!(USB_MAKER, "Unknown");
    }

    #[test]
    fn every_family_builds_the_same_four_defines_before_its_own() {
        assert_eq!(COMMON_DEFINES[0], "F_CPU=");
        for family in EVERY_FAMILY {
            assert!(
                FAMILY_DEFINES.iter().any(|(held, _)| *held == family),
                "{family:?}"
            );
        }
    }

    #[test]
    fn the_two_avr_families_name_their_architecture_outright() {
        // So an AVR architecture cannot be varied the way a Cortex one can.
        for family in [Family::MegaAvr, Family::ClassicAvr] {
            let (_, defines) = FAMILY_DEFINES
                .iter()
                .find(|(held, _)| *held == family)
                .expect("listed");

            assert!(defines.contains("ARDUINO_ARCH_"), "{family:?}");
        }
    }

    #[test]
    fn and_the_two_cortex_families_leave_it_to_be_filled_in() {
        for family in [Family::Samd21, Family::Nrf51] {
            let (_, defines) = FAMILY_DEFINES
                .iter()
                .find(|(held, _)| *held == family)
                .expect("listed");

            assert!(!defines.contains("ARDUINO_ARCH_"), "{family:?}");
        }
    }

    #[test]
    fn which_is_the_same_split_that_decides_whether_the_flags_need_the_board() {
        for family in EVERY_FAMILY {
            let (_, defines) = FAMILY_DEFINES
                .iter()
                .find(|(held, _)| *held == family)
                .expect("listed");

            assert_eq!(
                defines.contains("ARDUINO_ARCH_"),
                toolchain_for(family).names_the_part,
                "{family:?}"
            );
        }
    }

    #[test]
    fn no_two_families_add_the_same_defines() {
        let mut added: Vec<&str> = FAMILY_DEFINES.iter().map(|(_, held)| *held).collect();
        let before = added.len();
        added.sort_unstable();
        added.dedup();

        assert_eq!(added.len(), before);
    }
}
