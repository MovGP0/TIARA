//! Iced state for the recovered PCB Design wizard.

use std::path::{Path, PathBuf};

pub const TITLE: &str = "PCB Design";
pub const FORM_RESOURCE: &str = "PCBWizard";
pub const HELP_CONTEXT: u32 = 0x0494;

pub const SETTINGS_FILE: &str = "TINA.INI";
pub const SETTINGS_SECTION: &str = "PCB Setup";
pub const AUTO_PLACEMENT_KEY: &str = "Auto placement";
pub const AUTO_ROUTE_KEY: &str = "Auto route";
pub const USE_TEMPLATE_KEY: &str = "Use template";
pub const BOARD_WIDTH_KEY: &str = "Board width";
pub const BOARD_HEIGHT_KEY: &str = "Board height";
pub const TEMPLATE_KEY: &str = "Template";

/// The board size the recovered handler falls back to for both dimensions.
pub const DEFAULT_BOARD_SIZE: f64 = 2000.0;

/// The decimal separator the recovered handler forces while it reads the two
/// board dimensions.
pub const NUMERIC_DECIMAL_SEPARATOR: char = '.';

/// The measurement-unit code that selects the first unit caption.
pub const INCH_UNIT_CODE: u8 = 1;

/// The staged wizard values the create handler produces.
#[derive(Debug, Clone, PartialEq)]
#[allow(clippy::struct_excessive_bools)]
pub struct PcbWizardSettings {
    pub auto_placement: bool,
    pub auto_route: bool,
    pub use_template: bool,
    pub board_width: f64,
    pub board_height: f64,
    pub template: PathBuf,
    /// True when the project list was empty, which starts a new project.
    pub new_project: bool,
}

pub trait PcbSettingsReader {
    fn read_bool(&mut self, section: &str, key: &str, default: bool) -> bool;

    /// Reads one float. The recovered handler forces the decimal separator for
    /// the duration of both reads, which this adapter receives explicitly.
    fn read_float(
        &mut self,
        section: &str,
        key: &str,
        default: f64,
        decimal_separator: char,
    ) -> f64;

    /// Reads one string, already decoded from the stored code page.
    fn read_string(&mut self, section: &str, key: &str, default: &str) -> String;
}

pub trait PcbWizardCreateHost {
    fn create_hint_window(&mut self);

    /// The template path the wizard starts from when the settings hold none.
    fn default_template(&mut self) -> PathBuf;

    /// Fills the project combo. `show_all` is the recovered filter flag.
    fn fill_project_choices(&mut self, show_all: bool) -> usize;

    fn open_settings(&mut self, path: &Path);

    fn settings(&mut self) -> &mut dyn PcbSettingsReader;

    fn set_board_size(&mut self, width: f64, height: f64);

    /// Shows the template path, elided to the label width.
    fn show_template_path(&mut self, template: &Path);

    /// Applies the new-project or open-project branch.
    fn apply_project_mode(&mut self, new_project: bool);

    fn select_project(&mut self, index: i32);

    /// Applies the template or board-size branch.
    fn apply_template_mode(&mut self, use_template: bool);

    fn close_settings(&mut self);

    fn set_help_context(&mut self, context: u32);
}

/// Builds the settings-file path the recovered handler opens.
#[must_use]
pub fn settings_file_path(settings_folder: &Path) -> PathBuf {
    settings_folder.join(SETTINGS_FILE)
}

/// Implements Ghidra function `FUN_01bb2090` at `0x01BB2090`.
///
/// Seeds the whole wizard from `TINA.INI`.
///
/// The three check boxes and the template radio all default to off when their
/// key is missing, and the board-size radio is always the inverse of the
/// template radio, so exactly one is selected. Both board dimensions are read
/// with the decimal separator forced to a period and fall back to the recovered
/// default, which keeps a locale that uses a comma from silently changing a
/// stored size.
///
/// A stored template replaces the wizard's own default; a missing or empty one
/// leaves that default in place, and the label shows whichever path won. An
/// empty project list forces the new-project branch and a non-empty one the
/// open-project branch; either way the first project entry is selected.
///
/// The handler only stages values: it creates no board, writes no key back, and
/// leaves the settings object closed behind it.
pub fn create_pcb_wizard(
    settings_folder: &Path,
    host: &mut impl PcbWizardCreateHost,
) -> PcbWizardSettings {
    host.create_hint_window();
    let default_template = host.default_template();
    let project_count = host.fill_project_choices(false);
    host.open_settings(&settings_file_path(settings_folder));

    let settings = host.settings();
    let auto_placement = settings.read_bool(SETTINGS_SECTION, AUTO_PLACEMENT_KEY, false);
    let auto_route = settings.read_bool(SETTINGS_SECTION, AUTO_ROUTE_KEY, false);
    let use_template = settings.read_bool(SETTINGS_SECTION, USE_TEMPLATE_KEY, false);
    let board_width = settings.read_float(
        SETTINGS_SECTION,
        BOARD_WIDTH_KEY,
        DEFAULT_BOARD_SIZE,
        NUMERIC_DECIMAL_SEPARATOR,
    );
    let board_height = settings.read_float(
        SETTINGS_SECTION,
        BOARD_HEIGHT_KEY,
        DEFAULT_BOARD_SIZE,
        NUMERIC_DECIMAL_SEPARATOR,
    );
    let stored_template = settings.read_string(SETTINGS_SECTION, TEMPLATE_KEY, "");

    host.set_board_size(board_width, board_height);

    let template = if stored_template.is_empty() {
        default_template
    } else {
        PathBuf::from(stored_template)
    };
    host.show_template_path(&template);

    let new_project = project_count == 0;
    host.apply_project_mode(new_project);
    host.select_project(0);
    host.apply_template_mode(use_template);

    host.close_settings();
    host.set_help_context(HELP_CONTEXT);

    PcbWizardSettings {
        auto_placement,
        auto_route,
        use_template,
        board_width,
        board_height,
        template,
        new_project,
    }
}

pub trait PcbWizardTeardownHost {
    fn hide_hint_window(&mut self);

    fn release_hint_window(&mut self);
}

/// Implements Ghidra function `FUN_01bb2670` at `0x01BB2670`.
///
/// Hides and then releases the wizard's hint window. The recovered handler does
/// nothing else: it writes no `PCB Setup` key, so closing the wizard without
/// accepting it leaves the stored settings untouched.
pub fn destroy_pcb_wizard(host: &mut impl PcbWizardTeardownHost) {
    host.hide_hint_window();
    host.release_hint_window();
}

pub trait PcbWizardActivateHost {
    /// Applies the localized captions to the whole form.
    fn localize_form(&mut self);

    /// Reads one caption from the hidden unit list.
    fn unit_caption(&mut self, index: usize) -> String;

    /// Assigns both board-dimension unit labels.
    fn set_unit_labels(&mut self, caption: &str);
}

/// Implements Ghidra function `FUN_01bb26a0` at `0x01BB26A0`.
///
/// Re-localizes the form and refreshes the two board-dimension unit labels from
/// the hidden unit list every time the wizard is activated.
///
/// The inch unit code selects the first caption and every other code the
/// second, so switching the measurement unit in Editor Options is picked up the
/// next time this wizard comes forward. Both labels always show the same
/// caption, and the handler converts no stored dimension.
pub fn activate_pcb_wizard(unit_code: u8, host: &mut impl PcbWizardActivateHost) -> String {
    host.localize_form();
    let index = usize::from(unit_code != INCH_UNIT_CODE);
    let caption = host.unit_caption(index);
    host.set_unit_labels(&caption);
    caption
}

/// The hint timing value the recovered wizard hint handler assigns.
pub const WIZARD_HINT_TIMING: u32 = 100;

/// Which wizard control a hint request belongs to.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum HintTarget {
    ProjectCombo,
    TemplateLabel,
    Other,
}

/// One hint request the application routes through the wizard.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct WizardHint {
    pub target: HintTarget,
    pub text: String,
    pub timing: u32,
    pub show: bool,
}

pub trait PcbWizardHintHost {
    /// The selected project entry, or `None` when nothing is selected.
    fn selected_project_text(&mut self) -> Option<String>;

    /// Reports whether the text still fits inside the project combo.
    fn project_text_fits(&mut self, text: &str) -> bool;

    /// The template path the label was built from.
    fn full_template_text(&mut self) -> Option<String>;

    /// The text the template label actually shows, which may be elided.
    fn displayed_template_text(&mut self) -> String;
}

/// Implements Ghidra function `FUN_01bb3ae0` at `0x01BB3AE0`.
///
/// Supplies a hint only where the wizard is actually hiding text.
///
/// Over the project combo the hint shows the selected entry, and only when that
/// entry no longer fits the control; a combo with nothing selected shows no
/// hint at all. Over the template label the hint shows the full template path,
/// and only when the label is showing something different, which is how an
/// elided path becomes readable. Every other control keeps its designed hint.
pub fn resolve_wizard_hint(hint: &mut WizardHint, host: &mut impl PcbWizardHintHost) -> bool {
    match hint.target {
        HintTarget::ProjectCombo => {
            let Some(text) = host.selected_project_text() else {
                hint.show = false;
                return false;
            };
            if host.project_text_fits(&text) {
                hint.show = false;
                return false;
            }
            hint.text = text;
        }
        HintTarget::TemplateLabel => {
            let Some(full) = host.full_template_text() else {
                hint.show = false;
                return false;
            };
            if full == host.displayed_template_text() {
                hint.show = false;
                return false;
            }
            hint.text = full;
        }
        HintTarget::Other => return false,
    }

    hint.show = true;
    hint.timing = WIZARD_HINT_TIMING;
    true
}

pub trait PcbDimensionErrorHost {
    /// Publishes the float edit's own error text.
    fn report_dimension_error(&mut self, message: &str);
}

/// Implements Ghidra function `FUN_01bb37f0` at `0x01BB37F0`.
///
/// Forwards a board-dimension edit's own error text to the shared reporter when
/// the control rejects what the user typed.
///
/// Both dimension edits share this handler, so a bad width and a bad height are
/// reported the same way. The handler supplies no replacement text, restores no
/// previous value, and inspects no other control.
pub fn report_board_dimension_error(
    control_error_text: &str,
    host: &mut impl PcbDimensionErrorHost,
) {
    host.report_dimension_error(control_error_text);
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Default)]
    struct Settings {
        bools: Vec<(String, bool)>,
        floats: Vec<(String, f64)>,
        strings: Vec<(String, String)>,
        separators: Vec<char>,
    }

    impl PcbSettingsReader for Settings {
        fn read_bool(&mut self, section: &str, key: &str, default: bool) -> bool {
            assert_eq!(section, SETTINGS_SECTION);
            self.bools
                .iter()
                .find(|(stored, _)| stored == key)
                .map_or(default, |(_, value)| *value)
        }

        fn read_float(
            &mut self,
            section: &str,
            key: &str,
            default: f64,
            decimal_separator: char,
        ) -> f64 {
            assert_eq!(section, SETTINGS_SECTION);
            self.separators.push(decimal_separator);
            self.floats
                .iter()
                .find(|(stored, _)| stored == key)
                .map_or(default, |(_, value)| *value)
        }

        fn read_string(&mut self, section: &str, key: &str, default: &str) -> String {
            assert_eq!(section, SETTINGS_SECTION);
            self.strings
                .iter()
                .find(|(stored, _)| stored == key)
                .map_or_else(|| default.to_owned(), |(_, value)| value.clone())
        }
    }

    #[derive(Debug, Clone, PartialEq)]
    enum Step {
        Hint,
        DefaultTemplate,
        Projects(bool),
        Open(PathBuf),
        BoardSize(f64, f64),
        Template(PathBuf),
        ProjectMode(bool),
        SelectProject(i32),
        TemplateMode(bool),
        Close,
        Help(u32),
    }

    #[derive(Debug, Default)]
    struct CreateHost {
        settings: Settings,
        default_template: PathBuf,
        project_count: usize,
        steps: Vec<Step>,
    }

    impl PcbWizardCreateHost for CreateHost {
        fn create_hint_window(&mut self) {
            self.steps.push(Step::Hint);
        }

        fn default_template(&mut self) -> PathBuf {
            self.steps.push(Step::DefaultTemplate);
            self.default_template.clone()
        }

        fn fill_project_choices(&mut self, show_all: bool) -> usize {
            self.steps.push(Step::Projects(show_all));
            self.project_count
        }

        fn open_settings(&mut self, path: &Path) {
            self.steps.push(Step::Open(path.to_path_buf()));
        }

        fn settings(&mut self) -> &mut dyn PcbSettingsReader {
            &mut self.settings
        }

        fn set_board_size(&mut self, width: f64, height: f64) {
            self.steps.push(Step::BoardSize(width, height));
        }

        fn show_template_path(&mut self, template: &Path) {
            self.steps.push(Step::Template(template.to_path_buf()));
        }

        fn apply_project_mode(&mut self, new_project: bool) {
            self.steps.push(Step::ProjectMode(new_project));
        }

        fn select_project(&mut self, index: i32) {
            self.steps.push(Step::SelectProject(index));
        }

        fn apply_template_mode(&mut self, use_template: bool) {
            self.steps.push(Step::TemplateMode(use_template));
        }

        fn close_settings(&mut self) {
            self.steps.push(Step::Close);
        }

        fn set_help_context(&mut self, context: u32) {
            self.steps.push(Step::Help(context));
        }
    }

    #[test]
    fn create_falls_back_to_the_recovered_defaults_for_every_missing_key() {
        let mut host = CreateHost {
            default_template: PathBuf::from(r"C:\TINA\board.tpl"),
            ..CreateHost::default()
        };

        let staged = create_pcb_wizard(Path::new(r"C:\ProgramData\TINA"), &mut host);

        assert!(!staged.auto_placement);
        assert!(!staged.auto_route);
        assert!(!staged.use_template);
        assert!((staged.board_width - DEFAULT_BOARD_SIZE).abs() < f64::EPSILON);
        assert!((staged.board_height - DEFAULT_BOARD_SIZE).abs() < f64::EPSILON);
        assert_eq!(staged.template, PathBuf::from(r"C:\TINA\board.tpl"));
        assert!(staged.new_project);
        assert_eq!(
            host.settings.separators,
            [NUMERIC_DECIMAL_SEPARATOR, NUMERIC_DECIMAL_SEPARATOR]
        );
    }

    #[test]
    fn create_stages_stored_values_and_follows_the_open_project_branch() {
        let mut host = CreateHost {
            default_template: PathBuf::from(r"C:\TINA\board.tpl"),
            project_count: 2,
            settings: Settings {
                bools: vec![
                    (AUTO_PLACEMENT_KEY.to_owned(), true),
                    (USE_TEMPLATE_KEY.to_owned(), true),
                ],
                floats: vec![
                    (BOARD_WIDTH_KEY.to_owned(), 1200.0),
                    (BOARD_HEIGHT_KEY.to_owned(), 800.0),
                ],
                strings: vec![(TEMPLATE_KEY.to_owned(), r"C:\Boards\stored.tpl".to_owned())],
                separators: Vec::new(),
            },
            steps: Vec::new(),
        };

        let staged = create_pcb_wizard(Path::new(r"C:\ProgramData\TINA"), &mut host);

        assert!(staged.auto_placement);
        assert!(!staged.auto_route);
        assert!(staged.use_template);
        assert_eq!(staged.template, PathBuf::from(r"C:\Boards\stored.tpl"));
        assert!(!staged.new_project);
        assert_eq!(
            host.steps,
            [
                Step::Hint,
                Step::DefaultTemplate,
                Step::Projects(false),
                Step::Open(Path::new(r"C:\ProgramData\TINA").join(SETTINGS_FILE)),
                Step::BoardSize(1200.0, 800.0),
                Step::Template(PathBuf::from(r"C:\Boards\stored.tpl")),
                Step::ProjectMode(false),
                Step::SelectProject(0),
                Step::TemplateMode(true),
                Step::Close,
                Step::Help(HELP_CONTEXT),
            ]
        );
    }

    #[derive(Debug, Default)]
    struct TeardownHost {
        steps: Vec<&'static str>,
    }

    impl PcbWizardTeardownHost for TeardownHost {
        fn hide_hint_window(&mut self) {
            self.steps.push("hide");
        }

        fn release_hint_window(&mut self) {
            self.steps.push("release");
        }
    }

    #[test]
    fn destroy_hides_the_hint_window_before_releasing_it() {
        let mut host = TeardownHost::default();

        destroy_pcb_wizard(&mut host);

        assert_eq!(host.steps, ["hide", "release"]);
    }

    #[derive(Debug, Default)]
    struct ActivateHost {
        captions: Vec<String>,
        localized: usize,
        applied: Vec<String>,
    }

    impl PcbWizardActivateHost for ActivateHost {
        fn localize_form(&mut self) {
            self.localized += 1;
        }

        fn unit_caption(&mut self, index: usize) -> String {
            self.captions.get(index).cloned().unwrap_or_default()
        }

        fn set_unit_labels(&mut self, caption: &str) {
            self.applied.push(caption.to_owned());
        }
    }

    #[test]
    fn the_inch_unit_code_selects_the_first_caption_and_every_other_the_second() {
        let mut host = ActivateHost {
            captions: vec!["(inch)".to_owned(), "(mm)".to_owned()],
            ..ActivateHost::default()
        };

        assert_eq!(activate_pcb_wizard(INCH_UNIT_CODE, &mut host), "(inch)");
        assert_eq!(activate_pcb_wizard(3, &mut host), "(mm)");

        assert_eq!(host.localized, 2);
        assert_eq!(host.applied, ["(inch)".to_owned(), "(mm)".to_owned()]);
    }

    #[derive(Debug, Default)]
    struct ErrorHost {
        reported: Vec<String>,
    }

    impl PcbDimensionErrorHost for ErrorHost {
        fn report_dimension_error(&mut self, message: &str) {
            self.reported.push(message.to_owned());
        }
    }

    #[derive(Debug, Default)]
    struct HintHost {
        project: Option<String>,
        fits: bool,
        template: Option<String>,
        displayed: String,
    }

    impl PcbWizardHintHost for HintHost {
        fn selected_project_text(&mut self) -> Option<String> {
            self.project.clone()
        }

        fn project_text_fits(&mut self, _text: &str) -> bool {
            self.fits
        }

        fn full_template_text(&mut self) -> Option<String> {
            self.template.clone()
        }

        fn displayed_template_text(&mut self) -> String {
            self.displayed.clone()
        }
    }

    fn hint(target: HintTarget) -> WizardHint {
        WizardHint {
            target,
            text: "designed".to_owned(),
            timing: 0,
            show: false,
        }
    }

    #[test]
    fn the_project_combo_shows_a_hint_only_for_text_that_no_longer_fits() {
        let mut clipped = HintHost {
            project: Some("A very long project name".to_owned()),
            ..HintHost::default()
        };
        let mut request = hint(HintTarget::ProjectCombo);
        assert!(resolve_wizard_hint(&mut request, &mut clipped));
        assert_eq!(request.text, "A very long project name");
        assert_eq!(request.timing, WIZARD_HINT_TIMING);
        assert!(request.show);

        let mut fitting = HintHost {
            project: Some("Short".to_owned()),
            fits: true,
            ..HintHost::default()
        };
        let mut request = hint(HintTarget::ProjectCombo);
        assert!(!resolve_wizard_hint(&mut request, &mut fitting));
        assert!(!request.show);
        assert_eq!(request.text, "designed");
    }

    #[test]
    fn the_template_label_shows_the_full_path_only_when_it_is_elided() {
        let mut elided = HintHost {
            template: Some(r"C:\Boards\very\long\board.tpl".to_owned()),
            displayed: r"C:\...\board.tpl".to_owned(),
            ..HintHost::default()
        };
        let mut request = hint(HintTarget::TemplateLabel);
        assert!(resolve_wizard_hint(&mut request, &mut elided));
        assert_eq!(request.text, r"C:\Boards\very\long\board.tpl");

        let mut whole = HintHost {
            template: Some("board.tpl".to_owned()),
            displayed: "board.tpl".to_owned(),
            ..HintHost::default()
        };
        let mut request = hint(HintTarget::TemplateLabel);
        assert!(!resolve_wizard_hint(&mut request, &mut whole));
        assert!(!request.show);
    }

    #[test]
    fn every_other_control_keeps_its_designed_hint() {
        let mut host = HintHost::default();
        let mut request = hint(HintTarget::Other);

        assert!(!resolve_wizard_hint(&mut request, &mut host));

        assert_eq!(request.text, "designed");
        assert_eq!(request.timing, 0);
    }

    #[test]
    fn both_dimension_edits_report_their_own_error_text_unchanged() {
        let mut host = ErrorHost::default();

        report_board_dimension_error("Invalid width", &mut host);
        report_board_dimension_error("Invalid height", &mut host);

        assert_eq!(
            host.reported,
            ["Invalid width".to_owned(), "Invalid height".to_owned()]
        );
    }
}

/// The window class of a combo box's drop-down list.
///
/// The hint only appears over the list, and this class name is how the
/// recovered handler tells that the pointer is over one rather than over
/// anything else on screen.
pub const DROP_DOWN_LIST_CLASS: &str = "ComboLBox";

/// How much narrower than the combo an entry must be to count as fitting.
///
/// The recovered comparison is `text width > combo width - 5`, so an entry
/// that exactly fills the combo still gets a hint.
pub const FIT_MARGIN: i32 = 5;

/// How far below and right of the pointer the hint is placed.
pub const HINT_OFFSET: i32 = 0x10;

/// The background colour the hint is painted in.
///
/// The high byte marks it as a system colour rather than a literal one, and
/// the index is the one Windows reserves for tooltips, so the hint follows
/// the user's theme rather than being a fixed yellow.
pub const HINT_COLOR: u32 = 0xff00_0018;

/// What the hint pass decided to do.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum HintAction {
    /// Show the hint carrying this text.
    Show(String),
    /// Take the hint down.
    Hide,
    /// Leave the hint exactly as it is.
    Leave,
}

/// Whether an entry is too wide for the combo to show it.
///
/// Part of Ghidra function `FUN_01bb3810` at `0x01BB3810`.
#[must_use]
pub const fn entry_overflows(text_width: i32, combo_width: i32) -> bool {
    text_width > combo_width - FIT_MARGIN
}

/// What the hint pass needs to know about the drop-down under the pointer.
#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct DropDownProbe {
    /// The class name of the window under the pointer.
    pub window_class: String,
    /// The entry under the pointer, when the list reports one.
    pub entry: Option<String>,
    /// How wide that entry would be drawn.
    pub entry_width: i32,
}

pub trait DropDownHintHost {
    /// Whether the combo's list is open at all.
    fn drop_down_open(&mut self) -> bool;

    /// Looks at whatever window is under the pointer.
    fn probe(&mut self) -> DropDownProbe;

    /// How wide the combo itself is.
    fn combo_width(&mut self) -> i32;

    /// The text the hint is currently showing, if any.
    fn shown_text(&mut self) -> Option<String>;

    /// Takes the hint down and forgets the text it was showing.
    fn hide_hint(&mut self);

    /// Puts the hint up next to the pointer, in the recovered colour.
    fn show_hint(&mut self, text: &str, color: u32, offset: i32);
}

/// Implements Ghidra function `FUN_01bb3810` at `0x01BB3810`.
///
/// Handles `PCBWizardEvents.OnIdle`.
///
/// Shows the full text of a drop-down entry the combo is too narrow to
/// display, next to the pointer.
///
/// A combo box clips its entries and gives the user no way to read one that
/// does not fit, so this pass reads the entry under the pointer directly out
/// of the drop-down list window and puts a hint beside it. Doing that on idle
/// is what makes it work at all: the list is a window of its own that the
/// form never receives mouse messages from, so there is no event to hang it
/// off.
///
/// Three things have to hold before a hint appears — the list must be open,
/// the pointer must be over the list rather than over anything else on
/// screen, and the entry must actually overflow. An entry that fits takes the
/// hint back down rather than leaving a stale one up.
///
/// The text last shown is remembered, so moving the pointer within one entry
/// leaves the hint alone instead of rebuilding it on every idle turn.
pub fn refresh_drop_down_hint(host: &mut impl DropDownHintHost) -> HintAction {
    if !host.drop_down_open() {
        host.hide_hint();
        return HintAction::Hide;
    }

    let probe = host.probe();
    if probe.window_class != DROP_DOWN_LIST_CLASS {
        return HintAction::Leave;
    }

    let Some(entry) = probe.entry else {
        return HintAction::Leave;
    };

    let combo_width = host.combo_width();
    if !entry_overflows(probe.entry_width, combo_width) {
        host.hide_hint();
        return HintAction::Hide;
    }

    if host.shown_text().as_deref() == Some(entry.as_str()) {
        return HintAction::Leave;
    }

    host.show_hint(&entry, HINT_COLOR, HINT_OFFSET);
    HintAction::Show(entry)
}

#[cfg(test)]
mod drop_down_hint_tests {
    use super::*;

    #[derive(Debug, Default)]
    struct Combo {
        open: bool,
        probe: DropDownProbe,
        width: i32,
        shown: Option<String>,
        hides: usize,
        shows: Vec<(String, u32, i32)>,
    }

    impl Combo {
        fn over_a_long_entry() -> Self {
            Self {
                open: true,
                probe: DropDownProbe {
                    window_class: DROP_DOWN_LIST_CLASS.to_owned(),
                    entry: Some("A very long footprint name".to_owned()),
                    entry_width: 400,
                },
                width: 120,
                ..Self::default()
            }
        }
    }

    impl DropDownHintHost for Combo {
        fn drop_down_open(&mut self) -> bool {
            self.open
        }

        fn probe(&mut self) -> DropDownProbe {
            self.probe.clone()
        }

        fn combo_width(&mut self) -> i32 {
            self.width
        }

        fn shown_text(&mut self) -> Option<String> {
            self.shown.clone()
        }

        fn hide_hint(&mut self) {
            self.hides += 1;
            self.shown = None;
        }

        fn show_hint(&mut self, text: &str, color: u32, offset: i32) {
            self.shows.push((text.to_owned(), color, offset));
            self.shown = Some(text.to_owned());
        }
    }

    #[test]
    fn an_entry_that_exactly_fills_the_combo_still_gets_a_hint() {
        assert!(entry_overflows(120, 120));
        assert!(entry_overflows(116, 120));
        assert!(!entry_overflows(115, 120));
        assert!(!entry_overflows(10, 120));
    }

    #[test]
    fn a_closed_list_takes_the_hint_down() {
        let mut host = Combo::default();

        assert_eq!(refresh_drop_down_hint(&mut host), HintAction::Hide);
        assert_eq!(host.hides, 1);
    }

    #[test]
    fn a_long_entry_under_the_pointer_raises_the_hint() {
        let mut host = Combo::over_a_long_entry();

        assert_eq!(
            refresh_drop_down_hint(&mut host),
            HintAction::Show("A very long footprint name".to_owned())
        );
        assert_eq!(
            host.shows,
            [(
                "A very long footprint name".to_owned(),
                HINT_COLOR,
                HINT_OFFSET
            )]
        );
    }

    #[test]
    fn the_same_entry_twice_leaves_the_hint_alone() {
        let mut host = Combo::over_a_long_entry();
        refresh_drop_down_hint(&mut host);

        assert_eq!(refresh_drop_down_hint(&mut host), HintAction::Leave);
        assert_eq!(host.shows.len(), 1);
    }

    #[test]
    fn moving_to_another_long_entry_replaces_the_hint() {
        let mut host = Combo::over_a_long_entry();
        refresh_drop_down_hint(&mut host);

        host.probe.entry = Some("Another long footprint name".to_owned());
        assert_eq!(
            refresh_drop_down_hint(&mut host),
            HintAction::Show("Another long footprint name".to_owned())
        );
        assert_eq!(host.shows.len(), 2);
    }

    #[test]
    fn an_entry_that_fits_takes_a_stale_hint_down() {
        let mut host = Combo::over_a_long_entry();
        refresh_drop_down_hint(&mut host);

        host.probe.entry_width = 10;
        assert_eq!(refresh_drop_down_hint(&mut host), HintAction::Hide);
        assert_eq!(host.hides, 1);
        assert_eq!(host.shown, None);
    }

    #[test]
    fn a_pointer_somewhere_else_on_screen_changes_nothing() {
        let mut host = Combo::over_a_long_entry();
        refresh_drop_down_hint(&mut host);
        host.probe.window_class = "Edit".to_owned();

        assert_eq!(refresh_drop_down_hint(&mut host), HintAction::Leave);
        assert_eq!(host.hides, 0);
        assert_eq!(host.shows.len(), 1);
    }

    #[test]
    fn a_pointer_over_the_list_but_on_no_entry_changes_nothing() {
        let mut host = Combo::over_a_long_entry();
        host.probe.entry = None;

        assert_eq!(refresh_drop_down_hint(&mut host), HintAction::Leave);
        assert_eq!(host.hides, 0);
        assert!(host.shows.is_empty());
    }

    #[test]
    fn closing_the_list_forgets_the_entry_the_hint_was_showing() {
        let mut host = Combo::over_a_long_entry();
        refresh_drop_down_hint(&mut host);

        host.open = false;
        refresh_drop_down_hint(&mut host);
        host.open = true;

        // The same entry raises the hint again rather than being taken for a
        // duplicate.
        assert_eq!(
            refresh_drop_down_hint(&mut host),
            HintAction::Show("A very long footprint name".to_owned())
        );
    }

    #[test]
    fn the_hint_follows_the_users_theme_rather_than_a_fixed_colour() {
        // The high byte marks a system colour index, not a literal RGB.
        assert_eq!(HINT_COLOR & 0xff00_0000, 0xff00_0000);
        assert_eq!(HINT_COLOR & 0x00ff_ffff, 0x18);
    }
}
