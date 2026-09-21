pub mod chrome;
pub mod command_state;
pub mod documents;
pub mod external;
pub mod help;
mod inventory;
mod menu;
pub mod menu_targets;
pub mod menu_tree;
pub mod navigation;
pub mod printing;
pub mod shortcuts;
pub mod toolbars;
pub mod zoom;

use iced::widget::{
    Row, button, column, combo_box, container, horizontal_space, image, mouse_area, pick_list,
    radio, row, scrollable, svg, text, text_input, tooltip,
};
use iced::{Alignment, Element, Length};

use std::path::PathBuf;

use tiara_core::component_registry::{self, Registry};
use tiara_core::device_catalogue::{self, Catalogue};
use tiara_core::editor_settings::EditorSettings;
use tiara_core::icon_strip::{self, Strip};
use tiara_core::netlist;
use tiara_core::page_setup::{Orientation, Paper};
use tiara_core::schematic_document::{Arrange, NoteKind, Point, ShapeKind, Sheet, WireKind};
use tiara_core::schematic_workspace::Workspace;

use documents::examples_folder;

use crate::shared::glyphs;
use crate::shared::theme::{CustomThemeFile, ThemeTokens};
use inventory::{COMPONENT_CATEGORIES, COMPONENT_SYMBOLS};
/// The category whose parts the recovered screenshot shows.
const BASIC_CATEGORY: usize = 0;

/// The drop-down whose choice the bar keeps.
const ZOOM_PICKER: &str = "ZoomFactor";

/// The form the toolbar's glyphs were taken from.
const GLYPH_FORM: &str = "SchematicEditor";

/// How large a toolbar glyph is drawn, which is the size the original draws it.
const GLYPH_SIZE: f32 = 16.0;

/// How tall the page is drawn in the preview.
const PREVIEW_HEIGHT: f32 = 420.0;

/// How big a button's picture is drawn.
///
/// The strip's tiles are 29 across, which is what the original draws.
const ICON_SIDE: f32 = 29.0;

/// How tall the palette strip is, so it does not change height per category.
const PALETTE_HEIGHT: f32 = 44.0;

/// How far a pasted copy lands from what it was copied from.
///
/// The original offsets it so the copy can be told from the original rather
/// than sitting exactly on top of it.
const PASTE_OFFSET: Point = Point::new(2, 2);

/// The command that shows and hides the exam panel.
const EXAM_PANEL_COMMAND: &str = "mnFaultManager";

/// What the resource calls the component list on the toolbar.
const COMPONENT_PICKER: &str = "CompDropDown";

/// Where the editor's settings are kept, if it is told.
const SETTINGS_VARIABLE: &str = "TIARA_SETTINGS";

/// What that file is called.
const SETTINGS_FILE: &str = "editor-settings.json";

/// How many grid units the sheet shows down at the normal size.
///
/// The canvas draws this many rows of dots, so this is how far the window
/// reaches before something falls off the bottom.
const VIEW_DOWN: u32 = 24;

/// How many grid units the sheet shows across at the normal size.
///
/// The dotted grid the sheet draws is this wide, so a box dragged out is
/// measured against it when the view is brought up to it.
const VIEW_ACROSS: u32 = 37;

/// How wide the exam panel is drawn beside the sheet.
const EXAM_PANEL_WIDTH: f32 = 260.0;

/// How far apart the sheet's grid points are drawn, and so how many pixels
/// make one of the whole units the status bar reports.
///
/// The original counts in its own drawing units; the port has no coordinate
/// system of its own yet, so it counts the grid it draws. That keeps the
/// readout truthful about what it is measuring until there is a sheet to
/// measure against.
const GRID_STEP: f32 = 8.0;

const DOT_ROW: &str = "·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·   ·";

/// Messages raised by the editor chrome.
///
/// No longer `Copy`: the exam panel's own messages carry text, and the panel
/// is part of the editor rather than a window of its own.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    SelectComponentCategory(usize),
    /// A choice was made in one of the bar's drop-downs.
    SelectFromPicker(&'static str),
    /// A button on the component bar was pressed, by tab and place on it.
    PickUpFromBar(usize, usize),
    /// A part was chosen from the component list.
    ComponentChosen(String),
    /// One of the menu bar's roots was pressed, by where it sits on the bar.
    MenuRootPressed(usize),
    /// The pointer moved on to one of the roots.
    MenuRootHovered(usize),
    /// An entry that opens a submenu was reached, by its name.
    MenuEntryOpened(&'static str),
    /// The pointer moved on to an entry that opens nothing.
    MenuEntryHovered,
    /// Nothing happens. A control that has to send something, and has
    /// nothing to send.
    NoOp,
    /// Something was chosen in one of the printing panels.
    Printing(PrintingMessage),
    /// The label in the properties panel was typed into.
    LabelChanged(String),
    /// The properties panel was answered.
    PropertiesClosed(bool),
    /// A tab along the bottom was pressed, so that circuit is worked on.
    SelectDocument(usize),
    /// A menu command was chosen, named as the original resource names it.
    ///
    /// The name rather than the caption, because captions repeat between menus
    /// and names do not.
    MenuCommand(&'static str),
    /// A toolbar button was pressed, named as the resource names it.
    ToolCommand(&'static str),
    /// The pointer moved over the sheet, in whole grid units.
    PointerMoved(i32, i32),
    /// Something happened in the exam panel the editor carries.
    ExamManager(crate::exam_manager::Message),
    /// A part was picked up from the palette, ready to be put down.
    PickUp(&'static str),
    /// The sheet was clicked at a place, in whole grid units.
    SheetClicked(i32, i32),
}

/// Presentation state for the Schematic Editor window.
///
/// Trace anchors:
/// - DFM resource: `SchematicEditor` / `TSchematicEditor`
/// - Screenshot: `screenshots/MainForm.png`
/// - Original create function: Ghidra `01c69770`
/// - Original resize function: Ghidra `01c72ec0`
#[derive(Debug)]
pub struct SchematicEditor {
    selected_category: usize,
    /// The zoom factor the bar shows, which is also what the sheet is drawn at.
    zoom: &'static str,
    /// What the editor knows about itself, which settles what it offers.
    state: command_state::EditorState,
    /// Where the pointer last was on the sheet, in whole units as the original
    /// reports it.
    pointer: (i32, i32),
    /// The circuits open at once, and which of them is being worked on.
    workspace: Workspace,
    /// The menu command chosen most recently, if any.
    invoked: Option<&'static menu_tree::MenuEntry>,
    /// The toolbar button pressed most recently, if any.
    pressed: Option<&'static toolbars::ToolItem>,
    /// Whether the exam panel is showing.
    ///
    /// The original's Exam Manager is a panel inside the editor, not a window
    /// of its own - the resource puts it at `SchematicEditor.EditorPanel`
    /// `.ExamPanel` - and the command shows and hides it in place. Choosing it
    /// on the running original raises no window at all, which is what gave
    /// this away.
    exam_panel_shown: bool,
    /// The exam panel itself.
    exam_panel: crate::exam_manager::Window,
    /// What the next click on the sheet will do.
    tool: Tool,
    /// Where a two-click tool was first clicked, while it waits for the second.
    started_at: Option<Point>,
    /// Whether a tool stays in hand after it has been used once.
    ///
    /// `Insert > Auto Repeat`. With it off, putting one part down goes back to
    /// picking things out, which is what someone placing a single part wants.
    auto_repeat: bool,
    /// What the editor keeps between one run and the next.
    settings: EditorSettings,
    /// Which of the printing panels is showing, if either.
    printing: printing::Printing,
    /// The part whose properties are being edited, if any.
    ///
    /// `Edit > Properties...` in the original opens a dialog chosen by what
    /// was selected - its handler at 01c77050 dispatches through the
    /// object's own method. A part here carries a name and a label and
    /// nothing else, so that is what this edits, and it will grow as the
    /// document does.
    properties_of: Option<tiara_core::schematic_document::Id>,
    /// What is typed in that panel before it is applied.
    typed_label: String,
    /// Which menu is open, if one is.
    ///
    /// The editor keeps this rather than the menu widget, which is what
    /// lets the Alt key open a menu at all - see TIARA-okjt1pj.
    open_menu: menu::OpenMenu,
    /// The grid square drawn at the top left of the sheet.
    ///
    /// The original scrolls its sheet and the port draws a fixed window on
    /// to it, so this is what that window is over. Nothing moves it by hand
    /// yet; what moves it is being asked to show something that is off the
    /// edge - which is what the Component Explorer does when it reveals a
    /// part.
    view_origin: Point,
    /// The pictures the component bar draws on its buttons.
    ///
    /// One strip of square tiles, and a button's own number says which tile
    /// is its. Empty unless the editor was made with somewhere to read it
    /// from.
    icons: Option<Strip>,
    /// The component bar the installation ships: its tabs and their
    /// buttons.
    ///
    /// Empty unless the editor was made with somewhere to read it from, so
    /// a test always sees the same bar.
    bar: Registry,
    /// Every part the installation has, which is what the component list
    /// offers.
    ///
    /// Empty unless the editor was made with somewhere to read it from, so a
    /// test always sees the same list and never the one this machine
    /// happens to have installed.
    catalogue: Catalogue,
    /// The names of those parts, in the order the list shows them.
    part_names: Vec<String>,
    /// What the component list has typed in it.
    component_list: combo_box::State<String>,
    /// Which part was chosen from it, if any.
    chosen_component: Option<String>,
    /// The original's help file, where this machine has an installation.
    ///
    /// Looked for once when the editor is made rather than every time the
    /// menu is drawn: the answer does not change while the program runs, and
    /// the menu is drawn many times a second.
    help_file: Option<PathBuf>,
    /// What the status bar has to say, where it has anything.
    ///
    /// A circuit that could not be read, or a drawing that was written
    /// somewhere. The status bar says it rather than a dialog: it is worth
    /// telling someone, and worth their being able to go on working
    /// afterwards.
    said: Option<String>,
    /// Whether the editor has been told to leave.
    ///
    /// The shell reads it after every message and closes the window, because
    /// leaving is the shell's to do and the question about unsaved work is
    /// the editor's.
    closing: bool,
    /// Where those settings are kept, when they are kept anywhere.
    ///
    /// An editor made the plain way keeps nothing, so a test and a second
    /// window cannot write over what the one the user is looking at chose.
    settings_path: Option<PathBuf>,
}

/// What the pointer is doing on the sheet.
///
/// The original puts the editor into a mode and leaves it there until another
/// command changes it, which is why choosing `Insert > Wire` lets several
/// wires be drawn one after another rather than one.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum Tool {
    /// Clicking picks a thing out, or clears what is picked out.
    #[default]
    Select,
    /// Clicking puts down a part of this kind.
    Place(&'static str),
    /// Clicking puts down the part one button of the component bar stands
    /// for, named by which tab it is on and where on it.
    PlaceFromBar(usize, usize),
    /// Clicking puts down the part at this place in the component list.
    ///
    /// The list is read from the installation and its names are not known
    /// when the program is built, so the tool holds where the part is rather
    /// than what it is called.
    PlacePart(usize),
    /// Two clicks draw a line of this kind.
    Draw(WireKind),
    /// Two clicks draw a shape of this kind.
    Shape(ShapeKind),
    /// Two clicks drag out a box, and the view is brought up to it.
    ZoomWindow,
    /// Clicking puts down a piece of writing of this kind.
    Write(NoteKind),
}

impl Default for SchematicEditor {
    fn default() -> Self {
        Self {
            selected_category: 0,
            zoom: zoom::NORMAL,
            state: command_state::EditorState::default(),
            pointer: (0, 0),
            workspace: Workspace::default(),
            invoked: None,
            pressed: None,
            exam_panel_shown: false,
            exam_panel: crate::exam_manager::Window::default(),
            tool: Tool::default(),
            started_at: None,
            // The original keeps a part in hand until it is told otherwise.
            auto_repeat: true,
            settings: EditorSettings::default(),
            printing: printing::Printing::Nothing,
            properties_of: None,
            typed_label: String::new(),
            open_menu: menu::OpenMenu::shut(),
            view_origin: Point::new(0, 0),
            icons: None,
            bar: Registry::default(),
            catalogue: Catalogue::default(),
            part_names: Vec::new(),
            component_list: combo_box::State::new(Vec::new()),
            chosen_component: None,
            help_file: None,
            said: None,
            closing: false,
            settings_path: None,
        }
    }
}

impl SchematicEditor {
    /// What is on the sheet being worked on.
    ///
    /// The editor has several circuits open at once and works on one of them,
    /// so everything that reads or draws on a sheet goes through here rather
    /// than holding one of its own.
    pub(crate) fn sheet(&self) -> &Sheet {
        self.workspace.active().sheet()
    }

    /// The sheet being worked on, to draw on.
    pub(crate) fn sheet_mut(&mut self) -> &mut Sheet {
        self.workspace.active_mut().sheet_mut()
    }

    /// The component bar the installation ships.
    #[must_use]
    pub(crate) const fn bar(&self) -> &Registry {
        &self.bar
    }

    /// What the tabs along the palette say.
    ///
    /// The installed bar names its own groups, and the captions recovered
    /// from the resource say them better - `Logic ICs-MCUs` rather than
    /// `Logic Ics-mcus` - so where the two agree on how many there are, the
    /// recovered ones are used. They are the same fifteen in the same order,
    /// which a test holds.
    pub(crate) fn category_names(&self) -> Vec<String> {
        let tabs = self.bar.tabs();
        if tabs.is_empty() {
            return COMPONENT_CATEGORIES
                .iter()
                .map(|name| (*name).to_owned())
                .collect();
        }
        tabs.iter()
            .enumerate()
            .map(|(at, group)| {
                COMPONENT_CATEGORIES
                    .get(at)
                    .filter(|_| tabs.len() == COMPONENT_CATEGORIES.len())
                    .map_or_else(|| group.caption(), |name| (*name).to_owned())
            })
            .collect()
    }

    /// The picture one bar button draws, where the strip has one for it.
    pub(crate) fn icon_of(&self, entry: &component_registry::Entry) -> Option<image::Handle> {
        let strip = self.icons.as_ref()?;
        let side = u32::try_from(strip.down()).ok()?;
        let pixels = strip.picture(usize::try_from(entry.icon).ok()?)?;
        Some(image::Handle::from_rgba(side, side, pixels))
    }

    /// What the pointer resting on a bar button says.
    ///
    /// A button that stands for one component says what it is called. One
    /// that stands for a whole category of the catalogue - which is what
    /// the Spice Macros tab is made of - also says how many parts the
    /// installation has in that category, because that is the difference
    /// between the two kinds of button.
    pub(crate) fn describe(&self, entry: &component_registry::Entry) -> String {
        let caption = entry.caption();
        match &entry.source {
            component_registry::Source::Library(_) => caption,
            component_registry::Source::Category(category) => {
                let how_many = self.catalogue().in_category(category).len();
                if how_many == 0 {
                    format!("{caption} {category}")
                } else {
                    format!("{caption} {category}, {how_many} installed")
                }
            }
        }
    }

    /// The buttons on one tab of the bar.
    pub(crate) fn bar_buttons(&self, tab: usize) -> &[component_registry::Entry] {
        self.bar
            .tabs()
            .get(tab)
            .map_or(&[] as &[component_registry::Entry], |group| &group.entries)
    }

    /// What one button on the bar puts down.
    pub(crate) fn bar_part(&self, tab: usize, button: usize) -> Option<String> {
        self.bar_buttons(tab)
            .get(button)
            .map(component_registry::Entry::caption)
    }

    /// Answers a key press that belongs to the menu, and says whether it did.
    ///
    /// Alt and an underlined letter opens the menu that letter marks. Once
    /// one is open its own letters choose an entry - opening a submenu, or
    /// running a command and shutting the menu - and Escape shuts it. A
    /// letter that belongs to a greyed command does nothing, as a click on
    /// it would.
    ///
    /// Anything the menu does not want is left alone, so the shortcuts the
    /// menu advertises still reach the shell.
    pub(crate) fn navigate_menu(
        &mut self,
        key: &iced::keyboard::Key,
        modifiers: iced::keyboard::Modifiers,
    ) -> Option<&'static str> {
        use iced::keyboard::Key;
        use iced::keyboard::key::Named;

        let state = self.state();

        // Escape shuts whatever is open, innermost first.
        if matches!(key, Key::Named(Named::Escape)) && self.open_menu.is_open() {
            self.open_menu = if self.open_menu.inside.is_some() {
                menu::OpenMenu {
                    inside: None,
                    ..self.open_menu
                }
            } else {
                menu::OpenMenu::shut()
            };
            return None;
        }

        let letter = match key {
            Key::Character(typed) => typed.chars().next()?,
            _ => return None,
        };

        // Alt and a letter opens a menu from anywhere.
        if modifiers.alt() {
            if let Some(root) = menu::root_for(letter, state) {
                self.open_menu = menu::OpenMenu::opening(root);
            }
            return None;
        }

        if !self.open_menu.is_open() {
            return None;
        }

        // Inside an open menu, a letter chooses an entry of whichever
        // dropdown is frontmost.
        let entries = self.open_entries()?;
        let entry = menu::entry_for(letter, entries, state)?;

        if menu::opens_a_submenu(entry, state) {
            self.open_menu.inside = Some(entry.name);
            return None;
        }
        self.open_menu = menu::OpenMenu::shut();
        Some(entry.name)
    }

    /// The entries of whichever dropdown is frontmost.
    fn open_entries(&self) -> Option<&'static [menu_tree::MenuEntry]> {
        let state = self.state();
        let root = *menu::roots(state).get(self.open_menu.root?)?;
        let entries = command_state::children_of(root);

        let Some(inside) = self.open_menu.inside else {
            return Some(entries);
        };
        entries
            .iter()
            .find(|entry| entry.name == inside)
            .map(command_state::children_of)
            .or(Some(entries))
    }

    /// Whether a menu is open.
    #[must_use]
    pub(crate) const fn menu_is_open(&self) -> bool {
        self.open_menu.is_open()
    }

    /// Shuts whatever menu is open.
    pub(crate) const fn shut_the_menu(&mut self) {
        self.open_menu = menu::OpenMenu::shut();
    }

    /// Every circuit the editor has open, for a window that shows them all.
    #[must_use]
    pub(crate) fn circuits(&self) -> &[tiara_core::schematic_workspace::OpenCircuit] {
        self.workspace.all()
    }

    /// Where something on the sheet is drawn in the window, if it is in it.
    ///
    /// Nothing before the top left corner is drawn: the window is made of
    /// padding rather than of a canvas that can be scrolled, so a thing
    /// above or to the left of the corner has nowhere to go and would
    /// otherwise pile up against the edge.
    fn shown_at(&self, at: Point) -> Option<Point> {
        let x = at.x - self.view_origin.x;
        let y = at.y - self.view_origin.y;
        (x >= 0 && y >= 0).then(|| Point::new(x, y))
    }

    /// The part of the sheet the window is over, in whole grid units.
    #[must_use]
    pub(crate) fn window_on_the_sheet(&self) -> (Point, Point) {
        let across = i32::try_from(VIEW_ACROSS).unwrap_or(i32::MAX);
        let down = i32::try_from(VIEW_DOWN).unwrap_or(i32::MAX);
        (
            self.view_origin,
            Point::new(
                self.view_origin.x.saturating_add(across),
                self.view_origin.y.saturating_add(down),
            ),
        )
    }

    /// Moves the window so that a place on the sheet is inside it, with a
    /// margin of grid squares to spare.
    ///
    /// A place already inside moves nothing: the original does not jump the
    /// view about when what was asked for is already on screen.
    pub(crate) fn bring_into_view(&mut self, at: Point, margin: i32) {
        let margin = margin.max(0);
        let across = i32::try_from(VIEW_ACROSS).unwrap_or(i32::MAX);
        let down = i32::try_from(VIEW_DOWN).unwrap_or(i32::MAX);

        // A margin wider than the window itself would put the place off the
        // other edge, so it can never be more than half of it.
        let side = margin.min(across / 2);
        let above = margin.min(down / 2);

        let left = self.view_origin.x;
        let top = self.view_origin.y;
        let x = if at.x - side < left {
            (at.x - side).max(0)
        } else if at.x + side >= left + across {
            (at.x + side - across + 1).max(0)
        } else {
            left
        };
        let y = if at.y - above < top {
            (at.y - above).max(0)
        } else if at.y + above >= top + down {
            (at.y + above - down + 1).max(0)
        } else {
            top
        };
        self.view_origin = Point::new(x, y);
    }

    /// An editor that keeps its settings in the file it is given.
    ///
    /// What was chosen last time is read back at the start, and every later
    /// change is written as it is made rather than on the way out, so a run
    /// that ends badly does not lose it.
    #[must_use]
    pub fn remembering(path: PathBuf) -> Self {
        let settings = EditorSettings::read(&path);
        let mut editor = Self {
            help_file: help::help_file(&settings.language),
            settings,
            settings_path: Some(path),
            ..Self::default()
        };
        editor.read_the_library();
        editor
    }

    /// Reads the installed library: the catalogue of parts, the component
    /// bar and its pictures.
    ///
    /// Called when the editor is made, and again by the three Tools
    /// commands that ask for the library to be made current - which is all
    /// those commands can mean here. The original compiles its library into
    /// an index, `SPMACROS.IND`, so that it can find a macro quickly; the
    /// port reads the catalogue's own text every time and keeps no index,
    /// so there is nothing to compile and the whole of it is to read again.
    /// See TIARA-6r0g977.
    pub(crate) fn read_the_library(&mut self) {
        let installation = help::install_folder();
        self.catalogue = installation
            .as_ref()
            .map(|at| device_catalogue::folder_in(at))
            .map_or_else(Catalogue::default, |folder| Catalogue::read_folder(&folder));
        self.part_names = self
            .catalogue
            .parts()
            .map(|part| part.name.clone())
            .collect();
        self.component_list = combo_box::State::new(self.part_names.clone());
        self.bar = installation
            .as_ref()
            .map(|at| component_registry::file_in(at))
            .map_or_else(Registry::default, |file| Registry::read(&file));
        self.icons = installation
            .as_ref()
            .map(|at| icon_strip::file_in(at))
            .and_then(|file| Strip::read(&file).ok());
    }

    /// One of the three commands that make the library current again.
    ///
    /// All three read it again, and the status bar says what was found, so
    /// that pressing one of them is not a command that appears to do
    /// nothing.
    fn reload_the_library(&mut self) {
        self.read_the_library();
        self.said = Some(if self.catalogue.is_loaded() || self.bar.is_loaded() {
            format!(
                "{} parts in {} categories, and {} on the component bar",
                self.part_names.len(),
                self.catalogue.categories().len(),
                self.bar.buttons()
            )
        } else {
            "no installed library was found to read".to_owned()
        });
    }

    /// Every part the installation has.
    #[must_use]
    pub const fn catalogue(&self) -> &Catalogue {
        &self.catalogue
    }

    /// Opens the original's help, where this machine has an installation.
    ///
    /// Nothing is said when there is none: the command is greyed in that
    /// case, so getting here at all means one was found.
    fn show_the_help(&mut self) {
        let Some(file) = self.help_file.clone() else {
            return;
        };
        self.said = help::show(&file)
            .err()
            .map(|error| format!("{}: {error}", file.display()));
    }

    /// Writes the settings back, where the editor was given somewhere to keep
    /// them.
    ///
    /// A file that cannot be written is not worth interrupting anyone over:
    /// the setting still holds for this run, and the next change tries again.
    fn remember_the_settings(&self) {
        if let Some(path) = &self.settings_path {
            let _ = self.settings.write(path);
        }
    }

    /// What the editor knows about itself, which settles what it offers.
    ///
    /// Read off the sheet rather than kept beside it, so the menu can never
    /// disagree with the document: a command is offered exactly when the thing
    /// it needs is there.
    #[must_use]
    pub fn state(&self) -> command_state::EditorState {
        let sheet = self.sheet();
        let document = sheet.document();
        command_state::EditorState {
            has_components: !document.is_empty(),
            is_modified: document.is_modified(),
            has_file: self.workspace.active().path().is_some(),
            inside_macro: sheet.inside_macro(),
            has_selection: document.has_selection(),
            has_hardware: self.state.has_hardware,
            can_undo: sheet.can_undo(),
            can_redo: sheet.can_redo(),
            clipboard_has_content: sheet.clipboard_has_content(),
            has_run_a_simulation: self.state.has_run_a_simulation,
            has_help: self.help_file.is_some(),
        }
    }

    /// Updates local display state only.
    ///
    /// Original Delphi handlers are deliberately not translated in this UI
    /// shell. Later feature beads can connect application messages.
    /// What the window is called, which the original leads with the document.
    ///
    /// The original titles the editor `Noname - Schematic Editor` before the
    /// circuit has been saved, and swaps the document name in once it has.
    pub(crate) fn window_title(&self) -> String {
        format!("{} - Schematic Editor", self.document_name())
    }

    /// The name of the document on screen.
    pub(crate) fn document_name(&self) -> &str {
        self.workspace.active().name()
    }

    pub(crate) fn update(&mut self, message: Message) {
        match message {
            Message::SelectComponentCategory(index) => {
                self.selected_category = index;
            }
            Message::SelectFromPicker(choice) => {
                self.zoom = choice;
            }
            Message::PickUpFromBar(tab, button) => {
                if let Some(name) = self.bar_part(tab, button) {
                    self.chosen_component = Some(name);
                    self.take_up(Tool::PlaceFromBar(tab, button));
                }
            }
            Message::ComponentChosen(name) => {
                // Choosing one puts it in hand, which is what the original
                // does: the next click on the sheet puts it down.
                if let Some(which) = self.part_names.iter().position(|part| *part == name) {
                    self.take_up(Tool::PlacePart(which));
                }
                self.chosen_component = Some(name);
            }
            Message::Printing(message) => self.update_printing(message),
            Message::LabelChanged(typed) => self.typed_label = typed,
            Message::PropertiesClosed(apply) => {
                if apply && let Some(id) = self.properties_of {
                    let label = self.typed_label.clone();
                    self.sheet_mut().rename(id, label);
                }
                self.properties_of = None;
                self.typed_label.clear();
            }
            Message::MenuRootPressed(at) => {
                // Pressing the root that is already open shuts it, which is
                // what a menu bar does.
                self.open_menu = if self.open_menu.root == Some(at) {
                    menu::OpenMenu::shut()
                } else {
                    menu::OpenMenu::opening(at)
                };
            }
            Message::MenuRootHovered(at) => {
                if self.open_menu.is_open() {
                    self.open_menu = menu::OpenMenu::opening(at);
                }
            }
            Message::MenuEntryOpened(name) => self.open_menu.inside = Some(name),
            Message::MenuEntryHovered => self.open_menu.inside = None,
            Message::NoOp => {}
            Message::SelectDocument(at) => {
                self.workspace.activate(at);
                self.take_up(Tool::Select);
            }
            Message::MenuCommand(name) => {
                self.shut_the_menu();
                // A submenu parent is a place to go, not a command to run, so
                // choosing one leaves the last command alone.
                if let Some(entry) = menu_tree::find(name)
                    && !entry.opens_a_submenu()
                {
                    self.invoked = Some(entry);
                    self.pressed = None;
                }
                if name == EXAM_PANEL_COMMAND {
                    self.exam_panel_shown = !self.exam_panel_shown;
                }
                self.act_on_the_sheet(name);
            }
            Message::ExamManager(message) => {
                self.exam_panel.update(message);
            }
            Message::PickUp(kind) => {
                self.tool = Tool::Place(kind);
                self.started_at = None;
            }
            Message::SheetClicked(x, y) => {
                self.click_on_the_sheet(Point::new(x, y));
            }
            Message::ToolCommand(name) => {
                self.pressed = toolbars::find(name);
                self.invoked = None;
            }
            Message::PointerMoved(x, y) => {
                self.pointer = (x, y);
            }
        }
    }

    /// Puts a tool in hand, forgetting any half-finished line.
    const fn take_up(&mut self, tool: Tool) {
        self.tool = tool;
        self.started_at = None;
    }

    /// The kind of the part put down most recently, if any.
    fn last_placed(&self) -> Option<&'static str> {
        let last = self.sheet().document().parts().last()?;
        COMPONENT_SYMBOLS
            .iter()
            .find(|symbol| **symbol == last.kind)
            .copied()
    }

    /// What a click on the sheet does, which depends on the tool in hand.
    fn click_on_the_sheet(&mut self, at: Point) {
        match self.tool {
            Tool::Select => {
                if let Some(id) = self.sheet_mut().at(at) {
                    self.sheet_mut().select(id, false);
                } else {
                    self.sheet_mut().clear_selection();
                }
            }
            Tool::Place(kind) => {
                self.sheet_mut().place(kind, at);
                // The original keeps the part in hand so a row of them can be
                // put down one after another, unless Auto Repeat is off.
                if !self.auto_repeat {
                    self.take_up(Tool::Select);
                }
            }
            Tool::PlaceFromBar(tab, button) => {
                if let Some(name) = self.bar_part(tab, button) {
                    self.sheet_mut().place(name, at);
                }
                if !self.auto_repeat {
                    self.take_up(Tool::Select);
                }
            }
            Tool::PlacePart(which) => {
                if let Some(name) = self.part_names.get(which).cloned() {
                    self.sheet_mut().place(name, at);
                }
                if !self.auto_repeat {
                    self.take_up(Tool::Select);
                }
            }
            Tool::Draw(kind) => match self.started_at.take() {
                None => self.started_at = Some(at),
                Some(from) => {
                    if self.settings.auto_wire && from.x != at.x && from.y != at.y {
                        // Along the row first, then down the column, which is
                        // the corner the original puts in.
                        let corner = Point::new(at.x, from.y);
                        self.sheet_mut().draw_wire(from, corner, kind);
                        self.sheet_mut().draw_wire(corner, at, kind);
                    } else {
                        self.sheet_mut().draw_wire(from, at, kind);
                    }
                }
            },
            Tool::ZoomWindow => match self.started_at.take() {
                None => self.started_at = Some(at),
                Some(from) => {
                    let across = from.x.abs_diff(at.x);
                    self.zoom = zoom::for_window(across, VIEW_ACROSS);
                    // One box, one zoom: the original goes back to picking
                    // things out rather than waiting to be dragged again.
                    self.take_up(Tool::Select);
                }
            },
            Tool::Write(kind) => {
                self.sheet_mut().write(kind, at);
            }
            Tool::Shape(kind) => match self.started_at.take() {
                None => self.started_at = Some(at),
                Some(from) => {
                    self.sheet_mut().draw_shape(kind, from, at);
                }
            },
        }
    }

    /// What a menu command does to the sheet, where it does anything.
    ///
    /// Named as the resource names them, so this table and the menu cannot
    /// drift apart. A command that is not here does nothing to the sheet -
    /// which is most of them, and honest: the status bar still reports it.
    fn act_on_the_sheet(&mut self, name: &str) {
        // A command that changes something the editor keeps is answered there
        // and nowhere else, so a setting and an action cannot both claim one.
        if self.settings.apply(name) {
            // The help is installed once per language, so choosing another
            // one changes which file the Help menu opens.
            if self.settings_path.is_some() {
                self.help_file = help::help_file(&self.settings.language);
            }
            self.remember_the_settings();
            return;
        }
        // Both help commands open the same installed file. Which topic a
        // component's help lands on needs the component library, which the
        // port does not read yet, so `Component Help` opens the contents for
        // now - see TIARA-0hni5d1.
        if matches!(name, "Contents" | "HelpOnComponents") {
            self.show_the_help();
            return;
        }
        // A command that leads out of the program leads out of it here, and
        // does nothing else. What the system said, if it said anything, goes
        // where anything else that went wrong goes.
        if let Some(address) = external::address_for(name) {
            self.said = external::open_in_the_browser(address)
                .err()
                .map(|error| format!("{address}: {error}"));
            return;
        }
        match name {
            "mnUndo" => self.sheet_mut().undo(),
            "mnRedo" => self.sheet_mut().redo(),
            "Cut" => self.sheet_mut().cut_selection(),
            "Copy" => self.sheet_mut().copy_selection(),
            "Paste" => self.sheet_mut().paste(PASTE_OFFSET),
            "mnDelete" => self.sheet_mut().delete_selection(),
            "mnSelectAll" => self.sheet_mut().select_all(),
            "mnRotateLeft" => self.sheet_mut().rotate_selection(false),
            "mnRotateRight" => self.sheet_mut().rotate_selection(true),
            "mnMirror" => self.sheet_mut().mirror_selection(),
            "mnBringToFront" => self.sheet_mut().arrange(Arrange::ToFront),
            "mnSendToBack" => self.sheet_mut().arrange(Arrange::ToBack),
            "mnBringForward" => self.sheet_mut().arrange(Arrange::Forward),
            "mnSendBackward" => self.sheet_mut().arrange(Arrange::Backward),
            _ if zoom::for_command(name, self.zoom).is_some() => {
                if let Some(choice) = zoom::for_command(name, self.zoom) {
                    self.zoom = choice;
                }
            }
            "mnZoomWindow" => self.take_up(Tool::ZoomWindow),
            "mnOpenMacro" => {
                self.sheet_mut().enter_macro();
            }
            "mnCloseMacro" => {
                self.sheet_mut().leave_macro();
            }
            "mnAutoRepeat" => self.auto_repeat = !self.auto_repeat,
            "mnRenumberComps" => self.sheet_mut().renumber(),
            "mnHideReconnect" => self.sheet_mut().hide_or_reconnect_selection(),
            "mnLock" => self.sheet_mut().set_selection_locked(true),
            "mnUnlock" => self.sheet_mut().set_selection_locked(false),
            "mnClearLock" => self.sheet_mut().clear_locks(),
            // The sheet is drawn afresh every frame, so there is nothing for a
            // redraw to force. The original needed it; this does not, and says
            // so rather than pretending to do something.
            "mnRedraw" => {}
            "mnWire" => self.take_up(Tool::Draw(WireKind::Wire)),
            _ if NoteKind::from_command(name).is_some() => {
                // Text, Input and Output all put down one thing at a place, so
                // they take up the same tool and differ only in what it writes.
                if let Some(kind) = NoteKind::from_command(name) {
                    self.take_up(Tool::Write(kind));
                }
            }
            _ if ShapeKind::from_command(name).is_some() => {
                // The eight shape commands all take up the same two-click
                // tool, so they are answered by what they draw rather than
                // one arm each.
                if let Some(kind) = ShapeKind::from_command(name) {
                    self.take_up(Tool::Shape(kind));
                }
            }
            "mnBus" => self.take_up(Tool::Draw(WireKind::Bus)),
            "mnComponent" => {
                // `Last Component` puts the palette's last choice back in hand.
                if let Some(kind) = self.last_placed() {
                    self.take_up(Tool::Place(kind));
                }
            }
            "ToolEdit" | "ToolSelectObj" => self.take_up(Tool::Select),
            "mnNew" => {
                self.workspace.start_a_new_one();
                self.take_up(Tool::Select);
            }
            "Open" => self.open_click(None),
            "OpenExamples" => self.open_click(examples_folder().as_deref()),
            "Save" => self.save_click(),
            "SaveAs" => self.save_as_click(),
            "mnSaveAll" => self.save_all_click(),
            "mnReReadSymbolDatabase" | "mnReCompileLibrary" | "mnReBuildLibrary" => {
                self.reload_the_library();
            }
            "PrintSetup" => self.show_printing(printing::Printing::PageSetup),
            "mnPrintPreview" => self.show_printing(printing::Printing::Preview),
            "Print" => self.print_click(),
            "mnEditAttributes" => self.edit_properties(),
            "mnExportMacro" => self.export_macro_click(),
            "mnImportBan" => self.back_annotate_click(),
            "mnClose" => self.close_click(),
            "mnCloseAll" => self.close_all_click(),
            "mnExit" => self.exit_click(),
            _ => {}
        }
    }

    /// Builds the window hierarchy recovered from the Schematic Editor DFM.
    ///
    /// This is the Rust presentation counterpart of the structure initialized
    /// by Ghidra function `01c69770`. It does not reproduce that function's
    /// file, configuration, timer, or callback behavior.
    pub(crate) fn view(&self, theme: &CustomThemeFile) -> Element<'_, Message> {
        let tokens = theme.tokens;
        let canvas = theme.canvas;
        let content = column![
            container(menu::bar(tokens, self.state(), self.open_menu))
                .width(Length::Fill)
                .height(Length::Fixed(chrome::MENU_BAR_HEIGHT))
                .style(move |iced_theme| chrome::toolbar_style(tokens, iced_theme)),
            container(horizontal_space())
                .width(Length::Fill)
                .height(Length::Fixed(1.0))
                .style(move |iced_theme| chrome::separator_style(tokens, iced_theme)),
            self.tool_bar(tokens),
            self.component_palette(tokens),
            self.category_tabs(tokens),
            self.sheet_and_panels(tokens, canvas),
            self.document_tabs(tokens),
            self.status_bar(tokens),
        ]
        .width(Length::Fill)
        .height(Length::Fill);

        // An open menu is drawn over everything below the bar, which is
        // what a menu does and what the widget this replaces would not let
        // the editor arrange.
        let printing = self
            .printing_panel(tokens)
            .or_else(|| self.properties_panel(tokens));
        let open = menu::dropdown(tokens, self.state(), &self.settings, self.open_menu);
        let whole: Element<'_, Message> = match open {
            None => content.into(),
            Some(open) => iced::widget::Stack::new()
                .push(content)
                .push(
                    container(open)
                        .padding(iced::Padding {
                            top: chrome::MENU_BAR_HEIGHT,
                            right: 0.0,
                            bottom: 0.0,
                            left: 0.0,
                        })
                        .width(Length::Fill)
                        .height(Length::Fill),
                )
                .into(),
        };

        // A printing panel is drawn over everything, like a dialog.
        let whole: Element<'_, Message> = match printing {
            None => whole,
            Some(panel) => iced::widget::Stack::new()
                .push(whole)
                .push(
                    container(panel)
                        .padding(40)
                        .width(Length::Fill)
                        .height(Length::Fill)
                        .align_x(Alignment::Center),
                )
                .into(),
        };

        container(whole)
            .width(Length::Fill)
            .height(Length::Fill)
            .style(move |iced_theme| chrome::application_style(tokens, iced_theme))
            .into()
    }

    /// The one bar the original lays across the top of the window.
    ///
    /// Three panels: the general commands pinned left at their own width, the
    /// editing tools filling the middle, and the component picker pinned right.
    /// The middle panel scrolls, because its buttons carry text here where the
    /// original carries glyphs and so need more room than the bar has.
    fn tool_bar(&self, tokens: ThemeTokens) -> Element<'_, Message> {
        let middle = scrollable(self.tool_panel("EditorTools", tokens)).direction(
            scrollable::Direction::Horizontal(
                scrollable::Scrollbar::new().width(4).scroller_width(4),
            ),
        );

        container(
            row![
                self.tool_panel("GeneralTools", tokens),
                container(middle).width(Length::Fill),
                self.tool_panel("CompDropDownP", tokens),
            ]
            .spacing(6)
            .align_y(Alignment::Center),
        )
        .padding([3, 6])
        .width(Length::Fill)
        .style(move |iced_theme| chrome::toolbar_style(tokens, iced_theme))
        .into()
    }

    /// One panel of the bar, in the order the resource positions its items.
    fn tool_panel(&self, name: &str, tokens: ThemeTokens) -> Row<'_, Message> {
        let items = toolbars::panel(name).map_or(&[][..], |panel| panel.items);

        row(items
            .iter()
            .filter(|item| item.visible)
            .map(move |item| self.tool_item(item, tokens)))
        .spacing(3)
        .align_y(Alignment::Center)
    }

    /// One item on the bar: a button, a divider, or a drop-down.
    fn tool_item(
        &self,
        item: &'static toolbars::ToolItem,
        tokens: ThemeTokens,
    ) -> Element<'_, Message> {
        if item.is_divider() {
            return container(horizontal_space())
                .width(Length::Fixed(1.0))
                .height(Length::Fixed(18.0))
                .style(move |iced_theme| chrome::separator_style(tokens, iced_theme))
                .into();
        }

        if let Some(width) = item.picker_width() {
            return self.tool_picker(item, width);
        }

        // The original draws a glyph on each of these. Where the glyph was
        // recovered the button shows it; where it was not, the button keeps the
        // hint as text, which is legible even if it is not what the original
        // looks like.
        let face: Element<'_, Message> = glyphs::Glyphs::shared()
            .get(GLYPH_FORM, item.name)
            .map_or_else(
                || text(item.hint).size(12).into(),
                |handle| {
                    image(handle)
                        .width(Length::Fixed(GLYPH_SIZE))
                        .height(Length::Fixed(GLYPH_SIZE))
                        .into()
                },
            );

        let mut control = button(face)
            .padding([6, 8])
            .style(move |theme, status| chrome::toolbar_button_style(tokens, theme, status));
        if item.enabled {
            control = control.on_press(Message::ToolCommand(item.name));
        }

        if item.description.is_empty() {
            control.into()
        } else {
            tooltip(
                control,
                text(item.description).size(12),
                tooltip::Position::Bottom,
            )
            .style(move |iced_theme| chrome::toolbar_style(tokens, iced_theme))
            .into()
        }
    }

    /// One of the bar's two drop-downs.
    ///
    /// The zoom factor offers what the resource lists. The component list is
    /// filled from the installed catalogue, as the original fills it from its
    /// own library - it is a box that is typed into rather than a plain list,
    /// because there are some fifteen thousand parts to pick from.
    fn tool_picker(&self, item: &'static toolbars::ToolItem, width: f32) -> Element<'_, Message> {
        if item.name == COMPONENT_PICKER {
            return combo_box(
                &self.component_list,
                item.hint,
                self.chosen_component.as_ref(),
                Message::ComponentChosen,
            )
            .size(12.0)
            .width(Length::Fixed(width))
            .into();
        }

        if item.choices.is_empty() {
            return pick_list(
                item.choices,
                None::<&'static str>,
                Message::SelectFromPicker,
            )
            .placeholder(item.hint)
            .text_size(12)
            .width(Length::Fixed(width))
            .into();
        }

        let chosen = if item.name == ZOOM_PICKER {
            Some(self.zoom)
        } else {
            Some(item.default)
        };

        pick_list(item.choices, chosen, Message::SelectFromPicker)
            .text_size(12)
            .width(Length::Fixed(width))
            .into()
    }

    /// The parts offered by whichever category tab is selected.
    ///
    /// The installed component bar says what is on each tab, so that is what
    /// is drawn: one button per part, named as the bar names it. Where there
    /// is no installation to read, the first tab keeps the parts the
    /// screenshot of the running original shows and the rest say where the
    /// bar comes from.
    fn component_palette(&self, tokens: ThemeTokens) -> Element<'_, Message> {
        let names = self.category_names();
        let category = names
            .get(self.selected_category)
            .cloned()
            .unwrap_or_default();

        let buttons = self.bar_buttons(self.selected_category);
        let loaded = self.bar().is_loaded();
        if !buttons.is_empty() {
            let mut strip = row![].spacing(3).align_y(Alignment::Center);
            for (at, entry) in buttons.iter().enumerate() {
                let tab = self.selected_category;
                // The installed bar draws a little picture on each button
                // and says what it is when the pointer rests on it, so that
                // is what this does. A button whose picture is not in the
                // strip falls back to its name, which is better than a gap.
                let face: Element<'_, Message> = self.icon_of(entry).map_or_else(
                    || text(entry.caption()).size(11).into(),
                    |handle| image(handle).width(ICON_SIDE).height(ICON_SIDE).into(),
                );
                strip = strip.push(tooltip(
                    button(face)
                        .padding([4, 4])
                        .on_press(Message::PickUpFromBar(tab, at))
                        .style(move |theme, status| {
                            chrome::toolbar_button_style(tokens, theme, status)
                        }),
                    text(self.describe(entry)).size(11),
                    tooltip::Position::Bottom,
                ));
            }

            return container(
                scrollable(strip).direction(scrollable::Direction::Horizontal(
                    scrollable::Scrollbar::new().width(4).scroller_width(4),
                )),
            )
            .padding([4, 6])
            .width(Length::Fill)
            .height(Length::Fixed(PALETTE_HEIGHT))
            .style(move |iced_theme| chrome::palette_style(tokens, iced_theme))
            .into();
        }

        let content: Element<'_, Message> = if self.selected_category == BASIC_CATEGORY {
            let symbols = COMPONENT_SYMBOLS.iter().map(move |symbol| {
                Element::from(
                    button(text(*symbol).size(14))
                        .padding([8, 10])
                        .on_press(Message::PickUp(symbol))
                        .style(move |theme, status| {
                            chrome::toolbar_button_style(tokens, theme, status)
                        }),
                )
            });

            row(symbols).spacing(3).align_y(Alignment::Center).into()
        } else {
            row![
                text(format!("{category}:")).size(13),
                text(if loaded {
                    "this tab has no parts on it"
                } else {
                    "the component bar comes from the installation, which was not found"
                })
                .size(13)
                .color(tokens.text_secondary.iced()),
            ]
            .spacing(8)
            .align_y(Alignment::Center)
            .into()
        };

        container(content)
            .padding([4, 6])
            .width(Length::Fill)
            .height(Length::Fixed(PALETTE_HEIGHT))
            .style(move |iced_theme| chrome::palette_style(tokens, iced_theme))
            .into()
    }

    fn category_tabs(&self, tokens: ThemeTokens) -> Element<'_, Message> {
        let names = self.category_names();
        let tabs = names.into_iter().enumerate().map(|(index, category)| {
            let is_selected = index == self.selected_category;

            Element::from(
                button(text(category).size(12))
                    .padding([4, 7])
                    .on_press(Message::SelectComponentCategory(index))
                    .style(move |theme, status| {
                        chrome::category_button_style(tokens, is_selected, theme, status)
                    }),
            )
        });

        container(row(tabs).spacing(1).align_y(Alignment::Center))
            .padding([2, 4])
            .width(Length::Fill)
            .style(move |iced_theme| chrome::toolbar_style(tokens, iced_theme))
            .into()
    }

    /// The sheet, with whichever panels the editor is showing beside it.
    fn sheet_and_panels(
        &self,
        tokens: ThemeTokens,
        canvas: crate::shared::theme::CanvasColors,
    ) -> Element<'_, Message> {
        let sheet = self.schematic_canvas(tokens, canvas);
        if !self.exam_panel_shown {
            return sheet;
        }

        row![
            sheet,
            container(self.exam_panel.view().map(Message::ExamManager))
                .width(Length::Fixed(EXAM_PANEL_WIDTH))
                .height(Length::Fill),
        ]
        .height(Length::Fill)
        .into()
    }

    /// Each part where it sits, with what it is and what it is called.
    fn draw_the_parts<'a>(
        &'a self,
        mut drawn: iced::widget::Stack<'a, Message>,
        tokens: ThemeTokens,
        scale: f32,
    ) -> iced::widget::Stack<'a, Message> {
        for part in self.sheet().document().parts() {
            let Some(at) = self.shown_at(part.at) else {
                continue;
            };
            let selected = self.sheet().document().is_selected(part.id);
            let colour = if selected {
                tokens.accent.iced()
            } else {
                tokens.text.iced()
            };
            // A part that is on the sheet but out of the circuit, or
            // locked against being changed, says so where it is drawn.
            let mut face = part.kind.clone();
            if part.mirrored {
                face.push_str(" ↔");
            }
            if part.hidden {
                face.push_str(" (out)");
            }
            if part.locked {
                face.push_str(" 🔒");
            }
            drawn = drawn.push(place_at(
                at,
                scale,
                column![
                    text(face).size(13).color(colour),
                    text(part.label.clone()).size(10).color(colour),
                ]
                .into(),
            ));
        }
        drawn
    }

    /// `Edit > Properties...`: what the part that is picked out is called.
    ///
    /// The original chooses a dialog by what was selected. A part here
    /// carries a name and a label, so the panel offers the label; when a
    /// part carries a value, a footprint and parameters, this is where they
    /// will go.
    ///
    /// Nothing happens without exactly one part picked out, which is what
    /// the command is greyed on.
    fn edit_properties(&mut self) {
        let chosen: Vec<_> = self
            .sheet()
            .document()
            .selected_parts()
            .iter()
            .map(|part| (part.id, part.label.clone()))
            .collect();
        let Some((id, label)) = chosen.first().cloned() else {
            return;
        };
        self.properties_of = Some(id);
        self.typed_label = label;
    }

    /// The properties panel, when a part is being edited.
    fn properties_panel(&self, tokens: ThemeTokens) -> Option<Element<'_, Message>> {
        let id = self.properties_of?;
        let part = self
            .sheet()
            .document()
            .parts()
            .iter()
            .find(|part| part.id == id)?;

        let body = column![
            text(format!("Properties of {}", part.kind)).size(13),
            row![
                text("Label").size(11).width(Length::Fixed(56.0)),
                text_input("", &self.typed_label)
                    .on_input(Message::LabelChanged)
                    .on_submit(Message::PropertiesClosed(true))
                    .size(12)
                    .padding(4),
            ]
            .spacing(6)
            .align_y(Alignment::Center),
            row![
                horizontal_space(),
                button(text("OK").size(12)).on_press(Message::PropertiesClosed(true)),
                button(text("Cancel").size(12)).on_press(Message::PropertiesClosed(false)),
            ]
            .spacing(6),
        ]
        .spacing(8)
        .padding(12)
        .width(Length::Fixed(320.0));

        Some(
            container(body)
                .style(move |iced_theme| chrome::menu_panel_style(tokens, iced_theme))
                .into(),
        )
    }

    /// Where each net's name is drawn, when `View > Wire IDs` asks for
    /// them.
    ///
    /// The setting has said this since it was recovered and had nothing to
    /// show until the nets were worked out. A net is named where it starts,
    /// which is the first place it was drawn.
    fn net_names(&self) -> Vec<(Point, String)> {
        if !self.settings.wire_ids {
            return Vec::new();
        }
        netlist::nets(self.sheet().document())
            .into_iter()
            .filter_map(|net| net.places.first().map(|place| (*place, net.name())))
            .collect()
    }

    fn schematic_canvas(
        &self,
        tokens: ThemeTokens,
        canvas: crate::shared::theme::CanvasColors,
    ) -> Element<'_, Message> {
        let dots =
            (0..24).map(move |_| Element::from(text(DOT_ROW).size(12).color(canvas.grid.iced())));
        let grid = container(column(dots).spacing(8))
            .width(Length::Fill)
            .height(Length::Fill);

        // Everything on the sheet, drawn where it sits. The parts come last in
        // the order they are drawn, so arranging them changes what is on top.
        // Everything is placed and sized at the chosen zoom, so the drop-down
        // and the Zoom commands change what is seen rather than only what is
        // remembered.
        let scale = zoom::scale(self.zoom);
        let origin = self.view_origin;
        let mut drawn = iced::widget::Stack::new().push(grid);
        for note in self.sheet().document().notes() {
            let Some(at) = self.shown_at(note.at) else {
                continue;
            };
            let colour = if self.sheet().document().is_selected(note.id) {
                tokens.accent.iced()
            } else {
                tokens.text.iced()
            };
            drawn = drawn.push(place_at(
                at,
                scale,
                text(note.text.clone()).size(11).color(colour).into(),
            ));
        }
        for shape in self.sheet().document().shapes() {
            let Some(at) = self.shown_at(shape.from) else {
                continue;
            };
            drawn = drawn.push(place_at(
                at,
                scale,
                text(format!("{:?}", shape.kind))
                    .size(10)
                    .color(tokens.text_secondary.iced())
                    .into(),
            ));
        }
        let names = self.net_names();
        for wire in self.sheet().document().wires() {
            let Some(at) = self.shown_at(wire.from) else {
                continue;
            };
            drawn = drawn.push(place_at(
                at,
                scale,
                text("─").size(12).color(tokens.text.iced()).into(),
            ));
        }
        for (place, name) in names {
            let Some(at) = self.shown_at(place) else {
                continue;
            };
            drawn = drawn.push(place_at(
                at,
                scale,
                text(name)
                    .size(9)
                    .color(tokens.text_secondary.iced())
                    .into(),
            ));
        }
        drawn = self.draw_the_parts(drawn, tokens, scale);

        let sheet = container(drawn)
            .padding(12)
            .width(Length::Fill)
            .height(Length::Fill)
            .style(move |iced_theme| chrome::canvas_style(tokens, canvas, iced_theme));

        // The status bar reports where the pointer is, and a click puts down
        // whatever the palette handed over, so the sheet has to say both.
        mouse_area(sheet)
            .on_move(move |point| {
                Message::PointerMoved(
                    in_units(point.x, scale) + origin.x,
                    in_units(point.y, scale) + origin.y,
                )
            })
            .on_press(Message::SheetClicked(self.pointer.0, self.pointer.1))
            .into()
    }

    fn document_tabs(&self, tokens: ThemeTokens) -> Element<'_, Message> {
        // One tab per open circuit, the one being worked on standing out, and
        // a star beside any that has changed since it was last written - which
        // is the only place the editor says so.
        let mut tabs = row![].align_y(Alignment::Center);
        for (at, circuit) in self.workspace.all().iter().enumerate() {
            let here = at == self.workspace.active_index();
            let caption = if circuit.is_modified() {
                format!("{}*", circuit.name())
            } else {
                circuit.name().to_owned()
            };
            tabs = tabs.push(
                button(text(caption))
                    .padding([4, 18])
                    .on_press(Message::SelectDocument(at))
                    .style(move |theme, status| {
                        chrome::category_button_style(tokens, here, theme, status)
                    }),
            );
        }

        container(tabs.push(horizontal_space()))
            .padding([2, 5])
            .width(Length::Fill)
            .style(move |iced_theme| chrome::toolbar_style(tokens, iced_theme))
            .into()
    }

    fn status_bar(&self, tokens: ThemeTokens) -> Element<'_, Message> {
        // The original shows the hint of whatever was last used here. Until the
        // commands are connected, reporting which one was chosen is what the
        // status bar can honestly say.
        let chosen = self.pressed.map_or_else(
            || {
                self.invoked
                    .map_or_else(String::new, |entry| describe(entry.caption, entry.handler))
            },
            |button| describe(button.hint, button.handler),
        );
        // What the editor has to say about a file is worth more than which
        // command was last chosen, so it takes the same place and wins it.
        let chosen = self.said().map_or(chosen, ToOwned::to_owned);

        container(
            row![
                button(text("Exit"))
                    .padding([3, 12])
                    .on_press(Message::MenuCommand("mnExit"))
                    .style(move |theme, status| {
                        chrome::toolbar_button_style(tokens, theme, status)
                    }),
                text(chosen),
                horizontal_space(),
                text(format!("X: {}", self.pointer.0)),
                text(format!("Y: {}", self.pointer.1)),
            ]
            .spacing(18)
            .align_y(Alignment::Center),
        )
        .padding([3, 6])
        .width(Length::Fill)
        .style(move |iced_theme| chrome::status_style(tokens, iced_theme))
        .into()
    }
}

/// Where the editor keeps what it remembers.
///
/// The variable comes first, so a copy under test or on a shared machine can
/// be told where to keep its own; then the place the platform puts what an
/// application remembers; and failing both the working directory, which at
/// least keeps the settings somewhere rather than dropping them.
#[must_use]
pub fn settings_path() -> PathBuf {
    if let Some(named) = std::env::var_os(SETTINGS_VARIABLE) {
        return PathBuf::from(named);
    }
    let base = std::env::var_os("APPDATA")
        .or_else(|| std::env::var_os("XDG_CONFIG_HOME"))
        .or_else(|| std::env::var_os("HOME"))
        .map_or_else(PathBuf::new, PathBuf::from);
    base.join("TIARA").join(SETTINGS_FILE)
}

/// Draws one thing where it sits on the sheet.
///
/// The grid is drawn as rows of dots and everything else is laid over it, so a
/// position becomes padding from the top left - which is what turns a place in
/// grid units back into a place on screen.
fn place_at(at: Point, scale: f32, what: Element<'_, Message>) -> Element<'_, Message> {
    let left = f32::from(i16::try_from(at.x).unwrap_or(0)) * GRID_STEP * scale;
    let top = f32::from(i16::try_from(at.y).unwrap_or(0)) * GRID_STEP * scale;
    container(what)
        .padding(iced::Padding {
            top: top.max(0.0),
            left: left.max(0.0),
            right: 0.0,
            bottom: 0.0,
        })
        .into()
}

/// One coordinate in the whole units the status bar reports.
///
/// A sheet is never large enough for the count to leave the range of an `i32`.
/// Were one ever that large, the conversion pins the reading to the end of the
/// range rather than wrapping it, which is what a float-to-integer cast does in
/// Rust, so the readout stays sane either way.
#[allow(
    clippy::cast_possible_truncation,
    reason = "the cast saturates, and a sheet never reaches the range's end"
)]
fn in_units(pixels: f32, scale: f32) -> i32 {
    // A scale of zero would put every position at the origin; the ladder never
    // offers one, and this makes sure of it.
    let step = (GRID_STEP * scale).max(f32::EPSILON);
    (pixels / step).round() as i32
}

/// What the status bar says about whichever command was last used.
fn describe(label: &str, handler: Option<u32>) -> String {
    handler.map_or_else(
        || format!("{label}: no handler in the original"),
        |address| format!("{label} \u{2014} original handler {address:#010X}"),
    )
}

/// What was chosen in one of the printing panels.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum PrintingMessage {
    /// A size of paper was chosen.
    PaperChosen(Paper),
    /// The paper was turned round.
    OrientationChosen(Orientation),
    /// One of the four margins was typed into.
    MarginChanged(Edge, String),
    /// The panel was shut.
    Closed,
    /// Printing was asked for from the preview.
    Printed,
}

/// Which margin is being typed into.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Edge {
    Left,
    Top,
    Right,
    Bottom,
}

impl SchematicEditor {
    /// Answers one of the printing panels.
    pub(crate) fn update_printing(&mut self, message: PrintingMessage) {
        let mut page = *self.page();
        match message {
            PrintingMessage::PaperChosen(paper) => page.paper = paper,
            PrintingMessage::OrientationChosen(way) => page.orientation = way,
            PrintingMessage::MarginChanged(edge, typed) => {
                // A margin that is not a number is not a margin; what was
                // typed is left on screen and the page is left alone.
                let Ok(value) = typed.trim().parse::<f32>() else {
                    return;
                };
                let value = value.max(0.0);
                match edge {
                    Edge::Left => page.margins.left = value,
                    Edge::Top => page.margins.top = value,
                    Edge::Right => page.margins.right = value,
                    Edge::Bottom => page.margins.bottom = value,
                }
            }
            PrintingMessage::Closed => {
                self.show_printing(printing::Printing::Nothing);
                return;
            }
            PrintingMessage::Printed => {
                self.print_click();
                return;
            }
        }
        self.set_page(page);
    }

    /// Whichever printing panel is showing, if either.
    fn printing_panel(&self, tokens: ThemeTokens) -> Option<Element<'_, Message>> {
        match self.printing() {
            printing::Printing::Nothing => None,
            printing::Printing::PageSetup => Some(self.page_setup_panel(tokens)),
            printing::Printing::Preview => Some(self.preview_panel(tokens)),
        }
    }

    /// `File > Page Setup...`: the paper, the way round it goes, and the
    /// margins.
    fn page_setup_panel(&self, tokens: ThemeTokens) -> Element<'_, Message> {
        let page = *self.page();

        let mut papers = row![].spacing(4);
        for paper in Paper::ALL {
            let chosen = page.paper == paper;
            let face = if chosen {
                format!("[{}]", paper.name())
            } else {
                paper.name().to_owned()
            };
            papers = papers.push(
                button(text(face).size(11))
                    .padding([3, 8])
                    .on_press(Message::Printing(PrintingMessage::PaperChosen(paper))),
            );
        }

        let mut ways = row![].spacing(4);
        for way in Orientation::ALL {
            ways = ways.push(radio(way.name(), way, Some(page.orientation), |chosen| {
                Message::Printing(PrintingMessage::OrientationChosen(chosen))
            }));
        }

        let margin = |caption: &'static str, edge: Edge, value: f32| {
            row![
                text(caption).size(11).width(Length::Fixed(50.0)),
                text_input("", &format!("{value:.0}"))
                    .on_input(
                        move |typed| Message::Printing(PrintingMessage::MarginChanged(edge, typed))
                    )
                    .size(12)
                    .padding(4)
                    .width(Length::Fixed(70.0)),
            ]
            .spacing(6)
            .align_y(Alignment::Center)
        };

        let (_, _, width, height) = page.printable();
        let body = column![
            text("Page Setup").size(13),
            row![text("Paper").size(11).width(Length::Fixed(50.0)), papers]
                .spacing(6)
                .align_y(Alignment::Center),
            ways,
            text("Margins, in millimetres").size(11),
            margin("Left", Edge::Left, page.margins.left),
            margin("Top", Edge::Top, page.margins.top),
            margin("Right", Edge::Right, page.margins.right),
            margin("Bottom", Edge::Bottom, page.margins.bottom),
            text(format!(
                "{} {}, {width:.0} by {height:.0} mm to draw on",
                page.paper.name(),
                page.orientation.name().to_lowercase()
            ))
            .size(11)
            .color(tokens.text_secondary.iced()),
            row![
                horizontal_space(),
                button(text("Close").size(12)).on_press(Message::Printing(PrintingMessage::Closed)),
            ],
        ]
        .spacing(8)
        .padding(12)
        .width(Length::Fixed(430.0));

        container(body)
            .style(move |iced_theme| chrome::menu_panel_style(tokens, iced_theme))
            .into()
    }

    /// `File > Print Preview`: the circuit on its page.
    fn preview_panel(&self, tokens: ThemeTokens) -> Element<'_, Message> {
        let page = *self.page();
        let (across, down) = page.size();
        // The page is drawn as tall as there is room for, and as wide as
        // that makes it.
        let tall = PREVIEW_HEIGHT;
        let wide = tall * across / down;

        let sheet = svg(svg::Handle::from_memory(self.drawing().into_bytes()))
            .width(Length::Fixed(wide))
            .height(Length::Fixed(tall));

        let body = column![
            text("Print Preview").size(13),
            container(sheet).padding(4),
            text(format!(
                "{} {}",
                page.paper.name(),
                page.orientation.name().to_lowercase()
            ))
            .size(11)
            .color(tokens.text_secondary.iced()),
            row![
                horizontal_space(),
                button(text("Print").size(12))
                    .on_press(Message::Printing(PrintingMessage::Printed)),
                button(text("Close").size(12)).on_press(Message::Printing(PrintingMessage::Closed)),
            ]
            .spacing(6),
        ]
        .spacing(8)
        .padding(12);

        container(body)
            .style(move |iced_theme| chrome::menu_panel_style(tokens, iced_theme))
            .into()
    }
}

#[cfg(test)]
mod tests {
    use super::{
        COMPONENT_CATEGORIES, Edge, Message, NoteKind, Orientation, Paper, Point, PrintingMessage,
        SETTINGS_FILE, SETTINGS_VARIABLE, SchematicEditor, ShapeKind, Tool, WireKind,
        command_state, help, menu, menu_targets, menu_tree, printing, settings_path, zoom,
    };
    use crate::shared::theme::CustomThemeFile;

    use tiara_core::editor_settings::EditorSettings;

    #[test]
    fn the_status_bar_follows_the_pointer() {
        let mut editor = SchematicEditor::default();
        assert_eq!(editor.pointer, (0, 0));

        editor.update(Message::PointerMoved(12, 30));
        assert_eq!(editor.pointer, (12, 30));
    }

    #[test]
    fn the_pointer_is_reported_in_whole_units() {
        // The readout carries no decimals, which is what the original shows.
        let mut editor = SchematicEditor::default();
        editor.update(Message::PointerMoved(-3, 7));

        assert_eq!(format!("X: {}", editor.pointer.0), "X: -3");
        assert_eq!(format!("Y: {}", editor.pointer.1), "Y: 7");
    }

    #[test]
    fn the_exam_manager_shows_and_hides_a_panel_rather_than_a_window() {
        // The original raises no window for this command: its Exam Manager is
        // a panel inside the editor, which the command shows and hides in
        // place.
        let mut editor = SchematicEditor::default();
        assert!(!editor.exam_panel_shown);

        editor.update(Message::MenuCommand("mnFaultManager"));
        assert!(editor.exam_panel_shown);

        editor.update(Message::MenuCommand("mnFaultManager"));
        assert!(!editor.exam_panel_shown);
    }

    #[test]
    fn no_window_is_claimed_for_the_exam_manager() {
        assert!(menu_targets::window_for("mnFaultManager").is_none());
    }

    #[test]
    fn a_part_is_picked_up_from_the_palette_and_put_down_on_the_sheet() {
        let mut editor = SchematicEditor::default();
        assert!(editor.sheet().document().is_empty());

        editor.update(Message::PickUp("R"));
        editor.update(Message::SheetClicked(4, 6));

        assert_eq!(editor.sheet().document().parts().len(), 1);
        assert_eq!(editor.sheet().document().parts()[0].kind, "R");
        assert_eq!(editor.sheet().document().parts()[0].label, "R1");
    }

    #[test]
    fn the_menu_state_follows_the_sheet_rather_than_being_kept_beside_it() {
        let mut editor = SchematicEditor::default();
        assert!(!editor.state().has_components);
        assert!(!editor.state().has_selection);
        assert!(!editor.state().can_undo);

        editor.update(Message::PickUp("R"));
        editor.update(Message::SheetClicked(0, 0));

        assert!(editor.state().has_components);
        assert!(editor.state().has_selection);
        assert!(editor.state().can_undo);
        assert!(editor.state().is_modified);
    }

    #[test]
    fn clicking_an_empty_place_drops_the_selection() {
        let mut editor = SchematicEditor::default();
        editor.update(Message::PickUp("R"));
        editor.update(Message::SheetClicked(0, 0));
        assert!(editor.state().has_selection);

        // The part stays in hand until another tool is chosen, so picking
        // things out has to be asked for before a click means that.
        editor.update(Message::MenuCommand("ToolEdit"));
        editor.update(Message::SheetClicked(40, 40));
        assert!(!editor.state().has_selection);
    }

    #[test]
    fn clicking_a_part_selects_it_again() {
        let mut editor = SchematicEditor::default();
        editor.update(Message::PickUp("R"));
        editor.update(Message::SheetClicked(3, 3));

        editor.update(Message::MenuCommand("ToolEdit"));
        editor.update(Message::SheetClicked(40, 40));
        assert!(!editor.state().has_selection);

        editor.update(Message::SheetClicked(3, 3));
        assert!(editor.state().has_selection);
    }

    #[test]
    fn the_edit_commands_act_on_the_sheet() {
        let mut editor = SchematicEditor::default();
        editor.update(Message::PickUp("R"));
        editor.update(Message::SheetClicked(0, 0));

        editor.update(Message::MenuCommand("mnRotateRight"));
        assert_eq!(editor.sheet().document().parts()[0].rotation.degrees(), 90);

        editor.update(Message::MenuCommand("mnMirror"));
        assert!(editor.sheet().document().parts()[0].mirrored);

        editor.update(Message::MenuCommand("Copy"));
        assert!(editor.state().clipboard_has_content);

        editor.update(Message::MenuCommand("Paste"));
        assert_eq!(editor.sheet().document().parts().len(), 2);

        editor.update(Message::MenuCommand("mnSelectAll"));
        editor.update(Message::MenuCommand("mnDelete"));
        assert!(editor.sheet().document().is_empty());
    }

    #[test]
    fn undo_and_redo_reach_the_sheet() {
        let mut editor = SchematicEditor::default();
        editor.update(Message::PickUp("C"));
        editor.update(Message::SheetClicked(1, 1));

        editor.update(Message::MenuCommand("mnUndo"));
        assert!(editor.sheet().document().is_empty());
        assert!(editor.state().can_redo);

        editor.update(Message::MenuCommand("mnRedo"));
        assert_eq!(editor.sheet().document().parts().len(), 1);
    }

    #[test]
    fn a_new_sheet_starts_again() {
        let mut editor = SchematicEditor::default();
        editor.update(Message::PickUp("R"));
        editor.update(Message::SheetClicked(0, 0));

        editor.update(Message::MenuCommand("mnNew"));
        assert!(editor.sheet().document().is_empty());
        assert!(!editor.state().can_undo);
        assert!(!editor.state().is_modified);
    }

    #[test]
    fn a_command_that_does_nothing_to_the_sheet_leaves_it_alone() {
        let mut editor = SchematicEditor::default();
        editor.update(Message::PickUp("R"));
        editor.update(Message::SheetClicked(0, 0));
        let before = editor.sheet().document().clone();

        editor.update(Message::MenuCommand("mnAnalysisResults"));
        assert_eq!(editor.sheet().document(), &before);
    }

    #[test]
    fn a_wire_takes_two_clicks() {
        let mut editor = SchematicEditor::default();
        editor.update(Message::MenuCommand("mnWire"));
        assert_eq!(editor.tool, Tool::Draw(WireKind::Wire));

        editor.update(Message::SheetClicked(0, 0));
        assert!(editor.sheet().document().wires().is_empty());

        editor.update(Message::SheetClicked(8, 0));
        assert_eq!(editor.sheet().document().wires().len(), 1);
    }

    #[test]
    fn a_bus_is_drawn_the_same_way_and_says_it_is_a_bus() {
        let mut editor = SchematicEditor::default();
        editor.update(Message::MenuCommand("mnBus"));
        editor.update(Message::SheetClicked(0, 0));
        editor.update(Message::SheetClicked(0, 8));

        assert_eq!(editor.sheet().document().wires()[0].kind, WireKind::Bus);
    }

    #[test]
    fn the_tool_stays_in_hand_so_several_can_be_drawn() {
        let mut editor = SchematicEditor::default();
        editor.update(Message::PickUp("R"));
        editor.update(Message::SheetClicked(0, 0));
        editor.update(Message::SheetClicked(8, 0));

        assert_eq!(editor.sheet().document().parts().len(), 2);
        assert_eq!(editor.tool, Tool::Place("R"));
    }

    #[test]
    fn choosing_another_tool_forgets_a_half_drawn_line() {
        let mut editor = SchematicEditor::default();
        editor.update(Message::MenuCommand("mnWire"));
        editor.update(Message::SheetClicked(0, 0));
        assert!(editor.started_at.is_some());

        editor.update(Message::MenuCommand("mnBus"));
        assert!(editor.started_at.is_none());

        // The click that would have finished the wire starts the bus instead.
        editor.update(Message::SheetClicked(8, 8));
        assert!(editor.sheet().document().wires().is_empty());
    }

    #[test]
    fn last_component_puts_the_last_kind_back_in_hand() {
        let mut editor = SchematicEditor::default();
        editor.update(Message::PickUp("C"));
        editor.update(Message::SheetClicked(0, 0));
        editor.update(Message::MenuCommand("mnWire"));
        assert_eq!(editor.tool, Tool::Draw(WireKind::Wire));

        editor.update(Message::MenuCommand("mnComponent"));
        assert_eq!(editor.tool, Tool::Place("C"));
    }

    #[test]
    fn last_component_on_an_empty_sheet_changes_nothing() {
        let mut editor = SchematicEditor::default();
        editor.update(Message::MenuCommand("mnWire"));
        editor.update(Message::MenuCommand("mnComponent"));

        assert_eq!(editor.tool, Tool::Draw(WireKind::Wire));
    }

    #[test]
    fn the_editing_tool_goes_back_to_picking_things_out() {
        let mut editor = SchematicEditor::default();
        editor.update(Message::PickUp("R"));
        editor.update(Message::MenuCommand("ToolEdit"));

        assert_eq!(editor.tool, Tool::Select);
    }

    #[test]
    fn every_shape_command_takes_up_the_tool_that_draws_it() {
        for kind in ShapeKind::ALL {
            let mut editor = SchematicEditor::default();
            // The command a shape names is the name the resource gives it, so
            // the menu really carries every one of these.
            assert!(menu_tree::find(kind.command()).is_some());
            editor.update(Message::MenuCommand(kind.command()));
            assert_eq!(
                editor.tool,
                Tool::Shape(kind),
                "{} should take up its own tool",
                kind.command()
            );
        }
    }

    #[test]
    fn a_shape_takes_two_clicks_like_a_wire() {
        let mut editor = SchematicEditor::default();
        editor.update(Message::MenuCommand("mnRectangle"));

        editor.update(Message::SheetClicked(1, 1));
        assert!(editor.sheet().document().shapes().is_empty());

        editor.update(Message::SheetClicked(9, 5));
        assert_eq!(editor.sheet().document().shapes().len(), 1);
        assert_eq!(
            editor.sheet().document().shapes()[0].kind,
            ShapeKind::Rectangle
        );
    }

    #[test]
    fn a_shape_fills_the_sheet_so_the_menu_follows() {
        let mut editor = SchematicEditor::default();
        assert!(!editor.state().has_components);

        editor.update(Message::MenuCommand("mnEllipse"));
        editor.update(Message::SheetClicked(0, 0));
        editor.update(Message::SheetClicked(8, 8));

        assert!(editor.state().has_components);
        assert!(editor.state().can_undo);
    }

    #[test]
    fn the_zoom_commands_move_the_choice_the_drop_down_shows() {
        let mut editor = SchematicEditor::default();
        let started = editor.zoom;

        editor.update(Message::MenuCommand("ZoomIn"));
        assert_ne!(editor.zoom, started);

        editor.update(Message::MenuCommand("ZoomNormal"));
        assert_eq!(editor.zoom, zoom::NORMAL);

        editor.update(Message::MenuCommand("ZoomOut"));
        assert_eq!(editor.zoom, "75%");
    }

    #[test]
    fn the_fits_are_reachable_from_the_menu() {
        let mut editor = SchematicEditor::default();

        for (command, expected) in [
            ("ZoomAll", "All"),
            ("PageWidth", "P. Width"),
            ("WholePage", "Whole P."),
        ] {
            editor.update(Message::MenuCommand(command));
            assert_eq!(editor.zoom, expected);
        }
    }

    #[test]
    fn the_drop_down_and_the_menu_agree_about_where_they_are() {
        let mut editor = SchematicEditor::default();
        editor.update(Message::SelectFromPicker("25%"));
        assert_eq!(editor.zoom, "25%");

        // The menu carries on from where the drop-down was left.
        editor.update(Message::MenuCommand("ZoomIn"));
        assert_eq!(editor.zoom, "50%");
    }

    #[test]
    fn a_click_lands_where_it_looks_whatever_the_zoom() {
        // A position read back through the scale it was drawn at is the
        // position it was drawn from.
        for choice in ["100%", "200%", "50%"] {
            let scale = zoom::scale(choice);
            let pixels = 6.0 * super::GRID_STEP * scale;
            assert_eq!(super::in_units(pixels, scale), 6, "at {choice}");
        }
    }

    #[test]
    fn text_input_and_output_each_take_up_the_tool_that_writes_them() {
        for kind in NoteKind::ALL {
            let mut editor = SchematicEditor::default();
            assert!(menu_tree::find(kind.command()).is_some());

            editor.update(Message::MenuCommand(kind.command()));
            assert_eq!(editor.tool, Tool::Write(kind));

            editor.update(Message::SheetClicked(2, 2));
            assert_eq!(editor.sheet().document().notes().len(), 1);
            assert_eq!(
                editor.sheet().document().notes()[0].text,
                kind.default_text()
            );
        }
    }

    #[test]
    fn writing_needs_one_click_where_a_shape_needs_two() {
        let mut editor = SchematicEditor::default();
        editor.update(Message::MenuCommand("mnText"));
        editor.update(Message::SheetClicked(1, 1));

        assert_eq!(editor.sheet().document().notes().len(), 1);
        assert!(editor.state().has_components);
        assert!(editor.state().has_selection);
    }

    #[test]
    fn hide_and_reconnect_is_one_command_going_both_ways() {
        let mut editor = SchematicEditor::default();
        editor.update(Message::PickUp("R"));
        editor.update(Message::SheetClicked(0, 0));

        editor.update(Message::MenuCommand("mnHideReconnect"));
        assert!(editor.sheet().document().parts()[0].hidden);

        editor.update(Message::MenuCommand("mnHideReconnect"));
        assert!(!editor.sheet().document().parts()[0].hidden);
    }

    #[test]
    fn the_sharing_commands_lock_and_unlock_the_selection() {
        let mut editor = SchematicEditor::default();
        editor.update(Message::PickUp("R"));
        editor.update(Message::SheetClicked(0, 0));

        editor.update(Message::MenuCommand("mnLock"));
        assert!(editor.sheet().document().parts()[0].locked);

        // A locked part is not taken away by Delete.
        editor.update(Message::MenuCommand("mnDelete"));
        assert_eq!(editor.sheet().document().parts().len(), 1);

        editor.update(Message::MenuCommand("mnUnlock"));
        assert!(!editor.sheet().document().parts()[0].locked);
    }

    #[test]
    fn clearing_the_locks_reaches_parts_that_are_not_selected() {
        let mut editor = SchematicEditor::default();
        editor.update(Message::PickUp("R"));
        editor.update(Message::SheetClicked(0, 0));
        editor.update(Message::MenuCommand("mnLock"));

        editor.update(Message::MenuCommand("ToolEdit"));
        editor.update(Message::SheetClicked(40, 40));
        assert!(!editor.state().has_selection);

        editor.update(Message::MenuCommand("mnClearLock"));
        assert!(!editor.sheet().document().parts()[0].locked);
    }

    #[test]
    fn auto_repeat_is_what_keeps_a_part_in_hand() {
        let mut editor = SchematicEditor::default();
        assert!(editor.auto_repeat);

        editor.update(Message::MenuCommand("mnAutoRepeat"));
        assert!(!editor.auto_repeat);

        editor.update(Message::PickUp("R"));
        editor.update(Message::SheetClicked(0, 0));
        assert_eq!(editor.tool, Tool::Select);
        assert_eq!(editor.sheet().document().parts().len(), 1);

        // The next click picks out rather than placing another.
        editor.update(Message::SheetClicked(20, 20));
        assert_eq!(editor.sheet().document().parts().len(), 1);
    }

    #[test]
    fn auto_wire_puts_a_corner_in_where_a_straight_wire_would_slant() {
        let mut editor = SchematicEditor::default();
        // The original starts with it on, which its Insert menu shows ticked.
        assert!(editor.settings.auto_wire);

        editor.update(Message::MenuCommand("mnWire"));
        editor.update(Message::SheetClicked(0, 0));
        editor.update(Message::SheetClicked(8, 4));

        let wires = editor.sheet().document().wires();
        assert_eq!(wires.len(), 2);
        assert_eq!(wires[0].from, Point::new(0, 0));
        assert_eq!(wires[0].to, Point::new(8, 0));
        assert_eq!(wires[1].from, Point::new(8, 0));
        assert_eq!(wires[1].to, Point::new(8, 4));
    }

    #[test]
    fn auto_wire_leaves_a_wire_alone_when_it_already_runs_along_the_grid() {
        let mut editor = SchematicEditor::default();
        editor.update(Message::MenuCommand("mnWire"));
        editor.update(Message::SheetClicked(0, 0));
        editor.update(Message::SheetClicked(8, 0));

        assert_eq!(editor.sheet().document().wires().len(), 1);
    }

    #[test]
    fn a_wire_is_drawn_straight_once_auto_wire_is_turned_off() {
        let mut editor = SchematicEditor::default();
        editor.update(Message::MenuCommand("mnAutoReWire"));
        assert!(!editor.settings.auto_wire);

        editor.update(Message::MenuCommand("mnWire"));
        editor.update(Message::SheetClicked(0, 0));
        editor.update(Message::SheetClicked(8, 4));

        let wires = editor.sheet().document().wires();
        assert_eq!(wires.len(), 1);
        assert_eq!(wires[0].to, Point::new(8, 4));
    }

    #[test]
    fn entering_a_macro_makes_the_menus_own_rules_come_true() {
        let mut editor = SchematicEditor::default();
        editor.update(Message::PickUp("R"));
        editor.update(Message::SheetClicked(0, 0));

        // Outside one, leaving is hidden and the macro commands are greyed.
        assert!(!editor.state().inside_macro);
        assert!(!command_state::is_shown(
            "mnCloseMacro",
            true,
            editor.state()
        ));
        assert!(!command_state::is_enabled(
            "mnEditMacroProperties",
            editor.state()
        ));

        editor.update(Message::MenuCommand("mnOpenMacro"));
        assert!(editor.state().inside_macro);
        assert!(command_state::is_shown(
            "mnCloseMacro",
            true,
            editor.state()
        ));
        assert!(command_state::is_enabled(
            "mnEditMacroProperties",
            editor.state()
        ));
        assert!(command_state::is_enabled("mnExportMacro", editor.state()));

        editor.update(Message::MenuCommand("mnCloseMacro"));
        assert!(!editor.state().inside_macro);
    }

    #[test]
    fn a_macro_is_not_entered_with_nothing_selected() {
        let mut editor = SchematicEditor::default();
        editor.update(Message::MenuCommand("mnOpenMacro"));

        assert!(!editor.state().inside_macro);
        // Which is why the menu greys the command: is_enabled says the same.
        assert!(!command_state::is_enabled("mnOpenMacro", editor.state()));
    }

    #[test]
    fn zoom_window_takes_two_clicks_and_brings_the_box_up_to_the_view() {
        let mut editor = SchematicEditor::default();
        editor.update(Message::MenuCommand("mnZoomWindow"));
        assert_eq!(editor.tool, Tool::ZoomWindow);

        // A box a fraction of the sheet across is drawn larger.
        editor.update(Message::SheetClicked(0, 0));
        assert_eq!(editor.zoom, zoom::NORMAL);

        editor.update(Message::SheetClicked(9, 6));
        assert_ne!(editor.zoom, zoom::NORMAL);
        assert!(zoom::choices().contains(&editor.zoom));
    }

    #[test]
    fn one_box_gives_one_zoom_and_the_pointer_goes_back_to_picking_things_out() {
        let mut editor = SchematicEditor::default();
        editor.update(Message::MenuCommand("mnZoomWindow"));
        editor.update(Message::SheetClicked(0, 0));
        editor.update(Message::SheetClicked(9, 6));

        assert_eq!(editor.tool, Tool::Select);
        assert!(editor.started_at.is_none());
    }

    #[test]
    fn the_view_switches_are_kept_and_the_menu_ticks_them() {
        let mut editor = SchematicEditor::default();
        // What the original ticks on an untouched editor.
        assert_eq!(editor.settings.is_checked("mnGrid"), Some(true));

        editor.update(Message::MenuCommand("mnGrid"));
        assert_eq!(editor.settings.is_checked("mnGrid"), Some(false));

        editor.update(Message::MenuCommand("mnGrid"));
        assert_eq!(editor.settings.is_checked("mnGrid"), Some(true));
    }

    #[test]
    fn a_setting_is_answered_by_the_settings_and_never_by_the_sheet() {
        let mut editor = SchematicEditor::default();
        editor.update(Message::PickUp("R"));
        editor.update(Message::SheetClicked(0, 0));
        let before = editor.sheet().document().clone();

        for command in EditorSettings::commands() {
            editor.update(Message::MenuCommand(command));
        }

        assert_eq!(
            editor.sheet().document(),
            &before,
            "a setting must not touch the sheet"
        );
    }

    #[test]
    fn choosing_a_language_or_a_library_unchooses_the_last() {
        let mut editor = SchematicEditor::default();
        assert_eq!(editor.settings.is_checked("mnNative"), Some(true));
        assert_eq!(editor.settings.is_checked("AltiumPCBProject1"), Some(true));

        editor.update(Message::MenuCommand("mnLanguage.ja"));
        editor.update(Message::MenuCommand("TINAPCB1"));

        assert_eq!(editor.settings.is_checked("mnNative"), Some(false));
        assert_eq!(editor.settings.is_checked("AltiumPCBProject1"), Some(false));
        assert_eq!(editor.settings.is_checked("mnLanguage.ja"), Some(true));
        assert_eq!(editor.settings.is_checked("TINAPCB1"), Some(true));
    }

    #[test]
    fn auto_wire_is_a_kept_setting_and_starts_on() {
        let mut editor = SchematicEditor::default();
        assert!(editor.settings.auto_wire);

        // Which is why a slanting wire is drawn with a corner by default.
        editor.update(Message::MenuCommand("mnWire"));
        editor.update(Message::SheetClicked(0, 0));
        editor.update(Message::SheetClicked(8, 4));
        assert_eq!(editor.sheet().document().wires().len(), 2);

        editor.update(Message::MenuCommand("mnAutoReWire"));
        assert!(!editor.settings.auto_wire);
    }

    #[test]
    fn every_command_the_settings_answer_is_one_the_menu_carries() {
        // Walked through `children_of`, because the Language entries are the
        // ones the original builds as it opens and are not in the resource.
        fn walk(entries: &'static [menu_tree::MenuEntry], into: &mut Vec<&'static str>) {
            for entry in entries {
                into.push(entry.name);
                walk(command_state::children_of(entry), into);
            }
        }

        let mut names = Vec::new();
        walk(menu_tree::MAIN_MENU, &mut names);

        for command in EditorSettings::commands() {
            assert!(names.contains(&command), "{command} should be in the menu");
        }
    }

    #[test]
    fn a_plain_editor_keeps_nothing_between_runs() {
        // So a test, and a second editor, cannot write over the settings of
        // the copy the user is looking at.
        let mut editor = SchematicEditor::default();
        editor.act_on_the_sheet("mnGrid");
        assert!(editor.settings_path.is_none());
    }

    #[test]
    fn an_editor_given_a_file_reads_it_back_the_next_time() {
        let path = std::env::temp_dir().join(format!(
            "tiara-settings-{}-{:?}.json",
            std::process::id(),
            std::thread::current().id()
        ));
        let _ = std::fs::remove_file(&path);

        // Nothing written yet, so it starts at what the original starts at.
        let mut editor = SchematicEditor::remembering(path.clone());
        assert_eq!(editor.settings.is_checked("mnGrid"), Some(true));

        editor.act_on_the_sheet("mnGrid");
        editor.act_on_the_sheet("mnShowWireIDs");
        assert!(path.exists(), "the change should have been written");

        // A second editor over the same file opens on what the first chose.
        let next = SchematicEditor::remembering(path.clone());
        assert_eq!(next.settings.is_checked("mnGrid"), Some(false));
        assert_eq!(next.settings.is_checked("mnShowWireIDs"), Some(true));

        let _ = std::fs::remove_file(&path);
    }

    #[test]
    fn a_file_that_is_not_settings_leaves_the_editor_at_the_start() {
        let path = std::env::temp_dir().join(format!(
            "tiara-settings-bad-{}-{:?}.json",
            std::process::id(),
            std::thread::current().id()
        ));
        std::fs::write(&path, "this is not what was written there").unwrap();

        let editor = SchematicEditor::remembering(path.clone());
        assert_eq!(editor.settings.is_checked("mnGrid"), Some(true));

        let _ = std::fs::remove_file(&path);
    }

    #[test]
    fn the_place_the_settings_are_kept_can_be_named() {
        // The test runner shares one environment, so this reads the variable
        // rather than setting it - what matters is that the name is honoured
        // and that the fallback ends at the right file either way.
        let path = settings_path();
        if std::env::var_os(SETTINGS_VARIABLE).is_none() {
            assert_eq!(path.file_name().unwrap(), SETTINGS_FILE);
            assert_eq!(path.parent().unwrap().file_name().unwrap(), "TIARA");
        }
    }

    #[test]
    fn a_plain_editor_offers_no_parts_of_its_own() {
        // The catalogue is read from the installation, and a test must not
        // see whatever this machine happens to have installed.
        let editor = SchematicEditor::default();
        assert!(!editor.catalogue().is_loaded());
        assert!(editor.part_names.is_empty());
        assert_eq!(editor.chosen_component, None);
    }

    /// An editor offering the parts named, as one reading an installed
    /// catalogue would.
    fn offering(names: &[&str]) -> SchematicEditor {
        SchematicEditor {
            part_names: names.iter().map(|name| (*name).to_owned()).collect(),
            ..SchematicEditor::default()
        }
    }

    #[test]
    fn choosing_a_part_from_the_list_puts_it_in_hand() {
        let mut editor = offering(&["OPA364", "AD1580"]);

        editor.update(Message::ComponentChosen("AD1580".to_owned()));
        assert_eq!(editor.tool, Tool::PlacePart(1));
        assert_eq!(editor.chosen_component.as_deref(), Some("AD1580"));

        // The next click on the sheet puts that part down, by name.
        editor.update(Message::SheetClicked(4, 4));
        let parts = editor.sheet().document().parts();
        assert_eq!(parts.len(), 1);
        assert_eq!(parts[0].kind, "AD1580");
    }

    #[test]
    fn a_part_the_list_does_not_have_puts_nothing_in_hand() {
        let mut editor = offering(&["OPA364"]);

        editor.update(Message::ComponentChosen("nothing like it".to_owned()));
        assert_eq!(editor.tool, Tool::Select);
        // What was typed is still shown, which is what the original does.
        assert_eq!(editor.chosen_component.as_deref(), Some("nothing like it"));
    }

    #[test]
    fn a_part_in_hand_stays_in_hand_unless_auto_repeat_is_off() {
        let mut editor = offering(&["OPA364"]);
        editor.update(Message::ComponentChosen("OPA364".to_owned()));

        editor.update(Message::SheetClicked(4, 4));
        editor.update(Message::SheetClicked(8, 4));
        assert_eq!(editor.sheet().document().parts().len(), 2);

        editor.auto_repeat = false;
        editor.update(Message::SheetClicked(12, 4));
        assert_eq!(editor.tool, Tool::Select);
    }

    #[test]
    fn an_editor_with_an_installation_offers_the_parts_it_has() {
        // Read at run time and never committed. Where there is no
        // installation there is nothing to offer and nothing to check.
        if help::install_folder().is_none() {
            return;
        }

        let path = std::env::temp_dir().join(format!(
            "tiara-catalogue-settings-{}-{:?}.json",
            std::process::id(),
            std::thread::current().id()
        ));
        let _ = std::fs::remove_file(&path);

        let editor = SchematicEditor::remembering(path.clone());
        assert!(editor.catalogue().is_loaded());
        assert!(editor.part_names.len() > 1_000);
        // Every name offered is one the catalogue calls a part.
        assert!(editor.catalogue().find(&editor.part_names[0]).is_some());

        let _ = std::fs::remove_file(&path);
    }

    /// An editor whose component bar holds two tabs.
    fn with_a_bar() -> SchematicEditor {
        use tiara_core::component_registry::{Entry, Group, Registry, Source};

        let button = |id: &str, path: &str| Entry {
            id: id.to_owned(),
            code: 1,
            handler: "TThing".to_owned(),
            source: Source::Library("AnaComps.dll".to_owned()),
            icon: 0,
            icon_path: path.to_owned(),
        };

        SchematicEditor {
            bar: Registry::holding(vec![
                Group {
                    id: "id_group_basic".to_owned(),
                    shown: true,
                    icon_path: None,
                    entries: vec![
                        button("id_component_resistor", "basic/resistor"),
                        button("id_component_capacitor", "basic/capacitor"),
                    ],
                },
                Group {
                    id: "id_group_train_exam".to_owned(),
                    shown: false,
                    icon_path: None,
                    entries: vec![button("id_component_jumper", "special/jumper")],
                },
            ]),
            ..SchematicEditor::default()
        }
    }

    #[test]
    fn without_an_installation_the_tabs_are_the_recovered_ones() {
        let editor = SchematicEditor::default();
        assert_eq!(editor.category_names(), COMPONENT_CATEGORIES);
        assert!(editor.bar_buttons(0).is_empty());
    }

    #[test]
    fn the_tabs_and_their_buttons_come_from_the_installed_bar() {
        let editor = with_a_bar();

        // One tab, because the other is not shown - and its caption is the
        // bar's own, since the counts do not agree with the recovered
        // fifteen.
        assert_eq!(editor.category_names(), ["Basic"]);
        assert_eq!(editor.bar_buttons(0).len(), 2);
        assert_eq!(editor.bar_part(0, 0).as_deref(), Some("Resistor"));
        assert_eq!(editor.bar_part(0, 1).as_deref(), Some("Capacitor"));
        assert_eq!(editor.bar_part(0, 7), None);
        assert_eq!(editor.bar_part(9, 0), None);
    }

    #[test]
    fn pressing_a_button_on_the_bar_puts_that_part_in_hand() {
        let mut editor = with_a_bar();
        editor.update(Message::PickUpFromBar(0, 1));

        assert_eq!(editor.tool, Tool::PlaceFromBar(0, 1));
        assert_eq!(editor.chosen_component.as_deref(), Some("Capacitor"));

        editor.update(Message::SheetClicked(4, 4));
        let parts = editor.sheet().document().parts();
        assert_eq!(parts.len(), 1);
        assert_eq!(parts[0].kind, "Capacitor");
    }

    #[test]
    fn a_button_that_is_not_there_puts_nothing_in_hand() {
        let mut editor = with_a_bar();
        editor.update(Message::PickUpFromBar(0, 9));

        assert_eq!(editor.tool, Tool::Select);
        assert_eq!(editor.chosen_component, None);
    }

    #[test]
    fn an_installed_bar_fills_all_fifteen_tabs() {
        // Read at run time and never committed. Where there is no
        // installation there is nothing to check.
        if help::install_folder().is_none() {
            return;
        }
        let path = std::env::temp_dir().join(format!(
            "tiara-bar-settings-{}-{:?}.json",
            std::process::id(),
            std::thread::current().id()
        ));
        let _ = std::fs::remove_file(&path);

        let editor = SchematicEditor::remembering(path.clone());
        assert!(editor.bar().is_loaded());

        // The installed bar and the recovered captions agree on how many
        // there are, so the recovered ones are used.
        let names = editor.category_names();
        assert_eq!(names.len(), COMPONENT_CATEGORIES.len());
        assert_eq!(names, COMPONENT_CATEGORIES);

        // And every tab has something on it.
        for (tab, name) in names.iter().enumerate() {
            assert!(
                !editor.bar_buttons(tab).is_empty(),
                "{name} should hold buttons"
            );
        }

        let _ = std::fs::remove_file(&path);
    }

    #[test]
    fn without_an_installation_a_bar_button_has_no_picture() {
        let editor = with_a_bar();
        let entry = &editor.bar_buttons(0)[0];
        assert!(editor.icon_of(entry).is_none());
        // And the tooltip is just what it is called.
        assert_eq!(editor.describe(entry), "Resistor");
    }

    #[test]
    fn a_button_that_stands_for_a_category_says_how_many_parts_are_in_it() {
        use tiara_core::component_registry::{Entry, Group, Registry, Source};
        use tiara_core::device_catalogue::Catalogue;

        let editor = SchematicEditor {
            catalogue: Catalogue::holding(vec![
                tiara_core::device_catalogue::read_line(
                    "SUBCKT OPA364 A B Texas:OPA364 [OpAmp]",
                    "Texas",
                )
                .unwrap(),
            ]),
            bar: Registry::holding(vec![Group {
                id: "id_group_spice_macros".to_owned(),
                shown: true,
                icon_path: None,
                entries: vec![Entry {
                    id: "id_component_operational_amplifiers".to_owned(),
                    code: -1100,
                    handler: "TSpiceMacroCompHandler".to_owned(),
                    source: Source::Category("[OpAmp]".to_owned()),
                    icon: 119,
                    icon_path: "manufacturers_models/operational_amplifiers".to_owned(),
                }],
            }]),
            ..SchematicEditor::default()
        };

        let entry = &editor.bar_buttons(0)[0];
        assert_eq!(
            editor.describe(entry),
            "Operational Amplifiers [OpAmp], 1 installed"
        );
    }

    #[test]
    fn an_installed_bar_draws_a_picture_on_its_buttons() {
        // Read at run time and never committed.
        if help::install_folder().is_none() {
            return;
        }
        let path = std::env::temp_dir().join(format!(
            "tiara-icons-settings-{}-{:?}.json",
            std::process::id(),
            std::thread::current().id()
        ));
        let _ = std::fs::remove_file(&path);

        let editor = SchematicEditor::remembering(path.clone());
        let buttons = editor.bar_buttons(0);
        assert!(!buttons.is_empty());
        assert!(
            buttons.iter().all(|entry| editor.icon_of(entry).is_some()),
            "every button on the first tab should have its picture"
        );

        let _ = std::fs::remove_file(&path);
    }

    /// A key with a letter on it.
    fn letter(which: char) -> iced::keyboard::Key {
        iced::keyboard::Key::Character(which.to_string().into())
    }

    /// Alt, and nothing else.
    fn alt() -> iced::keyboard::Modifiers {
        iced::keyboard::Modifiers::ALT
    }

    /// No modifier at all.
    fn plain() -> iced::keyboard::Modifiers {
        iced::keyboard::Modifiers::empty()
    }

    #[test]
    fn the_menu_starts_shut() {
        let editor = SchematicEditor::default();
        assert!(!editor.menu_is_open());
        assert_eq!(editor.open_menu.root, None);
    }

    #[test]
    fn pressing_a_root_opens_it_and_pressing_it_again_shuts_it() {
        let mut editor = SchematicEditor::default();
        editor.update(Message::MenuRootPressed(1));
        assert_eq!(editor.open_menu.root, Some(1));

        editor.update(Message::MenuRootPressed(1));
        assert!(!editor.menu_is_open());
    }

    #[test]
    fn moving_across_the_bar_opens_the_next_only_while_one_is_open() {
        let mut editor = SchematicEditor::default();
        // Nothing open, so moving over a root opens nothing.
        editor.update(Message::MenuRootHovered(2));
        assert!(!editor.menu_is_open());

        editor.update(Message::MenuRootPressed(0));
        editor.update(Message::MenuRootHovered(2));
        assert_eq!(editor.open_menu.root, Some(2));
    }

    #[test]
    fn alt_and_an_underlined_letter_opens_that_menu() {
        let mut editor = SchematicEditor::default();
        // `File` underlines its F, which is the first root.
        assert_eq!(editor.navigate_menu(&letter('f'), alt()), None);
        assert_eq!(editor.open_menu.root, Some(0));

        // And a letter no root underlines leaves what is open alone.
        assert_eq!(editor.navigate_menu(&letter('q'), alt()), None);
        assert_eq!(editor.open_menu.root, Some(0));
    }

    #[test]
    fn the_case_of_the_letter_does_not_matter() {
        let mut editor = SchematicEditor::default();
        editor.navigate_menu(&letter('F'), alt());
        assert_eq!(editor.open_menu.root, Some(0));
    }

    #[test]
    fn a_letter_inside_an_open_menu_runs_its_command_and_shuts_the_menu() {
        let mut editor = SchematicEditor::default();
        editor.navigate_menu(&letter('f'), alt());

        // `New` is the first entry of File and underlines its N.
        let chosen = editor.navigate_menu(&letter('n'), plain());
        assert_eq!(chosen, Some("mnNew"));
        assert!(!editor.menu_is_open());
    }

    #[test]
    fn a_letter_belonging_to_a_greyed_command_does_nothing() {
        let mut editor = SchematicEditor::default();
        editor.navigate_menu(&letter('f'), alt());

        // Save is greyed on an empty sheet, so its letter chooses nothing
        // and the menu stays open.
        assert!(!command_state::is_enabled("Save", editor.state()));
        assert_eq!(editor.navigate_menu(&letter('s'), plain()), None);
        assert!(editor.menu_is_open());
    }

    #[test]
    fn a_letter_that_opens_a_submenu_opens_it_rather_than_running_anything() {
        let mut editor = SchematicEditor::default();
        // View, whose Zoom entry opens one.
        let view = menu::roots(editor.state())
            .iter()
            .position(|entry| entry.caption == "View")
            .expect("the View menu");
        editor.update(Message::MenuRootPressed(view));

        let zoom = command_state::children_of(menu::roots(editor.state())[view])
            .iter()
            .find(|entry| entry.caption.starts_with("Zoom"))
            .expect("the Zoom entry");
        let mark = menu::accelerator_of(zoom).expect("Zoom underlines a letter");

        assert_eq!(editor.navigate_menu(&letter(mark), plain()), None);
        assert_eq!(editor.open_menu.inside, Some(zoom.name));
        assert!(editor.menu_is_open());
    }

    #[test]
    fn escape_shuts_the_submenu_first_and_then_the_menu() {
        let mut editor = SchematicEditor::default();
        editor.update(Message::MenuRootPressed(0));
        editor.update(Message::MenuEntryOpened("Export"));
        assert_eq!(editor.open_menu.inside, Some("Export"));

        let escape = iced::keyboard::Key::Named(iced::keyboard::key::Named::Escape);
        editor.navigate_menu(&escape, plain());
        assert_eq!(editor.open_menu.inside, None);
        assert!(editor.menu_is_open());

        editor.navigate_menu(&escape, plain());
        assert!(!editor.menu_is_open());
    }

    #[test]
    fn a_key_the_menu_does_not_want_is_left_alone() {
        let mut editor = SchematicEditor::default();
        // Nothing open and no Alt, so the menu wants nothing.
        assert_eq!(editor.navigate_menu(&letter('n'), plain()), None);
        assert!(!editor.menu_is_open());
    }

    #[test]
    fn choosing_a_command_from_the_menu_shuts_it() {
        let mut editor = SchematicEditor::default();
        editor.update(Message::MenuRootPressed(0));
        editor.update(Message::MenuCommand("mnNew"));
        assert!(!editor.menu_is_open());
    }

    #[test]
    fn the_letters_the_roots_underline_are_the_resources_own() {
        // The original underlines these, and two of them are the same
        // letter: Insert and Interactive both take the I. That is the
        // resource's own doing rather than anything here, so Alt and I
        // opens the first of the two - which is the one the bar draws
        // first, and what Windows itself does with a repeated letter.
        let state = command_state::EditorState::default();
        let marks: Vec<(&str, Option<char>)> = menu::roots(state)
            .into_iter()
            .map(|root| (root.caption, menu::accelerator_of(root)))
            .collect();

        assert_eq!(
            marks,
            [
                ("File", Some('f')),
                ("Edit", Some('e')),
                ("Insert", Some('i')),
                ("View", Some('v')),
                ("Analysis", Some('a')),
                ("Interactive", Some('i')),
                ("T&M", Some('t')),
                ("Tools", Some('o')),
                ("Help", Some('h')),
            ]
        );

        assert_eq!(menu::root_for('i', state), Some(2));
    }

    #[test]
    fn properties_offers_the_label_of_the_part_that_is_picked_out() {
        let mut editor = SchematicEditor::default();
        let resistor = editor.sheet_mut().place("R", Point::new(4, 4));
        editor.sheet_mut().rename(resistor, "R1".to_owned());
        editor.sheet_mut().select(resistor, false);

        editor.update(Message::MenuCommand("mnEditAttributes"));
        assert_eq!(editor.properties_of, Some(resistor));
        assert_eq!(editor.typed_label, "R1");
    }

    #[test]
    fn a_label_typed_in_the_panel_is_kept_when_it_is_accepted() {
        let mut editor = SchematicEditor::default();
        let resistor = editor.sheet_mut().place("R", Point::new(4, 4));
        editor.sheet_mut().select(resistor, false);
        editor.update(Message::MenuCommand("mnEditAttributes"));

        editor.update(Message::LabelChanged("R7".to_owned()));
        editor.update(Message::PropertiesClosed(true));

        assert_eq!(editor.properties_of, None);
        assert!(editor.typed_label.is_empty());
        assert_eq!(editor.sheet().part_called("R7"), Some(resistor));
    }

    #[test]
    fn a_label_typed_in_the_panel_is_dropped_when_it_is_cancelled() {
        let mut editor = SchematicEditor::default();
        let resistor = editor.sheet_mut().place("R", Point::new(4, 4));
        editor.sheet_mut().rename(resistor, "R1".to_owned());
        editor.sheet_mut().select(resistor, false);
        editor.update(Message::MenuCommand("mnEditAttributes"));

        editor.update(Message::LabelChanged("R7".to_owned()));
        editor.update(Message::PropertiesClosed(false));

        assert_eq!(editor.properties_of, None);
        assert!(editor.sheet().part_called("R7").is_none());
        assert!(editor.sheet().part_called("R1").is_some());
    }

    #[test]
    fn renaming_a_part_through_the_panel_can_be_undone() {
        let mut editor = SchematicEditor::default();
        let resistor = editor.sheet_mut().place("R", Point::new(4, 4));
        editor.sheet_mut().rename(resistor, "R1".to_owned());
        editor.sheet_mut().select(resistor, false);

        editor.update(Message::MenuCommand("mnEditAttributes"));
        editor.update(Message::LabelChanged("R7".to_owned()));
        editor.update(Message::PropertiesClosed(true));
        editor.update(Message::MenuCommand("mnUndo"));

        assert!(editor.sheet().part_called("R1").is_some());
    }

    #[test]
    fn properties_with_nothing_picked_out_opens_nothing() {
        let mut editor = SchematicEditor::default();
        // Placing a part picks it out, so it is put down again first.
        editor.sheet_mut().place("R", Point::new(4, 4));
        editor.sheet_mut().clear_selection();

        editor.update(Message::MenuCommand("mnEditAttributes"));
        assert_eq!(editor.properties_of, None);
    }

    #[test]
    fn page_setup_opens_a_panel_and_print_preview_opens_the_other() {
        let mut editor = SchematicEditor::default();
        assert_eq!(editor.printing(), printing::Printing::Nothing);

        editor.update(Message::MenuCommand("PrintSetup"));
        assert_eq!(editor.printing(), printing::Printing::PageSetup);

        editor.update(Message::MenuCommand("mnPrintPreview"));
        assert_eq!(editor.printing(), printing::Printing::Preview);

        editor.update(Message::Printing(PrintingMessage::Closed));
        assert_eq!(editor.printing(), printing::Printing::Nothing);
    }

    #[test]
    fn choosing_a_page_changes_what_is_drawn() {
        let mut editor = SchematicEditor::default();
        editor.update(Message::Printing(PrintingMessage::PaperChosen(Paper::A3)));
        editor.update(Message::Printing(PrintingMessage::OrientationChosen(
            Orientation::Landscape,
        )));

        assert_eq!(editor.page().paper, Paper::A3);
        assert_eq!(editor.page().orientation, Orientation::Landscape);
        assert!(editor.drawing().contains("width=\"1190."));
    }

    #[test]
    fn a_margin_that_is_not_a_number_leaves_the_page_alone() {
        let mut editor = SchematicEditor::default();
        let before = *editor.page();

        editor.update(Message::Printing(PrintingMessage::MarginChanged(
            Edge::Left,
            "wide".to_owned(),
        )));
        assert_eq!(*editor.page(), before);

        editor.update(Message::Printing(PrintingMessage::MarginChanged(
            Edge::Left,
            " 20 ".to_owned(),
        )));
        assert!((editor.page().margins.left - 20.0).abs() < f32::EPSILON);
    }

    #[test]
    fn a_margin_is_never_less_than_nothing() {
        let mut editor = SchematicEditor::default();
        editor.update(Message::Printing(PrintingMessage::MarginChanged(
            Edge::Top,
            "-40".to_owned(),
        )));
        assert!((editor.page().margins.top - 0.0).abs() < f32::EPSILON);
    }

    #[test]
    fn the_page_is_kept_between_runs() {
        let path = std::env::temp_dir().join(format!(
            "tiara-page-{}-{:?}.json",
            std::process::id(),
            std::thread::current().id()
        ));
        let _ = std::fs::remove_file(&path);

        let mut editor = SchematicEditor::remembering(path.clone());
        editor.update(Message::Printing(PrintingMessage::PaperChosen(
            Paper::Legal,
        )));

        let next = SchematicEditor::remembering(path.clone());
        assert_eq!(next.page().paper, Paper::Legal);

        let _ = std::fs::remove_file(&path);
    }

    #[test]
    fn the_preview_draws_what_is_on_the_sheet() {
        let mut editor = SchematicEditor::default();
        editor.sheet_mut().place("R", Point::new(4, 4));
        editor.update(Message::MenuCommand("mnPrintPreview"));

        let drawn = editor.drawing();
        assert!(drawn.contains(">R1<"));
        // And the panel builds without falling over.
        let _ = editor.view(&CustomThemeFile::default());
    }

    #[test]
    fn the_three_library_commands_read_the_library_again() {
        let mut editor = SchematicEditor::default();
        for command in [
            "mnReReadSymbolDatabase",
            "mnReCompileLibrary",
            "mnReBuildLibrary",
        ] {
            editor.said = None;
            editor.update(Message::MenuCommand(command));
            // Each one says what it found, so none of them looks like a
            // command that did nothing.
            assert!(
                editor.said().is_some(),
                "{command} should say what it found"
            );
        }
    }

    #[test]
    fn re_reading_says_what_it_found_or_that_it_found_nothing() {
        // The command reads the installation whether or not the editor was
        // made with one - that is its whole job - so what it says depends
        // on whether this machine has one.
        let mut editor = SchematicEditor::default();
        editor.update(Message::MenuCommand("mnReBuildLibrary"));

        let said = editor.said().expect("it should say something");
        if help::install_folder().is_some() {
            assert!(said.contains("parts in"), "{said}");
            assert!(said.contains("on the component bar"), "{said}");
        } else {
            assert_eq!(said, "no installed library was found to read");
        }
    }

    #[test]
    fn re_reading_an_installed_library_says_what_is_in_it() {
        if help::install_folder().is_none() {
            return;
        }
        let path = std::env::temp_dir().join(format!(
            "tiara-reread-{}-{:?}.json",
            std::process::id(),
            std::thread::current().id()
        ));
        let _ = std::fs::remove_file(&path);

        let mut editor = SchematicEditor::remembering(path.clone());
        let before = editor.part_names.len();
        editor.update(Message::MenuCommand("mnReReadSymbolDatabase"));

        // The same library, read again, holds the same parts.
        assert_eq!(editor.part_names.len(), before);
        assert!(editor.said().is_some_and(|said| said.contains("parts in")));

        let _ = std::fs::remove_file(&path);
    }

    #[test]
    fn the_wire_ids_setting_now_has_something_to_show() {
        let mut editor = SchematicEditor::default();
        editor
            .sheet_mut()
            .draw_wire(Point::new(0, 0), Point::new(4, 0), WireKind::Wire);
        editor
            .sheet_mut()
            .draw_wire(Point::new(0, 8), Point::new(4, 8), WireKind::Wire);

        // Two nets, because the two wires do not touch.
        let nets = tiara_core::netlist::nets(editor.sheet().document());
        assert_eq!(nets.len(), 2);
        assert_eq!(nets[0].name(), "N1");

        // The setting starts off, and turning it on draws them.
        assert!(!editor.settings.wire_ids);
        editor.update(Message::MenuCommand("mnShowWireIDs"));
        assert!(editor.settings.wire_ids);
        let _ = editor.view(&CustomThemeFile::default());
    }
}
