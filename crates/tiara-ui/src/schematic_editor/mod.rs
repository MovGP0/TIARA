pub mod chrome;
pub mod command_state;
pub mod documents;
pub mod external;
pub mod help;
mod inventory;
mod menu;
pub mod menu_targets;
pub mod menu_tree;
pub mod shortcuts;
pub mod toolbars;
pub mod zoom;

use iced::widget::{
    Row, button, column, container, horizontal_space, image, mouse_area, pick_list, row,
    scrollable, text, tooltip,
};
use iced::{Alignment, Element, Length};

use std::path::PathBuf;

use tiara_core::editor_settings::EditorSettings;
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

/// How tall the palette strip is, so it does not change height per category.
const PALETTE_HEIGHT: f32 = 44.0;

/// How far a pasted copy lands from what it was copied from.
///
/// The original offsets it so the copy can be told from the original rather
/// than sitting exactly on top of it.
const PASTE_OFFSET: Point = Point::new(2, 2);

/// The command that shows and hides the exam panel.
const EXAM_PANEL_COMMAND: &str = "mnFaultManager";

/// Where the editor's settings are kept, if it is told.
const SETTINGS_VARIABLE: &str = "TIARA_SETTINGS";

/// What that file is called.
const SETTINGS_FILE: &str = "editor-settings.json";

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
    /// The original's help file, where this machine has an installation.
    ///
    /// Looked for once when the editor is made rather than every time the
    /// menu is drawn: the answer does not change while the program runs, and
    /// the menu is drawn many times a second.
    help_file: Option<PathBuf>,
    /// What went wrong the last time a file was read or written.
    ///
    /// The status bar says so rather than a dialog: a circuit that could not
    /// be read is worth telling someone about, and worth their being able to
    /// go on reading afterwards.
    trouble: Option<String>,
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
            help_file: help::help_file(),
            trouble: None,
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
    fn sheet(&self) -> &Sheet {
        self.workspace.active().sheet()
    }

    /// The sheet being worked on, to draw on.
    fn sheet_mut(&mut self) -> &mut Sheet {
        self.workspace.active_mut().sheet_mut()
    }

    /// An editor that keeps its settings in the file it is given.
    ///
    /// What was chosen last time is read back at the start, and every later
    /// change is written as it is made rather than on the way out, so a run
    /// that ends badly does not lose it.
    #[must_use]
    pub fn remembering(path: PathBuf) -> Self {
        Self {
            settings: EditorSettings::read(&path),
            settings_path: Some(path),
            ..Self::default()
        }
    }

    /// Opens the original's help, where this machine has an installation.
    ///
    /// Nothing is said when there is none: the command is greyed in that
    /// case, so getting here at all means one was found.
    fn show_the_help(&mut self) {
        let Some(file) = self.help_file.clone() else {
            return;
        };
        self.trouble = help::show(&file)
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
            Message::SelectDocument(at) => {
                self.workspace.activate(at);
                self.take_up(Tool::Select);
            }
            Message::MenuCommand(name) => {
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
            self.trouble = external::open_in_the_browser(address)
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
            container(menu::view(tokens, self.state(), &self.settings))
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

        container(content)
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
    /// filled by the original from its component library, which is not
    /// recovered, so it offers nothing and says so.
    fn tool_picker(&self, item: &'static toolbars::ToolItem, width: f32) -> Element<'_, Message> {
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
    /// The original fills this from the component library it loads, and that
    /// library is not part of the recovered resource, so only the first
    /// category has parts here — the ones the screenshot shows. The rest say so
    /// rather than repeating the first category's parts under every tab.
    fn component_palette(&self, tokens: ThemeTokens) -> Element<'_, Message> {
        let category = COMPONENT_CATEGORIES
            .get(self.selected_category)
            .copied()
            .unwrap_or_default();

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
                text("parts come from the component library, which is not part of the recovered resource")
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
        let tabs = COMPONENT_CATEGORIES
            .iter()
            .enumerate()
            .map(|(index, category)| {
                let is_selected = index == self.selected_category;

                Element::from(
                    button(text(*category).size(12))
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
        let mut drawn = iced::widget::Stack::new().push(grid);
        for note in self.sheet().document().notes() {
            let colour = if self.sheet().document().is_selected(note.id) {
                tokens.accent.iced()
            } else {
                tokens.text.iced()
            };
            drawn = drawn.push(place_at(
                note.at,
                scale,
                text(note.text.clone()).size(11).color(colour).into(),
            ));
        }
        for shape in self.sheet().document().shapes() {
            drawn = drawn.push(place_at(
                shape.from,
                scale,
                text(format!("{:?}", shape.kind))
                    .size(10)
                    .color(tokens.text_secondary.iced())
                    .into(),
            ));
        }
        for wire in self.sheet().document().wires() {
            drawn = drawn.push(place_at(
                wire.from,
                scale,
                text("─").size(12).color(tokens.text.iced()).into(),
            ));
        }
        for part in self.sheet().document().parts() {
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
                part.at,
                scale,
                column![
                    text(face).size(13).color(colour),
                    text(part.label.clone()).size(10).color(colour),
                ]
                .into(),
            ));
        }

        let sheet = container(drawn)
            .padding(12)
            .width(Length::Fill)
            .height(Length::Fill)
            .style(move |iced_theme| chrome::canvas_style(tokens, canvas, iced_theme));

        // The status bar reports where the pointer is, and a click puts down
        // whatever the palette handed over, so the sheet has to say both.
        mouse_area(sheet)
            .on_move(move |point| {
                Message::PointerMoved(in_units(point.x, scale), in_units(point.y, scale))
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
        // What went wrong reading or writing a file is worth more than which
        // command was last chosen, so it takes the same place and wins it.
        let chosen = self.trouble().map_or(chosen, ToOwned::to_owned);

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

#[cfg(test)]
mod tests {
    use super::{
        Message, NoteKind, Point, SETTINGS_FILE, SETTINGS_VARIABLE, SchematicEditor, ShapeKind,
        Tool, WireKind, command_state, menu_targets, menu_tree, settings_path, zoom,
    };

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
}
