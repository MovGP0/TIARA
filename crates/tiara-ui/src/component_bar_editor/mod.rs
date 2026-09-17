//! Iced state for the recovered Edit Component Bar dialog.
//!
//! The recovered form edits one component-bar registry through a navigator tree
//! and a property panel. The handlers ported here cover the property edits, the
//! navigator selection gate, the navigator icon toggle, the help command, and
//! the new-file panel.

use std::path::{Path, PathBuf};

pub const TITLE: &str = "Edit Component Bar";
pub const FORM_RESOURCE: &str = "frmEditCompRack";
pub const HELP_FILE: &str = "TINA.CHM";
pub const HELP_CONTEXT: u32 = 0x047c;

/// The tree indent the recovered handler assigns when the navigator icons are
/// switched off.
pub const ICONLESS_TREE_INDENT: u32 = 1;

/// An opaque handle to one navigator item.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct NavigatorItem(pub u64);

/// An opaque handle to the navigator image list.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct ImageList(pub u64);

pub trait ComponentBarEditHost {
    /// The navigator item the tree currently shows as selected.
    fn selected_item(&mut self) -> Option<NavigatorItem>;

    /// Applies the property panel to one navigator item, validating the values.
    fn apply_properties(&mut self, item: NavigatorItem, validate: bool);
}

/// Implements Ghidra functions `FUN_01b994a0` at `0x01B994A0` and
/// `FUN_01b994d0` at `0x01B994D0`.
///
/// Applies the property panel to the selected navigator item on every keystroke
/// in the name or help-identifier edit, with validation enabled.
///
/// The two recovered handlers have identical bodies, so both edits commit the
/// same way and through the same validation. With nothing selected the shared
/// applier receives no item, which is the recovered no-op. Neither handler
/// writes a file or changes the navigator structure.
pub fn apply_edited_properties(host: &mut impl ComponentBarEditHost) -> bool {
    let Some(item) = host.selected_item() else {
        return false;
    };
    host.apply_properties(item, true);
    true
}

/// The width the recovered tab-change handler forces on the property control.
pub const PROPERTY_CONTROL_WIDTH: u32 = 0x96;

/// The hint timing value the recovered navigator hint handler assigns.
pub const NAVIGATOR_HINT_TIMING: u32 = 100;

/// The number of leading and trailing characters the recovered group handler
/// removes from a library-group entry before storing it.
pub const GROUP_DELIMITER_LENGTH: usize = 1;

pub trait IconChoiceHost: ComponentBarEditHost {
    fn icon_choice_index(&mut self) -> i32;

    fn set_stored_icon_index(&mut self, index: i32);
}

/// Implements Ghidra function `FUN_01b98a30` at `0x01B98A30`.
///
/// Stores the icon combo's selected index on the form and then applies the
/// property panel to the selected navigator item, exactly like the name and
/// help-identifier edits.
///
/// The index is stored before the apply runs, so the applier already sees the
/// new icon. The handler reads no bitmap and copies no file.
pub fn choose_navigator_icon(host: &mut impl IconChoiceHost) -> bool {
    let index = host.icon_choice_index();
    host.set_stored_icon_index(index);
    apply_edited_properties(host)
}

pub trait ItemNameHost: ComponentBarEditHost {
    fn set_item_name(&mut self, name: &str);
}

/// Implements Ghidra function `FUN_01b99500` at `0x01B99500`.
///
/// Copies the chosen library part into the item name and then applies the
/// property panel.
///
/// The recovered guard trims the combo text only to decide whether to copy; the
/// value it stores is the untrimmed text. A blank choice therefore leaves the
/// current name alone, and the property apply still runs either way.
pub fn choose_library_macro_part(part_text: &str, host: &mut impl ItemNameHost) -> bool {
    if !part_text.trim().is_empty() {
        host.set_item_name(part_text);
    }
    apply_edited_properties(host)
}

/// Strips the recovered single-character delimiters from a library-group entry.
#[must_use]
pub fn undelimited_group_name(entry: &str) -> String {
    let characters: Vec<char> = entry.chars().collect();
    if characters.len() <= GROUP_DELIMITER_LENGTH * 2 {
        return String::new();
    }
    characters[GROUP_DELIMITER_LENGTH..characters.len() - GROUP_DELIMITER_LENGTH]
        .iter()
        .collect()
}

/// Implements Ghidra function `FUN_01b995f0` at `0x01B995F0`.
///
/// Copies the chosen library-macro group into the item name without its
/// surrounding delimiters, then applies the property panel.
///
/// The recovered copy drops exactly one leading and one trailing character,
/// which is how the visible bracketed group entry becomes the stored group
/// identifier. A blank choice leaves the current name alone, and the property
/// apply still runs either way.
pub fn choose_library_macro_group(group_entry: &str, host: &mut impl ItemNameHost) -> bool {
    if !group_entry.trim().is_empty() {
        let name = undelimited_group_name(group_entry);
        host.set_item_name(&name);
    }
    apply_edited_properties(host)
}

pub trait PropertyTabHost {
    fn set_property_control_width(&mut self, width: u32);
}

/// Implements Ghidra function `FUN_01b9b010` at `0x01B9B010`.
///
/// Forces the shared property control back to its fixed width whenever the
/// property tab changes. The recovered handler reads no tab index, so every tab
/// gets the same width, and it neither loads nor commits any property value.
pub fn resize_property_control(host: &mut impl PropertyTabHost) {
    host.set_property_control_width(PROPERTY_CONTROL_WIDTH);
}

pub trait NavigatorLoadHost {
    /// Loads one navigator item into the property panel.
    fn load_item_properties(&mut self, item: Option<NavigatorItem>);
}

/// Implements Ghidra function `FUN_01b98100` at `0x01B98100`.
///
/// Loads the newly selected navigator item into the property panel. The
/// recovered handler forwards the node the tree reports, including no node at
/// all, and performs no validation of its own; the changing handler already
/// decided whether the move was allowed.
pub fn load_selected_navigator_item(
    item: Option<NavigatorItem>,
    host: &mut impl NavigatorLoadHost,
) {
    host.load_item_properties(item);
}

/// The direction the recovered auto-scroll timer steps in.
#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct ScrollDirection(pub u8);

pub trait NavigatorScrollHost {
    fn set_scroll_timer_enabled(&mut self, enabled: bool);

    /// Performs one auto-scroll step in the stored direction.
    fn scroll_step(&mut self, direction: ScrollDirection);
}

/// Implements Ghidra function `FUN_01b98b40` at `0x01B98B40`.
///
/// Stops the drag auto-scroll timer when the navigator drag ends. The recovered
/// handler does not clear the stored direction or move any item; the drop
/// handler owns the move.
pub fn end_navigator_drag(host: &mut impl NavigatorScrollHost) {
    host.set_scroll_timer_enabled(false);
}

/// Implements Ghidra function `FUN_01b98a80` at `0x01B98A80`.
///
/// Performs one auto-scroll step in the direction the drag-over handler stored.
/// The recovered tick reads only that stored byte, so the timer keeps scrolling
/// the same way until the drag-over handler changes it or the drag ends.
pub fn tick_navigator_scroll(direction: ScrollDirection, host: &mut impl NavigatorScrollHost) {
    host.scroll_step(direction);
}

/// One hint request the application routes through the form.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct HintRequest {
    /// True when the hint belongs to the navigator tree.
    pub over_navigator: bool,
    pub text: String,
    pub timing: u32,
}

pub trait NavigatorHintHost {
    /// Resolves the navigator item under the current cursor position.
    fn navigator_item_at_cursor(&mut self) -> Option<usize>;

    /// Reads the registry line one navigator item was built from.
    fn registry_line(&mut self, index: usize) -> String;
}

/// Implements Ghidra function `FUN_01b9aef0` at `0x01B9AEF0`.
///
/// Replaces the navigator's hint with the registry line of the item under the
/// cursor and assigns the recovered hint timing value.
///
/// A hint for any other control is left untouched. Over the navigator but not
/// over an item, the handler reports that no hint should be shown and keeps the
/// previous text, which is how the tree's designed hint stays hidden between
/// items.
pub fn resolve_navigator_hint(
    request: &mut HintRequest,
    host: &mut impl NavigatorHintHost,
) -> bool {
    if !request.over_navigator {
        return false;
    }

    let Some(index) = host.navigator_item_at_cursor() else {
        return false;
    };

    request.text = host.registry_line(index);
    request.timing = NAVIGATOR_HINT_TIMING;
    true
}

/// The recovered drag auto-scroll margin at each edge of the navigator.
pub const DRAG_SCROLL_MARGIN: i32 = 0x1e;

/// The recovered scroll directions the drag-over handler stores.
pub const SCROLL_UP: ScrollDirection = ScrollDirection(1);
pub const SCROLL_DOWN: ScrollDirection = ScrollDirection(0);

/// The localized confirmation the close query shows for an unaccepted close.
pub const DISCARD_CHANGES_MESSAGE_ID: u16 = 0x083b;

/// The recovered mouse buttons the navigator reports.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum MouseButton {
    Left,
    Right,
    Middle,
}

/// A pointer position in navigator client coordinates.
#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct ClientPoint {
    pub x: i32,
    pub y: i32,
}

/// A pointer position in screen coordinates.
#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct ScreenPoint {
    pub x: i32,
    pub y: i32,
}

pub trait NavigatorMenuHost {
    fn item_at(&mut self, point: ClientPoint) -> Option<NavigatorItem>;

    fn selected_item(&mut self) -> Option<NavigatorItem>;

    fn client_to_screen(&mut self, point: ClientPoint) -> ScreenPoint;

    fn show_navigator_menu(&mut self, at: ScreenPoint);
}

/// Implements Ghidra function `FUN_01b9a250` at `0x01B9A250`.
///
/// Opens the navigator popup menu for a right-click, but only when the click
/// lands on the item that is already selected.
///
/// Right-clicking a different item, or empty space, opens nothing and does not
/// move the selection, so the popup always acts on the item the property panel
/// is showing. Every other button is ignored.
pub fn open_navigator_menu(
    button: MouseButton,
    point: ClientPoint,
    host: &mut impl NavigatorMenuHost,
) -> bool {
    if button != MouseButton::Right {
        return false;
    }

    let clicked = host.item_at(point);
    let selected = host.selected_item();
    if clicked.is_none() || clicked != selected {
        return false;
    }

    let at = host.client_to_screen(point);
    host.show_navigator_menu(at);
    true
}

pub trait NavigatorEditHost {
    fn is_editing_label(&mut self) -> bool;

    fn cancel_label_edit(&mut self);
}

/// Implements Ghidra function `FUN_01b9a300` at `0x01B9A300`.
///
/// Cancels an in-progress navigator label edit when Escape is pressed. The
/// recovered handler reacts to no other key and does nothing when no label is
/// being edited, so Escape outside label editing falls through to the form's
/// normal handling instead of closing the navigator.
pub fn cancel_navigator_label_edit(
    escape_pressed: bool,
    host: &mut impl NavigatorEditHost,
) -> bool {
    if !escape_pressed || !host.is_editing_label() {
        return false;
    }
    host.cancel_label_edit();
    true
}

/// The client size of the navigator the drag-over handler measures against.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct NavigatorClientSize {
    pub width: i32,
    pub height: i32,
}

/// What the drag-over handler does with the auto-scroll timer.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DragScrollDecision {
    Stop,
    /// The timer is already running, so the recovered handler leaves it alone.
    Continue,
    Start(ScrollDirection),
}

/// Implements Ghidra function `FUN_01b98b60` at `0x01B98B60`.
///
/// Accepts every navigator drag and decides what the auto-scroll timer does
/// next. A point inside the top margin starts scrolling one way, a point inside
/// the bottom margin starts scrolling the other way, and anything between them
/// stops the timer. A timer that is already running is left alone so its
/// direction does not restart.
///
/// The recovered bounds test compares the client height against the horizontal
/// coordinate rather than the vertical one. This port keeps that comparison so
/// the same drags are treated as out of bounds; it is a recovered defect, not
/// an omission here.
#[must_use]
pub const fn decide_drag_scroll(
    point: ClientPoint,
    size: NavigatorClientSize,
    timer_running: bool,
) -> DragScrollDecision {
    let out_of_bounds = point.x < 1
        || size.width <= point.x
        || point.y < 1
        // The recovered comparison uses the horizontal coordinate here.
        || size.height <= point.x;
    if out_of_bounds {
        return DragScrollDecision::Stop;
    }

    if point.y < DRAG_SCROLL_MARGIN {
        return if timer_running {
            DragScrollDecision::Continue
        } else {
            DragScrollDecision::Start(SCROLL_UP)
        };
    }

    if point.y <= size.height - DRAG_SCROLL_MARGIN {
        return DragScrollDecision::Stop;
    }

    if timer_running {
        DragScrollDecision::Continue
    } else {
        DragScrollDecision::Start(SCROLL_DOWN)
    }
}

/// The recovered modal result the accept path stores.
pub const ACCEPTED_MODAL_RESULT: i32 = 1;

pub trait ComponentBarCommitHost {
    fn selected_item(&mut self) -> Option<NavigatorItem>;

    /// Reports whether the pending property values of one item are acceptable.
    fn accepts_selection_change(&mut self, item: NavigatorItem) -> bool;

    /// Saves the edited registry. `false` is the recovered failure branch.
    fn save_registry(&mut self) -> bool;
}

/// Implements Ghidra function `FUN_01b98120` at `0x01B98120`.
///
/// Validates the selected item, saves the registry, and only then stores the
/// accepted modal result.
///
/// Each step gates the next, so a rejected property value or a failed save
/// leaves the modal result untouched and the dialog open. The recovered handler
/// shows no message of its own; the validator and the saver own any reporting.
pub fn accept_component_bar(host: &mut impl ComponentBarCommitHost) -> bool {
    let Some(item) = host.selected_item() else {
        return false;
    };
    if !host.accepts_selection_change(item) {
        return false;
    }
    host.save_registry()
}

pub trait ComponentBarCloseHost {
    fn localize(&mut self, message_id: u16) -> String;

    /// Shows the discard confirmation. `true` is the recovered yes answer.
    fn confirm_discard(&mut self, message: &str) -> bool;
}

/// Implements Ghidra function `FUN_01b9a340` at `0x01B9A340`.
///
/// Confirms an unaccepted close. A dialog whose modal result is already the
/// accepted value closes without asking, because the accept handler has already
/// saved. Every other close shows the localized discard confirmation and closes
/// only on a yes answer.
///
/// The handler saves nothing itself, so answering yes discards every pending
/// edit.
pub fn query_component_bar_close(modal_result: i32, host: &mut impl ComponentBarCloseHost) -> bool {
    if modal_result == ACCEPTED_MODAL_RESULT {
        return true;
    }
    let message = host.localize(DISCARD_CHANGES_MESSAGE_ID);
    host.confirm_discard(&message)
}

/// An opaque handle to the icon image list the reset path reloads.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct IconImageList(pub u64);

pub trait ComponentBarResetHost {
    fn set_new_file_panel_visible(&mut self, visible: bool);

    fn set_busy_cursor(&mut self, busy: bool);

    /// Reloads the icon image list for the active symbol set.
    fn reload_icon_images(&mut self) -> Option<IconImageList>;

    fn icon_count(&mut self, images: IconImageList) -> usize;

    fn set_icon_choices(&mut self, choices: Vec<String>);

    /// Runs the extra rebuild the recovered flag guards.
    fn rebuild_pending_state(&mut self);

    /// The registry files the browser currently lists.
    fn registry_file_count(&mut self) -> usize;

    /// The file the browser has selected.
    fn selected_registry_file(&mut self) -> usize;

    /// Reloads one registry file into the editor.
    fn reload_registry_file(&mut self, index: usize);

    /// Rebuilds the navigator from the reloaded registry.
    fn rebuild_navigator(&mut self);
}

/// Implements Ghidra function `FUN_01b979d0` at `0x01B979D0`.
///
/// Discards the current edits and reloads the component bar from disk.
///
/// The handler hides the new-file panel, shows the busy cursor for the whole
/// reload, reloads the icon image list for the active symbol set, and refills
/// the icon combo with one entry per image, numbered from zero. A missing image
/// list leaves the combo empty rather than failing. The pending-state rebuild
/// runs only behind its recovered flag, the current registry file is reloaded
/// only while the browser lists at least one file, and the navigator is rebuilt
/// last. The busy cursor is always restored.
///
/// Nothing is written: reset is the discard path, so unsaved edits are lost.
pub fn reset_component_bar(rebuild_pending: bool, host: &mut impl ComponentBarResetHost) {
    host.set_new_file_panel_visible(false);
    host.set_busy_cursor(true);

    let images = host.reload_icon_images();
    let choices = images.map_or_else(Vec::new, |images| {
        (0..host.icon_count(images))
            .map(|index| index.to_string())
            .collect()
    });
    host.set_icon_choices(choices);

    if rebuild_pending {
        host.rebuild_pending_state();
    }

    if host.registry_file_count() > 0 {
        let selected = host.selected_registry_file();
        host.reload_registry_file(selected);
    }

    host.rebuild_navigator();
    host.set_busy_cursor(false);
}

/// The recovered hit-test bit that marks a drop to the right of an item.
pub const HIT_TEST_RIGHT_OF_ITEM: u32 = 0x100;

/// Where a navigator drop inserts the dragged item.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DropPlacement {
    Before,
    After,
}

pub trait NavigatorDropHost {
    fn selected_item(&mut self) -> Option<NavigatorItem>;

    fn item_at(&mut self, point: ClientPoint) -> Option<NavigatorItem>;

    /// The recovered hit-test flags for one point.
    fn hit_test_flags(&mut self, point: ClientPoint) -> u32;

    fn move_item(
        &mut self,
        source: NavigatorItem,
        target: Option<NavigatorItem>,
        placement: DropPlacement,
    );
}

/// Implements Ghidra function `FUN_01b99010` at `0x01B99010`.
///
/// Moves the dragged navigator item to the drop position. The recovered
/// hit-test bit for the right-hand strip of a row selects insertion after the
/// target; every other position inserts before it, which matches the
/// navigator's own hint.
///
/// A drag with no selected item does nothing. A drop on empty space still runs
/// the move with no target, so the shared mover decides what that means.
pub fn drop_navigator_item(point: ClientPoint, host: &mut impl NavigatorDropHost) -> bool {
    let Some(source) = host.selected_item() else {
        return false;
    };

    let flags = host.hit_test_flags(point);
    let target = host.item_at(point);
    let placement = if flags & HIT_TEST_RIGHT_OF_ITEM == 0 {
        DropPlacement::Before
    } else {
        DropPlacement::After
    };
    host.move_item(source, target, placement);
    true
}

/// The control states the recovered idle handler recomputes on every tick.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct IdleControlStates {
    /// The create-file command, enabled only while the new-file panel is open
    /// and its name has content.
    pub create_file_enabled: bool,
    /// The command the recovered handler enables only for the first registry
    /// file.
    pub first_file_command_enabled: bool,
    /// The command the recovered handler enables only past the first registry
    /// file.
    pub later_file_command_enabled: bool,
}

/// Implements Ghidra function `FUN_01b9a910` at `0x01B9A910`.
///
/// Recomputes the three command states the form keeps in sync on idle.
///
/// The create-file command needs both an open new-file panel and a file name
/// with content after trimming, so a panel full of spaces keeps it disabled.
/// The remaining two commands are driven only by which registry file the
/// browser has selected, and the recovered conditions are complementary: one is
/// enabled exactly for the first file and the other exactly past it.
///
/// The handler reads no navigator item, so the selection never changes these
/// states, and it writes nothing.
#[must_use]
pub fn refresh_idle_commands(
    new_file_panel_visible: bool,
    typed_file_name: &str,
    selected_registry_file: i32,
) -> IdleControlStates {
    IdleControlStates {
        create_file_enabled: new_file_panel_visible && !typed_file_name.trim().is_empty(),
        first_file_command_enabled: selected_registry_file == 0,
        later_file_command_enabled: selected_registry_file > 0,
    }
}

pub trait AddGroupHost {
    fn selected_item(&mut self) -> Option<NavigatorItem>;

    fn accepts_selection_change(&mut self, item: NavigatorItem) -> bool;

    fn set_new_file_panel_visible(&mut self, visible: bool);

    /// Appends one new group entry to the registry and reports its identifier.
    fn append_group_entry(&mut self) -> NavigatorItem;

    /// Rebuilds the navigator and selects one entry.
    fn rebuild_navigator_selecting(&mut self, item: NavigatorItem);

    fn selected_registry_file(&mut self) -> i32;

    fn mark_registry_file_modified(&mut self, index: i32);
}

/// Implements Ghidra function `FUN_01b98650` at `0x01B98650`.
///
/// Appends a new group to the component bar.
///
/// A selected item whose pending property values are rejected stops the command
/// before anything changes, so an invalid edit cannot be escaped by adding a
/// group. With nothing selected the validation is skipped entirely and the
/// group is added.
///
/// On success the handler hides the new-file panel, appends the group entry,
/// rebuilds the navigator with the new group selected, and marks the current
/// registry file modified. Nothing is written to disk; saving belongs to OK.
pub fn add_component_group(host: &mut impl AddGroupHost) -> bool {
    if let Some(item) = host.selected_item()
        && !host.accepts_selection_change(item)
    {
        return false;
    }

    host.set_new_file_panel_visible(false);
    let group = host.append_group_entry();
    host.rebuild_navigator_selecting(group);
    let file = host.selected_registry_file();
    if file >= 0 {
        host.mark_registry_file_modified(file);
    }
    true
}

pub trait FileMacroBrowseHost: ComponentBarEditHost {
    /// Opens the macro file chooser. `None` is the recovered cancel result.
    fn choose_macro_file(&mut self) -> Option<PathBuf>;

    fn set_macro_file_text(&mut self, path: &Path);

    /// Opens the chosen macro and reads the name stored inside it.
    fn read_macro_name(&mut self, path: &Path) -> String;

    fn set_item_name(&mut self, name: &str);
}

/// Implements Ghidra function `FUN_01b99090` at `0x01B99090`.
///
/// Browses for a file macro and adopts it.
///
/// Cancelling the chooser changes nothing. An accepted file is written to the
/// macro-file edit, then opened so its stored name can be read; a name with
/// content replaces the item name, while a blank name leaves the current one.
/// The property panel is applied afterwards either way, and the opened macro is
/// released.
pub fn browse_file_macro(host: &mut impl FileMacroBrowseHost) -> bool {
    let Some(path) = host.choose_macro_file() else {
        return false;
    };

    host.set_macro_file_text(&path);
    let name = host.read_macro_name(&path);
    if !name.trim().is_empty() {
        host.set_item_name(&name);
    }
    apply_edited_properties(host);
    true
}

/// Implements Ghidra function `FUN_01b9a3e0` at `0x01B9A3E0`.
///
/// Shows the new-component-file panel. The recovered handler neither clears the
/// typed name nor resets the private/shared radio choice, so the panel reopens
/// exactly as it was left.
pub fn open_new_file_panel(host: &mut impl NewFilePanelHost) {
    host.set_new_file_panel_visible(true);
}

pub trait FileNameHintHost {
    /// Hides the balloon hint the key-press handler showed.
    fn hide_file_name_hint(&mut self);
}

/// Implements Ghidra function `FUN_01b9a400` at `0x01B9A400`.
///
/// Hides the invalid-character balloon on the next key press in the new-file
/// name edit. The recovered handler inspects no key and changes no text, so any
/// further typing clears the balloon whether or not the new key is valid.
pub fn hide_new_file_name_hint(host: &mut impl FileNameHintHost) {
    host.hide_file_name_hint();
}

/// The localized confirmation the delete command shows.
pub const DELETE_ITEM_MESSAGE_ID: u16 = 0x083c;

/// The recovered factory-defaults backup the default command restores from.
pub const FACTORY_BACKUP_STEM: &str = "COMPREGY";
pub const FACTORY_BACKUP_EXTENSION: &str = "bak";

/// The recovered delete-file confirmation template.
pub const DELETE_FILE_MESSAGE_TEMPLATE: &str = "{} will be deleted. Continue?";

/// Builds the recovered delete-file confirmation.
#[must_use]
pub fn delete_file_message(file_name: &str) -> String {
    DELETE_FILE_MESSAGE_TEMPLATE.replace("{}", file_name)
}

pub trait DeleteItemHost {
    fn selected_item(&mut self) -> Option<NavigatorItem>;

    /// Reports whether one item is protected from deletion.
    fn is_protected(&mut self, item: NavigatorItem) -> bool;

    fn set_new_file_panel_visible(&mut self, visible: bool);

    fn localize(&mut self, message_id: u16) -> String;

    fn confirm(&mut self, message: &str) -> bool;

    fn delete_item(&mut self, item: NavigatorItem);
}

/// Implements Ghidra function `FUN_01b98570` at `0x01B98570`.
///
/// Deletes the selected navigator item after a localized confirmation.
///
/// A protected item is a silent no-op: the recovered handler shows no message
/// and does not even hide the new-file panel, so the command simply does
/// nothing. For a deletable item the panel is hidden first, the confirmation is
/// shown, and only a yes answer reaches the shared remover, which also removes
/// a group's contents.
pub fn delete_navigator_item(host: &mut impl DeleteItemHost) -> bool {
    let Some(item) = host.selected_item() else {
        return false;
    };
    if host.is_protected(item) {
        return false;
    }

    host.set_new_file_panel_visible(false);
    let message = host.localize(DELETE_ITEM_MESSAGE_ID);
    if !host.confirm(&message) {
        return false;
    }
    host.delete_item(item);
    true
}

pub trait FactoryDefaultsHost {
    fn selected_item(&mut self) -> Option<NavigatorItem>;

    fn accepts_selection_change(&mut self, item: NavigatorItem) -> bool;

    /// Restores the first registry file from the factory backup.
    fn restore_factory_registry(&mut self, backup: &Path);

    /// Runs the shared reset path with the pending-state rebuild suppressed.
    fn reset_without_pending_rebuild(&mut self);
}

/// Builds the recovered factory-backup path.
#[must_use]
pub fn factory_backup_path(settings_directory: &Path) -> PathBuf {
    settings_directory
        .join(FACTORY_BACKUP_STEM)
        .with_extension(FACTORY_BACKUP_EXTENSION)
}

/// Implements Ghidra function `FUN_01b99360` at `0x01B99360`.
///
/// Restores the factory component bar.
///
/// A selected item whose pending property values are rejected stops the command
/// before anything changes; with nothing selected the validation is skipped.
/// Otherwise the first registry file is restored from the recovered backup in
/// the settings directory and the shared reset path runs with its pending-state
/// rebuild suppressed, so the freshly restored registry is not immediately
/// rebuilt from stale state. The suppression flag is restored afterwards.
pub fn restore_factory_defaults(
    settings_directory: &Path,
    host: &mut impl FactoryDefaultsHost,
) -> bool {
    if let Some(item) = host.selected_item()
        && !host.accepts_selection_change(item)
    {
        return false;
    }

    host.restore_factory_registry(&factory_backup_path(settings_directory));
    host.reset_without_pending_rebuild();
    true
}

pub trait RegistryFileHost {
    fn selected_registry_file(&mut self) -> i32;

    fn registry_file_name(&mut self, index: i32) -> String;

    fn confirm(&mut self, message: &str) -> bool;

    /// Deletes the registry file from disk and releases its loaded object.
    fn delete_registry_file(&mut self, index: i32);

    /// Removes the file from the browser tabs and the loaded list.
    fn remove_registry_file_entry(&mut self, index: i32);

    fn select_registry_file(&mut self, index: i32);

    /// Runs the shared reset path.
    fn reset(&mut self);
}

/// Implements Ghidra function `FUN_01b9ad00` at `0x01B9AD00`.
///
/// Deletes the selected registry file after a confirmation that names it.
///
/// The recovered guard only allows this past the first file, so the first
/// registry file can never be deleted here. A no answer changes nothing. A yes
/// deletes the file, releases its loaded object, removes it from the browser
/// tabs and the loaded list, selects the file before it, and runs the shared
/// reset path so the navigator matches the remaining files.
pub fn delete_registry_file(host: &mut impl RegistryFileHost) -> bool {
    let index = host.selected_registry_file();
    if index <= 0 {
        return false;
    }

    let name = host.registry_file_name(index);
    if !host.confirm(&delete_file_message(&name)) {
        return false;
    }

    host.delete_registry_file(index);
    host.remove_registry_file_entry(index);
    host.select_registry_file(index - 1);
    host.reset();
    true
}

/// Implements Ghidra function `FUN_01b9aa30` at `0x01B9AA30`.
///
/// Reloads the editor for the newly selected registry file by running the
/// shared reset path. Switching files therefore discards unsaved edits exactly
/// like the Reset command, and the changing handler has already written the
/// outgoing file's contents back.
pub fn change_registry_file(host: &mut impl RegistryFileHost) {
    host.reset();
}

pub trait ComponentBarTeardownHost {
    fn hide_file_name_hint(&mut self);

    fn release_hint_window(&mut self);

    /// Releases every loaded registry object and the three private lists.
    fn release_registry_objects(&mut self);

    fn set_busy_cursor(&mut self, busy: bool);

    /// Runs the shared rebuild the recovered destroy path ends with.
    fn rebuild_component_bar(&mut self);
}

/// Implements Ghidra function `FUN_01b987c0` at `0x01B987C0`.
///
/// Tears the dialog down: it hides and releases the balloon hint window,
/// releases every loaded registry object and the three private lists, and then
/// rebuilds the live component bar behind the busy cursor.
///
/// The rebuild runs on every close, accepted or not, because the live bar has
/// to match whatever is now on disk. The handler itself saves nothing, so a
/// cancelled dialog rebuilds from the unchanged files.
pub fn destroy_component_bar_editor(host: &mut impl ComponentBarTeardownHost) {
    host.hide_file_name_hint();
    host.release_hint_window();
    host.release_registry_objects();
    host.set_busy_cursor(true);
    host.rebuild_component_bar();
    host.set_busy_cursor(false);
}

/// The recovered file extension of a component registry file.
pub const REGISTRY_FILE_EXTENSION: &str = "tcr";

/// Which control raised the add command.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AddCommandSource {
    /// The toolbar's Add component button.
    ToolbarButton,
    /// The navigator popup's Duplicate command.
    DuplicateMenuItem,
}

/// What the recovered add command does with the current selection.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AddPlan {
    /// Nothing happens and no control changes.
    Blocked,
    /// The new entry goes inside the selected group with default values.
    IntoGroup(NavigatorItem),
    /// The new entry goes beside the selected item with default values.
    BesideWithDefaults(NavigatorItem),
    /// The new entry goes beside the selected item, copying its values.
    BesideAsCopy(NavigatorItem),
}

/// Implements the decision part of Ghidra function `FUN_01b98160` at
/// `0x01B98160`.
///
/// Nothing happens without a selected item or when its pending property values
/// are rejected. The Duplicate command refuses a group outright, before the
/// new-file panel is even hidden, because a group has nothing to duplicate.
///
/// Duplication is requested by the Duplicate command itself, and by the toolbar
/// button only while Shift is held, which is what the button's own hint
/// describes. A selected group always receives a fresh default entry inside it;
/// duplication only applies to a selected component.
#[must_use]
pub const fn plan_component_add(
    source: AddCommandSource,
    selected: Option<NavigatorItem>,
    selected_is_group: bool,
    selection_accepted: bool,
    shift_held: bool,
) -> AddPlan {
    let Some(item) = selected else {
        return AddPlan::Blocked;
    };
    if !selection_accepted {
        return AddPlan::Blocked;
    }

    let duplicate = match source {
        AddCommandSource::DuplicateMenuItem => {
            if selected_is_group {
                return AddPlan::Blocked;
            }
            true
        }
        AddCommandSource::ToolbarButton => shift_held,
    };

    if selected_is_group {
        AddPlan::IntoGroup(item)
    } else if duplicate {
        AddPlan::BesideAsCopy(item)
    } else {
        AddPlan::BesideWithDefaults(item)
    }
}

/// One registry entry the add command creates.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ComponentEntry {
    pub name: String,
    pub value: String,
    pub flag: bool,
}

pub trait AddComponentHost {
    fn selected_item(&mut self) -> Option<NavigatorItem>;

    fn accepts_selection_change(&mut self, item: NavigatorItem) -> bool;

    fn is_group(&mut self, item: NavigatorItem) -> bool;

    /// Reports whether the Shift key is down, which the toolbar button reads.
    fn shift_held(&mut self) -> bool;

    fn set_new_file_panel_visible(&mut self, visible: bool);

    /// Reads one item's stored registry entry.
    fn entry_of(&mut self, item: NavigatorItem) -> ComponentEntry;

    /// The default name the recovered handler gives a fresh component.
    fn default_component_entry(&mut self) -> ComponentEntry;

    /// Inserts one entry beside or inside the anchor and reports the new item.
    fn insert_entry(
        &mut self,
        anchor: NavigatorItem,
        inside: bool,
        entry: ComponentEntry,
    ) -> NavigatorItem;

    /// Resolves and assigns the entry's icon from its name.
    fn assign_icon(&mut self, item: NavigatorItem, name: &str);

    fn rebuild_navigator_selecting(&mut self, item: NavigatorItem);

    fn selected_registry_file(&mut self) -> i32;

    fn mark_registry_file_modified(&mut self, index: i32);
}

/// Implements Ghidra function `FUN_01b98160` at `0x01B98160`.
///
/// Adds or duplicates a component-bar entry.
///
/// The decision is made by [`plan_component_add`]. A blocked plan changes
/// nothing at all, not even the new-file panel. Otherwise the panel is hidden,
/// the entry is inserted, its icon is resolved from the entry name, the
/// navigator is rebuilt with the new entry selected, and the current registry
/// file is marked modified. Nothing is written to disk; saving belongs to OK.
pub fn add_component(source: AddCommandSource, host: &mut impl AddComponentHost) -> bool {
    let selected = host.selected_item();
    let selected_is_group = selected.is_some_and(|item| host.is_group(item));
    let selection_accepted = selected.is_some_and(|item| host.accepts_selection_change(item));
    let shift_held = host.shift_held();

    let plan = plan_component_add(
        source,
        selected,
        selected_is_group,
        selection_accepted,
        shift_held,
    );

    let (anchor, inside, entry) = match plan {
        AddPlan::Blocked => return false,
        AddPlan::IntoGroup(item) => (item, true, host.default_component_entry()),
        AddPlan::BesideWithDefaults(item) => (item, false, host.default_component_entry()),
        AddPlan::BesideAsCopy(item) => (item, false, host.entry_of(item)),
    };

    host.set_new_file_panel_visible(false);
    let name = entry.name.clone();
    let created = host.insert_entry(anchor, inside, entry);
    host.assign_icon(created, &name);
    host.rebuild_navigator_selecting(created);
    let file = host.selected_registry_file();
    if file >= 0 {
        host.mark_registry_file_modified(file);
    }
    true
}

pub trait CreateRegistryFileHost {
    fn set_new_file_panel_visible(&mut self, visible: bool);

    fn typed_file_name(&mut self) -> String;

    /// Reports the tab index of an existing file with this name.
    fn registry_file_index(&mut self, name: &str) -> Option<i32>;

    /// Adds a browser tab and reports its index.
    fn add_registry_file_tab(&mut self, name: &str) -> i32;

    fn select_registry_file(&mut self, index: i32);

    /// Reports whether the private radio is selected.
    fn private_selected(&mut self) -> bool;

    /// Registers a new empty registry under one path.
    fn register_empty_registry(&mut self, path: &Path);

    fn mark_registry_file_modified(&mut self, index: i32);

    fn clear_typed_file_name(&mut self);

    fn set_registry_tabs_visible(&mut self, visible: bool);

    /// Runs the shared reset path through the file-change handler.
    fn reset(&mut self);
}

/// Builds the recovered path of one new registry file.
#[must_use]
pub fn registry_file_path(catalog_directory: &Path, name: &str) -> PathBuf {
    catalog_directory
        .join(name)
        .with_extension(REGISTRY_FILE_EXTENSION)
}

/// Implements Ghidra function `FUN_01b9a640` at `0x01B9A640`.
///
/// Creates a new component registry file.
///
/// The recovered handler hides the new-file panel first, so the panel closes
/// whether or not a file is created. A name that already names a tab is
/// silently skipped: nothing is added, nothing is registered, and no message is
/// shown. A new name adds a browser tab, selects it, registers an empty
/// registry under the private or shared catalog directory according to the
/// radio choice, and marks it modified.
///
/// Either way the typed name is cleared, the tab strip is shown, and the shared
/// reset path runs.
pub fn create_registry_file(
    private_directory: &Path,
    shared_directory: &Path,
    host: &mut impl CreateRegistryFileHost,
) -> bool {
    host.set_new_file_panel_visible(false);

    let name = host.typed_file_name();
    let created = if host.registry_file_index(&name).is_none() {
        let index = host.add_registry_file_tab(&name);
        host.select_registry_file(index);
        let directory = if host.private_selected() {
            private_directory
        } else {
            shared_directory
        };
        host.register_empty_registry(&registry_file_path(directory, &name));
        host.mark_registry_file_modified(index);
        true
    } else {
        false
    };

    host.clear_typed_file_name();
    host.set_registry_tabs_visible(true);
    host.reset();
    created
}

/// A rectangle the owner-draw handler paints into.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DrawRect {
    pub left: i32,
    pub top: i32,
    pub right: i32,
    pub bottom: i32,
}

pub trait IconDrawHost {
    /// Paints the item background for the supplied rectangle.
    fn fill_background(&mut self, rect: DrawRect);

    /// Draws one image list entry at a position.
    fn draw_icon(&mut self, index: i32, x: i32, y: i32, transparent: bool);
}

/// Implements Ghidra function `FUN_01b989b0` at `0x01B989B0`.
///
/// Paints one icon-combo row: the background first, then the image-list entry
/// inset by one pixel from the row's top-left corner and drawn transparently.
///
/// The recovered handler draws no text, so the numeric item strings the reset
/// path stores never appear; the row shows only its icon.
pub fn draw_icon_combo_item(index: i32, rect: DrawRect, host: &mut impl IconDrawHost) {
    host.fill_background(rect);
    host.draw_icon(index, rect.left + 1, rect.top + 1, true);
}

/// The header the recovered serializer writes before every registry file.
pub const REGISTRY_HEADER_LINES: [&str; 3] = [
    "; TINA Component Registry V2.0",
    "; Copyright (c) 1993-2017 DesignSoft, Inc.",
    "",
];

/// The recovered section-header marker that earns a blank line before it.
pub const SECTION_HEADER_MARKER: char = '[';

/// The recovered entry tags whose stored value can replace the raw line.
pub const GROUP_TAG: &str = "id_group";
pub const COMPONENT_TAG: &str = "id_component";

/// One entry of the working component registry.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct RegistryEntry {
    /// The line exactly as it was read or built.
    pub raw: String,
    /// The edited value the serializer can write instead of `raw`.
    pub value: String,
    /// The recovered flag that keeps the raw line instead of the value.
    pub keep_raw: bool,
    /// The entry tag the serializer matches against.
    pub tag: String,
}

/// Implements Ghidra function `FUN_01b9aa40` at `0x01B9AA40`.
///
/// Serializes the working registry back into the outgoing file before the
/// browser switches tabs, so the edits survive the switch that the change
/// handler then reloads.
///
/// The recovered writer replaces the file's lines with the fixed header and
/// then one line per entry. An entry whose raw line opens a section gets a
/// blank line before it. Group and component entries write their edited value
/// unless the recovered keep-raw flag is set; every other entry writes its raw
/// line unchanged, which is how comments and unknown keys survive a round trip.
#[must_use]
pub fn serialize_registry(entries: &[RegistryEntry]) -> Vec<String> {
    let mut lines: Vec<String> = REGISTRY_HEADER_LINES
        .iter()
        .map(|line| (*line).to_owned())
        .collect();

    for entry in entries {
        if entry.raw.starts_with(SECTION_HEADER_MARKER) {
            lines.push(String::new());
        }

        let tagged = entry.tag.contains(GROUP_TAG) || entry.tag.contains(COMPONENT_TAG);
        if tagged && !entry.keep_raw {
            lines.push(entry.value.clone());
        } else {
            lines.push(entry.raw.clone());
        }
    }

    lines
}

/// The literal character list the recovered balloon appends to its localized
/// message.
pub const INVALID_FILE_NAME_CHARACTER_LIST: &str = " \\ / ? \" < > |";

/// The localized message identifier the recovered balloon resolves.
pub const INVALID_FILE_NAME_MESSAGE_ID: u16 = 0x080e;

pub trait FileNameKeyHost {
    fn localize(&mut self, message_id: u16) -> String;

    /// Shows the invalid-character balloon next to the file-name edit.
    fn show_file_name_hint(&mut self, message: &str);
}

/// Builds the recovered invalid-character balloon text.
pub fn invalid_file_name_message(host: &mut impl FileNameKeyHost) -> String {
    let mut message = host.localize(INVALID_FILE_NAME_MESSAGE_ID);
    message.push_str(INVALID_FILE_NAME_CHARACTER_LIST);
    message
}

/// Implements Ghidra function `FUN_01b9a420` at `0x01B9A420`.
///
/// Rejects a character that cannot appear in a file name: the key is swallowed
/// so the edit never receives it, and a balloon naming the forbidden characters
/// appears beside the edit. An accepted character is passed through untouched
/// and shows nothing.
///
/// The recovered test reads a lookup table the decompiler did not recover as
/// literals, so the rejected set is supplied by the caller. The message text is
/// recovered: a localized sentence followed by
/// [`INVALID_FILE_NAME_CHARACTER_LIST`].
pub fn reject_invalid_file_name_key(
    typed: char,
    rejected: &str,
    host: &mut impl FileNameKeyHost,
) -> bool {
    if !rejected.contains(typed) {
        return false;
    }
    let message = invalid_file_name_message(host);
    host.show_file_name_hint(&message);
    true
}

/// The fixed tail the create handler appends to the localized default
/// component name.
pub const NEW_COMPONENT_SUFFIX: &str =
    r",57,TMacroHandler,$tina\MacroLib\NewMacro.tsm,120,$tina\Help\NewMacro.htm";

/// The fixed tail the create handler appends to the localized default group
/// name.
pub const NEW_GROUP_SUFFIX: &str = ":{new_group}";

pub const NEW_COMPONENT_MESSAGE_ID: u16 = 0x083f;
pub const NEW_GROUP_MESSAGE_ID: u16 = 0x083e;
pub const SHARED_CAPTION_MESSAGE_ID: u16 = 0x083d;

/// The blend weight the create handler mixes the two form colors with.
pub const FORM_COLOR_BLEND_WEIGHT: u8 = 0x60;

/// The catch-all entry the create handler puts in front of the library parts.
pub const ALL_PARTS_ENTRY: &str = "[All]";

/// The three templates the create handler builds once per dialog.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct ComponentBarTemplates {
    /// The default entry a new component starts from.
    pub new_component: String,
    /// The default entry a new group starts from.
    pub new_group: String,
    /// The caption the navigator popup builder reuses.
    pub shared_caption: String,
}

pub trait ComponentBarCreateHost {
    fn localize(&mut self, message_id: u16) -> String;

    /// Blends the two designed form colors toward the system colour.
    fn blend_form_colors(&mut self, weight: u8);

    fn create_hint_window(&mut self);

    fn set_help_context(&mut self, context: u32);

    /// Creates the three private lists the dialog owns.
    fn create_private_lists(&mut self);

    /// Reports the registry files the editor should offer.
    fn registry_files(&mut self) -> Vec<PathBuf>;

    /// Loads one registry file and attaches it to its list entry.
    fn load_registry_file(&mut self, index: usize, path: &Path);

    fn add_registry_file_tab(&mut self, name: &str);

    fn set_registry_tabs_visible(&mut self, visible: bool);

    fn select_registry_file(&mut self, index: i32);

    /// Runs the shared reset path.
    fn reset(&mut self);

    /// Applies the navigator icon check box to the tree.
    fn apply_navigator_icon_setting(&mut self);

    fn fill_library_part_choices(&mut self, all_entry: &str);

    fn fill_library_group_choices(&mut self);

    fn select_library_group(&mut self, index: i32);

    /// Clears double buffering on the four recovered controls.
    fn disable_double_buffering(&mut self);
}

/// The browser tab name the create handler derives from a registry file path.
#[must_use]
pub fn registry_tab_name(path: &Path) -> String {
    path.file_stem()
        .map(|stem| stem.to_string_lossy().into_owned())
        .unwrap_or_default()
}

/// Implements Ghidra function `FUN_01b97ba0` at `0x01B97BA0`.
///
/// Builds one Edit Component Bar session.
///
/// The handler first builds the three templates the rest of the dialog reuses:
/// the localized default component and group names each get a fixed recovered
/// tail, and a third localized caption is kept for the navigator popup builder.
/// It then blends the two designed form colours, creates the balloon hint
/// window, assigns the help context, and creates the three private lists.
///
/// Every known registry file is loaded and gets a browser tab named after the
/// file's stem. The tab strip only appears once more than one file exists,
/// which is why a single-file installation never shows it. The first file is
/// selected, then the shared reset path and the navigator icon setting run, the
/// library part and group choices are filled with the catch-all entry in front,
/// the first group is selected, and double buffering is cleared on the four
/// recovered controls.
///
/// The handler writes nothing to disk.
pub fn create_component_bar_editor(
    host: &mut impl ComponentBarCreateHost,
) -> ComponentBarTemplates {
    let mut templates = ComponentBarTemplates {
        new_component: host.localize(NEW_COMPONENT_MESSAGE_ID),
        new_group: host.localize(NEW_GROUP_MESSAGE_ID),
        shared_caption: host.localize(SHARED_CAPTION_MESSAGE_ID),
    };
    templates.new_component.push_str(NEW_COMPONENT_SUFFIX);
    templates.new_group.push_str(NEW_GROUP_SUFFIX);

    host.blend_form_colors(FORM_COLOR_BLEND_WEIGHT);
    host.create_hint_window();
    host.set_help_context(HELP_CONTEXT);
    host.create_private_lists();

    let files = host.registry_files();
    for (index, path) in files.iter().enumerate() {
        host.load_registry_file(index, path);
        host.add_registry_file_tab(&registry_tab_name(path));
    }
    if files.len() > 1 {
        host.set_registry_tabs_visible(true);
    }
    host.select_registry_file(0);

    host.reset();
    host.apply_navigator_icon_setting();

    host.fill_library_part_choices(ALL_PARTS_ENTRY);
    host.fill_library_group_choices();
    host.select_library_group(0);
    host.disable_double_buffering();

    templates
}

/// The designed navigator popup items the builder never removes.
pub const FIXED_MENU_ITEM_COUNT: usize = 3;

/// The recovered pattern that selects a cross-file group header.
pub const CROSS_FILE_GROUP_PATTERN: &str = r"^\[\!.+\]";

const CROSS_FILE_GROUP_PREFIX: &str = "[!";
const CROSS_FILE_GROUP_SUFFIX: char = ']';

/// Extracts the cross-file group headers of one registry file's text.
///
/// The recovered builder matches `^\[\!.+\]` line by line and then copies the
/// text between the two-character opener and the closing bracket. This port
/// implements that exact shape directly rather than adding a regular-expression
/// dependency for one fixed pattern.
#[must_use]
pub fn cross_file_group_headers(text: &str) -> Vec<String> {
    text.lines()
        .filter_map(|line| {
            let line = line.strip_suffix('\r').unwrap_or(line);
            let inner = line
                .strip_prefix(CROSS_FILE_GROUP_PREFIX)?
                .strip_suffix(CROSS_FILE_GROUP_SUFFIX)?;
            (!inner.is_empty()).then(|| inner.to_owned())
        })
        .collect()
}

/// One move-to-group command in the navigator popup.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct MenuGroupCommand {
    pub caption: String,
    /// False for the group the selection already belongs to.
    pub enabled: bool,
    pub entry_index: usize,
}

/// One per-file submenu of the navigator popup.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct MenuFileSubmenu {
    pub caption: String,
    pub groups: Vec<String>,
}

/// The dynamic part of the navigator popup.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct NavigatorMenuModel {
    pub groups: Vec<MenuGroupCommand>,
    pub files: Vec<MenuFileSubmenu>,
    pub duplicate_enabled: bool,
    pub separator_visible: bool,
}

/// One group of the current registry file.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct RegistryGroup {
    pub name: String,
    pub entry_index: usize,
}

pub trait NavigatorPopupHost {
    fn selected_item(&mut self) -> Option<NavigatorItem>;

    fn is_group(&mut self, item: NavigatorItem) -> bool;

    /// The name stored on one item's own entry.
    fn item_name(&mut self, item: NavigatorItem) -> String;

    /// The item's parent group.
    fn parent_of(&mut self, item: NavigatorItem) -> Option<NavigatorItem>;

    /// The groups of the current registry file, in registry order.
    fn current_file_groups(&mut self) -> Vec<RegistryGroup>;

    /// The browser tab names of every registry file.
    fn registry_file_names(&mut self) -> Vec<String>;

    fn selected_registry_file(&mut self) -> usize;

    /// The raw text of one registry file.
    fn registry_file_text(&mut self, index: usize) -> String;

    /// Resolves a translated caption for a group identifier.
    fn translate_group_id(&mut self, id: &str) -> String;
}

/// Implements Ghidra function `FUN_01b99870` at `0x01B99870`.
///
/// Rebuilds the dynamic part of the navigator popup every time it opens.
///
/// Nothing at all happens without a selected item, so the popup keeps whatever
/// it showed last. Otherwise the builder works out the group the selection
/// currently lives in — the selected group itself, or the parent of a selected
/// component — and offers every group of the current file as a move target,
/// disabling only the group the selection is already in.
///
/// A selected component additionally gets one submenu per other registry file,
/// listing that file's cross-file group headers; a header naming a group
/// identifier is translated, every other header is offered verbatim. A selected
/// group gets no file submenus, because a group cannot move into another file
/// here.
///
/// Duplicate is enabled only for a component, and the designed separator only
/// becomes visible once the builder actually added something.
pub fn build_navigator_menu(host: &mut impl NavigatorPopupHost) -> Option<NavigatorMenuModel> {
    let selected = host.selected_item()?;
    let selected_is_group = host.is_group(selected);

    let current_group_name = if selected_is_group {
        host.item_name(selected)
    } else {
        host.parent_of(selected)
            .map(|parent| host.item_name(parent))
            .unwrap_or_default()
    };

    let groups = host
        .current_file_groups()
        .into_iter()
        .map(|group| MenuGroupCommand {
            enabled: group.name != current_group_name,
            caption: group.name,
            entry_index: group.entry_index,
        })
        .collect::<Vec<_>>();

    let mut files = Vec::new();
    if !selected_is_group {
        let names = host.registry_file_names();
        let current = host.selected_registry_file();
        for (index, name) in names.into_iter().enumerate() {
            if index == current {
                continue;
            }
            let text = host.registry_file_text(index);
            let groups = cross_file_group_headers(&text)
                .into_iter()
                .map(|header| {
                    if header.contains(GROUP_TAG) {
                        host.translate_group_id(&header)
                    } else {
                        header
                    }
                })
                .collect();
            files.push(MenuFileSubmenu {
                caption: name,
                groups,
            });
        }
    }

    let added = groups.len() + files.len();
    Some(NavigatorMenuModel {
        groups,
        files,
        duplicate_enabled: !selected_is_group,
        separator_visible: added > 0,
    })
}

pub trait NavigatorSelectionHost {
    fn selected_item(&mut self) -> Option<NavigatorItem>;

    /// Reports whether the pending property values of one item are acceptable.
    fn accepts_selection_change(&mut self, item: NavigatorItem) -> bool;
}

/// Implements Ghidra function `FUN_01b980d0` at `0x01B980D0`.
///
/// Answers the navigator's selection-changing question from the shared
/// validation check for the item being left, so an item with rejected property
/// values keeps the selection. The handler shows no message of its own and
/// changes no property value.
pub fn allow_navigator_selection_change(host: &mut impl NavigatorSelectionHost) -> bool {
    let Some(item) = host.selected_item() else {
        return false;
    };
    host.accepts_selection_change(item)
}

pub trait NavigatorIconHost {
    /// Assigns the navigator image list. `None` detaches it.
    fn set_tree_images(&mut self, images: Option<ImageList>);

    fn set_tree_indent(&mut self, indent: u32);
}

/// Implements Ghidra function `FUN_01b99300` at `0x01B99300`.
///
/// Toggles the navigator icons. Clearing the check box detaches the image list
/// and also narrows the tree indent, while checking it only re-attaches the
/// stored list.
///
/// That asymmetry is recovered, not an omission here: the handler never
/// restores the original indent, so a navigator whose icons are switched off
/// and back on keeps the narrow indent for the rest of the session.
pub fn toggle_navigator_icons(
    show_icons: bool,
    images: ImageList,
    host: &mut impl NavigatorIconHost,
) {
    if show_icons {
        host.set_tree_images(Some(images));
    } else {
        host.set_tree_images(None);
        host.set_tree_indent(ICONLESS_TREE_INDENT);
    }
}

pub trait ComponentBarHelpHost {
    /// Resolves the localized variant of a help file.
    fn resolve_localized_help(&mut self, base_path: &Path) -> PathBuf;

    fn show_help_context(&mut self, context: u32, help_file: &Path);
}

/// Implements Ghidra function `FUN_01b99790` at `0x01B99790`.
///
/// Opens the Edit Component Bar help topic. The handler builds the help path
/// from the help directory and the shared file name, resolves its localized
/// variant, and shows the fixed context. It reads no dialog state, so the
/// current selection and pending edits never change the topic.
pub fn open_component_bar_help(
    help_directory: &Path,
    host: &mut impl ComponentBarHelpHost,
) -> PathBuf {
    let base_path = help_directory.join(HELP_FILE);
    let resolved = host.resolve_localized_help(&base_path);
    host.show_help_context(HELP_CONTEXT, &resolved);
    resolved
}

pub trait NewFilePanelHost {
    fn set_new_file_panel_visible(&mut self, visible: bool);
}

/// Implements Ghidra function `FUN_01b9ace0` at `0x01B9ACE0`.
///
/// Hides the new-component-file panel. The recovered handler does nothing else:
/// it neither clears the typed file name nor restores the private/shared radio
/// choice, so reopening the panel shows whatever was last typed.
pub fn close_new_file_panel(host: &mut impl NewFilePanelHost) {
    host.set_new_file_panel_visible(false);
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Default)]
    struct EditHost {
        selected: Option<NavigatorItem>,
        applied: Vec<(NavigatorItem, bool)>,
        accepts: bool,
        asked: Vec<NavigatorItem>,
    }

    impl ComponentBarEditHost for EditHost {
        fn selected_item(&mut self) -> Option<NavigatorItem> {
            self.selected
        }

        fn apply_properties(&mut self, item: NavigatorItem, validate: bool) {
            self.applied.push((item, validate));
        }
    }

    impl NavigatorSelectionHost for EditHost {
        fn selected_item(&mut self) -> Option<NavigatorItem> {
            self.selected
        }

        fn accepts_selection_change(&mut self, item: NavigatorItem) -> bool {
            self.asked.push(item);
            self.accepts
        }
    }

    #[derive(Debug, Default)]
    struct IconHost {
        images: Vec<Option<ImageList>>,
        indents: Vec<u32>,
    }

    impl NavigatorIconHost for IconHost {
        fn set_tree_images(&mut self, images: Option<ImageList>) {
            self.images.push(images);
        }

        fn set_tree_indent(&mut self, indent: u32) {
            self.indents.push(indent);
        }
    }

    #[derive(Debug, Default)]
    struct HelpHost {
        resolved: Vec<PathBuf>,
        shown: Vec<(u32, PathBuf)>,
    }

    impl ComponentBarHelpHost for HelpHost {
        fn resolve_localized_help(&mut self, base_path: &Path) -> PathBuf {
            self.resolved.push(base_path.to_path_buf());
            base_path.with_extension("de.chm")
        }

        fn show_help_context(&mut self, context: u32, help_file: &Path) {
            self.shown.push((context, help_file.to_path_buf()));
        }
    }

    #[derive(Debug, Default)]
    struct PanelHost {
        visibility: Vec<bool>,
    }

    impl NewFilePanelHost for PanelHost {
        fn set_new_file_panel_visible(&mut self, visible: bool) {
            self.visibility.push(visible);
        }
    }

    #[test]
    fn both_property_edits_apply_the_panel_to_the_selected_item_with_validation() {
        let mut host = EditHost {
            selected: Some(NavigatorItem(4)),
            ..EditHost::default()
        };

        assert!(apply_edited_properties(&mut host));
        assert!(apply_edited_properties(&mut host));

        assert_eq!(
            host.applied,
            [(NavigatorItem(4), true), (NavigatorItem(4), true)]
        );
    }

    #[test]
    fn a_property_edit_without_a_selection_applies_nothing() {
        let mut host = EditHost::default();

        assert!(!apply_edited_properties(&mut host));

        assert!(host.applied.is_empty());
    }

    #[test]
    fn the_selection_gate_asks_the_shared_check_for_the_item_being_left() {
        let mut accepted = EditHost {
            selected: Some(NavigatorItem(9)),
            accepts: true,
            ..EditHost::default()
        };
        assert!(allow_navigator_selection_change(&mut accepted));
        assert_eq!(accepted.asked, [NavigatorItem(9)]);

        let mut rejected = EditHost {
            selected: Some(NavigatorItem(9)),
            accepts: false,
            ..EditHost::default()
        };
        assert!(!allow_navigator_selection_change(&mut rejected));

        let mut empty = EditHost::default();
        assert!(!allow_navigator_selection_change(&mut empty));
        assert!(empty.asked.is_empty());
    }

    #[test]
    fn hiding_the_icons_also_narrows_the_indent_but_showing_them_does_not_restore_it() {
        let mut host = IconHost::default();

        toggle_navigator_icons(false, ImageList(1), &mut host);
        toggle_navigator_icons(true, ImageList(1), &mut host);

        assert_eq!(host.images, [None, Some(ImageList(1))]);
        assert_eq!(host.indents, [ICONLESS_TREE_INDENT]);
    }

    #[test]
    fn help_resolves_the_localized_file_and_shows_the_fixed_context() {
        let mut host = HelpHost::default();

        let resolved = open_component_bar_help(Path::new(r"C:\TINA\HELP"), &mut host);

        assert_eq!(host.resolved, [Path::new(r"C:\TINA\HELP").join(HELP_FILE)]);
        assert_eq!(host.shown, [(HELP_CONTEXT, resolved)]);
    }

    #[test]
    fn closing_the_new_file_panel_only_hides_it() {
        let mut host = PanelHost::default();

        close_new_file_panel(&mut host);

        assert_eq!(host.visibility, [false]);
    }

    #[derive(Debug, Default)]
    struct PropertyHost {
        selected: Option<NavigatorItem>,
        applied: usize,
        icon_choice: i32,
        stored_icon: Option<i32>,
        names: Vec<String>,
    }

    impl ComponentBarEditHost for PropertyHost {
        fn selected_item(&mut self) -> Option<NavigatorItem> {
            self.selected
        }

        fn apply_properties(&mut self, _item: NavigatorItem, validate: bool) {
            assert!(validate);
            self.applied += 1;
        }
    }

    impl IconChoiceHost for PropertyHost {
        fn icon_choice_index(&mut self) -> i32 {
            self.icon_choice
        }

        fn set_stored_icon_index(&mut self, index: i32) {
            self.stored_icon = Some(index);
        }
    }

    impl ItemNameHost for PropertyHost {
        fn set_item_name(&mut self, name: &str) {
            self.names.push(name.to_owned());
        }
    }

    fn property_host() -> PropertyHost {
        PropertyHost {
            selected: Some(NavigatorItem(1)),
            ..PropertyHost::default()
        }
    }

    #[test]
    fn the_icon_choice_is_stored_before_the_property_apply_runs() {
        let mut host = PropertyHost {
            icon_choice: 5,
            ..property_host()
        };

        assert!(choose_navigator_icon(&mut host));

        assert_eq!(host.stored_icon, Some(5));
        assert_eq!(host.applied, 1);
    }

    #[test]
    fn a_library_part_is_stored_untrimmed_and_a_blank_choice_keeps_the_name() {
        let mut host = property_host();

        assert!(choose_library_macro_part(" R1 ", &mut host));
        assert!(choose_library_macro_part("   ", &mut host));

        assert_eq!(host.names, [" R1 ".to_owned()]);
        assert_eq!(host.applied, 2);
    }

    #[test]
    fn a_library_group_loses_exactly_one_character_at_each_end() {
        assert_eq!(undelimited_group_name("[Passives]"), "Passives");
        assert_eq!(undelimited_group_name("[]"), "");
        assert_eq!(undelimited_group_name("x"), "");
        assert_eq!(undelimited_group_name(""), "");

        let mut host = property_host();
        assert!(choose_library_macro_group("[Passives]", &mut host));
        assert!(choose_library_macro_group("  ", &mut host));

        assert_eq!(host.names, ["Passives".to_owned()]);
        assert_eq!(host.applied, 2);
    }

    #[derive(Debug, Default)]
    struct TabHost {
        widths: Vec<u32>,
    }

    impl PropertyTabHost for TabHost {
        fn set_property_control_width(&mut self, width: u32) {
            self.widths.push(width);
        }
    }

    #[test]
    fn every_property_tab_change_forces_the_same_control_width() {
        let mut host = TabHost::default();

        resize_property_control(&mut host);
        resize_property_control(&mut host);

        assert_eq!(
            host.widths,
            [PROPERTY_CONTROL_WIDTH, PROPERTY_CONTROL_WIDTH]
        );
    }

    #[derive(Debug, Default)]
    struct LoadHost {
        loads: Vec<Option<NavigatorItem>>,
    }

    impl NavigatorLoadHost for LoadHost {
        fn load_item_properties(&mut self, item: Option<NavigatorItem>) {
            self.loads.push(item);
        }
    }

    #[test]
    fn the_navigator_change_forwards_the_reported_node_including_none() {
        let mut host = LoadHost::default();

        load_selected_navigator_item(Some(NavigatorItem(3)), &mut host);
        load_selected_navigator_item(None, &mut host);

        assert_eq!(host.loads, [Some(NavigatorItem(3)), None]);
    }

    #[derive(Debug, Default)]
    struct ScrollHost {
        enabled: Vec<bool>,
        steps: Vec<ScrollDirection>,
    }

    impl NavigatorScrollHost for ScrollHost {
        fn set_scroll_timer_enabled(&mut self, enabled: bool) {
            self.enabled.push(enabled);
        }

        fn scroll_step(&mut self, direction: ScrollDirection) {
            self.steps.push(direction);
        }
    }

    #[test]
    fn ending_a_drag_stops_the_timer_without_clearing_the_direction() {
        let mut host = ScrollHost::default();

        end_navigator_drag(&mut host);
        tick_navigator_scroll(ScrollDirection(2), &mut host);
        tick_navigator_scroll(ScrollDirection(2), &mut host);

        assert_eq!(host.enabled, [false]);
        assert_eq!(host.steps, [ScrollDirection(2), ScrollDirection(2)]);
    }

    #[derive(Debug, Default)]
    struct HintHost {
        item: Option<usize>,
        lines: Vec<String>,
    }

    impl NavigatorHintHost for HintHost {
        fn navigator_item_at_cursor(&mut self) -> Option<usize> {
            self.item
        }

        fn registry_line(&mut self, index: usize) -> String {
            self.lines.get(index).cloned().unwrap_or_default()
        }
    }

    #[test]
    fn a_navigator_hint_over_an_item_shows_its_registry_line() {
        let mut host = HintHost {
            item: Some(1),
            lines: vec!["first".to_owned(), "id_component=R".to_owned()],
        };
        let mut request = HintRequest {
            over_navigator: true,
            text: "designed hint".to_owned(),
            timing: 0,
        };

        assert!(resolve_navigator_hint(&mut request, &mut host));

        assert_eq!(request.text, "id_component=R");
        assert_eq!(request.timing, NAVIGATOR_HINT_TIMING);
    }

    #[test]
    fn hints_for_other_controls_and_gaps_between_items_are_left_untouched() {
        let mut host = HintHost {
            item: Some(0),
            lines: vec!["first".to_owned()],
        };
        let mut other = HintRequest {
            over_navigator: false,
            text: "button hint".to_owned(),
            timing: 7,
        };
        assert!(!resolve_navigator_hint(&mut other, &mut host));
        assert_eq!(other.text, "button hint");
        assert_eq!(other.timing, 7);

        let mut empty_host = HintHost::default();
        let mut gap = HintRequest {
            over_navigator: true,
            text: "designed hint".to_owned(),
            timing: 7,
        };
        assert!(!resolve_navigator_hint(&mut gap, &mut empty_host));
        assert_eq!(gap.text, "designed hint");
        assert_eq!(gap.timing, 7);
    }

    #[derive(Debug, Default)]
    struct MenuHost {
        hit: Option<NavigatorItem>,
        selected: Option<NavigatorItem>,
        popups: Vec<ScreenPoint>,
    }

    impl NavigatorMenuHost for MenuHost {
        fn item_at(&mut self, _point: ClientPoint) -> Option<NavigatorItem> {
            self.hit
        }

        fn selected_item(&mut self) -> Option<NavigatorItem> {
            self.selected
        }

        fn client_to_screen(&mut self, point: ClientPoint) -> ScreenPoint {
            ScreenPoint {
                x: point.x + 10,
                y: point.y + 20,
            }
        }

        fn show_navigator_menu(&mut self, at: ScreenPoint) {
            self.popups.push(at);
        }
    }

    const CLICK: ClientPoint = ClientPoint { x: 40, y: 60 };

    #[test]
    fn the_navigator_popup_opens_only_on_the_already_selected_item() {
        let mut matching = MenuHost {
            hit: Some(NavigatorItem(2)),
            selected: Some(NavigatorItem(2)),
            ..MenuHost::default()
        };
        assert!(open_navigator_menu(
            MouseButton::Right,
            CLICK,
            &mut matching
        ));
        assert_eq!(matching.popups, [ScreenPoint { x: 50, y: 80 }]);

        let mut different = MenuHost {
            hit: Some(NavigatorItem(3)),
            selected: Some(NavigatorItem(2)),
            ..MenuHost::default()
        };
        assert!(!open_navigator_menu(
            MouseButton::Right,
            CLICK,
            &mut different
        ));
        assert!(different.popups.is_empty());

        let mut empty = MenuHost::default();
        assert!(!open_navigator_menu(MouseButton::Right, CLICK, &mut empty));
        assert!(empty.popups.is_empty());
    }

    #[test]
    fn other_mouse_buttons_never_open_the_navigator_popup() {
        let mut host = MenuHost {
            hit: Some(NavigatorItem(2)),
            selected: Some(NavigatorItem(2)),
            ..MenuHost::default()
        };

        assert!(!open_navigator_menu(MouseButton::Left, CLICK, &mut host));
        assert!(!open_navigator_menu(MouseButton::Middle, CLICK, &mut host));

        assert!(host.popups.is_empty());
    }

    #[derive(Debug, Default)]
    struct LabelEditHost {
        editing: bool,
        cancels: usize,
    }

    impl NavigatorEditHost for LabelEditHost {
        fn is_editing_label(&mut self) -> bool {
            self.editing
        }

        fn cancel_label_edit(&mut self) {
            self.cancels += 1;
            self.editing = false;
        }
    }

    #[test]
    fn escape_cancels_only_an_active_label_edit() {
        let mut editing = LabelEditHost {
            editing: true,
            cancels: 0,
        };
        assert!(cancel_navigator_label_edit(true, &mut editing));
        assert_eq!(editing.cancels, 1);
        assert!(!cancel_navigator_label_edit(true, &mut editing));

        let mut idle = LabelEditHost::default();
        assert!(!cancel_navigator_label_edit(true, &mut idle));
        assert_eq!(idle.cancels, 0);

        let mut other_key = LabelEditHost {
            editing: true,
            cancels: 0,
        };
        assert!(!cancel_navigator_label_edit(false, &mut other_key));
        assert_eq!(other_key.cancels, 0);
    }

    const SIZE: NavigatorClientSize = NavigatorClientSize {
        width: 200,
        height: 300,
    };

    #[test]
    fn a_drag_near_an_edge_starts_the_matching_scroll_direction() {
        assert_eq!(
            decide_drag_scroll(ClientPoint { x: 20, y: 5 }, SIZE, false),
            DragScrollDecision::Start(SCROLL_UP)
        );
        assert_eq!(
            decide_drag_scroll(ClientPoint { x: 20, y: 290 }, SIZE, false),
            DragScrollDecision::Start(SCROLL_DOWN)
        );
    }

    #[test]
    fn a_running_timer_is_left_alone_and_the_middle_stops_it() {
        assert_eq!(
            decide_drag_scroll(ClientPoint { x: 20, y: 5 }, SIZE, true),
            DragScrollDecision::Continue
        );
        assert_eq!(
            decide_drag_scroll(ClientPoint { x: 20, y: 150 }, SIZE, true),
            DragScrollDecision::Stop
        );
    }

    #[test]
    fn the_recovered_bounds_test_measures_the_height_against_the_horizontal_value() {
        // Well inside the navigator vertically, but the recovered comparison
        // rejects the point once its horizontal value reaches the height.
        assert_eq!(
            decide_drag_scroll(ClientPoint { x: 0, y: 150 }, SIZE, false),
            DragScrollDecision::Stop
        );
        assert_eq!(
            decide_drag_scroll(ClientPoint { x: 20, y: 0 }, SIZE, false),
            DragScrollDecision::Stop
        );
        let tall = NavigatorClientSize {
            width: 200,
            height: 50,
        };
        assert_eq!(
            decide_drag_scroll(ClientPoint { x: 60, y: 10 }, tall, false),
            DragScrollDecision::Stop
        );
    }

    #[derive(Debug, Default)]
    struct CommitHost {
        selected: Option<NavigatorItem>,
        accepts: bool,
        saves: bool,
        save_calls: usize,
    }

    impl ComponentBarCommitHost for CommitHost {
        fn selected_item(&mut self) -> Option<NavigatorItem> {
            self.selected
        }

        fn accepts_selection_change(&mut self, _item: NavigatorItem) -> bool {
            self.accepts
        }

        fn save_registry(&mut self) -> bool {
            self.save_calls += 1;
            self.saves
        }
    }

    #[test]
    fn accept_requires_a_valid_item_and_a_successful_save() {
        let mut ready = CommitHost {
            selected: Some(NavigatorItem(1)),
            accepts: true,
            saves: true,
            save_calls: 0,
        };
        assert!(accept_component_bar(&mut ready));
        assert_eq!(ready.save_calls, 1);

        let mut invalid = CommitHost {
            selected: Some(NavigatorItem(1)),
            ..CommitHost::default()
        };
        assert!(!accept_component_bar(&mut invalid));
        assert_eq!(invalid.save_calls, 0);

        let mut failing_save = CommitHost {
            selected: Some(NavigatorItem(1)),
            accepts: true,
            ..CommitHost::default()
        };
        assert!(!accept_component_bar(&mut failing_save));
        assert_eq!(failing_save.save_calls, 1);
    }

    #[derive(Debug, Default)]
    struct CloseHost {
        confirm: bool,
        asked: Vec<String>,
    }

    impl ComponentBarCloseHost for CloseHost {
        fn localize(&mut self, message_id: u16) -> String {
            format!("message:{message_id:#06x}")
        }

        fn confirm_discard(&mut self, message: &str) -> bool {
            self.asked.push(message.to_owned());
            self.confirm
        }
    }

    #[test]
    fn an_accepted_dialog_closes_without_the_discard_confirmation() {
        let mut host = CloseHost::default();

        assert!(query_component_bar_close(ACCEPTED_MODAL_RESULT, &mut host));

        assert!(host.asked.is_empty());
    }

    #[test]
    fn every_other_close_asks_and_obeys_the_answer() {
        let mut yes = CloseHost {
            confirm: true,
            asked: Vec::new(),
        };
        assert!(query_component_bar_close(0, &mut yes));
        assert_eq!(
            yes.asked,
            [format!("message:{DISCARD_CHANGES_MESSAGE_ID:#06x}")]
        );

        let mut no = CloseHost::default();
        assert!(!query_component_bar_close(2, &mut no));
        assert_eq!(no.asked.len(), 1);
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum ResetCall {
        Panel(bool),
        Busy(bool),
        ReloadIcons,
        Choices(Vec<String>),
        Pending,
        ReloadFile(usize),
        Navigator,
    }

    #[derive(Debug, Default)]
    struct ResetHost {
        calls: Vec<ResetCall>,
        images: Option<IconImageList>,
        icons: usize,
        files: usize,
        selected_file: usize,
    }

    impl ComponentBarResetHost for ResetHost {
        fn set_new_file_panel_visible(&mut self, visible: bool) {
            self.calls.push(ResetCall::Panel(visible));
        }

        fn set_busy_cursor(&mut self, busy: bool) {
            self.calls.push(ResetCall::Busy(busy));
        }

        fn reload_icon_images(&mut self) -> Option<IconImageList> {
            self.calls.push(ResetCall::ReloadIcons);
            self.images
        }

        fn icon_count(&mut self, _images: IconImageList) -> usize {
            self.icons
        }

        fn set_icon_choices(&mut self, choices: Vec<String>) {
            self.calls.push(ResetCall::Choices(choices));
        }

        fn rebuild_pending_state(&mut self) {
            self.calls.push(ResetCall::Pending);
        }

        fn registry_file_count(&mut self) -> usize {
            self.files
        }

        fn selected_registry_file(&mut self) -> usize {
            self.selected_file
        }

        fn reload_registry_file(&mut self, index: usize) {
            self.calls.push(ResetCall::ReloadFile(index));
        }

        fn rebuild_navigator(&mut self) {
            self.calls.push(ResetCall::Navigator);
        }
    }

    #[test]
    fn reset_reloads_icons_and_the_current_file_between_busy_cursor_calls() {
        let mut host = ResetHost {
            images: Some(IconImageList(1)),
            icons: 3,
            files: 2,
            selected_file: 1,
            ..ResetHost::default()
        };

        reset_component_bar(true, &mut host);

        assert_eq!(
            host.calls,
            [
                ResetCall::Panel(false),
                ResetCall::Busy(true),
                ResetCall::ReloadIcons,
                ResetCall::Choices(vec!["0".to_owned(), "1".to_owned(), "2".to_owned()]),
                ResetCall::Pending,
                ResetCall::ReloadFile(1),
                ResetCall::Navigator,
                ResetCall::Busy(false),
            ]
        );
    }

    #[derive(Debug, Default)]
    struct DropHost {
        selected: Option<NavigatorItem>,
        target: Option<NavigatorItem>,
        flags: u32,
        moves: Vec<(NavigatorItem, Option<NavigatorItem>, DropPlacement)>,
    }

    impl NavigatorDropHost for DropHost {
        fn selected_item(&mut self) -> Option<NavigatorItem> {
            self.selected
        }

        fn item_at(&mut self, _point: ClientPoint) -> Option<NavigatorItem> {
            self.target
        }

        fn hit_test_flags(&mut self, _point: ClientPoint) -> u32 {
            self.flags
        }

        fn move_item(
            &mut self,
            source: NavigatorItem,
            target: Option<NavigatorItem>,
            placement: DropPlacement,
        ) {
            self.moves.push((source, target, placement));
        }
    }

    #[test]
    fn the_right_hand_hit_test_bit_selects_insertion_after_the_target() {
        let mut after = DropHost {
            selected: Some(NavigatorItem(1)),
            target: Some(NavigatorItem(2)),
            flags: HIT_TEST_RIGHT_OF_ITEM | 4,
            ..DropHost::default()
        };
        assert!(drop_navigator_item(CLICK, &mut after));
        assert_eq!(
            after.moves,
            [(
                NavigatorItem(1),
                Some(NavigatorItem(2)),
                DropPlacement::After
            )]
        );

        let mut before = DropHost {
            selected: Some(NavigatorItem(1)),
            target: Some(NavigatorItem(2)),
            flags: 4,
            ..DropHost::default()
        };
        assert!(drop_navigator_item(CLICK, &mut before));
        assert_eq!(
            before.moves,
            [(
                NavigatorItem(1),
                Some(NavigatorItem(2)),
                DropPlacement::Before
            )]
        );
    }

    #[test]
    fn a_drop_without_a_dragged_item_moves_nothing() {
        let mut host = DropHost {
            target: Some(NavigatorItem(2)),
            ..DropHost::default()
        };

        assert!(!drop_navigator_item(CLICK, &mut host));

        assert!(host.moves.is_empty());
    }

    #[test]
    fn the_create_file_command_needs_an_open_panel_and_a_name_with_content() {
        assert!(!refresh_idle_commands(false, "bar.ini", 0).create_file_enabled);
        assert!(!refresh_idle_commands(true, "   ", 0).create_file_enabled);
        assert!(refresh_idle_commands(true, " bar.ini ", 0).create_file_enabled);
    }

    #[test]
    fn the_two_registry_file_commands_are_complementary() {
        let first = refresh_idle_commands(false, "", 0);
        assert!(first.first_file_command_enabled);
        assert!(!first.later_file_command_enabled);

        let later = refresh_idle_commands(false, "", 3);
        assert!(!later.first_file_command_enabled);
        assert!(later.later_file_command_enabled);
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum GroupCall {
        Panel(bool),
        Append,
        Rebuild(NavigatorItem),
        Modified(i32),
    }

    #[derive(Debug, Default)]
    struct GroupHost {
        selected: Option<NavigatorItem>,
        accepts: bool,
        file: i32,
        calls: Vec<GroupCall>,
    }

    impl AddGroupHost for GroupHost {
        fn selected_item(&mut self) -> Option<NavigatorItem> {
            self.selected
        }

        fn accepts_selection_change(&mut self, _item: NavigatorItem) -> bool {
            self.accepts
        }

        fn set_new_file_panel_visible(&mut self, visible: bool) {
            self.calls.push(GroupCall::Panel(visible));
        }

        fn append_group_entry(&mut self) -> NavigatorItem {
            self.calls.push(GroupCall::Append);
            NavigatorItem(77)
        }

        fn rebuild_navigator_selecting(&mut self, item: NavigatorItem) {
            self.calls.push(GroupCall::Rebuild(item));
        }

        fn selected_registry_file(&mut self) -> i32 {
            self.file
        }

        fn mark_registry_file_modified(&mut self, index: i32) {
            self.calls.push(GroupCall::Modified(index));
        }
    }

    #[test]
    fn adding_a_group_hides_the_panel_appends_and_selects_the_new_entry() {
        let mut host = GroupHost {
            selected: Some(NavigatorItem(1)),
            accepts: true,
            file: 2,
            calls: Vec::new(),
        };

        assert!(add_component_group(&mut host));

        assert_eq!(
            host.calls,
            [
                GroupCall::Panel(false),
                GroupCall::Append,
                GroupCall::Rebuild(NavigatorItem(77)),
                GroupCall::Modified(2),
            ]
        );
    }

    #[test]
    fn a_rejected_selection_stops_the_add_before_anything_changes() {
        let mut host = GroupHost {
            selected: Some(NavigatorItem(1)),
            ..GroupHost::default()
        };

        assert!(!add_component_group(&mut host));

        assert!(host.calls.is_empty());
    }

    #[test]
    fn adding_a_group_with_nothing_selected_skips_validation_entirely() {
        let mut host = GroupHost::default();

        assert!(add_component_group(&mut host));

        assert_eq!(
            host.calls,
            [
                GroupCall::Panel(false),
                GroupCall::Append,
                GroupCall::Rebuild(NavigatorItem(77)),
                GroupCall::Modified(0),
            ]
        );
    }

    #[derive(Debug, Default)]
    struct BrowseHost {
        chosen: Option<PathBuf>,
        macro_name: String,
        files: Vec<PathBuf>,
        names: Vec<String>,
        applied: usize,
    }

    impl ComponentBarEditHost for BrowseHost {
        fn selected_item(&mut self) -> Option<NavigatorItem> {
            Some(NavigatorItem(1))
        }

        fn apply_properties(&mut self, _item: NavigatorItem, _validate: bool) {
            self.applied += 1;
        }
    }

    impl FileMacroBrowseHost for BrowseHost {
        fn choose_macro_file(&mut self) -> Option<PathBuf> {
            self.chosen.clone()
        }

        fn set_macro_file_text(&mut self, path: &Path) {
            self.files.push(path.to_path_buf());
        }

        fn read_macro_name(&mut self, _path: &Path) -> String {
            self.macro_name.clone()
        }

        fn set_item_name(&mut self, name: &str) {
            self.names.push(name.to_owned());
        }
    }

    #[test]
    fn browsing_adopts_the_file_and_a_macro_name_with_content() {
        let mut host = BrowseHost {
            chosen: Some(PathBuf::from("amp.tsm")),
            macro_name: "Amplifier".to_owned(),
            ..BrowseHost::default()
        };

        assert!(browse_file_macro(&mut host));

        assert_eq!(host.files, [PathBuf::from("amp.tsm")]);
        assert_eq!(host.names, ["Amplifier".to_owned()]);
        assert_eq!(host.applied, 1);
    }

    #[test]
    fn a_blank_macro_name_keeps_the_item_name_and_cancel_changes_nothing() {
        let mut blank = BrowseHost {
            chosen: Some(PathBuf::from("amp.tsm")),
            macro_name: "  ".to_owned(),
            ..BrowseHost::default()
        };
        assert!(browse_file_macro(&mut blank));
        assert!(blank.names.is_empty());
        assert_eq!(blank.applied, 1);

        let mut cancelled = BrowseHost::default();
        assert!(!browse_file_macro(&mut cancelled));
        assert!(cancelled.files.is_empty());
        assert_eq!(cancelled.applied, 0);
    }

    #[test]
    fn the_new_file_panel_opens_and_closes_without_touching_its_contents() {
        let mut host = PanelHost::default();

        open_new_file_panel(&mut host);
        close_new_file_panel(&mut host);

        assert_eq!(host.visibility, [true, false]);
    }

    #[derive(Debug, Default)]
    struct HintWindowHost {
        hides: usize,
    }

    impl FileNameHintHost for HintWindowHost {
        fn hide_file_name_hint(&mut self) {
            self.hides += 1;
        }
    }

    #[test]
    fn any_key_press_hides_the_invalid_character_balloon() {
        let mut host = HintWindowHost::default();

        hide_new_file_name_hint(&mut host);
        hide_new_file_name_hint(&mut host);

        assert_eq!(host.hides, 2);
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum DeleteCall {
        Panel(bool),
        Confirm(String),
        Delete(NavigatorItem),
    }

    #[derive(Debug, Default)]
    struct DeleteHost {
        selected: Option<NavigatorItem>,
        protected: bool,
        confirm: bool,
        calls: Vec<DeleteCall>,
    }

    impl DeleteItemHost for DeleteHost {
        fn selected_item(&mut self) -> Option<NavigatorItem> {
            self.selected
        }

        fn is_protected(&mut self, _item: NavigatorItem) -> bool {
            self.protected
        }

        fn set_new_file_panel_visible(&mut self, visible: bool) {
            self.calls.push(DeleteCall::Panel(visible));
        }

        fn localize(&mut self, message_id: u16) -> String {
            format!("message:{message_id:#06x}")
        }

        fn confirm(&mut self, message: &str) -> bool {
            self.calls.push(DeleteCall::Confirm(message.to_owned()));
            self.confirm
        }

        fn delete_item(&mut self, item: NavigatorItem) {
            self.calls.push(DeleteCall::Delete(item));
        }
    }

    #[test]
    fn deleting_confirms_first_and_removes_only_on_yes() {
        let mut yes = DeleteHost {
            selected: Some(NavigatorItem(8)),
            confirm: true,
            ..DeleteHost::default()
        };
        assert!(delete_navigator_item(&mut yes));
        assert_eq!(
            yes.calls,
            [
                DeleteCall::Panel(false),
                DeleteCall::Confirm(format!("message:{DELETE_ITEM_MESSAGE_ID:#06x}")),
                DeleteCall::Delete(NavigatorItem(8)),
            ]
        );

        let mut no = DeleteHost {
            selected: Some(NavigatorItem(8)),
            ..DeleteHost::default()
        };
        assert!(!delete_navigator_item(&mut no));
        assert_eq!(no.calls.len(), 2);
    }

    #[test]
    fn a_protected_item_is_a_silent_no_op_that_leaves_the_panel_alone() {
        let mut host = DeleteHost {
            selected: Some(NavigatorItem(8)),
            protected: true,
            confirm: true,
            calls: Vec::new(),
        };

        assert!(!delete_navigator_item(&mut host));

        assert!(host.calls.is_empty());
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum DefaultsCall {
        Restore(PathBuf),
        Reset,
    }

    #[derive(Debug, Default)]
    struct DefaultsHost {
        selected: Option<NavigatorItem>,
        accepts: bool,
        calls: Vec<DefaultsCall>,
    }

    impl FactoryDefaultsHost for DefaultsHost {
        fn selected_item(&mut self) -> Option<NavigatorItem> {
            self.selected
        }

        fn accepts_selection_change(&mut self, _item: NavigatorItem) -> bool {
            self.accepts
        }

        fn restore_factory_registry(&mut self, backup: &Path) {
            self.calls.push(DefaultsCall::Restore(backup.to_path_buf()));
        }

        fn reset_without_pending_rebuild(&mut self) {
            self.calls.push(DefaultsCall::Reset);
        }
    }

    #[test]
    fn factory_defaults_restores_the_backup_then_resets_without_the_pending_rebuild() {
        let mut host = DefaultsHost {
            selected: Some(NavigatorItem(1)),
            accepts: true,
            calls: Vec::new(),
        };

        assert!(restore_factory_defaults(
            Path::new(r"C:\ProgramData\TINA"),
            &mut host
        ));

        assert_eq!(
            host.calls,
            [
                DefaultsCall::Restore(PathBuf::from(r"C:\ProgramData\TINA\COMPREGY.bak")),
                DefaultsCall::Reset,
            ]
        );
    }

    #[test]
    fn factory_defaults_stops_on_a_rejected_selection() {
        let mut host = DefaultsHost {
            selected: Some(NavigatorItem(1)),
            ..DefaultsHost::default()
        };

        assert!(!restore_factory_defaults(Path::new("."), &mut host));

        assert!(host.calls.is_empty());
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum FileCall {
        Confirm(String),
        Delete(i32),
        Remove(i32),
        Select(i32),
        Reset,
    }

    #[derive(Debug, Default)]
    struct FileHost {
        selected: i32,
        names: Vec<String>,
        confirm: bool,
        calls: Vec<FileCall>,
    }

    impl RegistryFileHost for FileHost {
        fn selected_registry_file(&mut self) -> i32 {
            self.selected
        }

        fn registry_file_name(&mut self, index: i32) -> String {
            self.names
                .get(usize::try_from(index).unwrap_or(0))
                .cloned()
                .unwrap_or_default()
        }

        fn confirm(&mut self, message: &str) -> bool {
            self.calls.push(FileCall::Confirm(message.to_owned()));
            self.confirm
        }

        fn delete_registry_file(&mut self, index: i32) {
            self.calls.push(FileCall::Delete(index));
        }

        fn remove_registry_file_entry(&mut self, index: i32) {
            self.calls.push(FileCall::Remove(index));
        }

        fn select_registry_file(&mut self, index: i32) {
            self.calls.push(FileCall::Select(index));
        }

        fn reset(&mut self) {
            self.calls.push(FileCall::Reset);
        }
    }

    #[test]
    fn deleting_a_registry_file_names_it_and_selects_the_previous_one() {
        let mut host = FileHost {
            selected: 2,
            names: vec!["core".to_owned(), "extra".to_owned(), "mine".to_owned()],
            confirm: true,
            calls: Vec::new(),
        };

        assert!(delete_registry_file(&mut host));

        assert_eq!(
            host.calls,
            [
                FileCall::Confirm("mine will be deleted. Continue?".to_owned()),
                FileCall::Delete(2),
                FileCall::Remove(2),
                FileCall::Select(1),
                FileCall::Reset,
            ]
        );
    }

    #[test]
    fn the_first_registry_file_can_never_be_deleted_and_no_changes_nothing() {
        let mut first = FileHost {
            selected: 0,
            confirm: true,
            ..FileHost::default()
        };
        assert!(!delete_registry_file(&mut first));
        assert!(first.calls.is_empty());

        let mut declined = FileHost {
            selected: 1,
            names: vec!["core".to_owned(), "extra".to_owned()],
            ..FileHost::default()
        };
        assert!(!delete_registry_file(&mut declined));
        assert_eq!(declined.calls.len(), 1);
    }

    #[test]
    fn switching_registry_files_runs_the_shared_reset_path() {
        let mut host = FileHost::default();

        change_registry_file(&mut host);

        assert_eq!(host.calls, [FileCall::Reset]);
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum TeardownCall {
        HideHint,
        ReleaseHint,
        ReleaseRegistry,
        Busy(bool),
        Rebuild,
    }

    #[derive(Debug, Default)]
    struct TeardownHost {
        calls: Vec<TeardownCall>,
    }

    impl ComponentBarTeardownHost for TeardownHost {
        fn hide_file_name_hint(&mut self) {
            self.calls.push(TeardownCall::HideHint);
        }

        fn release_hint_window(&mut self) {
            self.calls.push(TeardownCall::ReleaseHint);
        }

        fn release_registry_objects(&mut self) {
            self.calls.push(TeardownCall::ReleaseRegistry);
        }

        fn set_busy_cursor(&mut self, busy: bool) {
            self.calls.push(TeardownCall::Busy(busy));
        }

        fn rebuild_component_bar(&mut self) {
            self.calls.push(TeardownCall::Rebuild);
        }
    }

    #[test]
    fn destroy_releases_everything_then_rebuilds_the_live_bar() {
        let mut host = TeardownHost::default();

        destroy_component_bar_editor(&mut host);

        assert_eq!(
            host.calls,
            [
                TeardownCall::HideHint,
                TeardownCall::ReleaseHint,
                TeardownCall::ReleaseRegistry,
                TeardownCall::Busy(true),
                TeardownCall::Rebuild,
                TeardownCall::Busy(false),
            ]
        );
    }

    #[test]
    fn the_duplicate_command_refuses_a_group_and_the_button_needs_shift() {
        let item = Some(NavigatorItem(5));

        assert_eq!(
            plan_component_add(AddCommandSource::DuplicateMenuItem, item, true, true, false),
            AddPlan::Blocked
        );
        assert_eq!(
            plan_component_add(
                AddCommandSource::DuplicateMenuItem,
                item,
                false,
                true,
                false
            ),
            AddPlan::BesideAsCopy(NavigatorItem(5))
        );
        assert_eq!(
            plan_component_add(AddCommandSource::ToolbarButton, item, false, true, false),
            AddPlan::BesideWithDefaults(NavigatorItem(5))
        );
        assert_eq!(
            plan_component_add(AddCommandSource::ToolbarButton, item, false, true, true),
            AddPlan::BesideAsCopy(NavigatorItem(5))
        );
        assert_eq!(
            plan_component_add(AddCommandSource::ToolbarButton, item, true, true, true),
            AddPlan::IntoGroup(NavigatorItem(5))
        );
    }

    #[test]
    fn an_empty_or_rejected_selection_blocks_every_add_source() {
        for source in [
            AddCommandSource::ToolbarButton,
            AddCommandSource::DuplicateMenuItem,
        ] {
            assert_eq!(
                plan_component_add(source, None, false, true, true),
                AddPlan::Blocked
            );
            assert_eq!(
                plan_component_add(source, Some(NavigatorItem(1)), false, false, true),
                AddPlan::Blocked
            );
        }
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum AddCall {
        Panel(bool),
        Insert(NavigatorItem, bool, ComponentEntry),
        Icon(NavigatorItem, String),
        Rebuild(NavigatorItem),
        Modified(i32),
    }

    #[derive(Debug, Default)]
    struct AddHost {
        selected: Option<NavigatorItem>,
        is_group: bool,
        accepts: bool,
        shift: bool,
        file: i32,
        calls: Vec<AddCall>,
    }

    impl AddComponentHost for AddHost {
        fn selected_item(&mut self) -> Option<NavigatorItem> {
            self.selected
        }

        fn accepts_selection_change(&mut self, _item: NavigatorItem) -> bool {
            self.accepts
        }

        fn is_group(&mut self, _item: NavigatorItem) -> bool {
            self.is_group
        }

        fn shift_held(&mut self) -> bool {
            self.shift
        }

        fn set_new_file_panel_visible(&mut self, visible: bool) {
            self.calls.push(AddCall::Panel(visible));
        }

        fn entry_of(&mut self, _item: NavigatorItem) -> ComponentEntry {
            ComponentEntry {
                name: "Resistor".to_owned(),
                value: "R".to_owned(),
                flag: false,
            }
        }

        fn default_component_entry(&mut self) -> ComponentEntry {
            ComponentEntry {
                name: "New".to_owned(),
                value: "New".to_owned(),
                flag: true,
            }
        }

        fn insert_entry(
            &mut self,
            anchor: NavigatorItem,
            inside: bool,
            entry: ComponentEntry,
        ) -> NavigatorItem {
            self.calls.push(AddCall::Insert(anchor, inside, entry));
            NavigatorItem(99)
        }

        fn assign_icon(&mut self, item: NavigatorItem, name: &str) {
            self.calls.push(AddCall::Icon(item, name.to_owned()));
        }

        fn rebuild_navigator_selecting(&mut self, item: NavigatorItem) {
            self.calls.push(AddCall::Rebuild(item));
        }

        fn selected_registry_file(&mut self) -> i32 {
            self.file
        }

        fn mark_registry_file_modified(&mut self, index: i32) {
            self.calls.push(AddCall::Modified(index));
        }
    }

    #[test]
    fn a_duplicate_copies_the_selected_entry_beside_it() {
        let mut host = AddHost {
            selected: Some(NavigatorItem(5)),
            accepts: true,
            shift: true,
            file: 1,
            ..AddHost::default()
        };

        assert!(add_component(AddCommandSource::ToolbarButton, &mut host));

        assert_eq!(
            host.calls,
            [
                AddCall::Panel(false),
                AddCall::Insert(
                    NavigatorItem(5),
                    false,
                    ComponentEntry {
                        name: "Resistor".to_owned(),
                        value: "R".to_owned(),
                        flag: false,
                    }
                ),
                AddCall::Icon(NavigatorItem(99), "Resistor".to_owned()),
                AddCall::Rebuild(NavigatorItem(99)),
                AddCall::Modified(1),
            ]
        );
    }

    #[test]
    fn a_group_receives_a_fresh_default_entry_inside_it() {
        let mut host = AddHost {
            selected: Some(NavigatorItem(5)),
            is_group: true,
            accepts: true,
            ..AddHost::default()
        };

        assert!(add_component(AddCommandSource::ToolbarButton, &mut host));

        assert!(host.calls.contains(&AddCall::Insert(
            NavigatorItem(5),
            true,
            ComponentEntry {
                name: "New".to_owned(),
                value: "New".to_owned(),
                flag: true,
            }
        )));
    }

    #[test]
    fn a_blocked_add_leaves_even_the_new_file_panel_alone() {
        let mut host = AddHost {
            selected: Some(NavigatorItem(5)),
            is_group: true,
            accepts: true,
            ..AddHost::default()
        };

        assert!(!add_component(
            AddCommandSource::DuplicateMenuItem,
            &mut host
        ));

        assert!(host.calls.is_empty());
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum CreateCall {
        Panel(bool),
        AddTab(String),
        Select(i32),
        Register(PathBuf),
        Modified(i32),
        ClearName,
        Tabs(bool),
        Reset,
    }

    #[derive(Debug, Default)]
    struct CreateHost {
        typed: String,
        existing: Option<i32>,
        private: bool,
        calls: Vec<CreateCall>,
    }

    impl CreateRegistryFileHost for CreateHost {
        fn set_new_file_panel_visible(&mut self, visible: bool) {
            self.calls.push(CreateCall::Panel(visible));
        }

        fn typed_file_name(&mut self) -> String {
            self.typed.clone()
        }

        fn registry_file_index(&mut self, _name: &str) -> Option<i32> {
            self.existing
        }

        fn add_registry_file_tab(&mut self, name: &str) -> i32 {
            self.calls.push(CreateCall::AddTab(name.to_owned()));
            3
        }

        fn select_registry_file(&mut self, index: i32) {
            self.calls.push(CreateCall::Select(index));
        }

        fn private_selected(&mut self) -> bool {
            self.private
        }

        fn register_empty_registry(&mut self, path: &Path) {
            self.calls.push(CreateCall::Register(path.to_path_buf()));
        }

        fn mark_registry_file_modified(&mut self, index: i32) {
            self.calls.push(CreateCall::Modified(index));
        }

        fn clear_typed_file_name(&mut self) {
            self.calls.push(CreateCall::ClearName);
        }

        fn set_registry_tabs_visible(&mut self, visible: bool) {
            self.calls.push(CreateCall::Tabs(visible));
        }

        fn reset(&mut self) {
            self.calls.push(CreateCall::Reset);
        }
    }

    #[test]
    fn a_new_registry_file_lands_in_the_directory_the_radio_selects() {
        let mut private_host = CreateHost {
            typed: "mine".to_owned(),
            private: true,
            ..CreateHost::default()
        };
        assert!(create_registry_file(
            Path::new(r"C:\Private"),
            Path::new(r"C:\Shared"),
            &mut private_host
        ));
        assert!(
            private_host
                .calls
                .contains(&CreateCall::Register(PathBuf::from(r"C:\Private\mine.tcr")))
        );

        let mut shared_host = CreateHost {
            typed: "ours".to_owned(),
            ..CreateHost::default()
        };
        assert!(create_registry_file(
            Path::new(r"C:\Private"),
            Path::new(r"C:\Shared"),
            &mut shared_host
        ));
        assert!(
            shared_host
                .calls
                .contains(&CreateCall::Register(PathBuf::from(r"C:\Shared\ours.tcr")))
        );
    }

    #[test]
    fn a_duplicate_file_name_is_skipped_silently_but_still_closes_the_panel() {
        let mut host = CreateHost {
            typed: "mine".to_owned(),
            existing: Some(1),
            ..CreateHost::default()
        };

        assert!(!create_registry_file(
            Path::new(r"C:\Private"),
            Path::new(r"C:\Shared"),
            &mut host
        ));

        assert_eq!(
            host.calls,
            [
                CreateCall::Panel(false),
                CreateCall::ClearName,
                CreateCall::Tabs(true),
                CreateCall::Reset,
            ]
        );
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum DrawCall {
        Background(DrawRect),
        Icon(i32, i32, i32, bool),
    }

    #[derive(Debug, Default)]
    struct DrawHost {
        calls: Vec<DrawCall>,
    }

    impl IconDrawHost for DrawHost {
        fn fill_background(&mut self, rect: DrawRect) {
            self.calls.push(DrawCall::Background(rect));
        }

        fn draw_icon(&mut self, index: i32, x: i32, y: i32, transparent: bool) {
            self.calls.push(DrawCall::Icon(index, x, y, transparent));
        }
    }

    #[test]
    fn an_icon_row_paints_the_background_then_the_icon_inset_by_one_pixel() {
        let mut host = DrawHost::default();
        let rect = DrawRect {
            left: 4,
            top: 20,
            right: 40,
            bottom: 36,
        };

        draw_icon_combo_item(7, rect, &mut host);

        assert_eq!(
            host.calls,
            [DrawCall::Background(rect), DrawCall::Icon(7, 5, 21, true)]
        );
    }

    fn entry(raw: &str, value: &str, keep_raw: bool, tag: &str) -> RegistryEntry {
        RegistryEntry {
            raw: raw.to_owned(),
            value: value.to_owned(),
            keep_raw,
            tag: tag.to_owned(),
        }
    }

    #[test]
    fn the_serializer_writes_the_header_then_one_line_per_entry() {
        let lines = serialize_registry(&[entry("; note", "ignored", false, "comment")]);

        assert_eq!(
            lines,
            [
                REGISTRY_HEADER_LINES[0].to_owned(),
                REGISTRY_HEADER_LINES[1].to_owned(),
                REGISTRY_HEADER_LINES[2].to_owned(),
                "; note".to_owned(),
            ]
        );
    }

    #[test]
    fn a_section_header_entry_gets_a_blank_line_before_it() {
        let lines = serialize_registry(&[
            entry("id_group=A", "id_group=Edited", false, GROUP_TAG),
            entry("[Passives]", "ignored", false, "section"),
        ]);

        assert_eq!(&lines[3..], ["id_group=Edited", "", "[Passives]"]);
    }

    #[test]
    fn only_tagged_entries_without_the_keep_raw_flag_write_their_edited_value() {
        let lines = serialize_registry(&[
            entry("id_group=A", "id_group=Edited", false, GROUP_TAG),
            entry("id_component=R", "id_component=Edited", true, COMPONENT_TAG),
            entry("other=1", "other=Edited", false, "other"),
        ]);

        assert_eq!(
            &lines[3..],
            ["id_group=Edited", "id_component=R", "other=1"]
        );
    }

    #[derive(Debug, Default)]
    struct KeyHost {
        shown: Vec<String>,
    }

    impl FileNameKeyHost for KeyHost {
        fn localize(&mut self, message_id: u16) -> String {
            format!("message:{message_id:#06x}")
        }

        fn show_file_name_hint(&mut self, message: &str) {
            self.shown.push(message.to_owned());
        }
    }

    #[test]
    fn a_rejected_character_is_swallowed_and_named_in_the_balloon() {
        let mut host = KeyHost::default();

        assert!(reject_invalid_file_name_key('?', r#"\/?"<>|"#, &mut host));

        assert_eq!(
            host.shown,
            [format!(
                "message:{INVALID_FILE_NAME_MESSAGE_ID:#06x}{INVALID_FILE_NAME_CHARACTER_LIST}"
            )]
        );
    }

    #[test]
    fn an_accepted_character_passes_through_and_shows_nothing() {
        let mut host = KeyHost::default();

        assert!(!reject_invalid_file_name_key('a', r#"\/?"<>|"#, &mut host));

        assert!(host.shown.is_empty());
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum CreateStep {
        Blend(u8),
        Hint,
        Help(u32),
        Lists,
        Load(usize, PathBuf),
        Tab(String),
        TabsVisible(bool),
        Select(i32),
        Reset,
        Icons,
        Parts(String),
        Groups,
        Group(i32),
        NoDoubleBuffer,
    }

    #[derive(Debug, Default)]
    struct CreateSessionHost {
        files: Vec<PathBuf>,
        steps: Vec<CreateStep>,
    }

    impl ComponentBarCreateHost for CreateSessionHost {
        fn localize(&mut self, message_id: u16) -> String {
            format!("m{message_id:#06x}")
        }

        fn blend_form_colors(&mut self, weight: u8) {
            self.steps.push(CreateStep::Blend(weight));
        }

        fn create_hint_window(&mut self) {
            self.steps.push(CreateStep::Hint);
        }

        fn set_help_context(&mut self, context: u32) {
            self.steps.push(CreateStep::Help(context));
        }

        fn create_private_lists(&mut self) {
            self.steps.push(CreateStep::Lists);
        }

        fn registry_files(&mut self) -> Vec<PathBuf> {
            self.files.clone()
        }

        fn load_registry_file(&mut self, index: usize, path: &Path) {
            self.steps.push(CreateStep::Load(index, path.to_path_buf()));
        }

        fn add_registry_file_tab(&mut self, name: &str) {
            self.steps.push(CreateStep::Tab(name.to_owned()));
        }

        fn set_registry_tabs_visible(&mut self, visible: bool) {
            self.steps.push(CreateStep::TabsVisible(visible));
        }

        fn select_registry_file(&mut self, index: i32) {
            self.steps.push(CreateStep::Select(index));
        }

        fn reset(&mut self) {
            self.steps.push(CreateStep::Reset);
        }

        fn apply_navigator_icon_setting(&mut self) {
            self.steps.push(CreateStep::Icons);
        }

        fn fill_library_part_choices(&mut self, all_entry: &str) {
            self.steps.push(CreateStep::Parts(all_entry.to_owned()));
        }

        fn fill_library_group_choices(&mut self) {
            self.steps.push(CreateStep::Groups);
        }

        fn select_library_group(&mut self, index: i32) {
            self.steps.push(CreateStep::Group(index));
        }

        fn disable_double_buffering(&mut self) {
            self.steps.push(CreateStep::NoDoubleBuffer);
        }
    }

    #[test]
    fn create_builds_the_three_templates_with_their_recovered_tails() {
        let mut host = CreateSessionHost::default();

        let templates = create_component_bar_editor(&mut host);

        assert_eq!(
            templates,
            ComponentBarTemplates {
                new_component: format!("m{NEW_COMPONENT_MESSAGE_ID:#06x}{NEW_COMPONENT_SUFFIX}"),
                new_group: format!("m{NEW_GROUP_MESSAGE_ID:#06x}{NEW_GROUP_SUFFIX}"),
                shared_caption: format!("m{SHARED_CAPTION_MESSAGE_ID:#06x}"),
            }
        );
    }

    #[test]
    fn create_loads_every_registry_file_and_names_its_tab_after_the_stem() {
        let mut host = CreateSessionHost {
            files: vec![
                PathBuf::from(r"C:\Shared\COMPREGY.tcr"),
                PathBuf::from(r"C:\Private\mine.tcr"),
            ],
            steps: Vec::new(),
        };

        drop(create_component_bar_editor(&mut host));

        assert_eq!(
            host.steps,
            [
                CreateStep::Blend(FORM_COLOR_BLEND_WEIGHT),
                CreateStep::Hint,
                CreateStep::Help(HELP_CONTEXT),
                CreateStep::Lists,
                CreateStep::Load(0, PathBuf::from(r"C:\Shared\COMPREGY.tcr")),
                CreateStep::Tab("COMPREGY".to_owned()),
                CreateStep::Load(1, PathBuf::from(r"C:\Private\mine.tcr")),
                CreateStep::Tab("mine".to_owned()),
                CreateStep::TabsVisible(true),
                CreateStep::Select(0),
                CreateStep::Reset,
                CreateStep::Icons,
                CreateStep::Parts(ALL_PARTS_ENTRY.to_owned()),
                CreateStep::Groups,
                CreateStep::Group(0),
                CreateStep::NoDoubleBuffer,
            ]
        );
    }

    #[test]
    fn a_single_registry_file_never_shows_the_tab_strip() {
        let mut host = CreateSessionHost {
            files: vec![PathBuf::from(r"C:\Shared\COMPREGY.tcr")],
            steps: Vec::new(),
        };

        drop(create_component_bar_editor(&mut host));

        assert!(
            !host
                .steps
                .iter()
                .any(|step| matches!(step, CreateStep::TabsVisible(_)))
        );
        assert!(host.steps.contains(&CreateStep::Select(0)));
    }

    #[derive(Debug, Default)]
    struct PopupHost {
        selected: Option<NavigatorItem>,
        is_group: bool,
        names: Vec<(NavigatorItem, String)>,
        parent: Option<NavigatorItem>,
        groups: Vec<RegistryGroup>,
        files: Vec<String>,
        current_file: usize,
        texts: Vec<String>,
    }

    impl NavigatorPopupHost for PopupHost {
        fn selected_item(&mut self) -> Option<NavigatorItem> {
            self.selected
        }

        fn is_group(&mut self, _item: NavigatorItem) -> bool {
            self.is_group
        }

        fn item_name(&mut self, item: NavigatorItem) -> String {
            self.names
                .iter()
                .find(|(candidate, _)| *candidate == item)
                .map(|(_, name)| name.clone())
                .unwrap_or_default()
        }

        fn parent_of(&mut self, _item: NavigatorItem) -> Option<NavigatorItem> {
            self.parent
        }

        fn current_file_groups(&mut self) -> Vec<RegistryGroup> {
            self.groups.clone()
        }

        fn registry_file_names(&mut self) -> Vec<String> {
            self.files.clone()
        }

        fn selected_registry_file(&mut self) -> usize {
            self.current_file
        }

        fn registry_file_text(&mut self, index: usize) -> String {
            self.texts.get(index).cloned().unwrap_or_default()
        }

        fn translate_group_id(&mut self, id: &str) -> String {
            format!("translated:{id}")
        }
    }

    fn group(name: &str, entry_index: usize) -> RegistryGroup {
        RegistryGroup {
            name: name.to_owned(),
            entry_index,
        }
    }

    #[test]
    fn the_popup_offers_every_group_but_disables_the_one_the_item_is_in() {
        let mut host = PopupHost {
            selected: Some(NavigatorItem(5)),
            parent: Some(NavigatorItem(9)),
            names: vec![(NavigatorItem(9), "Passives".to_owned())],
            groups: vec![group("Passives", 0), group("Sources", 4)],
            files: vec!["core".to_owned()],
            texts: vec![String::new()],
            ..PopupHost::default()
        };

        let model = build_navigator_menu(&mut host).expect("a selection exists");

        assert_eq!(
            model.groups,
            [
                MenuGroupCommand {
                    caption: "Passives".to_owned(),
                    enabled: false,
                    entry_index: 0,
                },
                MenuGroupCommand {
                    caption: "Sources".to_owned(),
                    enabled: true,
                    entry_index: 4,
                },
            ]
        );
        assert!(model.duplicate_enabled);
        assert!(model.separator_visible);
    }

    #[test]
    fn a_selected_group_measures_against_itself_and_gets_no_file_submenus() {
        let mut host = PopupHost {
            selected: Some(NavigatorItem(9)),
            is_group: true,
            names: vec![(NavigatorItem(9), "Passives".to_owned())],
            groups: vec![group("Passives", 0), group("Sources", 4)],
            files: vec!["core".to_owned(), "extra".to_owned()],
            texts: vec![String::new(), "[!Other]".to_owned()],
            ..PopupHost::default()
        };

        let model = build_navigator_menu(&mut host).expect("a selection exists");

        assert!(!model.groups[0].enabled);
        assert!(model.groups[1].enabled);
        assert!(model.files.is_empty());
        assert!(!model.duplicate_enabled);
    }

    #[test]
    fn other_files_contribute_their_cross_file_group_headers() {
        let mut host = PopupHost {
            selected: Some(NavigatorItem(5)),
            parent: Some(NavigatorItem(9)),
            names: vec![(NavigatorItem(9), "Passives".to_owned())],
            files: vec!["core".to_owned(), "extra".to_owned()],
            current_file: 0,
            texts: vec![
                "[!Skipped]".to_owned(),
                "; comment\r\n[!Other]\r\n[!id_group_5]\r\n[Plain]\r\n[!]\r\n".to_owned(),
            ],
            ..PopupHost::default()
        };

        let model = build_navigator_menu(&mut host).expect("a selection exists");

        assert_eq!(
            model.files,
            [MenuFileSubmenu {
                caption: "extra".to_owned(),
                groups: vec!["Other".to_owned(), "translated:id_group_5".to_owned()],
            }]
        );
    }

    #[test]
    fn a_popup_without_a_selection_builds_nothing() {
        let mut host = PopupHost::default();

        assert!(build_navigator_menu(&mut host).is_none());
    }

    #[test]
    fn the_separator_stays_hidden_when_nothing_was_added() {
        let mut host = PopupHost {
            selected: Some(NavigatorItem(5)),
            parent: Some(NavigatorItem(9)),
            files: vec!["core".to_owned()],
            texts: vec![String::new()],
            ..PopupHost::default()
        };

        let model = build_navigator_menu(&mut host).expect("a selection exists");

        assert!(model.groups.is_empty());
        assert!(model.files.is_empty());
        assert!(!model.separator_visible);
    }

    #[test]
    fn reset_survives_a_missing_image_list_and_an_empty_file_list() {
        let mut host = ResetHost::default();

        reset_component_bar(false, &mut host);

        assert_eq!(
            host.calls,
            [
                ResetCall::Panel(false),
                ResetCall::Busy(true),
                ResetCall::ReloadIcons,
                ResetCall::Choices(Vec::new()),
                ResetCall::Navigator,
                ResetCall::Busy(false),
            ]
        );
    }
}
