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
