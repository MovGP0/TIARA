use std::cmp::Ordering;
use std::fmt;
use std::fs;
use std::path::{Path, PathBuf};

use iced::widget::{button, column, container, pick_list, row, scrollable, text, text_input};
use iced::{Element, Length, Task};
use rfd::AsyncFileDialog;
use tiara_core::numeric_format::format_display_value;

pub const TITLE: &str = "Target Setting Editor";
pub const FORM_RESOURCE: &str = "CplxForm11";
const CATALOG_HEADER: &str = "@ Catalog file for optimization";
const CATALOG_TERMINATOR: &str = ".@ end of file";
const MEASUREMENT_UNITS: [MeasurementUnit; 2] = [MeasurementUnit::Decibels, MeasurementUnit::Volts];

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum EditorMode {
    Dc,
    Ac,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum MeasurementUnit {
    #[default]
    Decibels,
    Volts,
}

impl fmt::Display for MeasurementUnit {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::Decibels => "dB",
            Self::Volts => "V",
        })
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Default)]
pub struct TargetRecord {
    pub first: f64,
    pub second: f64,
}

impl TargetRecord {
    #[must_use]
    pub const fn new(first: f64, second: f64) -> Self {
        Self { first, second }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum RecordField {
    First,
    Second,
}

#[derive(Debug, Clone, PartialEq)]
pub struct TargetCurve {
    pub mode: EditorMode,
    pub points: Vec<TargetRecord>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum CatalogError {
    Io(String),
    MissingHeader,
    MissingRecord,
    MissingSecondValue,
    MissingTerminator,
    InvalidNumber(String),
}

impl fmt::Display for CatalogError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::Io(message) => formatter.write_str(message),
            Self::MissingHeader => formatter.write_str("The catalog has no header line."),
            Self::MissingRecord => formatter.write_str("The catalog has no target record."),
            Self::MissingSecondValue => {
                formatter.write_str("The catalog record has no second value.")
            }
            Self::MissingTerminator => formatter.write_str("The catalog has no terminator."),
            Self::InvalidNumber(value) => write!(formatter, "Invalid catalog number: {value}"),
        }
    }
}

impl std::error::Error for CatalogError {}

impl From<std::io::Error> for CatalogError {
    fn from(error: std::io::Error) -> Self {
        Self::Io(error.to_string())
    }
}

#[derive(Debug, Clone, PartialEq)]
pub struct CatalogLoadResult {
    path: PathBuf,
    records: Vec<TargetRecord>,
    error: Option<CatalogError>,
}

#[derive(Debug, Clone)]
pub enum Message {
    ToleranceChanged(String),
    MeasurementUnitSelected(MeasurementUnit),
    GridValueChanged {
        record: usize,
        field: RecordField,
        value: String,
    },
    AddNew,
    RemoveLast,
    ClearAll,
    Arrange,
    Draw,
    SaveAs,
    SavePathSelected(Option<PathBuf>),
    CatalogSaved(Result<PathBuf, CatalogError>),
    Load,
    LoadPathSelected(Option<PathBuf>),
    CatalogLoaded(CatalogLoadResult),
    Accept,
    Cancel,
}

#[derive(Debug, Clone, PartialEq, Eq)]
struct RecordEdits {
    first: String,
    second: String,
}

impl From<TargetRecord> for RecordEdits {
    fn from(record: TargetRecord) -> Self {
        Self {
            first: record.first.to_string(),
            second: record.second.to_string(),
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
struct ActiveCell {
    record: usize,
    field: RecordField,
}

#[derive(Debug)]
pub struct Window {
    mode: EditorMode,
    measurement_unit: MeasurementUnit,
    caller_table: Vec<TargetRecord>,
    working_records: Vec<TargetRecord>,
    row_labels: Vec<String>,
    grid_edits: Vec<RecordEdits>,
    active_cell: Option<ActiveCell>,
    tolerance: String,
    validation_failed: bool,
    remembered_path: PathBuf,
    saved_row_capacity: usize,
    grid_row_capacity: usize,
    visible: bool,
    accepted: bool,
    generated_results: Vec<TargetCurve>,
    last_error: Option<String>,
}

impl Window {
    /// Implements Ghidra function `FUN_013e70f0` at `0x013E70F0`.
    ///
    /// `Vec` supplies the private, owned record and label collections. The
    /// separate caller table remains owned by this safe adapter until the
    /// caller takes the accepted result. `iced` supplies the window state and
    /// message boundary.
    #[must_use]
    pub fn new(caller_table: Vec<TargetRecord>, mode: EditorMode) -> Self {
        let caller_table = if caller_table.is_empty() {
            vec![TargetRecord::default()]
        } else {
            caller_table
        };
        let mut window = Self {
            mode,
            measurement_unit: MeasurementUnit::default(),
            caller_table,
            working_records: Vec::new(),
            row_labels: Vec::new(),
            grid_edits: Vec::new(),
            active_cell: None,
            tolerance: String::new(),
            validation_failed: false,
            remembered_path: PathBuf::from("noname.cpl"),
            saved_row_capacity: 8,
            grid_row_capacity: 8,
            visible: true,
            accepted: false,
            generated_results: Vec::new(),
            last_error: None,
        };
        window.initialize_working_copy();
        window
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::ToleranceChanged(value) => self.tolerance = value,
            Message::MeasurementUnitSelected(unit) => {
                if self.mode == EditorMode::Ac {
                    self.measurement_unit = unit;
                }
            }
            Message::GridValueChanged {
                record,
                field,
                value,
            } => self.set_grid_value(record, field, value),
            Message::AddNew => self.add_new_point(),
            Message::RemoveLast => {
                let _ = self.remove_last_point();
            }
            Message::ClearAll => self.clear_all_points(),
            Message::Arrange => {
                let _ = self.arrange_points();
            }
            Message::Draw => {
                if let Some(curve) = self.build_result_graph() {
                    self.generated_results.push(curve);
                }
            }
            Message::SaveAs => return self.begin_save(),
            Message::SavePathSelected(path) => return self.handle_save_path(path),
            Message::CatalogSaved(result) => match result {
                Ok(path) => {
                    self.last_error = None;
                    self.remembered_path = path;
                }
                Err(error) => self.last_error = Some(error.to_string()),
            },
            Message::Load => return self.begin_load(),
            Message::LoadPathSelected(path) => return self.handle_load_path(path),
            Message::CatalogLoaded(result) => self.finish_catalog_load(result),
            Message::Accept => {
                let _ = self.accept_changes();
            }
            Message::Cancel => self.visible = false,
        }

        Task::none()
    }

    /// Implements Ghidra function `FUN_013e71f0` at `0x013E71F0`.
    ///
    /// Rust's `Vec` drop implementation releases every private label, edit,
    /// and record. This explicit lifecycle adapter leaves `caller_table`
    /// unchanged, as the recovered destructor did.
    pub fn release_private_state(&mut self) {
        self.row_labels.clear();
        self.grid_edits.clear();
        self.working_records.clear();
        self.active_cell = None;
        self.visible = false;
    }

    /// Implements Ghidra function `FUN_013e7290` at `0x013E7290`.
    ///
    /// One close request is rejected after validation fails. The guard is then
    /// reset so that a corrected request can be evaluated.
    #[must_use]
    pub const fn query_close(&mut self) -> bool {
        let can_close = !self.validation_failed;
        self.validation_failed = false;
        can_close
    }

    /// Implements Ghidra function `FUN_013e72b0` at `0x013E72B0`.
    ///
    /// `String` and `Vec` replace the Delphi string collection. This method
    /// changes labels only and keeps record order and values unchanged.
    pub fn rebuild_row_labels(&mut self) {
        self.row_labels.clear();
        if self.mode == EditorMode::Ac {
            self.row_labels.push("Magnitude".to_owned());
        }
        for index in 1..self.working_records.len() {
            match self.mode {
                EditorMode::Dc => {
                    self.row_labels.push(format!("{index}. X"));
                    self.row_labels.push(format!("{index}. Y"));
                }
                EditorMode::Ac => {
                    self.row_labels.push(format!("{index}. Frequency"));
                    self.row_labels.push(format!("{index}. Magnitude"));
                }
            }
        }
    }

    /// Implements Ghidra function `FUN_013e7620` at `0x013E7620`.
    ///
    /// The iced view uses these text buffers as the grid's `Name` and `Value`
    /// rows. The reserved first field is normalized to zero before binding.
    pub fn repopulate_grid(&mut self) {
        if let Some(reserved) = self.working_records.first_mut() {
            reserved.first = 0.0;
        }
        self.grid_edits = self
            .working_records
            .iter()
            .copied()
            .map(RecordEdits::from)
            .collect();
        self.grid_row_capacity = self
            .saved_row_capacity
            .max(self.working_records.len().saturating_mul(2));
        self.active_cell = None;
    }

    /// Implements Ghidra function `FUN_013e7930` at `0x013E7930`.
    ///
    /// The caller table is deep-copied into safe Rust values. The tolerance is
    /// captured before the shared grid refresh normalizes the reserved field.
    pub fn initialize_working_copy(&mut self) {
        self.working_records.clone_from(&self.caller_table);
        self.tolerance = self
            .working_records
            .first()
            .map_or_else(|| "0".to_owned(), |record| record.first.to_string());
        self.remembered_path = PathBuf::from("noname.cpl");
        self.rebuild_row_labels();
        self.repopulate_grid();
    }

    /// Implements Ghidra function `FUN_013e7bc0` at `0x013E7BC0`.
    ///
    /// `Vec::sort_by` is the standard-library stable sort. It keeps equal
    /// finite keys in source order and keeps the reserved record outside the
    /// sort. Copy assignment provides the recovered deep copy-back boundary.
    #[must_use]
    pub fn accept_changes(&mut self) -> bool {
        self.validation_failed = !self.commit_active_cell();
        if self.validation_failed {
            return false;
        }
        let Ok(tolerance) = self.tolerance.trim().parse::<f64>() else {
            self.validation_failed = true;
            self.last_error = Some("The tolerance is not a number.".to_owned());
            return false;
        };
        self.sort_nonreserved_records();
        if let Some(reserved) = self.working_records.first_mut() {
            reserved.first = tolerance;
        }
        self.caller_table.clone_from(&self.working_records);
        self.accepted = true;
        self.visible = false;
        self.last_error = None;
        true
    }

    /// Implements Ghidra function `FUN_013e7eb0` at `0x013E7EB0`.
    ///
    /// The method appends one default pair and refreshes only the staged iced
    /// grid state. It does not validate, sort, save, accept, or close.
    pub fn add_new_point(&mut self) {
        let first = self
            .working_records
            .last()
            .map_or(1.0, |record| record.first + 1.0);
        self.working_records.push(TargetRecord::new(first, 0.0));
        self.rebuild_row_labels();
        self.repopulate_grid();
    }

    /// Implements Ghidra function `FUN_013e8130` at `0x013E8130`.
    ///
    /// `Vec::pop` replaces the recovered raw-pointer removal and also fixes its
    /// leaked allocation. The reserved record is kept as the minimum state.
    #[must_use]
    pub fn remove_last_point(&mut self) -> bool {
        if self.working_records.len() <= 1 {
            return false;
        }
        self.working_records.pop();
        self.rebuild_row_labels();
        self.repopulate_grid();
        true
    }

    /// Implements Ghidra function `FUN_013e8270` at `0x013E8270`.
    ///
    /// Rust collection ownership releases all old staged records before one
    /// zeroed reserved record is installed and displayed.
    pub fn clear_all_points(&mut self) {
        self.working_records.clear();
        self.working_records.push(TargetRecord::default());
        self.rebuild_row_labels();
        self.repopulate_grid();
    }

    /// Implements Ghidra function `FUN_013e8340` at `0x013E8340`.
    ///
    /// The existing `tiara-core` engineering formatter supplies the recovered
    /// numeric representation. `std::fs` supplies text-file creation and
    /// closing through RAII, without the Delphi short-path and code-page limits.
    #[must_use]
    pub fn catalog_text(&self) -> String {
        catalog_text(&self.working_records)
    }

    /// Writes the current staged records in optimization-catalog format.
    ///
    /// # Errors
    ///
    /// Returns an I/O error when the target cannot be created or written.
    pub fn write_catalog(&self, path: &Path) -> Result<(), CatalogError> {
        fs::write(path, self.catalog_text()).map_err(CatalogError::from)
    }

    /// Implements Ghidra function `FUN_013e85d0` at `0x013E85D0`.
    ///
    /// `rfd::AsyncFileDialog` supplies the maintained native save dialog and
    /// iced `Task` carries the selection without blocking update logic.
    pub fn begin_save(&mut self) -> Task<Message> {
        self.validation_failed = !self.commit_active_cell();
        if self.validation_failed {
            return Task::none();
        }
        let file_name = self.remembered_path.file_name().map_or_else(
            || "noname.cpl".to_owned(),
            |name| name.to_string_lossy().into_owned(),
        );
        Task::perform(select_save_path(file_name), Message::SavePathSelected)
    }

    /// Implements Ghidra function `FUN_013e8810` at `0x013E8810`.
    ///
    /// The standard string parser supplies numeric conversion. This adapter
    /// also accepts the engineering suffixes emitted by `tiara-core`.
    /// Complete pairs are appended before a later parse error is returned.
    ///
    /// # Errors
    ///
    /// Returns a structural or numeric catalog error. Records completed before
    /// the error remain in the private working table.
    pub fn append_catalog_text(&mut self, source: &str) -> Result<(), CatalogError> {
        let result = parse_catalog_records(source, &mut self.working_records);
        self.grid_row_capacity = self
            .saved_row_capacity
            .max(self.working_records.len().saturating_mul(2));
        result
    }

    /// Implements Ghidra function `FUN_013e8b00` at `0x013E8B00`.
    ///
    /// `rfd::AsyncFileDialog` supplies the maintained native open dialog. A
    /// canceled dialog is a no-op. An accepted selection clears staged state
    /// before the asynchronous parser runs, so parse failure has no rollback.
    pub fn begin_load(&self) -> Task<Message> {
        Task::perform(select_load_path(), Message::LoadPathSelected)
    }

    /// Implements Ghidra function `FUN_013e8cc0` at `0x013E8CC0`.
    ///
    /// The active edit is attempted, but its current result is not stored in
    /// the close guard. The existing guard controls a standard-library stable
    /// sort and a complete iced grid refresh.
    #[must_use]
    pub fn arrange_points(&mut self) -> bool {
        let _commit_succeeded = self.commit_active_cell();
        if self.validation_failed {
            return false;
        }
        self.sort_nonreserved_records();
        self.rebuild_row_labels();
        self.repopulate_grid();
        true
    }

    /// Implements Ghidra function `FUN_013e8ed0` at `0x013E8ED0`.
    ///
    /// The returned value is an application-result request for the caller's
    /// iced coordinator. It excludes reserved record zero and does not sort,
    /// accept, or close the editor.
    #[must_use]
    pub fn build_result_graph(&mut self) -> Option<TargetCurve> {
        let _commit_succeeded = self.commit_active_cell();
        if self.validation_failed {
            return None;
        }
        Some(TargetCurve {
            mode: self.mode,
            points: self.working_records.iter().skip(1).copied().collect(),
        })
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let mut grid =
            column![row![text("Name").width(Length::Fill), text("Value")].spacing(8)].spacing(4);
        let mut label_index = 0;
        if self.mode == EditorMode::Ac && !self.grid_edits.is_empty() {
            grid = grid.push(grid_row(
                &self.row_labels[label_index],
                &self.grid_edits[0].second,
                0,
                RecordField::Second,
            ));
            label_index += 1;
        }
        for record in 1..self.grid_edits.len() {
            grid = grid.push(grid_row(
                &self.row_labels[label_index],
                &self.grid_edits[record].first,
                record,
                RecordField::First,
            ));
            label_index += 1;
            grid = grid.push(grid_row(
                &self.row_labels[label_index],
                &self.grid_edits[record].second,
                record,
                RecordField::Second,
            ));
            label_index += 1;
        }

        let unit_control: Element<'_, Message> = if self.mode == EditorMode::Ac {
            pick_list(
                MEASUREMENT_UNITS,
                Some(self.measurement_unit),
                Message::MeasurementUnitSelected,
            )
            .into()
        } else {
            text("DC table").into()
        };

        container(
            column![
                text(TITLE).size(24),
                row![
                    text("Tol. [%]"),
                    text_input("", &self.tolerance).on_input(Message::ToleranceChanged),
                    unit_control,
                ]
                .spacing(8),
                scrollable(grid).height(Length::Fill),
                row![
                    button("Add new").on_press(Message::AddNew),
                    button("Remove last").on_press(Message::RemoveLast),
                    button("Clear all").on_press(Message::ClearAll),
                    button("Load").on_press(Message::Load),
                    button("Save as").on_press(Message::SaveAs),
                ]
                .spacing(6),
                row![
                    button("Draw").on_press(Message::Draw),
                    button("Arrange points").on_press(Message::Arrange),
                    button("OK").on_press(Message::Accept),
                    button("Cancel").on_press(Message::Cancel),
                ]
                .spacing(6),
                self.last_error.as_ref().map_or_else(
                    || text(""),
                    |message| text(message).style(iced::widget::text::danger),
                ),
            ]
            .spacing(12),
        )
        .padding(16)
        .width(Length::Fill)
        .height(Length::Fill)
        .into()
    }

    #[must_use]
    pub fn caller_table(&self) -> &[TargetRecord] {
        &self.caller_table
    }

    #[must_use]
    pub fn working_records(&self) -> &[TargetRecord] {
        &self.working_records
    }

    #[must_use]
    pub fn row_labels(&self) -> &[String] {
        &self.row_labels
    }

    #[must_use]
    pub fn generated_results(&self) -> &[TargetCurve] {
        &self.generated_results
    }

    #[must_use]
    pub const fn measurement_unit_enabled(&self) -> bool {
        matches!(self.mode, EditorMode::Ac)
    }

    #[must_use]
    pub const fn accepted_measurement_unit(&self) -> Option<MeasurementUnit> {
        if self.accepted && matches!(self.mode, EditorMode::Ac) {
            Some(self.measurement_unit)
        } else {
            None
        }
    }

    #[must_use]
    pub const fn is_visible(&self) -> bool {
        self.visible
    }

    #[must_use]
    pub fn last_error(&self) -> Option<&str> {
        self.last_error.as_deref()
    }

    fn set_grid_value(&mut self, record: usize, field: RecordField, value: String) {
        let Some(edits) = self.grid_edits.get_mut(record) else {
            return;
        };
        match field {
            RecordField::First => edits.first = value,
            RecordField::Second => edits.second = value,
        }
        self.active_cell = Some(ActiveCell { record, field });
    }

    fn commit_active_cell(&mut self) -> bool {
        let Some(active) = self.active_cell else {
            return true;
        };
        let Some(edits) = self.grid_edits.get(active.record) else {
            self.last_error = Some("The active target row is not available.".to_owned());
            return false;
        };
        let source = match active.field {
            RecordField::First => &edits.first,
            RecordField::Second => &edits.second,
        };
        let Ok(value) = parse_engineering_number(source) else {
            self.last_error = Some("The active target value is not a number.".to_owned());
            return false;
        };
        let Some(record) = self.working_records.get_mut(active.record) else {
            self.last_error = Some("The active target row is not available.".to_owned());
            return false;
        };
        match active.field {
            RecordField::First => record.first = value,
            RecordField::Second => record.second = value,
        }
        self.active_cell = None;
        self.last_error = None;
        true
    }

    fn sort_nonreserved_records(&mut self) {
        if let Some(points) = self.working_records.get_mut(1..) {
            points.sort_by(|left, right| {
                left.first
                    .partial_cmp(&right.first)
                    .unwrap_or(Ordering::Equal)
            });
        }
    }

    fn handle_save_path(&mut self, selection: Option<PathBuf>) -> Task<Message> {
        let Some(path) = selection else {
            return Task::none();
        };
        let path = lowercase_path(&path);
        self.remembered_path.clone_from(&path);
        let contents = self.catalog_text();
        Task::perform(
            async move { write_catalog_file(path, contents) },
            Message::CatalogSaved,
        )
    }

    fn handle_load_path(&mut self, selection: Option<PathBuf>) -> Task<Message> {
        let Some(path) = selection else {
            return Task::none();
        };
        let path = lowercase_path(&path);
        self.remembered_path.clone_from(&path);
        self.working_records.clear();
        self.row_labels.clear();
        self.grid_edits.clear();
        self.active_cell = None;
        Task::perform(
            async move { load_catalog_file(path) },
            Message::CatalogLoaded,
        )
    }

    fn finish_catalog_load(&mut self, result: CatalogLoadResult) {
        self.remembered_path = result.path;
        self.working_records = result.records;
        if let Some(error) = result.error {
            self.last_error = Some(error.to_string());
            return;
        }
        if self.working_records.is_empty() {
            self.last_error = Some(CatalogError::MissingRecord.to_string());
            return;
        }
        self.rebuild_row_labels();
        self.repopulate_grid();
        self.last_error = None;
    }
}

fn grid_row<'a>(
    label: &'a str,
    value: &'a str,
    record: usize,
    field: RecordField,
) -> Element<'a, Message> {
    row![
        text(label).width(Length::Fill),
        text_input("", value).on_input(move |value| Message::GridValueChanged {
            record,
            field,
            value,
        }),
    ]
    .spacing(8)
    .into()
}

fn catalog_text(records: &[TargetRecord]) -> String {
    let mut output = format!("{CATALOG_HEADER}\n\n");
    for record in records {
        output.push_str(&format_display_value(record.first, 2));
        output.push('\n');
        output.push_str(&format_display_value(record.second, 2));
        output.push_str("\n\n");
    }
    output.push_str(CATALOG_TERMINATOR);
    output.push('\n');
    output
}

fn parse_catalog_records(
    source: &str,
    records: &mut Vec<TargetRecord>,
) -> Result<(), CatalogError> {
    let mut lines = source
        .lines()
        .map(str::trim)
        .filter(|line| !line.is_empty());
    if lines.next().is_none() {
        return Err(CatalogError::MissingHeader);
    }
    loop {
        let Some(first_text) = lines.next() else {
            return Err(CatalogError::MissingTerminator);
        };
        if first_text.starts_with(".@") {
            return Ok(());
        }
        let first = parse_engineering_number(first_text)?;
        let Some(second_text) = lines.next() else {
            return Err(CatalogError::MissingSecondValue);
        };
        let second = parse_engineering_number(second_text)?;
        records.push(TargetRecord::new(first, second));
    }
}

fn parse_engineering_number(source: &str) -> Result<f64, CatalogError> {
    let source = source.trim();
    if let Ok(value) = source.parse::<f64>() {
        return Ok(value);
    }
    let split = source
        .char_indices()
        .find_map(|(index, character)| character.is_alphabetic().then_some(index))
        .ok_or_else(|| CatalogError::InvalidNumber(source.to_owned()))?;
    let (number, suffix) = source.split_at(split);
    let value = number
        .parse::<f64>()
        .map_err(|_| CatalogError::InvalidNumber(source.to_owned()))?;
    let multiplier = match suffix.to_ascii_lowercase().as_str() {
        "f" => 1e-15,
        "p" => 1e-12,
        "n" => 1e-9,
        "u" | "µ" => 1e-6,
        "m" => 1e-3,
        "k" => 1e3,
        "meg" => 1e6,
        "g" => 1e9,
        "t" => 1e12,
        _ => return Err(CatalogError::InvalidNumber(source.to_owned())),
    };
    Ok(value * multiplier)
}

fn lowercase_path(path: &Path) -> PathBuf {
    PathBuf::from(
        path.to_string_lossy()
            .chars()
            .map(|character| character.to_ascii_lowercase())
            .collect::<String>(),
    )
}

async fn select_save_path(file_name: String) -> Option<PathBuf> {
    AsyncFileDialog::new()
        .add_filter("Complex numbers", &["cpl"])
        .set_file_name(file_name)
        .save_file()
        .await
        .map(|file| file.path().to_path_buf())
}

async fn select_load_path() -> Option<PathBuf> {
    AsyncFileDialog::new()
        .add_filter("Complex numbers", &["cpl"])
        .pick_file()
        .await
        .map(|file| file.path().to_path_buf())
}

fn write_catalog_file(path: PathBuf, contents: String) -> Result<PathBuf, CatalogError> {
    fs::write(&path, contents)?;
    Ok(path)
}

fn load_catalog_file(path: PathBuf) -> CatalogLoadResult {
    let mut records = Vec::new();
    let error = match fs::read_to_string(&path) {
        Ok(source) => parse_catalog_records(&source, &mut records).err(),
        Err(error) => Some(CatalogError::from(error)),
    };
    CatalogLoadResult {
        path,
        records,
        error,
    }
}

#[cfg(test)]
mod tests {
    use super::{
        CatalogError, EditorMode, MeasurementUnit, Message, RecordField, TargetRecord, Window,
    };

    fn source_table() -> Vec<TargetRecord> {
        vec![
            TargetRecord::new(5.0, 7.0),
            TargetRecord::new(3.0, 30.0),
            TargetRecord::new(1.0, 10.0),
            TargetRecord::new(3.0, 31.0),
        ]
    }

    #[test]
    fn construction_deep_copies_state_and_configures_mode_specific_rows() {
        let dc = Window::new(source_table(), EditorMode::Dc);
        assert!((dc.caller_table()[0].first - 5.0).abs() <= f64::EPSILON);
        assert!(dc.working_records()[0].first.abs() <= f64::EPSILON);
        assert_eq!(dc.row_labels()[0], "1. X");
        assert!(!dc.measurement_unit_enabled());

        let ac = Window::new(source_table(), EditorMode::Ac);
        assert_eq!(ac.row_labels()[0], "Magnitude");
        assert!(ac.measurement_unit_enabled());
    }

    #[test]
    fn failed_accept_preserves_caller_table_and_rejects_one_close_request() {
        let original = source_table();
        let mut window = Window::new(original.clone(), EditorMode::Dc);
        window.set_grid_value(1, RecordField::First, "bad".to_owned());

        assert!(!window.accept_changes());
        assert_eq!(window.caller_table(), original);
        assert!(!window.query_close());
        assert!(window.query_close());
    }

    #[test]
    fn accepted_table_writes_tolerance_and_stably_sorts_nonreserved_points() {
        let mut window = Window::new(source_table(), EditorMode::Ac);
        window.tolerance = "2.5".to_owned();
        window.measurement_unit = MeasurementUnit::Volts;

        assert!(window.accept_changes());
        assert_eq!(window.caller_table()[0], TargetRecord::new(2.5, 7.0));
        assert_eq!(
            &window.caller_table()[1..],
            &[
                TargetRecord::new(1.0, 10.0),
                TargetRecord::new(3.0, 30.0),
                TargetRecord::new(3.0, 31.0),
            ]
        );
        assert_eq!(
            window.accepted_measurement_unit(),
            Some(MeasurementUnit::Volts)
        );
    }

    #[test]
    fn point_commands_keep_one_reserved_record_and_refresh_labels() {
        let mut window = Window::new(vec![TargetRecord::new(5.0, 0.0)], EditorMode::Dc);
        assert!(!window.remove_last_point());

        window.add_new_point();
        assert_eq!(window.working_records()[1], TargetRecord::new(1.0, 0.0));
        assert_eq!(window.row_labels(), &["1. X", "1. Y"]);
        assert!(window.remove_last_point());

        window.add_new_point();
        window.clear_all_points();
        assert_eq!(window.working_records(), &[TargetRecord::default()]);
        assert!(window.row_labels().is_empty());
    }

    #[test]
    fn arrange_uses_existing_guard_and_refreshes_the_staged_order_only() {
        let original = source_table();
        let mut window = Window::new(original.clone(), EditorMode::Dc);

        assert!(window.arrange_points());
        assert!((window.working_records()[1].first - 1.0).abs() <= f64::EPSILON);
        assert_eq!(window.caller_table(), original);

        window.validation_failed = true;
        assert!(!window.arrange_points());
    }

    #[test]
    fn catalog_round_trip_uses_engineering_values_and_keeps_tolerance_separate() {
        let mut window = Window::new(source_table(), EditorMode::Ac);
        let text = window.catalog_text();
        assert!(text.starts_with("@ Catalog file for optimization\n\n"));
        assert!(text.ends_with(".@ end of file\n"));

        window.working_records.clear();
        assert_eq!(window.append_catalog_text(&text), Ok(()));
        let mut serialized_records = source_table();
        serialized_records[0].first = 0.0;
        assert_eq!(window.working_records(), serialized_records);
        assert_eq!(window.tolerance, "5");
    }

    #[test]
    fn catalog_parser_keeps_complete_records_before_a_later_error() {
        let mut window = Window::new(vec![TargetRecord::default()], EditorMode::Dc);
        window.working_records.clear();

        let result = window.append_catalog_text("ignored header\n1k\n2m\n\n3\nbad\n");

        assert_eq!(result, Err(CatalogError::InvalidNumber("bad".to_owned())));
        assert_eq!(
            window.working_records(),
            &[TargetRecord::new(1_000.0, 0.002)]
        );
    }

    #[test]
    fn draw_excludes_reserved_state_and_does_not_sort_or_accept() {
        let original = source_table();
        let mut window = Window::new(original.clone(), EditorMode::Ac);

        assert_eq!(
            window.build_result_graph().map(|curve| curve.points),
            Some(source_table()[1..].to_vec())
        );
        assert_eq!(window.caller_table(), original);
        assert!(window.is_visible());
    }

    #[test]
    fn releasing_private_state_does_not_release_the_caller_table() {
        let original = source_table();
        let mut window = Window::new(original.clone(), EditorMode::Dc);

        window.release_private_state();

        assert!(window.working_records().is_empty());
        assert_eq!(window.caller_table(), original);
        assert!(!window.is_visible());
    }

    #[test]
    fn iced_update_routes_editor_commands_without_a_live_window() {
        let mut window = Window::new(vec![TargetRecord::default()], EditorMode::Dc);

        let _task = window.update(Message::AddNew);
        let _task = window.update(Message::GridValueChanged {
            record: 1,
            field: RecordField::First,
            value: "4.5".to_owned(),
        });
        let _task = window.update(Message::Draw);

        assert_eq!(
            window.generated_results()[0].points,
            vec![TargetRecord::new(4.5, 0.0)]
        );
        assert!(window.is_visible());
    }
}
