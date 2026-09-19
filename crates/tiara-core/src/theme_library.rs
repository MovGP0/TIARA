//! Binding the platform's theming library at run time.
//!
//! None of it is linked: the library is opened by name and every entry point
//! looked up one at a time, which is what a program has to do to run on a
//! version of the platform that has no theming at all. The consequence is
//! that whether any given part of it is available is not known until it is
//! asked for.

/// The library the theming entry points come from.
///
/// Part of Ghidra function `FUN_0061a6f0` at `0x0061A6F0`.
pub const THEME_LIBRARY: &str = "uxtheme.dll";

/// Every entry point bound, in the order they are asked for.
///
/// Part of Ghidra function `FUN_0061a6f0` at `0x0061A6F0`.
///
/// Forty-seven of them, each into a slot of its own. The order is worth keeping
/// because it is the order the original asks in, and the first two — opening
/// and closing a theme — are what everything else needs first.
pub const THEME_ENTRY_POINTS: [&str; 47] = [
    "OpenThemeData",
    "CloseThemeData",
    "DrawThemeBackground",
    "DrawThemeText",
    "GetThemeBackgroundContentRect",
    "GetThemeBackgroundExtent",
    "GetThemePartSize",
    "GetThemeTextExtent",
    "GetThemeTextMetrics",
    "GetThemeBackgroundRegion",
    "HitTestThemeBackground",
    "DrawThemeEdge",
    "DrawThemeIcon",
    "IsThemePartDefined",
    "IsThemeBackgroundPartiallyTransparent",
    "GetThemeColor",
    "GetThemeMetric",
    "GetThemeString",
    "GetThemeBool",
    "GetThemeInt",
    "GetThemeEnumValue",
    "GetThemePosition",
    "GetThemeFont",
    "GetThemeRect",
    "GetThemeMargins",
    "GetThemeIntList",
    "GetThemePropertyOrigin",
    "SetWindowTheme",
    "GetThemeFilename",
    "GetThemeSysColor",
    "GetThemeSysColorBrush",
    "GetThemeSysBool",
    "GetThemeSysSize",
    "GetThemeSysFont",
    "GetThemeSysString",
    "GetThemeSysInt",
    "IsThemeActive",
    "IsAppThemed",
    "GetWindowTheme",
    "EnableThemeDialogTexture",
    "IsThemeDialogTextureEnabled",
    "GetThemeAppProperties",
    "SetThemeAppProperties",
    "GetCurrentThemeName",
    "GetThemeDocumentationProperty",
    "DrawThemeParentBackground",
    "EnableTheming",
];

/// What is known about the theming library.
///
/// Part of Ghidra function `FUN_0061a6f0` at `0x0061A6F0`.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct ThemeLibrary {
    loaded: bool,
    calls: usize,
    missing: Vec<&'static str>,
}

impl ThemeLibrary {
    /// A library nothing has yet tried to open.
    #[must_use]
    pub const fn new() -> Self {
        Self {
            loaded: false,
            calls: 0,
            missing: Vec::new(),
        }
    }

    /// Whether the library itself was opened.
    #[must_use]
    pub const fn is_loaded(&self) -> bool {
        self.loaded
    }

    /// How many times anything has asked for it.
    ///
    /// Part of Ghidra function `FUN_0061a6f0` at `0x0061A6F0`.
    ///
    /// Raised on every call, whether or not the library was opened and whether
    /// or not it was already open — so this counts askings and not holders,
    /// and nothing can use it to decide when to let the library go.
    #[must_use]
    pub const fn calls(&self) -> usize {
        self.calls
    }

    /// Which entry points were not there.
    ///
    /// The recovered code does not look: a lookup that fails leaves a null
    /// slot and nothing notices until something calls through it. This keeps
    /// the list so a caller can know, without changing the answer.
    #[must_use]
    pub fn missing(&self) -> &[&'static str] {
        &self.missing
    }
}

/// What opening the library needs of the platform.
///
/// Part of Ghidra function `FUN_0061a6f0` at `0x0061A6F0`.
pub trait ThemeModuleHost {
    /// Opens one library by name.
    fn open(&mut self, library: &str) -> bool;

    /// Finds one entry point in it.
    fn entry_point(&mut self, name: &str) -> bool;
}

/// Implements Ghidra function `FUN_0061a6f0` at `0x0061A6F0`.
///
/// Makes sure the theming library is open, and says whether it is.
///
/// Three things about this are worth knowing.
///
/// The whole of it is guarded by a lock that may not exist. When it does not,
/// nothing happens at all and the answer is no — so the thing that decides
/// whether theming is available is the lock, not the library.
///
/// The library is opened only when it is not already open, and a failed
/// opening leaves it not open, so a failure is retried on every call for as
/// long as the program runs. Nothing remembers having tried.
///
/// Each entry point is looked up without its result being checked, so a
/// library that is present but older than expected binds what it has, leaves
/// the rest null, and still answers yes.
///
/// Returns whether the library is open.
pub fn ensure_theme_library<Host: ThemeModuleHost>(
    library: Option<&mut ThemeLibrary>,
    host: &mut Host,
) -> bool {
    let Some(library) = library else {
        return false;
    };

    library.calls += 1;
    if !library.loaded {
        library.loaded = host.open(THEME_LIBRARY);
        if library.loaded {
            library.missing.clear();
            for name in THEME_ENTRY_POINTS {
                if !host.entry_point(name) {
                    library.missing.push(name);
                }
            }
        }
    }
    library.loaded
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Default)]
    struct Platform {
        opens: usize,
        opened: Vec<String>,
        asked: Vec<String>,
        library_present: bool,
        absent_entry_points: Vec<&'static str>,
    }

    impl ThemeModuleHost for Platform {
        fn open(&mut self, library: &str) -> bool {
            self.opens += 1;
            self.opened.push(library.to_owned());
            self.library_present
        }

        fn entry_point(&mut self, name: &str) -> bool {
            self.asked.push(name.to_owned());
            !self.absent_entry_points.contains(&name)
        }
    }

    fn present() -> Platform {
        Platform {
            library_present: true,
            ..Platform::default()
        }
    }

    #[test]
    fn every_entry_point_is_bound_once_and_none_is_named_twice() {
        let mut names = THEME_ENTRY_POINTS.to_vec();
        let before = names.len();
        names.sort_unstable();
        names.dedup();

        assert_eq!(before, 47);
        assert_eq!(names.len(), before);
    }

    #[test]
    fn opening_and_closing_a_theme_are_asked_for_first() {
        assert_eq!(THEME_ENTRY_POINTS[0], "OpenThemeData");
        assert_eq!(THEME_ENTRY_POINTS[1], "CloseThemeData");
    }

    #[test]
    fn a_library_that_is_there_is_opened_and_every_entry_point_asked_for() {
        let mut library = ThemeLibrary::new();
        let mut platform = present();

        assert!(ensure_theme_library(Some(&mut library), &mut platform));
        assert_eq!(platform.opened, [THEME_LIBRARY]);
        assert_eq!(platform.asked.len(), 47);
        assert!(library.is_loaded());
    }

    #[test]
    fn nothing_happens_at_all_without_the_lock() {
        let mut platform = present();

        assert!(!ensure_theme_library(None, &mut platform));
        assert_eq!(platform.opens, 0);
        assert!(platform.asked.is_empty());
    }

    #[test]
    fn a_library_already_open_is_not_opened_again() {
        let mut library = ThemeLibrary::new();
        let mut platform = present();
        ensure_theme_library(Some(&mut library), &mut platform);
        ensure_theme_library(Some(&mut library), &mut platform);

        assert_eq!(platform.opens, 1);
        assert_eq!(platform.asked.len(), 47);
    }

    #[test]
    fn a_failed_opening_is_tried_again_on_every_call() {
        let mut library = ThemeLibrary::new();
        let mut platform = Platform::default();

        assert!(!ensure_theme_library(Some(&mut library), &mut platform));
        assert!(!ensure_theme_library(Some(&mut library), &mut platform));
        assert_eq!(platform.opens, 2);
        assert!(platform.asked.is_empty());
    }

    #[test]
    fn the_count_rises_on_every_call_whatever_happened() {
        let mut library = ThemeLibrary::new();
        let mut platform = present();
        ensure_theme_library(Some(&mut library), &mut platform);
        ensure_theme_library(Some(&mut library), &mut platform);

        assert_eq!(library.calls(), 2);

        let mut refused = ThemeLibrary::new();
        let mut absent = Platform::default();
        ensure_theme_library(Some(&mut refused), &mut absent);

        assert_eq!(refused.calls(), 1);
        assert!(!refused.is_loaded());
    }

    #[test]
    fn an_older_library_binds_what_it_has_and_still_answers_yes() {
        let mut library = ThemeLibrary::new();
        let mut platform = Platform {
            library_present: true,
            absent_entry_points: vec!["EnableTheming", "GetThemeIntList"],
            ..Platform::default()
        };

        assert!(ensure_theme_library(Some(&mut library), &mut platform));
        assert_eq!(library.missing(), ["GetThemeIntList", "EnableTheming"]);
    }

    #[test]
    fn a_library_with_everything_leaves_nothing_missing() {
        let mut library = ThemeLibrary::new();
        let mut platform = present();
        ensure_theme_library(Some(&mut library), &mut platform);

        assert!(library.missing().is_empty());
    }

    #[test]
    fn the_entry_points_are_asked_for_in_the_recovered_order() {
        let mut library = ThemeLibrary::new();
        let mut platform = present();
        ensure_theme_library(Some(&mut library), &mut platform);

        assert_eq!(platform.asked, THEME_ENTRY_POINTS);
    }
}
