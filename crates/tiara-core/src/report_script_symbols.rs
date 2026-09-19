//! What a report script is allowed to name.
//!
//! The report designer carries a small scripting language, and this is the
//! table that tells it what exists: 20 enumerated types with their members, and
//! 43 names bound to a type. Recovering it is recovering the language's
//! vocabulary — nothing a script writes can be understood without it.
//!
//! Two things in the table are worth knowing before reading a script against
//! it. The names are **not** unique: the same name is registered more than once
//! with different types, because the registration is per class and the same
//! property means different things on different classes. And the two-letter
//! prefix that is supposed to say which type a member belongs to does not: two
//! prefixes each serve two types.

/// One enumerated type and its members, in order.
#[derive(Debug, Clone, Copy)]
pub struct Enumeration {
    /// What the type is called.
    pub name: &'static str,
    /// Its members, in the order they are declared.
    pub members: &'static [&'static str],
}

/// Every enumerated type a script can name.
///
/// Implements Ghidra function `FUN_018f0c90` at `0x018F0C90`.
pub const ENUMERATIONS: [Enumeration; 20] = [
    Enumeration {
        name: "TfrxStretchMode",
        members: &["smDontStretch", "smActualHeight", "smMaxHeight"],
    },
    Enumeration {
        name: "TfrxShiftMode",
        members: &["smDontShift", "smAlways", "smWhenOverlapped"],
    },
    Enumeration {
        name: "TfrxDuplexMode",
        members: &["dmNone", "dmVertical", "dmHorizontal", "dmSimplex"],
    },
    Enumeration {
        name: "TfrxFrameStyle",
        members: &[
            "fsSolid",
            "fsDash",
            "fsDot",
            "fsDashDot",
            "fsDashDotDot",
            "fsDouble",
        ],
    },
    Enumeration {
        name: "TfrxFrameTypes",
        members: &["ftLeft", "ftRight", "ftTop", "ftBottom"],
    },
    Enumeration {
        name: "TfrxAnchors",
        members: &["fraLeft", "fraTop", "fraRight", "fraBottom"],
    },
    Enumeration {
        name: "TfrxHAlign",
        members: &["haLeft", "haRight", "haCenter", "haBlock"],
    },
    Enumeration {
        name: "TfrxVAlign",
        members: &["vaTop", "vaBottom", "vaCenter"],
    },
    Enumeration {
        name: "TfrxZoomMode",
        members: &["zmDefault", "zmWholePage", "zmPageWidth", "zmManyPages"],
    },
    Enumeration {
        name: "TfrxPrintPages",
        members: &["ppAll", "ppOdd", "ppEven"],
    },
    Enumeration {
        name: "TfrxRangeBegin",
        members: &["rbFirst", "rbCurrent"],
    },
    Enumeration {
        name: "TfrxRangeEnd",
        members: &["reLast", "reCurrent", "reCount"],
    },
    Enumeration {
        name: "TfrxFieldType",
        members: &["fftNumeric", "fftString", "fftBoolean"],
    },
    Enumeration {
        name: "TfrxFormatKind",
        members: &["fkText", "fkNumeric", "fkDateTime", "fkBoolean"],
    },
    Enumeration {
        name: "TfrxFillType",
        members: &["ftBrush", "ftGradient", "ftGlass"],
    },
    Enumeration {
        name: "TfrxPrintMode",
        members: &["pmDefault", "pmSplit", "pmJoin", "pmScale"],
    },
    Enumeration {
        name: "TfrxVisibilityTypes",
        members: &["vsPreview", "vsExport", "vsPrint"],
    },
    Enumeration {
        name: "TPDFSignatureKind",
        members: &["skInvisible", "skVisible", "skEmpty"],
    },
    Enumeration {
        name: "TfrxDataLinkProcessing",
        members: &["dpString", "dpExpression"],
    },
    Enumeration {
        name: "TfrxDataLinkLoading",
        members: &["dltOnGetData", "dltOnPreview"],
    },
];

/// Every name bound to a type, in the order they are registered.
///
/// Implements Ghidra function `FUN_018f0c90` at `0x018F0C90`.
///
/// A flat list, but it cannot be read as one: the same name appears against
/// different types because each registration belongs to a class and nothing here
/// records which.
pub const BINDINGS: [(&str, &str); 43] = [
    ("fr01cm", "Extended"),
    ("fr1cm", "Extended"),
    ("fr01in", "Extended"),
    ("fr1in", "Extended"),
    ("fr1CharX", "Extended"),
    ("fr1CharY", "Extended"),
    ("clTransparent", "Integer"),
    ("crHand", "Integer"),
    ("crZoom", "Integer"),
    ("crFormat", "Integer"),
    ("Count", "Integer"),
    ("Objects", "Integer"),
    ("Strings", "Integer"),
    ("Text", "string"),
    ("Objects", "TList"),
    ("AllObjects", "TList"),
    ("Parent", "TfrxComponent"),
    ("Page", "TfrxPage"),
    ("AbsLeft", "Extended"),
    ("AbsTop", "Extended"),
    ("RecNo", "Integer"),
    ("DisplayText", "String"),
    ("DisplayWidth", "String"),
    ("FieldType", "String"),
    ("Value", "String"),
    ("TagStr", "String"),
    ("Text", "String"),
    ("AnsiText", "String"),
    ("Lines", "TWideStrings"),
    ("Value", "Variant"),
    ("Overflow", "Boolean"),
    ("Count", "Integer"),
    ("CurPage", "Integer"),
    ("Page", "Integer"),
    ("ModalResult", "Integer"),
    ("DestroyForms", "Boolean"),
    ("Variables", "String"),
    ("Items", "Integer"),
    ("Variables", "Variant"),
    ("Terminated", "Boolean"),
    ("Variables", "TfrxVariables"),
    ("Styles", "TfrxStyles"),
    ("DrillState", "TStrings"),
];

/// Implements part of Ghidra function `FUN_018f0c90` at `0x018F0C90`.
///
/// The members of one enumerated type.
#[must_use]
pub fn members_of(name: &str) -> Option<&'static [&'static str]> {
    ENUMERATIONS
        .iter()
        .find(|held| held.name == name)
        .map(|held| held.members)
}

/// Implements part of Ghidra function `FUN_018f0c90` at `0x018F0C90`.
///
/// Every type one name is bound to.
#[must_use]
pub fn types_of(name: &str) -> Vec<&'static str> {
    BINDINGS
        .iter()
        .filter(|(held, _)| *held == name)
        .map(|(_, kind)| *kind)
        .collect()
}

/// Implements part of Ghidra function `FUN_018f0c90` at `0x018F0C90`.
///
/// The names bound to more than one type.
///
/// Each of them is a property that different classes spell the same and mean
/// differently. A script naming one of these is understood only once the class
/// is known, which this table does not record.
#[must_use]
pub fn bound_to_several_types() -> Vec<&'static str> {
    let mut found: Vec<&'static str> = BINDINGS
        .iter()
        .map(|(name, _)| *name)
        .filter(|name| {
            let kinds = types_of(name);
            kinds.iter().any(|kind| *kind != kinds[0])
        })
        .collect();
    found.sort_unstable();
    found.dedup();
    found
}

/// Implements part of Ghidra function `FUN_018f0c90` at `0x018F0C90`.
///
/// The two-letter prefix a type's members are written with.
///
/// Taken from the first member, since that is all the table gives. Every type
/// here uses one, which is the convention — but see [`prefixes_serving_two_types`]
/// for where it fails.
#[must_use]
pub fn prefix_of(name: &str) -> Option<&'static str> {
    members_of(name).and_then(|members| members.first().map(|first| &first[..2]))
}

/// Implements part of Ghidra function `FUN_018f0c90` at `0x018F0C90`.
///
/// The prefixes used by more than one type.
///
/// Two of them. Where a prefix is meant to say which type a member belongs to,
/// these two say nothing: a member beginning with either could come from either
/// type, and only what it is being compared against settles it.
#[must_use]
pub fn prefixes_serving_two_types() -> Vec<&'static str> {
    let mut counted: Vec<(&'static str, usize)> = Vec::new();
    for held in ENUMERATIONS {
        if let Some(prefix) = prefix_of(held.name) {
            match counted.iter_mut().find(|(seen, _)| *seen == prefix) {
                Some((_, times)) => *times += 1,
                None => counted.push((prefix, 1)),
            }
        }
    }
    let mut found: Vec<&'static str> = counted
        .into_iter()
        .filter(|(_, times)| *times > 1)
        .map(|(prefix, _)| prefix)
        .collect();
    found.sort_unstable();
    found
}

/// The type name written in lower case where every other is capitalised.
///
/// Part of Ghidra function `FUN_018f0c90` at `0x018F0C90`.
///
/// One registration out of the whole table names its type `string` rather than
/// `String`. Whether the script engine minds is not settled here — what is
/// settled is that the table is not consistent, so anything matching type names
/// exactly will miss it.
pub const LOWER_CASE_TYPE: &str = "string";

/// Implements part of Ghidra function `FUN_018f0c90` at `0x018F0C90`.
///
/// The names bound to that lower-case spelling.
#[must_use]
pub fn bound_to_the_lower_case_type() -> Vec<&'static str> {
    BINDINGS
        .iter()
        .filter(|(_, kind)| *kind == LOWER_CASE_TYPE)
        .map(|(name, _)| *name)
        .collect()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn every_enumerated_type_has_members_and_is_named_once() {
        let mut names: Vec<&str> = ENUMERATIONS.iter().map(|held| held.name).collect();
        let before = names.len();
        names.sort_unstable();
        names.dedup();

        assert_eq!(names.len(), before);
        for held in ENUMERATIONS {
            assert!(!held.members.is_empty(), "{}", held.name);
        }
    }

    #[test]
    fn no_type_has_a_member_twice() {
        for held in ENUMERATIONS {
            let mut members = held.members.to_vec();
            let before = members.len();
            members.sort_unstable();
            members.dedup();

            assert_eq!(members.len(), before, "{}", held.name);
        }
    }

    #[test]
    fn the_members_of_a_type_can_be_looked_up() {
        assert_eq!(
            members_of("TfrxVAlign"),
            Some(["vaTop", "vaBottom", "vaCenter"].as_slice())
        );
        assert_eq!(members_of("NoSuchType"), None);
    }

    #[test]
    fn nearly_every_type_is_named_after_the_program_that_owns_it() {
        let outsiders: Vec<&str> = ENUMERATIONS
            .iter()
            .map(|held| held.name)
            .filter(|name| !name.starts_with("Tfrx"))
            .collect();

        assert_eq!(outsiders, ["TPDFSignatureKind"]);
    }

    #[test]
    fn every_type_writes_its_members_with_a_common_prefix() {
        for held in ENUMERATIONS {
            let prefix = prefix_of(held.name).expect("a first member");

            for member in held.members {
                assert!(member.starts_with(prefix), "{} {member}", held.name);
            }
        }
    }

    #[test]
    fn but_two_prefixes_each_serve_two_types() {
        // So a member beginning with either could come from either type.
        assert_eq!(prefixes_serving_two_types(), ["ft", "sm"]);
    }

    #[test]
    fn and_the_types_they_serve_are_not_related_to_each_other() {
        assert!(members_of("TfrxStretchMode").is_some());
        assert!(members_of("TfrxShiftMode").is_some());
        assert_eq!(prefix_of("TfrxStretchMode"), prefix_of("TfrxShiftMode"));

        assert_eq!(prefix_of("TfrxFrameTypes"), prefix_of("TfrxFillType"));
    }

    #[test]
    fn a_name_can_be_bound_to_more_than_one_type() {
        // Each is a property different classes spell the same and mean
        // differently.
        assert_eq!(types_of("Objects"), ["Integer", "TList"]);
        assert_eq!(types_of("Value"), ["String", "Variant"]);
    }

    #[test]
    fn and_several_names_are() {
        let several = bound_to_several_types();

        assert!(several.len() >= 4, "{several:?}");
        assert!(several.contains(&"Variables"));
        assert!(several.contains(&"Page"));
    }

    #[test]
    fn one_name_is_bound_to_three_different_types() {
        assert_eq!(types_of("Variables").len(), 3);
    }

    #[test]
    fn a_name_bound_once_is_not_among_them() {
        assert_eq!(types_of("AbsLeft"), ["Extended"]);
        assert!(!bound_to_several_types().contains(&"AbsLeft"));
    }

    #[test]
    fn a_name_the_table_does_not_hold_is_bound_to_nothing() {
        assert!(types_of("NoSuchName").is_empty());
    }

    #[test]
    fn one_registration_names_its_type_in_lower_case() {
        // So anything matching type names exactly will miss it.
        let lower = bound_to_the_lower_case_type();

        assert_eq!(lower, ["Text"]);
    }

    #[test]
    fn and_the_same_name_is_registered_again_with_the_capitalised_spelling() {
        assert!(types_of("Text").contains(&"String"));
        assert!(types_of("Text").contains(&LOWER_CASE_TYPE));
    }

    #[test]
    fn the_measurement_constants_come_in_pairs_of_a_tenth_and_a_whole() {
        for unit in ["cm", "in"] {
            assert!(
                BINDINGS
                    .iter()
                    .any(|(name, _)| *name == format!("fr01{unit}")),
                "{unit}"
            );
            assert!(
                BINDINGS
                    .iter()
                    .any(|(name, _)| *name == format!("fr1{unit}")),
                "{unit}"
            );
        }
    }

    #[test]
    fn and_every_one_of_them_is_a_floating_measurement() {
        for (name, kind) in BINDINGS {
            if name.starts_with("fr0") || name.starts_with("fr1") {
                assert_eq!(kind, "Extended", "{name}");
            }
        }
    }

    #[test]
    fn the_cursor_constants_are_whole_numbers() {
        for (name, kind) in BINDINGS {
            if name.starts_with("cr") {
                assert_eq!(kind, "Integer", "{name}");
            }
        }
    }
}
