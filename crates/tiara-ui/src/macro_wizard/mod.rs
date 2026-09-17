//! Iced state for the recovered macro wizard.

use std::path::{Path, PathBuf};

pub const FORM_RESOURCE: &str = "fMacroWiz";

pub trait MacroWizardTeardownHost {
    /// Returns the hosted preview control to its original parent.
    fn restore_preview_parent(&mut self);

    /// Releases the four private objects the wizard owns, in recovered order.
    fn release_private_objects(&mut self);
}

/// Implements Ghidra function `FUN_01c38100` at `0x01C38100`.
///
/// Returns the hosted preview control to the parent it was taken from and then
/// releases the wizard's four private objects.
///
/// Re-parenting first matters: the preview control outlives the wizard, so it
/// has to be detached before the objects behind it go away. The recovered
/// handler saves no macro and writes no file, so closing without accepting
/// discards everything the wizard staged.
pub fn destroy_macro_wizard(host: &mut impl MacroWizardTeardownHost) {
    host.restore_preview_parent();
    host.release_private_objects();
}

pub const HELP_FILE: &str = "TINA.CHM";
pub const HELP_CONTEXT: u32 = 0x0469;

pub trait MacroWizardCancelHost {
    /// The shared close check that decides whether the wizard may be reset.
    fn may_close(&mut self) -> bool;

    /// Selects the wizard's first page.
    fn select_first_page(&mut self);
}

/// Implements Ghidra function `FUN_01c3beb0` at `0x01C3BEB0`.
///
/// Returns the wizard to its first page, but only once the shared close check
/// agrees. A refused check leaves the current page selected, so the wizard
/// stays where the user was working.
///
/// The recovered handler saves nothing and closes no window itself; selecting
/// the first page re-runs the page-change layout, which is the same step the
/// create handler performs to open the wizard.
pub fn cancel_macro_wizard(host: &mut impl MacroWizardCancelHost) -> bool {
    if !host.may_close() {
        return false;
    }
    host.select_first_page();
    true
}

pub trait MacroWizardHelpHost {
    /// Resolves the localized variant of a help file.
    fn resolve_localized_help(&mut self, base_path: &Path) -> PathBuf;

    fn show_help_context(&mut self, context: u32, help_file: &Path);
}

/// Implements Ghidra function `FUN_01c438d0` at `0x01C438D0`.
///
/// Opens the macro wizard's help topic. The handler reads no wizard state, so
/// the current page and every staged value leave the topic unchanged.
pub fn open_macro_wizard_help(
    help_directory: &Path,
    host: &mut impl MacroWizardHelpHost,
) -> PathBuf {
    let base_path = help_directory.join(HELP_FILE);
    let resolved = host.resolve_localized_help(&base_path);
    host.show_help_context(HELP_CONTEXT, &resolved);
    resolved
}

pub trait ShapeFilterHost {
    /// Rebuilds the filtered shape list.
    fn refresh_shape_filter(&mut self);

    /// The pin-filter combo's selected index, or `None`.
    fn pin_filter_selection(&mut self) -> Option<usize>;

    /// The pin-filter combo's current text.
    fn pin_filter_text(&mut self) -> String;

    /// The index of one entry in the pin-filter list, or `None` when the text
    /// is not one of its entries.
    fn pin_filter_index_of(&mut self, text: &str) -> Option<usize>;

    fn set_pin_filter_selection(&mut self, index: Option<usize>);

    fn set_pin_filter_text(&mut self, text: &str);
}

/// Implements Ghidra functions `FUN_01c3f610` at `0x01C3F610` and
/// `FUN_01c43740` at `0x01C43740`.
///
/// The shape search edit and the shape-type combo both delegate straight to the
/// shared shape-filter rebuild, so typing a search term and changing the type
/// narrow the list the same way. Neither reads a control of its own.
pub fn refresh_shape_filter(host: &mut impl ShapeFilterHost) {
    host.refresh_shape_filter();
}

/// Implements Ghidra function `FUN_01c3f620` at `0x01C3F620`.
///
/// Keeps a typed pin-filter value usable.
///
/// When the combo reports a selection whose text is not actually one of its
/// entries — which happens once the user edits the text of a selected entry —
/// the handler clears the selection and puts the typed text back, so the combo
/// stops claiming a selection it no longer has. The shape filter is rebuilt in
/// every case.
pub fn pin_filter_changed(host: &mut impl ShapeFilterHost) -> bool {
    let mut restored = false;
    if host.pin_filter_selection().is_some() {
        let text = host.pin_filter_text();
        if host.pin_filter_index_of(&text).is_none() {
            host.set_pin_filter_selection(None);
            host.set_pin_filter_text(&text);
            restored = true;
        }
    }
    host.refresh_shape_filter();
    restored
}

/// Implements Ghidra function `FUN_01c3f730` at `0x01C3F730`.
///
/// Falls back to the first pin-filter entry when the user presses Enter on an
/// empty filter, so clearing the box and confirming restores the default rather
/// than leaving the list filtered by nothing.
///
/// Any other key, and a filter with content, are left alone. The handler does
/// not rebuild the shape list itself; the selection change does that.
pub fn pin_filter_key_pressed(key: char, host: &mut impl ShapeFilterHost) -> bool {
    if key != '\r' {
        return false;
    }
    let text = host.pin_filter_text();
    if !text.trim().is_empty() {
        return false;
    }
    host.set_pin_filter_selection(Some(0));
    true
}

pub trait MacroWizardStateHost {
    /// Rebuilds the wizard's page and button state.
    fn refresh_wizard_state(&mut self);
}

/// Implements Ghidra function `FUN_01c43730` at `0x01C43730`.
///
/// The macro-name edit delegates straight to the shared wizard-state rebuild on
/// every keystroke, which is how the Next button follows the name as it is
/// typed. It validates nothing itself.
pub fn macro_name_changed(host: &mut impl MacroWizardStateHost) {
    host.refresh_wizard_state();
}

pub trait ShapeSourceHost: ShapeFilterHost {
    /// Enables the three controls the shape-source click re-enables.
    fn enable_shape_controls(&mut self);
}

/// Implements Ghidra function `FUN_01c43750` at `0x01C43750`.
///
/// Re-enables the three shape controls whenever the shape-source check box is
/// clicked, and rebuilds the shape filter only for a real click.
///
/// The recovered guard on the sender is what lets the wizard call this handler
/// programmatically to restore the controls without also rebuilding the list.
pub fn shape_source_clicked(from_user: bool, host: &mut impl ShapeSourceHost) -> bool {
    host.enable_shape_controls();
    if from_user {
        host.refresh_shape_filter();
    }
    from_user
}

/// Implements Ghidra function `FUN_01c3f0e0` at `0x01C3F0E0`.
///
/// The generate-VHDL check box's click handler is a single return in the
/// recovered bytes: the box is read where it matters instead of acting when it
/// is toggled. This port keeps the no-op explicit rather than leaving the
/// recovered event unaccounted for.
pub const fn generate_vhdl_clicked() {}

pub trait MacroSourceHost: MacroWizardStateHost {
    /// Applies the source-mode radio group to the wizard.
    fn apply_source_mode(&mut self);

    /// The path currently in the source edit.
    fn source_text(&mut self) -> String;

    /// Reports whether one path is an accessible file.
    fn is_accessible_file(&mut self, path: &str) -> bool;

    /// Expands one path to its full form.
    fn expand_path(&mut self, path: &str) -> String;

    /// Adopts one resolved source path.
    fn adopt_source(&mut self, path: &str);
}

/// Implements Ghidra function `FUN_01c3c790` at `0x01C3C790`.
///
/// Re-applies the source mode and then the wizard state on every keystroke in
/// the source path edit, so the page and its buttons follow the path as it is
/// typed. The handler opens no file.
pub fn source_text_changed(host: &mut impl MacroSourceHost) {
    host.apply_source_mode();
    host.refresh_wizard_state();
}

/// Implements Ghidra function `FUN_01c3c7b0` at `0x01C3C7B0`.
///
/// Adopts a typed source path when the user presses Enter, but only when that
/// path is already an accessible file; the path is expanded to its full form
/// first, so a relative path becomes absolute before it is stored.
///
/// A path that does not resolve is left in the edit with no message, so the
/// user can keep typing. Any other key is ignored.
pub fn source_key_pressed(key: char, host: &mut impl MacroSourceHost) -> Option<String> {
    if key != '\r' {
        return None;
    }
    let typed = host.source_text();
    if !host.is_accessible_file(&typed) {
        return None;
    }
    let expanded = host.expand_path(&typed);
    host.adopt_source(&expanded);
    Some(expanded)
}

/// The wizard pages the recovered page-change handler lays out.
///
/// The recovered handler compares the active page against five of the form's
/// six pages; a page it does not name keeps whatever layout it already had.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum WizardPage {
    Source,
    SubCircuit,
    Shape,
    Pair,
    Rename,
    /// Any page the recovered handler does not name.
    Other,
}

/// The recovered window mode the page layout switches between.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum WindowMode {
    /// Recovered value 2.
    Resizable,
    /// Recovered value 3.
    Fixed,
}

/// The unscaled heights the recovered page layout uses.
pub const SOURCE_PAGE_HEIGHT: i32 = 0x1ae;
pub const SHAPE_INNER_HEIGHT: i32 = 0xdc;
pub const SHAPE_PAGE_HEIGHT: i32 = 0x208;
pub const PAIR_MINIMUM_HEIGHT: i32 = 500;
pub const RENAME_PAGE_HEIGHT: i32 = 200;

/// What the page-change handler asks the form to do.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PageLayout {
    /// The unscaled form height, or `None` when the page keeps the one it has.
    pub form_height: Option<i32>,
    /// The unscaled height of the shape page's inner control.
    pub inner_height: Option<i32>,
    pub mode: Option<WindowMode>,
    /// True when the page stores the form's designed height for later reuse.
    pub remembers_height: bool,
    /// True when the page restores the remembered height instead of a scaled
    /// constant.
    pub restores_height: bool,
    /// True when the page also refreshes the preview.
    pub refreshes_preview: bool,
}

impl PageLayout {
    const fn none() -> Self {
        Self {
            form_height: None,
            inner_height: None,
            mode: None,
            remembers_height: false,
            restores_height: false,
            refreshes_preview: false,
        }
    }
}

/// Implements Ghidra function `FUN_01c3bee0` at `0x01C3BEE0`.
///
/// Resizes the wizard for the page that just became active.
///
/// The source page remembers the form's designed height before shrinking to its
/// own fixed size, and the sub-circuit page puts that remembered height back —
/// which is how returning from the source page restores the window the user
/// started with. The shape page remembers the height again and sets both its
/// own inner control and the form. The pair page takes whichever is larger of
/// the remembered height and its own minimum, so a window the user already
/// enlarged is never shrunk, and refreshes the preview. The rename page simply
/// fixes its own height.
///
/// Pages that shrink the window also switch it to the fixed mode and the two
/// that can grow switch it back to resizable. A page the handler does not name
/// keeps whatever layout it had.
#[must_use]
pub const fn page_layout(page: WizardPage) -> PageLayout {
    match page {
        WizardPage::Source => PageLayout {
            form_height: Some(SOURCE_PAGE_HEIGHT),
            mode: Some(WindowMode::Fixed),
            remembers_height: true,
            ..PageLayout::none()
        },
        WizardPage::SubCircuit => PageLayout {
            mode: Some(WindowMode::Resizable),
            restores_height: true,
            ..PageLayout::none()
        },
        WizardPage::Shape => PageLayout {
            form_height: Some(SHAPE_PAGE_HEIGHT),
            inner_height: Some(SHAPE_INNER_HEIGHT),
            mode: Some(WindowMode::Fixed),
            remembers_height: true,
            ..PageLayout::none()
        },
        WizardPage::Pair => PageLayout {
            form_height: Some(PAIR_MINIMUM_HEIGHT),
            mode: Some(WindowMode::Resizable),
            restores_height: true,
            refreshes_preview: true,
            ..PageLayout::none()
        },
        WizardPage::Rename => PageLayout {
            form_height: Some(RENAME_PAGE_HEIGHT),
            mode: Some(WindowMode::Fixed),
            ..PageLayout::none()
        },
        WizardPage::Other => PageLayout::none(),
    }
}

pub trait HdlOptionsHost {
    /// Shows the HDL options dialog for one staged value and discards its
    /// modal result.
    fn show_hdl_options(&mut self, staged: u64);
}

/// Implements Ghidra function `FUN_01c3c630` at `0x01C3C630`.
///
/// Opens the HDL options dialog for the wizard's staged HDL value and destroys
/// it afterwards. The recovered handler ignores the modal result, so the dialog
/// owns its own commit boundary and the wizard reads nothing back.
pub fn open_hdl_options(staged: u64, host: &mut impl HdlOptionsHost) {
    host.show_hdl_options(staged);
}

/// The catch-all entry of the shape-library combo.
pub const ALL_SHAPE_LIBRARIES_INDEX: usize = 0;

pub trait ShapeLibraryHost: ShapeFilterHost {
    /// Clears the stored shape-library filter.
    fn clear_library_filter(&mut self);

    /// Stores one shape-library name as the filter.
    fn set_library_filter(&mut self, library: &str);
}

/// Implements Ghidra function `FUN_01c3d840` at `0x01C3D840`.
///
/// Applies the shape-library combo selection: the first entry is the recovered
/// catch-all and clears the filter, while every other entry stores that entry's
/// own text. The shape list is rebuilt either way, so switching libraries always
/// re-narrows the list.
pub fn choose_shape_library(
    selected_index: usize,
    library_items: &[String],
    host: &mut impl ShapeLibraryHost,
) {
    if selected_index == ALL_SHAPE_LIBRARIES_INDEX {
        host.clear_library_filter();
    } else if let Some(library) = library_items.get(selected_index) {
        host.set_library_filter(library);
    } else {
        host.clear_library_filter();
    }
    host.refresh_shape_filter();
}

/// The number of controls the shape-mode radios drive, in recovered order.
pub const SHAPE_CONTROL_COUNT: usize = 7;

/// The enabled state each shape control receives.
///
/// `None` marks a control the recovered branch leaves alone; the shape-source
/// click that runs immediately afterwards re-enables those.
pub type ShapeControlStates = [Option<bool>; SHAPE_CONTROL_COUNT];

/// Implements Ghidra function `FUN_01c3d610` at `0x01C3D610`.
///
/// Enables or disables the shape-selection controls from the two shape-mode
/// radios.
///
/// Choosing an existing shape disables all seven controls in one pass. Choosing
/// the generated shape enables only the first four and leaves the last three
/// alone, because the shape-source click that the handler runs next re-enables
/// exactly those three — which is why the two branches are not mirror images.
///
/// The handler refreshes the wizard state afterwards only while the shape page
/// is the active one, so switching modes from another page changes no button.
#[must_use]
pub const fn shape_mode_control_states(use_existing_shape: bool) -> ShapeControlStates {
    if use_existing_shape {
        [Some(false); SHAPE_CONTROL_COUNT]
    } else {
        [
            Some(true),
            Some(true),
            Some(true),
            Some(true),
            None,
            None,
            None,
        ]
    }
}

pub trait RenameEditHost {
    /// Rebuilds the rename page.
    fn refresh_rename_page(&mut self);
}

/// Implements Ghidra function `FUN_01c3fda0` at `0x01C3FDA0`.
///
/// The rename grid's edit-text handler delegates straight to the rename-page
/// rebuild on every keystroke, so the page follows what the user types without
/// the handler reading the cell itself.
pub fn rename_cell_edited(host: &mut impl RenameEditHost) {
    host.refresh_rename_page();
}

/// The rename grid column the directory combo edits.
pub const RENAME_DIRECTORY_COLUMN: usize = 2;

/// A cell rectangle the rename grid reports for its floating combo.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct RenameCellRect {
    pub left: i32,
    pub top: i32,
    pub right: i32,
    pub bottom: i32,
}

pub trait RenameSelectionHost {
    /// The cell rectangle in grid coordinates, already offset by the grid's
    /// own position.
    fn cell_rect(&mut self, column: usize, row: usize) -> RenameCellRect;

    /// Places the combo and shows it with the focus.
    fn show_combo(&mut self, left: i32, top: i32, width: i32, height: i32);

    /// The stored directory index of one data row.
    fn row_index(&mut self, data_row: usize) -> usize;

    fn set_combo_selection(&mut self, index: usize);
}

/// Implements Ghidra function `FUN_01c3fca0` at `0x01C3FCA0`.
///
/// Moves the rename page's directory combo onto the selected cell.
///
/// Only a data row of the directory column gets the combo, and the recovered
/// placement insets it by one pixel on each side so the cell's own border stays
/// visible. Every selection is allowed, so the handler never blocks a click.
///
/// The combo's selection is restored from the row's stored directory index in
/// every case, including the rows that do not get the combo, which is what
/// keeps the stored index authoritative rather than the combo.
pub fn select_rename_cell(column: usize, row: usize, host: &mut impl RenameSelectionHost) -> bool {
    let shows_combo = column == RENAME_DIRECTORY_COLUMN && row != 0;
    if shows_combo {
        let rect = host.cell_rect(column, row);
        host.show_combo(
            rect.left + 1,
            rect.top + 1,
            rect.right - rect.left + 1,
            rect.bottom - rect.top + 1,
        );
    }

    if let Some(data_row) = row.checked_sub(1) {
        let index = host.row_index(data_row);
        host.set_combo_selection(index);
    }
    shows_combo
}

/// The message the web-source browse shows when nothing usable arrived.
pub const LIBRARY_LOAD_ERROR: &str = "Error loading library!";

pub trait SourceBrowseHost {
    /// Opens the source file dialog. `None` is the recovered cancel result.
    fn choose_source_file(&mut self) -> Option<String>;

    /// Adopts one resolved source path.
    fn adopt_source(&mut self, path: &str);

    /// Releases the staged sub-circuit object and rebuilds the sub-circuit
    /// page, clears the shape name, drops the pin-filter selection, and resets
    /// the device combo.
    fn reset_source_dependent_pages(&mut self);
}

/// Implements Ghidra function `FUN_01c3c680` at `0x01C3C680`.
///
/// Browses for a macro source file. Cancelling changes nothing at all.
///
/// An accepted file is adopted and then everything downstream of the source is
/// reset: the staged sub-circuit object is released, the sub-circuit page is
/// rebuilt, and the shape page's name, pin filter and device combo return to
/// their empty state. That reset is what stops a shape chosen for the previous
/// source from being carried into the new one.
pub fn browse_for_source(host: &mut impl SourceBrowseHost) -> Option<String> {
    let path = host.choose_source_file()?;
    host.adopt_source(&path);
    host.reset_source_dependent_pages();
    Some(path)
}

pub trait WebSourceBrowseHost: SourceBrowseHost {
    /// Runs the web transfer and reports the paths it produced. `None` is the
    /// recovered non-accepted result.
    fn transfer_from_web(&mut self) -> Option<Vec<String>>;

    /// Reports whether one transferred path is an accessible file.
    fn is_accessible_file(&mut self, path: &str) -> bool;

    /// Stores one transferred path as the staged source.
    fn stage_source(&mut self, path: &str);

    /// Enables or disables the control that shows whether a source loaded.
    fn set_source_available(&mut self, available: bool);

    fn show_error(&mut self, message: &str);

    /// Rebuilds the wizard state.
    fn refresh_wizard_state(&mut self);
}

/// Implements Ghidra function `FUN_01c3c860` at `0x01C3C860`.
///
/// Browses for a macro source over the web.
///
/// A transfer that is not accepted leaves every page alone and only refreshes
/// the wizard state. An accepted transfer resets the source-dependent pages
/// exactly like the local browse, then stages each returned path in turn and
/// leaves the availability control reflecting the last one, so a batch ends on
/// whichever file came last rather than on the best one.
///
/// The recovered handler reports an error whenever that last path did not
/// resolve, using its own fixed message; a transfer that returned nothing at
/// all therefore also reports it.
pub fn browse_for_web_source(host: &mut impl WebSourceBrowseHost) -> bool {
    let Some(paths) = host.transfer_from_web() else {
        host.refresh_wizard_state();
        return false;
    };

    host.reset_source_dependent_pages();
    let mut available = false;
    for path in &paths {
        host.stage_source(path);
        available = host.is_accessible_file(path);
        host.set_source_available(available);
    }

    if !available {
        host.show_error(LIBRARY_LOAD_ERROR);
    }
    host.refresh_wizard_state();
    available
}

/// The column the move buttons test for content before they move a row.
pub const RENAME_CONTENT_COLUMN: usize = 1;

/// The rename page's grid together with the catalog index of each data row.
///
/// Row zero is the recovered fixed header, so data row `n` carries index entry
/// `n - 1`.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct RenameGrid {
    pub rows: Vec<Vec<String>>,
    pub indices: Vec<i32>,
    pub selected_row: usize,
}

impl RenameGrid {
    fn cell(&self, row: usize, column: usize) -> &str {
        self.rows
            .get(row)
            .and_then(|row| row.get(column))
            .map_or("", String::as_str)
    }

    fn swap_rows(&mut self, first: usize, second: usize) {
        self.rows.swap(first, second);
        let (Some(first), Some(second)) = (first.checked_sub(1), second.checked_sub(1)) else {
            return;
        };
        if first < self.indices.len() && second < self.indices.len() {
            self.indices.swap(first, second);
        }
    }

    /// Implements Ghidra function `FUN_01c3b8d0` at `0x01C3B8D0`.
    ///
    /// Moves the selected rename row down one place, taking its catalog index
    /// with it so the row and the entry it renames stay paired.
    ///
    /// The recovered guard requires content in the row below, which is what
    /// stops the last row from being pushed into the blank tail. The selection
    /// follows the moved row so a repeated click keeps moving the same row.
    pub fn move_selected_row_down(&mut self) -> bool {
        let row = self.selected_row;
        let below = row + 1;
        if row == 0 || below >= self.rows.len() {
            return false;
        }
        if self.cell(below, RENAME_CONTENT_COLUMN).is_empty() {
            return false;
        }

        self.swap_rows(row, below);
        self.selected_row = below;
        true
    }

    /// Implements Ghidra function `FUN_01c3bac0` at `0x01C3BAC0`.
    ///
    /// Moves the selected rename row up one place with the same index pairing.
    ///
    /// The recovered guard requires a row past the first data row, so the top
    /// data row cannot be pushed into the fixed header. Unlike the downward
    /// move it tests no content, because the row above is always a real row.
    pub fn move_selected_row_up(&mut self) -> bool {
        let row = self.selected_row;
        if row <= 1 || row >= self.rows.len() {
            return false;
        }

        self.swap_rows(row, row - 1);
        self.selected_row = row - 1;
        true
    }
}

pub trait RenameDirectoryHost {
    /// The directory combo's selected entry, or `None`.
    fn combo_selection(&mut self) -> Option<(usize, String)>;

    /// The grid cell the combo is covering.
    fn current_cell(&mut self) -> (usize, usize);

    fn set_cell(&mut self, column: usize, row: usize, text: &str);

    /// Stores the chosen directory index for one data row.
    fn set_row_index(&mut self, data_row: usize, index: usize);

    fn set_combo_visible(&mut self, visible: bool);

    fn repaint_grid(&mut self);

    /// Restores the grid's stored selection rectangle.
    fn restore_selection(&mut self);

    /// Rebuilds the rename page.
    fn refresh_rename_page(&mut self);
}

/// Commits the directory combo into the covered grid cell.
///
/// Both recovered handlers share this body; only the change handler follows it
/// with a rename-page rebuild.
fn commit_rename_directory(host: &mut impl RenameDirectoryHost) -> bool {
    let Some((index, text)) = host.combo_selection() else {
        return false;
    };
    let (column, row) = host.current_cell();
    host.set_cell(column, row, &text);
    if let Some(data_row) = row.checked_sub(1) {
        host.set_row_index(data_row, index);
    }
    host.set_combo_visible(false);
    true
}

/// Implements Ghidra function `FUN_01c3f0f0` at `0x01C3F0F0`.
///
/// Commits the chosen rename directory into the covered cell, stores its index
/// against that data row, hides the combo, and rebuilds the rename page before
/// repainting the grid and restoring its selection.
///
/// The rebuild is the only thing this handler does beyond the shared commit,
/// which is why choosing a directory refreshes the page while merely leaving
/// the combo does not.
pub fn rename_directory_changed(host: &mut impl RenameDirectoryHost) -> bool {
    let committed = commit_rename_directory(host);
    if committed {
        host.refresh_rename_page();
    }
    host.repaint_grid();
    host.restore_selection();
    committed
}

/// Implements Ghidra function `FUN_01c3f220` at `0x01C3F220`.
///
/// Commits the chosen rename directory exactly like the change handler but
/// without the page rebuild, so leaving the combo stores the value while the
/// page keeps whatever it was showing.
pub fn rename_directory_exited(host: &mut impl RenameDirectoryHost) -> bool {
    let committed = commit_rename_directory(host);
    host.repaint_grid();
    host.restore_selection();
    committed
}

#[cfg(test)]
mod rename_grid_tests {
    use super::*;

    fn grid(selected_row: usize) -> RenameGrid {
        RenameGrid {
            rows: vec![
                vec!["Old".to_owned(), "New".to_owned()],
                vec!["a".to_owned(), "A".to_owned()],
                vec!["b".to_owned(), "B".to_owned()],
                vec!["c".to_owned(), String::new()],
            ],
            indices: vec![10, 20, 30],
            selected_row,
        }
    }

    #[test]
    fn moving_down_carries_the_catalog_index_and_the_selection() {
        let mut model = grid(1);

        assert!(model.move_selected_row_down());

        assert_eq!(model.rows[1][0], "b");
        assert_eq!(model.rows[2][0], "a");
        assert_eq!(model.indices, [20, 10, 30]);
        assert_eq!(model.selected_row, 2);
    }

    #[test]
    fn the_last_filled_row_cannot_be_pushed_into_the_blank_tail() {
        let mut model = grid(2);

        assert!(!model.move_selected_row_down());

        assert_eq!(model.rows[2][0], "b");
        assert_eq!(model.indices, [10, 20, 30]);
        assert_eq!(model.selected_row, 2);
    }

    #[test]
    fn moving_up_carries_the_index_and_stops_at_the_first_data_row() {
        let mut model = grid(2);

        assert!(model.move_selected_row_up());
        assert_eq!(model.rows[1][0], "b");
        assert_eq!(model.indices, [20, 10, 30]);
        assert_eq!(model.selected_row, 1);

        assert!(!model.move_selected_row_up());
        assert_eq!(model.selected_row, 1);
    }

    #[test]
    fn the_header_row_never_moves() {
        let mut model = grid(0);

        assert!(!model.move_selected_row_down());
        assert!(!model.move_selected_row_up());
        assert_eq!(model.rows[0][0], "Old");
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum DirStep {
        Cell(usize, usize, String),
        Index(usize, usize),
        Visible(bool),
        Refresh,
        Repaint,
        Restore,
    }

    #[derive(Debug, Default)]
    struct DirHost {
        selection: Option<(usize, String)>,
        cell: (usize, usize),
        steps: Vec<DirStep>,
    }

    impl RenameDirectoryHost for DirHost {
        fn combo_selection(&mut self) -> Option<(usize, String)> {
            self.selection.clone()
        }

        fn current_cell(&mut self) -> (usize, usize) {
            self.cell
        }

        fn set_cell(&mut self, column: usize, row: usize, text: &str) {
            self.steps.push(DirStep::Cell(column, row, text.to_owned()));
        }

        fn set_row_index(&mut self, data_row: usize, index: usize) {
            self.steps.push(DirStep::Index(data_row, index));
        }

        fn set_combo_visible(&mut self, visible: bool) {
            self.steps.push(DirStep::Visible(visible));
        }

        fn repaint_grid(&mut self) {
            self.steps.push(DirStep::Repaint);
        }

        fn restore_selection(&mut self) {
            self.steps.push(DirStep::Restore);
        }

        fn refresh_rename_page(&mut self) {
            self.steps.push(DirStep::Refresh);
        }
    }

    fn dir_host() -> DirHost {
        DirHost {
            selection: Some((4, r"C:\Macros".to_owned())),
            cell: (1, 3),
            steps: Vec::new(),
        }
    }

    #[test]
    fn choosing_a_directory_commits_it_and_rebuilds_the_page() {
        let mut host = dir_host();

        assert!(rename_directory_changed(&mut host));

        assert_eq!(
            host.steps,
            [
                DirStep::Cell(1, 3, r"C:\Macros".to_owned()),
                DirStep::Index(2, 4),
                DirStep::Visible(false),
                DirStep::Refresh,
                DirStep::Repaint,
                DirStep::Restore,
            ]
        );
    }

    #[test]
    fn leaving_the_combo_commits_without_rebuilding_the_page() {
        let mut host = dir_host();

        assert!(rename_directory_exited(&mut host));

        assert!(!host.steps.contains(&DirStep::Refresh));
        assert!(host.steps.contains(&DirStep::Index(2, 4)));
    }

    #[test]
    fn the_source_page_shrinks_and_fixes_the_window_after_remembering_its_height() {
        let layout = page_layout(WizardPage::Source);

        assert_eq!(layout.form_height, Some(SOURCE_PAGE_HEIGHT));
        assert_eq!(layout.mode, Some(WindowMode::Fixed));
        assert!(layout.remembers_height);
        assert!(!layout.restores_height);
    }

    #[test]
    fn the_sub_circuit_page_restores_the_remembered_height_and_resizability() {
        let layout = page_layout(WizardPage::SubCircuit);

        assert_eq!(layout.form_height, None);
        assert!(layout.restores_height);
        assert_eq!(layout.mode, Some(WindowMode::Resizable));
    }

    #[test]
    fn the_shape_page_sizes_its_inner_control_as_well_as_the_form() {
        let layout = page_layout(WizardPage::Shape);

        assert_eq!(layout.inner_height, Some(SHAPE_INNER_HEIGHT));
        assert_eq!(layout.form_height, Some(SHAPE_PAGE_HEIGHT));
        assert!(layout.remembers_height);
    }

    #[test]
    fn the_pair_page_never_shrinks_an_enlarged_window_and_refreshes_the_preview() {
        let layout = page_layout(WizardPage::Pair);

        assert_eq!(layout.form_height, Some(PAIR_MINIMUM_HEIGHT));
        assert!(layout.restores_height);
        assert!(layout.refreshes_preview);
        assert_eq!(layout.mode, Some(WindowMode::Resizable));
    }

    #[test]
    fn an_unnamed_page_keeps_whatever_layout_it_had() {
        let layout = page_layout(WizardPage::Other);

        assert_eq!(layout.form_height, None);
        assert_eq!(layout.mode, None);
        assert!(!layout.remembers_height);
        assert!(!layout.restores_height);
        assert!(!layout.refreshes_preview);
    }

    #[derive(Debug, Default)]
    struct HdlHost {
        shown: Vec<u64>,
    }

    impl HdlOptionsHost for HdlHost {
        fn show_hdl_options(&mut self, staged: u64) {
            self.shown.push(staged);
        }
    }

    #[derive(Debug, Default)]
    struct LibraryHost {
        refreshes: usize,
        filter: Option<String>,
        cleared: usize,
    }

    impl ShapeFilterHost for LibraryHost {
        fn refresh_shape_filter(&mut self) {
            self.refreshes += 1;
        }

        fn pin_filter_selection(&mut self) -> Option<usize> {
            None
        }

        fn pin_filter_text(&mut self) -> String {
            String::new()
        }

        fn pin_filter_index_of(&mut self, _text: &str) -> Option<usize> {
            None
        }

        fn set_pin_filter_selection(&mut self, _index: Option<usize>) {}

        fn set_pin_filter_text(&mut self, _text: &str) {}
    }

    impl ShapeLibraryHost for LibraryHost {
        fn clear_library_filter(&mut self) {
            self.filter = None;
            self.cleared += 1;
        }

        fn set_library_filter(&mut self, library: &str) {
            self.filter = Some(library.to_owned());
        }
    }

    #[test]
    fn the_first_shape_library_entry_clears_the_filter_and_the_others_set_it() {
        let items = vec!["All".to_owned(), "Analog".to_owned(), "Logic".to_owned()];
        let mut host = LibraryHost::default();

        choose_shape_library(2, &items, &mut host);
        assert_eq!(host.filter.as_deref(), Some("Logic"));

        choose_shape_library(ALL_SHAPE_LIBRARIES_INDEX, &items, &mut host);
        assert_eq!(host.filter, None);

        choose_shape_library(99, &items, &mut host);
        assert_eq!(host.filter, None);

        assert_eq!(host.refreshes, 3);
    }

    #[test]
    fn choosing_an_existing_shape_disables_every_shape_control() {
        assert_eq!(shape_mode_control_states(true), [Some(false); 7]);
    }

    #[test]
    fn the_generated_shape_mode_leaves_the_last_three_controls_to_the_follow_up() {
        let states = shape_mode_control_states(false);

        assert_eq!(&states[..4], [Some(true); 4]);
        assert_eq!(&states[4..], [None, None, None]);
    }

    #[derive(Debug, Default)]
    struct RenameEditRecorder {
        refreshes: usize,
    }

    impl RenameEditHost for RenameEditRecorder {
        fn refresh_rename_page(&mut self) {
            self.refreshes += 1;
        }
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum SelectStep {
        Show(i32, i32, i32, i32),
        Selection(usize),
    }

    #[derive(Debug, Default)]
    struct SelectHost {
        indices: Vec<usize>,
        steps: Vec<SelectStep>,
    }

    impl RenameSelectionHost for SelectHost {
        fn cell_rect(&mut self, _column: usize, _row: usize) -> RenameCellRect {
            RenameCellRect {
                left: 30,
                top: 40,
                right: 130,
                bottom: 60,
            }
        }

        fn show_combo(&mut self, left: i32, top: i32, width: i32, height: i32) {
            self.steps.push(SelectStep::Show(left, top, width, height));
        }

        fn row_index(&mut self, data_row: usize) -> usize {
            self.indices.get(data_row).copied().unwrap_or(0)
        }

        fn set_combo_selection(&mut self, index: usize) {
            self.steps.push(SelectStep::Selection(index));
        }
    }

    #[test]
    fn the_directory_column_gets_the_combo_inset_by_one_pixel() {
        let mut host = SelectHost {
            indices: vec![7, 9],
            steps: Vec::new(),
        };

        assert!(select_rename_cell(RENAME_DIRECTORY_COLUMN, 2, &mut host));

        assert_eq!(
            host.steps,
            [SelectStep::Show(31, 41, 101, 21), SelectStep::Selection(9)]
        );
    }

    #[test]
    fn other_columns_still_restore_the_stored_index_without_the_combo() {
        let mut host = SelectHost {
            indices: vec![7, 9],
            steps: Vec::new(),
        };

        assert!(!select_rename_cell(1, 1, &mut host));

        assert_eq!(host.steps, [SelectStep::Selection(7)]);
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum BrowseStep {
        Adopt(String),
        Reset,
        Stage(String),
        Available(bool),
        Error(String),
        Refresh,
    }

    #[derive(Debug, Default)]
    struct BrowseHost {
        chosen: Option<String>,
        transfer: Option<Vec<String>>,
        accessible: Vec<String>,
        steps: Vec<BrowseStep>,
    }

    impl SourceBrowseHost for BrowseHost {
        fn choose_source_file(&mut self) -> Option<String> {
            self.chosen.clone()
        }

        fn adopt_source(&mut self, path: &str) {
            self.steps.push(BrowseStep::Adopt(path.to_owned()));
        }

        fn reset_source_dependent_pages(&mut self) {
            self.steps.push(BrowseStep::Reset);
        }
    }

    impl WebSourceBrowseHost for BrowseHost {
        fn transfer_from_web(&mut self) -> Option<Vec<String>> {
            self.transfer.clone()
        }

        fn is_accessible_file(&mut self, path: &str) -> bool {
            self.accessible.iter().any(|known| known == path)
        }

        fn stage_source(&mut self, path: &str) {
            self.steps.push(BrowseStep::Stage(path.to_owned()));
        }

        fn set_source_available(&mut self, available: bool) {
            self.steps.push(BrowseStep::Available(available));
        }

        fn show_error(&mut self, message: &str) {
            self.steps.push(BrowseStep::Error(message.to_owned()));
        }

        fn refresh_wizard_state(&mut self) {
            self.steps.push(BrowseStep::Refresh);
        }
    }

    #[test]
    fn an_accepted_source_file_is_adopted_and_resets_the_downstream_pages() {
        let mut host = BrowseHost {
            chosen: Some("amp.tsc".to_owned()),
            ..BrowseHost::default()
        };

        assert_eq!(browse_for_source(&mut host), Some("amp.tsc".to_owned()));

        assert_eq!(
            host.steps,
            [BrowseStep::Adopt("amp.tsc".to_owned()), BrowseStep::Reset]
        );
    }

    #[test]
    fn cancelling_the_source_dialog_changes_nothing() {
        let mut host = BrowseHost::default();

        assert_eq!(browse_for_source(&mut host), None);

        assert!(host.steps.is_empty());
    }

    #[test]
    fn a_web_transfer_ends_on_the_last_path_it_returned() {
        let mut host = BrowseHost {
            transfer: Some(vec!["good.tsc".to_owned(), "missing.tsc".to_owned()]),
            accessible: vec!["good.tsc".to_owned()],
            ..BrowseHost::default()
        };

        assert!(!browse_for_web_source(&mut host));

        assert_eq!(
            host.steps,
            [
                BrowseStep::Reset,
                BrowseStep::Stage("good.tsc".to_owned()),
                BrowseStep::Available(true),
                BrowseStep::Stage("missing.tsc".to_owned()),
                BrowseStep::Available(false),
                BrowseStep::Error(LIBRARY_LOAD_ERROR.to_owned()),
                BrowseStep::Refresh,
            ]
        );
    }

    #[test]
    fn a_web_transfer_that_was_not_accepted_only_refreshes_the_wizard() {
        let mut host = BrowseHost::default();

        assert!(!browse_for_web_source(&mut host));

        assert_eq!(host.steps, [BrowseStep::Refresh]);
    }

    #[test]
    fn a_web_transfer_that_returned_nothing_still_reports_the_error() {
        let mut host = BrowseHost {
            transfer: Some(Vec::new()),
            ..BrowseHost::default()
        };

        assert!(!browse_for_web_source(&mut host));

        assert!(
            host.steps
                .contains(&BrowseStep::Error(LIBRARY_LOAD_ERROR.to_owned()))
        );
    }

    #[test]
    fn editing_a_rename_cell_only_rebuilds_the_page() {
        let mut host = RenameEditRecorder::default();

        rename_cell_edited(&mut host);
        rename_cell_edited(&mut host);

        assert_eq!(host.refreshes, 2);
    }

    #[test]
    fn the_hdl_options_button_passes_the_staged_value_and_reads_nothing_back() {
        let mut host = HdlHost::default();

        open_hdl_options(42, &mut host);

        assert_eq!(host.shown, [42]);
    }

    #[test]
    fn a_combo_without_a_selection_commits_nothing() {
        let mut host = DirHost {
            cell: (1, 3),
            ..DirHost::default()
        };

        assert!(!rename_directory_changed(&mut host));

        assert_eq!(host.steps, [DirStep::Repaint, DirStep::Restore]);
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Default)]
    struct Host {
        steps: Vec<&'static str>,
    }

    impl MacroWizardTeardownHost for Host {
        fn restore_preview_parent(&mut self) {
            self.steps.push("reparent");
        }

        fn release_private_objects(&mut self) {
            self.steps.push("release");
        }
    }

    #[test]
    fn destroy_reparents_the_preview_before_releasing_anything() {
        let mut host = Host::default();

        destroy_macro_wizard(&mut host);

        assert_eq!(host.steps, ["reparent", "release"]);
    }

    #[derive(Debug, Default)]
    struct CancelHost {
        may_close: bool,
        selected_first: usize,
    }

    impl MacroWizardCancelHost for CancelHost {
        fn may_close(&mut self) -> bool {
            self.may_close
        }

        fn select_first_page(&mut self) {
            self.selected_first += 1;
        }
    }

    #[test]
    fn cancel_returns_to_the_first_page_only_once_the_close_check_agrees() {
        let mut refused = CancelHost::default();
        assert!(!cancel_macro_wizard(&mut refused));
        assert_eq!(refused.selected_first, 0);

        let mut allowed = CancelHost {
            may_close: true,
            selected_first: 0,
        };
        assert!(cancel_macro_wizard(&mut allowed));
        assert_eq!(allowed.selected_first, 1);
    }

    #[derive(Debug, Default)]
    struct HelpHost {
        resolved: Vec<PathBuf>,
        shown: Vec<(u32, PathBuf)>,
    }

    impl MacroWizardHelpHost for HelpHost {
        fn resolve_localized_help(&mut self, base_path: &Path) -> PathBuf {
            self.resolved.push(base_path.to_path_buf());
            base_path.with_extension("de.chm")
        }

        fn show_help_context(&mut self, context: u32, help_file: &Path) {
            self.shown.push((context, help_file.to_path_buf()));
        }
    }

    #[test]
    fn help_resolves_the_localized_file_and_shows_the_fixed_context() {
        let mut host = HelpHost::default();

        let resolved = open_macro_wizard_help(Path::new(r"C:\TINA\HELP"), &mut host);

        assert_eq!(host.resolved, [Path::new(r"C:\TINA\HELP").join(HELP_FILE)]);
        assert_eq!(host.shown, [(HELP_CONTEXT, resolved)]);
    }

    #[derive(Debug, Default)]
    struct FilterHost {
        refreshes: usize,
        selection: Option<usize>,
        text: String,
        entries: Vec<String>,
        selections: Vec<Option<usize>>,
        texts: Vec<String>,
        enabled: usize,
    }

    impl ShapeFilterHost for FilterHost {
        fn refresh_shape_filter(&mut self) {
            self.refreshes += 1;
        }

        fn pin_filter_selection(&mut self) -> Option<usize> {
            self.selection
        }

        fn pin_filter_text(&mut self) -> String {
            self.text.clone()
        }

        fn pin_filter_index_of(&mut self, text: &str) -> Option<usize> {
            self.entries.iter().position(|entry| entry == text)
        }

        fn set_pin_filter_selection(&mut self, index: Option<usize>) {
            self.selection = index;
            self.selections.push(index);
        }

        fn set_pin_filter_text(&mut self, text: &str) {
            self.text = text.to_owned();
            self.texts.push(text.to_owned());
        }
    }

    impl ShapeSourceHost for FilterHost {
        fn enable_shape_controls(&mut self) {
            self.enabled += 1;
        }
    }

    #[test]
    fn the_search_edit_and_type_combo_only_rebuild_the_shape_filter() {
        let mut host = FilterHost::default();

        refresh_shape_filter(&mut host);
        refresh_shape_filter(&mut host);

        assert_eq!(host.refreshes, 2);
        assert!(host.selections.is_empty());
    }

    #[test]
    fn an_edited_pin_filter_entry_drops_its_stale_selection() {
        let mut edited = FilterHost {
            selection: Some(1),
            text: "12 pins".to_owned(),
            entries: vec!["2".to_owned(), "4".to_owned()],
            ..FilterHost::default()
        };
        assert!(pin_filter_changed(&mut edited));
        assert_eq!(edited.selections, [None]);
        assert_eq!(edited.texts, ["12 pins".to_owned()]);
        assert_eq!(edited.refreshes, 1);

        let mut listed = FilterHost {
            selection: Some(1),
            text: "4".to_owned(),
            entries: vec!["2".to_owned(), "4".to_owned()],
            ..FilterHost::default()
        };
        assert!(!pin_filter_changed(&mut listed));
        assert!(listed.selections.is_empty());
        assert_eq!(listed.refreshes, 1);
    }

    #[test]
    fn enter_on_an_empty_pin_filter_restores_the_first_entry() {
        let mut empty = FilterHost {
            text: "   ".to_owned(),
            ..FilterHost::default()
        };
        assert!(pin_filter_key_pressed('\r', &mut empty));
        assert_eq!(empty.selections, [Some(0)]);

        let mut filled = FilterHost {
            text: "4".to_owned(),
            ..FilterHost::default()
        };
        assert!(!pin_filter_key_pressed('\r', &mut filled));
        assert!(filled.selections.is_empty());

        let mut other_key = FilterHost {
            text: String::new(),
            ..FilterHost::default()
        };
        assert!(!pin_filter_key_pressed('a', &mut other_key));
        assert!(other_key.selections.is_empty());
    }

    #[test]
    fn the_shape_source_click_always_re_enables_but_only_a_real_click_rebuilds() {
        let mut host = FilterHost::default();

        assert!(shape_source_clicked(true, &mut host));
        assert!(!shape_source_clicked(false, &mut host));

        assert_eq!(host.enabled, 2);
        assert_eq!(host.refreshes, 1);
    }

    #[test]
    fn the_generate_vhdl_click_is_a_proven_no_op() {
        generate_vhdl_clicked();
    }

    #[derive(Debug, Default)]
    struct SourceHost {
        steps: Vec<String>,
        text: String,
        accessible: Vec<String>,
    }

    impl MacroWizardStateHost for SourceHost {
        fn refresh_wizard_state(&mut self) {
            self.steps.push("state".to_owned());
        }
    }

    impl MacroSourceHost for SourceHost {
        fn apply_source_mode(&mut self) {
            self.steps.push("mode".to_owned());
        }

        fn source_text(&mut self) -> String {
            self.text.clone()
        }

        fn is_accessible_file(&mut self, path: &str) -> bool {
            self.accessible.iter().any(|known| known == path)
        }

        fn expand_path(&mut self, path: &str) -> String {
            format!(r"C:\Full\{path}")
        }

        fn adopt_source(&mut self, path: &str) {
            self.steps.push(format!("adopt:{path}"));
        }
    }

    #[test]
    fn typing_a_source_path_reapplies_the_mode_then_the_wizard_state() {
        let mut host = SourceHost::default();

        source_text_changed(&mut host);

        assert_eq!(host.steps, ["mode".to_owned(), "state".to_owned()]);
    }

    #[test]
    fn enter_adopts_only_a_path_that_already_resolves() {
        let mut resolving = SourceHost {
            text: "amp.tsc".to_owned(),
            accessible: vec!["amp.tsc".to_owned()],
            ..SourceHost::default()
        };
        assert_eq!(
            source_key_pressed('\r', &mut resolving),
            Some(r"C:\Full\amp.tsc".to_owned())
        );
        assert_eq!(resolving.steps, [r"adopt:C:\Full\amp.tsc".to_owned()]);

        let mut missing = SourceHost {
            text: "gone.tsc".to_owned(),
            ..SourceHost::default()
        };
        assert_eq!(source_key_pressed('\r', &mut missing), None);
        assert!(missing.steps.is_empty());

        let mut other_key = SourceHost {
            text: "amp.tsc".to_owned(),
            accessible: vec!["amp.tsc".to_owned()],
            ..SourceHost::default()
        };
        assert_eq!(source_key_pressed('a', &mut other_key), None);
        assert!(other_key.steps.is_empty());
    }
}
