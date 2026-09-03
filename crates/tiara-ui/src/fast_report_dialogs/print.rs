use iced::widget::{button, checkbox, column, row, text};
use iced::{Element, Length, Task};
use std::path::{Path, PathBuf};

const DEFAULT_PAPER_CODE: Option<i32> = None;
const PREFERRED_NON_DEFAULT_PAPER_CODE: i32 = 9;

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PaperChoice {
    pub code: Option<i32>,
    pub name: String,
}

impl PaperChoice {
    #[must_use]
    pub fn default_choice(name: impl Into<String>) -> Self {
        Self {
            code: DEFAULT_PAPER_CODE,
            name: name.into(),
        }
    }

    #[must_use]
    pub fn paper(code: i32, name: impl Into<String>) -> Self {
        Self {
            code: Some(code),
            name: name.into(),
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PrinterInfo {
    pub location: String,
    pub papers: Vec<PaperChoice>,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PrinterRowPresentation<'a> {
    pub label: &'a str,
    pub icon_index: usize,
    pub fill_background: bool,
    pub icon_offset: [i32; 2],
    pub text_offset_after_icon: [i32; 2],
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PrintModeRowPresentation<'a> {
    pub label: &'a str,
    pub icon_index: usize,
    pub fill_background: bool,
    pub icon_offset: [i32; 2],
    pub text_offset: [i32; 2],
}

pub trait PrinterBackend {
    fn open_properties(&mut self, printer_index: usize) -> i32;
    fn select_printer(&mut self, printer_index: usize) -> PrinterInfo;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CopyPreviewKind {
    Collated,
    NonCollated,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CopyPreviewSource {
    Embedded,
    Replacement,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum PageRangeSelection {
    #[default]
    All,
    Current,
    Numbers,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SavedPrintSettings {
    pub copies: i32,
    pub collate: bool,
    pub page_numbers: String,
    pub print_mode: usize,
    pub target_paper_code: i32,
    pub print_pages_selection: usize,
    pub duplex: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PrintDialogHideOutcome {
    Committed,
    CancelledFileSelection,
    Rejected,
}

pub trait PrintDialogHideHost {
    type Error;

    /// # Errors
    ///
    /// Returns an error when the print-file picker cannot run.
    fn choose_print_file(&mut self) -> Result<Option<PathBuf>, Self::Error>;

    /// # Errors
    ///
    /// Returns an error when the report print-file target cannot be updated.
    fn set_print_file(&mut self, path: Option<&Path>) -> Result<(), Self::Error>;

    /// # Errors
    ///
    /// Returns an error when the original printer cannot be restored.
    fn restore_printer(&mut self, printer_index: usize) -> Result<(), Self::Error>;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CopyPreview {
    pub kind: CopyPreviewKind,
    pub source: CopyPreviewSource,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    PageNumbersSelected,
    PageNumbersFocused,
    CollateChanged(bool),
    PrintModeChanged(usize),
    KeyPressed(PrintDialogKey),
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PrintDialogKey {
    F1,
    Other,
}

#[derive(Debug, Clone, PartialEq, Eq)]
#[allow(clippy::struct_excessive_bools)]
pub struct PrintDialog {
    pub printer_names: Vec<String>,
    pub selected_printer: usize,
    pub original_printer: usize,
    pub printer_location: String,
    pub paper_choices: Vec<PaperChoice>,
    pub selected_paper: usize,
    pub duplex_selection: usize,
    pub page_numbers: String,
    pub page_range_selection: PageRangeSelection,
    pub page_numbers_focused: bool,
    pub copies: i32,
    pub collate: bool,
    pub copy_preview: CopyPreview,
    pub replacement_preview_pair: bool,
    pub print_mode: usize,
    pub print_pages_selection: usize,
    pub order_selection: usize,
    pub print_to_file: bool,
    pub paper_selection_enabled: bool,
    pub page_numbers_key_filter_connected: bool,
    pub copies_digits_only: bool,
    pub children_mirrored: bool,
    pub context_help_requested: bool,
}

impl PrintDialog {
    #[must_use]
    pub fn new(
        printer_names: Vec<String>,
        selected_printer: usize,
        default_paper_name: impl Into<String>,
    ) -> Self {
        Self {
            printer_names,
            selected_printer,
            original_printer: selected_printer,
            printer_location: String::new(),
            paper_choices: vec![PaperChoice::default_choice(default_paper_name)],
            selected_paper: 0,
            duplex_selection: 0,
            page_numbers: String::new(),
            page_range_selection: PageRangeSelection::All,
            page_numbers_focused: false,
            copies: 1,
            collate: true,
            copy_preview: CopyPreview {
                kind: CopyPreviewKind::Collated,
                source: CopyPreviewSource::Embedded,
            },
            replacement_preview_pair: false,
            print_mode: 0,
            print_pages_selection: 0,
            order_selection: 0,
            print_to_file: false,
            paper_selection_enabled: false,
            page_numbers_key_filter_connected: false,
            copies_digits_only: false,
            children_mirrored: false,
            context_help_requested: false,
        }
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::PageNumbersSelected => {
                self.select_page_numbers(true);
            }
            Message::PageNumbersFocused => self.enter_page_numbers(),
            Message::CollateChanged(collate) => self.set_collate(collate),
            Message::PrintModeChanged(mode) => self.set_print_mode(mode),
            Message::KeyPressed(key) => {
                let _ = self.handle_key(key);
            }
        }
        Task::none()
    }

    /// Requests dialog context help for F1.
    ///
    /// Reimplements Ghidra function `FUN_018b4700` at `0x018B4700`.
    /// All other keys are no-ops.
    #[must_use]
    pub const fn handle_key(&mut self, key: PrintDialogKey) -> bool {
        if matches!(key, PrintDialogKey::F1) {
            self.context_help_requested = true;
            true
        } else {
            false
        }
    }

    /// Describes one owner-drawn printer row for Iced rendering.
    ///
    /// Reimplements Ghidra function `FUN_018b34d0` at `0x018B34D0`.
    /// The recovered renderer fills the row, draws `PreviewImages` icon 2 two
    /// pixels from the left, and places the printer name eight pixels after the
    /// icon and one pixel below the top. The image bytes remain external.
    #[must_use]
    pub fn printer_row(&self, index: usize) -> Option<PrinterRowPresentation<'_>> {
        self.printer_names
            .get(index)
            .map(|label| PrinterRowPresentation {
                label,
                icon_index: 2,
                fill_background: true,
                icon_offset: [2, 0],
                text_offset_after_icon: [8, 1],
            })
    }

    /// Describes one owner-drawn print-mode row for Iced rendering.
    ///
    /// Reimplements Ghidra function `FUN_018b4730` at `0x018B4730`.
    /// The row is filled first. The external print-mode image uses the row
    /// index at offset 2,1, and the localized label starts at offset 74,10.
    #[must_use]
    pub const fn print_mode_row(index: usize, label: &str) -> PrintModeRowPresentation<'_> {
        PrintModeRowPresentation {
            label,
            icon_index: index,
            fill_background: true,
            icon_offset: [2, 1],
            text_offset: [74, 10],
        }
    }

    /// Initializes printer-backed state and input behavior for the print form.
    ///
    /// Reimplements Ghidra function `FUN_018b2d80` at `0x018B2D80`.
    /// The page-range filter and numeric copies input are installed before the
    /// current printer is selected. Printer-specific paper choices are rebuilt,
    /// the original printer is saved, the copy preview is repainted, and Iced
    /// child layout follows the host's right-to-left setting.
    pub fn form_create(
        &mut self,
        printer_names: Vec<String>,
        selected_printer: usize,
        default_paper_name: impl Into<String>,
        right_to_left: bool,
        backend: &mut impl PrinterBackend,
    ) {
        self.page_numbers_key_filter_connected = true;
        self.copies_digits_only = true;
        self.printer_names = printer_names;
        self.selected_printer = selected_printer;
        let default_paper_name = default_paper_name.into();
        self.paper_choices = vec![PaperChoice::default_choice(default_paper_name.clone())];
        self.selected_paper = 0;
        self.switch_printer(selected_printer, default_paper_name, backend);
        self.original_printer = selected_printer;
        self.paint_copies_preview();
        self.children_mirrored = right_to_left;
    }

    /// Restores saved report print settings when the dialog becomes visible.
    ///
    /// Reimplements Ghidra function `FUN_018b2e80` at `0x018B2E80`.
    /// Nonempty page text selects the custom page-range radio. Print mode is
    /// applied before an available saved paper code replaces its default.
    pub fn form_show(&mut self, settings: &SavedPrintSettings, order_selection: usize) {
        self.copies = settings.copies;
        self.collate = settings.collate;
        self.page_numbers.clone_from(&settings.page_numbers);
        if !settings.page_numbers.is_empty() {
            self.page_range_selection = PageRangeSelection::Numbers;
        }
        self.print_pages_selection = settings.print_pages_selection;
        self.duplex_selection = usize::from(settings.duplex);
        self.order_selection = order_selection;
        self.set_print_mode(settings.print_mode);
        if settings.print_mode != 0
            && let Some(index) = self.paper_index(settings.target_paper_code)
        {
            self.selected_paper = index;
        }
    }

    /// Commits accepted print controls or restores the original printer.
    ///
    /// Reimplements Ghidra function `FUN_018b30b0` at `0x018B30B0`.
    /// Accepted print-to-file output is cleared before selection and receives a
    /// `.prn` extension. A cancelled picker changes acceptance to cancellation
    /// and skips all saved-setting writes.
    ///
    /// # Errors
    ///
    /// Returns the first print host error without retry or rollback.
    pub fn form_hide<H: PrintDialogHideHost>(
        &self,
        accepted: bool,
        current_page: i32,
        settings: &mut SavedPrintSettings,
        host: &mut H,
    ) -> Result<PrintDialogHideOutcome, H::Error> {
        if !accepted {
            host.restore_printer(self.original_printer)?;
            return Ok(PrintDialogHideOutcome::Rejected);
        }

        host.set_print_file(None)?;
        if self.print_to_file {
            let Some(mut path) = host.choose_print_file()? else {
                return Ok(PrintDialogHideOutcome::CancelledFileSelection);
            };
            path.set_extension("prn");
            host.set_print_file(Some(&path))?;
        }

        settings.copies = self.copies;
        settings.collate = self.collate;
        settings.page_numbers = match self.page_range_selection {
            PageRangeSelection::All => String::new(),
            PageRangeSelection::Current => current_page.to_string(),
            PageRangeSelection::Numbers => self.page_numbers.clone(),
        };
        settings.print_pages_selection = self.print_pages_selection;
        settings.duplex = self.duplex_selection == 1;
        settings.print_mode = self.print_mode;
        settings.target_paper_code = self
            .paper_choices
            .get(self.selected_paper)
            .and_then(|paper| paper.code)
            .unwrap_or(0x100);
        Ok(PrintDialogHideOutcome::Committed)
    }

    /// Opens printer properties and synchronizes a supported duplex value.
    ///
    /// Reimplements Ghidra function `FUN_018b35f0` at `0x018B35F0`.
    /// Unsupported driver values leave the current selection unchanged.
    pub fn open_printer_properties(&mut self, backend: &mut impl PrinterBackend) {
        let driver_code = backend.open_properties(self.selected_printer);
        if let Some(selection) = map_driver_duplex(driver_code) {
            self.duplex_selection = selection;
        }
    }

    /// Switches printers and rebuilds the supported paper-size choices.
    ///
    /// Reimplements Ghidra function `FUN_018b4280` at `0x018B4280`.
    /// The previous paper code is restored when the new printer supports it.
    pub fn switch_printer(
        &mut self,
        printer_index: usize,
        default_paper_name: impl Into<String>,
        backend: &mut impl PrinterBackend,
    ) {
        let previous_code = self
            .paper_choices
            .get(self.selected_paper)
            .and_then(|paper| paper.code);
        let printer = backend.select_printer(printer_index);
        self.selected_printer = printer_index;
        self.printer_location = printer.location;
        self.paper_choices.clear();
        self.paper_choices
            .push(PaperChoice::default_choice(default_paper_name));
        self.paper_choices.extend(printer.papers);
        self.selected_paper = previous_code
            .and_then(|code| self.paper_index(code))
            .unwrap_or(0);
    }

    /// Requests focus for the custom page-number editor when focus is allowed.
    ///
    /// Reimplements Ghidra function `FUN_018b4560` at `0x018B4560`.
    /// This method does not parse, clear, or validate the existing text.
    pub const fn select_page_numbers(&mut self, form_can_focus: bool) {
        if form_can_focus {
            self.page_numbers_focused = true;
        }
    }

    /// Selects the custom page range when its editor receives focus.
    ///
    /// Reimplements Ghidra function `FUN_018b4540` at `0x018B4540`.
    /// Existing page text is preserved.
    pub const fn enter_page_numbers(&mut self) {
        self.page_range_selection = PageRangeSelection::Numbers;
    }

    /// Applies the checked state and repaints the copies preview.
    ///
    /// Reimplements Ghidra function `FUN_018b45c0` at `0x018B45C0`.
    pub const fn set_collate(&mut self, collate: bool) {
        self.collate = collate;
        self.paint_copies_preview();
    }

    /// Selects the collated or non-collated copies illustration.
    ///
    /// Reimplements Ghidra function `FUN_018b45d0` at `0x018B45D0`.
    /// Replacement images are used only when the dialog has the complete pair.
    pub const fn paint_copies_preview(&mut self) {
        self.copy_preview = CopyPreview {
            kind: if self.collate {
                CopyPreviewKind::Collated
            } else {
                CopyPreviewKind::NonCollated
            },
            source: if self.replacement_preview_pair {
                CopyPreviewSource::Replacement
            } else {
                CopyPreviewSource::Embedded
            },
        };
    }

    /// Enables paper selection only for a non-default print mode.
    ///
    /// Reimplements Ghidra function `FUN_018b4820` at `0x018B4820`.
    /// A non-default mode chooses paper code 9 when the current choice is the
    /// default row and the selected printer supports that paper.
    pub fn set_print_mode(&mut self, mode: usize) {
        self.print_mode = mode;
        self.paper_selection_enabled = mode != 0;
        if mode == 0 {
            self.selected_paper = 0;
        } else if self.selected_paper == 0
            && let Some(index) = self.paper_index(PREFERRED_NON_DEFAULT_PAPER_CODE)
        {
            self.selected_paper = index;
        }
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let preview = match self.copy_preview.kind {
            CopyPreviewKind::Collated => "Collated copies preview",
            CopyPreviewKind::NonCollated => "Non-collated copies preview",
        };
        column![
            text("FastReport Print"),
            text(format!("Printer location: {}", self.printer_location)),
            button("Pages").on_press(Message::PageNumbersSelected),
            checkbox("Collate", self.collate).on_toggle(Message::CollateChanged),
            text(preview),
            row![
                button("Default mode").on_press(Message::PrintModeChanged(0)),
                button("Target paper mode").on_press(Message::PrintModeChanged(1)),
            ]
            .spacing(8),
        ]
        .spacing(8)
        .width(Length::Fill)
        .into()
    }

    fn paper_index(&self, code: i32) -> Option<usize> {
        self.paper_choices
            .iter()
            .position(|paper| paper.code == Some(code))
    }
}

fn map_driver_duplex(driver_code: i32) -> Option<usize> {
    let mapped = driver_code - 1;
    match mapped.cmp(&0) {
        std::cmp::Ordering::Equal => Some(3),
        std::cmp::Ordering::Greater => usize::try_from(mapped).ok(),
        std::cmp::Ordering::Less => None,
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    struct Backend {
        duplex: i32,
        selected: Vec<usize>,
        info: PrinterInfo,
    }

    #[derive(Default)]
    struct HideHost {
        chosen_file: Option<PathBuf>,
        calls: Vec<String>,
    }

    impl PrintDialogHideHost for HideHost {
        type Error = std::convert::Infallible;

        fn choose_print_file(&mut self) -> Result<Option<PathBuf>, Self::Error> {
            self.calls.push("choose-file".to_owned());
            Ok(self.chosen_file.clone())
        }

        fn set_print_file(&mut self, path: Option<&Path>) -> Result<(), Self::Error> {
            self.calls.push(path.map_or_else(
                || "clear-file".to_owned(),
                |path| format!("set-file:{}", path.display()),
            ));
            Ok(())
        }

        fn restore_printer(&mut self, printer_index: usize) -> Result<(), Self::Error> {
            self.calls.push(format!("restore-printer:{printer_index}"));
            Ok(())
        }
    }

    impl PrinterBackend for Backend {
        fn open_properties(&mut self, _printer_index: usize) -> i32 {
            self.duplex
        }

        fn select_printer(&mut self, printer_index: usize) -> PrinterInfo {
            self.selected.push(printer_index);
            self.info.clone()
        }
    }

    fn dialog() -> PrintDialog {
        let mut dialog = PrintDialog::new(vec!["A".to_owned(), "B".to_owned()], 0, "Default");
        dialog
            .paper_choices
            .extend([PaperChoice::paper(9, "A4"), PaperChoice::paper(5, "Legal")]);
        dialog
    }

    fn backend() -> Backend {
        Backend {
            duplex: 1,
            selected: Vec::new(),
            info: PrinterInfo {
                location: "Office".to_owned(),
                papers: vec![PaperChoice::paper(5, "Legal"), PaperChoice::paper(9, "A4")],
            },
        }
    }

    #[test]
    fn printer_properties_maps_supported_duplex_and_ignores_unsupported_value() {
        let mut dialog = dialog();
        let mut backend = backend();
        dialog.open_printer_properties(&mut backend);
        assert_eq!(dialog.duplex_selection, 3);

        backend.duplex = 0;
        dialog.open_printer_properties(&mut backend);
        assert_eq!(dialog.duplex_selection, 3);
    }

    #[test]
    fn printer_switch_restores_supported_paper_code_and_updates_location() {
        let mut dialog = dialog();
        dialog.selected_paper = 2;
        let mut backend = backend();
        dialog.switch_printer(1, "Printer default", &mut backend);

        assert_eq!(backend.selected, vec![1]);
        assert_eq!(dialog.selected_printer, 1);
        assert_eq!(dialog.printer_location, "Office");
        assert_eq!(dialog.paper_choices[0].code, None);
        assert_eq!(dialog.paper_choices[dialog.selected_paper].code, Some(5));
    }

    #[test]
    fn page_number_click_focuses_only_when_allowed_and_preserves_text() {
        let mut dialog = dialog();
        dialog.page_numbers = "1,3,5-12".to_owned();
        dialog.select_page_numbers(false);
        assert!(!dialog.page_numbers_focused);
        dialog.select_page_numbers(true);
        assert!(dialog.page_numbers_focused);
        assert_eq!(dialog.page_numbers, "1,3,5-12");
    }

    #[test]
    fn collate_click_repaints_with_the_matching_complete_image_pair() {
        let mut dialog = dialog();
        dialog.replacement_preview_pair = true;
        dialog.set_collate(false);
        assert_eq!(dialog.copy_preview.kind, CopyPreviewKind::NonCollated);
        assert_eq!(dialog.copy_preview.source, CopyPreviewSource::Replacement);

        dialog.replacement_preview_pair = false;
        dialog.paint_copies_preview();
        assert_eq!(dialog.copy_preview.source, CopyPreviewSource::Embedded);
    }

    #[test]
    fn print_mode_controls_paper_selection_and_prefers_supported_code_nine() {
        let mut dialog = dialog();
        dialog.set_print_mode(2);
        assert!(dialog.paper_selection_enabled);
        assert_eq!(dialog.paper_choices[dialog.selected_paper].code, Some(9));

        dialog.set_print_mode(0);
        assert!(!dialog.paper_selection_enabled);
        assert_eq!(dialog.selected_paper, 0);
    }

    #[test]
    fn form_create_initializes_inputs_printer_preview_and_layout() {
        let mut dialog = dialog();
        dialog.collate = false;
        dialog.replacement_preview_pair = true;
        let mut backend = backend();

        dialog.form_create(
            vec!["Office A".to_owned(), "Office B".to_owned()],
            1,
            "Printer default",
            true,
            &mut backend,
        );

        assert!(dialog.page_numbers_key_filter_connected);
        assert!(dialog.copies_digits_only);
        assert_eq!(dialog.printer_names, ["Office A", "Office B"]);
        assert_eq!(backend.selected, [1]);
        assert_eq!(dialog.selected_printer, 1);
        assert_eq!(dialog.original_printer, 1);
        assert_eq!(dialog.printer_location, "Office");
        assert_eq!(dialog.paper_choices[0].code, None);
        assert_eq!(dialog.selected_paper, 0);
        assert_eq!(dialog.copy_preview.kind, CopyPreviewKind::NonCollated);
        assert_eq!(dialog.copy_preview.source, CopyPreviewSource::Replacement);
        assert!(dialog.children_mirrored);
    }

    #[test]
    fn form_show_restores_saved_controls_and_supported_target_paper() {
        let mut dialog = dialog();
        let settings = SavedPrintSettings {
            copies: 4,
            collate: false,
            page_numbers: "1,3,5-7".to_owned(),
            print_mode: 1,
            target_paper_code: 5,
            print_pages_selection: 2,
            duplex: true,
        };

        dialog.form_show(&settings, 1);

        assert_eq!(dialog.copies, 4);
        assert!(!dialog.collate);
        assert_eq!(dialog.page_numbers, "1,3,5-7");
        assert_eq!(dialog.page_range_selection, PageRangeSelection::Numbers);
        assert_eq!(dialog.print_pages_selection, 2);
        assert_eq!(dialog.duplex_selection, 1);
        assert_eq!(dialog.order_selection, 1);
        assert_eq!(dialog.print_mode, 1);
        assert!(dialog.paper_selection_enabled);
        assert_eq!(dialog.paper_choices[dialog.selected_paper].code, Some(5));
    }

    #[test]
    fn form_show_keeps_mode_default_when_saved_paper_is_unavailable() {
        let mut dialog = dialog();
        let settings = SavedPrintSettings {
            copies: 1,
            collate: true,
            page_numbers: String::new(),
            print_mode: 1,
            target_paper_code: 999,
            print_pages_selection: 0,
            duplex: false,
        };

        dialog.form_show(&settings, 0);

        assert_eq!(dialog.page_range_selection, PageRangeSelection::All);
        assert_eq!(dialog.paper_choices[dialog.selected_paper].code, Some(9));
    }

    #[test]
    fn form_hide_selects_print_file_and_commits_controls() {
        let mut dialog = dialog();
        dialog.copies = 3;
        dialog.collate = false;
        dialog.page_range_selection = PageRangeSelection::Current;
        dialog.print_pages_selection = 2;
        dialog.duplex_selection = 1;
        dialog.print_mode = 2;
        dialog.selected_paper = 2;
        dialog.print_to_file = true;
        let mut settings = SavedPrintSettings {
            copies: 1,
            collate: true,
            page_numbers: "old".to_owned(),
            print_mode: 0,
            target_paper_code: 0x100,
            print_pages_selection: 0,
            duplex: false,
        };
        let mut host = HideHost {
            chosen_file: Some(PathBuf::from("report.tmp")),
            ..HideHost::default()
        };

        assert_eq!(
            dialog.form_hide(true, 7, &mut settings, &mut host),
            Ok(PrintDialogHideOutcome::Committed)
        );
        assert_eq!(
            host.calls,
            ["clear-file", "choose-file", "set-file:report.prn"]
        );
        assert_eq!(settings.copies, 3);
        assert!(!settings.collate);
        assert_eq!(settings.page_numbers, "7");
        assert_eq!(settings.print_pages_selection, 2);
        assert!(settings.duplex);
        assert_eq!(settings.print_mode, 2);
        assert_eq!(settings.target_paper_code, 5);
    }

    #[test]
    fn form_hide_cancelled_file_picker_skips_saved_setting_writes() {
        let mut dialog = dialog();
        dialog.print_to_file = true;
        let mut settings = SavedPrintSettings {
            copies: 9,
            collate: false,
            page_numbers: "unchanged".to_owned(),
            print_mode: 2,
            target_paper_code: 5,
            print_pages_selection: 1,
            duplex: true,
        };
        let original = settings.clone();
        let mut host = HideHost::default();

        assert_eq!(
            dialog.form_hide(true, 4, &mut settings, &mut host),
            Ok(PrintDialogHideOutcome::CancelledFileSelection)
        );
        assert_eq!(settings, original);
        assert_eq!(host.calls, ["clear-file", "choose-file"]);
    }

    #[test]
    fn form_hide_rejection_restores_original_printer_only() {
        let dialog = PrintDialog::new(vec!["A".to_owned()], 3, "Default");
        let mut settings = SavedPrintSettings {
            copies: 1,
            collate: true,
            page_numbers: String::new(),
            print_mode: 0,
            target_paper_code: 0x100,
            print_pages_selection: 0,
            duplex: false,
        };
        let original = settings.clone();
        let mut host = HideHost::default();

        assert_eq!(
            dialog.form_hide(false, 1, &mut settings, &mut host),
            Ok(PrintDialogHideOutcome::Rejected)
        );
        assert_eq!(settings, original);
        assert_eq!(host.calls, ["restore-printer:3"]);
    }

    #[test]
    fn printer_row_preserves_recovered_icon_and_text_layout() {
        let dialog = dialog();

        assert_eq!(
            dialog.printer_row(1),
            Some(PrinterRowPresentation {
                label: "B",
                icon_index: 2,
                fill_background: true,
                icon_offset: [2, 0],
                text_offset_after_icon: [8, 1],
            })
        );
    }

    #[test]
    fn printer_row_returns_none_for_invalid_index() {
        assert_eq!(dialog().printer_row(2), None);
    }

    #[test]
    fn page_number_enter_selects_custom_range_and_preserves_text() {
        let mut dialog = dialog();
        dialog.page_numbers = "2,4-6".to_owned();

        dialog.enter_page_numbers();

        assert_eq!(dialog.page_range_selection, PageRangeSelection::Numbers);
        assert_eq!(dialog.page_numbers, "2,4-6");
    }

    #[test]
    fn f1_requests_print_dialog_context_help() {
        let mut dialog = dialog();

        assert!(dialog.handle_key(PrintDialogKey::F1));
        assert!(dialog.context_help_requested);
    }

    #[test]
    fn unrelated_key_is_a_no_op() {
        let mut dialog = dialog();
        dialog.context_help_requested = true;

        assert!(!dialog.handle_key(PrintDialogKey::Other));
        assert!(dialog.context_help_requested);
    }

    #[test]
    fn print_mode_row_uses_row_icon_and_recovered_layout() {
        assert_eq!(
            PrintDialog::print_mode_row(2, "Fit to paper"),
            PrintModeRowPresentation {
                label: "Fit to paper",
                icon_index: 2,
                fill_background: true,
                icon_offset: [2, 1],
                text_offset: [74, 10],
            }
        );
    }
}
