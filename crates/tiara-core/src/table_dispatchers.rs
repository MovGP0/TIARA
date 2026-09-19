//! Routines whose whole body is one call through a method table.
//!
//! 530 of them, standing in front of 57 different slots. Each takes what it was
//! given, reads the table of the object it was handed, and calls whatever is in
//! one fixed slot of it. Nothing else happens.
//!
//! What they are for is turning a slot number into an address. A caller that
//! knows a routine by name and not by position needs something it can be linked
//! against, and this is it — so every one of these is evidence that some slot of
//! some class is reached by name from outside the class.
//!
//! The slots they reach are not spread evenly. The first two account for most of
//! them, which is what a hierarchy whose common operations sit at the front of
//! the table produces, and the far ones are reached only a handful of times
//! each.

// The addresses are written without separators so the port-mapping importer can
// match them against the recovered functions.
#![allow(clippy::unreadable_literal)]

/// One slot, and every routine that calls through it.
#[derive(Debug, Clone, Copy)]
pub struct Slot {
    /// How far into the table the slot sits.
    ///
    /// Negative where the slot is in front of the table, which is where the
    /// standard operations every class has are kept.
    pub at: i32,
    /// The routines that call through it and do nothing else.
    pub members: &'static [u32],
}

/// Every one-call-through-a-table routine, grouped by the slot it reaches.
pub static SLOTS: [Slot; 57] = [
    Slot {
        at: 0,
        members: &[
            0x004DCE70, 0x004DE4B0, 0x004DF7A0, 0x004E0B70, 0x004E1FC0, 0x004E3670, 0x004E3B80,
            0x004E4150, 0x004E55B0, 0x004E6E80, 0x004E8570, 0x004EA000, 0x004EB360, 0x004EC7C0,
            0x004EE4C0, 0x004EFBF0, 0x004F1600, 0x004F2E00, 0x004F4160, 0x004F5960, 0x0055CC10,
            0x0055E140, 0x0055F600, 0x0055FAD0, 0x00560B80, 0x005622B0, 0x00562C40, 0x00564A40,
            0x005661E0, 0x00567550, 0x005689A0, 0x00569D10, 0x005A1E70, 0x005A3680, 0x005A4B40,
            0x005A5010, 0x005B4E90, 0x005C1F40, 0x005C3960, 0x005C3EC0, 0x005DB510, 0x005DB530,
            0x005DE9C0, 0x005E0200, 0x005E1860, 0x00614B10, 0x00716DA0, 0x00778BD0, 0x0078A390,
            0x0078BA80, 0x0078BFF0, 0x0078D400, 0x0078EB30, 0x0078F220, 0x00790AF0, 0x007914C0,
            0x00792980, 0x00792E50, 0x00793830, 0x007950C0, 0x00795B00, 0x00797510, 0x00797AC0,
            0x007991B0, 0x0079A4A0, 0x0079B790, 0x00852DF0, 0x008B92D0, 0x008BA5C0, 0x0099CD30,
            0x0099E020, 0x0099F430, 0x009A0720, 0x009A1A10, 0x009A2D00, 0x009A40D0, 0x009A48D0,
            0x009A50D0, 0x009A57F0, 0x009A6AE0, 0x009A7F70, 0x009A9A30, 0x009AA020, 0x009AB3F0,
            0x009DD8C0, 0x009E2E50, 0x00A47650, 0x00B19560, 0x00BAD690, 0x00BB4C60, 0x00BE2110,
            0x00BE3530, 0x00C4E4F0, 0x00CBE5D0, 0x00D9FB40, 0x00DA1270, 0x00DE7240, 0x00EAEF10,
            0x00EB07E0, 0x00F34D30, 0x00F363E0, 0x00F36BF0, 0x00F37EE0, 0x01486540, 0x01487E10,
            0x01583350, 0x01584B70, 0x015850A0, 0x015856A0, 0x0167DBA0, 0x0167EFD0, 0x01680630,
            0x01681920, 0x016D0250, 0x0171BB90, 0x0171D040, 0x0171D510, 0x01779590, 0x0177AC50,
            0x017892D0, 0x019B0140, 0x019B1830, 0x019B2C10, 0x01A91160, 0x01B111F0, 0x01B12770,
            0x01B13A60, 0x01B14EC0, 0x01B168D0, 0x01B16E80, 0x01B25F30, 0x01B27C70, 0x01B8CCA0,
            0x01BE0A10, 0x01CA5580, 0x01CA6D00, 0x01D326B0, 0x01D69250,
        ],
    },
    Slot {
        at: 8,
        members: &[
            0x004DCFC0, 0x004DE5D0, 0x004DF8C0, 0x004E0C90, 0x004E2120, 0x004E3790, 0x004E3CD0,
            0x004E4270, 0x004E5710, 0x004E6FA0, 0x004E8690, 0x004EA120, 0x004EB480, 0x004EC920,
            0x004EE5E0, 0x004EFD10, 0x004F1720, 0x004F2F20, 0x004F4280, 0x004F5A80, 0x0055CD30,
            0x0055E260, 0x0055F720, 0x0055FBF0, 0x00560CE0, 0x005623D0, 0x00562DA0, 0x00564B60,
            0x00566300, 0x00567670, 0x00568AC0, 0x00569E30, 0x005A1FE0, 0x005A37A0, 0x005A4C60,
            0x005A5130, 0x005B4FB0, 0x005C20B0, 0x005C3A80, 0x005C4030, 0x005DEB20, 0x005E0360,
            0x005E19B0, 0x00611600, 0x00614C30, 0x0061A6C0, 0x0061AC50, 0x00716EC0, 0x0078A4B0,
            0x0078BBA0, 0x0078C110, 0x0078D520, 0x0078EC50, 0x0078F380, 0x00790C10, 0x007915E0,
            0x00792AA0, 0x00792F70, 0x00793960, 0x007951F0, 0x00795C70, 0x00797630, 0x00797C30,
            0x007992D0, 0x0079A5C0, 0x0079B8B0, 0x007E64D0, 0x007E6500, 0x00852F50, 0x0089C840,
            0x0089C970, 0x008B93F0, 0x008BA6E0, 0x008F9B60, 0x0095E660, 0x0099CE50, 0x0099E140,
            0x0099F550, 0x009A0840, 0x009A1B30, 0x009A2E20, 0x009A41F0, 0x009A49F0, 0x009A51F0,
            0x009A5910, 0x009A6C00, 0x009A80E0, 0x009A9B90, 0x009AA140, 0x009AB510, 0x009D3030,
            0x009D3120, 0x009D3260, 0x009DD9E0, 0x00B19540, 0x00BB4DB0, 0x00BE2240, 0x00BE3650,
            0x00C4E610, 0x00CCB730, 0x00CCB970, 0x00CCBC50, 0x00D9FC60, 0x00DA1390, 0x00EAF070,
            0x00EB0900, 0x00F34E90, 0x00F36500, 0x00F36D10, 0x00F38000, 0x014866A0, 0x01487F30,
            0x015834C0, 0x01584C90, 0x01585200, 0x01585850, 0x0167DCD0, 0x0167F0F0, 0x01680750,
            0x01681A40, 0x016D0370, 0x0171BCB0, 0x0171D160, 0x0171D630, 0x017796F0, 0x0177ADA0,
            0x017893F0, 0x017CC5D0, 0x017CC8C0, 0x019B02B0, 0x019B1950, 0x019B2D30, 0x01A91280,
            0x01B11310, 0x01B12890, 0x01B13B80, 0x01B15030, 0x01B169F0, 0x01B16FA0, 0x01B26090,
            0x01B27D90, 0x01B8CE10, 0x01CA56E0, 0x01CA6E20, 0x01D69370,
        ],
    },
    Slot {
        at: 16,
        members: &[
            0x004F7510, 0x004FA020, 0x004FD0B0, 0x004FF6F0, 0x0055CE50, 0x0056B870, 0x0056E5E0,
            0x00570C90, 0x005A2110, 0x005A5CC0, 0x005C45C0, 0x005C6D00, 0x005DEC50, 0x005E24B0,
            0x00603F50, 0x006115E0, 0x006183D0, 0x0068B620, 0x00797D60, 0x0079B9D0, 0x0079CBB0,
            0x0079F230, 0x007A1670, 0x007A3D10, 0x007A72F0, 0x007A85E0, 0x007A9880, 0x007AADC0,
            0x0082DC60, 0x00854C80, 0x008F46E0, 0x0096E070, 0x0099E260, 0x009B03E0, 0x009B1930,
            0x00B19520, 0x00BE2360, 0x00BE3770, 0x00CBE610, 0x00DA18A0, 0x00EB0E30, 0x00EEC3E0,
            0x00F392A0, 0x01143CF0, 0x01145230, 0x01488AA0, 0x01585980, 0x01586EE0, 0x015895C0,
            0x0167DE00, 0x01717240, 0x0171DB40, 0x0175B1B0, 0x0194EA70, 0x019B03E0, 0x01A92BF0,
            0x01B170C0, 0x01B8CF40, 0x01BAA120, 0x01CA7710,
        ],
    },
    Slot {
        at: 24,
        members: &[
            0x005DAB30, 0x009E3190, 0x00A09B20, 0x00BB16A0, 0x00BB1D90, 0x00CBE630, 0x00CDDB60,
        ],
    },
    Slot {
        at: 32,
        members: &[
            0x004B1810, 0x004D3080, 0x00A09B50, 0x00B258A0, 0x00BAF780, 0x01876F90,
        ],
    },
    Slot {
        at: 40,
        members: &[
            0x00424560, 0x004B37B0, 0x004B72D0, 0x00601F40, 0x009E7BA0, 0x00C5F150, 0x01365080,
            0x016E2F40,
        ],
    },
    Slot {
        at: 48,
        members: &[
            0x004AE160, 0x004B7300, 0x004BDC80, 0x004C1A80, 0x004D5950, 0x004D5BC0, 0x005B1FD0,
            0x00788D60, 0x00A01490, 0x00F2D340, 0x0197E870,
        ],
    },
    Slot {
        at: 56,
        members: &[0x006EE120],
    },
    Slot {
        at: 64,
        members: &[0x0142FD20, 0x01432240, 0x01436270, 0x01CB2080, 0x01D34E60],
    },
    Slot {
        at: 72,
        members: &[
            0x00729ED0, 0x00B257F0, 0x00CBB160, 0x014A1950, 0x0197E890, 0x01CC82E0,
        ],
    },
    Slot {
        at: 80,
        members: &[
            0x004B6EB0, 0x004B7060, 0x0086E910, 0x01545270, 0x01571080, 0x0198D550, 0x01CF07F0,
        ],
    },
    Slot {
        at: 88,
        members: &[0x00779380, 0x0186A050, 0x01CF0810],
    },
    Slot {
        at: 96,
        members: &[
            0x006920D0, 0x006920F0, 0x007793A0, 0x00D41C50, 0x00D46470, 0x01CF0830,
        ],
    },
    Slot {
        at: 104,
        members: &[
            0x006051B0, 0x007793C0, 0x00878C50, 0x00D43570, 0x00D43590, 0x01754BD0, 0x0176A070,
        ],
    },
    Slot {
        at: 112,
        members: &[0x00652850, 0x00878A80, 0x009E7080, 0x01A998D0],
    },
    Slot {
        at: 120,
        members: &[0x004B2DD0, 0x00663CD0, 0x009E9CB0, 0x00F78890, 0x013D1B80],
    },
    Slot {
        at: 128,
        members: &[0x004B5830, 0x009FA280, 0x0185A9B0, 0x01867CF0, 0x01869590],
    },
    Slot {
        at: 136,
        members: &[0x00698300, 0x00B6BC50, 0x00B6BF60, 0x01BF8D00],
    },
    Slot {
        at: 144,
        members: &[0x00779940, 0x00A7B2E0, 0x00BC17B0, 0x01742480, 0x0194E6F0],
    },
    Slot {
        at: 152,
        members: &[
            0x00779960, 0x00B6BCA0, 0x00B6BFB0, 0x00CAC640, 0x00CE54E0, 0x0197BF90, 0x01BE45E0,
        ],
    },
    Slot {
        at: 160,
        members: &[0x005FDED0, 0x008136E0, 0x0197C070],
    },
    Slot {
        at: 168,
        members: &[0x00604270, 0x00CE54A0, 0x0173EBB0],
    },
    Slot {
        at: 176,
        members: &[0x00706780, 0x0094EEE0],
    },
    Slot {
        at: 192,
        members: &[0x00602290, 0x00604BC0, 0x01166E60, 0x011961E0, 0x019940E0],
    },
    Slot {
        at: 200,
        members: &[0x006023D0, 0x00EAECD0, 0x01166E40, 0x011961A0, 0x01806880],
    },
    Slot {
        at: 208,
        members: &[0x00CC3DD0],
    },
    Slot {
        at: 224,
        members: &[
            0x0060B960, 0x0060BED0, 0x00BC1D00, 0x00CB1C80, 0x00F11BB0, 0x010EE800, 0x010F0D50,
            0x01A5F2E0,
        ],
    },
    Slot {
        at: 232,
        members: &[0x01BE1220],
    },
    Slot {
        at: 248,
        members: &[0x00B6CB20],
    },
    Slot {
        at: 256,
        members: &[0x00CCEB30, 0x017B9280, 0x01979870, 0x01CF0C70],
    },
    Slot {
        at: 264,
        members: &[0x004B4900, 0x00652530, 0x009E8930, 0x01C06090],
    },
    Slot {
        at: 280,
        members: &[0x004B49A0, 0x005FDFF0, 0x0094EBA0, 0x009E8B60],
    },
    Slot {
        at: 304,
        members: &[0x00658E70],
    },
    Slot {
        at: 312,
        members: &[0x00A49360],
    },
    Slot {
        at: 336,
        members: &[0x004B6850, 0x009EA5C0],
    },
    Slot {
        at: 352,
        members: &[0x00A99D30],
    },
    Slot {
        at: 376,
        members: &[0x00892430],
    },
    Slot {
        at: 384,
        members: &[
            0x006512C0, 0x006512E0, 0x00651300, 0x00652590, 0x0067E0D0, 0x00689340, 0x0068A2A0,
            0x006FB500, 0x00741490, 0x00743190, 0x00743810, 0x0082A530, 0x0082AAD0, 0x0082AAF0,
            0x0082B0C0, 0x0082BAB0, 0x00844220, 0x00C741D0, 0x01413250,
        ],
    },
    Slot {
        at: 392,
        members: &[0x018A9F10, 0x01CF0FB0],
    },
    Slot {
        at: 448,
        members: &[0x00CB0BD0],
    },
    Slot {
        at: 456,
        members: &[0x00CB0BF0],
    },
    Slot {
        at: 488,
        members: &[0x00955880],
    },
    Slot {
        at: 592,
        members: &[0x00CCFD80],
    },
    Slot {
        at: 608,
        members: &[0x01112610, 0x01112630, 0x0195B200],
    },
    Slot {
        at: 616,
        members: &[0x00685170],
    },
    Slot {
        at: 688,
        members: &[0x008051E0],
    },
    Slot {
        at: 696,
        members: &[0x006842A0],
    },
    Slot {
        at: 728,
        members: &[0x0195BBD0],
    },
    Slot {
        at: 736,
        members: &[0x006852C0, 0x00B10E60],
    },
    Slot {
        at: 752,
        members: &[0x00C0E8D0],
    },
    Slot {
        at: 760,
        members: &[0x0094F970, 0x0094FA80],
    },
    Slot {
        at: 768,
        members: &[0x01C02920],
    },
    Slot {
        at: 880,
        members: &[0x01BD5F60],
    },
    Slot {
        at: 888,
        members: &[0x01BD5F80],
    },
    Slot {
        at: 1032,
        members: &[0x01BE77C0],
    },
    Slot {
        at: 1040,
        members: &[0x01BE1D00],
    },
    Slot {
        at: 1152,
        members: &[0x01B6E6B0],
    },
];

/// How many such routines there are.
pub const DISPATCHER_COUNT: usize = 530;

/// Implements part of the dispatcher family.
///
/// The routines that reach one slot.
#[must_use]
pub fn reaching(at: i32) -> Option<&'static Slot> {
    SLOTS.iter().find(|slot| slot.at == at)
}

/// Implements part of the dispatcher family.
///
/// Which slot one routine reaches, if it is one of these.
#[must_use]
pub fn slot_of(routine: u32) -> Option<i32> {
    SLOTS
        .iter()
        .find(|slot| slot.members.binary_search(&routine).is_ok())
        .map(|slot| slot.at)
}

/// Implements part of the dispatcher family.
///
/// How many dispatchers there are altogether.
#[must_use]
pub fn counted() -> usize {
    SLOTS.iter().map(|slot| slot.members.len()).sum()
}

/// Implements part of the dispatcher family.
///
/// The slots reached most often, commonest first.
#[must_use]
pub fn busiest(how_many: usize) -> Vec<(i32, usize)> {
    let mut counted: Vec<(i32, usize)> = SLOTS
        .iter()
        .map(|slot| (slot.at, slot.members.len()))
        .collect();
    counted.sort_by(|left, right| right.1.cmp(&left.1).then(left.0.cmp(&right.0)));
    counted.truncate(how_many);
    counted
}

/// Implements part of the dispatcher family.
///
/// What share of the dispatchers reach the first few slots.
#[must_use]
pub fn share_at_the_front(slots: usize) -> f64 {
    let held = counted();
    if held == 0 {
        return 0.0;
    }
    let front: usize = busiest(slots).iter().map(|(_, seen)| *seen).sum();
    #[expect(
        clippy::cast_precision_loss,
        reason = "counts of a few hundred, well inside what a double holds exactly"
    )]
    {
        front as f64 / held as f64
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn the_count_is_what_the_slots_hold() {
        assert_eq!(counted(), DISPATCHER_COUNT);
    }

    #[test]
    fn no_routine_is_listed_twice() {
        let mut routines: Vec<u32> = SLOTS
            .iter()
            .flat_map(|slot| slot.members.iter().copied())
            .collect();
        let before = routines.len();
        routines.sort_unstable();
        routines.dedup();

        assert_eq!(routines.len(), before);
    }

    #[test]
    fn no_slot_is_listed_twice() {
        let mut slots: Vec<i32> = SLOTS.iter().map(|slot| slot.at).collect();
        let before = slots.len();
        slots.sort_unstable();
        slots.dedup();

        assert_eq!(slots.len(), before);
    }

    #[test]
    fn every_group_is_sorted_so_it_can_be_searched() {
        for slot in &SLOTS {
            assert!(
                slot.members.windows(2).all(|pair| pair[0] < pair[1]),
                "{}",
                slot.at
            );
        }
    }

    #[test]
    fn every_slot_is_a_whole_number_of_addresses_into_the_table() {
        for slot in &SLOTS {
            assert_eq!(slot.at % 8, 0, "{}", slot.at);
        }
    }

    #[test]
    fn the_slots_at_the_front_are_reached_far_more_often_than_the_rest() {
        // Which is what a hierarchy whose common operations sit at the front
        // of the table produces.
        assert!(share_at_the_front(3) > 0.5, "{:?}", busiest(3));
    }

    #[test]
    fn the_first_slot_of_all_is_among_the_busiest() {
        let front = busiest(3);

        assert!(front.iter().any(|(at, _)| *at == 0));
    }

    #[test]
    fn the_far_slots_are_reached_only_a_handful_of_times_each() {
        let far: Vec<usize> = SLOTS
            .iter()
            .filter(|slot| slot.at > 0x100)
            .map(|slot| slot.members.len())
            .collect();

        assert!(!far.is_empty());
        assert!(far.iter().all(|seen| *seen < 40), "{far:?}");
    }

    #[test]
    fn a_dispatcher_can_be_found_by_its_address() {
        let known = SLOTS[0].members[0];

        assert_eq!(slot_of(known), Some(SLOTS[0].at));
        assert_eq!(slot_of(0), None);
        assert_eq!(slot_of(0xFFFF_FFFF), None);
    }

    #[test]
    fn and_a_slot_by_its_place() {
        assert!(reaching(0).is_some());
        assert!(reaching(0x7FFF_FFFF).is_none());
    }

    #[test]
    fn none_of_these_is_already_a_landing_pad_or_a_shim() {
        // The sweeps are of one population and must not overlap.
        for slot in SLOTS.iter().take(30) {
            for routine in slot.members.iter().take(10) {
                assert!(
                    crate::frame_pads::pad_at(*routine).is_none(),
                    "{routine:#010X}"
                );
                assert!(
                    crate::shim_routines::target_of(*routine).is_none(),
                    "{routine:#010X}"
                );
            }
        }
    }

    #[test]
    fn the_share_at_no_slots_is_nothing_and_at_all_of_them_is_everything() {
        assert!((share_at_the_front(0) - 0.0).abs() < f64::EPSILON);
        assert!((share_at_the_front(SLOTS.len()) - 1.0).abs() < f64::EPSILON);
    }
}
