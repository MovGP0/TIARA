//! Settling what category a component belongs to.
//!
//! A category is a name in brackets, and the whole of this is deciding whether
//! a given one is a name the program knows. Anything it does not know becomes
//! the internal category, which is what keeps an unrecognised component out of
//! the parts of the interface that are arranged by category.
//!
//! What counts as known depends on whether a component library has been
//! loaded. With one, the library is asked. Without one, a list compiled into
//! the program stands in for it — so the same category can be accepted or
//! rejected depending only on whether anything has been loaded yet.

/// What an unrecognised category becomes.
///
/// Part of Ghidra function `FUN_01715000` at `0x01715000`.
pub const INTERNAL_CATEGORY: &str = "[Internal]";

/// The one category that is kept whatever the library says.
///
/// Part of Ghidra function `FUN_01715000` at `0x01715000`.
///
/// Tested separately, after the library has already said it does not know it,
/// so it is allowed through on its own account. A replacement macro is not a
/// kind of part and no library would list it.
pub const ALWAYS_ALLOWED_CATEGORY: &str = "[TIReplMacro]";

/// The categories compiled into the program.
///
/// Part of Ghidra function `FUN_01715000` at `0x01715000`.
///
/// These stand in for a library when none has been loaded. Two further names
/// are tested that did not survive as typed strings — see
/// [`UNRECOVERED_CATEGORIES`] — so the list is two short of what the program
/// actually accepts.
///
/// [`INTERNAL_CATEGORY`] is itself among them, which is what keeps a component
/// already marked internal from being marked again.
pub const KNOWN_CATEGORIES: [&str; 38] = [
    "[OpAmp]",
    "[Connector]",
    "[DiodeArrays]",
    "[InstAmp]",
    "[Comparator]",
    "[Ref]",
    "[Buffer]",
    "[Misc]",
    "[OptoCoupler]",
    "[VoltageReg]",
    "[NPN]",
    "[PNP]",
    "[NDarlington]",
    "[PDarlington]",
    "[NMOS]",
    "[PMOS]",
    "[NJF]",
    "[PJF]",
    "[IGBT]",
    "[Thyristor]",
    "[VacuumTubes]",
    "[CRYSTAL]",
    "[CurrShuntMon]",
    "[DiffAmp]",
    "[FullDiffAmp]",
    "[SMPS]",
    "[Internal]",
    "[Timers]",
    "[ResistorNetworks]",
    "[Interface]",
    "[Transformers]",
    "[ADConverters]",
    "[VGAmp]",
    "[AnSwitch]",
    "[AnMux]",
    "[GAN]",
    "[GAAS]",
    "[TIReplMacro]",
];

/// How many further categories are tested but did not survive.
///
/// Part of Ghidra function `FUN_01715000` at `0x01715000`.
pub const UNRECOVERED_CATEGORIES: usize = 2;

/// What a library can be asked about a category.
///
/// Part of Ghidra function `FUN_01715000` at `0x01715000`.
pub trait CategoryLibrary {
    /// Whether anything has been loaded at all.
    fn is_loaded(&mut self) -> bool;

    /// Whether the library knows one category.
    fn knows(&mut self, category: &str) -> bool;
}

/// Implements Ghidra function `FUN_01715000` at `0x01715000`.
///
/// Settles what category a component belongs to.
///
/// A category the program knows is kept as it is. Anything else becomes the
/// internal category — so this never fails and never refuses, it only moves an
/// unknown name somewhere harmless.
///
/// Which route is taken depends on whether a library has been loaded, and the
/// two routes do not agree: the compiled-in list is fixed, while a loaded
/// library may know more categories or fewer. A component sorted before
/// anything was loaded can therefore be sorted differently afterwards.
///
/// The one exception is the replacement-macro category, which is kept even
/// when a loaded library says it does not know it. That test comes after the
/// library has been asked, so it is a reprieve rather than a shortcut — which
/// is also why it does not apply on the compiled-in route, where the name is
/// simply one of the list.
#[must_use]
pub fn settle_category<Library: CategoryLibrary>(library: &mut Library, category: &str) -> String {
    if library.is_loaded() {
        if library.knows(category) || category == ALWAYS_ALLOWED_CATEGORY {
            return category.to_owned();
        }
        return INTERNAL_CATEGORY.to_owned();
    }

    if KNOWN_CATEGORIES.contains(&category) {
        return category.to_owned();
    }
    INTERNAL_CATEGORY.to_owned()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Default)]
    struct Library {
        loaded: bool,
        known: Vec<&'static str>,
        asked: Vec<String>,
    }

    impl CategoryLibrary for Library {
        fn is_loaded(&mut self) -> bool {
            self.loaded
        }

        fn knows(&mut self, category: &str) -> bool {
            self.asked.push(category.to_owned());
            self.known.contains(&category)
        }
    }

    fn nothing_loaded() -> Library {
        Library::default()
    }

    fn loaded(known: &[&'static str]) -> Library {
        Library {
            loaded: true,
            known: known.to_vec(),
            ..Library::default()
        }
    }

    #[test]
    fn the_compiled_in_list_holds_no_name_twice() {
        let mut names = KNOWN_CATEGORIES.to_vec();
        let before = names.len();
        names.sort_unstable();
        names.dedup();

        assert_eq!(names.len(), before);
    }

    #[test]
    fn every_name_is_bracketed() {
        for name in KNOWN_CATEGORIES {
            assert!(name.starts_with('['), "{name}");
            assert!(name.ends_with(']'), "{name}");
        }
    }

    #[test]
    fn the_internal_category_is_itself_one_of_the_known_ones() {
        // Which is what keeps a component already marked internal from being
        // marked again.
        assert!(KNOWN_CATEGORIES.contains(&INTERNAL_CATEGORY));
    }

    #[test]
    fn a_known_category_is_kept_when_nothing_is_loaded() {
        let mut library = nothing_loaded();

        assert_eq!(settle_category(&mut library, "[OpAmp]"), "[OpAmp]");
        assert_eq!(settle_category(&mut library, "[NPN]"), "[NPN]");
    }

    #[test]
    fn an_unknown_category_becomes_internal() {
        let mut library = nothing_loaded();

        assert_eq!(
            settle_category(&mut library, "[Nonsense]"),
            INTERNAL_CATEGORY
        );
        assert_eq!(settle_category(&mut library, ""), INTERNAL_CATEGORY);
    }

    #[test]
    fn nothing_is_asked_of_a_library_that_is_not_loaded() {
        let mut library = nothing_loaded();
        let _ = settle_category(&mut library, "[OpAmp]");

        assert!(library.asked.is_empty());
    }

    #[test]
    fn a_loaded_library_is_asked_instead_of_the_list() {
        let mut library = loaded(&["[Something New]"]);

        assert_eq!(
            settle_category(&mut library, "[Something New]"),
            "[Something New]"
        );
        assert_eq!(library.asked, ["[Something New]"]);
    }

    #[test]
    fn the_two_routes_do_not_agree_and_that_is_the_behaviour() {
        // A category the list knows can be refused by a library that does
        // not, and the other way round.
        let mut without = nothing_loaded();
        let mut with = loaded(&[]);

        assert_eq!(settle_category(&mut without, "[OpAmp]"), "[OpAmp]");
        assert_eq!(settle_category(&mut with, "[OpAmp]"), INTERNAL_CATEGORY);
    }

    #[test]
    fn the_replacement_macro_category_survives_a_library_that_disowns_it() {
        let mut library = loaded(&[]);

        assert_eq!(
            settle_category(&mut library, ALWAYS_ALLOWED_CATEGORY),
            ALWAYS_ALLOWED_CATEGORY
        );
    }

    #[test]
    fn its_reprieve_comes_after_the_library_has_been_asked() {
        let mut library = loaded(&[]);
        let _ = settle_category(&mut library, ALWAYS_ALLOWED_CATEGORY);

        assert_eq!(library.asked, [ALWAYS_ALLOWED_CATEGORY]);
    }

    #[test]
    fn on_the_compiled_in_route_it_is_simply_one_of_the_list() {
        let mut library = nothing_loaded();

        assert_eq!(
            settle_category(&mut library, ALWAYS_ALLOWED_CATEGORY),
            ALWAYS_ALLOWED_CATEGORY
        );
        assert!(KNOWN_CATEGORIES.contains(&ALWAYS_ALLOWED_CATEGORY));
    }

    #[test]
    fn settling_never_fails_and_always_answers_something() {
        let mut library = nothing_loaded();
        for category in ["[OpAmp]", "[Nonsense]", "", "not bracketed"] {
            assert!(
                !settle_category(&mut library, category).is_empty(),
                "{category}"
            );
        }
    }

    #[test]
    fn two_further_names_are_tested_that_did_not_survive() {
        assert_eq!(UNRECOVERED_CATEGORIES, 2);
    }
}
