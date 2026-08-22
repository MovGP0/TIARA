use iced::widget::{button, checkbox, column, row, text};
use iced::{Element, Length, Task};

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

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CopyPreview {
    pub kind: CopyPreviewKind,
    pub source: CopyPreviewSource,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    PageNumbersSelected,
    CollateChanged(bool),
    PrintModeChanged(usize),
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
    pub page_numbers_focused: bool,
    pub collate: bool,
    pub copy_preview: CopyPreview,
    pub replacement_preview_pair: bool,
    pub print_mode: usize,
    pub paper_selection_enabled: bool,
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
            page_numbers_focused: false,
            collate: true,
            copy_preview: CopyPreview {
                kind: CopyPreviewKind::Collated,
                source: CopyPreviewSource::Embedded,
            },
            replacement_preview_pair: false,
            print_mode: 0,
            paper_selection_enabled: false,
        }
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::PageNumbersSelected => {
                self.select_page_numbers(true);
            }
            Message::CollateChanged(collate) => self.set_collate(collate),
            Message::PrintModeChanged(mode) => self.set_print_mode(mode),
        }
        Task::none()
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
}
