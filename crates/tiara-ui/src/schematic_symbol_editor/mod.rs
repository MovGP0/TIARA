//! Cohesive state and Iced adapter for the recovered `ShapeEdit` window.

mod adapters;
mod core;

use std::path::{Path, PathBuf};

use iced::widget::{button, column, container, radio, row, text};
use iced::{Element, Length, keyboard, mouse};

pub use adapters::{
    ClipboardPayload, ColorChoice, DevicePropertyUpdate, DuplicateDecision, FontChoice,
    PinPropertyUpdate, ShapeClipboardPort, ShapeCloseNotification, ShapeCodec, ShapeColorPort,
    ShapeDeviceDeletePort, ShapeDevicePropertiesPort, ShapeFilePort, ShapeFillColorPort,
    ShapeFontPort, ShapeHelpPort, ShapeHostPort, ShapeImportPort, ShapeLifecyclePort,
    ShapeLocalizationPort, ShapeObjectEditPort, ShapeWizardPort, SynchronizationValues,
    UnsavedDecision,
};
pub use core::{
    Bounds, CanvasPoint, CanvasSize, Device, DeviceCapabilities, DeviceProperties, Document,
    GridLine, MagnifierPlan, MarkerRole, NativeColor, ObjectId, ObjectKind, PaintContext,
    PaintItem, PaintLayer, PaintPlan, ShapeObject,
};

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

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum MouseButton {
    Left,
    Right,
    Other,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct MouseModifiers {
    pub shift: bool,
    pub control: bool,
}

#[derive(Debug, Clone, Copy, Default, PartialEq)]
pub enum EditorDrag {
    #[default]
    None,
    SelectionRectangle {
        origin: CanvasPoint,
    },
    MoveSelection {
        origin: CanvasPoint,
        handle: Option<i32>,
    },
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DeviceListAutoScroll {
    Up,
    Down,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ColorSwatch {
    pub border_color: NativeColor,
    pub border_style: u8,
    pub fill_color: NativeColor,
    pub inset: u8,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct DevicePreviewRequest {
    pub device_index: usize,
    pub bounds: Bounds,
}

#[derive(Debug, Clone, PartialEq)]
pub struct DeviceListItemDrawPlan {
    pub background: Bounds,
    pub text: String,
    pub text_origin: CanvasPoint,
    pub preview: DevicePreviewRequest,
}

#[derive(Debug, Clone, PartialEq)]
pub struct DeviceListDragPlan {
    pub selected_index: usize,
    pub image_size: CanvasSize,
    pub transparent_color_sample: CanvasPoint,
    pub item: DeviceListItemDrawPlan,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct HelpEventOutcome {
    pub handled: bool,
    pub call_default_help: bool,
}

#[derive(Debug, Clone, PartialEq)]
pub struct StandardSnapshot {
    pub standard_index: i32,
    pub device: Device,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct StandardOption {
    pub combo_index: u8,
    pub standard_index: i32,
    pub group: u8,
    pub variant: u8,
    pub has_device_data: bool,
    pub selected: bool,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct StandardDropDownPlan {
    pub options: Vec<StandardOption>,
    pub selected_combo_index: Option<u8>,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ShapeEditorKey {
    Escape,
    Delete,
    K,
    M,
    Q,
    V,
    Other,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ShapeListExport {
    pub title: String,
    pub file_name: PathBuf,
    pub name_groups: Vec<Vec<String>>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct EditorTitlePlan {
    pub device_name: String,
    pub library_name: Option<PathBuf>,
    pub application_name: String,
}

impl EditorTitlePlan {
    #[must_use]
    pub fn display_title(&self) -> String {
        self.library_name.as_ref().map_or_else(
            || format!("<{}> - {}", self.device_name, self.application_name),
            |library_name| {
                format!(
                    "<{} / {}> - {}",
                    self.device_name,
                    library_name.display(),
                    self.application_name
                )
            },
        )
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum KeyDownOutcome {
    Ignored,
    SelectedEditTool,
    Deleted(usize),
    RotatedLeft(usize),
    RotatedRight(usize),
    ExportShapeList(ShapeListExport),
    CycledBitmapFrame,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct Viewport {
    pub zoom_index: u8,
    pub scale: f32,
    pub scroll_extent: u32,
    pub scroll_step: u16,
    pub center: Option<(f32, f32)>,
    pub fit_bounds: Option<Bounds>,
    pub recenter_generation: u64,
}

impl Default for Viewport {
    fn default() -> Self {
        Self {
            zoom_index: 0,
            scale: 1.0,
            scroll_extent: 1_600,
            scroll_step: 8,
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

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct CatalogDirectories {
    pub main: PathBuf,
    pub shared: PathBuf,
    pub private: PathBuf,
    pub application: PathBuf,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct DialogPlace {
    pub label: &'static str,
    pub path: PathBuf,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct FileDialogConfiguration {
    pub name: &'static str,
    pub title: &'static str,
    pub filter: &'static str,
    pub native_options: Option<u32>,
    pub places: Vec<DialogPlace>,
    pub initial_folders: Vec<PathBuf>,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct StartupRequests {
    pub open: Option<PathBuf>,
    pub create: Option<String>,
    pub edit: Option<String>,
    pub owner_handle: Option<u32>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CreationOptions {
    pub directories: CatalogDirectories,
    pub active_screen_height: u32,
    pub zoom_scale: u8,
    pub snap_checked: bool,
    pub grid_checked: bool,
    pub pin_markers_checked: bool,
    pub arguments: Vec<String>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CreationPlan {
    pub open_dialog: FileDialogConfiguration,
    pub import_dialog: FileDialogConfiguration,
    pub save_dialog: FileDialogConfiguration,
    pub compact_control_visible: bool,
    pub command_controls_visible: bool,
    pub startup: StartupRequests,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum CommandAvailability {
    #[default]
    Disabled,
    Enabled,
}

impl From<bool> for CommandAvailability {
    fn from(enabled: bool) -> Self {
        if enabled {
            Self::Enabled
        } else {
            Self::Disabled
        }
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct IdleCommandState {
    pub selection_while_idle: CommandAvailability,
    pub selection: CommandAvailability,
    pub single_eligible_selection: CommandAvailability,
    pub external_while_idle: CommandAvailability,
    pub undo: CommandAvailability,
    pub redo: CommandAvailability,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum CreationError {
    InvalidOwnerHandle(String),
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
    pub fill_enabled: bool,
    pub custom_colors: Vec<NativeColor>,
    pub font: FontChoice,
    pub supplementary_objects: Vec<ShapeObject>,
    pub catalog_directories: CatalogDirectories,
    pub configuration_path: PathBuf,
    pub draw_timer_enabled: bool,
    pub idle_commands: IdleCommandState,
    pub temporary_idle_generation: u64,
    pub owner_handle: Option<u32>,
    pub suppress_next_mouse_down: bool,
    pub cursor_refresh_generation: u64,
    pub editor_drag: EditorDrag,
    pub coordinate_status: String,
    pub hint_status: String,
    pub hover_cursor: Option<mouse::Interaction>,
    pub magnifier: Option<MagnifierPlan>,
    pub object_color_swatch: Option<ColorSwatch>,
    pub fill_color_swatch: Option<ColorSwatch>,
    pub standard_index: i32,
    pub standard_snapshots: Vec<StandardSnapshot>,
    pub title_plan: Option<EditorTitlePlan>,
    pub window_title: String,
    pub device_search_text: String,
    pub device_search_color: NativeColor,
    pub device_search_selection: Option<usize>,
    pub device_drag_auto_scroll: Option<DeviceListAutoScroll>,
    pub device_list_top_index: usize,
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
            fill_enabled: false,
            custom_colors: Vec::new(),
            font: FontChoice {
                family: "Default".to_owned(),
                size_points: 10,
                bold: false,
                italic: false,
            },
            supplementary_objects: Vec::new(),
            catalog_directories: CatalogDirectories::default(),
            configuration_path: PathBuf::new(),
            draw_timer_enabled: false,
            idle_commands: IdleCommandState::default(),
            temporary_idle_generation: 0,
            owner_handle: None,
            suppress_next_mouse_down: false,
            cursor_refresh_generation: 0,
            editor_drag: EditorDrag::None,
            coordinate_status: String::new(),
            hint_status: String::new(),
            hover_cursor: None,
            magnifier: None,
            object_color_swatch: None,
            fill_color_swatch: None,
            standard_index: -1,
            standard_snapshots: Vec::new(),
            title_plan: None,
            window_title: TITLE.to_owned(),
            device_search_text: String::new(),
            device_search_color: NativeColor(0xff00_0008),
            device_search_selection: None,
            device_drag_auto_scroll: None,
            device_list_top_index: 0,
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
    /// Updates device-list auto-scroll state while a drag moves over it.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x0179F830`, symbol `FUN_0179f830`
    /// (`ShapeEdit.TemplatePanel.LBDevices.OnDragOver`). The drag is always
    /// accepted. A 30-pixel top or bottom band starts scrolling only when its
    /// timer is idle; all other positions disable the timer.
    pub fn device_list_drag_over(&mut self, point: CanvasPoint, list_size: CanvasSize) -> bool {
        const EDGE_BAND: f32 = 30.0;
        if point.x < 1.0
            || point.x >= list_size.width
            || point.y < 1.0
            || point.y >= list_size.height
        {
            self.disable_device_drag_scroll();
            return true;
        }
        let direction = if point.y < EDGE_BAND {
            Some(DeviceListAutoScroll::Up)
        } else if point.y > list_size.height - EDGE_BAND {
            Some(DeviceListAutoScroll::Down)
        } else {
            None
        };
        if let Some(direction) = direction {
            if self.device_drag_auto_scroll.is_none() {
                self.device_drag_auto_scroll = Some(direction);
            }
        } else {
            self.disable_device_drag_scroll();
        }
        true
    }

    /// Moves the visible device-list viewport for one drag-scroll timer tick.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x0179FA10`, symbol `FUN_0179fa10`
    /// (`ShapeEdit.timerScroll.OnTimer`). The stored drag direction moves the
    /// top visible row by one. A missing direction and either list boundary are
    /// no-ops. The auto-scroll state stays active at a boundary, as in the
    /// recovered timer path.
    pub fn device_list_auto_scroll_tick(&mut self, visible_row_count: usize) -> bool {
        match self.device_drag_auto_scroll {
            Some(DeviceListAutoScroll::Up) if self.device_list_top_index > 0 => {
                self.device_list_top_index -= 1;
                true
            }
            Some(DeviceListAutoScroll::Down)
                if self.document.devices.len()
                    > self.device_list_top_index.saturating_add(visible_row_count) =>
            {
                self.device_list_top_index += 1;
                true
            }
            _ => false,
        }
    }

    /// Moves the selected device one row toward the start of the list.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x0179FA30`, symbol `FUN_0179fa30`
    /// (`ShapeEdit.ActionList.acMoveDeviceUp.OnExecute`). A missing, invalid,
    /// or first-row selection is a no-op. When the selected row is the active
    /// device, its active index follows the exchange. A successful move marks
    /// the document dirty and disables name sorting.
    pub fn move_device_up(&mut self, selected_index: Option<usize>) -> bool {
        let Some(selected_index) = selected_index else {
            return false;
        };
        if selected_index == 0 || selected_index >= self.document.devices.len() {
            return false;
        }
        let target_index = selected_index - 1;
        self.document.devices.swap(target_index, selected_index);
        if self.document.current_device == Some(selected_index) {
            self.document.current_device = Some(target_index);
        }
        self.device_search_selection = Some(target_index);
        self.document.sort_by_name = false;
        self.document.dirty = true;
        true
    }

    /// Reports whether the selected device can move toward the list start.
    ///
    /// This Iced action-state adapter maps Ghidra function `0x0179FC90`,
    /// symbol `FUN_0179fc90`
    /// (`ShapeEdit.ActionList.acMoveDeviceUp.OnUpdate`). Only a selected row
    /// after the first row enables the action.
    #[must_use]
    pub fn move_device_up_availability(selected_index: Option<usize>) -> CommandAvailability {
        selected_index.is_some_and(|index| index > 0).into()
    }

    /// Moves the selected device one row toward the end of the list.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x0179FB50`, symbol `FUN_0179fb50`
    /// (`ShapeEdit.ActionList.acMoveDeviceDown.OnExecute`). A missing, invalid,
    /// or final-row selection is a no-op. When the selected row is the active
    /// device, its active index follows the exchange. A successful move marks
    /// the document dirty and disables name sorting.
    pub fn move_device_down(&mut self, selected_index: Option<usize>) -> bool {
        let Some(selected_index) = selected_index else {
            return false;
        };
        let Some(target_index) = selected_index.checked_add(1) else {
            return false;
        };
        if target_index >= self.document.devices.len() {
            return false;
        }
        self.document.devices.swap(selected_index, target_index);
        if self.document.current_device == Some(selected_index) {
            self.document.current_device = Some(target_index);
        }
        self.device_search_selection = Some(target_index);
        self.document.sort_by_name = false;
        self.document.dirty = true;
        true
    }

    /// Reports whether the selected device can move toward the list end.
    ///
    /// This Iced action-state adapter maps Ghidra function `0x0179FCE0`,
    /// symbol `FUN_0179fce0`
    /// (`ShapeEdit.ActionList.acMoveDeviceDown.OnUpdate`). Only a selected row
    /// before the final device row enables the action.
    #[must_use]
    pub fn move_device_down_availability(
        &self,
        selected_index: Option<usize>,
    ) -> CommandAvailability {
        selected_index
            .and_then(|index| index.checked_add(1))
            .is_some_and(|next_index| next_index < self.document.devices.len())
            .into()
    }

    /// Reorders the selected device after a list drag-drop hit test.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x0179F700`, symbol `FUN_0179f700`
    /// (`ShapeEdit.TemplatePanel.LBDevices.OnDragDrop`). Iced supplies the hit
    /// row. Rows below the list clamp to the final device; negative hits,
    /// missing selections, and invalid selections are no-ops.
    pub fn device_list_drop(&mut self, selected_index: Option<usize>, hit_index: isize) -> bool {
        let Some(selected_index) = selected_index else {
            return false;
        };
        let Some(last_index) = self.document.devices.len().checked_sub(1) else {
            return false;
        };
        if hit_index < 0 || selected_index > last_index {
            return false;
        }
        let target_index = usize::try_from(hit_index)
            .unwrap_or(last_index)
            .min(last_index);
        let device = self.document.devices.remove(selected_index);
        self.document.devices.insert(target_index, device);
        if self.document.current_device == Some(selected_index) {
            self.document.current_device = Some(target_index);
        }
        self.device_search_selection = Some(target_index);
        self.document.sort_by_name = false;
        self.document.dirty = true;
        true
    }

    /// Searches the device list when the quick-search text changes.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x0179DE40`, symbol `FUN_0179de40`
    /// (`ShapeEdit.TemplatePanel.edSearch.OnChange`). The caller supplies the
    /// unresolved recovered retry prefix from application resources. Changes
    /// outside focused editing do not move the list selection.
    pub fn device_search_changed(
        &mut self,
        query: impl Into<String>,
        focused: bool,
        retry_prefix: &str,
    ) -> Option<usize> {
        self.device_search_text = query.into();
        if !focused || self.device_search_text.is_empty() {
            return None;
        }
        let query = self.device_search_text.to_lowercase();
        let retry = format!("{retry_prefix}{query}");
        let selected = find_device_name(&self.document.devices, &query)
            .or_else(|| find_device_name(&self.document.devices, &retry))
            .or_else(|| (!self.document.devices.is_empty()).then_some(0));
        self.device_search_selection = selected;
        selected
    }

    /// Restores the inactive device quick-search placeholder.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x0179DC30`, symbol `FUN_0179dc30`
    /// (`ShapeEdit.TemplatePanel.edSearch.OnExit`). Iced restores the recovered
    /// `Search` text and native gray-text color unconditionally.
    pub fn device_search_exit(&mut self) {
        "Search".clone_into(&mut self.device_search_text);
        self.device_search_color = NativeColor(0xff00_0010);
    }

    /// Activates and clears the device quick-search editor.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x0179DBF0`, symbol `FUN_0179dbf0`
    /// (`ShapeEdit.TemplatePanel.edSearch.OnEnter`). Iced uses the recovered
    /// native window-text color and an empty query for active input.
    pub fn device_search_enter(&mut self) {
        self.device_search_color = NativeColor(0xff00_0008);
        self.device_search_text.clear();
    }

    /// Rebuilds the 12-entry symbol-standard drop-down plan.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x0179D9E0`, symbol `FUN_0179d9e0`
    /// (`ShapeEdit.PHelp.PShapeType.cbStandard.OnDropDown`). The recovered
    /// three-group, four-variant layout and both index transforms remain exact.
    #[must_use]
    pub fn standard_drop_down_plan(&self) -> StandardDropDownPlan {
        let options = (0_u8..12)
            .map(|combo_index| {
                let combo = i32::from(combo_index);
                let standard_index = (combo & 3) * 3 + combo / 4;
                StandardOption {
                    combo_index,
                    standard_index,
                    group: combo_index / 4,
                    variant: combo_index & 3,
                    has_device_data: standard_index == self.standard_index
                        || self
                            .standard_snapshots
                            .iter()
                            .any(|snapshot| snapshot.standard_index == standard_index),
                    selected: standard_index == self.standard_index,
                }
            })
            .collect();
        let selected_combo_index = (0_u8..12).find(|combo_index| {
            let combo = i32::from(*combo_index);
            (combo & 3) * 3 + combo / 4 == self.standard_index
        });
        StandardDropDownPlan {
            options,
            selected_combo_index,
        }
    }

    /// Edits the current device properties through a typed modal adapter.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x0179C590`, symbol `FUN_0179c590`
    /// (`ShapeEdit.ActionList.acDeviceProperties.OnExecute`). Cancel is an
    /// exact no-op. Acceptance updates only the recovered property fields,
    /// refreshes an existing title plan, and marks the document dirty.
    ///
    /// # Errors
    ///
    /// Returns an error when the property editor cannot complete.
    pub fn edit_device_properties(
        &mut self,
        port: &mut impl ShapeDevicePropertiesPort,
    ) -> Result<bool, String> {
        let Some(device) = self.document.current() else {
            return Ok(false);
        };
        let Some(update) = port.edit_device_properties(&device.name, &device.properties)? else {
            return Ok(false);
        };
        let Some(device) = self.document.current_mut() else {
            return Ok(false);
        };
        device.name = update.name;
        device.properties = update.properties;
        self.document.dirty = true;
        if let Some(application_name) = self
            .title_plan
            .as_ref()
            .map(|plan| plan.application_name.clone())
        {
            self.on_activate(application_name);
        }
        Ok(true)
    }

    /// Reports whether a selected library device can be deleted.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x0179C550`, symbol `FUN_0179c550`
    /// (`ShapeEdit.ActionList.acDeleteDevice.OnUpdate`). The action is enabled
    /// exactly when the Iced device list has a selected index.
    #[must_use]
    pub fn delete_device_availability(selected_index: Option<usize>) -> CommandAvailability {
        Self::edit_device_availability(selected_index)
    }

    /// Confirms and deletes the selected library device.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x0179C300`, symbol `FUN_0179c300`
    /// (`ShapeEdit.ActionList.acDeleteDevice.OnExecute`). Cancel, a missing
    /// selection, and an invalid index are exact no-ops.
    ///
    /// # Errors
    ///
    /// Returns an error when the confirmation adapter cannot complete.
    pub fn delete_device(
        &mut self,
        selected_index: Option<usize>,
        confirmation: &mut impl ShapeDeviceDeletePort,
    ) -> Result<bool, String> {
        let Some(index) = selected_index else {
            return Ok(false);
        };
        let Some(device) = self.document.devices.get(index) else {
            return Ok(false);
        };
        if !confirmation.confirm_delete(&device.name)? {
            return Ok(false);
        }
        Ok(self.document.delete_library_device(index))
    }

    /// Validates and adds the current working device to the library.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x0179C1C0`, symbol `FUN_0179c1c0`
    /// (`ShapeEdit.ActionList.acAddDevice.OnExecute`). The inserted device
    /// records the active library path. Duplicate-name cancellation is a
    /// no-op.
    ///
    /// # Errors
    ///
    /// Returns a validation or duplicate-decision adapter error.
    pub fn add_device(
        &mut self,
        host: &mut impl ShapeHostPort,
        names: &mut impl ShapeImportPort,
    ) -> Result<bool, String> {
        host.validate_device(self.document.current())?;
        let Some(mut device) = self.document.current().cloned() else {
            return Ok(false);
        };
        if self
            .document
            .devices
            .iter()
            .any(|existing| existing.name == device.name)
        {
            match names.resolve_duplicate(&device.name)? {
                DuplicateDecision::Alternate(name) => device.name = name,
                DuplicateDecision::Overwrite | DuplicateDecision::Stop => return Ok(false),
            }
        }
        device.library_path.clone_from(&self.document.filename);
        self.document.add_working_device(device);
        Ok(true)
    }

    /// Reports whether the current library device can be updated.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x0179C190`, symbol `FUN_0179c190`
    /// (`ShapeEdit.ActionList.acUpdateDevice.OnUpdate`). A detached device has
    /// the recovered index `-1` and therefore keeps this action disabled.
    #[must_use]
    pub fn update_device_availability(&self) -> CommandAvailability {
        self.document.current_device.is_some().into()
    }

    /// Validates and commits the current working device to the library.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x0179C020`, symbol `FUN_0179c020`
    /// (`ShapeEdit.ActionList.acUpdateDevice.OnExecute`). Duplicate names use
    /// the existing typed decision adapter. Cancel keeps all state unchanged.
    ///
    /// # Errors
    ///
    /// Returns a validation or duplicate-decision adapter error.
    pub fn update_device(
        &mut self,
        host: &mut impl ShapeHostPort,
        names: &mut impl ShapeImportPort,
    ) -> Result<bool, String> {
        host.validate_device(self.document.current())?;
        let Some(mut device) = self.document.current().cloned() else {
            return Ok(false);
        };
        let duplicate = self
            .document
            .devices
            .iter()
            .enumerate()
            .any(|(index, existing)| {
                Some(index) != self.document.current_device && existing.name == device.name
            });
        if duplicate {
            match names.resolve_duplicate(&device.name)? {
                DuplicateDecision::Alternate(name) => device.name = name,
                DuplicateDecision::Overwrite | DuplicateDecision::Stop => return Ok(false),
            }
        }
        self.document.commit_working_device(device);
        Ok(true)
    }

    /// Reports whether a device-list selection can be edited.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x0179BFE0`, symbol `FUN_0179bfe0`
    /// (`ShapeEdit.ActionList.acEditDevice.OnUpdate`). The action is enabled
    /// exactly when the Iced list has a selected index.
    #[must_use]
    pub fn edit_device_availability(selected_index: Option<usize>) -> CommandAvailability {
        selected_index.is_some().into()
    }

    /// Opens the list selection as the current working device.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x0179BFB0`, symbol `FUN_0179bfb0`. It serves both
    /// `ShapeEdit.TemplatePanel.LBDevices.OnDblClick` and
    /// `ShapeEdit.ActionList.acEditDevice.OnExecute`. A missing list selection
    /// preserves the recovered `-1` path and starts a detached blank device.
    pub fn edit_device(&mut self, selected_index: Option<usize>) -> bool {
        if let Some(index) = selected_index {
            self.document.select_library_device(index)
        } else {
            self.document.begin_new_device();
            true
        }
    }

    /// Starts editing a new device outside the current library list.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x0179BF80`, symbol `FUN_0179bf80`
    /// (`ShapeEdit.ActionList.acNewDevice.OnExecute`). The detached device
    /// preserves the recovered index `-1` until a later command adds it to the
    /// library. The new working document is marked dirty.
    pub fn new_device(&mut self) {
        self.document.begin_new_device();
        self.document.dirty = true;
    }

    /// Decides whether the editor window can close.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x0179B940`, symbol `FUN_0179b940` (`ShapeEdit.OnCloseQuery`). Clean
    /// documents close immediately. Dirty documents use the existing typed
    /// unsaved-change adapter and preserve its cancel result.
    ///
    /// # Errors
    ///
    /// Returns an error when the unsaved-change decision cannot complete.
    pub fn close_query(&self, host: &mut impl ShapeHostPort) -> Result<bool, String> {
        self.unsaved_allows(host)
    }

    /// Refreshes the title when the editor window becomes active.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x0179B930`, symbol `FUN_0179b930` (`ShapeEdit.OnActivate`). The plan
    /// keeps the recovered active-device, optional library, and localized
    /// application-title inputs explicit for Iced rendering.
    pub fn on_activate(&mut self, application_name: impl Into<String>) {
        self.title_plan = self.document.current().map(|device| EditorTitlePlan {
            device_name: device.name.clone(),
            library_name: self.modal.embedded.then(|| self.document.filename.clone()),
            application_name: application_name.into(),
        });
        self.window_title = self
            .title_plan
            .as_ref()
            .map_or_else(|| TITLE.to_owned(), EditorTitlePlan::display_title);
    }

    /// Rebuilds both color swatches during the editor-window paint event.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x0179A1F0`, symbol `FUN_0179a1f0` (`ShapeEdit.OnPaint`). Iced renders
    /// the two swatch plans from the current object and fill colors. Unlike the
    /// one-shot timer handler, painting does not change timer state.
    pub fn on_paint(&mut self) {
        self.paint_color_swatches();
    }

    /// Applies the recovered editor-window keyboard shortcuts.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01799DC0`, symbol `FUN_01799dc0` (`ShapeEdit.OnKeyDown`). Escape,
    /// Delete, K, and M are ignored while a text input has focus. Shift+Ctrl+Q
    /// returns a typed diagnostic export effect. V cycles the frame of the
    /// sole selected bitmap and redraws it.
    #[must_use]
    pub fn key_down(
        &mut self,
        key: ShapeEditorKey,
        modifiers: keyboard::Modifiers,
        text_input_focused: bool,
    ) -> KeyDownOutcome {
        if !text_input_focused {
            match key {
                ShapeEditorKey::Escape => {
                    self.select_edit_tool();
                    return KeyDownOutcome::SelectedEditTool;
                }
                ShapeEditorKey::Delete => {
                    return KeyDownOutcome::Deleted(self.delete_selected());
                }
                ShapeEditorKey::K => {
                    return KeyDownOutcome::RotatedRight(self.rotate_right());
                }
                ShapeEditorKey::M => {
                    return KeyDownOutcome::RotatedLeft(self.rotate_left());
                }
                _ => {}
            }
        }

        if key == ShapeEditorKey::Q
            && modifiers == (keyboard::Modifiers::SHIFT | keyboard::Modifiers::CTRL)
        {
            let title = format!("*** {} - shape list *** ", self.document.filename.display());
            let file_name = PathBuf::from(format!("{}.list", self.document.filename.display()));
            let names = self
                .document
                .devices
                .iter()
                .map(|device| device.name.clone())
                .collect::<Vec<_>>();
            return KeyDownOutcome::ExportShapeList(ShapeListExport {
                title,
                file_name,
                name_groups: names.chunks(10).map(<[String]>::to_vec).collect(),
            });
        }

        if key == ShapeEditorKey::V && self.document.cycle_selected_bitmap_frame() {
            return KeyDownOutcome::CycledBitmapFrame;
        }

        KeyDownOutcome::Ignored
    }

    /// Saves the current drawing and selects the mapped symbol standard.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01798C70`, symbol `FUN_01798c70`
    /// (`ShapeEdit.PHelp.PShapeType.cbStandard.OnChange`). The combo index is
    /// converted with the recovered four-column mapping. An unchanged result
    /// is an exact no-op.
    pub fn standard_changed(&mut self, combo_index: u8) -> bool {
        let combo_index = i32::from(combo_index);
        let mapped_index = (combo_index & 3) * 3 + combo_index / 4;
        if mapped_index == self.standard_index {
            return false;
        }
        if let Some(device) = self.document.current().cloned() {
            self.standard_snapshots.push(StandardSnapshot {
                standard_index: self.standard_index,
                device,
            });
        }
        self.standard_index = mapped_index;
        self.document.clear_undo_history();
        self.document.redraw();
        true
    }

    /// Builds the owner-draw plan for one device-list item.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01798160`, symbol `FUN_01798160`
    /// (`ShapeEdit.TemplatePanel.LBDevices.OnDrawItem`). Iced fills the item,
    /// places its text two pixels from the left edge, and renders the requested
    /// device preview in the adjusted rectangle.
    #[must_use]
    pub fn device_list_item_draw_plan(
        &self,
        device_index: usize,
        bounds: Bounds,
        preview_top_adjustment: f32,
    ) -> Option<DeviceListItemDrawPlan> {
        let device = self.document.devices.get(device_index)?;
        Some(DeviceListItemDrawPlan {
            background: bounds,
            text: device.name.clone(),
            text_origin: CanvasPoint {
                x: bounds.x + 2.0,
                y: bounds.y,
            },
            preview: DevicePreviewRequest {
                device_index,
                bounds: Bounds {
                    x: bounds.x,
                    y: bounds.y - preview_top_adjustment,
                    width: bounds.width,
                    height: bounds.height + preview_top_adjustment,
                },
            },
        })
    }

    /// Builds the off-screen render plan used to start a device-list drag.
    ///
    /// This is the original Iced implementation of Ghidra function
    /// `0x0179FD60`, symbol `FUN_0179fd60`
    /// (`ShapeEdit.TemplatePanel.LBDevices.OnStartDrag`). A missing or invalid
    /// selection returns no drag plan. The image is two pixels narrower than
    /// the list client area, reuses the owner-drawn item plan, and samples its
    /// top-left pixel as the transparency color.
    #[must_use]
    pub fn device_list_drag_start_plan(
        &self,
        selected_index: Option<usize>,
        list_client_width: f32,
        drag_image_height: f32,
        preview_top_adjustment: f32,
    ) -> Option<DeviceListDragPlan> {
        let selected_index = selected_index?;
        let image_size = CanvasSize {
            width: (list_client_width - 2.0).max(0.0),
            height: drag_image_height.max(0.0),
        };
        let bounds = Bounds {
            x: 0.0,
            y: 0.0,
            width: image_size.width,
            height: image_size.height,
        };
        let item =
            self.device_list_item_draw_plan(selected_index, bounds, preview_top_adjustment)?;
        Some(DeviceListDragPlan {
            selected_index,
            image_size,
            transparent_color_sample: CanvasPoint { x: 0.0, y: 0.0 },
            item,
        })
    }

    /// Refreshes both color swatches once and disables the drawing timer.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01796710`, symbol `FUN_01796710` (`ShapeEdit.DrawTimer.OnTimer`).
    /// Iced renders the deterministic border, inset, and fill state. The
    /// recovered no-fill sentinel uses the native button-face color.
    pub fn draw_timer_tick(&mut self) {
        self.paint_color_swatches();
        self.draw_timer_enabled = false;
    }

    /// Updates interaction, coordinate, hover, and magnifier state on movement.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x017950F0`, symbol `FUN_017950f0`
    /// (`ShapeEdit.scbEditor.pbEditor.OnMouseMove`). Iced supplies cursor state
    /// and renders the returned magnifier plan. Object-specific movement, hit
    /// testing, and cursor selection remain behind the typed object adapter.
    ///
    /// # Errors
    ///
    /// Returns an error when temporary interaction dispatch fails.
    pub fn editor_mouse_move(
        &mut self,
        modifiers: MouseModifiers,
        screen_point: CanvasPoint,
        preview_size: CanvasSize,
        editor: &mut impl ShapeObjectEditPort,
    ) -> Result<(), String> {
        let update_status = if let Some(temporary) = &self.document.temporary_object {
            editor.temporary_mouse_move(temporary, modifiers, screen_point)?
        } else {
            true
        };

        if update_status {
            let scale = nonzero_scale(self.viewport.scale);
            let world_point = CanvasPoint {
                x: screen_point.x / scale,
                y: screen_point.y / scale,
            };
            let origin = self
                .document
                .current()
                .and_then(|device| {
                    device
                        .objects
                        .iter()
                        .find(|object| object.kind == ObjectKind::SensingRectangle)
                })
                .map_or(CanvasPoint { x: 0.0, y: 0.0 }, |object| CanvasPoint {
                    x: object.bounds.x,
                    y: object.bounds.y,
                });
            self.coordinate_status = format!(
                " X: {:.0}  Y: {:.0}",
                (world_point.x - origin.x).trunc(),
                (world_point.y - origin.y).trunc()
            );

            if self.document.temporary_object.is_none() {
                let hit = self.document.current().and_then(|device| {
                    device
                        .objects
                        .iter()
                        .rev()
                        .find(|object| editor.hit_test(object, world_point))
                        .cloned()
                });
                self.hover_cursor = hit.map(|object| editor.cursor_for(&object, world_point));
            }
        }

        let radius = preview_size.width / 4.0;
        let center = preview_size.width / 2.0;
        self.magnifier = Some(MagnifierPlan {
            source: Bounds {
                x: screen_point.x - radius,
                y: screen_point.y - radius,
                width: radius * 2.0,
                height: radius * 2.0,
            },
            destination: Bounds {
                x: 0.0,
                y: 0.0,
                width: preview_size.width,
                height: preview_size.height,
            },
            crosshair_center: CanvasPoint {
                x: center,
                y: center,
            },
            crosshair_near_offset: 2.0,
            crosshair_far_offset: 3.0,
        });
        Ok(())
    }

    /// Forwards mouse release to the active drawing interaction.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x017950B0`, symbol `FUN_017950b0`
    /// (`ShapeEdit.scbEditor.pbEditor.OnMouseUp`). Without a temporary object,
    /// the event is an exact no-op.
    ///
    /// # Errors
    ///
    /// Returns an error when temporary interaction dispatch fails.
    pub fn editor_mouse_up(
        &self,
        button: MouseButton,
        modifiers: MouseModifiers,
        screen_point: CanvasPoint,
        editor: &mut impl ShapeObjectEditPort,
    ) -> Result<(), String> {
        if let Some(temporary) = &self.document.temporary_object {
            editor.temporary_mouse_up(temporary, button, modifiers, screen_point)?;
        }
        Ok(())
    }

    /// Applies selection and drag state for an editor mouse-down event.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01794EF0`, symbol `FUN_01794ef0`
    /// (`ShapeEdit.scbEditor.pbEditor.OnMouseDown`). Iced supplies the mouse
    /// input. Class-specific temporary interaction, hit testing, selection
    /// capability, and resize-handle lookup remain behind the object adapter.
    ///
    /// # Errors
    ///
    /// Returns an error when temporary interaction dispatch fails.
    pub fn editor_mouse_down(
        &mut self,
        button: MouseButton,
        modifiers: MouseModifiers,
        screen_point: CanvasPoint,
        editor: &mut impl ShapeObjectEditPort,
    ) -> Result<(), String> {
        if self.suppress_next_mouse_down {
            self.suppress_next_mouse_down = false;
            return Ok(());
        }
        if let Some(temporary) = &self.document.temporary_object
            && !editor.temporary_mouse_down(temporary, button, modifiers, screen_point)?
        {
            return Ok(());
        }

        let scale = nonzero_scale(self.viewport.scale);
        let world_point = CanvasPoint {
            x: screen_point.x / scale,
            y: screen_point.y / scale,
        };
        let hit = self.document.current().and_then(|device| {
            device
                .objects
                .iter()
                .rev()
                .find(|object| editor.hit_test(object, world_point))
                .cloned()
        });
        if let Some(object) = &hit
            && !editor.can_select(object)
        {
            self.document.clear_selection();
            self.editor_drag = EditorDrag::None;
            self.document.redraw();
            return Ok(());
        }

        let Some(object) = hit else {
            if !modifiers.shift {
                self.document.clear_selection();
            }
            self.editor_drag = EditorDrag::SelectionRectangle {
                origin: world_point,
            };
            self.document.redraw();
            return Ok(());
        };

        if modifiers.control {
            if !modifiers.shift {
                self.document.clear_selection();
            }
            self.editor_drag = EditorDrag::SelectionRectangle {
                origin: world_point,
            };
        } else if !modifiers.shift {
            let handle = if object.selected {
                editor.hit_handle(&object, world_point)
            } else {
                self.document.clear_selection();
                self.document.set_selected(object.id, true);
                None
            };
            self.editor_drag = EditorDrag::MoveSelection {
                origin: world_point,
                handle,
            };
        } else if object.selected {
            self.document.set_selected(object.id, false);
            self.editor_drag = EditorDrag::None;
        } else {
            self.document.set_selected(object.id, true);
            self.editor_drag = EditorDrag::MoveSelection {
                origin: world_point,
                handle: None,
            };
        }
        self.document.redraw();
        Ok(())
    }

    /// Edits the topmost object under a double-click.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01794DD0`, symbol `FUN_01794dd0`
    /// (`ShapeEdit.scbEditor.pbEditor.OnDblClick`). Iced supplies the cursor
    /// position. Class-specific interaction, hit testing, and editing remain
    /// behind a typed adapter.
    ///
    /// # Errors
    ///
    /// Returns an interaction or object-editor error. The recovered undo
    /// snapshot remains recorded when object editing fails.
    pub fn editor_double_click(
        &mut self,
        screen_point: CanvasPoint,
        editor: &mut impl ShapeObjectEditPort,
    ) -> Result<bool, String> {
        if let Some(temporary) = &self.document.temporary_object
            && !editor.temporary_double_click(temporary)?
        {
            return Ok(false);
        }

        let scale = nonzero_scale(self.viewport.scale);
        let world_point = CanvasPoint {
            x: screen_point.x / scale,
            y: screen_point.y / scale,
        };
        let hit = self.document.current().and_then(|device| {
            device
                .objects
                .iter()
                .rev()
                .find(|object| editor.hit_test(object, world_point))
                .cloned()
        });
        let Some(hit) = hit else {
            return Ok(false);
        };

        self.suppress_next_mouse_down = true;
        self.document.record_edit_attempt();
        let accepted = if let Some(mut update) = editor.edit_object(&hit)? {
            update.id = hit.id;
            self.document.replace_object_without_undo(update.clone());
            self.document.dirty = true;
            if update.is_pin() && update.pin_flags & 4 != 0 {
                self.document.move_flagged_pins_to_end();
            }
            true
        } else {
            false
        };
        self.cursor_refresh_generation = self.cursor_refresh_generation.saturating_add(1);
        Ok(accepted)
    }

    /// Applies a selected zoom factor to the editor and its scroll axes.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x017949A0`, symbol `FUN_017949a0`
    /// (`ShapeEdit.TopToolBar.EditorTools.ZoomFactor.OnChange`). The first four
    /// combo items select factors 1 through 4. Every later item selects factor
    /// 8. The Iced viewport state replaces the paired native scroll bars and
    /// the five mirrored menu checks.
    pub fn zoom_factor_changed(&mut self, selected_index: u8) {
        let normalized_index = selected_index.min(4);
        let factor = if normalized_index < 4 {
            u16::from(normalized_index) + 1
        } else {
            8
        };
        self.viewport.zoom_index = normalized_index;
        self.viewport.scale = f32::from(factor);
        self.viewport.scroll_extent = u32::from(factor).saturating_mul(1_600);
        self.viewport.scroll_step = factor.saturating_mul(8);
        self.viewport.fit_bounds = None;
        self.viewport.recenter_generation = self.viewport.recenter_generation.saturating_add(1);
        self.bring_in_view();
    }

    /// Releases editor-owned state and notifies an optional native owner.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01794230`, symbol `FUN_01794230` (`ShapeEdit.OnDestroy`). Rust
    /// collection ownership replaces the recovered manual object destruction.
    /// The native owner message remains behind a typed lifecycle adapter.
    ///
    /// # Errors
    ///
    /// Returns an owner-notification error after all editor state is released.
    pub fn on_destroy(&mut self, lifecycle: &mut impl ShapeLifecyclePort) -> Result<(), String> {
        let notification = ShapeCloseNotification {
            library: self.document.filename.clone(),
            shape: self
                .document
                .current()
                .map_or_else(String::new, |device| device.name.clone()),
        };
        let owner_handle = self.owner_handle.take();

        self.document.clear_for_destroy();
        self.supplementary_objects.clear();
        self.custom_colors.clear();
        self.catalog_directories = CatalogDirectories::default();
        self.configuration_path.clear();
        self.draw_timer_enabled = false;
        self.idle_commands = IdleCommandState::default();
        self.temporary_idle_generation = 0;
        self.suppress_next_mouse_down = false;
        self.cursor_refresh_generation = 0;
        self.editor_drag = EditorDrag::None;
        self.coordinate_status.clear();
        self.hint_status.clear();
        self.hover_cursor = None;
        self.magnifier = None;
        self.object_color_swatch = None;
        self.fill_color_swatch = None;
        self.standard_index = -1;
        self.standard_snapshots.clear();
        self.title_plan = None;
        TITLE.clone_into(&mut self.window_title);
        self.device_search_text.clear();
        self.device_search_color = NativeColor(0xff00_0008);
        self.device_search_selection = None;
        self.device_drag_auto_scroll = None;
        self.device_list_top_index = 0;

        if let Some(owner_handle) = owner_handle {
            lifecycle.notify_closed(owner_handle, &notification)?;
        }
        Ok(())
    }

    /// Refreshes command availability during an application idle event.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01793DB0`, symbol `FUN_01793db0`
    /// (`ShapeEdit.ShapeEditEvents.OnIdle`). The callback represents the
    /// recovered virtual capability query on the sole selected object. The
    /// external flags represent the existing command state and application
    /// capability query used by one command group.
    pub fn on_idle(
        &mut self,
        external_command_enabled: bool,
        external_capability: bool,
        single_object_eligible: impl FnOnce(&ShapeObject) -> bool,
    ) {
        let selected = self
            .document
            .current()
            .into_iter()
            .flat_map(|device| &device.objects)
            .filter(|object| object.selected)
            .take(2)
            .collect::<Vec<_>>();
        let has_selection = !selected.is_empty();
        let interaction_idle = self.document.temporary_object.is_none();
        let single_eligible_selection = match selected.as_slice() {
            [object] => single_object_eligible(object),
            _ => false,
        };

        self.idle_commands = IdleCommandState {
            selection_while_idle: (has_selection && interaction_idle).into(),
            selection: has_selection.into(),
            single_eligible_selection: single_eligible_selection.into(),
            external_while_idle: (external_command_enabled
                && interaction_idle
                && external_capability)
                .into(),
            undo: self.document.can_undo().into(),
            redo: self.document.can_redo().into(),
        };
        if !interaction_idle {
            self.temporary_idle_generation = self.temporary_idle_generation.saturating_add(1);
        }
    }

    /// Localizes the form and enables its deferred drawing timer.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01793D80`, symbol `FUN_01793d80` (`ShapeEdit.OnShow`). The
    /// application localization system remains behind a typed adapter. Timer
    /// state is part of the Iced window model.
    ///
    /// # Errors
    ///
    /// Returns a localization error without changing the drawing timer state.
    pub fn on_show(&mut self, localization: &mut impl ShapeLocalizationPort) -> Result<(), String> {
        localization.localize_form(FORM_RESOURCE)?;
        self.draw_timer_enabled = true;
        Ok(())
    }

    /// Initializes the Schematic Symbol Editor and returns its adapter work.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01792AF0`, symbol `FUN_01792af0` (`ShapeEdit.OnCreate`). Rust owns
    /// the editor collections and reset state. The returned plan keeps native
    /// file dialogs and the proprietary `/OPEN` and `/CREATE` workflows behind
    /// typed application adapters.
    ///
    /// # Errors
    ///
    /// Returns an error when a supplied `/HANDLE` value is not an unsigned
    /// 32-bit integer.
    pub fn on_create(&mut self, options: CreationOptions) -> Result<CreationPlan, CreationError> {
        const NO_FILL: NativeColor = NativeColor(0xffff_fffe);

        self.document.reset_new();
        self.supplementary_objects.clear();
        self.tool = Tool::Edit;
        self.object_color = NativeColor::default();
        self.fill_color = NO_FILL;
        self.fill_enabled = false;
        self.draw_timer_enabled = false;
        self.idle_commands = IdleCommandState::default();
        self.temporary_idle_generation = 0;
        self.suppress_next_mouse_down = false;
        self.cursor_refresh_generation = 0;
        self.editor_drag = EditorDrag::None;
        self.coordinate_status.clear();
        self.hint_status.clear();
        self.hover_cursor = None;
        self.magnifier = None;
        self.object_color_swatch = None;
        self.fill_color_swatch = None;
        self.standard_index = -1;
        self.standard_snapshots.clear();
        self.title_plan = None;
        TITLE.clone_into(&mut self.window_title);
        self.device_search_text.clear();
        self.device_search_color = NativeColor(0xff00_0008);
        self.device_search_selection = None;
        self.device_drag_auto_scroll = None;
        self.device_list_top_index = 0;
        self.interaction.snap = options.snap_checked;
        self.visibility.grid = options.grid_checked;
        self.visibility.pin_markers = options.pin_markers_checked;
        self.catalog_directories = options.directories;
        self.configuration_path = self.catalog_directories.application.join("tina.ini");
        self.set_zoom(options.zoom_scale.clamp(1, 5) - 1);

        let places = dialog_places(&self.catalog_directories);
        let open_dialog = FileDialogConfiguration {
            name: "OpenDDBDlg",
            title: "Open",
            filter: "Device Database (*.ddb)|*.ddb",
            native_options: None,
            places: places.clone(),
            initial_folders: Vec::new(),
        };
        let import_dialog = FileDialogConfiguration {
            name: "ImportDDBDlg",
            title: "Import From",
            filter: "Device Database (*.ddb)|*.ddb|TINA Macro (*.tsm)|*.tsm",
            native_options: None,
            places: places.clone(),
            initial_folders: Vec::new(),
        };
        let save_dialog = FileDialogConfiguration {
            name: "SaveDDBDlg",
            title: "Save As",
            filter: "Device Database (*.ddb)|*.ddb",
            native_options: Some(0x0008_0106),
            places,
            initial_folders: catalog_paths(&self.catalog_directories)
                .into_iter()
                .map(|path| path.join("SPICELIB"))
                .collect(),
        };
        let startup = parse_startup_arguments(&options.arguments)?;
        self.owner_handle = startup.owner_handle;

        Ok(CreationPlan {
            open_dialog,
            import_dialog,
            save_dialog,
            compact_control_visible: options.active_screen_height >= 500,
            command_controls_visible: options.arguments.is_empty(),
            startup,
        })
    }

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

    /// Builds the complete Schematic Symbol Editor paint order.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01791B80`, symbol `FUN_01791b80`
    /// (`ShapeEdit.scbEditor.pbEditor.OnPaint`). It converts the scrolled
    /// surface to world coordinates, emits the recovered eight-unit grid,
    /// draws primary shapes before primary pins, then repeats that order for
    /// supplementary objects. When pin markers are enabled, it draws the first
    /// visible object for each marker role and the complete device bounds. The
    /// temporary interaction object is always last.
    #[must_use]
    pub fn editor_paint_plan(&mut self, context: PaintContext) -> PaintPlan {
        if self.visibility.pin_markers && self.interaction.auto_sensing {
            self.document.recalculate_sensing_rectangle();
        }

        let scale_x = nonzero_scale(context.scale_x);
        let scale_y = nonzero_scale(context.scale_y);
        let viewport = Bounds {
            x: context.horizontal_scroll / scale_x,
            y: context.vertical_scroll / scale_x,
            width: context.width / scale_x,
            height: context.height / scale_x,
        };
        let grid_lines = if self.visibility.grid {
            build_grid_lines(viewport, scale_x, scale_y)
        } else {
            Vec::new()
        };

        let primary = self
            .document
            .current()
            .map_or(&[][..], |device| device.objects.as_slice());
        let mut items = Vec::new();
        append_paint_pass(
            &mut items,
            primary,
            viewport,
            false,
            true,
            PaintLayer::PrimaryShape,
        );
        append_paint_pass(
            &mut items,
            primary,
            viewport,
            true,
            true,
            PaintLayer::PrimaryPin,
        );
        append_paint_pass(
            &mut items,
            &self.supplementary_objects,
            viewport,
            false,
            false,
            PaintLayer::SupplementaryShape,
        );
        append_paint_pass(
            &mut items,
            &self.supplementary_objects,
            viewport,
            true,
            false,
            PaintLayer::SupplementaryPin,
        );

        let device_bounds = if self.visibility.pin_markers {
            for role in [
                MarkerRole::Primary,
                MarkerRole::Secondary,
                MarkerRole::Tertiary,
                MarkerRole::Sensing,
                MarkerRole::Cursor,
            ] {
                if let Some(object) = primary.iter().find(|object| {
                    object.marker_role == Some(role) && intersects(object.bounds, viewport)
                }) {
                    items.push(PaintItem {
                        id: object.id,
                        layer: PaintLayer::Marker(role),
                        native_mode: 4,
                    });
                }
            }
            primary
                .iter()
                .filter(|object| object.kind != ObjectKind::Protected)
                .map(|object| object.bounds)
                .reduce(Bounds::union)
        } else {
            None
        };

        if let Some(object) = &self.document.temporary_object {
            items.push(PaintItem {
                id: object.id,
                layer: PaintLayer::Temporary,
                native_mode: 4,
            });
        }

        PaintPlan {
            viewport,
            grid_lines,
            grid_color: NativeColor(0x0000_ffff),
            grid_native_style: 4,
            items,
            device_bounds,
            bounds_color: NativeColor(0x0000_8000),
            restored_pen_color: NativeColor(0x00ff_0000),
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

    /// Applies the fill-color panel mouse action.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01792630`, symbol `FUN_01792630`
    /// (`ShapeEdit.PartsPanel.pnlFC.pbFC.OnMouseDown`). Left-click loads the
    /// custom palette and opens the color dialog with the active fill or the
    /// recovered no-fill sentinel. Acceptance enables and applies the fill,
    /// redraws the document, and then persists the returned palette. Cancel is
    /// a no-op. Right-click disables fill, applies the sentinel, and redraws
    /// without using the dialog. Other buttons are no-ops.
    ///
    /// # Errors
    ///
    /// Returns an adapter error. When palette persistence fails, the accepted
    /// fill and document mutation remain applied.
    pub fn fill_color_mouse_down(
        &mut self,
        button: MouseButton,
        port: &mut impl ShapeFillColorPort,
    ) -> Result<usize, String> {
        const NO_FILL: NativeColor = NativeColor(0xffff_fffe);
        match button {
            MouseButton::Left => {
                let custom_colors = port.load_custom_colors()?;
                let current = if self.fill_enabled {
                    self.fill_color
                } else {
                    NO_FILL
                };
                let Some(choice) = port.choose_fill_color(current, &custom_colors)? else {
                    return Ok(0);
                };
                self.fill_color = choice.color;
                self.fill_enabled = true;
                self.custom_colors.clone_from(&choice.custom_colors);
                let changed = self.document.apply_fill_color(choice.color);
                port.save_custom_colors(&choice.custom_colors)?;
                Ok(changed)
            }
            MouseButton::Right => {
                self.fill_enabled = false;
                self.fill_color = NO_FILL;
                Ok(self.document.apply_fill_color(NO_FILL))
            }
            MouseButton::Other => Ok(0),
        }
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

    /// Handles a context-help request for the shape editor.
    ///
    /// This is the original Rust adapter for Ghidra function `0x017A0640`,
    /// symbol `FUN_017a0640` (`ShapeEdit.OnHelp`). It opens `SHAPED.CHM` with
    /// the supplied context, suppresses the default help path, and reports the
    /// event as handled.
    ///
    /// # Errors
    ///
    /// Returns an error when the help adapter cannot dispatch the request.
    pub fn handle_help(
        &self,
        help_context: u32,
        help: &mut impl ShapeHelpPort,
    ) -> Result<HelpEventOutcome, String> {
        help.open_contents(Path::new("SHAPED.CHM"), help_context)?;
        Ok(HelpEventOutcome {
            handled: true,
            call_default_help: false,
        })
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

    /// Copies the active application hint into the editor hint panel.
    ///
    /// This Iced text-state adapter maps Ghidra function `0x0179FF10`, symbol
    /// `FUN_0179ff10` (`ShapeEdit.ShapeEditEvents.OnHint`). The recovered
    /// handler assigns the application hint without transformation.
    pub fn application_hint_changed(&mut self, hint: &str) {
        hint.clone_into(&mut self.hint_status);
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
            &self.window_title,
            window_shell::menu_bar(MENUS, Message::CommandSelected),
            window_shell::toolbar(TOOLBAR, Message::CommandSelected),
            body.into(),
            STATUS,
        )
    }

    fn set_zoom(&mut self, index: u8) {
        self.zoom_factor_changed(index);
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

    fn paint_color_swatches(&mut self) {
        const NO_FILL: NativeColor = NativeColor(0xffff_fffe);
        const BUTTON_FACE: NativeColor = NativeColor(0xff00_000f);

        self.object_color_swatch = Some(color_swatch(self.object_color));
        self.fill_color_swatch = Some(color_swatch(if self.fill_color == NO_FILL {
            BUTTON_FACE
        } else {
            self.fill_color
        }));
    }

    const fn disable_device_drag_scroll(&mut self) {
        self.device_drag_auto_scroll = None;
    }
}

fn find_device_name(devices: &[Device], query: &str) -> Option<usize> {
    devices
        .iter()
        .position(|device| device.name.to_lowercase() == query)
        .or_else(|| {
            devices
                .iter()
                .position(|device| device.name.to_lowercase().starts_with(query))
        })
}

fn nonzero_scale(scale: f32) -> f32 {
    if scale.abs() < f32::EPSILON {
        1.0
    } else {
        scale
    }
}

fn intersects(first: Bounds, second: Bounds) -> bool {
    first.x <= second.x + second.width
        && first.x + first.width >= second.x
        && first.y <= second.y + second.height
        && first.y + first.height >= second.y
}

fn append_paint_pass(
    items: &mut Vec<PaintItem>,
    objects: &[ShapeObject],
    viewport: Bounds,
    pins: bool,
    honor_hidden: bool,
    layer: PaintLayer,
) {
    items.extend(
        objects
            .iter()
            .filter(|object| object.kind != ObjectKind::Protected)
            .filter(|object| !honor_hidden || !object.hidden)
            .filter(|object| object.is_pin() == pins)
            .filter(|object| intersects(object.bounds, viewport))
            .map(|object| PaintItem {
                id: object.id,
                layer,
                native_mode: 4,
            }),
    );
}

fn build_grid_lines(viewport: Bounds, scale_x: f32, scale_y: f32) -> Vec<GridLine> {
    const GRID_STEP: f32 = 8.0;
    let left = (viewport.x / GRID_STEP)
        .trunc()
        .mul_add(GRID_STEP, -GRID_STEP);
    let right = ((viewport.x + viewport.width) / GRID_STEP)
        .trunc()
        .mul_add(GRID_STEP, GRID_STEP);
    let top = (viewport.y / GRID_STEP)
        .trunc()
        .mul_add(GRID_STEP, -GRID_STEP);
    let bottom = ((viewport.y + viewport.height) / GRID_STEP)
        .trunc()
        .mul_add(GRID_STEP, GRID_STEP);
    let mut lines = Vec::new();
    for x in std::iter::successors(Some(left), |value| Some(value + GRID_STEP))
        .take_while(|value| *value <= right)
    {
        lines.push(GridLine {
            from: (x * scale_x, viewport.y * scale_y),
            to: (x * scale_x, (viewport.y + viewport.height) * scale_y),
        });
    }
    for y in std::iter::successors(Some(top), |value| Some(value + GRID_STEP))
        .take_while(|value| *value <= bottom)
    {
        lines.push(GridLine {
            from: (viewport.x * scale_x, y * scale_y),
            to: ((viewport.x + viewport.width) * scale_x, y * scale_y),
        });
    }
    lines
}

fn dialog_places(directories: &CatalogDirectories) -> Vec<DialogPlace> {
    vec![
        DialogPlace {
            label: "Private catalog folder",
            path: directories.private.clone(),
        },
        DialogPlace {
            label: "Shared catalog folder",
            path: directories.shared.clone(),
        },
        DialogPlace {
            label: "Main Tina folder",
            path: directories.main.clone(),
        },
    ]
}

const fn color_swatch(fill_color: NativeColor) -> ColorSwatch {
    ColorSwatch {
        border_color: NativeColor(0),
        border_style: 2,
        fill_color,
        inset: 1,
    }
}

fn catalog_paths(directories: &CatalogDirectories) -> [PathBuf; 3] {
    [
        directories.private.clone(),
        directories.shared.clone(),
        directories.main.clone(),
    ]
}

fn parse_startup_arguments(arguments: &[String]) -> Result<StartupRequests, CreationError> {
    let mut requests = StartupRequests::default();
    let mut index = 0;
    while index < arguments.len() {
        let argument = &arguments[index];
        let value = arguments.get(index.saturating_add(1));
        if argument.eq_ignore_ascii_case("/OPEN") {
            if let Some(value) = value {
                requests.open = Some(PathBuf::from(value));
                index = index.saturating_add(1);
            }
        } else if argument.eq_ignore_ascii_case("/CREATE") {
            if let Some(value) = value {
                requests.create = Some(value.clone());
                index = index.saturating_add(1);
            }
        } else if argument.eq_ignore_ascii_case("/EDIT") {
            if let Some(value) = value {
                requests.edit = Some(value.clone());
                index = index.saturating_add(1);
            }
        } else if argument.eq_ignore_ascii_case("/HANDLE")
            && let Some(value) = value
        {
            let parsed = value
                .parse::<i32>()
                .map_err(|_| CreationError::InvalidOwnerHandle(value.clone()))?;
            requests.owner_handle = Some(u32::from_ne_bytes(parsed.to_ne_bytes()));
            index = index.saturating_add(1);
        }
        index = index.saturating_add(1);
    }
    Ok(requests)
}

#[cfg(test)]
mod tests {
    use std::cell::Cell;
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

    fn creation_options(arguments: &[&str]) -> CreationOptions {
        CreationOptions {
            directories: CatalogDirectories {
                main: PathBuf::from(r"C:\Tina"),
                shared: PathBuf::from(r"C:\Shared"),
                private: PathBuf::from(r"C:\Private"),
                application: PathBuf::from(r"C:\Application"),
            },
            active_screen_height: 768,
            zoom_scale: 3,
            snap_checked: true,
            grid_checked: false,
            pin_markers_checked: true,
            arguments: arguments.iter().map(|value| (*value).to_owned()).collect(),
        }
    }

    #[derive(Default)]
    struct LocalizationSpy {
        forms: Vec<String>,
        failure: Option<String>,
    }

    #[derive(Default)]
    struct LifecycleSpy {
        notifications: Vec<(u32, ShapeCloseNotification)>,
        failure: Option<String>,
    }

    #[derive(Default)]
    struct HelpSpy {
        contents: Vec<(PathBuf, u32)>,
    }

    impl ShapeHelpPort for HelpSpy {
        fn open_about(&mut self) -> Result<(), String> {
            Ok(())
        }

        fn open_contents(&mut self, relative_path: &Path, command: u32) -> Result<(), String> {
            self.contents.push((relative_path.to_owned(), command));
            Ok(())
        }
    }

    impl ShapeLifecyclePort for LifecycleSpy {
        fn notify_closed(
            &mut self,
            owner_handle: u32,
            notification: &ShapeCloseNotification,
        ) -> Result<(), String> {
            self.notifications
                .push((owner_handle, notification.clone()));
            if let Some(failure) = &self.failure {
                return Err(failure.clone());
            }
            Ok(())
        }
    }

    struct ObjectEditSpy {
        temporary_result: CommandAvailability,
        temporary_calls: Vec<ObjectId>,
        temporary_mouse_result: CommandAvailability,
        temporary_mouse_calls: Vec<ObjectId>,
        temporary_mouse_up_calls: Vec<(ObjectId, MouseButton, MouseModifiers, CanvasPoint)>,
        temporary_mouse_move_result: CommandAvailability,
        temporary_mouse_move_calls: Vec<(ObjectId, MouseModifiers, CanvasPoint)>,
        hit_id: Option<ObjectId>,
        hit_calls: Vec<(ObjectId, CanvasPoint)>,
        selectable: bool,
        hit_handle: Option<i32>,
        cursor: mouse::Interaction,
        cursor_calls: Vec<(ObjectId, CanvasPoint)>,
        edit_calls: Vec<ObjectId>,
        edit_result: Option<ShapeObject>,
    }

    impl ShapeObjectEditPort for ObjectEditSpy {
        fn temporary_double_click(&mut self, object: &ShapeObject) -> Result<bool, String> {
            self.temporary_calls.push(object.id);
            Ok(self.temporary_result == CommandAvailability::Enabled)
        }

        fn temporary_mouse_down(
            &mut self,
            object: &ShapeObject,
            _button: MouseButton,
            _modifiers: MouseModifiers,
            _screen_point: CanvasPoint,
        ) -> Result<bool, String> {
            self.temporary_mouse_calls.push(object.id);
            Ok(self.temporary_mouse_result == CommandAvailability::Enabled)
        }

        fn temporary_mouse_up(
            &mut self,
            object: &ShapeObject,
            button: MouseButton,
            modifiers: MouseModifiers,
            screen_point: CanvasPoint,
        ) -> Result<(), String> {
            self.temporary_mouse_up_calls
                .push((object.id, button, modifiers, screen_point));
            Ok(())
        }

        fn temporary_mouse_move(
            &mut self,
            object: &ShapeObject,
            modifiers: MouseModifiers,
            screen_point: CanvasPoint,
        ) -> Result<bool, String> {
            self.temporary_mouse_move_calls
                .push((object.id, modifiers, screen_point));
            Ok(self.temporary_mouse_move_result == CommandAvailability::Enabled)
        }

        fn hit_test(&mut self, object: &ShapeObject, point: CanvasPoint) -> bool {
            self.hit_calls.push((object.id, point));
            self.hit_id == Some(object.id)
        }

        fn can_select(&mut self, _object: &ShapeObject) -> bool {
            self.selectable
        }

        fn hit_handle(&mut self, _object: &ShapeObject, _point: CanvasPoint) -> Option<i32> {
            self.hit_handle
        }

        fn cursor_for(&mut self, object: &ShapeObject, point: CanvasPoint) -> mouse::Interaction {
            self.cursor_calls.push((object.id, point));
            self.cursor
        }

        fn edit_object(&mut self, object: &ShapeObject) -> Result<Option<ShapeObject>, String> {
            self.edit_calls.push(object.id);
            Ok(self.edit_result.clone())
        }
    }

    fn object_edit_spy(hit_id: Option<ObjectId>) -> ObjectEditSpy {
        ObjectEditSpy {
            temporary_result: CommandAvailability::Enabled,
            temporary_calls: Vec::new(),
            temporary_mouse_result: CommandAvailability::Enabled,
            temporary_mouse_calls: Vec::new(),
            temporary_mouse_up_calls: Vec::new(),
            temporary_mouse_move_result: CommandAvailability::Enabled,
            temporary_mouse_move_calls: Vec::new(),
            hit_id,
            hit_calls: Vec::new(),
            selectable: true,
            hit_handle: None,
            cursor: mouse::Interaction::Idle,
            cursor_calls: Vec::new(),
            edit_calls: Vec::new(),
            edit_result: None,
        }
    }

    impl ShapeLocalizationPort for LocalizationSpy {
        fn localize_form(&mut self, form_resource: &str) -> Result<(), String> {
            self.forms.push(form_resource.to_owned());
            if let Some(failure) = &self.failure {
                return Err(failure.clone());
            }
            Ok(())
        }
    }

    #[test]
    fn fun_01793d80_localizes_shape_edit_before_enabling_the_draw_timer() {
        let mut window = Window::default();
        let mut localization = LocalizationSpy::default();

        window.on_show(&mut localization).expect("localization");

        assert_eq!(localization.forms, vec![FORM_RESOURCE]);
        assert!(window.draw_timer_enabled);
    }

    #[test]
    fn fun_01793d80_preserves_timer_state_when_localization_fails() {
        let mut window = Window::default();
        let mut localization = LocalizationSpy {
            forms: Vec::new(),
            failure: Some("missing localization".to_owned()),
        };

        let error = window
            .on_show(&mut localization)
            .expect_err("localization failure");

        assert_eq!(error, "missing localization");
        assert!(!window.draw_timer_enabled);
    }

    #[test]
    fn fun_01799dc0_applies_edit_shortcuts_only_outside_text_inputs() {
        let mut window = Window::default();
        window.document.current_mut().expect("device").objects =
            vec![object(1, true, ObjectKind::Line)];

        assert_eq!(
            window.key_down(ShapeEditorKey::M, keyboard::Modifiers::empty(), true),
            KeyDownOutcome::Ignored
        );
        assert_eq!(
            window.document.current().expect("device").objects[0].rotation_quarter_turns,
            0
        );
        assert_eq!(
            window.key_down(ShapeEditorKey::M, keyboard::Modifiers::empty(), false),
            KeyDownOutcome::RotatedLeft(1)
        );
        assert_eq!(
            window.document.current().expect("device").objects[0].rotation_quarter_turns,
            -1
        );
    }

    #[test]
    fn fun_01799dc0_builds_ten_name_groups_for_shift_control_q() {
        let mut window = Window::default();
        window.document.filename = PathBuf::from("symbols.ddb");
        window.document.devices = (1..=12)
            .map(|index| Device {
                name: format!("D{index}"),
                objects: Vec::new(),
                library_path: PathBuf::new(),
                properties: DeviceProperties::default(),
            })
            .collect();

        let outcome = window.key_down(
            ShapeEditorKey::Q,
            keyboard::Modifiers::SHIFT | keyboard::Modifiers::CTRL,
            true,
        );

        let KeyDownOutcome::ExportShapeList(export) = outcome else {
            panic!("expected shape-list export");
        };
        assert_eq!(export.title, "*** symbols.ddb - shape list *** ");
        assert_eq!(export.file_name, PathBuf::from("symbols.ddb.list"));
        assert_eq!(export.name_groups.len(), 2);
        assert_eq!(export.name_groups[0].len(), 10);
        assert_eq!(export.name_groups[1], ["D11", "D12"]);
    }

    #[test]
    fn fun_01799dc0_cycles_only_one_selected_bitmap_and_redraws() {
        let mut window = Window::default();
        let mut bitmap = object(1, true, ObjectKind::Bitmap);
        bitmap.bitmap_frame_count = 3;
        bitmap.bitmap_frame_index = 2;
        window.document.current_mut().expect("device").objects = vec![bitmap];

        assert_eq!(
            window.key_down(ShapeEditorKey::V, keyboard::Modifiers::empty(), false),
            KeyDownOutcome::CycledBitmapFrame
        );
        let document = &window.document;
        assert_eq!(
            document.current().expect("device").objects[0].bitmap_frame_index,
            0
        );
        assert_eq!(document.redraw_generation, 1);
    }

    #[test]
    fn fun_01796710_paints_color_swatches_and_disables_the_timer() {
        let mut window = Window {
            object_color: NativeColor(0x0012_3456),
            fill_color: NativeColor(0xffff_fffe),
            draw_timer_enabled: true,
            ..Window::default()
        };

        window.draw_timer_tick();

        assert_eq!(
            window.object_color_swatch,
            Some(ColorSwatch {
                border_color: NativeColor(0),
                border_style: 2,
                fill_color: NativeColor(0x0012_3456),
                inset: 1,
            })
        );
        assert_eq!(
            window.fill_color_swatch,
            Some(ColorSwatch {
                border_color: NativeColor(0),
                border_style: 2,
                fill_color: NativeColor(0xff00_000f),
                inset: 1,
            })
        );
        assert!(!window.draw_timer_enabled);

        window.fill_color = NativeColor(0x00ab_cdef);
        window.draw_timer_tick();
        assert_eq!(
            window.fill_color_swatch.expect("fill swatch").fill_color,
            NativeColor(0x00ab_cdef)
        );
    }

    #[test]
    fn fun_0179a1f0_repaints_both_swatches_without_disabling_the_timer() {
        let mut window = Window {
            object_color: NativeColor(0x0012_3456),
            fill_color: NativeColor(0xffff_fffe),
            draw_timer_enabled: true,
            ..Window::default()
        };

        window.on_paint();

        assert_eq!(
            window
                .object_color_swatch
                .expect("object swatch")
                .fill_color,
            NativeColor(0x0012_3456)
        );
        assert_eq!(
            window.fill_color_swatch.expect("fill swatch").fill_color,
            NativeColor(0xff00_000f)
        );
        assert!(window.draw_timer_enabled);
    }

    #[test]
    fn fun_0179b930_refreshes_the_active_title_for_both_editor_modes() {
        let mut window = Window::default();
        window.document.current_mut().expect("device").name = "Amplifier".to_owned();
        window.document.filename = PathBuf::from("catalog.ddb");

        window.on_activate("Schematic Symbol Editor");

        assert_eq!(window.window_title, "<Amplifier> - Schematic Symbol Editor");
        assert_eq!(
            window.title_plan,
            Some(EditorTitlePlan {
                device_name: "Amplifier".to_owned(),
                library_name: None,
                application_name: "Schematic Symbol Editor".to_owned(),
            })
        );

        window.modal.embedded = true;
        window.on_activate("Schematic Symbol Editor");

        assert_eq!(
            window.window_title,
            "<Amplifier / catalog.ddb> - Schematic Symbol Editor"
        );
    }

    #[test]
    fn fun_0179b940_allows_clean_close_and_preserves_dirty_cancel() {
        let mut window = Window::default();
        let mut host = HostSpy {
            guard: Some(UnsavedDecision::Cancel),
            ..HostSpy::default()
        };

        assert!(window.close_query(&mut host).expect("clean close"));

        window.document.dirty = true;
        assert!(!window.close_query(&mut host).expect("dirty cancel"));

        host.guard = Some(UnsavedDecision::Proceed);
        assert!(window.close_query(&mut host).expect("dirty proceed"));
    }

    #[test]
    fn fun_0179bf80_starts_a_dirty_detached_device_without_inserting_it() {
        let mut window = Window::default();
        window.document.current_mut().expect("device").objects =
            vec![object(1, true, ObjectKind::Line)];
        window.document.rotate_selected(true);
        assert!(window.document.can_undo());
        let library_devices = window.document.devices.clone();

        window.new_device();

        assert_eq!(window.document.devices, library_devices);
        assert_eq!(window.document.current_device, None);
        assert_eq!(window.document.current(), Some(&Device::default()));
        assert!(window.document.dirty);
        assert!(!window.document.can_undo());
        assert_eq!(window.document.redraw_generation, 2);
    }

    #[test]
    fn fun_0179bfb0_opens_the_list_selection_and_preserves_minus_one() {
        let mut window = Window::default();
        window.document.devices.push(Device {
            name: "Second".to_owned(),
            objects: Vec::new(),
            library_path: PathBuf::new(),
            properties: DeviceProperties::default(),
        });

        assert!(window.edit_device(Some(1)));
        assert_eq!(window.document.current_device, Some(1));
        assert_eq!(window.document.current().expect("device").name, "Second");

        assert!(window.edit_device(None));
        assert_eq!(window.document.current_device, None);
        assert_eq!(window.document.current(), Some(&Device::default()));
        assert!(!window.document.dirty);
        assert!(!window.edit_device(Some(99)));
    }

    #[test]
    fn fun_0179bfe0_enables_edit_only_for_a_list_selection() {
        assert_eq!(
            Window::edit_device_availability(None),
            CommandAvailability::Disabled
        );
        assert_eq!(
            Window::edit_device_availability(Some(0)),
            CommandAvailability::Enabled
        );
    }

    #[test]
    fn fun_0179c020_commits_a_valid_detached_device_with_an_alternate_name() {
        let mut window = Window::default();
        window.edit_device(None);
        window.document.current_mut().expect("working device").name = "Device1".to_owned();
        let mut host = HostSpy::default();
        let mut names = ImportSpy {
            decisions: vec![DuplicateDecision::Alternate("Device2".to_owned())],
        };

        assert!(
            window
                .update_device(&mut host, &mut names)
                .expect("update device")
        );

        assert_eq!(window.document.devices.len(), 2);
        assert_eq!(window.document.current_device, Some(1));
        assert_eq!(window.document.current().expect("device").name, "Device2");
        assert!(window.document.detached_device.is_none());
        assert!(window.document.dirty);
    }

    #[test]
    fn fun_0179c190_disables_update_for_the_detached_minus_one_index() {
        let mut window = Window::default();
        assert_eq!(
            window.update_device_availability(),
            CommandAvailability::Enabled
        );

        window.edit_device(None);

        assert_eq!(
            window.update_device_availability(),
            CommandAvailability::Disabled
        );
    }

    #[test]
    fn fun_0179c1c0_adds_the_detached_device_with_its_library_path() {
        let mut window = Window::default();
        window.document.filename = PathBuf::from("catalog.ddb");
        window.edit_device(None);
        window.document.current_mut().expect("working device").name = "NewDevice".to_owned();
        let mut host = HostSpy::default();
        let mut names = ImportSpy {
            decisions: Vec::new(),
        };

        assert!(
            window
                .add_device(&mut host, &mut names)
                .expect("add device")
        );

        assert_eq!(window.document.devices.len(), 2);
        assert_eq!(window.document.current_device, Some(1));
        let device = window.document.current().expect("device");
        assert_eq!(device.name, "NewDevice");
        assert_eq!(device.library_path, Path::new("catalog.ddb"));
        assert!(window.document.detached_device.is_none());
        assert!(window.document.dirty);
    }

    struct DeleteDeviceSpy {
        confirmed: bool,
        names: Vec<String>,
    }

    impl ShapeDeviceDeletePort for DeleteDeviceSpy {
        fn confirm_delete(&mut self, device_name: &str) -> Result<bool, String> {
            self.names.push(device_name.to_owned());
            Ok(self.confirmed)
        }
    }

    #[test]
    fn fun_0179c300_deletes_after_confirmation_and_preserves_current_by_name() {
        let mut window = Window::default();
        window.document.devices.push(Device {
            name: "Second".to_owned(),
            objects: Vec::new(),
            library_path: PathBuf::new(),
            properties: DeviceProperties::default(),
        });
        window.document.current_device = Some(1);
        let mut confirmation = DeleteDeviceSpy {
            confirmed: true,
            names: Vec::new(),
        };

        assert!(
            window
                .delete_device(Some(0), &mut confirmation)
                .expect("delete device")
        );

        assert_eq!(confirmation.names, ["Device1"]);
        assert_eq!(window.document.devices.len(), 1);
        assert_eq!(window.document.current_device, Some(0));
        assert_eq!(window.document.current().expect("device").name, "Second");
        assert!(window.document.dirty);
    }

    #[test]
    fn fun_0179c550_enables_delete_only_for_a_list_selection() {
        assert_eq!(
            Window::delete_device_availability(None),
            CommandAvailability::Disabled
        );
        assert_eq!(
            Window::delete_device_availability(Some(0)),
            CommandAvailability::Enabled
        );
    }

    struct DevicePropertiesSpy {
        update: Option<DevicePropertyUpdate>,
    }

    impl ShapeDevicePropertiesPort for DevicePropertiesSpy {
        fn edit_device_properties(
            &mut self,
            _name: &str,
            _properties: &DeviceProperties,
        ) -> Result<Option<DevicePropertyUpdate>, String> {
            Ok(self.update.take())
        }
    }

    #[test]
    fn fun_0179c590_applies_all_accepted_device_property_fields() {
        let mut window = Window::default();
        window.on_activate("Schematic Symbol Editor");
        let properties = DeviceProperties {
            default_reference_designator: "U".to_owned(),
            animated_only: true,
            capabilities: DeviceCapabilities {
                can_rotate: true,
                can_mirror: false,
            },
            show_pcb_pin_numbers: true,
        };
        let mut port = DevicePropertiesSpy {
            update: Some(DevicePropertyUpdate {
                name: "Amplifier".to_owned(),
                properties: properties.clone(),
            }),
        };

        assert!(
            window
                .edit_device_properties(&mut port)
                .expect("device properties")
        );

        let device = window.document.current().expect("device");
        assert_eq!(device.name, "Amplifier");
        assert_eq!(device.properties, properties);
        assert_eq!(window.window_title, "<Amplifier> - Schematic Symbol Editor");
        assert!(window.document.dirty);
    }

    #[test]
    fn fun_0179d9e0_builds_all_standard_options_and_inverse_selection() {
        let mut window = Window {
            standard_index: 4,
            ..Window::default()
        };
        window.standard_snapshots.push(StandardSnapshot {
            standard_index: 9,
            device: Device::default(),
        });

        let plan = window.standard_drop_down_plan();

        assert_eq!(plan.options.len(), 12);
        assert_eq!(plan.selected_combo_index, Some(5));
        assert_eq!(
            plan.options[5],
            StandardOption {
                combo_index: 5,
                standard_index: 4,
                group: 1,
                variant: 1,
                has_device_data: true,
                selected: true,
            }
        );
        assert!(plan.options[3].has_device_data);
        assert_eq!(plan.options[3].standard_index, 9);
    }

    #[test]
    fn fun_0179dbf0_clears_search_and_restores_active_text_color() {
        let mut window = Window {
            device_search_text: "Quick search".to_owned(),
            device_search_color: NativeColor(0xff00_000f),
            ..Window::default()
        };

        window.device_search_enter();

        assert!(window.device_search_text.is_empty());
        assert_eq!(window.device_search_color, NativeColor(0xff00_0008));
    }

    #[test]
    fn fun_0179dc30_restores_the_inactive_search_placeholder() {
        let mut window = Window {
            device_search_text: "Amplifier".to_owned(),
            device_search_color: NativeColor(0xff00_0008),
            ..Window::default()
        };

        window.device_search_exit();

        assert_eq!(window.device_search_text, "Search");
        assert_eq!(window.device_search_color, NativeColor(0xff00_0010));
    }

    #[test]
    fn fun_0179de40_searches_exact_prefix_retry_and_fallback_rows() {
        let mut window = Window::default();
        window.document.devices = ["Alpha", "Beta", "*Gamma"]
            .into_iter()
            .map(|name| Device {
                name: name.to_owned(),
                ..Device::default()
            })
            .collect();

        assert_eq!(window.device_search_changed("be", true, "*"), Some(1));
        assert_eq!(window.device_search_changed("gamma", true, "*"), Some(2));
        assert_eq!(window.device_search_changed("missing", true, "*"), Some(0));
        assert_eq!(window.device_search_changed("Alpha", false, "*"), None);
        assert_eq!(window.device_search_selection, Some(0));
    }

    #[test]
    fn fun_0179f700_clamps_drop_and_moves_the_active_device() {
        let mut window = Window::default();
        window.document.devices = ["Alpha", "Beta", "Gamma"]
            .into_iter()
            .map(|name| Device {
                name: name.to_owned(),
                ..Device::default()
            })
            .collect();
        window.document.current_device = Some(0);
        window.document.sort_by_name = true;

        assert!(window.device_list_drop(Some(0), 99));

        assert_eq!(
            window
                .document
                .devices
                .iter()
                .map(|device| device.name.as_str())
                .collect::<Vec<_>>(),
            ["Beta", "Gamma", "Alpha"]
        );
        assert_eq!(window.document.current_device, Some(2));
        assert_eq!(window.device_search_selection, Some(2));
        assert!(!window.document.sort_by_name);
        assert!(window.document.dirty);
        assert!(!window.device_list_drop(Some(0), -1));
    }

    #[test]
    fn fun_0179f830_controls_drag_auto_scroll_in_thirty_pixel_bands() {
        let mut window = Window::default();
        let size = CanvasSize {
            width: 200.0,
            height: 120.0,
        };

        assert!(window.device_list_drag_over(CanvasPoint { x: 20.0, y: 10.0 }, size));
        assert!(window.device_drag_auto_scroll.is_some());
        assert_eq!(
            window.device_drag_auto_scroll,
            Some(DeviceListAutoScroll::Up)
        );

        window.device_list_drag_over(CanvasPoint { x: 20.0, y: 110.0 }, size);
        assert_eq!(
            window.device_drag_auto_scroll,
            Some(DeviceListAutoScroll::Up)
        );

        window.device_list_drag_over(CanvasPoint { x: 20.0, y: 60.0 }, size);
        assert!(window.device_drag_auto_scroll.is_none());
        assert_eq!(window.device_drag_auto_scroll, None);

        window.device_list_drag_over(CanvasPoint { x: 20.0, y: 110.0 }, size);
        assert_eq!(
            window.device_drag_auto_scroll,
            Some(DeviceListAutoScroll::Down)
        );

        window.device_list_drag_over(CanvasPoint { x: 0.0, y: 110.0 }, size);
        assert!(window.device_drag_auto_scroll.is_none());
    }

    #[test]
    fn fun_0179fa10_moves_the_visible_device_rows_in_the_stored_direction() {
        let mut window = Window::default();
        window.document.devices = (0..5).map(|_| Device::default()).collect();
        window.device_list_top_index = 2;
        window.device_drag_auto_scroll = Some(DeviceListAutoScroll::Up);

        assert!(window.device_list_auto_scroll_tick(2));
        assert_eq!(window.device_list_top_index, 1);

        window.device_drag_auto_scroll = Some(DeviceListAutoScroll::Down);
        assert!(window.device_list_auto_scroll_tick(2));
        assert_eq!(window.device_list_top_index, 2);
        assert!(window.device_list_auto_scroll_tick(2));
        assert_eq!(window.device_list_top_index, 3);
        assert!(!window.device_list_auto_scroll_tick(2));
        assert_eq!(
            window.device_drag_auto_scroll,
            Some(DeviceListAutoScroll::Down)
        );

        window.device_drag_auto_scroll = None;
        assert!(!window.device_list_auto_scroll_tick(2));
        assert_eq!(window.device_list_top_index, 3);
    }

    #[test]
    fn fun_0179fa30_moves_the_selected_device_up_and_updates_active_state() {
        let mut window = Window::default();
        window.document.devices = ["Alpha", "Beta", "Gamma"]
            .into_iter()
            .map(|name| Device {
                name: name.to_owned(),
                ..Device::default()
            })
            .collect();
        window.document.current_device = Some(2);
        window.document.sort_by_name = true;

        assert!(window.move_device_up(Some(2)));
        assert_eq!(
            window
                .document
                .devices
                .iter()
                .map(|device| device.name.as_str())
                .collect::<Vec<_>>(),
            ["Alpha", "Gamma", "Beta"]
        );
        assert_eq!(window.document.current_device, Some(1));
        assert_eq!(window.device_search_selection, Some(1));
        assert!(!window.document.sort_by_name);
        assert!(window.document.dirty);
        assert!(!window.move_device_up(Some(0)));
        assert!(!window.move_device_up(Some(99)));
        assert!(!window.move_device_up(None));
    }

    #[test]
    fn fun_0179fc90_enables_move_up_only_after_the_first_row() {
        assert_eq!(
            Window::move_device_up_availability(None),
            CommandAvailability::Disabled
        );
        assert_eq!(
            Window::move_device_up_availability(Some(0)),
            CommandAvailability::Disabled
        );
        assert_eq!(
            Window::move_device_up_availability(Some(1)),
            CommandAvailability::Enabled
        );
    }

    #[test]
    fn fun_0179fb50_moves_the_selected_device_down_and_updates_active_state() {
        let mut window = Window::default();
        window.document.devices = ["Alpha", "Beta", "Gamma"]
            .into_iter()
            .map(|name| Device {
                name: name.to_owned(),
                ..Device::default()
            })
            .collect();
        window.document.current_device = Some(0);
        window.document.sort_by_name = true;

        assert!(window.move_device_down(Some(0)));
        assert_eq!(
            window
                .document
                .devices
                .iter()
                .map(|device| device.name.as_str())
                .collect::<Vec<_>>(),
            ["Beta", "Alpha", "Gamma"]
        );
        assert_eq!(window.document.current_device, Some(1));
        assert_eq!(window.device_search_selection, Some(1));
        assert!(!window.document.sort_by_name);
        assert!(window.document.dirty);
        assert!(!window.move_device_down(Some(2)));
        assert!(!window.move_device_down(Some(99)));
        assert!(!window.move_device_down(None));
    }

    #[test]
    fn fun_0179fce0_enables_move_down_only_before_the_final_row() {
        let mut window = Window::default();
        window.document.devices = (0..3).map(|_| Device::default()).collect();

        assert_eq!(
            window.move_device_down_availability(None),
            CommandAvailability::Disabled
        );
        assert_eq!(
            window.move_device_down_availability(Some(2)),
            CommandAvailability::Disabled
        );
        assert_eq!(
            window.move_device_down_availability(Some(1)),
            CommandAvailability::Enabled
        );
        assert_eq!(
            window.move_device_down_availability(Some(99)),
            CommandAvailability::Disabled
        );
    }

    #[test]
    fn fun_01798160_builds_indexed_text_and_adjusted_preview_plan() {
        let mut window = Window::default();
        window.document.devices.push(Device {
            name: "Comparator".to_owned(),
            objects: Vec::new(),
            library_path: PathBuf::new(),
            properties: DeviceProperties::default(),
        });
        let bounds = Bounds {
            x: 10.0,
            y: 20.0,
            width: 120.0,
            height: 80.0,
        };

        let plan = window
            .device_list_item_draw_plan(1, bounds, 6.0)
            .expect("device draw plan");

        assert_eq!(plan.background, bounds);
        assert_eq!(plan.text, "Comparator");
        assert_eq!(plan.text_origin, CanvasPoint { x: 12.0, y: 20.0 });
        assert_eq!(
            plan.preview,
            DevicePreviewRequest {
                device_index: 1,
                bounds: Bounds {
                    x: 10.0,
                    y: 14.0,
                    width: 120.0,
                    height: 86.0,
                },
            }
        );
        assert!(window.device_list_item_draw_plan(99, bounds, 6.0).is_none());
    }

    #[test]
    fn fun_0179fd60_builds_a_selected_owner_draw_drag_image_plan() {
        let mut window = Window::default();
        window.document.devices.push(Device {
            name: "Comparator".to_owned(),
            ..Device::default()
        });

        let plan = window
            .device_list_drag_start_plan(Some(1), 123.0, 28.0, 6.0)
            .expect("device drag plan");

        assert_eq!(plan.selected_index, 1);
        assert_eq!(
            plan.image_size,
            CanvasSize {
                width: 121.0,
                height: 28.0,
            }
        );
        assert_eq!(
            plan.transparent_color_sample,
            CanvasPoint { x: 0.0, y: 0.0 }
        );
        assert_eq!(plan.item.text, "Comparator");
        assert!((plan.item.background.width - 121.0).abs() < f32::EPSILON);
        assert!((plan.item.preview.bounds.y + 6.0).abs() < f32::EPSILON);
        assert!(
            window
                .device_list_drag_start_plan(None, 123.0, 28.0, 6.0)
                .is_none()
        );
        assert!(
            window
                .device_list_drag_start_plan(Some(99), 123.0, 28.0, 6.0)
                .is_none()
        );
    }

    #[test]
    fn fun_01798c70_maps_combo_index_and_snapshots_only_on_change() {
        let mut window = Window::default();
        window.document.current_mut().expect("device").name = "Current".to_owned();
        window
            .document
            .append_objects(vec![object(1, false, ObjectKind::Line)], true);
        assert!(window.document.can_undo());

        assert!(window.standard_changed(5));

        assert_eq!(window.standard_index, 4);
        assert_eq!(window.standard_snapshots.len(), 1);
        assert_eq!(window.standard_snapshots[0].standard_index, -1);
        assert_eq!(window.standard_snapshots[0].device.name, "Current");
        assert!(!window.document.can_undo());
        let generation = window.document.redraw_generation;

        assert!(!window.standard_changed(5));
        assert_eq!(window.standard_snapshots.len(), 1);
        assert_eq!(window.document.redraw_generation, generation);

        assert!(window.standard_changed(3));
        assert_eq!(window.standard_index, 9);
        assert_eq!(window.standard_snapshots[1].standard_index, 4);
    }

    #[test]
    fn fun_01793db0_updates_idle_commands_for_one_selected_object() {
        let mut window = Window::default();
        window
            .document
            .append_objects(vec![object(9, true, ObjectKind::Pin { variant: 2 })], true);
        let queried = Cell::new(false);

        window.on_idle(true, true, |selected| {
            queried.set(true);
            selected.id == ObjectId(9)
        });

        assert!(queried.get());
        assert_eq!(
            window.idle_commands,
            IdleCommandState {
                selection_while_idle: CommandAvailability::Enabled,
                selection: CommandAvailability::Enabled,
                single_eligible_selection: CommandAvailability::Enabled,
                external_while_idle: CommandAvailability::Enabled,
                undo: CommandAvailability::Enabled,
                redo: CommandAvailability::Disabled,
            }
        );
        assert_eq!(window.temporary_idle_generation, 0);
    }

    #[test]
    fn fun_01793db0_blocks_idle_only_commands_and_ticks_temporary_interaction() {
        let mut window = Window::default();
        window.document.current_mut().expect("device").objects = vec![
            object(1, true, ObjectKind::Line),
            object(2, true, ObjectKind::Rectangle),
        ];
        window.document.temporary_object = Some(object(3, false, ObjectKind::Other));
        let queried = Cell::new(false);

        window.on_idle(true, true, |_| {
            queried.set(true);
            true
        });

        assert!(!queried.get());
        assert_eq!(
            window.idle_commands.selection_while_idle,
            CommandAvailability::Disabled
        );
        assert_eq!(window.idle_commands.selection, CommandAvailability::Enabled);
        assert_eq!(
            window.idle_commands.single_eligible_selection,
            CommandAvailability::Disabled
        );
        assert_eq!(
            window.idle_commands.external_while_idle,
            CommandAvailability::Disabled
        );
        assert_eq!(window.temporary_idle_generation, 1);
    }

    #[test]
    fn fun_01793db0_reports_redo_and_requires_both_external_conditions() {
        let mut window = Window::default();
        window
            .document
            .append_objects(vec![object(4, false, ObjectKind::Line)], true);
        assert!(window.undo());

        window.on_idle(true, false, |_| true);

        assert_eq!(
            window.idle_commands.external_while_idle,
            CommandAvailability::Disabled
        );
        assert_eq!(window.idle_commands.undo, CommandAvailability::Disabled);
        assert_eq!(window.idle_commands.redo, CommandAvailability::Enabled);
        assert_eq!(
            window.idle_commands.selection,
            CommandAvailability::Disabled
        );
    }

    #[test]
    fn fun_01794230_releases_owned_state_before_notifying_the_owner() {
        let mut window = Window::default();
        window.document.filename = PathBuf::from("catalog.ddb");
        window.document.current_mut().expect("device").name = "OpAmp".to_owned();
        window
            .document
            .append_objects(vec![object(4, false, ObjectKind::Line)], true);
        window.document.temporary_object = Some(object(5, false, ObjectKind::Other));
        window.supplementary_objects = vec![object(6, false, ObjectKind::Rectangle)];
        window.custom_colors = vec![NativeColor(7)];
        window.catalog_directories.main = PathBuf::from("main");
        window.configuration_path = PathBuf::from("tina.ini");
        window.draw_timer_enabled = true;
        window.temporary_idle_generation = 9;
        window.owner_handle = Some(123);
        let mut lifecycle = LifecycleSpy::default();

        window
            .on_destroy(&mut lifecycle)
            .expect("owner notification");

        assert_eq!(
            lifecycle.notifications,
            vec![(
                123,
                ShapeCloseNotification {
                    library: PathBuf::from("catalog.ddb"),
                    shape: "OpAmp".to_owned(),
                }
            )]
        );
        assert!(window.document.devices.is_empty());
        assert!(window.document.current_device.is_none());
        assert!(window.document.temporary_object.is_none());
        assert!(!window.document.can_undo());
        assert!(!window.document.can_redo());
        assert!(window.supplementary_objects.is_empty());
        assert!(window.custom_colors.is_empty());
        assert_eq!(window.catalog_directories, CatalogDirectories::default());
        assert!(window.configuration_path.as_os_str().is_empty());
        assert!(!window.draw_timer_enabled);
        assert_eq!(window.temporary_idle_generation, 0);
        assert!(window.owner_handle.is_none());
    }

    #[test]
    fn fun_01794230_skips_notification_without_an_owner() {
        let mut window = Window::default();
        let mut lifecycle = LifecycleSpy::default();

        window.on_destroy(&mut lifecycle).expect("destroy");

        assert!(lifecycle.notifications.is_empty());
        assert!(window.document.devices.is_empty());
    }

    #[test]
    fn fun_01794230_reports_notification_failure_after_cleanup() {
        let mut window = Window {
            owner_handle: Some(99),
            ..Window::default()
        };
        let mut lifecycle = LifecycleSpy {
            notifications: Vec::new(),
            failure: Some("owner unavailable".to_owned()),
        };

        let error = window
            .on_destroy(&mut lifecycle)
            .expect_err("notification failure");

        assert_eq!(error, "owner unavailable");
        assert!(window.document.devices.is_empty());
        assert!(window.owner_handle.is_none());
    }

    #[test]
    fn fun_01794ef0_consumes_double_click_suppression_without_dispatch() {
        let mut window = Window {
            suppress_next_mouse_down: true,
            ..Window::default()
        };
        let mut editor = object_edit_spy(None);

        window
            .editor_mouse_down(
                MouseButton::Left,
                MouseModifiers::default(),
                CanvasPoint { x: 4.0, y: 6.0 },
                &mut editor,
            )
            .expect("suppressed mouse down");

        assert!(!window.suppress_next_mouse_down);
        assert!(editor.hit_calls.is_empty());
        assert!(editor.temporary_mouse_calls.is_empty());
        assert_eq!(window.editor_drag, EditorDrag::None);
    }

    #[test]
    fn fun_017950b0_forwards_mouse_up_only_to_a_temporary_interaction() {
        let mut window = Window::default();
        let mut editor = object_edit_spy(None);
        let modifiers = MouseModifiers {
            shift: true,
            control: false,
        };
        let point = CanvasPoint { x: 12.0, y: 18.0 };

        window
            .editor_mouse_up(MouseButton::Right, modifiers, point, &mut editor)
            .expect("no-op mouse up");
        assert!(editor.temporary_mouse_up_calls.is_empty());

        window.document.temporary_object = Some(object(44, false, ObjectKind::Other));
        window
            .editor_mouse_up(MouseButton::Right, modifiers, point, &mut editor)
            .expect("forwarded mouse up");

        assert_eq!(
            editor.temporary_mouse_up_calls,
            vec![(ObjectId(44), MouseButton::Right, modifiers, point)]
        );
    }

    #[test]
    fn fun_017950f0_updates_relative_status_hover_cursor_and_magnifier() {
        let mut window = Window::default();
        let mut origin = object(1, false, ObjectKind::SensingRectangle);
        origin.bounds.x = 3.0;
        origin.bounds.y = 4.0;
        window.document.current_mut().expect("device").objects = vec![
            origin,
            object(2, false, ObjectKind::Rectangle),
            object(3, false, ObjectKind::Line),
        ];
        window.viewport.scale = 2.0;
        let mut editor = object_edit_spy(Some(ObjectId(2)));
        editor.cursor = mouse::Interaction::Pointer;

        window
            .editor_mouse_move(
                MouseModifiers::default(),
                CanvasPoint { x: 40.0, y: 50.0 },
                CanvasSize {
                    width: 80.0,
                    height: 60.0,
                },
                &mut editor,
            )
            .expect("mouse move");

        assert_eq!(window.coordinate_status, " X: 17  Y: 21");
        assert_eq!(window.hover_cursor, Some(mouse::Interaction::Pointer));
        assert_eq!(editor.hit_calls[0].0, ObjectId(3));
        assert_eq!(editor.hit_calls[1].0, ObjectId(2));
        assert_eq!(
            editor.cursor_calls,
            vec![(ObjectId(2), CanvasPoint { x: 20.0, y: 25.0 })]
        );
        assert_eq!(
            window.magnifier,
            Some(MagnifierPlan {
                source: Bounds {
                    x: 20.0,
                    y: 30.0,
                    width: 40.0,
                    height: 40.0,
                },
                destination: Bounds {
                    x: 0.0,
                    y: 0.0,
                    width: 80.0,
                    height: 60.0,
                },
                crosshair_center: CanvasPoint { x: 40.0, y: 40.0 },
                crosshair_near_offset: 2.0,
                crosshair_far_offset: 3.0,
            })
        );
    }

    #[test]
    fn fun_017950f0_rejected_temporary_move_preserves_status_but_updates_magnifier() {
        let mut window = Window {
            coordinate_status: "unchanged".to_owned(),
            hover_cursor: Some(mouse::Interaction::Grab),
            ..Window::default()
        };
        window.document.temporary_object = Some(object(8, false, ObjectKind::Other));
        let mut editor = object_edit_spy(None);
        editor.temporary_mouse_move_result = CommandAvailability::Disabled;

        window
            .editor_mouse_move(
                MouseModifiers {
                    shift: true,
                    control: false,
                },
                CanvasPoint { x: 9.0, y: 11.0 },
                CanvasSize {
                    width: 40.0,
                    height: 40.0,
                },
                &mut editor,
            )
            .expect("temporary move");

        assert_eq!(window.coordinate_status, "unchanged");
        assert_eq!(window.hover_cursor, Some(mouse::Interaction::Grab));
        assert!(editor.hit_calls.is_empty());
        assert!(editor.cursor_calls.is_empty());
        assert_eq!(editor.temporary_mouse_move_calls[0].0, ObjectId(8));
        assert!(window.magnifier.is_some());
    }

    #[test]
    fn fun_01794ef0_uses_hit_handle_for_selected_object_move() {
        let mut window = Window::default();
        window.document.current_mut().expect("device").objects =
            vec![object(5, true, ObjectKind::Rectangle)];
        window.viewport.scale = 2.0;
        let mut editor = object_edit_spy(Some(ObjectId(5)));
        editor.hit_handle = Some(3);

        window
            .editor_mouse_down(
                MouseButton::Left,
                MouseModifiers::default(),
                CanvasPoint { x: 20.0, y: 30.0 },
                &mut editor,
            )
            .expect("mouse down");

        assert_eq!(
            window.editor_drag,
            EditorDrag::MoveSelection {
                origin: CanvasPoint { x: 10.0, y: 15.0 },
                handle: Some(3),
            }
        );
        assert_eq!(editor.hit_calls[0].1, CanvasPoint { x: 10.0, y: 15.0 });
        assert_eq!(ids(&window), vec![5]);
    }

    #[test]
    fn fun_01794ef0_applies_shift_toggle_and_control_rectangle_rules() {
        let mut window = Window::default();
        window.document.current_mut().expect("device").objects = vec![
            object(1, true, ObjectKind::Line),
            object(2, true, ObjectKind::Rectangle),
        ];
        let mut editor = object_edit_spy(Some(ObjectId(2)));

        window
            .editor_mouse_down(
                MouseButton::Left,
                MouseModifiers {
                    shift: true,
                    control: false,
                },
                CanvasPoint { x: 8.0, y: 9.0 },
                &mut editor,
            )
            .expect("shift toggle");
        assert!(!window.document.current().expect("device").objects[1].selected);
        assert_eq!(window.editor_drag, EditorDrag::None);

        editor.hit_id = None;
        window
            .editor_mouse_down(
                MouseButton::Left,
                MouseModifiers {
                    shift: true,
                    control: true,
                },
                CanvasPoint { x: 3.0, y: 4.0 },
                &mut editor,
            )
            .expect("control rectangle");
        assert!(window.document.current().expect("device").objects[0].selected);
        assert_eq!(
            window.editor_drag,
            EditorDrag::SelectionRectangle {
                origin: CanvasPoint { x: 3.0, y: 4.0 },
            }
        );
    }

    #[test]
    fn fun_01794dd0_edits_topmost_hit_and_moves_flagged_pins_to_the_end() {
        let mut window = Window::default();
        let mut first_pin = object(1, false, ObjectKind::Pin { variant: 0 });
        first_pin.pin_flags = 4;
        let second_pin = object(2, false, ObjectKind::Pin { variant: 1 });
        window.document.current_mut().expect("device").objects = vec![
            first_pin,
            second_pin.clone(),
            object(3, false, ObjectKind::Rectangle),
        ];
        window.viewport.scale = 2.0;
        let mut update = second_pin;
        update.id = ObjectId(200);
        update.name = "Edited pin".to_owned();
        update.pin_flags = 4;
        let mut editor = object_edit_spy(Some(ObjectId(2)));
        editor.edit_result = Some(update);

        let accepted = window
            .editor_double_click(CanvasPoint { x: 20.0, y: 40.0 }, &mut editor)
            .expect("object edit");

        assert!(accepted);
        assert_eq!(editor.hit_calls.len(), 2);
        assert_eq!(editor.hit_calls[0].0, ObjectId(3));
        assert_eq!(
            editor.hit_calls[1],
            (ObjectId(2), CanvasPoint { x: 10.0, y: 20.0 })
        );
        assert_eq!(editor.edit_calls, vec![ObjectId(2)]);
        assert_eq!(ids(&window), vec![3, 1, 2]);
        assert_eq!(
            window
                .document
                .current()
                .expect("device")
                .objects
                .last()
                .expect("edited pin")
                .name,
            "Edited pin"
        );
        assert!(window.document.dirty);
        assert!(window.document.can_undo());
        assert!(window.suppress_next_mouse_down);
        assert_eq!(window.cursor_refresh_generation, 1);
    }

    #[test]
    fn fun_01794dd0_stops_when_temporary_interaction_rejects_the_event() {
        let mut window = Window::default();
        window.document.current_mut().expect("device").objects =
            vec![object(1, false, ObjectKind::Line)];
        window.document.temporary_object = Some(object(9, false, ObjectKind::Other));
        let mut editor = object_edit_spy(Some(ObjectId(1)));
        editor.temporary_result = CommandAvailability::Disabled;

        let accepted = window
            .editor_double_click(CanvasPoint { x: 1.0, y: 2.0 }, &mut editor)
            .expect("temporary interaction");

        assert!(!accepted);
        assert_eq!(editor.temporary_calls, vec![ObjectId(9)]);
        assert!(editor.hit_calls.is_empty());
        assert!(editor.edit_calls.is_empty());
        assert!(!window.document.can_undo());
        assert!(!window.suppress_next_mouse_down);
        assert_eq!(window.cursor_refresh_generation, 0);
    }

    #[test]
    fn fun_01794dd0_records_undo_and_refreshes_after_a_cancelled_editor() {
        let mut window = Window::default();
        window.document.current_mut().expect("device").objects =
            vec![object(7, false, ObjectKind::Text)];
        let mut editor = object_edit_spy(Some(ObjectId(7)));

        let accepted = window
            .editor_double_click(CanvasPoint { x: 5.0, y: 6.0 }, &mut editor)
            .expect("cancelled editor");

        assert!(!accepted);
        assert!(window.document.can_undo());
        assert!(!window.document.dirty);
        assert!(window.suppress_next_mouse_down);
        assert_eq!(window.cursor_refresh_generation, 1);
    }

    #[test]
    fn fun_01792af0_resets_owned_state_and_builds_dialog_configuration() {
        let mut window = Window::default();
        window.document.filename = PathBuf::from("OLD.DDB");
        window.document.dirty = true;
        window.document.temporary_object = Some(object(7, false, ObjectKind::Line));
        window.supplementary_objects = vec![object(8, false, ObjectKind::Rectangle)];
        window.object_color = NativeColor(12);
        window.fill_color = NativeColor(13);
        window.fill_enabled = true;

        let plan = window
            .on_create(creation_options(&[]))
            .expect("valid creation options");

        assert_eq!(window.document.filename, Path::new("NONAME.DDB"));
        assert!(!window.document.dirty);
        assert!(window.document.temporary_object.is_none());
        assert!(window.supplementary_objects.is_empty());
        assert_eq!(window.object_color, NativeColor(0));
        assert_eq!(window.fill_color, NativeColor(0xffff_fffe));
        assert!(!window.fill_enabled);
        assert!(window.interaction.snap);
        assert!(!window.visibility.grid);
        assert!(window.visibility.pin_markers);
        assert_eq!(window.viewport.zoom_index, 2);
        assert!((window.viewport.scale - 3.0).abs() < f32::EPSILON);
        assert_eq!(
            window.configuration_path,
            PathBuf::from(r"C:\Application").join("tina.ini")
        );
        assert_eq!(plan.open_dialog.name, "OpenDDBDlg");
        assert_eq!(plan.open_dialog.title, "Open");
        assert_eq!(
            plan.import_dialog.filter,
            "Device Database (*.ddb)|*.ddb|TINA Macro (*.tsm)|*.tsm"
        );
        assert_eq!(plan.save_dialog.native_options, Some(0x0008_0106));
        assert_eq!(
            plan.open_dialog
                .places
                .iter()
                .map(|place| place.label)
                .collect::<Vec<_>>(),
            vec![
                "Private catalog folder",
                "Shared catalog folder",
                "Main Tina folder"
            ]
        );
        assert_eq!(
            plan.save_dialog.initial_folders,
            vec![
                PathBuf::from(r"C:\Private").join("SPICELIB"),
                PathBuf::from(r"C:\Shared").join("SPICELIB"),
                PathBuf::from(r"C:\Tina").join("SPICELIB"),
            ]
        );
        assert!(plan.compact_control_visible);
        assert!(plan.command_controls_visible);
        assert_eq!(plan.startup, StartupRequests::default());
    }

    #[test]
    fn fun_01792af0_parses_case_insensitive_startup_switches_and_last_values() {
        let mut window = Window::default();
        let mut options = creation_options(&[
            "/open",
            "first.ddb",
            "/EDIT",
            "Device A",
            "/OPEN",
            "second.ddb",
            "/create",
            "Part^B1^L2",
            "/handle",
            "42",
            "/EDIT",
        ]);
        options.active_screen_height = 499;
        options.zoom_scale = 8;

        let plan = window.on_create(options).expect("valid startup arguments");

        assert_eq!(plan.startup.open, Some(PathBuf::from("second.ddb")));
        assert_eq!(plan.startup.create.as_deref(), Some("Part^B1^L2"));
        assert_eq!(plan.startup.edit.as_deref(), Some("Device A"));
        assert_eq!(plan.startup.owner_handle, Some(42));
        assert!(!plan.compact_control_visible);
        assert!(!plan.command_controls_visible);
        assert_eq!(window.viewport.zoom_index, 4);
        assert!((window.viewport.scale - 8.0).abs() < f32::EPSILON);
    }

    #[test]
    fn fun_01792af0_rejects_an_invalid_owner_handle_after_initialization() {
        let mut window = Window::default();
        window.document.filename = PathBuf::from("KEEP.DDB");

        let error = window
            .on_create(creation_options(&["/HANDLE", "not-a-number"]))
            .expect_err("invalid owner handle");

        assert_eq!(
            error,
            CreationError::InvalidOwnerHandle("not-a-number".to_owned())
        );
        assert_eq!(window.document.filename, Path::new("NONAME.DDB"));
        assert_eq!(window.fill_color, NativeColor(0xffff_fffe));
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
    fn fun_017949a0_scales_scroll_axes_recenters_and_selects_the_zoom_state() {
        let mut window = Window::default();
        let mut shape = object(1, false, ObjectKind::Rectangle);
        shape.bounds = Bounds {
            x: 10.0,
            y: 20.0,
            width: 30.0,
            height: 40.0,
        };
        window.document.current_mut().expect("device").objects = vec![shape];

        window.zoom_factor_changed(2);

        assert_eq!(window.viewport.zoom_index, 2);
        assert!((window.viewport.scale - 3.0).abs() < f32::EPSILON);
        assert_eq!(window.viewport.scroll_extent, 4_800);
        assert_eq!(window.viewport.scroll_step, 24);
        assert_eq!(window.viewport.center, Some((25.0, 40.0)));
        assert_eq!(
            window.viewport.fit_bounds,
            Some(Bounds {
                x: 10.0,
                y: 20.0,
                width: 30.0,
                height: 40.0,
            })
        );

        window.zoom_factor_changed(99);

        assert_eq!(window.viewport.zoom_index, 4);
        assert!((window.viewport.scale - 8.0).abs() < f32::EPSILON);
        assert_eq!(window.viewport.scroll_extent, 12_800);
        assert_eq!(window.viewport.scroll_step, 64);
    }

    #[test]
    fn fun_01791b80_builds_grid_and_layered_object_paint_order() {
        let mut window = Window::default();
        let inside_bounds = Bounds {
            x: 10.0,
            y: 10.0,
            width: 5.0,
            height: 5.0,
        };
        let mut primary_shape = object(1, false, ObjectKind::Line);
        primary_shape.bounds = inside_bounds;
        let mut pin = object(2, false, ObjectKind::Pin { variant: 0 });
        pin.bounds = inside_bounds;
        let mut hidden = object(3, false, ObjectKind::Rectangle);
        hidden.bounds = inside_bounds;
        hidden.hidden = true;
        let mut protected = object(4, false, ObjectKind::Protected);
        protected.bounds = inside_bounds;
        let mut marker = object(5, false, ObjectKind::Other);
        marker.bounds = inside_bounds;
        marker.marker_role = Some(MarkerRole::Primary);
        window.document.current_mut().expect("device").objects =
            vec![primary_shape, pin, hidden, protected, marker];

        let mut supplementary_pin = object(8, false, ObjectKind::Pin { variant: 1 });
        supplementary_pin.bounds = inside_bounds;
        let mut supplementary_shape = object(9, false, ObjectKind::Ellipse);
        supplementary_shape.bounds = inside_bounds;
        let mut supplementary_hidden = object(10, false, ObjectKind::Arc);
        supplementary_hidden.bounds = inside_bounds;
        supplementary_hidden.hidden = true;
        window.supplementary_objects =
            vec![supplementary_pin, supplementary_shape, supplementary_hidden];
        let mut temporary = object(11, false, ObjectKind::CursorRectangle);
        temporary.bounds = inside_bounds;
        window.document.temporary_object = Some(temporary);
        window.visibility.grid = true;
        window.visibility.pin_markers = true;

        let plan = window.editor_paint_plan(PaintContext {
            width: 100.0,
            height: 80.0,
            horizontal_scroll: 16.0,
            vertical_scroll: 8.0,
            scale_x: 2.0,
            scale_y: 2.0,
        });

        assert_eq!(
            plan.viewport,
            Bounds {
                x: 8.0,
                y: 4.0,
                width: 50.0,
                height: 40.0,
            }
        );
        assert_eq!(plan.grid_lines.len(), 17);
        assert_eq!(plan.grid_color, NativeColor(0x0000_ffff));
        assert_eq!(plan.grid_native_style, 4);
        let item = |id, layer| PaintItem {
            id: ObjectId(id),
            layer,
            native_mode: 4,
        };
        assert_eq!(
            plan.items,
            vec![
                item(1, PaintLayer::PrimaryShape),
                item(5, PaintLayer::PrimaryShape),
                item(2, PaintLayer::PrimaryPin),
                item(9, PaintLayer::SupplementaryShape),
                item(10, PaintLayer::SupplementaryShape),
                item(8, PaintLayer::SupplementaryPin),
                item(5, PaintLayer::Marker(MarkerRole::Primary)),
                item(11, PaintLayer::Temporary),
            ]
        );
        assert_eq!(plan.device_bounds, Some(inside_bounds));
        assert_eq!(plan.bounds_color, NativeColor(0x0000_8000));
        assert_eq!(plan.restored_pen_color, NativeColor(0x00ff_0000));
    }

    #[derive(Default)]
    struct FillColorSpy {
        loaded: Vec<NativeColor>,
        choice: Option<ColorChoice>,
        choose_inputs: Vec<(NativeColor, Vec<NativeColor>)>,
        saved: Vec<Vec<NativeColor>>,
    }

    impl ShapeFillColorPort for FillColorSpy {
        fn load_custom_colors(&mut self) -> Result<Vec<NativeColor>, String> {
            Ok(self.loaded.clone())
        }

        fn choose_fill_color(
            &mut self,
            current: NativeColor,
            custom_colors: &[NativeColor],
        ) -> Result<Option<ColorChoice>, String> {
            self.choose_inputs.push((current, custom_colors.to_vec()));
            Ok(self.choice.clone())
        }

        fn save_custom_colors(&mut self, custom_colors: &[NativeColor]) -> Result<(), String> {
            self.saved.push(custom_colors.to_vec());
            Ok(())
        }
    }

    #[test]
    fn fun_01792630_left_click_applies_fill_and_persists_the_palette() {
        let mut window = Window::default();
        window.document.current_mut().expect("device").objects =
            vec![object(1, true, ObjectKind::Rectangle)];
        let loaded = vec![NativeColor(1), NativeColor(2)];
        let accepted = vec![NativeColor(3), NativeColor(4)];
        let mut port = FillColorSpy {
            loaded: loaded.clone(),
            choice: Some(ColorChoice {
                color: NativeColor(0x0012_3456),
                custom_colors: accepted.clone(),
            }),
            ..FillColorSpy::default()
        };

        assert_eq!(
            window.fill_color_mouse_down(MouseButton::Left, &mut port),
            Ok(1)
        );

        assert!(window.fill_enabled);
        assert_eq!(window.fill_color, NativeColor(0x0012_3456));
        assert_eq!(window.custom_colors, accepted);
        assert_eq!(
            window.document.current().expect("device").objects[0].fill_color,
            NativeColor(0x0012_3456)
        );
        assert_eq!(port.choose_inputs, vec![(NativeColor(0xffff_fffe), loaded)]);
        assert_eq!(port.saved, vec![accepted]);
    }

    #[test]
    fn fun_01792630_cancel_and_other_are_no_ops_while_right_click_disables_fill() {
        let mut window = Window {
            fill_enabled: true,
            fill_color: NativeColor(0x0012_3456),
            ..Window::default()
        };
        window.document.current_mut().expect("device").objects =
            vec![object(1, true, ObjectKind::Rectangle)];
        let mut port = FillColorSpy::default();
        let generation = window.document.redraw_generation;

        assert_eq!(
            window.fill_color_mouse_down(MouseButton::Left, &mut port),
            Ok(0)
        );
        assert_eq!(window.document.redraw_generation, generation);
        assert_eq!(
            window.fill_color_mouse_down(MouseButton::Other, &mut port),
            Ok(0)
        );
        assert_eq!(
            window.fill_color_mouse_down(MouseButton::Right, &mut port),
            Ok(1)
        );
        assert!(!window.fill_enabled);
        assert_eq!(window.fill_color, NativeColor(0xffff_fffe));
        assert_eq!(
            window.document.current().expect("device").objects[0].fill_color,
            NativeColor(0xffff_fffe)
        );
        assert!(port.saved.is_empty());
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
                library_path: PathBuf::new(),
                properties: DeviceProperties::default(),
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
                    library_path: PathBuf::new(),
                    properties: DeviceProperties::default(),
                },
                Device {
                    name: "Device1".to_owned(),
                    objects: Vec::new(),
                    library_path: PathBuf::new(),
                    properties: DeviceProperties::default(),
                },
                Device {
                    name: "Skipped".to_owned(),
                    objects: Vec::new(),
                    library_path: PathBuf::new(),
                    properties: DeviceProperties::default(),
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

    #[test]
    fn fun_0179ff10_copies_the_application_hint_without_transformation() {
        let mut window = Window {
            hint_status: "Previous hint".to_owned(),
            ..Window::default()
        };

        window.application_hint_changed("Move down the selected device");

        assert_eq!(window.hint_status, "Move down the selected device");
        window.application_hint_changed("");
        assert!(window.hint_status.is_empty());
    }

    #[test]
    fn fun_017a0640_handles_context_help_and_suppresses_the_default_path() {
        let window = Window::default();
        let mut help = HelpSpy::default();

        let outcome = window.handle_help(0x4321, &mut help).expect("help request");

        assert_eq!(help.contents, [(PathBuf::from("SHAPED.CHM"), 0x4321)]);
        assert_eq!(
            outcome,
            HelpEventOutcome {
                handled: true,
                call_default_help: false,
            }
        );
    }
}
