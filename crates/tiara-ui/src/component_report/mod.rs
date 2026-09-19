//! Iced state for the recovered component report window.

pub const FORM_RESOURCE: &str = "frmComponentReport";
pub const HELP_CONTEXT: u32 = 0x0493;

/// The localized titles the create handler assigns to the two report columns.
pub const COLUMN_TITLE_MESSAGE_IDS: [u16; 2] = [0x0400, 0x0401];

/// The recovered per-column value kind. Both columns share it.
pub const COLUMN_VALUE_KIND: u8 = 2;

/// The recovered per-column picklist style. Both columns share it.
pub const COLUMN_PICKLIST_STYLE: u8 = 1;

/// The recovered per-column edit styles, in column order.
pub const COLUMN_EDIT_STYLES: [u8; 2] = [2, 0];

/// The recovered close action the window reports, which frees the form.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CloseAction {
    Free,
}

pub trait ComponentReportCreateHost {
    /// Blends the two designed form colours.
    fn blend_form_colors(&mut self);

    /// Creates the private component list the report rows are built from.
    fn create_private_list(&mut self);

    fn localize(&mut self, message_id: u16) -> String;

    fn set_column_title(&mut self, column: usize, title: &str);

    fn set_column_value_kind(&mut self, column: usize, kind: u8);

    fn set_column_picklist_style(&mut self, column: usize, style: u8);

    fn set_column_edit_style(&mut self, column: usize, style: u8);

    /// Sets the recovered per-column flag the second column receives.
    fn set_column_flag(&mut self, column: usize, value: bool);

    fn set_help_context(&mut self, context: u32);
}

/// Implements Ghidra function `FUN_01bb5ca0` at `0x01BB5CA0`.
///
/// Prepares the report window: it blends the two designed form colours, creates
/// the private component list, and configures both report columns before
/// assigning the help context.
///
/// Both columns get a localized title, the same value kind, and the same
/// picklist style; they differ only in their edit style, and the second column
/// additionally receives the recovered per-column flag. The handler loads no
/// component and fills no row, so the window opens empty until the caller
/// supplies data.
pub fn create_component_report(host: &mut impl ComponentReportCreateHost) {
    host.blend_form_colors();
    host.create_private_list();

    for (column, message_id) in COLUMN_TITLE_MESSAGE_IDS.into_iter().enumerate() {
        let title = host.localize(message_id);
        host.set_column_title(column, &title);
        host.set_column_value_kind(column, COLUMN_VALUE_KIND);
        host.set_column_picklist_style(column, COLUMN_PICKLIST_STYLE);
        host.set_column_edit_style(column, COLUMN_EDIT_STYLES[column]);
        if column == 1 {
            host.set_column_flag(column, true);
        }
    }

    host.set_help_context(HELP_CONTEXT);
}

/// Implements Ghidra function `FUN_01bb5ea0` at `0x01BB5EA0`.
///
/// Reports the free-after-close action. The recovered handler reads no state and
/// saves nothing, so every close frees the window whether or not the report was
/// used.
#[must_use]
pub const fn close_component_report() -> CloseAction {
    CloseAction::Free
}

/// The recovered edit styles the select-cell handler assigns to the value
/// column.
pub const EDIT_STYLE_EMPTY_CELL: u8 = 2;
pub const EDIT_STYLE_MARKED_CELL: u8 = 1;
pub const EDIT_STYLE_PLAIN_CELL: u8 = 0;

/// The recovered draw-format flags the marked cell is painted with.
pub const MARKED_CELL_DRAW_FLAGS: u32 = 0x0124;

/// The recovered inset the marked cell's rectangle is shrunk by before it is
/// painted.
pub const MARKED_CELL_INSET: i32 = 2;

/// The value column the report edits and paints.
pub const VALUE_COLUMN: usize = 1;

/// Implements Ghidra function `FUN_01bb6e90` at `0x01BB6E90`.
///
/// Chooses the value column's edit style from the cell the user selected.
///
/// An empty cell gets the first style, a cell whose text is the recovered
/// marker gets the second, and every other cell gets the third. The recovered
/// handler always assigns a style, so moving between rows can never leave the
/// column in the style of the previous row, and it changes no cell value.
#[must_use]
pub fn select_report_cell(cell_text: &str, marker: &str) -> u8 {
    if cell_text.is_empty() {
        EDIT_STYLE_EMPTY_CELL
    } else if cell_text == marker {
        EDIT_STYLE_MARKED_CELL
    } else {
        EDIT_STYLE_PLAIN_CELL
    }
}

/// A cell rectangle the report paints into.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CellRect {
    pub left: i32,
    pub top: i32,
    pub right: i32,
    pub bottom: i32,
}

impl CellRect {
    /// Shrinks the rectangle the way the recovered painter does.
    #[must_use]
    pub const fn inset(self, amount: i32) -> Self {
        Self {
            left: self.left + amount,
            top: self.top + amount,
            right: self.right - amount,
            bottom: self.bottom - amount,
        }
    }
}

pub trait ReportCellPainter {
    /// Prepares the cell canvas and paints the background.
    fn prepare_cell(&mut self, rect: CellRect);

    /// Draws the cell's own text with the recovered format flags.
    fn draw_cell_text(&mut self, text: &str, rect: CellRect, flags: u32);
}

/// Implements Ghidra function `FUN_01bb6d00` at `0x01BB6D00`.
///
/// Paints a report cell only when its row is marked.
///
/// The handler reads the row's value-column text, and a row whose value is not
/// the recovered marker is left to the grid's own painting. A marked row has
/// its rectangle shrunk on every side, its canvas prepared, and its own cell
/// text drawn with the recovered format flags, which is what gives those rows
/// their distinct look.
pub fn draw_report_cell(
    marked_value: &str,
    marker: &str,
    cell_text: &str,
    rect: CellRect,
    painter: &mut impl ReportCellPainter,
) -> bool {
    if marked_value != marker {
        return false;
    }

    let rect = rect.inset(MARKED_CELL_INSET);
    painter.prepare_cell(rect);
    painter.draw_cell_text(cell_text, rect, MARKED_CELL_DRAW_FLAGS);
    true
}

/// The separators the ellipsis handler uses inside a component's display text
/// and in the list entry it rebuilds.
///
/// Neither was recovered as a literal, so the caller supplies both.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ReportSeparators {
    /// Marks the tail the handler strips from the edited display text.
    pub value_terminator: char,
    /// Joins the component name and the edited value in the list entry.
    pub entry: char,
}

pub trait ReportPropertyEditorHost {
    /// The component the row was built from.
    fn row_component(&mut self, row: usize) -> u64;

    /// The component's current display text.
    fn display_text(&mut self, component: u64) -> String;

    /// Opens the component's property editor.
    fn edit_component(&mut self, component: u64);

    fn set_value_column_edit_style(&mut self, style: u8);

    fn set_cell_text(&mut self, column: usize, row: usize, text: &str);

    /// The stored list name for one row.
    fn row_name(&mut self, row: usize) -> String;

    fn set_row_entry(&mut self, row: usize, entry: &str);

    fn release_component(&mut self, component: u64);
}

/// Strips the recovered tail from an edited display text.
///
/// The recovered copy keeps everything before the terminator's preceding
/// character, so the terminator and the character in front of it are both
/// dropped. A text without the terminator keeps nothing, which matches the
/// recovered zero position.
#[must_use]
pub fn stripped_display_value(text: &str, terminator: char) -> String {
    text.find(terminator).map_or_else(String::new, |index| {
        let characters: Vec<char> = text[..index].chars().collect();
        characters
            .get(..characters.len().saturating_sub(1))
            .unwrap_or_default()
            .iter()
            .collect()
    })
}

/// Implements Ghidra function `FUN_01bb6ab0` at `0x01BB6AB0`.
///
/// Opens the row component's property editor and writes the result back only
/// when the user actually changed something.
///
/// The handler snapshots the component's display text, opens the editor, and
/// compares the text afterwards. An unchanged text leaves the grid, the list
/// entry, and the edit style alone; only a change switches the value column to
/// its plain edit style, writes the stripped value into the cell, and rebuilds
/// the row's list entry from the component name and that value.
///
/// The component reference is released on both paths.
pub fn edit_report_row(
    row: usize,
    separators: ReportSeparators,
    host: &mut impl ReportPropertyEditorHost,
) -> bool {
    let component = host.row_component(row);
    let before = host.display_text(component);
    host.edit_component(component);
    let after = host.display_text(component);

    let changed = after != before;
    if changed {
        host.set_value_column_edit_style(EDIT_STYLE_PLAIN_CELL);
        let value = stripped_display_value(&after, separators.value_terminator);
        host.set_cell_text(VALUE_COLUMN, row, &value);
        let name = host.row_name(row);
        host.set_row_entry(row, &format!("{name}{}{after}", separators.entry));
    }

    host.release_component(component);
    changed
}

/// An opaque handle to the document the report was built for.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct ReportDocument(pub u64);

pub trait ComponentReportTeardownHost {
    /// Releases the private component list.
    fn release_private_list(&mut self);

    /// Clears the process-wide report window instance.
    fn clear_window_instance(&mut self);

    /// Reports whether the document reference still resolves.
    fn document_is_live(&mut self, document: ReportDocument) -> bool;

    /// Notifies the document that its report window has closed.
    fn release_document(&mut self, document: ReportDocument);
}

/// Implements Ghidra function `FUN_01bb5eb0` at `0x01BB5EB0`.
///
/// Releases the private component list and clears the process-wide window
/// instance, so a later report command opens a fresh window.
///
/// The document is only notified when the report still holds a reference and
/// that reference still resolves, which is the recovered guard against a
/// document that was closed while its report stayed open. The handler saves no
/// report and writes no file.
pub fn destroy_component_report(
    document: Option<ReportDocument>,
    host: &mut impl ComponentReportTeardownHost,
) -> bool {
    host.release_private_list();
    host.clear_window_instance();

    let Some(document) = document else {
        return false;
    };
    if !host.document_is_live(document) {
        return false;
    }
    host.release_document(document);
    true
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum CreateStep {
        Colors,
        List,
        Title(usize, String),
        ValueKind(usize, u8),
        PicklistStyle(usize, u8),
        EditStyle(usize, u8),
        Flag(usize, bool),
        Help(u32),
    }

    #[derive(Debug, Default)]
    struct CreateHost {
        steps: Vec<CreateStep>,
    }

    impl ComponentReportCreateHost for CreateHost {
        fn blend_form_colors(&mut self) {
            self.steps.push(CreateStep::Colors);
        }

        fn create_private_list(&mut self) {
            self.steps.push(CreateStep::List);
        }

        fn localize(&mut self, message_id: u16) -> String {
            format!("title:{message_id:#06x}")
        }

        fn set_column_title(&mut self, column: usize, title: &str) {
            self.steps.push(CreateStep::Title(column, title.to_owned()));
        }

        fn set_column_value_kind(&mut self, column: usize, kind: u8) {
            self.steps.push(CreateStep::ValueKind(column, kind));
        }

        fn set_column_picklist_style(&mut self, column: usize, style: u8) {
            self.steps.push(CreateStep::PicklistStyle(column, style));
        }

        fn set_column_edit_style(&mut self, column: usize, style: u8) {
            self.steps.push(CreateStep::EditStyle(column, style));
        }

        fn set_column_flag(&mut self, column: usize, value: bool) {
            self.steps.push(CreateStep::Flag(column, value));
        }

        fn set_help_context(&mut self, context: u32) {
            self.steps.push(CreateStep::Help(context));
        }
    }

    #[test]
    fn create_configures_both_columns_before_assigning_the_help_context() {
        let mut host = CreateHost::default();

        create_component_report(&mut host);

        assert_eq!(
            host.steps,
            [
                CreateStep::Colors,
                CreateStep::List,
                CreateStep::Title(0, format!("title:{:#06x}", COLUMN_TITLE_MESSAGE_IDS[0])),
                CreateStep::ValueKind(0, COLUMN_VALUE_KIND),
                CreateStep::PicklistStyle(0, COLUMN_PICKLIST_STYLE),
                CreateStep::EditStyle(0, COLUMN_EDIT_STYLES[0]),
                CreateStep::Title(1, format!("title:{:#06x}", COLUMN_TITLE_MESSAGE_IDS[1])),
                CreateStep::ValueKind(1, COLUMN_VALUE_KIND),
                CreateStep::PicklistStyle(1, COLUMN_PICKLIST_STYLE),
                CreateStep::EditStyle(1, COLUMN_EDIT_STYLES[1]),
                CreateStep::Flag(1, true),
                CreateStep::Help(HELP_CONTEXT),
            ]
        );
    }

    const MARKER: &str = "<edit>";

    #[test]
    fn the_select_cell_style_depends_on_the_cells_own_text() {
        assert_eq!(select_report_cell("", MARKER), EDIT_STYLE_EMPTY_CELL);
        assert_eq!(select_report_cell(MARKER, MARKER), EDIT_STYLE_MARKED_CELL);
        assert_eq!(select_report_cell("10k", MARKER), EDIT_STYLE_PLAIN_CELL);
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum PaintStep {
        Prepare(CellRect),
        Text(String, CellRect, u32),
    }

    #[derive(Debug, Default)]
    struct Painter {
        steps: Vec<PaintStep>,
    }

    impl ReportCellPainter for Painter {
        fn prepare_cell(&mut self, rect: CellRect) {
            self.steps.push(PaintStep::Prepare(rect));
        }

        fn draw_cell_text(&mut self, text: &str, rect: CellRect, flags: u32) {
            self.steps
                .push(PaintStep::Text(text.to_owned(), rect, flags));
        }
    }

    const CELL: CellRect = CellRect {
        left: 10,
        top: 20,
        right: 110,
        bottom: 40,
    };

    #[test]
    fn only_a_marked_row_is_painted_and_it_is_inset_on_every_side() {
        let mut painter = Painter::default();

        assert!(draw_report_cell(MARKER, MARKER, "R1", CELL, &mut painter));

        let inset = CELL.inset(MARKED_CELL_INSET);
        assert_eq!(
            inset,
            CellRect {
                left: 12,
                top: 22,
                right: 108,
                bottom: 38,
            }
        );
        assert_eq!(
            painter.steps,
            [
                PaintStep::Prepare(inset),
                PaintStep::Text("R1".to_owned(), inset, MARKED_CELL_DRAW_FLAGS),
            ]
        );
    }

    #[test]
    fn an_unmarked_row_is_left_to_the_grids_own_painting() {
        let mut painter = Painter::default();

        assert!(!draw_report_cell("10k", MARKER, "R1", CELL, &mut painter));

        assert!(painter.steps.is_empty());
    }

    const SEPARATORS: ReportSeparators = ReportSeparators {
        value_terminator: '[',
        entry: '=',
    };

    #[test]
    fn the_stripped_value_drops_the_terminator_and_the_character_before_it() {
        assert_eq!(stripped_display_value("10k [ohm]", '['), "10k");
        assert_eq!(stripped_display_value("10k", '['), "");
        assert_eq!(stripped_display_value("[", '['), "");
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum EditStep {
        Edit(u64),
        Style(u8),
        Cell(usize, usize, String),
        Entry(usize, String),
        Release(u64),
    }

    #[derive(Debug, Default)]
    struct EditorHost {
        texts: Vec<String>,
        reads: usize,
        steps: Vec<EditStep>,
    }

    impl ReportPropertyEditorHost for EditorHost {
        fn row_component(&mut self, _row: usize) -> u64 {
            42
        }

        fn display_text(&mut self, _component: u64) -> String {
            let text = self.texts.get(self.reads).cloned().unwrap_or_default();
            self.reads += 1;
            text
        }

        fn edit_component(&mut self, component: u64) {
            self.steps.push(EditStep::Edit(component));
        }

        fn set_value_column_edit_style(&mut self, style: u8) {
            self.steps.push(EditStep::Style(style));
        }

        fn set_cell_text(&mut self, column: usize, row: usize, text: &str) {
            self.steps
                .push(EditStep::Cell(column, row, text.to_owned()));
        }

        fn row_name(&mut self, _row: usize) -> String {
            "R1".to_owned()
        }

        fn set_row_entry(&mut self, row: usize, entry: &str) {
            self.steps.push(EditStep::Entry(row, entry.to_owned()));
        }

        fn release_component(&mut self, component: u64) {
            self.steps.push(EditStep::Release(component));
        }
    }

    #[test]
    fn an_edited_value_updates_the_cell_the_entry_and_the_edit_style() {
        let mut host = EditorHost {
            texts: vec!["10k [ohm]".to_owned(), "22k [ohm]".to_owned()],
            ..EditorHost::default()
        };

        assert!(edit_report_row(3, SEPARATORS, &mut host));

        assert_eq!(
            host.steps,
            [
                EditStep::Edit(42),
                EditStep::Style(EDIT_STYLE_PLAIN_CELL),
                EditStep::Cell(VALUE_COLUMN, 3, "22k".to_owned()),
                EditStep::Entry(3, "R1=22k [ohm]".to_owned()),
                EditStep::Release(42),
            ]
        );
    }

    #[test]
    fn an_unchanged_value_only_opens_and_releases_the_component() {
        let mut host = EditorHost {
            texts: vec!["10k [ohm]".to_owned(), "10k [ohm]".to_owned()],
            ..EditorHost::default()
        };

        assert!(!edit_report_row(3, SEPARATORS, &mut host));

        assert_eq!(host.steps, [EditStep::Edit(42), EditStep::Release(42)]);
    }

    #[test]
    fn every_close_reports_the_free_action() {
        assert_eq!(close_component_report(), CloseAction::Free);
        assert_eq!(close_component_report(), CloseAction::Free);
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum TeardownStep {
        List,
        Instance,
        Live(ReportDocument),
        Release(ReportDocument),
    }

    #[derive(Debug, Default)]
    struct TeardownHost {
        live: bool,
        steps: Vec<TeardownStep>,
    }

    impl ComponentReportTeardownHost for TeardownHost {
        fn release_private_list(&mut self) {
            self.steps.push(TeardownStep::List);
        }

        fn clear_window_instance(&mut self) {
            self.steps.push(TeardownStep::Instance);
        }

        fn document_is_live(&mut self, document: ReportDocument) -> bool {
            self.steps.push(TeardownStep::Live(document));
            self.live
        }

        fn release_document(&mut self, document: ReportDocument) {
            self.steps.push(TeardownStep::Release(document));
        }
    }

    #[test]
    fn destroy_notifies_only_a_document_that_still_resolves() {
        let mut live = TeardownHost {
            live: true,
            steps: Vec::new(),
        };
        assert!(destroy_component_report(Some(ReportDocument(7)), &mut live));
        assert_eq!(
            live.steps,
            [
                TeardownStep::List,
                TeardownStep::Instance,
                TeardownStep::Live(ReportDocument(7)),
                TeardownStep::Release(ReportDocument(7)),
            ]
        );

        let mut stale = TeardownHost::default();
        assert!(!destroy_component_report(
            Some(ReportDocument(7)),
            &mut stale
        ));
        assert_eq!(stale.steps.len(), 3);
    }

    #[test]
    fn destroy_still_releases_the_list_without_a_document() {
        let mut host = TeardownHost::default();

        assert!(!destroy_component_report(None, &mut host));

        assert_eq!(host.steps, [TeardownStep::List, TeardownStep::Instance]);
    }
}

/// The catalogue section a row's pick list is filled from.
///
/// Part of Ghidra function `FUN_01bb67d0` at `0x01BB67D0`.
///
/// The section names are compiled into the filler at `0x00ED0470`; four of
/// the six are literals and two are read from data, so those two are named
/// here by their position rather than by a guess at what they hold.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub enum ModelCategory {
    /// Section `Spice`, chosen for a component the report knows carries a
    /// SPICE model.
    Spice,
    /// The second section. Its name is read from data rather than compiled
    /// in, so it is not recovered.
    SecondSection,
    /// The third section. Its name is likewise not recovered.
    ThirdSection,
    /// Section `Diode`.
    Diode,
    /// Section `Mixed`, which is what a row falls back to when none of the
    /// other tests match.
    Mixed,
    /// Section `OtherSC`.
    OtherSemiconductor,
}

impl ModelCategory {
    /// The number the recovered code passes the filler.
    #[must_use]
    pub const fn kind(self) -> u8 {
        match self {
            Self::Spice => 0,
            Self::SecondSection => 1,
            Self::ThirdSection => 2,
            Self::Diode => 3,
            Self::Mixed => 4,
            Self::OtherSemiconductor => 5,
        }
    }

    /// The section name, where it is compiled in as a literal.
    #[must_use]
    pub const fn section_name(self) -> Option<&'static str> {
        match self {
            Self::Spice => Some("Spice"),
            Self::Diode => Some("Diode"),
            Self::Mixed => Some("Mixed"),
            Self::OtherSemiconductor => Some("OtherSC"),
            Self::SecondSection | Self::ThirdSection => None,
        }
    }
}

/// The library a part name belongs to when it names none.
///
/// Part of Ghidra function `FUN_01bb67d0` at `0x01BB67D0`.
pub const DEFAULT_LIBRARY: &str = "TINA";

/// Where a row's pick list comes from.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PicklistSource {
    /// One section of the model catalogue.
    Catalogue(ModelCategory),
    /// The general list, which is not divided into sections.
    General,
}

/// What the classification asks about one row's object.
///
/// Each field stands for one recovered predicate. The predicates' own
/// meanings are not recovered — the symbols name none of them — so they are
/// described here by what they decide rather than by what they test.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
#[allow(clippy::struct_excessive_bools)]
pub struct RowKind {
    /// The object itself answers to the first test, which sends the row
    /// straight to the general list.
    pub general_object: bool,
    /// Either of the two type-level tests that also send it there.
    pub general_type: bool,
    /// The object carries a model, and that model's sub-kind is the second
    /// one.
    pub spice_model: bool,
    /// The type answers to the diode test.
    pub diode: bool,
    /// The type answers to the second-section test.
    pub second_section: bool,
    /// The type answers to the third-section test.
    pub third_section: bool,
    /// The type answers to the other-semiconductor test.
    pub other_semiconductor: bool,
}

/// Implements part of Ghidra function `FUN_01bb67d0` at `0x01BB67D0`.
///
/// Decides which list a row's pick list is filled from.
///
/// The three general tests come first and short-circuit everything below
/// them, so a row that answers to one of those never reaches the catalogue at
/// all — the sections are only consulted for rows the general list does not
/// already cover.
///
/// Every remaining row gets a section, because the chain ends in a fall-back
/// rather than in nothing: a type none of the tests recognises is offered the
/// mixed section.
#[must_use]
pub const fn picklist_source(row: RowKind) -> PicklistSource {
    if row.general_object || row.general_type {
        return PicklistSource::General;
    }

    PicklistSource::Catalogue(if row.spice_model {
        ModelCategory::Spice
    } else if row.diode {
        ModelCategory::Diode
    } else if row.second_section {
        ModelCategory::SecondSection
    } else if row.third_section {
        ModelCategory::ThirdSection
    } else if row.other_semiconductor {
        ModelCategory::OtherSemiconductor
    } else {
        ModelCategory::Mixed
    })
}

/// Splits a part name into the library it names and the part within it.
///
/// Part of Ghidra function `FUN_01bb67d0` at `0x01BB67D0`.
///
/// A name with no separator belongs to the shipped library, which is why an
/// ordinary part name needs no prefix. The separator character is read from
/// data rather than compiled in, so the caller supplies it.
#[must_use]
pub fn split_library(name: &str, separator: char) -> (String, String) {
    name.find(separator).map_or_else(
        || (DEFAULT_LIBRARY.to_owned(), name.to_owned()),
        |index| {
            (
                name[..index].to_owned(),
                name[index + separator.len_utf8()..].to_owned(),
            )
        },
    )
}

/// What one pick-list drop-down needs from the report around it.
pub trait PicklistHost {
    /// The row's stored text, or `None` when the grid has no data for it.
    fn row_text(&mut self, row: usize) -> Option<String>;

    /// The classification of the row's object.
    fn row_kind(&mut self, row: usize) -> RowKind;

    /// Cuts the component's own name out of the row's text.
    fn component_name(&mut self, text: &str) -> String;

    /// Fills the pick list from one catalogue section.
    fn fill_from_catalogue(&mut self, category: ModelCategory, name: &str);

    /// Fills the pick list from the general list.
    fn fill_from_general(&mut self, name: &str);

    /// Reports that the grid has no data for the row.
    fn report_missing_row(&mut self);
}

/// Implements Ghidra function `FUN_01bb67d0` at `0x01BB67D0`.
///
/// Handles `frmComponentReport.sgComps.OnPicklistDropdown`.
///
/// Fills a grid cell's pick list with the parts the row's component could be
/// changed to.
///
/// What a row can be changed to depends on what it already is, so the list is
/// built when the user opens it rather than held for every row — a report of
/// any size would otherwise carry one catalogue query per line.
///
/// A row the grid has no data for reports that and fills nothing, which is
/// what keeps an empty pick list from looking like a component with no
/// alternatives.
///
/// Returns where the list was filled from, or `None` for a row with no data.
pub fn picklist_dropdown(host: &mut impl PicklistHost, row: usize) -> Option<PicklistSource> {
    let Some(text) = host.row_text(row) else {
        host.report_missing_row();
        return None;
    };

    let name = host.component_name(&text);
    let source = picklist_source(host.row_kind(row));

    match source {
        PicklistSource::Catalogue(category) => host.fill_from_catalogue(category, &name),
        PicklistSource::General => host.fill_from_general(&name),
    }

    Some(source)
}

#[cfg(test)]
mod picklist_tests {
    use super::*;

    #[test]
    fn each_category_keeps_the_number_the_filler_expects() {
        assert_eq!(ModelCategory::Spice.kind(), 0);
        assert_eq!(ModelCategory::SecondSection.kind(), 1);
        assert_eq!(ModelCategory::ThirdSection.kind(), 2);
        assert_eq!(ModelCategory::Diode.kind(), 3);
        assert_eq!(ModelCategory::Mixed.kind(), 4);
        assert_eq!(ModelCategory::OtherSemiconductor.kind(), 5);
    }

    #[test]
    fn four_of_the_six_section_names_are_compiled_in() {
        assert_eq!(ModelCategory::Spice.section_name(), Some("Spice"));
        assert_eq!(ModelCategory::Diode.section_name(), Some("Diode"));
        assert_eq!(ModelCategory::Mixed.section_name(), Some("Mixed"));
        assert_eq!(
            ModelCategory::OtherSemiconductor.section_name(),
            Some("OtherSC")
        );
        assert_eq!(ModelCategory::SecondSection.section_name(), None);
        assert_eq!(ModelCategory::ThirdSection.section_name(), None);
    }

    #[test]
    fn the_general_tests_short_circuit_every_section_below_them() {
        for row in [
            RowKind {
                general_object: true,
                ..RowKind::default()
            },
            RowKind {
                general_type: true,
                ..RowKind::default()
            },
        ] {
            // Even with every section test also answering yes.
            let row = RowKind {
                spice_model: true,
                diode: true,
                second_section: true,
                third_section: true,
                other_semiconductor: true,
                ..row
            };
            assert_eq!(picklist_source(row), PicklistSource::General);
        }
    }

    #[test]
    fn each_section_test_picks_its_own_section() {
        for (row, expected) in [
            (
                RowKind {
                    spice_model: true,
                    ..RowKind::default()
                },
                ModelCategory::Spice,
            ),
            (
                RowKind {
                    diode: true,
                    ..RowKind::default()
                },
                ModelCategory::Diode,
            ),
            (
                RowKind {
                    second_section: true,
                    ..RowKind::default()
                },
                ModelCategory::SecondSection,
            ),
            (
                RowKind {
                    third_section: true,
                    ..RowKind::default()
                },
                ModelCategory::ThirdSection,
            ),
            (
                RowKind {
                    other_semiconductor: true,
                    ..RowKind::default()
                },
                ModelCategory::OtherSemiconductor,
            ),
        ] {
            assert_eq!(picklist_source(row), PicklistSource::Catalogue(expected));
        }
    }

    #[test]
    fn a_row_none_of_the_tests_recognise_falls_back_to_the_mixed_section() {
        assert_eq!(
            picklist_source(RowKind::default()),
            PicklistSource::Catalogue(ModelCategory::Mixed)
        );
    }

    #[test]
    fn the_spice_test_wins_over_every_other_section() {
        let row = RowKind {
            spice_model: true,
            diode: true,
            second_section: true,
            third_section: true,
            other_semiconductor: true,
            ..RowKind::default()
        };

        assert_eq!(
            picklist_source(row),
            PicklistSource::Catalogue(ModelCategory::Spice)
        );
    }

    #[test]
    fn a_name_without_a_separator_belongs_to_the_shipped_library() {
        assert_eq!(
            split_library("BC547", ':'),
            ("TINA".to_owned(), "BC547".to_owned())
        );
    }

    #[test]
    fn a_name_with_a_separator_names_its_own_library() {
        assert_eq!(
            split_library("MyLib:BC547", ':'),
            ("MyLib".to_owned(), "BC547".to_owned())
        );
    }

    #[derive(Debug, Default)]
    struct Report {
        text: Option<String>,
        kind: RowKind,
        filled: Option<(Option<ModelCategory>, String)>,
        reported_missing: bool,
    }

    impl PicklistHost for Report {
        fn row_text(&mut self, _row: usize) -> Option<String> {
            self.text.clone()
        }

        fn row_kind(&mut self, _row: usize) -> RowKind {
            self.kind
        }

        fn component_name(&mut self, text: &str) -> String {
            text.trim_matches(|c| c == '<' || c == '>').to_owned()
        }

        fn fill_from_catalogue(&mut self, category: ModelCategory, name: &str) {
            self.filled = Some((Some(category), name.to_owned()));
        }

        fn fill_from_general(&mut self, name: &str) {
            self.filled = Some((None, name.to_owned()));
        }

        fn report_missing_row(&mut self) {
            self.reported_missing = true;
        }
    }

    #[test]
    fn a_row_with_no_data_reports_it_and_fills_nothing() {
        let mut host = Report::default();

        assert_eq!(picklist_dropdown(&mut host, 3), None);
        assert!(host.reported_missing);
        assert!(host.filled.is_none());
    }

    #[test]
    fn a_catalogue_row_is_filled_from_its_section_under_the_cut_out_name() {
        let mut host = Report {
            text: Some("<BC547>".to_owned()),
            kind: RowKind {
                diode: true,
                ..RowKind::default()
            },
            ..Report::default()
        };

        assert_eq!(
            picklist_dropdown(&mut host, 1),
            Some(PicklistSource::Catalogue(ModelCategory::Diode))
        );
        assert_eq!(
            host.filled,
            Some((Some(ModelCategory::Diode), "BC547".to_owned()))
        );
        assert!(!host.reported_missing);
    }

    #[test]
    fn a_general_row_never_reaches_the_catalogue() {
        let mut host = Report {
            text: Some("<R1>".to_owned()),
            kind: RowKind {
                general_object: true,
                ..RowKind::default()
            },
            ..Report::default()
        };

        assert_eq!(
            picklist_dropdown(&mut host, 0),
            Some(PicklistSource::General)
        );
        assert_eq!(host.filled, Some((None, "R1".to_owned())));
    }
}
