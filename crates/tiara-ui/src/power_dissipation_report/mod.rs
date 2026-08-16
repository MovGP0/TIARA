use std::fs::File;
use std::io::{BufWriter, Write};
use std::path::PathBuf;
use std::{array, cmp::Ordering};

use iced::alignment::Horizontal;
use iced::font::Weight;
use iced::widget::{button, checkbox, column, row, scrollable, text};
use iced::{Alignment, Color, Element, Font, Length, Task};
use rfd::AsyncFileDialog;
use tiara_core::numeric_format::{
    EngineeringScale, PrefixStyle, format_display_value, format_engineering_with_prefix,
};

pub const TITLE: &str = "Power dissipation report";
pub const FORM_RESOURCE: &str = "frmPowerDissipationReport";

const COLUMN_HEADINGS: [&str; 7] = [
    "Component",
    "Power role",
    "Reported power (W)",
    "Input share (%)",
    "State",
    "Reference power",
    "Loss (%)",
];

#[derive(Debug, Clone, PartialEq)]
pub struct PowerReportRecord {
    pub display_name: String,
    pub power_role_code: u8,
    pub power_role_text: String,
    pub reported_power_watts: f64,
    pub state_code: u8,
    pub state_text: String,
    pub reference_power_watts: f64,
}

#[derive(Debug, Clone, PartialEq)]
pub struct PowerReportRow {
    pub cells: [String; 7],
    power_role_code: u8,
    reported_power_watts: f64,
    input_share_percent: Option<f64>,
    state_rank: usize,
    reference_power_watts: f64,
    loss_percent: Option<f64>,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum FilterMode {
    AssignedOnly,
    All,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum FilterControlState {
    Disabled,
    Enabled,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SortDirection {
    Ascending,
    Descending,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SortColumn {
    Component,
    PowerRole,
    ReportedPower,
    InputShare,
    State,
    ReferencePower,
    Loss,
}

impl SortColumn {
    const fn index(self) -> usize {
        match self {
            Self::Component => 0,
            Self::PowerRole => 1,
            Self::ReportedPower => 2,
            Self::InputShare => 3,
            Self::State => 4,
            Self::ReferencePower => 5,
            Self::Loss => 6,
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum WindowLifecycle {
    Open,
    Released,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CloseAction {
    Release,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CellAlignment {
    Left,
    Right,
    Center,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CellTone {
    Default,
    Positive,
    Alert,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SortIndicator {
    None,
    Ascending,
    Descending,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CellPresentation {
    pub alignment: CellAlignment,
    pub tone: CellTone,
    pub bold: bool,
    pub sort_indicator: SortIndicator,
}

#[derive(Debug, Clone, Copy, Default, PartialEq)]
pub struct PowerTotals {
    pub input_watts: f64,
    pub load_watts: f64,
}

#[derive(Debug, Clone)]
pub enum Message {
    ShowAllChanged(bool),
    ExportPressed,
    ExportPathSelected(Option<PathBuf>),
    ExportCompleted(Result<PathBuf, String>),
    SortColumnPressed(SortColumn),
    ClosePressed,
}

#[derive(Debug, Clone, PartialEq)]
pub struct Window {
    records: Vec<PowerReportRecord>,
    rows: Vec<PowerReportRow>,
    filter_mode: FilterMode,
    filter_control: FilterControlState,
    total_input_watts: f64,
    total_load_watts: f64,
    precision: u8,
    sort_column: SortColumn,
    sort_direction: SortDirection,
    column_directions: [SortDirection; 7],
    state_sort_order: [String; 3],
    header_text: String,
    lifecycle: WindowLifecycle,
    last_export_path: Option<PathBuf>,
    last_error: Option<String>,
}

impl Default for Window {
    fn default() -> Self {
        Self::new(Vec::new(), 2)
    }
}

impl Window {
    /// Ports Ghidra function `FUN_01335870` at `0x01335870`.
    ///
    /// The database maps this lifecycle handler to
    /// `TfrmPowerDissipationReport.FormCreate`. The Rust constructor creates
    /// the owned record storage, seven-column report state, column-direction
    /// state, and localized-state order before it loads owner data.
    #[must_use]
    pub fn new(records: Vec<PowerReportRecord>, precision: u8) -> Self {
        let mut window = Self {
            records: Vec::new(),
            rows: Vec::new(),
            filter_mode: FilterMode::AssignedOnly,
            filter_control: FilterControlState::Disabled,
            total_input_watts: 0.0,
            total_load_watts: 0.0,
            precision,
            sort_column: SortColumn::PowerRole,
            sort_direction: SortDirection::Ascending,
            column_directions: [SortDirection::Ascending; 7],
            state_sort_order: array::from_fn(|_| String::new()),
            header_text: String::new(),
            lifecycle: WindowLifecycle::Open,
            last_export_path: None,
            last_error: None,
        };
        window.load_owner_report_data(records, precision);
        window.activate_report();
        window
    }

    /// Ports Ghidra function `FUN_01337110` at `0x01337110`.
    ///
    /// The recovered owner adapter copies numeric precision, derives total
    /// input and load power from role codes 1 and 2, and rebuilds the report.
    /// The Rust method also derives the three localized state labels from the
    /// typed source records so later state-column sorting does not depend on a
    /// process-global string table.
    pub fn load_owner_report_data(&mut self, records: Vec<PowerReportRecord>, precision: u8) {
        self.state_sort_order = state_sort_order(&records);
        let totals = calculate_power_totals(&records);
        self.records = records;
        self.precision = precision;
        self.total_input_watts = totals.input_watts;
        self.total_load_watts = totals.load_watts;
        self.rebuild_report();
    }

    /// Ports Ghidra function `FUN_01335580` at `0x01335580`.
    ///
    /// The database maps this lifecycle handler to
    /// `TfrmPowerDissipationReport.FormActivate`. It refreshes the efficiency,
    /// total-input, and total-load label from current report totals. A zero
    /// input denominator keeps the recovered efficiency value empty.
    pub fn activate_report(&mut self) {
        self.header_text = self.summary_text();
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::ShowAllChanged(show_all) => self.change_show_all_filter(show_all),
            Message::ExportPressed => return self.begin_export(),
            Message::ExportPathSelected(None) => {}
            Message::ExportPathSelected(Some(path)) => {
                let lines = self.export_lines();
                return Task::perform(
                    async move { write_export_file(path, &lines) },
                    Message::ExportCompleted,
                );
            }
            Message::ExportCompleted(Ok(path)) => {
                self.last_export_path = Some(path);
                self.last_error = None;
            }
            Message::ExportCompleted(Err(error)) => self.last_error = Some(error),
            Message::SortColumnPressed(column) => self.fixed_cell_click(column, 0),
            Message::ClosePressed => self.close_and_release(),
        }
        Task::none()
    }

    /// Ports Ghidra function `FUN_013361e0` at `0x013361E0`.
    ///
    /// The database maps this handler to
    /// `TfrmPowerDissipationReport.btnExportClick`. The iced adapter opens an
    /// asynchronous Save dialog. Cancel is a no-op. Acceptance exports the
    /// filtered source records in collection order as seven tab-separated
    /// fields with no heading row. `std::io` replaces `TStringList.SaveToFile`.
    pub fn begin_export(&self) -> Task<Message> {
        Task::perform(select_export_path(), Message::ExportPathSelected)
    }

    /// Ports Ghidra function `FUN_01336950` at `0x01336950`.
    ///
    /// The database maps this wrapper to
    /// `TfrmPowerDissipationReport.chkbxAllClick`. It stores the new checkbox
    /// state and immediately delegates to the report rebuild.
    pub fn change_show_all_filter(&mut self, show_all: bool) {
        self.filter_mode = if show_all {
            FilterMode::All
        } else {
            FilterMode::AssignedOnly
        };
        self.rebuild_report();
    }

    /// Ports Ghidra function `FUN_01336960` at `0x01336960`.
    ///
    /// The database maps this handler to
    /// `TfrmPowerDissipationReport.btnCloseClick`. The owning iced application
    /// performs the close-query decision before this method. A permitted close
    /// releases the modeless window state and does not export report data.
    pub fn close_and_release(&mut self) {
        let _close_action = self.select_close_action();
        self.destroy_report_state();
    }

    /// Ports Ghidra function `FUN_01335860` at `0x01335860`.
    ///
    /// The database maps this lifecycle handler to
    /// `TfrmPowerDissipationReport.FormClose`. It always selects the release
    /// action for the modeless form.
    #[must_use]
    pub const fn select_close_action(&self) -> CloseAction {
        CloseAction::Release
    }

    /// Ports Ghidra function `FUN_01335bb0` at `0x01335BB0`.
    ///
    /// The database maps this lifecycle handler to
    /// `TfrmPowerDissipationReport.FormDestroy`. It clears owned records, rows,
    /// sort state, and the logical modeless-window registration.
    pub fn destroy_report_state(&mut self) {
        self.records.clear();
        self.rows.clear();
        self.sort_column = SortColumn::Component;
        self.sort_direction = SortDirection::Ascending;
        self.column_directions = [SortDirection::Ascending; 7];
        self.state_sort_order = array::from_fn(|_| String::new());
        self.header_text.clear();
        self.lifecycle = WindowLifecycle::Released;
        self.last_export_path = None;
        self.last_error = None;
    }

    /// Ports Ghidra function `FUN_01336970` at `0x01336970`.
    ///
    /// The recovered routine rebuilds all seven display cells from the source
    /// records. It applies the all-or-nonzero-power-role filter, leaves derived
    /// percentage cells empty for zero denominators, sorts by power role in
    /// ascending order, resets stored sort state, and enables the filter only
    /// when at least one record has a nonzero power-role code.
    pub fn rebuild_report(&mut self) {
        self.rows = self
            .records
            .iter()
            .filter(|record| self.filter_mode == FilterMode::All || record.power_role_code != 0)
            .map(|record| {
                row_from_record(
                    record,
                    self.total_input_watts,
                    self.precision,
                    &self.state_sort_order,
                )
            })
            .collect();
        self.sort_report(SortColumn::PowerRole, SortDirection::Ascending);
        self.sort_column = SortColumn::Component;
        self.sort_direction = SortDirection::Ascending;
        self.filter_control = if self
            .records
            .iter()
            .any(|record| record.power_role_code != 0)
        {
            FilterControlState::Enabled
        } else {
            FilterControlState::Disabled
        };
    }

    /// Ports Ghidra function `FUN_01336180` at `0x01336180`.
    ///
    /// The database maps this event handler to
    /// `TfrmPowerDissipationReport.sgReportFixedCellClick`. Only a fixed header
    /// row (`row == 0`) sorts the report. It uses the stored direction for that
    /// column, then toggles the direction for the next click and remembers the
    /// selected column.
    pub fn fixed_cell_click(&mut self, column: SortColumn, row: usize) {
        if row != 0 {
            return;
        }

        let direction = self.column_directions[column.index()];
        self.sort_report(column, direction);
        self.column_directions[column.index()] = match direction {
            SortDirection::Ascending => SortDirection::Descending,
            SortDirection::Descending => SortDirection::Ascending,
        };
        self.sort_column = column;
    }

    /// Ports Ghidra function `FUN_01337730` at `0x01337730`.
    ///
    /// The recovered helper sorts all data rows in place with the report-row
    /// comparator. Rust's stable slice sort replaces the temporary Delphi row
    /// object and pairwise swap loop.
    pub fn sort_report(&mut self, column: SortColumn, direction: SortDirection) {
        self.rows
            .sort_by(|left, right| compare_report_rows(left, right, column, direction));
        self.sort_column = column;
        self.sort_direction = direction;
    }

    /// Ports Ghidra function `FUN_01335d90` at `0x01335D90`.
    ///
    /// The database maps this event handler to
    /// `TfrmPowerDissipationReport.sgReportDrawCell`. Header cells are bold,
    /// centered, and show the active sort direction. Data column 0 is left
    /// aligned; other data columns are right aligned. In the state column,
    /// state 1 uses a positive tone, state 0 uses an alert tone, and the third
    /// state keeps the default tone. Out-of-range rows use the default tone.
    #[must_use]
    pub fn cell_presentation(&self, column: SortColumn, row: usize) -> CellPresentation {
        if row == 0 {
            let sort_indicator = if column == self.sort_column {
                match self.sort_direction {
                    SortDirection::Ascending => SortIndicator::Ascending,
                    SortDirection::Descending => SortIndicator::Descending,
                }
            } else {
                SortIndicator::None
            };
            return CellPresentation {
                alignment: CellAlignment::Center,
                tone: CellTone::Default,
                bold: true,
                sort_indicator,
            };
        }

        let tone = self.rows.get(row - 1).map_or(CellTone::Default, |record| {
            if column == SortColumn::State {
                match record.state_rank {
                    0 => CellTone::Positive,
                    1 => CellTone::Alert,
                    _ => CellTone::Default,
                }
            } else {
                CellTone::Default
            }
        });
        CellPresentation {
            alignment: if column == SortColumn::Component {
                CellAlignment::Left
            } else {
                CellAlignment::Right
            },
            tone,
            bold: false,
            sort_indicator: SortIndicator::None,
        }
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        if self.lifecycle == WindowLifecycle::Released {
            return text("Power dissipation report closed").into();
        }

        let mut report = column![report_header(self)].spacing(2);
        for (index, report_row_data) in self.rows.iter().enumerate() {
            report = report.push(report_row(self, report_row_data, index + 1));
        }

        let filter = checkbox(
            "Show all/selected components",
            self.filter_mode == FilterMode::All,
        );
        let filter = if self.filter_control == FilterControlState::Enabled {
            filter.on_toggle(Message::ShowAllChanged)
        } else {
            filter
        };
        let mut content = column![
            text(&self.header_text).size(18),
            scrollable(report).height(Length::Fill),
            row![filter, button("Export...").on_press(Message::ExportPressed),]
                .spacing(12)
                .align_y(Alignment::Center),
            row![
                button("Close").on_press(Message::ClosePressed),
                button("Help"),
            ]
            .spacing(12),
        ]
        .padding(16)
        .spacing(12);

        if let Some(path) = &self.last_export_path {
            content = content.push(text(format!("Exported to {}", path.display())));
        }
        if let Some(error) = &self.last_error {
            content = content.push(text(error));
        }
        content.into()
    }

    #[must_use]
    pub fn rows(&self) -> &[PowerReportRow] {
        &self.rows
    }

    #[must_use]
    pub const fn filter_enabled(&self) -> bool {
        matches!(self.filter_control, FilterControlState::Enabled)
    }

    #[must_use]
    pub const fn released(&self) -> bool {
        matches!(self.lifecycle, WindowLifecycle::Released)
    }

    fn summary_text(&self) -> String {
        let efficiency = format_optional_percentage(
            percentage(self.total_load_watts, self.total_input_watts),
            self.precision,
        );
        format!(
            "Efficiency: {efficiency}% Total input: {} W Total load: {} W",
            format_display_value(self.total_input_watts, self.precision),
            format_display_value(self.total_load_watts, self.precision),
        )
    }

    fn export_lines(&self) -> Vec<String> {
        self.records
            .iter()
            .filter(|record| self.filter_mode == FilterMode::All || record.power_role_code != 0)
            .map(|record| {
                row_from_record(
                    record,
                    self.total_input_watts,
                    self.precision,
                    &self.state_sort_order,
                )
                .cells
                .join("\t")
            })
            .collect()
    }
}

/// Ports Ghidra function `FUN_013354e0` at `0x013354E0`.
///
/// The recovered helper clears both totals, adds reported power from role-code
/// 1 records to total input, and adds role-code 2 records to total load. Other
/// role codes do not affect either total.
#[must_use]
pub fn calculate_power_totals(records: &[PowerReportRecord]) -> PowerTotals {
    records
        .iter()
        .fold(PowerTotals::default(), |mut totals, record| {
            match record.power_role_code {
                1 => totals.input_watts += record.reported_power_watts,
                2 => totals.load_watts += record.reported_power_watts,
                _ => {}
            }
            totals
        })
}

/// Ports Ghidra function `FUN_01337150` at `0x01337150`.
///
/// The recovered helper compares one localized state string against the three
/// canonical entries and returns its zero-based position. No match returns 3.
#[must_use]
pub fn state_sort_rank(value: &str, state_order: &[String; 3]) -> usize {
    state_order
        .iter()
        .position(|candidate| candidate == value)
        .unwrap_or(state_order.len())
}

/// Ports Ghidra function `FUN_013371d0` at `0x013371D0`.
///
/// The recovered comparator selects text, role, numeric, percentage, or state
/// ordering from the active report column and reverses it for descending sort.
/// Empty derived percentages sort after numeric values in ascending order.
#[must_use]
pub fn compare_report_rows(
    left: &PowerReportRow,
    right: &PowerReportRow,
    column: SortColumn,
    direction: SortDirection,
) -> Ordering {
    let ordering = match column {
        SortColumn::Component => left.cells[0].cmp(&right.cells[0]),
        SortColumn::PowerRole => left.power_role_code.cmp(&right.power_role_code),
        SortColumn::ReportedPower => left
            .reported_power_watts
            .total_cmp(&right.reported_power_watts),
        SortColumn::InputShare => {
            compare_optional_number(left.input_share_percent, right.input_share_percent)
        }
        SortColumn::State => left.state_rank.cmp(&right.state_rank),
        SortColumn::ReferencePower => left
            .reference_power_watts
            .total_cmp(&right.reference_power_watts),
        SortColumn::Loss => compare_optional_number(left.loss_percent, right.loss_percent),
    };
    match direction {
        SortDirection::Ascending => ordering,
        SortDirection::Descending => ordering.reverse(),
    }
}

fn compare_optional_number(left: Option<f64>, right: Option<f64>) -> Ordering {
    match (left, right) {
        (Some(left), Some(right)) => left.total_cmp(&right),
        (Some(_), None) => Ordering::Less,
        (None, Some(_)) => Ordering::Greater,
        (None, None) => Ordering::Equal,
    }
}

fn state_sort_order(records: &[PowerReportRecord]) -> [String; 3] {
    array::from_fn(|rank| {
        records
            .iter()
            .find(|record| state_code_rank(record.state_code) == rank)
            .map(|record| record.state_text.clone())
            .unwrap_or_default()
    })
}

const fn state_code_rank(state_code: u8) -> usize {
    match state_code {
        1 => 0,
        0 => 1,
        _ => 2,
    }
}

fn row_from_record(
    record: &PowerReportRecord,
    total_input_watts: f64,
    precision: u8,
    state_order: &[String; 3],
) -> PowerReportRow {
    let input_share_percent = percentage(record.reported_power_watts, total_input_watts);
    let loss_percent =
        loss_percentage_value(record.reported_power_watts, record.reference_power_watts);
    PowerReportRow {
        cells: [
            record.display_name.clone(),
            record.power_role_text.clone(),
            format_display_value(record.reported_power_watts, precision),
            format_optional_percentage(input_share_percent, precision),
            record.state_text.clone(),
            format_display_value(record.reference_power_watts, precision),
            format_optional_percentage(loss_percent, precision),
        ],
        power_role_code: record.power_role_code,
        reported_power_watts: record.reported_power_watts,
        input_share_percent,
        state_rank: state_sort_rank(&record.state_text, state_order),
        reference_power_watts: record.reference_power_watts,
        loss_percent,
    }
}

fn percentage(numerator: f64, denominator: f64) -> Option<f64> {
    (denominator != 0.0).then_some(numerator / denominator * 100.0)
}

fn loss_percentage_value(reported: f64, reference: f64) -> Option<f64> {
    (reference != 0.0).then_some((1.0 - reported / reference) * 100.0)
}

fn format_optional_percentage(value: Option<f64>, precision: u8) -> String {
    value.map_or_else(String::new, |value| {
        format_engineering_with_prefix(
            value,
            Some(precision),
            EngineeringScale::Unscaled,
            PrefixStyle::Spice,
        )
    })
}

fn report_header(window: &Window) -> iced::widget::Row<'static, Message> {
    row![
        header_cell(window, SortColumn::Component, 150.0),
        header_cell(window, SortColumn::PowerRole, 110.0),
        header_cell(window, SortColumn::ReportedPower, 135.0),
        header_cell(window, SortColumn::InputShare, 110.0),
        header_cell(window, SortColumn::State, 90.0),
        header_cell(window, SortColumn::ReferencePower, 135.0),
        header_cell(window, SortColumn::Loss, 90.0),
    ]
    .spacing(8)
}

fn header_cell(
    window: &Window,
    column: SortColumn,
    width: f32,
) -> iced::widget::Button<'static, Message> {
    let presentation = window.cell_presentation(column, 0);
    let indicator = match presentation.sort_indicator {
        SortIndicator::None => "",
        SortIndicator::Ascending => " ↑",
        SortIndicator::Descending => " ↓",
    };
    let label = format!("{}{indicator}", COLUMN_HEADINGS[column.index()]);
    button(
        text(label)
            .font(Font {
                weight: Weight::Bold,
                ..Font::DEFAULT
            })
            .align_x(Horizontal::Center),
    )
    .on_press(Message::SortColumnPressed(column))
    .width(Length::Fixed(width))
}

fn report_row<'a>(
    window: &Window,
    report_row_data: &'a PowerReportRow,
    row_index: usize,
) -> iced::widget::Row<'a, Message> {
    row![
        data_cell(
            window,
            report_row_data,
            row_index,
            SortColumn::Component,
            150.0,
        ),
        data_cell(
            window,
            report_row_data,
            row_index,
            SortColumn::PowerRole,
            110.0,
        ),
        data_cell(
            window,
            report_row_data,
            row_index,
            SortColumn::ReportedPower,
            135.0,
        ),
        data_cell(
            window,
            report_row_data,
            row_index,
            SortColumn::InputShare,
            110.0,
        ),
        data_cell(window, report_row_data, row_index, SortColumn::State, 90.0,),
        data_cell(
            window,
            report_row_data,
            row_index,
            SortColumn::ReferencePower,
            135.0,
        ),
        data_cell(window, report_row_data, row_index, SortColumn::Loss, 90.0,),
    ]
    .spacing(8)
}

fn data_cell<'a>(
    window: &Window,
    report_row_data: &'a PowerReportRow,
    row_index: usize,
    column: SortColumn,
    width: f32,
) -> iced::widget::Text<'a> {
    let presentation = window.cell_presentation(column, row_index);
    let alignment = match presentation.alignment {
        CellAlignment::Left => Horizontal::Left,
        CellAlignment::Right => Horizontal::Right,
        CellAlignment::Center => Horizontal::Center,
    };
    let color = match presentation.tone {
        CellTone::Default => Color::BLACK,
        CellTone::Positive => Color::from_rgb8(0, 128, 0),
        CellTone::Alert => Color::from_rgb8(255, 0, 0),
    };
    text(&report_row_data.cells[column.index()])
        .color(color)
        .align_x(alignment)
        .width(Length::Fixed(width))
}

async fn select_export_path() -> Option<PathBuf> {
    AsyncFileDialog::new()
        .save_file()
        .await
        .map(|handle| handle.path().to_path_buf())
}

fn write_export_file(path: PathBuf, lines: &[String]) -> Result<PathBuf, String> {
    let file = File::create(&path).map_err(|error| error.to_string())?;
    let mut writer = BufWriter::new(file);
    write_export_lines(&mut writer, lines).map_err(|error| error.to_string())?;
    writer.flush().map_err(|error| error.to_string())?;
    Ok(path)
}

fn write_export_lines(writer: &mut impl Write, lines: &[String]) -> std::io::Result<()> {
    for line in lines {
        writer.write_all(line.as_bytes())?;
        writer.write_all(b"\r\n")?;
    }
    Ok(())
}

#[cfg(test)]
mod tests {
    use super::*;

    fn record(
        name: &str,
        role_code: u8,
        role_text: &str,
        reported: f64,
        reference: f64,
    ) -> PowerReportRecord {
        PowerReportRecord {
            display_name: name.to_owned(),
            power_role_code: role_code,
            power_role_text: role_text.to_owned(),
            reported_power_watts: reported,
            state_code: 1,
            state_text: "State".to_owned(),
            reference_power_watts: reference,
        }
    }

    #[test]
    fn rebuild_filters_non_power_records_and_sorts_by_role() {
        let mut window = Window::new(
            vec![
                record("plain", 0, "None", 2.0, 4.0),
                record("source", 3, "Source", 3.0, 6.0),
                record("loss", 1, "Loss", 1.0, 2.0),
            ],
            2,
        );

        assert_eq!(window.rows.len(), 2);
        assert_eq!(window.rows[0].cells[0], "loss");
        assert_eq!(window.rows[1].cells[0], "source");
        assert!(window.filter_enabled());

        window.change_show_all_filter(true);
        assert_eq!(window.rows.len(), 3);
    }

    #[test]
    fn zero_denominators_leave_percentage_cells_empty() {
        let window = Window::new(vec![record("zero", 3, "Source", 1.0, 0.0)], 2);

        assert_eq!(window.rows[0].cells[3], "");
        assert_eq!(window.rows[0].cells[6], "");
    }

    #[test]
    fn export_keeps_source_order_and_has_seven_fields_without_a_header() {
        let window = Window::new(
            vec![
                record("second", 2, "Sink", 2.0, 4.0),
                record("first", 1, "Loss", 1.0, 2.0),
            ],
            2,
        );
        let lines = window.export_lines();

        assert_eq!(lines.len(), 2);
        assert!(lines[0].starts_with("second\tSink\t"));
        assert!(lines[1].starts_with("first\tLoss\t"));
        assert_eq!(lines[0].split('\t').count(), 7);
        assert!(!lines[0].contains("Component"));
    }

    #[test]
    fn tsv_writer_uses_windows_line_endings_and_period_decimals() -> std::io::Result<()> {
        let window = Window::new(vec![record("part", 1, "Loss", 1.25, 2.5)], 2);
        let mut bytes = Vec::new();

        write_export_lines(&mut bytes, &window.export_lines())?;

        let text = String::from_utf8(bytes).map_err(std::io::Error::other)?;
        assert!(text.contains("1.25"));
        assert!(text.ends_with("\r\n"));
        Ok(())
    }

    #[test]
    fn canceled_export_and_close_do_not_write_or_retain_report_state() {
        let mut window = Window::new(vec![record("part", 1, "Loss", 1.0, 2.0)], 2);

        let _task = window.update(Message::ExportPathSelected(None));
        assert!(window.last_export_path.is_none());
        assert!(window.last_error.is_none());

        window.close_and_release();
        assert!(window.released());
        assert!(window.records.is_empty());
        assert!(window.rows().is_empty());
    }

    #[test]
    fn owner_load_derives_role_totals_precision_and_header() {
        let records = vec![
            record("input", 1, "Loss", 4.0, 5.0),
            record("load", 2, "Sink", 3.0, 4.0),
            record("other", 3, "Source", 9.0, 10.0),
        ];
        assert_eq!(
            calculate_power_totals(&records),
            PowerTotals {
                input_watts: 4.0,
                load_watts: 3.0,
            }
        );

        let window = Window::new(records, 1);

        assert!((window.total_input_watts - 4.0).abs() < f64::EPSILON);
        assert!((window.total_load_watts - 3.0).abs() < f64::EPSILON);
        assert!(window.header_text.contains("Efficiency: 75%"));
        assert!(window.header_text.contains("Total input: 4 W"));
    }

    #[test]
    fn fixed_header_click_toggles_direction_and_non_header_click_is_a_noop() {
        let mut window = Window::new(
            vec![
                record("a", 1, "Loss", 1.0, 2.0),
                record("b", 1, "Loss", 3.0, 4.0),
            ],
            2,
        );

        window.fixed_cell_click(SortColumn::ReportedPower, 1);
        assert_eq!(window.rows[0].cells[0], "a");

        window.fixed_cell_click(SortColumn::ReportedPower, 0);
        assert_eq!(window.rows[0].cells[0], "a");
        window.fixed_cell_click(SortColumn::ReportedPower, 0);
        assert_eq!(window.rows[0].cells[0], "b");
    }

    #[test]
    fn state_rank_uses_three_localized_entries_and_returns_three_for_unknown() {
        let order = ["On".to_owned(), "Off".to_owned(), "Other".to_owned()];

        assert_eq!(state_sort_rank("On", &order), 0);
        assert_eq!(state_sort_rank("Other", &order), 2);
        assert_eq!(state_sort_rank("Unknown", &order), 3);
    }

    #[test]
    fn close_lifecycle_selects_release_and_clears_sort_and_header_state() {
        let mut window = Window::new(vec![record("part", 1, "Loss", 1.0, 2.0)], 2);

        assert_eq!(window.select_close_action(), CloseAction::Release);
        window.destroy_report_state();

        assert!(window.released());
        assert!(window.header_text.is_empty());
        assert_eq!(window.sort_column, SortColumn::Component);
    }

    #[test]
    fn draw_presentation_styles_headers_alignment_and_state_values() {
        let mut positive = record("positive", 1, "Loss", 1.0, 2.0);
        positive.state_code = 1;
        positive.state_text = "On".to_owned();
        let mut alert = record("alert", 1, "Loss", 1.0, 2.0);
        alert.state_code = 0;
        alert.state_text = "Off".to_owned();
        let mut neutral = record("neutral", 1, "Loss", 1.0, 2.0);
        neutral.state_code = 2;
        neutral.state_text = "Other".to_owned();
        let window = Window::new(vec![positive, alert, neutral], 2);

        assert_eq!(
            window.cell_presentation(SortColumn::Component, 0),
            CellPresentation {
                alignment: CellAlignment::Center,
                tone: CellTone::Default,
                bold: true,
                sort_indicator: SortIndicator::Ascending,
            }
        );
        assert_eq!(
            window.cell_presentation(SortColumn::Component, 1).alignment,
            CellAlignment::Left
        );
        assert_eq!(
            window
                .cell_presentation(SortColumn::ReportedPower, 1)
                .alignment,
            CellAlignment::Right
        );
        assert_eq!(
            window.cell_presentation(SortColumn::State, 1).tone,
            CellTone::Positive
        );
        assert_eq!(
            window.cell_presentation(SortColumn::State, 2).tone,
            CellTone::Alert
        );
        assert_eq!(
            window.cell_presentation(SortColumn::State, 3).tone,
            CellTone::Default
        );
    }
}
