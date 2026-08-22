//! Component Report behavior for the Footprint Name Editor.
//!
//! `iced` owns the window state and messages. The report, renumber, and
//! location traits preserve the application-service boundaries that cannot be
//! recovered as portable UI code.

use iced::widget::{Column, Row, button, column, container, row, scrollable, text, text_input};
use iced::{Alignment, Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "Footprint Name Editor";
pub const SCREENSHOT: &str = "screenshots/Footprint_Name_Editor.png";
pub const FORM_RESOURCE: &str = "frmComponentReport";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01bb5ca0");

const STATUS: &str = "Footprint assignments";
const EXCLUDED_RENUMBER_KINDS: [u16; 2] = [0x3a, 0x96];

pub type ComponentId = u64;
pub type ContextId = u64;
pub type ModelId = u64;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum RecordType {
    Component,
    Other,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ReportMembership {
    Included,
    Excluded,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ModelScope {
    Current,
    Nested,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DrawingContext {
    Available,
    Unavailable,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TraversalControl {
    Complete,
    StopAfter(usize),
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ComponentRecord {
    pub id: ComponentId,
    pub record_type: RecordType,
    pub kind: u16,
    pub name: String,
    pub number: i32,
    pub report_first: String,
    pub report_second: String,
    pub owner_context: Option<ContextId>,
    pub report_membership: ReportMembership,
    pub renumber_scope: ModelScope,
    pub edit_scope: ModelScope,
    pub nested_model: Option<Box<ComponentModel>>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ComponentModel {
    pub id: ModelId,
    pub drawing_context: DrawingContext,
    pub traversal: TraversalControl,
    pub records: Vec<ComponentRecord>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ReportRow {
    pub component_id: Option<ComponentId>,
    pub first: String,
    pub second: String,
}

impl ReportRow {
    const fn empty() -> Self {
        Self {
            component_id: None,
            first: String::new(),
            second: String::new(),
        }
    }

    fn from_component(component: &ComponentRecord) -> Self {
        Self {
            component_id: Some(component.id),
            first: component.report_first.clone(),
            second: component.report_second.clone(),
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ReportEdits {
    pub first: String,
    pub second: Option<String>,
}

pub trait ReportAdapter {
    /// Converts visible cell text to the two recovered record assignments.
    /// `None` preserves the second value for the recovered empty marker.
    fn decode_edits(&mut self, row: &ReportRow, component: &ComponentRecord) -> ReportEdits;

    fn refresh_application(&mut self);

    fn notify_model_changed(&mut self, model: ModelId);

    fn close_report(&mut self);
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct RenumberCandidate {
    pub model_id: ModelId,
    pub component_id: ComponentId,
    pub name: String,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum RenumberCompletion {
    Changed,
    Unchanged,
}

pub trait RenumberAdapter {
    /// Prepares host-owned renumber data when the record belongs to the active
    /// operation context. Every eligible record is still collected.
    fn prepare_candidate(&mut self, candidate: &RenumberCandidate);

    fn run(
        &mut self,
        model: &mut ComponentModel,
        candidates: &[RenumberCandidate],
    ) -> RenumberCompletion;

    fn notify_model_changed(&mut self, model: ModelId);
}

pub trait LocationAdapter {
    fn active_context(&self) -> Option<ContextId>;

    fn activate_context(&mut self, context: ContextId);

    fn prepare_model(&mut self, model: ModelId);

    fn reveal_component(&mut self, model: ModelId, component: ComponentId);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ReportAction {
    Apply,
    Cancel,
    Renumber,
    Locate,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum GridColumn {
    First,
    Second,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    CellChanged {
        row: usize,
        column: GridColumn,
        value: String,
    },
    RowSelected(usize),
    ApplyPressed,
    CancelPressed,
    RenumberPressed,
    LocatePressed,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum LocationOutcome {
    NoRows,
    ContextActivated,
    Revealed { count: usize },
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum LocationError {
    InvalidRow,
    MissingComponent,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Window {
    model: Option<ComponentModel>,
    rows: Vec<ReportRow>,
    selected_row: usize,
    first_column_visible: bool,
    action_request: Option<ReportAction>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            model: None,
            rows: vec![ReportRow::empty()],
            selected_row: 0,
            first_column_visible: false,
            action_request: None,
        }
    }
}

impl Window {
    #[must_use]
    pub fn new(model: ComponentModel) -> Self {
        let mut window = Self::default();
        window.rebuild_report(model);
        window
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::CellChanged { row, column, value } => {
                if let Some(report_row) = self.rows.get_mut(row) {
                    match column {
                        GridColumn::First => report_row.first = value,
                        GridColumn::Second => report_row.second = value,
                    }
                }
            }
            Message::RowSelected(row) => {
                if row < self.rows.len() {
                    self.selected_row = row;
                }
            }
            Message::ApplyPressed => self.action_request = Some(ReportAction::Apply),
            Message::CancelPressed => self.action_request = Some(ReportAction::Cancel),
            Message::RenumberPressed => self.action_request = Some(ReportAction::Renumber),
            Message::LocatePressed => self.action_request = Some(ReportAction::Locate),
        }
    }

    /// Ports Ghidra function `FUN_01bb5f00` at `0x01BB5F00`.
    ///
    /// The supplied model becomes the current report model. Eligible records
    /// populate the two editable columns in traversal order. An empty model
    /// produces one empty data row and hides the first column. A stopped
    /// traversal returns `false` and preserves the rows collected before it.
    pub fn rebuild_report(&mut self, model: ComponentModel) -> bool {
        self.rows.clear();
        let complete = populate_report_rows(&model, &mut self.rows);
        self.first_column_visible = !self.rows.is_empty();
        if self.rows.is_empty() {
            self.rows.push(ReportRow::empty());
        }
        self.selected_row = 0;
        self.model = Some(model);
        complete
    }

    /// Ports Ghidra function `FUN_01bb61c0` at `0x01BB61C0`.
    ///
    /// Each real row is decoded through the report adapter, propagated to
    /// matching records, and written to its direct record. Application refresh
    /// and close still occur when there are no real rows. Model notification
    /// occurs only when a report model exists.
    pub fn apply_and_close<A>(&mut self, adapter: &mut A)
    where
        A: ReportAdapter + ?Sized,
    {
        if let Some(model) = self.model.as_mut() {
            for row in self.rows.iter().filter(|row| row.component_id.is_some()) {
                let Some(component_id) = row.component_id else {
                    continue;
                };
                let Some(component) = model
                    .records
                    .iter()
                    .find(|component| component.id == component_id)
                    .cloned()
                else {
                    continue;
                };
                let edits = adapter.decode_edits(row, &component);
                propagate_report_edits(model, component_id, &edits);
                if let Some(component) = model
                    .records
                    .iter_mut()
                    .find(|component| component.id == component_id)
                {
                    apply_direct_edits(component, &edits);
                }
            }
        }

        adapter.refresh_application();
        if let Some(model) = &self.model {
            adapter.notify_model_changed(model.id);
        }
        adapter.close_report();
        self.action_request = None;
    }

    /// Ports Ghidra function `FUN_01bb6500` at `0x01BB6500`.
    ///
    /// Closing through Cancel does not read or apply report rows.
    pub fn cancel<A>(&mut self, adapter: &mut A)
    where
        A: ReportAdapter + ?Sized,
    {
        adapter.close_report();
        self.action_request = None;
    }

    /// Ports Ghidra function `FUN_01bb6510` at `0x01BB6510`.
    ///
    /// The shared renumber operation runs first. The report rows are then
    /// cleared and rebuilt from the same model for both completion outcomes.
    /// The rebuild result is returned for tests and host diagnostics; the UI
    /// handler does not branch on it and keeps the report open.
    pub fn renumber_and_rebuild<A>(&mut self, adapter: &mut A) -> bool
    where
        A: RenumberAdapter + ?Sized,
    {
        let Some(mut model) = self.model.take() else {
            self.rows.clear();
            self.rows.push(ReportRow::empty());
            self.first_column_visible = false;
            self.action_request = None;
            return true;
        };

        run_shared_component_renumber(&mut model, adapter);
        self.action_request = None;
        self.rebuild_report(model)
    }

    /// Ports Ghidra function `FUN_01bb6680` at `0x01BB6680`.
    ///
    /// Empty reports are a no-op. A valid row first activates its owning
    /// schematic context when needed. If the report model has a drawing
    /// context, the selected record and every related match are revealed.
    ///
    /// # Errors
    ///
    /// Returns an error for a row/list mismatch or a missing row component.
    pub fn locate_selected<A>(&mut self, adapter: &mut A) -> Result<LocationOutcome, LocationError>
    where
        A: LocationAdapter + ?Sized,
    {
        if self.rows.iter().all(|row| row.component_id.is_none()) {
            self.action_request = None;
            return Ok(LocationOutcome::NoRows);
        }
        let component_id = self
            .rows
            .get(self.selected_row)
            .ok_or(LocationError::InvalidRow)?
            .component_id
            .ok_or(LocationError::InvalidRow)?;
        let model = self.model.as_ref().ok_or(LocationError::MissingComponent)?;
        let selected = model
            .records
            .iter()
            .find(|component| component.id == component_id)
            .ok_or(LocationError::MissingComponent)?;

        if let Some(context) = selected.owner_context
            && adapter.active_context() != Some(context)
        {
            adapter.activate_context(context);
        }

        if model.drawing_context == DrawingContext::Unavailable {
            self.action_request = None;
            return Ok(LocationOutcome::ContextActivated);
        }

        adapter.prepare_model(model.id);
        adapter.reveal_component(model.id, selected.id);
        let mut count = 1;
        for candidate in &model.records {
            if reveal_related_match(model.id, selected, candidate, adapter) {
                count += 1;
            }
        }
        self.action_request = None;
        Ok(LocationOutcome::Revealed { count })
    }

    #[must_use]
    pub fn rows(&self) -> &[ReportRow] {
        &self.rows
    }

    #[must_use]
    pub const fn model(&self) -> Option<&ComponentModel> {
        self.model.as_ref()
    }

    #[must_use]
    pub const fn first_column_visible(&self) -> bool {
        self.first_column_visible
    }

    #[must_use]
    pub const fn action_request(&self) -> Option<ReportAction> {
        self.action_request
    }

    pub const fn take_action_request(&mut self) -> Option<ReportAction> {
        self.action_request.take()
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered form-create connection.
    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let mut grid = Column::new().spacing(6);
        for (row_index, report_row) in self.rows.iter().enumerate() {
            grid = grid.push(report_row_view(report_row, row_index));
        }

        let controls = row![
            button("Locate").on_press(Message::LocatePressed),
            button("Renumber").on_press(Message::RenumberPressed),
            button("OK").on_press(Message::ApplyPressed),
            button("Cancel").on_press(Message::CancelPressed),
        ]
        .spacing(8)
        .align_y(Alignment::Center);
        let body: Element<'_, Message> = container(
            column![
                row![
                    text("Footprint").width(Length::FillPortion(1)),
                    text("Name").width(Length::FillPortion(1)),
                ]
                .spacing(8),
                scrollable(grid).height(Length::Fill),
                controls,
            ]
            .spacing(10),
        )
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

/// Ports Ghidra function `FUN_019acb60` at `0x019ACB60`.
///
/// Component records are filtered by recovered type, kind, and number rules.
/// Records whose explicit scope is nested recurse into that model. Every other
/// eligible record is prepared through the adapter and appended in traversal
/// order.
pub fn collect_eligible_renumber_records<A>(
    model: &ComponentModel,
    adapter: &mut A,
    candidates: &mut Vec<RenumberCandidate>,
) where
    A: RenumberAdapter + ?Sized,
{
    for component in &model.records {
        if component.record_type != RecordType::Component
            || EXCLUDED_RENUMBER_KINDS.contains(&component.kind)
            || component.number >= 2
        {
            continue;
        }

        if component.renumber_scope == ModelScope::Nested
            && let Some(nested_model) = &component.nested_model
        {
            collect_eligible_renumber_records(nested_model, adapter, candidates);
            continue;
        }

        let candidate = RenumberCandidate {
            model_id: model.id,
            component_id: component.id,
            name: component.name.clone(),
        };
        adapter.prepare_candidate(&candidate);
        candidates.push(candidate);
    }
}

/// Ports Ghidra function `FUN_019acdc0` at `0x019ACDC0`.
///
/// A fresh collection is prepared, the shared interaction runs once, and a
/// model-change notification is sent only when the interaction reports a
/// completed change.
pub fn run_shared_component_renumber<A>(model: &mut ComponentModel, adapter: &mut A)
where
    A: RenumberAdapter + ?Sized,
{
    let mut candidates = Vec::new();
    collect_eligible_renumber_records(model, adapter, &mut candidates);
    if adapter.run(model, &candidates) == RenumberCompletion::Changed {
        adapter.notify_model_changed(model.id);
    }
}

/// Ports Ghidra function `FUN_01bb6550` at `0x01BB6550`.
///
/// A related component is revealed only when it is not the selected record,
/// has the same component kind and name, and has a different number.
pub fn reveal_related_match<A>(
    model: ModelId,
    selected: &ComponentRecord,
    candidate: &ComponentRecord,
    adapter: &mut A,
) -> bool
where
    A: LocationAdapter + ?Sized,
{
    if !matches_related_component(selected, candidate) {
        return false;
    }
    adapter.reveal_component(model, candidate.id);
    true
}

/// Ports Ghidra function `FUN_01bb7690` at `0x01BB7690`.
///
/// Matching excludes the source record, non-components, other kinds or names,
/// and equal component numbers. The first value is always assigned. The
/// second value is assigned only when the report adapter did not map it to the
/// recovered empty marker.
pub fn apply_matching_report_record(
    source: &ComponentRecord,
    candidate: &mut ComponentRecord,
    edits: &ReportEdits,
) -> bool {
    if !matches_related_component(source, candidate) {
        return false;
    }
    apply_direct_edits(candidate, edits);
    true
}

/// Ports Ghidra function `FUN_01bb77f0` at `0x01BB77F0`.
///
/// The report model is scanned by default. A source record with explicit
/// nested edit scope uses its nested model instead. Each related match receives
/// the two decoded report assignments through [`apply_matching_report_record`].
pub fn propagate_report_edits(
    model: &mut ComponentModel,
    source_id: ComponentId,
    edits: &ReportEdits,
) -> usize {
    let Some(source_index) = model
        .records
        .iter()
        .position(|component| component.id == source_id)
    else {
        return 0;
    };
    let source = model.records[source_index].clone();
    let records = if source.edit_scope == ModelScope::Nested {
        let Some(nested_model) = model.records[source_index].nested_model.as_mut() else {
            return 0;
        };
        &mut nested_model.records
    } else {
        &mut model.records
    };

    records
        .iter_mut()
        .map(|candidate| usize::from(apply_matching_report_record(&source, candidate, edits)))
        .sum()
}

fn populate_report_rows(model: &ComponentModel, rows: &mut Vec<ReportRow>) -> bool {
    for (record_index, component) in model.records.iter().enumerate() {
        if let TraversalControl::StopAfter(limit) = model.traversal
            && record_index >= limit
        {
            return false;
        }
        if component.record_type == RecordType::Component
            && component.report_membership == ReportMembership::Included
        {
            rows.push(ReportRow::from_component(component));
        }
    }
    true
}

fn apply_direct_edits(component: &mut ComponentRecord, edits: &ReportEdits) {
    edits.first.clone_into(&mut component.report_first);
    if let Some(second) = &edits.second {
        second.clone_into(&mut component.report_second);
    }
}

fn matches_related_component(source: &ComponentRecord, candidate: &ComponentRecord) -> bool {
    candidate.id != source.id
        && candidate.record_type == RecordType::Component
        && candidate.kind == source.kind
        && candidate.name == source.name
        && candidate.number != source.number
}

fn report_row_view(report_row: &ReportRow, row_index: usize) -> Element<'_, Message> {
    row![
        text_input("", &report_row.first)
            .on_input(move |value| Message::CellChanged {
                row: row_index,
                column: GridColumn::First,
                value,
            })
            .width(Length::FillPortion(1)),
        text_input("", &report_row.second)
            .on_input(move |value| Message::CellChanged {
                row: row_index,
                column: GridColumn::Second,
                value,
            })
            .width(Length::FillPortion(1)),
        button("Select").on_press(Message::RowSelected(row_index)),
    ]
    .spacing(8)
    .align_y(Alignment::Center)
    .into()
}

#[cfg(test)]
mod tests {
    use super::*;

    fn component(id: ComponentId, kind: u16, name: &str, number: i32) -> ComponentRecord {
        ComponentRecord {
            id,
            record_type: RecordType::Component,
            kind,
            name: name.to_owned(),
            number,
            report_first: format!("first-{id}"),
            report_second: format!("second-{id}"),
            owner_context: Some(id + 100),
            report_membership: ReportMembership::Included,
            renumber_scope: ModelScope::Current,
            edit_scope: ModelScope::Current,
            nested_model: None,
        }
    }

    fn model(records: Vec<ComponentRecord>) -> ComponentModel {
        ComponentModel {
            id: 7,
            drawing_context: DrawingContext::Available,
            traversal: TraversalControl::Complete,
            records,
        }
    }

    #[derive(Default)]
    struct Renumber {
        prepared: Vec<ComponentId>,
        ran_with: Vec<ComponentId>,
        notifications: Vec<ModelId>,
        completion: Option<RenumberCompletion>,
        replacement_first: Option<String>,
    }

    impl RenumberAdapter for Renumber {
        fn prepare_candidate(&mut self, candidate: &RenumberCandidate) {
            self.prepared.push(candidate.component_id);
        }

        fn run(
            &mut self,
            model: &mut ComponentModel,
            candidates: &[RenumberCandidate],
        ) -> RenumberCompletion {
            self.ran_with = candidates
                .iter()
                .map(|candidate| candidate.component_id)
                .collect();
            if let Some(replacement) = &self.replacement_first
                && let Some(component) = model.records.first_mut()
            {
                replacement.clone_into(&mut component.report_first);
            }
            self.completion.unwrap_or(RenumberCompletion::Unchanged)
        }

        fn notify_model_changed(&mut self, model: ModelId) {
            self.notifications.push(model);
        }
    }

    #[test]
    fn renumber_collection_filters_records_and_recurses_into_nested_models() {
        let mut other = component(2, 1, "other", 0);
        other.record_type = RecordType::Other;
        let excluded_kind = component(3, 0x3a, "excluded", 0);
        let high_number = component(4, 1, "high", 2);
        let nested = model(vec![component(6, 2, "nested", 1)]);
        let mut nested_owner = component(5, 2, "owner", 0);
        nested_owner.renumber_scope = ModelScope::Nested;
        nested_owner.nested_model = Some(Box::new(nested));
        let report_model = model(vec![
            component(1, 1, "eligible", 0),
            other,
            excluded_kind,
            high_number,
            nested_owner,
        ]);
        let mut renumber = Renumber::default();
        let mut candidates = Vec::new();

        collect_eligible_renumber_records(&report_model, &mut renumber, &mut candidates);

        assert_eq!(renumber.prepared, [1, 6]);
        assert_eq!(
            candidates
                .iter()
                .map(|candidate| candidate.component_id)
                .collect::<Vec<_>>(),
            [1, 6]
        );
    }

    #[test]
    fn shared_renumber_notifies_only_for_completed_changes() {
        let mut report_model = model(vec![component(1, 1, "R", 0)]);
        let mut unchanged = Renumber::default();
        run_shared_component_renumber(&mut report_model, &mut unchanged);
        assert!(unchanged.notifications.is_empty());

        let mut changed = Renumber {
            completion: Some(RenumberCompletion::Changed),
            ..Renumber::default()
        };
        run_shared_component_renumber(&mut report_model, &mut changed);
        assert_eq!(changed.notifications, [7]);
    }

    #[test]
    fn rebuild_populates_rows_and_empty_models_keep_one_hidden_row() {
        let mut window = Window::new(model(vec![component(1, 1, "R", 0)]));
        assert_eq!(window.rows()[0].component_id, Some(1));
        assert!(window.first_column_visible());

        assert!(window.rebuild_report(model(Vec::new())));
        assert_eq!(window.rows(), [ReportRow::empty()]);
        assert!(!window.first_column_visible());
    }

    #[test]
    fn stopped_rebuild_returns_false_and_keeps_partial_rows() {
        let mut report_model = model(vec![component(1, 1, "R", 0), component(2, 2, "C", 0)]);
        report_model.traversal = TraversalControl::StopAfter(1);

        let mut window = Window::default();
        assert!(!window.rebuild_report(report_model));
        assert_eq!(window.rows().len(), 1);
        assert_eq!(window.rows()[0].component_id, Some(1));
    }

    #[derive(Default)]
    struct Report {
        calls: Vec<&'static str>,
        notified: Vec<ModelId>,
    }

    impl ReportAdapter for Report {
        fn decode_edits(&mut self, row: &ReportRow, _component: &ComponentRecord) -> ReportEdits {
            ReportEdits {
                first: row.first.clone(),
                second: (!row.second.is_empty()).then(|| row.second.clone()),
            }
        }

        fn refresh_application(&mut self) {
            self.calls.push("refresh");
        }

        fn notify_model_changed(&mut self, model: ModelId) {
            self.calls.push("notify");
            self.notified.push(model);
        }

        fn close_report(&mut self) {
            self.calls.push("close");
        }
    }

    #[test]
    fn apply_updates_direct_and_matching_records_then_refreshes_and_closes() {
        let mut matching = component(2, 9, "R", 2);
        matching.report_membership = ReportMembership::Excluded;
        let mut window = Window::new(model(vec![
            component(1, 9, "R", 1),
            matching,
            component(3, 9, "other", 3),
        ]));
        window.update(Message::CellChanged {
            row: 0,
            column: GridColumn::First,
            value: "new-first".to_owned(),
        });
        window.update(Message::CellChanged {
            row: 0,
            column: GridColumn::Second,
            value: "new-second".to_owned(),
        });
        let mut report = Report::default();

        window.apply_and_close(&mut report);

        let records = &window.model().expect("model").records;
        assert_eq!(records[0].report_first, "new-first");
        assert_eq!(records[0].report_second, "new-second");
        assert_eq!(records[1].report_first, "new-first");
        assert_eq!(records[1].report_second, "new-second");
        assert_eq!(records[2].report_first, "first-3");
        assert_eq!(report.calls, ["refresh", "notify", "close"]);
        assert_eq!(report.notified, [7]);
    }

    #[test]
    fn empty_apply_still_refreshes_and_closes_while_cancel_only_closes() {
        let mut window = Window::default();
        let mut apply_report = Report::default();
        window.apply_and_close(&mut apply_report);
        assert_eq!(apply_report.calls, ["refresh", "close"]);

        let mut window = Window::new(model(vec![component(1, 1, "R", 0)]));
        let before = window.model().cloned();
        let mut cancel_report = Report::default();
        window.cancel(&mut cancel_report);
        assert_eq!(cancel_report.calls, ["close"]);
        assert_eq!(window.model(), before.as_ref());
    }

    #[test]
    fn renumber_handler_rebuilds_for_unchanged_completion_and_keeps_open() {
        let mut window = Window::new(model(vec![component(1, 1, "R", 0)]));
        let mut renumber = Renumber {
            replacement_first: Some("renumbered".to_owned()),
            ..Renumber::default()
        };

        assert!(window.renumber_and_rebuild(&mut renumber));

        assert_eq!(window.rows()[0].first, "renumbered");
        assert!(renumber.notifications.is_empty());
        assert_eq!(renumber.ran_with, [1]);
    }

    #[derive(Default)]
    struct Location {
        active: Option<ContextId>,
        activated: Vec<ContextId>,
        prepared: Vec<ModelId>,
        revealed: Vec<ComponentId>,
    }

    impl LocationAdapter for Location {
        fn active_context(&self) -> Option<ContextId> {
            self.active
        }

        fn activate_context(&mut self, context: ContextId) {
            self.active = Some(context);
            self.activated.push(context);
        }

        fn prepare_model(&mut self, model: ModelId) {
            self.prepared.push(model);
        }

        fn reveal_component(&mut self, _model: ModelId, component: ComponentId) {
            self.revealed.push(component);
        }
    }

    #[test]
    fn related_reveal_requires_matching_kind_name_and_different_number() {
        let selected = component(1, 4, "R", 1);
        let matching = component(2, 4, "R", 2);
        let same_number = component(3, 4, "R", 1);
        let mut location = Location::default();

        assert!(reveal_related_match(7, &selected, &matching, &mut location));
        assert!(!reveal_related_match(
            7,
            &selected,
            &same_number,
            &mut location
        ));
        assert_eq!(location.revealed, [2]);
    }

    #[test]
    fn locate_activates_context_and_reveals_selected_and_related_records() {
        let mut window = Window::new(model(vec![
            component(1, 4, "R", 1),
            component(2, 4, "R", 2),
            component(3, 5, "R", 3),
        ]));
        let mut location = Location::default();

        let outcome = window.locate_selected(&mut location);

        assert_eq!(outcome, Ok(LocationOutcome::Revealed { count: 2 }));
        assert_eq!(location.activated, [101]);
        assert_eq!(location.prepared, [7]);
        assert_eq!(location.revealed, [1, 2]);
    }

    #[test]
    fn locate_is_noop_for_empty_report() {
        let mut window = Window::default();
        let mut location = Location::default();

        assert_eq!(
            window.locate_selected(&mut location),
            Ok(LocationOutcome::NoRows)
        );
        assert!(location.activated.is_empty());
        assert!(location.revealed.is_empty());
    }

    #[test]
    fn matching_edit_always_sets_first_and_preserves_marker_second() {
        let source = component(1, 4, "R", 1);
        let mut matching = component(2, 4, "R", 2);
        let edits = ReportEdits {
            first: "new-first".to_owned(),
            second: None,
        };

        assert!(apply_matching_report_record(&source, &mut matching, &edits));
        assert_eq!(matching.report_first, "new-first");
        assert_eq!(matching.report_second, "second-2");
    }

    #[test]
    fn propagation_uses_explicit_nested_model_scope() {
        let mut source = component(1, 4, "R", 1);
        source.edit_scope = ModelScope::Nested;
        source.nested_model = Some(Box::new(ComponentModel {
            id: 8,
            drawing_context: DrawingContext::Unavailable,
            traversal: TraversalControl::Complete,
            records: vec![component(2, 4, "R", 2)],
        }));
        let mut report_model = model(vec![source, component(3, 4, "R", 3)]);
        let edits = ReportEdits {
            first: "nested-first".to_owned(),
            second: Some("nested-second".to_owned()),
        };

        assert_eq!(propagate_report_edits(&mut report_model, 1, &edits), 1);

        let nested = report_model.records[0]
            .nested_model
            .as_ref()
            .expect("nested model");
        assert_eq!(nested.records[0].report_first, "nested-first");
        assert_eq!(report_model.records[1].report_first, "first-3");
    }
}
