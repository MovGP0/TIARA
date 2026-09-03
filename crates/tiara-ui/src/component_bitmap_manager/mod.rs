//! Iced adapter for the recovered Component Bitmap Manager dialog.
//!
//! The recovered dialog edits a three-variant tree. It commits the rebuilt
//! bitmap strip and optional picture names only after a valid OK result.

use std::fmt;
use std::path::{Path, PathBuf};

use iced::widget::{button, column, container, row, text, text_input};
use iced::{Element, Length, Task};

pub const TITLE: &str = "Component Bitmaps";
pub const STRUCTURE_ERROR_MESSAGE: &str = "Structure error!";
pub const FIXED_ROOT_COUNT: usize = 3;
pub const HELP_CONTEXT: u32 = 0x33;
pub const BITMAP_EXPORT_FILTER: &str = "Bitmap file (*.bmp)|*.bmp";
pub const BITMAP_DEFAULT_EXTENSION: &str = ".bmp";
const BYTES_PER_PIXEL: usize = 4;
const DRAG_SCROLL_EDGE_SIZE: i32 = 30;

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct WindowConstraints {
    pub max_width: Option<i32>,
    pub max_height: Option<i32>,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum NodeKind {
    Variant,
    Group,
    Picture,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct MappingNode {
    pub kind: NodeKind,
    pub name: String,
    pub preview_index: Option<usize>,
    pub children: Vec<Self>,
}

impl MappingNode {
    #[must_use]
    pub fn variant(name: impl Into<String>, children: Vec<Self>) -> Self {
        Self {
            kind: NodeKind::Variant,
            name: name.into(),
            preview_index: None,
            children,
        }
    }

    #[must_use]
    pub fn group(name: impl Into<String>, children: Vec<Self>) -> Self {
        Self {
            kind: NodeKind::Group,
            name: name.into(),
            preview_index: None,
            children,
        }
    }

    #[must_use]
    pub fn picture(name: impl Into<String>, preview_index: usize) -> Self {
        Self {
            kind: NodeKind::Picture,
            name: name.into(),
            preview_index: Some(preview_index),
            children: Vec::new(),
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct BitmapFrame {
    pub width: u32,
    pub height: u32,
    pub pixels: Vec<u8>,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum BitmapPixelFormat {
    Rgb24,
    Other(u8),
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct LoadedBitmap {
    pub frame: BitmapFrame,
    pub pixel_format: BitmapPixelFormat,
    pub top_left_color: u32,
}

pub trait AddPicturePort {
    fn choose_bitmap_path(&mut self, initial_path: &str) -> Option<String>;

    /// Loads and decodes the selected bitmap.
    ///
    /// # Errors
    ///
    /// Returns an adapter-specific message when the file cannot be decoded.
    fn load_bitmap(&mut self, path: &str) -> Result<LoadedBitmap, String>;
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ExportDialogRequest {
    pub initial_path: String,
    pub filter: &'static str,
    pub default_extension: &'static str,
}

pub trait ExportBitmapPort {
    /// Opens the bitmap save dialog.
    ///
    /// # Errors
    ///
    /// Returns an adapter-specific message when the dialog cannot open.
    fn choose_export_path(
        &mut self,
        request: &ExportDialogRequest,
    ) -> Result<Option<PathBuf>, String>;

    /// Encodes the prepared frame as a bitmap at the selected path.
    ///
    /// # Errors
    ///
    /// Returns an adapter-specific message when encoding or writing fails.
    fn save_bitmap(&mut self, path: &Path, bitmap: &BitmapFrame) -> Result<(), String>;
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct BitmapStrip {
    pub frame_width: u32,
    pub height: u32,
    pub frames: Vec<BitmapFrame>,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct BitmapLayout {
    pub pictures_per_group: u8,
    pub group_count: u8,
    pub has_second_variant: bool,
    pub has_third_variant: bool,
}

#[derive(Debug, Clone, PartialEq)]
pub struct ExtractedMapping {
    pub bitmap: BitmapStrip,
    pub names: Option<Vec<String>>,
    pub layout: BitmapLayout,
    pub zoom: f32,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ModalResult {
    Accept,
    Cancel,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum PictureEditorAvailability {
    #[default]
    Disabled,
    Enabled,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CloseQueryOutcome {
    Allowed,
    Vetoed,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ExtractionError {
    InvalidZoom,
    MissingPictureIndex(String),
    MissingPreviewFrame(usize),
    InconsistentFrameSize,
    LayoutCountTooLarge,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum AddPictureError {
    Load(String),
    UnsupportedPixelFormat(BitmapPixelFormat),
    InvalidSelection,
}

impl fmt::Display for AddPictureError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::Load(message) => formatter.write_str(message),
            Self::UnsupportedPixelFormat(format) => {
                write!(formatter, "unsupported bitmap pixel format: {format:?}")
            }
            Self::InvalidSelection => formatter.write_str("the selected tree node does not exist"),
        }
    }
}

impl std::error::Error for AddPictureError {}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AddPictureOutcome {
    Cancelled,
    Added { preview_index: usize },
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ModifyPictureOutcome {
    Cancelled,
    Replaced { preview_index: usize },
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ExportBitmapError {
    Dialog(String),
    InvalidSelection,
    MissingPreviewFrame(usize),
    InvalidFrameData,
    InconsistentFrameSize,
    SizeOverflow,
    Save(String),
}

impl fmt::Display for ExportBitmapError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::Dialog(message) | Self::Save(message) => formatter.write_str(message),
            Self::InvalidSelection => formatter.write_str("the selection cannot be exported"),
            Self::MissingPreviewFrame(index) => {
                write!(formatter, "preview frame {index} does not exist")
            }
            Self::InvalidFrameData => formatter.write_str("preview frame data is invalid"),
            Self::InconsistentFrameSize => {
                formatter.write_str("preview frames have inconsistent dimensions")
            }
            Self::SizeOverflow => formatter.write_str("export bitmap dimensions are too large"),
        }
    }
}

impl std::error::Error for ExportBitmapError {}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ExportBitmapOutcome {
    Cancelled,
    Saved { path: PathBuf, bitmap: BitmapFrame },
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TreeDropHit {
    OutsideItem,
    OnItem,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TreeDragOperation {
    Move,
    Copy,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TreeMouseButton {
    Left,
    Right,
    Other,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct TreeMouseModifiers {
    pub control: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ScreenPoint {
    pub x: i32,
    pub y: i32,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TreeMouseDownOutcome {
    pub hit_path: Option<Vec<usize>>,
    pub drag_operation: TreeDragOperation,
    pub context_menu_position: Option<ScreenPoint>,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct TreeHintBounds {
    pub left: i32,
    pub top: i32,
    pub right: i32,
    pub bottom: i32,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum TreeHintOutcome {
    Unchanged,
    Hidden,
    Picture {
        text: String,
        cursor_bounds: TreeHintBounds,
    },
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum TreeDropOutcome {
    Ignored,
    Moved { path: Vec<usize> },
    Copied { paths: Vec<Vec<usize>> },
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum TreeDropError {
    MissingDragSource,
    InvalidSource,
    InvalidTarget,
    MissingPreviewFrame(usize),
}

impl fmt::Display for TreeDropError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::MissingDragSource => formatter.write_str("no tree drag source is stored"),
            Self::InvalidSource => formatter.write_str("the tree drag source is invalid"),
            Self::InvalidTarget => formatter.write_str("the tree drop target is invalid"),
            Self::MissingPreviewFrame(index) => {
                write!(formatter, "preview frame {index} does not exist")
            }
        }
    }
}

impl std::error::Error for TreeDropError {}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DragScrollDirection {
    Up,
    Down,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum DragScrollState {
    #[default]
    Idle,
    Active(DragScrollDirection),
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DragOverOutcome {
    pub accepted: bool,
    pub scrolled: Option<DragScrollDirection>,
}

pub trait TreeViewportPort {
    fn scroll_one_visible_node(&mut self, direction: DragScrollDirection);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TreeKey {
    C,
    V,
    X,
    Escape,
    Insert,
    Delete,
    Other(u16),
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct TreeKeyModifiers {
    pub shift: bool,
    pub control: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TreeKeyAction {
    CancelDrag,
    Copy,
    Paste,
    Cut,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TreeKeyDownOutcome {
    pub key: TreeKey,
    pub modifiers: TreeKeyModifiers,
    pub actions: Vec<TreeKeyAction>,
}

impl fmt::Display for ExtractionError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::InvalidZoom => formatter.write_str("picture zoom is not a number"),
            Self::MissingPictureIndex(name) => {
                write!(formatter, "picture node '{name}' has no preview index")
            }
            Self::MissingPreviewFrame(index) => {
                write!(formatter, "preview frame {index} does not exist")
            }
            Self::InconsistentFrameSize => {
                formatter.write_str("preview frames have inconsistent dimensions")
            }
            Self::LayoutCountTooLarge => {
                formatter.write_str("bitmap layout count does not fit in one byte")
            }
        }
    }
}

impl std::error::Error for ExtractionError {}

#[derive(Debug, Clone)]
pub enum Message {
    Created {
        width: i32,
        height: i32,
    },
    Add,
    Modify,
    Delete,
    Export,
    Group,
    TreeSelected(Vec<usize>),
    TreeSelectionChanging(Vec<usize>),
    TreeDropped {
        target_path: Vec<usize>,
        hit: TreeDropHit,
        operation: TreeDragOperation,
    },
    TreeDragEnded,
    TreeKeyDown {
        key: TreeKey,
        modifiers: TreeKeyModifiers,
        tree_owns_drag: bool,
    },
    TreeMouseDown {
        hit_path: Option<Vec<usize>>,
        button: TreeMouseButton,
        modifiers: TreeMouseModifiers,
        screen_position: ScreenPoint,
    },
    NameChanged(String),
    ZoomChanged(String),
    DeleteAll,
    Accept,
    Cancel,
}

#[derive(Debug, Clone)]
pub struct Window {
    roots: [MappingNode; FIXED_ROOT_COUNT],
    preview_frames: Vec<BitmapFrame>,
    preview_index: Option<usize>,
    selected_path: Vec<usize>,
    selected_picture_path: Option<Vec<usize>>,
    names_enabled: bool,
    zoom_text: String,
    staged_empty: bool,
    structure_error: bool,
    close_message: Option<&'static str>,
    modal_result: Option<ModalResult>,
    constraints: WindowConstraints,
    help_context: u32,
    last_bitmap_path: String,
    transparency_color: Option<u32>,
    pending_add: Option<()>,
    pending_modify: Option<()>,
    pending_delete: Option<()>,
    pending_export: Option<()>,
    pending_group: Option<()>,
    next_group_number: u32,
    picture_editor_availability: PictureEditorAvailability,
    name_text: String,
    pending_selection_preview_index: Option<usize>,
    drag_source_path: Option<Vec<usize>>,
    drag_scroll_state: DragScrollState,
    pending_key_actions: Vec<TreeKeyAction>,
    mouse_down_path: Option<Vec<usize>>,
    drag_operation: TreeDragOperation,
    pending_context_menu_position: Option<ScreenPoint>,
}

impl Window {
    #[must_use]
    pub fn new(
        roots: [MappingNode; FIXED_ROOT_COUNT],
        preview_frames: Vec<BitmapFrame>,
        names_enabled: bool,
        zoom: f32,
    ) -> Self {
        Self {
            roots,
            preview_frames,
            preview_index: None,
            selected_path: Vec::new(),
            selected_picture_path: None,
            names_enabled,
            zoom_text: zoom.to_string(),
            staged_empty: false,
            structure_error: false,
            close_message: None,
            modal_result: None,
            constraints: WindowConstraints::default(),
            help_context: 0,
            last_bitmap_path: String::new(),
            transparency_color: None,
            pending_add: None,
            pending_modify: None,
            pending_delete: None,
            pending_export: None,
            pending_group: None,
            next_group_number: 0,
            picture_editor_availability: PictureEditorAvailability::Disabled,
            name_text: String::new(),
            pending_selection_preview_index: None,
            drag_source_path: None,
            drag_scroll_state: DragScrollState::Idle,
            pending_key_actions: Vec::new(),
            mouse_down_path: None,
            drag_operation: TreeDragOperation::Move,
            pending_context_menu_position: None,
        }
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::Created { width, height } => self.on_create(width, height),
            Message::Add => self.pending_add = Some(()),
            Message::Modify => self.pending_modify = Some(()),
            Message::Delete => self.pending_delete = Some(()),
            Message::Export => self.pending_export = Some(()),
            Message::Group => self.pending_group = Some(()),
            Message::TreeSelected(path) => {
                let _ = self.tree_selection_changed(&path);
            }
            Message::TreeSelectionChanging(path) => {
                let _ = self.tree_selection_changing(&path);
            }
            Message::TreeDropped {
                target_path,
                hit,
                operation,
            } => {
                let _ = self.tree_drag_drop(&target_path, hit, operation);
            }
            Message::TreeDragEnded => self.tree_drag_ended(),
            Message::TreeKeyDown {
                key,
                modifiers,
                tree_owns_drag,
            } => {
                let outcome = Self::tree_key_down(key, modifiers, tree_owns_drag);
                self.pending_key_actions.extend(outcome.actions);
            }
            Message::TreeMouseDown {
                hit_path,
                button,
                modifiers,
                screen_position,
            } => {
                let _ =
                    self.tree_mouse_down(hit_path.as_deref(), button, modifiers, screen_position);
            }
            Message::NameChanged(value) => {
                let _ = self.tree_name_changed(value);
            }
            Message::ZoomChanged(value) => self.zoom_text = value,
            Message::DeleteAll => self.delete_all(),
            Message::Accept => self.request_accept(),
            Message::Cancel => self.modal_result = Some(ModalResult::Cancel),
        }
        Task::none()
    }

    /// Applies the recovered Component Bitmap Manager creation state.
    ///
    /// Ports Ghidra function `0x017A47F0`, symbol `FUN_017a47f0`. The VCL
    /// handler fixes both maximum dimensions to the initial form size, selects
    /// the first tree root, and assigns help context `0x33`. Iced owns the
    /// actual window constraint and tree rendering.
    pub fn on_create(&mut self, width: i32, height: i32) {
        self.constraints = WindowConstraints {
            max_width: Some(width),
            max_height: Some(height),
        };
        self.selected_path = vec![0];
        self.help_context = HELP_CONTEXT;
    }

    /// Loads and adds one bitmap below the selected tree node.
    ///
    /// Ports Ghidra function `0x017A48E0`, symbol `FUN_017a48e0`. Cancellation
    /// is a no-op. An accepted path becomes the next initial path even when
    /// loading fails. Only a 24-bit RGB bitmap is accepted. The first bitmap
    /// after Delete All establishes the preview dimensions and transparent
    /// top-left color. The new preview receives the next image index and a
    /// `Picture #N` child node below the current selection.
    ///
    /// # Errors
    ///
    /// Returns an error when loading fails, the bitmap is not 24-bit RGB, or
    /// the selected tree path no longer exists.
    pub fn add_picture(
        &mut self,
        port: &mut impl AddPicturePort,
    ) -> Result<AddPictureOutcome, AddPictureError> {
        let Some(path) = port.choose_bitmap_path(&self.last_bitmap_path) else {
            return Ok(AddPictureOutcome::Cancelled);
        };
        self.last_bitmap_path.clone_from(&path);

        let loaded = port.load_bitmap(&path).map_err(AddPictureError::Load)?;
        if loaded.pixel_format != BitmapPixelFormat::Rgb24 {
            return Err(AddPictureError::UnsupportedPixelFormat(loaded.pixel_format));
        }

        if self.staged_empty {
            self.preview_frames.clear();
            self.transparency_color = Some(loaded.top_left_color);
            self.staged_empty = false;
        }

        let preview_index = self.preview_frames.len();
        let node = MappingNode::picture(format!("Picture #{preview_index}"), preview_index);
        let parent = node_at_path_mut(&mut self.roots, &self.selected_path)
            .ok_or(AddPictureError::InvalidSelection)?;
        parent.children.push(node);
        self.preview_frames.push(loaded.frame);
        Ok(AddPictureOutcome::Added { preview_index })
    }

    /// Reports whether Add is enabled for the current tree selection.
    ///
    /// Ports Ghidra function `0x017A5440`, symbol `FUN_017a5440`. Add is
    /// enabled for any root node and for a selected group below a root. It is
    /// disabled when there is no valid selection or a picture is selected.
    #[must_use]
    pub fn can_add(&self) -> bool {
        let Some(selected) = node_at_path(&self.roots, &self.selected_path) else {
            return false;
        };
        self.selected_path.len() == 1 || selected.kind == NodeKind::Group
    }

    #[must_use]
    pub const fn take_add_request(&mut self) -> bool {
        self.pending_add.take().is_some()
    }

    /// Replaces the selected picture while retaining its preview index.
    ///
    /// Ports Ghidra function `0x017A4B70`, symbol `FUN_017a4b70`. Cancellation
    /// is a no-op. After file acceptance, the selected picture node is removed
    /// before the replacement is loaded and validated. A successful RGB24
    /// load replaces the indexed preview and appends a rebuilt `Picture #N`
    /// node to the original parent.
    ///
    /// # Errors
    ///
    /// Returns an error when the selected node or preview index is invalid,
    /// loading fails, or the replacement is not 24-bit RGB. Load and format
    /// errors preserve the recovered partial effect: the old node stays
    /// removed while its preview frame is unchanged.
    pub fn modify_selected_picture(
        &mut self,
        port: &mut impl AddPicturePort,
    ) -> Result<ModifyPictureOutcome, AddPictureError> {
        let Some(path) = port.choose_bitmap_path(&self.last_bitmap_path) else {
            return Ok(ModifyPictureOutcome::Cancelled);
        };
        self.last_bitmap_path.clone_from(&path);

        let (removed, parent_path) = remove_node_at_path(&mut self.roots, &self.selected_path)
            .ok_or(AddPictureError::InvalidSelection)?;
        let preview_index = removed
            .preview_index
            .filter(|index| *index < self.preview_frames.len())
            .ok_or(AddPictureError::InvalidSelection)?;
        self.selected_path.clone_from(&parent_path);

        let loaded = port.load_bitmap(&path).map_err(AddPictureError::Load)?;
        if loaded.pixel_format != BitmapPixelFormat::Rgb24 {
            return Err(AddPictureError::UnsupportedPixelFormat(loaded.pixel_format));
        }

        self.preview_frames[preview_index] = loaded.frame;
        let parent = node_at_path_mut(&mut self.roots, &parent_path)
            .ok_or(AddPictureError::InvalidSelection)?;
        parent.children.push(MappingNode::picture(
            format!("Picture #{preview_index}"),
            preview_index,
        ));
        Ok(ModifyPictureOutcome::Replaced { preview_index })
    }

    /// Reports whether Modify is enabled for the current tree selection.
    ///
    /// Ports Ghidra function `0x017A5510`, symbol `FUN_017a5510`. Modify is
    /// enabled only when the valid selected node is a picture.
    #[must_use]
    pub fn can_modify(&self) -> bool {
        node_at_path(&self.roots, &self.selected_path)
            .is_some_and(|selected| selected.kind == NodeKind::Picture)
    }

    #[must_use]
    pub const fn take_modify_request(&mut self) -> bool {
        self.pending_modify.take().is_some()
    }

    /// Deletes the selected tree node and updates the empty-preview flag.
    ///
    /// Ports Ghidra function `0x017A4F60`, symbol `FUN_017a4f60`. The preview
    /// frame is retained at its stable index. When deletion leaves only the
    /// three fixed roots, the next Add operation resets the preview cache and
    /// establishes new dimensions and transparency.
    ///
    /// # Errors
    ///
    /// Returns an error when the selected path is a root or no longer exists.
    pub fn delete_selected(&mut self) -> Result<(), AddPictureError> {
        let (_, parent_path) = remove_node_at_path(&mut self.roots, &self.selected_path)
            .ok_or(AddPictureError::InvalidSelection)?;
        self.selected_path = parent_path;
        self.staged_empty = total_node_count(&self.roots) == FIXED_ROOT_COUNT;
        Ok(())
    }

    /// Reports whether Delete is enabled for the current tree selection.
    ///
    /// Ports Ghidra function `0x017A54B0`, symbol `FUN_017a54b0`. Delete is
    /// enabled for any valid non-root node and disabled for a root or no
    /// selection.
    #[must_use]
    pub fn can_delete(&self) -> bool {
        self.selected_path.len() > 1 && node_at_path(&self.roots, &self.selected_path).is_some()
    }

    #[must_use]
    pub const fn take_delete_request(&mut self) -> bool {
        self.pending_delete.take().is_some()
    }

    /// Exports the selected preview or its immediate picture children as BMP.
    ///
    /// Ports Ghidra function `0x017A4FB0`, symbol `FUN_017a4fb0`. The scoped
    /// request replaces the recovered temporary mutation and restoration of a
    /// reusable VCL save dialog. Cancellation is a no-op. A picture exports
    /// its indexed frame. A variant or group exports its immediate picture
    /// children as one left-to-right horizontal strip.
    ///
    /// # Errors
    ///
    /// Returns an error for dialog or save failures, a selection that the
    /// recovered update gate would disable, missing previews, invalid frame
    /// data, inconsistent dimensions, or an output-size overflow.
    pub fn export_selected(
        &self,
        port: &mut impl ExportBitmapPort,
    ) -> Result<ExportBitmapOutcome, ExportBitmapError> {
        let request = ExportDialogRequest {
            initial_path: self.last_bitmap_path.clone(),
            filter: BITMAP_EXPORT_FILTER,
            default_extension: BITMAP_DEFAULT_EXTENSION,
        };
        let Some(path) = port
            .choose_export_path(&request)
            .map_err(ExportBitmapError::Dialog)?
        else {
            return Ok(ExportBitmapOutcome::Cancelled);
        };

        let selected = node_at_path(&self.roots, &self.selected_path)
            .ok_or(ExportBitmapError::InvalidSelection)?;
        let bitmap = if selected.kind == NodeKind::Picture {
            preview_for_node(selected, &self.preview_frames)?.clone()
        } else {
            export_child_strip(selected, &self.preview_frames)?
        };
        port.save_bitmap(&path, &bitmap)
            .map_err(ExportBitmapError::Save)?;
        Ok(ExportBitmapOutcome::Saved { path, bitmap })
    }

    /// Reports whether Export is enabled for the current tree selection.
    ///
    /// Ports Ghidra function `0x017A5560`, symbol `FUN_017a5560`. Export is
    /// enabled for a selected picture or when the selected container has a
    /// picture as its first child.
    #[must_use]
    pub fn can_export(&self) -> bool {
        node_at_path(&self.roots, &self.selected_path).is_some_and(|selected| {
            selected.kind == NodeKind::Picture
                || selected
                    .children
                    .first()
                    .is_some_and(|child| child.kind == NodeKind::Picture)
        })
    }

    #[must_use]
    pub const fn take_export_request(&mut self) -> bool {
        self.pending_export.take().is_some()
    }

    /// Appends a numbered group below the selected tree node.
    ///
    /// Ports Ghidra function `0x017A5360`, symbol `FUN_017a5360`, through its
    /// recovered `FUN_017a6600` helper. The new node uses `Group #N`, has no
    /// preview index, and consumes the form-local number. Iced owns the visual
    /// expansion of the parent node.
    ///
    /// # Errors
    ///
    /// Returns an error when the selected tree path no longer exists.
    pub fn add_group(&mut self) -> Result<String, AddPictureError> {
        let name = format!("Group #{}", self.next_group_number);
        let parent = node_at_path_mut(&mut self.roots, &self.selected_path)
            .ok_or(AddPictureError::InvalidSelection)?;
        parent
            .children
            .push(MappingNode::group(name.clone(), Vec::new()));
        self.next_group_number = self.next_group_number.wrapping_add(1);
        Ok(name)
    }

    /// Reports whether Group is enabled for the current tree selection.
    ///
    /// Ports Ghidra function `0x017A55E0`, symbol `FUN_017a55e0`. Group is
    /// enabled only when a valid fixed root is selected.
    #[must_use]
    pub fn can_group(&self) -> bool {
        self.selected_path.len() == 1 && node_at_path(&self.roots, &self.selected_path).is_some()
    }

    #[must_use]
    pub const fn take_group_request(&mut self) -> bool {
        self.pending_group.take().is_some()
    }

    #[must_use]
    pub const fn next_group_number(&self) -> u32 {
        self.next_group_number
    }

    /// Selects a tree path for a following tree action.
    ///
    /// # Errors
    ///
    /// Returns an error when the path does not identify a current node.
    pub fn select_path(&mut self, path: &[usize]) -> Result<(), AddPictureError> {
        self.tree_selection_changing(path)?;
        self.tree_selection_changed(path)
    }

    /// Commits the current picture name before a tree selection changes.
    ///
    /// Ports Ghidra function `0x017A56B0`, symbol `FUN_017a56b0`. An empty
    /// current name is replaced with `Picture #N`, where N is the current
    /// picture preview index, and the resulting editor text is stored in the
    /// current node. The target preview index is retained for Iced to render
    /// the same image for normal and selected states.
    ///
    /// # Errors
    ///
    /// Returns an error when the target path or stored current-picture path
    /// no longer exists or when the current picture has no preview index.
    pub fn tree_selection_changing(
        &mut self,
        target_path: &[usize],
    ) -> Result<(), AddPictureError> {
        let target_preview_index = node_at_path(&self.roots, target_path)
            .ok_or(AddPictureError::InvalidSelection)?
            .preview_index;
        if let Some(current_path) = self.selected_picture_path.as_deref() {
            let current = node_at_path_mut(&mut self.roots, current_path)
                .ok_or(AddPictureError::InvalidSelection)?;
            if self.name_text.is_empty() {
                let preview_index = current
                    .preview_index
                    .ok_or(AddPictureError::InvalidSelection)?;
                self.name_text = format!("Picture #{preview_index}");
            }
            current.name.clone_from(&self.name_text);
        }
        self.pending_selection_preview_index = target_preview_index;
        Ok(())
    }

    /// Applies a Component Bitmap Manager tree selection change.
    ///
    /// Ports Ghidra function `0x017A5640`, symbol `FUN_017a5640`. Picture
    /// selection stores the selected picture path, copies its node text into
    /// the name editor, and enables the name and zoom editors. Other node
    /// kinds clear the stored picture and disable both editors without
    /// clearing the last name text.
    ///
    /// # Errors
    ///
    /// Returns an error when the supplied tree path does not exist.
    pub fn tree_selection_changed(&mut self, path: &[usize]) -> Result<(), AddPictureError> {
        let selected = node_at_path(&self.roots, path).ok_or(AddPictureError::InvalidSelection)?;
        let picture_name = (selected.kind == NodeKind::Picture).then(|| selected.name.clone());
        self.selected_path = path.to_vec();
        if let Some(name) = picture_name {
            self.selected_picture_path = Some(path.to_vec());
            self.name_text = name;
            self.picture_editor_availability = PictureEditorAvailability::Enabled;
        } else {
            self.selected_picture_path = None;
            self.picture_editor_availability = PictureEditorAvailability::Disabled;
        }
        Ok(())
    }

    /// Applies a picture-name editor change to the selected tree node.
    ///
    /// Ports Ghidra function `0x017A6470`, symbol `FUN_017a6470`. The recovered
    /// edit change reads the current text and immediately assigns it to the
    /// selected tree node. A disabled editor remains unchanged in the Iced
    /// adapter.
    ///
    /// # Errors
    ///
    /// Returns an error when the stored selected-picture path is stale.
    pub fn tree_name_changed(&mut self, value: String) -> Result<(), AddPictureError> {
        if self.picture_editor_availability != PictureEditorAvailability::Enabled {
            return Ok(());
        }
        let path = self
            .selected_picture_path
            .as_deref()
            .ok_or(AddPictureError::InvalidSelection)?;
        let selected =
            node_at_path_mut(&mut self.roots, path).ok_or(AddPictureError::InvalidSelection)?;
        self.name_text = value;
        selected.name.clone_from(&self.name_text);
        Ok(())
    }

    #[must_use]
    pub fn selected_picture_path(&self) -> Option<&[usize]> {
        self.selected_picture_path.as_deref()
    }

    #[must_use]
    pub const fn picture_editors_enabled(&self) -> bool {
        matches!(
            self.picture_editor_availability,
            PictureEditorAvailability::Enabled
        )
    }

    #[must_use]
    pub fn name_text(&self) -> &str {
        &self.name_text
    }

    #[must_use]
    pub const fn pending_selection_preview_index(&self) -> Option<usize> {
        self.pending_selection_preview_index
    }

    /// Stores the tree node used by the next drag-drop operation.
    ///
    /// # Errors
    ///
    /// Returns an error when the path does not identify a current node.
    pub fn begin_tree_drag(&mut self, path: &[usize]) -> Result<(), TreeDropError> {
        if node_at_path(&self.roots, path).is_none() {
            return Err(TreeDropError::InvalidSource);
        }
        self.drag_source_path = Some(path.to_vec());
        Ok(())
    }

    /// Moves or copies the dragged tree node at an accepted item drop target.
    ///
    /// Ports Ghidra function `0x017A5810`, symbol `FUN_017a5810`. A selected
    /// root, a missing target, and a hit outside the item are no-ops. Move uses
    /// VCL-equivalent attach rules: pictures become children of roots or
    /// groups and are inserted before pictures; groups are inserted before
    /// groups and cannot be dropped on pictures. Copy duplicates a picture
    /// preview below the target, or creates a numbered group and duplicates
    /// each immediate picture child with new stable preview indexes.
    ///
    /// # Errors
    ///
    /// Returns an error for missing or stale drag state, invalid move paths,
    /// or a copied node whose preview frame no longer exists.
    pub fn tree_drag_drop(
        &mut self,
        target_path: &[usize],
        hit: TreeDropHit,
        operation: TreeDragOperation,
    ) -> Result<TreeDropOutcome, TreeDropError> {
        let Some(selected) = node_at_path(&self.roots, &self.selected_path) else {
            return Ok(TreeDropOutcome::Ignored);
        };
        if self.selected_path.len() == 1 || selected.kind == NodeKind::Variant {
            return Ok(TreeDropOutcome::Ignored);
        }
        if hit == TreeDropHit::OutsideItem {
            return Ok(TreeDropOutcome::Ignored);
        }

        let drag_path = self
            .drag_source_path
            .clone()
            .ok_or(TreeDropError::MissingDragSource)?;
        let dragged = node_at_path(&self.roots, &drag_path)
            .ok_or(TreeDropError::InvalidSource)?
            .clone();
        let target = node_at_path(&self.roots, target_path).ok_or(TreeDropError::InvalidTarget)?;
        if target.kind == NodeKind::Picture && dragged.kind == NodeKind::Group {
            return Ok(TreeDropOutcome::Ignored);
        }

        match operation {
            TreeDragOperation::Move => self.move_selected_node(target_path, dragged.kind),
            TreeDragOperation::Copy => self.copy_dragged_node(&dragged, target_path),
        }
    }

    /// Updates drag acceptance and edge auto-scroll state.
    ///
    /// Ports Ghidra function `0x017A59D0`, symbol `FUN_017a59d0`. Every drag
    /// is accepted. The timer is disabled outside the client bounds and in the
    /// center region. An idle drag within 30 pixels of an edge scrolls one
    /// visible node immediately and starts the timer. An active timer prevents
    /// repeated starts and direction changes. The recovered outer check uses
    /// client X for both the width and height upper bounds; this adapter keeps
    /// that observable asymmetry.
    pub fn tree_drag_over(
        &mut self,
        client_x: i32,
        client_y: i32,
        client_width: i32,
        client_height: i32,
        viewport: &mut impl TreeViewportPort,
    ) -> DragOverOutcome {
        let outside =
            client_x < 1 || client_width <= client_x || client_y < 1 || client_height <= client_x;
        if outside {
            self.drag_scroll_state = DragScrollState::Idle;
            return DragOverOutcome {
                accepted: true,
                scrolled: None,
            };
        }

        let direction = if client_y < DRAG_SCROLL_EDGE_SIZE {
            Some(DragScrollDirection::Up)
        } else if client_y <= client_height - DRAG_SCROLL_EDGE_SIZE {
            None
        } else {
            Some(DragScrollDirection::Down)
        };
        let Some(direction) = direction else {
            self.drag_scroll_state = DragScrollState::Idle;
            return DragOverOutcome {
                accepted: true,
                scrolled: None,
            };
        };
        if matches!(self.drag_scroll_state, DragScrollState::Active(_)) {
            return DragOverOutcome {
                accepted: true,
                scrolled: None,
            };
        }

        viewport.scroll_one_visible_node(direction);
        self.drag_scroll_state = DragScrollState::Active(direction);
        DragOverOutcome {
            accepted: true,
            scrolled: Some(direction),
        }
    }

    #[must_use]
    pub const fn drag_scroll_state(&self) -> DragScrollState {
        self.drag_scroll_state
    }

    /// Repeats the active edge scroll for one timer tick.
    ///
    /// Ports Ghidra function `0x017A6450`, symbol `FUN_017a6450`. The recovered
    /// timer delegates to the same scroll operation that starts edge scrolling
    /// and passes its saved direction. Iced supplies the timer subscription;
    /// an idle state is a no-op.
    pub fn tree_scroll_timer_tick(
        &self,
        viewport: &mut impl TreeViewportPort,
    ) -> Option<DragScrollDirection> {
        let DragScrollState::Active(direction) = self.drag_scroll_state else {
            return None;
        };
        viewport.scroll_one_visible_node(direction);
        Some(direction)
    }

    /// Stops edge auto-scroll when the tree drag ends.
    ///
    /// Ports Ghidra function `0x017A5AA0`, symbol `FUN_017a5aa0`. Only the
    /// recovered timer-enabled state is cleared; the stored drag source stays
    /// available.
    pub const fn tree_drag_ended(&mut self) {
        self.drag_scroll_state = DragScrollState::Idle;
    }

    #[must_use]
    pub fn drag_source_path(&self) -> Option<&[usize]> {
        self.drag_source_path.as_deref()
    }

    /// Maps recovered tree keyboard shortcuts to application actions.
    ///
    /// Ports Ghidra function `0x017A60C0`, symbol `FUN_017a60c0`. Ctrl+C is
    /// rewritten to Ctrl+Insert, Ctrl+V to Shift+Insert, and Ctrl+X to
    /// Shift+Delete. Ctrl+Insert copies, Shift+Insert pastes, Shift+Delete
    /// cuts, and Escape cancels only when this tree owns the active drag.
    #[must_use]
    pub fn tree_key_down(
        mut key: TreeKey,
        mut modifiers: TreeKeyModifiers,
        tree_owns_drag: bool,
    ) -> TreeKeyDownOutcome {
        if modifiers.control {
            match key {
                TreeKey::C => key = TreeKey::Insert,
                TreeKey::V => {
                    key = TreeKey::Insert;
                    modifiers = TreeKeyModifiers {
                        shift: true,
                        control: false,
                    };
                }
                TreeKey::X => {
                    key = TreeKey::Delete;
                    modifiers = TreeKeyModifiers {
                        shift: true,
                        control: false,
                    };
                }
                _ => {}
            }
        }

        let mut actions = Vec::new();
        match key {
            TreeKey::Escape if tree_owns_drag => actions.push(TreeKeyAction::CancelDrag),
            TreeKey::Insert => {
                if modifiers.control {
                    actions.push(TreeKeyAction::Copy);
                }
                if modifiers.shift {
                    actions.push(TreeKeyAction::Paste);
                }
            }
            TreeKey::Delete if modifiers.shift => actions.push(TreeKeyAction::Cut),
            _ => {}
        }
        TreeKeyDownOutcome {
            key,
            modifiers,
            actions,
        }
    }

    pub fn take_key_actions(&mut self) -> Vec<TreeKeyAction> {
        std::mem::take(&mut self.pending_key_actions)
    }

    /// Applies a pointer press in the bitmap tree.
    ///
    /// Ports Ghidra function `0x017A61C0`, symbol `FUN_017a61c0`. The handler
    /// stores the hit node and clears the previous drag modifier. A left press
    /// on a group or picture selects copy-drag when Control is held. A right
    /// press requests the local context menu only when the hit node is already
    /// selected. Iced supplies the hit-tested path and screen position.
    #[must_use]
    pub fn tree_mouse_down(
        &mut self,
        hit_path: Option<&[usize]>,
        button: TreeMouseButton,
        modifiers: TreeMouseModifiers,
        screen_position: ScreenPoint,
    ) -> TreeMouseDownOutcome {
        self.mouse_down_path = hit_path
            .filter(|path| node_at_path(&self.roots, path).is_some())
            .map(<[usize]>::to_vec);
        self.drag_operation = TreeDragOperation::Move;
        self.pending_context_menu_position = None;

        if let Some(path) = self.mouse_down_path.as_deref() {
            let kind = node_at_path(&self.roots, path).map(|node| node.kind);
            if button == TreeMouseButton::Right && path == self.selected_path {
                self.pending_context_menu_position = Some(screen_position);
            } else if button == TreeMouseButton::Left
                && matches!(kind, Some(NodeKind::Group | NodeKind::Picture))
                && modifiers.control
            {
                self.drag_operation = TreeDragOperation::Copy;
            }
        }

        TreeMouseDownOutcome {
            hit_path: self.mouse_down_path.clone(),
            drag_operation: self.drag_operation,
            context_menu_position: self.pending_context_menu_position,
        }
    }

    #[must_use]
    pub fn mouse_down_path(&self) -> Option<&[usize]> {
        self.mouse_down_path.as_deref()
    }

    #[must_use]
    pub const fn drag_operation(&self) -> TreeDragOperation {
        self.drag_operation
    }

    pub const fn take_context_menu_position(&mut self) -> Option<ScreenPoint> {
        self.pending_context_menu_position.take()
    }

    /// Builds hover information for a bitmap-tree picture.
    ///
    /// Ports Ghidra function `0x017A62B0`, symbol `FUN_017a62b0`. Hints from
    /// other controls are unchanged. An empty hit or a non-picture node hides
    /// the hint. A picture hint contains its name, frame dimensions, and
    /// recovered 24-bit color description. Its node bounds expand by one pixel
    /// on the right and bottom. Iced renders the returned tooltip data.
    #[must_use]
    pub fn tree_picture_hint(
        &self,
        is_tree_source: bool,
        hit_path: Option<&[usize]>,
        node_bounds: Option<TreeHintBounds>,
    ) -> TreeHintOutcome {
        if !is_tree_source {
            return TreeHintOutcome::Unchanged;
        }
        let Some(node) = hit_path.and_then(|path| node_at_path(&self.roots, path)) else {
            return TreeHintOutcome::Hidden;
        };
        if node.kind != NodeKind::Picture {
            return TreeHintOutcome::Hidden;
        }
        let Some(frame) = node
            .preview_index
            .and_then(|index| self.preview_frames.get(index))
        else {
            return TreeHintOutcome::Hidden;
        };
        let Some(bounds) = node_bounds else {
            return TreeHintOutcome::Hidden;
        };

        TreeHintOutcome::Picture {
            text: format!(
                "Name : {}\r\nWidth : {},  Height : {}\r\nRGB 24-bit",
                node.name, frame.width, frame.height
            ),
            cursor_bounds: TreeHintBounds {
                right: bounds.right.saturating_add(1),
                bottom: bounds.bottom.saturating_add(1),
                ..bounds
            },
        }
    }

    fn move_selected_node(
        &mut self,
        target_path: &[usize],
        dragged_kind: NodeKind,
    ) -> Result<TreeDropOutcome, TreeDropError> {
        let source_path = self.selected_path.clone();
        if source_path == target_path || path_is_prefix(&source_path, target_path) {
            return Ok(TreeDropOutcome::Ignored);
        }
        let target = node_at_path(&self.roots, target_path).ok_or(TreeDropError::InvalidTarget)?;
        let add_as_child = target_path.len() == 1
            || (target.kind == NodeKind::Group && dragged_kind == NodeKind::Picture);
        let adjusted_target = adjust_path_after_removal(&source_path, target_path)
            .ok_or(TreeDropError::InvalidTarget)?;
        let (moved, _) = remove_node_at_path(&mut self.roots, &source_path)
            .ok_or(TreeDropError::InvalidSource)?;

        let new_path = if add_as_child {
            let target = node_at_path_mut(&mut self.roots, &adjusted_target)
                .ok_or(TreeDropError::InvalidTarget)?;
            let child_index = target.children.len();
            target.children.push(moved);
            let mut path = adjusted_target;
            path.push(child_index);
            path
        } else {
            let (target_index, parent_path) = adjusted_target
                .split_last()
                .ok_or(TreeDropError::InvalidTarget)?;
            let parent = node_at_path_mut(&mut self.roots, parent_path)
                .ok_or(TreeDropError::InvalidTarget)?;
            if *target_index > parent.children.len() {
                return Err(TreeDropError::InvalidTarget);
            }
            parent.children.insert(*target_index, moved);
            adjusted_target
        };
        self.selected_path.clone_from(&new_path);
        self.drag_source_path = Some(new_path.clone());
        if self.selected_picture_path.is_some() {
            self.selected_picture_path = Some(new_path.clone());
        }
        Ok(TreeDropOutcome::Moved { path: new_path })
    }

    fn copy_dragged_node(
        &mut self,
        dragged: &MappingNode,
        target_path: &[usize],
    ) -> Result<TreeDropOutcome, TreeDropError> {
        let mut paths = Vec::new();
        if dragged.kind == NodeKind::Group {
            let group_name = format!("Group #{}", self.next_group_number);
            self.next_group_number = self.next_group_number.wrapping_add(1);
            let target = node_at_path_mut(&mut self.roots, target_path)
                .ok_or(TreeDropError::InvalidTarget)?;
            let group_index = target.children.len();
            target
                .children
                .push(MappingNode::group(group_name, Vec::new()));
            let mut group_path = target_path.to_vec();
            group_path.push(group_index);
            for child in &dragged.children {
                paths.push(self.copy_picture_node(child, &group_path)?);
            }
        } else {
            paths.push(self.copy_picture_node(dragged, target_path)?);
        }
        self.staged_empty = false;
        Ok(TreeDropOutcome::Copied { paths })
    }

    fn copy_picture_node(
        &mut self,
        source: &MappingNode,
        parent_path: &[usize],
    ) -> Result<Vec<usize>, TreeDropError> {
        let source_index = source.preview_index.ok_or(TreeDropError::InvalidSource)?;
        let frame = self
            .preview_frames
            .get(source_index)
            .cloned()
            .ok_or(TreeDropError::MissingPreviewFrame(source_index))?;
        let preview_index = self.preview_frames.len();
        self.preview_frames.push(frame);
        let parent =
            node_at_path_mut(&mut self.roots, parent_path).ok_or(TreeDropError::InvalidTarget)?;
        let child_index = parent.children.len();
        parent.children.push(MappingNode::picture(
            format!("Picture #{preview_index}"),
            preview_index,
        ));
        let mut path = parent_path.to_vec();
        path.push(child_index);
        Ok(path)
    }

    /// Removes every staged mapping and keeps the three fixed roots.
    ///
    /// Ports `FUN_017a5390` at `0x017A5390`. The preview selection is cleared
    /// first. The caller-owned bitmap is not changed by this operation.
    pub fn delete_all(&mut self) {
        self.preview_index = None;
        self.preview_frames.clear();
        for root in &mut self.roots {
            root.children.clear();
        }
        self.staged_empty = true;
    }

    /// Stores the structure validator result for the following close query.
    ///
    /// Ports `FUN_017a5420` at `0x017A5420`.
    pub fn request_accept(&mut self) {
        self.structure_error = self.has_structure_error();
        self.modal_result = Some(ModalResult::Accept);
    }

    /// Applies the one-use structure-error close gate.
    ///
    /// Ports `FUN_017a4860` at `0x017A4860`. A failed close displays the exact
    /// recovered message and clears the error flag for the next close query.
    pub const fn query_close(&mut self) -> CloseQueryOutcome {
        let outcome = if self.structure_error {
            self.close_message = Some(STRUCTURE_ERROR_MESSAGE);
            CloseQueryOutcome::Vetoed
        } else {
            self.close_message = None;
            CloseQueryOutcome::Allowed
        };
        self.structure_error = false;
        outcome
    }

    /// Checks the common structure and matching available variant topology.
    ///
    /// Ports `FUN_017a68f0` at `0x017A68F0` and its recursive helpers. The
    /// result follows the recovered convention: `true` means structure error.
    #[must_use]
    pub fn has_structure_error(&self) -> bool {
        let [first, second, third] = &self.roots;
        if first.kind != NodeKind::Variant || first.children.is_empty() {
            return true;
        }
        if !root_layout_is_uniform(first) {
            return true;
        }

        let expected = flattened_kinds(first);
        [second, third].iter().any(|root| {
            root.kind != NodeKind::Variant
                || (!root.children.is_empty() && flattened_kinds(root) != expected)
        })
    }

    /// Extracts a replacement strip, optional names, layout bytes, and zoom.
    ///
    /// Ports `FUN_017a4470` at `0x017A4470`. Picture nodes are copied in
    /// depth-first tree order across all three roots. Zoom values at or below
    /// one are clamped to one.
    ///
    /// # Errors
    ///
    /// Returns an error for invalid zoom text, a missing preview index or
    /// frame, inconsistent frame dimensions, or a layout count above 255.
    pub fn extract(&self) -> Result<ExtractedMapping, ExtractionError> {
        let layout = self.layout()?;
        let mut frames = Vec::new();
        let mut names = self.names_enabled.then(Vec::new);
        for root in &self.roots {
            collect_pictures(root, &self.preview_frames, &mut frames, &mut names)?;
        }

        let Some(first) = frames.first() else {
            return Err(ExtractionError::MissingPreviewFrame(0));
        };
        if frames
            .iter()
            .any(|frame| frame.width != first.width || frame.height != first.height)
        {
            return Err(ExtractionError::InconsistentFrameSize);
        }

        let zoom = self
            .zoom_text
            .parse::<f32>()
            .map_err(|_| ExtractionError::InvalidZoom)?;
        Ok(ExtractedMapping {
            bitmap: BitmapStrip {
                frame_width: first.width,
                height: first.height,
                frames,
            },
            names,
            layout,
            zoom: if zoom <= 1.0 { 1.0 } else { zoom },
        })
    }

    fn layout(&self) -> Result<BitmapLayout, ExtractionError> {
        let first = &self.roots[0];
        let first_child = first
            .children
            .first()
            .ok_or(ExtractionError::MissingPreviewFrame(0))?;
        let (pictures_per_group, group_count) = if first_child.kind == NodeKind::Group {
            (first_child.children.len(), first.children.len())
        } else {
            (first.children.len(), 1)
        };
        Ok(BitmapLayout {
            pictures_per_group: u8::try_from(pictures_per_group)
                .map_err(|_| ExtractionError::LayoutCountTooLarge)?,
            group_count: u8::try_from(group_count)
                .map_err(|_| ExtractionError::LayoutCountTooLarge)?,
            has_second_variant: !self.roots[1].children.is_empty(),
            has_third_variant: !self.roots[2].children.is_empty(),
        })
    }

    #[must_use]
    pub const fn roots(&self) -> &[MappingNode; FIXED_ROOT_COUNT] {
        &self.roots
    }

    #[must_use]
    pub const fn preview_index(&self) -> Option<usize> {
        self.preview_index
    }

    #[must_use]
    pub fn selected_root_index(&self) -> Option<usize> {
        if self.selected_path.len() == 1 {
            Some(self.selected_path[0])
        } else {
            None
        }
    }

    #[must_use]
    pub const fn constraints(&self) -> WindowConstraints {
        self.constraints
    }

    #[must_use]
    pub const fn help_context(&self) -> u32 {
        self.help_context
    }

    #[must_use]
    pub fn last_bitmap_path(&self) -> &str {
        &self.last_bitmap_path
    }

    #[must_use]
    pub const fn transparency_color(&self) -> Option<u32> {
        self.transparency_color
    }

    #[must_use]
    pub const fn staged_empty(&self) -> bool {
        self.staged_empty
    }

    #[must_use]
    pub const fn structure_error(&self) -> bool {
        self.structure_error
    }

    #[must_use]
    pub const fn close_message(&self) -> Option<&'static str> {
        self.close_message
    }

    #[must_use]
    pub const fn modal_result(&self) -> Option<ModalResult> {
        self.modal_result
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let message = self.close_message.unwrap_or_default();
        container(
            column![
                text(TITLE).size(18),
                text(format!("{} staged pictures", picture_count(&self.roots))),
                text_input("3D Part Name", &self.name_text).on_input_maybe(
                    self.picture_editors_enabled()
                        .then_some(Message::NameChanged),
                ),
                text_input("Picture zoom", &self.zoom_text).on_input_maybe(
                    self.picture_editors_enabled()
                        .then_some(Message::ZoomChanged),
                ),
                text(message),
                row![
                    button("Add").on_press_maybe(self.can_add().then_some(Message::Add)),
                    button("Modify").on_press_maybe(self.can_modify().then_some(Message::Modify)),
                    button("Delete").on_press_maybe(self.can_delete().then_some(Message::Delete)),
                    button("Export").on_press_maybe(self.can_export().then_some(Message::Export)),
                    button("Group").on_press_maybe(self.can_group().then_some(Message::Group)),
                    button("Delete All").on_press(Message::DeleteAll),
                    button("OK").on_press(Message::Accept),
                    button("Cancel").on_press(Message::Cancel),
                ]
                .spacing(8),
            ]
            .spacing(10),
        )
        .padding(12)
        .width(Length::Fill)
        .into()
    }
}

#[derive(Debug, Clone, Default, PartialEq)]
pub struct ComponentBitmapState {
    pub bitmap: Option<BitmapStrip>,
    pub names: Option<Vec<String>>,
    pub layout: BitmapLayout,
    pub zoom: f32,
    pub preview_cache: Vec<BitmapFrame>,
    pub picture_count: usize,
    pub name_count: usize,
}

impl ComponentBitmapState {
    /// Commits accepted dialog output and refreshes the dependent control.
    ///
    /// Ports `FUN_017b7c00` at `0x017B7C00`. Cancel leaves all caller-owned
    /// state unchanged. Accept releases the old bitmap and names before output
    /// extraction, rebuilds the preview cache and counts, and invokes the
    /// supplied refresh operation.
    ///
    /// # Errors
    ///
    /// Returns an extraction error. As in the recovered caller, an extraction
    /// failure after acceptance leaves the old bitmap and names released.
    pub fn commit_dialog(
        &mut self,
        dialog: &Window,
        result: ModalResult,
        refresh: impl FnOnce(),
    ) -> Result<bool, ExtractionError> {
        if result != ModalResult::Accept {
            return Ok(false);
        }

        self.bitmap = None;
        self.names = None;
        let extracted = dialog.extract()?;
        self.preview_cache.clone_from(&extracted.bitmap.frames);
        self.picture_count = extracted.bitmap.frames.len();
        self.name_count = extracted.names.as_ref().map_or(0, Vec::len);
        self.layout = extracted.layout;
        self.zoom = extracted.zoom;
        self.bitmap = Some(extracted.bitmap);
        self.names = extracted.names;
        refresh();
        Ok(true)
    }
}

fn root_layout_is_uniform(root: &MappingNode) -> bool {
    let Some(first) = root.children.first() else {
        return false;
    };
    match first.kind {
        NodeKind::Picture => root
            .children
            .iter()
            .all(|node| node.kind == NodeKind::Picture && node.children.is_empty()),
        NodeKind::Group => {
            let expected_count = first.children.len();
            expected_count > 0
                && root.children.iter().all(|group| {
                    group.kind == NodeKind::Group
                        && group.children.len() == expected_count
                        && group.children.iter().all(|picture| {
                            picture.kind == NodeKind::Picture && picture.children.is_empty()
                        })
                })
        }
        NodeKind::Variant => false,
    }
}

fn node_at_path_mut<'a>(
    roots: &'a mut [MappingNode; FIXED_ROOT_COUNT],
    path: &[usize],
) -> Option<&'a mut MappingNode> {
    let (root_index, child_indexes) = path.split_first()?;
    let mut node = roots.get_mut(*root_index)?;
    for child_index in child_indexes {
        node = node.children.get_mut(*child_index)?;
    }
    Some(node)
}

fn node_at_path<'a>(
    roots: &'a [MappingNode; FIXED_ROOT_COUNT],
    path: &[usize],
) -> Option<&'a MappingNode> {
    let (root_index, child_indexes) = path.split_first()?;
    let mut node = roots.get(*root_index)?;
    for child_index in child_indexes {
        node = node.children.get(*child_index)?;
    }
    Some(node)
}

fn remove_node_at_path(
    roots: &mut [MappingNode; FIXED_ROOT_COUNT],
    path: &[usize],
) -> Option<(MappingNode, Vec<usize>)> {
    let (child_index, parent_path) = path.split_last()?;
    if parent_path.is_empty() {
        return None;
    }
    let parent = node_at_path_mut(roots, parent_path)?;
    if *child_index >= parent.children.len() {
        return None;
    }
    Some((parent.children.remove(*child_index), parent_path.to_vec()))
}

fn path_is_prefix(prefix: &[usize], path: &[usize]) -> bool {
    prefix.len() < path.len() && path.starts_with(prefix)
}

fn adjust_path_after_removal(source: &[usize], target: &[usize]) -> Option<Vec<usize>> {
    let source_depth = source.len().checked_sub(1)?;
    if target.len() <= source_depth || source[..source_depth] != target[..source_depth] {
        return Some(target.to_vec());
    }
    if target.starts_with(source) {
        return None;
    }
    let mut adjusted = target.to_vec();
    if adjusted[source_depth] > source[source_depth] {
        adjusted[source_depth] -= 1;
    }
    Some(adjusted)
}

fn preview_for_node<'a>(
    node: &MappingNode,
    previews: &'a [BitmapFrame],
) -> Result<&'a BitmapFrame, ExportBitmapError> {
    let index = node
        .preview_index
        .ok_or(ExportBitmapError::InvalidSelection)?;
    previews
        .get(index)
        .ok_or(ExportBitmapError::MissingPreviewFrame(index))
}

fn export_child_strip(
    selected: &MappingNode,
    previews: &[BitmapFrame],
) -> Result<BitmapFrame, ExportBitmapError> {
    if selected.children.is_empty()
        || selected
            .children
            .iter()
            .any(|child| child.kind != NodeKind::Picture)
    {
        return Err(ExportBitmapError::InvalidSelection);
    }
    let frames = selected
        .children
        .iter()
        .map(|child| preview_for_node(child, previews))
        .collect::<Result<Vec<_>, _>>()?;
    let first = frames[0];
    let row_bytes = usize::try_from(first.width)
        .ok()
        .and_then(|width| width.checked_mul(BYTES_PER_PIXEL))
        .ok_or(ExportBitmapError::SizeOverflow)?;
    let expected_bytes = row_bytes
        .checked_mul(usize::try_from(first.height).map_err(|_| ExportBitmapError::SizeOverflow)?)
        .ok_or(ExportBitmapError::SizeOverflow)?;
    if frames
        .iter()
        .any(|frame| frame.width != first.width || frame.height != first.height)
    {
        return Err(ExportBitmapError::InconsistentFrameSize);
    }
    if frames
        .iter()
        .any(|frame| frame.pixels.len() != expected_bytes)
    {
        return Err(ExportBitmapError::InvalidFrameData);
    }

    let width = first
        .width
        .checked_mul(u32::try_from(frames.len()).map_err(|_| ExportBitmapError::SizeOverflow)?)
        .ok_or(ExportBitmapError::SizeOverflow)?;
    let capacity = expected_bytes
        .checked_mul(frames.len())
        .ok_or(ExportBitmapError::SizeOverflow)?;
    let mut pixels = Vec::with_capacity(capacity);
    for row_index in 0..first.height as usize {
        let start = row_index * row_bytes;
        let end = start + row_bytes;
        for frame in &frames {
            pixels.extend_from_slice(&frame.pixels[start..end]);
        }
    }
    Ok(BitmapFrame {
        width,
        height: first.height,
        pixels,
    })
}

fn flattened_kinds(root: &MappingNode) -> Vec<NodeKind> {
    let mut kinds = Vec::new();
    append_kinds(root, &mut kinds);
    kinds
}

fn append_kinds(node: &MappingNode, kinds: &mut Vec<NodeKind>) {
    kinds.push(node.kind);
    for child in &node.children {
        append_kinds(child, kinds);
    }
}

fn collect_pictures(
    node: &MappingNode,
    preview_frames: &[BitmapFrame],
    frames: &mut Vec<BitmapFrame>,
    names: &mut Option<Vec<String>>,
) -> Result<(), ExtractionError> {
    if node.kind == NodeKind::Picture {
        let index = node
            .preview_index
            .ok_or_else(|| ExtractionError::MissingPictureIndex(node.name.clone()))?;
        let frame = preview_frames
            .get(index)
            .ok_or(ExtractionError::MissingPreviewFrame(index))?;
        frames.push(frame.clone());
        if let Some(names) = names {
            names.push(node.name.clone());
        }
    }
    for child in &node.children {
        collect_pictures(child, preview_frames, frames, names)?;
    }
    Ok(())
}

fn picture_count(roots: &[MappingNode; FIXED_ROOT_COUNT]) -> usize {
    roots.iter().map(count_pictures).sum()
}

fn total_node_count(roots: &[MappingNode; FIXED_ROOT_COUNT]) -> usize {
    roots.iter().map(count_nodes).sum()
}

fn count_nodes(node: &MappingNode) -> usize {
    1 + node.children.iter().map(count_nodes).sum::<usize>()
}

fn count_pictures(node: &MappingNode) -> usize {
    usize::from(node.kind == NodeKind::Picture)
        + node.children.iter().map(count_pictures).sum::<usize>()
}

#[cfg(test)]
mod tests {
    use std::cell::Cell;

    use super::*;

    struct AddPort {
        chosen_path: Option<String>,
        loaded: Result<LoadedBitmap, String>,
        initial_paths: Vec<String>,
    }

    impl AddPicturePort for AddPort {
        fn choose_bitmap_path(&mut self, initial_path: &str) -> Option<String> {
            self.initial_paths.push(initial_path.to_owned());
            self.chosen_path.clone()
        }

        fn load_bitmap(&mut self, _path: &str) -> Result<LoadedBitmap, String> {
            self.loaded.clone()
        }
    }

    struct ExportPort {
        chosen_path: Result<Option<PathBuf>, String>,
        requests: Vec<ExportDialogRequest>,
        saves: Vec<(PathBuf, BitmapFrame)>,
    }

    impl ExportBitmapPort for ExportPort {
        fn choose_export_path(
            &mut self,
            request: &ExportDialogRequest,
        ) -> Result<Option<PathBuf>, String> {
            self.requests.push(request.clone());
            self.chosen_path.clone()
        }

        fn save_bitmap(&mut self, path: &Path, bitmap: &BitmapFrame) -> Result<(), String> {
            self.saves.push((path.to_path_buf(), bitmap.clone()));
            Ok(())
        }
    }

    #[derive(Default)]
    struct Viewport {
        directions: Vec<DragScrollDirection>,
    }

    impl TreeViewportPort for Viewport {
        fn scroll_one_visible_node(&mut self, direction: DragScrollDirection) {
            self.directions.push(direction);
        }
    }

    fn frame(value: u8) -> BitmapFrame {
        BitmapFrame {
            width: 2,
            height: 1,
            pixels: vec![value; 8],
        }
    }

    fn picture(name: &str, index: usize) -> MappingNode {
        MappingNode::picture(name, index)
    }

    fn valid_roots() -> [MappingNode; FIXED_ROOT_COUNT] {
        [
            MappingNode::variant(
                "Normal",
                vec![
                    MappingNode::group("Group 1", vec![picture("A", 0), picture("B", 1)]),
                    MappingNode::group("Group 2", vec![picture("C", 2), picture("D", 3)]),
                ],
            ),
            MappingNode::variant(
                "Selected",
                vec![
                    MappingNode::group("Group 1", vec![picture("E", 4), picture("F", 5)]),
                    MappingNode::group("Group 2", vec![picture("G", 6), picture("H", 7)]),
                ],
            ),
            MappingNode::variant("Disabled", Vec::new()),
        ]
    }

    fn window() -> Window {
        Window::new(valid_roots(), (0_u8..8).map(frame).collect(), true, 0.75)
    }

    #[test]
    fn validator_accepts_matching_available_variants() {
        assert!(!window().has_structure_error());
    }

    #[test]
    fn fun_017a47f0_fixes_maximum_size_selects_first_root_and_sets_help_context() {
        let mut dialog = window();

        drop(dialog.update(Message::Created {
            width: 381,
            height: 410,
        }));

        assert_eq!(
            dialog.constraints(),
            WindowConstraints {
                max_width: Some(381),
                max_height: Some(410),
            }
        );
        assert_eq!(dialog.selected_root_index(), Some(0));
        assert_eq!(dialog.help_context(), HELP_CONTEXT);
    }

    #[test]
    fn fun_017a48e0_adds_rgb24_bitmap_below_selection_and_initializes_empty_preview() {
        let mut dialog = window();
        dialog.on_create(381, 410);
        dialog.delete_all();
        let bitmap = frame(42);
        let mut port = AddPort {
            chosen_path: Some("C:/bitmaps/switch.bmp".to_owned()),
            loaded: Ok(LoadedBitmap {
                frame: bitmap.clone(),
                pixel_format: BitmapPixelFormat::Rgb24,
                top_left_color: 0x00_11_22_33,
            }),
            initial_paths: Vec::new(),
        };

        let outcome = dialog
            .add_picture(&mut port)
            .expect("24-bit bitmap should be added");

        assert_eq!(outcome, AddPictureOutcome::Added { preview_index: 0 });
        assert_eq!(port.initial_paths, vec![String::new()]);
        assert_eq!(dialog.last_bitmap_path(), "C:/bitmaps/switch.bmp");
        assert_eq!(dialog.transparency_color(), Some(0x00_11_22_33));
        assert_eq!(dialog.preview_frames, vec![bitmap]);
        assert_eq!(dialog.roots()[0].children[0], picture("Picture #0", 0));
        assert!(!dialog.staged_empty());

        drop(dialog.update(Message::Add));
        assert!(dialog.take_add_request());
        assert!(!dialog.take_add_request());
    }

    #[test]
    fn fun_017a48e0_cancel_is_no_op_and_non_rgb24_is_rejected() {
        let mut dialog = window();
        dialog.on_create(381, 410);
        let before = dialog.clone();
        let mut cancelled = AddPort {
            chosen_path: None,
            loaded: Err("must not load".to_owned()),
            initial_paths: Vec::new(),
        };

        assert_eq!(
            dialog.add_picture(&mut cancelled),
            Ok(AddPictureOutcome::Cancelled)
        );
        assert_eq!(dialog.roots, before.roots);
        assert_eq!(dialog.preview_frames, before.preview_frames);

        let mut unsupported = AddPort {
            chosen_path: Some("C:/bitmaps/indexed.bmp".to_owned()),
            loaded: Ok(LoadedBitmap {
                frame: frame(7),
                pixel_format: BitmapPixelFormat::Other(3),
                top_left_color: 0,
            }),
            initial_paths: Vec::new(),
        };
        assert_eq!(
            dialog.add_picture(&mut unsupported),
            Err(AddPictureError::UnsupportedPixelFormat(
                BitmapPixelFormat::Other(3)
            ))
        );
        assert_eq!(dialog.last_bitmap_path(), "C:/bitmaps/indexed.bmp");
        assert_eq!(dialog.preview_frames, before.preview_frames);
    }

    #[test]
    fn fun_017a4b70_replaces_selected_preview_and_rebuilds_node_at_parent_end() {
        let mut dialog = window();
        dialog.on_create(381, 410);
        dialog
            .select_path(&[0, 0, 0])
            .expect("first picture should exist");
        let replacement = frame(88);
        let mut port = AddPort {
            chosen_path: Some("C:/bitmaps/replacement.bmp".to_owned()),
            loaded: Ok(LoadedBitmap {
                frame: replacement.clone(),
                pixel_format: BitmapPixelFormat::Rgb24,
                top_left_color: 0x00_aa_bb_cc,
            }),
            initial_paths: Vec::new(),
        };

        let outcome = dialog
            .modify_selected_picture(&mut port)
            .expect("RGB24 replacement should succeed");

        assert_eq!(outcome, ModifyPictureOutcome::Replaced { preview_index: 0 });
        assert_eq!(dialog.preview_frames[0], replacement);
        assert_eq!(dialog.roots[0].children[0].children[0], picture("B", 1));
        assert_eq!(
            dialog.roots[0].children[0].children[1],
            picture("Picture #0", 0)
        );
        assert_eq!(dialog.selected_path, vec![0, 0]);
        assert_eq!(dialog.transparency_color(), None);

        drop(dialog.update(Message::Modify));
        assert!(dialog.take_modify_request());
        assert!(!dialog.take_modify_request());
    }

    #[test]
    fn fun_017a4b70_rejected_replacement_keeps_frame_but_leaves_node_removed() {
        let mut dialog = window();
        dialog.on_create(381, 410);
        dialog
            .select_path(&[0, 0, 0])
            .expect("first picture should exist");
        let old_frame = dialog.preview_frames[0].clone();
        let mut port = AddPort {
            chosen_path: Some("C:/bitmaps/indexed.bmp".to_owned()),
            loaded: Ok(LoadedBitmap {
                frame: frame(9),
                pixel_format: BitmapPixelFormat::Other(3),
                top_left_color: 0,
            }),
            initial_paths: Vec::new(),
        };

        assert_eq!(
            dialog.modify_selected_picture(&mut port),
            Err(AddPictureError::UnsupportedPixelFormat(
                BitmapPixelFormat::Other(3)
            ))
        );
        assert_eq!(dialog.preview_frames[0], old_frame);
        assert_eq!(dialog.roots[0].children[0].children.len(), 1);
        assert_eq!(dialog.roots[0].children[0].children[0], picture("B", 1));
        assert_eq!(dialog.last_bitmap_path(), "C:/bitmaps/indexed.bmp");
    }

    #[test]
    fn fun_017a4f60_deletes_selected_node_and_marks_three_roots_empty() {
        let mut dialog = window();
        dialog.on_create(381, 410);
        dialog.delete_all();
        let retained_frame = frame(12);
        let mut port = AddPort {
            chosen_path: Some("C:/bitmaps/only.bmp".to_owned()),
            loaded: Ok(LoadedBitmap {
                frame: retained_frame.clone(),
                pixel_format: BitmapPixelFormat::Rgb24,
                top_left_color: 0x00_10_20_30,
            }),
            initial_paths: Vec::new(),
        };
        dialog
            .add_picture(&mut port)
            .expect("single picture should be added");
        dialog
            .select_path(&[0, 0])
            .expect("added picture should exist");

        dialog
            .delete_selected()
            .expect("selected picture should be deleted");

        assert!(dialog.roots.iter().all(|root| root.children.is_empty()));
        assert_eq!(dialog.preview_frames, vec![retained_frame]);
        assert!(dialog.staged_empty());
        assert_eq!(dialog.selected_path, vec![0]);

        drop(dialog.update(Message::Delete));
        assert!(dialog.take_delete_request());
        assert!(!dialog.take_delete_request());
    }

    #[test]
    fn fun_017a4fb0_exports_picture_and_uses_scoped_bitmap_dialog_settings() {
        let mut dialog = window();
        dialog.on_create(381, 410);
        dialog
            .select_path(&[0, 0, 1])
            .expect("second picture should exist");
        let path = PathBuf::from("C:/exports/picture.bmp");
        let mut port = ExportPort {
            chosen_path: Ok(Some(path.clone())),
            requests: Vec::new(),
            saves: Vec::new(),
        };

        let outcome = dialog
            .export_selected(&mut port)
            .expect("picture export should succeed");

        assert_eq!(
            outcome,
            ExportBitmapOutcome::Saved {
                path: path.clone(),
                bitmap: frame(1),
            }
        );
        assert_eq!(
            port.requests,
            vec![ExportDialogRequest {
                initial_path: String::new(),
                filter: BITMAP_EXPORT_FILTER,
                default_extension: BITMAP_DEFAULT_EXTENSION,
            }]
        );
        assert_eq!(port.saves, vec![(path, frame(1))]);

        drop(dialog.update(Message::Export));
        assert!(dialog.take_export_request());
        assert!(!dialog.take_export_request());
    }

    #[test]
    fn fun_017a4fb0_exports_immediate_picture_children_as_horizontal_strip() {
        let mut dialog = window();
        dialog.on_create(381, 410);
        dialog
            .select_path(&[0, 0])
            .expect("first group should exist");
        let path = PathBuf::from("C:/exports/group.bmp");
        let mut port = ExportPort {
            chosen_path: Ok(Some(path.clone())),
            requests: Vec::new(),
            saves: Vec::new(),
        };

        let outcome = dialog
            .export_selected(&mut port)
            .expect("group export should succeed");

        let expected = BitmapFrame {
            width: 4,
            height: 1,
            pixels: [vec![0; 8], vec![1; 8]].concat(),
        };
        assert_eq!(
            outcome,
            ExportBitmapOutcome::Saved {
                path: path.clone(),
                bitmap: expected.clone(),
            }
        );
        assert_eq!(port.saves, vec![(path, expected)]);
    }

    #[test]
    fn fun_017a4fb0_cancel_does_not_build_or_save_an_export() {
        let dialog = window();
        let mut port = ExportPort {
            chosen_path: Ok(None),
            requests: Vec::new(),
            saves: Vec::new(),
        };

        assert_eq!(
            dialog.export_selected(&mut port),
            Ok(ExportBitmapOutcome::Cancelled)
        );
        assert!(port.saves.is_empty());
    }

    #[test]
    fn fun_017a5360_adds_numbered_groups_below_the_selected_node() {
        let mut dialog = window();
        dialog.on_create(381, 410);
        let old_child_count = dialog.roots[0].children.len();

        assert_eq!(dialog.add_group(), Ok("Group #0".to_owned()));
        assert_eq!(dialog.add_group(), Ok("Group #1".to_owned()));

        assert_eq!(dialog.next_group_number(), 2);
        assert_eq!(
            dialog.roots[0].children[old_child_count],
            MappingNode::group("Group #0", Vec::new())
        );
        assert_eq!(
            dialog.roots[0].children[old_child_count + 1],
            MappingNode::group("Group #1", Vec::new())
        );
        assert_eq!(dialog.selected_path, vec![0]);

        drop(dialog.update(Message::Group));
        assert!(dialog.take_group_request());
        assert!(!dialog.take_group_request());
    }

    #[test]
    fn fun_017a5440_enables_add_for_roots_and_groups_only() {
        let mut dialog = window();
        dialog.on_create(381, 410);
        assert!(dialog.can_add());

        dialog
            .select_path(&[0, 0])
            .expect("first group should exist");
        assert!(dialog.can_add());

        dialog
            .select_path(&[0, 0, 0])
            .expect("first picture should exist");
        assert!(!dialog.can_add());

        dialog.selected_path.clear();
        assert!(!dialog.can_add());
    }

    #[test]
    fn fun_017a54b0_enables_delete_for_non_root_nodes_only() {
        let mut dialog = window();
        dialog.on_create(381, 410);
        assert!(!dialog.can_delete());

        dialog
            .select_path(&[0, 0])
            .expect("first group should exist");
        assert!(dialog.can_delete());

        dialog
            .select_path(&[0, 0, 0])
            .expect("first picture should exist");
        assert!(dialog.can_delete());

        dialog.selected_path.clear();
        assert!(!dialog.can_delete());
    }

    #[test]
    fn fun_017a5510_enables_modify_for_picture_selection_only() {
        let mut dialog = window();
        dialog.on_create(381, 410);
        assert!(!dialog.can_modify());

        dialog
            .select_path(&[0, 0])
            .expect("first group should exist");
        assert!(!dialog.can_modify());

        dialog
            .select_path(&[0, 0, 0])
            .expect("first picture should exist");
        assert!(dialog.can_modify());

        dialog.selected_path.clear();
        assert!(!dialog.can_modify());
    }

    #[test]
    fn fun_017a5560_enables_export_for_picture_or_first_picture_child() {
        let mut dialog = window();
        dialog.on_create(381, 410);
        assert!(!dialog.can_export());

        dialog
            .select_path(&[0, 0])
            .expect("first group should exist");
        assert!(dialog.can_export());

        dialog
            .select_path(&[0, 0, 0])
            .expect("first picture should exist");
        assert!(dialog.can_export());

        dialog.select_path(&[0]).expect("first root should exist");
        dialog.add_group().expect("empty group should be added");
        dialog
            .select_path(&[0, 2])
            .expect("empty group should exist");
        assert!(!dialog.can_export());

        dialog.selected_path.clear();
        assert!(!dialog.can_export());
    }

    #[test]
    fn fun_017a55e0_enables_group_for_root_selection_only() {
        let mut dialog = window();
        dialog.on_create(381, 410);
        assert!(dialog.can_group());

        dialog
            .select_path(&[0, 0])
            .expect("first group should exist");
        assert!(!dialog.can_group());

        dialog
            .select_path(&[0, 0, 0])
            .expect("first picture should exist");
        assert!(!dialog.can_group());

        dialog.selected_path.clear();
        assert!(!dialog.can_group());
    }

    #[test]
    fn fun_017a5640_picture_selection_sets_name_and_editor_availability() {
        let mut dialog = window();
        dialog.on_create(381, 410);
        assert!(!dialog.picture_editors_enabled());
        assert_eq!(dialog.selected_picture_path(), None);

        dialog
            .tree_selection_changed(&[0, 0, 0])
            .expect("first picture should exist");

        assert!(dialog.picture_editors_enabled());
        assert_eq!(dialog.selected_picture_path(), Some([0, 0, 0].as_slice()));
        assert_eq!(dialog.name_text(), "A");
        drop(dialog.update(Message::NameChanged("Renamed".to_owned())));
        assert_eq!(dialog.name_text(), "Renamed");

        dialog
            .tree_selection_changed(&[0, 0])
            .expect("first group should exist");

        assert!(!dialog.picture_editors_enabled());
        assert_eq!(dialog.selected_picture_path(), None);
        assert_eq!(dialog.name_text(), "Renamed");
        drop(dialog.update(Message::NameChanged("Ignored".to_owned())));
        assert_eq!(dialog.name_text(), "Renamed");
    }

    #[test]
    fn fun_017a56b0_commits_name_fallback_and_target_selected_preview() {
        let mut dialog = window();
        dialog.on_create(381, 410);
        dialog
            .tree_selection_changed(&[0, 0, 0])
            .expect("first picture should exist");
        drop(dialog.update(Message::NameChanged(String::new())));

        dialog
            .tree_selection_changing(&[0, 0, 1])
            .expect("second picture should exist");

        assert_eq!(dialog.name_text(), "Picture #0");
        assert_eq!(dialog.roots[0].children[0].children[0].name, "Picture #0");
        assert_eq!(dialog.selected_picture_path(), Some([0, 0, 0].as_slice()));
        assert_eq!(dialog.pending_selection_preview_index(), Some(1));

        dialog
            .tree_selection_changing(&[0, 0])
            .expect("group should exist");
        assert_eq!(dialog.pending_selection_preview_index(), None);
    }

    #[test]
    fn fun_017a5810_moves_picture_as_child_of_target_group() {
        let mut dialog = window();
        dialog.on_create(381, 410);
        dialog
            .select_path(&[0, 0, 0])
            .expect("first picture should exist");
        dialog
            .begin_tree_drag(&[0, 0, 0])
            .expect("first picture should be draggable");

        let outcome = dialog
            .tree_drag_drop(&[0, 1], TreeDropHit::OnItem, TreeDragOperation::Move)
            .expect("picture move should succeed");

        assert_eq!(
            outcome,
            TreeDropOutcome::Moved {
                path: vec![0, 1, 2]
            }
        );
        assert_eq!(dialog.roots[0].children[0].children, vec![picture("B", 1)]);
        assert_eq!(
            dialog.roots[0].children[1].children,
            vec![picture("C", 2), picture("D", 3), picture("A", 0)]
        );
        assert_eq!(dialog.selected_path, vec![0, 1, 2]);
        assert_eq!(dialog.preview_frames.len(), 8);
    }

    #[test]
    fn fun_017a5810_copies_group_children_with_new_preview_indexes() {
        let mut dialog = window();
        dialog.on_create(381, 410);
        dialog
            .select_path(&[0, 0])
            .expect("first group should exist");
        dialog
            .begin_tree_drag(&[0, 0])
            .expect("first group should be draggable");

        let outcome = dialog
            .tree_drag_drop(&[1], TreeDropHit::OnItem, TreeDragOperation::Copy)
            .expect("group copy should succeed");

        assert_eq!(
            outcome,
            TreeDropOutcome::Copied {
                paths: vec![vec![1, 2, 0], vec![1, 2, 1]]
            }
        );
        let copied_group = &dialog.roots[1].children[2];
        assert_eq!(copied_group.name, "Group #0");
        assert_eq!(
            copied_group.children,
            vec![picture("Picture #8", 8), picture("Picture #9", 9)]
        );
        assert_eq!(dialog.preview_frames[8], frame(0));
        assert_eq!(dialog.preview_frames[9], frame(1));
        assert_eq!(dialog.next_group_number(), 1);
    }

    #[test]
    fn fun_017a5810_ignores_drop_outside_item_and_group_on_picture() {
        let mut dialog = window();
        dialog.on_create(381, 410);
        dialog
            .select_path(&[0, 0])
            .expect("first group should exist");
        dialog
            .begin_tree_drag(&[0, 0])
            .expect("first group should be draggable");
        let before = dialog.clone();

        assert_eq!(
            dialog.tree_drag_drop(&[1], TreeDropHit::OutsideItem, TreeDragOperation::Move),
            Ok(TreeDropOutcome::Ignored)
        );
        assert_eq!(dialog.roots, before.roots);
        assert_eq!(
            dialog.tree_drag_drop(&[1, 0, 0], TreeDropHit::OnItem, TreeDragOperation::Copy),
            Ok(TreeDropOutcome::Ignored)
        );
        assert_eq!(dialog.roots, before.roots);
    }

    #[test]
    fn fun_017a59d0_accepts_drag_and_controls_edge_scroll_timer() {
        let mut dialog = window();
        let mut viewport = Viewport::default();

        assert_eq!(
            dialog.tree_drag_over(0, 10, 240, 404, &mut viewport),
            DragOverOutcome {
                accepted: true,
                scrolled: None,
            }
        );
        assert_eq!(dialog.drag_scroll_state(), DragScrollState::Idle);

        assert_eq!(
            dialog.tree_drag_over(20, 10, 240, 404, &mut viewport),
            DragOverOutcome {
                accepted: true,
                scrolled: Some(DragScrollDirection::Up),
            }
        );
        assert_eq!(
            dialog.drag_scroll_state(),
            DragScrollState::Active(DragScrollDirection::Up)
        );
        assert_eq!(viewport.directions, vec![DragScrollDirection::Up]);

        assert_eq!(
            dialog.tree_drag_over(20, 390, 240, 404, &mut viewport),
            DragOverOutcome {
                accepted: true,
                scrolled: None,
            }
        );
        assert_eq!(viewport.directions, vec![DragScrollDirection::Up]);

        assert_eq!(
            dialog.tree_drag_over(20, 200, 240, 404, &mut viewport),
            DragOverOutcome {
                accepted: true,
                scrolled: None,
            }
        );
        assert_eq!(dialog.drag_scroll_state(), DragScrollState::Idle);

        assert_eq!(
            dialog.tree_drag_over(20, 390, 240, 404, &mut viewport),
            DragOverOutcome {
                accepted: true,
                scrolled: Some(DragScrollDirection::Down),
            }
        );
        assert_eq!(
            viewport.directions,
            vec![DragScrollDirection::Up, DragScrollDirection::Down]
        );
    }

    #[test]
    fn fun_017a59d0_preserves_recovered_x_against_height_bound() {
        let mut dialog = window();
        let mut viewport = Viewport::default();

        let outcome = dialog.tree_drag_over(120, 10, 200, 100, &mut viewport);

        assert_eq!(
            outcome,
            DragOverOutcome {
                accepted: true,
                scrolled: None,
            }
        );
        assert!(viewport.directions.is_empty());
    }

    #[test]
    fn fun_017a5aa0_stops_drag_scroll_without_clearing_drag_source() {
        let mut dialog = window();
        dialog.on_create(381, 410);
        dialog
            .begin_tree_drag(&[0, 0, 0])
            .expect("first picture should be draggable");
        let mut viewport = Viewport::default();
        dialog.tree_drag_over(20, 10, 240, 404, &mut viewport);
        assert_eq!(
            dialog.drag_scroll_state(),
            DragScrollState::Active(DragScrollDirection::Up)
        );

        drop(dialog.update(Message::TreeDragEnded));

        assert_eq!(dialog.drag_scroll_state(), DragScrollState::Idle);
        assert_eq!(dialog.drag_source_path(), Some([0, 0, 0].as_slice()));
    }

    #[test]
    fn fun_017a6450_repeats_active_direction_and_ignores_idle_ticks() {
        let mut dialog = window();
        let mut viewport = Viewport::default();

        assert_eq!(dialog.tree_scroll_timer_tick(&mut viewport), None);
        assert!(viewport.directions.is_empty());

        dialog.drag_scroll_state = DragScrollState::Active(DragScrollDirection::Up);
        assert_eq!(
            dialog.tree_scroll_timer_tick(&mut viewport),
            Some(DragScrollDirection::Up)
        );
        assert_eq!(viewport.directions, vec![DragScrollDirection::Up]);
        assert_eq!(
            dialog.drag_scroll_state(),
            DragScrollState::Active(DragScrollDirection::Up)
        );

        dialog.drag_scroll_state = DragScrollState::Active(DragScrollDirection::Down);
        assert_eq!(
            dialog.tree_scroll_timer_tick(&mut viewport),
            Some(DragScrollDirection::Down)
        );
        assert_eq!(
            viewport.directions,
            vec![DragScrollDirection::Up, DragScrollDirection::Down]
        );
    }

    #[test]
    fn fun_017a60c0_rewrites_control_letter_shortcuts() {
        let control = TreeKeyModifiers {
            shift: false,
            control: true,
        };

        assert_eq!(
            Window::tree_key_down(TreeKey::C, control, false),
            TreeKeyDownOutcome {
                key: TreeKey::Insert,
                modifiers: control,
                actions: vec![TreeKeyAction::Copy],
            }
        );
        assert_eq!(
            Window::tree_key_down(TreeKey::V, control, false),
            TreeKeyDownOutcome {
                key: TreeKey::Insert,
                modifiers: TreeKeyModifiers {
                    shift: true,
                    control: false,
                },
                actions: vec![TreeKeyAction::Paste],
            }
        );
        assert_eq!(
            Window::tree_key_down(TreeKey::X, control, false),
            TreeKeyDownOutcome {
                key: TreeKey::Delete,
                modifiers: TreeKeyModifiers {
                    shift: true,
                    control: false,
                },
                actions: vec![TreeKeyAction::Cut],
            }
        );
    }

    #[test]
    fn fun_017a60c0_preserves_combined_insert_order_and_escape_drag_gate() {
        assert_eq!(
            Window::tree_key_down(
                TreeKey::Insert,
                TreeKeyModifiers {
                    shift: true,
                    control: true,
                },
                false,
            )
            .actions,
            vec![TreeKeyAction::Copy, TreeKeyAction::Paste]
        );
        assert!(
            Window::tree_key_down(TreeKey::Escape, TreeKeyModifiers::default(), false)
                .actions
                .is_empty()
        );
        assert_eq!(
            Window::tree_key_down(TreeKey::Escape, TreeKeyModifiers::default(), true).actions,
            vec![TreeKeyAction::CancelDrag]
        );

        let mut dialog = window();
        drop(dialog.update(Message::TreeKeyDown {
            key: TreeKey::C,
            modifiers: TreeKeyModifiers {
                shift: false,
                control: true,
            },
            tree_owns_drag: false,
        }));
        assert_eq!(dialog.take_key_actions(), vec![TreeKeyAction::Copy]);
        assert!(dialog.take_key_actions().is_empty());
    }

    #[test]
    fn fun_017a61c0_stores_copy_drag_only_for_left_group_or_picture_press() {
        let mut dialog = window();
        let control = TreeMouseModifiers { control: true };
        let position = ScreenPoint { x: 120, y: 80 };

        let picture =
            dialog.tree_mouse_down(Some(&[0, 0, 0]), TreeMouseButton::Left, control, position);
        assert_eq!(picture.hit_path, Some(vec![0, 0, 0]));
        assert_eq!(picture.drag_operation, TreeDragOperation::Copy);
        assert_eq!(dialog.mouse_down_path(), Some([0, 0, 0].as_slice()));

        let root = dialog.tree_mouse_down(Some(&[0]), TreeMouseButton::Left, control, position);
        assert_eq!(root.drag_operation, TreeDragOperation::Move);

        let outside = dialog.tree_mouse_down(None, TreeMouseButton::Left, control, position);
        assert_eq!(outside.hit_path, None);
        assert_eq!(outside.drag_operation, TreeDragOperation::Move);
    }

    #[test]
    fn fun_017a61c0_requests_context_menu_only_for_selected_right_click() {
        let mut dialog = window();
        dialog
            .select_path(&[0, 0, 0])
            .expect("first picture should be selectable");
        let position = ScreenPoint { x: 512, y: 240 };

        let selected = dialog.tree_mouse_down(
            Some(&[0, 0, 0]),
            TreeMouseButton::Right,
            TreeMouseModifiers::default(),
            position,
        );
        assert_eq!(selected.context_menu_position, Some(position));
        assert_eq!(dialog.take_context_menu_position(), Some(position));
        assert_eq!(dialog.take_context_menu_position(), None);

        let other = dialog.tree_mouse_down(
            Some(&[0, 0, 1]),
            TreeMouseButton::Right,
            TreeMouseModifiers::default(),
            ScreenPoint { x: 640, y: 360 },
        );
        assert_eq!(other.context_menu_position, None);
        assert_eq!(other.drag_operation, TreeDragOperation::Move);

        drop(dialog.update(Message::TreeMouseDown {
            hit_path: Some(vec![0, 0, 0]),
            button: TreeMouseButton::Right,
            modifiers: TreeMouseModifiers::default(),
            screen_position: position,
        }));
        assert_eq!(dialog.take_context_menu_position(), Some(position));
    }

    #[test]
    fn fun_017a62b0_builds_picture_hint_and_expands_node_bounds() {
        let dialog = window();
        let bounds = TreeHintBounds {
            left: 8,
            top: 16,
            right: 120,
            bottom: 36,
        };

        assert_eq!(
            dialog.tree_picture_hint(true, Some(&[0, 0, 0]), Some(bounds)),
            TreeHintOutcome::Picture {
                text: "Name : A\r\nWidth : 2,  Height : 1\r\nRGB 24-bit".to_owned(),
                cursor_bounds: TreeHintBounds {
                    right: 121,
                    bottom: 37,
                    ..bounds
                },
            }
        );
    }

    #[test]
    fn fun_017a62b0_leaves_other_sources_and_hides_nonpictures() {
        let dialog = window();

        assert_eq!(
            dialog.tree_picture_hint(false, Some(&[0, 0, 0]), None),
            TreeHintOutcome::Unchanged
        );
        assert_eq!(
            dialog.tree_picture_hint(true, Some(&[0, 0]), None),
            TreeHintOutcome::Hidden
        );
        assert_eq!(
            dialog.tree_picture_hint(true, None, None),
            TreeHintOutcome::Hidden
        );
    }

    #[test]
    fn fun_017a6470_updates_selected_picture_name_immediately() {
        let mut dialog = window();
        dialog
            .select_path(&[0, 0, 0])
            .expect("first picture should be selectable");

        drop(dialog.update(Message::NameChanged("New picture name".to_owned())));

        assert_eq!(dialog.name_text(), "New picture name");
        assert_eq!(
            node_at_path(&dialog.roots, &[0, 0, 0]).map(|node| node.name.as_str()),
            Some("New picture name")
        );

        dialog
            .select_path(&[0])
            .expect("variant root should be selectable");
        dialog
            .tree_name_changed("Ignored".to_owned())
            .expect("a disabled editor should be a no-op");
        assert_eq!(dialog.name_text(), "New picture name");
    }

    #[test]
    fn validator_rejects_mixed_primary_layout_and_mismatched_variant() {
        let mut mixed = window();
        mixed.roots[0].children[1] = picture("C", 2);
        assert!(mixed.has_structure_error());

        let mut unequal_groups = window();
        unequal_groups.roots[0].children[1].children.pop();
        assert!(unequal_groups.has_structure_error());

        let mut mismatch = window();
        mismatch.roots[1].children[1].children.pop();
        assert!(mismatch.has_structure_error());
    }

    #[test]
    fn invalid_ok_is_vetoed_once_with_exact_message() {
        let mut dialog = window();
        dialog.delete_all();
        dialog.request_accept();

        assert_eq!(dialog.modal_result(), Some(ModalResult::Accept));
        assert!(dialog.structure_error());
        assert_eq!(dialog.query_close(), CloseQueryOutcome::Vetoed);
        assert_eq!(dialog.close_message(), Some(STRUCTURE_ERROR_MESSAGE));
        assert!(!dialog.structure_error());
        assert_eq!(dialog.query_close(), CloseQueryOutcome::Allowed);
    }

    #[test]
    fn delete_all_preserves_only_fixed_roots() {
        let mut dialog = window();
        dialog.preview_index = Some(3);

        dialog.delete_all();

        assert_eq!(dialog.roots().len(), FIXED_ROOT_COUNT);
        assert!(dialog.roots().iter().all(|root| root.children.is_empty()));
        assert_eq!(dialog.preview_index(), None);
        assert!(dialog.staged_empty());
    }

    #[test]
    fn extraction_preserves_tree_order_and_clamps_zoom() {
        let extracted = window().extract().expect("valid mapping should extract");

        assert_eq!(extracted.layout.pictures_per_group, 2);
        assert_eq!(extracted.layout.group_count, 2);
        assert!(extracted.layout.has_second_variant);
        assert!(!extracted.layout.has_third_variant);
        assert_eq!(extracted.bitmap.frames[0], frame(0));
        assert_eq!(extracted.bitmap.frames[7], frame(7));
        assert_eq!(
            extracted.names,
            Some(
                ["A", "B", "C", "D", "E", "F", "G", "H"]
                    .map(str::to_owned)
                    .to_vec()
            )
        );
        assert!((extracted.zoom - 1.0).abs() < f32::EPSILON);
    }

    #[test]
    fn extraction_omits_names_when_the_cache_mode_does_not_use_them() {
        let mut dialog = window();
        dialog.names_enabled = false;
        dialog.zoom_text = "2.5".to_owned();

        let extracted = dialog.extract().expect("valid mapping should extract");

        assert_eq!(extracted.names, None);
        assert!((extracted.zoom - 2.5).abs() < f32::EPSILON);
    }

    #[test]
    fn accepted_commit_replaces_state_rebuilds_cache_and_refreshes() {
        let mut state = ComponentBitmapState {
            bitmap: Some(BitmapStrip {
                frame_width: 1,
                height: 1,
                frames: vec![frame(99)],
            }),
            names: Some(vec!["old".to_owned()]),
            ..ComponentBitmapState::default()
        };
        let refreshed = Cell::new(false);

        let accepted = state
            .commit_dialog(&window(), ModalResult::Accept, || refreshed.set(true))
            .expect("accepted mapping should commit");

        assert!(accepted);
        assert!(refreshed.get());
        assert_eq!(state.picture_count, 8);
        assert_eq!(state.name_count, 8);
        assert_eq!(
            state.preview_cache,
            (0_u8..8).map(frame).collect::<Vec<_>>()
        );
        assert!((state.zoom - 1.0).abs() < f32::EPSILON);
    }

    #[test]
    fn cancel_keeps_caller_state_and_does_not_refresh() {
        let mut state = ComponentBitmapState {
            names: Some(vec!["old".to_owned()]),
            zoom: 3.0,
            ..ComponentBitmapState::default()
        };
        let before = state.clone();
        let refreshed = Cell::new(false);

        let accepted = state
            .commit_dialog(&window(), ModalResult::Cancel, || refreshed.set(true))
            .expect("cancel should not extract");

        assert!(!accepted);
        assert_eq!(state, before);
        assert!(!refreshed.get());
    }

    #[test]
    fn failed_accepted_extraction_leaves_old_owned_objects_released() {
        let mut dialog = window();
        dialog.zoom_text = "invalid".to_owned();
        let mut state = ComponentBitmapState {
            bitmap: Some(BitmapStrip {
                frame_width: 1,
                height: 1,
                frames: vec![frame(99)],
            }),
            names: Some(vec!["old".to_owned()]),
            ..ComponentBitmapState::default()
        };

        let error = state
            .commit_dialog(&dialog, ModalResult::Accept, || {})
            .expect_err("invalid zoom should fail after release");

        assert_eq!(error, ExtractionError::InvalidZoom);
        assert_eq!(state.bitmap, None);
        assert_eq!(state.names, None);
    }
}
