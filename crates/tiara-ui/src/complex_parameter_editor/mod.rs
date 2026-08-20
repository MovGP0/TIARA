use std::fs;
use std::path::{Path, PathBuf};

use iced::widget::{button, column, container, radio, row, scrollable, text, text_input};
use iced::{Element, Length, Task};
use rfd::AsyncFileDialog;
use tiara_core::complex_parameter::{
    ComplexCatalog, ComplexCatalogError, ComplexCatalogParseOutcome, ComplexParameterEntry,
    ComplexPoint, ComplexRepresentation, PhaseUnit, parse_complex_catalog, sort_nonreserved_points,
};

pub const TITLE: &str = "Parameter Editor";
pub const FORM_RESOURCE: &str = "CplxForm";

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PointField {
    Frequency,
    First,
    Second,
}

#[derive(Debug, Clone)]
pub enum Message {
    RepresentationSelected(ComplexRepresentation),
    TogglePhaseUnit,
    GridValueChanged {
        point: usize,
        field: PointField,
        value: String,
    },
    AddNew,
    RemoveLast,
    ClearAll,
    Arrange,
    SaveAs,
    SavePathSelected(Option<PathBuf>),
    CatalogSaved(Result<PathBuf, ComplexCatalogError>),
    Load,
    LoadPathSelected(Option<PathBuf>),
    CatalogLoaded(CatalogLoadResult),
    Accept,
    Cancel,
    Help,
}

#[derive(Debug, Clone, PartialEq, Eq)]
struct PointEdits {
    frequency: String,
    first: String,
    second: String,
}

impl From<ComplexPoint> for PointEdits {
    fn from(point: ComplexPoint) -> Self {
        Self {
            frequency: point.frequency.to_string(),
            first: point.first.to_string(),
            second: point.second.to_string(),
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
struct ActiveCell {
    point: usize,
    field: PointField,
}

#[derive(Debug, Clone, PartialEq)]
pub struct CatalogLoadResult {
    path: PathBuf,
    outcome: ComplexCatalogParseOutcome,
}

#[derive(Debug)]
pub struct Window {
    caller_entry: ComplexParameterEntry,
    working_points: Vec<ComplexPoint>,
    representation: ComplexRepresentation,
    phase_unit: PhaseUnit,
    row_labels: Vec<String>,
    grid_edits: Vec<PointEdits>,
    active_cell: Option<ActiveCell>,
    validation_failed: bool,
    remembered_path: PathBuf,
    saved_row_capacity: usize,
    grid_row_capacity: usize,
    visible: bool,
    accepted: bool,
    last_error: Option<String>,
}

impl Window {
    #[must_use]
    pub fn new(caller_entry: ComplexParameterEntry) -> Self {
        let caller_entry = if caller_entry.points.is_empty() {
            ComplexParameterEntry::new(vec![ComplexPoint::new(1e-12, 1.0, 0.0)])
        } else {
            caller_entry
        };
        let working_points = caller_entry.points.clone();
        let mut window = Self {
            caller_entry,
            working_points,
            representation: ComplexRepresentation::Rectangular,
            phase_unit: PhaseUnit::Degrees,
            row_labels: Vec::new(),
            grid_edits: Vec::new(),
            active_cell: None,
            validation_failed: false,
            remembered_path: PathBuf::from("noname.cpl"),
            saved_row_capacity: 9,
            grid_row_capacity: 9,
            visible: true,
            accepted: false,
            last_error: None,
        };
        window.rebuild_row_labels();
        window.repopulate_grid();
        window
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::RepresentationSelected(representation) => {
                self.select_representation(representation, false);
            }
            Message::TogglePhaseUnit => {
                let _ = self.toggle_phase_unit();
            }
            Message::GridValueChanged {
                point,
                field,
                value,
            } => self.set_grid_value(point, field, value),
            Message::AddNew => self.add_new_point(),
            Message::RemoveLast => {
                let _ = self.remove_last_point();
            }
            Message::ClearAll => self.clear_all_points(),
            Message::Arrange => {
                let _ = self.arrange_points();
            }
            Message::SaveAs => return self.begin_save(),
            Message::SavePathSelected(selection) => return self.handle_save_path(selection),
            Message::CatalogSaved(result) => match result {
                Ok(path) => {
                    self.remembered_path = path;
                    self.last_error = None;
                }
                Err(error) => self.last_error = Some(error.to_string()),
            },
            Message::Load => return self.begin_load(),
            Message::LoadPathSelected(selection) => return self.handle_load_path(selection),
            Message::CatalogLoaded(result) => self.finish_catalog_load(result),
            Message::Accept => {
                let _ = self.accept_changes();
            }
            Message::Cancel => {
                Self::cancel_click();
                self.visible = false;
            }
            Message::Help => Self::help_click(),
        }
        Task::none()
    }

    /// Implements Ghidra function `FUN_01404f30` at `0x01404F30`.
    ///
    /// Rust `String` and `Vec` provide the mode- and unit-aware label list.
    /// The method changes labels only.
    pub fn rebuild_row_labels(&mut self) {
        self.row_labels.clear();
        for index in 0..self.working_points.len() {
            self.row_labels.push(if index == 0 {
                "Frequency".to_owned()
            } else {
                format!("{index}. Frequency")
            });
            match self.representation {
                ComplexRepresentation::Rectangular => {
                    self.row_labels.push("Real part".to_owned());
                    self.row_labels.push("Imaginary part".to_owned());
                }
                ComplexRepresentation::Polar => {
                    self.row_labels.push("Magnitude".to_owned());
                    self.row_labels.push(match self.phase_unit {
                        PhaseUnit::Degrees => "Phase[deg]".to_owned(),
                        PhaseUnit::Radians => "Phase[rad]".to_owned(),
                    });
                }
            }
        }
    }

    /// Implements Ghidra function `FUN_01405a00` at `0x01405A00`.
    ///
    /// The iced text buffers replace the attribute-grid editors. The first
    /// staged frequency is normalized before rows are rebuilt.
    pub fn repopulate_grid(&mut self) {
        let Some(base) = self.working_points.first_mut() else {
            self.grid_edits.clear();
            self.last_error = Some("The complex parameter table has no base record.".to_owned());
            return;
        };
        base.frequency = 1e-12;
        self.grid_edits = self
            .working_points
            .iter()
            .copied()
            .map(PointEdits::from)
            .collect();
        self.grid_row_capacity = self
            .saved_row_capacity
            .max(self.working_points.len().saturating_mul(3));
        self.active_cell = None;
    }

    /// Implements Ghidra function `FUN_014061c0` at `0x014061C0`.
    ///
    /// Standard `f64` degree and radian conversion updates every staged phase,
    /// then the iced grid is rebuilt. Rectangular mode keeps this disabled.
    #[must_use]
    pub fn toggle_phase_unit(&mut self) -> bool {
        if self.representation != ComplexRepresentation::Polar {
            return false;
        }
        let old_unit = self.phase_unit;
        self.phase_unit = match old_unit {
            PhaseUnit::Degrees => PhaseUnit::Radians,
            PhaseUnit::Radians => PhaseUnit::Degrees,
        };
        for point in &mut self.working_points {
            *point = point.convert_phase(old_unit, self.phase_unit);
        }
        self.rebuild_row_labels();
        self.repopulate_grid();
        true
    }

    /// Implements Ghidra function `FUN_014063c0` at `0x014063C0`.
    ///
    /// The recovered Help handler returns without an application action.
    pub const fn help_click() {}

    /// Implements Ghidra function `FUN_014063d0` at `0x014063D0`.
    ///
    /// The recovered custom Cancel handler is a no-op. The iced shell applies
    /// the inherited cancel result after this method returns.
    pub const fn cancel_click() {}

    /// Implements Ghidra function `FUN_014063e0` at `0x014063E0`.
    ///
    /// Validation precedes a stable standard-library sort. Polar staged values
    /// are converted to Cartesian values before the caller entry is replaced.
    #[must_use]
    pub fn accept_changes(&mut self) -> bool {
        self.validation_failed = !self.commit_active_cell();
        if self.validation_failed {
            return false;
        }
        sort_nonreserved_points(&mut self.working_points);
        if self.representation == ComplexRepresentation::Polar {
            for point in &mut self.working_points {
                *point = point.to_rectangular(self.phase_unit);
            }
        }
        self.caller_entry
            .replace_points(self.working_points.clone());
        self.accepted = true;
        self.visible = false;
        self.last_error = None;
        true
    }

    /// Implements Ghidra function `FUN_01406a40` at `0x01406A40`.
    ///
    /// Interactive changes convert all staged values. A load can suppress the
    /// arithmetic and restore the catalog representation as stored.
    pub fn select_representation(
        &mut self,
        representation: ComplexRepresentation,
        suppress_conversion: bool,
    ) {
        if representation == self.representation {
            return;
        }
        if !suppress_conversion {
            match representation {
                ComplexRepresentation::Rectangular => {
                    for point in &mut self.working_points {
                        *point = point.to_rectangular(self.phase_unit);
                    }
                    self.phase_unit = PhaseUnit::Radians;
                }
                ComplexRepresentation::Polar => {
                    for point in &mut self.working_points {
                        *point = point.to_polar_degrees();
                    }
                    self.phase_unit = PhaseUnit::Degrees;
                }
            }
        }
        self.representation = representation;
        self.rebuild_row_labels();
        self.repopulate_grid();
    }

    /// Implements Ghidra function `FUN_01406e80` at `0x01406E80`.
    ///
    /// One default frequency and value triple is appended to staged state.
    pub fn add_new_point(&mut self) {
        let frequency = self
            .working_points
            .last()
            .map_or(1.0, |point| point.frequency + 1.0);
        self.working_points
            .push(ComplexPoint::new(frequency, 0.0, 0.0));
        self.rebuild_row_labels();
        self.repopulate_grid();
    }

    /// Implements Ghidra function `FUN_01407100` at `0x01407100`.
    ///
    /// `Vec::pop` releases the final owned point and preserves base record zero.
    #[must_use]
    pub fn remove_last_point(&mut self) -> bool {
        if self.working_points.len() <= 1 {
            return false;
        }
        self.working_points.pop();
        self.rebuild_row_labels();
        self.repopulate_grid();
        true
    }

    /// Implements Ghidra function `FUN_01407220` at `0x01407220`.
    ///
    /// Owned staged points are released and the recovered base record is
    /// restored before the shared grid refresh normalizes its frequency.
    pub fn clear_all_points(&mut self) {
        self.working_points.clear();
        self.working_points.push(ComplexPoint::new(1e-20, 1.0, 0.0));
        self.rebuild_row_labels();
        self.repopulate_grid();
    }

    /// Implements Ghidra function `FUN_01407750` at `0x01407750`.
    ///
    /// `rfd::AsyncFileDialog` provides the maintained native Save dialog and
    /// iced `Task` preserves the accepted-only asynchronous message boundary.
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

    /// Implements Ghidra function `FUN_01407de0` at `0x01407DE0`.
    ///
    /// The maintained native Open dialog is asynchronous. Cancellation keeps
    /// staged state. Acceptance clears it before parsing, so errors do not roll
    /// the previous state back.
    pub fn begin_load(&self) -> Task<Message> {
        Task::perform(select_load_path(), Message::LoadPathSelected)
    }

    /// Implements Ghidra function `FUN_01408020` at `0x01408020`.
    ///
    /// The active cell must validate before the stable frequency sort and full
    /// iced grid refresh. Caller-owned state is not changed.
    #[must_use]
    pub fn arrange_points(&mut self) -> bool {
        self.validation_failed = !self.commit_active_cell();
        if self.validation_failed {
            return false;
        }
        sort_nonreserved_points(&mut self.working_points);
        self.rebuild_row_labels();
        self.repopulate_grid();
        true
    }

    #[must_use]
    pub fn catalog_text(&self) -> String {
        ComplexCatalog::new(
            self.representation,
            self.phase_unit,
            self.working_points.clone(),
        )
        .to_catalog_text()
    }

    /// Writes the staged catalog document.
    ///
    /// # Errors
    ///
    /// Returns an I/O error when the target cannot be created or written.
    pub fn write_catalog(&self, path: &Path) -> Result<(), ComplexCatalogError> {
        fs::write(path, self.catalog_text()).map_err(ComplexCatalogError::from)
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let mut grid =
            column![row![text("Name").width(Length::Fill), text("Value")].spacing(8)].spacing(4);
        if let Some(base) = self.grid_edits.first() {
            grid = grid.push(grid_row(
                &self.row_labels[1],
                &base.first,
                0,
                PointField::First,
            ));
            grid = grid.push(grid_row(
                &self.row_labels[2],
                &base.second,
                0,
                PointField::Second,
            ));
        }
        for point in 1..self.grid_edits.len() {
            let label = point * 3;
            grid = grid.push(grid_row(
                &self.row_labels[label],
                &self.grid_edits[point].frequency,
                point,
                PointField::Frequency,
            ));
            grid = grid.push(grid_row(
                &self.row_labels[label + 1],
                &self.grid_edits[point].first,
                point,
                PointField::First,
            ));
            grid = grid.push(grid_row(
                &self.row_labels[label + 2],
                &self.grid_edits[point].second,
                point,
                PointField::Second,
            ));
        }

        let phase_button = if self.representation == ComplexRepresentation::Polar {
            button(self.phase_action_caption()).on_press(Message::TogglePhaseUnit)
        } else {
            button(self.phase_action_caption())
        };

        container(
            column![
                text(TITLE).size(24),
                row![
                    radio(
                        "Real and imaginary part",
                        ComplexRepresentation::Rectangular,
                        Some(self.representation),
                        Message::RepresentationSelected,
                    ),
                    radio(
                        "Magnitude and phase",
                        ComplexRepresentation::Polar,
                        Some(self.representation),
                        Message::RepresentationSelected,
                    ),
                    phase_button,
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
                    button("Arrange points").on_press(Message::Arrange),
                    button("OK").on_press(Message::Accept),
                    button("Cancel").on_press(Message::Cancel),
                    button("Help").on_press(Message::Help),
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
    pub const fn caller_entry(&self) -> &ComplexParameterEntry {
        &self.caller_entry
    }

    #[must_use]
    pub fn working_points(&self) -> &[ComplexPoint] {
        &self.working_points
    }

    #[must_use]
    pub fn row_labels(&self) -> &[String] {
        &self.row_labels
    }

    #[must_use]
    pub const fn representation(&self) -> ComplexRepresentation {
        self.representation
    }

    #[must_use]
    pub const fn phase_unit(&self) -> PhaseUnit {
        self.phase_unit
    }

    #[must_use]
    pub const fn phase_action_caption(&self) -> &'static str {
        match self.phase_unit {
            PhaseUnit::Degrees => "Change to rad",
            PhaseUnit::Radians => "Change to deg",
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

    fn set_grid_value(&mut self, point: usize, field: PointField, value: String) {
        let Some(edits) = self.grid_edits.get_mut(point) else {
            return;
        };
        match field {
            PointField::Frequency => edits.frequency = value,
            PointField::First => edits.first = value,
            PointField::Second => edits.second = value,
        }
        self.active_cell = Some(ActiveCell { point, field });
    }

    fn commit_active_cell(&mut self) -> bool {
        let Some(active) = self.active_cell else {
            return true;
        };
        let Some(edits) = self.grid_edits.get(active.point) else {
            self.last_error = Some("The active complex point is not available.".to_owned());
            return false;
        };
        let source = match active.field {
            PointField::Frequency => &edits.frequency,
            PointField::First => &edits.first,
            PointField::Second => &edits.second,
        };
        let Ok(value) = source.trim().parse::<f64>() else {
            self.last_error = Some("The active complex value is not a number.".to_owned());
            return false;
        };
        let Some(point) = self.working_points.get_mut(active.point) else {
            self.last_error = Some("The active complex point is not available.".to_owned());
            return false;
        };
        match active.field {
            PointField::Frequency => point.frequency = value,
            PointField::First => point.first = value,
            PointField::Second => point.second = value,
        }
        self.active_cell = None;
        self.last_error = None;
        true
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
        self.working_points.clear();
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
        self.working_points = result.outcome.points;
        if let (Some(representation), Some(phase_unit)) =
            (result.outcome.representation, result.outcome.phase_unit)
        {
            self.representation = representation;
            self.phase_unit = phase_unit;
        }
        if let Some(error) = result.outcome.error {
            self.last_error = Some(error.to_string());
            return;
        }
        if self.working_points.is_empty() {
            self.last_error = Some("The catalog has no complex point.".to_owned());
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
    point: usize,
    field: PointField,
) -> Element<'a, Message> {
    row![
        text(label).width(Length::Fill),
        text_input("", value).on_input(move |value| Message::GridValueChanged {
            point,
            field,
            value,
        }),
    ]
    .spacing(8)
    .into()
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
        .set_file_name(file_name)
        .save_file()
        .await
        .map(|file| file.path().to_path_buf())
}

async fn select_load_path() -> Option<PathBuf> {
    AsyncFileDialog::new()
        .add_filter("Complex numbers to file", &["cpl"])
        .pick_file()
        .await
        .map(|file| file.path().to_path_buf())
}

fn write_catalog_file(path: PathBuf, contents: String) -> Result<PathBuf, ComplexCatalogError> {
    fs::write(&path, contents)?;
    Ok(path)
}

fn load_catalog_file(path: PathBuf) -> CatalogLoadResult {
    let outcome = match fs::read_to_string(&path) {
        Ok(source) => parse_complex_catalog(&source),
        Err(error) => ComplexCatalogParseOutcome {
            representation: None,
            phase_unit: None,
            points: Vec::new(),
            error: Some(ComplexCatalogError::from(error)),
        },
    };
    CatalogLoadResult { path, outcome }
}

#[cfg(test)]
mod tests {
    use super::{Message, PointField, Window};
    use tiara_core::complex_parameter::{
        ComplexParameterEntry, ComplexPoint, ComplexRepresentation, PhaseUnit,
    };

    fn entry() -> ComplexParameterEntry {
        ComplexParameterEntry::new(vec![
            ComplexPoint::new(5.0, 1.0, 0.0),
            ComplexPoint::new(3.0, 3.0, 30.0),
            ComplexPoint::new(1.0, 1.0, 10.0),
            ComplexPoint::new(3.0, 4.0, 40.0),
        ])
    }

    #[test]
    fn initial_rectangular_grid_normalizes_base_frequency_and_keeps_caller_data() {
        let window = Window::new(entry());

        assert!((window.working_points()[0].frequency - 1e-12).abs() <= f64::EPSILON);
        assert!((window.caller_entry().points[0].frequency - 5.0).abs() <= f64::EPSILON);
        assert_eq!(window.row_labels()[1], "Real part");
        assert_eq!(window.row_labels()[2], "Imaginary part");
    }

    #[test]
    fn representation_and_unit_changes_convert_all_staged_values() {
        let mut window = Window::new(ComplexParameterEntry::new(vec![ComplexPoint::new(
            1.0, 0.0, 2.0,
        )]));

        window.select_representation(ComplexRepresentation::Polar, false);
        assert_eq!(window.phase_unit(), PhaseUnit::Degrees);
        assert!((window.working_points()[0].first - 2.0).abs() <= f64::EPSILON);
        assert!((window.working_points()[0].second - 90.0).abs() <= f64::EPSILON);
        assert!(window.toggle_phase_unit());
        assert_eq!(window.phase_unit(), PhaseUnit::Radians);
        assert!((window.working_points()[0].second - std::f64::consts::FRAC_PI_2).abs() <= 1e-12);
    }

    #[test]
    fn point_commands_preserve_and_restore_the_base_record() {
        let mut window = Window::new(ComplexParameterEntry::new(vec![ComplexPoint::new(
            1.0, 1.0, 0.0,
        )]));
        assert!(!window.remove_last_point());

        window.add_new_point();
        assert_eq!(
            window.working_points()[1],
            ComplexPoint::new(1.000_000_000_001, 0.0, 0.0)
        );
        assert!(window.remove_last_point());
        window.clear_all_points();
        assert_eq!(
            window.working_points(),
            &[ComplexPoint::new(1e-12, 1.0, 0.0)]
        );
    }

    #[test]
    fn invalid_cell_blocks_arrange_and_accept_without_caller_mutation() {
        let original = entry();
        let mut window = Window::new(original.clone());
        window.set_grid_value(1, PointField::Frequency, "bad".to_owned());

        assert!(!window.arrange_points());
        assert!(!window.accept_changes());
        assert_eq!(window.caller_entry(), &original);
        assert!(window.is_visible());
    }

    #[test]
    fn accept_stably_sorts_and_commits_cartesian_values() {
        let mut window = Window::new(entry());
        window.select_representation(ComplexRepresentation::Polar, true);
        window.phase_unit = PhaseUnit::Degrees;

        assert!(window.accept_changes());
        assert_eq!(
            window
                .caller_entry()
                .points
                .iter()
                .skip(1)
                .map(|point| point.frequency)
                .collect::<Vec<_>>(),
            vec![1.0, 3.0, 3.0]
        );
        assert!(!window.is_visible());
        assert!(
            (window.caller_entry().real - window.caller_entry().points[0].first).abs()
                <= f64::EPSILON
        );
    }

    #[test]
    fn catalog_text_preserves_staged_representation_and_unit_marker() {
        let mut window = Window::new(entry());
        window.select_representation(ComplexRepresentation::Polar, false);
        assert!(window.catalog_text().contains("\nD\n"));
        assert!(window.toggle_phase_unit());
        assert!(window.catalog_text().contains("\nR\n"));
    }

    #[test]
    fn inherited_help_and_cancel_handlers_do_not_change_staged_data() {
        let mut window = Window::new(entry());
        let staged = window.working_points().to_vec();

        let _task = window.update(Message::Help);
        assert_eq!(window.working_points(), staged);
        let _task = window.update(Message::Cancel);
        assert_eq!(window.working_points(), staged);
        assert!(!window.is_visible());
    }

    #[test]
    fn iced_update_routes_staged_row_changes_without_a_live_window() {
        let mut window = Window::new(entry());

        let _task = window.update(Message::GridValueChanged {
            point: 1,
            field: PointField::Frequency,
            value: "2".to_owned(),
        });
        let _task = window.update(Message::Arrange);

        assert!((window.working_points()[1].frequency - 1.0).abs() <= f64::EPSILON);
        assert!((window.working_points()[2].frequency - 2.0).abs() <= f64::EPSILON);
    }
}
