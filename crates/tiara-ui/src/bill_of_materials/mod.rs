//! Bill of Materials generation and iced window state.
//!
//! `iced` supplies the window controls and message model. The Rust standard
//! library supplies stable sorting and the recovered non-atomic text-file
//! output. `FastReport` and the application help system remain host adapters
//! because their state and presentation services are not report file formats.

use std::cmp::Ordering;
use std::collections::BTreeMap;
use std::fmt;
use std::fs::File;
use std::io::{self, BufWriter, Write};
use std::path::{Path, PathBuf};

use iced::widget::{Row, button, checkbox, column, container, pick_list, row, scrollable, text};
use iced::{Alignment, Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "Bill of Materials";
pub const SCREENSHOT: &str = "screenshots/Bill_of_Materials_Window.png";
pub const FORM_RESOURCE: &str = "LOM";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01983fe0");
pub const HELP_CONTEXT: u32 = 1013;

const STATUS: &str = "Report settings";
const EMPTY_GRID_ROW_COUNT: usize = 2;

#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord)]
pub enum ReportField {
    Label,
    Value,
    Footprint,
    Parameter1,
    Parameter2,
    Parameter3,
    Parameter4,
}

impl ReportField {
    pub const ALL: [Self; 7] = [
        Self::Label,
        Self::Value,
        Self::Footprint,
        Self::Parameter1,
        Self::Parameter2,
        Self::Parameter3,
        Self::Parameter4,
    ];

    const fn index(self) -> usize {
        match self {
            Self::Label => 0,
            Self::Value => 1,
            Self::Footprint => 2,
            Self::Parameter1 => 3,
            Self::Parameter2 => 4,
            Self::Parameter3 => 5,
            Self::Parameter4 => 6,
        }
    }

    const fn heading(self) -> &'static str {
        match self {
            Self::Label => "Label",
            Self::Value => "Value",
            Self::Footprint => "Footprint",
            Self::Parameter1 => "Parameter 1",
            Self::Parameter2 => "Parameter 2",
            Self::Parameter3 => "Parameter 3",
            Self::Parameter4 => "Parameter 4",
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum OrderBy {
    #[default]
    Label,
    Value,
    Parameter1,
    Parameter2,
    Parameter3,
    Parameter4,
}

impl OrderBy {
    const ALL: [Self; 6] = [
        Self::Label,
        Self::Value,
        Self::Parameter1,
        Self::Parameter2,
        Self::Parameter3,
        Self::Parameter4,
    ];

    const fn field(self) -> ReportField {
        match self {
            Self::Label => ReportField::Label,
            Self::Value => ReportField::Value,
            Self::Parameter1 => ReportField::Parameter1,
            Self::Parameter2 => ReportField::Parameter2,
            Self::Parameter3 => ReportField::Parameter3,
            Self::Parameter4 => ReportField::Parameter4,
        }
    }
}

impl fmt::Display for OrderBy {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(self.field().heading())
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ComponentRecord {
    pub eligible: bool,
    pub fields: [String; 7],
}

impl ComponentRecord {
    fn field(&self, field: ReportField) -> &str {
        &self.fields[field.index()]
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ReportSettings {
    pub single_component_per_line: bool,
    pub eliminate_extra_commas: bool,
    pub included_fields: [bool; 7],
    pub order_by: OrderBy,
}

impl Default for ReportSettings {
    fn default() -> Self {
        Self {
            single_component_per_line: true,
            eliminate_extra_commas: true,
            included_fields: [true; 7],
            order_by: OrderBy::Label,
        }
    }
}

impl ReportSettings {
    const fn includes(&self, field: ReportField) -> bool {
        self.included_fields[field.index()]
    }
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct ReportGrid {
    pub headers: Vec<String>,
    pub rows: Vec<Vec<String>>,
}

impl ReportGrid {
    #[must_use]
    pub fn row_count(&self) -> usize {
        (self.rows.len() + 1).max(EMPTY_GRID_ROW_COUNT)
    }

    #[must_use]
    pub fn column_count(&self) -> usize {
        self.headers.len()
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ModalResult {
    Cancel,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ReportState {
    Ready,
    NeedsPreparation,
    Busy,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ReportPresentation {
    Presented,
    Deferred,
}

pub trait ReportPresenter {
    type Error;

    /// Prepares the current report data.
    ///
    /// # Errors
    ///
    /// Returns a host report error when preparation fails.
    fn prepare(&mut self) -> Result<(), Self::Error>;

    /// Shows the prepared report.
    ///
    /// # Errors
    ///
    /// Returns a host report error when presentation fails.
    fn present(&mut self) -> Result<(), Self::Error>;

    /// Adds one presentation request to the host report queue.
    ///
    /// # Errors
    ///
    /// Returns a host report error when the request cannot be queued.
    fn defer(&mut self) -> Result<(), Self::Error>;
}

/// Ports Ghidra function `FUN_01976a20` at `0x01976A20`.
///
/// The adapter prepares a report only when its current state requires it. A
/// busy report receives a deferred job instead of a second direct show call.
///
/// # Errors
///
/// Returns the first preparation, presentation, or queue error from the host.
pub fn show_report<P>(state: ReportState, presenter: &mut P) -> Result<ReportPresentation, P::Error>
where
    P: ReportPresenter,
{
    match state {
        ReportState::Busy => {
            presenter.defer()?;
            Ok(ReportPresentation::Deferred)
        }
        ReportState::NeedsPreparation => {
            presenter.prepare()?;
            presenter.present()?;
            Ok(ReportPresentation::Presented)
        }
        ReportState::Ready => {
            presenter.present()?;
            Ok(ReportPresentation::Presented)
        }
    }
}

pub trait HelpAdapter {
    fn resolve_localized_file(&mut self, base_help_file: &Path) -> PathBuf;
    fn open_context(&mut self, help_file: &Path, context: u32);
}

/// Ports Ghidra function `FUN_01984930` at `0x01984930`.
///
/// The shared resolver selects an installed localized file or returns the base
/// `TINA.CHM` path. The shared help service then opens context 1013.
pub fn open_bill_of_materials_help(install_folder: &Path, help: &mut impl HelpAdapter) {
    let base_help_file = install_folder.join("TINA.CHM");
    let help_file = help.resolve_localized_file(&base_help_file);
    help.open_context(&help_file, HELP_CONTEXT);
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct HelpRequest {
    pub base_help_file: PathBuf,
    pub context: u32,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ReportRequest {
    pub state: ReportState,
    pub grid: ReportGrid,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    SingleComponentChanged(bool),
    EliminateExtraCommasChanged(bool),
    IncludeFieldChanged(ReportField, bool),
    OrderByChanged(OrderBy),
    CreatePressed,
    SavePressed,
    SavePathSelected(Option<PathBuf>),
    PrintPressed,
    ReportCompleted(Result<(), String>),
    ClosePressed,
    HelpPressed,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Window {
    records: Vec<ComponentRecord>,
    settings: ReportSettings,
    generated_rows: Vec<String>,
    grid: ReportGrid,
    save_enabled: bool,
    print_enabled: bool,
    modal_result: Option<ModalResult>,
    install_folder: PathBuf,
    save_dialog_requested: bool,
    save_request: Option<PathBuf>,
    report_request: Option<ReportRequest>,
    help_request: Option<HelpRequest>,
    last_error: Option<String>,
}

impl Default for Window {
    fn default() -> Self {
        Self::new(Vec::new(), PathBuf::new())
    }
}

impl Window {
    #[must_use]
    pub fn new(records: Vec<ComponentRecord>, install_folder: PathBuf) -> Self {
        let mut window = Self {
            records,
            settings: ReportSettings::default(),
            generated_rows: Vec::new(),
            grid: ReportGrid::default(),
            save_enabled: false,
            print_enabled: false,
            modal_result: None,
            install_folder,
            save_dialog_requested: false,
            save_request: None,
            report_request: None,
            help_request: None,
            last_error: None,
        };
        window.rebuild_report();
        window
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::SingleComponentChanged(value) => {
                self.settings.single_component_per_line = value;
            }
            Message::EliminateExtraCommasChanged(value) => {
                self.settings.eliminate_extra_commas = value;
            }
            Message::IncludeFieldChanged(field, value) => {
                self.settings.included_fields[field.index()] = value;
            }
            Message::OrderByChanged(value) => self.settings.order_by = value,
            Message::CreatePressed => self.rebuild_report(),
            Message::SavePressed => {
                self.save_dialog_requested = !self.generated_rows.is_empty();
            }
            Message::SavePathSelected(path) => {
                self.save_dialog_requested = false;
                self.save_request = path.filter(|_| !self.generated_rows.is_empty());
            }
            Message::PrintPressed => self.request_report_preview(),
            Message::ReportCompleted(result) => match result {
                Ok(()) => self.print_enabled = true,
                Err(error) => self.last_error = Some(error),
            },
            Message::ClosePressed => self.close_modal(),
            Message::HelpPressed => {
                self.help_request = Some(HelpRequest {
                    base_help_file: self.install_folder.join("TINA.CHM"),
                    context: HELP_CONTEXT,
                });
            }
        }
    }

    /// Ports Ghidra function `FUN_01983650` at `0x01983650`.
    ///
    /// The method regenerates internal rows, replaces the visible grid, and
    /// enables Save and Print only when the result is not empty. It preserves
    /// the recovered Parameter 4 grid limitation: the selected header exists,
    /// but this handler does not copy that final field to visible data cells.
    pub fn rebuild_report(&mut self) {
        self.generated_rows = generate_report_rows(&self.records, &self.settings);
        self.grid = build_report_grid(&self.generated_rows, &self.settings);
        let has_rows = !self.generated_rows.is_empty();
        self.save_enabled = has_rows;
        self.print_enabled = has_rows;
        self.save_request = None;
        self.report_request = None;
        self.last_error = None;
    }

    /// Ports Ghidra function `FUN_01984650` at `0x01984650`.
    ///
    /// Empty report data does not create a file. Otherwise, this creates or
    /// truncates the target and writes accumulated header prefixes followed by
    /// numbered internal rows. The write is intentionally not atomic.
    ///
    /// # Errors
    ///
    /// Returns the first file creation, write, or flush error. Bytes written
    /// before an error remain in the target.
    pub fn save_report(&self, path: &Path) -> io::Result<()> {
        if self.generated_rows.is_empty() {
            return Ok(());
        }

        let file = File::create(path)?;
        let mut writer = BufWriter::new(file);
        write_report_text(&mut writer, &self.grid.headers, &self.generated_rows)?;
        writer.flush()
    }

    /// Ports Ghidra function `FUN_019848e0` at `0x019848E0`.
    ///
    /// A normal request disables Print until the host reports success. An
    /// error leaves the button disabled because the recovered final enable
    /// operation is not reached on that path.
    fn request_report_preview(&mut self) {
        if !self.print_enabled {
            return;
        }
        self.print_enabled = false;
        self.report_request = Some(ReportRequest {
            state: ReportState::NeedsPreparation,
            grid: self.grid.clone(),
        });
    }

    /// Ports Ghidra function `FUN_01983570` at `0x01983570`.
    ///
    /// The recovered LOM window is modal. Close therefore returns the cancel
    /// result without changing the circuit or rebuilding the report.
    const fn close_modal(&mut self) {
        self.modal_result = Some(ModalResult::Cancel);
    }

    #[must_use]
    pub const fn settings(&self) -> &ReportSettings {
        &self.settings
    }

    #[must_use]
    pub fn generated_rows(&self) -> &[String] {
        &self.generated_rows
    }

    #[must_use]
    pub const fn grid(&self) -> &ReportGrid {
        &self.grid
    }

    #[must_use]
    pub const fn save_enabled(&self) -> bool {
        self.save_enabled
    }

    #[must_use]
    pub const fn print_enabled(&self) -> bool {
        self.print_enabled
    }

    #[must_use]
    pub const fn modal_result(&self) -> Option<ModalResult> {
        self.modal_result
    }

    #[must_use]
    pub const fn save_dialog_requested(&self) -> bool {
        self.save_dialog_requested
    }

    pub const fn take_save_request(&mut self) -> Option<PathBuf> {
        self.save_request.take()
    }

    pub const fn take_report_request(&mut self) -> Option<ReportRequest> {
        self.report_request.take()
    }

    pub const fn take_help_request(&mut self) -> Option<HelpRequest> {
        self.help_request.take()
    }

    #[must_use]
    pub fn last_error(&self) -> Option<&str> {
        self.last_error.as_deref()
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered form-create connection.
    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        if self.modal_result.is_some() {
            return text("Bill of Materials closed").into();
        }

        let mut include_fields = column![text("Include in Report")].spacing(4);
        for field in ReportField::ALL {
            include_fields = include_fields.push(
                checkbox(field.heading(), self.settings.includes(field))
                    .on_toggle(move |value| Message::IncludeFieldChanged(field, value)),
            );
        }

        let settings = column![
            checkbox(
                "Single component per line",
                self.settings.single_component_per_line,
            )
            .on_toggle(Message::SingleComponentChanged),
            checkbox(
                "Eliminate extra commas",
                self.settings.eliminate_extra_commas,
            )
            .on_toggle(Message::EliminateExtraCommasChanged),
            include_fields,
            row![
                text("Group and Order By"),
                pick_list(
                    OrderBy::ALL,
                    Some(self.settings.order_by),
                    Message::OrderByChanged,
                ),
            ]
            .spacing(8)
            .align_y(Alignment::Center),
        ]
        .spacing(8)
        .width(Length::FillPortion(1));

        let mut report = column![report_row(&self.grid.headers)].spacing(4);
        for grid_row in &self.grid.rows {
            report = report.push(report_row(grid_row));
        }

        let save_button = if self.save_enabled {
            button("Save...").on_press(Message::SavePressed)
        } else {
            button("Save...")
        };
        let print_button = if self.print_enabled {
            button("Print...").on_press(Message::PrintPressed)
        } else {
            button("Print...")
        };
        let controls = row![
            button("Create").on_press(Message::CreatePressed),
            print_button,
            save_button,
            button("Close").on_press(Message::ClosePressed),
            button("Help").on_press(Message::HelpPressed),
        ]
        .spacing(8);

        let mut content = column![
            row![settings, scrollable(report).width(Length::FillPortion(3))]
                .spacing(16)
                .height(Length::Fill),
            controls,
        ]
        .spacing(12);
        if let Some(error) = &self.last_error {
            content = content.push(text(error));
        }

        let body: Element<'_, Message> = container(content)
            .padding(18)
            .width(Length::Fill)
            .height(Length::Fill)
            .into();
        window_shell::frame(
            TITLE,
            window_shell::empty_menu(),
            Row::new().into(),
            body,
            STATUS,
        )
    }
}

/// Ports Ghidra function `FUN_01983580` at `0x01983580`.
///
/// The first tab-separated field is returned and removed with its separator.
/// Without a separator, the complete remaining string is returned and cleared.
pub fn take_first_tab_field(source: &mut String) -> String {
    let Some(separator) = source.find('\t') else {
        return std::mem::take(source);
    };
    let remaining = source.split_off(separator + 1);
    let mut field = std::mem::replace(source, remaining);
    field.truncate(separator);
    field
}

/// Ports Ghidra function `FUN_019a63f0` at `0x019A63F0`.
///
/// Eligible components become sorted tab-separated rows. Single mode emits
/// one quantity-one row per component. Grouped mode combines equal selected
/// fields and prefixes each group with its count.
#[must_use]
pub fn generate_report_rows(records: &[ComponentRecord], settings: &ReportSettings) -> Vec<String> {
    let mut prepared = records
        .iter()
        .filter(|record| record.eligible)
        .map(|record| {
            let selected_fields: Vec<String> = ReportField::ALL
                .into_iter()
                .filter(|field| settings.includes(*field))
                .map(|field| cleaned_field(record.field(field), settings.eliminate_extra_commas))
                .collect();
            PreparedRow {
                sort_key: record.field(settings.order_by.field()).to_owned(),
                body: selected_fields.join("\t"),
            }
        })
        .collect::<Vec<_>>();

    prepared.sort_by(compare_prepared_rows);
    if settings.single_component_per_line {
        return prepared
            .into_iter()
            .map(|row| format!("1\t{}", row.body))
            .collect();
    }

    let mut groups = BTreeMap::<String, (String, usize)>::new();
    for row in prepared {
        let group = groups.entry(row.body).or_insert((row.sort_key, 0));
        group.1 += 1;
    }
    let mut groups = groups
        .into_iter()
        .map(|(body, (sort_key, quantity))| GroupedRow {
            sort_key,
            body,
            quantity,
        })
        .collect::<Vec<_>>();
    groups.sort_by(|left, right| {
        left.sort_key
            .cmp(&right.sort_key)
            .then_with(|| left.body.cmp(&right.body))
    });
    groups
        .into_iter()
        .map(|row| format!("{}\t{}", row.quantity, row.body))
        .collect()
}

#[derive(Debug)]
struct PreparedRow {
    sort_key: String,
    body: String,
}

#[derive(Debug)]
struct GroupedRow {
    sort_key: String,
    body: String,
    quantity: usize,
}

fn compare_prepared_rows(left: &PreparedRow, right: &PreparedRow) -> Ordering {
    left.sort_key
        .cmp(&right.sort_key)
        .then_with(|| left.body.cmp(&right.body))
}

fn cleaned_field(value: &str, eliminate_extra_commas: bool) -> String {
    if eliminate_extra_commas
        && value
            .chars()
            .all(|character| matches!(character, ' ' | ','))
    {
        String::new()
    } else {
        value.to_owned()
    }
}

fn build_report_grid(rows: &[String], settings: &ReportSettings) -> ReportGrid {
    let mut headers = vec!["#".to_owned(), "Quantity".to_owned()];
    headers.extend(
        ReportField::ALL
            .into_iter()
            .filter(|field| settings.includes(*field))
            .map(|field| field.heading().to_owned()),
    );

    let visible_rows = rows
        .iter()
        .enumerate()
        .map(|(row_index, source)| {
            let mut source = source.clone();
            let mut cells = vec![String::new(); headers.len()];
            cells[0] = (row_index + 1).to_string();
            cells[1] = take_first_tab_field(&mut source);
            let mut column_index = 2;
            for field in ReportField::ALL[..6].iter().copied() {
                if settings.includes(field) {
                    cells[column_index] = take_first_tab_field(&mut source);
                    column_index += 1;
                }
            }
            cells
        })
        .collect();
    ReportGrid {
        headers,
        rows: visible_rows,
    }
}

fn write_report_text(
    writer: &mut impl Write,
    headers: &[String],
    generated_rows: &[String],
) -> io::Result<()> {
    let mut prefix = String::new();
    for header in headers {
        prefix.push_str(header);
        prefix.push('\t');
        write_line(writer, &prefix)?;
    }
    for (index, generated_row) in generated_rows.iter().enumerate() {
        write_line(writer, &format!("{}.\t{generated_row}", index + 1))?;
    }
    Ok(())
}

fn write_line(writer: &mut impl Write, line: &str) -> io::Result<()> {
    writer.write_all(line.as_bytes())?;
    writer.write_all(b"\r\n")
}

fn report_row(cells: &[String]) -> Row<'_, Message> {
    cells
        .iter()
        .fold(Row::new().spacing(8), |report_row, cell| {
            report_row.push(text(cell).width(Length::FillPortion(1)))
        })
}

#[cfg(test)]
mod tests {
    use super::*;

    fn record(label: &str, value: &str, footprint: &str, parameters: [&str; 4]) -> ComponentRecord {
        ComponentRecord {
            eligible: true,
            fields: [
                label.to_owned(),
                value.to_owned(),
                footprint.to_owned(),
                parameters[0].to_owned(),
                parameters[1].to_owned(),
                parameters[2].to_owned(),
                parameters[3].to_owned(),
            ],
        }
    }

    #[test]
    fn tab_field_parser_consumes_separator_or_complete_remainder() {
        let mut source = "one\ttwo\tthree".to_owned();

        assert_eq!(take_first_tab_field(&mut source), "one");
        assert_eq!(source, "two\tthree");
        assert_eq!(take_first_tab_field(&mut source), "two");
        assert_eq!(take_first_tab_field(&mut source), "three");
        assert!(source.is_empty());
    }

    #[test]
    fn generator_sorts_single_rows_and_cleans_only_space_comma_fields() {
        let records = [
            record("R2", " , , ", "0603", ["x,y", "", "", ""]),
            record("R1", "10k", "0603", ["", "", "", ""]),
        ];
        let settings = ReportSettings {
            included_fields: [true, true, false, true, false, false, false],
            ..ReportSettings::default()
        };

        assert_eq!(
            generate_report_rows(&records, &settings),
            ["1\tR1\t10k\t", "1\tR2\t\tx,y"]
        );
    }

    #[test]
    fn grouped_generator_counts_equal_selected_rows_and_skips_ineligible_records() {
        let mut skipped = record("R1", "10k", "0603", ["", "", "", ""]);
        skipped.eligible = false;
        let records = [
            record("R1", "10k", "0603", ["", "", "", ""]),
            record("R1", "10k", "0603", ["", "", "", ""]),
            record("C1", "1u", "0603", ["", "", "", ""]),
            skipped,
        ];
        let settings = ReportSettings {
            single_component_per_line: false,
            included_fields: [true, true, false, false, false, false, false],
            ..ReportSettings::default()
        };

        assert_eq!(
            generate_report_rows(&records, &settings),
            ["1\tC1\t1u", "2\tR1\t10k"]
        );
    }

    #[test]
    fn rebuild_keeps_parameter_four_internal_but_leaves_visible_cell_empty() {
        let mut window = Window::new(
            vec![record("U1", "MCU", "QFN", ["A", "B", "C", "D"])],
            PathBuf::from("install"),
        );
        window.update(Message::CreatePressed);

        assert_eq!(window.generated_rows()[0], "1\tU1\tMCU\tQFN\tA\tB\tC\tD");
        assert_eq!(
            window.grid().headers.last().map(String::as_str),
            Some("Parameter 4")
        );
        assert_eq!(window.grid().rows[0].last().map(String::as_str), Some(""));
        assert_eq!(window.grid().row_count(), 2);
        assert!(window.save_enabled());
        assert!(window.print_enabled());
    }

    #[test]
    fn empty_rebuild_keeps_two_grid_rows_and_disables_output_actions() {
        let window = Window::default();

        assert_eq!(window.grid().row_count(), 2);
        assert!(window.generated_rows().is_empty());
        assert!(!window.save_enabled());
        assert!(!window.print_enabled());
    }

    #[test]
    fn save_text_uses_accumulated_headers_and_numbered_internal_rows() -> io::Result<()> {
        let headers = vec!["#".to_owned(), "Quantity".to_owned(), "Label".to_owned()];
        let rows = vec!["2\tR1".to_owned()];
        let mut output = Vec::new();

        write_report_text(&mut output, &headers, &rows)?;

        assert_eq!(
            String::from_utf8(output).map_err(io::Error::other)?,
            "#\t\r\n#\tQuantity\t\r\n#\tQuantity\tLabel\t\r\n1.\t2\tR1\r\n"
        );
        Ok(())
    }

    #[test]
    fn save_and_dialog_cancellation_are_noops_for_empty_or_missing_paths() {
        let mut window = Window::default();
        window.update(Message::SavePressed);
        window.update(Message::SavePathSelected(None));

        assert!(!window.save_dialog_requested());
        assert!(window.take_save_request().is_none());
    }

    #[test]
    fn print_wrapper_reenables_only_after_normal_report_return() {
        let mut window = Window::new(
            vec![record("R1", "10k", "0603", ["", "", "", ""])],
            PathBuf::new(),
        );
        window.update(Message::PrintPressed);
        assert!(!window.print_enabled());
        assert!(window.take_report_request().is_some());

        window.update(Message::ReportCompleted(Err("report failed".to_owned())));
        assert!(!window.print_enabled());
        assert_eq!(window.last_error(), Some("report failed"));

        window.update(Message::CreatePressed);
        window.update(Message::PrintPressed);
        window.update(Message::ReportCompleted(Ok(())));
        assert!(window.print_enabled());
    }

    #[derive(Default)]
    struct Presenter {
        calls: Vec<&'static str>,
    }

    impl ReportPresenter for Presenter {
        type Error = &'static str;

        fn prepare(&mut self) -> Result<(), Self::Error> {
            self.calls.push("prepare");
            Ok(())
        }

        fn present(&mut self) -> Result<(), Self::Error> {
            self.calls.push("present");
            Ok(())
        }

        fn defer(&mut self) -> Result<(), Self::Error> {
            self.calls.push("defer");
            Ok(())
        }
    }

    #[test]
    fn show_report_prepares_when_needed_and_defers_while_busy() -> Result<(), &'static str> {
        let mut presenter = Presenter::default();
        assert_eq!(
            show_report(ReportState::NeedsPreparation, &mut presenter)?,
            ReportPresentation::Presented
        );
        assert_eq!(presenter.calls, ["prepare", "present"]);

        presenter.calls.clear();
        assert_eq!(
            show_report(ReportState::Busy, &mut presenter)?,
            ReportPresentation::Deferred
        );
        assert_eq!(presenter.calls, ["defer"]);
        Ok(())
    }

    #[derive(Default)]
    struct Help {
        resolved: Option<PathBuf>,
        opened: Option<(PathBuf, u32)>,
    }

    impl HelpAdapter for Help {
        fn resolve_localized_file(&mut self, base_help_file: &Path) -> PathBuf {
            self.resolved = Some(base_help_file.to_owned());
            base_help_file.with_file_name("TINA_DE.CHM")
        }

        fn open_context(&mut self, help_file: &Path, context: u32) {
            self.opened = Some((help_file.to_owned(), context));
        }
    }

    #[test]
    fn help_uses_localized_resolver_and_fixed_lom_context() {
        let mut help = Help::default();
        open_bill_of_materials_help(Path::new("install"), &mut help);

        assert_eq!(help.resolved, Some(PathBuf::from("install/TINA.CHM")));
        assert_eq!(
            help.opened,
            Some((PathBuf::from("install/TINA_DE.CHM"), HELP_CONTEXT))
        );
    }

    #[test]
    fn close_sets_modal_cancel_without_changing_report() {
        let mut window = Window::new(
            vec![record("R1", "10k", "0603", ["", "", "", ""])],
            PathBuf::new(),
        );
        let rows = window.generated_rows().to_vec();

        window.update(Message::ClosePressed);

        assert_eq!(window.modal_result(), Some(ModalResult::Cancel));
        assert_eq!(window.generated_rows(), rows);
    }
}
