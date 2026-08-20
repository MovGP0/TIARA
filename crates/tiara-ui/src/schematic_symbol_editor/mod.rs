//! Cohesive state and Iced adapter for the recovered `ShapeEdit` window.

mod adapters;
mod core;

use std::path::Path;

use iced::widget::{button, column, container, radio, row, text};
use iced::{Element, Length};

pub use adapters::{
    ClipboardPayload, ColorChoice, DuplicateDecision, FontChoice, PinPropertyUpdate,
    ShapeClipboardPort, ShapeCodec, ShapeColorPort, ShapeFilePort, ShapeFontPort, ShapeHelpPort,
    ShapeHostPort, ShapeImportPort, ShapeWizardPort, SynchronizationValues, UnsavedDecision,
};
pub use core::{Bounds, Device, Document, NativeColor, ObjectId, ObjectKind, ShapeObject};

use crate::shared::window_shell;

pub const TITLE: &str = "Noname.shp - Schematic Symbol Editor";
pub const SCREENSHOT: &str = "screenshots/Schematic_Symbol_Editor_WIndow.png";
pub const FORM_RESOURCE: &str = "ShapeEdit";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01792840");
pub const LIBRARY_EVALUATION: &str = "Iced supplies maintained widgets and typed messages. The standard library supplies deterministic collections and paths. The recovered DDB encoding, native clipboard formats, dialogs, help dispatch, colors, fonts, import workflow, wizard, and host integration remain behind typed adapters because no maintained Rust crate proves compatibility with those application-specific contracts.";

const STATUS: &str = "Standard & Dir: EU    X: 60 Y: 144";
const MENUS: &[(&str, &[&str])] = &[
    ("File", &["New", "Open...", "Save", "Save As...", "Close"]),
    ("Edit", &["Undo", "Cut", "Copy", "Paste", "Select All"]),
    ("Draw", &["Line", "Rectangle", "Ellipse", "Text", "Pin"]),
    ("View", &["Grid", "Zoom In", "Zoom Out", "Redraw"]),
    ("Help", &["Contents", "About"]),
];
const TOOLBAR: &[&str] = &[
    "Properties",
    "Save",
    "Copy",
    "Paste",
    "Select",
    "Line",
    "Rectangle",
    "Ellipse",
    "Text",
    "Color",
    "Undo",
    "Redo",
    "Grid",
    "Zoom",
];
const PIN_TOOLS: &[(i64, &str)] = &[
    (0, "NW"),
    (1, "N"),
    (2, "NE"),
    (3, "W"),
    (4, "E"),
    (5, "SW"),
    (6, "S"),
    (7, "SE"),
];

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Tool {
    Edit,
    Line,
    Rectangle,
    Ellipse,
    Arc,
    Text,
    Pin(i64),
    Polygon,
    Bitmap,
    CursorRectangle,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct Viewport {
    pub zoom_index: u8,
    pub scale: f32,
    pub center: Option<(f32, f32)>,
    pub fit_bounds: Option<Bounds>,
    pub recenter_generation: u64,
}

impl Default for Viewport {
    fn default() -> Self {
        Self {
            zoom_index: 0,
            scale: 1.0,
            center: None,
            fit_bounds: None,
            recenter_generation: 0,
        }
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct Visibility {
    pub grid: bool,
    pub pin_markers: bool,
    pub supplementary: bool,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct Interaction {
    pub snap: bool,
    pub auto_sensing: bool,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct ModalState {
    pub embedded: bool,
    pub result: Option<u8>,
}

#[derive(Debug)]
pub struct Window {
    pub document: Document,
    pub tool: Tool,
    pub viewport: Viewport,
    pub visibility: Visibility,
    pub interaction: Interaction,
    pub modal: ModalState,
    pub line_width: u8,
    pub object_color: NativeColor,
    pub fill_color: NativeColor,
    pub custom_colors: Vec<NativeColor>,
    pub font: FontChoice,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            document: Document::default(),
            tool: Tool::Edit,
            viewport: Viewport::default(),
            visibility: Visibility::default(),
            interaction: Interaction::default(),
            modal: ModalState::default(),
            line_width: 1,
            object_color: NativeColor::default(),
            fill_color: NativeColor::default(),
            custom_colors: Vec::new(),
            font: FontChoice {
                family: "Default".to_owned(),
                size_points: 10,
                bold: false,
                italic: false,
            },
        }
    }
}

#[derive(Debug, Clone, Copy)]
pub enum Message {
    LineWidthSelected(u8),
    ToolSelected(Tool),
    Redraw,
    CommandSelected,
}

impl Window {
    pub fn update(&mut self, message: Message) {
        match message {
            Message::LineWidthSelected(value) => {
                self.set_pen_width(value);
            }
            Message::ToolSelected(tool) => self.tool = tool,
            Message::Redraw => self.document.redraw(),
            Message::CommandSelected => {}
        }
    }

    /// `FUN_01792840` at `0x01792840`: selects and applies the object color.
    ///
    /// # Errors
    /// Returns an error when the native color dialog cannot complete.
    pub fn select_object_color(&mut self, port: &mut impl ShapeColorPort) -> Result<usize, String> {
        let Some(choice) = port.choose_color(self.object_color, &self.custom_colors)? else {
            return Ok(0);
        };
        self.object_color = choice.color;
        self.custom_colors = choice.custom_colors;
        Ok(self.document.apply_object_color(choice.color))
    }

    /// `FUN_01794980` at `0x01794980`: rotates selected objects left.
    pub fn rotate_left(&mut self) -> usize {
        self.document.rotate_selected(true)
    }

    /// `FUN_01794990` at `0x01794990`: rotates selected objects right.
    pub fn rotate_right(&mut self) -> usize {
        self.document.rotate_selected(false)
    }

    /// `FUN_01794DC0` at `0x01794DC0`: recovered paint-box click handler.
    pub const fn paint_box_click(&mut self) {}

    /// `FUN_01795910` at `0x01795910`: redraws the drawing surface.
    pub const fn redraw(&mut self) {
        self.document.redraw();
    }

    /// `FUN_01795930` at `0x01795930`: activates the line tool.
    pub const fn select_line_tool(&mut self) {
        self.tool = Tool::Line;
    }

    /// `FUN_01795970` at `0x01795970`: releases the active tool and selects edit mode.
    pub fn select_edit_tool(&mut self) {
        self.tool = Tool::Edit;
        self.document.temporary_object = None;
    }

    /// `FUN_01795980` at `0x01795980`: deletes selected non-protected objects.
    pub fn delete_selected(&mut self) -> usize {
        self.tool = Tool::Edit;
        self.document.temporary_object = None;
        self.document.delete_selected()
    }

    /// `FUN_01795A90` at `0x01795A90`: activates the rectangle tool, recovered mode 0.
    pub const fn select_rectangle_tool(&mut self) {
        self.tool = Tool::Rectangle;
    }

    /// `FUN_01795AE0` at `0x01795AE0`: activates the ellipse tool, recovered mode 1.
    pub const fn select_ellipse_tool(&mut self) {
        self.tool = Tool::Ellipse;
    }

    /// `FUN_01795B30` at `0x01795B30`: activates the arc tool, recovered mode 2.
    pub const fn select_arc_tool(&mut self) {
        self.tool = Tool::Arc;
    }

    /// `FUN_01795B80` at `0x01795B80`: opens a library after the unsaved guard.
    ///
    /// # Errors
    /// Returns an error from the guard, picker, storage, or codec adapter.
    pub fn open(
        &mut self,
        host: &mut impl ShapeHostPort,
        files: &mut impl ShapeFilePort,
        codec: &impl ShapeCodec,
    ) -> Result<bool, String> {
        if !self.unsaved_allows(host)? {
            return Ok(false);
        }
        let Some(path) = files.choose_open()? else {
            return Ok(false);
        };
        let devices = codec.decode(&files.read(&path)?)?;
        self.tool = Tool::Edit;
        self.document.replace_loaded(devices, path);
        Ok(true)
    }

    /// `FUN_01795CF0` at `0x01795CF0`: validates and saves, prompting for an unnamed file.
    ///
    /// # Errors
    /// Returns an error from validation, path selection, encoding, or storage.
    pub fn save(
        &mut self,
        host: &mut impl ShapeHostPort,
        files: &mut impl ShapeFilePort,
        codec: &impl ShapeCodec,
    ) -> Result<bool, String> {
        host.validate_device(self.document.current())?;
        let path = if self.document.filename == Path::new("NONAME.DDB") {
            let Some(path) = files.choose_save(&self.document.filename)? else {
                return Ok(false);
            };
            path
        } else {
            self.document.filename.clone()
        };
        self.write_to(path, files, codec)
    }

    /// `FUN_01795D00` at `0x01795D00`: validates and always prompts for a save path.
    ///
    /// # Errors
    /// Returns an error from validation, path selection, encoding, or storage.
    pub fn save_as(
        &mut self,
        host: &mut impl ShapeHostPort,
        files: &mut impl ShapeFilePort,
        codec: &impl ShapeCodec,
    ) -> Result<bool, String> {
        host.validate_device(self.document.current())?;
        let Some(path) = files.choose_save(&self.document.filename)? else {
            return Ok(false);
        };
        self.write_to(path, files, codec)
    }

    /// `FUN_01797E40` at `0x01797E40`: activates the text tool.
    pub const fn select_text_tool(&mut self) {
        self.tool = Tool::Text;
    }

    /// `FUN_01797FC0` at `0x01797FC0`: activates the pin variant supplied by the sender tag.
    pub fn select_pin_tool(&mut self, sender_tag: i64) {
        self.document.clear_selection();
        self.tool = Tool::Pin(sender_tag);
    }

    /// `FUN_01798C60` at `0x01798C60`: creates a new library after the unsaved guard.
    ///
    /// # Errors
    /// Returns an error when the unsaved guard cannot complete.
    pub fn new_library(&mut self, host: &mut impl ShapeHostPort) -> Result<bool, String> {
        if !self.unsaved_allows(host)? {
            return Ok(false);
        }
        self.tool = Tool::Edit;
        self.document.reset_new();
        Ok(true)
    }

    /// `FUN_01798CF0` at `0x01798CF0`: copies, then deletes even when copying fails.
    ///
    /// # Errors
    /// Returns the copy failure after the recovered unconditional delete step.
    pub fn cut(
        &mut self,
        clipboard: &mut impl ShapeClipboardPort,
        codec: &impl ShapeCodec,
    ) -> Result<usize, String> {
        let copied = self.copy(clipboard, codec);
        let removed = self.delete_selected();
        copied.map(|()| removed)
    }

    /// `FUN_01798D20` at `0x01798D20`: publishes both recovered clipboard formats.
    ///
    /// # Errors
    /// Returns an error when serialization or clipboard publication fails.
    pub fn copy(
        &self,
        clipboard: &mut impl ShapeClipboardPort,
        codec: &impl ShapeCodec,
    ) -> Result<(), String> {
        let bytes = codec.encode(&[self.selected_device()])?;
        clipboard.write(ClipboardPayload {
            application_format: bytes.clone(),
            secondary_format: bytes,
        })
    }

    /// `FUN_01798FE0` at `0x01798FE0`: pastes supported application clipboard data.
    ///
    /// # Errors
    /// Returns an error when clipboard access or decoding fails.
    pub fn paste(
        &mut self,
        clipboard: &mut impl ShapeClipboardPort,
        codec: &impl ShapeCodec,
    ) -> Result<usize, String> {
        let Some(bytes) = clipboard.read()? else {
            return Ok(0);
        };
        let objects = codec
            .decode(&bytes)?
            .into_iter()
            .flat_map(|device| device.objects)
            .collect();
        self.tool = Tool::Edit;
        self.document.temporary_object = None;
        Ok(self.document.append_objects(objects, true))
    }

    /// `FUN_01799320` at `0x01799320`: selects every current object and redraws.
    pub fn select_all(&mut self) {
        self.document.select_all();
    }

    /// `FUN_01799410` at `0x01799410`: converts a selected source library after the guard.
    ///
    /// # Errors
    /// Returns an error from the guard, picker, storage, or conversion codec.
    pub fn convert(
        &mut self,
        host: &mut impl ShapeHostPort,
        files: &mut impl ShapeFilePort,
        codec: &impl ShapeCodec,
    ) -> Result<bool, String> {
        if !self.unsaved_allows(host)? {
            return Ok(false);
        }
        let Some(path) = files.choose_open()? else {
            return Ok(false);
        };
        let devices = codec.decode(&files.read(&path)?)?;
        self.tool = Tool::Edit;
        self.document
            .replace_loaded(devices, Path::new("NONAME.DDB").to_path_buf());
        Ok(true)
    }

    /// `FUN_01799C30` at `0x01799C30`: applies pen width outside embedded mode.
    pub fn set_pen_width(&mut self, width: u8) -> usize {
        if self.modal.embedded {
            return 0;
        }
        self.line_width = width;
        self.document.apply_line_width(width, false)
    }

    /// `FUN_0179A220` at `0x0179A220`: activates the polygon tool.
    pub const fn select_polygon_tool(&mut self) {
        self.tool = Tool::Polygon;
    }

    /// `FUN_0179A260` at `0x0179A260`: applies an accepted pin order.
    ///
    /// # Errors
    /// Returns an error when the pin-order dialog cannot complete.
    pub fn edit_pin_order(&mut self, wizard: &mut impl ShapeWizardPort) -> Result<bool, String> {
        let pins = self.selected_pins(false);
        let Some(order) = wizard.edit_pin_order(&pins)? else {
            return Ok(false);
        };
        Ok(self.document.set_pin_order(&order))
    }

    /// `FUN_0179A4B0` at `0x0179A4B0`: forwards close to the host workflow.
    ///
    /// # Errors
    /// Returns an error when the host cannot request close.
    pub fn close(&mut self, host: &mut impl ShapeHostPort) -> Result<(), String> {
        host.request_close()
    }

    /// `FUN_0179A4C0` at `0x0179A4C0`: selects 1x zoom.
    pub fn zoom_1x(&mut self) {
        self.set_zoom(0);
    }

    /// `FUN_0179A500` at `0x0179A500`: selects 2x zoom.
    pub fn zoom_2x(&mut self) {
        self.set_zoom(1);
    }

    /// `FUN_0179A540` at `0x0179A540`: selects 3x zoom.
    pub fn zoom_3x(&mut self) {
        self.set_zoom(2);
    }

    /// `FUN_0179A580` at `0x0179A580`: selects 4x zoom.
    pub fn zoom_4x(&mut self) {
        self.set_zoom(3);
    }

    /// `FUN_0179A5C0` at `0x0179A5C0`: selects 8x zoom.
    pub fn zoom_8x(&mut self) {
        self.set_zoom(4);
    }

    /// `FUN_0179A600` at `0x0179A600`: toggles and mirrors snap state.
    pub const fn toggle_snap(&mut self) {
        self.interaction.snap = !self.interaction.snap;
        self.document.redraw();
    }

    /// `FUN_0179A660` at `0x0179A660`: toggles and mirrors grid state.
    pub const fn toggle_grid(&mut self) {
        self.visibility.grid = !self.visibility.grid;
        self.document.redraw();
    }

    /// `FUN_0179A6C0` at `0x0179A6C0`: toggles global pin markers.
    pub const fn toggle_pin_markers(&mut self) {
        self.visibility.pin_markers = !self.visibility.pin_markers;
        self.document.redraw();
    }

    /// `FUN_0179A710` at `0x0179A710`: toggles supplementary display state.
    pub const fn toggle_supplementary(&mut self) {
        self.visibility.supplementary = !self.visibility.supplementary;
        self.document.redraw();
    }

    /// `FUN_0179A770` at `0x0179A770`: opens the About dialog modally.
    ///
    /// # Errors
    /// Returns an error when the dialog cannot complete.
    pub fn show_about(&mut self, help: &mut impl ShapeHelpPort) -> Result<(), String> {
        help.open_about()
    }

    /// `FUN_0179A7B0` at `0x0179A7B0`: dispatches `ShapeEdit` help command 3.
    ///
    /// # Errors
    /// Returns an error when the help adapter cannot dispatch the request.
    pub fn show_contents(&mut self, help: &mut impl ShapeHelpPort) -> Result<(), String> {
        help.open_contents(Path::new("SHAPED.CHM"), 3)
    }

    /// `FUN_0179AC90` at `0x0179AC90`: imports selected devices with conflict handling.
    ///
    /// # Errors
    /// Returns an adapter error. Earlier accepted mutations remain, as in the recovered workflow.
    pub fn import_devices(&mut self, import: &mut impl ShapeImportPort) -> Result<usize, String> {
        let Some(source) = import.select_source()? else {
            return Ok(0);
        };
        let Some(indexes) = import.select_devices(&source)? else {
            return Ok(0);
        };
        let mut changed = 0usize;
        for index in indexes {
            let Some(mut incoming) = source.get(index).cloned() else {
                continue;
            };
            if let Some(existing) = self
                .document
                .devices
                .iter()
                .position(|device| device.name == incoming.name)
            {
                match import.resolve_duplicate(&incoming.name)? {
                    DuplicateDecision::Overwrite => self.document.devices[existing] = incoming,
                    DuplicateDecision::Alternate(name) => {
                        incoming.name = name;
                        self.document.devices.push(incoming);
                    }
                    DuplicateDecision::Stop => break,
                }
            } else {
                self.document.devices.push(incoming);
            }
            self.document.dirty = true;
            changed = changed.saturating_add(1);
        }
        if changed > 0 {
            self.document.redraw();
        }
        Ok(changed)
    }

    /// `FUN_0179B790` at `0x0179B790`: centers eligible drawing bounds.
    pub fn bring_in_view(&mut self) -> bool {
        let Some(bounds) = self.document.drawing_bounds() else {
            self.document.redraw();
            return false;
        };
        self.viewport.center = Some((
            bounds.x + bounds.width / 2.0,
            bounds.y + bounds.height / 2.0,
        ));
        self.viewport.fit_bounds = Some(bounds);
        self.document.redraw();
        true
    }

    /// `FUN_0179C780` at `0x0179C780`: edits attributes only for exactly one selection.
    ///
    /// # Errors
    /// Returns an error when the class-specific attribute editor cannot complete.
    pub fn edit_attributes(&mut self, host: &mut impl ShapeHostPort) -> Result<bool, String> {
        let selected = self.selected_objects();
        if selected.len() != 1 {
            return Ok(false);
        }
        let Some(update) = host.edit_attributes(&selected[0])? else {
            return Ok(false);
        };
        Ok(self.document.replace_objects(&[update], true) == 1)
    }

    /// `FUN_0179CEA0` at `0x0179CEA0`: validates and accepts the embedded editor.
    ///
    /// # Errors
    /// Returns validation or host commit failure and keeps the modal open.
    pub fn accept_embedded(&mut self, host: &mut impl ShapeHostPort) -> Result<bool, String> {
        host.validate_device(self.document.current())?;
        host.commit_embedded(self.document.current())?;
        self.document.dirty = false;
        self.modal.result = Some(1);
        Ok(true)
    }

    /// `FUN_0179CEE0` at `0x0179CEE0`: cancels embedded editing without rollback.
    pub const fn cancel_embedded(&mut self) {
        self.document.dirty = false;
        self.modal.result = Some(2);
    }

    /// `FUN_0179D2F0` at `0x0179D2F0`: synchronizes the current device through staged values.
    ///
    /// # Errors
    /// Returns an error from the modal editor or host application.
    pub fn synchronize(
        &mut self,
        wizard: &mut impl ShapeWizardPort,
        host: &mut impl ShapeHostPort,
    ) -> Result<bool, String> {
        let Some(index) = self.document.current_device else {
            return Ok(false);
        };
        let Some(device) = self.document.current() else {
            return Ok(false);
        };
        let Some(values) = wizard.synchronize(device)? else {
            return Ok(false);
        };
        host.apply_synchronization(index, &values)?;
        Ok(true)
    }

    /// `FUN_0179D960` at `0x0179D960`: toggles automatic sensing and recalculates when enabled.
    pub fn toggle_auto_sensing(&mut self) {
        self.interaction.auto_sensing = !self.interaction.auto_sensing;
        if self.interaction.auto_sensing {
            self.document.recalculate_sensing_rectangle();
        } else {
            self.document.redraw();
        }
    }

    /// `FUN_0179D9F0` at `0x0179D9F0`: stably moves selected objects to the front.
    pub fn bring_to_front(&mut self) {
        self.document.bring_to_front();
    }

    /// `FUN_0179DA60` at `0x0179DA60`: stably moves selected objects to the back.
    pub fn send_to_back(&mut self) {
        self.document.send_to_back();
    }

    /// `FUN_0179DAD0` at `0x0179DAD0`: moves selected objects forward by one layer.
    pub fn bring_forward(&mut self) {
        self.document.bring_forward();
    }

    /// `FUN_0179DB60` at `0x0179DB60`: moves selected objects backward by one layer.
    pub fn send_backward(&mut self) {
        self.document.send_backward();
    }

    /// `FUN_0179DFA0` at `0x0179DFA0`: activates the bitmap tool.
    pub const fn select_bitmap_tool(&mut self) {
        self.tool = Tool::Bitmap;
    }

    /// `FUN_0179E030` at `0x0179E030`: appends accepted IC Wizard objects.
    ///
    /// # Errors
    /// Returns an error when the wizard cannot complete.
    pub fn run_ic_wizard(&mut self, wizard: &mut impl ShapeWizardPort) -> Result<usize, String> {
        let Some(objects) = wizard.create_ic_objects()? else {
            return Ok(0);
        };
        Ok(self.document.append_objects(objects, false))
    }

    /// `FUN_0179EE00` at `0x0179EE00`: edits accepted selected-pin properties.
    ///
    /// # Errors
    /// Returns an error when the pin-properties dialog cannot complete.
    pub fn edit_selected_pins(
        &mut self,
        wizard: &mut impl ShapeWizardPort,
    ) -> Result<usize, String> {
        let pins = self.selected_pins(true);
        if pins.is_empty() {
            self.document.redraw();
            return Ok(0);
        }
        let Some(updates) = wizard.edit_pin_properties(&pins)? else {
            return Ok(0);
        };
        let objects = pins
            .into_iter()
            .map(|mut pin| {
                if let Some(update) = updates.iter().find(|update| update.id == pin.id) {
                    pin.name.clone_from(&update.name);
                    pin.attributes = update.attributes.iter().cloned().collect();
                }
                pin
            })
            .collect::<Vec<_>>();
        Ok(self.document.replace_objects(&objects, false))
    }

    /// `FUN_0179F640` at `0x0179F640`: removes cursor rectangles and activates that tool.
    pub fn select_cursor_rectangle_tool(&mut self) -> usize {
        let removed = self.document.remove_cursor_rectangles();
        self.tool = Tool::CursorRectangle;
        removed
    }

    /// `FUN_0179FF20` at `0x0179FF20`: changes sort mode and preserves selection by name.
    pub fn set_sort_by_name(&mut self, enabled: bool) {
        self.document.set_sort_by_name(enabled);
    }

    /// `FUN_017A0070` at `0x017A0070`: formats the device-position status only.
    #[must_use]
    pub fn device_position_status(&self) -> String {
        self.document.device_position_status()
    }

    /// `FUN_017A0720` at `0x017A0720`: performs one undo and always redraws.
    pub fn undo(&mut self) -> bool {
        self.tool = Tool::Edit;
        self.document.temporary_object = None;
        self.document.undo()
    }

    /// `FUN_017A0750` at `0x017A0750`: performs one redo and always redraws.
    pub fn redo(&mut self) -> bool {
        self.tool = Tool::Edit;
        self.document.temporary_object = None;
        self.document.redo()
    }

    /// Selects a font through the typed dialog boundary.
    ///
    /// # Errors
    /// Returns an error when the font dialog cannot complete.
    pub fn choose_font(&mut self, port: &mut impl ShapeFontPort) -> Result<bool, String> {
        let Some(font) = port.choose_font(&self.font)? else {
            return Ok(false);
        };
        self.font = font;
        Ok(true)
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let pin_tools = PIN_TOOLS
            .iter()
            .fold(column![].spacing(3), |tools, &(tag, label)| {
                tools.push(
                    button(text(label))
                        .width(Length::Fill)
                        .on_press(Message::ToolSelected(Tool::Pin(tag))),
                )
            });
        let line_widths = (0..=3).fold(column![text("Width")].spacing(2), |choices, width| {
            choices.push(radio(
                if width == 0 { "Hair" } else { "" },
                width,
                Some(self.line_width),
                Message::LineWidthSelected,
            ))
        });
        let palette = column![
            pin_tools,
            line_widths,
            text("Object color"),
            button("■").on_press(Message::CommandSelected),
            text("Fill color"),
            button("□").on_press(Message::CommandSelected),
        ]
        .spacing(6);
        let body = row![
            container(palette).padding(6).width(Length::Fixed(95.0)),
            window_shell::surface("Symbol drawing grid"),
        ]
        .spacing(4)
        .height(Length::Fill);

        window_shell::frame(
            TITLE,
            window_shell::menu_bar(MENUS, Message::CommandSelected),
            window_shell::toolbar(TOOLBAR, Message::CommandSelected),
            body.into(),
            STATUS,
        )
    }

    fn set_zoom(&mut self, index: u8) {
        const SCALES: [f32; 5] = [1.0, 2.0, 3.0, 4.0, 8.0];
        self.viewport.zoom_index = index;
        self.viewport.scale = SCALES[usize::from(index)];
        self.viewport.fit_bounds = None;
        self.viewport.recenter_generation = self.viewport.recenter_generation.saturating_add(1);
        self.document.redraw();
    }

    fn unsaved_allows(&self, host: &mut impl ShapeHostPort) -> Result<bool, String> {
        if !self.document.dirty {
            return Ok(true);
        }
        Ok(host.guard_unsaved()? == UnsavedDecision::Proceed)
    }

    fn write_to(
        &mut self,
        path: std::path::PathBuf,
        files: &mut impl ShapeFilePort,
        codec: &impl ShapeCodec,
    ) -> Result<bool, String> {
        let bytes = codec.encode(&self.document.devices)?;
        files.write(&path, &bytes)?;
        self.document.filename = path;
        self.document.dirty = false;
        Ok(true)
    }

    fn selected_device(&self) -> Device {
        let mut device = Device::default();
        if let Some(current) = self.document.current() {
            device.name.clone_from(&current.name);
            device.objects = current
                .objects
                .iter()
                .filter(|object| object.selected)
                .cloned()
                .collect();
        }
        device
    }

    fn selected_objects(&self) -> Vec<ShapeObject> {
        self.document.current().map_or_else(Vec::new, |device| {
            device
                .objects
                .iter()
                .filter(|object| object.selected)
                .cloned()
                .collect()
        })
    }

    fn selected_pins(&self, only_selected: bool) -> Vec<ShapeObject> {
        self.document.current().map_or_else(Vec::new, |device| {
            device
                .objects
                .iter()
                .filter(|object| object.is_pin() && (!only_selected || object.selected))
                .cloned()
                .collect()
        })
    }
}

#[cfg(test)]
mod tests {
    use std::path::{Path, PathBuf};

    use super::*;

    fn object(id: u64, selected: bool, kind: ObjectKind) -> ShapeObject {
        let mut value = ShapeObject::new(
            id,
            kind,
            Bounds {
                x: 0.0,
                y: 0.0,
                width: 1.0,
                height: 1.0,
            },
        );
        value.selected = selected;
        value
    }

    fn ids(window: &Window) -> Vec<u64> {
        window
            .document
            .current()
            .expect("current device")
            .objects
            .iter()
            .map(|item| item.id.0)
            .collect()
    }

    #[test]
    fn fun_0179d9f0_and_layer_steps_keep_stable_order() {
        let mut window = Window::default();
        window.document.current_mut().expect("device").objects = vec![
            object(1, false, ObjectKind::Other),
            object(2, true, ObjectKind::Other),
            object(3, true, ObjectKind::Other),
            object(4, false, ObjectKind::Other),
        ];
        window.bring_to_front();
        assert_eq!(ids(&window), vec![1, 4, 2, 3]);
        window.undo();
        window.bring_forward();
        assert_eq!(ids(&window), vec![1, 4, 2, 3]);
        window.send_backward();
        assert_eq!(ids(&window), vec![1, 2, 3, 4]);
        window.send_to_back();
        assert_eq!(ids(&window), vec![2, 3, 1, 4]);
    }

    #[test]
    fn fun_01795980_protects_objects_and_empty_undo_still_redraws() {
        let mut window = Window::default();
        window.document.current_mut().expect("device").objects = vec![
            object(1, true, ObjectKind::Protected),
            object(2, true, ObjectKind::Line),
        ];
        assert_eq!(window.delete_selected(), 1);
        assert_eq!(ids(&window), vec![1]);
        assert!(window.undo());
        let generation = window.document.redraw_generation;
        assert!(!window.undo());
        assert_eq!(window.document.redraw_generation, generation + 1);
    }

    #[test]
    fn fun_01794dc0_is_an_exact_no_op_and_tools_and_zoom_are_typed() {
        let mut window = Window::default();
        let generation = window.document.redraw_generation;
        window.paint_box_click();
        assert_eq!(window.document.redraw_generation, generation);
        window.select_pin_tool(27);
        assert_eq!(window.tool, Tool::Pin(27));
        window.zoom_8x();
        assert!((window.viewport.scale - 8.0).abs() < f32::EPSILON);
        window.toggle_grid();
        assert!(window.visibility.grid);
    }

    #[test]
    fn fun_01794980_rotates_temporary_object_without_marking_document_dirty() {
        let mut window = Window::default();
        window.document.temporary_object = Some(object(8, false, ObjectKind::Line));
        assert_eq!(window.rotate_left(), 1);
        assert_eq!(
            window
                .document
                .temporary_object
                .as_ref()
                .map(|object| object.rotation_quarter_turns),
            Some(-1)
        );
        assert!(!window.document.dirty);
    }

    #[test]
    fn fun_01799c30_embedded_pen_width_is_an_exact_no_op() {
        let mut window = Window::default();
        window.modal.embedded = true;
        assert_eq!(window.set_pen_width(3), 0);
        assert_eq!(window.line_width, 1);
        assert!(!window.document.dirty);
    }

    #[derive(Default)]
    struct HostSpy {
        guard: Option<UnsavedDecision>,
        validation_error: Option<String>,
        commits: usize,
    }

    impl ShapeHostPort for HostSpy {
        fn guard_unsaved(&mut self) -> Result<UnsavedDecision, String> {
            Ok(self.guard.unwrap_or(UnsavedDecision::Proceed))
        }

        fn validate_device(&mut self, _device: Option<&Device>) -> Result<(), String> {
            self.validation_error.clone().map_or(Ok(()), Err)
        }

        fn request_close(&mut self) -> Result<(), String> {
            Ok(())
        }

        fn commit_embedded(&mut self, _device: Option<&Device>) -> Result<(), String> {
            self.commits += 1;
            Ok(())
        }

        fn edit_attributes(&mut self, object: &ShapeObject) -> Result<Option<ShapeObject>, String> {
            Ok(Some(object.clone()))
        }

        fn apply_synchronization(
            &mut self,
            _device_index: usize,
            _values: &SynchronizationValues,
        ) -> Result<(), String> {
            Ok(())
        }
    }

    #[derive(Default)]
    struct FileSpy {
        open: Option<PathBuf>,
        save: Option<PathBuf>,
        bytes: Vec<u8>,
        writes: usize,
    }

    impl ShapeFilePort for FileSpy {
        fn choose_open(&mut self) -> Result<Option<PathBuf>, String> {
            Ok(self.open.clone())
        }

        fn choose_save(&mut self, _current: &Path) -> Result<Option<PathBuf>, String> {
            Ok(self.save.clone())
        }

        fn read(&mut self, _path: &Path) -> Result<Vec<u8>, String> {
            Ok(self.bytes.clone())
        }

        fn write(&mut self, _path: &Path, bytes: &[u8]) -> Result<(), String> {
            self.bytes = bytes.to_vec();
            self.writes += 1;
            Ok(())
        }
    }

    struct CodecSpy {
        fail_encode: bool,
    }

    impl ShapeCodec for CodecSpy {
        fn decode(&self, _bytes: &[u8]) -> Result<Vec<Device>, String> {
            Ok(vec![Device {
                name: "Loaded".to_owned(),
                objects: vec![object(9, false, ObjectKind::Line)],
            }])
        }

        fn encode(&self, _devices: &[Device]) -> Result<Vec<u8>, String> {
            if self.fail_encode {
                Err("encode".to_owned())
            } else {
                Ok(vec![1, 2, 3])
            }
        }
    }

    #[test]
    fn fun_01795b80_guard_cancel_preserves_document_and_open_replaces_it() {
        let mut window = Window::default();
        window.document.dirty = true;
        let mut host = HostSpy {
            guard: Some(UnsavedDecision::Cancel),
            ..HostSpy::default()
        };
        let mut files = FileSpy {
            open: Some(PathBuf::from("loaded.ddb")),
            ..FileSpy::default()
        };
        let codec = CodecSpy { fail_encode: false };
        assert!(!window.open(&mut host, &mut files, &codec).expect("cancel"));
        assert_eq!(window.document.filename, Path::new("NONAME.DDB"));
        host.guard = Some(UnsavedDecision::Proceed);
        assert!(window.open(&mut host, &mut files, &codec).expect("open"));
        assert_eq!(window.document.filename, Path::new("loaded.ddb"));
        assert_eq!(ids(&window), vec![9]);
    }

    #[test]
    fn fun_01795cf0_validates_and_updates_state_only_after_write() {
        let mut window = Window::default();
        window.document.dirty = true;
        let mut host = HostSpy::default();
        let mut files = FileSpy {
            save: Some(PathBuf::from("saved.ddb")),
            ..FileSpy::default()
        };
        assert!(
            window
                .save(&mut host, &mut files, &CodecSpy { fail_encode: false })
                .expect("save")
        );
        assert_eq!(files.writes, 1);
        assert!(!window.document.dirty);
        assert_eq!(window.document.filename, Path::new("saved.ddb"));
    }

    #[derive(Default)]
    struct ClipboardSpy {
        writes: usize,
        read: Option<Vec<u8>>,
    }

    impl ShapeClipboardPort for ClipboardSpy {
        fn write(&mut self, payload: ClipboardPayload) -> Result<(), String> {
            assert_eq!(payload.application_format, payload.secondary_format);
            self.writes += 1;
            Ok(())
        }

        fn read(&mut self) -> Result<Option<Vec<u8>>, String> {
            Ok(self.read.clone())
        }
    }

    #[test]
    fn fun_01798cf0_cut_deletes_even_when_serialization_fails() {
        let mut window = Window::default();
        window.document.current_mut().expect("device").objects =
            vec![object(1, true, ObjectKind::Line)];
        let error = window
            .cut(
                &mut ClipboardSpy::default(),
                &CodecSpy { fail_encode: true },
            )
            .expect_err("copy must fail");
        assert_eq!(error, "encode");
        assert!(ids(&window).is_empty());
    }

    #[test]
    fn fun_01798fe0_absent_clipboard_is_no_op_and_supported_data_is_undoable() {
        let mut window = Window::default();
        let codec = CodecSpy { fail_encode: false };
        assert_eq!(
            window
                .paste(&mut ClipboardSpy::default(), &codec)
                .expect("empty"),
            0
        );
        let mut clipboard = ClipboardSpy {
            read: Some(vec![7]),
            ..ClipboardSpy::default()
        };
        assert_eq!(window.paste(&mut clipboard, &codec).expect("paste"), 1);
        assert_eq!(ids(&window), vec![9]);
        assert!(window.undo());
        assert!(ids(&window).is_empty());
    }

    struct ImportSpy {
        decisions: Vec<DuplicateDecision>,
    }

    impl ShapeImportPort for ImportSpy {
        fn select_source(&mut self) -> Result<Option<Vec<Device>>, String> {
            Ok(Some(vec![
                Device {
                    name: "Added".to_owned(),
                    objects: Vec::new(),
                },
                Device {
                    name: "Device1".to_owned(),
                    objects: Vec::new(),
                },
                Device {
                    name: "Skipped".to_owned(),
                    objects: Vec::new(),
                },
            ]))
        }

        fn select_devices(&mut self, _devices: &[Device]) -> Result<Option<Vec<usize>>, String> {
            Ok(Some(vec![0, 1, 2]))
        }

        fn resolve_duplicate(&mut self, _name: &str) -> Result<DuplicateDecision, String> {
            Ok(self.decisions.remove(0))
        }
    }

    #[test]
    fn fun_0179ac90_stop_preserves_earlier_import_mutations() {
        let mut window = Window::default();
        let mut import = ImportSpy {
            decisions: vec![DuplicateDecision::Stop],
        };
        assert_eq!(window.import_devices(&mut import).unwrap_or_default(), 1);
        assert!(window.document.dirty);
        assert!(
            window
                .document
                .devices
                .iter()
                .any(|device| device.name == "Added")
        );
        assert!(
            !window
                .document
                .devices
                .iter()
                .any(|device| device.name == "Skipped")
        );
    }

    #[test]
    fn fun_0179cea0_validation_failure_keeps_modal_open_and_cancel_sets_two() {
        let mut window = Window::default();
        window.modal.embedded = true;
        let mut host = HostSpy {
            validation_error: Some("invalid".to_owned()),
            ..HostSpy::default()
        };
        assert!(window.accept_embedded(&mut host).is_err());
        assert_eq!(window.modal.result, None);
        assert_eq!(host.commits, 0);
        window.cancel_embedded();
        assert_eq!(window.modal.result, Some(2));
    }

    #[test]
    fn fun_017a0070_reports_zero_for_no_current_device() {
        let mut window = Window::default();
        window.document.current_device = None;
        assert_eq!(window.device_position_status(), "0 of 1 devices");
    }
}
