//! Iced adapter for the recovered Component Bitmap Manager dialog.
//!
//! The recovered dialog edits a three-variant tree. It commits the rebuilt
//! bitmap strip and optional picture names only after a valid OK result.

use std::fmt;

use iced::widget::{button, column, container, row, text, text_input};
use iced::{Element, Length, Task};

pub const TITLE: &str = "Component Bitmaps";
pub const STRUCTURE_ERROR_MESSAGE: &str = "Structure error!";
pub const FIXED_ROOT_COUNT: usize = 3;

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
    names_enabled: bool,
    zoom_text: String,
    staged_empty: bool,
    structure_error: bool,
    close_message: Option<&'static str>,
    modal_result: Option<ModalResult>,
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
            names_enabled,
            zoom_text: zoom.to_string(),
            staged_empty: false,
            structure_error: false,
            close_message: None,
            modal_result: None,
        }
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::ZoomChanged(value) => self.zoom_text = value,
            Message::DeleteAll => self.delete_all(),
            Message::Accept => self.request_accept(),
            Message::Cancel => self.modal_result = Some(ModalResult::Cancel),
        }
        Task::none()
    }

    /// Removes every staged mapping and keeps the three fixed roots.
    ///
    /// Ports `FUN_017a5390` at `0x017A5390`. The preview selection is cleared
    /// first. The caller-owned bitmap is not changed by this operation.
    pub fn delete_all(&mut self) {
        self.preview_index = None;
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
                text_input("Picture zoom", &self.zoom_text).on_input(Message::ZoomChanged),
                text(message),
                row![
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

fn count_pictures(node: &MappingNode) -> usize {
    usize::from(node.kind == NodeKind::Picture)
        + node.children.iter().map(count_pictures).sum::<usize>()
}

#[cfg(test)]
mod tests {
    use std::cell::Cell;

    use super::*;

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
