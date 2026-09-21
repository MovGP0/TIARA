//! Iced state for the recovered macro wizard.

use iced::widget::{
    button, checkbox, column, container, horizontal_space, radio, row, scrollable, text, text_input,
};
use iced::{Element, Length};
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

pub trait DeviceSelectionHost {
    /// Re-applies the wizard's control states for the active page.
    fn update_control_states(&mut self);

    /// Calls the device combo box's recovered virtual slot `+0x258`.
    ///
    /// The recovered symbols do not name the method, so it is carried through
    /// as the one extra step the handler performs rather than guessed at.
    fn notify_device_combo(&mut self);
}

/// Implements Ghidra function `FUN_01c3f5e0` at `0x01C3F5E0`.
///
/// Handles `fMacroWiz.pcMWiz.tsShape.cbDevices.OnChange`.
///
/// Re-applies the wizard's control states after a device is chosen and then
/// notifies the combo box itself.
///
/// The control states are recomputed from the active page rather than from the
/// chosen device, so picking a different device in the same page only changes
/// what the shared state routine already decides.
pub fn device_selection_changed(host: &mut impl DeviceSelectionHost) {
    host.update_control_states();
    host.notify_device_combo();
}

/// What the window is called and where it came from.
pub const TITLE: &str = "New Macro Wizard";
pub const SCREENSHOT: &str = "screenshots/New_Macro_Wizard.png";

/// `TfMacroWiz.FormCreate`, which is what the original runs when the window
/// is made.
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01c37190");

/// The pages the wizard walks through, in the order it walks them.
///
/// The form has six tab sheets and the recovered page-change handler names
/// five of them; the sixth, the one that says the macro is ready, is the end
/// of the walk.
pub const PAGES: [(&str, WizardPage); 6] = [
    ("Source", WizardPage::Source),
    ("Subcircuit", WizardPage::SubCircuit),
    ("Shape", WizardPage::Shape),
    ("Pins", WizardPage::Pair),
    ("Names", WizardPage::Rename),
    ("Finished", WizardPage::Other),
];

/// Where the macro comes from, as the first page's radio buttons put it.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum MacroSource {
    /// Start with nothing on the sheet.
    #[default]
    EmptyCircuit,
    /// Take what is on the sheet now.
    CurrentCircuit,
    /// Read a file.
    FromFile,
    /// Fetch one.
    FromWeb,
}

impl MacroSource {
    /// What this page shows for each choice.
    ///
    /// The recovered handler works in terms of two radio buttons and a code;
    /// `From file` is the one with a field of its own, and `From the Web` is
    /// the one that has to resolve a name before the wizard can go on.
    #[must_use]
    pub const fn kind(self) -> SourceKind {
        match self {
            Self::FromFile => SourceKind::First,
            Self::CurrentCircuit => SourceKind::Second,
            Self::FromWeb => SourceKind::Third,
            Self::EmptyCircuit => SourceKind::Other,
        }
    }

    /// The states the controls on the source page take, by the recovered
    /// rule.
    #[must_use]
    pub const fn control_states(self) -> SourceControlStates {
        source_control_states(
            matches!(self, Self::FromFile),
            matches!(self, Self::CurrentCircuit),
        )
    }
}

/// Where the shape comes from.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum ShapeSource {
    /// Draw one from the macro's pins.
    #[default]
    Generated,
    /// Take one out of a library.
    FromLibrary,
}

/// What was pressed or typed.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    /// The wizard's own buttons.
    Back,
    Next,
    Cancel,
    Help,
    /// A page was chosen outright, which the page control allows.
    PageChosen(usize),
    /// The first page.
    NameChanged(String),
    SourceChosen(MacroSource),
    SourceFileChanged(String),
    DefaultLabelChanged(String),
    DefaultParametersChanged(String),
    GenerateHdlToggled(bool),
    /// The subcircuit page.
    SubcircuitChosen(String),
    /// The shape page.
    ShapeSourceChosen(ShapeSource),
    ShapeLibraryChosen(usize),
    ShapeSearchChanged(String),
    SuggestedOnlyToggled(bool),
    /// The last page.
    EmbedToggled(bool),
}

/// The New Macro Wizard.
///
/// Six pages, walked with Back and Next. What each page offers, and when the
/// wizard will let the walk go on, follow the rules recovered into this
/// module rather than rules made up here.
#[derive(Debug, Clone, Default)]
pub struct Window {
    /// Which page is showing.
    page: usize,
    /// The first page.
    name: String,
    source: MacroSource,
    source_file: String,
    default_label: String,
    default_parameters: String,
    generate_hdl: bool,
    /// The subcircuit page, which only has anything to offer when a source
    /// holds more than one subcircuit.
    subcircuits: Vec<String>,
    chosen_subcircuit: Option<String>,
    /// The shape page.
    shape_source: ShapeSource,
    shape_libraries: Vec<String>,
    chosen_library: usize,
    shape_search: String,
    suggested_only: bool,
    /// The last page.
    embed: bool,
    /// Whether the wizard was given up on or seen through.
    finished: Option<bool>,
}

impl Window {
    /// A wizard offering the subcircuits and shape libraries given.
    #[must_use]
    pub fn offering(subcircuits: Vec<String>, shape_libraries: Vec<String>) -> Self {
        Self {
            subcircuits,
            shape_libraries,
            ..Self::default()
        }
    }

    /// Which page is showing.
    #[must_use]
    pub const fn page(&self) -> usize {
        self.page
    }

    /// What that page is, as the recovered layout names it.
    #[must_use]
    pub fn wizard_page(&self) -> WizardPage {
        PAGES
            .get(self.page)
            .map_or(WizardPage::Other, |(_, page)| *page)
    }

    /// How the form is laid out for the page showing, by the recovered rule.
    #[must_use]
    pub const fn layout(&self) -> PageLayout {
        page_layout(self.wizard_page_const())
    }

    /// The page showing, without looking the name up.
    const fn wizard_page_const(&self) -> WizardPage {
        match self.page {
            0 => WizardPage::Source,
            1 => WizardPage::SubCircuit,
            2 => WizardPage::Shape,
            3 => WizardPage::Pair,
            4 => WizardPage::Rename,
            _ => WizardPage::Other,
        }
    }

    /// Whether the wizard was seen through, given up on, or is still going.
    #[must_use]
    pub const fn finished(&self) -> Option<bool> {
        self.finished
    }

    /// What the macro will be called.
    #[must_use]
    pub fn name(&self) -> &str {
        &self.name
    }

    /// Whether the walk can go on from the page showing.
    ///
    /// The first page needs a name and a source that has been settled - the
    /// recovered `accept` state is what says a source has been chosen at
    /// all, and a source read from a file needs the file as well. The
    /// subcircuit page needs one chosen where there is a choice. The rest
    /// have nothing to insist on.
    #[must_use]
    pub fn can_go_on(&self) -> bool {
        match self.page {
            0 => {
                if self.name.trim().is_empty() {
                    return false;
                }
                match self.source {
                    MacroSource::FromFile => !self.source_file.trim().is_empty(),
                    MacroSource::EmptyCircuit | MacroSource::CurrentCircuit => true,
                    // The one the recovered code has to resolve a name for
                    // before it can go on, and the port cannot fetch yet.
                    MacroSource::FromWeb => false,
                }
            }
            1 => self.subcircuits.is_empty() || self.chosen_subcircuit.is_some(),
            _ => true,
        }
    }

    /// Whether there is a page before this one.
    #[must_use]
    pub const fn can_go_back(&self) -> bool {
        self.page > 0
    }

    /// Whether the page showing is the last.
    #[must_use]
    pub const fn on_the_last_page(&self) -> bool {
        self.page + 1 == PAGES.len()
    }

    /// The states the source page's controls take.
    #[must_use]
    pub const fn source_controls(&self) -> SourceControlStates {
        self.source.control_states()
    }

    /// The states the shape page's controls take, by the recovered rule.
    #[must_use]
    pub const fn shape_controls(&self) -> ShapeControlStates {
        shape_mode_control_states(matches!(self.shape_source, ShapeSource::FromLibrary))
    }

    /// Answers a message.
    pub fn update(&mut self, message: Message) {
        match message {
            Message::Back => {
                if self.can_go_back() {
                    self.page -= 1;
                }
            }
            Message::Next => {
                if !self.can_go_on() {
                    return;
                }
                if self.on_the_last_page() {
                    self.finished = Some(true);
                } else {
                    self.page += 1;
                }
            }
            Message::Cancel => self.finished = Some(false),
            Message::Help => {}
            Message::PageChosen(page) => {
                if page < PAGES.len() {
                    self.page = page;
                }
            }
            Message::NameChanged(value) => self.name = value,
            Message::SourceChosen(source) => self.source = source,
            Message::SourceFileChanged(value) => self.source_file = value,
            Message::DefaultLabelChanged(value) => self.default_label = value,
            Message::DefaultParametersChanged(value) => self.default_parameters = value,
            Message::GenerateHdlToggled(on) => self.generate_hdl = on,
            Message::SubcircuitChosen(value) => self.chosen_subcircuit = Some(value),
            Message::ShapeSourceChosen(source) => self.shape_source = source,
            Message::ShapeLibraryChosen(index) => {
                if index < self.shape_libraries.len() {
                    self.chosen_library = index;
                }
            }
            Message::ShapeSearchChanged(value) => self.shape_search = value,
            Message::SuggestedOnlyToggled(on) => self.suggested_only = on,
            Message::EmbedToggled(on) => self.embed = on,
        }
    }
}

impl Window {
    /// The wizard as the form lays it out: the page above, the four buttons
    /// below.
    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let mut tabs = row![].spacing(2);
        for (index, (caption, _)) in PAGES.iter().enumerate() {
            let here = index == self.page;
            let face = if here {
                format!("[{caption}]")
            } else {
                (*caption).to_owned()
            };
            tabs = tabs.push(
                button(text(face).size(11))
                    .padding([2, 8])
                    .on_press(Message::PageChosen(index)),
            );
        }

        let back = button(text("< Back").size(12));
        let back = if self.can_go_back() {
            back.on_press(Message::Back)
        } else {
            back
        };
        let onward = button(
            text(if self.on_the_last_page() {
                "Finish"
            } else {
                "Next >"
            })
            .size(12),
        );
        let onward = if self.can_go_on() {
            onward.on_press(Message::Next)
        } else {
            onward
        };

        let buttons = row![
            horizontal_space(),
            back,
            onward,
            button(text("Help").size(12)).on_press(Message::Help),
            button(text("Cancel").size(12)).on_press(Message::Cancel),
        ]
        .spacing(6);

        container(
            column![tabs, self.page_body(), buttons]
                .spacing(10)
                .padding(8),
        )
        .width(Length::Fill)
        .height(Length::Fill)
        .into()
    }

    /// Whichever page is showing.
    fn page_body(&self) -> Element<'_, Message> {
        let body: Element<'_, Message> = match self.page {
            0 => self.source_page(),
            1 => self.subcircuit_page(),
            2 => self.shape_page(),
            3 => text("Connect the spice pins to the shape pins.")
                .size(12)
                .into(),
            4 => text("Name the macro's pins and put them in order.")
                .size(12)
                .into(),
            _ => column![
                text("The macro file is ready for use.").size(12),
                checkbox("Embed macro in circuit", self.embed).on_toggle(Message::EmbedToggled),
            ]
            .spacing(8)
            .into(),
        };

        container(body).height(Length::Fill).into()
    }

    /// The first page: what the macro is called and where it comes from.
    fn source_page(&self) -> Element<'_, Message> {
        let states = self.source_controls();

        let mut chooser = column![text("Select the source of the macro").size(12)].spacing(4);
        for (caption, source) in [
            ("Empty circuit", MacroSource::EmptyCircuit),
            ("Current circuit", MacroSource::CurrentCircuit),
            ("From file", MacroSource::FromFile),
            ("From the Web", MacroSource::FromWeb),
        ] {
            chooser = chooser.push(radio(
                caption,
                source,
                Some(self.source),
                Message::SourceChosen,
            ));
        }

        // The field beside `From file` follows that radio button, which is
        // what the recovered control states say.
        let file = text_input("", &self.source_file).size(12).padding(4);
        let file = if states.first_field {
            file.on_input(Message::SourceFileChanged)
        } else {
            file
        };

        column![
            row![
                text("Macro Name").size(11).width(Length::Fixed(90.0)),
                text_input("", &self.name)
                    .on_input(Message::NameChanged)
                    .size(12)
                    .padding(4),
            ]
            .spacing(6),
            chooser,
            row![text("File").size(11).width(Length::Fixed(90.0)), file].spacing(6),
            text("Defaults").size(12),
            row![
                text("Label:").size(11).width(Length::Fixed(90.0)),
                text_input("", &self.default_label)
                    .on_input(Message::DefaultLabelChanged)
                    .size(12)
                    .padding(4),
            ]
            .spacing(6),
            row![
                text("Parameters:").size(11).width(Length::Fixed(90.0)),
                text_input("", &self.default_parameters)
                    .on_input(Message::DefaultParametersChanged)
                    .size(12)
                    .padding(4),
            ]
            .spacing(6),
            checkbox("Generate HDL component", self.generate_hdl)
                .on_toggle(Message::GenerateHdlToggled),
        ]
        .spacing(8)
        .into()
    }

    /// The second page, which only has something to say when the source
    /// holds more than one subcircuit.
    fn subcircuit_page(&self) -> Element<'_, Message> {
        if self.subcircuits.is_empty() {
            return text("The source holds one subcircuit, so there is nothing to choose.")
                .size(12)
                .into();
        }

        let mut list = column![].spacing(2);
        for name in &self.subcircuits {
            let chosen = self.chosen_subcircuit.as_deref() == Some(name.as_str());
            let face = if chosen {
                format!("> {name}")
            } else {
                name.clone()
            };
            list = list.push(
                button(text(face).size(12))
                    .padding([2, 6])
                    .width(Length::Fill)
                    .on_press(Message::SubcircuitChosen(name.clone()))
                    .style(button::text),
            );
        }

        column![
            text("More than one subcircuit was found. Choose one.").size(12),
            scrollable(list).height(Length::Fill),
        ]
        .spacing(8)
        .into()
    }

    /// The third page: where the macro's shape comes from.
    ///
    /// The recovered handler works in seven control states and which state
    /// belongs to which control is not recorded, so what is offered here
    /// follows the choice itself: a shape taken from a library needs the
    /// library and the filter, and a generated one does not.
    /// [`Window::shape_controls`] still gives the seven, for whoever works
    /// out the order.
    fn shape_page(&self) -> Element<'_, Message> {
        let from_library = matches!(self.shape_source, ShapeSource::FromLibrary);

        let mut libraries = row![].spacing(2);
        for (index, library) in self.shape_libraries.iter().enumerate() {
            let here = index == self.chosen_library;
            let face = if here {
                format!("[{library}]")
            } else {
                library.clone()
            };
            let pick = button(text(face).size(11)).padding([2, 8]);
            let pick = if from_library {
                pick.on_press(Message::ShapeLibraryChosen(index))
            } else {
                pick
            };
            libraries = libraries.push(pick);
        }

        let search = text_input("", &self.shape_search).size(12).padding(4);
        let search = if from_library {
            search.on_input(Message::ShapeSearchChanged)
        } else {
            search
        };

        column![
            text("Select the shape you want to attach to the macro.").size(12),
            radio(
                "Auto generate shape",
                ShapeSource::Generated,
                Some(self.shape_source),
                Message::ShapeSourceChosen
            ),
            radio(
                "Load shape from library",
                ShapeSource::FromLibrary,
                Some(self.shape_source),
                Message::ShapeSourceChosen
            ),
            libraries,
            row![text("Search:").size(11).width(Length::Fixed(90.0)), search].spacing(6),
            checkbox("Show suggested shapes only.", self.suggested_only)
                .on_toggle(Message::SuggestedOnlyToggled),
        ]
        .spacing(8)
        .into()
    }
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

#[cfg(test)]
mod device_selection_tests {
    use super::*;

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum Step {
        States,
        Notify,
    }

    #[derive(Debug, Default)]
    struct Devices {
        steps: Vec<Step>,
    }

    impl DeviceSelectionHost for Devices {
        fn update_control_states(&mut self) {
            self.steps.push(Step::States);
        }

        fn notify_device_combo(&mut self) {
            self.steps.push(Step::Notify);
        }
    }

    #[test]
    fn choosing_a_device_refreshes_the_controls_before_notifying_the_combo() {
        let mut host = Devices::default();

        device_selection_changed(&mut host);

        assert_eq!(host.steps, [Step::States, Step::Notify]);
    }
}

/// The pages the wizard steps through, in the order the Back button walks
/// them.
///
/// Part of Ghidra function `FUN_01c3b7c0` at `0x01C3B7C0`.
///
/// The recovered handler names its pages only by field offset; the
/// association with [`WizardPage`] follows from the order those offsets are
/// tested in, which is the same order the page layouts are recovered in
/// elsewhere in this module.
pub const PAGE_ORDER: [WizardPage; 5] = [
    WizardPage::Source,
    WizardPage::SubCircuit,
    WizardPage::Shape,
    WizardPage::Pair,
    WizardPage::Rename,
];

/// The page before this one, or `None` when there is none.
///
/// Part of Ghidra function `FUN_01c3b7c0` at `0x01C3B7C0`.
#[must_use]
pub fn page_before(page: WizardPage) -> Option<WizardPage> {
    let index = PAGE_ORDER.iter().position(|entry| *entry == page)?;
    index.checked_sub(1).map(|previous| PAGE_ORDER[previous])
}

/// What stepping back needs from the wizard.
pub trait BackNavigationHost {
    /// The page currently shown.
    fn active_page(&mut self) -> WizardPage;

    /// Shows one page.
    fn show_page(&mut self, page: WizardPage);

    /// Whether a page should be stepped straight over.
    fn page_is_skipped(&mut self, page: WizardPage) -> bool;

    /// Brings the page's own contents up to date.
    fn refresh_page(&mut self);

    /// Re-decides the wizard's buttons.
    fn refresh_buttons(&mut self);

    /// Clears the flag the wizard sets while it is moving forward.
    fn clear_forward_flag(&mut self);
}

/// Implements Ghidra function `FUN_01c3b7c0` at `0x01C3B7C0`.
///
/// Handles `fMacroWiz.pBottom.bprev.OnClick`.
///
/// Steps the wizard back one page, over any page that does not apply.
///
/// Which pages apply depends on what the user chose earlier, so stepping back
/// cannot simply undo one step — a page that was skipped on the way forward
/// has to be skipped again on the way back, or Back would land on a page the
/// wizard has nothing to put in. The recovered handler calls itself again
/// after landing on a skipped page, which is the loop this port makes
/// explicit.
///
/// The page's contents and the wizard's buttons are refreshed once at the
/// end rather than on each hop, so skipping several pages redraws only the
/// one that is finally shown.
///
/// Returns the page the wizard settled on.
pub fn step_back(host: &mut impl BackNavigationHost) -> WizardPage {
    loop {
        let current = host.active_page();
        let Some(previous) = page_before(current) else {
            break;
        };

        host.show_page(previous);
        if !host.page_is_skipped(previous) {
            break;
        }
    }

    let settled = host.active_page();
    host.refresh_page();
    host.refresh_buttons();
    host.clear_forward_flag();
    settled
}

/// Which way the macro's source is being supplied.
///
/// Part of Ghidra function `FUN_01c3c2e0` at `0x01C3C2E0`.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub enum SourceKind {
    /// Recovered value 1.
    First,
    /// Recovered value 2, the one that sets the flag the others leave clear.
    Second,
    /// Recovered value 3, the one that resolves a name before it can go on.
    Third,
    /// Anything else, which is treated exactly like [`Self::First`].
    Other,
}

impl SourceKind {
    /// Recovers a kind from the code the wizard reports.
    #[must_use]
    pub const fn from_code(code: u8) -> Self {
        match code {
            1 => Self::First,
            2 => Self::Second,
            3 => Self::Third,
            _ => Self::Other,
        }
    }

    /// Whether this kind sets the flag the source page is configured with.
    ///
    /// Part of Ghidra function `FUN_01c3c2e0` at `0x01C3C2E0`.
    #[must_use]
    pub const fn sets_flag(self) -> bool {
        matches!(self, Self::Second)
    }

    /// Whether this kind has to resolve a name before the page can be
    /// configured.
    #[must_use]
    pub const fn resolves_name(self) -> bool {
        matches!(self, Self::Third)
    }
}

/// Which of the source page's controls are enabled.
///
/// Part of Ghidra function `FUN_01c3c2e0` at `0x01C3C2E0`.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
#[allow(clippy::struct_excessive_bools)]
pub struct SourceControlStates {
    /// Follows the first radio button directly.
    pub first_field: bool,
    /// Follows the first field's own enabled state, so it is one step further
    /// down the same chain rather than reading the radio again.
    pub first_field_option: bool,
    /// Follows the second radio button.
    pub second_field: bool,
    /// Enabled when either radio is chosen — this is the control that says
    /// the user has made a choice at all.
    pub accept: bool,
}

/// Works out the source page's control states from the two radio buttons.
///
/// Part of Ghidra function `FUN_01c3c2e0` at `0x01C3C2E0`.
#[must_use]
pub const fn source_control_states(first_chosen: bool, second_chosen: bool) -> SourceControlStates {
    SourceControlStates {
        first_field: first_chosen,
        first_field_option: first_chosen,
        second_field: second_chosen,
        accept: first_chosen || second_chosen,
    }
}

/// What choosing a macro source needs from the wizard.
pub trait SourceChoiceHost {
    /// Whether the first radio button is chosen.
    fn first_source_chosen(&mut self) -> bool;

    /// Whether the second is.
    fn second_source_chosen(&mut self) -> bool;

    /// Applies the control states.
    fn apply_control_states(&mut self, states: SourceControlStates);

    /// The kind of source the wizard reports.
    fn source_kind(&mut self) -> SourceKind;

    /// Resolves the name the third kind needs.
    fn resolve_source_name(&mut self) -> u32;

    /// Configures the source page.
    fn configure_source_page(&mut self, flag: bool, value: u32);

    /// Drops the parsed source the wizard was holding.
    fn discard_parsed_source(&mut self);

    /// Prepares the page after this one.
    fn prepare_next_page(&mut self);

    /// Hides the progress display.
    fn hide_progress(&mut self);

    /// Clears the subcircuit choice.
    fn clear_subcircuit_choice(&mut self);

    /// Puts the device list back on its first row.
    fn reset_device_choice(&mut self);

    /// Re-decides the wizard's buttons.
    fn refresh_buttons(&mut self);
}

/// Implements Ghidra function `FUN_01c3c2e0` at `0x01C3C2E0`.
///
/// Handles `fMacroWiz.pcMWiz.tsSource.pSourceEmpty.rbFromWeb.OnClick`.
///
/// Reacts to the user choosing where the macro's source comes from.
///
/// Changing the source invalidates everything downstream of it, so the
/// handler does not merely enable a field: it throws away the parsed source,
/// forgets the subcircuit and device choices, and prepares the next page
/// again. That is why choosing a source twice does not leave the wizard
/// half-filled from the first choice.
///
/// The enabled states run as a chain rather than as four independent reads —
/// one control follows the radio, and the next follows *that control's*
/// enabled state. So a control disabled for any other reason would take the
/// one below it with it.
///
/// Returns the kind the wizard settled on.
pub fn source_chosen(host: &mut impl SourceChoiceHost) -> SourceKind {
    let states = source_control_states(host.first_source_chosen(), host.second_source_chosen());
    host.apply_control_states(states);

    let kind = host.source_kind();
    let value = if kind.resolves_name() {
        host.resolve_source_name()
    } else {
        0
    };
    host.configure_source_page(kind.sets_flag(), value);

    host.discard_parsed_source();
    host.prepare_next_page();
    host.hide_progress();
    host.clear_subcircuit_choice();
    host.reset_device_choice();
    host.refresh_buttons();

    kind
}

/// What rebuilding the node list needs from the wizard.
pub trait SubCircuitHost {
    /// Empties the node list. Done before anything is decided, so a cleared
    /// choice leaves an empty list rather than a stale one.
    fn clear_nodes(&mut self);

    /// The chosen subcircuit's row, or `None` when none is chosen.
    fn chosen_row(&mut self) -> Option<usize>;

    /// The half-open range of names the chosen subcircuit owns.
    fn node_range(&mut self, row: usize) -> (usize, usize);

    /// One name from the parsed source.
    fn node_name(&mut self, index: usize) -> String;

    /// Puts the names into the list.
    fn set_nodes(&mut self, names: Vec<String>);

    /// Clears the list's horizontal scrolling extent.
    fn reset_scroll_extent(&mut self);

    /// Re-decides the wizard's buttons.
    fn refresh_buttons(&mut self);
}

/// Implements Ghidra function `FUN_01c3cbb0` at `0x01C3CBB0`.
///
/// Handles `fMacroWiz.pcMWiz.tsSubCkt.cbSubCkt.OnChange`.
///
/// Rebuilds the node list for the subcircuit the user picked.
///
/// One source file can hold several subcircuits, and the parsed source keeps
/// all their names in one list rather than one list each — so picking a
/// subcircuit means taking the slice of that list it owns. The two bounds are
/// inclusive, which is why an empty subcircuit is spelled as a range that
/// runs backwards rather than as an empty one.
///
/// The list is emptied before the choice is looked at, so clearing the choice
/// leaves it empty rather than showing the previous subcircuit's nodes.
///
/// Returns the names that went into the list.
pub fn subcircuit_chosen(host: &mut impl SubCircuitHost) -> Vec<String> {
    host.clear_nodes();

    let Some(row) = host.chosen_row() else {
        host.refresh_buttons();
        return Vec::new();
    };

    let (first, last) = host.node_range(row);
    let names: Vec<String> = (first..=last)
        .take_while(|index| *index <= last && first <= last)
        .map(|index| host.node_name(index))
        .collect();

    host.set_nodes(names.clone());
    host.reset_scroll_extent();
    host.refresh_buttons();
    names
}

/// The text a device entry is drawn with while the wizard is making the shape
/// itself.
pub const AUTOSHAPE_LABEL: &str = "Autoshape";

/// The colour that label is drawn in, as a Windows `COLORREF`.
///
/// The bytes run blue, green, red, so `0x0000FF` is red — the one entry the
/// wizard draws in a colour of its own.
pub const AUTOSHAPE_COLOR: u32 = 0x0000_00ff;

/// The colour every other entry is drawn in.
pub const DEVICE_COLOR: u32 = 0x0000_0000;

/// How far in from the entry's left edge the text is drawn.
pub const DEVICE_TEXT_INDENT: i32 = 2;

/// What one device entry was drawn as.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum DeviceEntryDraw {
    /// Only the background — no device is chosen.
    BackgroundOnly,
    /// The background, then this text in this colour, then a symbol.
    Painted {
        /// The text drawn, which is the autoshape label when the wizard is
        /// making the shape itself.
        text: String,
        /// The colour it was drawn in.
        color: u32,
        /// Whether a symbol was drawn as well.
        symbol: bool,
    },
}

/// What drawing one device entry needs from the wizard.
pub trait DeviceEntryHost {
    /// Fills the entry's background.
    fn fill_background(&mut self);

    /// One entry's own text.
    fn entry_text(&mut self, index: usize) -> String;

    /// Whether any device is chosen.
    fn device_chosen(&mut self) -> bool;

    /// Whether the wizard is making the shape itself rather than taking one.
    fn autoshape(&mut self) -> bool;

    /// Draws the text in one colour.
    fn draw_text(&mut self, text: &str, color: u32, indent: i32);

    /// How many entries the list holds.
    fn entry_count(&mut self) -> usize;

    /// Draws the symbol for one entry, or the held-back one when the index is
    /// past the end. Returns whether anything was drawn.
    fn draw_symbol(&mut self, index: usize, past_end: bool) -> bool;
}

/// Implements Ghidra function `FUN_01c3eed0` at `0x01C3EED0`.
///
/// Handles `fMacroWiz.pcMWiz.tsShape.cbDevices.OnDrawItem`.
///
/// Draws one device entry as its name beside its symbol.
///
/// While the wizard is making the shape itself, every entry is drawn as the
/// word `Autoshape` in red instead of its own name — the list still has the
/// devices in it, but none of them is what the user will get, and saying so
/// on each row is how the wizard makes that plain without emptying the list.
///
/// The symbol is drawn from a point raised by one line height so it lines up
/// with the text, and it is drawn even for a row past the end of the list:
/// the wizard holds one symbol back for that row, which is how the preview
/// appears below the real entries.
///
/// The background is filled before anything is decided, so a row that paints
/// nothing else still clears what was under it.
pub fn draw_device_entry(host: &mut impl DeviceEntryHost, index: usize) -> DeviceEntryDraw {
    host.fill_background();
    let mut text = host.entry_text(index);

    if !host.device_chosen() {
        return DeviceEntryDraw::BackgroundOnly;
    }

    let color = if host.autoshape() {
        AUTOSHAPE_LABEL.clone_into(&mut text);
        AUTOSHAPE_COLOR
    } else {
        DEVICE_COLOR
    };
    host.draw_text(&text, color, DEVICE_TEXT_INDENT);

    let past_end = index >= host.entry_count();
    let symbol = host.draw_symbol(index, past_end);

    DeviceEntryDraw::Painted {
        text,
        color,
        symbol,
    }
}

#[cfg(test)]
mod macro_wizard_navigation_tests {
    use super::*;

    #[test]
    fn the_pages_step_back_in_the_recovered_order() {
        assert_eq!(page_before(WizardPage::Rename), Some(WizardPage::Pair));
        assert_eq!(page_before(WizardPage::Pair), Some(WizardPage::Shape));
        assert_eq!(page_before(WizardPage::Shape), Some(WizardPage::SubCircuit));
        assert_eq!(
            page_before(WizardPage::SubCircuit),
            Some(WizardPage::Source)
        );
    }

    #[test]
    fn the_first_page_has_nothing_before_it() {
        assert_eq!(page_before(WizardPage::Source), None);
        assert_eq!(page_before(WizardPage::Other), None);
    }

    #[derive(Debug)]
    struct Wizard {
        page: WizardPage,
        skipped: Vec<WizardPage>,
        shown: Vec<WizardPage>,
        refreshes: usize,
        forward_flag: bool,
    }

    impl Wizard {
        fn on(page: WizardPage) -> Self {
            Self {
                page,
                skipped: Vec::new(),
                shown: Vec::new(),
                refreshes: 0,
                forward_flag: true,
            }
        }
    }

    impl BackNavigationHost for Wizard {
        fn active_page(&mut self) -> WizardPage {
            self.page
        }

        fn show_page(&mut self, page: WizardPage) {
            self.page = page;
            self.shown.push(page);
        }

        fn page_is_skipped(&mut self, page: WizardPage) -> bool {
            self.skipped.contains(&page)
        }

        fn refresh_page(&mut self) {
            self.refreshes += 1;
        }

        fn refresh_buttons(&mut self) {
            self.refreshes += 1;
        }

        fn clear_forward_flag(&mut self) {
            self.forward_flag = false;
        }
    }

    #[test]
    fn back_steps_one_page_when_nothing_is_skipped() {
        let mut host = Wizard::on(WizardPage::Shape);

        assert_eq!(step_back(&mut host), WizardPage::SubCircuit);
        assert_eq!(host.shown, [WizardPage::SubCircuit]);
    }

    #[test]
    fn back_steps_over_a_page_that_does_not_apply() {
        let mut host = Wizard {
            skipped: vec![WizardPage::Pair, WizardPage::Shape],
            ..Wizard::on(WizardPage::Rename)
        };

        assert_eq!(step_back(&mut host), WizardPage::SubCircuit);
        assert_eq!(
            host.shown,
            [WizardPage::Pair, WizardPage::Shape, WizardPage::SubCircuit]
        );
    }

    #[test]
    fn skipping_several_pages_refreshes_only_the_one_finally_shown() {
        let mut host = Wizard {
            skipped: vec![WizardPage::Pair, WizardPage::Shape],
            ..Wizard::on(WizardPage::Rename)
        };

        step_back(&mut host);

        // One page refresh and one button refresh, however many hops.
        assert_eq!(host.refreshes, 2);
    }

    #[test]
    fn back_from_the_first_page_stays_there() {
        let mut host = Wizard::on(WizardPage::Source);

        assert_eq!(step_back(&mut host), WizardPage::Source);
        assert!(host.shown.is_empty());
    }

    #[test]
    fn a_skipped_first_page_still_ends_the_walk() {
        let mut host = Wizard {
            skipped: vec![WizardPage::Source, WizardPage::SubCircuit],
            ..Wizard::on(WizardPage::Shape)
        };

        assert_eq!(step_back(&mut host), WizardPage::Source);
    }

    #[test]
    fn stepping_back_clears_the_forward_flag() {
        let mut host = Wizard::on(WizardPage::Shape);
        step_back(&mut host);

        assert!(!host.forward_flag);
    }
}

#[cfg(test)]
mod macro_wizard_source_tests {
    use super::*;

    #[test]
    fn the_source_kinds_come_from_their_recovered_codes() {
        assert_eq!(SourceKind::from_code(1), SourceKind::First);
        assert_eq!(SourceKind::from_code(2), SourceKind::Second);
        assert_eq!(SourceKind::from_code(3), SourceKind::Third);
        assert_eq!(SourceKind::from_code(0), SourceKind::Other);
        assert_eq!(SourceKind::from_code(9), SourceKind::Other);
    }

    #[test]
    fn only_the_second_kind_sets_the_flag_and_only_the_third_resolves_a_name() {
        assert!(SourceKind::Second.sets_flag());
        assert!(!SourceKind::First.sets_flag());
        assert!(!SourceKind::Third.sets_flag());
        assert!(!SourceKind::Other.sets_flag());

        assert!(SourceKind::Third.resolves_name());
        assert!(!SourceKind::First.resolves_name());
        assert!(!SourceKind::Second.resolves_name());
    }

    #[test]
    fn an_unrecognised_kind_behaves_exactly_like_the_first() {
        assert_eq!(SourceKind::Other.sets_flag(), SourceKind::First.sets_flag());
        assert_eq!(
            SourceKind::Other.resolves_name(),
            SourceKind::First.resolves_name()
        );
    }

    #[test]
    fn the_accept_control_says_whether_a_choice_was_made_at_all() {
        assert!(source_control_states(true, false).accept);
        assert!(source_control_states(false, true).accept);
        assert!(!source_control_states(false, false).accept);
    }

    #[test]
    fn each_field_follows_its_own_radio() {
        let first = source_control_states(true, false);
        assert!(first.first_field);
        assert!(first.first_field_option);
        assert!(!first.second_field);

        let second = source_control_states(false, true);
        assert!(!second.first_field);
        assert!(!second.first_field_option);
        assert!(second.second_field);
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum Step {
        States(SourceControlStates),
        Configure(bool, u32),
        Discard,
        PrepareNext,
        HideProgress,
        ClearSubcircuit,
        ResetDevice,
        RefreshButtons,
    }

    #[derive(Debug, Default)]
    struct Source {
        first: bool,
        second: bool,
        kind: Option<SourceKind>,
        resolved: u32,
        steps: Vec<Step>,
    }

    impl SourceChoiceHost for Source {
        fn first_source_chosen(&mut self) -> bool {
            self.first
        }

        fn second_source_chosen(&mut self) -> bool {
            self.second
        }

        fn apply_control_states(&mut self, states: SourceControlStates) {
            self.steps.push(Step::States(states));
        }

        fn source_kind(&mut self) -> SourceKind {
            self.kind.unwrap_or(SourceKind::Other)
        }

        fn resolve_source_name(&mut self) -> u32 {
            self.resolved
        }

        fn configure_source_page(&mut self, flag: bool, value: u32) {
            self.steps.push(Step::Configure(flag, value));
        }

        fn discard_parsed_source(&mut self) {
            self.steps.push(Step::Discard);
        }

        fn prepare_next_page(&mut self) {
            self.steps.push(Step::PrepareNext);
        }

        fn hide_progress(&mut self) {
            self.steps.push(Step::HideProgress);
        }

        fn clear_subcircuit_choice(&mut self) {
            self.steps.push(Step::ClearSubcircuit);
        }

        fn reset_device_choice(&mut self) {
            self.steps.push(Step::ResetDevice);
        }

        fn refresh_buttons(&mut self) {
            self.steps.push(Step::RefreshButtons);
        }
    }

    #[test]
    fn choosing_a_source_throws_away_everything_downstream_of_it() {
        let mut host = Source {
            first: true,
            kind: Some(SourceKind::First),
            ..Source::default()
        };

        assert_eq!(source_chosen(&mut host), SourceKind::First);

        for step in [
            Step::Discard,
            Step::PrepareNext,
            Step::ClearSubcircuit,
            Step::ResetDevice,
        ] {
            assert!(host.steps.contains(&step), "missing {step:?}");
        }
    }

    #[test]
    fn only_the_third_kind_resolves_a_name_before_configuring() {
        let mut host = Source {
            kind: Some(SourceKind::Third),
            resolved: 42,
            ..Source::default()
        };
        source_chosen(&mut host);
        assert!(host.steps.contains(&Step::Configure(false, 42)));

        let mut other = Source {
            kind: Some(SourceKind::First),
            resolved: 42,
            ..Source::default()
        };
        source_chosen(&mut other);
        assert!(other.steps.contains(&Step::Configure(false, 0)));
    }

    #[test]
    fn the_second_kind_configures_the_page_with_the_flag_set() {
        let mut host = Source {
            kind: Some(SourceKind::Second),
            ..Source::default()
        };
        source_chosen(&mut host);

        assert!(host.steps.contains(&Step::Configure(true, 0)));
    }

    #[test]
    fn the_control_states_are_applied_before_anything_is_torn_down() {
        let mut host = Source {
            first: true,
            kind: Some(SourceKind::First),
            ..Source::default()
        };
        source_chosen(&mut host);

        assert!(matches!(host.steps.first(), Some(Step::States(_))));
        assert_eq!(host.steps.last(), Some(&Step::RefreshButtons));
    }
}

#[cfg(test)]
mod macro_wizard_subcircuit_tests {
    use super::*;

    #[derive(Debug, Default)]
    struct SubCircuit {
        row: Option<usize>,
        range: (usize, usize),
        names: Vec<String>,
        cleared: usize,
        set: Option<Vec<String>>,
        scroll_reset: bool,
    }

    impl SubCircuitHost for SubCircuit {
        fn clear_nodes(&mut self) {
            self.cleared += 1;
        }

        fn chosen_row(&mut self) -> Option<usize> {
            self.row
        }

        fn node_range(&mut self, _row: usize) -> (usize, usize) {
            self.range
        }

        fn node_name(&mut self, index: usize) -> String {
            self.names.get(index).cloned().unwrap_or_default()
        }

        fn set_nodes(&mut self, names: Vec<String>) {
            self.set = Some(names);
        }

        fn reset_scroll_extent(&mut self) {
            self.scroll_reset = true;
        }

        fn refresh_buttons(&mut self) {}
    }

    fn parsed() -> SubCircuit {
        SubCircuit {
            names: vec![
                "IN".to_owned(),
                "OUT".to_owned(),
                "VCC".to_owned(),
                "GND".to_owned(),
            ],
            ..SubCircuit::default()
        }
    }

    #[test]
    fn the_chosen_subcircuit_takes_its_own_slice_of_the_shared_list() {
        let mut host = SubCircuit {
            row: Some(1),
            range: (1, 2),
            ..parsed()
        };

        assert_eq!(subcircuit_chosen(&mut host), ["OUT", "VCC"]);
        assert_eq!(host.set, Some(vec!["OUT".to_owned(), "VCC".to_owned()]));
    }

    #[test]
    fn the_range_bounds_are_both_inside_the_slice() {
        let mut host = SubCircuit {
            row: Some(0),
            range: (0, 3),
            ..parsed()
        };

        assert_eq!(subcircuit_chosen(&mut host).len(), 4);
    }

    #[test]
    fn a_single_node_subcircuit_is_a_range_of_one() {
        let mut host = SubCircuit {
            row: Some(0),
            range: (2, 2),
            ..parsed()
        };

        assert_eq!(subcircuit_chosen(&mut host), ["VCC"]);
    }

    #[test]
    fn an_empty_subcircuit_is_a_range_that_runs_backwards() {
        let mut host = SubCircuit {
            row: Some(0),
            range: (2, 1),
            ..parsed()
        };

        assert!(subcircuit_chosen(&mut host).is_empty());
    }

    #[test]
    fn clearing_the_choice_empties_the_list_rather_than_leaving_it_stale() {
        let mut host = SubCircuit {
            row: None,
            ..parsed()
        };

        assert!(subcircuit_chosen(&mut host).is_empty());
        assert_eq!(host.cleared, 1);
        assert_eq!(host.set, None);
        assert!(!host.scroll_reset);
    }

    #[test]
    fn the_list_is_emptied_before_the_choice_is_looked_at() {
        let mut host = SubCircuit {
            row: Some(0),
            range: (0, 1),
            ..parsed()
        };
        subcircuit_chosen(&mut host);

        assert_eq!(host.cleared, 1);
        assert!(host.scroll_reset);
    }
}

#[cfg(test)]
mod macro_wizard_device_draw_tests {
    use super::*;

    #[derive(Debug, Default)]
    struct Devices {
        items: Vec<String>,
        chosen: bool,
        autoshape: bool,
        backgrounds: usize,
        drawn: Option<(String, u32)>,
        symbols: Vec<(usize, bool)>,
        held_back: bool,
    }

    impl DeviceEntryHost for Devices {
        fn fill_background(&mut self) {
            self.backgrounds += 1;
        }

        fn entry_text(&mut self, index: usize) -> String {
            self.items.get(index).cloned().unwrap_or_default()
        }

        fn device_chosen(&mut self) -> bool {
            self.chosen
        }

        fn autoshape(&mut self) -> bool {
            self.autoshape
        }

        fn draw_text(&mut self, text: &str, color: u32, _indent: i32) {
            self.drawn = Some((text.to_owned(), color));
        }

        fn entry_count(&mut self) -> usize {
            self.items.len()
        }

        fn draw_symbol(&mut self, index: usize, past_end: bool) -> bool {
            self.symbols.push((index, past_end));
            !past_end || self.held_back
        }
    }

    fn devices() -> Devices {
        Devices {
            items: vec!["DIP8".to_owned(), "SOIC8".to_owned()],
            chosen: true,
            ..Devices::default()
        }
    }

    #[test]
    fn an_ordinary_entry_is_drawn_in_its_own_name_and_colour() {
        let mut host = devices();

        assert_eq!(
            draw_device_entry(&mut host, 1),
            DeviceEntryDraw::Painted {
                text: "SOIC8".to_owned(),
                color: DEVICE_COLOR,
                symbol: true,
            }
        );
    }

    #[test]
    fn autoshape_replaces_every_entrys_name_with_the_label_in_red() {
        let mut host = Devices {
            autoshape: true,
            ..devices()
        };

        assert_eq!(
            draw_device_entry(&mut host, 0),
            DeviceEntryDraw::Painted {
                text: AUTOSHAPE_LABEL.to_owned(),
                color: AUTOSHAPE_COLOR,
                symbol: true,
            }
        );
        assert_eq!(
            host.drawn,
            Some((AUTOSHAPE_LABEL.to_owned(), AUTOSHAPE_COLOR))
        );
    }

    #[test]
    fn the_autoshape_colour_is_red_in_the_recovered_byte_order() {
        // COLORREF runs blue, green, red.
        assert_eq!(AUTOSHAPE_COLOR & 0x00_00ff, 0xff);
        assert_eq!(AUTOSHAPE_COLOR & 0xff_ff00, 0);
    }

    #[test]
    fn nothing_is_drawn_until_a_device_is_chosen() {
        let mut host = Devices {
            chosen: false,
            ..devices()
        };

        assert_eq!(
            draw_device_entry(&mut host, 0),
            DeviceEntryDraw::BackgroundOnly
        );
        assert_eq!(host.backgrounds, 1);
        assert!(host.drawn.is_none());
        assert!(host.symbols.is_empty());
    }

    #[test]
    fn the_background_is_filled_before_anything_is_decided() {
        let mut host = Devices {
            chosen: false,
            ..devices()
        };
        draw_device_entry(&mut host, 0);

        assert_eq!(host.backgrounds, 1);
    }

    #[test]
    fn a_row_past_the_end_draws_the_symbol_the_wizard_held_back() {
        let mut host = Devices {
            held_back: true,
            ..devices()
        };

        let drawn = draw_device_entry(&mut host, 5);

        assert_eq!(host.symbols, [(5, true)]);
        assert!(matches!(
            drawn,
            DeviceEntryDraw::Painted { symbol: true, .. }
        ));
    }

    #[test]
    fn a_row_past_the_end_with_nothing_held_back_draws_no_symbol() {
        let mut host = devices();

        let drawn = draw_device_entry(&mut host, 5);

        assert!(matches!(
            drawn,
            DeviceEntryDraw::Painted { symbol: false, .. }
        ));
    }
}

/// The resolution the recovered layout heights are written for.
///
/// Part of Ghidra function `FUN_01c37190` at `0x01C37190`.
///
/// The wizard divides the screen's own resolution by this once, on creation,
/// and every page height is multiplied by the result — which is why the
/// heights elsewhere in this module are unscaled.
pub const LAYOUT_REFERENCE_DPI: f64 = 96.0;

/// Works out the scale the page layouts are drawn at.
///
/// Part of Ghidra function `FUN_01c37190` at `0x01C37190`.
#[must_use]
pub fn layout_scale(screen_dpi: i32) -> f64 {
    f64::from(screen_dpi) / LAYOUT_REFERENCE_DPI
}

/// How many entries the wizard loads into its pin-count list.
pub const PIN_OPTION_COUNT: usize = 0x10;

/// The zoom the shape preview starts at.
pub const PREVIEW_INITIAL_ZOOM: f64 = 1.0;

/// One entry of a file dialog's filter.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct FilterEntry {
    /// What the dialog shows for it.
    pub label: &'static str,
    /// The patterns it matches.
    pub patterns: &'static str,
}

/// The source kinds the wizard will open, in the order the filter lists them.
///
/// Part of Ghidra function `FUN_01c37190` at `0x01C37190`.
///
/// The first three come as one compiled-in string and the rest are appended
/// one at a time, each bumping a running count — which is what lets the
/// wizard remember a filter's index without counting the string.
pub const OPEN_FILTERS: [FilterEntry; 9] = [
    FilterEntry {
        label: "Schematics (*.TSC;*.SCH)",
        patterns: "*.TSC;*.SCH",
    },
    FilterEntry {
        label: "PSpice subcircuit file (*.CIR;*.LIB;*.MOD;*.SPI;*.TXT)",
        patterns: "*.CIR;*.LIB;*.MOD;*.SPI;*.TXT",
    },
    FilterEntry {
        label: "VHDL file (*.VHD)",
        patterns: "*.VHD",
    },
    FilterEntry {
        label: "Verilog file (*.V)",
        patterns: "*.V",
    },
    FilterEntry {
        label: "Verilog-A file (*.VA)",
        patterns: "*.VA",
    },
    FilterEntry {
        label: "Verilog-AMS file (*.VAMS)",
        patterns: "*.VAMS",
    },
    FilterEntry {
        label: "SystemC executable (*.DLL)",
        patterns: "*.DLL",
    },
    FilterEntry {
        label: "SystemVerilog file (*.SV)",
        patterns: "*.SV",
    },
    FilterEntry {
        label: "VHDL-AMS file (*.AMS)",
        patterns: "*.AMS",
    },
];

/// The extra filter offered only when the machine-learning feature is on.
pub const TENSORFLOW_FILTER: FilterEntry = FilterEntry {
    label: "Tensorflow model file (*.TFLITE)",
    patterns: "*.TFLITE",
};

/// The filter the wizard builds, with the two indices it remembers.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct OpenFilter {
    /// The filter string, as the dialog takes it.
    pub text: String,
    /// The index of the last ordinary filter.
    pub last_ordinary: usize,
    /// The index of the machine-learning filter, when it is offered.
    pub tensorflow: Option<usize>,
}

/// Builds the open dialog's filter.
///
/// Part of Ghidra function `FUN_01c37190` at `0x01C37190`.
///
/// The indices are what the wizard actually wants: a chosen filter index
/// above [`OpenFilter::last_ordinary`] means the machine-learning file was
/// picked, which is how the wizard decides what to do with the file without
/// looking at its name. Filter indices count from one, as the dialog reports
/// them.
#[must_use]
pub fn open_filter(machine_learning: bool) -> OpenFilter {
    let mut entries: Vec<FilterEntry> = OPEN_FILTERS.to_vec();
    let last_ordinary = entries.len();

    let tensorflow = machine_learning.then(|| {
        entries.push(TENSORFLOW_FILTER);
        entries.len()
    });

    OpenFilter {
        text: entries
            .iter()
            .map(|entry| format!("{}|{}", entry.label, entry.patterns))
            .collect::<Vec<_>>()
            .join("|"),
        last_ordinary,
        tensorflow,
    }
}

/// The open dialog's option word.
///
/// Decodes as hide the read-only box, offer help, insist the file exists, and
/// allow resizing. Insisting the file exists is what separates it from the
/// save dialog's word below, which insists only on the directory.
pub const OPEN_DIALOG_OPTIONS: u32 = 0x0008_0214;

/// The save dialog's option word — the same one the PCB-only component
/// wizard uses.
pub const SAVE_DIALOG_OPTIONS: u32 = 0x0008_0116;

/// The open dialog's own name and caption.
pub const OPEN_DIALOG_NAME: &str = "OpenMacroContentDlg";
/// The open dialog's caption.
pub const OPEN_DIALOG_TITLE: &str = "Open File";
/// The save dialog's own name.
pub const SAVE_DIALOG_NAME: &str = "SaveTSMDlg";
/// The save dialog's caption.
pub const SAVE_DIALOG_TITLE: &str = "Save Macro";
/// The save dialog's filter.
pub const SAVE_DIALOG_FILTER: &str = "Schematics Macro (*.TSM)|*.TSM";
/// The extra choice the save dialog carries, off by default.
pub const ENCRYPT_MACRO_CHECKBOX: &str = "Encrypt macro";

/// The settings file the wizard reads one option out of.
pub const SETTINGS_FILE: &str = "TINA.INI";
/// The section that option lives in.
pub const SETTINGS_SECTION: &str = "Schematic Editor";
/// The option's key. It decides whether one control is shown at all.
pub const MACRO_EMBEDDING_KEY: &str = "EnableMacroEmbedding";
/// Whether macro embedding is offered when the settings file says nothing.
pub const MACRO_EMBEDDING_DEFAULT: bool = false;

/// The labelled shortcuts each dialog offers, as the recovered handler builds
/// them.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct DialogShortcuts {
    /// The open dialog's four.
    pub open: [String; 4],
    /// The save dialog's two.
    pub save: [String; 2],
}

/// Builds both dialogs' shortcut lists.
///
/// Part of Ghidra function `FUN_01c37190` at `0x01C37190`.
///
/// The open dialog offers four places because a macro's source can come from
/// any of them; the save dialog offers two because only those can be written
/// to. Both dialogs open into the place they would most likely be used from
/// rather than into the first shortcut.
#[must_use]
pub fn dialog_shortcuts(
    private_catalog: &str,
    shared_catalog: &str,
    tina_folder: &str,
    user_folder: &str,
) -> DialogShortcuts {
    DialogShortcuts {
        open: [
            format!(r"Private catalog folder|{private_catalog}\MacroLib"),
            format!(r"Shared catalog folder|{shared_catalog}\MacroLib"),
            format!(r"Main Tina folder|{tina_folder}\MacroLib"),
            format!(r"Tina examples|{tina_folder}\EXAMPLES\SPICE"),
        ],
        save: [
            format!(r"User Macros|{user_folder}\Macrolib"),
            format!(r"Tina Macros|{tina_folder}\Macrolib"),
        ],
    }
}

/// The state the wizard is reset to when it is created.
///
/// Part of Ghidra function `FUN_01c37190` at `0x01C37190`.
#[derive(Debug, Clone, PartialEq, Eq)]
#[allow(clippy::struct_excessive_bools)]
pub struct MacroWizardStart {
    /// Whether the machine-learning source kind is offered.
    pub machine_learning: bool,
    /// The scale the page layouts are drawn at, as a ratio of the reference
    /// resolution.
    pub layout_scale_numerator: i32,
    /// Whether macro embedding is offered.
    pub macro_embedding: bool,
    /// The open dialog's filter and remembered indices.
    pub filter: OpenFilter,
    /// Both dialogs' shortcuts.
    pub shortcuts: DialogShortcuts,
    /// The page the wizard starts on.
    pub page: WizardPage,
}

/// What building the wizard needs from the application around it.
pub trait MacroWizardCreateHost {
    /// The screen's resolution, which the layout scale comes from.
    fn screen_dpi(&mut self) -> i32;

    /// Whether the machine-learning feature is on.
    fn machine_learning_enabled(&mut self) -> bool;

    /// Loads the pin-count list with its fixed set of entries and selects the
    /// first.
    fn load_pin_options(&mut self, count: usize);

    /// Builds the shape preview and hides it until there is something to
    /// show.
    fn create_preview(&mut self, zoom: f64);

    /// Hides every page tab, so the wizard is navigated by its buttons alone.
    fn hide_page_tabs(&mut self);

    /// Clears everything the wizard carries between runs.
    fn reset_state(&mut self);

    /// The four folders the shortcuts are built from: private catalog, shared
    /// catalog, the installation, and the user's own.
    fn folders(&mut self) -> (String, String, String, String);

    /// Reads whether macro embedding is offered.
    fn macro_embedding_enabled(&mut self, default: bool) -> bool;

    /// Shows or hides the macro-embedding control.
    fn set_macro_embedding_visible(&mut self, visible: bool);

    /// Shows the first page.
    fn show_first_page(&mut self, page: WizardPage);
}

/// Implements Ghidra function `FUN_01c37190` at `0x01C37190`.
///
/// Handles `fMacroWiz.OnCreate`.
///
/// Builds the macro wizard and puts it on its first page.
///
/// Two things here shape everything the wizard does afterwards. The page
/// control's tabs are all hidden, so the user cannot jump between pages and
/// the Next and Back buttons are the only way through — which is why those
/// buttons carry the skipping logic rather than the pages doing it
/// themselves. And the layout scale is taken once from the screen's
/// resolution, so every page height in this module is written unscaled and
/// multiplied by it.
///
/// The open dialog's filter is built by appending one entry at a time and
/// counting as it goes, which is how the wizard ends up knowing two filter
/// indices without parsing the string back: everything above the last
/// ordinary one is the machine-learning file, offered only when that feature
/// is on.
///
/// Returns the state the wizard starts in.
pub fn create_macro_wizard(host: &mut impl MacroWizardCreateHost) -> MacroWizardStart {
    let layout_scale_numerator = host.screen_dpi();
    let machine_learning = host.machine_learning_enabled();

    host.load_pin_options(PIN_OPTION_COUNT);
    host.create_preview(PREVIEW_INITIAL_ZOOM);
    host.hide_page_tabs();
    host.reset_state();

    let (private_catalog, shared_catalog, tina_folder, user_folder) = host.folders();
    let macro_embedding = host.macro_embedding_enabled(MACRO_EMBEDDING_DEFAULT);
    host.set_macro_embedding_visible(macro_embedding);

    let page = PAGE_ORDER[0];
    host.show_first_page(page);

    MacroWizardStart {
        machine_learning,
        layout_scale_numerator,
        macro_embedding,
        filter: open_filter(machine_learning),
        shortcuts: dialog_shortcuts(
            &private_catalog,
            &shared_catalog,
            &tina_folder,
            &user_folder,
        ),
        page,
    }
}

#[cfg(test)]
mod macro_wizard_create_tests {
    use super::*;

    #[test]
    fn the_layout_scale_is_the_screens_resolution_over_the_reference() {
        assert!((layout_scale(96) - 1.0).abs() <= f64::EPSILON);
        assert!((layout_scale(192) - 2.0).abs() <= f64::EPSILON);
        assert!((layout_scale(144) - 1.5).abs() <= f64::EPSILON);
    }

    #[test]
    fn the_filter_offers_nine_kinds_before_the_feature_is_considered() {
        let filter = open_filter(false);

        assert_eq!(filter.last_ordinary, 9);
        assert_eq!(filter.tensorflow, None);
        assert!(
            filter
                .text
                .starts_with("Schematics (*.TSC;*.SCH)|*.TSC;*.SCH|")
        );
        assert!(filter.text.ends_with("VHDL-AMS file (*.AMS)|*.AMS"));
    }

    #[test]
    fn the_machine_learning_filter_is_appended_after_the_remembered_index() {
        let filter = open_filter(true);

        assert_eq!(filter.last_ordinary, 9);
        assert_eq!(filter.tensorflow, Some(10));
        assert!(
            filter
                .text
                .ends_with("Tensorflow model file (*.TFLITE)|*.TFLITE")
        );
    }

    #[test]
    fn a_chosen_index_above_the_last_ordinary_one_is_the_machine_learning_file() {
        let filter = open_filter(true);

        assert!(filter.tensorflow > Some(filter.last_ordinary));
    }

    #[test]
    fn every_filter_entry_names_a_label_and_its_patterns() {
        let filter = open_filter(true);
        // Ten entries means twenty bar-separated fields, so nineteen bars.
        assert_eq!(filter.text.matches('|').count(), 19);
    }

    #[test]
    fn the_hardware_description_languages_are_all_offered() {
        let text = open_filter(false).text;

        for extension in ["*.VHD", "*.V", "*.VA", "*.VAMS", "*.SV", "*.AMS"] {
            assert!(text.contains(extension), "missing {extension}");
        }
    }

    #[test]
    fn the_open_dialog_insists_on_the_file_and_the_save_dialog_does_not() {
        // Bit 9 is the file-must-exist flag; only the open word carries it.
        assert_ne!(OPEN_DIALOG_OPTIONS & (1 << 9), 0);
        assert_eq!(SAVE_DIALOG_OPTIONS & (1 << 9), 0);
        // Both allow resizing and hide the read-only box.
        for word in [OPEN_DIALOG_OPTIONS, SAVE_DIALOG_OPTIONS] {
            assert_ne!(word & (1 << 19), 0);
            assert_ne!(word & (1 << 2), 0);
        }
    }

    #[test]
    fn the_open_dialog_offers_four_places_and_the_save_dialog_two() {
        let shortcuts = dialog_shortcuts(r"C:\Priv", r"\\srv\Shared", r"C:\Tina", r"C:\Users\Me");

        assert_eq!(
            shortcuts.open,
            [
                r"Private catalog folder|C:\Priv\MacroLib".to_owned(),
                r"Shared catalog folder|\\srv\Shared\MacroLib".to_owned(),
                r"Main Tina folder|C:\Tina\MacroLib".to_owned(),
                r"Tina examples|C:\Tina\EXAMPLES\SPICE".to_owned(),
            ]
        );
        assert_eq!(
            shortcuts.save,
            [
                r"User Macros|C:\Users\Me\Macrolib".to_owned(),
                r"Tina Macros|C:\Tina\Macrolib".to_owned(),
            ]
        );
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum Step {
        PinOptions(usize),
        Preview,
        HideTabs,
        Reset,
        EmbeddingVisible(bool),
        FirstPage(WizardPage),
    }

    #[derive(Debug, Default)]
    struct Form {
        dpi: i32,
        machine_learning: bool,
        embedding: bool,
        embedding_default_seen: Option<bool>,
        steps: Vec<Step>,
    }

    impl MacroWizardCreateHost for Form {
        fn screen_dpi(&mut self) -> i32 {
            self.dpi
        }

        fn machine_learning_enabled(&mut self) -> bool {
            self.machine_learning
        }

        fn load_pin_options(&mut self, count: usize) {
            self.steps.push(Step::PinOptions(count));
        }

        fn create_preview(&mut self, _zoom: f64) {
            self.steps.push(Step::Preview);
        }

        fn hide_page_tabs(&mut self) {
            self.steps.push(Step::HideTabs);
        }

        fn reset_state(&mut self) {
            self.steps.push(Step::Reset);
        }

        fn folders(&mut self) -> (String, String, String, String) {
            (
                "P".to_owned(),
                "S".to_owned(),
                "T".to_owned(),
                "U".to_owned(),
            )
        }

        fn macro_embedding_enabled(&mut self, default: bool) -> bool {
            self.embedding_default_seen = Some(default);
            self.embedding
        }

        fn set_macro_embedding_visible(&mut self, visible: bool) {
            self.steps.push(Step::EmbeddingVisible(visible));
        }

        fn show_first_page(&mut self, page: WizardPage) {
            self.steps.push(Step::FirstPage(page));
        }
    }

    #[test]
    fn the_wizard_starts_on_the_first_page_with_its_tabs_hidden() {
        let mut host = Form {
            dpi: 96,
            ..Form::default()
        };

        let started = create_macro_wizard(&mut host);

        assert_eq!(started.page, WizardPage::Source);
        assert!(host.steps.contains(&Step::HideTabs));
        assert_eq!(
            host.steps.last(),
            Some(&Step::FirstPage(WizardPage::Source))
        );
    }

    #[test]
    fn the_pin_list_is_loaded_with_the_recovered_number_of_entries() {
        let mut host = Form::default();
        create_macro_wizard(&mut host);

        assert!(host.steps.contains(&Step::PinOptions(0x10)));
    }

    #[test]
    fn macro_embedding_is_off_unless_the_settings_file_turns_it_on() {
        let mut off = Form::default();
        create_macro_wizard(&mut off);
        assert_eq!(off.embedding_default_seen, Some(false));
        assert!(off.steps.contains(&Step::EmbeddingVisible(false)));

        let mut on = Form {
            embedding: true,
            ..Form::default()
        };
        let started = create_macro_wizard(&mut on);
        assert!(started.macro_embedding);
        assert!(on.steps.contains(&Step::EmbeddingVisible(true)));
    }

    #[test]
    fn the_feature_flag_decides_the_filter_the_wizard_ends_up_with() {
        let mut off = Form::default();
        assert_eq!(create_macro_wizard(&mut off).filter.tensorflow, None);

        let mut on = Form {
            machine_learning: true,
            ..Form::default()
        };
        assert_eq!(create_macro_wizard(&mut on).filter.tensorflow, Some(10));
    }

    #[test]
    fn the_state_is_cleared_before_the_first_page_is_shown() {
        let mut host = Form::default();
        create_macro_wizard(&mut host);

        let reset = host
            .steps
            .iter()
            .position(|step| *step == Step::Reset)
            .expect("the state is reset");
        let shown = host
            .steps
            .iter()
            .position(|step| matches!(step, Step::FirstPage(_)))
            .expect("a page is shown");
        assert!(reset < shown);
    }
}

/// The banner the wizard puts up while the first page's work runs.
pub const LOADING_BANNER: &str = "Loading...";

/// The banner it puts up for the pages after that.
pub const WORKING_BANNER: &str = "Working...";

/// How far the banner's progress bar runs.
pub const BANNER_RANGE: i32 = 100;

/// Reported when the chosen source file is not there.
pub const FILE_NOT_FOUND_MESSAGE: &str = "File not found!";

/// Reported when it is there but holds nothing.
pub const FILE_EMPTY_MESSAGE: &str = "File is Empty!";

/// Reported when parsing the source fails.
///
/// Spelled as the recovered literal spells it. The misspelling is the
/// original's and is kept, because the message is what the user sees.
pub const PARSE_ERROR_MESSAGE: &str = "Error occured";

/// Appended to a subcircuit's name in the list when it is a model rather than
/// a subcircuit proper.
pub const MODEL_SUFFIX: &str = " [model]";

/// The extension that suppresses one of the source page's controls.
pub const SCHEMATIC_EXTENSION: &str = ".TSC";

/// The headings the pin-mapping grid is given.
pub const PIN_GRID_HEADINGS: [&str; 3] = ["spice", "Name on the shape", "orientation"];

/// The page after this one, or `None` when the wizard is on its last.
///
/// Part of Ghidra function `FUN_01c38d00` at `0x01C38D00`.
#[must_use]
pub fn page_after(page: WizardPage) -> Option<WizardPage> {
    let index = PAGE_ORDER.iter().position(|entry| *entry == page)?;
    PAGE_ORDER.get(index + 1).copied()
}

/// The banner one page puts up before its work runs.
///
/// Part of Ghidra function `FUN_01c38d00` at `0x01C38D00`.
///
/// Only the first three pages do work worth announcing; the last two move on
/// without a banner.
#[must_use]
pub const fn banner_for(page: WizardPage) -> Option<&'static str> {
    match page {
        WizardPage::Source => Some(LOADING_BANNER),
        WizardPage::SubCircuit | WizardPage::Shape => Some(WORKING_BANNER),
        WizardPage::Pair | WizardPage::Rename | WizardPage::Other => None,
    }
}

/// What stepping forward needs from the wizard.
pub trait ForwardNavigationHost {
    /// The page currently shown.
    fn active_page(&mut self) -> WizardPage;

    /// Puts the progress banner up. The middle pages ask first whether the
    /// source panel is showing, because that panel carries its own progress.
    fn show_banner(&mut self, text: &str, range: i32);

    /// Whether the source panel is showing, which suppresses the banner.
    fn source_panel_showing(&mut self) -> bool;

    /// Commits the page the wizard is leaving. A page that has nothing to
    /// commit answers `false`, which skips the work below without stopping
    /// the wizard.
    fn commit_page(&mut self, page: WizardPage) -> bool;

    /// Prepares the page being moved to.
    fn prepare_page(&mut self, page: WizardPage);

    /// Runs the work that belongs to the move out of one page.
    fn run_page_work(&mut self, page: WizardPage);

    /// Shows one page.
    fn show_page(&mut self, page: WizardPage);

    /// Whether a page should be stepped straight over.
    fn page_is_skipped(&mut self, page: WizardPage) -> bool;

    /// Hides the source panel, which the first page's move always does.
    fn hide_source_panel(&mut self);

    /// Finishes the wizard, which is what the last page's Next does.
    fn finish(&mut self);
}

/// Implements Ghidra function `FUN_01c38d00` at `0x01C38D00`.
///
/// Handles `fMacroWiz.pBottom.bnext.OnClick`.
///
/// Steps the wizard on one page, doing that page's work on the way.
///
/// Each page commits what the user entered before the wizard moves, and the
/// commit's answer decides only whether the page's *work* runs — the move
/// itself happens either way. That is the recovered behaviour and it is worth
/// knowing: a page that declines to commit is still left behind, so the
/// wizard never traps the user on a page it cannot get anything out of.
/// Genuine failures are reported and raised instead, which is why the
/// recovered messages here abandon the step rather than returning from it.
///
/// Like [`step_back`], a page that does not apply is stepped over — the
/// recovered handler calls itself again, which this port makes an explicit
/// loop. The banner is put up once per hop rather than once per step, because
/// each hop does its own page's work.
///
/// Returns the page the wizard settled on.
pub fn step_forward(host: &mut impl ForwardNavigationHost) -> WizardPage {
    loop {
        let current = host.active_page();

        let Some(next) = page_after(current) else {
            host.finish();
            break;
        };

        if let Some(banner) = banner_for(current) {
            let suppressed = current != WizardPage::Source && host.source_panel_showing();
            if !suppressed {
                host.show_banner(banner, BANNER_RANGE);
            }
        }

        if host.commit_page(current) {
            host.prepare_page(next);
            host.run_page_work(current);
        }

        host.show_page(next);
        if current == WizardPage::Source {
            host.hide_source_panel();
        }

        if !host.page_is_skipped(next) {
            break;
        }
    }

    host.active_page()
}

/// Whether a source file's name asks the wizard to put one control away.
///
/// Part of Ghidra function `FUN_01c38d00` at `0x01C38D00`.
///
/// A schematic brought in as a macro's source already carries its own shape,
/// so the control that would ask for one is switched off. The comparison
/// ignores case, and a name with no extension is not a schematic.
#[must_use]
pub fn source_is_schematic(file_name: &str) -> bool {
    std::path::Path::new(file_name)
        .extension()
        .is_some_and(|extension| {
            extension.eq_ignore_ascii_case(SCHEMATIC_EXTENSION.trim_start_matches('.'))
        })
}

/// How one subcircuit is labelled in the wizard's list.
///
/// Part of Ghidra function `FUN_01c38d00` at `0x01C38D00`.
///
/// A source file can hold both subcircuits and models and the list shows them
/// together, so the models are marked rather than separated — the user picks
/// from one list and can still tell which is which.
#[must_use]
pub fn subcircuit_label(name: &str, is_model: bool) -> String {
    if is_model {
        format!("{name}{MODEL_SUFFIX}")
    } else {
        name.to_owned()
    }
}

#[cfg(test)]
mod macro_wizard_forward_tests {
    use super::*;

    #[test]
    fn the_pages_step_forward_in_the_recovered_order() {
        assert_eq!(page_after(WizardPage::Source), Some(WizardPage::SubCircuit));
        assert_eq!(page_after(WizardPage::SubCircuit), Some(WizardPage::Shape));
        assert_eq!(page_after(WizardPage::Shape), Some(WizardPage::Pair));
        assert_eq!(page_after(WizardPage::Pair), Some(WizardPage::Rename));
        assert_eq!(page_after(WizardPage::Rename), None);
    }

    #[test]
    fn forward_and_back_are_inverses_across_the_whole_order() {
        for page in PAGE_ORDER {
            if let Some(next) = page_after(page) {
                assert_eq!(page_before(next), Some(page));
            }
        }
    }

    #[test]
    fn only_the_working_pages_put_a_banner_up() {
        assert_eq!(banner_for(WizardPage::Source), Some(LOADING_BANNER));
        assert_eq!(banner_for(WizardPage::SubCircuit), Some(WORKING_BANNER));
        assert_eq!(banner_for(WizardPage::Shape), Some(WORKING_BANNER));
        assert_eq!(banner_for(WizardPage::Pair), None);
        assert_eq!(banner_for(WizardPage::Rename), None);
    }

    #[test]
    fn a_schematic_source_is_recognised_whatever_its_casing() {
        assert!(source_is_schematic(r"C:\work\amp.TSC"));
        assert!(source_is_schematic("amp.tsc"));
        assert!(!source_is_schematic("amp.cir"));
        assert!(!source_is_schematic("amp"));
        assert!(!source_is_schematic(""));
    }

    #[test]
    fn a_model_is_marked_in_the_list_rather_than_kept_out_of_it() {
        assert_eq!(subcircuit_label("LM741", true), "LM741 [model]");
        assert_eq!(subcircuit_label("LM741", false), "LM741");
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum Step {
        Banner(String),
        Commit(WizardPage),
        Prepare(WizardPage),
        Work(WizardPage),
        Show(WizardPage),
        HideSourcePanel,
        Finish,
    }

    #[derive(Debug)]
    struct Wizard {
        page: WizardPage,
        commits: bool,
        panel_showing: bool,
        skipped: Vec<WizardPage>,
        steps: Vec<Step>,
    }

    impl Wizard {
        fn on(page: WizardPage) -> Self {
            Self {
                page,
                commits: true,
                panel_showing: false,
                skipped: Vec::new(),
                steps: Vec::new(),
            }
        }
    }

    impl ForwardNavigationHost for Wizard {
        fn active_page(&mut self) -> WizardPage {
            self.page
        }

        fn show_banner(&mut self, text: &str, _range: i32) {
            self.steps.push(Step::Banner(text.to_owned()));
        }

        fn source_panel_showing(&mut self) -> bool {
            self.panel_showing
        }

        fn commit_page(&mut self, page: WizardPage) -> bool {
            self.steps.push(Step::Commit(page));
            self.commits
        }

        fn prepare_page(&mut self, page: WizardPage) {
            self.steps.push(Step::Prepare(page));
        }

        fn run_page_work(&mut self, page: WizardPage) {
            self.steps.push(Step::Work(page));
        }

        fn show_page(&mut self, page: WizardPage) {
            self.page = page;
            self.steps.push(Step::Show(page));
        }

        fn page_is_skipped(&mut self, page: WizardPage) -> bool {
            self.skipped.contains(&page)
        }

        fn hide_source_panel(&mut self) {
            self.steps.push(Step::HideSourcePanel);
        }

        fn finish(&mut self) {
            self.steps.push(Step::Finish);
        }
    }

    #[test]
    fn a_page_commits_prepares_works_and_moves_in_that_order() {
        let mut host = Wizard::on(WizardPage::Shape);

        assert_eq!(step_forward(&mut host), WizardPage::Pair);
        assert_eq!(
            host.steps,
            [
                Step::Banner(WORKING_BANNER.to_owned()),
                Step::Commit(WizardPage::Shape),
                Step::Prepare(WizardPage::Pair),
                Step::Work(WizardPage::Shape),
                Step::Show(WizardPage::Pair),
            ]
        );
    }

    #[test]
    fn a_page_that_declines_to_commit_is_still_left_behind() {
        let mut host = Wizard {
            commits: false,
            ..Wizard::on(WizardPage::Shape)
        };

        assert_eq!(step_forward(&mut host), WizardPage::Pair);
        assert!(host.steps.contains(&Step::Show(WizardPage::Pair)));
        // But its work does not run.
        assert!(!host.steps.contains(&Step::Work(WizardPage::Shape)));
        assert!(!host.steps.contains(&Step::Prepare(WizardPage::Pair)));
    }

    #[test]
    fn the_first_page_always_hides_the_source_panel_on_the_way_out() {
        let mut host = Wizard::on(WizardPage::Source);
        step_forward(&mut host);

        assert!(host.steps.contains(&Step::HideSourcePanel));
    }

    #[test]
    fn the_source_panel_suppresses_the_banner_on_the_later_pages_only() {
        let mut later = Wizard {
            panel_showing: true,
            ..Wizard::on(WizardPage::SubCircuit)
        };
        step_forward(&mut later);
        assert!(
            !later
                .steps
                .iter()
                .any(|step| matches!(step, Step::Banner(_)))
        );

        let mut first = Wizard {
            panel_showing: true,
            ..Wizard::on(WizardPage::Source)
        };
        step_forward(&mut first);
        assert!(
            first
                .steps
                .contains(&Step::Banner(LOADING_BANNER.to_owned()))
        );
    }

    #[test]
    fn forward_steps_over_a_page_that_does_not_apply() {
        let mut host = Wizard {
            skipped: vec![WizardPage::SubCircuit, WizardPage::Shape],
            ..Wizard::on(WizardPage::Source)
        };

        assert_eq!(step_forward(&mut host), WizardPage::Pair);
        assert_eq!(
            host.steps
                .iter()
                .filter(|step| matches!(step, Step::Show(_)))
                .count(),
            3
        );
    }

    #[test]
    fn each_hop_does_its_own_pages_work() {
        let mut host = Wizard {
            skipped: vec![WizardPage::SubCircuit],
            ..Wizard::on(WizardPage::Source)
        };
        step_forward(&mut host);

        assert!(host.steps.contains(&Step::Work(WizardPage::Source)));
        assert!(host.steps.contains(&Step::Work(WizardPage::SubCircuit)));
    }

    #[test]
    fn next_on_the_last_page_finishes_rather_than_moving() {
        let mut host = Wizard::on(WizardPage::Rename);

        assert_eq!(step_forward(&mut host), WizardPage::Rename);
        assert_eq!(host.steps, [Step::Finish]);
    }

    #[test]
    fn a_page_the_order_does_not_name_finishes_too() {
        let mut host = Wizard::on(WizardPage::Other);

        assert_eq!(step_forward(&mut host), WizardPage::Other);
        assert_eq!(host.steps, [Step::Finish]);
    }

    #[test]
    fn the_wizard_opens_on_the_first_page_with_nowhere_to_go_back_to() {
        let window = Window::default();
        assert_eq!(window.page(), 0);
        assert_eq!(window.wizard_page(), WizardPage::Source);
        assert!(!window.can_go_back());
        assert!(!window.on_the_last_page());
        assert_eq!(window.finished(), None);
    }

    #[test]
    fn the_first_page_waits_for_a_name() {
        let mut window = Window::default();
        assert!(!window.can_go_on());

        window.update(Message::NameChanged("  ".to_owned()));
        assert!(!window.can_go_on(), "a name of spaces is no name");

        window.update(Message::NameChanged("Divider".to_owned()));
        assert!(window.can_go_on());
    }

    #[test]
    fn a_macro_read_from_a_file_waits_for_the_file() {
        let mut window = Window::default();
        window.update(Message::NameChanged("Divider".to_owned()));
        window.update(Message::SourceChosen(MacroSource::FromFile));
        assert!(!window.can_go_on());

        window.update(Message::SourceFileChanged("divider.tsc".to_owned()));
        assert!(window.can_go_on());
    }

    #[test]
    fn the_source_from_the_web_cannot_go_on_because_nothing_fetches_it_yet() {
        let mut window = Window::default();
        window.update(Message::NameChanged("Divider".to_owned()));
        window.update(Message::SourceChosen(MacroSource::FromWeb));

        assert!(!window.can_go_on());
        // And the recovered kinds say which one this is.
        assert_eq!(MacroSource::FromWeb.kind(), SourceKind::Third);
        assert!(SourceKind::Third.resolves_name());
    }

    #[test]
    fn the_control_states_on_the_first_page_are_the_recovered_ones() {
        let mut window = Window::default();
        // Nothing chosen that the recovered rule counts, so nothing accepts.
        assert!(!window.source_controls().accept);

        window.update(Message::SourceChosen(MacroSource::FromFile));
        let states = window.source_controls();
        assert!(states.first_field);
        assert!(states.first_field_option);
        assert!(!states.second_field);
        assert!(states.accept);

        window.update(Message::SourceChosen(MacroSource::CurrentCircuit));
        let states = window.source_controls();
        assert!(!states.first_field);
        assert!(states.second_field);
        assert!(states.accept);
    }

    #[test]
    fn walking_forward_and_back_stays_inside_the_pages() {
        let mut window = Window::default();
        window.update(Message::NameChanged("Divider".to_owned()));

        // One Next per step between pages lands on the last one.
        for _ in 0..PAGES.len() - 1 {
            window.update(Message::Next);
        }
        assert!(window.on_the_last_page());
        assert_eq!(window.finished(), None);

        // One more sees it through.
        window.update(Message::Next);
        assert_eq!(window.finished(), Some(true));

        for _ in 0..PAGES.len() + 2 {
            window.update(Message::Back);
        }
        assert_eq!(window.page(), 0);
    }

    #[test]
    fn a_page_the_walk_cannot_leave_does_not_move() {
        let mut window = Window::default();
        window.update(Message::Next);
        assert_eq!(window.page(), 0, "no name, so nowhere to go");
    }

    #[test]
    fn the_subcircuit_page_waits_for_one_where_there_is_a_choice() {
        let mut window =
            Window::offering(vec!["First".to_owned(), "Second".to_owned()], Vec::new());
        window.update(Message::NameChanged("Divider".to_owned()));
        window.update(Message::Next);
        assert_eq!(window.page(), 1);
        assert!(!window.can_go_on());

        window.update(Message::SubcircuitChosen("Second".to_owned()));
        assert!(window.can_go_on());
    }

    #[test]
    fn a_source_with_one_subcircuit_passes_that_page_straight_through() {
        let mut window = Window::default();
        window.update(Message::NameChanged("Divider".to_owned()));
        window.update(Message::Next);

        assert_eq!(window.page(), 1);
        assert!(window.can_go_on());
    }

    #[test]
    fn each_page_lays_the_form_out_the_recovered_way() {
        let mut window = Window::default();
        assert_eq!(window.layout(), page_layout(WizardPage::Source));

        window.update(Message::PageChosen(2));
        assert_eq!(window.wizard_page(), WizardPage::Shape);
        assert_eq!(window.layout(), page_layout(WizardPage::Shape));

        // A page that is not there is ignored.
        window.update(Message::PageChosen(9));
        assert_eq!(window.page(), 2);
    }

    #[test]
    fn the_shape_controls_follow_the_recovered_rule() {
        let mut window = Window::default();
        assert_eq!(
            window.shape_controls(),
            shape_mode_control_states(false),
            "a generated shape"
        );

        window.update(Message::ShapeSourceChosen(ShapeSource::FromLibrary));
        assert_eq!(
            window.shape_controls(),
            shape_mode_control_states(true),
            "one taken from a library"
        );
    }

    #[test]
    fn giving_up_ends_the_wizard_without_seeing_it_through() {
        let mut window = Window::default();
        window.update(Message::Cancel);
        assert_eq!(window.finished(), Some(false));
    }
}
